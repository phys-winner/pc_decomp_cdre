#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_005EF300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF300u);

L_005EF300:
    PUSH32(esp, ebp); /* 0x005EF300: push ebp */
    ebp = esp; /* 0x005EF301: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EF303: push -1 */
    PUSH32(esp, 0x007B1EC3u); /* 0x005EF305: push 0x7b1ec3 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EF30A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EF310: push eax */
    PUSH32(esp, esi); /* 0x005EF311: push esi */
    eax = MEM32(0x855000); /* 0x005EF312: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EF317: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EF319: push eax */
    eax = ebp + (-0xC); /* 0x005EF31A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EF31D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EF323: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(ebp + 0x8); /* 0x005EF32A: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x48); /* 0x005EF32D: mov eax, dword ptr [esi + 0x48] */
    /* test eax, eax */ /* 0x005EF330: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EF353; /* 0x005EF332: je 0x5ef353 */
L_005EF334:
    PUSH32(esp, eax); /* 0x005EF334: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EF335: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EF33B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x48) = 0; /* 0x005EF33E: mov dword ptr [esi + 0x48], 0 */
    MEM32(esi + 0x4C) = 0; /* 0x005EF345: mov dword ptr [esi + 0x4c], 0 */
    MEM32(esi + 0x50) = 0; /* 0x005EF34C: mov dword ptr [esi + 0x50], 0 */
L_005EF353:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EF353: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = esi; /* 0x005EF35A: mov ecx, esi */
    RECOMP_CALL(sub_00441610); /* 0x005EF35C: call 0x441610 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005EF361: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EF364: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EF36B: pop ecx */
    esi = POP32_VAL(esp); /* 0x005EF36C: pop esi */
    esp = ebp; /* 0x005EF36D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF36F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EF370: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EF380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF380u);

L_005EF380:
    PUSH32(esp, ebp); /* 0x005EF380: push ebp */
    ebp = esp; /* 0x005EF381: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EF383: push -1 */
    PUSH32(esp, 0x007B1EFBu); /* 0x005EF385: push 0x7b1efb */
    eax = MEM32(FS_BASE + (0)); /* 0x005EF38A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EF390: push eax */
    PUSH32(esp, esi); /* 0x005EF391: push esi */
    eax = MEM32(0x855000); /* 0x005EF392: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EF397: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EF399: push eax */
    eax = ebp + (-0xC); /* 0x005EF39A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EF39D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EF3A3: mov dword ptr [ebp - 4], 0xffffffff */
    esi = MEM32(ebp + 0x8); /* 0x005EF3AA: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = esi; /* 0x005EF3AD: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x005EF3B0: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi + 0x48); /* 0x005EF3B7: mov eax, dword ptr [esi + 0x48] */
    /* test eax, eax */ /* 0x005EF3BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EF3DD; /* 0x005EF3BC: je 0x5ef3dd */
L_005EF3BE:
    PUSH32(esp, eax); /* 0x005EF3BE: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EF3BF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EF3C5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x48) = 0; /* 0x005EF3C8: mov dword ptr [esi + 0x48], 0 */
    MEM32(esi + 0x4C) = 0; /* 0x005EF3CF: mov dword ptr [esi + 0x4c], 0 */
    MEM32(esi + 0x50) = 0; /* 0x005EF3D6: mov dword ptr [esi + 0x50], 0 */
L_005EF3DD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EF3DD: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = esi; /* 0x005EF3E4: mov ecx, esi */
    RECOMP_CALL(sub_00441610); /* 0x005EF3E6: call 0x441610 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005EF3EB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EF3EE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EF3F5: pop ecx */
    esi = POP32_VAL(esp); /* 0x005EF3F6: pop esi */
    esp = ebp; /* 0x005EF3F7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF3F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EF3FA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EF400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF400u);

L_005EF400:
    PUSH32(esp, ebp); /* 0x005EF400: push ebp */
    ebp = esp; /* 0x005EF401: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005EF403: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EF406: push ebx */
    PUSH32(esp, esi); /* 0x005EF407: push esi */
    ebx = ecx; /* 0x005EF408: mov ebx, ecx */
    eax = 0x92492493u; /* 0x005EF40A: mov eax, 0x92492493 */
    ecx = MEM32(ebp + 0x8); /* 0x005EF40F: mov ecx, dword ptr [ebp + 8] */
    esi = ecx; /* 0x005EF412: mov esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x005EF414: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x005EF416: mov dword ptr [ebp - 8], ebx */
    PUSH32(esp, edi); /* 0x005EF419: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EF41A: push dword ptr [ebp + 0xc] */
    edi = edx; /* 0x005EF41D: mov edi, edx */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005EF41F: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x4)) = edi; /* 0x005EF421: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005EF424: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EF426: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005EF429: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EF42B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EF42B: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EF42E: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 0x28u */ /* 0x005EF430: cmp eax, 0x28 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_005EF49E; /* 0x005EF433: jle 0x5ef49e */
L_005EF435:
    esi = MEM32(ebp + (-0x8)); /* 0x005EF435: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005EF438: inc eax */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x005EF439: cdq  */
    ecx = esi; /* 0x005EF43A: mov ecx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x005EF43C: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EF43F: add eax, edx */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005EF441: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    ebx = (uint32_t)((int32_t)eax * (int32_t)0xE0u); /* 0x005EF444: imul ebx, eax, 0xe0 */
    edi = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005EF44A: imul edi, eax, 0x70 */
    eax = ebx + esi; /* 0x005EF44D: lea eax, [ebx + esi] */
    edx = edi + esi; /* 0x005EF450: lea edx, [edi + esi] */
    PUSH32(esp, eax); /* 0x005EF453: push eax */
    RECOMP_CALL(sub_005EFB80); /* 0x005EF454: call 0x5efb80 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x005EF459: mov edx, dword ptr [ebp - 4] */
    ecx = edx; /* 0x005EF45C: mov ecx, edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EF45E: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x005EF461: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = edi + edx; /* 0x005EF463: lea eax, [edi + edx] */
    PUSH32(esp, eax); /* 0x005EF466: push eax */
    RECOMP_CALL(sub_005EFB80); /* 0x005EF467: call 0x5efb80 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005EF46C: mov eax, dword ptr [ebp + 8] */
    esi = eax; /* 0x005EF46F: mov esi, eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EF471: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x005EF474: sub esi, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x005EF476: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x005EF477: sub eax, ebx */
    _flag_k = FK_CMP;
    edx = esi; /* 0x005EF479: mov edx, esi */
    ecx = eax; /* 0x005EF47B: mov ecx, eax */
    RECOMP_CALL(sub_005EFB80); /* 0x005EF47D: call 0x5efb80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x005EF482: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EF485: push dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x4)); /* 0x005EF488: mov edx, dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x005EF48B: push esi */
    ecx = edi + ecx; /* 0x005EF48C: lea ecx, [edi + ecx] */
    RECOMP_CALL(sub_005EFB80); /* 0x005EF48F: call 0x5efb80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x005EF494: add esp, 0x20 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005EF497: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF498: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EF499: pop ebx */
    esp = ebp; /* 0x005EF49A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF49C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EF49D: ret  */
L_005EF49E:
    PUSH32(esp, ecx); /* 0x005EF49E: push ecx */
    edx = edi; /* 0x005EF49F: mov edx, edi */
    ecx = ebx; /* 0x005EF4A1: mov ecx, ebx */
    RECOMP_CALL(sub_005EFB80); /* 0x005EF4A3: call 0x5efb80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005EF4A8: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005EF4AB: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF4AC: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EF4AD: pop ebx */
    esp = ebp; /* 0x005EF4AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF4B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EF4B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EF4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF4C0u);

L_005EF4C0:
    PUSH32(esp, ebp); /* 0x005EF4C0: push ebp */
    ebp = esp; /* 0x005EF4C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EF4C3: push -1 */
    PUSH32(esp, 0x007B1F2Bu); /* 0x005EF4C5: push 0x7b1f2b */
    eax = MEM32(FS_BASE + (0)); /* 0x005EF4CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EF4D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x80u; /* 0x005EF4D1: sub esp, 0x80 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005EF4D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EF4DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005EF4DE: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x005EF4E1: push ebx */
    PUSH32(esp, esi); /* 0x005EF4E2: push esi */
    PUSH32(esp, edi); /* 0x005EF4E3: push edi */
    PUSH32(esp, eax); /* 0x005EF4E4: push eax */
    eax = ebp + (-0xC); /* 0x005EF4E5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EF4E8: mov dword ptr fs:[0], eax */
    esi = edx; /* 0x005EF4EE: mov esi, edx */
    ebx = ecx; /* 0x005EF4F0: mov ebx, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x005EF4F2: sub esi, ebx */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005EF4F4: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005EF4F9: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005EF4FB: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EF4FD: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005EF500: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EF502: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EF502: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EF505: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x88)) = eax; /* 0x005EF507: mov dword ptr [ebp - 0x88], eax */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x005EF50D: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005EF50E: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x005EF510: mov esi, eax */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x005EF512: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    /* test esi, esi */ /* 0x005EF514: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_005EF569; /* 0x005EF516: jle 0x5ef569 */
L_005EF518:
    edi = (uint32_t)((int32_t)esi * (int32_t)0x70u); /* 0x005EF518: imul edi, esi, 0x70 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x005EF51B: add edi, ebx */
    _flag_k = FK_ADD;
    ecx = ecx; /* 0x005EF51D: lea ecx, [ecx] */
L_005EF520:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x70u; /* 0x005EF520: sub edi, 0x70 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x84); /* 0x005EF523: lea ecx, [ebp - 0x84] */
    PUSH32(esp, edi); /* 0x005EF529: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x005EF52A: dec esi */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_0054E8F0); /* 0x005EF52B: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EF530: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x84); /* 0x005EF537: lea eax, [ebp - 0x84] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005EF53D: push dword ptr [ebp + 8] */
    edx = esi; /* 0x005EF540: mov edx, esi */
    ecx = ebx; /* 0x005EF542: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005EF544: push eax */
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x005EF545: push dword ptr [ebp - 0x88] */
    RECOMP_CALL(sub_005EFC90); /* 0x005EF54B: call 0x5efc90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EF550: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EF553: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x84); /* 0x005EF55A: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EF560: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x005EF565: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_005EF520; /* 0x005EF567: jg 0x5ef520 */
L_005EF569:
    ecx = MEM32(ebp + (-0xC)); /* 0x005EF569: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EF56C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EF573: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EF574: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF575: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EF576: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005EF577: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005EF57A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005EF57C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005EF581: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF583: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EF584: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EF590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF590u);

L_005EF590:
    PUSH32(esp, ebp); /* 0x005EF590: push ebp */
    ebp = esp; /* 0x005EF591: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EF593: push -1 */
    PUSH32(esp, 0x007B1F6Bu); /* 0x005EF595: push 0x7b1f6b */
    eax = MEM32(FS_BASE + (0)); /* 0x005EF59A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EF5A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x78u; /* 0x005EF5A1: sub esp, 0x78 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005EF5A4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EF5A9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005EF5AB: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x005EF5AE: push ebx */
    PUSH32(esp, esi); /* 0x005EF5AF: push esi */
    PUSH32(esp, edi); /* 0x005EF5B0: push edi */
    PUSH32(esp, eax); /* 0x005EF5B1: push eax */
    eax = ebp + (-0xC); /* 0x005EF5B2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EF5B5: mov dword ptr fs:[0], eax */
    edi = edx; /* 0x005EF5BB: mov edi, edx */
    ebx = ecx; /* 0x005EF5BD: mov ebx, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x005EF5BF: sub edi, ebx */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005EF5C1: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005EF5C6: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x005EF5C8: add edx, edi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EF5CA: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005EF5CD: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EF5CF: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EF5CF: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EF5D2: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x005EF5D4: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_005EF659; /* 0x005EF5D7: jle 0x5ef659 */
L_005EF5DD:
    ecx = ecx; /* 0x005EF5DD: lea ecx, [ecx] */
L_005EF5E0:
    esi = ebx + (-0x70); /* 0x005EF5E0: lea esi, [ebx - 0x70] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x005EF5E3: add esi, edi */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x84); /* 0x005EF5E5: lea ecx, [ebp - 0x84] */
    PUSH32(esp, esi); /* 0x005EF5EB: push esi */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EF5EC: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EF5F1: mov dword ptr [ebp - 4], 0 */
    ecx = esi; /* 0x005EF5F8: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x005EF5FA: push ebx */
    RECOMP_CALL(sub_005EE470); /* 0x005EF5FB: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005EF600: push dword ptr [ebp + 8] */
    eax = ebp + (-0x84); /* 0x005EF603: lea eax, [ebp - 0x84] */
    ecx = ebx; /* 0x005EF609: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005EF60B: push eax */
    esi = edi + (-0x70); /* 0x005EF60C: lea esi, [edi - 0x70] */
    eax = 0x92492493u; /* 0x005EF60F: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005EF614: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005EF616: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EF618: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005EF61B: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EF61D: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EF61D: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EF620: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x005EF622: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EF624: push eax */
    RECOMP_CALL(sub_005EFC90); /* 0x005EF625: call 0x5efc90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EF62A: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EF62D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x84); /* 0x005EF634: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EF63A: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    edi = esi; /* 0x005EF63F: mov edi, esi */
    eax = 0x92492493u; /* 0x005EF641: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005EF646: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x005EF648: add edx, edi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EF64A: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005EF64D: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EF64F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EF64F: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EF652: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x005EF654: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_005EF5E0; /* 0x005EF657: jg 0x5ef5e0 */
L_005EF659:
    ecx = MEM32(ebp + (-0xC)); /* 0x005EF659: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EF65C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EF663: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EF664: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF665: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EF666: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005EF667: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005EF66A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005EF66C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005EF671: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF673: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EF674: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EF680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF680u);

L_005EF680:
    PUSH32(esp, ebp); /* 0x005EF680: push ebp */
    ebp = esp; /* 0x005EF681: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EF683: push -1 */
    PUSH32(esp, 0x007B1FA8u); /* 0x005EF685: push 0x7b1fa8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EF68A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EF690: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x84u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x84u; /* 0x005EF691: sub esp, 0x84 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005EF697: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EF69C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005EF69E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005EF6A1: push ebx */
    PUSH32(esp, esi); /* 0x005EF6A2: push esi */
    PUSH32(esp, edi); /* 0x005EF6A3: push edi */
    PUSH32(esp, eax); /* 0x005EF6A4: push eax */
    eax = ebp + (-0xC); /* 0x005EF6A5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EF6A8: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x8C)) = edx; /* 0x005EF6AE: mov dword ptr [ebp - 0x8c], edx */
    eax = ecx; /* 0x005EF6B4: mov eax, ecx */
    MEM32(ebp + (-0x88)) = eax; /* 0x005EF6B6: mov dword ptr [ebp - 0x88], eax */
    /* cmp eax, edx */ /* 0x005EF6BC: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF793; /* 0x005EF6BE: je 0x5ef793 */
L_005EF6C4:
    edi = eax + 0x70; /* 0x005EF6C4: lea edi, [eax + 0x70] */
    /* cmp edi, edx */ /* 0x005EF6C7: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF793; /* 0x005EF6C9: je 0x5ef793 */
L_005EF6CF:
    esi = edi + (-0x70); /* 0x005EF6CF: lea esi, [edi - 0x70] */
    MEM32(ebp + (-0x84)) = esi; /* 0x005EF6D2: mov dword ptr [ebp - 0x84], esi */
L_005EF6D8:
    PUSH32(esp, edi); /* 0x005EF6D8: push edi */
    ecx = ebp + (-0x80); /* 0x005EF6D9: lea ecx, [ebp - 0x80] */
    ebx = edi; /* 0x005EF6DC: mov ebx, edi */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EF6DE: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EF6E3: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x80); /* 0x005EF6EA: lea eax, [ebp - 0x80] */
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x005EF6ED: push dword ptr [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x005EF6F3: push eax */
    RECOMP_CALL(sub_005E52B0); /* 0x005EF6F4: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EF6F9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EF72B; /* 0x005EF6FB: je 0x5ef72b */
L_005EF6FD:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x005EF6FD: push dword ptr [ebp - 0x8c] */
    ecx = MEM32(ebp + (-0x88)); /* 0x005EF703: mov ecx, dword ptr [ebp - 0x88] */
    eax = esi + 0xE0; /* 0x005EF709: lea eax, [esi + 0xe0] */
    PUSH32(esp, eax); /* 0x005EF70F: push eax */
    edx = edi; /* 0x005EF710: mov edx, edi */
    RECOMP_CALL(sub_005EFE30); /* 0x005EF712: call 0x5efe30 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x88)); /* 0x005EF717: mov ecx, dword ptr [ebp - 0x88] */
    eax = ebp + (-0x80); /* 0x005EF71D: lea eax, [ebp - 0x80] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005EF720: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005EF723: push eax */
    RECOMP_CALL(sub_005EE470); /* 0x005EF724: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    goto L_005EF76C; /* 0x005EF729: jmp 0x5ef76c */
L_005EF72B:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x005EF72B: push dword ptr [ebp - 0x84] */
    eax = ebp + (-0x80); /* 0x005EF731: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x005EF734: push eax */
    RECOMP_CALL(sub_005E52B0); /* 0x005EF735: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EF73A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EF75B; /* 0x005EF73C: je 0x5ef75b */
L_005EF73E:
    edi = edi; /* 0x005EF73E: mov edi, edi */
L_005EF740:
    PUSH32(esp, esi); /* 0x005EF740: push esi */
    ecx = ebx; /* 0x005EF741: mov ecx, ebx */
    RECOMP_CALL(sub_005EE470); /* 0x005EF743: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    ebx = esi; /* 0x005EF748: mov ebx, esi */
    eax = ebp + (-0x80); /* 0x005EF74A: lea eax, [ebp - 0x80] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x70u; /* 0x005EF74D: sub esi, 0x70 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005EF750: push esi */
    PUSH32(esp, eax); /* 0x005EF751: push eax */
    RECOMP_CALL(sub_005E52B0); /* 0x005EF752: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EF757: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EF740; /* 0x005EF759: jne 0x5ef740 */
L_005EF75B:
    eax = ebp + (-0x80); /* 0x005EF75B: lea eax, [ebp - 0x80] */
    ecx = ebx; /* 0x005EF75E: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005EF760: push eax */
    RECOMP_CALL(sub_005EE470); /* 0x005EF761: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x84)); /* 0x005EF766: mov esi, dword ptr [ebp - 0x84] */
L_005EF76C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EF76C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x80); /* 0x005EF773: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EF776: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x70u; /* 0x005EF77B: add edi, 0x70 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EF77E: add esi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x84)) = esi; /* 0x005EF781: mov dword ptr [ebp - 0x84], esi */
    /* cmp edi, MEM32(ebp + (-0x8C)) */ /* 0x005EF787: cmp edi, dword ptr [ebp - 0x8c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF6D8; /* 0x005EF78D: jne 0x5ef6d8 */
L_005EF793:
    ecx = MEM32(ebp + (-0xC)); /* 0x005EF793: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EF796: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EF79D: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EF79E: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF79F: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EF7A0: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005EF7A1: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005EF7A4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005EF7A6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005EF7AB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF7AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EF7AE: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EF7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF7B0u);

L_005EF7B0:
    PUSH32(esp, ebp); /* 0x005EF7B0: push ebp */
    ebp = esp; /* 0x005EF7B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EF7B3: push -1 */
    PUSH32(esp, 0x007B1FD5u); /* 0x005EF7B5: push 0x7b1fd5 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EF7BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EF7C0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005EF7C1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EF7C4: push ebx */
    PUSH32(esp, esi); /* 0x005EF7C5: push esi */
    PUSH32(esp, edi); /* 0x005EF7C6: push edi */
    eax = MEM32(0x855000); /* 0x005EF7C7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EF7CC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EF7CE: push eax */
    eax = ebp + (-0xC); /* 0x005EF7CF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EF7D2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EF7D8: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x005EF7DB: mov ebx, edx */
    edi = ecx; /* 0x005EF7DD: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005EF7DF: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EF7E2: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EF7E5: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x005EF7EC: lea esp, [esp] */
L_005EF7F0:
    /* cmp edi, ebx */ /* 0x005EF7F0: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF816; /* 0x005EF7F2: je 0x5ef816 */
L_005EF7F4:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EF7F4: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005EF7F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EF804; /* 0x005EF7FA: je 0x5ef804 */
L_005EF7FC:
    PUSH32(esp, edi); /* 0x005EF7FC: push edi */
    ecx = esi; /* 0x005EF7FD: mov ecx, esi */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EF7FF: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
L_005EF804:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EF804: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EF808: add esi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x005EF80B: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x70u; /* 0x005EF80E: add edi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = edi; /* 0x005EF811: mov dword ptr [ebp - 0x18], edi */
    RECOMP_BACKEDGE();
    goto L_005EF7F0; /* 0x005EF814: jmp 0x5ef7f0 */
L_005EF816:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EF816: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005EF81D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EF81F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EF822: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EF829: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EF82A: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF82B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EF82C: pop ebx */
    esp = ebp; /* 0x005EF82D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF82F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EF830: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EF831(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF831u);

L_005EF831:
    esi = MEM32(ebp + (-0x14)); /* 0x005EF831: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x005EF834: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x005EF837: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF84E; /* 0x005EF839: je 0x5ef84e */
L_005EF83B:
    goto L_005EF840; /* 0x005EF83B: jmp 0x5ef840 */
L_005EF840:
    ecx = esi; /* 0x005EF840: mov ecx, esi */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EF842: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EF847: add esi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005EF84A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF840; /* 0x005EF84C: jne 0x5ef840 */
L_005EF84E:
    PUSH32(esp, 0); /* 0x005EF84E: push 0 */
    PUSH32(esp, 0); /* 0x005EF850: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EF852: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EF857u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EF860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF860u);

L_005EF860:
    PUSH32(esp, ebp); /* 0x005EF860: push ebp */
    ebp = esp; /* 0x005EF861: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EF863: push -1 */
    PUSH32(esp, 0x007B1FF5u); /* 0x005EF865: push 0x7b1ff5 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EF86A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EF870: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005EF871: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EF874: push ebx */
    PUSH32(esp, esi); /* 0x005EF875: push esi */
    PUSH32(esp, edi); /* 0x005EF876: push edi */
    eax = MEM32(0x855000); /* 0x005EF877: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EF87C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EF87E: push eax */
    eax = ebp + (-0xC); /* 0x005EF87F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EF882: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EF888: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x005EF88B: mov ebx, edx */
    edi = ecx; /* 0x005EF88D: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005EF88F: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EF892: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EF895: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x005EF89C: lea esp, [esp] */
L_005EF8A0:
    /* cmp edi, ebx */ /* 0x005EF8A0: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF8C6; /* 0x005EF8A2: je 0x5ef8c6 */
L_005EF8A4:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EF8A4: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005EF8A8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EF8B4; /* 0x005EF8AA: je 0x5ef8b4 */
L_005EF8AC:
    PUSH32(esp, edi); /* 0x005EF8AC: push edi */
    ecx = esi; /* 0x005EF8AD: mov ecx, esi */
    RECOMP_CALL(sub_005EE6B0); /* 0x005EF8AF: call 0x5ee6b0 */
    RECOMP_FLAGS_IN();
L_005EF8B4:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EF8B4: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x48u; /* 0x005EF8B8: add esi, 0x48 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x005EF8BB: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x48u; /* 0x005EF8BE: add edi, 0x48 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = edi; /* 0x005EF8C1: mov dword ptr [ebp - 0x18], edi */
    RECOMP_BACKEDGE();
    goto L_005EF8A0; /* 0x005EF8C4: jmp 0x5ef8a0 */
L_005EF8C6:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EF8C6: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005EF8CD: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EF8CF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EF8D2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EF8D9: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EF8DA: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF8DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EF8DC: pop ebx */
    esp = ebp; /* 0x005EF8DD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF8DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EF8E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EF8E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF8E1u);

L_005EF8E1:
    esi = MEM32(ebp + (-0x14)); /* 0x005EF8E1: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x005EF8E4: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x005EF8E7: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF8FE; /* 0x005EF8E9: je 0x5ef8fe */
L_005EF8EB:
    goto L_005EF8F0; /* 0x005EF8EB: jmp 0x5ef8f0 */
L_005EF8F0:
    ecx = esi; /* 0x005EF8F0: mov ecx, esi */
    RECOMP_CALL(sub_00441610); /* 0x005EF8F2: call 0x441610 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x48u; /* 0x005EF8F7: add esi, 0x48 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005EF8FA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF8F0; /* 0x005EF8FC: jne 0x5ef8f0 */
L_005EF8FE:
    PUSH32(esp, 0); /* 0x005EF8FE: push 0 */
    PUSH32(esp, 0); /* 0x005EF900: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EF902: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EF907u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EF910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF910u);

L_005EF910:
    PUSH32(esp, ebp); /* 0x005EF910: push ebp */
    ebp = esp; /* 0x005EF911: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EF913: push -1 */
    PUSH32(esp, 0x007B2028u); /* 0x005EF915: push 0x7b2028 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EF91A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EF920: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005EF921: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EF924: push ebx */
    PUSH32(esp, esi); /* 0x005EF925: push esi */
    PUSH32(esp, edi); /* 0x005EF926: push edi */
    eax = MEM32(0x855000); /* 0x005EF927: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EF92C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EF92E: push eax */
    eax = ebp + (-0xC); /* 0x005EF92F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EF932: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EF938: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x005EF93B: mov ebx, edx */
    edi = ecx; /* 0x005EF93D: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005EF93F: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EF942: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EF945: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x005EF94C: lea esp, [esp] */
L_005EF950:
    /* cmp edi, ebx */ /* 0x005EF950: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF99D; /* 0x005EF952: je 0x5ef99d */
L_005EF954:
    MEM32(ebp + (-0x18)) = esi; /* 0x005EF954: mov dword ptr [ebp - 0x18], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EF957: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005EF95B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EF98B; /* 0x005EF95D: je 0x5ef98b */
L_005EF95F:
    PUSH32(esp, edi); /* 0x005EF95F: push edi */
    ecx = esi; /* 0x005EF960: mov ecx, esi */
    RECOMP_CALL(sub_005EE6B0); /* 0x005EF962: call 0x5ee6b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005EF967: mov byte ptr [ebp - 4], 2 */
    eax = edi + 0x48; /* 0x005EF96B: lea eax, [edi + 0x48] */
    PUSH32(esp, eax); /* 0x005EF96E: push eax */
    ecx = esi + 0x48; /* 0x005EF96F: lea ecx, [esi + 0x48] */
    RECOMP_CALL(sub_004E6D70); /* 0x005EF972: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005EF977: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(edi + 0x54); /* 0x005EF97B: mov eax, dword ptr [edi + 0x54] */
    MEM32(esi + 0x54) = eax; /* 0x005EF97E: mov dword ptr [esi + 0x54], eax */
    eax = MEM32(edi + 0x58); /* 0x005EF981: mov eax, dword ptr [edi + 0x58] */
    MEM32(esi + 0x58) = eax; /* 0x005EF984: mov dword ptr [esi + 0x58], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EF987: mov byte ptr [ebp - 4], 1 */
L_005EF98B:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EF98B: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x5Cu; /* 0x005EF98F: add esi, 0x5c */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x005EF992: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x5Cu; /* 0x005EF995: add edi, 0x5c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = edi; /* 0x005EF998: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_BACKEDGE();
    goto L_005EF950; /* 0x005EF99B: jmp 0x5ef950 */
L_005EF99D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EF99D: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005EF9A4: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EF9A6: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EF9A9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EF9B0: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EF9B1: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF9B2: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EF9B3: pop ebx */
    esp = ebp; /* 0x005EF9B4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF9B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EF9B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EF9B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF9B8u);

L_005EF9B8:
    esi = MEM32(ebp + (-0x14)); /* 0x005EF9B8: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x005EF9BB: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x005EF9BE: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF9CF; /* 0x005EF9C0: je 0x5ef9cf */
L_005EF9C2:
    PUSH32(esp, esi); /* 0x005EF9C2: push esi */
    RECOMP_CALL(sub_005EF300); /* 0x005EF9C3: call 0x5ef300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x5Cu; /* 0x005EF9C8: add esi, 0x5c */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005EF9CB: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF9C2; /* 0x005EF9CD: jne 0x5ef9c2 */
L_005EF9CF:
    PUSH32(esp, 0); /* 0x005EF9CF: push 0 */
    PUSH32(esp, 0); /* 0x005EF9D1: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EF9D3: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EF9D8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EF9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF9E0u);

L_005EF9E0:
    PUSH32(esp, ebp); /* 0x005EF9E0: push ebp */
    ebp = esp; /* 0x005EF9E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EF9E3: push -1 */
    PUSH32(esp, 0x007B2070u); /* 0x005EF9E5: push 0x7b2070 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EF9EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EF9F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x005EF9F1: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EF9F4: push ebx */
    PUSH32(esp, esi); /* 0x005EF9F5: push esi */
    PUSH32(esp, edi); /* 0x005EF9F6: push edi */
    eax = MEM32(0x855000); /* 0x005EF9F7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EF9FC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EF9FE: push eax */
    eax = ebp + (-0xC); /* 0x005EF9FF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EFA02: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EFA08: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x005EFA0B: mov ebx, edx */
    edi = ecx; /* 0x005EFA0D: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005EFA0F: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EFA12: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EFA15: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x005EFA1C: lea esp, [esp] */
L_005EFA20:
    /* cmp edi, ebx */ /* 0x005EFA20: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EFA86; /* 0x005EFA22: je 0x5efa86 */
L_005EFA24:
    MEM32(ebp + (-0x18)) = esi; /* 0x005EFA24: mov dword ptr [ebp - 0x18], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EFA27: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005EFA2B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EFA74; /* 0x005EFA2D: je 0x5efa74 */
L_005EFA2F:
    MEM32(ebp + (-0x1C)) = esi; /* 0x005EFA2F: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, edi); /* 0x005EFA32: push edi */
    ecx = esi; /* 0x005EFA33: mov ecx, esi */
    RECOMP_CALL(sub_005EE6B0); /* 0x005EFA35: call 0x5ee6b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005EFA3A: mov byte ptr [ebp - 4], 2 */
    eax = edi + 0x48; /* 0x005EFA3E: lea eax, [edi + 0x48] */
    PUSH32(esp, eax); /* 0x005EFA41: push eax */
    ecx = esi + 0x48; /* 0x005EFA42: lea ecx, [esi + 0x48] */
    RECOMP_CALL(sub_004E6D70); /* 0x005EFA45: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005EFA4A: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(edi + 0x54); /* 0x005EFA4E: mov eax, dword ptr [edi + 0x54] */
    MEM32(esi + 0x54) = eax; /* 0x005EFA51: mov dword ptr [esi + 0x54], eax */
    eax = MEM32(edi + 0x58); /* 0x005EFA54: mov eax, dword ptr [edi + 0x58] */
    MEM32(esi + 0x58) = eax; /* 0x005EFA57: mov dword ptr [esi + 0x58], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005EFA5A: mov byte ptr [ebp - 4], 4 */
    eax = MEM32(edi + 0x60); /* 0x005EFA5E: mov eax, dword ptr [edi + 0x60] */
    ecx = MEM32(edi + 0x64); /* 0x005EFA61: mov ecx, dword ptr [edi + 0x64] */
    MEM32(esi + 0x60) = eax; /* 0x005EFA64: mov dword ptr [esi + 0x60], eax */
    MEM32(esi + 0x64) = ecx; /* 0x005EFA67: mov dword ptr [esi + 0x64], ecx */
    eax = MEM32(edi + 0x68); /* 0x005EFA6A: mov eax, dword ptr [edi + 0x68] */
    MEM32(esi + 0x68) = eax; /* 0x005EFA6D: mov dword ptr [esi + 0x68], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EFA70: mov byte ptr [ebp - 4], 1 */
L_005EFA74:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EFA74: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EFA78: add esi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x005EFA7B: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x70u; /* 0x005EFA7E: add edi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = edi; /* 0x005EFA81: mov dword ptr [ebp - 0x20], edi */
    RECOMP_BACKEDGE();
    goto L_005EFA20; /* 0x005EFA84: jmp 0x5efa20 */
L_005EFA86:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EFA86: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005EFA8D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EFA8F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EFA92: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EFA99: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EFA9A: pop edi */
    esi = POP32_VAL(esp); /* 0x005EFA9B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EFA9C: pop ebx */
    esp = ebp; /* 0x005EFA9D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EFA9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EFAA0: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EFAA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EFAA1u);

L_005EFAA1:
    esi = MEM32(ebp + (-0x14)); /* 0x005EFAA1: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x005EFAA4: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x005EFAA7: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EFABD; /* 0x005EFAA9: je 0x5efabd */
L_005EFAAB:
    goto L_005EFAB0; /* 0x005EFAAB: jmp 0x5efab0 */
L_005EFAB0:
    PUSH32(esp, esi); /* 0x005EFAB0: push esi */
    RECOMP_CALL(sub_005EF380); /* 0x005EFAB1: call 0x5ef380 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EFAB6: add esi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005EFAB9: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EFAB0; /* 0x005EFABB: jne 0x5efab0 */
L_005EFABD:
    PUSH32(esp, 0); /* 0x005EFABD: push 0 */
    PUSH32(esp, 0); /* 0x005EFABF: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EFAC1: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EFAC6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EFAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EFAD0u);

L_005EFAD0:
    PUSH32(esp, ebp); /* 0x005EFAD0: push ebp */
    ebp = esp; /* 0x005EFAD1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EFAD3: push -1 */
    PUSH32(esp, 0x007B2095u); /* 0x005EFAD5: push 0x7b2095 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EFADA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EFAE0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005EFAE1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EFAE4: push ebx */
    PUSH32(esp, esi); /* 0x005EFAE5: push esi */
    PUSH32(esp, edi); /* 0x005EFAE6: push edi */
    eax = MEM32(0x855000); /* 0x005EFAE7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EFAEC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EFAEE: push eax */
    eax = ebp + (-0xC); /* 0x005EFAEF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EFAF2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EFAF8: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x005EFAFB: mov ebx, edx */
    edi = ecx; /* 0x005EFAFD: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005EFAFF: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EFB02: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EFB05: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x005EFB0C: lea esp, [esp] */
L_005EFB10:
    /* cmp edi, ebx */ /* 0x005EFB10: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EFB36; /* 0x005EFB12: je 0x5efb36 */
L_005EFB14:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EFB14: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005EFB18: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EFB24; /* 0x005EFB1A: je 0x5efb24 */
L_005EFB1C:
    PUSH32(esp, edi); /* 0x005EFB1C: push edi */
    ecx = esi; /* 0x005EFB1D: mov ecx, esi */
    RECOMP_CALL(sub_005EE7F0); /* 0x005EFB1F: call 0x5ee7f0 */
    RECOMP_FLAGS_IN();
L_005EFB24:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EFB24: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x38u; /* 0x005EFB28: add esi, 0x38 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x005EFB2B: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x38u; /* 0x005EFB2E: add edi, 0x38 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = edi; /* 0x005EFB31: mov dword ptr [ebp - 0x18], edi */
    RECOMP_BACKEDGE();
    goto L_005EFB10; /* 0x005EFB34: jmp 0x5efb10 */
L_005EFB36:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EFB36: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005EFB3D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EFB3F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EFB42: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EFB49: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EFB4A: pop edi */
    esi = POP32_VAL(esp); /* 0x005EFB4B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EFB4C: pop ebx */
    esp = ebp; /* 0x005EFB4D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EFB4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EFB50: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EFB51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EFB51u);

L_005EFB51:
    esi = MEM32(ebp + (-0x14)); /* 0x005EFB51: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x005EFB54: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x005EFB57: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EFB6E; /* 0x005EFB59: je 0x5efb6e */
L_005EFB5B:
    goto L_005EFB60; /* 0x005EFB5B: jmp 0x5efb60 */
L_005EFB60:
    ecx = esi; /* 0x005EFB60: mov ecx, esi */
    RECOMP_CALL(sub_0051C800); /* 0x005EFB62: call 0x51c800 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x38u; /* 0x005EFB67: add esi, 0x38 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005EFB6A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EFB60; /* 0x005EFB6C: jne 0x5efb60 */
L_005EFB6E:
    PUSH32(esp, 0); /* 0x005EFB6E: push 0 */
    PUSH32(esp, 0); /* 0x005EFB70: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EFB72: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EFB77u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EFB80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EFB80u);

L_005EFB80:
    PUSH32(esp, ebp); /* 0x005EFB80: push ebp */
    ebp = esp; /* 0x005EFB81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EFB83: push -1 */
    PUSH32(esp, 0x007B20C8u); /* 0x005EFB85: push 0x7b20c8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EFB8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EFB90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x005EFB91: sub esp, 0x74 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005EFB94: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EFB99: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005EFB9B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005EFB9E: push ebx */
    PUSH32(esp, esi); /* 0x005EFB9F: push esi */
    PUSH32(esp, edi); /* 0x005EFBA0: push edi */
    PUSH32(esp, eax); /* 0x005EFBA1: push eax */
    eax = ebp + (-0xC); /* 0x005EFBA2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EFBA5: mov dword ptr fs:[0], eax */
    esi = edx; /* 0x005EFBAB: mov esi, edx */
    edi = ecx; /* 0x005EFBAD: mov edi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x005EFBAF: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x005EFBB2: push edi */
    PUSH32(esp, esi); /* 0x005EFBB3: push esi */
    RECOMP_CALL(sub_005E52B0); /* 0x005EFBB4: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EFBB9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EFBEF; /* 0x005EFBBB: je 0x5efbef */
L_005EFBBD:
    PUSH32(esp, esi); /* 0x005EFBBD: push esi */
    ecx = ebp + (-0x80); /* 0x005EFBBE: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EFBC1: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EFBC6: mov dword ptr [ebp - 4], 0 */
    ecx = esi; /* 0x005EFBCD: mov ecx, esi */
    PUSH32(esp, edi); /* 0x005EFBCF: push edi */
    RECOMP_CALL(sub_005EE470); /* 0x005EFBD0: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x005EFBD5: lea eax, [ebp - 0x80] */
    ecx = edi; /* 0x005EFBD8: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005EFBDA: push eax */
    RECOMP_CALL(sub_005EE470); /* 0x005EFBDB: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EFBE0: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x80); /* 0x005EFBE7: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EFBEA: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
L_005EFBEF:
    PUSH32(esp, esi); /* 0x005EFBEF: push esi */
    PUSH32(esp, ebx); /* 0x005EFBF0: push ebx */
    RECOMP_CALL(sub_005E52B0); /* 0x005EFBF1: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EFBF6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EFC69; /* 0x005EFBF8: je 0x5efc69 */
L_005EFBFA:
    PUSH32(esp, ebx); /* 0x005EFBFA: push ebx */
    ecx = ebp + (-0x80); /* 0x005EFBFB: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EFBFE: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005EFC03: mov dword ptr [ebp - 4], 1 */
    ecx = ebx; /* 0x005EFC0A: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005EFC0C: push esi */
    RECOMP_CALL(sub_005EE470); /* 0x005EFC0D: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x005EFC12: lea eax, [ebp - 0x80] */
    ecx = esi; /* 0x005EFC15: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005EFC17: push eax */
    RECOMP_CALL(sub_005EE470); /* 0x005EFC18: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EFC1D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x80); /* 0x005EFC24: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EFC27: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005EFC2C: push edi */
    PUSH32(esp, esi); /* 0x005EFC2D: push esi */
    RECOMP_CALL(sub_005E52B0); /* 0x005EFC2E: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EFC33: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EFC69; /* 0x005EFC35: je 0x5efc69 */
L_005EFC37:
    PUSH32(esp, esi); /* 0x005EFC37: push esi */
    ecx = ebp + (-0x80); /* 0x005EFC38: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EFC3B: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x005EFC40: mov dword ptr [ebp - 4], 2 */
    ecx = esi; /* 0x005EFC47: mov ecx, esi */
    PUSH32(esp, edi); /* 0x005EFC49: push edi */
    RECOMP_CALL(sub_005EE470); /* 0x005EFC4A: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x005EFC4F: lea eax, [ebp - 0x80] */
    ecx = edi; /* 0x005EFC52: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005EFC54: push eax */
    RECOMP_CALL(sub_005EE470); /* 0x005EFC55: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EFC5A: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x80); /* 0x005EFC61: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EFC64: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
L_005EFC69:
    ecx = MEM32(ebp + (-0xC)); /* 0x005EFC69: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EFC6C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EFC73: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EFC74: pop edi */
    esi = POP32_VAL(esp); /* 0x005EFC75: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EFC76: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005EFC77: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005EFC7A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005EFC7C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005EFC81: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EFC83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EFC84: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EFC90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EFC90u);

L_005EFC90:
    PUSH32(esp, ebp); /* 0x005EFC90: push ebp */
    ebp = esp; /* 0x005EFC91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EFC93: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x005EFC96: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x005EFC99: push ebx */
    ebx = edx; /* 0x005EFC9A: mov ebx, edx */
    PUSH32(esp, esi); /* 0x005EFC9C: push esi */
    PUSH32(esp, edi); /* 0x005EFC9D: push edi */
    edi = ecx; /* 0x005EFC9E: mov edi, ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x005EFCA0: mov dword ptr [ebp - 4], ebx */
    esi = ebx * 2 + 0x2; /* 0x005EFCA3: lea esi, [ebx*2 + 2] */
    /* cmp esi, eax */ /* 0x005EFCAA: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_005EFCE4; /* 0x005EFCAC: jge 0x5efce4 */
L_005EFCAE:
    edi = edi; /* 0x005EFCAE: mov edi, edi */
L_005EFCB0:
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x70u); /* 0x005EFCB0: imul ecx, esi, 0x70 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x005EFCB3: add ecx, edi */
    _flag_k = FK_ADD;
    eax = ecx + (-0x70); /* 0x005EFCB5: lea eax, [ecx - 0x70] */
    PUSH32(esp, eax); /* 0x005EFCB8: push eax */
    PUSH32(esp, ecx); /* 0x005EFCB9: push ecx */
    RECOMP_CALL(sub_005E52B0); /* 0x005EFCBA: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EFCBF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EFCC4; /* 0x005EFCC1: je 0x5efcc4 */
L_005EFCC3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x005EFCC3: dec esi */
    _flag_k = FK_DEC;
L_005EFCC4:
    eax = (uint32_t)((int32_t)esi * (int32_t)0x70u); /* 0x005EFCC4: imul eax, esi, 0x70 */
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0x70u); /* 0x005EFCC7: imul ecx, ebx, 0x70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005EFCCA: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005EFCCC: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x005EFCCD: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005EE470); /* 0x005EFCCF: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005EFCD4: mov eax, dword ptr [ebp + 8] */
    ebx = esi; /* 0x005EFCD7: mov ebx, esi */
    esi = esi * 2 + 0x2; /* 0x005EFCD9: lea esi, [esi*2 + 2] */
    /* cmp esi, eax */ /* 0x005EFCE0: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_005EFCB0; /* 0x005EFCE2: jl 0x5efcb0 */
L_005EFCE4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_005EFCFD; /* 0x005EFCE4: jne 0x5efcfd */
L_005EFCE6:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005EFCE6: imul eax, eax, 0x70 */
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0x70u); /* 0x005EFCE9: imul ecx, ebx, 0x70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF90u; /* 0x005EFCEC: add eax, -0x70 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005EFCEF: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x005EFCF1: add ecx, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005EFCF3: push eax */
    RECOMP_CALL(sub_005EE470); /* 0x005EFCF4: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x005EFCF9: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x005EFCFC: dec ebx */
    _flag_k = FK_DEC;
L_005EFCFD:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005EFCFD: push dword ptr [ebp + 0x10] */
    edx = ebx; /* 0x005EFD00: mov edx, ebx */
    ecx = edi; /* 0x005EFD02: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EFD04: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x005EFD07: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_005EFDC0); /* 0x005EFD0A: call 0x5efdc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EFD0F: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005EFD12: pop edi */
    esi = POP32_VAL(esp); /* 0x005EFD13: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EFD14: pop ebx */
    esp = ebp; /* 0x005EFD15: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EFD17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EFD18: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EFD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EFD20u);

L_005EFD20:
    PUSH32(esp, ebp); /* 0x005EFD20: push ebp */
    ebp = esp; /* 0x005EFD21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EFD23: push -1 */
    PUSH32(esp, 0x007B211Bu); /* 0x005EFD25: push 0x7b211b */
    eax = MEM32(FS_BASE + (0)); /* 0x005EFD2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EFD30: push eax */
    eax = MEM32(0x855000); /* 0x005EFD31: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EFD36: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EFD38: push eax */
    eax = ebp + (-0xC); /* 0x005EFD39: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EFD3C: mov dword ptr fs:[0], eax */
    edx = MEM32(ebp + 0x8); /* 0x005EFD42: mov edx, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = edx; /* 0x005EFD45: mov dword ptr [ebp + 8], edx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EFD48: mov dword ptr [ebp - 4], 0 */
    /* test edx, edx */ /* 0x005EFD4F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EFD99; /* 0x005EFD51: je 0x5efd99 */
L_005EFD53:
    eax = MEM32(ebp + 0x10); /* 0x005EFD53: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x005EFD56: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx); /* 0x005EFD58: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x005EFD5A: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x4); /* 0x005EFD5C: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x005EFD5F: mov dword ptr [edx + 4], eax */
    eax = edx + 0x8; /* 0x005EFD62: lea eax, [edx + 8] */
    MEM32(ebp + 0x10) = eax; /* 0x005EFD65: mov dword ptr [ebp + 0x10], eax */
    MEM32(eax) = 0; /* 0x005EFD68: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x005EFD6E: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x005EFD75: mov dword ptr [eax + 8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EFD7C: mov byte ptr [ebp - 4], 1 */
    MEM32(eax + 0xC) = 0; /* 0x005EFD80: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x005EFD87: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x005EFD8E: mov dword ptr [eax + 0x14], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EFD95: mov byte ptr [ebp - 4], 0 */
L_005EFD99:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EFD99: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EFDA0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EFDA3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EFDAA: pop ecx */
    esp = ebp; /* 0x005EFDAB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EFDAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005EFDAE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005EFDC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EFDC0u);

L_005EFDC0:
    PUSH32(esp, ebp); /* 0x005EFDC0: push ebp */
    ebp = esp; /* 0x005EFDC1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EFDC3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EFDC6: push ebx */
    PUSH32(esp, esi); /* 0x005EFDC7: push esi */
    PUSH32(esp, edi); /* 0x005EFDC8: push edi */
    edi = edx; /* 0x005EFDC9: mov edi, edx */
    ebx = ecx; /* 0x005EFDCB: mov ebx, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x005EFDCD: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = edi; /* 0x005EFDD0: mov dword ptr [ebp - 4], edi */
    eax = edi + (-0x1); /* 0x005EFDD3: lea eax, [edi - 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x005EFDD6: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005EFDD7: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x005EFDD9: mov esi, eax */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x005EFDDB: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x005EFDDD: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_005EFE1D; /* 0x005EFDE0: jge 0x5efe1d */
L_005EFDE2:
    edi = (uint32_t)((int32_t)esi * (int32_t)0x70u); /* 0x005EFDE2: imul edi, esi, 0x70 */
    PUSH32(esp, ecx); /* 0x005EFDE5: push ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x005EFDE6: add edi, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x005EFDE8: push edi */
    RECOMP_CALL(sub_005E52B0); /* 0x005EFDE9: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EFDEE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EFE17; /* 0x005EFDF0: je 0x5efe17 */
L_005EFDF2:
    ecx = (uint32_t)((int32_t)MEM32(ebp + (-0x4)) * (int32_t)0x70u); /* 0x005EFDF2: imul ecx, dword ptr [ebp - 4], 0x70 */
    PUSH32(esp, edi); /* 0x005EFDF6: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x005EFDF7: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005EE470); /* 0x005EFDF9: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x005EFDFE: mov ecx, dword ptr [ebp + 0xc] */
    eax = esi + (-0x1); /* 0x005EFE01: lea eax, [esi - 1] */
    edi = esi; /* 0x005EFE04: mov edi, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x005EFE06: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005EFE07: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x005EFE09: mov dword ptr [ebp - 4], edi */
    esi = eax; /* 0x005EFE0C: mov esi, eax */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x005EFE0E: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x005EFE10: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_005EFDE2; /* 0x005EFE13: jl 0x5efde2 */
L_005EFE15:
    goto L_005EFE1A; /* 0x005EFE15: jmp 0x5efe1a */
L_005EFE17:
    edi = MEM32(ebp + (-0x4)); /* 0x005EFE17: mov edi, dword ptr [ebp - 4] */
L_005EFE1A:
    ecx = MEM32(ebp + 0xC); /* 0x005EFE1A: mov ecx, dword ptr [ebp + 0xc] */
L_005EFE1D:
    PUSH32(esp, ecx); /* 0x005EFE1D: push ecx */
    ecx = (uint32_t)((int32_t)edi * (int32_t)0x70u); /* 0x005EFE1E: imul ecx, edi, 0x70 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x005EFE21: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005EE470); /* 0x005EFE23: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005EFE28: pop edi */
    esi = POP32_VAL(esp); /* 0x005EFE29: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EFE2A: pop ebx */
    esp = ebp; /* 0x005EFE2B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EFE2D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EFE2E: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EFE30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EFE30u);

L_005EFE30:
    PUSH32(esp, ebp); /* 0x005EFE30: push ebp */
    ebp = esp; /* 0x005EFE31: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005EFE33: push ecx */
    eax = ecx; /* 0x005EFE34: mov eax, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x005EFE36: mov dword ptr [ebp - 4], eax */
    /* cmp eax, edx */ /* 0x005EFE39: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EFED8; /* 0x005EFE3B: je 0x5efed8 */
L_005EFE41:
    PUSH32(esp, ebx); /* 0x005EFE41: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x005EFE42: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005EFE45: push esi */
    PUSH32(esp, edi); /* 0x005EFE46: push edi */
    esi = edx + 0x20; /* 0x005EFE47: lea esi, [edx + 0x20] */
    edi = ebx + 0x20; /* 0x005EFE4A: lea edi, [ebx + 0x20] */
    ecx = ecx; /* 0x005EFE4D: lea ecx, [ecx] */
L_005EFE50:
    eax = MEM32(esi + (-0x90)); /* 0x005EFE50: mov eax, dword ptr [esi - 0x90] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x70u; /* 0x005EFE56: sub esi, 0x70 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x70u; /* 0x005EFE59: sub ebx, 0x70 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x70u; /* 0x005EFE5C: sub edi, 0x70 */
    _flag_k = FK_CMP;
    ecx = esi + (-0x18); /* 0x005EFE5F: lea ecx, [esi - 0x18] */
    MEM32(ebx) = eax; /* 0x005EFE62: mov dword ptr [ebx], eax */
    eax = MEM32(esi + (-0x1C)); /* 0x005EFE64: mov eax, dword ptr [esi - 0x1c] */
    MEM32(ebx + 0x4) = eax; /* 0x005EFE67: mov dword ptr [ebx + 4], eax */
    eax = edi + (-0x18); /* 0x005EFE6A: lea eax, [edi - 0x18] */
    /* cmp eax, ecx */ /* 0x005EFE6D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EFE81; /* 0x005EFE6F: je 0x5efe81 */
L_005EFE71:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EFE71: push -1 */
    PUSH32(esp, 0); /* 0x005EFE73: push 0 */
    eax = esi + (-0x18); /* 0x005EFE75: lea eax, [esi - 0x18] */
    PUSH32(esp, eax); /* 0x005EFE78: push eax */
    ecx = edi + (-0x18); /* 0x005EFE79: lea ecx, [edi - 0x18] */
    RECOMP_CALL(sub_0040A030); /* 0x005EFE7C: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EFE81:
    /* cmp edi, esi */ /* 0x005EFE81: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EFE91; /* 0x005EFE83: je 0x5efe91 */
L_005EFE85:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EFE85: push -1 */
    PUSH32(esp, 0); /* 0x005EFE87: push 0 */
    PUSH32(esp, esi); /* 0x005EFE89: push esi */
    ecx = edi; /* 0x005EFE8A: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005EFE8C: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EFE91:
    eax = esi + 0x18; /* 0x005EFE91: lea eax, [esi + 0x18] */
    ecx = edi + 0x18; /* 0x005EFE94: lea ecx, [edi + 0x18] */
    /* cmp ecx, eax */ /* 0x005EFE97: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EFEA5; /* 0x005EFE99: je 0x5efea5 */
L_005EFE9B:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EFE9B: push -1 */
    PUSH32(esp, 0); /* 0x005EFE9D: push 0 */
    PUSH32(esp, eax); /* 0x005EFE9F: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EFEA0: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EFEA5:
    eax = esi + 0x30; /* 0x005EFEA5: lea eax, [esi + 0x30] */
    ecx = edi + 0x30; /* 0x005EFEA8: lea ecx, [edi + 0x30] */
    /* cmp ecx, eax */ /* 0x005EFEAB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EFEB9; /* 0x005EFEAD: je 0x5efeb9 */
L_005EFEAF:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EFEAF: push -1 */
    PUSH32(esp, 0); /* 0x005EFEB1: push 0 */
    PUSH32(esp, eax); /* 0x005EFEB3: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EFEB4: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EFEB9:
    SET_LO16(ecx, MEM16(esi + 0x48)); /* 0x005EFEB9: mov cx, word ptr [esi + 0x48] */
    MEM16(edi + 0x48) = (uint16_t)(LO16(ecx)); /* 0x005EFEBD: mov word ptr [edi + 0x48], cx */
    ecx = MEM32(esi + 0x4C); /* 0x005EFEC1: mov ecx, dword ptr [esi + 0x4c] */
    MEM32(edi + 0x4C) = ecx; /* 0x005EFEC4: mov dword ptr [edi + 0x4c], ecx */
    ecx = esi + (-0x20); /* 0x005EFEC7: lea ecx, [esi - 0x20] */
    /* cmp ecx, MEM32(ebp + (-0x4)) */ /* 0x005EFECA: cmp ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EFE50; /* 0x005EFECD: jne 0x5efe50 */
L_005EFECF:
    edi = POP32_VAL(esp); /* 0x005EFECF: pop edi */
    esi = POP32_VAL(esp); /* 0x005EFED0: pop esi */
    eax = ebx; /* 0x005EFED1: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x005EFED3: pop ebx */
    esp = ebp; /* 0x005EFED4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EFED6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EFED7: ret  */
L_005EFED8:
    eax = MEM32(ebp + 0x8); /* 0x005EFED8: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x005EFEDB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EFEDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EFEDE: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EFEDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EFEDFu);

    goto L_005EFEDF;
L_005EC260:
    PUSH32(esp, ebp); /* 0x005EC260: push ebp */
    ebp = esp; /* 0x005EC261: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EC263: push -1 */
    PUSH32(esp, 0x007B18A7u); /* 0x005EC265: push 0x7b18a7 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EC26A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EC270: push eax */
    PUSH32(esp, ecx); /* 0x005EC271: push ecx */
    PUSH32(esp, esi); /* 0x005EC272: push esi */
    PUSH32(esp, edi); /* 0x005EC273: push edi */
    eax = MEM32(0x855000); /* 0x005EC274: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EC279: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EC27B: push eax */
    eax = ebp + (-0xC); /* 0x005EC27C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EC27F: mov dword ptr fs:[0], eax */
    edi = ecx + (-0x78); /* 0x005EC285: lea edi, [ecx - 0x78] */
    eax = MEM32(edi); /* 0x005EC288: mov eax, dword ptr [edi] */
    esi = edi + 0x78; /* 0x005EC28A: lea esi, [edi + 0x78] */
    MEM32(ebp + (-0x10)) = esi; /* 0x005EC28D: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(eax + 0x4); /* 0x005EC290: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + (-0x78)) = 0x007F686Cu; /* 0x005EC293: mov dword ptr [eax + esi - 0x78], 0x7f686c */
    eax = MEM32(esi + (-0x78)); /* 0x005EC29B: mov eax, dword ptr [esi - 0x78] */
    ecx = MEM32(eax + 0x4); /* 0x005EC29E: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x78); /* 0x005EC2A1: lea eax, [ecx - 0x78] */
    MEM32(ecx + esi + (-0x7C)) = eax; /* 0x005EC2A4: mov dword ptr [ecx + esi - 0x7c], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EC2A8: mov dword ptr [ebp - 4], 0 */
    ecx = esi + (-0x60); /* 0x005EC2AF: lea ecx, [esi - 0x60] */
    RECOMP_CALL(sub_0053BD90); /* 0x005EC2B2: call 0x53bd90 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EC2B7: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = esi + (-0x58); /* 0x005EC2BE: lea ecx, [esi - 0x58] */
    RECOMP_ICALL(MEM32(0x7CC434)); /* 0x005EC2C1: call dword ptr [0x7cc434] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x005EC2C7: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x7CC3F4)); /* 0x005EC2C9: call dword ptr [0x7cc3f4] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x005EC2CF: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC2DF; /* 0x005EC2D3: je 0x5ec2df */
L_005EC2D5:
    PUSH32(esp, edi); /* 0x005EC2D5: push edi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EC2D6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC2DC: add esp, 4 */
    _flag_k = FK_ADD;
L_005EC2DF:
    eax = edi; /* 0x005EC2DF: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EC2E1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EC2E4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EC2EB: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EC2EC: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC2ED: pop esi */
    esp = ebp; /* 0x005EC2EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC2F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EC2F1: ret 4 */
L_005EFEDF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ecx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ecx + (-0x4)); /* 0x005EFEDF: sub ecx, dword ptr [ecx - 4] */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_005EC260; /* 0x005EFEE2: jmp 0x5ec260 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EFEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EFEF0u);

L_005EFEF0:
    PUSH32(esp, ebp); /* 0x005EFEF0: push ebp */
    ebp = esp; /* 0x005EFEF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EFEF3: push -1 */
    PUSH32(esp, 0x007B2148u); /* 0x005EFEF5: push 0x7b2148 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EFEFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EFF00: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EFF01: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EFF04: push ebx */
    PUSH32(esp, esi); /* 0x005EFF05: push esi */
    PUSH32(esp, edi); /* 0x005EFF06: push edi */
    eax = MEM32(0x855000); /* 0x005EFF07: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EFF0C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EFF0E: push eax */
    eax = ebp + (-0xC); /* 0x005EFF0F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EFF12: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EFF18: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EFF1A: mov dword ptr [ebp - 0x14], esi */
    RECOMP_CALL(sub_005F3C60); /* 0x005EFF1D: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EFF22: mov dword ptr [ebp - 4], 0 */
    /* test MEM8(esi + 0xC), 7 */ /* 0x005EFF29: test byte ptr [esi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x10)) = 0x259u; /* 0x005EFF2D: mov dword ptr [ebp - 0x10], 0x259 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EFF57; /* 0x005EFF34: jne 0x5eff57 */
L_005EFF36:
    PUSH32(esp, 0x20u); /* 0x005EFF36: push 0x20 */
    ecx = esi; /* 0x005EFF38: mov ecx, esi */
    RECOMP_CALL(sub_005F3D70); /* 0x005EFF3A: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x005EFF3F: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005EFF42: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005EFF45: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005EFF45: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x14); /* 0x005EFF48: add eax, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x259u; /* 0x005EFF4B: mov dword ptr [eax], 0x259 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 0x20u; /* 0x005EFF51: add dword ptr [esi + 0xc], 0x20 */
    _flag_k = FK_ADD;
    goto L_005EFF65; /* 0x005EFF55: jmp 0x5eff65 */
L_005EFF57:
    PUSH32(esp, ecx); /* 0x005EFF57: push ecx */
    PUSH32(esp, 0x20u); /* 0x005EFF58: push 0x20 */
    eax = ebp + (-0x10); /* 0x005EFF5A: lea eax, [ebp - 0x10] */
    ecx = esi; /* 0x005EFF5D: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005EFF5F: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005EFF60: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005EFF65:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005EFF65: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x005EFF68: mov ecx, esi */
    RECOMP_CALL(sub_005F4D80); /* 0x005EFF6A: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x005EFF6F: mov ebx, dword ptr [ebp + 0xc] */
    edi = eax; /* 0x005EFF72: mov edi, eax */
    MEM32(ebp + 0x8) = ebx; /* 0x005EFF74: mov dword ptr [ebp + 8], ebx */
    /* test MEM8(edi + 0xC), 7 */ /* 0x005EFF77: test byte ptr [edi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EFF9A; /* 0x005EFF7B: jne 0x5eff9a */
L_005EFF7D:
    PUSH32(esp, 0x20u); /* 0x005EFF7D: push 0x20 */
    ecx = edi; /* 0x005EFF7F: mov ecx, edi */
    RECOMP_CALL(sub_005F3D70); /* 0x005EFF81: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xC); /* 0x005EFF86: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005EFF89: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005EFF8C: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005EFF8C: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x14); /* 0x005EFF8F: add eax, dword ptr [edi + 0x14] */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x005EFF92: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 0x20u; /* 0x005EFF94: add dword ptr [edi + 0xc], 0x20 */
    _flag_k = FK_ADD;
    goto L_005EFFA8; /* 0x005EFF98: jmp 0x5effa8 */
L_005EFF9A:
    PUSH32(esp, ecx); /* 0x005EFF9A: push ecx */
    PUSH32(esp, 0x20u); /* 0x005EFF9B: push 0x20 */
    eax = ebp + 0x8; /* 0x005EFF9D: lea eax, [ebp + 8] */
    ecx = edi; /* 0x005EFFA0: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005EFFA2: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005EFFA3: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005EFFA8:
    /* test ebx, ebx */ /* 0x005EFFA8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EFFB7; /* 0x005EFFAA: je 0x5effb7 */
L_005EFFAC:
    PUSH32(esp, ebx); /* 0x005EFFAC: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005EFFAD: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x005EFFB0: mov ecx, edi */
    RECOMP_CALL(sub_005F5730); /* 0x005EFFB2: call 0x5f5730 */
    RECOMP_FLAGS_IN();
L_005EFFB7:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EFFB7: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005EFFBE: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EFFC0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EFFC3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EFFCA: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EFFCB: pop edi */
    esi = POP32_VAL(esp); /* 0x005EFFCC: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EFFCD: pop ebx */
    esp = ebp; /* 0x005EFFCE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EFFD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005EFFD1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005EFFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EFFE0u);

L_005EFFE0:
    PUSH32(esp, ebp); /* 0x005EFFE0: push ebp */
    ebp = esp; /* 0x005EFFE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005EFFE3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EFFE6: push -1 */
    PUSH32(esp, 0x007B2188u); /* 0x005EFFE8: push 0x7b2188 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EFFED: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EFFF3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x005EFFF4: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EFFF7: push ebx */
    PUSH32(esp, esi); /* 0x005EFFF8: push esi */
    PUSH32(esp, edi); /* 0x005EFFF9: push edi */
    eax = MEM32(0x855000); /* 0x005EFFFA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005EFFFF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F0001: push eax */
    eax = esp + 0x40; /* 0x005F0002: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F0006: mov dword ptr fs:[0], eax */
    ecx = MEM32(ebp + 0x8); /* 0x005F000C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005F000F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005F0012: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x005F0015: mov eax, dword ptr [ecx] */
    MEM32(esp + 0x1C) = eax; /* 0x005F0017: mov dword ptr [esp + 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x005F001B: mov eax, dword ptr [ecx + 4] */
    ecx = esp + 0x24; /* 0x005F001E: lea ecx, [esp + 0x24] */
    MEM32(esp + 0x20) = eax; /* 0x005F0022: mov dword ptr [esp + 0x20], eax */
    eax = esp + 0x1C; /* 0x005F0026: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005F002A: push eax */
    RECOMP_CALL(sub_005EFEF0); /* 0x005F002B: call 0x5efef0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0; /* 0x005F0030: mov dword ptr [esp + 0x48], 0 */
    esi = MEM32(esp + 0x28); /* 0x005F0038: mov esi, dword ptr [esp + 0x28] */
    edi = MEM32(esp + 0x30); /* 0x005F003C: mov edi, dword ptr [esp + 0x30] */
    esi = esi + 0x7; /* 0x005F0040: lea esi, [esi + 7] */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x005F0043: shr esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 3u; /* 0x005F0043: shr esi, 3 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005F0046: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F004C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0054; /* 0x005F004E: jne 0x5f0054 */
L_005F0050:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F0050: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F006E; /* 0x005F0052: jmp 0x5f006e */
L_005F0054:
    ecx = MEM32(0x927B08); /* 0x005F0054: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005F005A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F006E; /* 0x005F005C: jne 0x5f006e */
L_005F005E:
    ecx = 0x00927AE8u; /* 0x005F005E: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F0063: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005F0068: mov ecx, dword ptr [0x927b08] */
L_005F006E:
    eax = MEM32(ebp + 0xC); /* 0x005F006E: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x005F0071: mov edx, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x005F0073: push 0 */
    PUSH32(esp, 2); /* 0x005F0075: push 2 */
    PUSH32(esp, esi); /* 0x005F0077: push esi */
    PUSH32(esp, edi); /* 0x005F0078: push edi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005F0079: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x005F007C: push dword ptr [eax] */
    eax = MEM32(edx); /* 0x005F007E: mov eax, dword ptr [edx] */
    RECOMP_ICALL(eax); /* 0x005F0080: call eax */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x005F0082: mov bl, al */
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x005F0084: mov dword ptr [esp + 0x48], 0xffffffff */
    eax = MEM32(esp + 0x30); /* 0x005F008C: mov eax, dword ptr [esp + 0x30] */
    /* test eax, eax */ /* 0x005F0090: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F00B6; /* 0x005F0092: je 0x5f00b6 */
L_005F0094:
    PUSH32(esp, eax); /* 0x005F0094: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F0095: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F009B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x30) = 0; /* 0x005F009E: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x005F00A6: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005F00AE: mov dword ptr [esp + 0x38], 0 */
L_005F00B6:
    SET_LO8(eax, LO8(ebx)); /* 0x005F00B6: mov al, bl */
    ecx = MEM32(esp + 0x40); /* 0x005F00B8: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F00BC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F00C3: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F00C4: pop edi */
    esi = POP32_VAL(esp); /* 0x005F00C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F00C6: pop ebx */
    esp = ebp; /* 0x005F00C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F00C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005F00CA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005F00D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F00D0u);

L_005F00D0:
    PUSH32(esp, ebp); /* 0x005F00D0: push ebp */
    ebp = esp; /* 0x005F00D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F00D3: push -1 */
    PUSH32(esp, 0x007B21C3u); /* 0x005F00D5: push 0x7b21c3 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F00DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F00E0: push eax */
    PUSH32(esp, ecx); /* 0x005F00E1: push ecx */
    PUSH32(esp, esi); /* 0x005F00E2: push esi */
    eax = MEM32(0x855000); /* 0x005F00E3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F00E8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F00EA: push eax */
    eax = ebp + (-0xC); /* 0x005F00EB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F00EE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F00F4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005F00F6: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F00F9: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(esi + 0x14); /* 0x005F0100: mov eax, dword ptr [esi + 0x14] */
    /* test eax, eax */ /* 0x005F0103: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0126; /* 0x005F0105: je 0x5f0126 */
L_005F0107:
    PUSH32(esp, eax); /* 0x005F0107: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F0108: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F010E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = 0; /* 0x005F0111: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x18) = 0; /* 0x005F0118: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x005F011F: mov dword ptr [esi + 0x1c], 0 */
L_005F0126:
    ecx = MEM32(ebp + (-0xC)); /* 0x005F0126: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F0129: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F0130: pop ecx */
    esi = POP32_VAL(esp); /* 0x005F0131: pop esi */
    esp = ebp; /* 0x005F0132: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F0134: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F0135: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F0140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F0140u);

L_005F0140:
    PUSH32(esp, ebp); /* 0x005F0140: push ebp */
    ebp = esp; /* 0x005F0141: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F0143: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005F0146: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F0149: push ebx */
    PUSH32(esp, esi); /* 0x005F014A: push esi */
    esi = MEM32(0x7CC9AC); /* 0x005F014B: mov esi, dword ptr [0x7cc9ac] */
    PUSH32(esp, edi); /* 0x005F0151: push edi */
    edi = ecx; /* 0x005F0152: mov edi, ecx */
    /* cmp MEM32(edi + 0x2C), 0 */ /* 0x005F0154: cmp dword ptr [edi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = edi + 0x2C; /* 0x005F0158: lea ebx, [edi + 0x2c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F0196; /* 0x005F015B: jne 0x5f0196 */
L_005F015D:
    RECOMP_ICALL(esi); /* 0x005F015D: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F015F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0167; /* 0x005F0161: jne 0x5f0167 */
L_005F0163:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F0163: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F0181; /* 0x005F0165: jmp 0x5f0181 */
L_005F0167:
    ecx = MEM32(0x927AEC); /* 0x005F0167: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005F016D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0181; /* 0x005F016F: jne 0x5f0181 */
L_005F0171:
    ecx = 0x00927AE8u; /* 0x005F0171: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F0176: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005F017B: mov ecx, dword ptr [0x927aec] */
L_005F0181:
    edx = MEM32(ecx); /* 0x005F0181: mov edx, dword ptr [ecx] */
    eax = edi + 0x30; /* 0x005F0183: lea eax, [edi + 0x30] */
    PUSH32(esp, ebx); /* 0x005F0186: push ebx */
    PUSH32(esp, 0x400u); /* 0x005F0187: push 0x400 */
    PUSH32(esp, eax); /* 0x005F018C: push eax */
    RECOMP_ICALL(MEM32(edx + 0x34)); /* 0x005F018D: call dword ptr [edx + 0x34] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x834) = eax; /* 0x005F0190: mov dword ptr [edi + 0x834], eax */
L_005F0196:
    RECOMP_ICALL(esi); /* 0x005F0196: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F0198: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F01A0; /* 0x005F019A: jne 0x5f01a0 */
L_005F019C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F019C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F01BA; /* 0x005F019E: jmp 0x5f01ba */
L_005F01A0:
    ecx = MEM32(0x927AEC); /* 0x005F01A0: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005F01A6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F01BA; /* 0x005F01A8: jne 0x5f01ba */
L_005F01AA:
    ecx = 0x00927AE8u; /* 0x005F01AA: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F01AF: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005F01B4: mov ecx, dword ptr [0x927aec] */
L_005F01BA:
    eax = edi + 0x30; /* 0x005F01BA: lea eax, [edi + 0x30] */
    PUSH32(esp, eax); /* 0x005F01BD: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x005F01BE: push dword ptr [ebx] */
    eax = edi + 0x14; /* 0x005F01C0: lea eax, [edi + 0x14] */
    PUSH32(esp, eax); /* 0x005F01C3: push eax */
    eax = MEM32(ecx); /* 0x005F01C4: mov eax, dword ptr [ecx] */
    edx = esp + 0x1C; /* 0x005F01C6: lea edx, [esp + 0x1c] */
    PUSH32(esp, edx); /* 0x005F01CA: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005F01CB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005F01CE: push eax */
    RECOMP_CALL(sub_005EFFE0); /* 0x005F01CF: call 0x5effe0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x870278); /* 0x005F01D4: mov esi, dword ptr [0x870278] */
    MEM8(edi + 0x1C) = (uint8_t)(LO8(eax)); /* 0x005F01DA: mov byte ptr [edi + 0x1c], al */
    RECOMP_CALL(sub_006EE000); /* 0x005F01DD: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005F01E2: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x24) = eax; /* 0x005F01E4: mov dword ptr [edi + 0x24], eax */
    edi = POP32_VAL(esp); /* 0x005F01E7: pop edi */
    esi = POP32_VAL(esp); /* 0x005F01E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F01E9: pop ebx */
    esp = ebp; /* 0x005F01EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F01EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F01ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F01F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F01F0u);

L_005F01F0:
    PUSH32(esp, ebp); /* 0x005F01F0: push ebp */
    ebp = esp; /* 0x005F01F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F01F3: push -1 */
    PUSH32(esp, 0x007B21F0u); /* 0x005F01F5: push 0x7b21f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F01FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F0200: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005F0201: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F0204: push ebx */
    PUSH32(esp, esi); /* 0x005F0205: push esi */
    PUSH32(esp, edi); /* 0x005F0206: push edi */
    eax = MEM32(0x855000); /* 0x005F0207: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F020C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F020E: push eax */
    eax = ebp + (-0xC); /* 0x005F020F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F0212: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005F0218: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F021A: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x8), 0x259u */ /* 0x005F0221: cmp dword ptr [ebp + 8], 0x259 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x259u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F02ED; /* 0x005F0228: jne 0x5f02ed */
L_005F022E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFF0FFFFFu; /* 0x005F022E: and dword ptr [ebp - 0x10], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x14); /* 0x005F0235: lea eax, [ebp - 0x14] */
    MEM8(ebp + (-0xD)) = (uint8_t)(0); /* 0x005F0238: mov byte ptr [ebp - 0xd], 0 */
    ecx = ebp + 0xC; /* 0x005F023C: lea ecx, [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFF00000u; /* 0x005F023F: and dword ptr [ebp - 0x10], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F0246: push eax */
    MEM32(ebp + (-0x14)) = 0; /* 0x005F0247: mov dword ptr [ebp - 0x14], 0 */
    RECOMP_CALL(sub_005F4AC0); /* 0x005F024E: call 0x5f4ac0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x005F0253: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(edi + 0x14) */ /* 0x005F0256: cmp eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F02ED; /* 0x005F0259: jne 0x5f02ed */
L_005F025F:
    eax = MEM32(ebp + (-0x10)); /* 0x005F025F: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(edi + 0x18) */ /* 0x005F0262: cmp eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F02ED; /* 0x005F0265: jne 0x5f02ed */
L_005F026B:
    ebx = edi + 0x430; /* 0x005F026B: lea ebx, [edi + 0x430] */
    PUSH32(esp, ebx); /* 0x005F0271: push ebx */
    ecx = ebp + 0xC; /* 0x005F0272: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F5260); /* 0x005F0275: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F027A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx), esi */ /* 0x005F027C: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F0296; /* 0x005F027E: jbe 0x5f0296 */
L_005F0280:
    eax = edi + 0x434; /* 0x005F0280: lea eax, [edi + 0x434] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005F0286: add eax, esi */
    _flag_k = FK_ADD;
    ecx = ebp + 0xC; /* 0x005F0288: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x005F028B: push eax */
    RECOMP_CALL(sub_005F50A0); /* 0x005F028C: call 0x5f50a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005F0291: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx) */ /* 0x005F0292: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F0280; /* 0x005F0294: jb 0x5f0280 */
L_005F0296:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005F0296: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F029C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F02A4; /* 0x005F029E: jne 0x5f02a4 */
L_005F02A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F02A0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F02BE; /* 0x005F02A2: jmp 0x5f02be */
L_005F02A4:
    ecx = MEM32(0x927AEC); /* 0x005F02A4: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005F02AA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F02BE; /* 0x005F02AC: jne 0x5f02be */
L_005F02AE:
    ecx = 0x00927AE8u; /* 0x005F02AE: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F02B3: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005F02B8: mov ecx, dword ptr [0x927aec] */
L_005F02BE:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x005F02BE: push dword ptr [edi + 0x18] */
    edx = MEM32(ecx); /* 0x005F02C1: mov edx, dword ptr [ecx] */
    eax = edi + 0x434; /* 0x005F02C3: lea eax, [edi + 0x434] */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x005F02C9: push dword ptr [edi + 0x14] */
    PUSH32(esp, MEM32(ebx)); /* 0x005F02CC: push dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x005F02CE: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x005F02CF: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0x1C), 0 */ /* 0x005F02D2: cmp byte ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(edi + 0x838) = eax; /* 0x005F02D6: mov dword ptr [edi + 0x838], eax */
    MEM8(edi + 0x1D) = (uint8_t)(1); /* 0x005F02DC: mov byte ptr [edi + 0x1d], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F02E9; /* 0x005F02E0: jne 0x5f02e9 */
L_005F02E2:
    ecx = edi; /* 0x005F02E2: mov ecx, edi */
    RECOMP_CALL(sub_005F0140); /* 0x005F02E4: call 0x5f0140 */
    RECOMP_FLAGS_IN();
L_005F02E9:
    SET_LO8(ebx, 1); /* 0x005F02E9: mov bl, 1 */
    goto L_005F02EF; /* 0x005F02EB: jmp 0x5f02ef */
L_005F02ED:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005F02ED: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_005F02EF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F02EF: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + 0x20); /* 0x005F02F6: mov eax, dword ptr [ebp + 0x20] */
    /* test eax, eax */ /* 0x005F02F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F031C; /* 0x005F02FB: je 0x5f031c */
L_005F02FD:
    PUSH32(esp, eax); /* 0x005F02FD: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F02FE: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F0304: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x20) = 0; /* 0x005F0307: mov dword ptr [ebp + 0x20], 0 */
    MEM32(ebp + 0x24) = 0; /* 0x005F030E: mov dword ptr [ebp + 0x24], 0 */
    MEM32(ebp + 0x28) = 0; /* 0x005F0315: mov dword ptr [ebp + 0x28], 0 */
L_005F031C:
    SET_LO8(eax, LO8(ebx)); /* 0x005F031C: mov al, bl */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F031E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F0321: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F0328: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F0329: pop edi */
    esi = POP32_VAL(esp); /* 0x005F032A: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F032B: pop ebx */
    esp = ebp; /* 0x005F032C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F032E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x005F032F: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_005F0340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F0340u);

L_005F0340:
    PUSH32(esp, ebx); /* 0x005F0340: push ebx */
    ebx = ecx; /* 0x005F0341: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x005F0343: push esi */
    PUSH32(esp, edi); /* 0x005F0344: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005F0345: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x4); /* 0x005F0347: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx); /* 0x005F034A: sub eax, dword ptr [ebx] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005F034C: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x005F034F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F047C; /* 0x005F0351: je 0x5f047c */
L_005F0357:
    ecx = MEM32(0x7CC9AC); /* 0x005F0357: mov ecx, dword ptr [0x7cc9ac] */
    ecx = ecx; /* 0x005F035D: lea ecx, [ecx] */
L_005F0360:
    eax = MEM32(ebx); /* 0x005F0360: mov eax, dword ptr [ebx] */
    esi = MEM32(eax + edi * 4); /* 0x005F0362: mov esi, dword ptr [eax + edi*4] */
    /* cmp MEM8(esi + 0x1C), 0 */ /* 0x005F0365: cmp byte ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F03A4; /* 0x005F0369: je 0x5f03a4 */
L_005F036B:
    RECOMP_ICALL(ecx); /* 0x005F036B: call ecx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F036D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0375; /* 0x005F036F: jne 0x5f0375 */
L_005F0371:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F0371: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F038F; /* 0x005F0373: jmp 0x5f038f */
L_005F0375:
    ecx = MEM32(0x927AEC); /* 0x005F0375: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005F037B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F038F; /* 0x005F037D: jne 0x5f038f */
L_005F037F:
    ecx = 0x00927AE8u; /* 0x005F037F: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F0384: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005F0389: mov ecx, dword ptr [0x927aec] */
L_005F038F:
    eax = MEM32(ecx); /* 0x005F038F: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(esi + 0x834)); /* 0x005F0391: push dword ptr [esi + 0x834] */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x005F0397: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x7CC9AC); /* 0x005F039A: mov ecx, dword ptr [0x7cc9ac] */
    MEM8(esi + 0x1C) = (uint8_t)(0); /* 0x005F03A0: mov byte ptr [esi + 0x1c], 0 */
L_005F03A4:
    /* cmp MEM8(esi + 0x1D), 0 */ /* 0x005F03A4: cmp byte ptr [esi + 0x1d], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1D)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F03DD; /* 0x005F03A8: je 0x5f03dd */
L_005F03AA:
    RECOMP_ICALL(ecx); /* 0x005F03AA: call ecx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F03AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F03B4; /* 0x005F03AE: jne 0x5f03b4 */
L_005F03B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F03B0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F03CE; /* 0x005F03B2: jmp 0x5f03ce */
L_005F03B4:
    ecx = MEM32(0x927AEC); /* 0x005F03B4: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x005F03BA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F03CE; /* 0x005F03BC: jne 0x5f03ce */
L_005F03BE:
    ecx = 0x00927AE8u; /* 0x005F03BE: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F03C3: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x005F03C8: mov ecx, dword ptr [0x927aec] */
L_005F03CE:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x005F03CE: push dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x005F03D1: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x005F03D3: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x005F03D6: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x1D) = (uint8_t)(0); /* 0x005F03D9: mov byte ptr [esi + 0x1d], 0 */
L_005F03DD:
    edx = MEM32(esi + 0x18); /* 0x005F03DD: mov edx, dword ptr [esi + 0x18] */
    ecx = edx; /* 0x005F03E0: mov ecx, edx */
    if (20u) _cf = (((ecx) >> 19) & 1u); /* 0x005F03E2: shr ecx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((ecx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 20u; /* 0x005F03E2: shr ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x005F03E5: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0465; /* 0x005F03E8: jbe 0x5f0465 */
L_005F03EA:
    /* cmp ecx, 0xBu */ /* 0x005F03EA: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F0465; /* 0x005F03ED: jae 0x5f0465 */
L_005F03EF:
    eax = edx; /* 0x005F03EF: mov eax, edx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x005F03F1: sar eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 24u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 24u);
    /* test eax, eax */ /* 0x005F03F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_005F0465; /* 0x005F03F6: jle 0x5f0465 */
L_005F03F8:
    /* cmp eax, 5 */ /* 0x005F03F8: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_005F0465; /* 0x005F03FB: jge 0x5f0465 */
L_005F03FD:
    /* cmp ecx, 1 */ /* 0x005F03FD: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F0414; /* 0x005F0400: jne 0x5f0414 */
L_005F0402:
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x005F0402: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F0465; /* 0x005F0406: je 0x5f0465 */
L_005F0408:
    eax = edx; /* 0x005F0408: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x000FFFFFu);
    eax = eax & 0x000FFFFFu; /* 0x005F040A: and eax, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 4 */ /* 0x005F040F: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005F0465; /* 0x005F0412: ja 0x5f0465 */
L_005F0414:
    /* cmp ecx, 7 */ /* 0x005F0414: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F0427; /* 0x005F0417: jne 0x5f0427 */
L_005F0419:
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x005F0419: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F0465; /* 0x005F041D: je 0x5f0465 */
L_005F041F:
    /* test edx, 0x000FFFFFu */ /* 0x005F041F: test edx, 0xfffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x000FFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0465; /* 0x005F0425: jne 0x5f0465 */
L_005F0427:
    /* cmp ecx, 3 */ /* 0x005F0427: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F0432; /* 0x005F042A: jne 0x5f0432 */
L_005F042C:
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x005F042C: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F0465; /* 0x005F0430: je 0x5f0465 */
L_005F0432:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005F0432: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F0438: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0440; /* 0x005F043A: jne 0x5f0440 */
L_005F043C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F043C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F045A; /* 0x005F043E: jmp 0x5f045a */
L_005F0440:
    ecx = MEM32(0x927B08); /* 0x005F0440: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005F0446: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F045A; /* 0x005F0448: jne 0x5f045a */
L_005F044A:
    ecx = 0x00927AE8u; /* 0x005F044A: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F044F: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005F0454: mov ecx, dword ptr [0x927b08] */
L_005F045A:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x005F045A: push dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x005F045D: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x005F045F: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005F0462: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_005F0465:
    eax = MEM32(ebx + 0x4); /* 0x005F0465: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x005F0468: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx); /* 0x005F0469: sub eax, dword ptr [ebx] */
    _flag_k = FK_CMP;
    ecx = MEM32(0x7CC9AC); /* 0x005F046B: mov ecx, dword ptr [0x7cc9ac] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005F0471: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x005F0474: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F0360; /* 0x005F0476: jb 0x5f0360 */
L_005F047C:
    edi = POP32_VAL(esp); /* 0x005F047C: pop edi */
    esi = POP32_VAL(esp); /* 0x005F047D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F047E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F047F: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F0480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F0480u);

L_005F0480:
    PUSH32(esp, ebp); /* 0x005F0480: push ebp */
    ebp = esp; /* 0x005F0481: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F0483: push -1 */
    PUSH32(esp, 0x007B2276u); /* 0x005F0485: push 0x7b2276 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F048A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F0490: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x005F0491: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F0494: push ebx */
    PUSH32(esp, esi); /* 0x005F0495: push esi */
    PUSH32(esp, edi); /* 0x005F0496: push edi */
    eax = MEM32(0x855000); /* 0x005F0497: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F049C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F049E: push eax */
    eax = ebp + (-0xC); /* 0x005F049F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F04A2: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005F04A8: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F04AA: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + 0x8), 0x259u */ /* 0x005F04B1: cmp dword ptr [ebp + 8], 0x259 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x259u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(0x7CC694); /* 0x005F04B8: mov ebx, dword ptr [0x7cc694] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F0547; /* 0x005F04BE: jne 0x5f0547 */
L_005F04C4:
    eax = MEM32(edi + 0x4); /* 0x005F04C4: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F04C7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x005F04C9: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005F04CB: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x005F04CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0532; /* 0x005F04D0: je 0x5f0532 */
L_005F04D2:
    eax = MEM32(ebp + 0xC); /* 0x005F04D2: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x005F04D5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F04D8: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x005F04DA: mov dword ptr [ebp + 8], esp */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005F04DD: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ecx) = eax; /* 0x005F04E0: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x10); /* 0x005F04E2: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x4) = eax; /* 0x005F04E5: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x005F04E8: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ecx + 0x8) = eax; /* 0x005F04EB: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + 0x18); /* 0x005F04EE: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx + 0xC) = eax; /* 0x005F04F1: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebp + 0x1C); /* 0x005F04F4: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ecx + 0x10) = eax; /* 0x005F04F7: mov dword ptr [ecx + 0x10], eax */
    eax = ebp + 0x20; /* 0x005F04FA: lea eax, [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x005F04FD: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x005F04FE: add ecx, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_004E6D70); /* 0x005F0501: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005F0506: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(edi); /* 0x005F050A: mov eax, dword ptr [edi] */
    PUSH32(esp, 0x259u); /* 0x005F050C: push 0x259 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005F0511: mov byte ptr [ebp - 4], 0 */
    ecx = MEM32(eax + esi * 4); /* 0x005F0515: mov ecx, dword ptr [eax + esi*4] */
    RECOMP_CALL(sub_005F01F0); /* 0x005F0518: call 0x5f01f0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005F051D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F06C2; /* 0x005F051F: jne 0x5f06c2 */
L_005F0525:
    eax = MEM32(edi + 0x4); /* 0x005F0525: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005F0528: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x005F0529: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005F052B: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp esi, eax */ /* 0x005F052E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F04D2; /* 0x005F0530: jb 0x5f04d2 */
L_005F0532:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F0532: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x18; /* 0x005F0534: lea ecx, [edi + 0x18] */
L_005F0537:
    eax = MEM32(ecx); /* 0x005F0537: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x4); /* 0x005F0539: sub eax, dword ptr [ecx + 4] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_005F058C; /* 0x005F053C: je 0x5f058c */
L_005F053E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005F053E: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005F053F: add ecx, 0x20 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x10u */ /* 0x005F0542: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F0537; /* 0x005F0545: jb 0x5f0537 */
L_005F0547:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005F0547: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_005F0549:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F0549: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + 0x20); /* 0x005F0550: mov eax, dword ptr [ebp + 0x20] */
    /* test eax, eax */ /* 0x005F0553: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0576; /* 0x005F0555: je 0x5f0576 */
L_005F0557:
    PUSH32(esp, eax); /* 0x005F0557: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F0558: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F055E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x20) = 0; /* 0x005F0561: mov dword ptr [ebp + 0x20], 0 */
    MEM32(ebp + 0x24) = 0; /* 0x005F0568: mov dword ptr [ebp + 0x24], 0 */
    MEM32(ebp + 0x28) = 0; /* 0x005F056F: mov dword ptr [ebp + 0x28], 0 */
L_005F0576:
    SET_LO8(eax, LO8(ebx)); /* 0x005F0576: mov al, bl */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F0578: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F057B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F0582: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F0583: pop edi */
    esi = POP32_VAL(esp); /* 0x005F0584: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F0585: pop ebx */
    esp = ebp; /* 0x005F0586: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F0588: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x005F0589: ret 0x24 */
L_005F058C:
    eax = ebp + (-0x50); /* 0x005F058C: lea eax, [ebp - 0x50] */
    MEM32(ebp + 0x8) = eax; /* 0x005F058F: mov dword ptr [ebp + 8], eax */
    ecx = ebp + (-0x3C); /* 0x005F0592: lea ecx, [ebp - 0x3c] */
    eax = MEM32(ebp + 0xC); /* 0x005F0595: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x50)) = eax; /* 0x005F0598: mov dword ptr [ebp - 0x50], eax */
    eax = MEM32(ebp + 0x10); /* 0x005F059B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x005F059E: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + 0x14); /* 0x005F05A1: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x48)) = eax; /* 0x005F05A4: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebp + 0x18); /* 0x005F05A7: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x44)) = eax; /* 0x005F05AA: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + 0x1C); /* 0x005F05AD: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x40)) = eax; /* 0x005F05B0: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + 0x20; /* 0x005F05B3: lea eax, [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x005F05B6: push eax */
    RECOMP_CALL(sub_004E6D70); /* 0x005F05B7: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005F05BC: mov byte ptr [ebp - 4], 4 */
    ecx = ebp + (-0x1C); /* 0x005F05C0: lea ecx, [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x50)); /* 0x005F05C3: mov eax, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x30)) = eax; /* 0x005F05C6: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x005F05C9: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x005F05CC: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x005F05CF: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x28)) = eax; /* 0x005F05D2: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x005F05D5: mov eax, dword ptr [ebp - 0x44] */
    MEM32(ebp + (-0x24)) = eax; /* 0x005F05D8: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + (-0x40)); /* 0x005F05DB: mov eax, dword ptr [ebp - 0x40] */
    MEM32(ebp + (-0x20)) = eax; /* 0x005F05DE: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x3C); /* 0x005F05E1: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x005F05E4: push eax */
    RECOMP_CALL(sub_004E6D70); /* 0x005F05E5: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005F05EA: mov byte ptr [ebp - 4], 0 */
    eax = MEM32(ebp + (-0x3C)); /* 0x005F05EE: mov eax, dword ptr [ebp - 0x3c] */
    /* test eax, eax */ /* 0x005F05F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0610; /* 0x005F05F3: je 0x5f0610 */
L_005F05F5:
    PUSH32(esp, eax); /* 0x005F05F5: push eax */
    RECOMP_ICALL(ebx); /* 0x005F05F6: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F05F8: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3C)) = 0; /* 0x005F05FB: mov dword ptr [ebp - 0x3c], 0 */
    MEM32(ebp + (-0x38)) = 0; /* 0x005F0602: mov dword ptr [ebp - 0x38], 0 */
    MEM32(ebp + (-0x34)) = 0; /* 0x005F0609: mov dword ptr [ebp - 0x34], 0 */
L_005F0610:
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005F0610: mov byte ptr [ebp - 4], 8 */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x005F0614: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x005F0614: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x005F0617: add esi, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x100u); /* 0x005F0619: push 0x100 */
    ecx = esi + 0x20; /* 0x005F061E: lea ecx, [esi + 0x20] */
    MEM32(esi + 0x14) = 0x800u; /* 0x005F0621: mov dword ptr [esi + 0x14], 0x800 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F0628: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x24)); /* 0x005F062D: mov edi, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x005F0630: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 7; /* 0x005F0633: add edi, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((edi) >> 2) & 1u); /* 0x005F0636: shr edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 3u; /* 0x005F0636: shr edi, 3 */
    MEM32(esi + 0x18) = 0; /* 0x005F0639: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x005F0640: mov dword ptr [esi + 0x1c], 0 */
    /* test edi, edi */ /* 0x005F0647: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0681; /* 0x005F0649: je 0x5f0681 */
L_005F064B:
    eax = edi * 8; /* 0x005F064B: lea eax, [edi*8] */
    PUSH32(esp, eax); /* 0x005F0652: push eax */
    ecx = esi + 0xC; /* 0x005F0653: lea ecx, [esi + 0xc] */
    RECOMP_CALL(sub_005F3D70); /* 0x005F0656: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x005F065B: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F065E: add eax, 7 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x005F0661: push edi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x005F0662: push dword ptr [ebp - 0x1c] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F0665: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F0665: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x20); /* 0x005F0668: add eax, dword ptr [esi + 0x20] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005F066B: push eax */
    RECOMP_CALL(sub_00780838); /* 0x005F066C: call 0x780838 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1C)); /* 0x005F0671: mov ecx, dword ptr [ebp - 0x1c] */
    eax = edi * 8; /* 0x005F0674: lea eax, [edi*8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005F067B: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + eax; /* 0x005F067E: add dword ptr [esi + 0x18], eax */
    _flag_k = FK_ADD;
L_005F0681:
    eax = MEM32(ebp + (-0x30)); /* 0x005F0681: mov eax, dword ptr [ebp - 0x30] */
    MEM32(esi + 0xC) = eax; /* 0x005F0684: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x005F0687: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(esi + 0x10) = eax; /* 0x005F068A: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x005F068D: mov eax, dword ptr [ebp - 0x28] */
    MEM32(esi + 0x14) = eax; /* 0x005F0690: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x005F0693: mov eax, dword ptr [ebp - 0x20] */
    MEM32(esi + 0x1C) = eax; /* 0x005F0696: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x005F0699: mov eax, dword ptr [ebp - 0x24] */
    MEM32(esi + 0x18) = eax; /* 0x005F069C: mov dword ptr [esi + 0x18], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005F069F: mov byte ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x005F06A3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F06C2; /* 0x005F06A5: je 0x5f06c2 */
L_005F06A7:
    PUSH32(esp, ecx); /* 0x005F06A7: push ecx */
    RECOMP_ICALL(ebx); /* 0x005F06A8: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F06AA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = 0; /* 0x005F06AD: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x005F06B4: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x005F06BB: mov dword ptr [ebp - 0x14], 0 */
L_005F06C2:
    SET_LO8(ebx, 1); /* 0x005F06C2: mov bl, 1 */
    RECOMP_BACKEDGE();
    goto L_005F0549; /* 0x005F06C4: jmp 0x5f0549 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005F06D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F06D0u);

L_005F06D0:
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005F06D0: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F68A4u; /* 0x005F06D4: mov dword ptr [ecx], 0x7f68a4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F06E4; /* 0x005F06DA: je 0x5f06e4 */
L_005F06DC:
    PUSH32(esp, ecx); /* 0x005F06DC: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005F06DD: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x005F06E3: pop ecx */
L_005F06E4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F06E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F06F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F06F0u);

L_005F06F0:
    eax = 0x14u; /* 0x005F06F0: mov eax, 0x14 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F06F5: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F0700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F0700u);

L_005F0700:
    PUSH32(esp, ebp); /* 0x005F0700: push ebp */
    ebp = esp; /* 0x005F0701: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F0703: push -1 */
    PUSH32(esp, 0x007B22ACu); /* 0x005F0705: push 0x7b22ac */
    eax = MEM32(FS_BASE + (0)); /* 0x005F070A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F0710: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005F0711: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005F0714: push esi */
    PUSH32(esp, edi); /* 0x005F0715: push edi */
    eax = MEM32(0x855000); /* 0x005F0716: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F071B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F071D: push eax */
    eax = ebp + (-0xC); /* 0x005F071E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F0721: mov dword ptr fs:[0], eax */
    esi = edx; /* 0x005F0727: mov esi, edx */
    edi = ecx; /* 0x005F0729: mov edi, ecx */
    ecx = MEM32(0x86E158); /* 0x005F072B: mov ecx, dword ptr [0x86e158] */
    /* test ecx, ecx */ /* 0x005F0731: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F073A; /* 0x005F0733: je 0x5f073a */
L_005F0735:
    eax = MEM32(ecx); /* 0x005F0735: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005F0737: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_005F073A:
    PUSH32(esp, 0x1A8u); /* 0x005F073A: push 0x1a8 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005F073F: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F0745: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x005F0748: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F074B: mov dword ptr [ebp - 4], 0 */
    /* test eax, eax */ /* 0x005F0752: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0761; /* 0x005F0754: je 0x5f0761 */
L_005F0756:
    ecx = eax; /* 0x005F0756: mov ecx, eax */
    RECOMP_CALL(sub_005E3640); /* 0x005F0758: call 0x5e3640 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005F075D: mov ecx, eax */
    goto L_005F0763; /* 0x005F075F: jmp 0x5f0763 */
L_005F0761:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F0761: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_005F0763:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F0763: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ecx); /* 0x005F076A: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x005F076C: push esi */
    PUSH32(esp, edi); /* 0x005F076D: push edi */
    MEM32(0x86E158) = ecx; /* 0x005F076E: mov dword ptr [0x86e158], ecx */
    RECOMP_ICALL(MEM32(eax + 0x68)); /* 0x005F0774: call dword ptr [eax + 0x68] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x86E158); /* 0x005F0777: mov eax, dword ptr [0x86e158] */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F077C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F077F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F0786: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F0787: pop edi */
    esi = POP32_VAL(esp); /* 0x005F0788: pop esi */
    esp = ebp; /* 0x005F0789: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F078B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F078C: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F0790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F0790u);

L_005F0790:
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F0790: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F0796: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F079B; /* 0x005F0798: jne 0x5f079b */
L_005F079A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F079A: ret  */
L_005F079B:
    eax = MEM32(0x928130); /* 0x005F079B: mov eax, dword ptr [0x928130] */
    /* test eax, eax */ /* 0x005F07A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F07B3; /* 0x005F07A2: jne 0x5f07b3 */
L_005F07A4:
    ecx = 0x0092812Cu; /* 0x005F07A4: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F07A9: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x928130); /* 0x005F07AE: mov eax, dword ptr [0x928130] */
L_005F07B3:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F07B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F07C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F07C0u);

L_005F07C0:
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F07C0: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F07C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F07CB; /* 0x005F07C8: jne 0x5f07cb */
L_005F07CA:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F07CA: ret  */
L_005F07CB:
    eax = MEM32(0x928138); /* 0x005F07CB: mov eax, dword ptr [0x928138] */
    /* test eax, eax */ /* 0x005F07D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F07E3; /* 0x005F07D2: jne 0x5f07e3 */
L_005F07D4:
    ecx = 0x0092812Cu; /* 0x005F07D4: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F07D9: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x928138); /* 0x005F07DE: mov eax, dword ptr [0x928138] */
L_005F07E3:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F07E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F07F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F07F0u);

L_005F07F0:
    PUSH32(esp, ebx); /* 0x005F07F0: push ebx */
    PUSH32(esp, esi); /* 0x005F07F1: push esi */
    PUSH32(esp, edi); /* 0x005F07F2: push edi */
    esi = ecx; /* 0x005F07F3: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x7CC970)); /* 0x005F07F5: call dword ptr [0x7cc970] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x005F07FB: mov ebx, eax */
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F07FD: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005F0803: mov edi, eax */
    /* test edi, edi */ /* 0x005F0805: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F080F; /* 0x005F0807: jne 0x5f080f */
L_005F0809:
    edi = POP32_VAL(esp); /* 0x005F0809: pop edi */
    esi = POP32_VAL(esp); /* 0x005F080A: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005F080B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x005F080D: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F080E: ret  */
L_005F080F:
    PUSH32(esp, 0x007CE690u); /* 0x005F080F: push 0x7ce690 */
    RECOMP_ICALL(MEM32(0x7CC9A8)); /* 0x005F0814: call dword ptr [0x7cc9a8] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005F081A: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F081C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = ecx; /* 0x005F081F: mov dword ptr [esi], ecx */
    /* test ecx, ecx */ /* 0x005F0821: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0809; /* 0x005F0823: je 0x5f0809 */
L_005F0825:
    eax = MEM32(ecx); /* 0x005F0825: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x007F68B0u); /* 0x005F0827: push 0x7f68b0 */
    PUSH32(esp, edi); /* 0x005F082C: push edi */
    PUSH32(esp, ebx); /* 0x005F082D: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x005F082E: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x005F0831: mov dword ptr [esi + 4], eax */
    /* test eax, eax */ /* 0x005F0834: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0809; /* 0x005F0836: je 0x5f0809 */
L_005F0838:
    ecx = MEM32(esi); /* 0x005F0838: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x007CE6A0u); /* 0x005F083A: push 0x7ce6a0 */
    PUSH32(esp, edi); /* 0x005F083F: push edi */
    eax = MEM32(ecx); /* 0x005F0840: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x005F0842: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x005F0845: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x005F0848: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0809; /* 0x005F084A: je 0x5f0809 */
L_005F084C:
    ecx = MEM32(esi); /* 0x005F084C: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x007CE75Cu); /* 0x005F084E: push 0x7ce75c */
    PUSH32(esp, edi); /* 0x005F0853: push edi */
    PUSH32(esp, ebx); /* 0x005F0854: push ebx */
    eax = MEM32(ecx); /* 0x005F0855: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x005F0857: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x005F085A: mov dword ptr [esi + 0xc], eax */
    /* test eax, eax */ /* 0x005F085D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0809; /* 0x005F085F: je 0x5f0809 */
L_005F0861:
    ecx = MEM32(esi); /* 0x005F0861: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x007F68C4u); /* 0x005F0863: push 0x7f68c4 */
    PUSH32(esp, edi); /* 0x005F0868: push edi */
    PUSH32(esp, ebx); /* 0x005F0869: push ebx */
    eax = MEM32(ecx); /* 0x005F086A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x005F086C: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = eax; /* 0x005F086F: mov dword ptr [esi + 0x10], eax */
    /* test eax, eax */ /* 0x005F0872: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0809; /* 0x005F0874: je 0x5f0809 */
L_005F0876:
    ecx = MEM32(esi); /* 0x005F0876: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x007CE770u); /* 0x005F0878: push 0x7ce770 */
    PUSH32(esp, edi); /* 0x005F087D: push edi */
    PUSH32(esp, ebx); /* 0x005F087E: push ebx */
    eax = MEM32(ecx); /* 0x005F087F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x005F0881: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = eax; /* 0x005F0884: mov dword ptr [esi + 0x14], eax */
    /* test eax, eax */ /* 0x005F0887: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0809; /* 0x005F0889: je 0x5f0809 */
L_005F088F:
    ecx = MEM32(esi); /* 0x005F088F: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x007CE884u); /* 0x005F0891: push 0x7ce884 */
    PUSH32(esp, edi); /* 0x005F0896: push edi */
    PUSH32(esp, ebx); /* 0x005F0897: push ebx */
    eax = MEM32(ecx); /* 0x005F0898: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x88)); /* 0x005F089A: call dword ptr [eax + 0x88] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x18) = eax; /* 0x005F08A0: mov dword ptr [esi + 0x18], eax */
    /* test eax, eax */ /* 0x005F08A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0809; /* 0x005F08A5: je 0x5f0809 */
L_005F08AB:
    ecx = MEM32(esi); /* 0x005F08AB: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x007CE81Cu); /* 0x005F08AD: push 0x7ce81c */
    PUSH32(esp, edi); /* 0x005F08B2: push edi */
    PUSH32(esp, ebx); /* 0x005F08B3: push ebx */
    eax = MEM32(ecx); /* 0x005F08B4: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x68)); /* 0x005F08B6: call dword ptr [eax + 0x68] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1C) = eax; /* 0x005F08B9: mov dword ptr [esi + 0x1c], eax */
    /* test eax, eax */ /* 0x005F08BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0809; /* 0x005F08BE: je 0x5f0809 */
L_005F08C4:
    ecx = MEM32(esi); /* 0x005F08C4: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x007CE6F0u); /* 0x005F08C6: push 0x7ce6f0 */
    PUSH32(esp, edi); /* 0x005F08CB: push edi */
    PUSH32(esp, ebx); /* 0x005F08CC: push ebx */
    eax = MEM32(ecx); /* 0x005F08CD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x005F08CF: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005F08D2: pop edi */
    MEM32(esi + 0x20) = eax; /* 0x005F08D3: mov dword ptr [esi + 0x20], eax */
    /* test eax, eax */ /* 0x005F08D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x005F08D8: pop esi */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x005F08D9: setne al */
    ebx = POP32_VAL(esp); /* 0x005F08DC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F08DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F08E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F08E0u);

L_005F08E0:
    PUSH32(esp, ebp); /* 0x005F08E0: push ebp */
    ebp = esp; /* 0x005F08E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F08E3: push -1 */
    PUSH32(esp, 0x007B239Fu); /* 0x005F08E5: push 0x7b239f */
    eax = MEM32(FS_BASE + (0)); /* 0x005F08EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F08F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005F08F1: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005F08F4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F08F9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005F08FB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005F08FE: push ebx */
    PUSH32(esp, esi); /* 0x005F08FF: push esi */
    PUSH32(esp, edi); /* 0x005F0900: push edi */
    PUSH32(esp, eax); /* 0x005F0901: push eax */
    eax = ebp + (-0xC); /* 0x005F0902: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F0905: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F090B: mov esi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x005F090D: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x14) = 0xFu; /* 0x005F0910: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005F0917: mov dword ptr [esi + 0x10], 0 */
    MEM32(ebp + (-0x38)) = esi; /* 0x005F091E: mov dword ptr [ebp - 0x38], esi */
    MEM32(ebp + (-0x34)) = eax; /* 0x005F0921: mov dword ptr [ebp - 0x34], eax */
    MEM8(esi) = (uint8_t)(0); /* 0x005F0924: mov byte ptr [esi], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F0927: mov dword ptr [ebp - 4], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x005F092E: mov dword ptr [esi + 0x1c], 0 */
    RECOMP_CALL(sub_006EE000); /* 0x005F0935: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x005F093A: push ecx */
    PUSH32(esp, esi); /* 0x005F093B: push esi */
    ecx = esi + 0x20; /* 0x005F093C: lea ecx, [esi + 0x20] */
    MEM32(esi + 0x1C) = eax; /* 0x005F093F: mov dword ptr [esi + 0x1c], eax */
    RECOMP_CALL(sub_005F3540); /* 0x005F0942: call 0x5f3540 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005F0947: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, ecx); /* 0x005F094B: push ecx */
    PUSH32(esp, esi); /* 0x005F094C: push esi */
    ecx = esi + 0x34; /* 0x005F094D: lea ecx, [esi + 0x34] */
    RECOMP_CALL(sub_005F35F0); /* 0x005F0950: call 0x5f35f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005F0955: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, ecx); /* 0x005F0959: push ecx */
    PUSH32(esp, esi); /* 0x005F095A: push esi */
    ecx = esi + 0x48; /* 0x005F095B: lea ecx, [esi + 0x48] */
    RECOMP_CALL(sub_005F36A0); /* 0x005F095E: call 0x5f36a0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005F0963: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x005F0967: push ecx */
    PUSH32(esp, esi); /* 0x005F0968: push esi */
    ecx = esi + 0x5C; /* 0x005F0969: lea ecx, [esi + 0x5c] */
    RECOMP_CALL(sub_005F3750); /* 0x005F096C: call 0x5f3750 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005F0971: mov byte ptr [ebp - 4], 4 */
    PUSH32(esp, ecx); /* 0x005F0975: push ecx */
    PUSH32(esp, esi); /* 0x005F0976: push esi */
    ecx = esi + 0x70; /* 0x005F0977: lea ecx, [esi + 0x70] */
    RECOMP_CALL(sub_005F3800); /* 0x005F097A: call 0x5f3800 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005F097F: mov byte ptr [ebp - 4], 5 */
    PUSH32(esp, ecx); /* 0x005F0983: push ecx */
    PUSH32(esp, esi); /* 0x005F0984: push esi */
    ecx = esi + 0x84; /* 0x005F0985: lea ecx, [esi + 0x84] */
    RECOMP_CALL(sub_005F38B0); /* 0x005F098B: call 0x5f38b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005F0990: mov byte ptr [ebp - 4], 6 */
    PUSH32(esp, ecx); /* 0x005F0994: push ecx */
    PUSH32(esp, esi); /* 0x005F0995: push esi */
    ecx = esi + 0x98; /* 0x005F0996: lea ecx, [esi + 0x98] */
    RECOMP_CALL(sub_005F3960); /* 0x005F099C: call 0x5f3960 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x005F09A1: mov byte ptr [ebp - 4], 7 */
    MEM32(esi + 0xB4) = 0; /* 0x005F09A5: mov dword ptr [esi + 0xb4], 0 */
    MEM32(esi + 0xCC) = 0xFu; /* 0x005F09AF: mov dword ptr [esi + 0xcc], 0xf */
    MEM32(esi + 0xC8) = 0; /* 0x005F09B9: mov dword ptr [esi + 0xc8], 0 */
    MEM8(esi + 0xB8) = (uint8_t)(0); /* 0x005F09C3: mov byte ptr [esi + 0xb8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005F09CA: mov byte ptr [ebp - 4], 8 */
    ecx = esi + 0xD0; /* 0x005F09CE: lea ecx, [esi + 0xd0] */
    PUSH32(esp, ecx); /* 0x005F09D4: push ecx */
    MEM32(ebp + (-0x30)) = ecx; /* 0x005F09D5: mov dword ptr [ebp - 0x30], ecx */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x005F09D8: mov dword ptr [ebp - 0x2c], ecx */
    RECOMP_CALL(sub_005ED150); /* 0x005F09DB: call 0x5ed150 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x005F09E0: mov byte ptr [ebp - 4], 0xb */
    MEM32(esi + 0xE4) = 0; /* 0x005F09E4: mov dword ptr [esi + 0xe4], 0 */
    MEM32(esi + 0xE8) = 0; /* 0x005F09EE: mov dword ptr [esi + 0xe8], 0 */
    MEM32(esi + 0xEC) = 0; /* 0x005F09F8: mov dword ptr [esi + 0xec], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x005F0A02: mov byte ptr [ebp - 4], 0xc */
    MEM32(esi + 0xF0) = 0; /* 0x005F0A06: mov dword ptr [esi + 0xf0], 0 */
    MEM32(esi + 0xF4) = 0; /* 0x005F0A10: mov dword ptr [esi + 0xf4], 0 */
    MEM32(esi + 0xF8) = 0; /* 0x005F0A1A: mov dword ptr [esi + 0xf8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005F0A24: mov byte ptr [ebp - 4], 0xd */
    PUSH32(esp, 0x007F6900u); /* 0x005F0A28: push 0x7f6900 */
    MEM8(esi + 0x19) = (uint8_t)(0); /* 0x005F0A2D: mov byte ptr [esi + 0x19], 0 */
    PUSH32(esp, 2); /* 0x005F0A31: push 2 */
    PUSH32(esp, 0x4E21u); /* 0x005F0A33: push 0x4e21 */
    PUSH32(esp, 0x4E20u); /* 0x005F0A38: push 0x4e20 */
    PUSH32(esp, 0x4E22u); /* 0x005F0A3D: push 0x4e22 */
    PUSH32(esp, 0); /* 0x005F0A42: push 0 */
    RECOMP_ICALL(MEM32(0x7CC980)); /* 0x005F0A44: call dword ptr [0x7cc980] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x005F0A4A: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x005F0A4D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0A93; /* 0x005F0A4F: jne 0x5f0a93 */
L_005F0A51:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F0A51: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F0A54: mov ecx, esp */
    MEM32(ebp + (-0x2C)) = esp; /* 0x005F0A56: mov dword ptr [ebp - 0x2c], esp */
    PUSH32(esp, 0x007F6904u); /* 0x005F0A59: push 0x7f6904 */
    RECOMP_CALL(sub_00409FA0); /* 0x005F0A5E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x005F0A63: mov byte ptr [ebp - 4], 0xe */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F0A67: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F0A6A: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x005F0A6C: mov dword ptr [ebp - 0x30], esp */
    PUSH32(esp, 0x007F68DCu); /* 0x005F0A6F: push 0x7f68dc */
    RECOMP_CALL(sub_00409FA0); /* 0x005F0A74: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x005F0A79: mov byte ptr [ebp - 4], 0xf */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005F0A7D: mov byte ptr [ebp - 4], 0xd */
    ecx = 0x1Fu; /* 0x005F0A81: mov ecx, 0x1f */
    RECOMP_CALL(sub_00668410); /* 0x005F0A86: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F0A8B: add esp, 0x30 */
    _flag_k = FK_ADD;
    goto L_005F0CCD; /* 0x005F0A8E: jmp 0x5f0ccd */
L_005F0A93:
    edi = MEM32(0x7CC978); /* 0x005F0A93: mov edi, dword ptr [0x7cc978] */
    RECOMP_ICALL(edi); /* 0x005F0A99: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F0A9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0AA3; /* 0x005F0A9D: jne 0x5f0aa3 */
L_005F0A9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F0A9F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F0ABD; /* 0x005F0AA1: jmp 0x5f0abd */
L_005F0AA3:
    ecx = MEM32(0x928130); /* 0x005F0AA3: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F0AA9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0ABD; /* 0x005F0AAB: jne 0x5f0abd */
L_005F0AAD:
    ecx = 0x0092812Cu; /* 0x005F0AAD: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F0AB2: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F0AB7: mov ecx, dword ptr [0x928130] */
L_005F0ABD:
    eax = MEM32(ecx); /* 0x005F0ABD: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x007CD0C4u); /* 0x005F0ABF: push 0x7cd0c4 */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x005F0AC4: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005F0AC7: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F0ACD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0AD5; /* 0x005F0ACF: jne 0x5f0ad5 */
L_005F0AD1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005F0AD1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F0AEF; /* 0x005F0AD3: jmp 0x5f0aef */
L_005F0AD5:
    ebx = MEM32(0x927AF4); /* 0x005F0AD5: mov ebx, dword ptr [0x927af4] */
    /* test ebx, ebx */ /* 0x005F0ADB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0AEF; /* 0x005F0ADD: jne 0x5f0aef */
L_005F0ADF:
    ecx = 0x00927AE8u; /* 0x005F0ADF: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F0AE4: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x927AF4); /* 0x005F0AE9: mov ebx, dword ptr [0x927af4] */
L_005F0AEF:
    RECOMP_ICALL(edi); /* 0x005F0AEF: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F0AF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0AF9; /* 0x005F0AF3: jne 0x5f0af9 */
L_005F0AF5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005F0AF5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F0B13; /* 0x005F0AF7: jmp 0x5f0b13 */
L_005F0AF9:
    edi = MEM32(0x928130); /* 0x005F0AF9: mov edi, dword ptr [0x928130] */
    /* test edi, edi */ /* 0x005F0AFF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0B13; /* 0x005F0B01: jne 0x5f0b13 */
L_005F0B03:
    ecx = 0x0092812Cu; /* 0x005F0B03: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F0B08: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x928130); /* 0x005F0B0D: mov edi, dword ptr [0x928130] */
L_005F0B13:
    eax = MEM32(ebx); /* 0x005F0B13: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x005F0B15: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x005F0B17: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005F0B1A: mov edx, eax */
    ecx = ebp + (-0x28); /* 0x005F0B1C: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0047CC80); /* 0x005F0B1F: call 0x47cc80 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005F0B24: mov ecx, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x005F0B26: mov byte ptr [ebp - 4], 0x10 */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x005F0B2A: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F0B32; /* 0x005F0B2E: jb 0x5f0b32 */
L_005F0B30:
    ecx = MEM32(ecx); /* 0x005F0B30: mov ecx, dword ptr [ecx] */
L_005F0B32:
    eax = MEM32(edi); /* 0x005F0B32: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x005F0B34: push ecx */
    ecx = edi; /* 0x005F0B35: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x005F0B37: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005F0B3A: mov byte ptr [ebp - 4], 0xd */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005F0B3E: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F0B50; /* 0x005F0B42: jb 0x5f0b50 */
L_005F0B44:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005F0B44: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F0B47: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F0B4D: add esp, 4 */
    _flag_k = FK_ADD;
L_005F0B50:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005F0B50: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005F0B57: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005F0B5E: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005F0B62: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F0B68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0B70; /* 0x005F0B6A: jne 0x5f0b70 */
L_005F0B6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005F0B6C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F0B8A; /* 0x005F0B6E: jmp 0x5f0b8a */
L_005F0B70:
    ebx = MEM32(0x927AF4); /* 0x005F0B70: mov ebx, dword ptr [0x927af4] */
    /* test ebx, ebx */ /* 0x005F0B76: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0B8A; /* 0x005F0B78: jne 0x5f0b8a */
L_005F0B7A:
    ecx = 0x00927AE8u; /* 0x005F0B7A: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F0B7F: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x927AF4); /* 0x005F0B84: mov ebx, dword ptr [0x927af4] */
L_005F0B8A:
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F0B8A: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F0B90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0B98; /* 0x005F0B92: jne 0x5f0b98 */
L_005F0B94:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005F0B94: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F0BB2; /* 0x005F0B96: jmp 0x5f0bb2 */
L_005F0B98:
    edi = MEM32(0x928130); /* 0x005F0B98: mov edi, dword ptr [0x928130] */
    /* test edi, edi */ /* 0x005F0B9E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0BB2; /* 0x005F0BA0: jne 0x5f0bb2 */
L_005F0BA2:
    ecx = 0x0092812Cu; /* 0x005F0BA2: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F0BA7: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x928130); /* 0x005F0BAC: mov edi, dword ptr [0x928130] */
L_005F0BB2:
    eax = MEM32(ebx); /* 0x005F0BB2: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x005F0BB4: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x005F0BB6: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005F0BB9: mov edx, eax */
    ecx = ebp + (-0x28); /* 0x005F0BBB: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0047CC80); /* 0x005F0BBE: call 0x47cc80 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005F0BC3: mov ecx, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x005F0BC5: mov byte ptr [ebp - 4], 0x11 */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x005F0BC9: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F0BD1; /* 0x005F0BCD: jb 0x5f0bd1 */
L_005F0BCF:
    ecx = MEM32(ecx); /* 0x005F0BCF: mov ecx, dword ptr [ecx] */
L_005F0BD1:
    eax = MEM32(edi); /* 0x005F0BD1: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x005F0BD3: push ecx */
    ecx = edi; /* 0x005F0BD4: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005F0BD6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005F0BD9: mov byte ptr [ebp - 4], 0xd */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x005F0BDD: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F0BEF; /* 0x005F0BE1: jb 0x5f0bef */
L_005F0BE3:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x005F0BE3: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F0BE6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F0BEC: add esp, 4 */
    _flag_k = FK_ADD;
L_005F0BEF:
    ebx = MEM32(0x7CC978); /* 0x005F0BEF: mov ebx, dword ptr [0x7cc978] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x005F0BF5: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x005F0BFC: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x005F0C03: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_ICALL(ebx); /* 0x005F0C07: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F0C09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0C11; /* 0x005F0C0B: jne 0x5f0c11 */
L_005F0C0D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F0C0D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F0C2B; /* 0x005F0C0F: jmp 0x5f0c2b */
L_005F0C11:
    ecx = MEM32(0x928130); /* 0x005F0C11: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F0C17: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0C2B; /* 0x005F0C19: jne 0x5f0c2b */
L_005F0C1B:
    ecx = 0x0092812Cu; /* 0x005F0C1B: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F0C20: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F0C25: mov ecx, dword ptr [0x928130] */
L_005F0C2B:
    eax = MEM32(ecx); /* 0x005F0C2B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x005F0C2D: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(ebx); /* 0x005F0C30: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F0C32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0C3A; /* 0x005F0C34: jne 0x5f0c3a */
L_005F0C36:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F0C36: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F0C54; /* 0x005F0C38: jmp 0x5f0c54 */
L_005F0C3A:
    ecx = MEM32(0x928130); /* 0x005F0C3A: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F0C40: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0C54; /* 0x005F0C42: jne 0x5f0c54 */
L_005F0C44:
    ecx = 0x0092812Cu; /* 0x005F0C44: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F0C49: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F0C4E: mov ecx, dword ptr [0x928130] */
L_005F0C54:
    eax = MEM32(ecx); /* 0x005F0C54: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x005F0C56: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x9C)); /* 0x005F0C58: call dword ptr [eax + 0x9c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x005F0C5E: mov eax, dword ptr [ebp + 0xc] */
    ecx = esi + 0xB8; /* 0x005F0C61: lea ecx, [esi + 0xb8] */
    MEM32(esi + 0xB0) = eax; /* 0x005F0C67: mov dword ptr [esi + 0xb0], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x005F0C6D: mov eax, dword ptr [ebp - 0x34] */
    /* cmp ecx, eax */ /* 0x005F0C70: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F0C7E; /* 0x005F0C72: je 0x5f0c7e */
L_005F0C74:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F0C74: push -1 */
    PUSH32(esp, 0); /* 0x005F0C76: push 0 */
    PUSH32(esp, eax); /* 0x005F0C78: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005F0C79: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005F0C7E:
    PUSH32(esp, 0x28u); /* 0x005F0C7E: push 0x28 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005F0C80: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F0C86: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x005F0C89: mov dword ptr [ebp - 0x2c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x12u); /* 0x005F0C8C: mov byte ptr [ebp - 4], 0x12 */
    /* test eax, eax */ /* 0x005F0C90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0C9D; /* 0x005F0C92: je 0x5f0c9d */
L_005F0C94:
    ecx = eax; /* 0x005F0C94: mov ecx, eax */
    RECOMP_CALL(sub_005E1AC0); /* 0x005F0C96: call 0x5e1ac0 */
    RECOMP_FLAGS_IN();
    goto L_005F0C9F; /* 0x005F0C9B: jmp 0x5f0c9f */
L_005F0C9D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005F0C9D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_005F0C9F:
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005F0C9F: mov byte ptr [ebp - 4], 0xd */
    MEM32(esi + 0xAC) = eax; /* 0x005F0CA3: mov dword ptr [esi + 0xac], eax */
    MEM32(esi + 0xB4) = 0; /* 0x005F0CA9: mov dword ptr [esi + 0xb4], 0 */
    RECOMP_CALL(sub_006EE000); /* 0x005F0CB3: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_006EE000); /* 0x005F0CB8: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1C) = eax; /* 0x005F0CBD: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(esi + 0xAC); /* 0x005F0CC0: mov eax, dword ptr [esi + 0xac] */
    MEM32(eax + 0x10) = 0; /* 0x005F0CC6: mov dword ptr [eax + 0x10], 0 */
L_005F0CCD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F0CCD: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005F0CD4: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F0CD6: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F0CD9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F0CE0: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F0CE1: pop edi */
    esi = POP32_VAL(esp); /* 0x005F0CE2: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F0CE3: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005F0CE4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005F0CE7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005F0CE9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005F0CEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F0CF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005F0CF1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005F0D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F0D00u);

L_005F0D00:
    PUSH32(esp, ebp); /* 0x005F0D00: push ebp */
    ebp = esp; /* 0x005F0D01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F0D03: push -1 */
    PUSH32(esp, 0x007B23D8u); /* 0x005F0D05: push 0x7b23d8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F0D0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F0D10: push eax */
    PUSH32(esp, ecx); /* 0x005F0D11: push ecx */
    eax = MEM32(0x855000); /* 0x005F0D12: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F0D17: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F0D19: push eax */
    eax = ebp + (-0xC); /* 0x005F0D1A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F0D1D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005F0D23: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F0D26: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005F0D2D: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F692Cu; /* 0x005F0D31: mov dword ptr [ecx], 0x7f692c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0D43; /* 0x005F0D37: je 0x5f0d43 */
L_005F0D39:
    PUSH32(esp, ecx); /* 0x005F0D39: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005F0D3A: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F0D40: add esp, 4 */
    _flag_k = FK_ADD;
L_005F0D43:
    ecx = MEM32(ebp + (-0xC)); /* 0x005F0D43: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F0D46: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F0D4D: pop ecx */
    esp = ebp; /* 0x005F0D4E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F0D50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F0D51: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F0D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F0D60u);

L_005F0D60:
    PUSH32(esp, ebp); /* 0x005F0D60: push ebp */
    ebp = esp; /* 0x005F0D61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F0D63: push -1 */
    PUSH32(esp, 0x007B2408u); /* 0x005F0D65: push 0x7b2408 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F0D6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F0D70: push eax */
    PUSH32(esp, ecx); /* 0x005F0D71: push ecx */
    eax = MEM32(0x855000); /* 0x005F0D72: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F0D77: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F0D79: push eax */
    eax = ebp + (-0xC); /* 0x005F0D7A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F0D7D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005F0D83: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F0D86: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005F0D8D: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F68A4u; /* 0x005F0D91: mov dword ptr [ecx], 0x7f68a4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0DA3; /* 0x005F0D97: je 0x5f0da3 */
L_005F0D99:
    PUSH32(esp, ecx); /* 0x005F0D99: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005F0D9A: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F0DA0: add esp, 4 */
    _flag_k = FK_ADD;
L_005F0DA3:
    ecx = MEM32(ebp + (-0xC)); /* 0x005F0DA3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F0DA6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F0DAD: pop ecx */
    esp = ebp; /* 0x005F0DAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F0DB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F0DB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F0DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F0DC0u);

L_005F0DC0:
    PUSH32(esp, ebp); /* 0x005F0DC0: push ebp */
    ebp = esp; /* 0x005F0DC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F0DC3: push -1 */
    PUSH32(esp, 0x007B2534u); /* 0x005F0DC5: push 0x7b2534 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F0DCA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F0DD0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005F0DD1: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F0DD4: push ebx */
    PUSH32(esp, esi); /* 0x005F0DD5: push esi */
    PUSH32(esp, edi); /* 0x005F0DD6: push edi */
    eax = MEM32(0x855000); /* 0x005F0DD7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F0DDC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F0DDE: push eax */
    eax = ebp + (-0xC); /* 0x005F0DDF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F0DE2: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005F0DE8: mov edi, ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x005F0DEA: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0x4)) = 0xBu; /* 0x005F0DED: mov dword ptr [ebp - 4], 0xb */
    eax = 0x66666667u; /* 0x005F0DF4: mov eax, 0x66666667 */
    ecx = MEM32(edi + 0xE8); /* 0x005F0DF9: mov ecx, dword ptr [edi + 0xe8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005F0DFF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F0E01: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F0E07: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x10)) = ebx; /* 0x005F0E09: mov dword ptr [ebp - 0x10], ebx */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F0E0C: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F0E0F: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F0E11: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F0E11: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F0E14: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F0F67; /* 0x005F0E16: je 0x5f0f67 */
L_005F0E1C:
    esp = esp; /* 0x005F0E1C: lea esp, [esp] */
L_005F0E20:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFF0FFFFFu; /* 0x005F0E20: and dword ptr [ebp - 0x34], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x31)) = (uint8_t)(0); /* 0x005F0E27: mov byte ptr [ebp - 0x31], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFF00000u; /* 0x005F0E2B: and dword ptr [ebp - 0x34], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = 0; /* 0x005F0E32: mov dword ptr [ebp - 0x38], 0 */
    MEM32(ebp + (-0x30)) = 0x800u; /* 0x005F0E39: mov dword ptr [ebp - 0x30], 0x800 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x005F0E40: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x005F0E47: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x005F0E4E: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005F0E55: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005F0E5C: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x005F0E63: mov byte ptr [ebp - 4], 0xc */
    ecx = ebp + (-0x24); /* 0x005F0E67: lea ecx, [ebp - 0x24] */
    PUSH32(esp, 0x100u); /* 0x005F0E6A: push 0x100 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F0E6F: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005F0E74: mov byte ptr [ebp - 4], 0xd */
    /* test MEM8(ebp + (-0x2C)), 7 */ /* 0x005F0E78: test byte ptr [ebp - 0x2c], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x14)) = 5; /* 0x005F0E7C: mov dword ptr [ebp - 0x14], 5 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0EF7; /* 0x005F0E83: jne 0x5f0ef7 */
L_005F0E85:
    edx = MEM32(ebp + (-0x2C)); /* 0x005F0E85: mov edx, dword ptr [ebp - 0x2c] */
    ebx = MEM32(ebp + (-0x30)); /* 0x005F0E88: mov ebx, dword ptr [ebp - 0x30] */
    esi = edx + 0x20; /* 0x005F0E8B: lea esi, [edx + 0x20] */
    /* test esi, esi */ /* 0x005F0E8E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0ED4; /* 0x005F0E90: je 0x5f0ed4 */
L_005F0E92:
    ecx = ebx + (-0x1); /* 0x005F0E92: lea ecx, [ebx - 1] */
    eax = esi + (-0x1); /* 0x005F0E95: lea eax, [esi - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x005F0E98: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005F0E9B: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x005F0E9E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F0ED4; /* 0x005F0EA0: jae 0x5f0ed4 */
L_005F0EA2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005F0EA2: add esi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x005F0EA4: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005F0EA6: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x005F0EA8: sub eax, 0x20 */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005F0EAB: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F0EB8; /* 0x005F0EB0: jbe 0x5f0eb8 */
L_005F0EB2:
    esi = edx + 0x100020; /* 0x005F0EB2: lea esi, [edx + 0x100020] */
L_005F0EB8:
    eax = esi + 0x7; /* 0x005F0EB8: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F0EBB: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F0EBB: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005F0EBE: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F0ED4; /* 0x005F0EC3: jbe 0x5f0ed4 */
L_005F0EC5:
    PUSH32(esp, eax); /* 0x005F0EC5: push eax */
    ecx = ebp + (-0x24); /* 0x005F0EC6: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F0EC9: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x2C)); /* 0x005F0ECE: mov edx, dword ptr [ebp - 0x2c] */
    ebx = MEM32(ebp + (-0x30)); /* 0x005F0ED1: mov ebx, dword ptr [ebp - 0x30] */
L_005F0ED4:
    /* cmp esi, ebx */ /* 0x005F0ED4: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edx + 0x7; /* 0x005F0ED6: lea eax, [edx + 7] */
    if (CMP_A(_flag_a, _flag_b)) { ebx = esi; } /* 0x005F0ED9: cmova ebx, esi */
    esi = MEM32(ebp + (-0x24)); /* 0x005F0EDC: mov esi, dword ptr [ebp - 0x24] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F0EDF: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F0EDF: shr eax, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x005F0EE2: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = ebx; /* 0x005F0EE5: mov dword ptr [ebp - 0x30], ebx */
    ebx = MEM32(ebp + (-0x10)); /* 0x005F0EE8: mov ebx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x2C)) = edx; /* 0x005F0EEB: mov dword ptr [ebp - 0x2c], edx */
    MEM32(eax + esi) = 5; /* 0x005F0EEE: mov dword ptr [eax + esi], 5 */
    goto L_005F0F09; /* 0x005F0EF5: jmp 0x5f0f09 */
L_005F0EF7:
    PUSH32(esp, ecx); /* 0x005F0EF7: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F0EF8: push 0x20 */
    eax = ebp + (-0x14); /* 0x005F0EFA: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005F0EFD: push eax */
    ecx = ebp + (-0x38); /* 0x005F0EFE: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_005F5800); /* 0x005F0F01: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x24)); /* 0x005F0F06: mov esi, dword ptr [ebp - 0x24] */
L_005F0F09:
    PUSH32(esp, 0); /* 0x005F0F09: push 0 */
    eax = ebp + (-0x38); /* 0x005F0F0B: lea eax, [ebp - 0x38] */
    ecx = edi; /* 0x005F0F0E: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005F0F10: push eax */
    PUSH32(esp, ebx); /* 0x005F0F11: push ebx */
    RECOMP_CALL(sub_005F13D0); /* 0x005F0F12: call 0x5f13d0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x005F0F17: mov byte ptr [ebp - 4], 0xb */
    /* test esi, esi */ /* 0x005F0F1B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F0F3E; /* 0x005F0F1D: je 0x5f0f3e */
L_005F0F1F:
    PUSH32(esp, esi); /* 0x005F0F1F: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F0F20: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F0F26: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = 0; /* 0x005F0F29: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005F0F30: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005F0F37: mov dword ptr [ebp - 0x1c], 0 */
L_005F0F3E:
    ecx = MEM32(edi + 0xE8); /* 0x005F0F3E: mov ecx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F0F44: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F0F49: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x005F0F4F: inc ebx */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F0F50: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x10)) = ebx; /* 0x005F0F52: mov dword ptr [ebp - 0x10], ebx */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F0F55: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F0F58: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F0F5A: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F0F5A: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F0F5D: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x005F0F5F: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F0E20; /* 0x005F0F61: jb 0x5f0e20 */
L_005F0F67:
    ecx = MEM32(edi + 0xF4); /* 0x005F0F67: mov ecx, dword ptr [edi + 0xf4] */
    eax = 0x66666667u; /* 0x005F0F6D: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xF0); /* 0x005F0F72: sub ecx, dword ptr [edi + 0xf0] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005F0F78: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F0F7A: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F0F7C: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F0F7F: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F0F81: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F0F81: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F0F84: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F0FC5; /* 0x005F0F86: je 0x5f0fc5 */
L_005F0F88:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F0F88: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ebx; /* 0x005F0F8A: lea ebx, [ebx] */
L_005F0F90:
    eax = MEM32(edi + 0xF0); /* 0x005F0F90: mov eax, dword ptr [edi + 0xf0] */
    ecx = edi; /* 0x005F0F96: mov ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005F0F98: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005F0F9A: push eax */
    RECOMP_CALL(sub_005F2980); /* 0x005F0F9B: call 0x5f2980 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xF4); /* 0x005F0FA0: mov ecx, dword ptr [edi + 0xf4] */
    eax = 0x66666667u; /* 0x005F0FA6: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xF0); /* 0x005F0FAB: sub ecx, dword ptr [edi + 0xf0] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x005F0FB1: inc ebx */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F0FB2: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x005F0FB4: add esi, 0x14 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F0FB7: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F0FBA: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F0FBC: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F0FBC: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F0FBF: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x005F0FC1: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F0F90; /* 0x005F0FC3: jb 0x5f0f90 */
L_005F0FC5:
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F0FC5: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F0FCB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0FD3; /* 0x005F0FCD: jne 0x5f0fd3 */
L_005F0FCF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F0FCF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F0FED; /* 0x005F0FD1: jmp 0x5f0fed */
L_005F0FD3:
    ecx = MEM32(0x928130); /* 0x005F0FD3: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F0FD9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F0FED; /* 0x005F0FDB: jne 0x5f0fed */
L_005F0FDD:
    ecx = 0x0092812Cu; /* 0x005F0FDD: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F0FE2: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F0FE7: mov ecx, dword ptr [0x928130] */
L_005F0FED:
    eax = MEM32(ecx); /* 0x005F0FED: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x005F0FEF: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC97C)); /* 0x005F0FF2: call dword ptr [0x7cc97c] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC694); /* 0x005F0FF8: mov ebx, dword ptr [0x7cc694] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005F0FFE: xorps xmm0, xmm0 */
    xmm_st(0x92812C, _xmm[0]); /* 0x005F1001: movdqu xmmword ptr [0x92812c], xmm0 */
    MEM32(0x92814C) = 0; /* 0x005F1009: mov dword ptr [0x92814c], 0 */
    xmm_st(0x92813C, _xmm[0]); /* 0x005F1013: movdqu xmmword ptr [0x92813c], xmm0 */
    PUSH32(esp, MEM32(edi + 0xAC)); /* 0x005F101B: push dword ptr [edi + 0xac] */
    RECOMP_ICALL(ebx); /* 0x005F1021: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1023: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x005F1026: mov byte ptr [ebp - 4], 0xa */
    eax = MEM32(edi + 0xF0); /* 0x005F102A: mov eax, dword ptr [edi + 0xf0] */
    /* test eax, eax */ /* 0x005F1030: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1058; /* 0x005F1032: je 0x5f1058 */
L_005F1034:
    PUSH32(esp, eax); /* 0x005F1034: push eax */
    RECOMP_ICALL(ebx); /* 0x005F1035: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1037: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0xF0) = 0; /* 0x005F103A: mov dword ptr [edi + 0xf0], 0 */
    MEM32(edi + 0xF4) = 0; /* 0x005F1044: mov dword ptr [edi + 0xf4], 0 */
    MEM32(edi + 0xF8) = 0; /* 0x005F104E: mov dword ptr [edi + 0xf8], 0 */
L_005F1058:
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x005F1058: mov byte ptr [ebp - 4], 9 */
    eax = MEM32(edi + 0xE4); /* 0x005F105C: mov eax, dword ptr [edi + 0xe4] */
    /* test eax, eax */ /* 0x005F1062: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F108A; /* 0x005F1064: je 0x5f108a */
L_005F1066:
    PUSH32(esp, eax); /* 0x005F1066: push eax */
    RECOMP_ICALL(ebx); /* 0x005F1067: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1069: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0xE4) = 0; /* 0x005F106C: mov dword ptr [edi + 0xe4], 0 */
    MEM32(edi + 0xE8) = 0; /* 0x005F1076: mov dword ptr [edi + 0xe8], 0 */
    MEM32(edi + 0xEC) = 0; /* 0x005F1080: mov dword ptr [edi + 0xec], 0 */
L_005F108A:
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005F108A: mov byte ptr [ebp - 4], 8 */
    esi = edi + 0xD0; /* 0x005F108E: lea esi, [edi + 0xd0] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005F1094: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005F1097: mov byte ptr [ebp - 4], 8 */
    MEM32(ebp + (-0x14)) = esi; /* 0x005F109B: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x005F109E: mov byte ptr [ebp - 4], 0x10 */
    ecx = esi; /* 0x005F10A2: mov ecx, esi */
    RECOMP_CALL(sub_005EC790); /* 0x005F10A4: call 0x5ec790 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x005F10A9: mov byte ptr [ebp - 4], 0x11 */
    PUSH32(esp, MEM32(esi)); /* 0x005F10AD: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x005F10AF: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F10B1: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x005F10B4: mov dword ptr [esi], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x005F10BA: mov byte ptr [ebp - 4], 7 */
    /* cmp MEM32(edi + 0xCC), 0x10u */ /* 0x005F10BE: cmp dword ptr [edi + 0xcc], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0xCC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F10D2; /* 0x005F10C5: jb 0x5f10d2 */
L_005F10C7:
    PUSH32(esp, MEM32(edi + 0xB8)); /* 0x005F10C7: push dword ptr [edi + 0xb8] */
    RECOMP_ICALL(ebx); /* 0x005F10CD: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F10CF: add esp, 4 */
    _flag_k = FK_ADD;
L_005F10D2:
    MEM32(edi + 0xCC) = 0xFu; /* 0x005F10D2: mov dword ptr [edi + 0xcc], 0xf */
    MEM32(edi + 0xC8) = 0; /* 0x005F10DC: mov dword ptr [edi + 0xc8], 0 */
    MEM8(edi + 0xB8) = (uint8_t)(0); /* 0x005F10E6: mov byte ptr [edi + 0xb8], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005F10ED: mov byte ptr [ebp - 4], 6 */
    eax = edi + 0x98; /* 0x005F10F1: lea eax, [edi + 0x98] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005F10F7: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005F10FA: mov byte ptr [ebp - 4], 6 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005F10FE: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(0x7CC998); /* 0x005F1102: mov esi, dword ptr [0x7cc998] */
    MEM32(eax) = 0x007F6874u; /* 0x005F1108: mov dword ptr [eax], 0x7f6874 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1116; /* 0x005F110E: je 0x5f1116 */
L_005F1110:
    PUSH32(esp, eax); /* 0x005F1110: push eax */
    RECOMP_ICALL(esi); /* 0x005F1111: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1113: add esp, 4 */
    _flag_k = FK_ADD;
L_005F1116:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005F1116: mov byte ptr [ebp - 4], 5 */
    eax = edi + 0x84; /* 0x005F111A: lea eax, [edi + 0x84] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005F1120: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005F1123: mov byte ptr [ebp - 4], 5 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005F1127: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007F6644u; /* 0x005F112B: mov dword ptr [eax], 0x7f6644 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1139; /* 0x005F1131: je 0x5f1139 */
L_005F1133:
    PUSH32(esp, eax); /* 0x005F1133: push eax */
    RECOMP_ICALL(esi); /* 0x005F1134: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1136: add esp, 4 */
    _flag_k = FK_ADD;
L_005F1139:
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005F1139: mov byte ptr [ebp - 4], 4 */
    eax = edi + 0x70; /* 0x005F113D: lea eax, [edi + 0x70] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005F1140: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005F1143: mov byte ptr [ebp - 4], 4 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005F1147: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007F68A4u; /* 0x005F114B: mov dword ptr [eax], 0x7f68a4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1159; /* 0x005F1151: je 0x5f1159 */
L_005F1153:
    PUSH32(esp, eax); /* 0x005F1153: push eax */
    RECOMP_ICALL(esi); /* 0x005F1154: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1156: add esp, 4 */
    _flag_k = FK_ADD;
L_005F1159:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005F1159: mov byte ptr [ebp - 4], 3 */
    eax = edi + 0x5C; /* 0x005F115D: lea eax, [edi + 0x5c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005F1160: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005F1163: mov byte ptr [ebp - 4], 3 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005F1167: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007E3488u; /* 0x005F116B: mov dword ptr [eax], 0x7e3488 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1179; /* 0x005F1171: je 0x5f1179 */
L_005F1173:
    PUSH32(esp, eax); /* 0x005F1173: push eax */
    RECOMP_ICALL(esi); /* 0x005F1174: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1176: add esp, 4 */
    _flag_k = FK_ADD;
L_005F1179:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005F1179: mov byte ptr [ebp - 4], 2 */
    eax = edi + 0x48; /* 0x005F117D: lea eax, [edi + 0x48] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005F1180: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005F1183: mov byte ptr [ebp - 4], 2 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005F1187: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007F692Cu; /* 0x005F118B: mov dword ptr [eax], 0x7f692c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1199; /* 0x005F1191: je 0x5f1199 */
L_005F1193:
    PUSH32(esp, eax); /* 0x005F1193: push eax */
    RECOMP_ICALL(esi); /* 0x005F1194: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1196: add esp, 4 */
    _flag_k = FK_ADD;
L_005F1199:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005F1199: mov byte ptr [ebp - 4], 1 */
    eax = edi + 0x34; /* 0x005F119D: lea eax, [edi + 0x34] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005F11A0: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005F11A3: mov byte ptr [ebp - 4], 1 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005F11A7: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007F6644u; /* 0x005F11AB: mov dword ptr [eax], 0x7f6644 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F11B9; /* 0x005F11B1: je 0x5f11b9 */
L_005F11B3:
    PUSH32(esp, eax); /* 0x005F11B3: push eax */
    RECOMP_ICALL(esi); /* 0x005F11B4: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F11B6: add esp, 4 */
    _flag_k = FK_ADD;
L_005F11B9:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005F11B9: mov byte ptr [ebp - 4], 0 */
    eax = edi + 0x20; /* 0x005F11BD: lea eax, [edi + 0x20] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005F11C0: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005F11C3: mov byte ptr [ebp - 4], 0 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005F11C7: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007E3488u; /* 0x005F11CB: mov dword ptr [eax], 0x7e3488 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F11D9; /* 0x005F11D1: je 0x5f11d9 */
L_005F11D3:
    PUSH32(esp, eax); /* 0x005F11D3: push eax */
    RECOMP_ICALL(esi); /* 0x005F11D4: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F11D6: add esp, 4 */
    _flag_k = FK_ADD;
L_005F11D9:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F11D9: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x005F11E0: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F11ED; /* 0x005F11E4: jb 0x5f11ed */
L_005F11E6:
    PUSH32(esp, MEM32(edi)); /* 0x005F11E6: push dword ptr [edi] */
    RECOMP_ICALL(ebx); /* 0x005F11E8: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F11EA: add esp, 4 */
    _flag_k = FK_ADD;
L_005F11ED:
    MEM32(edi + 0x14) = 0xFu; /* 0x005F11ED: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x005F11F4: mov dword ptr [edi + 0x10], 0 */
    MEM8(edi) = (uint8_t)(0); /* 0x005F11FB: mov byte ptr [edi], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F11FE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F1201: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F1208: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F1209: pop edi */
    esi = POP32_VAL(esp); /* 0x005F120A: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F120B: pop ebx */
    esp = ebp; /* 0x005F120C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F120E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F120F: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F1210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F1210u);

L_005F1210:
    PUSH32(esp, ebp); /* 0x005F1210: push ebp */
    ebp = esp; /* 0x005F1211: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F1213: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F1216: push -1 */
    PUSH32(esp, 0x007B2558u); /* 0x005F1218: push 0x7b2558 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F121D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F1223: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005F1224: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F1227: push ebx */
    PUSH32(esp, esi); /* 0x005F1228: push esi */
    PUSH32(esp, edi); /* 0x005F1229: push edi */
    eax = MEM32(0x855000); /* 0x005F122A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F122F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F1231: push eax */
    eax = esp + 0x20; /* 0x005F1232: lea eax, [esp + 0x20] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F1236: mov dword ptr fs:[0], eax */
    RECOMP_CALL(sub_005F32B0); /* 0x005F123C: call 0x5f32b0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005F1241: mov ecx, eax */
    edx = MEM32(eax); /* 0x005F1243: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x58)); /* 0x005F1245: call dword ptr [edx + 0x58] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005F1248: push eax */
    ecx = esp + 0x14; /* 0x005F1249: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005F30F0); /* 0x005F124D: call 0x5f30f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x28) = 0; /* 0x005F1252: mov dword ptr [esp + 0x28], 0 */
    eax = 0x92492493u; /* 0x005F125A: mov eax, 0x92492493 */
    edi = MEM32(esp + 0x14); /* 0x005F125F: mov edi, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F1263: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(esp + 0x10); /* 0x005F1265: mov ebx, dword ptr [esp + 0x10] */
    ecx = edi; /* 0x005F1269: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x005F126B: sub ecx, ebx */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F126D: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005F126F: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005F1271: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    ecx = edx; /* 0x005F1274: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005F1276: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005F1276: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005F1279: add ecx, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F12DA; /* 0x005F127B: je 0x5f12da */
L_005F127D:
    eax = MEM32(ebp + 0x8); /* 0x005F127D: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x005F1280: mov edx, dword ptr [eax] */
    eax = ebx; /* 0x005F1282: mov eax, ebx */
L_005F1284:
    /* cmp MEM32(eax), edx */ /* 0x005F1284: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F129B; /* 0x005F1286: jne 0x5f129b */
L_005F1288:
    ebx = MEM32(ebp + 0x8); /* 0x005F1288: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebx + 0x4); /* 0x005F128B: mov edi, dword ptr [ebx + 4] */
    /* cmp MEM32(eax + 0x4), edi */ /* 0x005F128E: cmp dword ptr [eax + 4], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(esp + 0x14); /* 0x005F1291: mov edi, dword ptr [esp + 0x14] */
    ebx = MEM32(esp + 0x10); /* 0x005F1295: mov ebx, dword ptr [esp + 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F12A5; /* 0x005F1299: je 0x5f12a5 */
L_005F129B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005F129B: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x70u; /* 0x005F129C: add eax, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x005F129F: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F1284; /* 0x005F12A1: jb 0x5f1284 */
L_005F12A3:
    goto L_005F12DA; /* 0x005F12A3: jmp 0x5f12da */
L_005F12A5:
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F12A5: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F12AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F12B3; /* 0x005F12AD: jne 0x5f12b3 */
L_005F12AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F12AF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F12CD; /* 0x005F12B1: jmp 0x5f12cd */
L_005F12B3:
    ecx = MEM32(0x928138); /* 0x005F12B3: mov ecx, dword ptr [0x928138] */
    /* test ecx, ecx */ /* 0x005F12B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F12CD; /* 0x005F12BB: jne 0x5f12cd */
L_005F12BD:
    ecx = 0x0092812Cu; /* 0x005F12BD: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F12C2: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928138); /* 0x005F12C7: mov ecx, dword ptr [0x928138] */
L_005F12CD:
    edx = MEM32(ebp + 0x8); /* 0x005F12CD: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x005F12D0: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x005F12D2: push dword ptr [edx + 4] */
    PUSH32(esp, MEM32(edx)); /* 0x005F12D5: push dword ptr [edx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x005F12D7: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_005F12DA:
    MEM32(esp + 0x28) = 0xFFFFFFFFu; /* 0x005F12DA: mov dword ptr [esp + 0x28], 0xffffffff */
    /* test ebx, ebx */ /* 0x005F12E2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1320; /* 0x005F12E4: je 0x5f1320 */
L_005F12E6:
    esi = ebx; /* 0x005F12E6: mov esi, ebx */
    /* cmp ebx, edi */ /* 0x005F12E8: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F12FE; /* 0x005F12EA: je 0x5f12fe */
L_005F12EC:
    esp = esp; /* 0x005F12EC: lea esp, [esp] */
L_005F12F0:
    ecx = esi; /* 0x005F12F0: mov ecx, esi */
    RECOMP_CALL(sub_0054E9F0); /* 0x005F12F2: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005F12F7: add esi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005F12FA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F12F0; /* 0x005F12FC: jne 0x5f12f0 */
L_005F12FE:
    PUSH32(esp, ebx); /* 0x005F12FE: push ebx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F12FF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1305: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = 0; /* 0x005F1308: mov dword ptr [esp + 0x10], 0 */
    MEM32(esp + 0x14) = 0; /* 0x005F1310: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x18) = 0; /* 0x005F1318: mov dword ptr [esp + 0x18], 0 */
L_005F1320:
    ecx = MEM32(esp + 0x20); /* 0x005F1320: mov ecx, dword ptr [esp + 0x20] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F1324: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F132B: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F132C: pop edi */
    esi = POP32_VAL(esp); /* 0x005F132D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F132E: pop ebx */
    esp = ebp; /* 0x005F132F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F1331: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F1332: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F1340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F1340u);

L_005F1340:
    PUSH32(esp, ebp); /* 0x005F1340: push ebp */
    ebp = esp; /* 0x005F1341: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005F1343: push ecx */
    PUSH32(esp, ebx); /* 0x005F1344: push ebx */
    PUSH32(esp, esi); /* 0x005F1345: push esi */
    PUSH32(esp, edi); /* 0x005F1346: push edi */
    edi = ecx; /* 0x005F1347: mov edi, ecx */
    eax = 0x66666667u; /* 0x005F1349: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005F134E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(edi + 0xE8); /* 0x005F1350: mov edx, dword ptr [edi + 0xe8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi + 0xE4); /* 0x005F1356: sub edx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005F135C: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F135E: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F1361: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F1363: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F1363: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F1366: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F13BE; /* 0x005F1368: je 0x5f13be */
L_005F136A:
    eax = MEM32(ebp + 0x8); /* 0x005F136A: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0xE4); /* 0x005F136D: mov esi, dword ptr [edi + 0xe4] */
    ecx = MEM32(eax); /* 0x005F1373: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x005F1375: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x8) = ecx; /* 0x005F1378: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x005F137B: mov dword ptr [ebp - 4], eax */
    edi = edi; /* 0x005F137E: mov edi, edi */
L_005F1380:
    /* cmp MEM32(esi), ecx */ /* 0x005F1380: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F1389; /* 0x005F1382: jne 0x5f1389 */
L_005F1384:
    /* cmp MEM32(esi + 0x4), eax */ /* 0x005F1384: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F13B6; /* 0x005F1387: je 0x5f13b6 */
L_005F1389:
    ecx = MEM32(edi + 0xE8); /* 0x005F1389: mov ecx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F138F: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F1394: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x005F139A: inc ebx */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F139B: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x005F139D: add esi, 0x14 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F13A0: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F13A3: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F13A5: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F13A5: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F13A8: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x005F13AA: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F13BE; /* 0x005F13AC: jae 0x5f13be */
L_005F13AE:
    ecx = MEM32(ebp + 0x8); /* 0x005F13AE: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x005F13B1: mov eax, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_005F1380; /* 0x005F13B4: jmp 0x5f1380 */
L_005F13B6:
    PUSH32(esp, ebx); /* 0x005F13B6: push ebx */
    ecx = edi; /* 0x005F13B7: mov ecx, edi */
    RECOMP_CALL(sub_005F1C20); /* 0x005F13B9: call 0x5f1c20 */
    RECOMP_FLAGS_IN();
L_005F13BE:
    edi = POP32_VAL(esp); /* 0x005F13BE: pop edi */
    esi = POP32_VAL(esp); /* 0x005F13BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F13C0: pop ebx */
    esp = ebp; /* 0x005F13C1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F13C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F13C4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F13D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F13D0u);

L_005F13D0:
    PUSH32(esp, ebp); /* 0x005F13D0: push ebp */
    ebp = esp; /* 0x005F13D1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005F13D3: push ebx */
    ebx = ecx; /* 0x005F13D4: mov ebx, ecx */
    eax = 0x66666667u; /* 0x005F13D6: mov eax, 0x66666667 */
    PUSH32(esp, esi); /* 0x005F13DB: push esi */
    PUSH32(esp, edi); /* 0x005F13DC: push edi */
    edx = MEM32(ebx + 0xE8); /* 0x005F13DD: mov edx, dword ptr [ebx + 0xe8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebx + 0xE4); /* 0x005F13E3: sub edx, dword ptr [ebx + 0xe4] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005F13E9: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F13EB: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F13EE: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F13F0: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F13F0: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F13F3: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x005F13F5: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F1473; /* 0x005F13F8: jae 0x5f1473 */
L_005F13FA:
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F13FA: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F1400: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1408; /* 0x005F1402: jne 0x5f1408 */
L_005F1404:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005F1404: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F1422; /* 0x005F1406: jmp 0x5f1422 */
L_005F1408:
    edi = MEM32(0x928138); /* 0x005F1408: mov edi, dword ptr [0x928138] */
    /* test edi, edi */ /* 0x005F140E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1422; /* 0x005F1410: jne 0x5f1422 */
L_005F1412:
    ecx = 0x0092812Cu; /* 0x005F1412: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F1417: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x928138); /* 0x005F141C: mov edi, dword ptr [0x928138] */
L_005F1422:
    esi = MEM32(ebp + 0xC); /* 0x005F1422: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x005F1425: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(edi); /* 0x005F1428: mov edx, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x005F142A: push 0 */
    esi = MEM32(esi + 0xC); /* 0x005F142C: mov esi, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005F142F: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 7; /* 0x005F1432: add esi, 7 */
    _flag_k = FK_ADD;
    ecx = eax + eax * 4; /* 0x005F1435: lea ecx, [eax + eax*4] */
    eax = MEM32(ebx + 0xE4); /* 0x005F1438: mov eax, dword ptr [ebx + 0xe4] */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x005F143E: shr esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 3u; /* 0x005F143E: shr esi, 3 */
    PUSH32(esp, esi); /* 0x005F1441: push esi */
    esi = MEM32(ebp + 0xC); /* 0x005F1442: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x005F1445: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0x4)); /* 0x005F1448: push dword ptr [eax + ecx*4 + 4] */
    PUSH32(esp, MEM32(eax + ecx * 4)); /* 0x005F144C: push dword ptr [eax + ecx*4] */
    eax = MEM32(edx); /* 0x005F144F: mov eax, dword ptr [edx] */
    ecx = edi; /* 0x005F1451: mov ecx, edi */
    RECOMP_ICALL(eax); /* 0x005F1453: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005F1455: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1473; /* 0x005F1457: je 0x5f1473 */
L_005F1459:
    eax = MEM32(esi + 0xC); /* 0x005F1459: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(ebx + 0xAC); /* 0x005F145C: mov ecx, dword ptr [ebx + 0xac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F1462: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F1465: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F1465: shr eax, 3 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x005F1468: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    SET_LO8(eax, 1); /* 0x005F146A: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005F146C: pop edi */
    esi = POP32_VAL(esp); /* 0x005F146D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F146E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005F146F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005F1470: ret 0xc */
L_005F1473:
    edi = POP32_VAL(esp); /* 0x005F1473: pop edi */
    esi = POP32_VAL(esp); /* 0x005F1474: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005F1475: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x005F1477: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005F1478: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005F1479: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005F1480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F1480u);

L_005F1480:
    PUSH32(esp, ebp); /* 0x005F1480: push ebp */
    ebp = esp; /* 0x005F1481: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F1483: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F1486: push -1 */
    PUSH32(esp, 0x007B25A8u); /* 0x005F1488: push 0x7b25a8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F148D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F1493: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005F1494: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F1497: push ebx */
    PUSH32(esp, esi); /* 0x005F1498: push esi */
    PUSH32(esp, edi); /* 0x005F1499: push edi */
    eax = MEM32(0x855000); /* 0x005F149A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F149F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F14A1: push eax */
    eax = esp + 0x38; /* 0x005F14A2: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F14A6: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005F14AC: mov edi, ecx */
    edx = MEM32(edi + 0xE8); /* 0x005F14AE: mov edx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F14B4: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi + 0xE4); /* 0x005F14B9: sub edx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005F14BF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005F14C1: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F14C3: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F14C6: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F14C8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F14C8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F14CB: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F150D; /* 0x005F14CD: je 0x5f150d */
L_005F14CF:
    esi = MEM32(edi + 0xE4); /* 0x005F14CF: mov esi, dword ptr [edi + 0xe4] */
L_005F14D5:
    eax = MEM32(ebp + 0x8); /* 0x005F14D5: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), eax */ /* 0x005F14D8: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F14E8; /* 0x005F14DA: jne 0x5f14e8 */
L_005F14DC:
    eax = MEM32(ebp + 0xC); /* 0x005F14DC: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x005F14DF: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F17AE; /* 0x005F14E2: je 0x5f17ae */
L_005F14E8:
    ecx = MEM32(edi + 0xE8); /* 0x005F14E8: mov ecx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F14EE: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F14F3: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x005F14F9: inc ebx */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F14FA: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x005F14FC: add esi, 0x14 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F14FF: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F1502: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F1504: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F1504: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F1507: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x005F1509: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F14D5; /* 0x005F150B: jb 0x5f14d5 */
L_005F150D:
    ecx = MEM32(edi + 0xF4); /* 0x005F150D: mov ecx, dword ptr [edi + 0xf4] */
    eax = 0x66666667u; /* 0x005F1513: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xF0); /* 0x005F1518: sub ecx, dword ptr [edi + 0xf0] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F151E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = MEM32(edi + 0xE8); /* 0x005F1520: mov ecx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F1526: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F152B: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) & 0xFF0FFFFFu; /* 0x005F1531: and dword ptr [esp + 0x18], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F1539: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    esi = edx; /* 0x005F153C: mov esi, edx */
    MEM32(esp + 0x14) = 0; /* 0x005F153E: mov dword ptr [esp + 0x14], 0 */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005F1546: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005F1546: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005F1549: add esi, edx */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = 0; /* 0x005F154B: mov dword ptr [esp + 0x20], 0 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F1553: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(esp + 0x24) = 0; /* 0x005F1555: mov dword ptr [esp + 0x24], 0 */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F155D: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F1560: mov eax, edx */
    MEM8(esp + 0x1B) = (uint8_t)(0); /* 0x005F1562: mov byte ptr [esp + 0x1b], 0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F1567: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F1567: shr eax, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005F156A: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005F156C: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, 0x10u */ /* 0x005F156E: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F1693; /* 0x005F1571: jb 0x5f1693 */
L_005F1577:
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) & 0xFFF00000u; /* 0x005F1577: and dword ptr [esp + 0x18], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = 0x800u; /* 0x005F157F: mov dword ptr [esp + 0x1c], 0x800 */
    MEM32(esp + 0x28) = 0; /* 0x005F1587: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005F158F: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005F1597: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x40) = 0; /* 0x005F159F: mov dword ptr [esp + 0x40], 0 */
    ecx = esp + 0x28; /* 0x005F15A7: lea ecx, [esp + 0x28] */
    PUSH32(esp, 0x100u); /* 0x005F15AB: push 0x100 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F15B0: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 1; /* 0x005F15B5: mov dword ptr [esp + 0x40], 1 */
    /* test MEM8(esp + 0x20), 7 */ /* 0x005F15BD: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x10) = 2; /* 0x005F15C2: mov dword ptr [esp + 0x10], 2 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F15F5; /* 0x005F15CA: jne 0x5f15f5 */
L_005F15CC:
    PUSH32(esp, 0x20u); /* 0x005F15CC: push 0x20 */
    ecx = esp + 0x18; /* 0x005F15CE: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005F15D2: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x20); /* 0x005F15D7: mov esi, dword ptr [esp + 0x20] */
    edi = MEM32(esp + 0x28); /* 0x005F15DB: mov edi, dword ptr [esp + 0x28] */
    eax = esi + 0x7; /* 0x005F15DF: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F15E2: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F15E2: shr eax, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x005F15E5: add esi, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = esi; /* 0x005F15E8: mov dword ptr [esp + 0x20], esi */
    MEM32(eax + edi) = 2; /* 0x005F15EC: mov dword ptr [eax + edi], 2 */
    goto L_005F160E; /* 0x005F15F3: jmp 0x5f160e */
L_005F15F5:
    PUSH32(esp, ecx); /* 0x005F15F5: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F15F6: push 0x20 */
    eax = esp + 0x18; /* 0x005F15F8: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005F15FC: push eax */
    ecx = esp + 0x20; /* 0x005F15FD: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005F1601: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esp + 0x28); /* 0x005F1606: mov edi, dword ptr [esp + 0x28] */
    esi = MEM32(esp + 0x20); /* 0x005F160A: mov esi, dword ptr [esp + 0x20] */
L_005F160E:
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F160E: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F1614: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F161C; /* 0x005F1616: jne 0x5f161c */
L_005F1618:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F1618: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F1636; /* 0x005F161A: jmp 0x5f1636 */
L_005F161C:
    ecx = MEM32(0x928138); /* 0x005F161C: mov ecx, dword ptr [0x928138] */
    /* test ecx, ecx */ /* 0x005F1622: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1636; /* 0x005F1624: jne 0x5f1636 */
L_005F1626:
    ecx = 0x0092812Cu; /* 0x005F1626: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F162B: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928138); /* 0x005F1630: mov ecx, dword ptr [0x928138] */
L_005F1636:
    edx = MEM32(ecx); /* 0x005F1636: mov edx, dword ptr [ecx] */
    eax = esi + 0x7; /* 0x005F1638: lea eax, [esi + 7] */
    PUSH32(esp, 0); /* 0x005F163B: push 0 */
    PUSH32(esp, 2); /* 0x005F163D: push 2 */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F163F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F163F: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005F1642: push eax */
    PUSH32(esp, edi); /* 0x005F1643: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005F1644: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005F1647: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx)); /* 0x005F164A: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x005F164C: mov dword ptr [esp + 0x40], 0xffffffff */
    /* test edi, edi */ /* 0x005F1654: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F17AE; /* 0x005F1656: je 0x5f17ae */
L_005F165C:
    PUSH32(esp, edi); /* 0x005F165C: push edi */
L_005F165D:
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F165D: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1663: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = 0; /* 0x005F1666: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005F166E: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005F1676: mov dword ptr [esp + 0x30], 0 */
    ecx = MEM32(esp + 0x38); /* 0x005F167E: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F1682: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F1689: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F168A: pop edi */
    esi = POP32_VAL(esp); /* 0x005F168B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F168C: pop ebx */
    esp = ebp; /* 0x005F168D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F168F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005F1690: ret 0x10 */
L_005F1693:
    RECOMP_CALL(sub_006EE000); /* 0x005F1693: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x1C); /* 0x005F1698: sub eax, dword ptr [edi + 0x1c] */
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC978); /* 0x005F169B: mov esi, dword ptr [0x7cc978] */
    MEM32(esp + 0x1C) = eax; /* 0x005F16A1: mov dword ptr [esp + 0x1c], eax */
    RECOMP_ICALL(esi); /* 0x005F16A5: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F16A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F16AF; /* 0x005F16A9: jne 0x5f16af */
L_005F16AB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F16AB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F16C9; /* 0x005F16AD: jmp 0x5f16c9 */
L_005F16AF:
    ecx = MEM32(0x928130); /* 0x005F16AF: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F16B5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F16C9; /* 0x005F16B7: jne 0x5f16c9 */
L_005F16B9:
    ecx = 0x0092812Cu; /* 0x005F16B9: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F16BE: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F16C3: mov ecx, dword ptr [0x928130] */
L_005F16C9:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005F16C9: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x005F16CC: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005F16CE: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005F16D1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005F16D4: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(eax + 0x74)); /* 0x005F16D7: call dword ptr [eax + 0x74] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F16DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1790; /* 0x005F16DC: je 0x5f1790 */
L_005F16E2:
    ecx = esp + 0x14; /* 0x005F16E2: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005F3C60); /* 0x005F16E6: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 3; /* 0x005F16EB: mov dword ptr [esp + 0x40], 3 */
    /* test MEM8(esp + 0x20), 7 */ /* 0x005F16F3: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x10) = 2; /* 0x005F16F8: mov dword ptr [esp + 0x10], 2 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1728; /* 0x005F1700: jne 0x5f1728 */
L_005F1702:
    PUSH32(esp, 0x20u); /* 0x005F1702: push 0x20 */
    ecx = esp + 0x18; /* 0x005F1704: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005F1708: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005F170D: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F1711: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F1714: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F1714: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005F1717: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = 2; /* 0x005F171B: mov dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x20u; /* 0x005F1721: add dword ptr [esp + 0x20], 0x20 */
    _flag_k = FK_ADD;
    goto L_005F1739; /* 0x005F1726: jmp 0x5f1739 */
L_005F1728:
    PUSH32(esp, ecx); /* 0x005F1728: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F1729: push 0x20 */
    eax = esp + 0x18; /* 0x005F172B: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005F172F: push eax */
    ecx = esp + 0x20; /* 0x005F1730: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005F1734: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F1739:
    RECOMP_ICALL(esi); /* 0x005F1739: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F173B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1743; /* 0x005F173D: jne 0x5f1743 */
L_005F173F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F173F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F175D; /* 0x005F1741: jmp 0x5f175d */
L_005F1743:
    ecx = MEM32(0x928138); /* 0x005F1743: mov ecx, dword ptr [0x928138] */
    /* test ecx, ecx */ /* 0x005F1749: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F175D; /* 0x005F174B: jne 0x5f175d */
L_005F174D:
    ecx = 0x0092812Cu; /* 0x005F174D: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F1752: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928138); /* 0x005F1757: mov ecx, dword ptr [0x928138] */
L_005F175D:
    eax = MEM32(esp + 0x20); /* 0x005F175D: mov eax, dword ptr [esp + 0x20] */
    edx = MEM32(ecx); /* 0x005F1761: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F1763: add eax, 7 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005F1766: push 0 */
    PUSH32(esp, 2); /* 0x005F1768: push 2 */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F176A: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F176A: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005F176D: push eax */
    PUSH32(esp, MEM32(esp + 0x34)); /* 0x005F176E: push dword ptr [esp + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005F1772: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005F1775: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx)); /* 0x005F1778: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x005F177A: mov dword ptr [esp + 0x40], 0xffffffff */
    eax = MEM32(esp + 0x28); /* 0x005F1782: mov eax, dword ptr [esp + 0x28] */
    /* test eax, eax */ /* 0x005F1786: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F17AE; /* 0x005F1788: je 0x5f17ae */
L_005F178A:
    PUSH32(esp, eax); /* 0x005F178A: push eax */
    RECOMP_BACKEDGE();
    goto L_005F165D; /* 0x005F178B: jmp 0x5f165d */
L_005F1790:
    eax = MEM32(ebp + 0x8); /* 0x005F1790: mov eax, dword ptr [ebp + 8] */
    ecx = edi + 0xF0; /* 0x005F1793: lea ecx, [edi + 0xf0] */
    MEM32(esp + 0x14) = eax; /* 0x005F1799: mov dword ptr [esp + 0x14], eax */
    eax = MEM32(ebp + 0xC); /* 0x005F179D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x18) = eax; /* 0x005F17A0: mov dword ptr [esp + 0x18], eax */
    eax = esp + 0x14; /* 0x005F17A4: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005F17A8: push eax */
    RECOMP_CALL(sub_005F31D0); /* 0x005F17A9: call 0x5f31d0 */
    RECOMP_FLAGS_IN();
L_005F17AE:
    ecx = MEM32(esp + 0x38); /* 0x005F17AE: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F17B2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F17B9: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F17BA: pop edi */
    esi = POP32_VAL(esp); /* 0x005F17BB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F17BC: pop ebx */
    esp = ebp; /* 0x005F17BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F17BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005F17C0: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005F17D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F17D0u);

L_005F17D0:
    PUSH32(esp, ebp); /* 0x005F17D0: push ebp */
    ebp = esp; /* 0x005F17D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F17D3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F17D6: push -1 */
    PUSH32(esp, 0x007B25F0u); /* 0x005F17D8: push 0x7b25f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F17DD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F17E3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x005F17E4: sub esp, 0x58 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F17E7: push ebx */
    PUSH32(esp, esi); /* 0x005F17E8: push esi */
    PUSH32(esp, edi); /* 0x005F17E9: push edi */
    eax = MEM32(0x855000); /* 0x005F17EA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F17EF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F17F1: push eax */
    eax = esp + 0x68; /* 0x005F17F2: lea eax, [esp + 0x68] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F17F6: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005F17FC: mov edi, ecx */
    MEM32(esp + 0x18) = edi; /* 0x005F17FE: mov dword ptr [esp + 0x18], edi */
    edx = MEM32(edi + 0xF4); /* 0x005F1802: mov edx, dword ptr [edi + 0xf4] */
    eax = 0x66666667u; /* 0x005F1808: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi + 0xF0); /* 0x005F180D: sub edx, dword ptr [edi + 0xf0] */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x005F1813: mov esi, dword ptr [ebp + 0xc] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005F1816: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F1818: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F181B: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F181D: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F181D: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F1820: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x005F1822: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F1C06; /* 0x005F1824: jae 0x5f1c06 */
L_005F182A:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x005F182A: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F1959; /* 0x005F182E: jne 0x5f1959 */
L_005F1834:
    ebx = MEM32(0x7CC978); /* 0x005F1834: mov ebx, dword ptr [0x7cc978] */
    RECOMP_ICALL(ebx); /* 0x005F183A: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F183C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1844; /* 0x005F183E: jne 0x5f1844 */
L_005F1840:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F1840: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F185E; /* 0x005F1842: jmp 0x5f185e */
L_005F1844:
    ecx = MEM32(0x928130); /* 0x005F1844: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F184A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F185E; /* 0x005F184C: jne 0x5f185e */
L_005F184E:
    ecx = 0x0092812Cu; /* 0x005F184E: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F1853: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F1858: mov ecx, dword ptr [0x928130] */
L_005F185E:
    eax = MEM32(edi + 0xF0); /* 0x005F185E: mov eax, dword ptr [edi + 0xf0] */
    esi = esi + esi * 4; /* 0x005F1864: lea esi, [esi + esi*4] */
    edx = MEM32(ecx); /* 0x005F1867: mov edx, dword ptr [ecx] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x005F1869: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x005F1869: shl esi, 2 */
    PUSH32(esp, MEM32(esi + eax + 0x4)); /* 0x005F186C: push dword ptr [esi + eax + 4] */
    PUSH32(esp, MEM32(esi + eax)); /* 0x005F1870: push dword ptr [esi + eax] */
    RECOMP_ICALL(MEM32(edx + 0x78)); /* 0x005F1873: call dword ptr [edx + 0x78] */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x44; /* 0x005F1876: lea ecx, [esp + 0x44] */
    RECOMP_CALL(sub_005F3C60); /* 0x005F187A: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x70) = 0; /* 0x005F187F: mov dword ptr [esp + 0x70], 0 */
    ecx = esp + 0x44; /* 0x005F1887: lea ecx, [esp + 0x44] */
    PUSH32(esp, 2); /* 0x005F188B: push 2 */
    RECOMP_CALL(sub_005F5560); /* 0x005F188D: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(ebx); /* 0x005F1892: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F1894: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F189C; /* 0x005F1896: jne 0x5f189c */
L_005F1898:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F1898: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F18B6; /* 0x005F189A: jmp 0x5f18b6 */
L_005F189C:
    ecx = MEM32(0x928138); /* 0x005F189C: mov ecx, dword ptr [0x928138] */
    /* test ecx, ecx */ /* 0x005F18A2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F18B6; /* 0x005F18A4: jne 0x5f18b6 */
L_005F18A6:
    ecx = 0x0092812Cu; /* 0x005F18A6: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F18AB: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928138); /* 0x005F18B0: mov ecx, dword ptr [0x928138] */
L_005F18B6:
    eax = MEM32(esp + 0x50); /* 0x005F18B6: mov eax, dword ptr [esp + 0x50] */
    edx = MEM32(ecx); /* 0x005F18BA: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F18BC: add eax, 7 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005F18BF: push 0 */
    PUSH32(esp, 2); /* 0x005F18C1: push 2 */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F18C3: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F18C3: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005F18C6: push eax */
    eax = MEM32(edi + 0xF0); /* 0x005F18C7: mov eax, dword ptr [edi + 0xf0] */
    PUSH32(esp, MEM32(esp + 0x64)); /* 0x005F18CD: push dword ptr [esp + 0x64] */
    PUSH32(esp, MEM32(esi + eax + 0x4)); /* 0x005F18D1: push dword ptr [esi + eax + 4] */
    PUSH32(esp, MEM32(esi + eax)); /* 0x005F18D5: push dword ptr [esi + eax] */
    RECOMP_ICALL(MEM32(edx)); /* 0x005F18D8: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xF0); /* 0x005F18DA: mov eax, dword ptr [edi + 0xf0] */
    ecx = esp + 0x44; /* 0x005F18E0: lea ecx, [esp + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005F18E4: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005F18E6: push eax */
    RECOMP_CALL(sub_005F4D80); /* 0x005F18E7: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xF0); /* 0x005F18EC: mov eax, dword ptr [edi + 0xf0] */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x005F18F2: push dword ptr [esp + 0x1c] */
    edx = MEM32(edi + 0xF4); /* 0x005F18F6: mov edx, dword ptr [edi + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005F18FC: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005F18FE: push eax */
    ecx = eax + 0x14; /* 0x005F18FF: lea ecx, [eax + 0x14] */
    RECOMP_CALL(sub_005F3A10); /* 0x005F1902: call 0x5f3a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0xF4)); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xF4) = MEM32(edi + 0xF4) + 0xFFFFFFECu; /* 0x005F1907: add dword ptr [edi + 0xf4], -0x14 */
    _flag_k = FK_ADD;
    eax = esp + 0x4C; /* 0x005F190E: lea eax, [esp + 0x4c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005F1912: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = edi + 0xD0; /* 0x005F1915: lea ecx, [edi + 0xd0] */
    PUSH32(esp, eax); /* 0x005F191B: push eax */
    RECOMP_CALL(sub_005EC6B0); /* 0x005F191C: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x70) = 0xFFFFFFFFu; /* 0x005F1921: mov dword ptr [esp + 0x70], 0xffffffff */
    eax = MEM32(esp + 0x58); /* 0x005F1929: mov eax, dword ptr [esp + 0x58] */
    /* test eax, eax */ /* 0x005F192D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1C06; /* 0x005F192F: je 0x5f1c06 */
L_005F1935:
    PUSH32(esp, eax); /* 0x005F1935: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F1936: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x5C) = 0; /* 0x005F193C: mov dword ptr [esp + 0x5c], 0 */
    MEM32(esp + 0x60) = 0; /* 0x005F1944: mov dword ptr [esp + 0x60], 0 */
    MEM32(esp + 0x64) = 0; /* 0x005F194C: mov dword ptr [esp + 0x64], 0 */
    goto L_005F1C03; /* 0x005F1954: jmp 0x5f1c03 */
L_005F1959:
    eax = MEM32(edi + 0xF0); /* 0x005F1959: mov eax, dword ptr [edi + 0xf0] */
    esi = esi + esi * 4; /* 0x005F195F: lea esi, [esi + esi*4] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x005F1962: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x005F1962: shl esi, 2 */
    ebx = edi + 0xE4; /* 0x005F1965: lea ebx, [edi + 0xe4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005F196B: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(esp + 0x1C) = ebx; /* 0x005F196D: mov dword ptr [esp + 0x1c], ebx */
    PUSH32(esp, eax); /* 0x005F1971: push eax */
    ecx = ebx; /* 0x005F1972: mov ecx, ebx */
    RECOMP_CALL(sub_005F31D0); /* 0x005F1974: call 0x5f31d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xF0); /* 0x005F1979: mov eax, dword ptr [edi + 0xf0] */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x005F197F: push dword ptr [esp + 0x1c] */
    edx = MEM32(edi + 0xF4); /* 0x005F1983: mov edx, dword ptr [edi + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005F1989: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005F198B: push eax */
    ecx = eax + 0x14; /* 0x005F198C: lea ecx, [eax + 0x14] */
    RECOMP_CALL(sub_005F3A10); /* 0x005F198F: call 0x5f3a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0xF4)); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xF4) = MEM32(edi + 0xF4) + 0xFFFFFFECu; /* 0x005F1994: add dword ptr [edi + 0xf4], -0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005F199B: add esp, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_006EE000); /* 0x005F199E: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005F19A3: mov ecx, eax */
    eax = MEM32(edi + 0xE8); /* 0x005F19A5: mov eax, dword ptr [edi + 0xe8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x1C); /* 0x005F19AB: sub ecx, dword ptr [edi + 0x1c] */
    _flag_k = FK_CMP;
    MEM32(eax + (-0xC)) = ecx; /* 0x005F19AE: mov dword ptr [eax - 0xc], ecx */
    ecx = esp + 0x24; /* 0x005F19B1: lea ecx, [esp + 0x24] */
    RECOMP_CALL(sub_005F3C60); /* 0x005F19B5: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x70) = 2; /* 0x005F19BA: mov dword ptr [esp + 0x70], 2 */
    ecx = esp + 0x24; /* 0x005F19C2: lea ecx, [esp + 0x24] */
    PUSH32(esp, 3); /* 0x005F19C6: push 3 */
    RECOMP_CALL(sub_005F5560); /* 0x005F19C8: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x005F19CD: mov ecx, dword ptr [ebx + 4] */
    eax = esp + 0x24; /* 0x005F19D0: lea eax, [esp + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x005F19D4: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x005F19D6: push 0 */
    PUSH32(esp, eax); /* 0x005F19D8: push eax */
    eax = 0x66666667u; /* 0x005F19D9: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F19DE: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = edi; /* 0x005F19E0: mov ecx, edi */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F19E2: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F19E5: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F19E7: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F19E7: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005F19EA: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F19EB: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005F19ED: push eax */
    RECOMP_CALL(sub_005F13D0); /* 0x005F19EE: call 0x5f13d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100u); /* 0x005F19F3: push 0x100 */
    ecx = esp + 0x3C; /* 0x005F19F8: lea ecx, [esp + 0x3c] */
    MEM32(esp + 0x30) = 0x800u; /* 0x005F19FC: mov dword ptr [esp + 0x30], 0x800 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F1A04: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x005F1A09: push 8 */
    ecx = esp + 0x28; /* 0x005F1A0B: lea ecx, [esp + 0x28] */
    MEM32(esp + 0x34) = 0; /* 0x005F1A0F: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005F1A17: mov dword ptr [esp + 0x38], 0 */
    RECOMP_CALL(sub_005F5560); /* 0x005F1A1F: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x921994)); /* 0x005F1A24: push dword ptr [0x921994] */
    ecx = esp + 0x28; /* 0x005F1A2A: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5560); /* 0x005F1A2E: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x921990); /* 0x005F1A33: mov eax, dword ptr [0x921990] */
    esi = MEM32(eax); /* 0x005F1A38: mov esi, dword ptr [eax] */
    MEM32(esp + 0x10) = esi; /* 0x005F1A3A: mov dword ptr [esp + 0x10], esi */
    /* cmp esi, eax */ /* 0x005F1A3E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F1AD5; /* 0x005F1A40: je 0x5f1ad5 */
L_005F1A46:
    goto L_005F1A50; /* 0x005F1A46: jmp 0x5f1a50 */
L_005F1A50:
    /* test MEM8(esp + 0x30), 7 */ /* 0x005F1A50: test byte ptr [esp + 0x30], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x30)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = esi + 0x10; /* 0x005F1A55: lea edi, [esi + 0x10] */
    ebx = MEM32(edi + 0x10); /* 0x005F1A58: mov ebx, dword ptr [edi + 0x10] */
    MEM32(esp + 0x14) = ebx; /* 0x005F1A5B: mov dword ptr [esp + 0x14], ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1A83; /* 0x005F1A5F: jne 0x5f1a83 */
L_005F1A61:
    PUSH32(esp, 0x20u); /* 0x005F1A61: push 0x20 */
    ecx = esp + 0x28; /* 0x005F1A63: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F3D70); /* 0x005F1A67: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x30); /* 0x005F1A6C: mov eax, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F1A70: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F1A73: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F1A73: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x38); /* 0x005F1A76: add eax, dword ptr [esp + 0x38] */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x005F1A7A: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0x20u; /* 0x005F1A7C: add dword ptr [esp + 0x30], 0x20 */
    _flag_k = FK_ADD;
    goto L_005F1A94; /* 0x005F1A81: jmp 0x5f1a94 */
L_005F1A83:
    PUSH32(esp, ecx); /* 0x005F1A83: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F1A84: push 0x20 */
    eax = esp + 0x1C; /* 0x005F1A86: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005F1A8A: push eax */
    ecx = esp + 0x30; /* 0x005F1A8B: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_005F5800); /* 0x005F1A8F: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F1A94:
    /* test ebx, ebx */ /* 0x005F1A94: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1AAB; /* 0x005F1A96: je 0x5f1aab */
L_005F1A98:
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x005F1A98: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F1AA0; /* 0x005F1A9C: jb 0x5f1aa0 */
L_005F1A9E:
    edi = MEM32(edi); /* 0x005F1A9E: mov edi, dword ptr [edi] */
L_005F1AA0:
    PUSH32(esp, ebx); /* 0x005F1AA0: push ebx */
    PUSH32(esp, edi); /* 0x005F1AA1: push edi */
    ecx = esp + 0x2C; /* 0x005F1AA2: lea ecx, [esp + 0x2c] */
    RECOMP_CALL(sub_005F5730); /* 0x005F1AA6: call 0x5f5730 */
    RECOMP_FLAGS_IN();
L_005F1AAB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x28u; /* 0x005F1AAB: add esi, 0x28 */
    _flag_k = FK_ADD;
    ecx = esp + 0x24; /* 0x005F1AAE: lea ecx, [esp + 0x24] */
    PUSH32(esp, esi); /* 0x005F1AB2: push esi */
    RECOMP_CALL(sub_005F4C20); /* 0x005F1AB3: call 0x5f4c20 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x10; /* 0x005F1AB8: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_0040B880); /* 0x005F1ABC: call 0x40b880 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x10); /* 0x005F1AC1: mov esi, dword ptr [esp + 0x10] */
    /* cmp esi, MEM32(0x921990) */ /* 0x005F1AC5: cmp esi, dword ptr [0x921990] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x921990));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F1A50; /* 0x005F1ACB: jne 0x5f1a50 */
L_005F1ACD:
    edi = MEM32(esp + 0x18); /* 0x005F1ACD: mov edi, dword ptr [esp + 0x18] */
    ebx = MEM32(esp + 0x1C); /* 0x005F1AD1: mov ebx, dword ptr [esp + 0x1c] */
L_005F1AD5:
    ecx = MEM32(ebx + 0x4); /* 0x005F1AD5: mov ecx, dword ptr [ebx + 4] */
    eax = 0x66666667u; /* 0x005F1AD8: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x005F1ADD: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F1ADF: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, 2); /* 0x005F1AE1: push 2 */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F1AE3: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    ecx = esp + 0x28; /* 0x005F1AE6: lea ecx, [esp + 0x28] */
    eax = edx; /* 0x005F1AEA: mov eax, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x005F1AEC: dec edx */
    _flag_k = FK_DEC;
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F1AED: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F1AED: shr eax, 0x1f */
    PUSH32(esp, ecx); /* 0x005F1AF0: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F1AF1: add eax, edx */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x005F1AF3: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005F1AF5: push eax */
    RECOMP_CALL(sub_005F13D0); /* 0x005F1AF6: call 0x5f13d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100u); /* 0x005F1AFB: push 0x100 */
    ecx = esp + 0x3C; /* 0x005F1B00: lea ecx, [esp + 0x3c] */
    MEM32(esp + 0x30) = 0x800u; /* 0x005F1B04: mov dword ptr [esp + 0x30], 0x800 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F1B0C: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x005F1B11: push 0x20 */
    ecx = esp + 0x28; /* 0x005F1B13: lea ecx, [esp + 0x28] */
    MEM32(esp + 0x34) = 0; /* 0x005F1B17: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005F1B1F: mov dword ptr [esp + 0x38], 0 */
    RECOMP_CALL(sub_005F3D70); /* 0x005F1B27: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x30); /* 0x005F1B2C: mov eax, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F1B30: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F1B33: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F1B33: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x38); /* 0x005F1B36: add eax, dword ptr [esp + 0x38] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x20Bu; /* 0x005F1B3A: mov dword ptr [eax], 0x20b */
    eax = 0x66666667u; /* 0x005F1B40: mov eax, 0x66666667 */
    ebx = MEM32(esp + 0x30); /* 0x005F1B45: mov ebx, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x20u; /* 0x005F1B49: add ebx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x30) = ebx; /* 0x005F1B4C: mov dword ptr [esp + 0x30], ebx */
    ecx = MEM32(edi + 0xE8); /* 0x005F1B50: mov ecx, dword ptr [edi + 0xe8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F1B56: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F1B5C: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F1B5E: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F1B61: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F1B63: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F1B63: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F1B66: add eax, edx */
    _flag_k = FK_ADD;
    ecx = eax + eax * 4; /* 0x005F1B68: lea ecx, [eax + eax*4] */
    eax = MEM32(edi + 0xE4); /* 0x005F1B6B: mov eax, dword ptr [edi + 0xe4] */
    ecx = ecx + (-0x5); /* 0x005F1B71: lea ecx, [ecx - 5] */
    ecx = eax + ecx * 4; /* 0x005F1B74: lea ecx, [eax + ecx*4] */
    eax = MEM32(ecx); /* 0x005F1B77: mov eax, dword ptr [ecx] */
    MEM32(esp + 0x1C) = eax; /* 0x005F1B79: mov dword ptr [esp + 0x1c], eax */
    eax = MEM32(ecx + 0x4); /* 0x005F1B7D: mov eax, dword ptr [ecx + 4] */
    MEM32(esp + 0x20) = eax; /* 0x005F1B80: mov dword ptr [esp + 0x20], eax */
    /* test LO8(ebx), 7 */ /* 0x005F1B84: test bl, 7 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1BB3; /* 0x005F1B87: jne 0x5f1bb3 */
L_005F1B89:
    PUSH32(esp, 0x40u); /* 0x005F1B89: push 0x40 */
    ecx = esp + 0x28; /* 0x005F1B8B: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F3D70); /* 0x005F1B8F: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x30); /* 0x005F1B94: mov eax, dword ptr [esp + 0x30] */
    _xmm[0].u64[0] = MEM64(esp + 0x1C); _xmm[0].u64[1] = 0; /* 0x005F1B98: movq xmm0, qword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F1B9E: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F1BA1: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F1BA1: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x38); /* 0x005F1BA4: add eax, dword ptr [esp + 0x38] */
    _flag_k = FK_ADD;
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005F1BA8: movq qword ptr [eax], xmm0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0x40u; /* 0x005F1BAC: add dword ptr [esp + 0x30], 0x40 */
    _flag_k = FK_ADD;
    goto L_005F1BC4; /* 0x005F1BB1: jmp 0x5f1bc4 */
L_005F1BB3:
    PUSH32(esp, ecx); /* 0x005F1BB3: push ecx */
    PUSH32(esp, 0x40u); /* 0x005F1BB4: push 0x40 */
    eax = esp + 0x24; /* 0x005F1BB6: lea eax, [esp + 0x24] */
    PUSH32(esp, eax); /* 0x005F1BBA: push eax */
    ecx = esp + 0x30; /* 0x005F1BBB: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_005F5800); /* 0x005F1BBF: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F1BC4:
    eax = esp + 0x24; /* 0x005F1BC4: lea eax, [esp + 0x24] */
    PUSH32(esp, eax); /* 0x005F1BC8: push eax */
    ecx = edi + 0xD0; /* 0x005F1BC9: lea ecx, [edi + 0xd0] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005F1BCF: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x70) = 0xFFFFFFFFu; /* 0x005F1BD4: mov dword ptr [esp + 0x70], 0xffffffff */
    eax = MEM32(esp + 0x38); /* 0x005F1BDC: mov eax, dword ptr [esp + 0x38] */
    /* test eax, eax */ /* 0x005F1BE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1C06; /* 0x005F1BE2: je 0x5f1c06 */
L_005F1BE4:
    PUSH32(esp, eax); /* 0x005F1BE4: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F1BE5: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x3C) = 0; /* 0x005F1BEB: mov dword ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x40) = 0; /* 0x005F1BF3: mov dword ptr [esp + 0x40], 0 */
    MEM32(esp + 0x44) = 0; /* 0x005F1BFB: mov dword ptr [esp + 0x44], 0 */
L_005F1C03:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1C03: add esp, 4 */
    _flag_k = FK_ADD;
L_005F1C06:
    ecx = MEM32(esp + 0x68); /* 0x005F1C06: mov ecx, dword ptr [esp + 0x68] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F1C0A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F1C11: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F1C12: pop edi */
    esi = POP32_VAL(esp); /* 0x005F1C13: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F1C14: pop ebx */
    esp = ebp; /* 0x005F1C15: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F1C17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005F1C18: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005F1C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F1C20u);

L_005F1C20:
    PUSH32(esp, ebp); /* 0x005F1C20: push ebp */
    ebp = esp; /* 0x005F1C21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F1C23: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F1C26: push -1 */
    PUSH32(esp, 0x007AEC20u); /* 0x005F1C28: push 0x7aec20 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F1C2D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F1C33: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x005F1C34: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005F1C37: push esi */
    PUSH32(esp, edi); /* 0x005F1C38: push edi */
    eax = MEM32(0x855000); /* 0x005F1C39: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F1C3E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F1C40: push eax */
    eax = esp + 0x38; /* 0x005F1C41: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F1C45: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005F1C4B: mov edi, ecx */
    edx = MEM32(edi + 0xE8); /* 0x005F1C4D: mov edx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F1C53: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi + 0xE4); /* 0x005F1C58: sub edx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x005F1C5E: mov esi, dword ptr [ebp + 8] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005F1C61: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F1C63: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F1C66: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F1C68: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F1C68: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F1C6B: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x005F1C6D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F1D73; /* 0x005F1C6F: jae 0x5f1d73 */
L_005F1C75:
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F1C75: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F1C7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1C83; /* 0x005F1C7D: jne 0x5f1c83 */
L_005F1C7F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F1C7F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F1C9D; /* 0x005F1C81: jmp 0x5f1c9d */
L_005F1C83:
    ecx = MEM32(0x928130); /* 0x005F1C83: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F1C89: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1C9D; /* 0x005F1C8B: jne 0x5f1c9d */
L_005F1C8D:
    ecx = 0x0092812Cu; /* 0x005F1C8D: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F1C92: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F1C97: mov ecx, dword ptr [0x928130] */
L_005F1C9D:
    eax = MEM32(edi + 0xE4); /* 0x005F1C9D: mov eax, dword ptr [edi + 0xe4] */
    esi = esi + esi * 4; /* 0x005F1CA3: lea esi, [esi + esi*4] */
    edx = MEM32(ecx); /* 0x005F1CA6: mov edx, dword ptr [ecx] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x005F1CA8: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x005F1CA8: shl esi, 2 */
    PUSH32(esp, MEM32(esi + eax + 0x4)); /* 0x005F1CAB: push dword ptr [esi + eax + 4] */
    PUSH32(esp, MEM32(esi + eax)); /* 0x005F1CAF: push dword ptr [esi + eax] */
    RECOMP_ICALL(MEM32(edx + 0x78)); /* 0x005F1CB2: call dword ptr [edx + 0x78] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xE4); /* 0x005F1CB5: mov eax, dword ptr [edi + 0xe4] */
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x005F1CBB: push dword ptr [esp + 0x10] */
    edx = MEM32(edi + 0xE8); /* 0x005F1CBF: mov edx, dword ptr [edi + 0xe8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005F1CC5: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005F1CC7: push eax */
    ecx = eax + 0x14; /* 0x005F1CC8: lea ecx, [eax + 0x14] */
    RECOMP_CALL(sub_005F3A10); /* 0x005F1CCB: call 0x5f3a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0xE8)); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xE8) = MEM32(edi + 0xE8) + 0xFFFFFFECu; /* 0x005F1CD0: add dword ptr [edi + 0xe8], -0x14 */
    _flag_k = FK_ADD;
    ecx = esp + 0x1C; /* 0x005F1CD7: lea ecx, [esp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005F1CDB: add esp, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005F3C60); /* 0x005F1CDE: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0; /* 0x005F1CE3: mov dword ptr [esp + 0x40], 0 */
    /* test MEM8(esp + 0x20), 7 */ /* 0x005F1CEB: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x10) = 0x1F8u; /* 0x005F1CF0: mov dword ptr [esp + 0x10], 0x1f8 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1D20; /* 0x005F1CF8: jne 0x5f1d20 */
L_005F1CFA:
    PUSH32(esp, 0x20u); /* 0x005F1CFA: push 0x20 */
    ecx = esp + 0x18; /* 0x005F1CFC: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005F1D00: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005F1D05: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F1D09: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F1D0C: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F1D0C: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005F1D0F: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x1F8u; /* 0x005F1D13: mov dword ptr [eax], 0x1f8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x20u; /* 0x005F1D19: add dword ptr [esp + 0x20], 0x20 */
    _flag_k = FK_ADD;
    goto L_005F1D31; /* 0x005F1D1E: jmp 0x5f1d31 */
L_005F1D20:
    PUSH32(esp, ecx); /* 0x005F1D20: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F1D21: push 0x20 */
    eax = esp + 0x18; /* 0x005F1D23: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005F1D27: push eax */
    ecx = esp + 0x20; /* 0x005F1D28: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005F1D2C: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F1D31:
    eax = esp + 0x14; /* 0x005F1D31: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x005F1D35: push eax */
    ecx = edi + 0xD0; /* 0x005F1D36: lea ecx, [edi + 0xd0] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005F1D3C: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x005F1D41: mov dword ptr [esp + 0x40], 0xffffffff */
    eax = MEM32(esp + 0x28); /* 0x005F1D49: mov eax, dword ptr [esp + 0x28] */
    /* test eax, eax */ /* 0x005F1D4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1D73; /* 0x005F1D4F: je 0x5f1d73 */
L_005F1D51:
    PUSH32(esp, eax); /* 0x005F1D51: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F1D52: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1D58: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = 0; /* 0x005F1D5B: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005F1D63: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005F1D6B: mov dword ptr [esp + 0x30], 0 */
L_005F1D73:
    ecx = MEM32(esp + 0x38); /* 0x005F1D73: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F1D77: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F1D7E: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F1D7F: pop edi */
    esi = POP32_VAL(esp); /* 0x005F1D80: pop esi */
    esp = ebp; /* 0x005F1D81: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F1D83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F1D84: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F1D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F1D90u);

L_005F1D90:
    PUSH32(esp, ebp); /* 0x005F1D90: push ebp */
    ebp = esp; /* 0x005F1D91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F1D93: push -1 */
    PUSH32(esp, 0x007B26D5u); /* 0x005F1D95: push 0x7b26d5 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F1D9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F1DA0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x498u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x498u; /* 0x005F1DA1: sub esp, 0x498 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005F1DA7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F1DAC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005F1DAE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005F1DB1: push ebx */
    PUSH32(esp, esi); /* 0x005F1DB2: push esi */
    PUSH32(esp, edi); /* 0x005F1DB3: push edi */
    PUSH32(esp, eax); /* 0x005F1DB4: push eax */
    eax = ebp + (-0xC); /* 0x005F1DB5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F1DB8: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005F1DBE: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x005F1DC0: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x448)) = eax; /* 0x005F1DC3: mov dword ptr [ebp - 0x448], eax */
    MEM32(ebp + (-0x458)) = eax; /* 0x005F1DC9: mov dword ptr [ebp - 0x458], eax */
    MEM32(ebp + (-0x44C)) = 0; /* 0x005F1DCF: mov dword ptr [ebp - 0x44c], 0 */
    RECOMP_ICALL(MEM32(0x7CC974)); /* 0x005F1DD9: call dword ptr [0x7cc974] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x005F1DDF: mov ecx, edi */
    RECOMP_CALL(sub_005F2BF0); /* 0x005F1DE1: call 0x5f2bf0 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x005F1DE6: mov ecx, edi */
    RECOMP_CALL(sub_005F2F70); /* 0x005F1DE8: call 0x5f2f70 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x005F1DED: mov ecx, edi */
    RECOMP_CALL(sub_005F26A0); /* 0x005F1DEF: call 0x5f26a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x414))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x414)) = MEM32(ebp + (-0x414)) & 0xFF0FFFFFu; /* 0x005F1DF4: and dword ptr [ebp - 0x414], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(0x7CC6A8); /* 0x005F1DFE: mov esi, dword ptr [0x7cc6a8] */
    MEM8(ebp + (-0x411)) = (uint8_t)(0); /* 0x005F1E04: mov byte ptr [ebp - 0x411], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x414))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0x414)) = MEM32(ebp + (-0x414)) & 0xFFF00000u; /* 0x005F1E0B: and dword ptr [ebp - 0x414], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x418)) = 0; /* 0x005F1E15: mov dword ptr [ebp - 0x418], 0 */
    /* nop */ /* 0x005F1E1F: nop  */
L_005F1E20:
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F1E20: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F1E26: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1E2E; /* 0x005F1E28: jne 0x5f1e2e */
L_005F1E2A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F1E2A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F1E48; /* 0x005F1E2C: jmp 0x5f1e48 */
L_005F1E2E:
    ecx = MEM32(0x928138); /* 0x005F1E2E: mov ecx, dword ptr [0x928138] */
    /* test ecx, ecx */ /* 0x005F1E34: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1E48; /* 0x005F1E36: jne 0x5f1e48 */
L_005F1E38:
    ecx = 0x0092812Cu; /* 0x005F1E38: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F1E3D: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928138); /* 0x005F1E42: mov ecx, dword ptr [0x928138] */
L_005F1E48:
    eax = MEM32(ecx); /* 0x005F1E48: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x41C); /* 0x005F1E4A: lea edx, [ebp - 0x41c] */
    PUSH32(esp, 0); /* 0x005F1E50: push 0 */
    PUSH32(esp, edx); /* 0x005F1E52: push edx */
    eax = MEM32(eax + 0x4); /* 0x005F1E53: mov eax, dword ptr [eax + 4] */
    RECOMP_ICALL(eax); /* 0x005F1E56: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005F1E58: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F2354; /* 0x005F1E5A: je 0x5f2354 */
L_005F1E60:
    PUSH32(esp, MEM32(ebp + (-0x41C))); /* 0x005F1E60: push dword ptr [ebp - 0x41c] */
    RECOMP_CALL(sub_0077F3DF); /* 0x005F1E66: call 0x77f3df */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x005F1E6B: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1E6D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x444)) = ebx; /* 0x005F1E70: mov dword ptr [ebp - 0x444], ebx */
    MEM32(ebp + (-0x4)) = 1; /* 0x005F1E76: mov dword ptr [ebp - 4], 1 */
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F1E7D: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F1E83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1E8B; /* 0x005F1E85: jne 0x5f1e8b */
L_005F1E87:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F1E87: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F1EA5; /* 0x005F1E89: jmp 0x5f1ea5 */
L_005F1E8B:
    ecx = MEM32(0x928138); /* 0x005F1E8B: mov ecx, dword ptr [0x928138] */
    /* test ecx, ecx */ /* 0x005F1E91: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F1EA5; /* 0x005F1E93: jne 0x5f1ea5 */
L_005F1E95:
    ecx = 0x0092812Cu; /* 0x005F1E95: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F1E9A: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928138); /* 0x005F1E9F: mov ecx, dword ptr [0x928138] */
L_005F1EA5:
    eax = MEM32(ecx); /* 0x005F1EA5: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x418); /* 0x005F1EA7: lea edx, [ebp - 0x418] */
    PUSH32(esp, 0); /* 0x005F1EAD: push 0 */
    PUSH32(esp, edx); /* 0x005F1EAF: push edx */
    edx = ebp + (-0x41C); /* 0x005F1EB0: lea edx, [ebp - 0x41c] */
    eax = MEM32(eax + 0x8); /* 0x005F1EB6: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edx); /* 0x005F1EB9: push edx */
    PUSH32(esp, MEM32(ebp + (-0x41C))); /* 0x005F1EBA: push dword ptr [ebp - 0x41c] */
    PUSH32(esp, ebx); /* 0x005F1EC0: push ebx */
    RECOMP_ICALL(eax); /* 0x005F1EC1: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005F1EC3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F2346; /* 0x005F1EC5: je 0x5f2346 */
L_005F1ECB:
    esi = MEM32(ebp + (-0x41C)); /* 0x005F1ECB: mov esi, dword ptr [ebp - 0x41c] */
    /* cmp esi, 4 */ /* 0x005F1ED1: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F1EF3; /* 0x005F1ED4: jae 0x5f1ef3 */
L_005F1ED6:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005F1ED6: mov byte ptr [ebp - 4], 0 */
    esi = MEM32(0x7CC6A8); /* 0x005F1EDA: mov esi, dword ptr [0x7cc6a8] */
    /* test ebx, ebx */ /* 0x005F1EE0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1E20; /* 0x005F1EE2: je 0x5f1e20 */
L_005F1EE8:
    PUSH32(esp, ebx); /* 0x005F1EE8: push ebx */
    RECOMP_ICALL(esi); /* 0x005F1EE9: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F1EEB: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005F1E20; /* 0x005F1EEE: jmp 0x5f1e20 */
L_005F1EF3:
    ecx = ebp + (-0x440); /* 0x005F1EF3: lea ecx, [ebp - 0x440] */
    RECOMP_CALL(sub_005F3C60); /* 0x005F1EF9: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005F1EFE: mov byte ptr [ebp - 4], 2 */
    /* cmp esi, 0x100u */ /* 0x005F1F02: cmp esi, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F1F16; /* 0x005F1F08: jbe 0x5f1f16 */
L_005F1F0A:
    PUSH32(esp, esi); /* 0x005F1F0A: push esi */
    ecx = ebp + (-0x42C); /* 0x005F1F0B: lea ecx, [ebp - 0x42c] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F1F11: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
L_005F1F16:
    PUSH32(esp, esi); /* 0x005F1F16: push esi */
    PUSH32(esp, ebx); /* 0x005F1F17: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x42C))); /* 0x005F1F18: push dword ptr [ebp - 0x42c] */
    RECOMP_CALL(sub_00780838); /* 0x005F1F1E: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = esi * 8; /* 0x005F1F23: lea eax, [esi*8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005F1F2A: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x434)) = eax; /* 0x005F1F2D: mov dword ptr [ebp - 0x434], eax */
    MEM32(ebp + (-0x438)) = eax; /* 0x005F1F33: mov dword ptr [ebp - 0x438], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005F1F39: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(ebp + (-0x414)); /* 0x005F1F3D: mov eax, dword ptr [ebp - 0x414] */
    ecx = MEM32(ebp + (-0x418)); /* 0x005F1F43: mov ecx, dword ptr [ebp - 0x418] */
    MEM32(ebp + (-0x43C)) = eax; /* 0x005F1F49: mov dword ptr [ebp - 0x43c], eax */
    MEM32(ebp + (-0x474)) = eax; /* 0x005F1F4F: mov dword ptr [ebp - 0x474], eax */
    eax = MEM32(ebp + (-0x438)); /* 0x005F1F55: mov eax, dword ptr [ebp - 0x438] */
    MEM32(ebp + (-0x470)) = eax; /* 0x005F1F5B: mov dword ptr [ebp - 0x470], eax */
    eax = MEM32(ebp + (-0x434)); /* 0x005F1F61: mov eax, dword ptr [ebp - 0x434] */
    MEM32(ebp + (-0x46C)) = eax; /* 0x005F1F67: mov dword ptr [ebp - 0x46c], eax */
    eax = MEM32(ebp + (-0x430)); /* 0x005F1F6D: mov eax, dword ptr [ebp - 0x430] */
    MEM32(ebp + (-0x468)) = eax; /* 0x005F1F73: mov dword ptr [ebp - 0x468], eax */
    eax = ebp + (-0x42C); /* 0x005F1F79: lea eax, [ebp - 0x42c] */
    MEM32(ebp + (-0x440)) = ecx; /* 0x005F1F7F: mov dword ptr [ebp - 0x440], ecx */
    MEM32(ebp + (-0x478)) = ecx; /* 0x005F1F85: mov dword ptr [ebp - 0x478], ecx */
    ecx = ebp + (-0x464); /* 0x005F1F8B: lea ecx, [ebp - 0x464] */
    PUSH32(esp, eax); /* 0x005F1F91: push eax */
    RECOMP_CALL(sub_004E6D70); /* 0x005F1F92: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005F1F97: mov byte ptr [ebp - 4], 5 */
    eax = ebp + (-0x454); /* 0x005F1F9B: lea eax, [ebp - 0x454] */
    PUSH32(esp, eax); /* 0x005F1FA1: push eax */
    ecx = ebp + (-0x440); /* 0x005F1FA2: lea ecx, [ebp - 0x440] */
    RECOMP_CALL(sub_005F5260); /* 0x005F1FA8: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x454)); /* 0x005F1FAD: mov eax, dword ptr [ebp - 0x454] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFE0Bu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFE0Bu; /* 0x005F1FB3: add eax, 0xfffffe0b */
    _flag_k = FK_ADD;
    /* cmp eax, 4 */ /* 0x005F1FB8: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005F22A7; /* 0x005F1FBB: ja 0x5f22a7 */
L_005F1FC1:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x5F2534)); goto _ljump; }
L_005F1FC8:
    ecx = ebp + (-0x498); /* 0x005F1FC8: lea ecx, [ebp - 0x498] */
    RECOMP_CALL(sub_005F3C60); /* 0x005F1FCE: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005F1FD3: mov byte ptr [ebp - 4], 6 */
    ecx = ebp + (-0x498); /* 0x005F1FD7: lea ecx, [ebp - 0x498] */
    PUSH32(esp, 1); /* 0x005F1FDD: push 1 */
    RECOMP_CALL(sub_005F5560); /* 0x005F1FDF: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_005F0790); /* 0x005F1FE4: call 0x5f0790 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x4A0); /* 0x005F1FE9: lea ecx, [ebp - 0x4a0] */
    PUSH32(esp, ecx); /* 0x005F1FEF: push ecx */
    ecx = eax; /* 0x005F1FF0: mov ecx, eax */
    edx = MEM32(eax); /* 0x005F1FF2: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x28)); /* 0x005F1FF4: call dword ptr [edx + 0x28] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005F1FF7: push eax */
    ecx = ebp + (-0x498); /* 0x005F1FF8: lea ecx, [ebp - 0x498] */
    RECOMP_CALL(sub_005F4D80); /* 0x005F1FFE: call 0x5f4d80 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_005F0790); /* 0x005F2003: call 0x5f0790 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005F2008: mov ecx, eax */
    edx = MEM32(eax); /* 0x005F200A: mov edx, dword ptr [eax] */
    eax = MEM32(edx + 0x24); /* 0x005F200C: mov eax, dword ptr [edx + 0x24] */
    RECOMP_ICALL(eax); /* 0x005F200F: call eax */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x450)) = (uint8_t)(LO8(eax)); /* 0x005F2011: mov byte ptr [ebp - 0x450], al */
    ecx = ebp + (-0x498); /* 0x005F2017: lea ecx, [ebp - 0x498] */
    PUSH32(esp, MEM32(ebp + (-0x450))); /* 0x005F201D: push dword ptr [ebp - 0x450] */
    RECOMP_CALL(sub_005F59F0); /* 0x005F2023: call 0x5f59f0 */
    RECOMP_FLAGS_IN();
    eax = edi + 0xB8; /* 0x005F2028: lea eax, [edi + 0xb8] */
    PUSH32(esp, eax); /* 0x005F202E: push eax */
    ecx = ebp + (-0x498); /* 0x005F202F: lea ecx, [ebp - 0x498] */
    RECOMP_CALL(sub_005F56D0); /* 0x005F2035: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_005F07C0); /* 0x005F203A: call 0x5f07c0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005F203F: mov ecx, eax */
    eax = MEM32(ebp + (-0x48C)); /* 0x005F2041: mov eax, dword ptr [ebp - 0x48c] */
    PUSH32(esp, 0); /* 0x005F2047: push 0 */
    PUSH32(esp, 2); /* 0x005F2049: push 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F204B: add eax, 7 */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x005F204E: mov edx, dword ptr [ecx] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F2050: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F2050: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005F2053: push eax */
    PUSH32(esp, MEM32(ebp + (-0x484))); /* 0x005F2054: push dword ptr [ebp - 0x484] */
    PUSH32(esp, MEM32(ebp + (-0x414))); /* 0x005F205A: push dword ptr [ebp - 0x414] */
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x005F2060: push dword ptr [ebp - 0x418] */
    RECOMP_ICALL(MEM32(edx)); /* 0x005F2066: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005F2068: mov byte ptr [ebp - 4], 5 */
    ecx = ebp + (-0x498); /* 0x005F206C: lea ecx, [ebp - 0x498] */
    RECOMP_CALL(sub_005F3D00); /* 0x005F2072: call 0x5f3d00 */
    RECOMP_FLAGS_IN();
    goto L_005F22B9; /* 0x005F2077: jmp 0x5f22b9 */
L_005F207C:
    eax = ebp + (-0x420); /* 0x005F207C: lea eax, [ebp - 0x420] */
    MEM32(ebp + (-0x420)) = 0; /* 0x005F2082: mov dword ptr [ebp - 0x420], 0 */
    PUSH32(esp, eax); /* 0x005F208C: push eax */
    ecx = ebp + (-0x440); /* 0x005F208D: lea ecx, [ebp - 0x440] */
    RECOMP_CALL(sub_005F5260); /* 0x005F2093: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x420)); /* 0x005F2098: mov esi, dword ptr [ebp - 0x420] */
    /* test esi, esi */ /* 0x005F209E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F22B9; /* 0x005F20A0: je 0x5f22b9 */
L_005F20A6:
    PUSH32(esp, esi); /* 0x005F20A6: push esi */
    eax = ebp + (-0x410); /* 0x005F20A7: lea eax, [ebp - 0x410] */
    PUSH32(esp, eax); /* 0x005F20AD: push eax */
    ecx = ebp + (-0x440); /* 0x005F20AE: lea ecx, [ebp - 0x440] */
    RECOMP_CALL(sub_005F5790); /* 0x005F20B4: call 0x5f5790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005F20B9: push esi */
    eax = ebp + (-0x410); /* 0x005F20BA: lea eax, [ebp - 0x410] */
    ecx = edi; /* 0x005F20C0: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005F20C2: push eax */
    PUSH32(esp, MEM32(ebp + (-0x414))); /* 0x005F20C3: push dword ptr [ebp - 0x414] */
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x005F20C9: push dword ptr [ebp - 0x418] */
    RECOMP_CALL(sub_005F1480); /* 0x005F20CF: call 0x5f1480 */
    RECOMP_FLAGS_IN();
    goto L_005F22B9; /* 0x005F20D4: jmp 0x5f22b9 */
L_005F20D9:
    ecx = MEM32(edi + 0xE8); /* 0x005F20D9: mov ecx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F20DF: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F20E4: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F20EA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F20EC: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F20EE: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F20F1: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F20F3: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F20F3: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F20F6: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F22B9; /* 0x005F20F8: je 0x5f22b9 */
L_005F20FE:
    ecx = MEM32(edi + 0xE8); /* 0x005F20FE: mov ecx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F2104: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F2109: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x418)); /* 0x005F210F: mov ebx, dword ptr [ebp - 0x418] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F2115: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = MEM32(edi + 0xE4); /* 0x005F2117: mov eax, dword ptr [edi + 0xe4] */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F211D: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    ecx = edx; /* 0x005F2120: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005F2122: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005F2122: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005F2125: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x414)); /* 0x005F2127: mov edx, dword ptr [ebp - 0x414] */
    ecx = ecx; /* 0x005F212D: lea ecx, [ecx] */
L_005F2130:
    /* cmp MEM32(eax), ebx */ /* 0x005F2130: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F213D; /* 0x005F2132: jne 0x5f213d */
L_005F2134:
    /* cmp MEM32(eax + 0x4), edx */ /* 0x005F2134: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F22B9; /* 0x005F2137: je 0x5f22b9 */
L_005F213D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005F213D: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x005F213E: add eax, 0x14 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x005F2141: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F2130; /* 0x005F2143: jb 0x5f2130 */
L_005F2145:
    goto L_005F22B9; /* 0x005F2145: jmp 0x5f22b9 */
L_005F214A:
    ecx = MEM32(edi + 0xE8); /* 0x005F214A: mov ecx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F2150: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F2155: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F215B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F215D: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F215F: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F2162: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F2164: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F2164: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F2167: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F22B9; /* 0x005F2169: je 0x5f22b9 */
L_005F216F:
    ecx = MEM32(edi + 0xE8); /* 0x005F216F: mov ecx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F2175: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F217A: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x418)); /* 0x005F2180: mov ebx, dword ptr [ebp - 0x418] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F2186: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = MEM32(edi + 0xE4); /* 0x005F2188: mov eax, dword ptr [edi + 0xe4] */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F218E: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    ecx = edx; /* 0x005F2191: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005F2193: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005F2193: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005F2196: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x414)); /* 0x005F2198: mov edx, dword ptr [ebp - 0x414] */
    edi = edi; /* 0x005F219E: mov edi, edi */
L_005F21A0:
    /* cmp MEM32(eax), ebx */ /* 0x005F21A0: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F21A9; /* 0x005F21A2: jne 0x5f21a9 */
L_005F21A4:
    /* cmp MEM32(eax + 0x4), edx */ /* 0x005F21A4: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F21B6; /* 0x005F21A7: je 0x5f21b6 */
L_005F21A9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005F21A9: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x005F21AA: add eax, 0x14 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x005F21AD: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F21A0; /* 0x005F21AF: jb 0x5f21a0 */
L_005F21B1:
    goto L_005F22B9; /* 0x005F21B1: jmp 0x5f22b9 */
L_005F21B6:
    PUSH32(esp, esi); /* 0x005F21B6: push esi */
    ecx = edi; /* 0x005F21B7: mov ecx, edi */
    RECOMP_CALL(sub_005F2E20); /* 0x005F21B9: call 0x5f2e20 */
    RECOMP_FLAGS_IN();
    goto L_005F22B9; /* 0x005F21BE: jmp 0x5f22b9 */
L_005F21C3:
    ecx = MEM32(edi + 0xE8); /* 0x005F21C3: mov ecx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F21C9: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F21CE: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F21D4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x414)); /* 0x005F21D6: mov ebx, dword ptr [ebp - 0x414] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F21DC: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F21DE: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F21E1: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F21E3: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F21E3: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F21E6: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F21E8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x420)) = eax; /* 0x005F21EA: mov dword ptr [ebp - 0x420], eax */
L_005F21F0:
    /* cmp esi, eax */ /* 0x005F21F0: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F220B; /* 0x005F21F2: jae 0x5f220b */
L_005F21F4:
    eax = MEM32(edi + 0xE4); /* 0x005F21F4: mov eax, dword ptr [edi + 0xe4] */
    edx = MEM32(ebp + (-0x418)); /* 0x005F21FA: mov edx, dword ptr [ebp - 0x418] */
    /* cmp MEM32(ecx + eax), edx */ /* 0x005F2200: cmp dword ptr [ecx + eax], edx */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F220B; /* 0x005F2203: jne 0x5f220b */
L_005F2205:
    /* cmp MEM32(ecx + eax + 0x4), ebx */ /* 0x005F2205: cmp dword ptr [ecx + eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F2257; /* 0x005F2209: je 0x5f2257 */
L_005F220B:
    edx = MEM32(edi + 0xF4); /* 0x005F220B: mov edx, dword ptr [edi + 0xf4] */
    eax = 0x66666667u; /* 0x005F2211: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi + 0xF0); /* 0x005F2216: sub edx, dword ptr [edi + 0xf0] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005F221C: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F221E: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F2221: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F2223: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F2223: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F2226: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x005F2228: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F2243; /* 0x005F222A: jae 0x5f2243 */
L_005F222C:
    eax = MEM32(edi + 0xF0); /* 0x005F222C: mov eax, dword ptr [edi + 0xf0] */
    edx = MEM32(ebp + (-0x418)); /* 0x005F2232: mov edx, dword ptr [ebp - 0x418] */
    /* cmp MEM32(ecx + eax), edx */ /* 0x005F2238: cmp dword ptr [ecx + eax], edx */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F2243; /* 0x005F223B: jne 0x5f2243 */
L_005F223D:
    /* cmp MEM32(ecx + eax + 0x4), ebx */ /* 0x005F223D: cmp dword ptr [ecx + eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F2261; /* 0x005F2241: je 0x5f2261 */
L_005F2243:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x005F2243: add ecx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005F2246: inc esi */
    _flag_k = FK_INC;
    /* cmp ecx, 0x140u */ /* 0x005F2247: cmp ecx, 0x140 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x140u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F22A7; /* 0x005F224D: jae 0x5f22a7 */
L_005F224F:
    eax = MEM32(ebp + (-0x420)); /* 0x005F224F: mov eax, dword ptr [ebp - 0x420] */
    RECOMP_BACKEDGE();
    goto L_005F21F0; /* 0x005F2255: jmp 0x5f21f0 */
L_005F2257:
    PUSH32(esp, esi); /* 0x005F2257: push esi */
    ecx = edi; /* 0x005F2258: mov ecx, edi */
    RECOMP_CALL(sub_005F1C20); /* 0x005F225A: call 0x5f1c20 */
    RECOMP_FLAGS_IN();
    goto L_005F22A7; /* 0x005F225F: jmp 0x5f22a7 */
L_005F2261:
    RECOMP_CALL(sub_005F0790); /* 0x005F2261: call 0x5f0790 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005F2266: mov ecx, eax */
    esi = esi + esi * 4; /* 0x005F2268: lea esi, [esi + esi*4] */
    eax = MEM32(edi + 0xF0); /* 0x005F226B: mov eax, dword ptr [edi + 0xf0] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x005F2271: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x005F2271: shl esi, 2 */
    edx = MEM32(ecx); /* 0x005F2274: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + esi + 0x4)); /* 0x005F2276: push dword ptr [eax + esi + 4] */
    PUSH32(esp, MEM32(eax + esi)); /* 0x005F227A: push dword ptr [eax + esi] */
    RECOMP_ICALL(MEM32(edx + 0x68)); /* 0x005F227D: call dword ptr [edx + 0x68] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xF0); /* 0x005F2280: mov eax, dword ptr [edi + 0xf0] */
    PUSH32(esp, MEM32(ebp + (-0x458))); /* 0x005F2286: push dword ptr [ebp - 0x458] */
    edx = MEM32(edi + 0xF4); /* 0x005F228C: mov edx, dword ptr [edi + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005F2292: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005F2294: push eax */
    ecx = eax + 0x14; /* 0x005F2295: lea ecx, [eax + 0x14] */
    RECOMP_CALL(sub_005F3A10); /* 0x005F2298: call 0x5f3a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005F229D: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + 0xF4)); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xF4) = MEM32(edi + 0xF4) + 0xFFFFFFECu; /* 0x005F22A0: add dword ptr [edi + 0xf4], -0x14 */
    _flag_k = FK_ADD;
L_005F22A7:
    eax = ebp + (-0x478); /* 0x005F22A7: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x005F22AD: push eax */
    ecx = edi + 0xD0; /* 0x005F22AE: lea ecx, [edi + 0xd0] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005F22B4: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
L_005F22B9:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005F22B9: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(ebp + (-0x464)); /* 0x005F22BD: mov eax, dword ptr [ebp - 0x464] */
    ebx = MEM32(0x7CC694); /* 0x005F22C3: mov ebx, dword ptr [0x7cc694] */
    /* test eax, eax */ /* 0x005F22C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F22F1; /* 0x005F22CB: je 0x5f22f1 */
L_005F22CD:
    PUSH32(esp, eax); /* 0x005F22CD: push eax */
    RECOMP_ICALL(ebx); /* 0x005F22CE: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F22D0: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x464)) = 0; /* 0x005F22D3: mov dword ptr [ebp - 0x464], 0 */
    MEM32(ebp + (-0x460)) = 0; /* 0x005F22DD: mov dword ptr [ebp - 0x460], 0 */
    MEM32(ebp + (-0x45C)) = 0; /* 0x005F22E7: mov dword ptr [ebp - 0x45c], 0 */
L_005F22F1:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005F22F1: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(ebp + (-0x42C)); /* 0x005F22F5: mov eax, dword ptr [ebp - 0x42c] */
    /* test eax, eax */ /* 0x005F22FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F2323; /* 0x005F22FD: je 0x5f2323 */
L_005F22FF:
    PUSH32(esp, eax); /* 0x005F22FF: push eax */
    RECOMP_ICALL(ebx); /* 0x005F2300: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F2302: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x42C)) = 0; /* 0x005F2305: mov dword ptr [ebp - 0x42c], 0 */
    MEM32(ebp + (-0x428)) = 0; /* 0x005F230F: mov dword ptr [ebp - 0x428], 0 */
    MEM32(ebp + (-0x424)) = 0; /* 0x005F2319: mov dword ptr [ebp - 0x424], 0 */
L_005F2323:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005F2323: mov byte ptr [ebp - 4], 0 */
    eax = MEM32(ebp + (-0x444)); /* 0x005F2327: mov eax, dword ptr [ebp - 0x444] */
    esi = MEM32(0x7CC6A8); /* 0x005F232D: mov esi, dword ptr [0x7cc6a8] */
    /* test eax, eax */ /* 0x005F2333: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F1E20; /* 0x005F2335: je 0x5f1e20 */
L_005F233B:
    PUSH32(esp, eax); /* 0x005F233B: push eax */
    RECOMP_ICALL(esi); /* 0x005F233C: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F233E: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005F1E20; /* 0x005F2341: jmp 0x5f1e20 */
L_005F2346:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005F2346: mov byte ptr [ebp - 4], 0 */
    /* test ebx, ebx */ /* 0x005F234A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F2354; /* 0x005F234C: je 0x5f2354 */
L_005F234E:
    PUSH32(esp, ebx); /* 0x005F234E: push ebx */
    RECOMP_ICALL(esi); /* 0x005F234F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F2351: add esp, 4 */
    _flag_k = FK_ADD;
L_005F2354:
    /* cmp MEM32(edi + 0xE0), 0 */ /* 0x005F2354: cmp dword ptr [edi + 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xE0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F23D0; /* 0x005F235B: jne 0x5f23d0 */
L_005F235D:
    esi = MEM32(ebp + (-0x448)); /* 0x005F235D: mov esi, dword ptr [ebp - 0x448] */
    ecx = esi + 0x14; /* 0x005F2363: lea ecx, [esi + 0x14] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFF0FFFFFu; /* 0x005F2366: and dword ptr [esi + 4], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x7) = (uint8_t)(0); /* 0x005F236D: mov byte ptr [esi + 7], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFF00000u; /* 0x005F2371: and dword ptr [esi + 4], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0; /* 0x005F2378: mov dword ptr [esi], 0 */
    MEM32(esi + 0x8) = 0x800u; /* 0x005F237E: mov dword ptr [esi + 8], 0x800 */
    MEM32(esi + 0xC) = 0; /* 0x005F2385: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005F238C: mov dword ptr [esi + 0x10], 0 */
    MEM32(ecx) = 0; /* 0x005F2393: mov dword ptr [ecx], 0 */
    MEM32(ecx + 0x4) = 0; /* 0x005F2399: mov dword ptr [ecx + 4], 0 */
    MEM32(ecx + 0x8) = 0; /* 0x005F23A0: mov dword ptr [ecx + 8], 0 */
    MEM32(ebp + (-0x4)) = 9; /* 0x005F23A7: mov dword ptr [ebp - 4], 9 */
    PUSH32(esp, 0x100u); /* 0x005F23AE: push 0x100 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F23B3: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005F23B8: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x44C)) = 1; /* 0x005F23BF: mov dword ptr [ebp - 0x44c], 1 */
    eax = esi; /* 0x005F23C9: mov eax, esi */
    goto L_005F2515; /* 0x005F23CB: jmp 0x5f2515 */
L_005F23D0:
    eax = ebp + (-0x4A4); /* 0x005F23D0: lea eax, [ebp - 0x4a4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xD0u; /* 0x005F23D6: add edi, 0xd0 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005F23DC: push eax */
    ecx = edi; /* 0x005F23DD: mov ecx, edi */
    RECOMP_CALL(sub_005ECFB0); /* 0x005F23DF: call 0x5ecfb0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005F23E4: mov edx, eax */
    eax = MEM32(edx); /* 0x005F23E6: mov eax, dword ptr [edx] */
    /* test eax, eax */ /* 0x005F23E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F23EE; /* 0x005F23EA: je 0x5f23ee */
L_005F23EC:
    eax = MEM32(eax); /* 0x005F23EC: mov eax, dword ptr [eax] */
L_005F23EE:
    ecx = MEM32(eax + 0x8); /* 0x005F23EE: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0x4); /* 0x005F23F1: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x005F23F4: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    ecx = ecx & MEM32(edx + 0x8); /* 0x005F23F5: and ecx, dword ptr [edx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + ecx * 4); /* 0x005F23F8: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(ecx); /* 0x005F23FB: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x440)) = eax; /* 0x005F23FD: mov dword ptr [ebp - 0x440], eax */
    eax = MEM32(ecx + 0x4); /* 0x005F2403: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x43C)) = eax; /* 0x005F2406: mov dword ptr [ebp - 0x43c], eax */
    eax = MEM32(ecx + 0x8); /* 0x005F240C: mov eax, dword ptr [ecx + 8] */
    MEM32(ebp + (-0x438)) = eax; /* 0x005F240F: mov dword ptr [ebp - 0x438], eax */
    eax = MEM32(ecx + 0xC); /* 0x005F2415: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x434)) = eax; /* 0x005F2418: mov dword ptr [ebp - 0x434], eax */
    eax = MEM32(ecx + 0x10); /* 0x005F241E: mov eax, dword ptr [ecx + 0x10] */
    MEM32(ebp + (-0x430)) = eax; /* 0x005F2421: mov dword ptr [ebp - 0x430], eax */
    eax = ecx + 0x14; /* 0x005F2427: lea eax, [ecx + 0x14] */
    PUSH32(esp, eax); /* 0x005F242A: push eax */
    ecx = ebp + (-0x42C); /* 0x005F242B: lea ecx, [ebp - 0x42c] */
    RECOMP_CALL(sub_004E6D70); /* 0x005F2431: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xBu; /* 0x005F2436: mov dword ptr [ebp - 4], 0xb */
    ecx = MEM32(edi + 0x8); /* 0x005F243D: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0x4); /* 0x005F2440: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x005F2443: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    ecx = ecx & MEM32(edi + 0xC); /* 0x005F2444: and ecx, dword ptr [edi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax + ecx * 4); /* 0x005F2447: mov esi, dword ptr [eax + ecx*4] */
    MEM32(ebp + (-0x444)) = esi; /* 0x005F244A: mov dword ptr [ebp - 0x444], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x005F2450: mov byte ptr [ebp - 4], 0xb */
    eax = MEM32(esi + 0x14); /* 0x005F2454: mov eax, dword ptr [esi + 0x14] */
    /* test eax, eax */ /* 0x005F2457: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F247A; /* 0x005F2459: je 0x5f247a */
L_005F245B:
    PUSH32(esp, eax); /* 0x005F245B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F245C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F2462: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = 0; /* 0x005F2465: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x18) = 0; /* 0x005F246C: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x005F2473: mov dword ptr [esi + 0x1c], 0 */
L_005F247A:
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x10) = MEM32(edi + 0x10) - 1; /* 0x005F247A: dec dword ptr [edi + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_005F2488; /* 0x005F247D: jne 0x5f2488 */
L_005F247F:
    MEM32(edi + 0xC) = 0; /* 0x005F247F: mov dword ptr [edi + 0xc], 0 */
    goto L_005F248B; /* 0x005F2486: jmp 0x5f248b */
L_005F2488:
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1; /* 0x005F2488: inc dword ptr [edi + 0xc] */
    _flag_k = FK_INC;
L_005F248B:
    ebx = MEM32(ebp + (-0x448)); /* 0x005F248B: mov ebx, dword ptr [ebp - 0x448] */
    eax = MEM32(ebp + (-0x440)); /* 0x005F2491: mov eax, dword ptr [ebp - 0x440] */
    MEM32(ebx) = eax; /* 0x005F2497: mov dword ptr [ebx], eax */
    ecx = ebx + 0x14; /* 0x005F2499: lea ecx, [ebx + 0x14] */
    eax = MEM32(ebp + (-0x43C)); /* 0x005F249C: mov eax, dword ptr [ebp - 0x43c] */
    MEM32(ebx + 0x4) = eax; /* 0x005F24A2: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + (-0x438)); /* 0x005F24A5: mov eax, dword ptr [ebp - 0x438] */
    MEM32(ebx + 0x8) = eax; /* 0x005F24AB: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0x434)); /* 0x005F24AE: mov eax, dword ptr [ebp - 0x434] */
    MEM32(ebx + 0xC) = eax; /* 0x005F24B4: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + (-0x430)); /* 0x005F24B7: mov eax, dword ptr [ebp - 0x430] */
    MEM32(ebx + 0x10) = eax; /* 0x005F24BD: mov dword ptr [ebx + 0x10], eax */
    eax = ebp + (-0x42C); /* 0x005F24C0: lea eax, [ebp - 0x42c] */
    PUSH32(esp, eax); /* 0x005F24C6: push eax */
    RECOMP_CALL(sub_004E6D70); /* 0x005F24C7: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x005F24CC: mov byte ptr [ebp - 4], 0xb */
    MEM32(ebp + (-0x44C)) = 1; /* 0x005F24D0: mov dword ptr [ebp - 0x44c], 1 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F24DA: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(ebp + (-0x42C)); /* 0x005F24E1: mov eax, dword ptr [ebp - 0x42c] */
    /* test eax, eax */ /* 0x005F24E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F2513; /* 0x005F24E9: je 0x5f2513 */
L_005F24EB:
    PUSH32(esp, eax); /* 0x005F24EB: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F24EC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F24F2: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x42C)) = 0; /* 0x005F24F5: mov dword ptr [ebp - 0x42c], 0 */
    MEM32(ebp + (-0x428)) = 0; /* 0x005F24FF: mov dword ptr [ebp - 0x428], 0 */
    MEM32(ebp + (-0x424)) = 0; /* 0x005F2509: mov dword ptr [ebp - 0x424], 0 */
L_005F2513:
    eax = ebx; /* 0x005F2513: mov eax, ebx */
L_005F2515:
    ecx = MEM32(ebp + (-0xC)); /* 0x005F2515: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F2518: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F251F: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F2520: pop edi */
    esi = POP32_VAL(esp); /* 0x005F2521: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F2522: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005F2523: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005F2526: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005F2528: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005F252D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F252F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F2530: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x005F1FC8u: goto L_005F1FC8;
      case 0x005F207Cu: goto L_005F207C;
      case 0x005F20D9u: goto L_005F20D9;
      case 0x005F214Au: goto L_005F214A;
      case 0x005F21C3u: goto L_005F21C3;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_005F2550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F2550u);

L_005F2550:
    PUSH32(esp, ebp); /* 0x005F2550: push ebp */
    ebp = esp; /* 0x005F2551: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F2553: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F2556: push -1 */
    PUSH32(esp, 0x007B0DE0u); /* 0x005F2558: push 0x7b0de0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F255D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F2563: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005F2564: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005F2567: push esi */
    eax = MEM32(0x855000); /* 0x005F2568: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F256D: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F256F: push eax */
    eax = esp + 0x30; /* 0x005F2570: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F2574: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F257A: mov esi, ecx */
    ecx = esp + 0xC; /* 0x005F257C: lea ecx, [esp + 0xc] */
    RECOMP_CALL(sub_005F3C60); /* 0x005F2580: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0; /* 0x005F2585: mov dword ptr [esp + 0x38], 0 */
    /* test MEM8(esp + 0x18), 7 */ /* 0x005F258D: test byte ptr [esp + 0x18], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x18)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x8) = 0x190u; /* 0x005F2592: mov dword ptr [esp + 8], 0x190 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F25C2; /* 0x005F259A: jne 0x5f25c2 */
L_005F259C:
    PUSH32(esp, 0x20u); /* 0x005F259C: push 0x20 */
    ecx = esp + 0x10; /* 0x005F259E: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_005F3D70); /* 0x005F25A2: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x005F25A7: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F25AB: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F25AE: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F25AE: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x20); /* 0x005F25B1: add eax, dword ptr [esp + 0x20] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x190u; /* 0x005F25B5: mov dword ptr [eax], 0x190 */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x20u; /* 0x005F25BB: add dword ptr [esp + 0x18], 0x20 */
    _flag_k = FK_ADD;
    goto L_005F25D3; /* 0x005F25C0: jmp 0x5f25d3 */
L_005F25C2:
    PUSH32(esp, ecx); /* 0x005F25C2: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F25C3: push 0x20 */
    eax = esp + 0x10; /* 0x005F25C5: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x005F25C9: push eax */
    ecx = esp + 0x18; /* 0x005F25CA: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F5800); /* 0x005F25CE: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F25D3:
    eax = esp + 0xC; /* 0x005F25D3: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x005F25D7: push eax */
    ecx = esi + 0xD0; /* 0x005F25D8: lea ecx, [esi + 0xd0] */
    RECOMP_CALL(sub_005EC6B0); /* 0x005F25DE: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x005F25E3: mov ecx, esi */
    MEM8(esi + 0x19) = (uint8_t)(1); /* 0x005F25E5: mov byte ptr [esi + 0x19], 1 */
    RECOMP_CALL(sub_005F26A0); /* 0x005F25E9: call 0x5f26a0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x005F25EE: mov dword ptr [esp + 0x38], 0xffffffff */
    eax = MEM32(esp + 0x20); /* 0x005F25F6: mov eax, dword ptr [esp + 0x20] */
    /* test eax, eax */ /* 0x005F25FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F2620; /* 0x005F25FC: je 0x5f2620 */
L_005F25FE:
    PUSH32(esp, eax); /* 0x005F25FE: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F25FF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F2605: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = 0; /* 0x005F2608: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x24) = 0; /* 0x005F2610: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x28) = 0; /* 0x005F2618: mov dword ptr [esp + 0x28], 0 */
L_005F2620:
    ecx = MEM32(esp + 0x30); /* 0x005F2620: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F2624: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F262B: pop ecx */
    esi = POP32_VAL(esp); /* 0x005F262C: pop esi */
    esp = ebp; /* 0x005F262D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F262F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F2630: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F2640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F2640u);

L_005F2640:
    PUSH32(esp, esi); /* 0x005F2640: push esi */
    esi = ecx; /* 0x005F2641: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F2643: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F2649: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F265D; /* 0x005F264B: jne 0x5f265d */
L_005F264D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F264D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x005F264F: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x24); /* 0x005F2651: mov eax, dword ptr [eax + 0x24] */
    RECOMP_ICALL(eax); /* 0x005F2654: call eax */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x18) = (uint8_t)(LO8(eax)); /* 0x005F2656: mov byte ptr [esi + 0x18], al */
    esi = POP32_VAL(esp); /* 0x005F2659: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F265A: ret 4 */
L_005F265D:
    ecx = MEM32(0x928130); /* 0x005F265D: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F2663: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2677; /* 0x005F2665: jne 0x5f2677 */
L_005F2667:
    ecx = 0x0092812Cu; /* 0x005F2667: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F266C: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F2671: mov ecx, dword ptr [0x928130] */
L_005F2677:
    eax = MEM32(ecx); /* 0x005F2677: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x24); /* 0x005F2679: mov eax, dword ptr [eax + 0x24] */
    RECOMP_ICALL(eax); /* 0x005F267C: call eax */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x18) = (uint8_t)(LO8(eax)); /* 0x005F267E: mov byte ptr [esi + 0x18], al */
    esi = POP32_VAL(esp); /* 0x005F2681: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F2682: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F2690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F2690u);

L_005F2690:
    MEM8(ecx + 0x19) = (uint8_t)(0); /* 0x005F2690: mov byte ptr [ecx + 0x19], 0 */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F2694: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F26A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F26A0u);

L_005F26A0:
    PUSH32(esp, ebp); /* 0x005F26A0: push ebp */
    ebp = esp; /* 0x005F26A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F26A3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F26A6: push -1 */
    PUSH32(esp, 0x0079B3D8u); /* 0x005F26A8: push 0x79b3d8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F26AD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F26B3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x005F26B4: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005F26B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F26BC: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = eax; /* 0x005F26BE: mov dword ptr [esp + 0x18], eax */
    PUSH32(esp, ebx); /* 0x005F26C2: push ebx */
    PUSH32(esp, esi); /* 0x005F26C3: push esi */
    PUSH32(esp, edi); /* 0x005F26C4: push edi */
    eax = MEM32(0x855000); /* 0x005F26C5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F26CA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F26CC: push eax */
    eax = esp + 0x30; /* 0x005F26CD: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F26D1: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F26D7: mov esi, ecx */
    ebx = MEM32(0x7CC978); /* 0x005F26D9: mov ebx, dword ptr [0x7cc978] */
    RECOMP_ICALL(ebx); /* 0x005F26DF: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F26E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F26E9; /* 0x005F26E3: jne 0x5f26e9 */
L_005F26E5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F26E5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F2703; /* 0x005F26E7: jmp 0x5f2703 */
L_005F26E9:
    ecx = MEM32(0x928130); /* 0x005F26E9: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F26EF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2703; /* 0x005F26F1: jne 0x5f2703 */
L_005F26F3:
    ecx = 0x0092812Cu; /* 0x005F26F3: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F26F8: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F26FD: mov ecx, dword ptr [0x928130] */
L_005F2703:
    eax = MEM32(ecx); /* 0x005F2703: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(esi + 0xB0)); /* 0x005F2705: push dword ptr [esi + 0xb0] */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x005F270B: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(ebx); /* 0x005F270E: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F2710: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2718; /* 0x005F2712: jne 0x5f2718 */
L_005F2714:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F2714: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F2732; /* 0x005F2716: jmp 0x5f2732 */
L_005F2718:
    ecx = MEM32(0x928130); /* 0x005F2718: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F271E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2732; /* 0x005F2720: jne 0x5f2732 */
L_005F2722:
    ecx = 0x0092812Cu; /* 0x005F2722: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F2727: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F272C: mov ecx, dword ptr [0x928130] */
L_005F2732:
    eax = MEM32(ecx); /* 0x005F2732: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x005F2734: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x005F2736: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(ebx); /* 0x005F2739: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F273B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2743; /* 0x005F273D: jne 0x5f2743 */
L_005F273F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F273F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F275D; /* 0x005F2741: jmp 0x5f275d */
L_005F2743:
    ecx = MEM32(0x928130); /* 0x005F2743: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F2749: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F275D; /* 0x005F274B: jne 0x5f275d */
L_005F274D:
    ecx = 0x0092812Cu; /* 0x005F274D: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F2752: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F2757: mov ecx, dword ptr [0x928130] */
L_005F275D:
    /* cmp MEM32(esi + 0xCC), 0x10u */ /* 0x005F275D: cmp dword ptr [esi + 0xcc], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = esi + 0xB8; /* 0x005F2764: lea edx, [esi + 0xb8] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005F276E; /* 0x005F276A: jb 0x5f276e */
L_005F276C:
    edx = MEM32(edx); /* 0x005F276C: mov edx, dword ptr [edx] */
L_005F276E:
    eax = MEM32(ecx); /* 0x005F276E: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x005F2770: push edx */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x005F2771: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(ebx); /* 0x005F2774: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F2776: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F277E; /* 0x005F2778: jne 0x5f277e */
L_005F277A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F277A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F2798; /* 0x005F277C: jmp 0x5f2798 */
L_005F277E:
    ecx = MEM32(0x928130); /* 0x005F277E: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F2784: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2798; /* 0x005F2786: jne 0x5f2798 */
L_005F2788:
    ecx = 0x0092812Cu; /* 0x005F2788: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F278D: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F2792: mov ecx, dword ptr [0x928130] */
L_005F2798:
    eax = MEM32(ecx); /* 0x005F2798: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x005F279A: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x005F279C: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xE8); /* 0x005F279F: mov ecx, dword ptr [esi + 0xe8] */
    eax = 0x66666667u; /* 0x005F27A5: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0xE4); /* 0x005F27AA: sub ecx, dword ptr [esi + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005F27B0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F27B2: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F27B4: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F27B7: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F27B9: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F27B9: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F27BC: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F28B8; /* 0x005F27BE: je 0x5f28b8 */
L_005F27C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005F27C4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_005F27C6:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005F27C6: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F27CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F27D4; /* 0x005F27CE: jne 0x5f27d4 */
L_005F27D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F27D0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F27EE; /* 0x005F27D2: jmp 0x5f27ee */
L_005F27D4:
    ecx = MEM32(0x927AF0); /* 0x005F27D4: mov ecx, dword ptr [0x927af0] */
    /* test ecx, ecx */ /* 0x005F27DA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F27EE; /* 0x005F27DC: jne 0x5f27ee */
L_005F27DE:
    ecx = 0x00927AE8u; /* 0x005F27DE: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005F27E3: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF0); /* 0x005F27E8: mov ecx, dword ptr [0x927af0] */
L_005F27EE:
    eax = MEM32(esi + 0xE4); /* 0x005F27EE: mov eax, dword ptr [esi + 0xe4] */
    edx = MEM32(ecx); /* 0x005F27F4: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + edi + 0x4)); /* 0x005F27F6: push dword ptr [eax + edi + 4] */
    PUSH32(esp, MEM32(eax + edi)); /* 0x005F27FA: push dword ptr [eax + edi] */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x005F27FD: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005F2800: mov edx, eax */
    ecx = esp + 0x10; /* 0x005F2802: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_00541450); /* 0x005F2806: call 0x541450 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0; /* 0x005F280B: mov dword ptr [esp + 0x38], 0 */
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F2813: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F2819: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2821; /* 0x005F281B: jne 0x5f2821 */
L_005F281D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F281D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F283B; /* 0x005F281F: jmp 0x5f283b */
L_005F2821:
    ecx = MEM32(0x928130); /* 0x005F2821: mov ecx, dword ptr [0x928130] */
    /* test ecx, ecx */ /* 0x005F2827: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F283B; /* 0x005F2829: jne 0x5f283b */
L_005F282B:
    ecx = 0x0092812Cu; /* 0x005F282B: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F2830: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928130); /* 0x005F2835: mov ecx, dword ptr [0x928130] */
L_005F283B:
    /* cmp MEM32(esp + 0x24), 0x10u */ /* 0x005F283B: cmp dword ptr [esp + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esp + 0x10; /* 0x005F2840: lea eax, [esp + 0x10] */
    edx = MEM32(ecx); /* 0x005F2844: mov edx, dword ptr [ecx] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(esp + 0x10); } /* 0x005F2846: cmovae eax, dword ptr [esp + 0x10] */
    PUSH32(esp, 0); /* 0x005F284B: push 0 */
    PUSH32(esp, eax); /* 0x005F284D: push eax */
    eax = MEM32(esi + 0xE4); /* 0x005F284E: mov eax, dword ptr [esi + 0xe4] */
    PUSH32(esp, MEM32(edi + eax + 0x4)); /* 0x005F2854: push dword ptr [edi + eax + 4] */
    PUSH32(esp, MEM32(edi + eax)); /* 0x005F2858: push dword ptr [edi + eax] */
    RECOMP_ICALL(MEM32(edx + 0x6C)); /* 0x005F285B: call dword ptr [edx + 0x6c] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x005F285E: mov dword ptr [esp + 0x38], 0xffffffff */
    /* cmp MEM32(esp + 0x24), 0x10u */ /* 0x005F2866: cmp dword ptr [esp + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F287A; /* 0x005F286B: jb 0x5f287a */
L_005F286D:
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x005F286D: push dword ptr [esp + 0x10] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F2871: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F2877: add esp, 4 */
    _flag_k = FK_ADD;
L_005F287A:
    ecx = MEM32(esi + 0xE8); /* 0x005F287A: mov ecx, dword ptr [esi + 0xe8] */
    eax = 0x66666667u; /* 0x005F2880: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0xE4); /* 0x005F2885: sub ecx, dword ptr [esi + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x005F288B: inc ebx */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F288C: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x005F288E: add edi, 0x14 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x24) = 0xFu; /* 0x005F2891: mov dword ptr [esp + 0x24], 0xf */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F2899: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F289C: mov eax, edx */
    MEM32(esp + 0x20) = 0; /* 0x005F289E: mov dword ptr [esp + 0x20], 0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F28A6: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F28A6: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F28A9: add eax, edx */
    _flag_k = FK_ADD;
    MEM8(esp + 0x10) = (uint8_t)(0); /* 0x005F28AB: mov byte ptr [esp + 0x10], 0 */
    /* cmp ebx, eax */ /* 0x005F28B0: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F27C6; /* 0x005F28B2: jb 0x5f27c6 */
L_005F28B8:
    ecx = MEM32(esp + 0x30); /* 0x005F28B8: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F28BC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F28C3: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F28C4: pop edi */
    esi = POP32_VAL(esp); /* 0x005F28C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F28C6: pop ebx */
    ecx = MEM32(esp + 0x18); /* 0x005F28C7: mov ecx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005F28CB: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005F28CD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005F28D2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F28D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F28D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F28E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F28E0u);

L_005F28E0:
    PUSH32(esp, ebp); /* 0x005F28E0: push ebp */
    ebp = esp; /* 0x005F28E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005F28E3: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x005F28E6: mov eax, 0x66666667 */
    PUSH32(esp, ebx); /* 0x005F28EB: push ebx */
    PUSH32(esp, esi); /* 0x005F28EC: push esi */
    PUSH32(esp, edi); /* 0x005F28ED: push edi */
    edi = ecx; /* 0x005F28EE: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005F28F0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(edi + 0xF4); /* 0x005F28F2: mov edx, dword ptr [edi + 0xf4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi + 0xF0); /* 0x005F28F8: sub edx, dword ptr [edi + 0xf0] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005F28FE: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F2900: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F2903: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F2905: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F2905: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F2908: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F296C; /* 0x005F290A: je 0x5f296c */
L_005F290C:
    edx = MEM32(ebp + 0x8); /* 0x005F290C: mov edx, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0xF0); /* 0x005F290F: mov esi, dword ptr [edi + 0xf0] */
    eax = MEM32(edx); /* 0x005F2915: mov eax, dword ptr [edx] */
    ecx = MEM32(edx + 0x4); /* 0x005F2917: mov ecx, dword ptr [edx + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x005F291A: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x005F291D: mov dword ptr [ebp - 8], ecx */
L_005F2920:
    /* cmp MEM32(esi), eax */ /* 0x005F2920: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F2929; /* 0x005F2922: jne 0x5f2929 */
L_005F2924:
    /* cmp MEM32(esi + 0x4), ecx */ /* 0x005F2924: cmp dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F2956; /* 0x005F2927: je 0x5f2956 */
L_005F2929:
    ecx = MEM32(edi + 0xF4); /* 0x005F2929: mov ecx, dword ptr [edi + 0xf4] */
    eax = 0x66666667u; /* 0x005F292F: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xF0); /* 0x005F2934: sub ecx, dword ptr [edi + 0xf0] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x005F293A: inc ebx */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F293B: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x005F293D: add esi, 0x14 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F2940: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F2943: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F2945: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F2945: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F2948: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x005F294A: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F296C; /* 0x005F294C: jae 0x5f296c */
L_005F294E:
    eax = MEM32(ebp + (-0x4)); /* 0x005F294E: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x005F2951: mov ecx, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_005F2920; /* 0x005F2954: jmp 0x5f2920 */
L_005F2956:
    eax = MEM32(ebp + 0x8); /* 0x005F2956: mov eax, dword ptr [ebp + 8] */
    ecx = edi; /* 0x005F2959: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x005F295B: push ebx */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x005F295C: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x005F2960: sete al */
    eax = (uint32_t)LO8(eax); /* 0x005F2963: movzx eax, al */
    PUSH32(esp, eax); /* 0x005F2966: push eax */
    RECOMP_CALL(sub_005F17D0); /* 0x005F2967: call 0x5f17d0 */
    RECOMP_FLAGS_IN();
L_005F296C:
    edi = POP32_VAL(esp); /* 0x005F296C: pop edi */
    esi = POP32_VAL(esp); /* 0x005F296D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F296E: pop ebx */
    esp = ebp; /* 0x005F296F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F2971: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F2972: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F2980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F2980u);

L_005F2980:
    PUSH32(esp, ebp); /* 0x005F2980: push ebp */
    ebp = esp; /* 0x005F2981: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F2983: push -1 */
    PUSH32(esp, 0x007B2718u); /* 0x005F2985: push 0x7b2718 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F298A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F2990: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x005F2991: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F2994: push ebx */
    PUSH32(esp, esi); /* 0x005F2995: push esi */
    PUSH32(esp, edi); /* 0x005F2996: push edi */
    eax = MEM32(0x855000); /* 0x005F2997: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F299C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F299E: push eax */
    eax = ebp + (-0xC); /* 0x005F299F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F29A2: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005F29A8: mov ebx, ecx */
    edx = MEM32(ebx + 0xE8); /* 0x005F29AA: mov edx, dword ptr [ebx + 0xe8] */
    eax = 0x66666667u; /* 0x005F29B0: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebx + 0xE4); /* 0x005F29B5: sub edx, dword ptr [ebx + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005F29BB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005F29BD: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x18)) = edi; /* 0x005F29BF: mov dword ptr [ebp - 0x18], edi */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F29C2: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F29C5: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F29C7: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F29C7: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F29CA: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F2B56; /* 0x005F29CC: je 0x5f2b56 */
L_005F29D2:
    esi = MEM32(ebp + 0x8); /* 0x005F29D2: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x005F29D5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edx; /* 0x005F29D7: mov dword ptr [ebp - 0x14], edx */
    ebx = ebx; /* 0x005F29DA: lea ebx, [ebx] */
L_005F29E0:
    ecx = MEM32(ebx + 0xE4); /* 0x005F29E0: mov ecx, dword ptr [ebx + 0xe4] */
    eax = MEM32(edx + ecx); /* 0x005F29E6: mov eax, dword ptr [edx + ecx] */
    /* cmp eax, MEM32(esi) */ /* 0x005F29E9: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F29FD; /* 0x005F29EB: jne 0x5f29fd */
L_005F29ED:
    eax = MEM32(edx + ecx + 0x4); /* 0x005F29ED: mov eax, dword ptr [edx + ecx + 4] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x005F29F1: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F29FD; /* 0x005F29F4: jne 0x5f29fd */
L_005F29F6:
    eax = 1; /* 0x005F29F6: mov eax, 1 */
    goto L_005F29FF; /* 0x005F29FB: jmp 0x5f29ff */
L_005F29FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005F29FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_005F29FF:
    /* test LO8(eax), LO8(eax) */ /* 0x005F29FF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F2B24; /* 0x005F2A01: je 0x5f2b24 */
L_005F2A07:
    PUSH32(esp, edi); /* 0x005F2A07: push edi */
    ecx = ebx; /* 0x005F2A08: mov ecx, ebx */
    RECOMP_CALL(sub_005F1C20); /* 0x005F2A0A: call 0x5f1c20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0xFF0FFFFFu; /* 0x005F2A0F: and dword ptr [ebp - 0x38], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x35)) = (uint8_t)(0); /* 0x005F2A16: mov byte ptr [ebp - 0x35], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0xFFF00000u; /* 0x005F2A1A: and dword ptr [ebp - 0x38], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = 0; /* 0x005F2A21: mov dword ptr [ebp - 0x3c], 0 */
    MEM32(ebp + (-0x34)) = 0x800u; /* 0x005F2A28: mov dword ptr [ebp - 0x34], 0x800 */
    MEM32(ebp + (-0x30)) = 0; /* 0x005F2A2F: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x005F2A36: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x005F2A3D: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x005F2A44: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005F2A4B: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F2A52: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x28); /* 0x005F2A59: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0x100u); /* 0x005F2A5C: push 0x100 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F2A61: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005F2A66: mov dword ptr [ebp - 4], 1 */
    /* test MEM8(ebp + (-0x30)), 7 */ /* 0x005F2A6D: test byte ptr [ebp - 0x30], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x1C)) = 2; /* 0x005F2A71: mov dword ptr [ebp - 0x1c], 2 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2A9F; /* 0x005F2A78: jne 0x5f2a9f */
L_005F2A7A:
    PUSH32(esp, 0x20u); /* 0x005F2A7A: push 0x20 */
    ecx = ebp + (-0x3C); /* 0x005F2A7C: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005F3D70); /* 0x005F2A7F: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x30)); /* 0x005F2A84: mov esi, dword ptr [ebp - 0x30] */
    edi = MEM32(ebp + (-0x28)); /* 0x005F2A87: mov edi, dword ptr [ebp - 0x28] */
    eax = esi + 0x7; /* 0x005F2A8A: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F2A8D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F2A8D: shr eax, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x005F2A90: add esi, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = esi; /* 0x005F2A93: mov dword ptr [ebp - 0x30], esi */
    MEM32(eax + edi) = 2; /* 0x005F2A96: mov dword ptr [eax + edi], 2 */
    goto L_005F2AB4; /* 0x005F2A9D: jmp 0x5f2ab4 */
L_005F2A9F:
    PUSH32(esp, ecx); /* 0x005F2A9F: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F2AA0: push 0x20 */
    eax = ebp + (-0x1C); /* 0x005F2AA2: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x005F2AA5: push eax */
    ecx = ebp + (-0x3C); /* 0x005F2AA6: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005F5800); /* 0x005F2AA9: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x28)); /* 0x005F2AAE: mov edi, dword ptr [ebp - 0x28] */
    esi = MEM32(ebp + (-0x30)); /* 0x005F2AB1: mov esi, dword ptr [ebp - 0x30] */
L_005F2AB4:
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F2AB4: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F2ABA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2AC2; /* 0x005F2ABC: jne 0x5f2ac2 */
L_005F2ABE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F2ABE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F2ADC; /* 0x005F2AC0: jmp 0x5f2adc */
L_005F2AC2:
    ecx = MEM32(0x928138); /* 0x005F2AC2: mov ecx, dword ptr [0x928138] */
    /* test ecx, ecx */ /* 0x005F2AC8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2ADC; /* 0x005F2ACA: jne 0x5f2adc */
L_005F2ACC:
    ecx = 0x0092812Cu; /* 0x005F2ACC: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F2AD1: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928138); /* 0x005F2AD6: mov ecx, dword ptr [0x928138] */
L_005F2ADC:
    edx = MEM32(ecx); /* 0x005F2ADC: mov edx, dword ptr [ecx] */
    eax = esi + 0x7; /* 0x005F2ADE: lea eax, [esi + 7] */
    esi = MEM32(ebp + 0x8); /* 0x005F2AE1: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x005F2AE4: push 0 */
    PUSH32(esp, 2); /* 0x005F2AE6: push 2 */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F2AE8: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F2AE8: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005F2AEB: push eax */
    PUSH32(esp, edi); /* 0x005F2AEC: push edi */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005F2AED: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x005F2AF0: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(edx)); /* 0x005F2AF2: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F2AF4: mov dword ptr [ebp - 4], 0xffffffff */
    /* test edi, edi */ /* 0x005F2AFB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F2B1E; /* 0x005F2AFD: je 0x5f2b1e */
L_005F2AFF:
    PUSH32(esp, edi); /* 0x005F2AFF: push edi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F2B00: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F2B06: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = 0; /* 0x005F2B09: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x005F2B10: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005F2B17: mov dword ptr [ebp - 0x20], 0 */
L_005F2B1E:
    edi = MEM32(ebp + (-0x18)); /* 0x005F2B1E: mov edi, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0x14)); /* 0x005F2B21: mov edx, dword ptr [ebp - 0x14] */
L_005F2B24:
    ecx = MEM32(ebx + 0xE8); /* 0x005F2B24: mov ecx, dword ptr [ebx + 0xe8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x005F2B2A: add edx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0xE4); /* 0x005F2B2D: sub ecx, dword ptr [ebx + 0xe4] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x005F2B33: mov eax, 0x66666667 */
    MEM32(ebp + (-0x14)) = edx; /* 0x005F2B38: mov dword ptr [ebp - 0x14], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x005F2B3B: inc edi */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F2B3C: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0x18)) = edi; /* 0x005F2B3E: mov dword ptr [ebp - 0x18], edi */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F2B41: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F2B44: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F2B46: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F2B46: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F2B49: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x14)); /* 0x005F2B4B: mov edx, dword ptr [ebp - 0x14] */
    /* cmp edi, eax */ /* 0x005F2B4E: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F29E0; /* 0x005F2B50: jb 0x5f29e0 */
L_005F2B56:
    ecx = MEM32(ebp + (-0xC)); /* 0x005F2B56: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F2B59: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F2B60: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F2B61: pop edi */
    esi = POP32_VAL(esp); /* 0x005F2B62: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F2B63: pop ebx */
    esp = ebp; /* 0x005F2B64: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F2B66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F2B67: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F2B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F2B70u);

L_005F2B70:
    PUSH32(esp, ebp); /* 0x005F2B70: push ebp */
    ebp = esp; /* 0x005F2B71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F2B73: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x005F2B76: push esi */
    PUSH32(esp, edi); /* 0x005F2B77: push edi */
    esi = ecx; /* 0x005F2B78: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x7CC978)); /* 0x005F2B7A: call dword ptr [0x7cc978] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F2B80: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2B88; /* 0x005F2B82: jne 0x5f2b88 */
L_005F2B84:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F2B84: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F2BA2; /* 0x005F2B86: jmp 0x5f2ba2 */
L_005F2B88:
    ecx = MEM32(0x928138); /* 0x005F2B88: mov ecx, dword ptr [0x928138] */
    /* test ecx, ecx */ /* 0x005F2B8E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2BA2; /* 0x005F2B90: jne 0x5f2ba2 */
L_005F2B92:
    ecx = 0x0092812Cu; /* 0x005F2B92: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F2B97: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928138); /* 0x005F2B9C: mov ecx, dword ptr [0x928138] */
L_005F2BA2:
    edi = MEM32(ebp + 0xC); /* 0x005F2BA2: mov edi, dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x005F2BA5: mov edx, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x005F2BA7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005F2BA9: push dword ptr [ebp + 0x10] */
    eax = MEM32(edi + 0xC); /* 0x005F2BAC: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F2BAF: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F2BB2: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F2BB2: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005F2BB5: push eax */
    eax = MEM32(ebp + 0x8); /* 0x005F2BB6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x005F2BB9: push dword ptr [edi + 0x14] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005F2BBC: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x005F2BBF: push dword ptr [eax] */
    eax = MEM32(edx); /* 0x005F2BC1: mov eax, dword ptr [edx] */
    RECOMP_ICALL(eax); /* 0x005F2BC3: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005F2BC5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F2BE4; /* 0x005F2BC7: je 0x5f2be4 */
L_005F2BC9:
    eax = MEM32(edi + 0xC); /* 0x005F2BC9: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(esi + 0xAC); /* 0x005F2BCC: mov ecx, dword ptr [esi + 0xac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F2BD2: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F2BD5: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F2BD5: shr eax, 3 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x005F2BD8: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    SET_LO8(eax, 1); /* 0x005F2BDA: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005F2BDC: pop edi */
    esi = POP32_VAL(esp); /* 0x005F2BDD: pop esi */
    esp = ebp; /* 0x005F2BDE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F2BE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005F2BE1: ret 0xc */
L_005F2BE4:
    edi = POP32_VAL(esp); /* 0x005F2BE4: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005F2BE5: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005F2BE7: pop esi */
    esp = ebp; /* 0x005F2BE8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F2BEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005F2BEB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005F2BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F2BF0u);

L_005F2BF0:
    PUSH32(esp, ebp); /* 0x005F2BF0: push ebp */
    ebp = esp; /* 0x005F2BF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F2BF3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F2BF6: push -1 */
    PUSH32(esp, 0x007B1388u); /* 0x005F2BF8: push 0x7b1388 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F2BFD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F2C03: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x005F2C04: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F2C07: push ebx */
    PUSH32(esp, esi); /* 0x005F2C08: push esi */
    PUSH32(esp, edi); /* 0x005F2C09: push edi */
    eax = MEM32(0x855000); /* 0x005F2C0A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F2C0F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F2C11: push eax */
    eax = esp + 0x40; /* 0x005F2C12: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F2C16: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005F2C1C: mov edi, ecx */
    RECOMP_CALL(sub_006EE000); /* 0x005F2C1E: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xB4); /* 0x005F2C23: mov ecx, dword ptr [edi + 0xb4] */
    edx = eax; /* 0x005F2C29: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi + 0x1C); /* 0x005F2C2B: sub edx, dword ptr [edi + 0x1c] */
    _flag_k = FK_CMP;
    /* cmp edx, ecx */ /* 0x005F2C2E: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F2E00; /* 0x005F2C30: jb 0x5f2e00 */
L_005F2C36:
    eax = edx; /* 0x005F2C36: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005F2C38: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 0x3E8u */ /* 0x005F2C3A: cmp eax, 0x3e8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F2E00; /* 0x005F2C3F: jb 0x5f2e00 */
L_005F2C45:
    MEM32(edi + 0xB4) = edx; /* 0x005F2C45: mov dword ptr [edi + 0xb4], edx */
    RECOMP_CALL(sub_006EE000); /* 0x005F2C4B: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xE8); /* 0x005F2C50: mov ecx, dword ptr [edi + 0xe8] */
    esi = eax; /* 0x005F2C56: mov esi, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F2C58: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x005F2C5E: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edi + 0x1C); /* 0x005F2C63: sub esi, dword ptr [edi + 0x1c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005F2C66: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F2C68: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(esp + 0x14) = esi; /* 0x005F2C6A: mov dword ptr [esp + 0x14], esi */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F2C6E: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F2C71: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F2C73: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F2C73: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F2C76: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F2E00; /* 0x005F2C78: je 0x5f2e00 */
L_005F2C7E:
    MEM32(esp + 0x10) = ebx; /* 0x005F2C7E: mov dword ptr [esp + 0x10], ebx */
L_005F2C82:
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) & 0xFF0FFFFFu; /* 0x005F2C82: and dword ptr [esp + 0x20], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esp + 0x23) = (uint8_t)(0); /* 0x005F2C8A: mov byte ptr [esp + 0x23], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) & 0xFFF00000u; /* 0x005F2C8F: and dword ptr [esp + 0x20], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = 0; /* 0x005F2C97: mov dword ptr [esp + 0x1c], 0 */
    MEM32(esp + 0x24) = 0x800u; /* 0x005F2C9F: mov dword ptr [esp + 0x24], 0x800 */
    MEM32(esp + 0x28) = 0; /* 0x005F2CA7: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005F2CAF: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005F2CB7: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x005F2CBF: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005F2CC7: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x48) = 0; /* 0x005F2CCF: mov dword ptr [esp + 0x48], 0 */
    ecx = esp + 0x30; /* 0x005F2CD7: lea ecx, [esp + 0x30] */
    PUSH32(esp, 0x100u); /* 0x005F2CDB: push 0x100 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F2CE0: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 1; /* 0x005F2CE5: mov dword ptr [esp + 0x48], 1 */
    /* test MEM8(esp + 0x28), 7 */ /* 0x005F2CED: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x18) = 6; /* 0x005F2CF2: mov dword ptr [esp + 0x18], 6 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2D24; /* 0x005F2CFA: jne 0x5f2d24 */
L_005F2CFC:
    PUSH32(esp, 0x20u); /* 0x005F2CFC: push 0x20 */
    ecx = esp + 0x20; /* 0x005F2CFE: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005F2D02: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x28); /* 0x005F2D07: mov ecx, dword ptr [esp + 0x28] */
    eax = ecx + 0x7; /* 0x005F2D0B: lea eax, [ecx + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F2D0E: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F2D0E: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x30); /* 0x005F2D11: add eax, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005F2D15: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = ecx; /* 0x005F2D18: mov dword ptr [esp + 0x28], ecx */
    MEM32(eax) = 6; /* 0x005F2D1C: mov dword ptr [eax], 6 */
    goto L_005F2D35; /* 0x005F2D22: jmp 0x5f2d35 */
L_005F2D24:
    PUSH32(esp, ecx); /* 0x005F2D24: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F2D25: push 0x20 */
    eax = esp + 0x20; /* 0x005F2D27: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005F2D2B: push eax */
    ecx = esp + 0x28; /* 0x005F2D2C: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005F2D30: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F2D35:
    /* test MEM8(esp + 0x28), 7 */ /* 0x005F2D35: test byte ptr [esp + 0x28], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x28)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x18) = esi; /* 0x005F2D3A: mov dword ptr [esp + 0x18], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2D69; /* 0x005F2D3E: jne 0x5f2d69 */
L_005F2D40:
    PUSH32(esp, 0x20u); /* 0x005F2D40: push 0x20 */
    ecx = esp + 0x20; /* 0x005F2D42: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F3D70); /* 0x005F2D46: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x28); /* 0x005F2D4B: mov ecx, dword ptr [esp + 0x28] */
    esi = MEM32(esp + 0x30); /* 0x005F2D4F: mov esi, dword ptr [esp + 0x30] */
    edx = MEM32(esp + 0x14); /* 0x005F2D53: mov edx, dword ptr [esp + 0x14] */
    eax = ecx + 0x7; /* 0x005F2D57: lea eax, [ecx + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F2D5A: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F2D5A: shr eax, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005F2D5D: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = ecx; /* 0x005F2D60: mov dword ptr [esp + 0x28], ecx */
    MEM32(eax + esi) = edx; /* 0x005F2D64: mov dword ptr [eax + esi], edx */
    goto L_005F2D7E; /* 0x005F2D67: jmp 0x5f2d7e */
L_005F2D69:
    PUSH32(esp, ecx); /* 0x005F2D69: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F2D6A: push 0x20 */
    eax = esp + 0x20; /* 0x005F2D6C: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005F2D70: push eax */
    ecx = esp + 0x28; /* 0x005F2D71: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5800); /* 0x005F2D75: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x30); /* 0x005F2D7A: mov esi, dword ptr [esp + 0x30] */
L_005F2D7E:
    RECOMP_CALL(sub_006EE000); /* 0x005F2D7E: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xE4); /* 0x005F2D83: mov ecx, dword ptr [edi + 0xe4] */
    edx = MEM32(esp + 0x10); /* 0x005F2D89: mov edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x1C); /* 0x005F2D8D: sub eax, dword ptr [edi + 0x1c] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x005F2D90: push 0 */
    MEM32(edx + ecx + 0x10) = eax; /* 0x005F2D92: mov dword ptr [edx + ecx + 0x10], eax */
    eax = esp + 0x20; /* 0x005F2D96: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005F2D9A: push eax */
    PUSH32(esp, ebx); /* 0x005F2D9B: push ebx */
    ecx = edi; /* 0x005F2D9C: mov ecx, edi */
    RECOMP_CALL(sub_005F13D0); /* 0x005F2D9E: call 0x5f13d0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x005F2DA3: mov dword ptr [esp + 0x48], 0xffffffff */
    /* test esi, esi */ /* 0x005F2DAB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F2DD1; /* 0x005F2DAD: je 0x5f2dd1 */
L_005F2DAF:
    PUSH32(esp, esi); /* 0x005F2DAF: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F2DB0: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F2DB6: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x30) = 0; /* 0x005F2DB9: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x005F2DC1: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x005F2DC9: mov dword ptr [esp + 0x38], 0 */
L_005F2DD1:
    ecx = MEM32(edi + 0xE8); /* 0x005F2DD1: mov ecx, dword ptr [edi + 0xe8] */
    eax = 0x66666667u; /* 0x005F2DD7: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xE4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0xE4); /* 0x005F2DDC: sub ecx, dword ptr [edi + 0xe4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x005F2DE2: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 0x14u; /* 0x005F2DE3: add dword ptr [esp + 0x10], 0x14 */
    _flag_k = FK_ADD;
    esi = MEM32(esp + 0x14); /* 0x005F2DE8: mov esi, dword ptr [esp + 0x14] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F2DEC: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F2DEE: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F2DF1: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F2DF3: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F2DF3: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F2DF6: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x005F2DF8: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F2C82; /* 0x005F2DFA: jb 0x5f2c82 */
L_005F2E00:
    ecx = MEM32(esp + 0x40); /* 0x005F2E00: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F2E04: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F2E0B: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F2E0C: pop edi */
    esi = POP32_VAL(esp); /* 0x005F2E0D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F2E0E: pop ebx */
    esp = ebp; /* 0x005F2E0F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F2E11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F2E12: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F2E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F2E20u);

L_005F2E20:
    PUSH32(esp, ebp); /* 0x005F2E20: push ebp */
    ebp = esp; /* 0x005F2E21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F2E23: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F2E26: push -1 */
    PUSH32(esp, 0x007AEC20u); /* 0x005F2E28: push 0x7aec20 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F2E2D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F2E33: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005F2E34: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F2E37: push ebx */
    PUSH32(esp, esi); /* 0x005F2E38: push esi */
    PUSH32(esp, edi); /* 0x005F2E39: push edi */
    eax = MEM32(0x855000); /* 0x005F2E3A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F2E3F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F2E41: push eax */
    eax = esp + 0x38; /* 0x005F2E42: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F2E46: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F2E4C: mov esi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x005F2E4E: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(esi + 0xE4); /* 0x005F2E51: mov ebx, dword ptr [esi + 0xe4] */
    edi = eax + eax * 4; /* 0x005F2E57: lea edi, [eax + eax*4] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x005F2E5A: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x005F2E5A: shl edi, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x005F2E5D: add ebx, edi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + 0xC), 0 */ /* 0x005F2E5F: cmp dword ptr [ebx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F2E8D; /* 0x005F2E63: je 0x5f2e8d */
L_005F2E65:
    RECOMP_CALL(sub_006EE000); /* 0x005F2E65: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x1C); /* 0x005F2E6A: sub eax, dword ptr [esi + 0x1c] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x10); /* 0x005F2E6D: mov ecx, dword ptr [ebx + 0x10] */
    /* cmp eax, ecx */ /* 0x005F2E70: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F2E78; /* 0x005F2E72: jae 0x5f2e78 */
L_005F2E74:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005F2E74: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F2E7A; /* 0x005F2E76: jmp 0x5f2e7a */
L_005F2E78:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005F2E78: sub eax, ecx */
    _flag_k = FK_CMP;
L_005F2E7A:
    ecx = MEM32(ebx + 0xC); /* 0x005F2E7A: mov ecx, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x005F2E7D: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0xE4); /* 0x005F2E7F: mov eax, dword ptr [esi + 0xe4] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x005F2E85: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x005F2E85: shr ecx, 1 */
    MEM32(edi + eax + 0xC) = ecx; /* 0x005F2E87: mov dword ptr [edi + eax + 0xc], ecx */
    goto L_005F2EAC; /* 0x005F2E8B: jmp 0x5f2eac */
L_005F2E8D:
    RECOMP_CALL(sub_006EE000); /* 0x005F2E8D: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x1C); /* 0x005F2E92: sub eax, dword ptr [esi + 0x1c] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x10); /* 0x005F2E95: mov ecx, dword ptr [ebx + 0x10] */
    /* cmp eax, ecx */ /* 0x005F2E98: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F2EA0; /* 0x005F2E9A: jae 0x5f2ea0 */
L_005F2E9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005F2E9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F2EA2; /* 0x005F2E9E: jmp 0x5f2ea2 */
L_005F2EA0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005F2EA0: sub eax, ecx */
    _flag_k = FK_CMP;
L_005F2EA2:
    ecx = MEM32(esi + 0xE4); /* 0x005F2EA2: mov ecx, dword ptr [esi + 0xe4] */
    MEM32(edi + ecx + 0xC) = eax; /* 0x005F2EA8: mov dword ptr [edi + ecx + 0xc], eax */
L_005F2EAC:
    RECOMP_CALL(sub_006EE000); /* 0x005F2EAC: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xE4); /* 0x005F2EB1: mov ecx, dword ptr [esi + 0xe4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x1C); /* 0x005F2EB7: sub eax, dword ptr [esi + 0x1c] */
    _flag_k = FK_CMP;
    MEM32(edi + ecx + 0x10) = eax; /* 0x005F2EBA: mov dword ptr [edi + ecx + 0x10], eax */
    ecx = esp + 0x14; /* 0x005F2EBE: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005F3C60); /* 0x005F2EC2: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0; /* 0x005F2EC7: mov dword ptr [esp + 0x40], 0 */
    /* test MEM8(esp + 0x20), 7 */ /* 0x005F2ECF: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x10) = 7; /* 0x005F2ED4: mov dword ptr [esp + 0x10], 7 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F2F04; /* 0x005F2EDC: jne 0x5f2f04 */
L_005F2EDE:
    PUSH32(esp, 0x20u); /* 0x005F2EDE: push 0x20 */
    ecx = esp + 0x18; /* 0x005F2EE0: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005F2EE4: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x005F2EE9: mov eax, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F2EED: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F2EF0: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F2EF0: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005F2EF3: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    MEM32(eax) = 7; /* 0x005F2EF7: mov dword ptr [eax], 7 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x20u; /* 0x005F2EFD: add dword ptr [esp + 0x20], 0x20 */
    _flag_k = FK_ADD;
    goto L_005F2F15; /* 0x005F2F02: jmp 0x5f2f15 */
L_005F2F04:
    PUSH32(esp, ecx); /* 0x005F2F04: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F2F05: push 0x20 */
    eax = esp + 0x18; /* 0x005F2F07: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005F2F0B: push eax */
    ecx = esp + 0x20; /* 0x005F2F0C: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005F2F10: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F2F15:
    PUSH32(esp, 0); /* 0x005F2F15: push 0 */
    eax = esp + 0x18; /* 0x005F2F17: lea eax, [esp + 0x18] */
    ecx = esi; /* 0x005F2F1B: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005F2F1D: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005F2F1E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005F13D0); /* 0x005F2F21: call 0x5f13d0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x005F2F26: mov dword ptr [esp + 0x40], 0xffffffff */
    eax = MEM32(esp + 0x28); /* 0x005F2F2E: mov eax, dword ptr [esp + 0x28] */
    /* test eax, eax */ /* 0x005F2F32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F2F58; /* 0x005F2F34: je 0x5f2f58 */
L_005F2F36:
    PUSH32(esp, eax); /* 0x005F2F36: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F2F37: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F2F3D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = 0; /* 0x005F2F40: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005F2F48: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005F2F50: mov dword ptr [esp + 0x30], 0 */
L_005F2F58:
    ecx = MEM32(esp + 0x38); /* 0x005F2F58: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F2F5C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F2F63: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F2F64: pop edi */
    esi = POP32_VAL(esp); /* 0x005F2F65: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F2F66: pop ebx */
    esp = ebp; /* 0x005F2F67: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F2F69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F2F6A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F2F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F2F70u);

L_005F2F70:
    PUSH32(esp, ebp); /* 0x005F2F70: push ebp */
    ebp = esp; /* 0x005F2F71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F2F73: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x005F2F76: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005F2F79: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F2F7E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = eax; /* 0x005F2F80: mov dword ptr [esp + 0x18], eax */
    PUSH32(esp, ebx); /* 0x005F2F84: push ebx */
    ebx = ecx; /* 0x005F2F85: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x005F2F87: push esi */
    esi = MEM32(0x870278); /* 0x005F2F88: mov esi, dword ptr [0x870278] */
    PUSH32(esp, edi); /* 0x005F2F8E: push edi */
    edi = MEM32(ebx + 0xAC); /* 0x005F2F8F: mov edi, dword ptr [ebx + 0xac] */
    RECOMP_CALL(sub_006EE000); /* 0x005F2F95: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005F2F9A: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x24); /* 0x005F2F9C: sub eax, dword ptr [edi + 0x24] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x3E8u */ /* 0x005F2F9F: cmp eax, 0x3e8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F2FDC; /* 0x005F2FA4: jb 0x5f2fdc */
L_005F2FA6:
    eax = MEM32(edi); /* 0x005F2FA6: mov eax, dword ptr [edi] */
    esi = MEM32(0x870278); /* 0x005F2FA8: mov esi, dword ptr [0x870278] */
    MEM32(edi + 0x8) = eax; /* 0x005F2FAE: mov dword ptr [edi + 8], eax */
    eax = MEM32(edi + 0x4); /* 0x005F2FB1: mov eax, dword ptr [edi + 4] */
    MEM32(edi + 0xC) = eax; /* 0x005F2FB4: mov dword ptr [edi + 0xc], eax */
    MEM32(edi) = 0; /* 0x005F2FB7: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005F2FBD: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x1C) = 0; /* 0x005F2FC4: mov dword ptr [edi + 0x1c], 0 */
    MEM32(edi + 0x20) = 0; /* 0x005F2FCB: mov dword ptr [edi + 0x20], 0 */
    RECOMP_CALL(sub_006EE000); /* 0x005F2FD2: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005F2FD7: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x24) = eax; /* 0x005F2FD9: mov dword ptr [edi + 0x24], eax */
L_005F2FDC:
    eax = MEM32(ebx + 0xAC); /* 0x005F2FDC: mov eax, dword ptr [ebx + 0xac] */
    MEM32(eax + 0x1C) = 0; /* 0x005F2FE2: mov dword ptr [eax + 0x1c], 0 */
    eax = MEM32(ebx + 0xAC); /* 0x005F2FE9: mov eax, dword ptr [ebx + 0xac] */
    MEM32(eax + 0x20) = 0; /* 0x005F2FEF: mov dword ptr [eax + 0x20], 0 */
    edi = MEM32(ebx + 0xE8); /* 0x005F2FF6: mov edi, dword ptr [ebx + 0xe8] */
    esi = MEM32(ebx + 0xE4); /* 0x005F2FFC: mov esi, dword ptr [ebx + 0xe4] */
    eax = MEM32(0x7CC978); /* 0x005F3002: mov eax, dword ptr [0x7cc978] */
    /* cmp esi, edi */ /* 0x005F3007: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F3069; /* 0x005F3009: je 0x5f3069 */
L_005F300B:
    goto L_005F3010; /* 0x005F300B: jmp 0x5f3010 */
L_005F3010:
    RECOMP_ICALL(eax); /* 0x005F3010: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F3012: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F301A; /* 0x005F3014: jne 0x5f301a */
L_005F3016:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F3016: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F3034; /* 0x005F3018: jmp 0x5f3034 */
L_005F301A:
    ecx = MEM32(0x928138); /* 0x005F301A: mov ecx, dword ptr [0x928138] */
    /* test ecx, ecx */ /* 0x005F3020: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F3034; /* 0x005F3022: jne 0x5f3034 */
L_005F3024:
    ecx = 0x0092812Cu; /* 0x005F3024: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F3029: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928138); /* 0x005F302E: mov ecx, dword ptr [0x928138] */
L_005F3034:
    eax = MEM32(ecx); /* 0x005F3034: mov eax, dword ptr [ecx] */
    edx = esp + 0x10; /* 0x005F3036: lea edx, [esp + 0x10] */
    PUSH32(esp, edx); /* 0x005F303A: push edx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005F303B: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x005F303E: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x005F3040: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xAC); /* 0x005F3043: mov ecx, dword ptr [ebx + 0xac] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x005F3049: add esi, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x14); /* 0x005F304C: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + eax; /* 0x005F3050: add dword ptr [ecx + 0x1c], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0xAC); /* 0x005F3053: mov ecx, dword ptr [ebx + 0xac] */
    eax = MEM32(esp + 0x18); /* 0x005F3059: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) + eax; /* 0x005F305D: add dword ptr [ecx + 0x20], eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x7CC978); /* 0x005F3060: mov eax, dword ptr [0x7cc978] */
    /* cmp esi, edi */ /* 0x005F3065: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F3010; /* 0x005F3067: jne 0x5f3010 */
L_005F3069:
    edi = MEM32(ebx + 0xF4); /* 0x005F3069: mov edi, dword ptr [ebx + 0xf4] */
    esi = MEM32(ebx + 0xF0); /* 0x005F306F: mov esi, dword ptr [ebx + 0xf0] */
    /* cmp esi, edi */ /* 0x005F3075: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F30D9; /* 0x005F3077: je 0x5f30d9 */
L_005F3079:
    esp = esp; /* 0x005F3079: lea esp, [esp] */
L_005F3080:
    RECOMP_ICALL(eax); /* 0x005F3080: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005F3082: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F308A; /* 0x005F3084: jne 0x5f308a */
L_005F3086:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F3086: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F30A4; /* 0x005F3088: jmp 0x5f30a4 */
L_005F308A:
    ecx = MEM32(0x928138); /* 0x005F308A: mov ecx, dword ptr [0x928138] */
    /* test ecx, ecx */ /* 0x005F3090: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F30A4; /* 0x005F3092: jne 0x5f30a4 */
L_005F3094:
    ecx = 0x0092812Cu; /* 0x005F3094: mov ecx, 0x92812c */
    RECOMP_CALL(sub_005F07F0); /* 0x005F3099: call 0x5f07f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x928138); /* 0x005F309E: mov ecx, dword ptr [0x928138] */
L_005F30A4:
    eax = MEM32(ecx); /* 0x005F30A4: mov eax, dword ptr [ecx] */
    edx = esp + 0x10; /* 0x005F30A6: lea edx, [esp + 0x10] */
    PUSH32(esp, edx); /* 0x005F30AA: push edx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x005F30AB: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x005F30AE: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x005F30B0: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xAC); /* 0x005F30B3: mov ecx, dword ptr [ebx + 0xac] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x005F30B9: add esi, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x14); /* 0x005F30BC: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + eax; /* 0x005F30C0: add dword ptr [ecx + 0x1c], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0xAC); /* 0x005F30C3: mov ecx, dword ptr [ebx + 0xac] */
    eax = MEM32(esp + 0x18); /* 0x005F30C9: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) + eax; /* 0x005F30CD: add dword ptr [ecx + 0x20], eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x7CC978); /* 0x005F30D0: mov eax, dword ptr [0x7cc978] */
    /* cmp esi, edi */ /* 0x005F30D5: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F3080; /* 0x005F30D7: jne 0x5f3080 */
L_005F30D9:
    ecx = MEM32(esp + 0x24); /* 0x005F30D9: mov ecx, dword ptr [esp + 0x24] */
    edi = POP32_VAL(esp); /* 0x005F30DD: pop edi */
    esi = POP32_VAL(esp); /* 0x005F30DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F30DF: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005F30E0: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005F30E2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005F30E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F30E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F30EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F30F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F30F0u);

L_005F30F0:
    PUSH32(esp, ebp); /* 0x005F30F0: push ebp */
    ebp = esp; /* 0x005F30F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F30F3: push -1 */
    PUSH32(esp, 0x007B2740u); /* 0x005F30F5: push 0x7b2740 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F30FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3100: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005F3101: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F3104: push ebx */
    PUSH32(esp, esi); /* 0x005F3105: push esi */
    PUSH32(esp, edi); /* 0x005F3106: push edi */
    eax = MEM32(0x855000); /* 0x005F3107: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F310C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F310E: push eax */
    eax = ebp + (-0xC); /* 0x005F310F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F3112: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005F3118: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005F311B: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x005F311D: mov dword ptr [ebp - 0x14], edi */
    MEM32(edi) = 0; /* 0x005F3120: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005F3126: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x005F312D: mov dword ptr [edi + 8], 0 */
    ebx = MEM32(ebp + 0x8); /* 0x005F3134: mov ebx, dword ptr [ebp + 8] */
    esi = MEM32(ebx + 0x4); /* 0x005F3137: mov esi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebx); /* 0x005F313A: sub esi, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005F313C: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005F3141: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005F3143: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005F3145: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005F3148: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F314A: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F314A: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F314D: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005F314F: push eax */
    RECOMP_CALL(sub_005F3340); /* 0x005F3150: call 0x5f3340 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005F3155: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F317D; /* 0x005F3157: je 0x5f317d */
L_005F3159:
    MEM32(ebp + (-0x4)) = 0; /* 0x005F3159: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005F3160: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005F3163: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x005F3164: push dword ptr [edi] */
    edx = MEM32(ebx + 0x4); /* 0x005F3166: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x005F3169: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005EF7B0); /* 0x005F316B: call 0x5ef7b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005F3170: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x005F3173: mov dword ptr [edi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F3176: mov dword ptr [ebp - 4], 0xffffffff */
L_005F317D:
    eax = edi; /* 0x005F317D: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F317F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F3182: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F3189: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F318A: pop edi */
    esi = POP32_VAL(esp); /* 0x005F318B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F318C: pop ebx */
    esp = ebp; /* 0x005F318D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F318F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F3190: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F3193(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3193u);

L_005F3193:
    ecx = MEM32(ebp + (-0x14)); /* 0x005F3193: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_005EC440); /* 0x005F3196: call 0x5ec440 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005F319B: push 0 */
    PUSH32(esp, 0); /* 0x005F319D: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005F319F: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005F31A4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005F31B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F31B0u);

L_005F31B0:
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005F31B0: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F692Cu; /* 0x005F31B4: mov dword ptr [ecx], 0x7f692c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F31C4; /* 0x005F31BA: je 0x5f31c4 */
L_005F31BC:
    PUSH32(esp, ecx); /* 0x005F31BC: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005F31BD: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x005F31C3: pop ecx */
L_005F31C4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F31C4: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F31D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F31D0u);

L_005F31D0:
    PUSH32(esp, ebp); /* 0x005F31D0: push ebp */
    ebp = esp; /* 0x005F31D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F31D3: push -1 */
    PUSH32(esp, 0x00786E9Au); /* 0x005F31D5: push 0x786e9a */
    eax = MEM32(FS_BASE + (0)); /* 0x005F31DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F31E0: push eax */
    PUSH32(esp, esi); /* 0x005F31E1: push esi */
    PUSH32(esp, edi); /* 0x005F31E2: push edi */
    eax = MEM32(0x855000); /* 0x005F31E3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F31E8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F31EA: push eax */
    eax = ebp + (-0xC); /* 0x005F31EB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F31EE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F31F4: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x005F31F6: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x005F31F9: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ecx */ /* 0x005F31FC: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F3257; /* 0x005F31FE: jae 0x5f3257 */
L_005F3200:
    eax = MEM32(esi); /* 0x005F3200: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x005F3202: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005F3257; /* 0x005F3204: ja 0x5f3257 */
L_005F3206:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x005F3206: sub edi, eax */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x005F3208: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005F320D: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F320F: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    edi = edx; /* 0x005F3212: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x005F3214: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x005F3214: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x005F3217: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005F3219: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F3226; /* 0x005F321C: jne 0x5f3226 */
L_005F321E:
    PUSH32(esp, ecx); /* 0x005F321E: push ecx */
    ecx = esi; /* 0x005F321F: mov ecx, esi */
    RECOMP_CALL(sub_005F33B0); /* 0x005F3221: call 0x5f33b0 */
    RECOMP_FLAGS_IN();
L_005F3226:
    eax = MEM32(esi); /* 0x005F3226: mov eax, dword ptr [esi] */
    ecx = edi + edi * 4; /* 0x005F3228: lea ecx, [edi + edi*4] */
    edx = eax + ecx * 4; /* 0x005F322B: lea edx, [eax + ecx*4] */
    ecx = MEM32(esi + 0x4); /* 0x005F322E: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F3231: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x005F3238: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F328E; /* 0x005F323A: je 0x5f328e */
L_005F323C:
    eax = MEM32(edx); /* 0x005F323C: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x005F323E: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x4); /* 0x005F3240: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x005F3243: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx + 0x8); /* 0x005F3246: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x005F3249: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx + 0xC); /* 0x005F324C: mov eax, dword ptr [edx + 0xc] */
    MEM32(ecx + 0xC) = eax; /* 0x005F324F: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(edx + 0x10); /* 0x005F3252: mov eax, dword ptr [edx + 0x10] */
    goto L_005F328B; /* 0x005F3255: jmp 0x5f328b */
L_005F3257:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005F3257: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F3264; /* 0x005F325A: jne 0x5f3264 */
L_005F325C:
    PUSH32(esp, ecx); /* 0x005F325C: push ecx */
    ecx = esi; /* 0x005F325D: mov ecx, esi */
    RECOMP_CALL(sub_005F33B0); /* 0x005F325F: call 0x5f33b0 */
    RECOMP_FLAGS_IN();
L_005F3264:
    ecx = MEM32(esi + 0x4); /* 0x005F3264: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x005F3267: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x005F326E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F328E; /* 0x005F3270: je 0x5f328e */
L_005F3272:
    eax = MEM32(edi); /* 0x005F3272: mov eax, dword ptr [edi] */
    MEM32(ecx) = eax; /* 0x005F3274: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x4); /* 0x005F3276: mov eax, dword ptr [edi + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x005F3279: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edi + 0x8); /* 0x005F327C: mov eax, dword ptr [edi + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x005F327F: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edi + 0xC); /* 0x005F3282: mov eax, dword ptr [edi + 0xc] */
    MEM32(ecx + 0xC) = eax; /* 0x005F3285: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(edi + 0x10); /* 0x005F3288: mov eax, dword ptr [edi + 0x10] */
L_005F328B:
    MEM32(ecx + 0x10) = eax; /* 0x005F328B: mov dword ptr [ecx + 0x10], eax */
L_005F328E:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F328E: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x14u; /* 0x005F3295: add dword ptr [esi + 4], 0x14 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005F3299: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F329C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F32A3: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F32A4: pop edi */
    esi = POP32_VAL(esp); /* 0x005F32A5: pop esi */
    esp = ebp; /* 0x005F32A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F32A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F32A9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F32B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F32B0u);

L_005F32B0:
    PUSH32(esp, ebp); /* 0x005F32B0: push ebp */
    ebp = esp; /* 0x005F32B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F32B3: push -1 */
    PUSH32(esp, 0x007818B0u); /* 0x005F32B5: push 0x7818b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F32BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F32C0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005F32C1: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005F32C4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F32C9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F32CB: push eax */
    eax = ebp + (-0xC); /* 0x005F32CC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F32CF: mov dword ptr fs:[0], eax */
    eax = MEM32(0x927BD8); /* 0x005F32D5: mov eax, dword ptr [0x927bd8] */
    /* test eax, eax */ /* 0x005F32DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F3326; /* 0x005F32DC: jne 0x5f3326 */
L_005F32DE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F32DE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F32E1: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x005F32E3: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007CCE84u); /* 0x005F32E6: push 0x7cce84 */
    RECOMP_CALL(sub_00409FA0); /* 0x005F32EB: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005F32F0: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F32F7: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F32FA: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x005F32FC: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007CCEC4u); /* 0x005F32FF: push 0x7ccec4 */
    RECOMP_CALL(sub_00409FA0); /* 0x005F3304: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005F3309: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F330D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x15u; /* 0x005F3314: mov ecx, 0x15 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F3319: call 0x668da0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x927BD8); /* 0x005F331E: mov eax, dword ptr [0x927bd8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F3323: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005F3326:
    ecx = MEM32(ebp + (-0xC)); /* 0x005F3326: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F3329: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F3330: pop ecx */
    esp = ebp; /* 0x005F3331: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F3333: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F3334: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F3340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3340u);

L_005F3340:
    PUSH32(esp, ebp); /* 0x005F3340: push ebp */
    ebp = esp; /* 0x005F3341: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005F3343: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005F3346: push esi */
    esi = ecx; /* 0x005F3347: mov esi, ecx */
    MEM32(esi) = 0; /* 0x005F3349: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005F334F: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005F3356: mov dword ptr [esi + 8], 0 */
    /* test eax, eax */ /* 0x005F335D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F3368; /* 0x005F335F: jne 0x5f3368 */
L_005F3361:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005F3361: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005F3363: pop esi */
    ebp = POP32_VAL(esp); /* 0x005F3364: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F3365: ret 4 */
L_005F3368:
    /* cmp eax, 0x02492492u */ /* 0x005F3368: cmp eax, 0x2492492 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02492492u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F337A; /* 0x005F336D: jbe 0x5f337a */
L_005F336F:
    PUSH32(esp, 0x007DFAB0u); /* 0x005F336F: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005F3374: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005F337A:
    PUSH32(esp, edi); /* 0x005F337A: push edi */
    edi = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005F337B: imul edi, eax, 0x70 */
    PUSH32(esp, edi); /* 0x005F337E: push edi */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005F337F: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F3385: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005F3388: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F339E; /* 0x005F338A: je 0x5f339e */
L_005F338C:
    MEM32(esi) = eax; /* 0x005F338C: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x005F338E: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005F3391: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x005F3393: mov dword ptr [esi + 8], eax */
    SET_LO8(eax, 1); /* 0x005F3396: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005F3398: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3399: pop esi */
    ebp = POP32_VAL(esp); /* 0x005F339A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F339B: ret 4 */
L_005F339E:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005F339E: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005F33A4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005F33B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F33B0u);

L_005F33B0:
    PUSH32(esp, esi); /* 0x005F33B0: push esi */
    esi = MEM32(ecx + 0x4); /* 0x005F33B1: mov esi, dword ptr [ecx + 4] */
    eax = 0x66666667u; /* 0x005F33B4: mov eax, 0x66666667 */
    PUSH32(esp, edi); /* 0x005F33B9: push edi */
    edi = MEM32(ecx + 0x8); /* 0x005F33BA: mov edi, dword ptr [ecx + 8] */
    edx = edi; /* 0x005F33BD: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x005F33BF: sub edx, esi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005F33C1: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F33C3: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F33C6: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F33C8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F33C8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F33CB: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x005F33CD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F343D; /* 0x005F33D0: jae 0x5f343d */
L_005F33D2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x005F33D2: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x005F33D4: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005F33D9: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, ebx); /* 0x005F33DB: push ebx */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F33DC: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    ebx = 0x0CCCCCCCu; /* 0x005F33DF: mov ebx, 0xccccccc */
    esi = edx; /* 0x005F33E4: mov esi, edx */
    eax = ebx; /* 0x005F33E6: mov eax, ebx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005F33E8: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005F33E8: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005F33EB: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x005F33ED: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x005F33EF: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F33FF; /* 0x005F33F2: jae 0x5f33ff */
L_005F33F4:
    PUSH32(esp, 0x007DFAB0u); /* 0x005F33F4: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005F33F9: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005F33FF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ecx); /* 0x005F33FF: sub edi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x005F3401: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005F3406: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005F3408: inc esi */
    _flag_k = FK_INC;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F3409: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x005F340C: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005F340E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005F340E: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F3411: add eax, edx */
    _flag_k = FK_ADD;
    edx = eax; /* 0x005F3413: mov edx, eax */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x005F3415: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x005F3415: shr edx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x005F3417: sub ebx, edx */
    _flag_k = FK_CMP;
    /* cmp ebx, eax */ /* 0x005F3419: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x005F341B: pop ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F3430; /* 0x005F341C: jae 0x5f3430 */
L_005F341E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005F341E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x005F3420: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x005F3422: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x005F3425: push eax */
    RECOMP_CALL(sub_005F3450); /* 0x005F3426: call 0x5f3450 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005F342B: pop edi */
    esi = POP32_VAL(esp); /* 0x005F342C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F342D: ret 4 */
L_005F3430:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005F3430: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x005F3432: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x005F3434: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x005F3437: push eax */
    RECOMP_CALL(sub_005F3450); /* 0x005F3438: call 0x5f3450 */
    RECOMP_FLAGS_IN();
L_005F343D:
    edi = POP32_VAL(esp); /* 0x005F343D: pop edi */
    esi = POP32_VAL(esp); /* 0x005F343E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F343F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F3450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3450u);

L_005F3450:
    PUSH32(esp, ebp); /* 0x005F3450: push ebp */
    ebp = esp; /* 0x005F3451: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F3453: push -1 */
    PUSH32(esp, 0x007B2760u); /* 0x005F3455: push 0x7b2760 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F345A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3460: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005F3461: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F3464: push ebx */
    PUSH32(esp, esi); /* 0x005F3465: push esi */
    PUSH32(esp, edi); /* 0x005F3466: push edi */
    eax = MEM32(0x855000); /* 0x005F3467: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F346C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F346E: push eax */
    eax = ebp + (-0xC); /* 0x005F346F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F3472: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005F3478: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005F347B: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F347D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x005F347F: mov dword ptr [ebp - 0x14], esi */
    edi = MEM32(ebp + 0x8); /* 0x005F3482: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x005F3485: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F34B0; /* 0x005F3487: je 0x5f34b0 */
L_005F3489:
    /* cmp edi, 0x0CCCCCCCu */ /* 0x005F3489: cmp edi, 0xccccccc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0CCCCCCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005F34AA; /* 0x005F348F: ja 0x5f34aa */
L_005F3491:
    eax = edi + edi * 4; /* 0x005F3491: lea eax, [edi + edi*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x005F3494: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x005F3494: shl eax, 2 */
    PUSH32(esp, eax); /* 0x005F3497: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005F3498: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F349E: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005F34A1: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005F34A3: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x005F34A6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F34B0; /* 0x005F34A8: jne 0x5f34b0 */
L_005F34AA:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005F34AA: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005F34B0:
    MEM32(ebp + (-0x4)) = 0; /* 0x005F34B0: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005F34B7: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005F34BA: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005F34BD: push esi */
    edx = MEM32(ebx + 0x4); /* 0x005F34BE: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x005F34C1: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005F3A60); /* 0x005F34C3: call 0x5f3a60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005F34C8: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F34CB: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebx + 0x4); /* 0x005F34D2: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x005F34D5: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x005F34D7: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005F34DC: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F34DE: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    ecx = edx; /* 0x005F34E1: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005F34E3: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005F34E3: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005F34E6: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x005F34E8: mov dword ptr [ebp + 8], ecx */
    eax = MEM32(ebx); /* 0x005F34EB: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x005F34ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F34FE; /* 0x005F34EF: je 0x5f34fe */
L_005F34F1:
    PUSH32(esp, eax); /* 0x005F34F1: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F34F2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F34F8: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x005F34FB: mov ecx, dword ptr [ebp + 8] */
L_005F34FE:
    eax = edi + edi * 4; /* 0x005F34FE: lea eax, [edi + edi*4] */
    eax = esi + eax * 4; /* 0x005F3501: lea eax, [esi + eax*4] */
    MEM32(ebx + 0x8) = eax; /* 0x005F3504: mov dword ptr [ebx + 8], eax */
    eax = ecx + ecx * 4; /* 0x005F3507: lea eax, [ecx + ecx*4] */
    eax = esi + eax * 4; /* 0x005F350A: lea eax, [esi + eax*4] */
    MEM32(ebx + 0x4) = eax; /* 0x005F350D: mov dword ptr [ebx + 4], eax */
    MEM32(ebx) = esi; /* 0x005F3510: mov dword ptr [ebx], esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F3512: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F3515: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F351C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F351D: pop edi */
    esi = POP32_VAL(esp); /* 0x005F351E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F351F: pop ebx */
    esp = ebp; /* 0x005F3520: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F3522: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F3523: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F3526(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3526u);

L_005F3526:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005F3526: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F3529: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F352F: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005F3532: push 0 */
    PUSH32(esp, 0); /* 0x005F3534: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005F3536: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005F353Bu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005F3540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3540u);

L_005F3540:
    PUSH32(esp, ebp); /* 0x005F3540: push ebp */
    ebp = esp; /* 0x005F3541: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F3543: push -1 */
    PUSH32(esp, 0x0078D138u); /* 0x005F3545: push 0x78d138 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F354A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3550: push eax */
    PUSH32(esp, ecx); /* 0x005F3551: push ecx */
    PUSH32(esp, esi); /* 0x005F3552: push esi */
    PUSH32(esp, edi); /* 0x005F3553: push edi */
    eax = MEM32(0x855000); /* 0x005F3554: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F3559: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F355B: push eax */
    eax = ebp + (-0xC); /* 0x005F355C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F355F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F3565: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005F3567: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x005F356A: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005F356E: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007E3488u; /* 0x005F3575: mov dword ptr [esi], 0x7e3488 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F357B: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24;
    MEM8(esi + 0x4) = (uint8_t)(MEM8(esi + 0x4) | 2); /* 0x005F3582: or byte ptr [esi + 4], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0x8); /* 0x005F3586: mov edi, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(esi + 0x4)); /* 0x005F3589: mov al, byte ptr [esi + 4] */
    MEM32(esi) = 0x007F695Cu; /* 0x005F358C: mov dword ptr [esi], 0x7f695c */
    MEM32(esi + 0xC) = 0; /* 0x005F3592: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005F3599: mov dword ptr [esi + 0x10], 0 */
    /* test edi, edi */ /* 0x005F35A0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F35D1; /* 0x005F35A2: je 0x5f35d1 */
L_005F35A4:
    ecx = 0x005F2550u; /* 0x005F35A4: mov ecx, 0x5f2550 */
    /* test ecx, ecx */ /* 0x005F35A9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F35D1; /* 0x005F35AB: je 0x5f35d1 */
L_005F35AD:
    /* test LO8(eax), 1 */ /* 0x005F35AD: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F35BB; /* 0x005F35AF: je 0x5f35bb */
L_005F35B1:
    PUSH32(esp, esi); /* 0x005F35B1: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005F35B2: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F35B8: add esp, 4 */
    _flag_k = FK_ADD;
L_005F35BB:
    PUSH32(esp, 0x65u); /* 0x005F35BB: push 0x65 */
    PUSH32(esp, esi); /* 0x005F35BD: push esi */
    MEM32(esi + 0xC) = edi; /* 0x005F35BE: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 0x005F2550u; /* 0x005F35C1: mov dword ptr [esi + 0x10], 0x5f2550 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005F35C8: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005F35CE: add esp, 8 */
    _flag_k = FK_ADD;
L_005F35D1:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F35D1: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005F35D8: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F35DA: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F35DD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F35E4: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F35E5: pop edi */
    esi = POP32_VAL(esp); /* 0x005F35E6: pop esi */
    esp = ebp; /* 0x005F35E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F35E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005F35EA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005F35F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F35F0u);

L_005F35F0:
    PUSH32(esp, ebp); /* 0x005F35F0: push ebp */
    ebp = esp; /* 0x005F35F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F35F3: push -1 */
    PUSH32(esp, 0x007B2788u); /* 0x005F35F5: push 0x7b2788 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F35FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3600: push eax */
    PUSH32(esp, ecx); /* 0x005F3601: push ecx */
    PUSH32(esp, esi); /* 0x005F3602: push esi */
    PUSH32(esp, edi); /* 0x005F3603: push edi */
    eax = MEM32(0x855000); /* 0x005F3604: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F3609: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F360B: push eax */
    eax = ebp + (-0xC); /* 0x005F360C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F360F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F3615: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005F3617: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x005F361A: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005F361E: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007F6644u; /* 0x005F3625: mov dword ptr [esi], 0x7f6644 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F362B: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24;
    MEM8(esi + 0x4) = (uint8_t)(MEM8(esi + 0x4) | 2); /* 0x005F3632: or byte ptr [esi + 4], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0x8); /* 0x005F3636: mov edi, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(esi + 0x4)); /* 0x005F3639: mov al, byte ptr [esi + 4] */
    MEM32(esi) = 0x007F693Cu; /* 0x005F363C: mov dword ptr [esi], 0x7f693c */
    MEM32(esi + 0xC) = 0; /* 0x005F3642: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005F3649: mov dword ptr [esi + 0x10], 0 */
    /* test edi, edi */ /* 0x005F3650: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3681; /* 0x005F3652: je 0x5f3681 */
L_005F3654:
    ecx = 0x005F2690u; /* 0x005F3654: mov ecx, 0x5f2690 */
    /* test ecx, ecx */ /* 0x005F3659: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3681; /* 0x005F365B: je 0x5f3681 */
L_005F365D:
    /* test LO8(eax), 1 */ /* 0x005F365D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F366B; /* 0x005F365F: je 0x5f366b */
L_005F3661:
    PUSH32(esp, esi); /* 0x005F3661: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005F3662: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F3668: add esp, 4 */
    _flag_k = FK_ADD;
L_005F366B:
    PUSH32(esp, 0x66u); /* 0x005F366B: push 0x66 */
    PUSH32(esp, esi); /* 0x005F366D: push esi */
    MEM32(esi + 0xC) = edi; /* 0x005F366E: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 0x005F2690u; /* 0x005F3671: mov dword ptr [esi + 0x10], 0x5f2690 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005F3678: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005F367E: add esp, 8 */
    _flag_k = FK_ADD;
L_005F3681:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F3681: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005F3688: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F368A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F368D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F3694: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F3695: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3696: pop esi */
    esp = ebp; /* 0x005F3697: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F3699: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005F369A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005F36A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F36A0u);

L_005F36A0:
    PUSH32(esp, ebp); /* 0x005F36A0: push ebp */
    ebp = esp; /* 0x005F36A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F36A3: push -1 */
    PUSH32(esp, 0x007B27B8u); /* 0x005F36A5: push 0x7b27b8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F36AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F36B0: push eax */
    PUSH32(esp, ecx); /* 0x005F36B1: push ecx */
    PUSH32(esp, esi); /* 0x005F36B2: push esi */
    PUSH32(esp, edi); /* 0x005F36B3: push edi */
    eax = MEM32(0x855000); /* 0x005F36B4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F36B9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F36BB: push eax */
    eax = ebp + (-0xC); /* 0x005F36BC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F36BF: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F36C5: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005F36C7: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x005F36CA: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005F36CE: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007F692Cu; /* 0x005F36D5: mov dword ptr [esi], 0x7f692c */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F36DB: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24;
    MEM8(esi + 0x4) = (uint8_t)(MEM8(esi + 0x4) | 2); /* 0x005F36E2: or byte ptr [esi + 4], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0x8); /* 0x005F36E6: mov edi, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(esi + 0x4)); /* 0x005F36E9: mov al, byte ptr [esi + 4] */
    MEM32(esi) = 0x007F696Cu; /* 0x005F36EC: mov dword ptr [esi], 0x7f696c */
    MEM32(esi + 0xC) = 0; /* 0x005F36F2: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005F36F9: mov dword ptr [esi + 0x10], 0 */
    /* test edi, edi */ /* 0x005F3700: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3731; /* 0x005F3702: je 0x5f3731 */
L_005F3704:
    ecx = 0x005F2690u; /* 0x005F3704: mov ecx, 0x5f2690 */
    /* test ecx, ecx */ /* 0x005F3709: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3731; /* 0x005F370B: je 0x5f3731 */
L_005F370D:
    /* test LO8(eax), 1 */ /* 0x005F370D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F371B; /* 0x005F370F: je 0x5f371b */
L_005F3711:
    PUSH32(esp, esi); /* 0x005F3711: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005F3712: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F3718: add esp, 4 */
    _flag_k = FK_ADD;
L_005F371B:
    PUSH32(esp, 0x67u); /* 0x005F371B: push 0x67 */
    PUSH32(esp, esi); /* 0x005F371D: push esi */
    MEM32(esi + 0xC) = edi; /* 0x005F371E: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 0x005F2690u; /* 0x005F3721: mov dword ptr [esi + 0x10], 0x5f2690 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005F3728: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005F372E: add esp, 8 */
    _flag_k = FK_ADD;
L_005F3731:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F3731: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005F3738: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F373A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F373D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F3744: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F3745: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3746: pop esi */
    esp = ebp; /* 0x005F3747: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F3749: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005F374A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005F3750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3750u);

L_005F3750:
    PUSH32(esp, ebp); /* 0x005F3750: push ebp */
    ebp = esp; /* 0x005F3751: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F3753: push -1 */
    PUSH32(esp, 0x0078D138u); /* 0x005F3755: push 0x78d138 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F375A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3760: push eax */
    PUSH32(esp, ecx); /* 0x005F3761: push ecx */
    PUSH32(esp, esi); /* 0x005F3762: push esi */
    PUSH32(esp, edi); /* 0x005F3763: push edi */
    eax = MEM32(0x855000); /* 0x005F3764: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F3769: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F376B: push eax */
    eax = ebp + (-0xC); /* 0x005F376C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F376F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F3775: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005F3777: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x005F377A: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005F377E: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007E3488u; /* 0x005F3785: mov dword ptr [esi], 0x7e3488 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F378B: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24;
    MEM8(esi + 0x4) = (uint8_t)(MEM8(esi + 0x4) | 2); /* 0x005F3792: or byte ptr [esi + 4], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0x8); /* 0x005F3796: mov edi, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(esi + 0x4)); /* 0x005F3799: mov al, byte ptr [esi + 4] */
    MEM32(esi) = 0x007F697Cu; /* 0x005F379C: mov dword ptr [esi], 0x7f697c */
    MEM32(esi + 0xC) = 0; /* 0x005F37A2: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005F37A9: mov dword ptr [esi + 0x10], 0 */
    /* test edi, edi */ /* 0x005F37B0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F37E1; /* 0x005F37B2: je 0x5f37e1 */
L_005F37B4:
    ecx = 0x005F2640u; /* 0x005F37B4: mov ecx, 0x5f2640 */
    /* test ecx, ecx */ /* 0x005F37B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F37E1; /* 0x005F37BB: je 0x5f37e1 */
L_005F37BD:
    /* test LO8(eax), 1 */ /* 0x005F37BD: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F37CB; /* 0x005F37BF: je 0x5f37cb */
L_005F37C1:
    PUSH32(esp, esi); /* 0x005F37C1: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005F37C2: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F37C8: add esp, 4 */
    _flag_k = FK_ADD;
L_005F37CB:
    PUSH32(esp, 0x73u); /* 0x005F37CB: push 0x73 */
    PUSH32(esp, esi); /* 0x005F37CD: push esi */
    MEM32(esi + 0xC) = edi; /* 0x005F37CE: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 0x005F2640u; /* 0x005F37D1: mov dword ptr [esi + 0x10], 0x5f2640 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005F37D8: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005F37DE: add esp, 8 */
    _flag_k = FK_ADD;
L_005F37E1:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F37E1: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005F37E8: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F37EA: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F37ED: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F37F4: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F37F5: pop edi */
    esi = POP32_VAL(esp); /* 0x005F37F6: pop esi */
    esp = ebp; /* 0x005F37F7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F37F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005F37FA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005F3800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3800u);

L_005F3800:
    PUSH32(esp, ebp); /* 0x005F3800: push ebp */
    ebp = esp; /* 0x005F3801: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F3803: push -1 */
    PUSH32(esp, 0x007B27E8u); /* 0x005F3805: push 0x7b27e8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F380A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3810: push eax */
    PUSH32(esp, ecx); /* 0x005F3811: push ecx */
    PUSH32(esp, esi); /* 0x005F3812: push esi */
    PUSH32(esp, edi); /* 0x005F3813: push edi */
    eax = MEM32(0x855000); /* 0x005F3814: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F3819: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F381B: push eax */
    eax = ebp + (-0xC); /* 0x005F381C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F381F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F3825: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005F3827: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x005F382A: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005F382E: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007F68A4u; /* 0x005F3835: mov dword ptr [esi], 0x7f68a4 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F383B: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24;
    MEM8(esi + 0x4) = (uint8_t)(MEM8(esi + 0x4) | 2); /* 0x005F3842: or byte ptr [esi + 4], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0x8); /* 0x005F3846: mov edi, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(esi + 0x4)); /* 0x005F3849: mov al, byte ptr [esi + 4] */
    MEM32(esi) = 0x007F698Cu; /* 0x005F384C: mov dword ptr [esi], 0x7f698c */
    MEM32(esi + 0xC) = 0; /* 0x005F3852: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005F3859: mov dword ptr [esi + 0x10], 0 */
    /* test edi, edi */ /* 0x005F3860: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3894; /* 0x005F3862: je 0x5f3894 */
L_005F3864:
    ecx = 0x005F28E0u; /* 0x005F3864: mov ecx, 0x5f28e0 */
    /* test ecx, ecx */ /* 0x005F3869: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3894; /* 0x005F386B: je 0x5f3894 */
L_005F386D:
    /* test LO8(eax), 1 */ /* 0x005F386D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F387B; /* 0x005F386F: je 0x5f387b */
L_005F3871:
    PUSH32(esp, esi); /* 0x005F3871: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005F3872: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F3878: add esp, 4 */
    _flag_k = FK_ADD;
L_005F387B:
    PUSH32(esp, 0x8Fu); /* 0x005F387B: push 0x8f */
    PUSH32(esp, esi); /* 0x005F3880: push esi */
    MEM32(esi + 0xC) = edi; /* 0x005F3881: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 0x005F28E0u; /* 0x005F3884: mov dword ptr [esi + 0x10], 0x5f28e0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005F388B: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005F3891: add esp, 8 */
    _flag_k = FK_ADD;
L_005F3894:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F3894: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005F389B: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F389D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F38A0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F38A7: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F38A8: pop edi */
    esi = POP32_VAL(esp); /* 0x005F38A9: pop esi */
    esp = ebp; /* 0x005F38AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F38AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005F38AD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005F38B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F38B0u);

L_005F38B0:
    PUSH32(esp, ebp); /* 0x005F38B0: push ebp */
    ebp = esp; /* 0x005F38B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F38B3: push -1 */
    PUSH32(esp, 0x007B2788u); /* 0x005F38B5: push 0x7b2788 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F38BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F38C0: push eax */
    PUSH32(esp, ecx); /* 0x005F38C1: push ecx */
    PUSH32(esp, esi); /* 0x005F38C2: push esi */
    PUSH32(esp, edi); /* 0x005F38C3: push edi */
    eax = MEM32(0x855000); /* 0x005F38C4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F38C9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F38CB: push eax */
    eax = ebp + (-0xC); /* 0x005F38CC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F38CF: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F38D5: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005F38D7: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x005F38DA: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005F38DE: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007F6644u; /* 0x005F38E5: mov dword ptr [esi], 0x7f6644 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F38EB: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24;
    MEM8(esi + 0x4) = (uint8_t)(MEM8(esi + 0x4) | 2); /* 0x005F38F2: or byte ptr [esi + 4], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0x8); /* 0x005F38F6: mov edi, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(esi + 0x4)); /* 0x005F38F9: mov al, byte ptr [esi + 4] */
    MEM32(esi) = 0x007F699Cu; /* 0x005F38FC: mov dword ptr [esi], 0x7f699c */
    MEM32(esi + 0xC) = 0; /* 0x005F3902: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005F3909: mov dword ptr [esi + 0x10], 0 */
    /* test edi, edi */ /* 0x005F3910: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3944; /* 0x005F3912: je 0x5f3944 */
L_005F3914:
    ecx = 0x005F1210u; /* 0x005F3914: mov ecx, 0x5f1210 */
    /* test ecx, ecx */ /* 0x005F3919: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3944; /* 0x005F391B: je 0x5f3944 */
L_005F391D:
    /* test LO8(eax), 1 */ /* 0x005F391D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F392B; /* 0x005F391F: je 0x5f392b */
L_005F3921:
    PUSH32(esp, esi); /* 0x005F3921: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005F3922: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F3928: add esp, 4 */
    _flag_k = FK_ADD;
L_005F392B:
    PUSH32(esp, 0x4B2u); /* 0x005F392B: push 0x4b2 */
    PUSH32(esp, esi); /* 0x005F3930: push esi */
    MEM32(esi + 0xC) = edi; /* 0x005F3931: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 0x005F1210u; /* 0x005F3934: mov dword ptr [esi + 0x10], 0x5f1210 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005F393B: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005F3941: add esp, 8 */
    _flag_k = FK_ADD;
L_005F3944:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F3944: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005F394B: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F394D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F3950: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F3957: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F3958: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3959: pop esi */
    esp = ebp; /* 0x005F395A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F395C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005F395D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005F3960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3960u);

L_005F3960:
    PUSH32(esp, ebp); /* 0x005F3960: push ebp */
    ebp = esp; /* 0x005F3961: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F3963: push -1 */
    PUSH32(esp, 0x007B2818u); /* 0x005F3965: push 0x7b2818 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F396A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3970: push eax */
    PUSH32(esp, ecx); /* 0x005F3971: push ecx */
    PUSH32(esp, esi); /* 0x005F3972: push esi */
    PUSH32(esp, edi); /* 0x005F3973: push edi */
    eax = MEM32(0x855000); /* 0x005F3974: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F3979: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F397B: push eax */
    eax = ebp + (-0xC); /* 0x005F397C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F397F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F3985: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005F3987: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x005F398A: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005F398E: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007F6874u; /* 0x005F3995: mov dword ptr [esi], 0x7f6874 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F399B: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x4) | 2)) << 24;
    MEM8(esi + 0x4) = (uint8_t)(MEM8(esi + 0x4) | 2); /* 0x005F39A2: or byte ptr [esi + 4], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0x8); /* 0x005F39A6: mov edi, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(esi + 0x4)); /* 0x005F39A9: mov al, byte ptr [esi + 4] */
    MEM32(esi) = 0x007F694Cu; /* 0x005F39AC: mov dword ptr [esi], 0x7f694c */
    MEM32(esi + 0xC) = 0; /* 0x005F39B2: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005F39B9: mov dword ptr [esi + 0x10], 0 */
    /* test edi, edi */ /* 0x005F39C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F39F4; /* 0x005F39C2: je 0x5f39f4 */
L_005F39C4:
    ecx = 0x005F1340u; /* 0x005F39C4: mov ecx, 0x5f1340 */
    /* test ecx, ecx */ /* 0x005F39C9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F39F4; /* 0x005F39CB: je 0x5f39f4 */
L_005F39CD:
    /* test LO8(eax), 1 */ /* 0x005F39CD: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F39DB; /* 0x005F39CF: je 0x5f39db */
L_005F39D1:
    PUSH32(esp, esi); /* 0x005F39D1: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005F39D2: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F39D8: add esp, 4 */
    _flag_k = FK_ADD;
L_005F39DB:
    PUSH32(esp, 0x4B3u); /* 0x005F39DB: push 0x4b3 */
    PUSH32(esp, esi); /* 0x005F39E0: push esi */
    MEM32(esi + 0xC) = edi; /* 0x005F39E1: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 0x005F1340u; /* 0x005F39E4: mov dword ptr [esi + 0x10], 0x5f1340 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005F39EB: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005F39F1: add esp, 8 */
    _flag_k = FK_ADD;
L_005F39F4:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F39F4: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005F39FB: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F39FD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F3A00: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F3A07: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F3A08: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3A09: pop esi */
    esp = ebp; /* 0x005F3A0A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F3A0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005F3A0D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005F3A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3A10u);

L_005F3A10:
    PUSH32(esp, ebp); /* 0x005F3A10: push ebp */
    ebp = esp; /* 0x005F3A11: mov ebp, esp */
    PUSH32(esp, edi); /* 0x005F3A13: push edi */
    edi = edx; /* 0x005F3A14: mov edi, edx */
    /* cmp ecx, edi */ /* 0x005F3A16: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F3A51; /* 0x005F3A18: je 0x5f3a51 */
L_005F3A1A:
    PUSH32(esp, esi); /* 0x005F3A1A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x005F3A1B: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x005F3A1E: add ecx, 0xc */
    _flag_k = FK_ADD;
L_005F3A21:
    eax = MEM32(ecx + (-0xC)); /* 0x005F3A21: mov eax, dword ptr [ecx - 0xc] */
    ecx = ecx + 0x14; /* 0x005F3A24: lea ecx, [ecx + 0x14] */
    MEM32(esi) = eax; /* 0x005F3A27: mov dword ptr [esi], eax */
    eax = MEM32(ecx + (-0x1C)); /* 0x005F3A29: mov eax, dword ptr [ecx - 0x1c] */
    MEM32(esi + 0x4) = eax; /* 0x005F3A2C: mov dword ptr [esi + 4], eax */
    eax = MEM32(ecx + (-0x18)); /* 0x005F3A2F: mov eax, dword ptr [ecx - 0x18] */
    MEM32(esi + 0x8) = eax; /* 0x005F3A32: mov dword ptr [esi + 8], eax */
    eax = MEM32(ecx + (-0x14)); /* 0x005F3A35: mov eax, dword ptr [ecx - 0x14] */
    MEM32(esi + 0xC) = eax; /* 0x005F3A38: mov dword ptr [esi + 0xc], eax */
    edx = MEM32(ecx + (-0x10)); /* 0x005F3A3B: mov edx, dword ptr [ecx - 0x10] */
    MEM32(esi + 0x10) = edx; /* 0x005F3A3E: mov dword ptr [esi + 0x10], edx */
    edx = ecx + (-0xC); /* 0x005F3A41: lea edx, [ecx - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x005F3A44: add esi, 0x14 */
    _flag_k = FK_ADD;
    /* cmp edx, edi */ /* 0x005F3A47: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005F3A21; /* 0x005F3A49: jne 0x5f3a21 */
L_005F3A4B:
    eax = esi; /* 0x005F3A4B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005F3A4D: pop esi */
    edi = POP32_VAL(esp); /* 0x005F3A4E: pop edi */
    ebp = POP32_VAL(esp); /* 0x005F3A4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F3A50: ret  */
L_005F3A51:
    eax = MEM32(ebp + 0x8); /* 0x005F3A51: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x005F3A54: pop edi */
    ebp = POP32_VAL(esp); /* 0x005F3A55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F3A56: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F3A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3A60u);

L_005F3A60:
    PUSH32(esp, ebp); /* 0x005F3A60: push ebp */
    ebp = esp; /* 0x005F3A61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F3A63: push -1 */
    PUSH32(esp, 0x007B2845u); /* 0x005F3A65: push 0x7b2845 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F3A6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3A70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005F3A71: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F3A74: push ebx */
    PUSH32(esp, esi); /* 0x005F3A75: push esi */
    PUSH32(esp, edi); /* 0x005F3A76: push edi */
    eax = MEM32(0x855000); /* 0x005F3A77: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F3A7C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F3A7E: push eax */
    eax = ebp + (-0xC); /* 0x005F3A7F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F3A82: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005F3A88: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F3A8B: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(ebp + 0x8); /* 0x005F3A92: mov esi, dword ptr [ebp + 8] */
L_005F3A95:
    /* cmp ecx, edx */ /* 0x005F3A95: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F3ACF; /* 0x005F3A97: je 0x5f3acf */
L_005F3A99:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005F3A99: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005F3A9D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3ABD; /* 0x005F3A9F: je 0x5f3abd */
L_005F3AA1:
    eax = MEM32(ecx); /* 0x005F3AA1: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x005F3AA3: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x005F3AA5: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x005F3AA8: mov dword ptr [esi + 4], eax */
    eax = MEM32(ecx + 0x8); /* 0x005F3AAB: mov eax, dword ptr [ecx + 8] */
    MEM32(esi + 0x8) = eax; /* 0x005F3AAE: mov dword ptr [esi + 8], eax */
    eax = MEM32(ecx + 0xC); /* 0x005F3AB1: mov eax, dword ptr [ecx + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x005F3AB4: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ecx + 0x10); /* 0x005F3AB7: mov eax, dword ptr [ecx + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x005F3ABA: mov dword ptr [esi + 0x10], eax */
L_005F3ABD:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005F3ABD: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x005F3AC1: add esi, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x005F3AC4: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x005F3AC7: add ecx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x005F3ACA: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    goto L_005F3A95; /* 0x005F3ACD: jmp 0x5f3a95 */
L_005F3ACF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F3ACF: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005F3AD6: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F3AD8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F3ADB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F3AE2: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F3AE3: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3AE4: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F3AE5: pop ebx */
    esp = ebp; /* 0x005F3AE6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F3AE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F3AE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F3AEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3AEAu);

L_005F3AEA:
    PUSH32(esp, 0); /* 0x005F3AEA: push 0 */
    PUSH32(esp, 0); /* 0x005F3AEC: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005F3AEE: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005F3AF3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005F3B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3B00u);

L_005F3B00:
    PUSH32(esp, ebp); /* 0x005F3B00: push ebp */
    ebp = esp; /* 0x005F3B01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F3B03: push -1 */
    PUSH32(esp, 0x00799D56u); /* 0x005F3B05: push 0x799d56 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F3B0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3B10: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005F3B11: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F3B14: push ebx */
    PUSH32(esp, esi); /* 0x005F3B15: push esi */
    PUSH32(esp, edi); /* 0x005F3B16: push edi */
    eax = MEM32(0x855000); /* 0x005F3B17: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F3B1C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F3B1E: push eax */
    eax = ebp + (-0xC); /* 0x005F3B1F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F3B22: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005F3B28: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005F3B2A: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x14)) = edi; /* 0x005F3B2D: mov dword ptr [ebp - 0x14], edi */
    MEM32(edi) = 0; /* 0x005F3B30: mov dword ptr [edi], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x005F3B36: mov dword ptr [ebp - 4], 1 */
    eax = edi + 0x4; /* 0x005F3B3D: lea eax, [edi + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005F3B40: mov dword ptr [ebp - 0x14], eax */
    MEM32(eax) = 0; /* 0x005F3B43: mov dword ptr [eax], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005F3B49: mov byte ptr [ebp - 4], 3 */
    esi = edi + 0x8; /* 0x005F3B4D: lea esi, [edi + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005F3B50: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0; /* 0x005F3B53: mov dword ptr [esi], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005F3B59: mov byte ptr [ebp - 4], 5 */
    ecx = ebp + 0x8; /* 0x005F3B5D: lea ecx, [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005F3B60: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005F5A90); /* 0x005F3B63: call 0x5f5a90 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x005F3B68: mov ebx, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005F3B6A: mov byte ptr [ebp - 4], 6 */
    eax = MEM32(ebx); /* 0x005F3B6E: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x005F3B70: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F3B78; /* 0x005F3B72: jne 0x5f3b78 */
L_005F3B74:
    MEM32(esi) = eax; /* 0x005F3B74: mov dword ptr [esi], eax */
    goto L_005F3BA2; /* 0x005F3B76: jmp 0x5f3ba2 */
L_005F3B78:
    PUSH32(esp, 0x00866560u); /* 0x005F3B78: push 0x866560 */
    PUSH32(esp, eax); /* 0x005F3B7D: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A0)); /* 0x005F3B7E: call dword ptr [0x7cc6a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F3B84: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x005F3B87: mov ecx, eax */
    RECOMP_ICALL(MEM32(0x7CC69C)); /* 0x005F3B89: call dword ptr [0x7cc69c] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x005F3B8F: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x005F3B91: push ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x005F3B92: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F3B9D; /* 0x005F3B94: jne 0x5f3b9d */
L_005F3B96:
    RECOMP_CALL(sub_0041AE90); /* 0x005F3B96: call 0x41ae90 */
    RECOMP_FLAGS_IN();
    goto L_005F3BA2; /* 0x005F3B9B: jmp 0x5f3ba2 */
L_005F3B9D:
    RECOMP_CALL(sub_0041AF10); /* 0x005F3B9D: call 0x41af10 */
    RECOMP_FLAGS_IN();
L_005F3BA2:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005F3BA2: mov byte ptr [ebp - 4], 5 */
    ecx = MEM32(ebp + 0x8); /* 0x005F3BA6: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x005F3BA9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3BB3; /* 0x005F3BAB: je 0x5f3bb3 */
L_005F3BAD:
    eax = MEM32(ecx); /* 0x005F3BAD: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x005F3BAF: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x005F3BB1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_005F3BB3:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F3BB3: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005F3BBA: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F3BBC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F3BBF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F3BC6: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F3BC7: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3BC8: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F3BC9: pop ebx */
    esp = ebp; /* 0x005F3BCA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F3BCC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F3BCD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F3BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3BD0u);

L_005F3BD0:
    PUSH32(esp, ebx); /* 0x005F3BD0: push ebx */
    ebx = MEM32(0x7CC6A0); /* 0x005F3BD1: mov ebx, dword ptr [0x7cc6a0] */
    PUSH32(esp, esi); /* 0x005F3BD7: push esi */
    esi = ecx; /* 0x005F3BD8: mov esi, ecx */
    PUSH32(esp, edi); /* 0x005F3BDA: push edi */
    edi = MEM32(0x7CC69C); /* 0x005F3BDB: mov edi, dword ptr [0x7cc69c] */
    eax = MEM32(esi + 0x8); /* 0x005F3BE1: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x005F3BE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3C01; /* 0x005F3BE6: je 0x5f3c01 */
L_005F3BE8:
    PUSH32(esp, 0x00866560u); /* 0x005F3BE8: push 0x866560 */
    PUSH32(esp, eax); /* 0x005F3BED: push eax */
    RECOMP_ICALL(ebx); /* 0x005F3BEE: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F3BF0: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x005F3BF3: mov ecx, eax */
    RECOMP_ICALL(edi); /* 0x005F3BF5: call edi */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005F3BF7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3C01; /* 0x005F3BF9: je 0x5f3c01 */
L_005F3BFB:
    edi = POP32_VAL(esp); /* 0x005F3BFB: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3BFC: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005F3BFD: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x005F3BFF: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F3C00: ret  */
L_005F3C01:
    eax = MEM32(esi + 0x8); /* 0x005F3C01: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x005F3C04: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3C21; /* 0x005F3C06: je 0x5f3c21 */
L_005F3C08:
    PUSH32(esp, 0x008663E8u); /* 0x005F3C08: push 0x8663e8 */
    PUSH32(esp, eax); /* 0x005F3C0D: push eax */
    RECOMP_ICALL(ebx); /* 0x005F3C0E: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F3C10: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x005F3C13: mov ecx, eax */
    RECOMP_ICALL(edi); /* 0x005F3C15: call edi */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005F3C17: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3C21; /* 0x005F3C19: je 0x5f3c21 */
L_005F3C1B:
    edi = POP32_VAL(esp); /* 0x005F3C1B: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3C1C: pop esi */
    SET_LO8(eax, 1); /* 0x005F3C1D: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x005F3C1F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F3C20: ret  */
L_005F3C21:
    eax = MEM32(esi + 0x8); /* 0x005F3C21: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x005F3C24: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3C41; /* 0x005F3C26: je 0x5f3c41 */
L_005F3C28:
    PUSH32(esp, 0x00866380u); /* 0x005F3C28: push 0x866380 */
    PUSH32(esp, eax); /* 0x005F3C2D: push eax */
    RECOMP_ICALL(ebx); /* 0x005F3C2E: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F3C30: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x005F3C33: mov ecx, eax */
    RECOMP_ICALL(edi); /* 0x005F3C35: call edi */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005F3C37: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3C41; /* 0x005F3C39: je 0x5f3c41 */
L_005F3C3B:
    edi = POP32_VAL(esp); /* 0x005F3C3B: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3C3C: pop esi */
    SET_LO8(eax, 2); /* 0x005F3C3D: mov al, 2 */
    ebx = POP32_VAL(esp); /* 0x005F3C3F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F3C40: ret  */
L_005F3C41:
    ecx = esi; /* 0x005F3C41: mov ecx, esi */
    RECOMP_CALL(sub_005F5B80); /* 0x005F3C43: call 0x5f5b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x005F3C48: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x005F3C4A: pop edi */
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x005F3C4B: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = POP32_VAL(esp); /* 0x005F3C4D: pop esi */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 4); /* 0x005F3C4E: add al, 4 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = POP32_VAL(esp); /* 0x005F3C50: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F3C51: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F3C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3C60u);

L_005F3C60:
    PUSH32(esp, ebp); /* 0x005F3C60: push ebp */
    ebp = esp; /* 0x005F3C61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F3C63: push -1 */
    PUSH32(esp, 0x00792B8Bu); /* 0x005F3C65: push 0x792b8b */
    eax = MEM32(FS_BASE + (0)); /* 0x005F3C6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3C70: push eax */
    PUSH32(esp, ecx); /* 0x005F3C71: push ecx */
    PUSH32(esp, esi); /* 0x005F3C72: push esi */
    eax = MEM32(0x855000); /* 0x005F3C73: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F3C78: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F3C7A: push eax */
    eax = ebp + (-0xC); /* 0x005F3C7B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F3C7E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F3C84: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005F3C86: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFF0FFFFFu; /* 0x005F3C89: and dword ptr [esi + 4], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x14; /* 0x005F3C90: lea ecx, [esi + 0x14] */
    MEM8(esi + 0x7) = (uint8_t)(0); /* 0x005F3C93: mov byte ptr [esi + 7], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFF00000u; /* 0x005F3C97: and dword ptr [esi + 4], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0; /* 0x005F3C9E: mov dword ptr [esi], 0 */
    MEM32(esi + 0x8) = 0x800u; /* 0x005F3CA4: mov dword ptr [esi + 8], 0x800 */
    MEM32(esi + 0xC) = 0; /* 0x005F3CAB: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005F3CB2: mov dword ptr [esi + 0x10], 0 */
    MEM32(ecx) = 0; /* 0x005F3CB9: mov dword ptr [ecx], 0 */
    MEM32(ecx + 0x4) = 0; /* 0x005F3CBF: mov dword ptr [ecx + 4], 0 */
    MEM32(ecx + 0x8) = 0; /* 0x005F3CC6: mov dword ptr [ecx + 8], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005F3CCD: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, 0x100u); /* 0x005F3CD4: push 0x100 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F3CD9: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F3CDE: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005F3CE5: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F3CE7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F3CEA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F3CF1: pop ecx */
    esi = POP32_VAL(esp); /* 0x005F3CF2: pop esi */
    esp = ebp; /* 0x005F3CF3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F3CF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F3CF6: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F3D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3D00u);

L_005F3D00:
    PUSH32(esp, ebp); /* 0x005F3D00: push ebp */
    ebp = esp; /* 0x005F3D01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F3D03: push -1 */
    PUSH32(esp, 0x00792B8Bu); /* 0x005F3D05: push 0x792b8b */
    eax = MEM32(FS_BASE + (0)); /* 0x005F3D0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3D10: push eax */
    PUSH32(esp, ecx); /* 0x005F3D11: push ecx */
    PUSH32(esp, esi); /* 0x005F3D12: push esi */
    eax = MEM32(0x855000); /* 0x005F3D13: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F3D18: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F3D1A: push eax */
    eax = ebp + (-0xC); /* 0x005F3D1B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F3D1E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F3D24: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005F3D26: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F3D29: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(esi + 0x14); /* 0x005F3D30: mov eax, dword ptr [esi + 0x14] */
    /* test eax, eax */ /* 0x005F3D33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F3D56; /* 0x005F3D35: je 0x5f3d56 */
L_005F3D37:
    PUSH32(esp, eax); /* 0x005F3D37: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F3D38: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F3D3E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = 0; /* 0x005F3D41: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x18) = 0; /* 0x005F3D48: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x005F3D4F: mov dword ptr [esi + 0x1c], 0 */
L_005F3D56:
    ecx = MEM32(ebp + (-0xC)); /* 0x005F3D56: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F3D59: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F3D60: pop ecx */
    esi = POP32_VAL(esp); /* 0x005F3D61: pop esi */
    esp = ebp; /* 0x005F3D62: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F3D64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F3D65: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F3D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3D70u);

L_005F3D70:
    PUSH32(esp, ebp); /* 0x005F3D70: push ebp */
    ebp = esp; /* 0x005F3D71: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005F3D73: push ebx */
    PUSH32(esp, esi); /* 0x005F3D74: push esi */
    PUSH32(esp, edi); /* 0x005F3D75: push edi */
    edi = ecx; /* 0x005F3D76: mov edi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x005F3D78: mov ecx, dword ptr [ebp + 8] */
    ebx = MEM32(edi + 0xC); /* 0x005F3D7B: mov ebx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x005F3D7E: add ecx, ebx */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x005F3D80: mov esi, ecx */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F3DC2; /* 0x005F3D82: je 0x5f3dc2 */
L_005F3D84:
    edx = MEM32(edi + 0x8); /* 0x005F3D84: mov edx, dword ptr [edi + 8] */
    eax = esi + (-0x1); /* 0x005F3D87: lea eax, [esi - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x005F3D8A: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x005F3D8B: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    edx = edx & 0xFFFFFFF8u; /* 0x005F3D8E: and edx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, eax */ /* 0x005F3D91: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005F3DC2; /* 0x005F3D93: jae 0x5f3dc2 */
L_005F3D95:
    esi = ecx + ecx; /* 0x005F3D95: lea esi, [ecx + ecx] */
    eax = esi; /* 0x005F3D98: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x005F3D9A: sub eax, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x005F3D9C: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x005F3D9F: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F3DAC; /* 0x005F3DA4: jbe 0x5f3dac */
L_005F3DA6:
    esi = ecx + 0x100000; /* 0x005F3DA6: lea esi, [ecx + 0x100000] */
L_005F3DAC:
    eax = esi + 0x7; /* 0x005F3DAC: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F3DAF: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F3DAF: shr eax, 3 */
    /* cmp eax, 0x100u */ /* 0x005F3DB2: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F3DC2; /* 0x005F3DB7: jbe 0x5f3dc2 */
L_005F3DB9:
    PUSH32(esp, eax); /* 0x005F3DB9: push eax */
    ecx = edi + 0x14; /* 0x005F3DBA: lea ecx, [edi + 0x14] */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F3DBD: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
L_005F3DC2:
    /* cmp esi, MEM32(edi + 0x8) */ /* 0x005F3DC2: cmp esi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F3DCA; /* 0x005F3DC5: jbe 0x5f3dca */
L_005F3DC7:
    MEM32(edi + 0x8) = esi; /* 0x005F3DC7: mov dword ptr [edi + 8], esi */
L_005F3DCA:
    edi = POP32_VAL(esp); /* 0x005F3DCA: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3DCB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F3DCC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005F3DCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F3DCE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F3DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3DE0u);

L_005F3DE0:
    PUSH32(esp, ebp); /* 0x005F3DE0: push ebp */
    ebp = esp; /* 0x005F3DE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F3DE3: push -1 */
    PUSH32(esp, 0x007B2870u); /* 0x005F3DE5: push 0x7b2870 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F3DEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3DF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F3DF1: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F3DF4: push ebx */
    PUSH32(esp, esi); /* 0x005F3DF5: push esi */
    PUSH32(esp, edi); /* 0x005F3DF6: push edi */
    eax = MEM32(0x855000); /* 0x005F3DF7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F3DFC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F3DFE: push eax */
    eax = ebp + (-0xC); /* 0x005F3DFF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F3E02: mov dword ptr fs:[0], eax */
    _xmm[0] = _xmm[3]; /* 0x005F3E08: movaps xmm0, xmm3 */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x005F3E0B: movss dword ptr [ebp - 0x10], xmm0 */
    MEM32(ebp + (-0x14)) = _xmm[2].u32[0]; /* 0x005F3E10: movss dword ptr [ebp - 0x14], xmm2 */
    MEM32(ebp + (-0x18)) = _xmm[1].u32[0]; /* 0x005F3E15: movss dword ptr [ebp - 0x18], xmm1 */
    ebx = ecx; /* 0x005F3E1A: mov ebx, ecx */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F3E1C: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_005F3E2B; /* 0x005F3E1F: jbe 0x5f3e2b */
L_005F3E21:
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F3E21: comiss xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_005F3E2B; /* 0x005F3E24: jb 0x5f3e2b */
L_005F3E26:
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F3E26: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_005F3E9E; /* 0x005F3E29: jae 0x5f3e9e */
L_005F3E2B:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F3E2B: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F3E2E: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x005F3E30: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 0x20u); /* 0x005F3E33: push 0x20 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F3E35: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F3E3C: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69E0u); /* 0x005F3E43: push 0x7f69e0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F3E48: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F3E4B: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005F3E50: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F3E57: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F3E5A: mov ecx, esp */
    MEM32(ebp + (-0x20)) = esp; /* 0x005F3E5C: mov dword ptr [ebp - 0x20], esp */
    PUSH32(esp, 0x29u); /* 0x005F3E5F: push 0x29 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F3E61: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F3E68: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F6A04u); /* 0x005F3E6F: push 0x7f6a04 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F3E74: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F3E77: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005F3E7C: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F3E80: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x58u; /* 0x005F3E87: mov ecx, 0x58 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F3E8C: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0x10)); _xmm[0].u64[1] = 0; /* 0x005F3E91: movss xmm0, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F3E96: add esp, 0x30 */
    _flag_k = FK_ADD;
    _xmm[2].u64[0] = MEM32(ebp + (-0x14)); _xmm[2].u64[1] = 0; /* 0x005F3E99: movss xmm2, dword ptr [ebp - 0x14] */
L_005F3E9E:
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x005F3E9E: subss xmm0, xmm2 */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x005F3EA2: movss dword ptr [ebp - 0x10], xmm0 */
    { float _s = sse_f32(MEM32(ebp + 0x8)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x005F3EA7: divss xmm0, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00420310); /* 0x005F3EAC: call 0x420310 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_007803B0); /* 0x005F3EB1: call 0x7803b0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005F3EB6: mov edi, eax */
    /* test edi, edi */ /* 0x005F3EB8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F3EC0; /* 0x005F3EBA: jne 0x5f3ec0 */
L_005F3EBC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F3EBC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F3ECA; /* 0x005F3EBE: jmp 0x5f3eca */
L_005F3EC0:
    ecx = edi; /* 0x005F3EC0: mov ecx, edi */
    RECOMP_CALL(sub_0046D3D0); /* 0x005F3EC2: call 0x46d3d0 */
    RECOMP_FLAGS_IN();
    esi = eax + 0x1; /* 0x005F3EC7: lea esi, [eax + 1] */
L_005F3ECA:
    _xmm[0].u64[0] = MEM32(ebp + (-0x18)); _xmm[0].u64[1] = 0; /* 0x005F3ECA: movss xmm0, dword ptr [ebp - 0x18] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x005F3ECF: xorps xmm1, xmm1 */
    { float _s = sse_f32(MEM32(ebp + (-0x14))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x005F3ED2: subss xmm0, dword ptr [ebp - 0x14] */
    { float _s = sse_f32(MEM32(ebp + (-0x10))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x005F3ED7: divss xmm0, dword ptr [ebp - 0x10] */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F3EDC: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_005F3EF1; /* 0x005F3EDF: ja 0x5f3ef1 */
L_005F3EE1:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x005F3EE1: movss xmm1, dword ptr [0x808cb0] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F3EE9: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_005F3EF1; /* 0x005F3EEC: ja 0x5f3ef1 */
L_005F3EEE:
    _xmm[1] = _xmm[0]; /* 0x005F3EEE: movaps xmm1, xmm0 */
L_005F3EF1:
    _xmm[0].u64[0] = (uint32_t)(edi); _xmm[0].u64[1] = 0; /* 0x005F3EF1: movd xmm0, edi */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x005F3EF5: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x005F3EF9: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x005F3EF9: shr edi, 0x1f */
    { double _s = sse_f64(MEM64(edi * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x005F3EFC: addsd xmm0, qword ptr [edi*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x005F3F05: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x005F3F09: mulss xmm0, xmm1 */
    { float _s = sse_f32(MEM32(0x808C18)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x005F3F0D: addss xmm0, dword ptr [0x808c18] */
    RECOMP_CALL(sub_0040BD40); /* 0x005F3F15: call 0x40bd40 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_007803B0); /* 0x005F3F1A: call 0x7803b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x005F3F1F: push ecx */
    MEM32(ebp + 0x8) = eax; /* 0x005F3F20: mov dword ptr [ebp + 8], eax */
    ecx = ebx; /* 0x005F3F23: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005F3F25: push esi */
    eax = ebp + 0x8; /* 0x005F3F26: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005F3F29: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005F3F2A: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005F3F2F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F3F32: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F3F39: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F3F3A: pop edi */
    esi = POP32_VAL(esp); /* 0x005F3F3B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F3F3C: pop ebx */
    esp = ebp; /* 0x005F3F3D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F3F3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F3F40: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F3F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F3F50u);

L_005F3F50:
    PUSH32(esp, ebp); /* 0x005F3F50: push ebp */
    ebp = esp; /* 0x005F3F51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F3F53: push -1 */
    PUSH32(esp, 0x007B28A0u); /* 0x005F3F55: push 0x7b28a0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F3F5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F3F60: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x005F3F61: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005F3F64: push esi */
    PUSH32(esp, edi); /* 0x005F3F65: push edi */
    eax = MEM32(0x855000); /* 0x005F3F66: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F3F6B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F3F6D: push eax */
    eax = ebp + (-0xC); /* 0x005F3F6E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F3F71: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x14)) = _xmm[3].u32[0]; /* 0x005F3F77: movss dword ptr [ebp - 0x14], xmm3 */
    _xmm[0] = _xmm[2]; /* 0x005F3F7C: movaps xmm0, xmm2 */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x005F3F7F: movss dword ptr [ebp - 0x10], xmm0 */
    MEM32(ebp + (-0x18)) = _xmm[1].u32[0]; /* 0x005F3F84: movss dword ptr [ebp - 0x18], xmm1 */
    edi = ecx; /* 0x005F3F89: mov edi, ecx */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F3F8B: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_005F3FDD; /* 0x005F3F8E: ja 0x5f3fdd */
L_005F3F90:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F3F90: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F3F93: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x005F3F95: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 0x007F69E0u); /* 0x005F3F98: push 0x7f69e0 */
    RECOMP_CALL(sub_00409FA0); /* 0x005F3F9D: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005F3FA2: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F3FA9: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F3FAC: mov ecx, esp */
    MEM32(ebp + (-0x20)) = esp; /* 0x005F3FAE: mov dword ptr [ebp - 0x20], esp */
    PUSH32(esp, 0x007F6A30u); /* 0x005F3FB1: push 0x7f6a30 */
    RECOMP_CALL(sub_00409FA0); /* 0x005F3FB6: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005F3FBB: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F3FBF: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x68u; /* 0x005F3FC6: mov ecx, 0x68 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F3FCB: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0x10)); _xmm[0].u64[1] = 0; /* 0x005F3FD0: movss xmm0, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F3FD5: add esp, 0x30 */
    _flag_k = FK_ADD;
    _xmm[1].u64[0] = MEM32(ebp + (-0x18)); _xmm[1].u64[1] = 0; /* 0x005F3FD8: movss xmm1, dword ptr [ebp - 0x18] */
L_005F3FDD:
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x005F3FDD: subss xmm0, xmm1 */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x005F3FE1: movss dword ptr [ebp - 0x10], xmm0 */
    { float _s = sse_f32(MEM32(ebp + (-0x14))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x005F3FE6: divss xmm0, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00420310); /* 0x005F3FEB: call 0x420310 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_007803B0); /* 0x005F3FF0: call 0x7803b0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005F3FF5: mov esi, eax */
    /* test esi, esi */ /* 0x005F3FF7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F3FFF; /* 0x005F3FF9: jne 0x5f3fff */
L_005F3FFB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005F3FFB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005F4020; /* 0x005F3FFD: jmp 0x5f4020 */
L_005F3FFF:
    ecx = esi; /* 0x005F3FFF: mov ecx, esi */
    RECOMP_CALL(sub_0046D3D0); /* 0x005F4001: call 0x46d3d0 */
    RECOMP_FLAGS_IN();
    ecx = 0; /* 0x005F4006: mov ecx, 0 */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005F400B: mov dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005F400E: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F4020; /* 0x005F400F: je 0x5f4020 */
L_005F4011:
    PUSH32(esp, eax); /* 0x005F4011: push eax */
    eax = ebp + (-0x14); /* 0x005F4012: lea eax, [ebp - 0x14] */
    ecx = edi; /* 0x005F4015: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005F4017: push eax */
    RECOMP_CALL(sub_005F58E0); /* 0x005F4018: call 0x5f58e0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x005F401D: mov ecx, dword ptr [ebp - 0x14] */
L_005F4020:
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x005F4020: movd xmm0, ecx */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x005F4024: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005F4028: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005F4028: shr ecx, 0x1f */
    _xmm[1].u64[0] = (uint32_t)(esi); _xmm[1].u64[1] = 0; /* 0x005F402B: movd xmm1, esi */
    { double _s = sse_f64(MEM64(ecx * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x005F402F: addsd xmm0, qword ptr [ecx*8 + 0x809c60] */
    { int32_t _a = (int32_t)_xmm[1].u32[0], _b = (int32_t)_xmm[1].u32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x005F4038: cvtdq2pd xmm1, xmm1 */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005F403C: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005F403C: shr esi, 0x1f */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x005F403F: cvtpd2ps xmm0, xmm0 */
    { double _s = sse_f64(MEM64(esi * 8 + 0x809C60)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x005F4043: addsd xmm1, qword ptr [esi*8 + 0x809c60] */
    { xmm_t _s = _xmm[1]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x005F404C: cvtpd2ps xmm1, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x005F4050: divss xmm0, xmm1 */
    { float _s = sse_f32(MEM32(ebp + (-0x10))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x005F4054: mulss xmm0, dword ptr [ebp - 0x10] */
    { float _s = sse_f32(MEM32(ebp + (-0x18))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x005F4059: addss xmm0, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F405E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F4061: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F4068: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F4069: pop edi */
    esi = POP32_VAL(esp); /* 0x005F406A: pop esi */
    esp = ebp; /* 0x005F406B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F406D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005F406E: ret  */
    RECOMP_REGS_OUT();
}

void sub_005F4070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4070u);

L_005F4070:
    PUSH32(esp, ebp); /* 0x005F4070: push ebp */
    ebp = esp; /* 0x005F4071: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005F4073: mov eax, dword ptr [ebp + 8] */
    _xmm[3].u64[0] = MEM32(ebp + 0x14); _xmm[3].u64[1] = 0; /* 0x005F4076: movss xmm3, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x005F407B: push ebx */
    PUSH32(esp, esi); /* 0x005F407C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x005F407D: mov esi, dword ptr [ebp + 0xc] */
    ebx = ecx; /* 0x005F4080: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x005F4082: push edi */
    edi = MEM32(ebp + 0x10); /* 0x005F4083: mov edi, dword ptr [ebp + 0x10] */
    MEM32(eax) = 0; /* 0x005F4086: mov dword ptr [eax], 0 */
    _xmm[1].u64[0] = MEM32(esi); _xmm[1].u64[1] = 0; /* 0x005F408C: movss xmm1, dword ptr [esi] */
    MEM32(eax + 0x4) = 0; /* 0x005F4090: mov dword ptr [eax + 4], 0 */
    _xmm[2].u64[0] = MEM32(edi); _xmm[2].u64[1] = 0; /* 0x005F4097: movss xmm2, dword ptr [edi] */
    MEM32(eax + 0x8) = 0; /* 0x005F409B: mov dword ptr [eax + 8], 0 */
    RECOMP_CALL(sub_005F3F50); /* 0x005F40A2: call 0x5f3f50 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005F40A7: mov eax, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x005F40AA: mov ecx, ebx */
    _xmm[3].u64[0] = MEM32(ebp + 0x14); _xmm[3].u64[1] = 0; /* 0x005F40AC: movss xmm3, dword ptr [ebp + 0x14] */
    _xmm[2].u64[0] = MEM32(edi + 0x4); _xmm[2].u64[1] = 0; /* 0x005F40B1: movss xmm2, dword ptr [edi + 4] */
    _xmm[1].u64[0] = MEM32(esi + 0x4); _xmm[1].u64[1] = 0; /* 0x005F40B6: movss xmm1, dword ptr [esi + 4] */
    MEM32(eax) = _xmm[0].u32[0]; /* 0x005F40BB: movss dword ptr [eax], xmm0 */
    RECOMP_CALL(sub_005F3F50); /* 0x005F40BF: call 0x5f3f50 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005F40C4: mov eax, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x005F40C7: mov ecx, ebx */
    _xmm[3].u64[0] = MEM32(ebp + 0x14); _xmm[3].u64[1] = 0; /* 0x005F40C9: movss xmm3, dword ptr [ebp + 0x14] */
    _xmm[2].u64[0] = MEM32(edi + 0x8); _xmm[2].u64[1] = 0; /* 0x005F40CE: movss xmm2, dword ptr [edi + 8] */
    _xmm[1].u64[0] = MEM32(esi + 0x8); _xmm[1].u64[1] = 0; /* 0x005F40D3: movss xmm1, dword ptr [esi + 8] */
    MEM32(eax + 0x4) = _xmm[0].u32[0]; /* 0x005F40D8: movss dword ptr [eax + 4], xmm0 */
    RECOMP_CALL(sub_005F3F50); /* 0x005F40DD: call 0x5f3f50 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005F40E2: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x005F40E5: pop edi */
    esi = POP32_VAL(esp); /* 0x005F40E6: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F40E7: pop ebx */
    MEM32(eax + 0x8) = _xmm[0].u32[0]; /* 0x005F40E8: movss dword ptr [eax + 8], xmm0 */
    ebp = POP32_VAL(esp); /* 0x005F40ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005F40EE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005F4100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4100u);

L_005F4100:
    PUSH32(esp, ebp); /* 0x005F4100: push ebp */
    ebp = esp; /* 0x005F4101: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F4103: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F4106: push -1 */
    PUSH32(esp, 0x007B2920u); /* 0x005F4108: push 0x7b2920 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F410D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F4113: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x005F4114: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005F4117: push esi */
    PUSH32(esp, edi); /* 0x005F4118: push edi */
    eax = MEM32(0x855000); /* 0x005F4119: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F411E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F4120: push eax */
    eax = esp + 0x30; /* 0x005F4121: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F4125: mov dword ptr fs:[0], eax */
    MEM32(esp + 0x20) = _xmm[2].u32[0]; /* 0x005F412B: movss dword ptr [esp + 0x20], xmm2 */
    MEM32(esp + 0x1C) = ecx; /* 0x005F4131: mov dword ptr [esp + 0x1c], ecx */
    _xmm[1].u64[0] = MEM32(0x808B28); _xmm[1].u64[1] = 0; /* 0x005F4135: movss xmm1, dword ptr [0x808b28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F413D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x005F413F: movss xmm0, dword ptr [0x808cb0] */
    edi = MEM32(ebp + 0x8); /* 0x005F4147: mov edi, dword ptr [ebp + 8] */
    MEM32(esp + 0x14) = 0; /* 0x005F414A: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x18) = _xmm[1].u32[0]; /* 0x005F4152: movss dword ptr [esp + 0x18], xmm1 */
    MEM32(esp + 0x10) = _xmm[0].u32[0]; /* 0x005F4158: movss dword ptr [esp + 0x10], xmm0 */
    /* cmp esi, 4 */ /* 0x005F415E: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F41C9; /* 0x005F4161: jb 0x5f41c9 */
L_005F4163:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F4163: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F4166: mov ecx, esp */
    MEM32(esp + 0x3C) = esp; /* 0x005F4168: mov dword ptr [esp + 0x3c], esp */
    PUSH32(esp, 0x2Cu); /* 0x005F416C: push 0x2c */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F416E: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = esi; /* 0x005F4175: mov dword ptr [ecx + 0x10], esi */
    PUSH32(esp, 0x007F69A8u); /* 0x005F4178: push 0x7f69a8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F417D: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F4180: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = esi; /* 0x005F4185: mov dword ptr [esp + 0x50], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F4189: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F418C: mov ecx, esp */
    MEM32(esp + 0x58) = esp; /* 0x005F418E: mov dword ptr [esp + 0x58], esp */
    PUSH32(esp, 5); /* 0x005F4192: push 5 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F4194: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = esi; /* 0x005F419B: mov dword ptr [ecx + 0x10], esi */
    PUSH32(esp, 0x007F69D8u); /* 0x005F419E: push 0x7f69d8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F41A3: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F41A6: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x68) = (uint8_t)(1); /* 0x005F41AB: mov byte ptr [esp + 0x68], 1 */
    MEM32(esp + 0x68) = 0xFFFFFFFFu; /* 0x005F41B0: mov dword ptr [esp + 0x68], 0xffffffff */
    ecx = esi + 0x53; /* 0x005F41B8: lea ecx, [esi + 0x53] */
    RECOMP_CALL(sub_00668DA0); /* 0x005F41BB: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(esp + 0x48); _xmm[1].u64[1] = 0; /* 0x005F41C0: movss xmm1, dword ptr [esp + 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F41C6: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005F41C9:
    _xmm[0].u64[0] = MEM32(edi + esi * 4); _xmm[0].u64[1] = 0; /* 0x005F41C9: movss xmm0, dword ptr [edi + esi*4] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x005F41CE: cvtps2pd xmm0, xmm0 */
    { xmm_t _s = xmm_ld(0x809C90); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x005F41D1: andpd xmm0, xmmword ptr [0x809c90] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x005F41D9: cvtpd2ps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F41DD: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_005F428D; /* 0x005F41E0: jbe 0x5f428d */
L_005F41E6:
    MEM32(esp + 0x14) = esi; /* 0x005F41E6: mov dword ptr [esp + 0x14], esi */
    _xmm[1] = _xmm[0]; /* 0x005F41EA: movaps xmm1, xmm0 */
    MEM32(esp + 0x18) = _xmm[1].u32[0]; /* 0x005F41ED: movss dword ptr [esp + 0x18], xmm1 */
    /* cmp esi, 4 */ /* 0x005F41F3: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F426C; /* 0x005F41F6: jb 0x5f426c */
L_005F41F8:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F41F8: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F41FB: mov ecx, esp */
    MEM32(esp + 0x40) = esp; /* 0x005F41FD: mov dword ptr [esp + 0x40], esp */
    PUSH32(esp, 0x2Cu); /* 0x005F4201: push 0x2c */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F4203: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F420A: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69A8u); /* 0x005F4211: push 0x7f69a8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F4216: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F4219: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 2; /* 0x005F421E: mov dword ptr [esp + 0x50], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F4226: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F4229: mov ecx, esp */
    MEM32(esp + 0x54) = esp; /* 0x005F422B: mov dword ptr [esp + 0x54], esp */
    PUSH32(esp, 5); /* 0x005F422F: push 5 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F4231: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F4238: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69D8u); /* 0x005F423F: push 0x7f69d8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F4244: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F4247: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x68) = (uint8_t)(3); /* 0x005F424C: mov byte ptr [esp + 0x68], 3 */
    MEM32(esp + 0x68) = 0xFFFFFFFFu; /* 0x005F4251: mov dword ptr [esp + 0x68], 0xffffffff */
    ecx = 0x53u; /* 0x005F4259: mov ecx, 0x53 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F425E: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(esp + 0x48); _xmm[1].u64[1] = 0; /* 0x005F4263: movss xmm1, dword ptr [esp + 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F4269: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005F426C:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005F426C: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(edi + esi * 4))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F426F: comiss xmm0, dword ptr [edi + esi*4] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_005F427F; /* 0x005F4273: jbe 0x5f427f */
L_005F4275:
    _xmm[0].u64[0] = MEM32(0x809824); _xmm[0].u64[1] = 0; /* 0x005F4275: movss xmm0, dword ptr [0x809824] */
    goto L_005F4287; /* 0x005F427D: jmp 0x5f4287 */
L_005F427F:
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x005F427F: movss xmm0, dword ptr [0x808cb0] */
L_005F4287:
    MEM32(esp + 0x10) = _xmm[0].u32[0]; /* 0x005F4287: movss dword ptr [esp + 0x10], xmm0 */
L_005F428D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005F428D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 4 */ /* 0x005F428E: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F41C9; /* 0x005F4291: jb 0x5f41c9 */
L_005F4297:
    esi = MEM32(esp + 0x14); /* 0x005F4297: mov esi, dword ptr [esp + 0x14] */
    /* cmp esi, 3 */ /* 0x005F429B: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F430E; /* 0x005F429E: jbe 0x5f430e */
L_005F42A0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F42A0: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F42A3: mov ecx, esp */
    MEM32(esp + 0x40) = esp; /* 0x005F42A5: mov dword ptr [esp + 0x40], esp */
    PUSH32(esp, 0x27u); /* 0x005F42A9: push 0x27 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F42AB: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F42B2: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007E13C8u); /* 0x005F42B9: push 0x7e13c8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F42BE: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F42C1: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 8; /* 0x005F42C6: mov dword ptr [esp + 0x50], 8 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F42CE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F42D1: mov ecx, esp */
    MEM32(esp + 0x54) = esp; /* 0x005F42D3: mov dword ptr [esp + 0x54], esp */
    PUSH32(esp, 0xCu); /* 0x005F42D7: push 0xc */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F42D9: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F42E0: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007E13F0u); /* 0x005F42E7: push 0x7e13f0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F42EC: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F42EF: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x68) = (uint8_t)(9); /* 0x005F42F4: mov byte ptr [esp + 0x68], 9 */
    MEM32(esp + 0x68) = 0xFFFFFFFFu; /* 0x005F42F9: mov dword ptr [esp + 0x68], 0xffffffff */
    ecx = 0x58u; /* 0x005F4301: mov ecx, 0x58 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F4306: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F430B: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005F430E:
    PUSH32(esp, ecx); /* 0x005F430E: push ecx */
    ecx = MEM32(esp + 0x20); /* 0x005F430F: mov ecx, dword ptr [esp + 0x20] */
    eax = esp + 0x1C; /* 0x005F4313: lea eax, [esp + 0x1c] */
    PUSH32(esp, 2); /* 0x005F4317: push 2 */
    PUSH32(esp, eax); /* 0x005F4319: push eax */
    MEM32(esp + 0x24) = esi; /* 0x005F431A: mov dword ptr [esp + 0x24], esi */
    RECOMP_CALL(sub_005F5800); /* 0x005F431E: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x14); /* 0x005F4323: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F4327: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x005F4329: lea esp, [esp] */
L_005F4330:
    /* cmp esi, eax */ /* 0x005F4330: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F451D; /* 0x005F4332: je 0x5f451d */
L_005F4338:
    /* cmp esi, 4 */ /* 0x005F4338: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F43AB; /* 0x005F433B: jb 0x5f43ab */
L_005F433D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F433D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F4340: mov ecx, esp */
    MEM32(esp + 0x40) = esp; /* 0x005F4342: mov dword ptr [esp + 0x40], esp */
    PUSH32(esp, 0x2Cu); /* 0x005F4346: push 0x2c */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F4348: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F434F: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69A8u); /* 0x005F4356: push 0x7f69a8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F435B: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F435E: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 0xAu; /* 0x005F4363: mov dword ptr [esp + 0x50], 0xa */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F436B: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F436E: mov ecx, esp */
    MEM32(esp + 0x54) = esp; /* 0x005F4370: mov dword ptr [esp + 0x54], esp */
    PUSH32(esp, 5); /* 0x005F4374: push 5 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F4376: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F437D: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69D8u); /* 0x005F4384: push 0x7f69d8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F4389: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F438C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x68) = (uint8_t)(0xBu); /* 0x005F4391: mov byte ptr [esp + 0x68], 0xb */
    MEM32(esp + 0x68) = 0xFFFFFFFFu; /* 0x005F4396: mov dword ptr [esp + 0x68], 0xffffffff */
    ecx = 0x53u; /* 0x005F439E: mov ecx, 0x53 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F43A3: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F43A8: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005F43AB:
    _xmm[0].u64[0] = MEM32(edi + esi * 4); _xmm[0].u64[1] = 0; /* 0x005F43AB: movss xmm0, dword ptr [edi + esi*4] */
    _xmm[1].u64[0] = MEM32(esp + 0x10); _xmm[1].u64[1] = 0; /* 0x005F43B0: movss xmm1, dword ptr [esp + 0x10] */
    _xmm[2].u64[0] = MEM32(0x809818); _xmm[2].u64[1] = 0; /* 0x005F43B6: movss xmm2, dword ptr [0x809818] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x005F43BE: mulss xmm0, xmm1 */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F43C2: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_005F43D7; /* 0x005F43C5: jbe 0x5f43d7 */
L_005F43C7:
    _xmm[3].u64[0] = MEM32(0x808C44); _xmm[3].u64[1] = 0; /* 0x005F43C7: movss xmm3, dword ptr [0x808c44] */
    _xmm[1] = _xmm[2]; /* 0x005F43CF: movaps xmm1, xmm2 */
    goto L_005F4504; /* 0x005F43D2: jmp 0x5f4504 */
L_005F43D7:
    /* cmp esi, 4 */ /* 0x005F43D7: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F4458; /* 0x005F43DA: jb 0x5f4458 */
L_005F43DC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F43DC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F43DF: mov ecx, esp */
    MEM32(esp + 0x40) = esp; /* 0x005F43E1: mov dword ptr [esp + 0x40], esp */
    PUSH32(esp, 0x2Cu); /* 0x005F43E5: push 0x2c */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F43E7: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F43EE: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69A8u); /* 0x005F43F5: push 0x7f69a8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F43FA: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F43FD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 0xCu; /* 0x005F4402: mov dword ptr [esp + 0x50], 0xc */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F440A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F440D: mov ecx, esp */
    MEM32(esp + 0x54) = esp; /* 0x005F440F: mov dword ptr [esp + 0x54], esp */
    PUSH32(esp, 5); /* 0x005F4413: push 5 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F4415: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F441C: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69D8u); /* 0x005F4423: push 0x7f69d8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F4428: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F442B: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x68) = (uint8_t)(0xDu); /* 0x005F4430: mov byte ptr [esp + 0x68], 0xd */
    MEM32(esp + 0x68) = 0xFFFFFFFFu; /* 0x005F4435: mov dword ptr [esp + 0x68], 0xffffffff */
    ecx = 0x53u; /* 0x005F443D: mov ecx, 0x53 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F4442: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _xmm[2].u64[0] = MEM32(0x809818); _xmm[2].u64[1] = 0; /* 0x005F4447: movss xmm2, dword ptr [0x809818] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F444F: add esp, 0x30 */
    _flag_k = FK_ADD;
    _xmm[1].u64[0] = MEM32(esp + 0x10); _xmm[1].u64[1] = 0; /* 0x005F4452: movss xmm1, dword ptr [esp + 0x10] */
L_005F4458:
    _xmm[0].u64[0] = MEM32(edi + esi * 4); _xmm[0].u64[1] = 0; /* 0x005F4458: movss xmm0, dword ptr [edi + esi*4] */
    _xmm[3].u64[0] = MEM32(0x808C44); _xmm[3].u64[1] = 0; /* 0x005F445D: movss xmm3, dword ptr [0x808c44] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x005F4465: mulss xmm0, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F4469: comiss xmm0, xmm3 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_005F4476; /* 0x005F446C: jbe 0x5f4476 */
L_005F446E:
    _xmm[1] = _xmm[3]; /* 0x005F446E: movaps xmm1, xmm3 */
    goto L_005F4504; /* 0x005F4471: jmp 0x5f4504 */
L_005F4476:
    /* cmp esi, 4 */ /* 0x005F4476: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F44F9; /* 0x005F4479: jb 0x5f44f9 */
L_005F447B:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F447B: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F447E: mov ecx, esp */
    MEM32(esp + 0x40) = esp; /* 0x005F4480: mov dword ptr [esp + 0x40], esp */
    PUSH32(esp, 0x2Cu); /* 0x005F4484: push 0x2c */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F4486: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F448D: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69A8u); /* 0x005F4494: push 0x7f69a8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F4499: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F449C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x50) = 0xEu; /* 0x005F44A1: mov dword ptr [esp + 0x50], 0xe */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F44A9: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F44AC: mov ecx, esp */
    MEM32(esp + 0x54) = esp; /* 0x005F44AE: mov dword ptr [esp + 0x54], esp */
    PUSH32(esp, 5); /* 0x005F44B2: push 5 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F44B4: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F44BB: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69D8u); /* 0x005F44C2: push 0x7f69d8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F44C7: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F44CA: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x68) = (uint8_t)(0xFu); /* 0x005F44CF: mov byte ptr [esp + 0x68], 0xf */
    MEM32(esp + 0x68) = 0xFFFFFFFFu; /* 0x005F44D4: mov dword ptr [esp + 0x68], 0xffffffff */
    ecx = 0x53u; /* 0x005F44DC: mov ecx, 0x53 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F44E1: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _xmm[2].u64[0] = MEM32(0x809818); _xmm[2].u64[1] = 0; /* 0x005F44E6: movss xmm2, dword ptr [0x809818] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F44EE: add esp, 0x30 */
    _flag_k = FK_ADD;
    _xmm[3].u64[0] = MEM32(0x808C44); _xmm[3].u64[1] = 0; /* 0x005F44F1: movss xmm3, dword ptr [0x808c44] */
L_005F44F9:
    _xmm[1].u64[0] = MEM32(edi + esi * 4); _xmm[1].u64[1] = 0; /* 0x005F44F9: movss xmm1, dword ptr [edi + esi*4] */
    { float _s = sse_f32(MEM32(esp + 0x10)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x005F44FE: mulss xmm1, dword ptr [esp + 0x10] */
L_005F4504:
    _xmm[0].u64[0] = MEM32(esp + 0x20); _xmm[0].u64[1] = 0; /* 0x005F4504: movss xmm0, dword ptr [esp + 0x20] */
    PUSH32(esp, ecx); /* 0x005F450A: push ecx */
    ecx = MEM32(esp + 0x20); /* 0x005F450B: mov ecx, dword ptr [esp + 0x20] */
    MEM32(esp) = _xmm[0].u32[0]; /* 0x005F450F: movss dword ptr [esp], xmm0 */
    RECOMP_CALL(sub_005F3DE0); /* 0x005F4514: call 0x5f3de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x14); /* 0x005F4519: mov eax, dword ptr [esp + 0x14] */
L_005F451D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005F451D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 4 */ /* 0x005F451E: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F4330; /* 0x005F4521: jb 0x5f4330 */
L_005F4527:
    ecx = MEM32(esp + 0x30); /* 0x005F4527: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F452B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F4532: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F4533: pop edi */
    esi = POP32_VAL(esp); /* 0x005F4534: pop esi */
    esp = ebp; /* 0x005F4535: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F4537: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4538: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F4540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4540u);

L_005F4540:
    PUSH32(esp, ebp); /* 0x005F4540: push ebp */
    ebp = esp; /* 0x005F4541: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F4543: push -1 */
    PUSH32(esp, 0x007B2980u); /* 0x005F4545: push 0x7b2980 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F454A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F4550: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005F4551: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005F4554: push ebx */
    PUSH32(esp, esi); /* 0x005F4555: push esi */
    PUSH32(esp, edi); /* 0x005F4556: push edi */
    eax = MEM32(0x855000); /* 0x005F4557: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F455C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F455E: push eax */
    eax = ebp + (-0xC); /* 0x005F455F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F4562: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x14)) = _xmm[2].u32[0]; /* 0x005F4568: movss dword ptr [ebp - 0x14], xmm2 */
    esi = ecx; /* 0x005F456D: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x005F456F: mov dword ptr [ebp - 0x18], esi */
    edi = MEM32(ebp + 0x8); /* 0x005F4572: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005F4575: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = MEM32(0x808CB0); _xmm[0].u64[1] = 0; /* 0x005F4577: movss xmm0, dword ptr [0x808cb0] */
    MEM32(ebp + 0x8) = _xmm[0].u32[0]; /* 0x005F457F: movss dword ptr [ebp + 8], xmm0 */
    MEM32(ebp + (-0x10)) = ebx; /* 0x005F4584: mov dword ptr [ebp - 0x10], ebx */
    ecx = ebx + 0x3; /* 0x005F4587: lea ecx, [ebx + 3] */
    MEM32(edi + 0xC) = 0; /* 0x005F458A: mov dword ptr [edi + 0xc], 0 */
    MEM32(edi + 0x8) = 0; /* 0x005F4591: mov dword ptr [edi + 8], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005F4598: mov dword ptr [edi + 4], 0 */
    MEM32(edi) = 0; /* 0x005F459F: mov dword ptr [edi], 0 */
    RECOMP_CALL(sub_0046D3D0); /* 0x005F45A5: call 0x46d3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005F45AA: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005F45BC; /* 0x005F45AB: je 0x5f45bc */
L_005F45AD:
    PUSH32(esp, eax); /* 0x005F45AD: push eax */
    eax = ebp + (-0x10); /* 0x005F45AE: lea eax, [ebp - 0x10] */
    ecx = esi; /* 0x005F45B1: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005F45B3: push eax */
    RECOMP_CALL(sub_005F58E0); /* 0x005F45B4: call 0x5f58e0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x10)); /* 0x005F45B9: mov ebx, dword ptr [ebp - 0x10] */
L_005F45BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005F45BC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x005F45BE: mov edi, edi */
L_005F45C0:
    /* cmp esi, ebx */ /* 0x005F45C0: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005F4749; /* 0x005F45C2: je 0x5f4749 */
L_005F45C8:
    /* cmp esi, 4 */ /* 0x005F45C8: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F4636; /* 0x005F45CB: jb 0x5f4636 */
L_005F45CD:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F45CD: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F45D0: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x005F45D2: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x2Cu); /* 0x005F45D5: push 0x2c */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F45D7: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F45DE: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69A8u); /* 0x005F45E5: push 0x7f69a8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F45EA: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F45ED: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x005F45F2: mov dword ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F45F9: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F45FC: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x005F45FE: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 5); /* 0x005F4601: push 5 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F4603: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F460A: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69D8u); /* 0x005F4611: push 0x7f69d8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F4616: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F4619: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005F461E: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F4622: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x59u; /* 0x005F4629: mov ecx, 0x59 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F462E: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F4633: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005F4636:
    _xmm[3].u64[0] = MEM32(ebp + (-0x14)); _xmm[3].u64[1] = 0; /* 0x005F4636: movss xmm3, dword ptr [ebp - 0x14] */
    _xmm[2].u64[0] = MEM32(0x808C44); _xmm[2].u64[1] = 0; /* 0x005F463B: movss xmm2, dword ptr [0x808c44] */
    _xmm[1].u64[0] = MEM32(0x809818); _xmm[1].u64[1] = 0; /* 0x005F4643: movss xmm1, dword ptr [0x809818] */
    ecx = MEM32(ebp + (-0x18)); /* 0x005F464B: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_005F3F50); /* 0x005F464E: call 0x5f3f50 */
    RECOMP_FLAGS_IN();
    MEM32(edi + esi * 4) = _xmm[0].u32[0]; /* 0x005F4653: movss dword ptr [edi + esi*4], xmm0 */
    /* cmp esi, 4 */ /* 0x005F4658: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F4730; /* 0x005F465B: jb 0x5f4730 */
L_005F4661:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F4661: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F4664: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x005F4666: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 0x2Cu); /* 0x005F4669: push 0x2c */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F466B: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F4672: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69A8u); /* 0x005F4679: push 0x7f69a8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F467E: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F4681: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 4; /* 0x005F4686: mov dword ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F468D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F4690: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x005F4692: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 5); /* 0x005F4695: push 5 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F4697: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F469E: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69D8u); /* 0x005F46A5: push 0x7f69d8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F46AA: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F46AD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005F46B2: mov byte ptr [ebp - 4], 5 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F46B6: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x59u; /* 0x005F46BD: mov ecx, 0x59 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F46C2: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x005F46C7: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = esp; /* 0x005F46CA: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x005F46CC: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 0x2Cu); /* 0x005F46CF: push 0x2c */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F46D1: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F46D8: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69A8u); /* 0x005F46DF: push 0x7f69a8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F46E4: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F46E7: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 6; /* 0x005F46EC: mov dword ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F46F3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F46F6: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x005F46F8: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 5); /* 0x005F46FB: push 5 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F46FD: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F4704: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69D8u); /* 0x005F470B: push 0x7f69d8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F4710: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F4713: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x005F4718: mov byte ptr [ebp - 4], 7 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F471C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x59u; /* 0x005F4723: mov ecx, 0x59 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F4728: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F472D: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005F4730:
    _xmm[0].u64[0] = MEM32(edi + esi * 4); _xmm[0].u64[1] = 0; /* 0x005F4730: movss xmm0, dword ptr [edi + esi*4] */
    _xmm[1].u64[0] = MEM32(ebp + 0x8); _xmm[1].u64[1] = 0; /* 0x005F4735: movss xmm1, dword ptr [ebp + 8] */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x005F473A: mulss xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x005F473E: subss xmm1, xmm0 */
    MEM32(ebp + 0x8) = _xmm[1].u32[0]; /* 0x005F4742: movss dword ptr [ebp + 8], xmm1 */
    goto L_005F474E; /* 0x005F4747: jmp 0x5f474e */
L_005F4749:
    _xmm[1].u64[0] = MEM32(ebp + 0x8); _xmm[1].u64[1] = 0; /* 0x005F4749: movss xmm1, dword ptr [ebp + 8] */
L_005F474E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005F474E: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 4 */ /* 0x005F474F: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005F45C0; /* 0x005F4752: jb 0x5f45c0 */
L_005F4758:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005F4758: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F475B: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_005F4765; /* 0x005F475E: jbe 0x5f4765 */
L_005F4760:
    MEM32(ebp + 0x8) = _xmm[0].u32[0]; /* 0x005F4760: movss dword ptr [ebp + 8], xmm0 */
L_005F4765:
    /* cmp ebx, 4 */ /* 0x005F4765: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F47D3; /* 0x005F4768: jb 0x5f47d3 */
L_005F476A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F476A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F476D: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x005F476F: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 0x2Cu); /* 0x005F4772: push 0x2c */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F4774: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F477B: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69A8u); /* 0x005F4782: push 0x7f69a8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F4787: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F478A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 8; /* 0x005F478F: mov dword ptr [ebp - 4], 8 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005F4796: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005F4799: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x005F479B: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 5); /* 0x005F479E: push 5 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005F47A0: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005F47A7: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F69D8u); /* 0x005F47AE: push 0x7f69d8 */
    MEM8(ecx) = (uint8_t)(0); /* 0x005F47B3: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005F47B6: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x005F47BB: mov byte ptr [ebp - 4], 9 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F47BF: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x59u; /* 0x005F47C6: mov ecx, 0x59 */
    RECOMP_CALL(sub_00668DA0); /* 0x005F47CB: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x005F47D0: add esp, 0x30 */
    _flag_k = FK_ADD;
L_005F47D3:
    _xmm[0].u64[0] = MEM32(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x005F47D3: movss xmm0, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005F47D8: push ecx */
    MEM32(esp) = _xmm[0].u32[0]; /* 0x005F47D9: movss dword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0040A6C0); /* 0x005F47DE: call 0x40a6c0 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + ebx * 4) = _v; } /* 0x005F47E3: fstp dword ptr [edi + ebx*4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F47E6: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x005F47E9: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F47EB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F47EE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F47F5: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F47F6: pop edi */
    esi = POP32_VAL(esp); /* 0x005F47F7: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F47F8: pop ebx */
    esp = ebp; /* 0x005F47F9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F47FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F47FC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F4800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4800u);

L_005F4800:
    PUSH32(esp, ebp); /* 0x005F4800: push ebp */
    ebp = esp; /* 0x005F4801: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005F4803: push esi */
    esi = ecx; /* 0x005F4804: mov esi, ecx */
    PUSH32(esp, edi); /* 0x005F4806: push edi */
    PUSH32(esp, 0x100u); /* 0x005F4807: push 0x100 */
    ecx = esi + 0x14; /* 0x005F480C: lea ecx, [esi + 0x14] */
    MEM32(esi + 0x8) = 0x800u; /* 0x005F480F: mov dword ptr [esi + 8], 0x800 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005F4816: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x005F481B: mov edi, dword ptr [ebp + 8] */
    MEM32(esi + 0xC) = 0; /* 0x005F481E: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005F4825: mov dword ptr [esi + 0x10], 0 */
    eax = MEM32(edi + 0xC); /* 0x005F482C: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F482F: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F4832: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F4832: shr eax, 3 */
    /* test eax, eax */ /* 0x005F4835: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F4844; /* 0x005F4837: je 0x5f4844 */
L_005F4839:
    PUSH32(esp, eax); /* 0x005F4839: push eax */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x005F483A: push dword ptr [edi + 0x14] */
    ecx = esi; /* 0x005F483D: mov ecx, esi */
    RECOMP_CALL(sub_005F5730); /* 0x005F483F: call 0x5f5730 */
    RECOMP_FLAGS_IN();
L_005F4844:
    eax = MEM32(edi); /* 0x005F4844: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x005F4846: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x4); /* 0x005F4848: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x005F484B: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi + 0x8); /* 0x005F484E: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x005F4851: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0x10); /* 0x005F4854: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x005F4857: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(edi + 0xC); /* 0x005F485A: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x005F485D: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x005F4860: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x005F4862: pop edi */
    esi = POP32_VAL(esp); /* 0x005F4863: pop esi */
    ebp = POP32_VAL(esp); /* 0x005F4864: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4865: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F4870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4870u);

L_005F4870:
    PUSH32(esp, ebp); /* 0x005F4870: push ebp */
    ebp = esp; /* 0x005F4871: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F4873: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F4876: push -1 */
    PUSH32(esp, 0x007B29D0u); /* 0x005F4878: push 0x7b29d0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F487D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F4883: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x005F4884: sub esp, 0x6c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005F4887: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F488C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x64) = eax; /* 0x005F488E: mov dword ptr [esp + 0x64], eax */
    PUSH32(esp, esi); /* 0x005F4892: push esi */
    PUSH32(esp, edi); /* 0x005F4893: push edi */
    eax = MEM32(0x855000); /* 0x005F4894: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005F4899: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005F489B: push eax */
    eax = esp + 0x78; /* 0x005F489C: lea eax, [esp + 0x78] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F48A0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F48A6: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x005F48A8: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x005F48AB: push 4 */
    PUSH32(esp, 0); /* 0x005F48AD: push 0 */
    RECOMP_CALL(sub_005DC520); /* 0x005F48AF: call 0x5dc520 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x005F48B4: movzx eax, al */
    /* cmp eax, 4 */ /* 0x005F48B7: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005F4A7F; /* 0x005F48BA: ja 0x5f4a7f */
L_005F48C0:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x5F4AA0)); goto _ljump; }
L_005F48C7:
    eax = esp + 0x18; /* 0x005F48C7: lea eax, [esp + 0x18] */
    ecx = esi; /* 0x005F48CB: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005F48CD: push eax */
    RECOMP_CALL(sub_005F5260); /* 0x005F48CE: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x10; /* 0x005F48D3: lea eax, [esp + 0x10] */
    MEM32(esp + 0x10) = 0x7F7FFFFFu; /* 0x005F48D7: mov dword ptr [esp + 0x10], 0x7f7fffff */
    PUSH32(esp, eax); /* 0x005F48DF: push eax */
    eax = esp + 0x18; /* 0x005F48E0: lea eax, [esp + 0x18] */
    MEM32(esp + 0x18) = 0x00800000u; /* 0x005F48E4: mov dword ptr [esp + 0x18], 0x800000 */
    PUSH32(esp, eax); /* 0x005F48EC: push eax */
    eax = esp + 0x20; /* 0x005F48ED: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x005F48F1: push eax */
    ecx = esp + 0x28; /* 0x005F48F2: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_005F5C10); /* 0x005F48F6: call 0x5f5c10 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x80) = 0; /* 0x005F48FB: mov dword ptr [esp + 0x80], 0 */
    eax = esp + 0x1C; /* 0x005F4906: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005F490A: push eax */
    ecx = edi; /* 0x005F490B: mov ecx, edi */
    RECOMP_CALL(sub_0046D2F0); /* 0x005F490D: call 0x46d2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x80) = 0xFFFFFFFFu; /* 0x005F4912: mov dword ptr [esp + 0x80], 0xffffffff */
    ecx = esp + 0x1C; /* 0x005F491D: lea ecx, [esp + 0x1c] */
    goto L_005F4A7A; /* 0x005F4921: jmp 0x5f4a7a */
L_005F4926:
    eax = esp + 0x10; /* 0x005F4926: lea eax, [esp + 0x10] */
    ecx = esi; /* 0x005F492A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005F492C: push eax */
    RECOMP_CALL(sub_005F5260); /* 0x005F492D: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x18; /* 0x005F4932: lea eax, [esp + 0x18] */
    MEM32(esp + 0x18) = 0x7FFFFFFFu; /* 0x005F4936: mov dword ptr [esp + 0x18], 0x7fffffff */
    PUSH32(esp, eax); /* 0x005F493E: push eax */
    eax = esp + 0x18; /* 0x005F493F: lea eax, [esp + 0x18] */
    MEM32(esp + 0x18) = 0x80000000u; /* 0x005F4943: mov dword ptr [esp + 0x18], 0x80000000 */
    PUSH32(esp, eax); /* 0x005F494B: push eax */
    eax = esp + 0x18; /* 0x005F494C: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005F4950: push eax */
    ecx = esp + 0x40; /* 0x005F4951: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_005F5DC0); /* 0x005F4955: call 0x5f5dc0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x80) = 1; /* 0x005F495A: mov dword ptr [esp + 0x80], 1 */
    eax = esp + 0x34; /* 0x005F4965: lea eax, [esp + 0x34] */
    PUSH32(esp, eax); /* 0x005F4969: push eax */
    ecx = edi; /* 0x005F496A: mov ecx, edi */
    RECOMP_CALL(sub_0046D2F0); /* 0x005F496C: call 0x46d2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x80) = 0xFFFFFFFFu; /* 0x005F4971: mov dword ptr [esp + 0x80], 0xffffffff */
    ecx = esp + 0x34; /* 0x005F497C: lea ecx, [esp + 0x34] */
    goto L_005F4A7A; /* 0x005F4980: jmp 0x5f4a7a */
L_005F4985:
    eax = esp + 0xF; /* 0x005F4985: lea eax, [esp + 0xf] */
    ecx = esi; /* 0x005F4989: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005F498B: push eax */
    RECOMP_CALL(sub_005F5060); /* 0x005F498C: call 0x5f5060 */
    RECOMP_FLAGS_IN();
    eax = esp + 0xF; /* 0x005F4991: lea eax, [esp + 0xf] */
    PUSH32(esp, eax); /* 0x005F4995: push eax */
    ecx = esp + 0x44; /* 0x005F4996: lea ecx, [esp + 0x44] */
    RECOMP_CALL(sub_005293B0); /* 0x005F499A: call 0x5293b0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x80) = 2; /* 0x005F499F: mov dword ptr [esp + 0x80], 2 */
    eax = esp + 0x40; /* 0x005F49AA: lea eax, [esp + 0x40] */
    PUSH32(esp, eax); /* 0x005F49AE: push eax */
    ecx = edi; /* 0x005F49AF: mov ecx, edi */
    RECOMP_CALL(sub_0046D2F0); /* 0x005F49B1: call 0x46d2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x80) = 0xFFFFFFFFu; /* 0x005F49B6: mov dword ptr [esp + 0x80], 0xffffffff */
    ecx = esp + 0x40; /* 0x005F49C1: lea ecx, [esp + 0x40] */
    goto L_005F4A7A; /* 0x005F49C5: jmp 0x5f4a7a */
L_005F49CA:
    MEM32(esp + 0x68) = 0; /* 0x005F49CA: mov dword ptr [esp + 0x68], 0 */
    MEM32(esp + 0x6C) = 0; /* 0x005F49D2: mov dword ptr [esp + 0x6c], 0 */
    MEM32(esp + 0x6C) = 0xFu; /* 0x005F49DA: mov dword ptr [esp + 0x6c], 0xf */
    MEM32(esp + 0x68) = 0; /* 0x005F49E2: mov dword ptr [esp + 0x68], 0 */
    MEM8(esp + 0x58) = (uint8_t)(0); /* 0x005F49EA: mov byte ptr [esp + 0x58], 0 */
    MEM32(esp + 0x80) = 3; /* 0x005F49EF: mov dword ptr [esp + 0x80], 3 */
    eax = esp + 0x58; /* 0x005F49FA: lea eax, [esp + 0x58] */
    PUSH32(esp, eax); /* 0x005F49FE: push eax */
    ecx = esi; /* 0x005F49FF: mov ecx, esi */
    RECOMP_CALL(sub_005F5420); /* 0x005F4A01: call 0x5f5420 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x58; /* 0x005F4A06: lea eax, [esp + 0x58] */
    PUSH32(esp, eax); /* 0x005F4A0A: push eax */
    ecx = esp + 0x2C; /* 0x005F4A0B: lea ecx, [esp + 0x2c] */
    RECOMP_CALL(sub_005F3B00); /* 0x005F4A0F: call 0x5f3b00 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x80) = (uint8_t)(4); /* 0x005F4A14: mov byte ptr [esp + 0x80], 4 */
    eax = esp + 0x28; /* 0x005F4A1C: lea eax, [esp + 0x28] */
    PUSH32(esp, eax); /* 0x005F4A20: push eax */
    ecx = edi; /* 0x005F4A21: mov ecx, edi */
    RECOMP_CALL(sub_0046D2F0); /* 0x005F4A23: call 0x46d2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x80) = (uint8_t)(3); /* 0x005F4A28: mov byte ptr [esp + 0x80], 3 */
    ecx = esp + 0x28; /* 0x005F4A30: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_0041A4B0); /* 0x005F4A34: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x80) = 0xFFFFFFFFu; /* 0x005F4A39: mov dword ptr [esp + 0x80], 0xffffffff */
    ecx = esp + 0x58; /* 0x005F4A44: lea ecx, [esp + 0x58] */
    RECOMP_CALL(sub_0040A000); /* 0x005F4A48: call 0x40a000 */
    RECOMP_FLAGS_IN();
    goto L_005F4A7F; /* 0x005F4A4D: jmp 0x5f4a7f */
L_005F4A4F:
    ecx = esp + 0x4C; /* 0x005F4A4F: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_0046D280); /* 0x005F4A53: call 0x46d280 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x80) = 5; /* 0x005F4A58: mov dword ptr [esp + 0x80], 5 */
    ecx = edi; /* 0x005F4A63: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005F4A65: push eax */
    RECOMP_CALL(sub_0046D2F0); /* 0x005F4A66: call 0x46d2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x80) = 0xFFFFFFFFu; /* 0x005F4A6B: mov dword ptr [esp + 0x80], 0xffffffff */
    ecx = esp + 0x4C; /* 0x005F4A76: lea ecx, [esp + 0x4c] */
L_005F4A7A:
    RECOMP_CALL(sub_0041A4B0); /* 0x005F4A7A: call 0x41a4b0 */
    RECOMP_FLAGS_IN();
L_005F4A7F:
    eax = esi; /* 0x005F4A7F: mov eax, esi */
    ecx = MEM32(esp + 0x78); /* 0x005F4A81: mov ecx, dword ptr [esp + 0x78] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F4A85: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F4A8C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F4A8D: pop edi */
    esi = POP32_VAL(esp); /* 0x005F4A8E: pop esi */
    ecx = MEM32(esp + 0x64); /* 0x005F4A8F: mov ecx, dword ptr [esp + 0x64] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005F4A93: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005F4A95: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005F4A9A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F4A9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4A9D: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x005F48C7u: goto L_005F48C7;
      case 0x005F4926u: goto L_005F4926;
      case 0x005F4985u: goto L_005F4985;
      case 0x005F49CAu: goto L_005F49CA;
      case 0x005F4A4Fu: goto L_005F4A4F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_005F4AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4AC0u);

L_005F4AC0:
    PUSH32(esp, ebp); /* 0x005F4AC0: push ebp */
    ebp = esp; /* 0x005F4AC1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F4AC3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005F4AC6: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005F4AC9: push esi */
    eax = esp + 0x8; /* 0x005F4ACA: lea eax, [esp + 8] */
    esi = ecx; /* 0x005F4ACE: mov esi, ecx */
    PUSH32(esp, eax); /* 0x005F4AD0: push eax */
    RECOMP_CALL(sub_005F5340); /* 0x005F4AD1: call 0x5f5340 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x005F4AD6: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(esp + 0x8); /* 0x005F4AD9: mov eax, dword ptr [esp + 8] */
    MEM32(edx) = eax; /* 0x005F4ADD: mov dword ptr [edx], eax */
    eax = MEM32(esp + 0xC); /* 0x005F4ADF: mov eax, dword ptr [esp + 0xc] */
    MEM32(edx + 0x4) = eax; /* 0x005F4AE3: mov dword ptr [edx + 4], eax */
    eax = esi; /* 0x005F4AE6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005F4AE8: pop esi */
    esp = ebp; /* 0x005F4AE9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F4AEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4AEC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F4AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4AF0u);

L_005F4AF0:
    PUSH32(esp, ebp); /* 0x005F4AF0: push ebp */
    ebp = esp; /* 0x005F4AF1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005F4AF3: push ecx */
    PUSH32(esp, ebx); /* 0x005F4AF4: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x005F4AF5: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005F4AF8: push esi */
    PUSH32(esp, edi); /* 0x005F4AF9: push edi */
    esi = ecx; /* 0x005F4AFA: mov esi, ecx */
    PUSH32(esp, ebx); /* 0x005F4AFC: push ebx */
    MEM32(ebp + (-0x4)) = esi; /* 0x005F4AFD: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_005F5260); /* 0x005F4B00: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    edi = ebx + 0x4; /* 0x005F4B05: lea edi, [ebx + 4] */
    ecx = esi; /* 0x005F4B08: mov ecx, esi */
    PUSH32(esp, edi); /* 0x005F4B0A: push edi */
    RECOMP_CALL(sub_005F5260); /* 0x005F4B0B: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x005F4B10: mov ecx, dword ptr [ebp - 4] */
    esi = ebx + 0x8; /* 0x005F4B13: lea esi, [ebx + 8] */
    PUSH32(esp, esi); /* 0x005F4B16: push esi */
    RECOMP_CALL(sub_005F5260); /* 0x005F4B17: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x005F4B1C: movss xmm0, dword ptr [ebx] */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x005F4B20: xorps xmm4, xmm4 */
    _xmm[3].u64[0] = MEM32(0x808CB0); _xmm[3].u64[1] = 0; /* 0x005F4B23: movss xmm3, dword ptr [0x808cb0] */
    _xmm[1].u64[0] = MEM32(edi); _xmm[1].u64[1] = 0; /* 0x005F4B2B: movss xmm1, dword ptr [edi] */
    _xmm[2].u64[0] = MEM32(esi); _xmm[2].u64[1] = 0; /* 0x005F4B2F: movss xmm2, dword ptr [esi] */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x005F4B33: mulss xmm0, xmm0 */
    MEM32(ebx + 0xC) = 0; /* 0x005F4B37: mov dword ptr [ebx + 0xc], 0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x005F4B3E: mulss xmm1, xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x005F4B42: subss xmm3, xmm0 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x005F4B46: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x005F4B4A: subss xmm3, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x005F4B4E: subss xmm3, xmm2 */
    _flag_a = SSE_COMI(_xmm[4].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F4B52: comiss xmm4, xmm3 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_005F4B5A; /* 0x005F4B55: jbe 0x5f4b5a */
L_005F4B57:
    _xmm[3] = _xmm[4]; /* 0x005F4B57: movaps xmm3, xmm4 */
L_005F4B5A:
    PUSH32(esp, ecx); /* 0x005F4B5A: push ecx */
    MEM32(esp) = _xmm[3].u32[0]; /* 0x005F4B5B: movss dword ptr [esp], xmm3 */
    RECOMP_CALL(sub_0040A6C0); /* 0x005F4B60: call 0x40a6c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x005F4B65: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F4B68: add esp, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xC) = _v; } /* 0x005F4B6B: fstp dword ptr [ebx + 0xc] */
    edi = POP32_VAL(esp); /* 0x005F4B6E: pop edi */
    esi = POP32_VAL(esp); /* 0x005F4B6F: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F4B70: pop ebx */
    esp = ebp; /* 0x005F4B71: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F4B73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4B74: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F4B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4B80u);

L_005F4B80:
    PUSH32(esp, ebp); /* 0x005F4B80: push ebp */
    ebp = esp; /* 0x005F4B81: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005F4B83: push esi */
    esi = MEM32(ebp + 0x8); /* 0x005F4B84: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x005F4B87: push edi */
    PUSH32(esp, esi); /* 0x005F4B88: push esi */
    edi = ecx; /* 0x005F4B89: mov edi, ecx */
    RECOMP_CALL(sub_005F5260); /* 0x005F4B8B: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x4; /* 0x005F4B90: lea eax, [esi + 4] */
    ecx = edi; /* 0x005F4B93: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005F4B95: push eax */
    RECOMP_CALL(sub_005F5260); /* 0x005F4B96: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x8; /* 0x005F4B9B: lea eax, [esi + 8] */
    ecx = edi; /* 0x005F4B9E: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005F4BA0: push eax */
    RECOMP_CALL(sub_005F5260); /* 0x005F4BA1: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x005F4BA6: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x005F4BA8: pop edi */
    esi = POP32_VAL(esp); /* 0x005F4BA9: pop esi */
    ebp = POP32_VAL(esp); /* 0x005F4BAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4BAB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F4BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4BB0u);

L_005F4BB0:
    PUSH32(esp, ebp); /* 0x005F4BB0: push ebp */
    ebp = esp; /* 0x005F4BB1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005F4BB3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x005F4BB4: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x005F4BB7: push edi */
    PUSH32(esp, esi); /* 0x005F4BB8: push esi */
    edi = ecx; /* 0x005F4BB9: mov edi, ecx */
    RECOMP_CALL(sub_005F5420); /* 0x005F4BBB: call 0x5f5420 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x30; /* 0x005F4BC0: lea eax, [esi + 0x30] */
    ecx = edi; /* 0x005F4BC3: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005F4BC5: push eax */
    RECOMP_CALL(sub_005F5260); /* 0x005F4BC6: call 0x5f5260 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x10); /* 0x005F4BCB: mov ecx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x34u; /* 0x005F4BCE: add esi, 0x34 */
    _flag_k = FK_ADD;
    /* test LO8(ecx), 7 */ /* 0x005F4BD1: test cl, 7 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F4C04; /* 0x005F4BD4: jne 0x5f4c04 */
L_005F4BD6:
    eax = ecx + 0xA0; /* 0x005F4BD6: lea eax, [ecx + 0xa0] */
    /* cmp eax, MEM32(edi + 0xC) */ /* 0x005F4BDC: cmp eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005F4C11; /* 0x005F4BDF: ja 0x5f4c11 */
L_005F4BE1:
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005F4BE1: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005F4BE1: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0x14); /* 0x005F4BE4: add ecx, dword ptr [edi + 0x14] */
    _flag_k = FK_ADD;
    _xmm[0] = xmm_ld(ecx); /* 0x005F4BE7: movdqu xmm0, xmmword ptr [ecx] */
    xmm_st(esi, _xmm[0]); /* 0x005F4BEB: movdqu xmmword ptr [esi], xmm0 */
    eax = MEM32(ecx + 0x10); /* 0x005F4BEF: mov eax, dword ptr [ecx + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x005F4BF2: mov dword ptr [esi + 0x10], eax */
    eax = edi; /* 0x005F4BF5: mov eax, edi */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x10) = MEM32(edi + 0x10) + 0xA0u; /* 0x005F4BF7: add dword ptr [edi + 0x10], 0xa0 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005F4BFE: pop edi */
    esi = POP32_VAL(esp); /* 0x005F4BFF: pop esi */
    ebp = POP32_VAL(esp); /* 0x005F4C00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4C01: ret 4 */
L_005F4C04:
    PUSH32(esp, 0xA0u); /* 0x005F4C04: push 0xa0 */
    PUSH32(esp, esi); /* 0x005F4C09: push esi */
    ecx = edi; /* 0x005F4C0A: mov ecx, edi */
    RECOMP_CALL(sub_005F58E0); /* 0x005F4C0C: call 0x5f58e0 */
    RECOMP_FLAGS_IN();
L_005F4C11:
    eax = edi; /* 0x005F4C11: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x005F4C13: pop edi */
    esi = POP32_VAL(esp); /* 0x005F4C14: pop esi */
    ebp = POP32_VAL(esp); /* 0x005F4C15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4C16: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F4C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4C20u);

L_005F4C20:
    PUSH32(esp, ebp); /* 0x005F4C20: push ebp */
    ebp = esp; /* 0x005F4C21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005F4C23: push -1 */
    PUSH32(esp, 0x0078D528u); /* 0x005F4C25: push 0x78d528 */
    eax = MEM32(FS_BASE + (0)); /* 0x005F4C2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005F4C30: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005F4C31: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005F4C34: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005F4C39: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005F4C3B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x005F4C3E: push ebx */
    PUSH32(esp, esi); /* 0x005F4C3F: push esi */
    PUSH32(esp, edi); /* 0x005F4C40: push edi */
    PUSH32(esp, eax); /* 0x005F4C41: push eax */
    eax = ebp + (-0xC); /* 0x005F4C42: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005F4C45: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005F4C4B: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x005F4C4D: mov edi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x005F4C50: mov ecx, edi */
    RECOMP_CALL(sub_005F3BD0); /* 0x005F4C52: call 0x5f3bd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x005F4C57: push 4 */
    SET_LO8(ebx, LO8(eax)); /* 0x005F4C59: mov bl, al */
    ecx = esi; /* 0x005F4C5B: mov ecx, esi */
    PUSH32(esp, 0); /* 0x005F4C5D: push 0 */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(ebx)); /* 0x005F4C5F: mov byte ptr [ebp - 0x30], bl */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x005F4C62: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_005DC3D0); /* 0x005F4C65: call 0x5dc3d0 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(ebx); /* 0x005F4C6A: movzx eax, bl */
    /* cmp eax, 3 */ /* 0x005F4C6D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005F4CFF; /* 0x005F4C70: ja 0x5f4cff */
L_005F4C76:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x5F4D20)); goto _ljump; }
L_005F4C7D:
    ecx = edi + 0x8; /* 0x005F4C7D: lea ecx, [edi + 8] */
    RECOMP_CALL(sub_0041AD30); /* 0x005F4C80: call 0x41ad30 */
    RECOMP_FLAGS_IN();
    _xmm[1] = _xmm[0]; /* 0x005F4C85: movaps xmm1, xmm0 */
    ecx = esi; /* 0x005F4C88: mov ecx, esi */
    RECOMP_CALL(sub_005F5610); /* 0x005F4C8A: call 0x5f5610 */
    RECOMP_FLAGS_IN();
    goto L_005F4CFF; /* 0x005F4C8F: jmp 0x5f4cff */
L_005F4C91:
    ecx = edi + 0x8; /* 0x005F4C91: lea ecx, [edi + 8] */
    RECOMP_CALL(sub_0041ADE0); /* 0x005F4C94: call 0x41ade0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005F4C99: push eax */
    ecx = esi; /* 0x005F4C9A: mov ecx, esi */
    RECOMP_CALL(sub_005F5560); /* 0x005F4C9C: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    goto L_005F4CFF; /* 0x005F4CA1: jmp 0x5f4cff */
L_005F4CA3:
    ecx = edi + 0x8; /* 0x005F4CA3: lea ecx, [edi + 8] */
    RECOMP_CALL(sub_00433E30); /* 0x005F4CA6: call 0x433e30 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(eax)); /* 0x005F4CAB: mov byte ptr [ebp - 0x30], al */
    ecx = esi; /* 0x005F4CAE: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x005F4CB0: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_005F59F0); /* 0x005F4CB3: call 0x5f59f0 */
    RECOMP_FLAGS_IN();
    goto L_005F4CFF; /* 0x005F4CB8: jmp 0x5f4cff */
L_005F4CBA:
    eax = ebp + (-0x2C); /* 0x005F4CBA: lea eax, [ebp - 0x2c] */
    ecx = edi; /* 0x005F4CBD: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005F4CBF: push eax */
    RECOMP_CALL(sub_005F5BB0); /* 0x005F4CC0: call 0x5f5bb0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005F4CC5: mov dword ptr [ebp - 4], 0 */
    ecx = esi; /* 0x005F4CCC: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005F4CCE: push eax */
    RECOMP_CALL(sub_005F56D0); /* 0x005F4CCF: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005F4CD4: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005F4CDB: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F4CED; /* 0x005F4CDF: jb 0x5f4ced */
L_005F4CE1:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x005F4CE1: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005F4CE4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005F4CEA: add esp, 4 */
    _flag_k = FK_ADD;
L_005F4CED:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005F4CED: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005F4CF4: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005F4CFB: mov byte ptr [ebp - 0x2c], 0 */
L_005F4CFF:
    eax = esi; /* 0x005F4CFF: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005F4D01: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005F4D04: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005F4D0B: pop ecx */
    edi = POP32_VAL(esp); /* 0x005F4D0C: pop edi */
    esi = POP32_VAL(esp); /* 0x005F4D0D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F4D0E: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005F4D0F: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005F4D12: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005F4D14: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005F4D19: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F4D1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4D1C: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x005F4C7Du: goto L_005F4C7D;
      case 0x005F4C91u: goto L_005F4C91;
      case 0x005F4CA3u: goto L_005F4CA3;
      case 0x005F4CBAu: goto L_005F4CBA;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_005F4D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4D30u);

L_005F4D30:
    PUSH32(esp, ebp); /* 0x005F4D30: push ebp */
    ebp = esp; /* 0x005F4D31: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005F4D33: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005F4D36: push esi */
    esi = ecx; /* 0x005F4D37: mov esi, ecx */
    PUSH32(esp, edi); /* 0x005F4D39: push edi */
    edi = MEM32(eax); /* 0x005F4D3A: mov edi, dword ptr [eax] */
    MEM32(ebp + 0x8) = edi; /* 0x005F4D3C: mov dword ptr [ebp + 8], edi */
    /* test MEM8(esi + 0xC), 7 */ /* 0x005F4D3F: test byte ptr [esi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F4D66; /* 0x005F4D43: jne 0x5f4d66 */
L_005F4D45:
    PUSH32(esp, 0x20u); /* 0x005F4D45: push 0x20 */
    RECOMP_CALL(sub_005F3D70); /* 0x005F4D47: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x005F4D4C: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F4D4F: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F4D52: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F4D52: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x14); /* 0x005F4D55: add eax, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    MEM32(eax) = edi; /* 0x005F4D58: mov dword ptr [eax], edi */
    eax = esi; /* 0x005F4D5A: mov eax, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 0x20u; /* 0x005F4D5C: add dword ptr [esi + 0xc], 0x20 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005F4D60: pop edi */
    esi = POP32_VAL(esp); /* 0x005F4D61: pop esi */
    ebp = POP32_VAL(esp); /* 0x005F4D62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4D63: ret 4 */
L_005F4D66:
    PUSH32(esp, ecx); /* 0x005F4D66: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F4D67: push 0x20 */
    eax = ebp + 0x8; /* 0x005F4D69: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005F4D6C: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005F4D6D: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005F4D72: pop edi */
    eax = esi; /* 0x005F4D73: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005F4D75: pop esi */
    ebp = POP32_VAL(esp); /* 0x005F4D76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4D77: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F4D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4D80u);

L_005F4D80:
    PUSH32(esp, ebp); /* 0x005F4D80: push ebp */
    ebp = esp; /* 0x005F4D81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005F4D83: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005F4D86: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x005F4D89: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005F4D8C: push esi */
    esi = ecx; /* 0x005F4D8D: mov esi, ecx */
    eax = MEM32(edx); /* 0x005F4D8F: mov eax, dword ptr [edx] */
    MEM32(esp + 0x8) = eax; /* 0x005F4D91: mov dword ptr [esp + 8], eax */
    /* test MEM8(esi + 0xC), 7 */ /* 0x005F4D95: test byte ptr [esi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(edx + 0x4); /* 0x005F4D99: mov eax, dword ptr [edx + 4] */
    MEM32(esp + 0xC) = eax; /* 0x005F4D9C: mov dword ptr [esp + 0xc], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F4DCC; /* 0x005F4DA0: jne 0x5f4dcc */
L_005F4DA2:
    PUSH32(esp, 0x40u); /* 0x005F4DA2: push 0x40 */
    RECOMP_CALL(sub_005F3D70); /* 0x005F4DA4: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x005F4DA9: mov eax, dword ptr [esi + 0xc] */
    _xmm[0].u64[0] = MEM64(esp + 0x8); _xmm[0].u64[1] = 0; /* 0x005F4DAC: movq xmm0, qword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F4DB2: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F4DB5: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F4DB5: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x14); /* 0x005F4DB8: add eax, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005F4DBB: movq qword ptr [eax], xmm0 */
    eax = esi; /* 0x005F4DBF: mov eax, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 0x40u; /* 0x005F4DC1: add dword ptr [esi + 0xc], 0x40 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x005F4DC5: pop esi */
    esp = ebp; /* 0x005F4DC6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F4DC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4DC9: ret 4 */
L_005F4DCC:
    PUSH32(esp, ecx); /* 0x005F4DCC: push ecx */
    PUSH32(esp, 0x40u); /* 0x005F4DCD: push 0x40 */
    eax = esp + 0x10; /* 0x005F4DCF: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x005F4DD3: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005F4DD4: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x005F4DD9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005F4DDB: pop esi */
    esp = ebp; /* 0x005F4DDC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F4DDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4DDF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F4DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4DF0u);

L_005F4DF0:
    PUSH32(esp, ebp); /* 0x005F4DF0: push ebp */
    ebp = esp; /* 0x005F4DF1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005F4DF3: push ecx */
    PUSH32(esp, esi); /* 0x005F4DF4: push esi */
    PUSH32(esp, edi); /* 0x005F4DF5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005F4DF6: mov edi, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005F4DF9: xorps xmm0, xmm0 */
    esi = ecx; /* 0x005F4DFC: mov esi, ecx */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(edi + 0xC))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005F4DFE: comiss xmm0, dword ptr [edi + 0xc] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_005F4E0E; /* 0x005F4E02: jbe 0x5f4e0e */
L_005F4E04:
    _xmm[1].u64[0] = MEM32(0x809824); _xmm[1].u64[1] = 0; /* 0x005F4E04: movss xmm1, dword ptr [0x809824] */
    goto L_005F4E16; /* 0x005F4E0C: jmp 0x5f4e16 */
L_005F4E0E:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x005F4E0E: movss xmm1, dword ptr [0x808cb0] */
L_005F4E16:
    /* test MEM8(esi + 0xC), 7 */ /* 0x005F4E16: test byte ptr [esi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _xmm[0].u64[0] = MEM32(edi); _xmm[0].u64[1] = 0; /* 0x005F4E1A: movss xmm0, dword ptr [edi] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x005F4E1E: mulss xmm0, xmm1 */
    MEM32(ebp + 0x8) = _xmm[1].u32[0]; /* 0x005F4E22: movss dword ptr [ebp + 8], xmm1 */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x005F4E27: movss dword ptr [ebp - 4], xmm0 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F4E4C; /* 0x005F4E2C: jne 0x5f4e4c */
L_005F4E2E:
    PUSH32(esp, 0x20u); /* 0x005F4E2E: push 0x20 */
    RECOMP_CALL(sub_005F3D70); /* 0x005F4E30: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005F4E35: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ebp + (-0x4)); /* 0x005F4E38: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 7; /* 0x005F4E3B: add ecx, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005F4E3E: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005F4E3E: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x14); /* 0x005F4E41: add ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005F4E44: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 0x20u; /* 0x005F4E46: add dword ptr [esi + 0xc], 0x20 */
    _flag_k = FK_ADD;
    goto L_005F4E58; /* 0x005F4E4A: jmp 0x5f4e58 */
L_005F4E4C:
    PUSH32(esp, ecx); /* 0x005F4E4C: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F4E4D: push 0x20 */
    eax = ebp + (-0x4); /* 0x005F4E4F: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x005F4E52: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005F4E53: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F4E58:
    /* test MEM8(esi + 0xC), 7 */ /* 0x005F4E58: test byte ptr [esi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _xmm[0].u64[0] = MEM32(edi + 0x4); _xmm[0].u64[1] = 0; /* 0x005F4E5C: movss xmm0, dword ptr [edi + 4] */
    { float _s = sse_f32(MEM32(ebp + 0x8)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x005F4E61: mulss xmm0, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x005F4E66: movss dword ptr [ebp - 4], xmm0 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F4E8D; /* 0x005F4E6B: jne 0x5f4e8d */
L_005F4E6D:
    PUSH32(esp, 0x20u); /* 0x005F4E6D: push 0x20 */
    ecx = esi; /* 0x005F4E6F: mov ecx, esi */
    RECOMP_CALL(sub_005F3D70); /* 0x005F4E71: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005F4E76: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ebp + (-0x4)); /* 0x005F4E79: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 7; /* 0x005F4E7C: add ecx, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005F4E7F: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005F4E7F: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x14); /* 0x005F4E82: add ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005F4E85: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 0x20u; /* 0x005F4E87: add dword ptr [esi + 0xc], 0x20 */
    _flag_k = FK_ADD;
    goto L_005F4E9B; /* 0x005F4E8B: jmp 0x5f4e9b */
L_005F4E8D:
    PUSH32(esp, ecx); /* 0x005F4E8D: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F4E8E: push 0x20 */
    eax = ebp + (-0x4); /* 0x005F4E90: lea eax, [ebp - 4] */
    ecx = esi; /* 0x005F4E93: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005F4E95: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005F4E96: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F4E9B:
    /* test MEM8(esi + 0xC), 7 */ /* 0x005F4E9B: test byte ptr [esi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _xmm[0].u64[0] = MEM32(edi + 0x8); _xmm[0].u64[1] = 0; /* 0x005F4E9F: movss xmm0, dword ptr [edi + 8] */
    { float _s = sse_f32(MEM32(ebp + 0x8)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x005F4EA4: mulss xmm0, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = _xmm[0].u32[0]; /* 0x005F4EA9: movss dword ptr [ebp + 8], xmm0 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F4ED8; /* 0x005F4EAE: jne 0x5f4ed8 */
L_005F4EB0:
    PUSH32(esp, 0x20u); /* 0x005F4EB0: push 0x20 */
    ecx = esi; /* 0x005F4EB2: mov ecx, esi */
    RECOMP_CALL(sub_005F3D70); /* 0x005F4EB4: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005F4EB9: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x005F4EBC: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 7; /* 0x005F4EBF: add ecx, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005F4EC2: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005F4EC2: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x14); /* 0x005F4EC5: add ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005F4EC8: pop edi */
    MEM32(ecx) = eax; /* 0x005F4EC9: mov dword ptr [ecx], eax */
    eax = esi; /* 0x005F4ECB: mov eax, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 0x20u; /* 0x005F4ECD: add dword ptr [esi + 0xc], 0x20 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x005F4ED1: pop esi */
    esp = ebp; /* 0x005F4ED2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F4ED4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4ED5: ret 4 */
L_005F4ED8:
    PUSH32(esp, ecx); /* 0x005F4ED8: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F4ED9: push 0x20 */
    eax = ebp + 0x8; /* 0x005F4EDB: lea eax, [ebp + 8] */
    ecx = esi; /* 0x005F4EDE: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005F4EE0: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005F4EE1: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005F4EE6: pop edi */
    eax = esi; /* 0x005F4EE7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005F4EE9: pop esi */
    esp = ebp; /* 0x005F4EEA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F4EEC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4EED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F4EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4EF0u);

L_005F4EF0:
    PUSH32(esp, ebp); /* 0x005F4EF0: push ebp */
    ebp = esp; /* 0x005F4EF1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005F4EF3: push esi */
    PUSH32(esp, edi); /* 0x005F4EF4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005F4EF5: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x005F4EF8: mov esi, ecx */
    /* test MEM8(esi + 0xC), 7 */ /* 0x005F4EFA: test byte ptr [esi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _xmm[0].u64[0] = MEM32(edi); _xmm[0].u64[1] = 0; /* 0x005F4EFE: movss xmm0, dword ptr [edi] */
    MEM32(ebp + 0x8) = _xmm[0].u32[0]; /* 0x005F4F02: movss dword ptr [ebp + 8], xmm0 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F4F27; /* 0x005F4F07: jne 0x5f4f27 */
L_005F4F09:
    PUSH32(esp, 0x20u); /* 0x005F4F09: push 0x20 */
    RECOMP_CALL(sub_005F3D70); /* 0x005F4F0B: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005F4F10: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x005F4F13: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 7; /* 0x005F4F16: add ecx, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005F4F19: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005F4F19: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x14); /* 0x005F4F1C: add ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005F4F1F: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 0x20u; /* 0x005F4F21: add dword ptr [esi + 0xc], 0x20 */
    _flag_k = FK_ADD;
    goto L_005F4F33; /* 0x005F4F25: jmp 0x5f4f33 */
L_005F4F27:
    PUSH32(esp, ecx); /* 0x005F4F27: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F4F28: push 0x20 */
    eax = ebp + 0x8; /* 0x005F4F2A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005F4F2D: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005F4F2E: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F4F33:
    /* test MEM8(esi + 0xC), 7 */ /* 0x005F4F33: test byte ptr [esi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _xmm[0].u64[0] = MEM32(edi + 0x4); _xmm[0].u64[1] = 0; /* 0x005F4F37: movss xmm0, dword ptr [edi + 4] */
    MEM32(ebp + 0x8) = _xmm[0].u32[0]; /* 0x005F4F3C: movss dword ptr [ebp + 8], xmm0 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F4F63; /* 0x005F4F41: jne 0x5f4f63 */
L_005F4F43:
    PUSH32(esp, 0x20u); /* 0x005F4F43: push 0x20 */
    ecx = esi; /* 0x005F4F45: mov ecx, esi */
    RECOMP_CALL(sub_005F3D70); /* 0x005F4F47: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005F4F4C: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x005F4F4F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 7; /* 0x005F4F52: add ecx, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005F4F55: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005F4F55: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x14); /* 0x005F4F58: add ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x005F4F5B: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 0x20u; /* 0x005F4F5D: add dword ptr [esi + 0xc], 0x20 */
    _flag_k = FK_ADD;
    goto L_005F4F71; /* 0x005F4F61: jmp 0x5f4f71 */
L_005F4F63:
    PUSH32(esp, ecx); /* 0x005F4F63: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F4F64: push 0x20 */
    eax = ebp + 0x8; /* 0x005F4F66: lea eax, [ebp + 8] */
    ecx = esi; /* 0x005F4F69: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005F4F6B: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005F4F6C: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F4F71:
    /* test MEM8(esi + 0xC), 7 */ /* 0x005F4F71: test byte ptr [esi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _xmm[0].u64[0] = MEM32(edi + 0x8); _xmm[0].u64[1] = 0; /* 0x005F4F75: movss xmm0, dword ptr [edi + 8] */
    MEM32(ebp + 0x8) = _xmm[0].u32[0]; /* 0x005F4F7A: movss dword ptr [ebp + 8], xmm0 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F4FA7; /* 0x005F4F7F: jne 0x5f4fa7 */
L_005F4F81:
    PUSH32(esp, 0x20u); /* 0x005F4F81: push 0x20 */
    ecx = esi; /* 0x005F4F83: mov ecx, esi */
    RECOMP_CALL(sub_005F3D70); /* 0x005F4F85: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005F4F8A: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x005F4F8D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 7; /* 0x005F4F90: add ecx, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005F4F93: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005F4F93: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x14); /* 0x005F4F96: add ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005F4F99: pop edi */
    MEM32(ecx) = eax; /* 0x005F4F9A: mov dword ptr [ecx], eax */
    eax = esi; /* 0x005F4F9C: mov eax, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 0x20u; /* 0x005F4F9E: add dword ptr [esi + 0xc], 0x20 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x005F4FA2: pop esi */
    ebp = POP32_VAL(esp); /* 0x005F4FA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4FA4: ret 4 */
L_005F4FA7:
    PUSH32(esp, ecx); /* 0x005F4FA7: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F4FA8: push 0x20 */
    eax = ebp + 0x8; /* 0x005F4FAA: lea eax, [ebp + 8] */
    ecx = esi; /* 0x005F4FAD: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005F4FAF: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005F4FB0: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005F4FB5: pop edi */
    eax = esi; /* 0x005F4FB6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005F4FB8: pop esi */
    ebp = POP32_VAL(esp); /* 0x005F4FB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F4FBA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F4FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F4FC0u);

L_005F4FC0:
    PUSH32(esp, ebp); /* 0x005F4FC0: push ebp */
    ebp = esp; /* 0x005F4FC1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005F4FC3: push ebx */
    PUSH32(esp, esi); /* 0x005F4FC4: push esi */
    PUSH32(esp, edi); /* 0x005F4FC5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005F4FC6: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x005F4FC9: mov esi, ecx */
    PUSH32(esp, edi); /* 0x005F4FCB: push edi */
    RECOMP_CALL(sub_005F56D0); /* 0x005F4FCC: call 0x5f56d0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0xC), 7 */ /* 0x005F4FD1: test byte ptr [esi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(edi + 0x30); /* 0x005F4FD5: mov ebx, dword ptr [edi + 0x30] */
    MEM32(ebp + 0x8) = ebx; /* 0x005F4FD8: mov dword ptr [ebp + 8], ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F4FFA; /* 0x005F4FDB: jne 0x5f4ffa */
L_005F4FDD:
    PUSH32(esp, 0x20u); /* 0x005F4FDD: push 0x20 */
    ecx = esi; /* 0x005F4FDF: mov ecx, esi */
    RECOMP_CALL(sub_005F3D70); /* 0x005F4FE1: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x005F4FE6: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005F4FE9: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005F4FEC: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005F4FEC: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x14); /* 0x005F4FEF: add eax, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x005F4FF2: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 0x20u; /* 0x005F4FF4: add dword ptr [esi + 0xc], 0x20 */
    _flag_k = FK_ADD;
    goto L_005F5008; /* 0x005F4FF8: jmp 0x5f5008 */
L_005F4FFA:
    PUSH32(esp, ecx); /* 0x005F4FFA: push ecx */
    PUSH32(esp, 0x20u); /* 0x005F4FFB: push 0x20 */
    eax = ebp + 0x8; /* 0x005F4FFD: lea eax, [ebp + 8] */
    ecx = esi; /* 0x005F5000: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005F5002: push eax */
    RECOMP_CALL(sub_005F5800); /* 0x005F5003: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005F5008:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x34u; /* 0x005F5008: add edi, 0x34 */
    _flag_k = FK_ADD;
    /* test MEM8(esi + 0xC), 7 */ /* 0x005F500B: test byte ptr [esi + 0xc], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F5047; /* 0x005F500F: jne 0x5f5047 */
L_005F5011:
    PUSH32(esp, 0xA0u); /* 0x005F5011: push 0xa0 */
    ecx = esi; /* 0x005F5016: mov ecx, esi */
    RECOMP_CALL(sub_005F3D70); /* 0x005F5018: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x005F501D: mov ecx, dword ptr [esi + 0xc] */
    _xmm[0] = xmm_ld(edi); /* 0x005F5020: movdqu xmm0, xmmword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 7; /* 0x005F5024: add ecx, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x005F5027: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x005F5027: shr ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x14); /* 0x005F502A: add ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    xmm_st(ecx, _xmm[0]); /* 0x005F502D: movdqu xmmword ptr [ecx], xmm0 */
    eax = MEM32(edi + 0x10); /* 0x005F5031: mov eax, dword ptr [edi + 0x10] */
    MEM32(ecx + 0x10) = eax; /* 0x005F5034: mov dword ptr [ecx + 0x10], eax */
    eax = esi; /* 0x005F5037: mov eax, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 0xA0u; /* 0x005F5039: add dword ptr [esi + 0xc], 0xa0 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005F5040: pop edi */
    esi = POP32_VAL(esp); /* 0x005F5041: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F5042: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005F5043: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F5044: ret 4 */
L_005F5047:
    PUSH32(esp, ecx); /* 0x005F5047: push ecx */
    PUSH32(esp, 0xA0u); /* 0x005F5048: push 0xa0 */
    PUSH32(esp, edi); /* 0x005F504D: push edi */
    ecx = esi; /* 0x005F504E: mov ecx, esi */
    RECOMP_CALL(sub_005F5800); /* 0x005F5050: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005F5055: pop edi */
    eax = esi; /* 0x005F5056: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005F5058: pop esi */
    ebx = POP32_VAL(esp); /* 0x005F5059: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005F505A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F505B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F5060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F5060u);

L_005F5060:
    PUSH32(esp, ebp); /* 0x005F5060: push ebp */
    ebp = esp; /* 0x005F5061: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005F5063: push ebx */
    PUSH32(esp, edi); /* 0x005F5064: push edi */
    edi = ecx; /* 0x005F5065: mov edi, ecx */
    eax = MEM32(edi + 0xC); /* 0x005F5067: mov eax, dword ptr [edi + 0xc] */
    ebx = MEM32(edi + 0x10); /* 0x005F506A: mov ebx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x005F506D: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_005F5098; /* 0x005F506F: je 0x5f5098 */
L_005F5071:
    edx = MEM32(edi + 0x14); /* 0x005F5071: mov edx, dword ptr [edi + 0x14] */
    ecx = ebx; /* 0x005F5074: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005F5076: push esi */
    esi = ebx; /* 0x005F5077: mov esi, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x005F5079: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x005F507C: shr esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 3u; /* 0x005F507C: shr esi, 3 */
    eax = 0x80u; /* 0x005F507F: mov eax, 0x80 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((eax) >> 31) & 1u)); /* 0x005F5084: sar eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31));
    /* test MEM8(esi + edx), LO8(eax) */ /* 0x005F5086: test byte ptr [esi + edx], al */
    _flag_a = (uint32_t)(MEM8(esi + edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebx + 0x1; /* 0x005F5089: lea eax, [ebx + 1] */
    MEM32(edi + 0x10) = eax; /* 0x005F508C: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0x8); /* 0x005F508F: mov eax, dword ptr [ebp + 8] */
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x005F5092: setne cl */
    esi = POP32_VAL(esp); /* 0x005F5095: pop esi */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x005F5096: mov byte ptr [eax], cl */
L_005F5098:
    eax = edi; /* 0x005F5098: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x005F509A: pop edi */
    ebx = POP32_VAL(esp); /* 0x005F509B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005F509C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F509D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F50A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F50A0u);

L_005F50A0:
    PUSH32(esp, ebp); /* 0x005F50A0: push ebp */
    ebp = esp; /* 0x005F50A1: mov ebp, esp */
    eax = ecx; /* 0x005F50A3: mov eax, ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005F50A5: sub esp, 8 */
    _flag_k = FK_CMP;
    edx = MEM32(eax + 0x10); /* 0x005F50A8: mov edx, dword ptr [eax + 0x10] */
    PUSH32(esp, esi); /* 0x005F50AB: push esi */
    esi = 8; /* 0x005F50AC: mov esi, 8 */
    ecx = edx + 0x8; /* 0x005F50B1: lea ecx, [edx + 8] */
    /* cmp ecx, MEM32(eax + 0xC) */ /* 0x005F50B4: cmp ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005F516E; /* 0x005F50B7: ja 0x5f516e */
L_005F50BD:
    ecx = MEM32(ebp + 0x8); /* 0x005F50BD: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x005F50C0: push ebx */
    ebx = edx; /* 0x005F50C1: mov ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    ebx = ebx & 7; /* 0x005F50C3: and ebx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F50DD; /* 0x005F50C6: jne 0x5f50dd */
L_005F50C8:
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F50C8: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x005F50C8: shr edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + 0x14); /* 0x005F50CB: add edx, dword ptr [eax + 0x14] */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x005F50CE: pop ebx */
    SET_LO8(edx, MEM8(edx)); /* 0x005F50CF: mov dl, byte ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x005F50D1: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + esi; /* 0x005F50D3: add dword ptr [eax + 0x10], esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x005F50D6: pop esi */
    esp = ebp; /* 0x005F50D7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F50D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F50DA: ret 4 */
L_005F50DD:
    MEM8(ecx) = (uint8_t)(0); /* 0x005F50DD: mov byte ptr [ecx], 0 */
    ecx = esi; /* 0x005F50E0: mov ecx, esi */
    PUSH32(esp, edi); /* 0x005F50E2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005F50E3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x005F50E5: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x005F50E7: mov dword ptr [ebp - 8], ecx */
    ebx = ebx; /* 0x005F50EA: lea ebx, [ebx] */
L_005F50F0:
    edx = MEM32(eax + 0x10); /* 0x005F50F0: mov edx, dword ptr [eax + 0x10] */
    ecx = MEM32(eax + 0x14); /* 0x005F50F3: mov ecx, dword ptr [eax + 0x14] */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F50F6: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x005F50F6: shr edx, 3 */
    SET_LO8(edx, MEM8(edx + ecx)); /* 0x005F50F9: mov dl, byte ptr [edx + ecx] */
    ecx = ebx; /* 0x005F50FC: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x005F50FE: shl dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << ((LO8(ecx)) & 31)); /* 0x005F50FE: shl dl, cl */
    ecx = MEM32(ebp + 0x8); /* 0x005F5100: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM8(edi + ecx) | LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(edi + ecx) | LO8(edx))) << 24;
    MEM8(edi + ecx) = (uint8_t)(MEM8(edi + ecx) | LO8(edx)); /* 0x005F5103: or byte ptr [edi + ecx], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(ecx, MEM8(edi + ecx)); /* 0x005F5106: mov cl, byte ptr [edi + ecx] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x005F5109: mov byte ptr [ebp - 1], cl */
    /* test ebx, ebx */ /* 0x005F510C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F5130; /* 0x005F510E: je 0x5f5130 */
L_005F5110:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x005F5110: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F5130; /* 0x005F5113: jbe 0x5f5130 */
L_005F5115:
    edx = MEM32(eax + 0x10); /* 0x005F5115: mov edx, dword ptr [eax + 0x10] */
    ecx = MEM32(eax + 0x14); /* 0x005F5118: mov ecx, dword ptr [eax + 0x14] */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F511B: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x005F511B: shr edx, 3 */
    SET_LO8(edx, MEM8(edx + ecx + 0x1)); /* 0x005F511E: mov dl, byte ptr [edx + ecx + 1] */
    SET_LO8(ecx, MEM8(ebp + (-0x8))); /* 0x005F5122: mov cl, byte ptr [ebp - 8] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x005F5125: shr dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> ((LO8(ecx)) & 31)); /* 0x005F5125: shr dl, cl */
    ecx = MEM32(ebp + 0x8); /* 0x005F5127: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((LO8(edx) | MEM8(ebp + (-0x1)))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(ebp + (-0x1)))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(ebp + (-0x1))); /* 0x005F512A: or dl, byte ptr [ebp - 1] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + ecx) = (uint8_t)(LO8(edx)); /* 0x005F512D: mov byte ptr [edi + ecx], dl */
L_005F5130:
    /* cmp esi, 8 */ /* 0x005F5130: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F5148; /* 0x005F5133: jb 0x5f5148 */
L_005F5135:
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 8; /* 0x005F5135: add dword ptr [eax + 0x10], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x005F5139: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 8; /* 0x005F513A: sub esi, 8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_005F50F0; /* 0x005F513D: jne 0x5f50f0 */
L_005F513F:
    edi = POP32_VAL(esp); /* 0x005F513F: pop edi */
    ebx = POP32_VAL(esp); /* 0x005F5140: pop ebx */
    esi = POP32_VAL(esp); /* 0x005F5141: pop esi */
    esp = ebp; /* 0x005F5142: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F5144: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F5145: ret 4 */
L_005F5148:
    edx = esi + (-0x8); /* 0x005F5148: lea edx, [esi - 8] */
    /* test edx, edx */ /* 0x005F514B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_005F5168; /* 0x005F514D: jns 0x5f5168 */
L_005F514F:
    ebx = MEM32(ebp + 0x8); /* 0x005F514F: mov ebx, dword ptr [ebp + 8] */
    SET_LO8(ecx, LO8(edx)); /* 0x005F5152: mov cl, dl */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (LO8(ecx)) != 0;
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx))); /* 0x005F5154: neg cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((MEM8(edi + ebx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x005F5156: shr byte ptr [edi + ebx], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(edi + ebx) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(edi + ebx) = (uint8_t)(MEM8(edi + ebx) >> ((LO8(ecx)) & 31)); /* 0x005F5156: shr byte ptr [edi + ebx], cl */
    ecx = edx + 0x8; /* 0x005F5159: lea ecx, [edx + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + ecx; /* 0x005F515C: add dword ptr [eax + 0x10], ecx */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005F515F: pop edi */
    ebx = POP32_VAL(esp); /* 0x005F5160: pop ebx */
    esi = POP32_VAL(esp); /* 0x005F5161: pop esi */
    esp = ebp; /* 0x005F5162: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F5164: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F5165: ret 4 */
L_005F5168:
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 8; /* 0x005F5168: add dword ptr [eax + 0x10], 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005F516C: pop edi */
    ebx = POP32_VAL(esp); /* 0x005F516D: pop ebx */
L_005F516E:
    esi = POP32_VAL(esp); /* 0x005F516E: pop esi */
    esp = ebp; /* 0x005F516F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F5171: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F5172: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005F5180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005F5180u);

L_005F5180:
    PUSH32(esp, ebp); /* 0x005F5180: push ebp */
    ebp = esp; /* 0x005F5181: mov ebp, esp */
    eax = ecx; /* 0x005F5183: mov eax, ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005F5185: sub esp, 8 */
    _flag_k = FK_CMP;
    edx = MEM32(eax + 0x10); /* 0x005F5188: mov edx, dword ptr [eax + 0x10] */
    PUSH32(esp, esi); /* 0x005F518B: push esi */
    esi = 0x10u; /* 0x005F518C: mov esi, 0x10 */
    ecx = edx + 0x10; /* 0x005F5191: lea ecx, [edx + 0x10] */
    /* cmp ecx, MEM32(eax + 0xC) */ /* 0x005F5194: cmp ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005F524F; /* 0x005F5197: ja 0x5f524f */
L_005F519D:
    ecx = MEM32(ebp + 0x8); /* 0x005F519D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x005F51A0: push ebx */
    ebx = edx; /* 0x005F51A1: mov ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    ebx = ebx & 7; /* 0x005F51A3: and ebx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005F51BF; /* 0x005F51A6: jne 0x5f51bf */
L_005F51A8:
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F51A8: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x005F51A8: shr edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + 0x14); /* 0x005F51AB: add edx, dword ptr [eax + 0x14] */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x005F51AE: pop ebx */
    SET_LO16(edx, MEM16(edx)); /* 0x005F51AF: mov dx, word ptr [edx] */
    MEM16(ecx) = (uint16_t)(LO16(edx)); /* 0x005F51B2: mov word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + esi; /* 0x005F51B5: add dword ptr [eax + 0x10], esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x005F51B8: pop esi */
    esp = ebp; /* 0x005F51B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F51BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F51BC: ret 4 */
L_005F51BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x005F51BF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(edx)); /* 0x005F51C1: mov word ptr [ecx], dx */
    ecx = 8; /* 0x005F51C4: mov ecx, 8 */
    PUSH32(esp, edi); /* 0x005F51C9: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005F51CA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x005F51CC: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x005F51CE: mov dword ptr [ebp - 8], ecx */
L_005F51D1:
    edx = MEM32(eax + 0x10); /* 0x005F51D1: mov edx, dword ptr [eax + 0x10] */
    ecx = MEM32(eax + 0x14); /* 0x005F51D4: mov ecx, dword ptr [eax + 0x14] */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F51D7: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x005F51D7: shr edx, 3 */
    SET_LO8(edx, MEM8(edx + ecx)); /* 0x005F51DA: mov dl, byte ptr [edx + ecx] */
    ecx = ebx; /* 0x005F51DD: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x005F51DF: shl dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << ((LO8(ecx)) & 31)); /* 0x005F51DF: shl dl, cl */
    ecx = MEM32(ebp + 0x8); /* 0x005F51E1: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM8(edi + ecx) | LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(edi + ecx) | LO8(edx))) << 24;
    MEM8(edi + ecx) = (uint8_t)(MEM8(edi + ecx) | LO8(edx)); /* 0x005F51E4: or byte ptr [edi + ecx], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(ecx, MEM8(edi + ecx)); /* 0x005F51E7: mov cl, byte ptr [edi + ecx] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x005F51EA: mov byte ptr [ebp - 1], cl */
    /* test ebx, ebx */ /* 0x005F51ED: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005F5211; /* 0x005F51EF: je 0x5f5211 */
L_005F51F1:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x005F51F1: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005F5211; /* 0x005F51F4: jbe 0x5f5211 */
L_005F51F6:
    edx = MEM32(eax + 0x10); /* 0x005F51F6: mov edx, dword ptr [eax + 0x10] */
    ecx = MEM32(eax + 0x14); /* 0x005F51F9: mov ecx, dword ptr [eax + 0x14] */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x005F51FC: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x005F51FC: shr edx, 3 */
    SET_LO8(edx, MEM8(edx + ecx + 0x1)); /* 0x005F51FF: mov dl, byte ptr [edx + ecx + 1] */
    SET_LO8(ecx, MEM8(ebp + (-0x8))); /* 0x005F5203: mov cl, byte ptr [ebp - 8] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x005F5206: shr dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> ((LO8(ecx)) & 31)); /* 0x005F5206: shr dl, cl */
    ecx = MEM32(ebp + 0x8); /* 0x005F5208: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((LO8(edx) | MEM8(ebp + (-0x1)))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(ebp + (-0x1)))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(ebp + (-0x1))); /* 0x005F520B: or dl, byte ptr [ebp - 1] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + ecx) = (uint8_t)(LO8(edx)); /* 0x005F520E: mov byte ptr [edi + ecx], dl */
L_005F5211:
    /* cmp esi, 8 */ /* 0x005F5211: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005F5229; /* 0x005F5214: jb 0x5f5229 */
L_005F5216:
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 8; /* 0x005F5216: add dword ptr [eax + 0x10], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x005F521A: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 8; /* 0x005F521B: sub esi, 8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_005F51D1; /* 0x005F521E: jne 0x5f51d1 */
L_005F5220:
    edi = POP32_VAL(esp); /* 0x005F5220: pop edi */
    ebx = POP32_VAL(esp); /* 0x005F5221: pop ebx */
    esi = POP32_VAL(esp); /* 0x005F5222: pop esi */
    esp = ebp; /* 0x005F5223: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F5225: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F5226: ret 4 */
L_005F5229:
    edx = esi + (-0x8); /* 0x005F5229: lea edx, [esi - 8] */
    /* test edx, edx */ /* 0x005F522C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_005F5249; /* 0x005F522E: jns 0x5f5249 */
L_005F5230:
    ebx = MEM32(ebp + 0x8); /* 0x005F5230: mov ebx, dword ptr [ebp + 8] */
    SET_LO8(ecx, LO8(edx)); /* 0x005F5233: mov cl, dl */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (LO8(ecx)) != 0;
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx))); /* 0x005F5235: neg cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((MEM8(edi + ebx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x005F5237: shr byte ptr [edi + ebx], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(edi + ebx) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(edi + ebx) = (uint8_t)(MEM8(edi + ebx) >> ((LO8(ecx)) & 31)); /* 0x005F5237: shr byte ptr [edi + ebx], cl */
    ecx = edx + 0x8; /* 0x005F523A: lea ecx, [edx + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + ecx; /* 0x005F523D: add dword ptr [eax + 0x10], ecx */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005F5240: pop edi */
    ebx = POP32_VAL(esp); /* 0x005F5241: pop ebx */
    esi = POP32_VAL(esp); /* 0x005F5242: pop esi */
    esp = ebp; /* 0x005F5243: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F5245: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F5246: ret 4 */
L_005F5249:
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 8; /* 0x005F5249: add dword ptr [eax + 0x10], 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005F524D: pop edi */
    ebx = POP32_VAL(esp); /* 0x005F524E: pop ebx */
L_005F524F:
    esi = POP32_VAL(esp); /* 0x005F524F: pop esi */
    esp = ebp; /* 0x005F5250: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005F5252: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005F5253: ret 4 */
    RECOMP_REGS_OUT();
}
