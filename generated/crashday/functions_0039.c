#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_00627030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627030u);

L_00627030:
    PUSH32(esp, ebp); /* 0x00627030: push ebp */
    ebp = esp; /* 0x00627031: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00627033: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x00627036: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_006270C0); /* 0x00627039: call 0x6270c0 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x0062703E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062703F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00627040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627040u);

L_00627040:
    PUSH32(esp, ebp); /* 0x00627040: push ebp */
    ebp = esp; /* 0x00627041: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x00627043: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x00627046: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x00627049: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x0062704B: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    ebp = POP32_VAL(esp); /* 0x0062704E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062704F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00627050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627050u);

L_00627050:
    PUSH32(esp, ebp); /* 0x00627050: push ebp */
    ebp = esp; /* 0x00627051: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00627053: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x00627056: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0xC); /* 0x00627058: mov eax, dword ptr [ebp + 0xc] */
    eax = ecx + eax * 8; /* 0x0062705B: lea eax, [ecx + eax*8] */
    ebp = POP32_VAL(esp); /* 0x0062705E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062705F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00627060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627060u);

L_00627060:
    PUSH32(esp, ebp); /* 0x00627060: push ebp */
    ebp = esp; /* 0x00627061: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00627063: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x00627066: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00625460); /* 0x00627069: call 0x625460 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x0062706E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062706F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00627070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627070u);

L_00627070:
    PUSH32(esp, ebp); /* 0x00627070: push ebp */
    ebp = esp; /* 0x00627071: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00627073: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x00627076: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x00627079: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x0062707B: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00627080: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00627082: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00627085: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00627087: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00627087: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0062708A: add eax, edx */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x0062708C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062708D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00627090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627090u);

L_00627090:
    PUSH32(esp, ebp); /* 0x00627090: push ebp */
    ebp = esp; /* 0x00627091: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x00627093: mov eax, dword ptr [ebp + 0xc] */
    ecx = eax + eax * 4; /* 0x00627096: lea ecx, [eax + eax*4] */
    eax = MEM32(ebp + 0x8); /* 0x00627099: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x0062709C: mov eax, dword ptr [eax] */
    eax = eax + ecx * 4; /* 0x0062709E: lea eax, [eax + ecx*4] */
    ebp = POP32_VAL(esp); /* 0x006270A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006270A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_006270B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006270B0u);

L_006270B0:
    PUSH32(esp, ebp); /* 0x006270B0: push ebp */
    ebp = esp; /* 0x006270B1: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006270B3: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x006270B6: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00625520); /* 0x006270B9: call 0x625520 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x006270BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006270BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006270C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006270C0u);

L_006270C0:
    PUSH32(esp, ebp); /* 0x006270C0: push ebp */
    ebp = esp; /* 0x006270C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006270C3: push -1 */
    PUSH32(esp, 0x007B7D10u); /* 0x006270C5: push 0x7b7d10 */
    eax = MEM32(FS_BASE + (0)); /* 0x006270CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006270D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006270D1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006270D4: push ebx */
    PUSH32(esp, esi); /* 0x006270D5: push esi */
    PUSH32(esp, edi); /* 0x006270D6: push edi */
    eax = MEM32(0x855000); /* 0x006270D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006270DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006270DE: push eax */
    eax = ebp + (-0xC); /* 0x006270DF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006270E2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006270E8: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x14)) = ecx; /* 0x006270EB: mov dword ptr [ebp - 0x14], ecx */
    edi = MEM32(ecx + 0x4); /* 0x006270EE: mov edi, dword ptr [ecx + 4] */
    esi = edi; /* 0x006270F1: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x006270F3: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x8C08C08Du; /* 0x006270F5: mov eax, 0x8c08c08d */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x006270FA: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x006270FC: add edx, esi */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x006270FE: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    esi = edx; /* 0x00627101: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x00627103: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x00627103: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x00627106: add esi, edx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0x8); /* 0x00627108: mov ebx, dword ptr [ebp + 8] */
    /* cmp esi, ebx */ /* 0x0062710B: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062714B; /* 0x0062710D: jbe 0x62714b */
L_0062710F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x0062710F: sub ebx, esi */
    _flag_k = FK_CMP;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1D4u); /* 0x00627111: imul ebx, ebx, 0x1d4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x00627117: add ebx, edi */
    _flag_k = FK_ADD;
    esi = ebx; /* 0x00627119: mov esi, ebx */
    /* cmp ebx, edi */ /* 0x0062711B: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627134; /* 0x0062711D: je 0x627134 */
L_0062711F:
    /* nop */ /* 0x0062711F: nop  */
L_00627120:
    ecx = esi; /* 0x00627120: mov ecx, esi */
    RECOMP_CALL(sub_0061F180); /* 0x00627122: call 0x61f180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x00627127: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x0062712D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00627120; /* 0x0062712F: jne 0x627120 */
L_00627131:
    ecx = MEM32(ebp + (-0x14)); /* 0x00627131: mov ecx, dword ptr [ebp - 0x14] */
L_00627134:
    MEM32(ecx + 0x4) = ebx; /* 0x00627134: mov dword ptr [ecx + 4], ebx */
L_00627137:
    ecx = MEM32(ebp + (-0xC)); /* 0x00627137: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062713A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00627141: pop ecx */
    edi = POP32_VAL(esp); /* 0x00627142: pop edi */
    esi = POP32_VAL(esp); /* 0x00627143: pop esi */
    ebx = POP32_VAL(esp); /* 0x00627144: pop ebx */
    esp = ebp; /* 0x00627145: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627147: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00627148: ret 4 */
L_0062714B:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_00627137; /* 0x0062714B: jae 0x627137 */
L_0062714D:
    eax = ebx; /* 0x0062714D: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0062714F: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x00627151: push eax */
    RECOMP_CALL(sub_00625BE0); /* 0x00627152: call 0x625be0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00627157: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ebp + (-0x14)); /* 0x0062715E: mov edi, dword ptr [ebp - 0x14] */
    ecx = edi; /* 0x00627161: mov ecx, edi */
    RECOMP_CALL(sub_00625830); /* 0x00627163: call 0x625830 */
    RECOMP_FLAGS_IN();
    edx = ebx; /* 0x00627168: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x0062716A: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0062716C: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0062716F: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(edi + 0x4); /* 0x00627172: mov ecx, dword ptr [edi + 4] */
    RECOMP_CALL(sub_006283F0); /* 0x00627175: call 0x6283f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062717A: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062717D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(edi + 0x4); /* 0x00627184: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x00627187: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x8C08C08Du; /* 0x00627189: mov eax, 0x8c08c08d */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0062718E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00627190: add edx, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00627192: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x00627195: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00627197: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00627197: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0062719A: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x0062719C: sub ebx, eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)ebx * (int32_t)0x1D4u); /* 0x0062719E: imul eax, ebx, 0x1d4 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) + eax; /* 0x006271A4: add dword ptr [edi + 4], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x006271A7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006271AA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006271B1: pop ecx */
    edi = POP32_VAL(esp); /* 0x006271B2: pop edi */
    esi = POP32_VAL(esp); /* 0x006271B3: pop esi */
    ebx = POP32_VAL(esp); /* 0x006271B4: pop ebx */
    esp = ebp; /* 0x006271B5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006271B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006271B8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006271BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006271BBu);

L_006271BB:
    ecx = MEM32(ebp + (-0x14)); /* 0x006271BB: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00625C50); /* 0x006271BE: call 0x625c50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006271C3: push 0 */
    PUSH32(esp, 0); /* 0x006271C5: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006271C7: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006271CCu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006271D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006271D0u);

L_006271D0:
    PUSH32(esp, ebp); /* 0x006271D0: push ebp */
    ebp = esp; /* 0x006271D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006271D3: push -1 */
    PUSH32(esp, 0x007B7D30u); /* 0x006271D5: push 0x7b7d30 */
    eax = MEM32(FS_BASE + (0)); /* 0x006271DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006271E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006271E1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006271E4: push ebx */
    PUSH32(esp, esi); /* 0x006271E5: push esi */
    PUSH32(esp, edi); /* 0x006271E6: push edi */
    eax = MEM32(0x855000); /* 0x006271E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006271EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006271EE: push eax */
    eax = ebp + (-0xC); /* 0x006271EF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006271F2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006271F8: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x006271FB: mov esi, ecx */
    edx = MEM32(ebp + 0x10); /* 0x006271FD: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + 0xC); /* 0x00627200: sub edx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    eax = 0x2AAAAAABu; /* 0x00627203: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x00627208: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x0062720A: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    edi = edx; /* 0x0062720C: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x0062720E: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x0062720E: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x00627211: add edi, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00627364; /* 0x00627213: je 0x627364 */
L_00627219:
    ebx = MEM32(esi + 0x4); /* 0x00627219: mov ebx, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0x8); /* 0x0062721C: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x0062721F: sub ecx, ebx */
    _flag_k = FK_CMP;
    eax = 0x2AAAAAABu; /* 0x00627221: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00627226: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00627228: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = edx; /* 0x0062722A: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0062722C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0062722C: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0062722F: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x00627231: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0062732B; /* 0x00627233: jae 0x62732b */
L_00627239:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(esi); /* 0x00627239: sub ebx, dword ptr [esi] */
    _flag_k = FK_CMP;
    eax = 0x2AAAAAABu; /* 0x0062723B: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x00627240: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00627242: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    ecx = edx; /* 0x00627244: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x00627246: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x00627246: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x00627249: add ecx, edx */
    _flag_k = FK_ADD;
    eax = 0x15555555u; /* 0x0062724B: mov eax, 0x15555555 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00627250: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x00627252: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00627261; /* 0x00627254: jae 0x627261 */
L_00627256:
    PUSH32(esp, 0x007DFAB0u); /* 0x00627256: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x0062725B: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00627261:
    eax = ecx + edi; /* 0x00627261: lea eax, [ecx + edi] */
    PUSH32(esp, eax); /* 0x00627264: push eax */
    ecx = esi; /* 0x00627265: mov ecx, esi */
    RECOMP_CALL(sub_00627AD0); /* 0x00627267: call 0x627ad0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x0062726C: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, eax); /* 0x0062726F: push eax */
    RECOMP_CALL(sub_00627B20); /* 0x00627270: call 0x627b20 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x00627275: mov ebx, eax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x00627277: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0062727A: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00627281: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00627284: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00627287: push ebx */
    edx = MEM32(ebp + 0x8); /* 0x00627288: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x0062728B: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_00629060); /* 0x0062728D: call 0x629060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x00627292: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00627295: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x00627298: push ecx */
    PUSH32(esp, eax); /* 0x00627299: push eax */
    edx = MEM32(ebp + 0x10); /* 0x0062729A: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x0062729D: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_006290E0); /* 0x006272A0: call 0x6290e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006272A5: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006272A8: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006272AB: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006272AE: push eax */
    edx = MEM32(esi + 0x4); /* 0x006272AF: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x006272B2: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00629060); /* 0x006272B5: call 0x629060 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006272BA: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006272BD: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(esi + 0x4); /* 0x006272C4: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x006272C7: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    eax = 0x2AAAAAABu; /* 0x006272C9: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006272CE: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x006272D0: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = edx; /* 0x006272D2: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006272D4: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006272D4: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006272D7: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006272D9: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x006272DB: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x006272DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006272EB; /* 0x006272DF: je 0x6272eb */
L_006272E1:
    PUSH32(esp, eax); /* 0x006272E1: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006272E2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006272E8: add esp, 4 */
    _flag_k = FK_ADD;
L_006272EB:
    eax = MEM32(ebp + (-0x14)); /* 0x006272EB: mov eax, dword ptr [ebp - 0x14] */
    eax = eax + eax * 2; /* 0x006272EE: lea eax, [eax + eax*2] */
    eax = ebx + eax * 4; /* 0x006272F1: lea eax, [ebx + eax*4] */
    MEM32(esi + 0x8) = eax; /* 0x006272F4: mov dword ptr [esi + 8], eax */
    eax = edi + edi * 2; /* 0x006272F7: lea eax, [edi + edi*2] */
    eax = ebx + eax * 4; /* 0x006272FA: lea eax, [ebx + eax*4] */
    MEM32(esi + 0x4) = eax; /* 0x006272FD: mov dword ptr [esi + 4], eax */
    MEM32(esi) = ebx; /* 0x00627300: mov dword ptr [esi], ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00627302: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00627305: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062730C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062730D: pop edi */
    esi = POP32_VAL(esp); /* 0x0062730E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062730F: pop ebx */
    esp = ebp; /* 0x00627310: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627312: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00627313: ret 0x10 */
L_0062732B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0062732B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x0062732E: push ecx */
    PUSH32(esp, ebx); /* 0x0062732F: push ebx */
    edx = MEM32(ebp + 0x10); /* 0x00627330: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x00627333: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_006290E0); /* 0x00627336: call 0x6290e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062733B: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = edi + edi * 2; /* 0x0062733E: lea edi, [edi + edi*2] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x00627341: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x00627341: shl edi, 2 */
    edx = MEM32(esi + 0x4); /* 0x00627344: mov edx, dword ptr [esi + 4] */
    eax = edi + edx; /* 0x00627347: lea eax, [edi + edx] */
    ecx = MEM32(ebp + 0x8); /* 0x0062734A: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, edx */ /* 0x0062734D: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627361; /* 0x0062734F: je 0x627361 */
L_00627351:
    /* cmp edx, eax */ /* 0x00627351: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627361; /* 0x00627353: je 0x627361 */
L_00627355:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00627355: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x00627358: push eax */
    RECOMP_CALL(sub_00628F60); /* 0x00627359: call 0x628f60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062735E: add esp, 0xc */
    _flag_k = FK_ADD;
L_00627361:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + edi; /* 0x00627361: add dword ptr [esi + 4], edi */
    _flag_k = FK_ADD;
L_00627364:
    ecx = MEM32(ebp + (-0xC)); /* 0x00627364: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00627367: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062736E: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062736F: pop edi */
    esi = POP32_VAL(esp); /* 0x00627370: pop esi */
    ebx = POP32_VAL(esp); /* 0x00627371: pop ebx */
    esp = ebp; /* 0x00627372: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627374: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00627375: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00627316(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627316u);

L_00627316:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x00627316: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00627319: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062731F: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00627322: push 0 */
    PUSH32(esp, 0); /* 0x00627324: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00627326: call 0x780016 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0062732B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x0062732E: push ecx */
    PUSH32(esp, ebx); /* 0x0062732F: push ebx */
    edx = MEM32(ebp + 0x10); /* 0x00627330: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x00627333: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_006290E0); /* 0x00627336: call 0x6290e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062733B: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = edi + edi * 2; /* 0x0062733E: lea edi, [edi + edi*2] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x00627341: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x00627341: shl edi, 2 */
    edx = MEM32(esi + 0x4); /* 0x00627344: mov edx, dword ptr [esi + 4] */
    eax = edi + edx; /* 0x00627347: lea eax, [edi + edx] */
    ecx = MEM32(ebp + 0x8); /* 0x0062734A: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, edx */ /* 0x0062734D: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627361; /* 0x0062734F: je 0x627361 */
L_00627351:
    /* cmp edx, eax */ /* 0x00627351: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627361; /* 0x00627353: je 0x627361 */
L_00627355:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00627355: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x00627358: push eax */
    RECOMP_CALL(sub_00628F60); /* 0x00627359: call 0x628f60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062735E: add esp, 0xc */
    _flag_k = FK_ADD;
L_00627361:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + edi; /* 0x00627361: add dword ptr [esi + 4], edi */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00627364: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00627367: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062736E: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062736F: pop edi */
    esi = POP32_VAL(esp); /* 0x00627370: pop esi */
    ebx = POP32_VAL(esp); /* 0x00627371: pop ebx */
    esp = ebp; /* 0x00627372: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627374: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00627375: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00627380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627380u);

L_00627380:
    PUSH32(esp, ebp); /* 0x00627380: push ebp */
    ebp = esp; /* 0x00627381: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627383: push -1 */
    PUSH32(esp, 0x007B7D55u); /* 0x00627385: push 0x7b7d55 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062738A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00627390: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00627391: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00627394: push ebx */
    PUSH32(esp, esi); /* 0x00627395: push esi */
    PUSH32(esp, edi); /* 0x00627396: push edi */
    eax = MEM32(0x855000); /* 0x00627397: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062739C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062739E: push eax */
    eax = ebp + (-0xC); /* 0x0062739F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006273A2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006273A8: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x006273AB: mov dword ptr [ebp - 4], 0 */
L_006273B2:
    /* test edx, edx */ /* 0x006273B2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006273DD; /* 0x006273B4: je 0x6273dd */
L_006273B6:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006273B6: mov byte ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x006273BA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006273CD; /* 0x006273BC: je 0x6273cd */
L_006273BE:
    eax = MEM32(0x7DEA6C); /* 0x006273BE: mov eax, dword ptr [0x7dea6c] */
    MEM32(ecx) = eax; /* 0x006273C3: mov dword ptr [ecx], eax */
    eax = MEM32(0x7DEA70); /* 0x006273C5: mov eax, dword ptr [0x7dea70] */
    MEM32(ecx + 0x4) = eax; /* 0x006273CA: mov dword ptr [ecx + 4], eax */
L_006273CD:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x006273CD: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x006273D1: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = edx; /* 0x006273D2: mov dword ptr [ebp - 0x14], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x006273D5: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x006273D8: mov dword ptr [ebp - 0x18], ecx */
    RECOMP_BACKEDGE();
    goto L_006273B2; /* 0x006273DB: jmp 0x6273b2 */
L_006273DD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006273DD: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x006273E4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006273E7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006273EE: pop ecx */
    edi = POP32_VAL(esp); /* 0x006273EF: pop edi */
    esi = POP32_VAL(esp); /* 0x006273F0: pop esi */
    ebx = POP32_VAL(esp); /* 0x006273F1: pop ebx */
    esp = ebp; /* 0x006273F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006273F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006273F5: ret  */
    RECOMP_REGS_OUT();
}

void sub_006273F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006273F6u);

L_006273F6:
    PUSH32(esp, 0); /* 0x006273F6: push 0 */
    PUSH32(esp, 0); /* 0x006273F8: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006273FA: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006273FFu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00627400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627400u);

L_00627400:
    PUSH32(esp, ebp); /* 0x00627400: push ebp */
    ebp = esp; /* 0x00627401: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627403: push -1 */
    PUSH32(esp, 0x007B7D70u); /* 0x00627405: push 0x7b7d70 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062740A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00627410: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00627411: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00627414: push ebx */
    PUSH32(esp, esi); /* 0x00627415: push esi */
    PUSH32(esp, edi); /* 0x00627416: push edi */
    eax = MEM32(0x855000); /* 0x00627417: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062741C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062741E: push eax */
    eax = ebp + (-0xC); /* 0x0062741F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00627422: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00627428: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x0062742B: mov dword ptr [ebp - 4], 0 */
L_00627432:
    /* test edx, edx */ /* 0x00627432: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00627454; /* 0x00627434: je 0x627454 */
L_00627436:
    /* test ecx, ecx */ /* 0x00627436: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00627448; /* 0x00627438: je 0x627448 */
L_0062743A:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0062743A: xorps xmm0, xmm0 */
    xmm_st(ecx, _xmm[0]); /* 0x0062743D: movdqu xmmword ptr [ecx], xmm0 */
    MEM32(ecx + 0x10) = 0; /* 0x00627441: mov dword ptr [ecx + 0x10], 0 */
L_00627448:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x00627448: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = edx; /* 0x00627449: mov dword ptr [ebp - 0x14], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x0062744C: add ecx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x0062744F: mov dword ptr [ebp - 0x18], ecx */
    RECOMP_BACKEDGE();
    goto L_00627432; /* 0x00627452: jmp 0x627432 */
L_00627454:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00627454: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062745B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062745E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00627465: pop ecx */
    edi = POP32_VAL(esp); /* 0x00627466: pop edi */
    esi = POP32_VAL(esp); /* 0x00627467: pop esi */
    ebx = POP32_VAL(esp); /* 0x00627468: pop ebx */
    esp = ebp; /* 0x00627469: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062746B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062746C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0062746D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062746Du);

L_0062746D:
    PUSH32(esp, 0); /* 0x0062746D: push 0 */
    PUSH32(esp, 0); /* 0x0062746F: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00627471: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00627476u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00627480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627480u);

L_00627480:
    PUSH32(esp, ebp); /* 0x00627480: push ebp */
    ebp = esp; /* 0x00627481: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627483: push -1 */
    PUSH32(esp, 0x007B7DA8u); /* 0x00627485: push 0x7b7da8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062748A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00627490: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00627491: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00627494: push ebx */
    PUSH32(esp, esi); /* 0x00627495: push esi */
    PUSH32(esp, edi); /* 0x00627496: push edi */
    eax = MEM32(0x855000); /* 0x00627497: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062749C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062749E: push eax */
    eax = ebp + (-0xC); /* 0x0062749F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006274A2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006274A8: mov dword ptr [ebp - 0x10], esp */
    RECOMP_CALL(sub_005EE610); /* 0x006274AB: call 0x5ee610 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006274B0: mov edx, eax */
    MEM32(ebp + (-0x14)) = edx; /* 0x006274B2: mov dword ptr [ebp - 0x14], edx */
    MEM16(edx + 0xC) = (uint16_t)(0); /* 0x006274B5: mov word ptr [edx + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006274BB: mov dword ptr [ebp - 4], 0 */
    esi = edx + 0x10; /* 0x006274C2: lea esi, [edx + 0x10] */
    MEM32(ebp + (-0x18)) = esi; /* 0x006274C5: mov dword ptr [ebp - 0x18], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006274C8: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x006274CC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00627518; /* 0x006274CE: je 0x627518 */
L_006274D0:
    eax = MEM32(ebp + 0xC); /* 0x006274D0: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x006274D3: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x006274D5: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(ecx); /* 0x006274D8: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x006274DA: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x006274DC: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x006274DF: mov dword ptr [esi + 4], eax */
    eax = esi + 0x8; /* 0x006274E2: lea eax, [esi + 8] */
    MEM32(eax + 0x10) = 0; /* 0x006274E5: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x006274EC: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x14) = 0xFu; /* 0x006274F3: mov dword ptr [eax + 0x14], 0xf */
    MEM32(eax + 0x10) = 0; /* 0x006274FA: mov dword ptr [eax + 0x10], 0 */
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x00627501: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00627509; /* 0x00627505: jb 0x627509 */
L_00627507:
    eax = MEM32(eax); /* 0x00627507: mov eax, dword ptr [eax] */
L_00627509:
    MEM8(eax) = (uint8_t)(0); /* 0x00627509: mov byte ptr [eax], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0062750C: mov byte ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00627510: mov byte ptr [ebp - 4], 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00627514: mov byte ptr [ebp - 4], 1 */
L_00627518:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00627518: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062751C: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edx; /* 0x00627523: mov eax, edx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00627525: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00627528: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062752F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00627530: pop edi */
    esi = POP32_VAL(esp); /* 0x00627531: pop esi */
    ebx = POP32_VAL(esp); /* 0x00627532: pop ebx */
    esp = ebp; /* 0x00627533: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627535: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00627536: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00627539(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627539u);

L_00627539:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x00627539: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062753C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00627542: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00627545: push 0 */
    PUSH32(esp, 0); /* 0x00627547: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00627549: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0062754Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00627550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627550u);

L_00627550:
    PUSH32(esp, ebp); /* 0x00627550: push ebp */
    ebp = esp; /* 0x00627551: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627553: push -1 */
    PUSH32(esp, 0x007B7DD0u); /* 0x00627555: push 0x7b7dd0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062755A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00627560: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00627561: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00627564: push ebx */
    PUSH32(esp, esi); /* 0x00627565: push esi */
    PUSH32(esp, edi); /* 0x00627566: push edi */
    eax = MEM32(0x855000); /* 0x00627567: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062756C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062756E: push eax */
    eax = ebp + (-0xC); /* 0x0062756F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00627572: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00627578: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x0062757B: mov ebx, ecx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x0062757D: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x00627580: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x00627587: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006275B6; /* 0x0062758B: jne 0x6275b6 */
L_0062758D:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0062758D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x00627590: push ecx */
    PUSH32(esp, MEM32(ebx)); /* 0x00627591: push dword ptr [ebx] */
L_00627593:
    PUSH32(esp, 1); /* 0x00627593: push 1 */
L_00627595:
    ecx = ebx; /* 0x00627595: mov ecx, ebx */
L_00627597:
    esi = MEM32(ebp + 0x8); /* 0x00627597: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0062759A: push esi */
    RECOMP_CALL(sub_006280E0); /* 0x0062759B: call 0x6280e0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006275A0: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006275A2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006275A5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006275AC: pop ecx */
    edi = POP32_VAL(esp); /* 0x006275AD: pop edi */
    esi = POP32_VAL(esp); /* 0x006275AE: pop esi */
    ebx = POP32_VAL(esp); /* 0x006275AF: pop ebx */
    esp = ebp; /* 0x006275B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006275B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006275B3: ret 0x10 */
L_006275B6:
    edi = MEM32(ebx); /* 0x006275B6: mov edi, dword ptr [ebx] */
    esi = MEM32(ebp + 0xC); /* 0x006275B8: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, MEM32(edi) */ /* 0x006275BB: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006275DA; /* 0x006275BD: jne 0x6275da */
L_006275BF:
    eax = esi + 0x10; /* 0x006275BF: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x006275C2: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006275C3: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_00625BA0); /* 0x006275C6: call 0x625ba0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006275CB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062769E; /* 0x006275CD: je 0x62769e */
L_006275D3:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x006275D3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x006275D6: push ecx */
    PUSH32(esp, esi); /* 0x006275D7: push esi */
    RECOMP_BACKEDGE();
    goto L_00627593; /* 0x006275D8: jmp 0x627593 */
L_006275DA:
    /* cmp esi, edi */ /* 0x006275DA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006275FE; /* 0x006275DC: jne 0x6275fe */
L_006275DE:
    esi = MEM32(edi + 0x8); /* 0x006275DE: mov esi, dword ptr [edi + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006275E1: push dword ptr [ebp + 0x10] */
    eax = esi + 0x10; /* 0x006275E4: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x006275E7: push eax */
    RECOMP_CALL(sub_00625BA0); /* 0x006275E8: call 0x625ba0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006275ED: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062769E; /* 0x006275EF: je 0x62769e */
L_006275F5:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x006275F5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x006275F8: push ecx */
    PUSH32(esp, esi); /* 0x006275F9: push esi */
    PUSH32(esp, 0); /* 0x006275FA: push 0 */
    RECOMP_BACKEDGE();
    goto L_00627595; /* 0x006275FC: jmp 0x627595 */
L_006275FE:
    eax = esi + 0x10; /* 0x006275FE: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x00627601: push eax */
    ebx = MEM32(ebp + 0x10); /* 0x00627602: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x00627605: push ebx */
    RECOMP_CALL(sub_00625BA0); /* 0x00627606: call 0x625ba0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0062760B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062764E; /* 0x0062760D: je 0x62764e */
L_0062760F:
    MEM32(ebp + (-0x14)) = esi; /* 0x0062760F: mov dword ptr [ebp - 0x14], esi */
    ecx = ebp + (-0x14); /* 0x00627612: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0041B310); /* 0x00627615: call 0x41b310 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x0062761A: push ebx */
    ebx = MEM32(ebp + (-0x14)); /* 0x0062761B: mov ebx, dword ptr [ebp - 0x14] */
    eax = ebx + 0x10; /* 0x0062761E: lea eax, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x00627621: push eax */
    RECOMP_CALL(sub_00625BA0); /* 0x00627622: call 0x625ba0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00627627: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062764B; /* 0x00627629: je 0x62764b */
L_0062762B:
    eax = MEM32(ebx + 0x8); /* 0x0062762B: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0062762E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x00627631: push ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x00627632: mov ecx, dword ptr [ebp - 0x1c] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00627635: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627643; /* 0x00627639: je 0x627643 */
L_0062763B:
    PUSH32(esp, ebx); /* 0x0062763B: push ebx */
    PUSH32(esp, 0); /* 0x0062763C: push 0 */
    RECOMP_BACKEDGE();
    goto L_00627597; /* 0x0062763E: jmp 0x627597 */
L_00627643:
    PUSH32(esp, esi); /* 0x00627643: push esi */
    PUSH32(esp, 1); /* 0x00627644: push 1 */
    RECOMP_BACKEDGE();
    goto L_00627597; /* 0x00627646: jmp 0x627597 */
L_0062764B:
    ebx = MEM32(ebp + 0x10); /* 0x0062764B: mov ebx, dword ptr [ebp + 0x10] */
L_0062764E:
    PUSH32(esp, ebx); /* 0x0062764E: push ebx */
    eax = esi + 0x10; /* 0x0062764F: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x00627652: push eax */
    RECOMP_CALL(sub_00625BA0); /* 0x00627653: call 0x625ba0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00627658: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006276A1; /* 0x0062765A: je 0x6276a1 */
L_0062765C:
    MEM32(ebp + (-0x14)) = esi; /* 0x0062765C: mov dword ptr [ebp - 0x14], esi */
    ecx = ebp + (-0x14); /* 0x0062765F: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0040B880); /* 0x00627662: call 0x40b880 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x14)); /* 0x00627667: mov ebx, dword ptr [ebp - 0x14] */
    /* cmp ebx, edi */ /* 0x0062766A: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062767E; /* 0x0062766C: je 0x62767e */
L_0062766E:
    eax = ebx + 0x10; /* 0x0062766E: lea eax, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x00627671: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00627672: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_00625BA0); /* 0x00627675: call 0x625ba0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0062767A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062769E; /* 0x0062767C: je 0x62769e */
L_0062767E:
    eax = MEM32(esi + 0x8); /* 0x0062767E: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x00627681: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x00627684: push ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x00627685: mov ecx, dword ptr [ebp - 0x1c] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00627688: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627696; /* 0x0062768C: je 0x627696 */
L_0062768E:
    PUSH32(esp, esi); /* 0x0062768E: push esi */
    PUSH32(esp, 0); /* 0x0062768F: push 0 */
    RECOMP_BACKEDGE();
    goto L_00627597; /* 0x00627691: jmp 0x627597 */
L_00627696:
    PUSH32(esp, ebx); /* 0x00627696: push ebx */
    PUSH32(esp, 1); /* 0x00627697: push 1 */
    RECOMP_BACKEDGE();
    goto L_00627597; /* 0x00627699: jmp 0x627597 */
L_0062769E:
    ebx = MEM32(ebp + 0x10); /* 0x0062769E: mov ebx, dword ptr [ebp + 0x10] */
L_006276A1:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006276A1: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x006276A8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x006276AB: push ebx */
    PUSH32(esp, 0); /* 0x006276AC: push 0 */
    eax = ebp + (-0x18); /* 0x006276AE: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x006276B1: push eax */
    ecx = MEM32(ebp + (-0x1C)); /* 0x006276B2: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_006282D0); /* 0x006276B5: call 0x6282d0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x006276BA: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x006276BC: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x006276BF: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x006276C1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006276C4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006276CB: pop ecx */
    edi = POP32_VAL(esp); /* 0x006276CC: pop edi */
    esi = POP32_VAL(esp); /* 0x006276CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x006276CE: pop ebx */
    esp = ebp; /* 0x006276CF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006276D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006276D2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_006276D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006276D5u);

L_006276D5:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x006276D5: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_00627E20); /* 0x006276D8: call 0x627e20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006276DD: push 0 */
    PUSH32(esp, 0); /* 0x006276DF: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006276E1: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006276E6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006276F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006276F0u);

L_006276F0:
    PUSH32(esp, ebp); /* 0x006276F0: push ebp */
    ebp = esp; /* 0x006276F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006276F3: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = edx; /* 0x006276F6: mov eax, edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x006276F8: mov dword ptr [ebp - 8], eax */
    /* cmp ecx, eax */ /* 0x006276FB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627973; /* 0x006276FD: je 0x627973 */
L_00627703:
    edx = MEM32(ebp + 0x8); /* 0x00627703: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x00627706: push ebx */
    PUSH32(esp, esi); /* 0x00627707: push esi */
    PUSH32(esp, edi); /* 0x00627708: push edi */
    MEM32(ebp + 0x8) = edx; /* 0x00627709: mov dword ptr [ebp + 8], edx */
    edi = edx + 0x38; /* 0x0062770C: lea edi, [edx + 0x38] */
    esi = ecx + 0x38; /* 0x0062770F: lea esi, [ecx + 0x38] */
L_00627712:
    eax = MEM32(esi + (-0x38)); /* 0x00627712: mov eax, dword ptr [esi - 0x38] */
    ecx = edi + (-0x30); /* 0x00627715: lea ecx, [edi - 0x30] */
    MEM32(edx) = eax; /* 0x00627718: mov dword ptr [edx], eax */
    eax = MEM32(esi + (-0x34)); /* 0x0062771A: mov eax, dword ptr [esi - 0x34] */
    MEM32(edi + (-0x34)) = eax; /* 0x0062771D: mov dword ptr [edi - 0x34], eax */
    eax = esi + (-0x30); /* 0x00627720: lea eax, [esi - 0x30] */
    PUSH32(esp, eax); /* 0x00627723: push eax */
    RECOMP_CALL(sub_00627B60); /* 0x00627724: call 0x627b60 */
    RECOMP_FLAGS_IN();
    eax = esi + (-0x24); /* 0x00627729: lea eax, [esi - 0x24] */
    PUSH32(esp, eax); /* 0x0062772C: push eax */
    ecx = edi + (-0x24); /* 0x0062772D: lea ecx, [edi - 0x24] */
    RECOMP_CALL(sub_00627CA0); /* 0x00627730: call 0x627ca0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + (-0x18)); /* 0x00627735: mov eax, dword ptr [esi - 0x18] */
    ecx = edi + 0xC; /* 0x00627738: lea ecx, [edi + 0xc] */
    MEM32(edi + (-0x18)) = eax; /* 0x0062773B: mov dword ptr [edi - 0x18], eax */
    eax = MEM32(esi + (-0x14)); /* 0x0062773E: mov eax, dword ptr [esi - 0x14] */
    MEM32(edi + (-0x14)) = eax; /* 0x00627741: mov dword ptr [edi - 0x14], eax */
    eax = MEM32(esi + (-0x10)); /* 0x00627744: mov eax, dword ptr [esi - 0x10] */
    MEM32(edi + (-0x10)) = eax; /* 0x00627747: mov dword ptr [edi - 0x10], eax */
    eax = (uint32_t)MEM8(esi + (-0xC)); /* 0x0062774A: movzx eax, byte ptr [esi - 0xc] */
    MEM8(edi + (-0xC)) = (uint8_t)(LO8(eax)); /* 0x0062774E: mov byte ptr [edi - 0xc], al */
    eax = MEM32(esi + (-0x8)); /* 0x00627751: mov eax, dword ptr [esi - 8] */
    MEM32(edi + (-0x8)) = eax; /* 0x00627754: mov dword ptr [edi - 8], eax */
    eax = MEM32(esi + (-0x4)); /* 0x00627757: mov eax, dword ptr [esi - 4] */
    MEM32(edi + (-0x4)) = eax; /* 0x0062775A: mov dword ptr [edi - 4], eax */
    eax = MEM32(esi); /* 0x0062775D: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x0062775F: mov dword ptr [edi], eax */
    eax = MEM32(esi + 0x4); /* 0x00627761: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0x4) = eax; /* 0x00627764: mov dword ptr [edi + 4], eax */
    eax = (uint32_t)MEM8(esi + 0x8); /* 0x00627767: movzx eax, byte ptr [esi + 8] */
    MEM8(edi + 0x8) = (uint8_t)(LO8(eax)); /* 0x0062776B: mov byte ptr [edi + 8], al */
    eax = esi + 0xC; /* 0x0062776E: lea eax, [esi + 0xc] */
    /* cmp ecx, eax */ /* 0x00627771: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062777F; /* 0x00627773: je 0x62777f */
L_00627775:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627775: push -1 */
    PUSH32(esp, 0); /* 0x00627777: push 0 */
    PUSH32(esp, eax); /* 0x00627779: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x0062777A: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_0062777F:
    eax = esi + 0x24; /* 0x0062777F: lea eax, [esi + 0x24] */
    ecx = edi + 0x24; /* 0x00627782: lea ecx, [edi + 0x24] */
    /* cmp ecx, eax */ /* 0x00627785: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627793; /* 0x00627787: je 0x627793 */
L_00627789:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627789: push -1 */
    PUSH32(esp, 0); /* 0x0062778B: push 0 */
    PUSH32(esp, eax); /* 0x0062778D: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x0062778E: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_00627793:
    eax = MEM32(esi + 0x3C); /* 0x00627793: mov eax, dword ptr [esi + 0x3c] */
    ebx = edi + 0x194; /* 0x00627796: lea ebx, [edi + 0x194] */
    MEM32(edi + 0x3C) = eax; /* 0x0062779C: mov dword ptr [edi + 0x3c], eax */
    _xmm[0] = xmm_ld(esi + 0x40); /* 0x0062779F: movdqu xmm0, xmmword ptr [esi + 0x40] */
    xmm_st(edi + 0x40, _xmm[0]); /* 0x006277A4: movdqu xmmword ptr [edi + 0x40], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x50); /* 0x006277A9: movdqu xmm0, xmmword ptr [esi + 0x50] */
    xmm_st(edi + 0x50, _xmm[0]); /* 0x006277AE: movdqu xmmword ptr [edi + 0x50], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x60); /* 0x006277B3: movdqu xmm0, xmmword ptr [esi + 0x60] */
    xmm_st(edi + 0x60, _xmm[0]); /* 0x006277B8: movdqu xmmword ptr [edi + 0x60], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x70); /* 0x006277BD: movdqu xmm0, xmmword ptr [esi + 0x70] */
    xmm_st(edi + 0x70, _xmm[0]); /* 0x006277C2: movdqu xmmword ptr [edi + 0x70], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x80); /* 0x006277C7: movdqu xmm0, xmmword ptr [esi + 0x80] */
    xmm_st(edi + 0x80, _xmm[0]); /* 0x006277CF: movdqu xmmword ptr [edi + 0x80], xmm0 */
    eax = MEM32(esi + 0x90); /* 0x006277D7: mov eax, dword ptr [esi + 0x90] */
    MEM32(edi + 0x90) = eax; /* 0x006277DD: mov dword ptr [edi + 0x90], eax */
    _xmm[0] = xmm_ld(esi + 0x94); /* 0x006277E3: movdqu xmm0, xmmword ptr [esi + 0x94] */
    xmm_st(edi + 0x94, _xmm[0]); /* 0x006277EB: movdqu xmmword ptr [edi + 0x94], xmm0 */
    _xmm[0] = xmm_ld(esi + 0xA4); /* 0x006277F3: movdqu xmm0, xmmword ptr [esi + 0xa4] */
    xmm_st(edi + 0xA4, _xmm[0]); /* 0x006277FB: movdqu xmmword ptr [edi + 0xa4], xmm0 */
    _xmm[0] = xmm_ld(esi + 0xB4); /* 0x00627803: movdqu xmm0, xmmword ptr [esi + 0xb4] */
    xmm_st(edi + 0xB4, _xmm[0]); /* 0x0062780B: movdqu xmmword ptr [edi + 0xb4], xmm0 */
    _xmm[0] = xmm_ld(esi + 0xC4); /* 0x00627813: movdqu xmm0, xmmword ptr [esi + 0xc4] */
    xmm_st(edi + 0xC4, _xmm[0]); /* 0x0062781B: movdqu xmmword ptr [edi + 0xc4], xmm0 */
    _xmm[0] = xmm_ld(esi + 0xD4); /* 0x00627823: movdqu xmm0, xmmword ptr [esi + 0xd4] */
    xmm_st(edi + 0xD4, _xmm[0]); /* 0x0062782B: movdqu xmmword ptr [edi + 0xd4], xmm0 */
    eax = MEM32(esi + 0xE4); /* 0x00627833: mov eax, dword ptr [esi + 0xe4] */
    MEM32(edi + 0xE4) = eax; /* 0x00627839: mov dword ptr [edi + 0xe4], eax */
    _xmm[0] = xmm_ld(esi + 0xE8); /* 0x0062783F: movdqu xmm0, xmmword ptr [esi + 0xe8] */
    xmm_st(edi + 0xE8, _xmm[0]); /* 0x00627847: movdqu xmmword ptr [edi + 0xe8], xmm0 */
    _xmm[0] = xmm_ld(esi + 0xF8); /* 0x0062784F: movdqu xmm0, xmmword ptr [esi + 0xf8] */
    xmm_st(edi + 0xF8, _xmm[0]); /* 0x00627857: movdqu xmmword ptr [edi + 0xf8], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x108); /* 0x0062785F: movdqu xmm0, xmmword ptr [esi + 0x108] */
    xmm_st(edi + 0x108, _xmm[0]); /* 0x00627867: movdqu xmmword ptr [edi + 0x108], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x118); /* 0x0062786F: movdqu xmm0, xmmword ptr [esi + 0x118] */
    xmm_st(edi + 0x118, _xmm[0]); /* 0x00627877: movdqu xmmword ptr [edi + 0x118], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x128); /* 0x0062787F: movdqu xmm0, xmmword ptr [esi + 0x128] */
    xmm_st(edi + 0x128, _xmm[0]); /* 0x00627887: movdqu xmmword ptr [edi + 0x128], xmm0 */
    eax = MEM32(esi + 0x138); /* 0x0062788F: mov eax, dword ptr [esi + 0x138] */
    MEM32(edi + 0x138) = eax; /* 0x00627895: mov dword ptr [edi + 0x138], eax */
    _xmm[0] = xmm_ld(esi + 0x13C); /* 0x0062789B: movdqu xmm0, xmmword ptr [esi + 0x13c] */
    xmm_st(edi + 0x13C, _xmm[0]); /* 0x006278A3: movdqu xmmword ptr [edi + 0x13c], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x14C); /* 0x006278AB: movdqu xmm0, xmmword ptr [esi + 0x14c] */
    xmm_st(edi + 0x14C, _xmm[0]); /* 0x006278B3: movdqu xmmword ptr [edi + 0x14c], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x15C); /* 0x006278BB: movdqu xmm0, xmmword ptr [esi + 0x15c] */
    xmm_st(edi + 0x15C, _xmm[0]); /* 0x006278C3: movdqu xmmword ptr [edi + 0x15c], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x16C); /* 0x006278CB: movdqu xmm0, xmmword ptr [esi + 0x16c] */
    xmm_st(edi + 0x16C, _xmm[0]); /* 0x006278D3: movdqu xmmword ptr [edi + 0x16c], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x17C); /* 0x006278DB: movdqu xmm0, xmmword ptr [esi + 0x17c] */
    xmm_st(edi + 0x17C, _xmm[0]); /* 0x006278E3: movdqu xmmword ptr [edi + 0x17c], xmm0 */
    eax = MEM32(esi + 0x18C); /* 0x006278EB: mov eax, dword ptr [esi + 0x18c] */
    MEM32(edi + 0x18C) = eax; /* 0x006278F1: mov dword ptr [edi + 0x18c], eax */
    SET_LO8(eax, MEM8(esi + 0x190)); /* 0x006278F7: mov al, byte ptr [esi + 0x190] */
    MEM8(edi + 0x190) = (uint8_t)(LO8(eax)); /* 0x006278FD: mov byte ptr [edi + 0x190], al */
    eax = esi + 0x194; /* 0x00627903: lea eax, [esi + 0x194] */
    /* cmp ebx, eax */ /* 0x00627909: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627946; /* 0x0062790B: je 0x627946 */
L_0062790D:
    eax = MEM32(ebx); /* 0x0062790D: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x0062790F: mov ecx, ebx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x00627911: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_00626800); /* 0x00627914: call 0x626800 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x00627919: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x0062791B: mov ecx, ebx */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062791D: mov byte ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x00627921: push dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = eax; /* 0x00627924: mov dword ptr [eax + 4], eax */
    eax = MEM32(ebx); /* 0x00627927: mov eax, dword ptr [ebx] */
    MEM32(eax) = eax; /* 0x00627929: mov dword ptr [eax], eax */
    eax = MEM32(ebx); /* 0x0062792B: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x8) = eax; /* 0x0062792D: mov dword ptr [eax + 8], eax */
    eax = esi + 0x194; /* 0x00627930: lea eax, [esi + 0x194] */
    PUSH32(esp, eax); /* 0x00627936: push eax */
    MEM32(edi + 0x198) = 0; /* 0x00627937: mov dword ptr [edi + 0x198], 0 */
    RECOMP_CALL(sub_00628500); /* 0x00627941: call 0x628500 */
    RECOMP_FLAGS_IN();
L_00627946:
    edx = MEM32(ebp + 0x8); /* 0x00627946: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x00627949: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x1D4u; /* 0x0062794F: add edx, 0x1d4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x1D4u; /* 0x00627955: add edi, 0x1d4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edx; /* 0x0062795B: mov dword ptr [ebp + 8], edx */
    ecx = esi + (-0x38); /* 0x0062795E: lea ecx, [esi - 0x38] */
    /* cmp ecx, MEM32(ebp + (-0x8)) */ /* 0x00627961: cmp ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00627712; /* 0x00627964: jne 0x627712 */
L_0062796A:
    edi = POP32_VAL(esp); /* 0x0062796A: pop edi */
    esi = POP32_VAL(esp); /* 0x0062796B: pop esi */
    eax = edx; /* 0x0062796C: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x0062796E: pop ebx */
    esp = ebp; /* 0x0062796F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627971: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00627972: ret  */
L_00627973:
    eax = MEM32(ebp + 0x8); /* 0x00627973: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x00627976: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627978: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00627979: ret  */
    RECOMP_REGS_OUT();
}

void sub_00627980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627980u);

L_00627980:
    PUSH32(esp, ebp); /* 0x00627980: push ebp */
    ebp = esp; /* 0x00627981: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627983: push -1 */
    PUSH32(esp, 0x007B7DF0u); /* 0x00627985: push 0x7b7df0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062798A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00627990: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00627991: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00627994: push ebx */
    PUSH32(esp, esi); /* 0x00627995: push esi */
    PUSH32(esp, edi); /* 0x00627996: push edi */
    eax = MEM32(0x855000); /* 0x00627997: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062799C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062799E: push eax */
    eax = ebp + (-0xC); /* 0x0062799F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006279A2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006279A8: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x006279AB: mov ebx, ecx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x006279AD: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x006279B0: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ebp + 0xC); /* 0x006279B7: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x006279BA: push edi */
    RECOMP_CALL(sub_00626410); /* 0x006279BB: call 0x626410 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x006279C0: mov dword ptr [ebp - 0x1c], eax */
    esi = MEM32(ebx); /* 0x006279C3: mov esi, dword ptr [ebx] */
    edx = eax * 8; /* 0x006279C5: lea edx, [eax*8] */
    MEM32(ebp + 0xC) = edx; /* 0x006279CC: mov dword ptr [ebp + 0xc], edx */
    ecx = MEM32(ebx + 0x8); /* 0x006279CF: mov ecx, dword ptr [ebx + 8] */
    /* cmp MEM32(ecx + edx), esi */ /* 0x006279D2: cmp dword ptr [ecx + edx], esi */
    _flag_a = (uint32_t)(MEM32(ecx + edx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006279E0; /* 0x006279D5: je 0x6279e0 */
L_006279D7:
    esi = MEM32(ecx + edx + 0x4); /* 0x006279D7: mov esi, dword ptr [ecx + edx + 4] */
    esi = MEM32(esi); /* 0x006279DB: mov esi, dword ptr [esi] */
    MEM32(ebp + (-0x20)) = esi; /* 0x006279DD: mov dword ptr [ebp - 0x20], esi */
L_006279E0:
    MEM32(ebp + (-0x14)) = esi; /* 0x006279E0: mov dword ptr [ebp - 0x14], esi */
L_006279E3:
    /* cmp esi, MEM32(ecx + edx) */ /* 0x006279E3: cmp esi, dword ptr [ecx + edx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627A01; /* 0x006279E6: je 0x627a01 */
L_006279E8:
    esi = MEM32(esi + 0x4); /* 0x006279E8: mov esi, dword ptr [esi + 4] */
    MEM32(ebp + (-0x14)) = esi; /* 0x006279EB: mov dword ptr [ebp - 0x14], esi */
    SET_LO8(eax, MEM8(edi)); /* 0x006279EE: mov al, byte ptr [edi] */
    /* cmp LO8(eax), MEM8(esi + 0x8) */ /* 0x006279F0: cmp al, byte ptr [esi + 8] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x8)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006279E3; /* 0x006279F3: jne 0x6279e3 */
L_006279F5:
    SET_LO8(eax, MEM8(esi + 0x8)); /* 0x006279F5: mov al, byte ptr [esi + 8] */
    /* cmp LO8(eax), MEM8(edi) */ /* 0x006279F8: cmp al, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627A4B; /* 0x006279FA: je 0x627a4b */
L_006279FC:
    esi = MEM32(esi); /* 0x006279FC: mov esi, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = esi; /* 0x006279FE: mov dword ptr [ebp - 0x14], esi */
L_00627A01:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00627A01: mov dword ptr [ebp - 4], 0xffffffff */
    edi = MEM32(ebp + 0x10); /* 0x00627A08: mov edi, dword ptr [ebp + 0x10] */
    eax = MEM32(edi); /* 0x00627A0B: mov eax, dword ptr [edi] */
    /* cmp esi, eax */ /* 0x00627A0D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627A35; /* 0x00627A0F: je 0x627a35 */
L_00627A11:
    ecx = MEM32(edi + 0x4); /* 0x00627A11: mov ecx, dword ptr [edi + 4] */
    MEM32(ecx) = eax; /* 0x00627A14: mov dword ptr [ecx], eax */
    ecx = MEM32(eax + 0x4); /* 0x00627A16: mov ecx, dword ptr [eax + 4] */
    MEM32(ecx) = esi; /* 0x00627A19: mov dword ptr [ecx], esi */
    ecx = MEM32(esi + 0x4); /* 0x00627A1B: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx) = edi; /* 0x00627A1E: mov dword ptr [ecx], edi */
    edx = MEM32(esi + 0x4); /* 0x00627A20: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x00627A23: mov ecx, dword ptr [eax + 4] */
    MEM32(esi + 0x4) = ecx; /* 0x00627A26: mov dword ptr [esi + 4], ecx */
    ecx = MEM32(edi + 0x4); /* 0x00627A29: mov ecx, dword ptr [edi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x00627A2C: mov dword ptr [eax + 4], ecx */
    MEM32(edi + 0x4) = edx; /* 0x00627A2F: mov dword ptr [edi + 4], edx */
    edx = MEM32(ebp + 0xC); /* 0x00627A32: mov edx, dword ptr [ebp + 0xc] */
L_00627A35:
    ecx = MEM32(ebx + 0x8); /* 0x00627A35: mov ecx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x00627A38: add ecx, edx */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x00627A3A: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(ebx) */ /* 0x00627A3C: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00627A72; /* 0x00627A3E: jne 0x627a72 */
L_00627A40:
    MEM32(ecx) = edi; /* 0x00627A40: mov dword ptr [ecx], edi */
    eax = MEM32(ebx + 0x8); /* 0x00627A42: mov eax, dword ptr [ebx + 8] */
    MEM32(edx + eax + 0x4) = edi; /* 0x00627A45: mov dword ptr [edx + eax + 4], edi */
    goto L_00627A94; /* 0x00627A49: jmp 0x627a94 */
L_00627A4B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00627A4B: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x00627A4E: mov ecx, ebx */
    RECOMP_CALL(sub_0061B7C0); /* 0x00627A50: call 0x61b7c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x00627A55: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x00627A58: mov dword ptr [eax], esi */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x00627A5A: mov byte ptr [eax + 4], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00627A5E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00627A61: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00627A68: pop ecx */
    edi = POP32_VAL(esp); /* 0x00627A69: pop edi */
    esi = POP32_VAL(esp); /* 0x00627A6A: pop esi */
    ebx = POP32_VAL(esp); /* 0x00627A6B: pop ebx */
    esp = ebp; /* 0x00627A6C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627A6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00627A6F: ret 0xc */
L_00627A72:
    /* cmp eax, esi */ /* 0x00627A72: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00627A7A; /* 0x00627A74: jne 0x627a7a */
L_00627A76:
    MEM32(ecx) = edi; /* 0x00627A76: mov dword ptr [ecx], edi */
    goto L_00627A94; /* 0x00627A78: jmp 0x627a94 */
L_00627A7A:
    eax = MEM32(ecx + 0x4); /* 0x00627A7A: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax); /* 0x00627A7D: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x4) = eax; /* 0x00627A7F: mov dword ptr [ecx + 4], eax */
    /* cmp eax, edi */ /* 0x00627A82: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627A94; /* 0x00627A84: je 0x627a94 */
L_00627A86:
    ecx = MEM32(ebx + 0x8); /* 0x00627A86: mov ecx, dword ptr [ebx + 8] */
    eax = MEM32(ecx + edx + 0x4); /* 0x00627A89: mov eax, dword ptr [ecx + edx + 4] */
    eax = MEM32(eax + 0x4); /* 0x00627A8D: mov eax, dword ptr [eax + 4] */
    MEM32(ecx + edx + 0x4) = eax; /* 0x00627A90: mov dword ptr [ecx + edx + 4], eax */
L_00627A94:
    ecx = ebx; /* 0x00627A94: mov ecx, ebx */
    RECOMP_CALL(sub_00627EA0); /* 0x00627A96: call 0x627ea0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x00627A9B: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edi; /* 0x00627A9E: mov dword ptr [eax], edi */
    MEM8(eax + 0x4) = (uint8_t)(1); /* 0x00627AA0: mov byte ptr [eax + 4], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00627AA4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00627AA7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00627AAE: pop ecx */
    edi = POP32_VAL(esp); /* 0x00627AAF: pop edi */
    esi = POP32_VAL(esp); /* 0x00627AB0: pop esi */
    ebx = POP32_VAL(esp); /* 0x00627AB1: pop ebx */
    esp = ebp; /* 0x00627AB2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627AB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00627AB5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00627AB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627AB8u);

L_00627AB8:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00627AB8: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x18)); /* 0x00627ABB: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_0061B7C0); /* 0x00627ABE: call 0x61b7c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x00627AC3: push 0 */
    PUSH32(esp, 0); /* 0x00627AC5: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00627AC7: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00627ACCu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00627AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627AD0u);

L_00627AD0:
    PUSH32(esp, ebp); /* 0x00627AD0: push ebp */
    ebp = esp; /* 0x00627AD1: mov ebp, esp */
    edx = MEM32(ecx + 0x8); /* 0x00627AD3: mov edx, dword ptr [ecx + 8] */
    eax = 0x2AAAAAABu; /* 0x00627AD6: mov eax, 0x2aaaaaab */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx); /* 0x00627ADB: sub edx, dword ptr [ecx] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x00627ADD: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, esi); /* 0x00627ADF: push esi */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00627AE0: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = 0x15555555u; /* 0x00627AE2: mov eax, 0x15555555 */
    esi = edx; /* 0x00627AE7: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x00627AE9: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x00627AE9: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x00627AEC: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x00627AEE: mov ecx, esi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00627AF0: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x00627AF0: shr ecx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00627AF2: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x00627AF4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00627B08; /* 0x00627AF6: jae 0x627b08 */
L_00627AF8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00627AF8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x00627AFA: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x00627AFD: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x00627B01: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00627B03: pop esi */
    ebp = POP32_VAL(esp); /* 0x00627B04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00627B05: ret 4 */
L_00627B08:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x00627B08: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x00627B0A: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x00627B0D: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x00627B11: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00627B13: pop esi */
    ebp = POP32_VAL(esp); /* 0x00627B14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00627B15: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00627B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627B20u);

L_00627B20:
    PUSH32(esp, ebp); /* 0x00627B20: push ebp */
    ebp = esp; /* 0x00627B21: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00627B23: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00627B26: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x00627B28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00627B4F; /* 0x00627B2A: je 0x627b4f */
L_00627B2C:
    /* cmp eax, 0x15555555u */ /* 0x00627B2C: cmp eax, 0x15555555 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x15555555u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00627B49; /* 0x00627B31: ja 0x627b49 */
L_00627B33:
    eax = eax + eax * 2; /* 0x00627B33: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x00627B36: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x00627B36: shl eax, 2 */
    PUSH32(esp, eax); /* 0x00627B39: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00627B3A: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00627B40: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00627B42: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x00627B45: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00627B4F; /* 0x00627B47: jne 0x627b4f */
L_00627B49:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x00627B49: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_00627B4F:
    eax = ecx; /* 0x00627B4F: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x00627B51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00627B52: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00627B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627B60u);

L_00627B60:
    PUSH32(esp, ebp); /* 0x00627B60: push ebp */
    ebp = esp; /* 0x00627B61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627B63: push -1 */
    PUSH32(esp, 0x007B7E10u); /* 0x00627B65: push 0x7b7e10 */
    eax = MEM32(FS_BASE + (0)); /* 0x00627B6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00627B70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00627B71: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00627B74: push ebx */
    PUSH32(esp, esi); /* 0x00627B75: push esi */
    PUSH32(esp, edi); /* 0x00627B76: push edi */
    eax = MEM32(0x855000); /* 0x00627B77: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00627B7C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00627B7E: push eax */
    eax = ebp + (-0xC); /* 0x00627B7F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00627B82: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00627B88: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x00627B8B: mov edi, ecx */
    MEM32(ebp + (-0x1C)) = edi; /* 0x00627B8D: mov dword ptr [ebp - 0x1c], edi */
    ebx = MEM32(ebp + 0x8); /* 0x00627B90: mov ebx, dword ptr [ebp + 8] */
    /* cmp edi, ebx */ /* 0x00627B93: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627BA5; /* 0x00627B95: je 0x627ba5 */
L_00627B97:
    esi = MEM32(ebx + 0x4); /* 0x00627B97: mov esi, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x00627B9A: mov ecx, dword ptr [ebx] */
    /* cmp ecx, esi */ /* 0x00627B9C: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00627BBB; /* 0x00627B9E: jne 0x627bbb */
L_00627BA0:
    eax = MEM32(edi); /* 0x00627BA0: mov eax, dword ptr [edi] */
L_00627BA2:
    MEM32(edi + 0x4) = eax; /* 0x00627BA2: mov dword ptr [edi + 4], eax */
L_00627BA5:
    eax = edi; /* 0x00627BA5: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00627BA7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00627BAA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00627BB1: pop ecx */
    edi = POP32_VAL(esp); /* 0x00627BB2: pop edi */
    esi = POP32_VAL(esp); /* 0x00627BB3: pop esi */
    ebx = POP32_VAL(esp); /* 0x00627BB4: pop ebx */
    esp = ebp; /* 0x00627BB5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627BB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00627BB8: ret 4 */
L_00627BBB:
    eax = esi; /* 0x00627BBB: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00627BBD: sub eax, ecx */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x00627BBF: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    MEM32(ebp + (-0x14)) = eax; /* 0x00627BC2: mov dword ptr [ebp - 0x14], eax */
    edx = MEM32(edi); /* 0x00627BC5: mov edx, dword ptr [edi] */
    ebx = MEM32(edi + 0x4); /* 0x00627BC7: mov ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x00627BCA: sub ebx, edx */
    _flag_k = FK_CMP;
    if (3u) _cf = (((ebx) >> 2) & 1u); /* 0x00627BCC: sar ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 3u);
    MEM32(ebp + (-0x18)) = ebx; /* 0x00627BCF: mov dword ptr [ebp - 0x18], ebx */
    /* cmp eax, ebx */ /* 0x00627BD2: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x00627BD4: mov ebx, dword ptr [ebp + 8] */
    if (CMP_A(_flag_a, _flag_b)) goto L_00627C03; /* 0x00627BD7: ja 0x627c03 */
L_00627BD9:
    /* cmp ecx, esi */ /* 0x00627BD9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627BF4; /* 0x00627BDB: je 0x627bf4 */
L_00627BDD:
    ecx = ecx; /* 0x00627BDD: lea ecx, [ecx] */
L_00627BE0:
    eax = MEM32(ecx); /* 0x00627BE0: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x00627BE2: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x4); /* 0x00627BE4: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x00627BE7: mov dword ptr [edx + 4], eax */
    edx = edx + 0x8; /* 0x00627BEA: lea edx, [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00627BED: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x00627BF0: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00627BE0; /* 0x00627BF2: jne 0x627be0 */
L_00627BF4:
    ecx = MEM32(ebx + 0x4); /* 0x00627BF4: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x00627BF7: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x00627BF9: sar ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 3u);
    eax = MEM32(edi); /* 0x00627BFC: mov eax, dword ptr [edi] */
    eax = eax + ecx * 8; /* 0x00627BFE: lea eax, [eax + ecx*8] */
    RECOMP_BACKEDGE();
    goto L_00627BA2; /* 0x00627C01: jmp 0x627ba2 */
L_00627C03:
    eax = MEM32(edi + 0x8); /* 0x00627C03: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00627C06: sub eax, edx */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x00627C08: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x00627C0B: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00627C3A; /* 0x00627C0E: ja 0x627c3a */
L_00627C10:
    eax = MEM32(ebp + (-0x18)); /* 0x00627C10: mov eax, dword ptr [ebp - 0x18] */
    esi = ecx + eax * 8; /* 0x00627C13: lea esi, [ecx + eax*8] */
    PUSH32(esp, edx); /* 0x00627C16: push edx */
    edx = esi; /* 0x00627C17: mov edx, esi */
    RECOMP_CALL(sub_006284A0); /* 0x00627C19: call 0x6284a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00627C1E: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00627C21: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00627C24: push ecx */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x00627C25: push dword ptr [edi + 4] */
    edx = MEM32(ebx + 0x4); /* 0x00627C28: mov edx, dword ptr [ebx + 4] */
    ecx = esi; /* 0x00627C2B: mov ecx, esi */
    RECOMP_CALL(sub_00628BB0); /* 0x00627C2D: call 0x628bb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00627C32: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_00627BA2; /* 0x00627C35: jmp 0x627ba2 */
L_00627C3A:
    /* test edx, edx */ /* 0x00627C3A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00627C48; /* 0x00627C3C: je 0x627c48 */
L_00627C3E:
    PUSH32(esp, edx); /* 0x00627C3E: push edx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00627C3F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00627C45: add esp, 4 */
    _flag_k = FK_ADD;
L_00627C48:
    eax = MEM32(ebx + 0x4); /* 0x00627C48: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx); /* 0x00627C4B: sub eax, dword ptr [ebx] */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x00627C4D: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    PUSH32(esp, eax); /* 0x00627C50: push eax */
    ecx = edi; /* 0x00627C51: mov ecx, edi */
    RECOMP_CALL(sub_00628000); /* 0x00627C53: call 0x628000 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00627C58: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_00627BA5; /* 0x00627C5A: je 0x627ba5 */
L_00627C60:
    MEM32(ebp + (-0x4)) = 0; /* 0x00627C60: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00627C67: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00627C6A: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x00627C6B: push dword ptr [edi] */
    edx = MEM32(ebx + 0x4); /* 0x00627C6D: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x00627C70: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_00628BB0); /* 0x00627C72: call 0x628bb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00627C77: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x00627C7A: mov dword ptr [edi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00627C7D: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_BACKEDGE();
    goto L_00627BA5; /* 0x00627C84: jmp 0x627ba5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00627C89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627C89u);

L_00627C89:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00627C89: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_00419790); /* 0x00627C8C: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x00627C91: push 0 */
    PUSH32(esp, 0); /* 0x00627C93: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00627C95: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00627C9Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00627CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627CA0u);

L_00627CA0:
    PUSH32(esp, ebp); /* 0x00627CA0: push ebp */
    ebp = esp; /* 0x00627CA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627CA3: push -1 */
    PUSH32(esp, 0x007B7E30u); /* 0x00627CA5: push 0x7b7e30 */
    eax = MEM32(FS_BASE + (0)); /* 0x00627CAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00627CB0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00627CB1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00627CB4: push ebx */
    PUSH32(esp, esi); /* 0x00627CB5: push esi */
    PUSH32(esp, edi); /* 0x00627CB6: push edi */
    eax = MEM32(0x855000); /* 0x00627CB7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00627CBC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00627CBE: push eax */
    eax = ebp + (-0xC); /* 0x00627CBF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00627CC2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00627CC8: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x00627CCB: mov edi, ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x00627CCD: mov dword ptr [ebp - 0x18], edi */
    ebx = MEM32(ebp + 0x8); /* 0x00627CD0: mov ebx, dword ptr [ebp + 8] */
    /* cmp edi, ebx */ /* 0x00627CD3: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627CE5; /* 0x00627CD5: je 0x627ce5 */
L_00627CD7:
    eax = MEM32(ebx); /* 0x00627CD7: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebx + 0x4); /* 0x00627CD9: mov ecx, dword ptr [ebx + 4] */
    /* cmp eax, ecx */ /* 0x00627CDC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00627CFB; /* 0x00627CDE: jne 0x627cfb */
L_00627CE0:
    eax = MEM32(edi); /* 0x00627CE0: mov eax, dword ptr [edi] */
L_00627CE2:
    MEM32(edi + 0x4) = eax; /* 0x00627CE2: mov dword ptr [edi + 4], eax */
L_00627CE5:
    eax = edi; /* 0x00627CE5: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00627CE7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00627CEA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00627CF1: pop ecx */
    edi = POP32_VAL(esp); /* 0x00627CF2: pop edi */
    esi = POP32_VAL(esp); /* 0x00627CF3: pop esi */
    ebx = POP32_VAL(esp); /* 0x00627CF4: pop ebx */
    esp = ebp; /* 0x00627CF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627CF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00627CF8: ret 4 */
L_00627CFB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x00627CFB: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x00627CFD: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00627D02: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00627D04: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00627D07: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00627D09: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00627D09: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00627D0C: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x00627D0E: mov dword ptr [ebp + 8], eax */
    esi = MEM32(edi); /* 0x00627D11: mov esi, dword ptr [edi] */
    ecx = MEM32(edi + 0x4); /* 0x00627D13: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x00627D16: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x00627D18: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00627D1D: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00627D1F: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00627D22: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00627D24: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00627D24: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00627D27: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x00627D29: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x00627D2C: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00627D5F; /* 0x00627D2F: ja 0x627d5f */
L_00627D31:
    PUSH32(esp, esi); /* 0x00627D31: push esi */
    edx = MEM32(ebx + 0x4); /* 0x00627D32: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x00627D35: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_006284D0); /* 0x00627D37: call 0x6284d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00627D3C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x4); /* 0x00627D3F: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x00627D42: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x00627D44: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00627D49: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00627D4B: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00627D4E: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00627D50: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00627D50: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00627D53: add eax, edx */
    _flag_k = FK_ADD;
    ecx = eax + eax * 4; /* 0x00627D55: lea ecx, [eax + eax*4] */
    eax = MEM32(edi); /* 0x00627D58: mov eax, dword ptr [edi] */
    eax = eax + ecx * 4; /* 0x00627D5A: lea eax, [eax + ecx*4] */
    RECOMP_BACKEDGE();
    goto L_00627CE2; /* 0x00627D5D: jmp 0x627ce2 */
L_00627D5F:
    ecx = MEM32(edi + 0x8); /* 0x00627D5F: mov ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x00627D62: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x00627D64: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00627D69: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00627D6B: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00627D6E: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00627D70: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00627D70: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00627D73: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x00627D75: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00627DAA; /* 0x00627D78: ja 0x627daa */
L_00627D7A:
    eax = MEM32(ebp + (-0x14)); /* 0x00627D7A: mov eax, dword ptr [ebp - 0x14] */
    eax = eax + eax * 4; /* 0x00627D7D: lea eax, [eax + eax*4] */
    ecx = MEM32(ebx); /* 0x00627D80: mov ecx, dword ptr [ebx] */
    esi = ecx + eax * 4; /* 0x00627D82: lea esi, [ecx + eax*4] */
    PUSH32(esp, MEM32(edi)); /* 0x00627D85: push dword ptr [edi] */
    edx = esi; /* 0x00627D87: mov edx, esi */
    RECOMP_CALL(sub_006284D0); /* 0x00627D89: call 0x6284d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00627D8E: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00627D91: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00627D94: push ecx */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x00627D95: push dword ptr [edi + 4] */
    edx = MEM32(ebx + 0x4); /* 0x00627D98: mov edx, dword ptr [ebx + 4] */
    ecx = esi; /* 0x00627D9B: mov ecx, esi */
    RECOMP_CALL(sub_00628C40); /* 0x00627D9D: call 0x628c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00627DA2: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_00627CE2; /* 0x00627DA5: jmp 0x627ce2 */
L_00627DAA:
    /* test esi, esi */ /* 0x00627DAA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00627DB8; /* 0x00627DAC: je 0x627db8 */
L_00627DAE:
    PUSH32(esp, esi); /* 0x00627DAE: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00627DAF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00627DB5: add esp, 4 */
    _flag_k = FK_ADD;
L_00627DB8:
    ecx = MEM32(ebx + 0x4); /* 0x00627DB8: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x00627DBB: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x00627DBD: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00627DC2: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00627DC4: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00627DC7: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00627DC9: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00627DC9: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00627DCC: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00627DCE: push eax */
    ecx = edi; /* 0x00627DCF: mov ecx, edi */
    RECOMP_CALL(sub_00628070); /* 0x00627DD1: call 0x628070 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00627DD6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_00627CE5; /* 0x00627DD8: je 0x627ce5 */
L_00627DDE:
    MEM32(ebp + (-0x4)) = 0; /* 0x00627DDE: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00627DE5: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00627DE8: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x00627DE9: push dword ptr [edi] */
    edx = MEM32(ebx + 0x4); /* 0x00627DEB: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x00627DEE: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_00628C40); /* 0x00627DF0: call 0x628c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00627DF5: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x00627DF8: mov dword ptr [edi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00627DFB: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_BACKEDGE();
    goto L_00627CE5; /* 0x00627E02: jmp 0x627ce5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00627E07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627E07u);

L_00627E07:
    ecx = MEM32(ebp + (-0x18)); /* 0x00627E07: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_00419790); /* 0x00627E0A: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x00627E0F: push 0 */
    PUSH32(esp, 0); /* 0x00627E11: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00627E13: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00627E18u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00627E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627E20u);

L_00627E20:
    PUSH32(esp, ebp); /* 0x00627E20: push ebp */
    ebp = esp; /* 0x00627E21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627E23: push -1 */
    PUSH32(esp, 0x007B7E5Bu); /* 0x00627E25: push 0x7b7e5b */
    eax = MEM32(FS_BASE + (0)); /* 0x00627E2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00627E30: push eax */
    PUSH32(esp, ebx); /* 0x00627E31: push ebx */
    PUSH32(esp, esi); /* 0x00627E32: push esi */
    eax = MEM32(0x855000); /* 0x00627E33: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00627E38: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00627E3A: push eax */
    eax = ebp + (-0xC); /* 0x00627E3B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00627E3E: mov dword ptr fs:[0], eax */
    ebx = MEM32(ebp + 0x8); /* 0x00627E44: mov ebx, dword ptr [ebp + 8] */
    esi = ebx + 0x10; /* 0x00627E47: lea esi, [ebx + 0x10] */
    MEM32(ebp + 0x8) = esi; /* 0x00627E4A: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00627E4D: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x1C), 0x10u */ /* 0x00627E54: cmp dword ptr [esi + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00627E66; /* 0x00627E58: jb 0x627e66 */
L_00627E5A:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x00627E5A: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00627E5D: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00627E63: add esp, 4 */
    _flag_k = FK_ADD;
L_00627E66:
    MEM32(esi + 0x1C) = 0xFu; /* 0x00627E66: mov dword ptr [esi + 0x1c], 0xf */
    MEM32(esi + 0x18) = 0; /* 0x00627E6D: mov dword ptr [esi + 0x18], 0 */
    PUSH32(esp, ebx); /* 0x00627E74: push ebx */
    MEM8(esi + 0x8) = (uint8_t)(0); /* 0x00627E75: mov byte ptr [esi + 8], 0 */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00627E79: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00627E7F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x00627E82: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00627E85: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00627E8C: pop ecx */
    esi = POP32_VAL(esp); /* 0x00627E8D: pop esi */
    ebx = POP32_VAL(esp); /* 0x00627E8E: pop ebx */
    esp = ebp; /* 0x00627E8F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627E91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00627E92: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00627EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627EA0u);

L_00627EA0:
    PUSH32(esp, ebp); /* 0x00627EA0: push ebp */
    ebp = esp; /* 0x00627EA1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00627EA3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00627EA6: push ebx */
    ebx = ecx; /* 0x00627EA7: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x00627EA9: push esi */
    eax = MEM32(ebx + 0x4); /* 0x00627EAA: mov eax, dword ptr [ebx + 4] */
    esi = MEM32(ebx + 0x18); /* 0x00627EAD: mov esi, dword ptr [ebx + 0x18] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00627EB0: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00627EB4: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00627EB8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00627EB8: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x00627EBB: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = esi; /* 0x00627EC4: mov eax, esi */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00627EC6: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00627EC6: shr eax, 0x1f */
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x00627EC9: cvtpd2ps xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(esi); _xmm[0].u64[1] = 0; /* 0x00627ECD: movd xmm0, esi */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x00627ED1: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x00627ED5: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x00627EDE: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x00627EE2: divss xmm1, xmm0 */
    _flag_a = SSE_COMI(_xmm[1].f32[0], sse_f32(MEM32(ebx + 0x1C))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00627EE6: comiss xmm1, dword ptr [ebx + 0x1c] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00627F4E; /* 0x00627EEA: jbe 0x627f4e */
L_00627EEC:
    /* cmp esi, 0x200u */ /* 0x00627EEC: cmp esi, 0x200 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00627EF9; /* 0x00627EF2: jae 0x627ef9 */
L_00627EF4:
    if (3u) _cf = (((esi) >> 29) & 1u); /* 0x00627EF4: shl esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 3u; /* 0x00627EF4: shl esi, 3 */
    goto L_00627F03; /* 0x00627EF7: jmp 0x627f03 */
L_00627EF9:
    /* cmp esi, 0x1FFFFFFFu */ /* 0x00627EF9: cmp esi, 0x1fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00627F03; /* 0x00627EFF: jae 0x627f03 */
L_00627F01:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x00627F01: add esi, esi */
    _flag_k = FK_ADD;
L_00627F03:
    eax = MEM32(ebx); /* 0x00627F03: mov eax, dword ptr [ebx] */
    edx = ebp + (-0x4); /* 0x00627F05: lea edx, [ebp - 4] */
    PUSH32(esp, edi); /* 0x00627F08: push edi */
    PUSH32(esp, edx); /* 0x00627F09: push edx */
    ecx = ebx + 0x8; /* 0x00627F0A: lea ecx, [ebx + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x00627F0D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x00627F10: mov eax, dword ptr [ecx] */
    edx = esi + esi; /* 0x00627F12: lea edx, [esi + esi] */
    PUSH32(esp, edx); /* 0x00627F15: push edx */
    PUSH32(esp, eax); /* 0x00627F16: push eax */
    MEM32(ecx + 0x4) = eax; /* 0x00627F17: mov dword ptr [ecx + 4], eax */
    eax = ebp + (-0x8); /* 0x00627F1A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x00627F1D: push eax */
    RECOMP_CALL(sub_005C9F70); /* 0x00627F1E: call 0x5c9f70 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx); /* 0x00627F23: mov edi, dword ptr [ebx] */
    eax = esi + (-0x1); /* 0x00627F25: lea eax, [esi - 1] */
    MEM32(ebx + 0x14) = eax; /* 0x00627F28: mov dword ptr [ebx + 0x14], eax */
    MEM32(ebx + 0x18) = esi; /* 0x00627F2B: mov dword ptr [ebx + 0x18], esi */
    /* cmp MEM32(edi), edi */ /* 0x00627F2E: cmp dword ptr [edi], edi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00627F4D; /* 0x00627F30: je 0x627f4d */
L_00627F32:
    edi = MEM32(edi + 0x4); /* 0x00627F32: mov edi, dword ptr [edi + 4] */
L_00627F35:
    esi = MEM32(ebx); /* 0x00627F35: mov esi, dword ptr [ebx] */
    ecx = ebx; /* 0x00627F37: mov ecx, ebx */
    esi = MEM32(esi); /* 0x00627F39: mov esi, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x00627F3B: push esi */
    eax = esi + 0x8; /* 0x00627F3C: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x00627F3F: push eax */
    eax = ebp + (-0xC); /* 0x00627F40: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x00627F43: push eax */
    RECOMP_CALL(sub_00627980); /* 0x00627F44: call 0x627980 */
    RECOMP_FLAGS_IN();
    /* cmp esi, edi */ /* 0x00627F49: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00627F35; /* 0x00627F4B: jne 0x627f35 */
L_00627F4D:
    edi = POP32_VAL(esp); /* 0x00627F4D: pop edi */
L_00627F4E:
    esi = POP32_VAL(esp); /* 0x00627F4E: pop esi */
    ebx = POP32_VAL(esp); /* 0x00627F4F: pop ebx */
    esp = ebp; /* 0x00627F50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627F52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00627F53: ret  */
    RECOMP_REGS_OUT();
}

void sub_00627F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00627F60u);

L_00627F60:
    PUSH32(esp, ebp); /* 0x00627F60: push ebp */
    ebp = esp; /* 0x00627F61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627F63: push -1 */
    PUSH32(esp, 0x007B1D83u); /* 0x00627F65: push 0x7b1d83 */
    eax = MEM32(FS_BASE + (0)); /* 0x00627F6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00627F70: push eax */
    PUSH32(esp, ecx); /* 0x00627F71: push ecx */
    PUSH32(esp, esi); /* 0x00627F72: push esi */
    PUSH32(esp, edi); /* 0x00627F73: push edi */
    eax = MEM32(0x855000); /* 0x00627F74: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00627F79: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00627F7B: push eax */
    eax = ebp + (-0xC); /* 0x00627F7C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00627F7F: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x00627F85: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x00627F87: mov dword ptr [ebp - 0x10], edi */
    esi = MEM32(ebp + 0x8); /* 0x00627F8A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627F8D: push -1 */
    PUSH32(esp, 0); /* 0x00627F8F: push 0 */
    MEM32(edi + 0x14) = 0xFu; /* 0x00627F91: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x00627F98: mov dword ptr [edi + 0x10], 0 */
    PUSH32(esp, esi); /* 0x00627F9F: push esi */
    MEM8(edi) = (uint8_t)(0); /* 0x00627FA0: mov byte ptr [edi], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00627FA3: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00627FA8: mov dword ptr [ebp - 4], 0 */
    ecx = edi + 0x18; /* 0x00627FAF: lea ecx, [edi + 0x18] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00627FB2: push -1 */
    PUSH32(esp, 0); /* 0x00627FB4: push 0 */
    eax = esi + 0x18; /* 0x00627FB6: lea eax, [esi + 0x18] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00627FB9: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00627FC0: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x00627FC7: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x00627FC8: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x00627FCB: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00627FD0: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(esi + 0x30); /* 0x00627FD4: mov eax, dword ptr [esi + 0x30] */
    MEM32(edi + 0x30) = eax; /* 0x00627FD7: mov dword ptr [edi + 0x30], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00627FDA: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x00627FE1: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00627FE3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00627FE6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00627FED: pop ecx */
    edi = POP32_VAL(esp); /* 0x00627FEE: pop edi */
    esi = POP32_VAL(esp); /* 0x00627FEF: pop esi */
    esp = ebp; /* 0x00627FF0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00627FF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00627FF3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00628000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628000u);

L_00628000:
    PUSH32(esp, ebp); /* 0x00628000: push ebp */
    ebp = esp; /* 0x00628001: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00628003: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00628006: push esi */
    esi = ecx; /* 0x00628007: mov esi, ecx */
    MEM32(esi) = 0; /* 0x00628009: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x0062800F: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x00628016: mov dword ptr [esi + 8], 0 */
    /* test eax, eax */ /* 0x0062801D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00628028; /* 0x0062801F: jne 0x628028 */
L_00628021:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00628021: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x00628023: pop esi */
    ebp = POP32_VAL(esp); /* 0x00628024: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00628025: ret 4 */
L_00628028:
    /* cmp eax, 0x1FFFFFFFu */ /* 0x00628028: cmp eax, 0x1fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062803A; /* 0x0062802D: jbe 0x62803a */
L_0062802F:
    PUSH32(esp, 0x007DFAB0u); /* 0x0062802F: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00628034: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_0062803A:
    PUSH32(esp, edi); /* 0x0062803A: push edi */
    edi = eax * 8; /* 0x0062803B: lea edi, [eax*8] */
    PUSH32(esp, edi); /* 0x00628042: push edi */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00628043: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00628049: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0062804C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628062; /* 0x0062804E: je 0x628062 */
L_00628050:
    MEM32(esi) = eax; /* 0x00628050: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x00628052: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x00628055: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x00628057: mov dword ptr [esi + 8], eax */
    SET_LO8(eax, 1); /* 0x0062805A: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x0062805C: pop edi */
    esi = POP32_VAL(esp); /* 0x0062805D: pop esi */
    ebp = POP32_VAL(esp); /* 0x0062805E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062805F: ret 4 */
L_00628062:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x00628062: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00628068u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00628070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628070u);

L_00628070:
    PUSH32(esp, ebp); /* 0x00628070: push ebp */
    ebp = esp; /* 0x00628071: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00628073: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00628076: push esi */
    esi = ecx; /* 0x00628077: mov esi, ecx */
    MEM32(esi) = 0; /* 0x00628079: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x0062807F: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x00628086: mov dword ptr [esi + 8], 0 */
    /* test eax, eax */ /* 0x0062808D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00628098; /* 0x0062808F: jne 0x628098 */
L_00628091:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00628091: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x00628093: pop esi */
    ebp = POP32_VAL(esp); /* 0x00628094: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00628095: ret 4 */
L_00628098:
    /* cmp eax, 0x0CCCCCCCu */ /* 0x00628098: cmp eax, 0xccccccc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0CCCCCCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006280AA; /* 0x0062809D: jbe 0x6280aa */
L_0062809F:
    PUSH32(esp, 0x007DFAB0u); /* 0x0062809F: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x006280A4: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_006280AA:
    PUSH32(esp, edi); /* 0x006280AA: push edi */
    edi = eax + eax * 4; /* 0x006280AB: lea edi, [eax + eax*4] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x006280AE: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x006280AE: shl edi, 2 */
    PUSH32(esp, edi); /* 0x006280B1: push edi */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006280B2: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006280B8: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006280BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006280D1; /* 0x006280BD: je 0x6280d1 */
L_006280BF:
    MEM32(esi) = eax; /* 0x006280BF: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x006280C1: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x006280C4: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x006280C6: mov dword ptr [esi + 8], eax */
    SET_LO8(eax, 1); /* 0x006280C9: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x006280CB: pop edi */
    esi = POP32_VAL(esp); /* 0x006280CC: pop esi */
    ebp = POP32_VAL(esp); /* 0x006280CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006280CE: ret 4 */
L_006280D1:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x006280D1: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006280D7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006280E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006280E0u);

L_006280E0:
    PUSH32(esp, ebp); /* 0x006280E0: push ebp */
    ebp = esp; /* 0x006280E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006280E3: push -1 */
    PUSH32(esp, 0x007B7E8Bu); /* 0x006280E5: push 0x7b7e8b */
    eax = MEM32(FS_BASE + (0)); /* 0x006280EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006280F0: push eax */
    PUSH32(esp, ebx); /* 0x006280F1: push ebx */
    PUSH32(esp, esi); /* 0x006280F2: push esi */
    PUSH32(esp, edi); /* 0x006280F3: push edi */
    eax = MEM32(0x855000); /* 0x006280F4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006280F9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006280FB: push eax */
    eax = ebp + (-0xC); /* 0x006280FC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006280FF: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x00628105: mov edi, ecx */
    eax = MEM32(edi + 0x4); /* 0x00628107: mov eax, dword ptr [edi + 4] */
    ebx = MEM32(ebp + 0x18); /* 0x0062810A: mov ebx, dword ptr [ebp + 0x18] */
    /* cmp eax, 0x05555554u */ /* 0x0062810D: cmp eax, 0x5555554 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x05555554u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00628158; /* 0x00628112: jb 0x628158 */
L_00628114:
    esi = ebx + 0x10; /* 0x00628114: lea esi, [ebx + 0x10] */
    MEM32(ebp + 0xC) = esi; /* 0x00628117: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062811A: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x1C), 0x10u */ /* 0x00628121: cmp dword ptr [esi + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x00628125: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00628135; /* 0x0062812B: jb 0x628135 */
L_0062812D:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x0062812D: push dword ptr [esi + 8] */
    RECOMP_ICALL(edi); /* 0x00628130: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00628132: add esp, 4 */
    _flag_k = FK_ADD;
L_00628135:
    MEM32(esi + 0x1C) = 0xFu; /* 0x00628135: mov dword ptr [esi + 0x1c], 0xf */
    MEM32(esi + 0x18) = 0; /* 0x0062813C: mov dword ptr [esi + 0x18], 0 */
    PUSH32(esp, ebx); /* 0x00628143: push ebx */
    MEM8(esi + 0x8) = (uint8_t)(0); /* 0x00628144: mov byte ptr [esi + 8], 0 */
    RECOMP_ICALL(edi); /* 0x00628148: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062814A: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x007CD71Cu); /* 0x0062814D: push 0x7cd71c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x00628152: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_00628158:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00628158: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x4) = eax; /* 0x00628159: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x0062815C: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = eax; /* 0x0062815F: mov dword ptr [ebx + 4], eax */
    ecx = MEM32(edi); /* 0x00628162: mov ecx, dword ptr [edi] */
    /* cmp eax, ecx */ /* 0x00628164: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628176; /* 0x00628166: jne 0x628176 */
L_00628168:
    MEM32(ecx + 0x4) = ebx; /* 0x00628168: mov dword ptr [ecx + 4], ebx */
    eax = MEM32(edi); /* 0x0062816B: mov eax, dword ptr [edi] */
    MEM32(eax) = ebx; /* 0x0062816D: mov dword ptr [eax], ebx */
    eax = MEM32(edi); /* 0x0062816F: mov eax, dword ptr [edi] */
    MEM32(eax + 0x8) = ebx; /* 0x00628171: mov dword ptr [eax + 8], ebx */
    goto L_00628195; /* 0x00628174: jmp 0x628195 */
L_00628176:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x00628176: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00628188; /* 0x0062817A: je 0x628188 */
L_0062817C:
    MEM32(eax) = ebx; /* 0x0062817C: mov dword ptr [eax], ebx */
    ecx = MEM32(edi); /* 0x0062817E: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx) */ /* 0x00628180: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628195; /* 0x00628182: jne 0x628195 */
L_00628184:
    MEM32(ecx) = ebx; /* 0x00628184: mov dword ptr [ecx], ebx */
    goto L_00628195; /* 0x00628186: jmp 0x628195 */
L_00628188:
    MEM32(eax + 0x8) = ebx; /* 0x00628188: mov dword ptr [eax + 8], ebx */
    ecx = MEM32(edi); /* 0x0062818B: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x0062818D: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628195; /* 0x00628190: jne 0x628195 */
L_00628192:
    MEM32(ecx + 0x8) = ebx; /* 0x00628192: mov dword ptr [ecx + 8], ebx */
L_00628195:
    eax = MEM32(ebx + 0x4); /* 0x00628195: mov eax, dword ptr [ebx + 4] */
    esi = ebx; /* 0x00628198: mov esi, ebx */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x0062819A: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006282AE; /* 0x0062819E: jne 0x6282ae */
L_006281A4:
    eax = MEM32(esi + 0x4); /* 0x006281A4: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x4); /* 0x006281A7: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(edx); /* 0x006281AA: mov ecx, dword ptr [edx] */
    /* cmp eax, ecx */ /* 0x006281AC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628224; /* 0x006281AE: jne 0x628224 */
L_006281B0:
    ecx = MEM32(edx + 0x8); /* 0x006281B0: mov ecx, dword ptr [edx + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x006281B3: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062822A; /* 0x006281B7: je 0x62822a */
L_006281B9:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x006281B9: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006281C8; /* 0x006281BC: jne 0x6281c8 */
L_006281BE:
    esi = eax; /* 0x006281BE: mov esi, eax */
    ecx = edi; /* 0x006281C0: mov ecx, edi */
    PUSH32(esp, esi); /* 0x006281C2: push esi */
    RECOMP_CALL(sub_0040B6F0); /* 0x006281C3: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
L_006281C8:
    eax = MEM32(esi + 0x4); /* 0x006281C8: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x006281CB: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x006281CF: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x006281D2: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x006281D5: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x006281D9: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x006281DC: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx); /* 0x006281DF: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x8); /* 0x006281E1: mov eax, dword ptr [edx + 8] */
    MEM32(ecx) = eax; /* 0x006281E4: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x8); /* 0x006281E6: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x006281E9: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006281F2; /* 0x006281ED: jne 0x6281f2 */
L_006281EF:
    MEM32(eax + 0x4) = ecx; /* 0x006281EF: mov dword ptr [eax + 4], ecx */
L_006281F2:
    eax = MEM32(ecx + 0x4); /* 0x006281F2: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x006281F5: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x006281F8: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x006281FA: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062820A; /* 0x006281FD: jne 0x62820a */
L_006281FF:
    MEM32(eax + 0x4) = edx; /* 0x006281FF: mov dword ptr [eax + 4], edx */
    MEM32(edx + 0x8) = ecx; /* 0x00628202: mov dword ptr [edx + 8], ecx */
    goto L_0062829E; /* 0x00628205: jmp 0x62829e */
L_0062820A:
    eax = MEM32(ecx + 0x4); /* 0x0062820A: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x0062820D: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062821D; /* 0x00628210: jne 0x62821d */
L_00628212:
    MEM32(eax + 0x8) = edx; /* 0x00628212: mov dword ptr [eax + 8], edx */
    MEM32(edx + 0x8) = ecx; /* 0x00628215: mov dword ptr [edx + 8], ecx */
    goto L_0062829E; /* 0x00628218: jmp 0x62829e */
L_0062821D:
    MEM32(eax) = edx; /* 0x0062821D: mov dword ptr [eax], edx */
    MEM32(edx + 0x8) = ecx; /* 0x0062821F: mov dword ptr [edx + 8], ecx */
    goto L_0062829E; /* 0x00628222: jmp 0x62829e */
L_00628224:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x00628224: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628244; /* 0x00628228: jne 0x628244 */
L_0062822A:
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x0062822A: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x0062822E: mov byte ptr [ecx + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x00628232: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x00628235: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x00628238: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x0062823C: mov eax, dword ptr [esi + 4] */
    esi = MEM32(eax + 0x4); /* 0x0062823F: mov esi, dword ptr [eax + 4] */
    goto L_006282A1; /* 0x00628242: jmp 0x6282a1 */
L_00628244:
    /* cmp esi, MEM32(eax) */ /* 0x00628244: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628252; /* 0x00628246: jne 0x628252 */
L_00628248:
    esi = eax; /* 0x00628248: mov esi, eax */
    ecx = edi; /* 0x0062824A: mov ecx, edi */
    PUSH32(esp, esi); /* 0x0062824C: push esi */
    RECOMP_CALL(sub_0040B750); /* 0x0062824D: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_00628252:
    eax = MEM32(esi + 0x4); /* 0x00628252: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x00628255: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x00628259: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x0062825C: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x0062825F: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x00628263: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x00628266: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx + 0x8); /* 0x00628269: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(edx); /* 0x0062826C: mov eax, dword ptr [edx] */
    MEM32(ecx + 0x8) = eax; /* 0x0062826E: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx); /* 0x00628271: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00628273: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062827C; /* 0x00628277: jne 0x62827c */
L_00628279:
    MEM32(eax + 0x4) = ecx; /* 0x00628279: mov dword ptr [eax + 4], ecx */
L_0062827C:
    eax = MEM32(ecx + 0x4); /* 0x0062827C: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x0062827F: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x00628282: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x00628284: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062828E; /* 0x00628287: jne 0x62828e */
L_00628289:
    MEM32(eax + 0x4) = edx; /* 0x00628289: mov dword ptr [eax + 4], edx */
    goto L_0062829C; /* 0x0062828C: jmp 0x62829c */
L_0062828E:
    eax = MEM32(ecx + 0x4); /* 0x0062828E: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax) */ /* 0x00628291: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628299; /* 0x00628293: jne 0x628299 */
L_00628295:
    MEM32(eax) = edx; /* 0x00628295: mov dword ptr [eax], edx */
    goto L_0062829C; /* 0x00628297: jmp 0x62829c */
L_00628299:
    MEM32(eax + 0x8) = edx; /* 0x00628299: mov dword ptr [eax + 8], edx */
L_0062829C:
    MEM32(edx) = ecx; /* 0x0062829C: mov dword ptr [edx], ecx */
L_0062829E:
    MEM32(ecx + 0x4) = edx; /* 0x0062829E: mov dword ptr [ecx + 4], edx */
L_006282A1:
    eax = MEM32(esi + 0x4); /* 0x006282A1: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x006282A4: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006281A4; /* 0x006282A8: je 0x6281a4 */
L_006282AE:
    eax = MEM32(edi); /* 0x006282AE: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x4); /* 0x006282B0: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x006282B3: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(ebp + 0x8); /* 0x006282B7: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ebx; /* 0x006282BA: mov dword ptr [eax], ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x006282BC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006282BF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006282C6: pop ecx */
    edi = POP32_VAL(esp); /* 0x006282C7: pop edi */
    esi = POP32_VAL(esp); /* 0x006282C8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006282C9: pop ebx */
    esp = ebp; /* 0x006282CA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006282CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x006282CD: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_006282D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006282D0u);

L_006282D0:
    PUSH32(esp, ebp); /* 0x006282D0: push ebp */
    ebp = esp; /* 0x006282D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006282D3: push -1 */
    PUSH32(esp, 0x007B7EB0u); /* 0x006282D5: push 0x7b7eb0 */
    eax = MEM32(FS_BASE + (0)); /* 0x006282DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006282E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006282E1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006282E4: push ebx */
    PUSH32(esp, esi); /* 0x006282E5: push esi */
    PUSH32(esp, edi); /* 0x006282E6: push edi */
    eax = MEM32(0x855000); /* 0x006282E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006282EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006282EE: push eax */
    eax = ebp + (-0xC); /* 0x006282EF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006282F2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006282F8: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x18)) = ecx; /* 0x006282FB: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x006282FE: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ecx); /* 0x00628305: mov edi, dword ptr [ecx] */
    esi = MEM32(edi + 0x4); /* 0x00628307: mov esi, dword ptr [edi + 4] */
    SET_LO8(eax, 1); /* 0x0062830A: mov al, 1 */
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x0062830C: mov byte ptr [ebp - 0x14], al */
    ebx = MEM32(ebp + 0x10); /* 0x0062830F: mov ebx, dword ptr [ebp + 0x10] */
L_00628312:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x00628312: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628348; /* 0x00628316: jne 0x628348 */
L_00628318:
    edi = esi; /* 0x00628318: mov edi, esi */
    eax = esi + 0x10; /* 0x0062831A: lea eax, [esi + 0x10] */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x0062831D: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00628331; /* 0x00628321: je 0x628331 */
L_00628323:
    PUSH32(esp, ebx); /* 0x00628323: push ebx */
    PUSH32(esp, eax); /* 0x00628324: push eax */
    RECOMP_CALL(sub_00625BA0); /* 0x00628325: call 0x625ba0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0062832A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x0062832C: sete al */
    goto L_00628338; /* 0x0062832F: jmp 0x628338 */
L_00628331:
    PUSH32(esp, eax); /* 0x00628331: push eax */
    PUSH32(esp, ebx); /* 0x00628332: push ebx */
    RECOMP_CALL(sub_00625BA0); /* 0x00628333: call 0x625ba0 */
    RECOMP_FLAGS_IN();
L_00628338:
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x00628338: mov byte ptr [ebp - 0x14], al */
    /* test LO8(eax), LO8(eax) */ /* 0x0062833B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628343; /* 0x0062833D: je 0x628343 */
L_0062833F:
    esi = MEM32(esi); /* 0x0062833F: mov esi, dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_00628312; /* 0x00628341: jmp 0x628312 */
L_00628343:
    esi = MEM32(esi + 0x8); /* 0x00628343: mov esi, dword ptr [esi + 8] */
    RECOMP_BACKEDGE();
    goto L_00628312; /* 0x00628346: jmp 0x628312 */
L_00628348:
    esi = edi; /* 0x00628348: mov esi, edi */
    MEM32(ebp + 0xC) = esi; /* 0x0062834A: mov dword ptr [ebp + 0xc], esi */
    /* test LO8(eax), LO8(eax) */ /* 0x0062834D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628394; /* 0x0062834F: je 0x628394 */
L_00628351:
    ecx = MEM32(ebp + (-0x18)); /* 0x00628351: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x00628354: mov eax, dword ptr [ecx] */
    /* cmp edi, MEM32(eax) */ /* 0x00628356: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628389; /* 0x00628358: jne 0x628389 */
L_0062835A:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0062835A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x0062835D: push ecx */
    PUSH32(esp, edi); /* 0x0062835E: push edi */
    PUSH32(esp, 1); /* 0x0062835F: push 1 */
L_00628361:
    eax = ebp + 0xC; /* 0x00628361: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x00628364: push eax */
    RECOMP_CALL(sub_006280E0); /* 0x00628365: call 0x6280e0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x0062836A: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x0062836C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x0062836F: mov dword ptr [eax], ecx */
    MEM8(eax + 0x4) = (uint8_t)(1); /* 0x00628371: mov byte ptr [eax + 4], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628375: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628378: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062837F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628380: pop edi */
    esi = POP32_VAL(esp); /* 0x00628381: pop esi */
    ebx = POP32_VAL(esp); /* 0x00628382: pop ebx */
    esp = ebp; /* 0x00628383: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628385: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00628386: ret 0x10 */
L_00628389:
    ecx = ebp + 0xC; /* 0x00628389: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_0041B310); /* 0x0062838C: call 0x41b310 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x00628391: mov esi, dword ptr [ebp + 0xc] */
L_00628394:
    PUSH32(esp, ebx); /* 0x00628394: push ebx */
    eax = esi + 0x10; /* 0x00628395: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x00628398: push eax */
    RECOMP_CALL(sub_00625BA0); /* 0x00628399: call 0x625ba0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0062839E: push dword ptr [ebp + 0x14] */
    /* test LO8(eax), LO8(eax) */ /* 0x006283A1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006283AF; /* 0x006283A3: je 0x6283af */
L_006283A5:
    PUSH32(esp, ecx); /* 0x006283A5: push ecx */
    PUSH32(esp, edi); /* 0x006283A6: push edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x006283A7: push dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x18)); /* 0x006283AA: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_00628361; /* 0x006283AD: jmp 0x628361 */
L_006283AF:
    RECOMP_CALL(sub_00627E20); /* 0x006283AF: call 0x627e20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x006283B4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x006283B7: mov dword ptr [eax], esi */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x006283B9: mov byte ptr [eax + 4], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006283BD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006283C0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006283C7: pop ecx */
    edi = POP32_VAL(esp); /* 0x006283C8: pop edi */
    esi = POP32_VAL(esp); /* 0x006283C9: pop esi */
    ebx = POP32_VAL(esp); /* 0x006283CA: pop ebx */
    esp = ebp; /* 0x006283CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006283CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006283CE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_006283D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006283D1u);

L_006283D1:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x006283D1: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_00627E20); /* 0x006283D4: call 0x627e20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006283D9: push 0 */
    PUSH32(esp, 0); /* 0x006283DB: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006283DD: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006283E2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006283F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006283F0u);

L_006283F0:
    PUSH32(esp, ebp); /* 0x006283F0: push ebp */
    ebp = esp; /* 0x006283F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006283F3: push -1 */
    PUSH32(esp, 0x007B7ED5u); /* 0x006283F5: push 0x7b7ed5 */
    eax = MEM32(FS_BASE + (0)); /* 0x006283FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628400: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00628401: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00628404: push ebx */
    PUSH32(esp, esi); /* 0x00628405: push esi */
    PUSH32(esp, edi); /* 0x00628406: push edi */
    eax = MEM32(0x855000); /* 0x00628407: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062840C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062840E: push eax */
    eax = ebp + (-0xC); /* 0x0062840F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00628412: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00628418: mov dword ptr [ebp - 0x10], esp */
    edi = edx; /* 0x0062841B: mov edi, edx */
    esi = ecx; /* 0x0062841D: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x0062841F: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x18)) = esi; /* 0x00628422: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x00628425: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x0062842C: lea esp, [esp] */
L_00628430:
    /* test edi, edi */ /* 0x00628430: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628456; /* 0x00628432: je 0x628456 */
L_00628434:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00628434: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x00628438: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628443; /* 0x0062843A: je 0x628443 */
L_0062843C:
    ecx = esi; /* 0x0062843C: mov ecx, esi */
    RECOMP_CALL(sub_00622D60); /* 0x0062843E: call 0x622d60 */
    RECOMP_FLAGS_IN();
L_00628443:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00628443: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00628447: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1C)) = edi; /* 0x00628448: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x0062844B: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = esi; /* 0x00628451: mov dword ptr [ebp - 0x14], esi */
    RECOMP_BACKEDGE();
    goto L_00628430; /* 0x00628454: jmp 0x628430 */
L_00628456:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628456: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062845D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628460: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00628467: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628468: pop edi */
    esi = POP32_VAL(esp); /* 0x00628469: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062846A: pop ebx */
    esp = ebp; /* 0x0062846B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062846D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062846E: ret  */
    RECOMP_REGS_OUT();
}

void sub_0062846F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062846Fu);

L_0062846F:
    esi = MEM32(ebp + (-0x18)); /* 0x0062846F: mov esi, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x14)); /* 0x00628472: mov edi, dword ptr [ebp - 0x14] */
    /* cmp esi, edi */ /* 0x00628475: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00628491; /* 0x00628477: je 0x628491 */
L_00628479:
    esp = esp; /* 0x00628479: lea esp, [esp] */
L_00628480:
    ecx = esi; /* 0x00628480: mov ecx, esi */
    RECOMP_CALL(sub_0061F180); /* 0x00628482: call 0x61f180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x00628487: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x0062848D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628480; /* 0x0062848F: jne 0x628480 */
L_00628491:
    PUSH32(esp, 0); /* 0x00628491: push 0 */
    PUSH32(esp, 0); /* 0x00628493: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00628495: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0062849Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006284A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006284A0u);

L_006284A0:
    PUSH32(esp, ebp); /* 0x006284A0: push ebp */
    ebp = esp; /* 0x006284A1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006284A3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006284A6: push esi */
    esi = edx; /* 0x006284A7: mov esi, edx */
    /* cmp ecx, esi */ /* 0x006284A9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006284C4; /* 0x006284AB: je 0x6284c4 */
L_006284AD:
    ecx = ecx; /* 0x006284AD: lea ecx, [ecx] */
L_006284B0:
    edx = MEM32(ecx); /* 0x006284B0: mov edx, dword ptr [ecx] */
    MEM32(eax) = edx; /* 0x006284B2: mov dword ptr [eax], edx */
    edx = MEM32(ecx + 0x4); /* 0x006284B4: mov edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x006284B7: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x4) = edx; /* 0x006284BA: mov dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x006284BD: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x006284C0: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006284B0; /* 0x006284C2: jne 0x6284b0 */
L_006284C4:
    esi = POP32_VAL(esp); /* 0x006284C4: pop esi */
    ebp = POP32_VAL(esp); /* 0x006284C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006284C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_006284D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006284D0u);

L_006284D0:
    PUSH32(esp, ebp); /* 0x006284D0: push ebp */
    ebp = esp; /* 0x006284D1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006284D3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006284D6: push esi */
    esi = edx; /* 0x006284D7: mov esi, edx */
    /* cmp ecx, esi */ /* 0x006284D9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006284F8; /* 0x006284DB: je 0x6284f8 */
L_006284DD:
    ecx = ecx; /* 0x006284DD: lea ecx, [ecx] */
L_006284E0:
    _xmm[0] = xmm_ld(ecx); /* 0x006284E0: movdqu xmm0, xmmword ptr [ecx] */
    xmm_st(eax, _xmm[0]); /* 0x006284E4: movdqu xmmword ptr [eax], xmm0 */
    edx = MEM32(ecx + 0x10); /* 0x006284E8: mov edx, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x006284EB: add ecx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x10) = edx; /* 0x006284EE: mov dword ptr [eax + 0x10], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x006284F1: add eax, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x006284F4: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006284E0; /* 0x006284F6: jne 0x6284e0 */
L_006284F8:
    esi = POP32_VAL(esp); /* 0x006284F8: pop esi */
    ebp = POP32_VAL(esp); /* 0x006284F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006284FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_00628500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628500u);

L_00628500:
    PUSH32(esp, ebp); /* 0x00628500: push ebp */
    ebp = esp; /* 0x00628501: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00628503: push ebx */
    PUSH32(esp, esi); /* 0x00628504: push esi */
    PUSH32(esp, edi); /* 0x00628505: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00628506: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x00628509: mov ebx, ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0062850B: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x0062850E: mov eax, dword ptr [edi] */
    esi = MEM32(ebx); /* 0x00628510: mov esi, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x00628512: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x00628513: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_00628EA0); /* 0x00628516: call 0x628ea0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x0062851B: mov dword ptr [esi + 4], eax */
    edx = MEM32(ebx); /* 0x0062851E: mov edx, dword ptr [ebx] */
    eax = MEM32(edi + 0x4); /* 0x00628520: mov eax, dword ptr [edi + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x00628523: mov dword ptr [ebx + 4], eax */
    ecx = MEM32(edx + 0x4); /* 0x00628526: mov ecx, dword ptr [edx + 4] */
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x00628529: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628566; /* 0x0062852D: jne 0x628566 */
L_0062852F:
    eax = MEM32(ecx); /* 0x0062852F: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00628531: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628541; /* 0x00628535: jne 0x628541 */
L_00628537:
    ecx = eax; /* 0x00628537: mov ecx, eax */
    eax = MEM32(ecx); /* 0x00628539: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0062853B: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00628537; /* 0x0062853F: je 0x628537 */
L_00628541:
    MEM32(edx) = ecx; /* 0x00628541: mov dword ptr [edx], ecx */
    edx = MEM32(ebx); /* 0x00628543: mov edx, dword ptr [ebx] */
    ecx = MEM32(edx + 0x4); /* 0x00628545: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(ecx + 0x8); /* 0x00628548: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x0062854B: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062855C; /* 0x0062854F: jne 0x62855c */
L_00628551:
    ecx = eax; /* 0x00628551: mov ecx, eax */
    eax = MEM32(ecx + 0x8); /* 0x00628553: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x00628556: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00628551; /* 0x0062855A: je 0x628551 */
L_0062855C:
    edi = POP32_VAL(esp); /* 0x0062855C: pop edi */
    esi = POP32_VAL(esp); /* 0x0062855D: pop esi */
    MEM32(edx + 0x8) = ecx; /* 0x0062855E: mov dword ptr [edx + 8], ecx */
    ebx = POP32_VAL(esp); /* 0x00628561: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00628562: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00628563: ret 8 */
L_00628566:
    MEM32(edx) = edx; /* 0x00628566: mov dword ptr [edx], edx */
    eax = MEM32(ebx); /* 0x00628568: mov eax, dword ptr [ebx] */
    edi = POP32_VAL(esp); /* 0x0062856A: pop edi */
    esi = POP32_VAL(esp); /* 0x0062856B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062856C: pop ebx */
    MEM32(eax + 0x8) = eax; /* 0x0062856D: mov dword ptr [eax + 8], eax */
    ebp = POP32_VAL(esp); /* 0x00628570: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00628571: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00628580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628580u);

L_00628580:
    PUSH32(esp, ebp); /* 0x00628580: push ebp */
    ebp = esp; /* 0x00628581: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628583: push -1 */
    PUSH32(esp, 0x007B7F27u); /* 0x00628585: push 0x7b7f27 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062858A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628590: push eax */
    PUSH32(esp, ecx); /* 0x00628591: push ecx */
    PUSH32(esp, ebx); /* 0x00628592: push ebx */
    PUSH32(esp, esi); /* 0x00628593: push esi */
    PUSH32(esp, edi); /* 0x00628594: push edi */
    eax = MEM32(0x855000); /* 0x00628595: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062859A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062859C: push eax */
    eax = ebp + (-0xC); /* 0x0062859D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006285A0: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x006285A6: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x006285A8: mov dword ptr [ebp - 0x10], edi */
    ebx = MEM32(ebp + 0x8); /* 0x006285AB: mov ebx, dword ptr [ebp + 8] */
    ecx = edi + 0x8; /* 0x006285AE: lea ecx, [edi + 8] */
    eax = MEM32(ebx); /* 0x006285B1: mov eax, dword ptr [ebx] */
    MEM32(edi) = eax; /* 0x006285B3: mov dword ptr [edi], eax */
    eax = MEM32(ebx + 0x4); /* 0x006285B5: mov eax, dword ptr [ebx + 4] */
    MEM32(edi + 0x4) = eax; /* 0x006285B8: mov dword ptr [edi + 4], eax */
    eax = ebx + 0x8; /* 0x006285BB: lea eax, [ebx + 8] */
    PUSH32(esp, eax); /* 0x006285BE: push eax */
    RECOMP_CALL(sub_00628720); /* 0x006285BF: call 0x628720 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x006285C4: mov dword ptr [ebp - 4], 0 */
    eax = ebx + 0x14; /* 0x006285CB: lea eax, [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x006285CE: push eax */
    ecx = edi + 0x14; /* 0x006285CF: lea ecx, [edi + 0x14] */
    RECOMP_CALL(sub_006287D0); /* 0x006285D2: call 0x6287d0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006285D7: mov byte ptr [ebp - 4], 1 */
    ecx = edi + 0x30; /* 0x006285DB: lea ecx, [edi + 0x30] */
    eax = MEM32(ebx + 0x20); /* 0x006285DE: mov eax, dword ptr [ebx + 0x20] */
    MEM32(edi + 0x20) = eax; /* 0x006285E1: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(ebx + 0x24); /* 0x006285E4: mov eax, dword ptr [ebx + 0x24] */
    MEM32(edi + 0x24) = eax; /* 0x006285E7: mov dword ptr [edi + 0x24], eax */
    eax = MEM32(ebx + 0x28); /* 0x006285EA: mov eax, dword ptr [ebx + 0x28] */
    MEM32(edi + 0x28) = eax; /* 0x006285ED: mov dword ptr [edi + 0x28], eax */
    eax = (uint32_t)MEM8(ebx + 0x2C); /* 0x006285F0: movzx eax, byte ptr [ebx + 0x2c] */
    MEM8(edi + 0x2C) = (uint8_t)(LO8(eax)); /* 0x006285F4: mov byte ptr [edi + 0x2c], al */
    eax = ebx + 0x30; /* 0x006285F7: lea eax, [ebx + 0x30] */
    PUSH32(esp, eax); /* 0x006285FA: push eax */
    RECOMP_CALL(sub_00628660); /* 0x006285FB: call 0x628660 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00628600: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x78u; /* 0x00628604: add edi, 0x78 */
    _flag_k = FK_ADD;
    esi = ebx + 0x78; /* 0x00628607: lea esi, [ebx + 0x78] */
    ecx = 0x54u; /* 0x0062860A: mov ecx, 0x54 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x0062860F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x10)); /* 0x00628611: mov esi, dword ptr [ebp - 0x10] */
    eax = (uint32_t)MEM8(ebx + 0x1C8); /* 0x00628614: movzx eax, byte ptr [ebx + 0x1c8] */
    ecx = esi + 0x1CC; /* 0x0062861B: lea ecx, [esi + 0x1cc] */
    MEM8(esi + 0x1C8) = (uint8_t)(LO8(eax)); /* 0x00628621: mov byte ptr [esi + 0x1c8], al */
    PUSH32(esp, ecx); /* 0x00628627: push ecx */
    eax = ebx + 0x1CC; /* 0x00628628: lea eax, [ebx + 0x1cc] */
    MEM32(ebp + 0x8) = ecx; /* 0x0062862E: mov dword ptr [ebp + 8], ecx */
    PUSH32(esp, eax); /* 0x00628631: push eax */
    RECOMP_CALL(sub_00628890); /* 0x00628632: call 0x628890 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628637: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0062863E: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628640: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628643: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062864A: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062864B: pop edi */
    esi = POP32_VAL(esp); /* 0x0062864C: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062864D: pop ebx */
    esp = ebp; /* 0x0062864E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628650: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00628651: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00628660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628660u);

L_00628660:
    PUSH32(esp, ebp); /* 0x00628660: push ebp */
    ebp = esp; /* 0x00628661: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628663: push -1 */
    PUSH32(esp, 0x007B7F66u); /* 0x00628665: push 0x7b7f66 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062866A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628670: push eax */
    PUSH32(esp, ecx); /* 0x00628671: push ecx */
    PUSH32(esp, esi); /* 0x00628672: push esi */
    PUSH32(esp, edi); /* 0x00628673: push edi */
    eax = MEM32(0x855000); /* 0x00628674: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00628679: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062867B: push eax */
    eax = ebp + (-0xC); /* 0x0062867C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062867F: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x00628685: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x00628687: mov dword ptr [ebp - 0x10], edi */
    esi = MEM32(ebp + 0x8); /* 0x0062868A: mov esi, dword ptr [ebp + 8] */
    ecx = edi + 0x14; /* 0x0062868D: lea ecx, [edi + 0x14] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628690: push -1 */
    PUSH32(esp, 0); /* 0x00628692: push 0 */
    eax = MEM32(esi); /* 0x00628694: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x00628696: mov dword ptr [edi], eax */
    eax = MEM32(esi + 0x4); /* 0x00628698: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0x4) = eax; /* 0x0062869B: mov dword ptr [edi + 4], eax */
    eax = MEM32(esi + 0x8); /* 0x0062869E: mov eax, dword ptr [esi + 8] */
    MEM32(edi + 0x8) = eax; /* 0x006286A1: mov dword ptr [edi + 8], eax */
    eax = MEM32(esi + 0xC); /* 0x006286A4: mov eax, dword ptr [esi + 0xc] */
    MEM32(edi + 0xC) = eax; /* 0x006286A7: mov dword ptr [edi + 0xc], eax */
    SET_LO8(eax, MEM8(esi + 0x10)); /* 0x006286AA: mov al, byte ptr [esi + 0x10] */
    MEM8(edi + 0x10) = (uint8_t)(LO8(eax)); /* 0x006286AD: mov byte ptr [edi + 0x10], al */
    eax = esi + 0x14; /* 0x006286B0: lea eax, [esi + 0x14] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x006286B3: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x006286BA: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x006286C1: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x006286C2: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x006286C5: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x006286CA: mov dword ptr [ebp - 4], 0 */
    ecx = edi + 0x2C; /* 0x006286D1: lea ecx, [edi + 0x2c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006286D4: push -1 */
    PUSH32(esp, 0); /* 0x006286D6: push 0 */
    eax = esi + 0x2C; /* 0x006286D8: lea eax, [esi + 0x2c] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x006286DB: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x006286E2: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x006286E9: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x006286EA: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x006286ED: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006286F2: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(esi + 0x44); /* 0x006286F6: mov eax, dword ptr [esi + 0x44] */
    MEM32(edi + 0x44) = eax; /* 0x006286F9: mov dword ptr [edi + 0x44], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006286FC: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x00628703: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628705: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628708: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062870F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628710: pop edi */
    esi = POP32_VAL(esp); /* 0x00628711: pop esi */
    esp = ebp; /* 0x00628712: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628714: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00628715: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00628720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628720u);

L_00628720:
    PUSH32(esp, ebp); /* 0x00628720: push ebp */
    ebp = esp; /* 0x00628721: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628723: push -1 */
    PUSH32(esp, 0x007B7F90u); /* 0x00628725: push 0x7b7f90 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062872A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628730: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00628731: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00628734: push ebx */
    PUSH32(esp, esi); /* 0x00628735: push esi */
    PUSH32(esp, edi); /* 0x00628736: push edi */
    eax = MEM32(0x855000); /* 0x00628737: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062873C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062873E: push eax */
    eax = ebp + (-0xC); /* 0x0062873F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00628742: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00628748: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x0062874B: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x0062874D: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0; /* 0x00628750: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x00628756: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x0062875D: mov dword ptr [esi + 8], 0 */
    edi = MEM32(ebp + 0x8); /* 0x00628764: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x4); /* 0x00628767: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x0062876A: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x0062876C: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    PUSH32(esp, eax); /* 0x0062876F: push eax */
    RECOMP_CALL(sub_00628000); /* 0x00628770: call 0x628000 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00628775: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062879D; /* 0x00628777: je 0x62879d */
L_00628779:
    MEM32(ebp + (-0x4)) = 0; /* 0x00628779: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00628780: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00628783: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x00628784: push dword ptr [esi] */
    edx = MEM32(edi + 0x4); /* 0x00628786: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x00628789: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_006292A0); /* 0x0062878B: call 0x6292a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00628790: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x00628793: mov dword ptr [esi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628796: mov dword ptr [ebp - 4], 0xffffffff */
L_0062879D:
    eax = esi; /* 0x0062879D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062879F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006287A2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006287A9: pop ecx */
    edi = POP32_VAL(esp); /* 0x006287AA: pop edi */
    esi = POP32_VAL(esp); /* 0x006287AB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006287AC: pop ebx */
    esp = ebp; /* 0x006287AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006287AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006287B0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006287B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006287B3u);

L_006287B3:
    ecx = MEM32(ebp + (-0x14)); /* 0x006287B3: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00419790); /* 0x006287B6: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006287BB: push 0 */
    PUSH32(esp, 0); /* 0x006287BD: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006287BF: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006287C4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006287D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006287D0u);

L_006287D0:
    PUSH32(esp, ebp); /* 0x006287D0: push ebp */
    ebp = esp; /* 0x006287D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006287D3: push -1 */
    PUSH32(esp, 0x007B7FB0u); /* 0x006287D5: push 0x7b7fb0 */
    eax = MEM32(FS_BASE + (0)); /* 0x006287DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006287E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006287E1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006287E4: push ebx */
    PUSH32(esp, esi); /* 0x006287E5: push esi */
    PUSH32(esp, edi); /* 0x006287E6: push edi */
    eax = MEM32(0x855000); /* 0x006287E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006287EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006287EE: push eax */
    eax = ebp + (-0xC); /* 0x006287EF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006287F2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006287F8: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x006287FB: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x006287FD: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0; /* 0x00628800: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x00628806: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x0062880D: mov dword ptr [esi + 8], 0 */
    edi = MEM32(ebp + 0x8); /* 0x00628814: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(edi + 0x4); /* 0x00628817: mov edx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi); /* 0x0062881A: sub edx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x0062881C: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x00628821: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00628823: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x00628826: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00628828: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00628828: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0062882B: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0062882D: push eax */
    RECOMP_CALL(sub_00628070); /* 0x0062882E: call 0x628070 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00628833: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062885B; /* 0x00628835: je 0x62885b */
L_00628837:
    MEM32(ebp + (-0x4)) = 0; /* 0x00628837: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0062883E: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00628841: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x00628842: push dword ptr [esi] */
    edx = MEM32(edi + 0x4); /* 0x00628844: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x00628847: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_00629320); /* 0x00628849: call 0x629320 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062884E: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x00628851: mov dword ptr [esi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628854: mov dword ptr [ebp - 4], 0xffffffff */
L_0062885B:
    eax = esi; /* 0x0062885B: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062885D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628860: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00628867: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628868: pop edi */
    esi = POP32_VAL(esp); /* 0x00628869: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062886A: pop ebx */
    esp = ebp; /* 0x0062886B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062886D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062886E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00628871(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628871u);

L_00628871:
    ecx = MEM32(ebp + (-0x14)); /* 0x00628871: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00419790); /* 0x00628874: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x00628879: push 0 */
    PUSH32(esp, 0); /* 0x0062887B: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0062887D: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00628882u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00628890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628890u);

L_00628890:
    PUSH32(esp, ebp); /* 0x00628890: push ebp */
    ebp = esp; /* 0x00628891: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628893: push -1 */
    PUSH32(esp, 0x007B7FE8u); /* 0x00628895: push 0x7b7fe8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062889A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006288A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006288A1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006288A4: push ebx */
    PUSH32(esp, esi); /* 0x006288A5: push esi */
    PUSH32(esp, edi); /* 0x006288A6: push edi */
    eax = MEM32(0x855000); /* 0x006288A7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006288AC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006288AE: push eax */
    eax = ebp + (-0xC); /* 0x006288AF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006288B2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006288B8: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x006288BB: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x006288BD: mov dword ptr [ebp - 0x18], esi */
    MEM32(esi) = 0; /* 0x006288C0: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x006288C6: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_005ED4A0); /* 0x006288CD: call 0x5ed4a0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x006288D2: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 2; /* 0x006288D4: mov dword ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006288DB: mov byte ptr [ebp - 4], 3 */
    MEM8(ebp + (-0x14)) = (uint8_t)(0); /* 0x006288DF: mov byte ptr [ebp - 0x14], 0 */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x006288E3: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006288E6: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x006288E9: mov ecx, esi */
    RECOMP_CALL(sub_00628500); /* 0x006288EB: call 0x628500 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006288F0: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x006288F7: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006288F9: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006288FC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00628903: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628904: pop edi */
    esi = POP32_VAL(esp); /* 0x00628905: pop esi */
    ebx = POP32_VAL(esp); /* 0x00628906: pop ebx */
    esp = ebp; /* 0x00628907: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628909: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0062890A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0062890D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062890Du);

L_0062890D:
    ecx = MEM32(ebp + (-0x18)); /* 0x0062890D: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x00628910: mov eax, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x00628912: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x00628913: push dword ptr [eax] */
    eax = ebp + 0x8; /* 0x00628915: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00628918: push eax */
    RECOMP_CALL(sub_00626180); /* 0x00628919: call 0x626180 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x0062891E: push 0 */
    PUSH32(esp, 0); /* 0x00628920: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00628922: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00628927u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00628930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628930u);

L_00628930:
    PUSH32(esp, ebp); /* 0x00628930: push ebp */
    ebp = esp; /* 0x00628931: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628933: push -1 */
    PUSH32(esp, 0x007B8015u); /* 0x00628935: push 0x7b8015 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062893A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628940: push eax */
    PUSH32(esp, ecx); /* 0x00628941: push ecx */
    PUSH32(esp, ebx); /* 0x00628942: push ebx */
    PUSH32(esp, esi); /* 0x00628943: push esi */
    PUSH32(esp, edi); /* 0x00628944: push edi */
    eax = MEM32(0x855000); /* 0x00628945: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062894A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062894C: push eax */
    eax = ebp + (-0xC); /* 0x0062894D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00628950: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00628956: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00628959: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0062895C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0046EE50); /* 0x0062895F: call 0x46ee50 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00628964: mov ecx, eax */
    MEM32(ebp + 0xC) = ecx; /* 0x00628966: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x00628969: mov dword ptr [ebp - 4], 0 */
    edx = ecx + 0x8; /* 0x00628970: lea edx, [ecx + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00628973: mov byte ptr [ebp - 4], 1 */
    /* test edx, edx */ /* 0x00628977: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062898B; /* 0x00628979: je 0x62898b */
L_0062897B:
    eax = MEM32(ebp + 0x14); /* 0x0062897B: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x0062897E: mov eax, dword ptr [eax] */
    MEM32(ebp + 0x8) = eax; /* 0x00628980: mov dword ptr [ebp + 8], eax */
    SET_LO8(eax, MEM8(eax)); /* 0x00628983: mov al, byte ptr [eax] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x00628985: mov byte ptr [edx], al */
    MEM8(edx + 0x1) = (uint8_t)(0); /* 0x00628987: mov byte ptr [edx + 1], 0 */
L_0062898B:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062898B: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062898F: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ecx; /* 0x00628996: mov eax, ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628998: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062899B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006289A2: pop ecx */
    edi = POP32_VAL(esp); /* 0x006289A3: pop edi */
    esi = POP32_VAL(esp); /* 0x006289A4: pop esi */
    ebx = POP32_VAL(esp); /* 0x006289A5: pop ebx */
    esp = ebp; /* 0x006289A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006289A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x006289A9: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_006289AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006289ACu);

L_006289AC:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006289AC: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006289AF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006289B5: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x006289B8: push 0 */
    PUSH32(esp, 0); /* 0x006289BA: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006289BC: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006289C1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006289D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006289D0u);

L_006289D0:
    PUSH32(esp, ebp); /* 0x006289D0: push ebp */
    ebp = esp; /* 0x006289D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006289D3: push -1 */
    PUSH32(esp, 0x007B8035u); /* 0x006289D5: push 0x7b8035 */
    eax = MEM32(FS_BASE + (0)); /* 0x006289DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006289E0: push eax */
    PUSH32(esp, ecx); /* 0x006289E1: push ecx */
    PUSH32(esp, ebx); /* 0x006289E2: push ebx */
    PUSH32(esp, esi); /* 0x006289E3: push esi */
    PUSH32(esp, edi); /* 0x006289E4: push edi */
    eax = MEM32(0x855000); /* 0x006289E5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006289EA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006289EC: push eax */
    eax = ebp + (-0xC); /* 0x006289ED: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006289F0: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006289F6: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006289F9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006289FC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00616340); /* 0x006289FF: call 0x616340 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00628A04: mov ecx, eax */
    MEM32(ebp + 0xC) = ecx; /* 0x00628A06: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x00628A09: mov dword ptr [ebp - 4], 0 */
    edx = ecx + 0x8; /* 0x00628A10: lea edx, [ecx + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00628A13: mov byte ptr [ebp - 4], 1 */
    /* test edx, edx */ /* 0x00628A17: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628A2B; /* 0x00628A19: je 0x628a2b */
L_00628A1B:
    eax = MEM32(ebp + 0x14); /* 0x00628A1B: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x00628A1E: mov eax, dword ptr [eax] */
    MEM32(ebp + 0x8) = eax; /* 0x00628A20: mov dword ptr [ebp + 8], eax */
    eax = MEM32(eax); /* 0x00628A23: mov eax, dword ptr [eax] */
    MEM32(edx) = eax; /* 0x00628A25: mov dword ptr [edx], eax */
    MEM8(edx + 0x4) = (uint8_t)(0); /* 0x00628A27: mov byte ptr [edx + 4], 0 */
L_00628A2B:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00628A2B: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628A2F: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ecx; /* 0x00628A36: mov eax, ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628A38: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628A3B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00628A42: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628A43: pop edi */
    esi = POP32_VAL(esp); /* 0x00628A44: pop esi */
    ebx = POP32_VAL(esp); /* 0x00628A45: pop ebx */
    esp = ebp; /* 0x00628A46: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628A48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x00628A49: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_00628A4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628A4Cu);

L_00628A4C:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00628A4C: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00628A4F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00628A55: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00628A58: push 0 */
    PUSH32(esp, 0); /* 0x00628A5A: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00628A5C: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00628A61u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00628A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628A70u);

L_00628A70:
    PUSH32(esp, ebp); /* 0x00628A70: push ebp */
    ebp = esp; /* 0x00628A71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628A73: push -1 */
    PUSH32(esp, 0x007B8055u); /* 0x00628A75: push 0x7b8055 */
    eax = MEM32(FS_BASE + (0)); /* 0x00628A7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628A80: push eax */
    PUSH32(esp, ecx); /* 0x00628A81: push ecx */
    PUSH32(esp, ebx); /* 0x00628A82: push ebx */
    PUSH32(esp, esi); /* 0x00628A83: push esi */
    PUSH32(esp, edi); /* 0x00628A84: push edi */
    eax = MEM32(0x855000); /* 0x00628A85: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00628A8A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00628A8C: push eax */
    eax = ebp + (-0xC); /* 0x00628A8D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00628A90: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00628A96: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00628A99: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00628A9C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_006268A0); /* 0x00628A9F: call 0x6268a0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00628AA4: mov ecx, eax */
    MEM32(ebp + 0xC) = ecx; /* 0x00628AA6: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x00628AA9: mov dword ptr [ebp - 4], 0 */
    edx = ecx + 0x8; /* 0x00628AB0: lea edx, [ecx + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00628AB3: mov byte ptr [ebp - 4], 1 */
    /* test edx, edx */ /* 0x00628AB7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628ACF; /* 0x00628AB9: je 0x628acf */
L_00628ABB:
    eax = MEM32(ebp + 0x14); /* 0x00628ABB: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x00628ABE: mov eax, dword ptr [eax] */
    MEM32(ebp + 0x8) = eax; /* 0x00628AC0: mov dword ptr [ebp + 8], eax */
    eax = MEM32(eax); /* 0x00628AC3: mov eax, dword ptr [eax] */
    MEM32(edx) = eax; /* 0x00628AC5: mov dword ptr [edx], eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00628AC7: xorps xmm0, xmm0 */
    MEM64(edx + 0x4) = _xmm[0].u64[0]; /* 0x00628ACA: movq qword ptr [edx + 4], xmm0 */
L_00628ACF:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00628ACF: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628AD3: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ecx; /* 0x00628ADA: mov eax, ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628ADC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628ADF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00628AE6: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628AE7: pop edi */
    esi = POP32_VAL(esp); /* 0x00628AE8: pop esi */
    ebx = POP32_VAL(esp); /* 0x00628AE9: pop ebx */
    esp = ebp; /* 0x00628AEA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628AEC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x00628AED: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_00628AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628AF0u);

L_00628AF0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00628AF0: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00628AF3: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00628AF9: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00628AFC: push 0 */
    PUSH32(esp, 0); /* 0x00628AFE: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00628B00: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00628B05u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00628B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628B10u);

L_00628B10:
    PUSH32(esp, ebp); /* 0x00628B10: push ebp */
    ebp = esp; /* 0x00628B11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628B13: push -1 */
    PUSH32(esp, 0x007B8075u); /* 0x00628B15: push 0x7b8075 */
    eax = MEM32(FS_BASE + (0)); /* 0x00628B1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628B20: push eax */
    PUSH32(esp, ecx); /* 0x00628B21: push ecx */
    PUSH32(esp, ebx); /* 0x00628B22: push ebx */
    PUSH32(esp, esi); /* 0x00628B23: push esi */
    PUSH32(esp, edi); /* 0x00628B24: push edi */
    eax = MEM32(0x855000); /* 0x00628B25: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00628B2A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00628B2C: push eax */
    eax = ebp + (-0xC); /* 0x00628B2D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00628B30: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00628B36: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00628B39: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00628B3C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_006268A0); /* 0x00628B3F: call 0x6268a0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00628B44: mov ecx, eax */
    MEM32(ebp + 0xC) = ecx; /* 0x00628B46: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x00628B49: mov dword ptr [ebp - 4], 0 */
    edx = ecx + 0x8; /* 0x00628B50: lea edx, [ecx + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00628B53: mov byte ptr [ebp - 4], 1 */
    /* test edx, edx */ /* 0x00628B57: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628B6F; /* 0x00628B59: je 0x628b6f */
L_00628B5B:
    eax = MEM32(ebp + 0x14); /* 0x00628B5B: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x00628B5E: mov eax, dword ptr [eax] */
    MEM32(ebp + 0x8) = eax; /* 0x00628B60: mov dword ptr [ebp + 8], eax */
    SET_LO8(eax, MEM8(eax)); /* 0x00628B63: mov al, byte ptr [eax] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x00628B65: mov byte ptr [edx], al */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00628B67: xorps xmm0, xmm0 */
    MEM64(edx + 0x4) = _xmm[0].u64[0]; /* 0x00628B6A: movq qword ptr [edx + 4], xmm0 */
L_00628B6F:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00628B6F: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628B73: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ecx; /* 0x00628B7A: mov eax, ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628B7C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628B7F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00628B86: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628B87: pop edi */
    esi = POP32_VAL(esp); /* 0x00628B88: pop esi */
    ebx = POP32_VAL(esp); /* 0x00628B89: pop ebx */
    esp = ebp; /* 0x00628B8A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628B8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x00628B8D: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_00628B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628B90u);

L_00628B90:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00628B90: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00628B93: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00628B99: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00628B9C: push 0 */
    PUSH32(esp, 0); /* 0x00628B9E: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00628BA0: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00628BA5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00628BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628BB0u);

L_00628BB0:
    PUSH32(esp, ebp); /* 0x00628BB0: push ebp */
    ebp = esp; /* 0x00628BB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628BB3: push -1 */
    PUSH32(esp, 0x007B8095u); /* 0x00628BB5: push 0x7b8095 */
    eax = MEM32(FS_BASE + (0)); /* 0x00628BBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628BC0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00628BC1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00628BC4: push ebx */
    PUSH32(esp, esi); /* 0x00628BC5: push esi */
    PUSH32(esp, edi); /* 0x00628BC6: push edi */
    eax = MEM32(0x855000); /* 0x00628BC7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00628BCC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00628BCE: push eax */
    eax = ebp + (-0xC); /* 0x00628BCF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00628BD2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00628BD8: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x00628BDB: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(ebp + 0x8); /* 0x00628BE2: mov esi, dword ptr [ebp + 8] */
L_00628BE5:
    /* cmp ecx, edx */ /* 0x00628BE5: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00628C0D; /* 0x00628BE7: je 0x628c0d */
L_00628BE9:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00628BE9: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x00628BED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628BFB; /* 0x00628BEF: je 0x628bfb */
L_00628BF1:
    eax = MEM32(ecx); /* 0x00628BF1: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x00628BF3: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x00628BF5: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x00628BF8: mov dword ptr [esi + 4], eax */
L_00628BFB:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00628BFB: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x00628BFF: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x00628C02: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x00628C05: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x00628C08: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    goto L_00628BE5; /* 0x00628C0B: jmp 0x628be5 */
L_00628C0D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628C0D: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00628C14: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628C16: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628C19: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00628C20: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628C21: pop edi */
    esi = POP32_VAL(esp); /* 0x00628C22: pop esi */
    ebx = POP32_VAL(esp); /* 0x00628C23: pop ebx */
    esp = ebp; /* 0x00628C24: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628C26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00628C27: ret  */
    RECOMP_REGS_OUT();
}

void sub_00628C28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628C28u);

L_00628C28:
    PUSH32(esp, 0); /* 0x00628C28: push 0 */
    PUSH32(esp, 0); /* 0x00628C2A: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00628C2C: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00628C31u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00628C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628C40u);

L_00628C40:
    PUSH32(esp, ebp); /* 0x00628C40: push ebp */
    ebp = esp; /* 0x00628C41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628C43: push -1 */
    PUSH32(esp, 0x007B80B5u); /* 0x00628C45: push 0x7b80b5 */
    eax = MEM32(FS_BASE + (0)); /* 0x00628C4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628C50: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00628C51: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00628C54: push ebx */
    PUSH32(esp, esi); /* 0x00628C55: push esi */
    PUSH32(esp, edi); /* 0x00628C56: push edi */
    eax = MEM32(0x855000); /* 0x00628C57: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00628C5C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00628C5E: push eax */
    eax = ebp + (-0xC); /* 0x00628C5F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00628C62: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00628C68: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x00628C6B: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(ebp + 0x8); /* 0x00628C72: mov esi, dword ptr [ebp + 8] */
L_00628C75:
    /* cmp ecx, edx */ /* 0x00628C75: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00628CA1; /* 0x00628C77: je 0x628ca1 */
L_00628C79:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00628C79: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x00628C7D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628C8F; /* 0x00628C7F: je 0x628c8f */
L_00628C81:
    _xmm[0] = xmm_ld(ecx); /* 0x00628C81: movdqu xmm0, xmmword ptr [ecx] */
    xmm_st(esi, _xmm[0]); /* 0x00628C85: movdqu xmmword ptr [esi], xmm0 */
    eax = MEM32(ecx + 0x10); /* 0x00628C89: mov eax, dword ptr [ecx + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x00628C8C: mov dword ptr [esi + 0x10], eax */
L_00628C8F:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00628C8F: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x00628C93: add esi, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x00628C96: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x00628C99: add ecx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x00628C9C: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    goto L_00628C75; /* 0x00628C9F: jmp 0x628c75 */
L_00628CA1:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628CA1: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00628CA8: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628CAA: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628CAD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00628CB4: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628CB5: pop edi */
    esi = POP32_VAL(esp); /* 0x00628CB6: pop esi */
    ebx = POP32_VAL(esp); /* 0x00628CB7: pop ebx */
    esp = ebp; /* 0x00628CB8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628CBA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00628CBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00628CBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628CBCu);

L_00628CBC:
    PUSH32(esp, 0); /* 0x00628CBC: push 0 */
    PUSH32(esp, 0); /* 0x00628CBE: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00628CC0: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00628CC5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00628CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628CD0u);

L_00628CD0:
    PUSH32(esp, ebp); /* 0x00628CD0: push ebp */
    ebp = esp; /* 0x00628CD1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628CD3: push -1 */
    PUSH32(esp, 0x007B80D0u); /* 0x00628CD5: push 0x7b80d0 */
    eax = MEM32(FS_BASE + (0)); /* 0x00628CDA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628CE0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00628CE1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00628CE4: push ebx */
    PUSH32(esp, esi); /* 0x00628CE5: push esi */
    PUSH32(esp, edi); /* 0x00628CE6: push edi */
    eax = MEM32(0x855000); /* 0x00628CE7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00628CEC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00628CEE: push eax */
    eax = ebp + (-0xC); /* 0x00628CEF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00628CF2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00628CF8: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x00628CFB: mov ebx, edx */
    esi = ecx; /* 0x00628CFD: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x00628CFF: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = edi; /* 0x00628D02: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x00628D05: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x00628D0C: lea esp, [esp] */
L_00628D10:
    /* cmp esi, ebx */ /* 0x00628D10: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00628D2F; /* 0x00628D12: je 0x628d2f */
L_00628D14:
    PUSH32(esp, esi); /* 0x00628D14: push esi */
    PUSH32(esp, edi); /* 0x00628D15: push edi */
    RECOMP_CALL(sub_00626C40); /* 0x00628D16: call 0x626c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x1D4u; /* 0x00628D1B: add edi, 0x1d4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edi; /* 0x00628D21: mov dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x00628D24: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = esi; /* 0x00628D2A: mov dword ptr [ebp - 0x18], esi */
    RECOMP_BACKEDGE();
    goto L_00628D10; /* 0x00628D2D: jmp 0x628d10 */
L_00628D2F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628D2F: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x00628D36: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628D38: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628D3B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00628D42: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628D43: pop edi */
    esi = POP32_VAL(esp); /* 0x00628D44: pop esi */
    ebx = POP32_VAL(esp); /* 0x00628D45: pop ebx */
    esp = ebp; /* 0x00628D46: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628D48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00628D49: ret  */
    RECOMP_REGS_OUT();
}

void sub_00628D4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628D4Au);

L_00628D4A:
    esi = MEM32(ebp + (-0x14)); /* 0x00628D4A: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x00628D4D: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x00628D50: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00628D65; /* 0x00628D52: je 0x628d65 */
L_00628D54:
    ecx = esi; /* 0x00628D54: mov ecx, esi */
    RECOMP_CALL(sub_0061F180); /* 0x00628D56: call 0x61f180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x00628D5B: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x00628D61: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628D54; /* 0x00628D63: jne 0x628d54 */
L_00628D65:
    PUSH32(esp, 0); /* 0x00628D65: push 0 */
    PUSH32(esp, 0); /* 0x00628D67: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00628D69: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00628D6Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00628D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628D70u);

L_00628D70:
    PUSH32(esp, ebp); /* 0x00628D70: push ebp */
    ebp = esp; /* 0x00628D71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628D73: push -1 */
    PUSH32(esp, 0x007B8108u); /* 0x00628D75: push 0x7b8108 */
    eax = MEM32(FS_BASE + (0)); /* 0x00628D7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628D80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00628D81: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00628D84: push ebx */
    PUSH32(esp, esi); /* 0x00628D85: push esi */
    PUSH32(esp, edi); /* 0x00628D86: push edi */
    eax = MEM32(0x855000); /* 0x00628D87: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00628D8C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00628D8E: push eax */
    eax = ebp + (-0xC); /* 0x00628D8F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00628D92: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00628D98: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x00628D9B: mov ebx, edx */
    edi = ecx; /* 0x00628D9D: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x00628D9F: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x00628DA2: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x00628DA5: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x00628DAC: lea esp, [esp] */
L_00628DB0:
    /* cmp edi, ebx */ /* 0x00628DB0: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00628E60; /* 0x00628DB2: je 0x628e60 */
L_00628DB8:
    MEM32(ebp + (-0x18)) = esi; /* 0x00628DB8: mov dword ptr [ebp - 0x18], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00628DBB: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x00628DBF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628E4B; /* 0x00628DC1: je 0x628e4b */
L_00628DC7:
    MEM32(esi + 0x10) = 0; /* 0x00628DC7: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x00628DCE: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x14) = 0xFu; /* 0x00628DD5: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x00628DDC: mov dword ptr [esi + 0x10], 0 */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x00628DE3: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00628DED; /* 0x00628DE7: jb 0x628ded */
L_00628DE9:
    eax = MEM32(esi); /* 0x00628DE9: mov eax, dword ptr [esi] */
    goto L_00628DEF; /* 0x00628DEB: jmp 0x628def */
L_00628DED:
    eax = esi; /* 0x00628DED: mov eax, esi */
L_00628DEF:
    MEM8(eax) = (uint8_t)(0); /* 0x00628DEF: mov byte ptr [eax], 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628DF2: push -1 */
    PUSH32(esp, 0); /* 0x00628DF4: push 0 */
    PUSH32(esp, edi); /* 0x00628DF6: push edi */
    ecx = esi; /* 0x00628DF7: mov ecx, esi */
    RECOMP_CALL(sub_0040A030); /* 0x00628DF9: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00628DFE: mov byte ptr [ebp - 4], 2 */
    ecx = esi + 0x18; /* 0x00628E02: lea ecx, [esi + 0x18] */
    MEM32(ecx + 0x10) = 0; /* 0x00628E05: mov dword ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x14) = 0; /* 0x00628E0C: mov dword ptr [ecx + 0x14], 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x00628E13: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x00628E1A: mov dword ptr [ecx + 0x10], 0 */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x00628E21: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00628E2B; /* 0x00628E25: jb 0x628e2b */
L_00628E27:
    eax = MEM32(ecx); /* 0x00628E27: mov eax, dword ptr [ecx] */
    goto L_00628E2D; /* 0x00628E29: jmp 0x628e2d */
L_00628E2B:
    eax = ecx; /* 0x00628E2B: mov eax, ecx */
L_00628E2D:
    MEM8(eax) = (uint8_t)(0); /* 0x00628E2D: mov byte ptr [eax], 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628E30: push -1 */
    PUSH32(esp, 0); /* 0x00628E32: push 0 */
    eax = edi + 0x18; /* 0x00628E34: lea eax, [edi + 0x18] */
    PUSH32(esp, eax); /* 0x00628E37: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x00628E38: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00628E3D: mov byte ptr [ebp - 4], 3 */
    eax = MEM32(edi + 0x30); /* 0x00628E41: mov eax, dword ptr [edi + 0x30] */
    MEM32(esi + 0x30) = eax; /* 0x00628E44: mov dword ptr [esi + 0x30], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00628E47: mov byte ptr [ebp - 4], 1 */
L_00628E4B:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00628E4B: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x34u; /* 0x00628E4F: add esi, 0x34 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x00628E52: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x34u; /* 0x00628E55: add edi, 0x34 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = edi; /* 0x00628E58: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_BACKEDGE();
    goto L_00628DB0; /* 0x00628E5B: jmp 0x628db0 */
L_00628E60:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628E60: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00628E67: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628E69: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628E6C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00628E73: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628E74: pop edi */
    esi = POP32_VAL(esp); /* 0x00628E75: pop esi */
    ebx = POP32_VAL(esp); /* 0x00628E76: pop ebx */
    esp = ebp; /* 0x00628E77: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628E79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00628E7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_00628E7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628E7Bu);

L_00628E7B:
    esi = MEM32(ebp + (-0x14)); /* 0x00628E7B: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x00628E7E: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x00628E81: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00628E93; /* 0x00628E83: je 0x628e93 */
L_00628E85:
    ecx = esi; /* 0x00628E85: mov ecx, esi */
    RECOMP_CALL(sub_00441610); /* 0x00628E87: call 0x441610 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x34u; /* 0x00628E8C: add esi, 0x34 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x00628E8F: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628E85; /* 0x00628E91: jne 0x628e85 */
L_00628E93:
    PUSH32(esp, 0); /* 0x00628E93: push 0 */
    PUSH32(esp, 0); /* 0x00628E95: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00628E97: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00628E9Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00628EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628EA0u);

L_00628EA0:
    PUSH32(esp, ebp); /* 0x00628EA0: push ebp */
    ebp = esp; /* 0x00628EA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00628EA3: push -1 */
    PUSH32(esp, 0x007B8130u); /* 0x00628EA5: push 0x7b8130 */
    eax = MEM32(FS_BASE + (0)); /* 0x00628EAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00628EB0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00628EB1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00628EB4: push ebx */
    PUSH32(esp, esi); /* 0x00628EB5: push esi */
    PUSH32(esp, edi); /* 0x00628EB6: push edi */
    eax = MEM32(0x855000); /* 0x00628EB7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00628EBC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00628EBE: push eax */
    eax = ebp + (-0xC); /* 0x00628EBF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00628EC2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00628EC8: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x00628ECB: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x00628ECD: mov dword ptr [ebp - 0x14], edi */
    esi = MEM32(edi); /* 0x00628ED0: mov esi, dword ptr [edi] */
    ebx = MEM32(ebp + 0x8); /* 0x00628ED2: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM8(ebx + 0xD), 0 */ /* 0x00628ED5: cmp byte ptr [ebx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628F33; /* 0x00628ED9: jne 0x628f33 */
L_00628EDB:
    eax = ebx + 0x10; /* 0x00628EDB: lea eax, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x00628EDE: push eax */
    RECOMP_CALL(sub_00629160); /* 0x00628EDF: call 0x629160 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00628EE4: mov ecx, eax */
    MEM32(ebp + 0x8) = ecx; /* 0x00628EE6: mov dword ptr [ebp + 8], ecx */
    eax = MEM32(ebp + 0xC); /* 0x00628EE9: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x00628EEC: mov dword ptr [ecx + 4], eax */
    SET_LO8(eax, MEM8(ebx + 0xC)); /* 0x00628EEF: mov al, byte ptr [ebx + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x00628EF2: mov byte ptr [ecx + 0xc], al */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x00628EF5: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) { esi = ecx; } /* 0x00628EF9: cmovne esi, ecx */
    MEM32(ebp + 0xC) = esi; /* 0x00628EFC: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x00628EFF: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00628F06: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x00628F09: push ecx */
    PUSH32(esp, MEM32(ebx)); /* 0x00628F0A: push dword ptr [ebx] */
    ecx = edi; /* 0x00628F0C: mov ecx, edi */
    RECOMP_CALL(sub_00628EA0); /* 0x00628F0E: call 0x628ea0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x00628F13: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x00628F16: mov dword ptr [ecx], eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x00628F18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x00628F1B: push ecx */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x00628F1C: push dword ptr [ebx + 8] */
    ecx = edi; /* 0x00628F1F: mov ecx, edi */
    RECOMP_CALL(sub_00628EA0); /* 0x00628F21: call 0x628ea0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x00628F26: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x00628F29: mov dword ptr [ecx + 8], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00628F2C: mov dword ptr [ebp - 4], 0xffffffff */
L_00628F33:
    eax = esi; /* 0x00628F33: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00628F35: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00628F38: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00628F3F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00628F40: pop edi */
    esi = POP32_VAL(esp); /* 0x00628F41: pop esi */
    ebx = POP32_VAL(esp); /* 0x00628F42: pop ebx */
    esp = ebp; /* 0x00628F43: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00628F45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x00628F46: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_00628F49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628F49u);

L_00628F49:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00628F49: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x14)); /* 0x00628F4C: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00626800); /* 0x00628F4F: call 0x626800 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x00628F54: push 0 */
    PUSH32(esp, 0); /* 0x00628F56: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00628F58: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00628F5Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00628F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00628F60u);

L_00628F60:
    PUSH32(esp, ebp); /* 0x00628F60: push ebp */
    ebp = esp; /* 0x00628F61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00628F63: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00628F66: push ebx */
    PUSH32(esp, esi); /* 0x00628F67: push esi */
    esi = ecx; /* 0x00628F68: mov esi, ecx */
    eax = 0x2AAAAAABu; /* 0x00628F6A: mov eax, 0x2aaaaaab */
    ecx = MEM32(ebp + 0x8); /* 0x00628F6F: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x00628F72: sub edx, esi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x00628F74: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x00628F76: sub ecx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = esi; /* 0x00628F78: mov dword ptr [ebp - 8], esi */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00628F7B: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = edx; /* 0x00628F7D: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00628F7F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00628F7F: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00628F82: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x00628F84: mov dword ptr [ebp - 4], eax */
    eax = 0x2AAAAAABu; /* 0x00628F87: mov eax, 0x2aaaaaab */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00628F8C: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00628F8E: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    esi = edx; /* 0x00628F90: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x00628F92: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x00628F92: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x00628F95: add esi, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x00628F97: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = esi; /* 0x00628F9A: mov dword ptr [ebp - 0xc], esi */
    ebx = esi; /* 0x00628F9D: mov ebx, esi */
    ecx = edx; /* 0x00628F9F: mov ecx, edx */
    /* test edx, edx */ /* 0x00628FA1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00628FB8; /* 0x00628FA3: je 0x628fb8 */
L_00628FA5:
    eax = ebx; /* 0x00628FA5: mov eax, ebx */
    ebx = ecx; /* 0x00628FA7: mov ebx, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x00628FA9: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x00628FAA: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = edx; /* 0x00628FAC: mov ecx, edx */
    /* test edx, edx */ /* 0x00628FAE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00628FA5; /* 0x00628FB0: jne 0x628fa5 */
L_00628FB2:
    edx = MEM32(ebp + (-0x4)); /* 0x00628FB2: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x00628FB5: mov dword ptr [ebp - 0xc], ebx */
L_00628FB8:
    /* cmp ebx, esi */ /* 0x00628FB8: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_00629056; /* 0x00628FBA: jge 0x629056 */
L_00628FC0:
    /* test ebx, ebx */ /* 0x00628FC0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00629056; /* 0x00628FC2: jle 0x629056 */
L_00628FC8:
    ecx = edx + edx * 2; /* 0x00628FC8: lea ecx, [edx + edx*2] */
    edx = MEM32(ebp + (-0x8)); /* 0x00628FCB: mov edx, dword ptr [ebp - 8] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x00628FCE: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x00628FCE: shl ecx, 2 */
    eax = ebx + ebx * 2; /* 0x00628FD1: lea eax, [ebx + ebx*2] */
    PUSH32(esp, edi); /* 0x00628FD4: push edi */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00628FD5: mov dword ptr [ebp - 0x10], ecx */
    edi = edx + eax * 4; /* 0x00628FD8: lea edi, [edx + eax*4] */
    goto L_00628FE0; /* 0x00628FDB: jmp 0x628fe0 */
L_00628FE0:
    ebx = MEM32(ebp + (-0x10)); /* 0x00628FE0: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x00628FE3: add ecx, edi */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x00628FE5: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = edi; /* 0x00628FE8: mov esi, edi */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = edx; } /* 0x00628FEA: cmove ecx, edx */
    ecx = ecx; /* 0x00628FED: lea ecx, [ecx] */
L_00628FF0:
    edx = MEM32(esi + 0x8); /* 0x00628FF0: mov edx, dword ptr [esi + 8] */
    _xmm[1].u64[0] = MEM64(esi); _xmm[1].u64[1] = 0; /* 0x00628FF3: movq xmm1, qword ptr [esi] */
    _xmm[0].u64[0] = MEM64(ecx); _xmm[0].u64[1] = 0; /* 0x00628FF7: movq xmm0, qword ptr [ecx] */
    MEM64(esi) = _xmm[0].u64[0]; /* 0x00628FFB: movq qword ptr [esi], xmm0 */
    eax = MEM32(ecx + 0x8); /* 0x00628FFF: mov eax, dword ptr [ecx + 8] */
    MEM32(esi + 0x8) = eax; /* 0x00629002: mov dword ptr [esi + 8], eax */
    eax = 0x2AAAAAABu; /* 0x00629005: mov eax, 0x2aaaaaab */
    MEM64(ecx) = _xmm[1].u64[0]; /* 0x0062900A: movq qword ptr [ecx], xmm1 */
    MEM32(ecx + 0x8) = edx; /* 0x0062900E: mov dword ptr [ecx + 8], edx */
    edx = MEM32(ebp + 0x8); /* 0x00629011: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x00629014: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ecx; /* 0x00629016: mov dword ptr [ebp - 0x14], ecx */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x00629019: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x0062901B: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    esi = edx; /* 0x0062901D: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x0062901F: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x0062901F: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x00629022: add esi, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x00629024: mov edx, dword ptr [ebp - 4] */
    /* cmp edx, esi */ /* 0x00629027: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_00629032; /* 0x00629029: jge 0x629032 */
L_0062902B:
    edx = MEM32(ebp + (-0x8)); /* 0x0062902B: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x0062902E: add ecx, ebx */
    _flag_k = FK_ADD;
    goto L_0062903D; /* 0x00629030: jmp 0x62903d */
L_00629032:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x00629032: sub edx, esi */
    _flag_k = FK_CMP;
    eax = edx + edx * 2; /* 0x00629034: lea eax, [edx + edx*2] */
    edx = MEM32(ebp + (-0x8)); /* 0x00629037: mov edx, dword ptr [ebp - 8] */
    ecx = edx + eax * 4; /* 0x0062903A: lea ecx, [edx + eax*4] */
L_0062903D:
    esi = MEM32(ebp + (-0x14)); /* 0x0062903D: mov esi, dword ptr [ebp - 0x14] */
    /* cmp ecx, edi */ /* 0x00629040: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00628FF0; /* 0x00629042: jne 0x628ff0 */
L_00629044:
    ebx = MEM32(ebp + (-0xC)); /* 0x00629044: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0xCu; /* 0x00629047: sub edi, 0xc */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10)); /* 0x0062904A: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x0062904D: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = ebx; /* 0x0062904E: mov dword ptr [ebp - 0xc], ebx */
    /* test ebx, ebx */ /* 0x00629051: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00628FE0; /* 0x00629053: jg 0x628fe0 */
L_00629055:
    edi = POP32_VAL(esp); /* 0x00629055: pop edi */
L_00629056:
    esi = POP32_VAL(esp); /* 0x00629056: pop esi */
    ebx = POP32_VAL(esp); /* 0x00629057: pop ebx */
    esp = ebp; /* 0x00629058: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062905A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062905B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00629060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629060u);

L_00629060:
    PUSH32(esp, ebp); /* 0x00629060: push ebp */
    ebp = esp; /* 0x00629061: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00629063: push -1 */
    PUSH32(esp, 0x007B8150u); /* 0x00629065: push 0x7b8150 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062906A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00629070: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00629071: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00629074: push ebx */
    PUSH32(esp, esi); /* 0x00629075: push esi */
    PUSH32(esp, edi); /* 0x00629076: push edi */
    eax = MEM32(0x855000); /* 0x00629077: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062907C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062907E: push eax */
    eax = ebp + (-0xC); /* 0x0062907F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00629082: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00629088: mov dword ptr [ebp - 0x10], esp */
    esi = edx; /* 0x0062908B: mov esi, edx */
    edi = ecx; /* 0x0062908D: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0062908F: mov dword ptr [ebp - 4], 0 */
    ebx = MEM32(ebp + 0x8); /* 0x00629096: mov ebx, dword ptr [ebp + 8] */
    esp = esp; /* 0x00629099: lea esp, [esp] */
L_006290A0:
    /* cmp edi, esi */ /* 0x006290A0: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006290B9; /* 0x006290A2: je 0x6290b9 */
L_006290A4:
    PUSH32(esp, edi); /* 0x006290A4: push edi */
    PUSH32(esp, ebx); /* 0x006290A5: push ebx */
    RECOMP_CALL(sub_00629240); /* 0x006290A6: call 0x629240 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x006290AB: add ebx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x006290AE: mov dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x006290B1: add edi, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = edi; /* 0x006290B4: mov dword ptr [ebp - 0x14], edi */
    RECOMP_BACKEDGE();
    goto L_006290A0; /* 0x006290B7: jmp 0x6290a0 */
L_006290B9:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006290B9: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx; /* 0x006290C0: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x006290C2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006290C5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006290CC: pop ecx */
    edi = POP32_VAL(esp); /* 0x006290CD: pop edi */
    esi = POP32_VAL(esp); /* 0x006290CE: pop esi */
    ebx = POP32_VAL(esp); /* 0x006290CF: pop ebx */
    esp = ebp; /* 0x006290D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006290D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006290D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006290D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006290D4u);

L_006290D4:
    PUSH32(esp, 0); /* 0x006290D4: push 0 */
    PUSH32(esp, 0); /* 0x006290D6: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006290D8: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006290DDu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006290E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006290E0u);

L_006290E0:
    PUSH32(esp, ebp); /* 0x006290E0: push ebp */
    ebp = esp; /* 0x006290E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006290E3: push -1 */
    PUSH32(esp, 0x007B8170u); /* 0x006290E5: push 0x7b8170 */
    eax = MEM32(FS_BASE + (0)); /* 0x006290EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006290F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006290F1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006290F4: push ebx */
    PUSH32(esp, esi); /* 0x006290F5: push esi */
    PUSH32(esp, edi); /* 0x006290F6: push edi */
    eax = MEM32(0x855000); /* 0x006290F7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006290FC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006290FE: push eax */
    eax = ebp + (-0xC); /* 0x006290FF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00629102: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00629108: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x0062910B: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(ebp + 0x8); /* 0x00629112: mov esi, dword ptr [ebp + 8] */
L_00629115:
    /* cmp ecx, edx */ /* 0x00629115: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00629139; /* 0x00629117: je 0x629139 */
L_00629119:
    /* test esi, esi */ /* 0x00629119: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062912B; /* 0x0062911B: je 0x62912b */
L_0062911D:
    _xmm[0].u64[0] = MEM64(ecx); _xmm[0].u64[1] = 0; /* 0x0062911D: movq xmm0, qword ptr [ecx] */
    MEM64(esi) = _xmm[0].u64[0]; /* 0x00629121: movq qword ptr [esi], xmm0 */
    eax = MEM32(ecx + 0x8); /* 0x00629125: mov eax, dword ptr [ecx + 8] */
    MEM32(esi + 0x8) = eax; /* 0x00629128: mov dword ptr [esi + 8], eax */
L_0062912B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x0062912B: add esi, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x0062912E: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x00629131: add ecx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x00629134: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    goto L_00629115; /* 0x00629137: jmp 0x629115 */
L_00629139:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00629139: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00629140: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00629142: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00629145: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062914C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062914D: pop edi */
    esi = POP32_VAL(esp); /* 0x0062914E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062914F: pop ebx */
    esp = ebp; /* 0x00629150: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00629152: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00629153: ret  */
    RECOMP_REGS_OUT();
}

void sub_00629154(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629154u);

L_00629154:
    PUSH32(esp, 0); /* 0x00629154: push 0 */
    PUSH32(esp, 0); /* 0x00629156: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00629158: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0062915Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00629160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629160u);

L_00629160:
    PUSH32(esp, ebp); /* 0x00629160: push ebp */
    ebp = esp; /* 0x00629161: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00629163: push -1 */
    PUSH32(esp, 0x007B81A0u); /* 0x00629165: push 0x7b81a0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062916A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00629170: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00629171: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00629174: push ebx */
    PUSH32(esp, esi); /* 0x00629175: push esi */
    PUSH32(esp, edi); /* 0x00629176: push edi */
    eax = MEM32(0x855000); /* 0x00629177: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062917C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062917E: push eax */
    eax = ebp + (-0xC); /* 0x0062917F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00629182: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00629188: mov dword ptr [ebp - 0x10], esp */
    RECOMP_CALL(sub_005EE610); /* 0x0062918B: call 0x5ee610 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00629190: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x00629192: mov dword ptr [ebp - 0x14], esi */
    MEM16(esi + 0xC) = (uint16_t)(0); /* 0x00629195: mov word ptr [esi + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0062919B: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x10; /* 0x006291A2: lea ecx, [esi + 0x10] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x006291A5: mov dword ptr [ebp - 0x18], ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006291A8: mov byte ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x006291AC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00629200; /* 0x006291AE: je 0x629200 */
L_006291B0:
    edx = MEM32(ebp + 0x8); /* 0x006291B0: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x006291B3: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x006291B5: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x4); /* 0x006291B7: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x006291BA: mov dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x006291BD: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x10) = 0; /* 0x006291C0: mov dword ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x14) = 0; /* 0x006291C7: mov dword ptr [ecx + 0x14], 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x006291CE: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x006291D5: mov dword ptr [ecx + 0x10], 0 */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x006291DC: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006291E6; /* 0x006291E0: jb 0x6291e6 */
L_006291E2:
    eax = MEM32(ecx); /* 0x006291E2: mov eax, dword ptr [ecx] */
    goto L_006291E8; /* 0x006291E4: jmp 0x6291e8 */
L_006291E6:
    eax = ecx; /* 0x006291E6: mov eax, ecx */
L_006291E8:
    MEM8(eax) = (uint8_t)(0); /* 0x006291E8: mov byte ptr [eax], 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006291EB: push -1 */
    PUSH32(esp, 0); /* 0x006291ED: push 0 */
    eax = edx + 0x8; /* 0x006291EF: lea eax, [edx + 8] */
    PUSH32(esp, eax); /* 0x006291F2: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x006291F3: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006291F8: mov byte ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006291FC: mov byte ptr [ebp - 4], 1 */
L_00629200:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00629200: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00629204: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0062920B: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062920D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00629210: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00629217: pop ecx */
    edi = POP32_VAL(esp); /* 0x00629218: pop edi */
    esi = POP32_VAL(esp); /* 0x00629219: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062921A: pop ebx */
    esp = ebp; /* 0x0062921B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062921D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062921E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00629221(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629221u);

L_00629221:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x00629221: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00629224: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062922A: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0062922D: push 0 */
    PUSH32(esp, 0); /* 0x0062922F: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00629231: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00629236u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00629240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629240u);

L_00629240:
    PUSH32(esp, ebp); /* 0x00629240: push ebp */
    ebp = esp; /* 0x00629241: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00629243: push -1 */
    PUSH32(esp, 0x00781C75u); /* 0x00629245: push 0x781c75 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062924A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00629250: push eax */
    eax = MEM32(0x855000); /* 0x00629251: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00629256: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00629258: push eax */
    eax = ebp + (-0xC); /* 0x00629259: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062925C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x00629262: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(ebp + 0x8); /* 0x00629269: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x0062926C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00629281; /* 0x0062926E: je 0x629281 */
L_00629270:
    eax = MEM32(ebp + 0xC); /* 0x00629270: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = MEM64(eax); _xmm[0].u64[1] = 0; /* 0x00629273: movq xmm0, qword ptr [eax] */
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x00629277: movq qword ptr [ecx], xmm0 */
    eax = MEM32(eax + 0x8); /* 0x0062927B: mov eax, dword ptr [eax + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x0062927E: mov dword ptr [ecx + 8], eax */
L_00629281:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00629281: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x00629288: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062928B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00629292: pop ecx */
    esp = ebp; /* 0x00629293: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00629295: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00629296: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006292A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006292A0u);

L_006292A0:
    PUSH32(esp, ebp); /* 0x006292A0: push ebp */
    ebp = esp; /* 0x006292A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006292A3: push -1 */
    PUSH32(esp, 0x007B81C0u); /* 0x006292A5: push 0x7b81c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x006292AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006292B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006292B1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006292B4: push ebx */
    PUSH32(esp, esi); /* 0x006292B5: push esi */
    PUSH32(esp, edi); /* 0x006292B6: push edi */
    eax = MEM32(0x855000); /* 0x006292B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006292BC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006292BE: push eax */
    eax = ebp + (-0xC); /* 0x006292BF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006292C2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006292C8: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x006292CB: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(ebp + 0x8); /* 0x006292D2: mov esi, dword ptr [ebp + 8] */
L_006292D5:
    /* cmp ecx, edx */ /* 0x006292D5: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006292F5; /* 0x006292D7: je 0x6292f5 */
L_006292D9:
    /* test esi, esi */ /* 0x006292D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006292E7; /* 0x006292DB: je 0x6292e7 */
L_006292DD:
    eax = MEM32(ecx); /* 0x006292DD: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x006292DF: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x006292E1: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x006292E4: mov dword ptr [esi + 4], eax */
L_006292E7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x006292E7: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x006292EA: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x006292ED: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x006292F0: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    goto L_006292D5; /* 0x006292F3: jmp 0x6292d5 */
L_006292F5:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006292F5: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x006292FC: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006292FE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00629301: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00629308: pop ecx */
    edi = POP32_VAL(esp); /* 0x00629309: pop edi */
    esi = POP32_VAL(esp); /* 0x0062930A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062930B: pop ebx */
    esp = ebp; /* 0x0062930C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062930E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062930F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00629310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629310u);

L_00629310:
    PUSH32(esp, 0); /* 0x00629310: push 0 */
    PUSH32(esp, 0); /* 0x00629312: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00629314: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x00629319u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00629320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629320u);

L_00629320:
    PUSH32(esp, ebp); /* 0x00629320: push ebp */
    ebp = esp; /* 0x00629321: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00629323: push -1 */
    PUSH32(esp, 0x007B81E0u); /* 0x00629325: push 0x7b81e0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062932A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00629330: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00629331: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00629334: push ebx */
    PUSH32(esp, esi); /* 0x00629335: push esi */
    PUSH32(esp, edi); /* 0x00629336: push edi */
    eax = MEM32(0x855000); /* 0x00629337: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062933C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062933E: push eax */
    eax = ebp + (-0xC); /* 0x0062933F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00629342: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x00629348: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x0062934B: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(ebp + 0x8); /* 0x00629352: mov esi, dword ptr [ebp + 8] */
L_00629355:
    /* cmp ecx, edx */ /* 0x00629355: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00629379; /* 0x00629357: je 0x629379 */
L_00629359:
    /* test esi, esi */ /* 0x00629359: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062936B; /* 0x0062935B: je 0x62936b */
L_0062935D:
    _xmm[0] = xmm_ld(ecx); /* 0x0062935D: movdqu xmm0, xmmword ptr [ecx] */
    xmm_st(esi, _xmm[0]); /* 0x00629361: movdqu xmmword ptr [esi], xmm0 */
    eax = MEM32(ecx + 0x10); /* 0x00629365: mov eax, dword ptr [ecx + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x00629368: mov dword ptr [esi + 0x10], eax */
L_0062936B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x0062936B: add esi, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x0062936E: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x00629371: add ecx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x00629374: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    goto L_00629355; /* 0x00629377: jmp 0x629355 */
L_00629379:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00629379: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x00629380: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x00629382: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00629385: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062938C: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062938D: pop edi */
    esi = POP32_VAL(esp); /* 0x0062938E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062938F: pop ebx */
    esp = ebp; /* 0x00629390: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00629392: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00629393: ret  */
    RECOMP_REGS_OUT();
}

void sub_00629394(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629394u);

L_00629394:
    PUSH32(esp, 0); /* 0x00629394: push 0 */
    PUSH32(esp, 0); /* 0x00629396: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x00629398: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0062939Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006293A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006293A0u);

L_006293A0:
    PUSH32(esp, ebp); /* 0x006293A0: push ebp */
    ebp = esp; /* 0x006293A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006293A3: push -1 */
    PUSH32(esp, 0x00788920u); /* 0x006293A5: push 0x788920 */
    eax = MEM32(FS_BASE + (0)); /* 0x006293AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006293B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006293B1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006293B4: push esi */
    eax = MEM32(0x855000); /* 0x006293B5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006293BA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006293BC: push eax */
    eax = ebp + (-0xC); /* 0x006293BD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006293C0: mov dword ptr fs:[0], eax */
    _xmm[0] = _xmm[1]; /* 0x006293C6: movaps xmm0, xmm1 */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x006293C9: movss dword ptr [ebp - 0x10], xmm0 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x808B1C))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006293CE: comiss xmm0, dword ptr [0x808b1c] */
    _flag_k = FK_EFLAGS;
    esi = MEM32(0x87026C); /* 0x006293D5: mov esi, dword ptr [0x87026c] */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_00629425; /* 0x006293DB: jae 0x629425 */
L_006293DD:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006293DD: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006293E0: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x006293E2: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007F9158u); /* 0x006293E5: push 0x7f9158 */
    RECOMP_CALL(sub_00409FA0); /* 0x006293EA: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x006293EF: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006293F6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006293F9: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x006293FB: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 0x007F9148u); /* 0x006293FE: push 0x7f9148 */
    RECOMP_CALL(sub_00409FA0); /* 0x00629403: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00629408: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062940C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x62u; /* 0x00629413: mov ecx, 0x62 */
    RECOMP_CALL(sub_00668DA0); /* 0x00629418: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0x10)); _xmm[0].u64[1] = 0; /* 0x0062941D: movss xmm0, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00629422: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00629425:
    MEM32(esi + 0x8) = _xmm[0].u32[0]; /* 0x00629425: movss dword ptr [esi + 8], xmm0 */
    MEM32(esi + 0x10) = _xmm[0].u32[0]; /* 0x0062942A: movss dword ptr [esi + 0x10], xmm0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062942F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00629432: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00629439: pop ecx */
    esi = POP32_VAL(esp); /* 0x0062943A: pop esi */
    esp = ebp; /* 0x0062943B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062943D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062943E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00629440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629440u);

L_00629440:
    PUSH32(esp, ebp); /* 0x00629440: push ebp */
    ebp = esp; /* 0x00629441: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00629443: push -1 */
    PUSH32(esp, 0x007AE3F0u); /* 0x00629445: push 0x7ae3f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062944A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00629450: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00629451: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00629454: push esi */
    eax = MEM32(0x855000); /* 0x00629455: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062945A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062945C: push eax */
    eax = ebp + (-0xC); /* 0x0062945D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00629460: mov dword ptr fs:[0], eax */
    _xmm[0] = _xmm[2]; /* 0x00629466: movaps xmm0, xmm2 */
    MEM32(ebp + (-0x10)) = _xmm[0].u32[0]; /* 0x00629469: movss dword ptr [ebp - 0x10], xmm0 */
    MEM32(ebp + (-0x14)) = _xmm[1].u32[0]; /* 0x0062946E: movss dword ptr [ebp - 0x14], xmm1 */
    esi = MEM32(0x87026C); /* 0x00629473: mov esi, dword ptr [0x87026c] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x00629479: xorps xmm2, xmm2 */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0062947C: comiss xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_006294CC; /* 0x0062947F: jae 0x6294cc */
L_00629481:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00629481: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00629484: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x00629486: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 0x007F9158u); /* 0x00629489: push 0x7f9158 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062948E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00629493: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062949A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062949D: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x0062949F: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 0x007F9148u); /* 0x006294A2: push 0x7f9148 */
    RECOMP_CALL(sub_00409FA0); /* 0x006294A7: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006294AC: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006294B0: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x6Eu; /* 0x006294B7: mov ecx, 0x6e */
    RECOMP_CALL(sub_00668DA0); /* 0x006294BC: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0x10)); _xmm[0].u64[1] = 0; /* 0x006294C1: movss xmm0, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x006294C6: add esp, 0x30 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x006294C9: xorps xmm2, xmm2 */
L_006294CC:
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006294CC: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00629514; /* 0x006294CF: ja 0x629514 */
L_006294D1:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006294D1: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006294D4: mov ecx, esp */
    MEM32(ebp + (-0x1C)) = esp; /* 0x006294D6: mov dword ptr [ebp - 0x1c], esp */
    PUSH32(esp, 0x007F9158u); /* 0x006294D9: push 0x7f9158 */
    RECOMP_CALL(sub_00409FA0); /* 0x006294DE: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x006294E3: mov dword ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006294EA: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006294ED: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x006294EF: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 0x007F9188u); /* 0x006294F2: push 0x7f9188 */
    RECOMP_CALL(sub_00409FA0); /* 0x006294F7: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006294FC: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00629500: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x6Fu; /* 0x00629507: mov ecx, 0x6f */
    RECOMP_CALL(sub_00668DA0); /* 0x0062950C: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00629511: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00629514:
    _xmm[0].u64[0] = MEM32(ebp + (-0x14)); _xmm[0].u64[1] = 0; /* 0x00629514: movss xmm0, dword ptr [ebp - 0x14] */
    MEM32(esi + 0x10) = _xmm[0].u32[0]; /* 0x00629519: movss dword ptr [esi + 0x10], xmm0 */
    { float _s = sse_f32(MEM32(esi + 0x8)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x0062951E: subss xmm0, dword ptr [esi + 8] */
    { float _s = sse_f32(MEM32(ebp + (-0x10))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x00629523: divss xmm0, dword ptr [ebp - 0x10] */
    MEM32(esi + 0x14) = _xmm[0].u32[0]; /* 0x00629528: movss dword ptr [esi + 0x14], xmm0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062952D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00629530: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00629537: pop ecx */
    esi = POP32_VAL(esp); /* 0x00629538: pop esi */
    esp = ebp; /* 0x00629539: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062953B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062953C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00629540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629540u);

L_00629540:
    eax = 0xFFFFD8F0u; /* 0x00629540: mov eax, 0xffffd8f0 */
    /* test ecx, ecx */ /* 0x00629545: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062957F; /* 0x00629547: je 0x62957f */
L_00629549:
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x00629549: movd xmm0, ecx */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0062954D: cvtdq2pd xmm0, xmm0 */
    { double _s = sse_f64(MEM64(0x809280)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] / _s); } /* 0x00629551: divsd xmm0, qword ptr [0x809280] */
    { double _s = sse_f64(MEM64(0x808E98)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00629559: mulsd xmm0, qword ptr [0x808e98] */
    RECOMP_CALL(sub_00780832); /* 0x00629561: call 0x780832 */
    RECOMP_FLAGS_IN();
    { double _s = sse_f64(MEM64(0x809340)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x00629566: mulsd xmm0, qword ptr [0x809340] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x0062956E: cvttsd2si eax, xmm0 */
    /* cmp eax, 0xFFFFD8F0u */ /* 0x00629572: cmp eax, 0xffffd8f0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFD8F0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0062957F; /* 0x00629577: jge 0x62957f */
L_00629579:
    eax = 0xFFFFD8F0u; /* 0x00629579: mov eax, 0xffffd8f0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062957E: ret  */
L_0062957F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0062957F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x00629581: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) { eax = ecx; } /* 0x00629583: cmovg eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00629586: ret  */
    RECOMP_REGS_OUT();
}

void sub_00629590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629590u);

L_00629590:
    PUSH32(esp, ebp); /* 0x00629590: push ebp */
    ebp = esp; /* 0x00629591: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00629593: push -1 */
    PUSH32(esp, 0x007B82DEu); /* 0x00629595: push 0x7b82de */
    eax = MEM32(FS_BASE + (0)); /* 0x0062959A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006295A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006295A1: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006295A4: push ebx */
    PUSH32(esp, esi); /* 0x006295A5: push esi */
    PUSH32(esp, edi); /* 0x006295A6: push edi */
    eax = MEM32(0x855000); /* 0x006295A7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006295AC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006295AE: push eax */
    eax = ebp + (-0xC); /* 0x006295AF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006295B2: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x006295B8: mov ebx, ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x006295BA: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebx + 0x1C) = 0xFu; /* 0x006295BD: mov dword ptr [ebx + 0x1c], 0xf */
    MEM32(ebx + 0x18) = 0; /* 0x006295C4: mov dword ptr [ebx + 0x18], 0 */
    MEM8(ebx + 0x8) = (uint8_t)(0); /* 0x006295CB: mov byte ptr [ebx + 8], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006295CF: mov dword ptr [ebp - 4], 0 */
    MEM32(ebx + 0x3C) = 0xFu; /* 0x006295D6: mov dword ptr [ebx + 0x3c], 0xf */
    MEM32(ebx + 0x38) = 0; /* 0x006295DD: mov dword ptr [ebx + 0x38], 0 */
    MEM8(ebx + 0x28) = (uint8_t)(0); /* 0x006295E4: mov byte ptr [ebx + 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006295E8: mov byte ptr [ebp - 4], 1 */
    MEM32(ebx + 0x54) = 0xFu; /* 0x006295EC: mov dword ptr [ebx + 0x54], 0xf */
    MEM32(ebx + 0x50) = 0; /* 0x006295F3: mov dword ptr [ebx + 0x50], 0 */
    MEM8(ebx + 0x40) = (uint8_t)(0); /* 0x006295FA: mov byte ptr [ebx + 0x40], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006295FE: mov byte ptr [ebp - 4], 2 */
    eax = ebx + 0x80; /* 0x00629602: lea eax, [ebx + 0x80] */
    PUSH32(esp, 0x0040A000u); /* 0x00629608: push 0x40a000 */
    PUSH32(esp, 0x00419660u); /* 0x0062960D: push 0x419660 */
    PUSH32(esp, 4); /* 0x00629612: push 4 */
    PUSH32(esp, 0x18u); /* 0x00629614: push 0x18 */
    PUSH32(esp, eax); /* 0x00629616: push eax */
    RECOMP_CALL(sub_0077F6F5); /* 0x00629617: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062961C: mov byte ptr [ebp - 4], 3 */
    eax = ebx + 0x4FC; /* 0x00629620: lea eax, [ebx + 0x4fc] */
    PUSH32(esp, 0x00489930u); /* 0x00629626: push 0x489930 */
    PUSH32(esp, 0x006298F0u); /* 0x0062962B: push 0x6298f0 */
    PUSH32(esp, 0x80u); /* 0x00629630: push 0x80 */
    PUSH32(esp, 0x5Cu); /* 0x00629635: push 0x5c */
    PUSH32(esp, eax); /* 0x00629637: push eax */
    RECOMP_CALL(sub_0077F6F5); /* 0x00629638: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0062963D: mov byte ptr [ebp - 4], 4 */
    MEM32(ebx + 0x3308) = 0; /* 0x00629641: mov dword ptr [ebx + 0x3308], 0 */
    MEM32(ebx + 0x330C) = 0; /* 0x0062964B: mov dword ptr [ebx + 0x330c], 0 */
    MEM32(ebx + 0x3310) = 0; /* 0x00629655: mov dword ptr [ebx + 0x3310], 0 */
    MEM32(ebx + 0x3314) = 0; /* 0x0062965F: mov dword ptr [ebx + 0x3314], 0 */
    MEM32(ebx + 0x3318) = 0; /* 0x00629669: mov dword ptr [ebx + 0x3318], 0 */
    MEM32(ebx + 0x331C) = 0; /* 0x00629673: mov dword ptr [ebx + 0x331c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0062967D: mov byte ptr [ebp - 4], 5 */
    esi = MEM32(0x870278); /* 0x00629681: mov esi, dword ptr [0x870278] */
    RECOMP_CALL(sub_006EE000); /* 0x00629687: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x0062968C: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x0062968E: push 0 */
    MEM32(ebx + 0x32FC) = eax; /* 0x00629690: mov dword ptr [ebx + 0x32fc], eax */
    MEM32(ebx + 0x3300) = 0; /* 0x00629696: mov dword ptr [ebx + 0x3300], 0 */
    MEM8(ebx + 0x3304) = (uint8_t)(1); /* 0x006296A0: mov byte ptr [ebx + 0x3304], 1 */
    RECOMP_ICALL(MEM32(0x7CC6B8)); /* 0x006296A7: call dword ptr [0x7cc6b8] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x006296AD: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006296B0: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x860A98) = eax; /* 0x006296B3: mov dword ptr [0x860a98], eax */
    /* test esi, esi */ /* 0x006296B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006296F7; /* 0x006296BA: jne 0x6296f7 */
L_006296BC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006296BC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006296BF: mov ecx, esp */
    MEM32(ebp + 0x8) = esp; /* 0x006296C1: mov dword ptr [ebp + 8], esp */
    PUSH32(esp, 0x007F9204u); /* 0x006296C4: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x006296C9: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x006296CE: mov byte ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006296D2: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x006296D5: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x006296D7: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 0x007F9238u); /* 0x006296DA: push 0x7f9238 */
    RECOMP_CALL(sub_00409FA0); /* 0x006296DF: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x006296E4: mov byte ptr [ebp - 4], 7 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x006296E8: mov byte ptr [ebp - 4], 5 */
    ecx = esi + 0x5A; /* 0x006296EC: lea ecx, [esi + 0x5a] */
    RECOMP_CALL(sub_00668DA0); /* 0x006296EF: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x006296F4: add esp, 0x30 */
    _flag_k = FK_ADD;
L_006296F7:
    PUSH32(esp, 6); /* 0x006296F7: push 6 */
    PUSH32(esp, 0x007F9230u); /* 0x006296F9: push 0x7f9230 */
    ecx = ebx + 0x8; /* 0x006296FE: lea ecx, [ebx + 8] */
    MEM32(ebx) = esi; /* 0x00629701: mov dword ptr [ebx], esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x00629703: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x00629708: push 3 */
    PUSH32(esp, 0x007F0884u); /* 0x0062970A: push 0x7f0884 */
    ecx = ebx + 0x80; /* 0x0062970F: lea ecx, [ebx + 0x80] */
    MEM32(ebx + 0x4) = 0; /* 0x00629715: mov dword ptr [ebx + 4], 0 */
    MEM32(ebx + 0x20) = 0x41200000u; /* 0x0062971C: mov dword ptr [ebx + 0x20], 0x41200000 */
    MEM8(ebx + 0x68) = (uint8_t)(1); /* 0x00629723: mov byte ptr [ebx + 0x68], 1 */
    MEM32(ebx + 0x6C) = 0x64u; /* 0x00629727: mov dword ptr [ebx + 0x6c], 0x64 */
    MEM32(ebx + 0x78) = 0x50u; /* 0x0062972E: mov dword ptr [ebx + 0x78], 0x50 */
    MEM32(ebx + 0x70) = 0x50u; /* 0x00629735: mov dword ptr [ebx + 0x70], 0x50 */
    MEM32(ebx + 0x74) = 0x3Cu; /* 0x0062973C: mov dword ptr [ebx + 0x74], 0x3c */
    MEM32(ebx + 0x7C) = 0x32u; /* 0x00629743: mov dword ptr [ebx + 0x7c], 0x32 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062974A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x0062974F: push 3 */
    PUSH32(esp, 0x007F0884u); /* 0x00629751: push 0x7f0884 */
    ecx = ebx + 0x98; /* 0x00629756: lea ecx, [ebx + 0x98] */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062975C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x00629761: push 4 */
    PUSH32(esp, 0x007E5524u); /* 0x00629763: push 0x7e5524 */
    ecx = ebx + 0xB0; /* 0x00629768: lea ecx, [ebx + 0xb0] */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062976E: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x00629773: push 6 */
    PUSH32(esp, 0x007EFFCCu); /* 0x00629775: push 0x7effcc */
    ecx = ebx + 0xC8; /* 0x0062977A: lea ecx, [ebx + 0xc8] */
    RECOMP_CALL(sub_0040A2F0); /* 0x00629780: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x00629785: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x00629787: push 0x7cd0c4 */
    ecx = ebx + 0x28; /* 0x0062978C: lea ecx, [ebx + 0x28] */
    MEM8(ebx + 0x24) = (uint8_t)(0); /* 0x0062978F: mov byte ptr [ebx + 0x24], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00629793: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00629798: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx + 0xFC; /* 0x0062979A: lea edi, [ebx + 0xfc] */
    MEM16(ebx + 0xE0) = (uint16_t)(LO16(eax)); /* 0x006297A0: mov word ptr [ebx + 0xe0], ax */
    ecx = 0x100u; /* 0x006297A7: mov ecx, 0x100 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x006297AC: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    MEM32(ebp + (-0x24)) = eax; /* 0x006297AE: mov dword ptr [ebp - 0x24], eax */
    edx = 0x80u; /* 0x006297B1: mov edx, 0x80 */
    MEM32(ebp + (-0x20)) = eax; /* 0x006297B6: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x006297B9: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0].u64[0] = MEM64(ebp + (-0x24)); _xmm[0].u64[1] = 0; /* 0x006297BC: movq xmm0, qword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x006297C1: mov dword ptr [ebp - 0x1c], eax */
    eax = ebx + 0x514; /* 0x006297C4: lea eax, [ebx + 0x514] */
    esi = MEM32(ebp + (-0x1C)); /* 0x006297CA: mov esi, dword ptr [ebp - 0x1c] */
    ecx = ecx; /* 0x006297CD: lea ecx, [ecx] */
L_006297D0:
    MEM8(eax + 0x41) = (uint8_t)(1); /* 0x006297D0: mov byte ptr [eax + 0x41], 1 */
    MEM8(eax + 0x5) = (uint8_t)(0); /* 0x006297D4: mov byte ptr [eax + 5], 0 */
    MEM32(eax + 0x14) = 0; /* 0x006297D8: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x006297DF: mov dword ptr [eax + 0x18], 0 */
    /* cmp MEM32(eax), 0x10u */ /* 0x006297E6: cmp dword ptr [eax], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax + (-0x4)) = 0; /* 0x006297E9: mov dword ptr [eax - 4], 0 */
    if (CMP_B(_flag_a, _flag_b)) goto L_006297F7; /* 0x006297F0: jb 0x6297f7 */
L_006297F2:
    ecx = MEM32(eax + (-0x14)); /* 0x006297F2: mov ecx, dword ptr [eax - 0x14] */
    goto L_006297FA; /* 0x006297F5: jmp 0x6297fa */
L_006297F7:
    ecx = eax + (-0x14); /* 0x006297F7: lea ecx, [eax - 0x14] */
L_006297FA:
    MEM8(ecx) = (uint8_t)(0); /* 0x006297FA: mov byte ptr [ecx], 0 */
    MEM64(eax + 0x2C) = _xmm[0].u64[0]; /* 0x006297FD: movq qword ptr [eax + 0x2c], xmm0 */
    MEM32(eax + 0x8) = 0xFFFFFFFFu; /* 0x00629802: mov dword ptr [eax + 8], 0xffffffff */
    MEM8(eax + (-0x18)) = (uint8_t)(0); /* 0x00629809: mov byte ptr [eax - 0x18], 0 */
    MEM8(eax + 0x4) = (uint8_t)(1); /* 0x0062980D: mov byte ptr [eax + 4], 1 */
    MEM8(eax + 0x1C) = (uint8_t)(0); /* 0x00629811: mov byte ptr [eax + 0x1c], 0 */
    MEM8(eax + 0x40) = (uint8_t)(0); /* 0x00629815: mov byte ptr [eax + 0x40], 0 */
    MEM32(eax + 0x3C) = 0xFFFFFFFFu; /* 0x00629819: mov dword ptr [eax + 0x3c], 0xffffffff */
    MEM32(eax + 0x38) = 0; /* 0x00629820: mov dword ptr [eax + 0x38], 0 */
    MEM32(eax + 0xC) = 0; /* 0x00629827: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x34) = esi; /* 0x0062982E: mov dword ptr [eax + 0x34], esi */
    MEM16(eax + 0x10) = (uint16_t)(LO16(edi)); /* 0x00629831: mov word ptr [eax + 0x10], di */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x5Cu; /* 0x00629835: add eax, 0x5c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x00629838: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006297D0; /* 0x00629839: jne 0x6297d0 */
L_0062983B:
    ecx = ebx; /* 0x0062983B: mov ecx, ebx */
    MEM32(ebx + 0xE4) = 0x40A00000u; /* 0x0062983D: mov dword ptr [ebx + 0xe4], 0x40a00000 */
    MEM32(ebx + 0xF0) = 0x42700000u; /* 0x00629847: mov dword ptr [ebx + 0xf0], 0x42700000 */
    MEM32(ebx + 0xE8) = 0x41200000u; /* 0x00629851: mov dword ptr [ebx + 0xe8], 0x41200000 */
    MEM32(ebx + 0xF4) = 0x42C80000u; /* 0x0062985B: mov dword ptr [ebx + 0xf4], 0x42c80000 */
    MEM32(ebx + 0xEC) = 0x41A00000u; /* 0x00629865: mov dword ptr [ebx + 0xec], 0x41a00000 */
    MEM32(ebx + 0xF8) = 0x43960000u; /* 0x0062986F: mov dword ptr [ebx + 0xf8], 0x43960000 */
    RECOMP_CALL(sub_00629AF0); /* 0x00629879: call 0x629af0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0001AF48u); /* 0x0062987E: push 0x1af48 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x00629883: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00629889: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x0062988C: mov dword ptr [ebp + 8], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0062988F: mov byte ptr [ebp - 4], 8 */
    /* test eax, eax */ /* 0x00629893: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006298A0; /* 0x00629895: je 0x6298a0 */
L_00629897:
    ecx = eax; /* 0x00629897: mov ecx, eax */
    RECOMP_CALL(sub_0061C510); /* 0x00629899: call 0x61c510 */
    RECOMP_FLAGS_IN();
    goto L_006298A2; /* 0x0062989E: jmp 0x6298a2 */
L_006298A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006298A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006298A2:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x006298A2: mov byte ptr [ebp - 4], 5 */
    ecx = eax + 0x1D0; /* 0x006298A6: lea ecx, [eax + 0x1d0] */
    PUSH32(esp, 0); /* 0x006298AC: push 0 */
    MEM32(ebx + 0x64) = eax; /* 0x006298AE: mov dword ptr [ebx + 0x64], eax */
    RECOMP_CALL(sub_006E0840); /* 0x006298B1: call 0x6e0840 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x006298B6: mov ecx, ebx */
    RECOMP_CALL(sub_0062A740); /* 0x006298B8: call 0x62a740 */
    RECOMP_FLAGS_IN();
    MEM8(0x86DE6B) = (uint8_t)(1); /* 0x006298BD: mov byte ptr [0x86de6b], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006298C4: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx; /* 0x006298CB: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x006298CD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006298D0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006298D7: pop ecx */
    edi = POP32_VAL(esp); /* 0x006298D8: pop edi */
    esi = POP32_VAL(esp); /* 0x006298D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x006298DA: pop ebx */
    esp = ebp; /* 0x006298DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006298DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006298DE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006298F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006298F0u);

L_006298F0:
    PUSH32(esp, ebp); /* 0x006298F0: push ebp */
    ebp = esp; /* 0x006298F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006298F3: push -1 */
    PUSH32(esp, 0x007B830Bu); /* 0x006298F5: push 0x7b830b */
    eax = MEM32(FS_BASE + (0)); /* 0x006298FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00629900: push eax */
    PUSH32(esp, ecx); /* 0x00629901: push ecx */
    eax = MEM32(0x855000); /* 0x00629902: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00629907: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00629909: push eax */
    eax = ebp + (-0xC); /* 0x0062990A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062990D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00629913: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ecx + 0x18) = 0xFu; /* 0x00629916: mov dword ptr [ecx + 0x18], 0xf */
    MEM32(ecx + 0x14) = 0; /* 0x0062991D: mov dword ptr [ecx + 0x14], 0 */
    MEM8(ecx + 0x4) = (uint8_t)(0); /* 0x00629924: mov byte ptr [ecx + 4], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x00629928: mov dword ptr [ebp - 4], 0 */
    MEM32(ecx + 0x38) = 0; /* 0x0062992F: mov dword ptr [ecx + 0x38], 0 */
    MEM32(ecx + 0x3C) = 0; /* 0x00629936: mov dword ptr [ecx + 0x3c], 0 */
    MEM32(ecx + 0x40) = 0; /* 0x0062993D: mov dword ptr [ecx + 0x40], 0 */
    MEM32(ecx + 0x44) = 0; /* 0x00629944: mov dword ptr [ecx + 0x44], 0 */
    MEM32(ecx + 0x48) = 0; /* 0x0062994B: mov dword ptr [ecx + 0x48], 0 */
    MEM32(ecx + 0x4C) = 0; /* 0x00629952: mov dword ptr [ecx + 0x4c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00629959: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ecx; /* 0x00629960: mov eax, ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x00629962: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00629965: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062996C: pop ecx */
    esp = ebp; /* 0x0062996D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062996F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00629970: ret  */
    RECOMP_REGS_OUT();
}

void sub_00629980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629980u);

L_00629980:
    PUSH32(esp, ebp); /* 0x00629980: push ebp */
    ebp = esp; /* 0x00629981: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00629983: push -1 */
    PUSH32(esp, 0x007B8392u); /* 0x00629985: push 0x7b8392 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062998A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00629990: push eax */
    PUSH32(esp, ecx); /* 0x00629991: push ecx */
    PUSH32(esp, ebx); /* 0x00629992: push ebx */
    PUSH32(esp, esi); /* 0x00629993: push esi */
    PUSH32(esp, edi); /* 0x00629994: push edi */
    eax = MEM32(0x855000); /* 0x00629995: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062999A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062999C: push eax */
    eax = ebp + (-0xC); /* 0x0062999D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006299A0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006299A6: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006299A8: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 5; /* 0x006299AB: mov dword ptr [ebp - 4], 5 */
    ecx = MEM32(esi + 0x64); /* 0x006299B2: mov ecx, dword ptr [esi + 0x64] */
    MEM8(0x86DE6B) = (uint8_t)(0); /* 0x006299B5: mov byte ptr [0x86de6b], 0 */
    RECOMP_CALL(sub_0061CA20); /* 0x006299BC: call 0x61ca20 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi + 0x64); /* 0x006299C1: mov ebx, dword ptr [esi + 0x64] */
    edi = MEM32(0x7CC694); /* 0x006299C4: mov edi, dword ptr [0x7cc694] */
    /* test ebx, ebx */ /* 0x006299CA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006299DB; /* 0x006299CC: je 0x6299db */
L_006299CE:
    ecx = ebx; /* 0x006299CE: mov ecx, ebx */
    RECOMP_CALL(sub_0061C6F0); /* 0x006299D0: call 0x61c6f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x006299D5: push ebx */
    RECOMP_ICALL(edi); /* 0x006299D6: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006299D8: add esp, 4 */
    _flag_k = FK_ADD;
L_006299DB:
    ecx = esi; /* 0x006299DB: mov ecx, esi */
    MEM32(esi + 0x64) = 0; /* 0x006299DD: mov dword ptr [esi + 0x64], 0 */
    RECOMP_CALL(sub_00629C10); /* 0x006299E4: call 0x629c10 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006299E9: mov ecx, esi */
    RECOMP_CALL(sub_00630570); /* 0x006299EB: call 0x630570 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x006299F0: mov byte ptr [ebp - 4], 4 */
    ecx = MEM32(esi + 0x3314); /* 0x006299F4: mov ecx, dword ptr [esi + 0x3314] */
    /* test ecx, ecx */ /* 0x006299FA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00629A36; /* 0x006299FC: je 0x629a36 */
L_006299FE:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x006299FE: push dword ptr [ebp - 0x10] */
    edx = MEM32(esi + 0x3318); /* 0x00629A01: mov edx, dword ptr [esi + 0x3318] */
    PUSH32(esp, ecx); /* 0x00629A07: push ecx */
    RECOMP_CALL(sub_00630B70); /* 0x00629A08: call 0x630b70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x3314)); /* 0x00629A0D: push dword ptr [esi + 0x3314] */
    RECOMP_ICALL(edi); /* 0x00629A13: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00629A15: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x3314) = 0; /* 0x00629A18: mov dword ptr [esi + 0x3314], 0 */
    MEM32(esi + 0x3318) = 0; /* 0x00629A22: mov dword ptr [esi + 0x3318], 0 */
    MEM32(esi + 0x331C) = 0; /* 0x00629A2C: mov dword ptr [esi + 0x331c], 0 */
L_00629A36:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00629A36: mov byte ptr [ebp - 4], 3 */
    eax = esi + 0x4FC; /* 0x00629A3A: lea eax, [esi + 0x4fc] */
    PUSH32(esp, 0x00489930u); /* 0x00629A40: push 0x489930 */
    PUSH32(esp, 0x80u); /* 0x00629A45: push 0x80 */
    PUSH32(esp, 0x5Cu); /* 0x00629A4A: push 0x5c */
    PUSH32(esp, eax); /* 0x00629A4C: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x00629A4D: call 0x77f628 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00629A52: mov byte ptr [ebp - 4], 2 */
    eax = esi + 0x80; /* 0x00629A56: lea eax, [esi + 0x80] */
    PUSH32(esp, 0x0040A000u); /* 0x00629A5C: push 0x40a000 */
    PUSH32(esp, 4); /* 0x00629A61: push 4 */
    PUSH32(esp, 0x18u); /* 0x00629A63: push 0x18 */
    PUSH32(esp, eax); /* 0x00629A65: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x00629A66: call 0x77f628 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00629A6B: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(esi + 0x54), 0x10u */ /* 0x00629A6F: cmp dword ptr [esi + 0x54], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00629A7D; /* 0x00629A73: jb 0x629a7d */
L_00629A75:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x00629A75: push dword ptr [esi + 0x40] */
    RECOMP_ICALL(edi); /* 0x00629A78: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00629A7A: add esp, 4 */
    _flag_k = FK_ADD;
L_00629A7D:
    MEM32(esi + 0x54) = 0xFu; /* 0x00629A7D: mov dword ptr [esi + 0x54], 0xf */
    MEM32(esi + 0x50) = 0; /* 0x00629A84: mov dword ptr [esi + 0x50], 0 */
    MEM8(esi + 0x40) = (uint8_t)(0); /* 0x00629A8B: mov byte ptr [esi + 0x40], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x00629A8F: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(esi + 0x3C), 0x10u */ /* 0x00629A93: cmp dword ptr [esi + 0x3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00629AA1; /* 0x00629A97: jb 0x629aa1 */
L_00629A99:
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x00629A99: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(edi); /* 0x00629A9C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00629A9E: add esp, 4 */
    _flag_k = FK_ADD;
L_00629AA1:
    MEM32(esi + 0x3C) = 0xFu; /* 0x00629AA1: mov dword ptr [esi + 0x3c], 0xf */
    MEM32(esi + 0x38) = 0; /* 0x00629AA8: mov dword ptr [esi + 0x38], 0 */
    MEM8(esi + 0x28) = (uint8_t)(0); /* 0x00629AAF: mov byte ptr [esi + 0x28], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00629AB3: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x1C), 0x10u */ /* 0x00629ABA: cmp dword ptr [esi + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00629AC8; /* 0x00629ABE: jb 0x629ac8 */
L_00629AC0:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x00629AC0: push dword ptr [esi + 8] */
    RECOMP_ICALL(edi); /* 0x00629AC3: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00629AC5: add esp, 4 */
    _flag_k = FK_ADD;
L_00629AC8:
    MEM32(esi + 0x1C) = 0xFu; /* 0x00629AC8: mov dword ptr [esi + 0x1c], 0xf */
    MEM32(esi + 0x18) = 0; /* 0x00629ACF: mov dword ptr [esi + 0x18], 0 */
    MEM8(esi + 0x8) = (uint8_t)(0); /* 0x00629AD6: mov byte ptr [esi + 8], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00629ADA: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00629ADD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00629AE4: pop ecx */
    edi = POP32_VAL(esp); /* 0x00629AE5: pop edi */
    esi = POP32_VAL(esp); /* 0x00629AE6: pop esi */
    ebx = POP32_VAL(esp); /* 0x00629AE7: pop ebx */
    esp = ebp; /* 0x00629AE8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00629AEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00629AEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_00629AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629AF0u);

L_00629AF0:
    PUSH32(esp, ebp); /* 0x00629AF0: push ebp */
    ebp = esp; /* 0x00629AF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x00629AF3: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00629AF6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00629AFB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00629AFD: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x00629B00: push ebx */
    PUSH32(esp, esi); /* 0x00629B01: push esi */
    esi = ecx; /* 0x00629B02: mov esi, ecx */
    PUSH32(esp, edi); /* 0x00629B04: push edi */
    PUSH32(esp, 0); /* 0x00629B05: push 0 */
    edi = esi + 0x58; /* 0x00629B07: lea edi, [esi + 0x58] */
    MEM32(esi + 0x5C) = 0; /* 0x00629B0A: mov dword ptr [esi + 0x5c], 0 */
    ebx = esi + 0x5C; /* 0x00629B11: lea ebx, [esi + 0x5c] */
    MEM32(edi) = 0; /* 0x00629B14: mov dword ptr [edi], 0 */
    PUSH32(esp, edi); /* 0x00629B1A: push edi */
    PUSH32(esp, 0); /* 0x00629B1B: push 0 */
    MEM32(esi + 0x60) = 0; /* 0x00629B1D: mov dword ptr [esi + 0x60], 0 */
    MEM32(esi + 0x64) = 0; /* 0x00629B24: mov dword ptr [esi + 0x64], 0 */
    RECOMP_ICALL(MEM32(0x7CC020)); /* 0x00629B2B: call dword ptr [0x7cc020] */
    RECOMP_FLAGS_IN();
    MEM32(0x870274) = eax; /* 0x00629B31: mov dword ptr [0x870274], eax */
    /* test eax, eax */ /* 0x00629B36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00629BF6; /* 0x00629B38: jne 0x629bf6 */
L_00629B3E:
    eax = MEM32(edi); /* 0x00629B3E: mov eax, dword ptr [edi] */
    PUSH32(esp, 2); /* 0x00629B40: push 2 */
    PUSH32(esp, MEM32(esi)); /* 0x00629B42: push dword ptr [esi] */
    ecx = MEM32(eax); /* 0x00629B44: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x00629B46: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x00629B47: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(0x870274) = eax; /* 0x00629B4A: mov dword ptr [0x870274], eax */
    /* test eax, eax */ /* 0x00629B4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00629BF6; /* 0x00629B51: jne 0x629bf6 */
L_00629B57:
    MEM32(ebp + (-0x1C)) = eax; /* 0x00629B57: mov dword ptr [ebp - 0x1c], eax */
    edx = ebp + (-0x3C); /* 0x00629B5A: lea edx, [ebp - 0x3c] */
    eax = MEM32(edi); /* 0x00629B5D: mov eax, dword ptr [edi] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00629B5F: xorps xmm0, xmm0 */
    PUSH32(esp, 0); /* 0x00629B62: push 0 */
    xmm_st(ebp + (-0x3C), _xmm[0]); /* 0x00629B64: movdqu xmmword ptr [ebp - 0x3c], xmm0 */
    PUSH32(esp, ebx); /* 0x00629B69: push ebx */
    xmm_st(ebp + (-0x2C), _xmm[0]); /* 0x00629B6A: movdqu xmmword ptr [ebp - 0x2c], xmm0 */
    MEM32(ebp + (-0x3C)) = 0x24u; /* 0x00629B6F: mov dword ptr [ebp - 0x3c], 0x24 */
    MEM32(ebp + (-0x38)) = 0x91u; /* 0x00629B76: mov dword ptr [ebp - 0x38], 0x91 */
    ecx = MEM32(eax); /* 0x00629B7D: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x00629B7F: push edx */
    PUSH32(esp, eax); /* 0x00629B80: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x00629B81: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(0x870274) = eax; /* 0x00629B84: mov dword ptr [0x870274], eax */
    /* test eax, eax */ /* 0x00629B89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00629BF6; /* 0x00629B8B: jne 0x629bf6 */
L_00629B8D:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00629B8D: xorps xmm0, xmm0 */
    edx = ebp + (-0x18); /* 0x00629B90: lea edx, [ebp - 0x18] */
    xmm_st(ebp + (-0x18), _xmm[0]); /* 0x00629B93: movdqu xmmword ptr [ebp - 0x18], xmm0 */
    eax = 4; /* 0x00629B98: mov eax, 4 */
    MEM32(ebp + (-0xA)) = 0x10u; /* 0x00629B9D: mov dword ptr [ebp - 0xa], 0x10 */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x00629BA4: mov word ptr [ebp - 0xc], ax */
    eax = MEM32(ebx); /* 0x00629BA8: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x18)) = 0x00020001u; /* 0x00629BAA: mov dword ptr [ebp - 0x18], 0x20001 */
    MEM32(ebp + (-0x14)) = 0xAC44u; /* 0x00629BB1: mov dword ptr [ebp - 0x14], 0xac44 */
    MEM32(ebp + (-0x10)) = 0x0002B110u; /* 0x00629BB8: mov dword ptr [ebp - 0x10], 0x2b110 */
    ecx = MEM32(eax); /* 0x00629BBF: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x00629BC1: push edx */
    PUSH32(esp, eax); /* 0x00629BC2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x38)); /* 0x00629BC3: call dword ptr [ecx + 0x38] */
    RECOMP_FLAGS_IN();
    MEM32(0x870274) = eax; /* 0x00629BC6: mov dword ptr [0x870274], eax */
    /* test eax, eax */ /* 0x00629BCB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00629BF6; /* 0x00629BCD: jne 0x629bf6 */
L_00629BCF:
    eax = MEM32(ebx); /* 0x00629BCF: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x00629BD1: push 1 */
    PUSH32(esp, 0); /* 0x00629BD3: push 0 */
    PUSH32(esp, 0); /* 0x00629BD5: push 0 */
    ecx = MEM32(eax); /* 0x00629BD7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x00629BD9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x00629BDA: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x00629BDD: mov eax, dword ptr [ebx] */
    edx = esi + 0x60; /* 0x00629BDF: lea edx, [esi + 0x60] */
    PUSH32(esp, edx); /* 0x00629BE2: push edx */
    PUSH32(esp, 0x007F57D8u); /* 0x00629BE3: push 0x7f57d8 */
    PUSH32(esp, eax); /* 0x00629BE8: push eax */
    ecx = MEM32(eax); /* 0x00629BE9: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx)); /* 0x00629BEB: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    MEM32(0x870274) = eax; /* 0x00629BED: mov dword ptr [0x870274], eax */
    /* test eax, eax */ /* 0x00629BF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00629BFA; /* 0x00629BF4: je 0x629bfa */
L_00629BF6:
    MEM8(esi + 0x68) = (uint8_t)(0); /* 0x00629BF6: mov byte ptr [esi + 0x68], 0 */
L_00629BFA:
    ecx = MEM32(ebp + (-0x4)); /* 0x00629BFA: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x00629BFD: pop edi */
    esi = POP32_VAL(esp); /* 0x00629BFE: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00629BFF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00629C01: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x00629C02: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00629C07: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00629C09: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00629C0A: ret  */
    RECOMP_REGS_OUT();
}

void sub_00629C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629C10u);

L_00629C10:
    PUSH32(esp, ebp); /* 0x00629C10: push ebp */
    ebp = esp; /* 0x00629C11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00629C13: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00629C16: push -1 */
    PUSH32(esp, 0x0078B2C0u); /* 0x00629C18: push 0x78b2c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x00629C1D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00629C23: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00629C24: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00629C27: push esi */
    eax = MEM32(0x855000); /* 0x00629C28: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x00629C2D: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00629C2F: push eax */
    eax = esp + 0x18; /* 0x00629C30: lea eax, [esp + 0x18] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00629C34: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00629C3A: mov esi, ecx */
    /* cmp MEM32(esi + 0x64), 0 */ /* 0x00629C3C: cmp dword ptr [esi + 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x64)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00629C8A; /* 0x00629C40: je 0x629c8a */
L_00629C42:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00629C42: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00629C45: mov ecx, esp */
    MEM32(esp + 0x24) = esp; /* 0x00629C47: mov dword ptr [esp + 0x24], esp */
    PUSH32(esp, 0x007F9204u); /* 0x00629C4B: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x00629C50: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0; /* 0x00629C55: mov dword ptr [esp + 0x38], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00629C5D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00629C60: mov ecx, esp */
    MEM32(esp + 0x40) = esp; /* 0x00629C62: mov dword ptr [esp + 0x40], esp */
    PUSH32(esp, 0x007F9268u); /* 0x00629C66: push 0x7f9268 */
    RECOMP_CALL(sub_00409FA0); /* 0x00629C6B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x50) = (uint8_t)(1); /* 0x00629C70: mov byte ptr [esp + 0x50], 1 */
    MEM32(esp + 0x50) = 0xFFFFFFFFu; /* 0x00629C75: mov dword ptr [esp + 0x50], 0xffffffff */
    ecx = 0x14Du; /* 0x00629C7D: mov ecx, 0x14d */
    RECOMP_CALL(sub_00668DA0); /* 0x00629C82: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00629C87: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00629C8A:
    ecx = MEM32(esi + 0x60); /* 0x00629C8A: mov ecx, dword ptr [esi + 0x60] */
    /* test ecx, ecx */ /* 0x00629C8D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00629C9E; /* 0x00629C8F: je 0x629c9e */
L_00629C91:
    eax = MEM32(ecx); /* 0x00629C91: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x00629C93: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x00629C94: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x60) = 0; /* 0x00629C97: mov dword ptr [esi + 0x60], 0 */
L_00629C9E:
    ecx = MEM32(esi + 0x5C); /* 0x00629C9E: mov ecx, dword ptr [esi + 0x5c] */
    /* test ecx, ecx */ /* 0x00629CA1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00629CB2; /* 0x00629CA3: je 0x629cb2 */
L_00629CA5:
    eax = MEM32(ecx); /* 0x00629CA5: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x00629CA7: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x00629CA8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x5C) = 0; /* 0x00629CAB: mov dword ptr [esi + 0x5c], 0 */
L_00629CB2:
    ecx = MEM32(esi + 0x58); /* 0x00629CB2: mov ecx, dword ptr [esi + 0x58] */
    /* test ecx, ecx */ /* 0x00629CB5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00629D1F; /* 0x00629CB7: je 0x629d1f */
L_00629CB9:
    eax = MEM32(ecx); /* 0x00629CB9: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x00629CBB: push 1 */
    PUSH32(esp, MEM32(esi)); /* 0x00629CBD: push dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x00629CBF: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x00629CC0: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x58); /* 0x00629CC3: mov eax, dword ptr [esi + 0x58] */
    PUSH32(esp, eax); /* 0x00629CC6: push eax */
    ecx = MEM32(eax); /* 0x00629CC7: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x00629CC9: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00629CCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00629D18; /* 0x00629CCE: je 0x629d18 */
L_00629CD0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00629CD0: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00629CD3: mov ecx, esp */
    MEM32(esp + 0x28) = esp; /* 0x00629CD5: mov dword ptr [esp + 0x28], esp */
    PUSH32(esp, 0x007F9204u); /* 0x00629CD9: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x00629CDE: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 2; /* 0x00629CE3: mov dword ptr [esp + 0x38], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x00629CEB: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x00629CEE: mov ecx, esp */
    MEM32(esp + 0x3C) = esp; /* 0x00629CF0: mov dword ptr [esp + 0x3c], esp */
    PUSH32(esp, 0x007F9248u); /* 0x00629CF4: push 0x7f9248 */
    RECOMP_CALL(sub_00409FA0); /* 0x00629CF9: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x50) = (uint8_t)(3); /* 0x00629CFE: mov byte ptr [esp + 0x50], 3 */
    MEM32(esp + 0x50) = 0xFFFFFFFFu; /* 0x00629D03: mov dword ptr [esp + 0x50], 0xffffffff */
    ecx = 0x165u; /* 0x00629D0B: mov ecx, 0x165 */
    RECOMP_CALL(sub_00668DA0); /* 0x00629D10: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x00629D15: add esp, 0x30 */
    _flag_k = FK_ADD;
L_00629D18:
    MEM32(esi + 0x58) = 0; /* 0x00629D18: mov dword ptr [esi + 0x58], 0 */
L_00629D1F:
    ecx = MEM32(esp + 0x18); /* 0x00629D1F: mov ecx, dword ptr [esp + 0x18] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00629D23: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00629D2A: pop ecx */
    esi = POP32_VAL(esp); /* 0x00629D2B: pop esi */
    esp = ebp; /* 0x00629D2C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00629D2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00629D2F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00629D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00629D30u);

L_00629D30:
    PUSH32(esp, ebp); /* 0x00629D30: push ebp */
    ebp = esp; /* 0x00629D31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00629D33: push -1 */
    PUSH32(esp, 0x007B843Bu); /* 0x00629D35: push 0x7b843b */
    eax = MEM32(FS_BASE + (0)); /* 0x00629D3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00629D40: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC4u; /* 0x00629D41: sub esp, 0xc4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00629D47: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00629D4C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00629D4E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x00629D51: push ebx */
    PUSH32(esp, esi); /* 0x00629D52: push esi */
    PUSH32(esp, edi); /* 0x00629D53: push edi */
    PUSH32(esp, eax); /* 0x00629D54: push eax */
    eax = ebp + (-0xC); /* 0x00629D55: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00629D58: mov dword ptr fs:[0], eax */
    PUSH32(esp, 6); /* 0x00629D5E: push 6 */
    MEM32(ebp + (-0x18)) = 0; /* 0x00629D60: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x00629D67: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x00629D6A: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007ED4C4u); /* 0x00629D71: push 0x7ed4c4 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00629D76: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00629D7D: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00629D84: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00629D88: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x00629D8D: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(0x8780CC); /* 0x00629D94: mov ecx, dword ptr [0x8780cc] */
    /* test ecx, ecx */ /* 0x00629D9A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00629DAD; /* 0x00629D9C: je 0x629dad */
L_00629D9E:
    ecx = MEM32(ecx + 0xC0); /* 0x00629D9E: mov ecx, dword ptr [ecx + 0xc0] */
    eax = ebp + (-0x28); /* 0x00629DA4: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x00629DA7: push eax */
    RECOMP_CALL(sub_00671CA0); /* 0x00629DA8: call 0x671ca0 */
    RECOMP_FLAGS_IN();
L_00629DAD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00629DAD: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00629DB4: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x00629DB8: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_00629DC8; /* 0x00629DBE: jb 0x629dc8 */
L_00629DC0:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00629DC0: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x00629DC3: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00629DC5: add esp, 4 */
    _flag_k = FK_ADD;
L_00629DC8:
    ecx = ebp + (-0xD0); /* 0x00629DC8: lea ecx, [ebp - 0xd0] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00629DCE: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00629DD5: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00629DDC: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0052D7C0); /* 0x00629DE0: call 0x52d7c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x00629DE5: mov dword ptr [ebp - 4], 1 */
    ecx = ebp + (-0x80); /* 0x00629DEC: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053C6C0); /* 0x00629DEF: call 0x53c6c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x00629DF4: push 0xa */
    MEM32(ebp + (-0x30)) = 0; /* 0x00629DF6: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x00629DFD: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00629E00: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F91A4u); /* 0x00629E07: push 0x7f91a4 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x00629E0C: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x00629E13: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x00629E1A: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00629E1E: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x00629E23: mov byte ptr [ebp - 4], 2 */
    ebx = ebp + (-0x40); /* 0x00629E27: lea ebx, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x00629E2A: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x40)); } /* 0x00629E2E: cmovae ebx, dword ptr [ebp - 0x40] */
    esi = ebx; /* 0x00629E32: mov esi, ebx */
    /* cmp MEM8(ebx), 0 */ /* 0x00629E34: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00629E46; /* 0x00629E37: je 0x629e46 */
L_00629E39:
    esp = esp; /* 0x00629E39: lea esp, [esp] */
L_00629E40:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00629E40: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x00629E41: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00629E40; /* 0x00629E44: jne 0x629e40 */
L_00629E46:
    PUSH32(esp, ecx); /* 0x00629E46: push ecx */
    ecx = ebp + (-0x80); /* 0x00629E47: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x00629E4A: call 0x53d290 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x00629E4F: sub esi, ebx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x80); /* 0x00629E51: lea ecx, [ebp - 0x80] */
    PUSH32(esp, esi); /* 0x00629E54: push esi */
    PUSH32(esp, ebx); /* 0x00629E55: push ebx */
    RECOMP_CALL(sub_0053D3C0); /* 0x00629E56: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00629E5B: push ecx */
    ecx = ebp + (-0x80); /* 0x00629E5C: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x00629E5F: call 0x53d290 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x80)); /* 0x00629E64: mov ebx, dword ptr [ebp - 0x80] */
    eax = MEM32(ebx + 0xC); /* 0x00629E67: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xBu; /* 0x00629E6A: add eax, 0xb */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x10) */ /* 0x00629E6D: cmp eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00629E7B; /* 0x00629E70: jbe 0x629e7b */
L_00629E72:
    PUSH32(esp, 0xBu); /* 0x00629E72: push 0xb */
    ecx = ebx; /* 0x00629E74: mov ecx, ebx */
    RECOMP_CALL(sub_0053EDC0); /* 0x00629E76: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_00629E7B:
    esi = MEM32(ebx + 0xC); /* 0x00629E7B: mov esi, dword ptr [ebx + 0xc] */
    ecx = 0x64u; /* 0x00629E7E: mov ecx, 0x64 */
    edx = esi; /* 0x00629E83: mov edx, esi */
    eax = esi + 0xB; /* 0x00629E85: lea eax, [esi + 0xb] */
    MEM32(ebx + 0xC) = eax; /* 0x00629E88: mov dword ptr [ebx + 0xc], eax */
    RECOMP_CALL(sub_0052C800); /* 0x00629E8B: call 0x52c800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x80)); /* 0x00629E90: mov ecx, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x00629E93: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x00629E95: sub eax, 0xb */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + eax; /* 0x00629E98: add dword ptr [ecx + 0xc], eax */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00629E9B: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x00629E9F: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00629EAD; /* 0x00629EA3: jb 0x629ead */
L_00629EA5:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x00629EA5: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x00629EA8: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00629EAA: add esp, 4 */
    _flag_k = FK_ADD;
L_00629EAD:
    PUSH32(esp, 0xCu); /* 0x00629EAD: push 0xc */
    MEM32(ebp + (-0x18)) = 0; /* 0x00629EAF: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x00629EB6: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x00629EB9: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F9194u); /* 0x00629EC0: push 0x7f9194 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x00629EC5: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x00629ECC: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x00629ED3: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00629ED7: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00629EDE: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00629EE5: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00629EE9: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x00629EEE: mov byte ptr [ebp - 4], 3 */
    ebx = ebp + (-0x28); /* 0x00629EF2: lea ebx, [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00629EF5: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x28)); } /* 0x00629EF9: cmovae ebx, dword ptr [ebp - 0x28] */
    esi = ebx; /* 0x00629EFD: mov esi, ebx */
    /* cmp MEM8(ebx), 0 */ /* 0x00629EFF: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00629F0A; /* 0x00629F02: je 0x629f0a */
L_00629F04:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00629F04: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x00629F05: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00629F04; /* 0x00629F08: jne 0x629f04 */
L_00629F0A:
    PUSH32(esp, ecx); /* 0x00629F0A: push ecx */
    ecx = ebp + (-0x80); /* 0x00629F0B: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x00629F0E: call 0x53d290 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x00629F13: sub esi, ebx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x80); /* 0x00629F15: lea ecx, [ebp - 0x80] */
    PUSH32(esp, esi); /* 0x00629F18: push esi */
    PUSH32(esp, ebx); /* 0x00629F19: push ebx */
    RECOMP_CALL(sub_0053D3C0); /* 0x00629F1A: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00629F1F: push ecx */
    ecx = ebp + (-0x80); /* 0x00629F20: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x00629F23: call 0x53d290 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x80)); /* 0x00629F28: mov ebx, dword ptr [ebp - 0x80] */
    eax = MEM32(ebx + 0xC); /* 0x00629F2B: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xBu; /* 0x00629F2E: add eax, 0xb */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x10) */ /* 0x00629F31: cmp eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00629F3F; /* 0x00629F34: jbe 0x629f3f */
L_00629F36:
    PUSH32(esp, 0xBu); /* 0x00629F36: push 0xb */
    ecx = ebx; /* 0x00629F38: mov ecx, ebx */
    RECOMP_CALL(sub_0053EDC0); /* 0x00629F3A: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_00629F3F:
    esi = MEM32(ebx + 0xC); /* 0x00629F3F: mov esi, dword ptr [ebx + 0xc] */
    ecx = 0x64u; /* 0x00629F42: mov ecx, 0x64 */
    edx = esi; /* 0x00629F47: mov edx, esi */
    eax = esi + 0xB; /* 0x00629F49: lea eax, [esi + 0xb] */
    MEM32(ebx + 0xC) = eax; /* 0x00629F4C: mov dword ptr [ebx + 0xc], eax */
    RECOMP_CALL(sub_0052C800); /* 0x00629F4F: call 0x52c800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x80)); /* 0x00629F54: mov ecx, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x00629F57: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x00629F59: sub eax, 0xb */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + eax; /* 0x00629F5C: add dword ptr [ecx + 0xc], eax */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x00629F5F: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x00629F63: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00629F71; /* 0x00629F67: jb 0x629f71 */
L_00629F69:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00629F69: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x00629F6C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00629F6E: add esp, 4 */
    _flag_k = FK_ADD;
L_00629F71:
    PUSH32(esp, 0xCu); /* 0x00629F71: push 0xc */
    MEM32(ebp + (-0x30)) = 0; /* 0x00629F73: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x00629F7A: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00629F7D: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F91BCu); /* 0x00629F84: push 0x7f91bc */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00629F89: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00629F90: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00629F97: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x00629F9B: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x00629FA2: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x00629FA9: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00629FAD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x00629FB2: mov byte ptr [ebp - 4], 4 */
    ebx = ebp + (-0x40); /* 0x00629FB6: lea ebx, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x00629FB9: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x40)); } /* 0x00629FBD: cmovae ebx, dword ptr [ebp - 0x40] */
    esi = ebx; /* 0x00629FC1: mov esi, ebx */
    /* cmp MEM8(ebx), 0 */ /* 0x00629FC3: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00629FCE; /* 0x00629FC6: je 0x629fce */
L_00629FC8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00629FC8: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x00629FC9: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00629FC8; /* 0x00629FCC: jne 0x629fc8 */
L_00629FCE:
    PUSH32(esp, ecx); /* 0x00629FCE: push ecx */
    ecx = ebp + (-0x80); /* 0x00629FCF: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x00629FD2: call 0x53d290 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x00629FD7: sub esi, ebx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x80); /* 0x00629FD9: lea ecx, [ebp - 0x80] */
    PUSH32(esp, esi); /* 0x00629FDC: push esi */
    PUSH32(esp, ebx); /* 0x00629FDD: push ebx */
    RECOMP_CALL(sub_0053D3C0); /* 0x00629FDE: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00629FE3: push ecx */
    ecx = ebp + (-0x80); /* 0x00629FE4: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x00629FE7: call 0x53d290 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x80)); /* 0x00629FEC: mov ebx, dword ptr [ebp - 0x80] */
    eax = MEM32(ebx + 0xC); /* 0x00629FEF: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xBu; /* 0x00629FF2: add eax, 0xb */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x10) */ /* 0x00629FF5: cmp eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062A003; /* 0x00629FF8: jbe 0x62a003 */
L_00629FFA:
    PUSH32(esp, 0xBu); /* 0x00629FFA: push 0xb */
    ecx = ebx; /* 0x00629FFC: mov ecx, ebx */
    RECOMP_CALL(sub_0053EDC0); /* 0x00629FFE: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0062A003:
    esi = MEM32(ebx + 0xC); /* 0x0062A003: mov esi, dword ptr [ebx + 0xc] */
    ecx = 0x64u; /* 0x0062A006: mov ecx, 0x64 */
    edx = esi; /* 0x0062A00B: mov edx, esi */
    eax = esi + 0xB; /* 0x0062A00D: lea eax, [esi + 0xb] */
    MEM32(ebx + 0xC) = eax; /* 0x0062A010: mov dword ptr [ebx + 0xc], eax */
    RECOMP_CALL(sub_0052C800); /* 0x0062A013: call 0x52c800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x80)); /* 0x0062A018: mov ecx, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0062A01B: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x0062A01D: sub eax, 0xb */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + eax; /* 0x0062A020: add dword ptr [ecx + 0xc], eax */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A023: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062A027: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A035; /* 0x0062A02B: jb 0x62a035 */
L_0062A02D:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062A02D: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x0062A030: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A032: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A035:
    PUSH32(esp, 0xBu); /* 0x0062A035: push 0xb */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A037: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062A03E: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062A041: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F91B0u); /* 0x0062A048: push 0x7f91b0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A04D: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A054: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A05B: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A05F: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A066: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A06D: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A071: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0062A076: mov byte ptr [ebp - 4], 5 */
    ebx = ebp + (-0x28); /* 0x0062A07A: lea ebx, [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062A07D: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x28)); } /* 0x0062A081: cmovae ebx, dword ptr [ebp - 0x28] */
    esi = ebx; /* 0x0062A085: mov esi, ebx */
    /* cmp MEM8(ebx), 0 */ /* 0x0062A087: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062A096; /* 0x0062A08A: je 0x62a096 */
L_0062A08C:
    esp = esp; /* 0x0062A08C: lea esp, [esp] */
L_0062A090:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0062A090: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x0062A091: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062A090; /* 0x0062A094: jne 0x62a090 */
L_0062A096:
    PUSH32(esp, ecx); /* 0x0062A096: push ecx */
    ecx = ebp + (-0x80); /* 0x0062A097: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062A09A: call 0x53d290 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x0062A09F: sub esi, ebx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x80); /* 0x0062A0A1: lea ecx, [ebp - 0x80] */
    PUSH32(esp, esi); /* 0x0062A0A4: push esi */
    PUSH32(esp, ebx); /* 0x0062A0A5: push ebx */
    RECOMP_CALL(sub_0053D3C0); /* 0x0062A0A6: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0062A0AB: push ecx */
    ecx = ebp + (-0x80); /* 0x0062A0AC: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062A0AF: call 0x53d290 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x80)); /* 0x0062A0B4: mov ebx, dword ptr [ebp - 0x80] */
    eax = MEM32(ebx + 0xC); /* 0x0062A0B7: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xBu; /* 0x0062A0BA: add eax, 0xb */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x10) */ /* 0x0062A0BD: cmp eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062A0CB; /* 0x0062A0C0: jbe 0x62a0cb */
L_0062A0C2:
    PUSH32(esp, 0xBu); /* 0x0062A0C2: push 0xb */
    ecx = ebx; /* 0x0062A0C4: mov ecx, ebx */
    RECOMP_CALL(sub_0053EDC0); /* 0x0062A0C6: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0062A0CB:
    esi = MEM32(ebx + 0xC); /* 0x0062A0CB: mov esi, dword ptr [ebx + 0xc] */
    ecx = 0x64u; /* 0x0062A0CE: mov ecx, 0x64 */
    edx = esi; /* 0x0062A0D3: mov edx, esi */
    eax = esi + 0xB; /* 0x0062A0D5: lea eax, [esi + 0xb] */
    MEM32(ebx + 0xC) = eax; /* 0x0062A0D8: mov dword ptr [ebx + 0xc], eax */
    RECOMP_CALL(sub_0052C800); /* 0x0062A0DB: call 0x52c800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x80)); /* 0x0062A0E0: mov ecx, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0062A0E3: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x0062A0E5: sub eax, 0xb */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + eax; /* 0x0062A0E8: add dword ptr [ecx + 0xc], eax */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A0EB: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062A0EF: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A0FD; /* 0x0062A0F3: jb 0x62a0fd */
L_0062A0F5:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062A0F5: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x0062A0F8: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A0FA: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A0FD:
    PUSH32(esp, 0xBu); /* 0x0062A0FD: push 0xb */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A0FF: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062A106: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062A109: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F91D8u); /* 0x0062A110: push 0x7f91d8 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A115: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A11C: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A123: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A127: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A12E: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A135: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A139: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0062A13E: mov byte ptr [ebp - 4], 6 */
    ebx = ebp + (-0x40); /* 0x0062A142: lea ebx, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062A145: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x40)); } /* 0x0062A149: cmovae ebx, dword ptr [ebp - 0x40] */
    esi = ebx; /* 0x0062A14D: mov esi, ebx */
    /* cmp MEM8(ebx), 0 */ /* 0x0062A14F: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062A15A; /* 0x0062A152: je 0x62a15a */
L_0062A154:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0062A154: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x0062A155: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062A154; /* 0x0062A158: jne 0x62a154 */
L_0062A15A:
    PUSH32(esp, ecx); /* 0x0062A15A: push ecx */
    ecx = ebp + (-0x80); /* 0x0062A15B: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062A15E: call 0x53d290 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x0062A163: sub esi, ebx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x80); /* 0x0062A165: lea ecx, [ebp - 0x80] */
    PUSH32(esp, esi); /* 0x0062A168: push esi */
    PUSH32(esp, ebx); /* 0x0062A169: push ebx */
    RECOMP_CALL(sub_0053D3C0); /* 0x0062A16A: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0062A16F: push ecx */
    ecx = ebp + (-0x80); /* 0x0062A170: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062A173: call 0x53d290 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x80)); /* 0x0062A178: mov ebx, dword ptr [ebp - 0x80] */
    eax = MEM32(ebx + 0xC); /* 0x0062A17B: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xBu; /* 0x0062A17E: add eax, 0xb */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x10) */ /* 0x0062A181: cmp eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062A18F; /* 0x0062A184: jbe 0x62a18f */
L_0062A186:
    PUSH32(esp, 0xBu); /* 0x0062A186: push 0xb */
    ecx = ebx; /* 0x0062A188: mov ecx, ebx */
    RECOMP_CALL(sub_0053EDC0); /* 0x0062A18A: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0062A18F:
    esi = MEM32(ebx + 0xC); /* 0x0062A18F: mov esi, dword ptr [ebx + 0xc] */
    ecx = 0x64u; /* 0x0062A192: mov ecx, 0x64 */
    edx = esi; /* 0x0062A197: mov edx, esi */
    eax = esi + 0xB; /* 0x0062A199: lea eax, [esi + 0xb] */
    MEM32(ebx + 0xC) = eax; /* 0x0062A19C: mov dword ptr [ebx + 0xc], eax */
    RECOMP_CALL(sub_0052C800); /* 0x0062A19F: call 0x52c800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x80)); /* 0x0062A1A4: mov ecx, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0062A1A7: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x0062A1A9: sub eax, 0xb */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + eax; /* 0x0062A1AC: add dword ptr [ecx + 0xc], eax */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A1AF: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062A1B3: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A1C1; /* 0x0062A1B7: jb 0x62a1c1 */
L_0062A1B9:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062A1B9: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x0062A1BC: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A1BE: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A1C1:
    PUSH32(esp, 0xBu); /* 0x0062A1C1: push 0xb */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A1C3: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062A1CA: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062A1CD: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F91CCu); /* 0x0062A1D4: push 0x7f91cc */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A1D9: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A1E0: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A1E7: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A1EB: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A1F2: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A1F9: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A1FD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0062A202: mov byte ptr [ebp - 4], 7 */
    ebx = ebp + (-0x28); /* 0x0062A206: lea ebx, [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062A209: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x28)); } /* 0x0062A20D: cmovae ebx, dword ptr [ebp - 0x28] */
    esi = ebx; /* 0x0062A211: mov esi, ebx */
    /* cmp MEM8(ebx), 0 */ /* 0x0062A213: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062A21E; /* 0x0062A216: je 0x62a21e */
L_0062A218:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0062A218: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x0062A219: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062A218; /* 0x0062A21C: jne 0x62a218 */
L_0062A21E:
    PUSH32(esp, ecx); /* 0x0062A21E: push ecx */
    ecx = ebp + (-0x80); /* 0x0062A21F: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062A222: call 0x53d290 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x0062A227: sub esi, ebx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x80); /* 0x0062A229: lea ecx, [ebp - 0x80] */
    PUSH32(esp, esi); /* 0x0062A22C: push esi */
    PUSH32(esp, ebx); /* 0x0062A22D: push ebx */
    RECOMP_CALL(sub_0053D3C0); /* 0x0062A22E: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0062A233: push ecx */
    ecx = ebp + (-0x80); /* 0x0062A234: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062A237: call 0x53d290 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x80)); /* 0x0062A23C: mov edx, dword ptr [ebp - 0x80] */
    eax = MEM32(edx + 0xC); /* 0x0062A23F: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x0062A242: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edx + 0x10) */ /* 0x0062A245: cmp eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062A256; /* 0x0062A248: jbe 0x62a256 */
L_0062A24A:
    PUSH32(esp, 4); /* 0x0062A24A: push 4 */
    ecx = edx; /* 0x0062A24C: mov ecx, edx */
    RECOMP_CALL(sub_0053EDC0); /* 0x0062A24E: call 0x53edc0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x80)); /* 0x0062A253: mov edx, dword ptr [ebp - 0x80] */
L_0062A256:
    ecx = MEM32(edx + 0xC); /* 0x0062A256: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A259: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A25C: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x74u); /* 0x0062A25F: mov byte ptr [ecx], 0x74 */
    edx = MEM32(ebp + (-0x80)); /* 0x0062A262: mov edx, dword ptr [ebp - 0x80] */
    ecx = MEM32(edx + 0xC); /* 0x0062A265: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A268: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A26B: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x72u); /* 0x0062A26E: mov byte ptr [ecx], 0x72 */
    edx = MEM32(ebp + (-0x80)); /* 0x0062A271: mov edx, dword ptr [ebp - 0x80] */
    ecx = MEM32(edx + 0xC); /* 0x0062A274: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A277: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A27A: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x75u); /* 0x0062A27D: mov byte ptr [ecx], 0x75 */
    edx = MEM32(ebp + (-0x80)); /* 0x0062A280: mov edx, dword ptr [ebp - 0x80] */
    ecx = MEM32(edx + 0xC); /* 0x0062A283: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A286: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A289: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x65u); /* 0x0062A28C: mov byte ptr [ecx], 0x65 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A28F: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062A293: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A2A1; /* 0x0062A297: jb 0x62a2a1 */
L_0062A299:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062A299: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x0062A29C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A29E: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A2A1:
    PUSH32(esp, 0xBu); /* 0x0062A2A1: push 0xb */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A2A3: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062A2AA: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062A2AD: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F91F8u); /* 0x0062A2B4: push 0x7f91f8 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A2B9: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A2C0: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A2C7: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A2CB: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A2D2: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A2D9: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A2DD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0062A2E2: mov byte ptr [ebp - 4], 8 */
    ebx = ebp + (-0x40); /* 0x0062A2E6: lea ebx, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062A2E9: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x40)); } /* 0x0062A2ED: cmovae ebx, dword ptr [ebp - 0x40] */
    esi = ebx; /* 0x0062A2F1: mov esi, ebx */
    /* cmp MEM8(ebx), 0 */ /* 0x0062A2F3: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062A2FE; /* 0x0062A2F6: je 0x62a2fe */
L_0062A2F8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0062A2F8: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x0062A2F9: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062A2F8; /* 0x0062A2FC: jne 0x62a2f8 */
L_0062A2FE:
    PUSH32(esp, ecx); /* 0x0062A2FE: push ecx */
    ecx = ebp + (-0x80); /* 0x0062A2FF: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062A302: call 0x53d290 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x0062A307: sub esi, ebx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x80); /* 0x0062A309: lea ecx, [ebp - 0x80] */
    PUSH32(esp, esi); /* 0x0062A30C: push esi */
    PUSH32(esp, ebx); /* 0x0062A30D: push ebx */
    RECOMP_CALL(sub_0053D3C0); /* 0x0062A30E: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0062A313: push ecx */
    ecx = ebp + (-0x80); /* 0x0062A314: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062A317: call 0x53d290 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x80)); /* 0x0062A31C: mov edx, dword ptr [ebp - 0x80] */
    eax = MEM32(edx + 0xC); /* 0x0062A31F: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x0062A322: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edx + 0x10) */ /* 0x0062A325: cmp eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062A336; /* 0x0062A328: jbe 0x62a336 */
L_0062A32A:
    PUSH32(esp, 4); /* 0x0062A32A: push 4 */
    ecx = edx; /* 0x0062A32C: mov ecx, edx */
    RECOMP_CALL(sub_0053EDC0); /* 0x0062A32E: call 0x53edc0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x80)); /* 0x0062A333: mov edx, dword ptr [ebp - 0x80] */
L_0062A336:
    ecx = MEM32(edx + 0xC); /* 0x0062A336: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A339: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A33C: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x74u); /* 0x0062A33F: mov byte ptr [ecx], 0x74 */
    edx = MEM32(ebp + (-0x80)); /* 0x0062A342: mov edx, dword ptr [ebp - 0x80] */
    ecx = MEM32(edx + 0xC); /* 0x0062A345: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A348: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A34B: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x72u); /* 0x0062A34E: mov byte ptr [ecx], 0x72 */
    edx = MEM32(ebp + (-0x80)); /* 0x0062A351: mov edx, dword ptr [ebp - 0x80] */
    ecx = MEM32(edx + 0xC); /* 0x0062A354: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A357: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A35A: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x75u); /* 0x0062A35D: mov byte ptr [ecx], 0x75 */
    edx = MEM32(ebp + (-0x80)); /* 0x0062A360: mov edx, dword ptr [ebp - 0x80] */
    ecx = MEM32(edx + 0xC); /* 0x0062A363: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A366: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A369: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x65u); /* 0x0062A36C: mov byte ptr [ecx], 0x65 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A36F: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062A373: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A381; /* 0x0062A377: jb 0x62a381 */
L_0062A379:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062A379: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x0062A37C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A37E: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A381:
    PUSH32(esp, 0x10u); /* 0x0062A381: push 0x10 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A383: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062A38A: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062A38D: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F91E4u); /* 0x0062A394: push 0x7f91e4 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A399: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A3A0: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A3A7: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A3AB: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A3B2: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A3B9: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A3BD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0062A3C2: mov byte ptr [ebp - 4], 9 */
    eax = ebp + (-0x28); /* 0x0062A3C6: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0x007F0884u); /* 0x0062A3C9: push 0x7f0884 */
    PUSH32(esp, eax); /* 0x0062A3CE: push eax */
    ecx = ebp + (-0xD0); /* 0x0062A3CF: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_00540D10); /* 0x0062A3D5: call 0x540d10 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A3DA: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062A3DE: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A3EC; /* 0x0062A3E2: jb 0x62a3ec */
L_0062A3E4:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062A3E4: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x0062A3E7: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A3E9: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A3EC:
    PUSH32(esp, 0xEu); /* 0x0062A3EC: push 0xe */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A3EE: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062A3F5: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062A3F8: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F93C0u); /* 0x0062A3FF: push 0x7f93c0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A404: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A40B: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A412: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A416: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A41D: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A424: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A428: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0062A42D: mov byte ptr [ebp - 4], 0xa */
    eax = ebp + (-0x40); /* 0x0062A431: lea eax, [ebp - 0x40] */
    PUSH32(esp, 0x007F0884u); /* 0x0062A434: push 0x7f0884 */
    PUSH32(esp, eax); /* 0x0062A439: push eax */
    ecx = ebp + (-0xD0); /* 0x0062A43A: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_00540D10); /* 0x0062A440: call 0x540d10 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A445: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062A449: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A457; /* 0x0062A44D: jb 0x62a457 */
L_0062A44F:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062A44F: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x0062A452: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A454: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A457:
    PUSH32(esp, 0x10u); /* 0x0062A457: push 0x10 */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062A459: mov dword ptr [ebp - 0x48], 0 */
    ecx = ebp + (-0x58); /* 0x0062A460: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x44)) = 0; /* 0x0062A463: mov dword ptr [ebp - 0x44], 0 */
    PUSH32(esp, 0x007F93ACu); /* 0x0062A46A: push 0x7f93ac */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A46F: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A476: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A47D: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062A481: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062A488: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062A48F: mov byte ptr [ebp - 0x58], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A493: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x0062A498: mov byte ptr [ebp - 4], 0xb */
    eax = ebp + (-0x58); /* 0x0062A49C: lea eax, [ebp - 0x58] */
    PUSH32(esp, 0x007E5524u); /* 0x0062A49F: push 0x7e5524 */
    PUSH32(esp, eax); /* 0x0062A4A4: push eax */
    ecx = ebp + (-0xD0); /* 0x0062A4A5: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_00540D10); /* 0x0062A4AB: call 0x540d10 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A4B0: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062A4B4: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A4C2; /* 0x0062A4B8: jb 0x62a4c2 */
L_0062A4BA:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062A4BA: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(edi); /* 0x0062A4BD: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A4BF: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A4C2:
    PUSH32(esp, 0xBu); /* 0x0062A4C2: push 0xb */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A4C4: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062A4CB: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062A4CE: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F93DCu); /* 0x0062A4D5: push 0x7f93dc */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062A4DA: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062A4E1: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062A4E8: mov byte ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A4EC: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A4F3: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A4FA: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A4FE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0062A503: mov byte ptr [ebp - 4], 0xc */
    ebx = ebp + (-0x28); /* 0x0062A507: lea ebx, [ebp - 0x28] */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062A50A: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { ebx = MEM32(ebp + (-0x28)); } /* 0x0062A50E: cmovae ebx, dword ptr [ebp - 0x28] */
    esi = ebx; /* 0x0062A512: mov esi, ebx */
    /* cmp MEM8(ebx), 0 */ /* 0x0062A514: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062A526; /* 0x0062A517: je 0x62a526 */
L_0062A519:
    esp = esp; /* 0x0062A519: lea esp, [esp] */
L_0062A520:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0062A520: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x0062A521: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062A520; /* 0x0062A524: jne 0x62a520 */
L_0062A526:
    PUSH32(esp, ecx); /* 0x0062A526: push ecx */
    ecx = ebp + (-0x80); /* 0x0062A527: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062A52A: call 0x53d290 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x0062A52F: sub esi, ebx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x80); /* 0x0062A531: lea ecx, [ebp - 0x80] */
    PUSH32(esp, esi); /* 0x0062A534: push esi */
    PUSH32(esp, ebx); /* 0x0062A535: push ebx */
    RECOMP_CALL(sub_0053D3C0); /* 0x0062A536: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0062A53B: push ecx */
    ecx = ebp + (-0x80); /* 0x0062A53C: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062A53F: call 0x53d290 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x80)); /* 0x0062A544: mov edx, dword ptr [ebp - 0x80] */
    eax = MEM32(edx + 0xC); /* 0x0062A547: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 5; /* 0x0062A54A: add eax, 5 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edx + 0x10) */ /* 0x0062A54D: cmp eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062A55E; /* 0x0062A550: jbe 0x62a55e */
L_0062A552:
    PUSH32(esp, 5); /* 0x0062A552: push 5 */
    ecx = edx; /* 0x0062A554: mov ecx, edx */
    RECOMP_CALL(sub_0053EDC0); /* 0x0062A556: call 0x53edc0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x80)); /* 0x0062A55B: mov edx, dword ptr [ebp - 0x80] */
L_0062A55E:
    ecx = MEM32(edx + 0xC); /* 0x0062A55E: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A561: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A564: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x66u); /* 0x0062A567: mov byte ptr [ecx], 0x66 */
    edx = MEM32(ebp + (-0x80)); /* 0x0062A56A: mov edx, dword ptr [ebp - 0x80] */
    ecx = MEM32(edx + 0xC); /* 0x0062A56D: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A570: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A573: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x61u); /* 0x0062A576: mov byte ptr [ecx], 0x61 */
    edx = MEM32(ebp + (-0x80)); /* 0x0062A579: mov edx, dword ptr [ebp - 0x80] */
    ecx = MEM32(edx + 0xC); /* 0x0062A57C: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A57F: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A582: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x6Cu); /* 0x0062A585: mov byte ptr [ecx], 0x6c */
    edx = MEM32(ebp + (-0x80)); /* 0x0062A588: mov edx, dword ptr [ebp - 0x80] */
    ecx = MEM32(edx + 0xC); /* 0x0062A58B: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A58E: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A591: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x73u); /* 0x0062A594: mov byte ptr [ecx], 0x73 */
    edx = MEM32(ebp + (-0x80)); /* 0x0062A597: mov edx, dword ptr [ebp - 0x80] */
    ecx = MEM32(edx + 0xC); /* 0x0062A59A: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0062A59D: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0062A5A0: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x65u); /* 0x0062A5A3: mov byte ptr [ecx], 0x65 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A5A6: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062A5AA: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A5B8; /* 0x0062A5AE: jb 0x62a5b8 */
L_0062A5B0:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062A5B0: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x0062A5B3: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A5B5: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A5B8:
    PUSH32(esp, 0x007F93D0u); /* 0x0062A5B8: push 0x7f93d0 */
    ecx = ebp + (-0x58); /* 0x0062A5BD: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A5C0: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A5C7: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A5CE: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062A5D2: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x0062A5D7: mov byte ptr [ebp - 4], 0xd */
    eax = ebp + (-0x58); /* 0x0062A5DB: lea eax, [ebp - 0x58] */
    PUSH32(esp, 1); /* 0x0062A5DE: push 1 */
    PUSH32(esp, eax); /* 0x0062A5E0: push eax */
    ecx = ebp + (-0xD0); /* 0x0062A5E1: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_00540C30); /* 0x0062A5E7: call 0x540c30 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A5EC: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062A5F0: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A5FE; /* 0x0062A5F4: jb 0x62a5fe */
L_0062A5F6:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062A5F6: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(edi); /* 0x0062A5F9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A5FB: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A5FE:
    PUSH32(esp, 0x007F93FCu); /* 0x0062A5FE: push 0x7f93fc */
    ecx = ebp + (-0x58); /* 0x0062A603: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062A606: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062A60D: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062A614: mov byte ptr [ebp - 0x58], 0 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062A618: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x0062A61D: mov byte ptr [ebp - 4], 0xe */
    eax = ebp + (-0x58); /* 0x0062A621: lea eax, [ebp - 0x58] */
    PUSH32(esp, 0); /* 0x0062A624: push 0 */
    PUSH32(esp, eax); /* 0x0062A626: push eax */
    ecx = ebp + (-0xD0); /* 0x0062A627: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_00540D80); /* 0x0062A62D: call 0x540d80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A632: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062A636: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A644; /* 0x0062A63A: jb 0x62a644 */
L_0062A63C:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062A63C: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(edi); /* 0x0062A63F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A641: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A644:
    PUSH32(esp, 0x007F93E8u); /* 0x0062A644: push 0x7f93e8 */
    ecx = ebp + (-0x58); /* 0x0062A649: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062A64C: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062A653: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062A65A: mov byte ptr [ebp - 0x58], 0 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062A65E: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x0062A663: mov byte ptr [ebp - 4], 0xf */
    eax = ebp + (-0x58); /* 0x0062A667: lea eax, [ebp - 0x58] */
    PUSH32(esp, 0x64u); /* 0x0062A66A: push 0x64 */
    PUSH32(esp, eax); /* 0x0062A66C: push eax */
    ecx = ebp + (-0xD0); /* 0x0062A66D: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_00540D80); /* 0x0062A673: call 0x540d80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A678: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062A67C: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A68A; /* 0x0062A680: jb 0x62a68a */
L_0062A682:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062A682: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(edi); /* 0x0062A685: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A687: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A68A:
    esi = MEM32(ebp + (-0x80)); /* 0x0062A68A: mov esi, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x70)) = MEM32(ebp + (-0x70)) - 8; /* 0x0062A68D: sub dword ptr [ebp - 0x70], 8 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062A691: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062A698: mov dword ptr [ebp - 0x48], 0 */
    eax = MEM32(esi + 0xC); /* 0x0062A69F: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0062A6A2: inc eax */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062A6A3: mov byte ptr [ebp - 0x58], 0 */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0062A6A7: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062A6B5; /* 0x0062A6AA: jbe 0x62a6b5 */
L_0062A6AC:
    PUSH32(esp, 1); /* 0x0062A6AC: push 1 */
    ecx = esi; /* 0x0062A6AE: mov ecx, esi */
    RECOMP_CALL(sub_0053EDC0); /* 0x0062A6B0: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0062A6B5:
    ecx = MEM32(esi + 0xC); /* 0x0062A6B5: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, 0x007F9428u); /* 0x0062A6B8: push 0x7f9428 */
    eax = ecx + 0x1; /* 0x0062A6BD: lea eax, [ecx + 1] */
    MEM32(esi + 0xC) = eax; /* 0x0062A6C0: mov dword ptr [esi + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x7Du); /* 0x0062A6C3: mov byte ptr [ecx], 0x7d */
    ecx = ebp + (-0x58); /* 0x0062A6C6: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_00409FA0); /* 0x0062A6C9: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x0062A6CE: mov byte ptr [ebp - 4], 0x10 */
    eax = ebp + (-0x58); /* 0x0062A6D2: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x0062A6D5: push eax */
    ecx = ebp + (-0xD0); /* 0x0062A6D6: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_0052D960); /* 0x0062A6DC: call 0x52d960 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062A6E1: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062A6E5: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A6F3; /* 0x0062A6E9: jb 0x62a6f3 */
L_0062A6EB:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062A6EB: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(edi); /* 0x0062A6EE: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A6F0: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A6F3:
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062A6F3: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062A6FA: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062A701: mov byte ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062A705: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0xD0); /* 0x0062A70C: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_0052D890); /* 0x0062A712: call 0x52d890 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0062A717: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062A71A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062A721: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062A722: pop edi */
    esi = POP32_VAL(esp); /* 0x0062A723: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062A724: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0062A725: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0062A728: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0062A72A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062A72F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062A731: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062A732: ret  */
    RECOMP_REGS_OUT();
}

void sub_0062A740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062A740u);

L_0062A740:
    PUSH32(esp, ebp); /* 0x0062A740: push ebp */
    ebp = esp; /* 0x0062A741: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062A743: push -1 */
    PUSH32(esp, 0x007B853Eu); /* 0x0062A745: push 0x7b853e */
    eax = MEM32(FS_BASE + (0)); /* 0x0062A74A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0062A750: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x8Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x8Cu; /* 0x0062A751: sub esp, 0x8c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0062A757: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062A75C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0062A75E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0062A761: push ebx */
    PUSH32(esp, esi); /* 0x0062A762: push esi */
    PUSH32(esp, edi); /* 0x0062A763: push edi */
    PUSH32(esp, eax); /* 0x0062A764: push eax */
    eax = ebp + (-0xC); /* 0x0062A765: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062A768: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0062A76E: mov edi, ecx */
    PUSH32(esp, 6); /* 0x0062A770: push 6 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A772: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062A779: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062A77C: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007ED4C4u); /* 0x0062A783: push 0x7ed4c4 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A788: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A78F: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A796: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A79A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062A79F: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(0x8780CC); /* 0x0062A7A6: mov ecx, dword ptr [0x8780cc] */
    /* test ecx, ecx */ /* 0x0062A7AC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062A7BF; /* 0x0062A7AE: je 0x62a7bf */
L_0062A7B0:
    ecx = MEM32(ecx + 0xC0); /* 0x0062A7B0: mov ecx, dword ptr [ecx + 0xc0] */
    eax = ebp + (-0x28); /* 0x0062A7B6: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0062A7B9: push eax */
    RECOMP_CALL(sub_00671CA0); /* 0x0062A7BA: call 0x671ca0 */
    RECOMP_FLAGS_IN();
L_0062A7BF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062A7BF: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062A7C6: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x0062A7CA: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A7DA; /* 0x0062A7D0: jb 0x62a7da */
L_0062A7D2:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062A7D2: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062A7D5: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A7D7: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A7DA:
    PUSH32(esp, 0xCu); /* 0x0062A7DA: push 0xc */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A7DC: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062A7E3: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062A7E6: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F9428u); /* 0x0062A7ED: push 0x7f9428 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A7F2: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A7F9: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A800: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A804: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A80B: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A812: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A816: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x0062A81B: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x40); /* 0x0062A822: lea eax, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062A825: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 4); /* 0x0062A829: push 4 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x40)); } /* 0x0062A82B: cmovae eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0062A82F: push eax */
    RECOMP_ICALL(MEM32(0x7CC49C)); /* 0x0062A830: call dword ptr [0x7cc49c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0062A836: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0062A839: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x0062A83B: setne bl */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062A83E: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062A845: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A853; /* 0x0062A849: jb 0x62a853 */
L_0062A84B:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062A84B: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062A84E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A850: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A853:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A853: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A85A: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A861: mov byte ptr [ebp - 0x40], 0 */
    /* test LO8(ebx), LO8(ebx) */ /* 0x0062A865: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062A86E; /* 0x0062A867: je 0x62a86e */
L_0062A869:
    RECOMP_CALL(sub_00629D30); /* 0x0062A869: call 0x629d30 */
    RECOMP_FLAGS_IN();
L_0062A86E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0062A86E: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x90); /* 0x0062A871: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_0053C800); /* 0x0062A877: call 0x53c800 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 3; /* 0x0062A87C: mov dword ptr [ebp - 4], 3 */
    ecx = ebp + (-0x28); /* 0x0062A883: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0xCu); /* 0x0062A886: push 0xc */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A888: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062A88F: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F9428u); /* 0x0062A896: push 0x7f9428 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A89B: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A8A2: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A8A9: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A8AD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0062A8B2: mov byte ptr [ebp - 4], 4 */
    eax = ebp + (-0x28); /* 0x0062A8B6: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0062A8B9: push eax */
    ecx = ebp + (-0x90); /* 0x0062A8BA: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_005410B0); /* 0x0062A8C0: call 0x5410b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062A8C5: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062A8C9: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A8D7; /* 0x0062A8CD: jb 0x62a8d7 */
L_0062A8CF:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062A8CF: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062A8D2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A8D4: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A8D7:
    PUSH32(esp, 0xAu); /* 0x0062A8D7: push 0xa */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A8D9: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062A8E0: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062A8E3: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F91A4u); /* 0x0062A8EA: push 0x7f91a4 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A8EF: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A8F6: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A8FD: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A901: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A908: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A90F: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A913: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0062A918: mov byte ptr [ebp - 4], 5 */
    eax = ebp + (-0x40); /* 0x0062A91C: lea eax, [ebp - 0x40] */
    PUSH32(esp, 0x64u); /* 0x0062A91F: push 0x64 */
    PUSH32(esp, eax); /* 0x0062A921: push eax */
    ecx = ebp + (-0x90); /* 0x0062A922: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00541030); /* 0x0062A928: call 0x541030 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x0062A92D: push eax */
    ecx = edi; /* 0x0062A92E: mov ecx, edi */
    RECOMP_CALL(sub_0062E9A0); /* 0x0062A930: call 0x62e9a0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062A935: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062A939: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A947; /* 0x0062A93D: jb 0x62a947 */
L_0062A93F:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062A93F: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062A942: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A944: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A947:
    PUSH32(esp, 0xCu); /* 0x0062A947: push 0xc */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A949: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062A950: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062A953: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F9194u); /* 0x0062A95A: push 0x7f9194 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A95F: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A966: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A96D: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A971: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A978: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A97F: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A983: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0062A988: mov byte ptr [ebp - 4], 6 */
    eax = ebp + (-0x28); /* 0x0062A98C: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0x64u); /* 0x0062A98F: push 0x64 */
    PUSH32(esp, eax); /* 0x0062A991: push eax */
    ecx = ebp + (-0x90); /* 0x0062A992: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00541030); /* 0x0062A998: call 0x541030 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x0062A99D: push eax */
    ecx = edi; /* 0x0062A99E: mov ecx, edi */
    RECOMP_CALL(sub_0062EBE0); /* 0x0062A9A0: call 0x62ebe0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062A9A5: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062A9A9: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062A9B7; /* 0x0062A9AD: jb 0x62a9b7 */
L_0062A9AF:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062A9AF: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062A9B2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062A9B4: add esp, 4 */
    _flag_k = FK_ADD;
L_0062A9B7:
    PUSH32(esp, 0xCu); /* 0x0062A9B7: push 0xc */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A9B9: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062A9C0: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062A9C3: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F91BCu); /* 0x0062A9CA: push 0x7f91bc */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062A9CF: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062A9D6: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062A9DD: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062A9E1: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062A9E8: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062A9EF: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062A9F3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0062A9F8: mov byte ptr [ebp - 4], 7 */
    eax = ebp + (-0x40); /* 0x0062A9FC: lea eax, [ebp - 0x40] */
    PUSH32(esp, 0x64u); /* 0x0062A9FF: push 0x64 */
    PUSH32(esp, eax); /* 0x0062AA01: push eax */
    ecx = ebp + (-0x90); /* 0x0062AA02: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00541030); /* 0x0062AA08: call 0x541030 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x0062AA0D: push eax */
    ecx = edi; /* 0x0062AA0E: mov ecx, edi */
    RECOMP_CALL(sub_0062EB20); /* 0x0062AA10: call 0x62eb20 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062AA15: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062AA19: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AA27; /* 0x0062AA1D: jb 0x62aa27 */
L_0062AA1F:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062AA1F: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062AA22: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AA24: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AA27:
    PUSH32(esp, 0xBu); /* 0x0062AA27: push 0xb */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AA29: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062AA30: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062AA33: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F91B0u); /* 0x0062AA3A: push 0x7f91b0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062AA3F: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062AA46: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062AA4D: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062AA51: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AA58: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062AA5F: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062AA63: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0062AA68: mov byte ptr [ebp - 4], 8 */
    eax = ebp + (-0x28); /* 0x0062AA6C: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0x64u); /* 0x0062AA6F: push 0x64 */
    PUSH32(esp, eax); /* 0x0062AA71: push eax */
    ecx = ebp + (-0x90); /* 0x0062AA72: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00541030); /* 0x0062AA78: call 0x541030 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x0062AA7D: push eax */
    ecx = edi; /* 0x0062AA7E: mov ecx, edi */
    RECOMP_CALL(sub_0062ECA0); /* 0x0062AA80: call 0x62eca0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062AA85: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062AA89: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AA97; /* 0x0062AA8D: jb 0x62aa97 */
L_0062AA8F:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062AA8F: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062AA92: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AA94: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AA97:
    PUSH32(esp, 0xBu); /* 0x0062AA97: push 0xb */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062AA99: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062AAA0: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062AAA3: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F91D8u); /* 0x0062AAAA: push 0x7f91d8 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062AAAF: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AAB6: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062AABD: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062AAC1: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062AAC8: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062AACF: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062AAD3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0062AAD8: mov byte ptr [ebp - 4], 9 */
    eax = ebp + (-0x40); /* 0x0062AADC: lea eax, [ebp - 0x40] */
    PUSH32(esp, 0x64u); /* 0x0062AADF: push 0x64 */
    PUSH32(esp, eax); /* 0x0062AAE1: push eax */
    ecx = ebp + (-0x90); /* 0x0062AAE2: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00541030); /* 0x0062AAE8: call 0x541030 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x64); /* 0x0062AAED: mov ecx, dword ptr [edi + 0x64] */
    MEM32(edi + 0x7C) = eax; /* 0x0062AAF0: mov dword ptr [edi + 0x7c], eax */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x0062AAF3: movd xmm1, eax */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x0062AAF7: cvtdq2ps xmm1, xmm1 */
    { float _s = sse_f32(MEM32(0x80951C)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x0062AAFA: divss xmm1, dword ptr [0x80951c] */
    RECOMP_CALL(sub_0061CC70); /* 0x0062AB02: call 0x61cc70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062AB07: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062AB0B: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AB19; /* 0x0062AB0F: jb 0x62ab19 */
L_0062AB11:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062AB11: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062AB14: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AB16: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AB19:
    PUSH32(esp, 0xBu); /* 0x0062AB19: push 0xb */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AB1B: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062AB22: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062AB25: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F91CCu); /* 0x0062AB2C: push 0x7f91cc */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062AB31: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062AB38: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062AB3F: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062AB43: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AB4A: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062AB51: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062AB55: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0062AB5A: mov byte ptr [ebp - 4], 0xa */
    eax = ebp + (-0x28); /* 0x0062AB5E: lea eax, [ebp - 0x28] */
    PUSH32(esp, 1); /* 0x0062AB61: push 1 */
    PUSH32(esp, eax); /* 0x0062AB63: push eax */
    ecx = ebp + (-0x90); /* 0x0062AB64: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00540EA0); /* 0x0062AB6A: call 0x540ea0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0x68), LO8(eax) */ /* 0x0062AB6F: cmp byte ptr [edi + 0x68], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x68)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062AB82; /* 0x0062AB72: je 0x62ab82 */
L_0062AB74:
    MEM8(edi + 0x68) = (uint8_t)(LO8(eax)); /* 0x0062AB74: mov byte ptr [edi + 0x68], al */
    /* test LO8(eax), LO8(eax) */ /* 0x0062AB77: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062AB82; /* 0x0062AB79: jne 0x62ab82 */
L_0062AB7B:
    ecx = edi; /* 0x0062AB7B: mov ecx, edi */
    RECOMP_CALL(sub_0062E970); /* 0x0062AB7D: call 0x62e970 */
    RECOMP_FLAGS_IN();
L_0062AB82:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062AB82: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062AB86: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AB94; /* 0x0062AB8A: jb 0x62ab94 */
L_0062AB8C:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062AB8C: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062AB8F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AB91: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AB94:
    PUSH32(esp, 0xBu); /* 0x0062AB94: push 0xb */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062AB96: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062AB9D: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062ABA0: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F91F8u); /* 0x0062ABA7: push 0x7f91f8 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062ABAC: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062ABB3: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062ABBA: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062ABBE: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062ABC5: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062ABCC: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062ABD0: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x0062ABD5: mov byte ptr [ebp - 4], 0xb */
    eax = ebp + (-0x40); /* 0x0062ABD9: lea eax, [ebp - 0x40] */
    PUSH32(esp, 1); /* 0x0062ABDC: push 1 */
    PUSH32(esp, eax); /* 0x0062ABDE: push eax */
    ecx = ebp + (-0x90); /* 0x0062ABDF: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00540EA0); /* 0x0062ABE5: call 0x540ea0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x64); /* 0x0062ABEA: mov ecx, dword ptr [edi + 0x64] */
    /* cmp MEM8(ecx + 0x2), LO8(eax) */ /* 0x0062ABED: cmp byte ptr [ecx + 2], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x2)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062AC00; /* 0x0062ABF0: je 0x62ac00 */
L_0062ABF2:
    MEM8(ecx + 0x2) = (uint8_t)(LO8(eax)); /* 0x0062ABF2: mov byte ptr [ecx + 2], al */
    /* test LO8(eax), LO8(eax) */ /* 0x0062ABF5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062AC0C; /* 0x0062ABF7: jne 0x62ac0c */
L_0062ABF9:
    RECOMP_CALL(sub_0061CA20); /* 0x0062ABF9: call 0x61ca20 */
    RECOMP_FLAGS_IN();
    goto L_0062AC04; /* 0x0062ABFE: jmp 0x62ac04 */
L_0062AC00:
    /* test LO8(eax), LO8(eax) */ /* 0x0062AC00: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062AC0C; /* 0x0062AC02: jne 0x62ac0c */
L_0062AC04:
    ecx = MEM32(edi + 0x64); /* 0x0062AC04: mov ecx, dword ptr [edi + 0x64] */
    RECOMP_CALL(sub_0061CA20); /* 0x0062AC07: call 0x61ca20 */
    RECOMP_FLAGS_IN();
L_0062AC0C:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062AC0C: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062AC10: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AC1E; /* 0x0062AC14: jb 0x62ac1e */
L_0062AC16:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062AC16: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062AC19: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AC1B: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AC1E:
    PUSH32(esp, 0xBu); /* 0x0062AC1E: push 0xb */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AC20: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062AC27: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062AC2A: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F93DCu); /* 0x0062AC31: push 0x7f93dc */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062AC36: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062AC3D: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062AC44: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062AC48: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AC4F: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062AC56: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062AC5A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0062AC5F: mov byte ptr [ebp - 4], 0xc */
    eax = ebp + (-0x28); /* 0x0062AC63: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x0062AC66: push 0 */
    PUSH32(esp, eax); /* 0x0062AC68: push eax */
    ecx = ebp + (-0x90); /* 0x0062AC69: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00540EA0); /* 0x0062AC6F: call 0x540ea0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x64); /* 0x0062AC74: mov ecx, dword ptr [edi + 0x64] */
    eax = (uint32_t)LO8(eax); /* 0x0062AC77: movzx eax, al */
    PUSH32(esp, eax); /* 0x0062AC7A: push eax */
    RECOMP_CALL(sub_0061C850); /* 0x0062AC7B: call 0x61c850 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062AC80: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062AC84: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AC92; /* 0x0062AC88: jb 0x62ac92 */
L_0062AC8A:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062AC8A: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062AC8D: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AC8F: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AC92:
    PUSH32(esp, 0xAu); /* 0x0062AC92: push 0xa */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062AC94: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062AC9B: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062AC9E: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F93D0u); /* 0x0062ACA5: push 0x7f93d0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062ACAA: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062ACB1: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062ACB8: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062ACBC: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062ACC3: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062ACCA: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062ACCE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x0062ACD3: mov byte ptr [ebp - 4], 0xd */
    eax = ebp + (-0x40); /* 0x0062ACD7: lea eax, [ebp - 0x40] */
    PUSH32(esp, 1); /* 0x0062ACDA: push 1 */
    PUSH32(esp, eax); /* 0x0062ACDC: push eax */
    ecx = ebp + (-0x90); /* 0x0062ACDD: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00540EA0); /* 0x0062ACE3: call 0x540ea0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x64); /* 0x0062ACE8: mov ecx, dword ptr [edi + 0x64] */
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x0062ACEB: mov byte ptr [ecx + 4], al */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062ACEE: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062ACF2: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AD00; /* 0x0062ACF6: jb 0x62ad00 */
L_0062ACF8:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062ACF8: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062ACFB: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062ACFD: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AD00:
    PUSH32(esp, 0xEu); /* 0x0062AD00: push 0xe */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AD02: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062AD09: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062AD0C: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F93FCu); /* 0x0062AD13: push 0x7f93fc */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062AD18: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062AD1F: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062AD26: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062AD2A: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AD31: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062AD38: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062AD3C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x0062AD41: mov byte ptr [ebp - 4], 0xe */
    eax = ebp + (-0x28); /* 0x0062AD45: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x0062AD48: push 0 */
    PUSH32(esp, eax); /* 0x0062AD4A: push eax */
    ecx = ebp + (-0x90); /* 0x0062AD4B: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00541030); /* 0x0062AD51: call 0x541030 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0062AD56: mov ebx, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062AD58: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062AD5C: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AD6A; /* 0x0062AD60: jb 0x62ad6a */
L_0062AD62:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062AD62: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062AD65: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AD67: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AD6A:
    ecx = MEM32(edi + 0x64); /* 0x0062AD6A: mov ecx, dword ptr [edi + 0x64] */
    eax = 1; /* 0x0062AD6D: mov eax, 1 */
    /* cmp ebx, eax */ /* 0x0062AD72: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062AD74: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AD7B: mov dword ptr [ebp - 0x18], 0 */
    if (CMP_G(_flag_a, _flag_b)) { ebx = eax; } /* 0x0062AD82: cmovg ebx, eax */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062AD85: mov byte ptr [ebp - 0x28], 0 */
    PUSH32(esp, ebx); /* 0x0062AD89: push ebx */
    RECOMP_CALL(sub_0061D340); /* 0x0062AD8A: call 0x61d340 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x13u); /* 0x0062AD8F: push 0x13 */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062AD91: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062AD98: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062AD9B: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F93E8u); /* 0x0062ADA2: push 0x7f93e8 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062ADA7: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062ADAE: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062ADB5: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062ADB9: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x0062ADBE: mov byte ptr [ebp - 4], 0xf */
    eax = ebp + (-0x40); /* 0x0062ADC2: lea eax, [ebp - 0x40] */
    PUSH32(esp, 0x64u); /* 0x0062ADC5: push 0x64 */
    PUSH32(esp, eax); /* 0x0062ADC7: push eax */
    ecx = ebp + (-0x90); /* 0x0062ADC8: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00541030); /* 0x0062ADCE: call 0x541030 */
    RECOMP_FLAGS_IN();
    _xmm[2].u64[0] = MEM32(0x809074); _xmm[2].u64[1] = 0; /* 0x0062ADD3: movss xmm2, dword ptr [0x809074] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0062ADDB: xorps xmm0, xmm0 */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x0062ADDE: movd xmm1, eax */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x0062ADE2: cvtdq2ps xmm1, xmm1 */
    eax = MEM32(edi + 0x64); /* 0x0062ADE5: mov eax, dword ptr [edi + 0x64] */
    { float _s = sse_f32(MEM32(0x80951C)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x0062ADE8: divss xmm1, dword ptr [0x80951c] */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0062ADF0: mulss xmm1, xmm2 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0062ADF4: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_0062AE06; /* 0x0062ADF7: ja 0x62ae06 */
L_0062ADF9:
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0062ADF9: comiss xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0062AE03; /* 0x0062ADFC: jbe 0x62ae03 */
L_0062ADFE:
    _xmm[0] = _xmm[2]; /* 0x0062ADFE: movaps xmm0, xmm2 */
    goto L_0062AE06; /* 0x0062AE01: jmp 0x62ae06 */
L_0062AE03:
    _xmm[0] = _xmm[1]; /* 0x0062AE03: movaps xmm0, xmm1 */
L_0062AE06:
    MEM32(eax + 0x38) = _xmm[0].u32[0]; /* 0x0062AE06: movss dword ptr [eax + 0x38], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062AE0B: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062AE0F: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AE1D; /* 0x0062AE13: jb 0x62ae1d */
L_0062AE15:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062AE15: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062AE18: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AE1A: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AE1D:
    PUSH32(esp, 0); /* 0x0062AE1D: push 0 */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062AE1F: mov dword ptr [ebp - 0x48], 0 */
    ecx = ebp + (-0x58); /* 0x0062AE26: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x44)) = 0; /* 0x0062AE29: mov dword ptr [ebp - 0x44], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0062AE30: push 0x7cd0c4 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062AE35: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062AE3C: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062AE43: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062AE47: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062AE4E: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062AE55: mov byte ptr [ebp - 0x58], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062AE59: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x0062AE5E: mov byte ptr [ebp - 4], 0x10 */
    ecx = ebp + (-0x28); /* 0x0062AE62: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0x10u); /* 0x0062AE65: push 0x10 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AE67: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062AE6E: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F91E4u); /* 0x0062AE75: push 0x7f91e4 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062AE7A: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AE81: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062AE88: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062AE8C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x0062AE91: mov byte ptr [ebp - 4], 0x11 */
    eax = ebp + (-0x58); /* 0x0062AE95: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x0062AE98: push eax */
    eax = ebp + (-0x28); /* 0x0062AE99: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0062AE9C: push eax */
    eax = ebp + (-0x40); /* 0x0062AE9D: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0062AEA0: push eax */
    ecx = ebp + (-0x90); /* 0x0062AEA1: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00540F20); /* 0x0062AEA7: call 0x540f20 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x94)) = eax; /* 0x0062AEAC: mov dword ptr [ebp - 0x94], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x12u); /* 0x0062AEB2: mov byte ptr [ebp - 4], 0x12 */
    ebx = edi + 0x80; /* 0x0062AEB6: lea ebx, [edi + 0x80] */
    /* cmp ebx, eax */ /* 0x0062AEBC: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062AEEC; /* 0x0062AEBE: je 0x62aeec */
L_0062AEC0:
    /* cmp MEM32(ebx + 0x14), 0x10u */ /* 0x0062AEC0: cmp dword ptr [ebx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AED3; /* 0x0062AEC4: jb 0x62aed3 */
L_0062AEC6:
    PUSH32(esp, MEM32(ebx)); /* 0x0062AEC6: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x0062AEC8: call esi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x94)); /* 0x0062AECA: mov eax, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AED0: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AED3:
    MEM32(ebx + 0x14) = 0xFu; /* 0x0062AED3: mov dword ptr [ebx + 0x14], 0xf */
    ecx = ebx; /* 0x0062AEDA: mov ecx, ebx */
    MEM32(ebx + 0x10) = 0; /* 0x0062AEDC: mov dword ptr [ebx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0062AEE3: push eax */
    MEM8(ebx) = (uint8_t)(0); /* 0x0062AEE4: mov byte ptr [ebx], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0062AEE7: call 0x419890 */
    RECOMP_FLAGS_IN();
L_0062AEEC:
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x0062AEEC: mov byte ptr [ebp - 4], 0x11 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062AEF0: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AEFE; /* 0x0062AEF4: jb 0x62aefe */
L_0062AEF6:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062AEF6: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062AEF9: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AEFB: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AEFE:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062AEFE: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062AF05: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062AF0C: mov byte ptr [ebp - 0x40], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x0062AF10: mov byte ptr [ebp - 4], 0x10 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062AF14: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AF22; /* 0x0062AF18: jb 0x62af22 */
L_0062AF1A:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062AF1A: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062AF1D: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AF1F: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AF22:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062AF22: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AF29: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062AF30: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062AF34: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062AF38: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AF46; /* 0x0062AF3C: jb 0x62af46 */
L_0062AF3E:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062AF3E: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(esi); /* 0x0062AF41: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AF43: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AF46:
    PUSH32(esp, 0); /* 0x0062AF46: push 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AF48: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062AF4F: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062AF52: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0062AF59: push 0x7cd0c4 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062AF5E: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062AF65: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062AF6C: mov byte ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062AF70: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062AF77: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062AF7E: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062AF82: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x13u); /* 0x0062AF87: mov byte ptr [ebp - 4], 0x13 */
    ecx = ebp + (-0x58); /* 0x0062AF8B: lea ecx, [ebp - 0x58] */
    PUSH32(esp, 0xEu); /* 0x0062AF8E: push 0xe */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062AF90: mov dword ptr [ebp - 0x48], 0 */
    MEM32(ebp + (-0x44)) = 0; /* 0x0062AF97: mov dword ptr [ebp - 0x44], 0 */
    PUSH32(esp, 0x007F93C0u); /* 0x0062AF9E: push 0x7f93c0 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062AFA3: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062AFAA: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062AFB1: mov byte ptr [ebp - 0x58], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062AFB5: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x14u); /* 0x0062AFBA: mov byte ptr [ebp - 4], 0x14 */
    eax = ebp + (-0x28); /* 0x0062AFBE: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0062AFC1: push eax */
    eax = ebp + (-0x58); /* 0x0062AFC2: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x0062AFC5: push eax */
    eax = ebp + (-0x40); /* 0x0062AFC6: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0062AFC9: push eax */
    ecx = ebp + (-0x90); /* 0x0062AFCA: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00540F20); /* 0x0062AFD0: call 0x540f20 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x94)) = eax; /* 0x0062AFD5: mov dword ptr [ebp - 0x94], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x15u); /* 0x0062AFDB: mov byte ptr [ebp - 4], 0x15 */
    ebx = edi + 0x98; /* 0x0062AFDF: lea ebx, [edi + 0x98] */
    /* cmp ebx, eax */ /* 0x0062AFE5: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062B015; /* 0x0062AFE7: je 0x62b015 */
L_0062AFE9:
    /* cmp MEM32(ebx + 0x14), 0x10u */ /* 0x0062AFE9: cmp dword ptr [ebx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062AFFC; /* 0x0062AFED: jb 0x62affc */
L_0062AFEF:
    PUSH32(esp, MEM32(ebx)); /* 0x0062AFEF: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x0062AFF1: call esi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x94)); /* 0x0062AFF3: mov eax, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062AFF9: add esp, 4 */
    _flag_k = FK_ADD;
L_0062AFFC:
    MEM32(ebx + 0x14) = 0xFu; /* 0x0062AFFC: mov dword ptr [ebx + 0x14], 0xf */
    ecx = ebx; /* 0x0062B003: mov ecx, ebx */
    MEM32(ebx + 0x10) = 0; /* 0x0062B005: mov dword ptr [ebx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0062B00C: push eax */
    MEM8(ebx) = (uint8_t)(0); /* 0x0062B00D: mov byte ptr [ebx], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0062B010: call 0x419890 */
    RECOMP_FLAGS_IN();
L_0062B015:
    MEM8(ebp + (-0x4)) = (uint8_t)(0x14u); /* 0x0062B015: mov byte ptr [ebp - 4], 0x14 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062B019: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B027; /* 0x0062B01D: jb 0x62b027 */
L_0062B01F:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062B01F: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062B022: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B024: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B027:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062B027: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B02E: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062B035: mov byte ptr [ebp - 0x40], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x13u); /* 0x0062B039: mov byte ptr [ebp - 4], 0x13 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062B03D: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B04B; /* 0x0062B041: jb 0x62b04b */
L_0062B043:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062B043: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(esi); /* 0x0062B046: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B048: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B04B:
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062B04B: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B052: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062B059: mov byte ptr [ebp - 0x58], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062B05D: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B061: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B06F; /* 0x0062B065: jb 0x62b06f */
L_0062B067:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062B067: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062B06A: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B06C: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B06F:
    PUSH32(esp, 0x007CD0C4u); /* 0x0062B06F: push 0x7cd0c4 */
    ecx = ebp + (-0x28); /* 0x0062B074: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B077: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B07E: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B085: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062B089: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x16u); /* 0x0062B08E: mov byte ptr [ebp - 4], 0x16 */
    ecx = ebp + (-0x58); /* 0x0062B092: lea ecx, [ebp - 0x58] */
    PUSH32(esp, 0x007F93ACu); /* 0x0062B095: push 0x7f93ac */
    RECOMP_CALL(sub_00409FA0); /* 0x0062B09A: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x17u); /* 0x0062B09F: mov byte ptr [ebp - 4], 0x17 */
    eax = ebp + (-0x28); /* 0x0062B0A3: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0062B0A6: push eax */
    eax = ebp + (-0x58); /* 0x0062B0A7: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x0062B0AA: push eax */
    eax = ebp + (-0x40); /* 0x0062B0AB: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0062B0AE: push eax */
    ecx = ebp + (-0x90); /* 0x0062B0AF: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00540F20); /* 0x0062B0B5: call 0x540f20 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x18u); /* 0x0062B0BA: mov byte ptr [ebp - 4], 0x18 */
    ecx = edi + 0xB0; /* 0x0062B0BE: lea ecx, [edi + 0xb0] */
    PUSH32(esp, eax); /* 0x0062B0C4: push eax */
    RECOMP_CALL(sub_004196B0); /* 0x0062B0C5: call 0x4196b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x17u); /* 0x0062B0CA: mov byte ptr [ebp - 4], 0x17 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062B0CE: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B0DC; /* 0x0062B0D2: jb 0x62b0dc */
L_0062B0D4:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062B0D4: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062B0D7: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B0D9: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B0DC:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062B0DC: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B0E3: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062B0EA: mov byte ptr [ebp - 0x40], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x16u); /* 0x0062B0EE: mov byte ptr [ebp - 4], 0x16 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062B0F2: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B100; /* 0x0062B0F6: jb 0x62b100 */
L_0062B0F8:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062B0F8: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(esi); /* 0x0062B0FB: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B0FD: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B100:
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062B100: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B107: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062B10E: mov byte ptr [ebp - 0x58], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062B112: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B116: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B124; /* 0x0062B11A: jb 0x62b124 */
L_0062B11C:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062B11C: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062B11F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B121: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B124:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B124: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B12B: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B132: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062B136: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x90); /* 0x0062B13D: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_00540E10); /* 0x0062B143: call 0x540e10 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0062B148: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062B14B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062B152: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062B153: pop edi */
    esi = POP32_VAL(esp); /* 0x0062B154: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062B155: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0062B156: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0062B159: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0062B15B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062B160: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062B162: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062B163: ret  */
    RECOMP_REGS_OUT();
}

void sub_0062B170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062B170u);

L_0062B170:
    PUSH32(esp, ebp); /* 0x0062B170: push ebp */
    ebp = esp; /* 0x0062B171: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062B173: push -1 */
    PUSH32(esp, 0x007B8613u); /* 0x0062B175: push 0x7b8613 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062B17A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0062B180: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCCu; /* 0x0062B181: sub esp, 0xcc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0062B187: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062B18C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0062B18E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0062B191: push ebx */
    PUSH32(esp, esi); /* 0x0062B192: push esi */
    PUSH32(esp, edi); /* 0x0062B193: push edi */
    PUSH32(esp, eax); /* 0x0062B194: push eax */
    eax = ebp + (-0xC); /* 0x0062B195: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062B198: mov dword ptr fs:[0], eax */
    ebx = MEM32(0x870270); /* 0x0062B19E: mov ebx, dword ptr [0x870270] */
    ecx = ebp + (-0x28); /* 0x0062B1A4: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 6); /* 0x0062B1A7: push 6 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B1A9: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062B1B0: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007ED4C4u); /* 0x0062B1B7: push 0x7ed4c4 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B1BC: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B1C3: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B1CA: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B1CE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062B1D3: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(0x8780CC); /* 0x0062B1DA: mov ecx, dword ptr [0x8780cc] */
    /* test ecx, ecx */ /* 0x0062B1E0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062B1F3; /* 0x0062B1E2: je 0x62b1f3 */
L_0062B1E4:
    ecx = MEM32(ecx + 0xC0); /* 0x0062B1E4: mov ecx, dword ptr [ecx + 0xc0] */
    eax = ebp + (-0x28); /* 0x0062B1EA: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0062B1ED: push eax */
    RECOMP_CALL(sub_00671CA0); /* 0x0062B1EE: call 0x671ca0 */
    RECOMP_FLAGS_IN();
L_0062B1F3:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062B1F3: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B1FA: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x0062B1FE: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B20E; /* 0x0062B204: jb 0x62b20e */
L_0062B206:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062B206: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062B209: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B20B: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B20E:
    ecx = ebp + (-0xD0); /* 0x0062B20E: lea ecx, [ebp - 0xd0] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B214: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B21B: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B222: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0052D7C0); /* 0x0062B226: call 0x52d7c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x0062B22B: mov dword ptr [ebp - 4], 1 */
    ecx = ebp + (-0x80); /* 0x0062B232: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053C6C0); /* 0x0062B235: call 0x53c6c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x0062B23A: push 0xa */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B23C: mov dword ptr [ebp - 0x48], 0 */
    ecx = ebp + (-0x58); /* 0x0062B243: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x44)) = 0; /* 0x0062B246: mov dword ptr [ebp - 0x44], 0 */
    PUSH32(esp, 0x007F91A4u); /* 0x0062B24D: push 0x7f91a4 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062B252: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B259: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062B260: mov byte ptr [ebp - 0x58], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B264: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0062B269: mov byte ptr [ebp - 4], 2 */
    eax = ebp + (-0x58); /* 0x0062B26D: lea eax, [ebp - 0x58] */
    PUSH32(esp, MEM32(ebx + 0x6C)); /* 0x0062B270: push dword ptr [ebx + 0x6c] */
    ecx = ebp + (-0xD0); /* 0x0062B273: lea ecx, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x0062B279: push eax */
    RECOMP_CALL(sub_00540D80); /* 0x0062B27A: call 0x540d80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B27F: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062B283: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B291; /* 0x0062B287: jb 0x62b291 */
L_0062B289:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062B289: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(esi); /* 0x0062B28C: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B28E: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B291:
    PUSH32(esp, 0xCu); /* 0x0062B291: push 0xc */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B293: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062B29A: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062B29D: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F9194u); /* 0x0062B2A4: push 0x7f9194 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062B2A9: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B2B0: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062B2B7: mov byte ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B2BB: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B2C2: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B2C9: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B2CD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062B2D2: mov byte ptr [ebp - 4], 3 */
    eax = ebp + (-0x28); /* 0x0062B2D6: lea eax, [ebp - 0x28] */
    PUSH32(esp, MEM32(ebx + 0x74)); /* 0x0062B2D9: push dword ptr [ebx + 0x74] */
    ecx = ebp + (-0xD0); /* 0x0062B2DC: lea ecx, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x0062B2E2: push eax */
    RECOMP_CALL(sub_00540D80); /* 0x0062B2E3: call 0x540d80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B2E8: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B2EC: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B2FA; /* 0x0062B2F0: jb 0x62b2fa */
L_0062B2F2:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062B2F2: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062B2F5: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B2F7: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B2FA:
    PUSH32(esp, 0xCu); /* 0x0062B2FA: push 0xc */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B2FC: mov dword ptr [ebp - 0x48], 0 */
    ecx = ebp + (-0x58); /* 0x0062B303: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x44)) = 0; /* 0x0062B306: mov dword ptr [ebp - 0x44], 0 */
    PUSH32(esp, 0x007F91BCu); /* 0x0062B30D: push 0x7f91bc */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B312: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B319: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B320: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062B324: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B32B: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062B332: mov byte ptr [ebp - 0x58], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B336: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0062B33B: mov byte ptr [ebp - 4], 4 */
    eax = ebp + (-0x58); /* 0x0062B33F: lea eax, [ebp - 0x58] */
    PUSH32(esp, MEM32(ebx + 0x70)); /* 0x0062B342: push dword ptr [ebx + 0x70] */
    ecx = ebp + (-0xD0); /* 0x0062B345: lea ecx, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x0062B34B: push eax */
    RECOMP_CALL(sub_00540D80); /* 0x0062B34C: call 0x540d80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B351: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062B355: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B363; /* 0x0062B359: jb 0x62b363 */
L_0062B35B:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062B35B: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(esi); /* 0x0062B35E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B360: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B363:
    PUSH32(esp, 0xBu); /* 0x0062B363: push 0xb */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B365: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062B36C: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062B36F: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F91B0u); /* 0x0062B376: push 0x7f91b0 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062B37B: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B382: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062B389: mov byte ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B38D: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B394: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B39B: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B39F: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0062B3A4: mov byte ptr [ebp - 4], 5 */
    eax = ebp + (-0x28); /* 0x0062B3A8: lea eax, [ebp - 0x28] */
    PUSH32(esp, MEM32(ebx + 0x78)); /* 0x0062B3AB: push dword ptr [ebx + 0x78] */
    ecx = ebp + (-0xD0); /* 0x0062B3AE: lea ecx, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x0062B3B4: push eax */
    RECOMP_CALL(sub_00540D80); /* 0x0062B3B5: call 0x540d80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B3BA: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B3BE: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B3CC; /* 0x0062B3C2: jb 0x62b3cc */
L_0062B3C4:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062B3C4: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062B3C7: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B3C9: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B3CC:
    PUSH32(esp, 0xBu); /* 0x0062B3CC: push 0xb */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B3CE: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062B3D5: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062B3D8: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F91D8u); /* 0x0062B3DF: push 0x7f91d8 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B3E4: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B3EB: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B3F2: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062B3F6: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B3FD: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062B404: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B408: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0062B40D: mov byte ptr [ebp - 4], 6 */
    eax = ebp + (-0x40); /* 0x0062B411: lea eax, [ebp - 0x40] */
    PUSH32(esp, MEM32(ebx + 0x7C)); /* 0x0062B414: push dword ptr [ebx + 0x7c] */
    ecx = ebp + (-0xD0); /* 0x0062B417: lea ecx, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x0062B41D: push eax */
    RECOMP_CALL(sub_00540D80); /* 0x0062B41E: call 0x540d80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B423: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062B427: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B435; /* 0x0062B42B: jb 0x62b435 */
L_0062B42D:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062B42D: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062B430: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B432: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B435:
    PUSH32(esp, 0xBu); /* 0x0062B435: push 0xb */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B437: mov dword ptr [ebp - 0x48], 0 */
    ecx = ebp + (-0x58); /* 0x0062B43E: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x44)) = 0; /* 0x0062B441: mov dword ptr [ebp - 0x44], 0 */
    PUSH32(esp, 0x007F91CCu); /* 0x0062B448: push 0x7f91cc */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062B44D: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B454: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062B45B: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062B45F: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B466: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062B46D: mov byte ptr [ebp - 0x58], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B471: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0062B476: mov byte ptr [ebp - 4], 7 */
    SET_LO8(eax, MEM8(ebx + 0x68)); /* 0x0062B47A: mov al, byte ptr [ebx + 0x68] */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062B47D: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0xD8)) = (uint8_t)(LO8(eax)); /* 0x0062B481: mov byte ptr [ebp - 0xd8], al */
    eax = ebp + (-0x58); /* 0x0062B487: lea eax, [ebp - 0x58] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x58)); } /* 0x0062B48A: cmovae eax, dword ptr [ebp - 0x58] */
    MEM32(ebp + (-0xD4)) = eax; /* 0x0062B48E: mov dword ptr [ebp - 0xd4], eax */
    edi = eax; /* 0x0062B494: mov edi, eax */
    /* cmp MEM8(eax), 0 */ /* 0x0062B496: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062B4A6; /* 0x0062B499: je 0x62b4a6 */
L_0062B49B:
    goto L_0062B4A0; /* 0x0062B49B: jmp 0x62b4a0 */
L_0062B4A0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062B4A0: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edi), 0 */ /* 0x0062B4A1: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062B4A0; /* 0x0062B4A4: jne 0x62b4a0 */
L_0062B4A6:
    PUSH32(esp, ecx); /* 0x0062B4A6: push ecx */
    ecx = ebp + (-0x80); /* 0x0062B4A7: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062B4AA: call 0x53d290 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xD4)); /* 0x0062B4AF: mov eax, dword ptr [ebp - 0xd4] */
    ecx = ebp + (-0x80); /* 0x0062B4B5: lea ecx, [ebp - 0x80] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0062B4B8: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0062B4BA: push edi */
    PUSH32(esp, eax); /* 0x0062B4BB: push eax */
    RECOMP_CALL(sub_0053D3C0); /* 0x0062B4BC: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0062B4C1: push ecx */
    ecx = ebp + (-0x80); /* 0x0062B4C2: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062B4C5: call 0x53d290 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xD8))); /* 0x0062B4CA: push dword ptr [ebp - 0xd8] */
    ecx = ebp + (-0x80); /* 0x0062B4D0: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005449C0); /* 0x0062B4D3: call 0x5449c0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B4D8: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062B4DC: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B4EA; /* 0x0062B4E0: jb 0x62b4ea */
L_0062B4E2:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062B4E2: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(esi); /* 0x0062B4E5: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B4E7: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B4EA:
    PUSH32(esp, 0xBu); /* 0x0062B4EA: push 0xb */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B4EC: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062B4F3: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062B4F6: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F91F8u); /* 0x0062B4FD: push 0x7f91f8 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062B502: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B509: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062B510: mov byte ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B514: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B51B: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B522: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B526: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0062B52B: mov byte ptr [ebp - 4], 8 */
    eax = MEM32(ebx + 0x64); /* 0x0062B52F: mov eax, dword ptr [ebx + 0x64] */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B532: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(eax + 0x2)); /* 0x0062B536: mov al, byte ptr [eax + 2] */
    MEM8(ebp + (-0xD4)) = (uint8_t)(LO8(eax)); /* 0x0062B539: mov byte ptr [ebp - 0xd4], al */
    eax = ebp + (-0x28); /* 0x0062B53F: lea eax, [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x0062B542: cmovae eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0xD8)) = eax; /* 0x0062B546: mov dword ptr [ebp - 0xd8], eax */
    edi = eax; /* 0x0062B54C: mov edi, eax */
    /* cmp MEM8(eax), 0 */ /* 0x0062B54E: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062B559; /* 0x0062B551: je 0x62b559 */
L_0062B553:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062B553: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edi), 0 */ /* 0x0062B554: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062B553; /* 0x0062B557: jne 0x62b553 */
L_0062B559:
    PUSH32(esp, ecx); /* 0x0062B559: push ecx */
    ecx = ebp + (-0x80); /* 0x0062B55A: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062B55D: call 0x53d290 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xD8)); /* 0x0062B562: mov eax, dword ptr [ebp - 0xd8] */
    ecx = ebp + (-0x80); /* 0x0062B568: lea ecx, [ebp - 0x80] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0062B56B: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0062B56D: push edi */
    PUSH32(esp, eax); /* 0x0062B56E: push eax */
    RECOMP_CALL(sub_0053D3C0); /* 0x0062B56F: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0062B574: push ecx */
    ecx = ebp + (-0x80); /* 0x0062B575: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062B578: call 0x53d290 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xD4))); /* 0x0062B57D: push dword ptr [ebp - 0xd4] */
    ecx = ebp + (-0x80); /* 0x0062B583: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005449C0); /* 0x0062B586: call 0x5449c0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B58B: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B58F: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B59D; /* 0x0062B593: jb 0x62b59d */
L_0062B595:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062B595: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062B598: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B59A: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B59D:
    PUSH32(esp, 0xBu); /* 0x0062B59D: push 0xb */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B59F: mov dword ptr [ebp - 0x48], 0 */
    ecx = ebp + (-0x58); /* 0x0062B5A6: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x44)) = 0; /* 0x0062B5A9: mov dword ptr [ebp - 0x44], 0 */
    PUSH32(esp, 0x007F93DCu); /* 0x0062B5B0: push 0x7f93dc */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B5B5: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B5BC: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B5C3: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062B5C7: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B5CE: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062B5D5: mov byte ptr [ebp - 0x58], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B5D9: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0062B5DE: mov byte ptr [ebp - 4], 9 */
    eax = MEM32(ebx + 0x64); /* 0x0062B5E2: mov eax, dword ptr [ebx + 0x64] */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062B5E5: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(eax + 0x1)); /* 0x0062B5E9: mov al, byte ptr [eax + 1] */
    MEM8(ebp + (-0xD4)) = (uint8_t)(LO8(eax)); /* 0x0062B5EC: mov byte ptr [ebp - 0xd4], al */
    eax = ebp + (-0x58); /* 0x0062B5F2: lea eax, [ebp - 0x58] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x58)); } /* 0x0062B5F5: cmovae eax, dword ptr [ebp - 0x58] */
    MEM32(ebp + (-0xD8)) = eax; /* 0x0062B5F9: mov dword ptr [ebp - 0xd8], eax */
    edi = eax; /* 0x0062B5FF: mov edi, eax */
    /* cmp MEM8(eax), 0 */ /* 0x0062B601: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062B60C; /* 0x0062B604: je 0x62b60c */
L_0062B606:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062B606: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edi), 0 */ /* 0x0062B607: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062B606; /* 0x0062B60A: jne 0x62b606 */
L_0062B60C:
    PUSH32(esp, ecx); /* 0x0062B60C: push ecx */
    ecx = ebp + (-0x80); /* 0x0062B60D: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062B610: call 0x53d290 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xD8)); /* 0x0062B615: mov eax, dword ptr [ebp - 0xd8] */
    ecx = ebp + (-0x80); /* 0x0062B61B: lea ecx, [ebp - 0x80] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0062B61E: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0062B620: push edi */
    PUSH32(esp, eax); /* 0x0062B621: push eax */
    RECOMP_CALL(sub_0053D3C0); /* 0x0062B622: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0062B627: push ecx */
    ecx = ebp + (-0x80); /* 0x0062B628: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062B62B: call 0x53d290 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xD4))); /* 0x0062B630: push dword ptr [ebp - 0xd4] */
    ecx = ebp + (-0x80); /* 0x0062B636: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005449C0); /* 0x0062B639: call 0x5449c0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B63E: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0062B642: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B650; /* 0x0062B646: jb 0x62b650 */
L_0062B648:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0062B648: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(esi); /* 0x0062B64B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B64D: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B650:
    PUSH32(esp, 0xAu); /* 0x0062B650: push 0xa */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B652: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062B659: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062B65C: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F93D0u); /* 0x0062B663: push 0x7f93d0 */
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0062B668: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0062B66F: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0062B676: mov byte ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B67A: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B681: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B688: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B68C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0062B691: mov byte ptr [ebp - 4], 0xa */
    eax = MEM32(ebx + 0x64); /* 0x0062B695: mov eax, dword ptr [ebx + 0x64] */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B698: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(eax + 0x4)); /* 0x0062B69C: mov al, byte ptr [eax + 4] */
    MEM8(ebp + (-0xD4)) = (uint8_t)(LO8(eax)); /* 0x0062B69F: mov byte ptr [ebp - 0xd4], al */
    eax = ebp + (-0x28); /* 0x0062B6A5: lea eax, [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x0062B6A8: cmovae eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0xD8)) = eax; /* 0x0062B6AC: mov dword ptr [ebp - 0xd8], eax */
    edi = eax; /* 0x0062B6B2: mov edi, eax */
    /* cmp MEM8(eax), 0 */ /* 0x0062B6B4: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062B6C6; /* 0x0062B6B7: je 0x62b6c6 */
L_0062B6B9:
    esp = esp; /* 0x0062B6B9: lea esp, [esp] */
L_0062B6C0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062B6C0: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edi), 0 */ /* 0x0062B6C1: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062B6C0; /* 0x0062B6C4: jne 0x62b6c0 */
L_0062B6C6:
    PUSH32(esp, ecx); /* 0x0062B6C6: push ecx */
    ecx = ebp + (-0x80); /* 0x0062B6C7: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062B6CA: call 0x53d290 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xD8)); /* 0x0062B6CF: mov eax, dword ptr [ebp - 0xd8] */
    ecx = ebp + (-0x80); /* 0x0062B6D5: lea ecx, [ebp - 0x80] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0062B6D8: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0062B6DA: push edi */
    PUSH32(esp, eax); /* 0x0062B6DB: push eax */
    RECOMP_CALL(sub_0053D3C0); /* 0x0062B6DC: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x0062B6E1: push ecx */
    ecx = ebp + (-0x80); /* 0x0062B6E2: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0053D290); /* 0x0062B6E5: call 0x53d290 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xD4))); /* 0x0062B6EA: push dword ptr [ebp - 0xd4] */
    ecx = ebp + (-0x80); /* 0x0062B6F0: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_005449C0); /* 0x0062B6F3: call 0x5449c0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B6F8: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B6FC: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B70A; /* 0x0062B700: jb 0x62b70a */
L_0062B702:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062B702: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062B705: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B707: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B70A:
    PUSH32(esp, 0xEu); /* 0x0062B70A: push 0xe */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B70C: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062B713: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062B716: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F93FCu); /* 0x0062B71D: push 0x7f93fc */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B722: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B729: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B730: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062B734: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B73B: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062B742: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B746: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x0062B74B: mov byte ptr [ebp - 4], 0xb */
    ecx = ebp + (-0xD0); /* 0x0062B74F: lea ecx, [ebp - 0xd0] */
    eax = MEM32(ebx + 0x64); /* 0x0062B755: mov eax, dword ptr [ebx + 0x64] */
    SET_LO8(eax, MEM8(eax)); /* 0x0062B758: mov al, byte ptr [eax] */
    eax = (uint32_t)LO8(eax); /* 0x0062B75A: movzx eax, al */
    PUSH32(esp, eax); /* 0x0062B75D: push eax */
    eax = ebp + (-0x40); /* 0x0062B75E: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0062B761: push eax */
    RECOMP_CALL(sub_0060ECA0); /* 0x0062B762: call 0x60eca0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B767: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062B76B: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B779; /* 0x0062B76F: jb 0x62b779 */
L_0062B771:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062B771: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062B774: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B776: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B779:
    PUSH32(esp, 0x13u); /* 0x0062B779: push 0x13 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B77B: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062B782: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062B785: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F93E8u); /* 0x0062B78C: push 0x7f93e8 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062B791: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B798: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062B79F: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B7A3: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B7AA: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B7B1: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B7B5: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0062B7BA: mov byte ptr [ebp - 4], 0xc */
    ecx = ebp + (-0xD0); /* 0x0062B7BE: lea ecx, [ebp - 0xd0] */
    eax = MEM32(ebx + 0x64); /* 0x0062B7C4: mov eax, dword ptr [ebx + 0x64] */
    _xmm[0].u64[0] = MEM32(eax + 0x38); _xmm[0].u64[1] = 0; /* 0x0062B7C7: movss xmm0, dword ptr [eax + 0x38] */
    { float _s = sse_f32(MEM32(0x80951C)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0062B7CC: mulss xmm0, dword ptr [0x80951c] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0062B7D4: cvttss2si eax, xmm0 */
    PUSH32(esp, eax); /* 0x0062B7D8: push eax */
    eax = ebp + (-0x28); /* 0x0062B7D9: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0062B7DC: push eax */
    RECOMP_CALL(sub_00540D80); /* 0x0062B7DD: call 0x540d80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B7E2: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B7E6: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B7F4; /* 0x0062B7EA: jb 0x62b7f4 */
L_0062B7EC:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062B7EC: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062B7EF: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B7F1: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B7F4:
    PUSH32(esp, 0x10u); /* 0x0062B7F4: push 0x10 */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B7F6: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062B7FD: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062B800: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F91E4u); /* 0x0062B807: push 0x7f91e4 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B80C: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B813: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B81A: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062B81E: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B825: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062B82C: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B830: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x0062B835: mov byte ptr [ebp - 4], 0xd */
    eax = ebp + (-0x28); /* 0x0062B839: lea eax, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x0062B83C: push 0 */
    PUSH32(esp, eax); /* 0x0062B83E: push eax */
    ecx = ebx; /* 0x0062B83F: mov ecx, ebx */
    RECOMP_CALL(sub_00630380); /* 0x0062B841: call 0x630380 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x0062B846: mov byte ptr [ebp - 4], 0xe */
    ecx = ebp + (-0xD0); /* 0x0062B84A: lea ecx, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x0062B850: push eax */
    eax = ebp + (-0x40); /* 0x0062B851: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0062B854: push eax */
    RECOMP_CALL(sub_00540C90); /* 0x0062B855: call 0x540c90 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x0062B85A: mov byte ptr [ebp - 4], 0xd */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B85E: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B86C; /* 0x0062B862: jb 0x62b86c */
L_0062B864:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062B864: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062B867: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B869: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B86C:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B86C: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B873: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B87A: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B87E: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062B882: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B890; /* 0x0062B886: jb 0x62b890 */
L_0062B888:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062B888: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062B88B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B88D: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B890:
    PUSH32(esp, 0xEu); /* 0x0062B890: push 0xe */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B892: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x0062B899: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x0062B89C: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F93C0u); /* 0x0062B8A3: push 0x7f93c0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062B8A8: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B8AF: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062B8B6: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B8BA: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B8C1: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B8C8: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B8CC: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x0062B8D1: mov byte ptr [ebp - 4], 0xf */
    eax = ebp + (-0x40); /* 0x0062B8D5: lea eax, [ebp - 0x40] */
    PUSH32(esp, 1); /* 0x0062B8D8: push 1 */
    PUSH32(esp, eax); /* 0x0062B8DA: push eax */
    ecx = ebx; /* 0x0062B8DB: mov ecx, ebx */
    RECOMP_CALL(sub_00630380); /* 0x0062B8DD: call 0x630380 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x0062B8E2: mov byte ptr [ebp - 4], 0x10 */
    ecx = ebp + (-0xD0); /* 0x0062B8E6: lea ecx, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x0062B8EC: push eax */
    eax = ebp + (-0x28); /* 0x0062B8ED: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0062B8F0: push eax */
    RECOMP_CALL(sub_00540C90); /* 0x0062B8F1: call 0x540c90 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x0062B8F6: mov byte ptr [ebp - 4], 0xf */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062B8FA: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B908; /* 0x0062B8FE: jb 0x62b908 */
L_0062B900:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062B900: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062B903: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B905: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B908:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062B908: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B90F: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062B916: mov byte ptr [ebp - 0x40], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B91A: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B91E: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B92C; /* 0x0062B922: jb 0x62b92c */
L_0062B924:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062B924: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062B927: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B929: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B92C:
    PUSH32(esp, 0x10u); /* 0x0062B92C: push 0x10 */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B92E: mov dword ptr [ebp - 0x30], 0 */
    ecx = ebp + (-0x40); /* 0x0062B935: lea ecx, [ebp - 0x40] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062B938: mov dword ptr [ebp - 0x2c], 0 */
    PUSH32(esp, 0x007F93ACu); /* 0x0062B93F: push 0x7f93ac */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B944: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B94B: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B952: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062B956: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B95D: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062B964: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062B968: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x0062B96D: mov byte ptr [ebp - 4], 0x11 */
    eax = ebp + (-0x28); /* 0x0062B971: lea eax, [ebp - 0x28] */
    PUSH32(esp, 2); /* 0x0062B974: push 2 */
    PUSH32(esp, eax); /* 0x0062B976: push eax */
    ecx = ebx; /* 0x0062B977: mov ecx, ebx */
    RECOMP_CALL(sub_00630380); /* 0x0062B979: call 0x630380 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x12u); /* 0x0062B97E: mov byte ptr [ebp - 4], 0x12 */
    ecx = ebp + (-0xD0); /* 0x0062B982: lea ecx, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x0062B988: push eax */
    eax = ebp + (-0x40); /* 0x0062B989: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0062B98C: push eax */
    RECOMP_CALL(sub_00540C90); /* 0x0062B98D: call 0x540c90 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x0062B992: mov byte ptr [ebp - 4], 0x11 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0062B996: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B9A4; /* 0x0062B99A: jb 0x62b9a4 */
L_0062B99C:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0062B99C: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0062B99F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B9A1: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B9A4:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062B9A4: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062B9AB: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0062B9B2: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062B9B6: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062B9BA: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062B9C8; /* 0x0062B9BE: jb 0x62b9c8 */
L_0062B9C0:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062B9C0: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062B9C3: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062B9C5: add esp, 4 */
    _flag_k = FK_ADD;
L_0062B9C8:
    edi = MEM32(ebp + (-0x80)); /* 0x0062B9C8: mov edi, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x70)) = MEM32(ebp + (-0x70)) - 8; /* 0x0062B9CB: sub dword ptr [ebp - 0x70], 8 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062B9CF: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B9D6: mov dword ptr [ebp - 0x30], 0 */
    eax = MEM32(edi + 0xC); /* 0x0062B9DD: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0062B9E0: inc eax */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062B9E1: mov byte ptr [ebp - 0x40], 0 */
    /* cmp eax, MEM32(edi + 0x10) */ /* 0x0062B9E5: cmp eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0062B9F3; /* 0x0062B9E8: jbe 0x62b9f3 */
L_0062B9EA:
    PUSH32(esp, 1); /* 0x0062B9EA: push 1 */
    ecx = edi; /* 0x0062B9EC: mov ecx, edi */
    RECOMP_CALL(sub_0053EDC0); /* 0x0062B9EE: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0062B9F3:
    ecx = MEM32(edi + 0xC); /* 0x0062B9F3: mov ecx, dword ptr [edi + 0xc] */
    PUSH32(esp, 0xCu); /* 0x0062B9F6: push 0xc */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062B9F8: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0062B9FF: mov dword ptr [ebp - 0x2c], 0 */
    eax = ecx + 0x1; /* 0x0062BA06: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062BA09: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(edi + 0xC) = eax; /* 0x0062BA10: mov dword ptr [edi + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x7Du); /* 0x0062BA13: mov byte ptr [ecx], 0x7d */
    ecx = ebp + (-0x40); /* 0x0062BA16: lea ecx, [ebp - 0x40] */
    PUSH32(esp, 0x007F9428u); /* 0x0062BA19: push 0x7f9428 */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062BA1E: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062BA25: mov byte ptr [ebp - 0x40], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062BA29: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x13u); /* 0x0062BA2E: mov byte ptr [ebp - 4], 0x13 */
    eax = ebp + (-0x40); /* 0x0062BA32: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0062BA35: push eax */
    ecx = ebp + (-0xD0); /* 0x0062BA36: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_0052D960); /* 0x0062BA3C: call 0x52d960 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062BA41: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062BA45: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062BA53; /* 0x0062BA49: jb 0x62ba53 */
L_0062BA4B:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0062BA4B: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0062BA4E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062BA50: add esp, 4 */
    _flag_k = FK_ADD;
L_0062BA53:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062BA53: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x0062BA5A: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0062BA61: mov byte ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062BA65: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0xD0); /* 0x0062BA6C: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_0052D890); /* 0x0062BA72: call 0x52d890 */
    RECOMP_FLAGS_IN();
    eax = 1; /* 0x0062BA77: mov eax, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062BA7C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062BA7F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062BA86: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062BA87: pop edi */
    esi = POP32_VAL(esp); /* 0x0062BA88: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062BA89: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0062BA8A: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0062BA8D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0062BA8F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062BA94: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062BA96: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062BA97: ret  */
    RECOMP_REGS_OUT();
}

void sub_0062BAA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062BAA0u);

L_0062BAA0:
    PUSH32(esp, ebp); /* 0x0062BAA0: push ebp */
    ebp = esp; /* 0x0062BAA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062BAA3: push -1 */
    PUSH32(esp, 0x007B8690u); /* 0x0062BAA5: push 0x7b8690 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062BAAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0062BAB0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x0062BAB1: sub esp, 0x48 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0062BAB4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062BAB9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0062BABB: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x0062BABE: push ebx */
    PUSH32(esp, esi); /* 0x0062BABF: push esi */
    PUSH32(esp, edi); /* 0x0062BAC0: push edi */
    PUSH32(esp, eax); /* 0x0062BAC1: push eax */
    eax = ebp + (-0xC); /* 0x0062BAC2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062BAC5: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0x8); /* 0x0062BACB: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x0062BACE: lea ecx, [ebp - 0x2c] */
    ebx = MEM32(0x870270); /* 0x0062BAD1: mov ebx, dword ptr [0x870270] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062BAD7: push -1 */
    PUSH32(esp, 0); /* 0x0062BAD9: push 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0062BADB: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062BAE2: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, eax); /* 0x0062BAE9: push eax */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0062BAEA: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0062BAF1: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0062BAF8: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062BAFC: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062BB01: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x2C); /* 0x0062BB08: lea ecx, [ebp - 0x2c] */
    edx = MEM32(ebp + (-0x18)); /* 0x0062BB0B: mov edx, dword ptr [ebp - 0x18] */
    edi = ebp + (-0x2C); /* 0x0062BB0E: lea edi, [ebp - 0x2c] */
    esi = MEM32(ebp + (-0x2C)); /* 0x0062BB11: mov esi, dword ptr [ebp - 0x2c] */
    /* cmp edx, 0x10u */ /* 0x0062BB14: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x1C)); /* 0x0062BB17: mov eax, dword ptr [ebp - 0x1c] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x0062BB1A: cmovae ecx, esi */
    if (CMP_AE(_flag_a, _flag_b)) { edi = esi; } /* 0x0062BB1D: cmovae edi, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0062BB20: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, 0x10u */ /* 0x0062BB22: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x2C); /* 0x0062BB25: lea ecx, [ebp - 0x2c] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x0062BB28: cmovae ecx, esi */
    /* cmp ecx, eax */ /* 0x0062BB2B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062BB44; /* 0x0062BB2D: je 0x62bb44 */
L_0062BB2F:
    PUSH32(esp, MEM32(0x7CC6AC)); /* 0x0062BB2F: push dword ptr [0x7cc6ac] */
    edx = ecx; /* 0x0062BB35: mov edx, ecx */
    ecx = ebp + (-0x48); /* 0x0062BB37: lea ecx, [ebp - 0x48] */
    PUSH32(esp, edi); /* 0x0062BB3A: push edi */
    PUSH32(esp, eax); /* 0x0062BB3B: push eax */
    RECOMP_CALL(sub_00426250); /* 0x0062BB3C: call 0x426250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062BB41: add esp, 0xc */
    _flag_k = FK_ADD;
L_0062BB44:
    eax = ebp + (-0x2C); /* 0x0062BB44: lea eax, [ebp - 0x2c] */
    ecx = 0x00920060u; /* 0x0062BB47: mov ecx, 0x920060 */
    PUSH32(esp, eax); /* 0x0062BB4C: push eax */
    eax = ebp + (-0x48); /* 0x0062BB4D: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x0062BB50: push eax */
    RECOMP_CALL(sub_0060D0F0); /* 0x0062BB51: call 0x60d0f0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x48)); /* 0x0062BB56: mov esi, dword ptr [ebp - 0x48] */
    edi = MEM32(0x7CC694); /* 0x0062BB59: mov edi, dword ptr [0x7cc694] */
    /* cmp esi, MEM32(0x920060) */ /* 0x0062BB5F: cmp esi, dword ptr [0x920060] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x920060));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062BBC3; /* 0x0062BB65: je 0x62bbc3 */
L_0062BB67:
    eax = MEM32(esi + 0x20); /* 0x0062BB67: mov eax, dword ptr [esi + 0x20] */
    /* cmp MEM32(ebx + eax * 4 + 0xFC), 0 */ /* 0x0062BB6A: cmp dword ptr [ebx + eax*4 + 0xfc], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0xFC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062BBB1; /* 0x0062BB72: jne 0x62bbb1 */
L_0062BB74:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062BB74: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062BB77: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0062BB79: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062BB7C: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062BB81: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062BB86: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062BB8A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062BB8D: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0062BB8F: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x007F940Cu); /* 0x0062BB92: push 0x7f940c */
    RECOMP_CALL(sub_00409FA0); /* 0x0062BB97: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0062BB9C: mov byte ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062BBA0: mov byte ptr [ebp - 4], 0 */
    ecx = 0x1F6u; /* 0x0062BBA4: mov ecx, 0x1f6 */
    RECOMP_CALL(sub_00668DA0); /* 0x0062BBA9: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0062BBAE: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0062BBB1:
    eax = MEM32(esi + 0x20); /* 0x0062BBB1: mov eax, dword ptr [esi + 0x20] */
    eax = MEM32(ebx + eax * 4 + 0xFC); /* 0x0062BBB4: mov eax, dword ptr [ebx + eax*4 + 0xfc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1; /* 0x0062BBBB: inc dword ptr [eax + 0x18] */
    _flag_k = FK_INC;
    goto L_0062BE03; /* 0x0062BBBE: jmp 0x62be03 */
L_0062BBC3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0062BBC3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x100; /* 0x0062BBC5: lea eax, [ebx + 0x100] */
    goto L_0062BBD0; /* 0x0062BBCB: jmp 0x62bbd0 */
L_0062BBD0:
    /* cmp MEM32(eax + (-0x4)), 0 */ /* 0x0062BBD0: cmp dword ptr [eax - 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062BC02; /* 0x0062BBD4: je 0x62bc02 */
L_0062BBD6:
    /* cmp MEM32(eax), 0 */ /* 0x0062BBD6: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062BC01; /* 0x0062BBD9: je 0x62bc01 */
L_0062BBDB:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x0062BBDB: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062BBFC; /* 0x0062BBDF: je 0x62bbfc */
L_0062BBE1:
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x0062BBE1: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062BBF7; /* 0x0062BBE5: je 0x62bbf7 */
L_0062BBE7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x0062BBE7: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0062BBEA: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x100u */ /* 0x0062BBED: cmp esi, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_0062BBD0; /* 0x0062BBF3: jl 0x62bbd0 */
L_0062BBF5:
    goto L_0062BC02; /* 0x0062BBF5: jmp 0x62bc02 */
L_0062BBF7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x0062BBF7: add esi, 3 */
    _flag_k = FK_ADD;
    goto L_0062BC02; /* 0x0062BBFA: jmp 0x62bc02 */
L_0062BBFC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x0062BBFC: add esi, 2 */
    _flag_k = FK_ADD;
    goto L_0062BC02; /* 0x0062BBFF: jmp 0x62bc02 */
L_0062BC01:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0062BC01: inc esi */
    _flag_k = FK_INC;
L_0062BC02:
    /* cmp esi, 0x100u */ /* 0x0062BC02: cmp esi, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062BC6D; /* 0x0062BC08: jne 0x62bc6d */
L_0062BC0A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062BC0A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062BC0D: mov ecx, esp */
    MEM32(ebp + (-0x4C)) = esp; /* 0x0062BC0F: mov dword ptr [ebp - 0x4c], esp */
    PUSH32(esp, 0x29u); /* 0x0062BC12: push 0x29 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062BC14: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062BC1B: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F9204u); /* 0x0062BC22: push 0x7f9204 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062BC27: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062BC2A: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062BC2F: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062BC33: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062BC36: mov ecx, esp */
    MEM32(ebp + (-0x48)) = esp; /* 0x0062BC38: mov dword ptr [ebp - 0x48], esp */
    PUSH32(esp, 0x48u); /* 0x0062BC3B: push 0x48 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062BC3D: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062BC44: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F9298u); /* 0x0062BC4B: push 0x7f9298 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062BC50: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062BC53: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0062BC58: mov byte ptr [ebp - 4], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062BC5C: mov byte ptr [ebp - 4], 0 */
    ecx = 0x200u; /* 0x0062BC60: mov ecx, 0x200 */
    RECOMP_CALL(sub_00668410); /* 0x0062BC65: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0062BC6A: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0062BC6D:
    edi = MEM32(0x7CC698); /* 0x0062BC6D: mov edi, dword ptr [0x7cc698] */
    PUSH32(esp, 0x2Cu); /* 0x0062BC73: push 0x2c */
    RECOMP_ICALL(edi); /* 0x0062BC75: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062BC77: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4C)) = eax; /* 0x0062BC7A: mov dword ptr [ebp - 0x4c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0062BC7D: mov byte ptr [ebp - 4], 5 */
    /* test eax, eax */ /* 0x0062BC81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062BC9C; /* 0x0062BC83: je 0x62bc9c */
L_0062BC85:
    MEM32(eax + 0x14) = 0xFu; /* 0x0062BC85: mov dword ptr [eax + 0x14], 0xf */
    MEM32(eax + 0x10) = 0; /* 0x0062BC8C: mov dword ptr [eax + 0x10], 0 */
    MEM8(eax) = (uint8_t)(0); /* 0x0062BC93: mov byte ptr [eax], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0062BC96: mov byte ptr [ebp - 4], 5 */
    goto L_0062BC9E; /* 0x0062BC9A: jmp 0x62bc9e */
L_0062BC9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0062BC9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0062BC9E:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062BC9E: mov byte ptr [ebp - 4], 0 */
    ecx = ebp + (-0x2C); /* 0x0062BCA2: lea ecx, [ebp - 0x2c] */
    MEM32(ebx + esi * 4 + 0xFC) = eax; /* 0x0062BCA5: mov dword ptr [ebx + esi*4 + 0xfc], eax */
    /* cmp eax, ecx */ /* 0x0062BCAC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062BCBC; /* 0x0062BCAE: je 0x62bcbc */
L_0062BCB0:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062BCB0: push -1 */
    PUSH32(esp, 0); /* 0x0062BCB2: push 0 */
    PUSH32(esp, ecx); /* 0x0062BCB4: push ecx */
    ecx = eax; /* 0x0062BCB5: mov ecx, eax */
    RECOMP_CALL(sub_0040A030); /* 0x0062BCB7: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_0062BCBC:
    eax = MEM32(ebx + esi * 4 + 0xFC); /* 0x0062BCBC: mov eax, dword ptr [ebx + esi*4 + 0xfc] */
    PUSH32(esp, 8); /* 0x0062BCC3: push 8 */
    MEM32(eax + 0x18) = 1; /* 0x0062BCC5: mov dword ptr [eax + 0x18], 1 */
    eax = MEM32(ebx + esi * 4 + 0xFC); /* 0x0062BCCC: mov eax, dword ptr [ebx + esi*4 + 0xfc] */
    MEM32(eax + 0x28) = 0x447A0000u; /* 0x0062BCD3: mov dword ptr [eax + 0x28], 0x447a0000 */
    RECOMP_ICALL(edi); /* 0x0062BCDA: call edi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0062BCDC: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062BCDE: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4C)) = edi; /* 0x0062BCE1: mov dword ptr [ebp - 0x4c], edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0062BCE4: mov byte ptr [ebp - 4], 7 */
    /* test edi, edi */ /* 0x0062BCE8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062BCF1; /* 0x0062BCEA: je 0x62bcf1 */
L_0062BCEC:
    MEM8(edi) = (uint8_t)(1); /* 0x0062BCEC: mov byte ptr [edi], 1 */
    goto L_0062BCF3; /* 0x0062BCEF: jmp 0x62bcf3 */
L_0062BCF1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0062BCF1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_0062BCF3:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062BCF3: mov byte ptr [ebp - 4], 0 */
    eax = ebp + (-0x2C); /* 0x0062BCF7: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x0062BCFA: push eax */
    edx = 0x007F8D74u; /* 0x0062BCFB: mov edx, 0x7f8d74 */
    ecx = ebp + (-0x44); /* 0x0062BD00: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_0042A130); /* 0x0062BD03: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062BD08: add esp, 4 */
    _flag_k = FK_ADD;
    edx = eax; /* 0x0062BD0B: mov edx, eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0062BD0D: mov byte ptr [ebp - 4], 8 */
    eax = MEM32(ebx + esi * 4 + 0xFC); /* 0x0062BD11: mov eax, dword ptr [ebx + esi*4 + 0xfc] */
    ecx = eax + 0x1C; /* 0x0062BD18: lea ecx, [eax + 0x1c] */
    PUSH32(esp, ecx); /* 0x0062BD1B: push ecx */
    ecx = eax + 0x1D; /* 0x0062BD1C: lea ecx, [eax + 0x1d] */
    PUSH32(esp, ecx); /* 0x0062BD1F: push ecx */
    ecx = eax + 0x24; /* 0x0062BD20: lea ecx, [eax + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x0062BD23: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x0062BD26: push ecx */
    PUSH32(esp, eax); /* 0x0062BD27: push eax */
    PUSH32(esp, edx); /* 0x0062BD28: push edx */
    PUSH32(esp, edi); /* 0x0062BD29: push edi */
    RECOMP_CALL(sub_0062C070); /* 0x0062BD2A: call 0x62c070 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062BD2F: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x0062BD33: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062BD45; /* 0x0062BD37: jb 0x62bd45 */
L_0062BD39:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x0062BD39: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062BD3C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062BD42: add esp, 4 */
    _flag_k = FK_ADD;
L_0062BD45:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x0062BD45: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x0062BD4C: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x0062BD53: mov byte ptr [ebp - 0x44], 0 */
    /* test edi, edi */ /* 0x0062BD57: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062BD75; /* 0x0062BD59: je 0x62bd75 */
L_0062BD5B:
    ecx = MEM32(edi + 0x4); /* 0x0062BD5B: mov ecx, dword ptr [edi + 4] */
    /* test ecx, ecx */ /* 0x0062BD5E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062BD67; /* 0x0062BD60: je 0x62bd67 */
L_0062BD62:
    RECOMP_CALL(sub_0076E920); /* 0x0062BD62: call 0x76e920 */
    RECOMP_FLAGS_IN();
L_0062BD67:
    PUSH32(esp, edi); /* 0x0062BD67: push edi */
    edi = MEM32(0x7CC694); /* 0x0062BD68: mov edi, dword ptr [0x7cc694] */
    RECOMP_ICALL(edi); /* 0x0062BD6E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062BD70: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_0062BD7B; /* 0x0062BD73: jmp 0x62bd7b */
L_0062BD75:
    edi = MEM32(0x7CC694); /* 0x0062BD75: mov edi, dword ptr [0x7cc694] */
L_0062BD7B:
    eax = ebp + (-0x2C); /* 0x0062BD7B: lea eax, [ebp - 0x2c] */
    ecx = 0x00920060u; /* 0x0062BD7E: mov ecx, 0x920060 */
    PUSH32(esp, eax); /* 0x0062BD83: push eax */
    eax = ebp + (-0x48); /* 0x0062BD84: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x0062BD87: push eax */
    RECOMP_CALL(sub_0060D0F0); /* 0x0062BD88: call 0x60d0f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x0062BD8D: mov eax, dword ptr [ebp - 0x48] */
    ecx = MEM32(0x920060); /* 0x0062BD90: mov ecx, dword ptr [0x920060] */
    /* cmp eax, ecx */ /* 0x0062BD96: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062BE00; /* 0x0062BD98: jne 0x62be00 */
L_0062BD9A:
    ebx = MEM32(ecx); /* 0x0062BD9A: mov ebx, dword ptr [ecx] */
    eax = ebp + (-0x2C); /* 0x0062BD9C: lea eax, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x0062BD9F: push ecx */
    MEM32(ebp + (-0x48)) = eax; /* 0x0062BDA0: mov dword ptr [ebp - 0x48], eax */
    eax = ebp + (-0x48); /* 0x0062BDA3: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x0062BDA6: push eax */
    PUSH32(esp, ecx); /* 0x0062BDA7: push ecx */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x0062BDA8: push dword ptr [ebx + 4] */
    PUSH32(esp, ebx); /* 0x0062BDAB: push ebx */
    RECOMP_CALL(sub_0060D720); /* 0x0062BDAC: call 0x60d720 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x920064); /* 0x0062BDB1: mov edx, dword ptr [0x920064] */
    ecx = 0x071C71C6u; /* 0x0062BDB7: mov ecx, 0x71c71c6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0062BDBC: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x48)) = eax; /* 0x0062BDBE: mov dword ptr [ebp - 0x48], eax */
    /* cmp ecx, 1 */ /* 0x0062BDC1: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0062BDD1; /* 0x0062BDC4: jae 0x62bdd1 */
L_0062BDC6:
    PUSH32(esp, 0x007E1400u); /* 0x0062BDC6: push 0x7e1400 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x0062BDCB: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_0062BDD1:
    ecx = MEM32(ebp + (-0x48)); /* 0x0062BDD1: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0062BDD4: inc edx */
    _flag_k = FK_INC;
    MEM32(0x920064) = edx; /* 0x0062BDD5: mov dword ptr [0x920064], edx */
    MEM32(ebx + 0x4) = eax; /* 0x0062BDDB: mov dword ptr [ebx + 4], eax */
    eax = MEM32(eax + 0x4); /* 0x0062BDDE: mov eax, dword ptr [eax + 4] */
    MEM32(eax) = ecx; /* 0x0062BDE1: mov dword ptr [eax], ecx */
    ecx = 0x00920060u; /* 0x0062BDE3: mov ecx, 0x920060 */
    eax = MEM32(0x920060); /* 0x0062BDE8: mov eax, dword ptr [0x920060] */
    eax = MEM32(eax); /* 0x0062BDED: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x0062BDEF: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x0062BDF0: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0062BDF3: push eax */
    eax = ebp + (-0x50); /* 0x0062BDF4: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x0062BDF7: push eax */
    RECOMP_CALL(sub_0060D4F0); /* 0x0062BDF8: call 0x60d4f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x50)); /* 0x0062BDFD: mov eax, dword ptr [ebp - 0x50] */
L_0062BE00:
    MEM32(eax + 0x20) = esi; /* 0x0062BE00: mov dword ptr [eax + 0x20], esi */
L_0062BE03:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062BE03: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x0062BE0A: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062BE18; /* 0x0062BE0E: jb 0x62be18 */
L_0062BE10:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x0062BE10: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(edi); /* 0x0062BE13: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062BE15: add esp, 4 */
    _flag_k = FK_ADD;
L_0062BE18:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0062BE18: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0062BE1F: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0062BE26: mov byte ptr [ebp - 0x2c], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062BE2A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062BE2D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062BE34: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062BE35: pop edi */
    esi = POP32_VAL(esp); /* 0x0062BE36: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062BE37: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x0062BE38: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0062BE3B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0062BE3D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062BE42: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062BE44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062BE45: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0062BE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062BE50u);

L_0062BE50:
    PUSH32(esp, ebp); /* 0x0062BE50: push ebp */
    ebp = esp; /* 0x0062BE51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062BE53: push -1 */
    PUSH32(esp, 0x007B86E8u); /* 0x0062BE55: push 0x7b86e8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062BE5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0062BE60: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0062BE61: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0062BE64: push ebx */
    PUSH32(esp, esi); /* 0x0062BE65: push esi */
    PUSH32(esp, edi); /* 0x0062BE66: push edi */
    eax = MEM32(0x855000); /* 0x0062BE67: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062BE6C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062BE6E: push eax */
    eax = ebp + (-0xC); /* 0x0062BE6F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062BE72: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x0062BE78: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0062BE7A: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + 0x8; /* 0x0062BE81: lea ecx, [ebp + 8] */
    edx = MEM32(ebp + 0x1C); /* 0x0062BE84: mov edx, dword ptr [ebp + 0x1c] */
    edi = ebp + 0x8; /* 0x0062BE87: lea edi, [ebp + 8] */
    esi = MEM32(ebp + 0x8); /* 0x0062BE8A: mov esi, dword ptr [ebp + 8] */
    /* cmp edx, 0x10u */ /* 0x0062BE8D: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x18); /* 0x0062BE90: mov eax, dword ptr [ebp + 0x18] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x0062BE93: cmovae ecx, esi */
    if (CMP_AE(_flag_a, _flag_b)) { edi = esi; } /* 0x0062BE96: cmovae edi, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0062BE99: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, 0x10u */ /* 0x0062BE9B: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x0062BE9E: lea ecx, [ebp + 8] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x0062BEA1: cmovae ecx, esi */
    /* cmp ecx, eax */ /* 0x0062BEA4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062BEBD; /* 0x0062BEA6: je 0x62bebd */
L_0062BEA8:
    PUSH32(esp, MEM32(0x7CC6AC)); /* 0x0062BEA8: push dword ptr [0x7cc6ac] */
    edx = ecx; /* 0x0062BEAE: mov edx, ecx */
    ecx = ebp + (-0x10); /* 0x0062BEB0: lea ecx, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x0062BEB3: push edi */
    PUSH32(esp, eax); /* 0x0062BEB4: push eax */
    RECOMP_CALL(sub_00426250); /* 0x0062BEB5: call 0x426250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062BEBA: add esp, 0xc */
    _flag_k = FK_ADD;
L_0062BEBD:
    eax = ebp + 0x8; /* 0x0062BEBD: lea eax, [ebp + 8] */
    ecx = 0x00920060u; /* 0x0062BEC0: mov ecx, 0x920060 */
    PUSH32(esp, eax); /* 0x0062BEC5: push eax */
    eax = ebp + (-0x10); /* 0x0062BEC6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0062BEC9: push eax */
    RECOMP_CALL(sub_0060D0F0); /* 0x0062BECA: call 0x60d0f0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x10)); /* 0x0062BECF: mov esi, dword ptr [ebp - 0x10] */
    /* cmp esi, MEM32(0x920060) */ /* 0x0062BED2: cmp esi, dword ptr [0x920060] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x920060));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062BFB2; /* 0x0062BED8: je 0x62bfb2 */
L_0062BEDE:
    edi = MEM32(esi + 0x20); /* 0x0062BEDE: mov edi, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x3Fu; /* 0x0062BEE1: add edi, 0x3f */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + edi * 4), 0 */ /* 0x0062BEE4: cmp dword ptr [ebx + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ebx + edi * 4; /* 0x0062BEE8: lea edi, [ebx + edi*4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062BF2A; /* 0x0062BEEB: jne 0x62bf2a */
L_0062BEED:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062BEED: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062BEF0: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0062BEF2: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062BEF5: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062BEFA: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062BEFF: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062BF03: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062BF06: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0062BF08: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007F9280u); /* 0x0062BF0B: push 0x7f9280 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062BF10: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0062BF15: mov byte ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062BF19: mov byte ptr [ebp - 4], 0 */
    ecx = 0x223u; /* 0x0062BF1D: mov ecx, 0x223 */
    RECOMP_CALL(sub_00668DA0); /* 0x0062BF22: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0062BF27: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0062BF2A:
    eax = MEM32(edi); /* 0x0062BF2A: mov eax, dword ptr [edi] */
    /* cmp MEM32(eax + 0x18), 1 */ /* 0x0062BF2C: cmp dword ptr [eax + 0x18], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0062BF6F; /* 0x0062BF30: jge 0x62bf6f */
L_0062BF32:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062BF32: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062BF35: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0062BF37: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062BF3A: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062BF3F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062BF44: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062BF48: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062BF4B: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0062BF4D: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007F92E4u); /* 0x0062BF50: push 0x7f92e4 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062BF55: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0062BF5A: mov byte ptr [ebp - 4], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062BF5E: mov byte ptr [ebp - 4], 0 */
    ecx = 0x224u; /* 0x0062BF62: mov ecx, 0x224 */
    RECOMP_CALL(sub_00668DA0); /* 0x0062BF67: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0062BF6C: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0062BF6F:
    eax = MEM32(edi); /* 0x0062BF6F: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) - 1; /* 0x0062BF71: dec dword ptr [eax + 0x18] */
    _flag_k = FK_DEC;
    eax = MEM32(edi); /* 0x0062BF74: mov eax, dword ptr [edi] */
    /* cmp MEM32(eax + 0x18), 0 */ /* 0x0062BF76: cmp dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062BFB2; /* 0x0062BF7A: jne 0x62bfb2 */
L_0062BF7C:
    PUSH32(esp, esi); /* 0x0062BF7C: push esi */
    eax = ebp + (-0x14); /* 0x0062BF7D: lea eax, [ebp - 0x14] */
    ecx = 0x00920060u; /* 0x0062BF80: mov ecx, 0x920060 */
    PUSH32(esp, eax); /* 0x0062BF85: push eax */
    RECOMP_CALL(sub_0060CF90); /* 0x0062BF86: call 0x60cf90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM16(ebx + 0xE0)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebx + 0xE0) = (uint16_t)(MEM16(ebx + 0xE0) - 1); /* 0x0062BF8B: dec word ptr [ebx + 0xe0] */
    _flag_k = FK_NARROW(FK_DEC, 16);
    eax = MEM32(edi); /* 0x0062BF92: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(eax + 0x24)); /* 0x0062BF94: push dword ptr [eax + 0x24] */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x0062BF97: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x0062BF9D: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062BF9F: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x0062BFA2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062BFAC; /* 0x0062BFA4: je 0x62bfac */
L_0062BFA6:
    PUSH32(esp, ecx); /* 0x0062BFA6: push ecx */
    RECOMP_CALL(sub_0062C000); /* 0x0062BFA7: call 0x62c000 */
    RECOMP_FLAGS_IN();
L_0062BFAC:
    MEM32(edi) = 0; /* 0x0062BFAC: mov dword ptr [edi], 0 */
L_0062BFB2:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062BFB2: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + 0x1C), 0x10u */ /* 0x0062BFB9: cmp dword ptr [ebp + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062BFCB; /* 0x0062BFBD: jb 0x62bfcb */
L_0062BFBF:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0062BFBF: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062BFC2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062BFC8: add esp, 4 */
    _flag_k = FK_ADD;
L_0062BFCB:
    MEM32(ebp + 0x1C) = 0xFu; /* 0x0062BFCB: mov dword ptr [ebp + 0x1c], 0xf */
    MEM32(ebp + 0x18) = 0; /* 0x0062BFD2: mov dword ptr [ebp + 0x18], 0 */
    MEM8(ebp + 0x8) = (uint8_t)(0); /* 0x0062BFD9: mov byte ptr [ebp + 8], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062BFDD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062BFE0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062BFE7: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062BFE8: pop edi */
    esi = POP32_VAL(esp); /* 0x0062BFE9: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062BFEA: pop ebx */
    esp = ebp; /* 0x0062BFEB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062BFED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x0062BFEE: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_0062C000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062C000u);

L_0062C000:
    PUSH32(esp, ebp); /* 0x0062C000: push ebp */
    ebp = esp; /* 0x0062C001: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C003: push -1 */
    PUSH32(esp, 0x00783698u); /* 0x0062C005: push 0x783698 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062C00A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0062C010: push eax */
    PUSH32(esp, ecx); /* 0x0062C011: push ecx */
    PUSH32(esp, esi); /* 0x0062C012: push esi */
    eax = MEM32(0x855000); /* 0x0062C013: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062C018: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062C01A: push eax */
    eax = ebp + (-0xC); /* 0x0062C01B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062C01E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0062C024: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0062C026: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062C029: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0062C030: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062C041; /* 0x0062C034: jb 0x62c041 */
L_0062C036:
    PUSH32(esp, MEM32(esi)); /* 0x0062C036: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062C038: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062C03E: add esp, 4 */
    _flag_k = FK_ADD;
L_0062C041:
    MEM32(esi + 0x14) = 0xFu; /* 0x0062C041: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0062C048: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, esi); /* 0x0062C04F: push esi */
    MEM8(esi) = (uint8_t)(0); /* 0x0062C050: mov byte ptr [esi], 0 */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062C053: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062C059: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x0062C05C: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062C05E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062C061: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062C068: pop ecx */
    esi = POP32_VAL(esp); /* 0x0062C069: pop esi */
    esp = ebp; /* 0x0062C06A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062C06C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062C06D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0062C070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062C070u);

L_0062C070:
    PUSH32(esp, ebp); /* 0x0062C070: push ebp */
    ebp = esp; /* 0x0062C071: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C073: push -1 */
    PUSH32(esp, 0x007B8818u); /* 0x0062C075: push 0x7b8818 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062C07A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0062C080: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xBCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xBCu; /* 0x0062C081: sub esp, 0xbc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0062C087: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062C08C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0062C08E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0062C091: push ebx */
    PUSH32(esp, esi); /* 0x0062C092: push esi */
    PUSH32(esp, edi); /* 0x0062C093: push edi */
    PUSH32(esp, eax); /* 0x0062C094: push eax */
    eax = ebp + (-0xC); /* 0x0062C095: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062C098: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0x10); /* 0x0062C09E: mov eax, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0x8); /* 0x0062C0A1: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x0062C0A4: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xC4)) = eax; /* 0x0062C0A7: mov dword ptr [ebp - 0xc4], eax */
    eax = MEM32(ebp + 0x14); /* 0x0062C0AD: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0xC8)) = eax; /* 0x0062C0B0: mov dword ptr [ebp - 0xc8], eax */
    eax = MEM32(ebp + 0x18); /* 0x0062C0B6: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0xBC)) = eax; /* 0x0062C0B9: mov dword ptr [ebp - 0xbc], eax */
    eax = MEM32(ebp + 0x1C); /* 0x0062C0BF: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0xC0)) = eax; /* 0x0062C0C2: mov dword ptr [ebp - 0xc0], eax */
    /* test ebx, ebx */ /* 0x0062C0C8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062C111; /* 0x0062C0CA: jne 0x62c111 */
L_0062C0CC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C0CC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C0CF: mov ecx, esp */
    MEM32(ebp + (-0xAC)) = esp; /* 0x0062C0D1: mov dword ptr [ebp - 0xac], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062C0D7: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C0DC: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x0062C0E1: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C0E4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C0E7: mov ecx, esp */
    MEM32(ebp + (-0xB0)) = esp; /* 0x0062C0E9: mov dword ptr [ebp - 0xb0], esp */
    PUSH32(esp, 0x007CE4ACu); /* 0x0062C0EF: push 0x7ce4ac */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C0F4: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062C0F9: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062C0FD: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x24Du; /* 0x0062C104: mov ecx, 0x24d */
    RECOMP_CALL(sub_00668DA0); /* 0x0062C109: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0062C10E: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0062C111:
    PUSH32(esp, ecx); /* 0x0062C111: push ecx */
    eax = ebp + (-0xAC); /* 0x0062C112: lea eax, [ebp - 0xac] */
    MEM32(ebp + (-0xAC)) = 0; /* 0x0062C118: mov dword ptr [ebp - 0xac], 0 */
    PUSH32(esp, eax); /* 0x0062C122: push eax */
    PUSH32(esp, edi); /* 0x0062C123: push edi */
    ecx = ebx; /* 0x0062C124: mov ecx, ebx */
    RECOMP_CALL(sub_00660AD0); /* 0x0062C126: call 0x660ad0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0062C12B: push 1 */
    PUSH32(esp, 0x14u); /* 0x0062C12D: push 0x14 */
    eax = ebp + (-0x78); /* 0x0062C12F: lea eax, [ebp - 0x78] */
    ecx = ebx; /* 0x0062C132: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x0062C134: push eax */
    RECOMP_CALL(sub_00660CF0); /* 0x0062C135: call 0x660cf0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x78); /* 0x0062C13A: lea eax, [ebp - 0x78] */
    /* cmp MEM32(eax), 0x46464952u */ /* 0x0062C13D: cmp dword ptr [eax], 0x46464952 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x46464952u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062C1D5; /* 0x0062C143: je 0x62c1d5 */
L_0062C149:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C149: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C14C: mov ecx, esp */
    MEM32(ebp + (-0xB0)) = esp; /* 0x0062C14E: mov dword ptr [ebp - 0xb0], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062C154: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C159: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x0062C15E: mov dword ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C165: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C168: mov ecx, esp */
    MEM32(ebp + (-0xAC)) = esp; /* 0x0062C16A: mov dword ptr [ebp - 0xac], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C170: push -1 */
    PUSH32(esp, 0); /* 0x0062C172: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062C174: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062C17B: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, edi); /* 0x0062C182: push edi */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062C183: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062C186: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062C18B: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C18F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C192: mov ecx, esp */
    MEM32(ebp + (-0xB8)) = esp; /* 0x0062C194: mov dword ptr [ebp - 0xb8], esp */
    PUSH32(esp, 0x007E4950u); /* 0x0062C19A: push 0x7e4950 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C19F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0062C1A4: mov byte ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C1A8: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C1AB: mov ecx, esp */
    MEM32(ebp + (-0xB4)) = esp; /* 0x0062C1AD: mov dword ptr [ebp - 0xb4], esp */
    PUSH32(esp, 0x007F9300u); /* 0x0062C1B3: push 0x7f9300 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C1B8: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0062C1BD: mov byte ptr [ebp - 4], 5 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062C1C1: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x253u; /* 0x0062C1C8: mov ecx, 0x253 */
    RECOMP_CALL(sub_00668A10); /* 0x0062C1CD: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0062C1D2: add esp, 0x60 */
    _flag_k = FK_ADD;
L_0062C1D5:
    eax = ebp + (-0x70); /* 0x0062C1D5: lea eax, [ebp - 0x70] */
    /* cmp MEM32(eax), 0x45564157u */ /* 0x0062C1D8: cmp dword ptr [eax], 0x45564157 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x45564157u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062C1ED; /* 0x0062C1DE: jne 0x62c1ed */
L_0062C1E0:
    /* cmp MEM32(eax + 0x4), 0x20746D66u */ /* 0x0062C1E0: cmp dword ptr [eax + 4], 0x20746d66 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0x20746D66u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062C279; /* 0x0062C1E7: je 0x62c279 */
L_0062C1ED:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C1ED: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C1F0: mov ecx, esp */
    MEM32(ebp + (-0xB4)) = esp; /* 0x0062C1F2: mov dword ptr [ebp - 0xb4], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062C1F8: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C1FD: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 6; /* 0x0062C202: mov dword ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C209: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C20C: mov ecx, esp */
    MEM32(ebp + (-0xB8)) = esp; /* 0x0062C20E: mov dword ptr [ebp - 0xb8], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C214: push -1 */
    PUSH32(esp, 0); /* 0x0062C216: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062C218: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062C21F: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, edi); /* 0x0062C226: push edi */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062C227: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062C22A: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0062C22F: mov byte ptr [ebp - 4], 7 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C233: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C236: mov ecx, esp */
    MEM32(ebp + (-0xB0)) = esp; /* 0x0062C238: mov dword ptr [ebp - 0xb0], esp */
    PUSH32(esp, 0x007E4950u); /* 0x0062C23E: push 0x7e4950 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C243: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0062C248: mov byte ptr [ebp - 4], 8 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C24C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C24F: mov ecx, esp */
    MEM32(ebp + (-0xAC)) = esp; /* 0x0062C251: mov dword ptr [ebp - 0xac], esp */
    PUSH32(esp, 0x007F9300u); /* 0x0062C257: push 0x7f9300 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C25C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x0062C261: mov byte ptr [ebp - 4], 9 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062C265: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x255u; /* 0x0062C26C: mov ecx, 0x255 */
    RECOMP_CALL(sub_00668A10); /* 0x0062C271: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0062C276: add esp, 0x60 */
    _flag_k = FK_ADD;
L_0062C279:
    esi = (uint32_t)MEM8(ebp + (-0x65)); /* 0x0062C279: movzx esi, byte ptr [ebp - 0x65] */
    ecx = ebx; /* 0x0062C27D: mov ecx, ebx */
    eax = (uint32_t)MEM8(ebp + (-0x66)); /* 0x0062C27F: movzx eax, byte ptr [ebp - 0x66] */
    if (8u) _cf = (((esi) >> 24) & 1u); /* 0x0062C283: shl esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((esi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 8u; /* 0x0062C283: shl esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0062C286: add esi, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x67)); /* 0x0062C288: movzx eax, byte ptr [ebp - 0x67] */
    if (8u) _cf = (((esi) >> 24) & 1u); /* 0x0062C28C: shl esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((esi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 8u; /* 0x0062C28C: shl esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0062C28F: add esi, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x68)); /* 0x0062C291: movzx eax, byte ptr [ebp - 0x68] */
    if (8u) _cf = (((esi) >> 24) & 1u); /* 0x0062C295: shl esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((esi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 8u; /* 0x0062C295: shl esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0062C298: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x0062C29A: push 1 */
    eax = esi + 0x4; /* 0x0062C29C: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x0062C29F: push eax */
    eax = ebp + (-0x64); /* 0x0062C2A0: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x0062C2A3: push eax */
    RECOMP_CALL(sub_00660CF0); /* 0x0062C2A4: call 0x660cf0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + esi + (-0x64)), 0x61746164u */ /* 0x0062C2A9: cmp dword ptr [ebp + esi - 0x64], 0x61746164 */
    _flag_a = (uint32_t)(MEM32(ebp + esi + (-0x64))); _flag_b = (uint32_t)(0x61746164u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062C3E4; /* 0x0062C2B1: je 0x62c3e4 */
L_0062C2B7:
    edx = esi; /* 0x0062C2B7: mov edx, esi */
    ecx = ebp + (-0xA8); /* 0x0062C2B9: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_0066AB40); /* 0x0062C2BF: call 0x66ab40 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xAu; /* 0x0062C2C4: mov dword ptr [ebp - 4], 0xa */
    edx = 0x007F9374u; /* 0x0062C2CB: mov edx, 0x7f9374 */
    PUSH32(esp, eax); /* 0x0062C2D0: push eax */
    ecx = ebp + (-0x90); /* 0x0062C2D1: lea ecx, [ebp - 0x90] */
    RECOMP_CALL(sub_0041A1E0); /* 0x0062C2D7: call 0x41a1e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062C2DC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0062C2DF: mov byte ptr [ebp - 4], 0xc */
    /* cmp MEM32(ebp + (-0x94)), 0x10u */ /* 0x0062C2E3: cmp dword ptr [ebp - 0x94], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x94))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062C2FB; /* 0x0062C2EA: jb 0x62c2fb */
L_0062C2EC:
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x0062C2EC: push dword ptr [ebp - 0xa8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062C2F2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062C2F8: add esp, 4 */
    _flag_k = FK_ADD;
L_0062C2FB:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C2FB: sub esp, 0x18 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x94)) = 0xFu; /* 0x0062C2FE: mov dword ptr [ebp - 0x94], 0xf */
    ecx = esp; /* 0x0062C308: mov ecx, esp */
    MEM32(ebp + (-0xB4)) = esp; /* 0x0062C30A: mov dword ptr [ebp - 0xb4], esp */
    MEM32(ebp + (-0x98)) = 0; /* 0x0062C310: mov dword ptr [ebp - 0x98], 0 */
    MEM8(ebp + (-0xA8)) = (uint8_t)(0); /* 0x0062C31A: mov byte ptr [ebp - 0xa8], 0 */
    PUSH32(esp, 0x007F9204u); /* 0x0062C321: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C326: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x0062C32B: mov byte ptr [ebp - 4], 0xd */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C32F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C332: mov ecx, esp */
    MEM32(ebp + (-0xB8)) = esp; /* 0x0062C334: mov dword ptr [ebp - 0xb8], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C33A: push -1 */
    PUSH32(esp, 0); /* 0x0062C33C: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062C33E: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062C345: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, edi); /* 0x0062C34C: push edi */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062C34D: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062C350: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x0062C355: mov byte ptr [ebp - 4], 0xe */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C359: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C35C: mov ecx, esp */
    MEM32(ebp + (-0xB0)) = esp; /* 0x0062C35E: mov dword ptr [ebp - 0xb0], esp */
    PUSH32(esp, 0x007E4950u); /* 0x0062C364: push 0x7e4950 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C369: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x0062C36E: mov byte ptr [ebp - 4], 0xf */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C372: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C375: mov ecx, esp */
    MEM32(ebp + (-0xAC)) = esp; /* 0x0062C377: mov dword ptr [ebp - 0xac], esp */
    eax = ebp + (-0x90); /* 0x0062C37D: lea eax, [ebp - 0x90] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C383: push -1 */
    PUSH32(esp, 0); /* 0x0062C385: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062C387: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062C38E: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0062C395: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062C396: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062C399: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x0062C39E: mov byte ptr [ebp - 4], 0x10 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0062C3A2: mov byte ptr [ebp - 4], 0xc */
    ecx = 0x25Eu; /* 0x0062C3A6: mov ecx, 0x25e */
    RECOMP_CALL(sub_00668A10); /* 0x0062C3AB: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0062C3B0: add esp, 0x60 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062C3B3: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x7C)), 0x10u */ /* 0x0062C3BA: cmp dword ptr [ebp - 0x7c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x7C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062C3CF; /* 0x0062C3BE: jb 0x62c3cf */
L_0062C3C0:
    PUSH32(esp, MEM32(ebp + (-0x90))); /* 0x0062C3C0: push dword ptr [ebp - 0x90] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062C3C6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062C3CC: add esp, 4 */
    _flag_k = FK_ADD;
L_0062C3CF:
    MEM32(ebp + (-0x7C)) = 0xFu; /* 0x0062C3CF: mov dword ptr [ebp - 0x7c], 0xf */
    MEM32(ebp + (-0x80)) = 0; /* 0x0062C3D6: mov dword ptr [ebp - 0x80], 0 */
    MEM8(ebp + (-0x90)) = (uint8_t)(0); /* 0x0062C3DD: mov byte ptr [ebp - 0x90], 0 */
L_0062C3E4:
    /* cmp MEM8(ebp + (-0x62)), 1 */ /* 0x0062C3E4: cmp byte ptr [ebp - 0x62], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x62))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = MEM32(ebp + (-0xBC)); /* 0x0062C3E8: mov ecx, dword ptr [ebp - 0xbc] */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x0062C3EE: setne al */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x0062C3F1: mov byte ptr [ecx], al */
    eax = MEM32(ebp + (-0x60)); /* 0x0062C3F3: mov eax, dword ptr [ebp - 0x60] */
    /* cmp eax, 0x5622u */ /* 0x0062C3F6: cmp eax, 0x5622 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5622u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062C40B; /* 0x0062C3FB: jne 0x62c40b */
L_0062C3FD:
    eax = MEM32(ebp + (-0xC0)); /* 0x0062C3FD: mov eax, dword ptr [ebp - 0xc0] */
    MEM8(eax) = (uint8_t)(0); /* 0x0062C403: mov byte ptr [eax], 0 */
    goto L_0062C4AC; /* 0x0062C406: jmp 0x62c4ac */
L_0062C40B:
    /* cmp eax, 0xAC44u */ /* 0x0062C40B: cmp eax, 0xac44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAC44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062C420; /* 0x0062C410: jne 0x62c420 */
L_0062C412:
    eax = MEM32(ebp + (-0xC0)); /* 0x0062C412: mov eax, dword ptr [ebp - 0xc0] */
    MEM8(eax) = (uint8_t)(1); /* 0x0062C418: mov byte ptr [eax], 1 */
    goto L_0062C4AC; /* 0x0062C41B: jmp 0x62c4ac */
L_0062C420:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C420: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C423: mov ecx, esp */
    MEM32(ebp + (-0xB4)) = esp; /* 0x0062C425: mov dword ptr [ebp - 0xb4], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062C42B: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C430: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0x11u; /* 0x0062C435: mov dword ptr [ebp - 4], 0x11 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C43C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C43F: mov ecx, esp */
    MEM32(ebp + (-0xB8)) = esp; /* 0x0062C441: mov dword ptr [ebp - 0xb8], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C447: push -1 */
    PUSH32(esp, 0); /* 0x0062C449: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062C44B: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062C452: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, edi); /* 0x0062C459: push edi */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062C45A: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062C45D: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x12u); /* 0x0062C462: mov byte ptr [ebp - 4], 0x12 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C466: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C469: mov ecx, esp */
    MEM32(ebp + (-0xB0)) = esp; /* 0x0062C46B: mov dword ptr [ebp - 0xb0], esp */
    PUSH32(esp, 0x007E4950u); /* 0x0062C471: push 0x7e4950 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C476: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x13u); /* 0x0062C47B: mov byte ptr [ebp - 4], 0x13 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C47F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C482: mov ecx, esp */
    MEM32(ebp + (-0xAC)) = esp; /* 0x0062C484: mov dword ptr [ebp - 0xac], esp */
    PUSH32(esp, 0x007F9330u); /* 0x0062C48A: push 0x7f9330 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C48F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x14u); /* 0x0062C494: mov byte ptr [ebp - 4], 0x14 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062C498: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x26Cu; /* 0x0062C49F: mov ecx, 0x26c */
    RECOMP_CALL(sub_00668A10); /* 0x0062C4A4: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0062C4A9: add esp, 0x60 */
    _flag_k = FK_ADD;
L_0062C4AC:
    eax = MEM32(ebp + (-0xBC)); /* 0x0062C4AC: mov eax, dword ptr [ebp - 0xbc] */
    SET_LO8(ecx, MEM8(eax)); /* 0x0062C4B2: mov cl, byte ptr [eax] */
    SET_LO8(eax, MEM8(ebp + (-0x58))); /* 0x0062C4B4: mov al, byte ptr [ebp - 0x58] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x0062C4B7: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062C4BF; /* 0x0062C4B9: jne 0x62c4bf */
L_0062C4BB:
    /* cmp LO8(eax), 2 */ /* 0x0062C4BB: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062C4D0; /* 0x0062C4BD: jne 0x62c4d0 */
L_0062C4BF:
    /* cmp LO8(ecx), 1 */ /* 0x0062C4BF: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062C55C; /* 0x0062C4C2: jne 0x62c55c */
L_0062C4C8:
    /* cmp LO8(eax), 4 */ /* 0x0062C4C8: cmp al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062C55C; /* 0x0062C4CA: je 0x62c55c */
L_0062C4D0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C4D0: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C4D3: mov ecx, esp */
    MEM32(ebp + (-0xB4)) = esp; /* 0x0062C4D5: mov dword ptr [ebp - 0xb4], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062C4DB: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C4E0: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0x15u; /* 0x0062C4E5: mov dword ptr [ebp - 4], 0x15 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C4EC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C4EF: mov ecx, esp */
    MEM32(ebp + (-0xB8)) = esp; /* 0x0062C4F1: mov dword ptr [ebp - 0xb8], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C4F7: push -1 */
    PUSH32(esp, 0); /* 0x0062C4F9: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062C4FB: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062C502: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, edi); /* 0x0062C509: push edi */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062C50A: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062C50D: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x16u); /* 0x0062C512: mov byte ptr [ebp - 4], 0x16 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C516: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C519: mov ecx, esp */
    MEM32(ebp + (-0xB0)) = esp; /* 0x0062C51B: mov dword ptr [ebp - 0xb0], esp */
    PUSH32(esp, 0x007E4950u); /* 0x0062C521: push 0x7e4950 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C526: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x17u); /* 0x0062C52B: mov byte ptr [ebp - 4], 0x17 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C52F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C532: mov ecx, esp */
    MEM32(ebp + (-0xAC)) = esp; /* 0x0062C534: mov dword ptr [ebp - 0xac], esp */
    PUSH32(esp, 0x007F9598u); /* 0x0062C53A: push 0x7f9598 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C53F: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x18u); /* 0x0062C544: mov byte ptr [ebp - 4], 0x18 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062C548: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x270u; /* 0x0062C54F: mov ecx, 0x270 */
    RECOMP_CALL(sub_00668A10); /* 0x0062C554: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0062C559: add esp, 0x60 */
    _flag_k = FK_ADD;
L_0062C55C:
    eax = esi + 0x18; /* 0x0062C55C: lea eax, [esi + 0x18] */
    ecx = ebx; /* 0x0062C55F: mov ecx, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0062C561: cdq  */
    PUSH32(esp, edx); /* 0x0062C562: push edx */
    PUSH32(esp, eax); /* 0x0062C563: push eax */
    RECOMP_CALL(sub_00660E40); /* 0x0062C564: call 0x660e40 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xC4)); /* 0x0062C569: mov esi, dword ptr [ebp - 0xc4] */
    ecx = ebx; /* 0x0062C56F: mov ecx, ebx */
    PUSH32(esp, 1); /* 0x0062C571: push 1 */
    PUSH32(esp, 4); /* 0x0062C573: push 4 */
    PUSH32(esp, esi); /* 0x0062C575: push esi */
    RECOMP_CALL(sub_00660CF0); /* 0x0062C576: call 0x660cf0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x0062C57B: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0062C57D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0062C57F: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0062C580: sub eax, edx */
    _flag_k = FK_CMP;
    edx = 2; /* 0x0062C582: mov edx, 2 */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0062C587: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(esi) = eax; /* 0x0062C589: mov dword ptr [esi], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x0062C58B: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x0062C58D: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x0062C590: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x0062C592: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x0062C594: push ecx */
    RECOMP_CALL(sub_0077F3DF); /* 0x0062C595: call 0x77f3df */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC8)); /* 0x0062C59A: mov ecx, dword ptr [ebp - 0xc8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062C5A0: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x0062C5A3: mov dword ptr [ecx], eax */
    ecx = ebx; /* 0x0062C5A5: mov ecx, ebx */
    PUSH32(esp, MEM32(esi)); /* 0x0062C5A7: push dword ptr [esi] */
    PUSH32(esp, 2); /* 0x0062C5A9: push 2 */
    PUSH32(esp, eax); /* 0x0062C5AB: push eax */
    RECOMP_CALL(sub_00660CF0); /* 0x0062C5AC: call 0x660cf0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x0062C5B1: mov ecx, dword ptr [ebx + 4] */
    /* test ecx, ecx */ /* 0x0062C5B4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062C5BD; /* 0x0062C5B6: je 0x62c5bd */
L_0062C5B8:
    RECOMP_CALL(sub_0076E920); /* 0x0062C5B8: call 0x76e920 */
    RECOMP_FLAGS_IN();
L_0062C5BD:
    ecx = MEM32(ebp + (-0xC)); /* 0x0062C5BD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062C5C0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062C5C7: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062C5C8: pop edi */
    esi = POP32_VAL(esp); /* 0x0062C5C9: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062C5CA: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x0062C5CB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0062C5CE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0062C5D0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062C5D5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062C5D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x0062C5D8: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_0062C5E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062C5E0u);

L_0062C5E0:
    PUSH32(esp, ebp); /* 0x0062C5E0: push ebp */
    ebp = esp; /* 0x0062C5E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C5E3: push -1 */
    PUSH32(esp, 0x007B8878u); /* 0x0062C5E5: push 0x7b8878 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062C5EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0062C5F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x0062C5F1: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0062C5F4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062C5F9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0062C5FB: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x0062C5FE: push ebx */
    PUSH32(esp, esi); /* 0x0062C5FF: push esi */
    PUSH32(esp, edi); /* 0x0062C600: push edi */
    PUSH32(esp, eax); /* 0x0062C601: push eax */
    eax = ebp + (-0xC); /* 0x0062C602: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062C605: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0x8); /* 0x0062C60B: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x0062C60E: lea ecx, [ebp - 0x2c] */
    edi = MEM32(0x870270); /* 0x0062C611: mov edi, dword ptr [0x870270] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C617: push -1 */
    PUSH32(esp, 0); /* 0x0062C619: push 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0062C61B: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062C622: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, eax); /* 0x0062C629: push eax */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0062C62A: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0062C631: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0062C638: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062C63C: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062C641: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x2C); /* 0x0062C648: lea ecx, [ebp - 0x2c] */
    edx = MEM32(ebp + (-0x18)); /* 0x0062C64B: mov edx, dword ptr [ebp - 0x18] */
    ebx = ebp + (-0x2C); /* 0x0062C64E: lea ebx, [ebp - 0x2c] */
    esi = MEM32(ebp + (-0x2C)); /* 0x0062C651: mov esi, dword ptr [ebp - 0x2c] */
    /* cmp edx, 0x10u */ /* 0x0062C654: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x1C)); /* 0x0062C657: mov eax, dword ptr [ebp - 0x1c] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x0062C65A: cmovae ecx, esi */
    if (CMP_AE(_flag_a, _flag_b)) { ebx = esi; } /* 0x0062C65D: cmovae ebx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0062C660: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, 0x10u */ /* 0x0062C662: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x2C); /* 0x0062C665: lea ecx, [ebp - 0x2c] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x0062C668: cmovae ecx, esi */
    /* cmp ecx, eax */ /* 0x0062C66B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062C684; /* 0x0062C66D: je 0x62c684 */
L_0062C66F:
    PUSH32(esp, MEM32(0x7CC6AC)); /* 0x0062C66F: push dword ptr [0x7cc6ac] */
    edx = ecx; /* 0x0062C675: mov edx, ecx */
    ecx = ebp + (-0x30); /* 0x0062C677: lea ecx, [ebp - 0x30] */
    PUSH32(esp, ebx); /* 0x0062C67A: push ebx */
    PUSH32(esp, eax); /* 0x0062C67B: push eax */
    RECOMP_CALL(sub_00426250); /* 0x0062C67C: call 0x426250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062C681: add esp, 0xc */
    _flag_k = FK_ADD;
L_0062C684:
    eax = ebp + (-0x2C); /* 0x0062C684: lea eax, [ebp - 0x2c] */
    ecx = 0x00920060u; /* 0x0062C687: mov ecx, 0x920060 */
    PUSH32(esp, eax); /* 0x0062C68C: push eax */
    eax = ebp + (-0x30); /* 0x0062C68D: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x0062C690: push eax */
    RECOMP_CALL(sub_0060D0F0); /* 0x0062C691: call 0x60d0f0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x30)); /* 0x0062C696: mov esi, dword ptr [ebp - 0x30] */
    /* cmp esi, MEM32(0x920060) */ /* 0x0062C699: cmp esi, dword ptr [0x920060] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x920060));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062C71D; /* 0x0062C69F: je 0x62c71d */
L_0062C6A1:
    eax = MEM32(esi + 0x20); /* 0x0062C6A1: mov eax, dword ptr [esi + 0x20] */
    /* cmp MEM32(edi + eax * 4 + 0xFC), 0 */ /* 0x0062C6A4: cmp dword ptr [edi + eax*4 + 0xfc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0xFC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062C6EB; /* 0x0062C6AC: jne 0x62c6eb */
L_0062C6AE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C6AE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C6B1: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x0062C6B3: mov dword ptr [ebp - 0x30], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062C6B6: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C6BB: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062C6C0: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C6C4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C6C7: mov ecx, esp */
    MEM32(ebp + (-0x34)) = esp; /* 0x0062C6C9: mov dword ptr [ebp - 0x34], esp */
    PUSH32(esp, 0x007F940Cu); /* 0x0062C6CC: push 0x7f940c */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C6D1: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0062C6D6: mov byte ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062C6DA: mov byte ptr [ebp - 4], 0 */
    ecx = 0x28Au; /* 0x0062C6DE: mov ecx, 0x28a */
    RECOMP_CALL(sub_00668DA0); /* 0x0062C6E3: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0062C6E8: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0062C6EB:
    eax = MEM32(esi + 0x20); /* 0x0062C6EB: mov eax, dword ptr [esi + 0x20] */
    eax = MEM32(edi + eax * 4 + 0xFC); /* 0x0062C6EE: mov eax, dword ptr [edi + eax*4 + 0xfc] */
    /* cmp MEM8(eax + 0x1C), 0 */ /* 0x0062C6F5: cmp byte ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _xmm[0].u64[0] = (uint32_t)(MEM32(eax + 0x20)); _xmm[0].u64[1] = 0; /* 0x0062C6F9: movd xmm0, dword ptr [eax + 0x20] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0062C6FE: cvtdq2ps xmm0, xmm0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062C710; /* 0x0062C701: je 0x62c710 */
L_0062C703:
    { float _s = sse_f32(MEM32(0x80978C)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0062C703: divss xmm0, dword ptr [0x80978c] */
    goto L_0062C79D; /* 0x0062C70B: jmp 0x62c79d */
L_0062C710:
    { float _s = sse_f32(MEM32(0x809770)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x0062C710: divss xmm0, dword ptr [0x809770] */
    goto L_0062C79D; /* 0x0062C718: jmp 0x62c79d */
L_0062C71D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C71D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C720: mov ecx, esp */
    MEM32(ebp + (-0x34)) = esp; /* 0x0062C722: mov dword ptr [ebp - 0x34], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062C725: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C72A: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062C72F: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C733: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C736: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x0062C738: mov dword ptr [ebp - 0x30], esp */
    eax = ebp + (-0x2C); /* 0x0062C73B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C73E: push -1 */
    PUSH32(esp, 0); /* 0x0062C740: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062C742: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062C749: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0062C750: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062C751: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062C754: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0062C759: mov byte ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C75D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C760: mov ecx, esp */
    MEM32(ebp + (-0x38)) = esp; /* 0x0062C762: mov dword ptr [ebp - 0x38], esp */
    PUSH32(esp, 0x007E4950u); /* 0x0062C765: push 0x7e4950 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C76A: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0062C76F: mov byte ptr [ebp - 4], 5 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C773: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C776: mov ecx, esp */
    MEM32(ebp + (-0x3C)) = esp; /* 0x0062C778: mov dword ptr [ebp - 0x3c], esp */
    PUSH32(esp, 0x007F9558u); /* 0x0062C77B: push 0x7f9558 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C780: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0062C785: mov byte ptr [ebp - 4], 6 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062C789: mov byte ptr [ebp - 4], 0 */
    ecx = 0x292u; /* 0x0062C78D: mov ecx, 0x292 */
    RECOMP_CALL(sub_00668A10); /* 0x0062C792: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0062C797: add esp, 0x60 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0062C79A: xorps xmm0, xmm0 */
L_0062C79D:
    MEM32(ebp + (-0x30)) = _xmm[0].u32[0]; /* 0x0062C79D: movss dword ptr [ebp - 0x30], xmm0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062C7A2: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x0062C7A9: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062C7C0; /* 0x0062C7AD: jb 0x62c7c0 */
L_0062C7AF:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x0062C7AF: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062C7B2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(ebp + (-0x30)); _xmm[0].u64[1] = 0; /* 0x0062C7B8: movss xmm0, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062C7BD: add esp, 4 */
    _flag_k = FK_ADD;
L_0062C7C0:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0062C7C0: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0062C7C7: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0062C7CE: mov byte ptr [ebp - 0x2c], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062C7D2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062C7D5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062C7DC: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062C7DD: pop edi */
    esi = POP32_VAL(esp); /* 0x0062C7DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062C7DF: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x0062C7E0: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0062C7E3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0062C7E5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062C7EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062C7EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062C7ED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0062C7F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062C7F0u);

L_0062C7F0:
    PUSH32(esp, ebp); /* 0x0062C7F0: push ebp */
    ebp = esp; /* 0x0062C7F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C7F3: push -1 */
    PUSH32(esp, 0x007B8878u); /* 0x0062C7F5: push 0x7b8878 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062C7FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0062C800: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x0062C801: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0062C804: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062C809: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0062C80B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x0062C80E: push ebx */
    PUSH32(esp, esi); /* 0x0062C80F: push esi */
    PUSH32(esp, edi); /* 0x0062C810: push edi */
    PUSH32(esp, eax); /* 0x0062C811: push eax */
    eax = ebp + (-0xC); /* 0x0062C812: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062C815: mov dword ptr fs:[0], eax */
    edx = MEM32(ebp + 0x8); /* 0x0062C81B: mov edx, dword ptr [ebp + 8] */
    edi = MEM32(0x870270); /* 0x0062C81E: mov edi, dword ptr [0x870270] */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0062C824: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062C82B: mov dword ptr [ebp - 0x18], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x0062C832: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0062C835: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0062C83C: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0062C843: mov byte ptr [ebp - 0x2c], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062C84D; /* 0x0062C847: jne 0x62c84d */
L_0062C849:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0062C849: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0062C85B; /* 0x0062C84B: jmp 0x62c85b */
L_0062C84D:
    ecx = edx; /* 0x0062C84D: mov ecx, edx */
    esi = ecx + 0x1; /* 0x0062C84F: lea esi, [ecx + 1] */
L_0062C852:
    SET_LO8(eax, MEM8(ecx)); /* 0x0062C852: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0062C854: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0062C855: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062C852; /* 0x0062C857: jne 0x62c852 */
L_0062C859:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x0062C859: sub ecx, esi */
    _flag_k = FK_CMP;
L_0062C85B:
    PUSH32(esp, ecx); /* 0x0062C85B: push ecx */
    PUSH32(esp, edx); /* 0x0062C85C: push edx */
    ecx = ebp + (-0x2C); /* 0x0062C85D: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062C860: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062C865: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0x2C); /* 0x0062C86C: lea ecx, [ebp - 0x2c] */
    edx = MEM32(ebp + (-0x18)); /* 0x0062C86F: mov edx, dword ptr [ebp - 0x18] */
    ebx = ebp + (-0x2C); /* 0x0062C872: lea ebx, [ebp - 0x2c] */
    esi = MEM32(ebp + (-0x2C)); /* 0x0062C875: mov esi, dword ptr [ebp - 0x2c] */
    /* cmp edx, 0x10u */ /* 0x0062C878: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x1C)); /* 0x0062C87B: mov eax, dword ptr [ebp - 0x1c] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x0062C87E: cmovae ecx, esi */
    if (CMP_AE(_flag_a, _flag_b)) { ebx = esi; } /* 0x0062C881: cmovae ebx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0062C884: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, 0x10u */ /* 0x0062C886: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x2C); /* 0x0062C889: lea ecx, [ebp - 0x2c] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x0062C88C: cmovae ecx, esi */
    /* cmp ecx, eax */ /* 0x0062C88F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062C8A8; /* 0x0062C891: je 0x62c8a8 */
L_0062C893:
    PUSH32(esp, MEM32(0x7CC6AC)); /* 0x0062C893: push dword ptr [0x7cc6ac] */
    edx = ecx; /* 0x0062C899: mov edx, ecx */
    ecx = ebp + (-0x30); /* 0x0062C89B: lea ecx, [ebp - 0x30] */
    PUSH32(esp, ebx); /* 0x0062C89E: push ebx */
    PUSH32(esp, eax); /* 0x0062C89F: push eax */
    RECOMP_CALL(sub_00426250); /* 0x0062C8A0: call 0x426250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062C8A5: add esp, 0xc */
    _flag_k = FK_ADD;
L_0062C8A8:
    eax = ebp + (-0x2C); /* 0x0062C8A8: lea eax, [ebp - 0x2c] */
    ecx = 0x00920060u; /* 0x0062C8AB: mov ecx, 0x920060 */
    PUSH32(esp, eax); /* 0x0062C8B0: push eax */
    eax = ebp + (-0x30); /* 0x0062C8B1: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x0062C8B4: push eax */
    RECOMP_CALL(sub_0060D0F0); /* 0x0062C8B5: call 0x60d0f0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x30)); /* 0x0062C8BA: mov esi, dword ptr [ebp - 0x30] */
    /* cmp esi, MEM32(0x920060) */ /* 0x0062C8BD: cmp esi, dword ptr [0x920060] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x920060));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062C94A; /* 0x0062C8C3: je 0x62c94a */
L_0062C8C9:
    eax = MEM32(esi + 0x20); /* 0x0062C8C9: mov eax, dword ptr [esi + 0x20] */
    /* cmp MEM32(edi + eax * 4 + 0xFC), 0 */ /* 0x0062C8CC: cmp dword ptr [edi + eax*4 + 0xfc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0xFC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062C913; /* 0x0062C8D4: jne 0x62c913 */
L_0062C8D6:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C8D6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C8D9: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x0062C8DB: mov dword ptr [ebp - 0x30], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062C8DE: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C8E3: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062C8E8: mov byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C8EC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C8EF: mov ecx, esp */
    MEM32(ebp + (-0x34)) = esp; /* 0x0062C8F1: mov dword ptr [ebp - 0x34], esp */
    PUSH32(esp, 0x007F940Cu); /* 0x0062C8F4: push 0x7f940c */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C8F9: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0062C8FE: mov byte ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062C902: mov byte ptr [ebp - 4], 0 */
    ecx = 0x2A4u; /* 0x0062C906: mov ecx, 0x2a4 */
    RECOMP_CALL(sub_00668DA0); /* 0x0062C90B: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0062C910: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0062C913:
    eax = MEM32(esi + 0x20); /* 0x0062C913: mov eax, dword ptr [esi + 0x20] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0062C916: xorps xmm0, xmm0 */
    _xmm[1].u64[0] = MEM32(edi + 0x4); _xmm[1].u64[1] = 0; /* 0x0062C919: movss xmm1, dword ptr [edi + 4] */
    eax = MEM32(edi + eax * 4 + 0xFC); /* 0x0062C91E: mov eax, dword ptr [edi + eax*4 + 0xfc] */
    { float _s = sse_f32(MEM32(eax + 0x28)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x0062C925: subss xmm1, dword ptr [eax + 0x28] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0062C92A: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    MEM32(ebp + (-0x30)) = _xmm[1].u32[0]; /* 0x0062C92D: movss dword ptr [ebp - 0x30], xmm1 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0062C9D4; /* 0x0062C932: jbe 0x62c9d4 */
L_0062C938:
    { float _s = sse_f32(MEM32(0x809754)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x0062C938: addss xmm1, dword ptr [0x809754] */
    MEM32(ebp + (-0x30)) = _xmm[1].u32[0]; /* 0x0062C940: movss dword ptr [ebp - 0x30], xmm1 */
    goto L_0062C9D4; /* 0x0062C945: jmp 0x62c9d4 */
L_0062C94A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C94A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C94D: mov ecx, esp */
    MEM32(ebp + (-0x34)) = esp; /* 0x0062C94F: mov dword ptr [ebp - 0x34], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062C952: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C957: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0062C95C: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C960: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C963: mov ecx, esp */
    MEM32(ebp + (-0x30)) = esp; /* 0x0062C965: mov dword ptr [ebp - 0x30], esp */
    eax = ebp + (-0x2C); /* 0x0062C968: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062C96B: push -1 */
    PUSH32(esp, 0); /* 0x0062C96D: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062C96F: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062C976: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0062C97D: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062C97E: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062C981: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0062C986: mov byte ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C98A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C98D: mov ecx, esp */
    MEM32(ebp + (-0x38)) = esp; /* 0x0062C98F: mov dword ptr [ebp - 0x38], esp */
    PUSH32(esp, 0x007E4950u); /* 0x0062C992: push 0x7e4950 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C997: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0062C99C: mov byte ptr [ebp - 4], 5 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062C9A0: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062C9A3: mov ecx, esp */
    MEM32(ebp + (-0x3C)) = esp; /* 0x0062C9A5: mov dword ptr [ebp - 0x3c], esp */
    PUSH32(esp, 0x007F9620u); /* 0x0062C9A8: push 0x7f9620 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062C9AD: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0062C9B2: mov byte ptr [ebp - 4], 6 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0062C9B6: mov byte ptr [ebp - 4], 0 */
    ecx = 0x2ABu; /* 0x0062C9BA: mov ecx, 0x2ab */
    RECOMP_CALL(sub_00668A10); /* 0x0062C9BF: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(0x809824); _xmm[0].u64[1] = 0; /* 0x0062C9C4: movss xmm0, dword ptr [0x809824] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0062C9CC: add esp, 0x60 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = _xmm[0].u32[0]; /* 0x0062C9CF: movss dword ptr [ebp - 0x30], xmm0 */
L_0062C9D4:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062C9D4: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x0062C9DB: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062C9ED; /* 0x0062C9DF: jb 0x62c9ed */
L_0062C9E1:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x0062C9E1: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062C9E4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062C9EA: add esp, 4 */
    _flag_k = FK_ADD;
L_0062C9ED:
    _xmm[0].u64[0] = MEM32(ebp + (-0x30)); _xmm[0].u64[1] = 0; /* 0x0062C9ED: movss xmm0, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0062C9F2: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0062C9F9: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0062CA00: mov byte ptr [ebp - 0x2c], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0062CA04: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062CA07: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062CA0E: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062CA0F: pop edi */
    esi = POP32_VAL(esp); /* 0x0062CA10: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062CA11: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x0062CA12: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0062CA15: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0062CA17: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062CA1C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062CA1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062CA1F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0062CA30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062CA30u);

L_0062CA30:
    PUSH32(esp, ebp); /* 0x0062CA30: push ebp */
    ebp = esp; /* 0x0062CA31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062CA33: push -1 */
    PUSH32(esp, 0x00789B70u); /* 0x0062CA35: push 0x789b70 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062CA3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0062CA40: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0062CA41: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0062CA44: push ebx */
    PUSH32(esp, esi); /* 0x0062CA45: push esi */
    PUSH32(esp, edi); /* 0x0062CA46: push edi */
    eax = MEM32(0x855000); /* 0x0062CA47: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062CA4C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062CA4E: push eax */
    eax = ebp + (-0xC); /* 0x0062CA4F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062CA52: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = _xmm[1].u32[0]; /* 0x0062CA58: movss dword ptr [ebp - 0x10], xmm1 */
    ebx = MEM32(0x870270); /* 0x0062CA5D: mov ebx, dword ptr [0x870270] */
    ecx = MEM32(ebx + 0x64); /* 0x0062CA63: mov ecx, dword ptr [ebx + 0x64] */
    RECOMP_CALL(sub_0061CB10); /* 0x0062CA66: call 0x61cb10 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x64); /* 0x0062CA6B: mov ecx, dword ptr [ebx + 0x64] */
    _xmm[1].u64[0] = MEM32(ebp + (-0x10)); _xmm[1].u64[1] = 0; /* 0x0062CA6E: movss xmm1, dword ptr [ebp - 0x10] */
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x0062CA73: mov al, byte ptr [ecx + 2] */
    /* test LO8(eax), LO8(eax) */ /* 0x0062CA76: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062CAD8; /* 0x0062CA78: je 0x62cad8 */
L_0062CA7A:
    _xmm[0].u64[0] = MEM32(ebx + 0x20); _xmm[0].u64[1] = 0; /* 0x0062CA7A: movss xmm0, dword ptr [ebx + 0x20] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0062CA7F: addss xmm0, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x809348))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0062CA83: comiss xmm0, dword ptr [0x809348] */
    _flag_k = FK_EFLAGS;
    MEM32(ebx + 0x20) = _xmm[0].u32[0]; /* 0x0062CA8A: movss dword ptr [ebx + 0x20], xmm0 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0062CAD8; /* 0x0062CA8F: jbe 0x62cad8 */
L_0062CA91:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x0062CA91: mov al, byte ptr [ecx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x0062CA94: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062CAB9; /* 0x0062CA96: je 0x62cab9 */
L_0062CA98:
    RECOMP_CALL(sub_0061C8B0); /* 0x0062CA98: call 0x61c8b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0062CA9D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062CAB9; /* 0x0062CA9F: jne 0x62cab9 */
L_0062CAA1:
    ecx = MEM32(ebx + 0x64); /* 0x0062CAA1: mov ecx, dword ptr [ebx + 0x64] */
    SET_LO8(eax, MEM8(ecx + 0x2)); /* 0x0062CAA4: mov al, byte ptr [ecx + 2] */
    /* test LO8(eax), LO8(eax) */ /* 0x0062CAA7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062CACC; /* 0x0062CAA9: je 0x62cacc */
L_0062CAAB:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x0062CAAB: mov al, byte ptr [ecx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x0062CAAE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062CACC; /* 0x0062CAB0: je 0x62cacc */
L_0062CAB2:
    RECOMP_CALL(sub_0061C8F0); /* 0x0062CAB2: call 0x61c8f0 */
    RECOMP_FLAGS_IN();
    goto L_0062CACC; /* 0x0062CAB7: jmp 0x62cacc */
L_0062CAB9:
    ecx = MEM32(ebx + 0x64); /* 0x0062CAB9: mov ecx, dword ptr [ebx + 0x64] */
    RECOMP_CALL(sub_0061CC20); /* 0x0062CABC: call 0x61cc20 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0062CAC1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062CACC; /* 0x0062CAC3: je 0x62cacc */
L_0062CAC5:
    ecx = ebx; /* 0x0062CAC5: mov ecx, ebx */
    RECOMP_CALL(sub_00630090); /* 0x0062CAC7: call 0x630090 */
    RECOMP_FLAGS_IN();
L_0062CACC:
    _xmm[1].u64[0] = MEM32(ebp + (-0x10)); _xmm[1].u64[1] = 0; /* 0x0062CACC: movss xmm1, dword ptr [ebp - 0x10] */
    MEM32(ebx + 0x20) = 0; /* 0x0062CAD1: mov dword ptr [ebx + 0x20], 0 */
L_0062CAD8:
    _xmm[0].u64[0] = MEM32(ebx + 0x4); _xmm[0].u64[1] = 0; /* 0x0062CAD8: movss xmm0, dword ptr [ebx + 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x0062CADD: addss xmm0, xmm1 */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x809754))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0062CAE1: comiss xmm0, dword ptr [0x809754] */
    _flag_k = FK_EFLAGS;
    MEM32(ebx + 0x4) = _xmm[0].u32[0]; /* 0x0062CAE8: movss dword ptr [ebx + 4], xmm0 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0062CAF6; /* 0x0062CAED: jbe 0x62caf6 */
L_0062CAEF:
    MEM32(ebx + 0x4) = 0; /* 0x0062CAEF: mov dword ptr [ebx + 4], 0 */
L_0062CAF6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0062CAF6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx + 0x528; /* 0x0062CAF8: lea esi, [ebx + 0x528] */
    edi = edi; /* 0x0062CAFE: mov edi, edi */
L_0062CB00:
    /* cmp MEM8(esi + (-0xF)), 0 */ /* 0x0062CB00: cmp byte ptr [esi - 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(esi + (-0xF))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062CB3D; /* 0x0062CB04: je 0x62cb3d */
L_0062CB06:
    /* cmp MEM8(esi + 0x2D), 0 */ /* 0x0062CB06: cmp byte ptr [esi + 0x2d], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2D)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062CB3D; /* 0x0062CB0A: jne 0x62cb3d */
L_0062CB0C:
    eax = MEM32(esi); /* 0x0062CB0C: mov eax, dword ptr [esi] */
    edx = ebp + (-0x14); /* 0x0062CB0E: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x0062CB11: push edx */
    PUSH32(esp, eax); /* 0x0062CB12: push eax */
    ecx = MEM32(eax); /* 0x0062CB13: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x0062CB15: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x0062CB18: mov eax, dword ptr [ebp - 0x14] */
    /* test LO8(eax), 0x20u */ /* 0x0062CB1B: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062CB31; /* 0x0062CB1D: jne 0x62cb31 */
L_0062CB1F:
    /* test LO8(eax), 1 */ /* 0x0062CB1F: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062CB31; /* 0x0062CB21: je 0x62cb31 */
L_0062CB23:
    /* test LO8(eax), 2 */ /* 0x0062CB23: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062CB39; /* 0x0062CB25: je 0x62cb39 */
L_0062CB27:
    PUSH32(esp, edi); /* 0x0062CB27: push edi */
    ecx = ebx; /* 0x0062CB28: mov ecx, ebx */
    RECOMP_CALL(sub_0062E2C0); /* 0x0062CB2A: call 0x62e2c0 */
    RECOMP_FLAGS_IN();
    goto L_0062CB39; /* 0x0062CB2F: jmp 0x62cb39 */
L_0062CB31:
    PUSH32(esp, edi); /* 0x0062CB31: push edi */
    ecx = ebx; /* 0x0062CB32: mov ecx, ebx */
    RECOMP_CALL(sub_0062E710); /* 0x0062CB34: call 0x62e710 */
    RECOMP_FLAGS_IN();
L_0062CB39:
    MEM8(esi + (-0xE)) = (uint8_t)(0); /* 0x0062CB39: mov byte ptr [esi - 0xe], 0 */
L_0062CB3D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062CB3D: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x5Cu; /* 0x0062CB3E: add esi, 0x5c */
    _flag_k = FK_ADD;
    /* cmp edi, 0x80u */ /* 0x0062CB41: cmp edi, 0x80 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_0062CB00; /* 0x0062CB47: jl 0x62cb00 */
L_0062CB49:
    _xmm[1].u64[0] = MEM32(ebp + (-0x10)); _xmm[1].u64[1] = 0; /* 0x0062CB49: movss xmm1, dword ptr [ebp - 0x10] */
    ecx = ebx; /* 0x0062CB4E: mov ecx, ebx */
    RECOMP_CALL(sub_0062D980); /* 0x0062CB50: call 0x62d980 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x60); /* 0x0062CB55: mov eax, dword ptr [ebx + 0x60] */
    PUSH32(esp, eax); /* 0x0062CB58: push eax */
    ecx = MEM32(eax); /* 0x0062CB59: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x0062CB5B: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    MEM32(0x870274) = eax; /* 0x0062CB5E: mov dword ptr [0x870274], eax */
    /* test eax, eax */ /* 0x0062CB63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062CBD0; /* 0x0062CB65: je 0x62cbd0 */
L_0062CB67:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062CB67: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062CB6A: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0062CB6C: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x29u); /* 0x0062CB6F: push 0x29 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062CB71: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062CB78: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F9204u); /* 0x0062CB7F: push 0x7f9204 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062CB84: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062CB87: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062CB8C: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062CB93: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062CB96: mov ecx, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x0062CB98: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, 0x3Au); /* 0x0062CB9B: push 0x3a */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062CB9D: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062CBA4: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, 0x007F95E4u); /* 0x0062CBAB: push 0x7f95e4 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062CBB0: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062CBB3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062CBB8: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062CBBC: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x2ECu; /* 0x0062CBC3: mov ecx, 0x2ec */
    RECOMP_CALL(sub_00668410); /* 0x0062CBC8: call 0x668410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0062CBCD: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0062CBD0:
    ecx = MEM32(ebp + (-0xC)); /* 0x0062CBD0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062CBD3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062CBDA: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062CBDB: pop edi */
    esi = POP32_VAL(esp); /* 0x0062CBDC: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062CBDD: pop ebx */
    esp = ebp; /* 0x0062CBDE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062CBE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062CBE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_0062CBF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062CBF0u);

L_0062CBF0:
    PUSH32(esp, ebp); /* 0x0062CBF0: push ebp */
    ebp = esp; /* 0x0062CBF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062CBF3: push -1 */
    PUSH32(esp, 0x007B88B0u); /* 0x0062CBF5: push 0x7b88b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062CBFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0062CC00: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x0062CC01: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0062CC04: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0062CC09: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0062CC0B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x0062CC0E: push ebx */
    PUSH32(esp, esi); /* 0x0062CC0F: push esi */
    PUSH32(esp, edi); /* 0x0062CC10: push edi */
    PUSH32(esp, eax); /* 0x0062CC11: push eax */
    eax = ebp + (-0xC); /* 0x0062CC12: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062CC15: mov dword ptr fs:[0], eax */
    esi = MEM32(0x870270); /* 0x0062CC1B: mov esi, dword ptr [0x870270] */
    eax = MEM32(ebp + 0x10); /* 0x0062CC21: mov eax, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x0062CC24: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0xC); /* 0x0062CC27: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(esi + 0x60), 0 */ /* 0x0062CC2A: cmp dword ptr [esi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x58)) = eax; /* 0x0062CC2E: mov dword ptr [ebp - 0x58], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062CC76; /* 0x0062CC31: jne 0x62cc76 */
L_0062CC33:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062CC33: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062CC36: mov ecx, esp */
    MEM32(ebp + (-0x5C)) = esp; /* 0x0062CC38: mov dword ptr [ebp - 0x5c], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062CC3B: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062CC40: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062CC45: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062CC4C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062CC4F: mov ecx, esp */
    MEM32(ebp + (-0x60)) = esp; /* 0x0062CC51: mov dword ptr [ebp - 0x60], esp */
    PUSH32(esp, 0x007F9664u); /* 0x0062CC54: push 0x7f9664 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062CC59: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0062CC5E: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062CC62: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x2F8u; /* 0x0062CC69: mov ecx, 0x2f8 */
    RECOMP_CALL(sub_00668DA0); /* 0x0062CC6E: call 0x668da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0062CC73: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0062CC76:
    PUSH32(esp, 0x40u); /* 0x0062CC76: push 0x40 */
    eax = ebp + (-0x54); /* 0x0062CC78: lea eax, [ebp - 0x54] */
    PUSH32(esp, 0); /* 0x0062CC7B: push 0 */
    PUSH32(esp, eax); /* 0x0062CC7D: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x0062CC7E: call 0x78083e */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(edi); _xmm[0].u64[1] = 0; /* 0x0062CC83: movss xmm0, dword ptr [edi] */
    edx = ebp + (-0x54); /* 0x0062CC87: lea edx, [ebp - 0x54] */
    eax = MEM32(ebp + (-0x58)); /* 0x0062CC8A: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062CC8D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = _xmm[0].u32[0]; /* 0x0062CC90: movss dword ptr [ebp - 0x50], xmm0 */
    _xmm[0].u64[0] = MEM32(edi + 0x4); _xmm[0].u64[1] = 0; /* 0x0062CC95: movss xmm0, dword ptr [edi + 4] */
    MEM32(ebp + (-0x4C)) = _xmm[0].u32[0]; /* 0x0062CC9A: movss dword ptr [ebp - 0x4c], xmm0 */
    _xmm[0].u64[0] = MEM32(edi + 0x8); _xmm[0].u64[1] = 0; /* 0x0062CC9F: movss xmm0, dword ptr [edi + 8] */
    MEM32(ebp + (-0x48)) = _xmm[0].u32[0]; /* 0x0062CCA4: movss dword ptr [ebp - 0x48], xmm0 */
    _xmm[0].u64[0] = MEM32(ebx); _xmm[0].u64[1] = 0; /* 0x0062CCA9: movss xmm0, dword ptr [ebx] */
    MEM32(ebp + (-0x44)) = _xmm[0].u32[0]; /* 0x0062CCAD: movss dword ptr [ebp - 0x44], xmm0 */
    _xmm[0].u64[0] = MEM32(ebx + 0x4); _xmm[0].u64[1] = 0; /* 0x0062CCB2: movss xmm0, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x40)) = _xmm[0].u32[0]; /* 0x0062CCB7: movss dword ptr [ebp - 0x40], xmm0 */
    _xmm[0].u64[0] = MEM32(ebx + 0x8); _xmm[0].u64[1] = 0; /* 0x0062CCBC: movss xmm0, dword ptr [ebx + 8] */
    MEM32(ebp + (-0x3C)) = _xmm[0].u32[0]; /* 0x0062CCC1: movss dword ptr [ebp - 0x3c], xmm0 */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x0062CCC6: movss xmm0, dword ptr [eax] */
    MEM32(ebp + (-0x38)) = _xmm[0].u32[0]; /* 0x0062CCCA: movss dword ptr [ebp - 0x38], xmm0 */
    _xmm[0].u64[0] = MEM32(eax + 0x4); _xmm[0].u64[1] = 0; /* 0x0062CCCF: movss xmm0, dword ptr [eax + 4] */
    MEM32(ebp + (-0x34)) = _xmm[0].u32[0]; /* 0x0062CCD4: movss dword ptr [ebp - 0x34], xmm0 */
    _xmm[0].u64[0] = MEM32(eax + 0x8); _xmm[0].u64[1] = 0; /* 0x0062CCD9: movss xmm0, dword ptr [eax + 8] */
    MEM32(ebp + (-0x30)) = _xmm[0].u32[0]; /* 0x0062CCDE: movss dword ptr [ebp - 0x30], xmm0 */
    _xmm[0] = xmm_ld(0x809BF0); /* 0x0062CCE3: movaps xmm0, xmmword ptr [0x809bf0] */
    xmm_st(ebp + (-0x2C), _xmm[0]); /* 0x0062CCEA: movups xmmword ptr [ebp - 0x2c], xmm0 */
    PUSH32(esp, 1); /* 0x0062CCEE: push 1 */
    _xmm[0].u64[0] = MEM64(edi); _xmm[0].u64[1] = 0; /* 0x0062CCF0: movq xmm0, qword ptr [edi] */
    MEM64(esi + 0x3308) = _xmm[0].u64[0]; /* 0x0062CCF4: movq qword ptr [esi + 0x3308], xmm0 */
    eax = MEM32(edi + 0x8); /* 0x0062CCFC: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x3310) = eax; /* 0x0062CCFF: mov dword ptr [esi + 0x3310], eax */
    eax = MEM32(esi + 0x60); /* 0x0062CD05: mov eax, dword ptr [esi + 0x60] */
    MEM32(ebp + (-0x54)) = 0x40u; /* 0x0062CD08: mov dword ptr [ebp - 0x54], 0x40 */
    MEM32(ebp + (-0x1C)) = 0x3FE66666u; /* 0x0062CD0F: mov dword ptr [ebp - 0x1c], 0x3fe66666 */
    MEM32(ebp + (-0x18)) = 0x40000000u; /* 0x0062CD16: mov dword ptr [ebp - 0x18], 0x40000000 */
    ecx = MEM32(eax); /* 0x0062CD1D: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x0062CD1F: push edx */
    PUSH32(esp, eax); /* 0x0062CD20: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x0062CD21: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0062CD24: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062CD27: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062CD2E: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062CD2F: pop edi */
    esi = POP32_VAL(esp); /* 0x0062CD30: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062CD31: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x0062CD32: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0062CD35: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0062CD37: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062CD3C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062CD3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0062CD3F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0062CD50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062CD50u);

L_0062CD50:
    PUSH32(esp, ebp); /* 0x0062CD50: push ebp */
    ebp = esp; /* 0x0062CD51: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0062CD53: push ecx */
    ecx = MEM32(ebp + 0x18); /* 0x0062CD54: mov ecx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x10); /* 0x0062CD57: mov eax, dword ptr [ebp + 0x10] */
    /* cmp LO8(ecx), 3 */ /* 0x0062CD5A: cmp cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062CD6A; /* 0x0062CD5D: jne 0x62cd6a */
L_0062CD5F:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0062CD5F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = 0x46u; /* 0x0062CD62: mov edx, 0x46 */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = edx; } /* 0x0062CD67: cmove eax, edx */
L_0062CD6A:
    PUSH32(esp, ecx); /* 0x0062CD6A: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0062CD6B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x0062CD6E: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0062CD6F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x0062CD72: push ecx */
    ecx = MEM32(0x870270); /* 0x0062CD73: mov ecx, dword ptr [0x870270] */
    RECOMP_CALL(sub_0062CD90); /* 0x0062CD79: call 0x62cd90 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062CD7E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062CD80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x0062CD81: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_0062CD90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0062CD90u);

L_0062CD90:
    PUSH32(esp, ebp); /* 0x0062CD90: push ebp */
    ebp = esp; /* 0x0062CD91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0062CD93: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062CD96: push -1 */
    PUSH32(esp, 0x007B8908u); /* 0x0062CD98: push 0x7b8908 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062CD9D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0062CDA3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x0062CDA4: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0062CDA7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0062CDAC: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = eax; /* 0x0062CDAE: mov dword ptr [esp + 0x28], eax */
    PUSH32(esp, ebx); /* 0x0062CDB2: push ebx */
    PUSH32(esp, esi); /* 0x0062CDB3: push esi */
    PUSH32(esp, edi); /* 0x0062CDB4: push edi */
    eax = MEM32(0x855000); /* 0x0062CDB5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0062CDBA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062CDBC: push eax */
    eax = esp + 0x40; /* 0x0062CDBD: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062CDC1: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x0062CDC7: mov ebx, ecx */
    edx = MEM32(ebp + 0xC); /* 0x0062CDC9: mov edx, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x30) = 0; /* 0x0062CDCC: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x0062CDD4: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x34) = 0xFu; /* 0x0062CDDC: mov dword ptr [esp + 0x34], 0xf */
    /* cmp MEM8(edx), 0 */ /* 0x0062CDE4: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esp + 0x30) = 0; /* 0x0062CDE7: mov dword ptr [esp + 0x30], 0 */
    MEM8(esp + 0x20) = (uint8_t)(0); /* 0x0062CDEF: mov byte ptr [esp + 0x20], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062CDFA; /* 0x0062CDF4: jne 0x62cdfa */
L_0062CDF6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0062CDF6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0062CE09; /* 0x0062CDF8: jmp 0x62ce09 */
L_0062CDFA:
    ecx = edx; /* 0x0062CDFA: mov ecx, edx */
    esi = ecx + 0x1; /* 0x0062CDFC: lea esi, [ecx + 1] */
    /* nop */ /* 0x0062CDFF: nop  */
L_0062CE00:
    SET_LO8(eax, MEM8(ecx)); /* 0x0062CE00: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0062CE02: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0062CE03: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062CE00; /* 0x0062CE05: jne 0x62ce00 */
L_0062CE07:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x0062CE07: sub ecx, esi */
    _flag_k = FK_CMP;
L_0062CE09:
    PUSH32(esp, ecx); /* 0x0062CE09: push ecx */
    PUSH32(esp, edx); /* 0x0062CE0A: push edx */
    ecx = esp + 0x28; /* 0x0062CE0B: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062CE0F: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0; /* 0x0062CE14: mov dword ptr [esp + 0x48], 0 */
    ecx = esp + 0x20; /* 0x0062CE1C: lea ecx, [esp + 0x20] */
    edx = MEM32(esp + 0x34); /* 0x0062CE20: mov edx, dword ptr [esp + 0x34] */
    edi = esp + 0x20; /* 0x0062CE24: lea edi, [esp + 0x20] */
    esi = MEM32(esp + 0x20); /* 0x0062CE28: mov esi, dword ptr [esp + 0x20] */
    /* cmp edx, 0x10u */ /* 0x0062CE2C: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x30); /* 0x0062CE2F: mov eax, dword ptr [esp + 0x30] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x0062CE33: cmovae ecx, esi */
    if (CMP_AE(_flag_a, _flag_b)) { edi = esi; } /* 0x0062CE36: cmovae edi, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0062CE39: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, 0x10u */ /* 0x0062CE3B: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esp + 0x20; /* 0x0062CE3E: lea ecx, [esp + 0x20] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = esi; } /* 0x0062CE42: cmovae ecx, esi */
    /* cmp ecx, eax */ /* 0x0062CE45: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062CE5F; /* 0x0062CE47: je 0x62ce5f */
L_0062CE49:
    PUSH32(esp, MEM32(0x7CC6AC)); /* 0x0062CE49: push dword ptr [0x7cc6ac] */
    edx = ecx; /* 0x0062CE4F: mov edx, ecx */
    ecx = esp + 0x14; /* 0x0062CE51: lea ecx, [esp + 0x14] */
    PUSH32(esp, edi); /* 0x0062CE55: push edi */
    PUSH32(esp, eax); /* 0x0062CE56: push eax */
    RECOMP_CALL(sub_00426250); /* 0x0062CE57: call 0x426250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0062CE5C: add esp, 0xc */
    _flag_k = FK_ADD;
L_0062CE5F:
    /* cmp MEM8(ebx + 0x68), 0 */ /* 0x0062CE5F: cmp byte ptr [ebx + 0x68], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x68)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062CF1D; /* 0x0062CE63: je 0x62cf1d */
L_0062CE69:
    eax = esp + 0x20; /* 0x0062CE69: lea eax, [esp + 0x20] */
    ecx = 0x00920060u; /* 0x0062CE6D: mov ecx, 0x920060 */
    PUSH32(esp, eax); /* 0x0062CE72: push eax */
    eax = esp + 0x14; /* 0x0062CE73: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x0062CE77: push eax */
    RECOMP_CALL(sub_0060D0F0); /* 0x0062CE78: call 0x60d0f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x10); /* 0x0062CE7D: mov eax, dword ptr [esp + 0x10] */
    /* cmp eax, MEM32(0x920060) */ /* 0x0062CE81: cmp eax, dword ptr [0x920060] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x920060));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062CF73; /* 0x0062CE87: jne 0x62cf73 */
L_0062CE8D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062CE8D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062CE90: mov ecx, esp */
    MEM32(esp + 0x28) = esp; /* 0x0062CE92: mov dword ptr [esp + 0x28], esp */
    PUSH32(esp, 0x007F9204u); /* 0x0062CE96: push 0x7f9204 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062CE9B: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x60) = (uint8_t)(3); /* 0x0062CEA0: mov byte ptr [esp + 0x60], 3 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062CEA5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062CEA8: mov ecx, esp */
    MEM32(esp + 0x4C) = esp; /* 0x0062CEAA: mov dword ptr [esp + 0x4c], esp */
    eax = esp + 0x50; /* 0x0062CEAE: lea eax, [esp + 0x50] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0062CEB2: push -1 */
    PUSH32(esp, 0); /* 0x0062CEB4: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0062CEB6: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0062CEBD: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0062CEC4: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0062CEC5: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0062CEC8: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x78) = (uint8_t)(4); /* 0x0062CECD: mov byte ptr [esp + 0x78], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062CED2: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062CED5: mov ecx, esp */
    MEM32(esp + 0x5C) = esp; /* 0x0062CED7: mov dword ptr [esp + 0x5c], esp */
    PUSH32(esp, 0x007E4950u); /* 0x0062CEDB: push 0x7e4950 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062CEE0: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x90) = (uint8_t)(5); /* 0x0062CEE5: mov byte ptr [esp + 0x90], 5 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0062CEED: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0062CEF0: mov ecx, esp */
    MEM32(esp + 0x78) = esp; /* 0x0062CEF2: mov dword ptr [esp + 0x78], esp */
    PUSH32(esp, 0x007F9680u); /* 0x0062CEF6: push 0x7f9680 */
    RECOMP_CALL(sub_00409FA0); /* 0x0062CEFB: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0xA8) = (uint8_t)(6); /* 0x0062CF00: mov byte ptr [esp + 0xa8], 6 */
    MEM8(esp + 0xA8) = (uint8_t)(0); /* 0x0062CF08: mov byte ptr [esp + 0xa8], 0 */
    ecx = 0x355u; /* 0x0062CF10: mov ecx, 0x355 */
    RECOMP_CALL(sub_00668A10); /* 0x0062CF15: call 0x668a10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x60u; /* 0x0062CF1A: add esp, 0x60 */
    _flag_k = FK_ADD;
L_0062CF1D:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x0062CF1D: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_0062CF20:
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x0062CF20: mov dword ptr [esp + 0x48], 0xffffffff */
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x0062CF28: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062CF3C; /* 0x0062CF2D: jb 0x62cf3c */
L_0062CF2F:
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x0062CF2F: push dword ptr [esp + 0x20] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0062CF33: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062CF39: add esp, 4 */
    _flag_k = FK_ADD;
L_0062CF3C:
    MEM32(esp + 0x34) = 0xFu; /* 0x0062CF3C: mov dword ptr [esp + 0x34], 0xf */
    eax = esi; /* 0x0062CF44: mov eax, esi */
    MEM32(esp + 0x30) = 0; /* 0x0062CF46: mov dword ptr [esp + 0x30], 0 */
    MEM8(esp + 0x20) = (uint8_t)(0); /* 0x0062CF4E: mov byte ptr [esp + 0x20], 0 */
    ecx = MEM32(esp + 0x40); /* 0x0062CF53: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0062CF57: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062CF5E: pop ecx */
    edi = POP32_VAL(esp); /* 0x0062CF5F: pop edi */
    esi = POP32_VAL(esp); /* 0x0062CF60: pop esi */
    ebx = POP32_VAL(esp); /* 0x0062CF61: pop ebx */
    ecx = MEM32(esp + 0x28); /* 0x0062CF62: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x0062CF66: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0062CF68: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0062CF6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062CF6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x0062CF70: ret 0x14 */
L_0062CF73:
    esi = MEM32(ebp + 0x10); /* 0x0062CF73: mov esi, dword ptr [ebp + 0x10] */
    ecx = 0x32u; /* 0x0062CF76: mov ecx, 0x32 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x0062CF7B: push dword ptr [ebp + 0x18] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x0062CF7E: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = 0x5622u; /* 0x0062CF81: mov edx, 0x5622 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0062CF86: push dword ptr [ebp + 0x14] */
    if (CMP_EQ(_flag_a, _flag_b)) { esi = ecx; } /* 0x0062CF89: cmove esi, ecx */
    edi = 0xAC44u; /* 0x0062CF8C: mov edi, 0xac44 */
    ecx = MEM32(eax + 0x20); /* 0x0062CF91: mov ecx, dword ptr [eax + 0x20] */
    eax = (uint32_t)MEM16(eax + 0x20); /* 0x0062CF94: movzx eax, word ptr [eax + 0x20] */
    PUSH32(esp, esi); /* 0x0062CF98: push esi */
    ecx = MEM32(ebx + ecx * 4 + 0xFC); /* 0x0062CF99: mov ecx, dword ptr [ebx + ecx*4 + 0xfc] */
    /* cmp MEM8(ecx + 0x1C), 0 */ /* 0x0062CFA0: cmp byte ptr [ecx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = ebx; /* 0x0062CFA4: mov ecx, ebx */
    if (CMP_NE(_flag_a, _flag_b)) { edx = edi; } /* 0x0062CFA6: cmovne edx, edi */
    PUSH32(esp, edx); /* 0x0062CFA9: push edx */
    PUSH32(esp, 0); /* 0x0062CFAA: push 0 */
    PUSH32(esp, 0); /* 0x0062CFAC: push 0 */
    PUSH32(esp, 0); /* 0x0062CFAE: push 0 */
    PUSH32(esp, eax); /* 0x0062CFB0: push eax */
    PUSH32(esp, 0); /* 0x0062CFB1: push 0 */
    RECOMP_CALL(sub_0062DC30); /* 0x0062CFB3: call 0x62dc30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0062CFB8: mov esi, eax */
    RECOMP_BACKEDGE();
    goto L_0062CF20; /* 0x0062CFBA: jmp 0x62cf20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
