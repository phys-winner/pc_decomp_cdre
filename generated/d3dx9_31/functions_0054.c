#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_172170B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172170B6u);

L_172170B6:
    edi = edi; /* 0x172170B6: mov edi, edi */
    PUSH32(esp, ebx); /* 0x172170B8: push ebx */
    ebx = esp; /* 0x172170B9: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x172170BB: push ecx */
    PUSH32(esp, ecx); /* 0x172170BC: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x172170BD: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x172170C0: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x172170C3: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x172170C4: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x172170C7: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x172170CB: mov ebp, esp */
    ecx = MEM32(ebx + 0xC); /* 0x172170CD: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x10); /* 0x172170D0: mov eax, dword ptr [ebx + 0x10] */
    _xmm[0] = xmm_ld(ecx); /* 0x172170D3: movups xmm0, xmmword ptr [ecx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x172170D6: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test LO8(eax), 0xFu */ /* 0x172170D9: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _xmm[1] = _xmm[0]; /* 0x172170DB: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x172170DE: shufps xmm1, xmm0, 0xff */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17217116; /* 0x172170E2: jne 0x17217116 */
L_172170E4:
    _xmm[2] = xmm_ld(eax + 0x30); /* 0x172170E4: movaps xmm2, xmmword ptr [eax + 0x30] */
    _xmm[3] = xmm_ld(eax + 0x20); /* 0x172170E8: movaps xmm3, xmmword ptr [eax + 0x20] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x172170EC: mulps xmm2, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x172170EF: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[2]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[2]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x172170F2: shufps xmm1, xmm0, 0xaa */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x172170F6: mulps xmm3, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x172170F9: addps xmm3, xmm2 */
    _xmm[2] = xmm_ld(eax + 0x10); /* 0x172170FC: movaps xmm2, xmmword ptr [eax + 0x10] */
    _xmm[1] = _xmm[0]; /* 0x17217100: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17217103: shufps xmm1, xmm0, 0x55 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217107: mulps xmm2, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x1721710A: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1721710D: shufps xmm1, xmm0, 0 */
    _xmm[0] = xmm_ld(eax); /* 0x17217111: movaps xmm0, xmmword ptr [eax] */
    goto L_17217166; /* 0x17217114: jmp 0x17217166 */
L_17217116:
    _xmm[2] = xmm_ld(ebp + (-0x10)); /* 0x17217116: movaps xmm2, xmmword ptr [ebp - 0x10] */
    _xmm[2].u64[0] = MEM64(eax + 0x30); /* 0x1721711A: movlps xmm2, qword ptr [eax + 0x30] */
    _xmm[2].u64[1] = MEM64(eax + 0x38); /* 0x1721711E: movhps xmm2, qword ptr [eax + 0x38] */
    _xmm[3] = xmm_ld(ebp + (-0x10)); /* 0x17217122: movaps xmm3, xmmword ptr [ebp - 0x10] */
    _xmm[3].u64[0] = MEM64(eax + 0x20); /* 0x17217126: movlps xmm3, qword ptr [eax + 0x20] */
    _xmm[3].u64[1] = MEM64(eax + 0x28); /* 0x1721712A: movhps xmm3, qword ptr [eax + 0x28] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721712E: mulps xmm2, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x17217131: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[2]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[2]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x17217134: shufps xmm1, xmm0, 0xaa */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217138: mulps xmm3, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1721713B: addps xmm3, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x10)); /* 0x1721713E: movaps xmm2, xmmword ptr [ebp - 0x10] */
    _xmm[2].u64[0] = MEM64(eax + 0x10); /* 0x17217142: movlps xmm2, qword ptr [eax + 0x10] */
    _xmm[2].u64[1] = MEM64(eax + 0x18); /* 0x17217146: movhps xmm2, qword ptr [eax + 0x18] */
    _xmm[1] = _xmm[0]; /* 0x1721714A: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x1721714D: shufps xmm1, xmm0, 0x55 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217151: mulps xmm2, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x17217154: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217157: shufps xmm1, xmm0, 0 */
    _xmm[0] = xmm_ld(ebp + (-0x10)); /* 0x1721715B: movaps xmm0, xmmword ptr [ebp - 0x10] */
    _xmm[0].u64[0] = MEM64(eax); /* 0x1721715F: movlps xmm0, qword ptr [eax] */
    _xmm[0].u64[1] = MEM64(eax + 0x8); /* 0x17217162: movhps xmm0, qword ptr [eax + 8] */
L_17217166:
    eax = MEM32(ebx + 0x8); /* 0x17217166: mov eax, dword ptr [ebx + 8] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217169: mulps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721716C: addps xmm0, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721716F: addps xmm0, xmm3 */
    xmm_st(eax, _xmm[0]); /* 0x17217172: movups xmmword ptr [eax], xmm0 */
    esp = ebp; /* 0x17217175: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17217177: pop ebp */
    esp = ebx; /* 0x17217178: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721717A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1721717B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17217183(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217183u);

L_17217183:
    edi = edi; /* 0x17217183: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17217185: push ebp */
    ebp = esp; /* 0x17217186: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17217188: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x1721718B: movss xmm0, dword ptr [eax] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x1721718F: movss xmm1, dword ptr [eax + 4] */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x17217194: movss xmm2, dword ptr [eax + 8] */
    _xmm[3] = _xmm[0]; /* 0x17217199: movaps xmm3, xmm0 */
    _xmm[4] = _xmm[1]; /* 0x1721719C: movaps xmm4, xmm1 */
    _xmm[5] = _xmm[2]; /* 0x1721719F: movaps xmm5, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x172171A2: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x172171A6: mulss xmm1, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x172171AA: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x172171AE: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x172171B2: addss xmm0, xmm2 */
    ecx = MEM32(ebp + 0x8); /* 0x172171B6: mov ecx, dword ptr [ebp + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x1702A6B0))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x172171B9: comiss xmm0, dword ptr [0x1702a6b0] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_172171CF; /* 0x172171C0: jae 0x172171cf */
L_172171C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x172171C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x172171C4: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x172171C6: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x172171C9: mov dword ptr [ecx + 8], eax */
    goto L_17217210; /* 0x172171CC: jmp 0x17217210 */
L_172171CF:
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x172171CF: rsqrtss xmm6, xmm0 */
    _xmm[7] = _xmm[6]; /* 0x172171D3: movaps xmm7, xmm6 */
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x172171D6: mulss xmm6, xmm0 */
    { float _s = _xmm[7].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x172171DA: mulss xmm6, xmm7 */
    _xmm[1].u64[0] = MEM32(0x1702A690); _xmm[1].u64[1] = 0; /* 0x172171DE: movss xmm1, dword ptr [0x1702a690] */
    { float _s = sse_f32(MEM32(0x1702A6A0)); _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x172171E6: mulss xmm7, dword ptr [0x1702a6a0] */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x172171EE: subss xmm1, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x172171F2: mulss xmm1, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x172171F6: mulss xmm3, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x172171FA: mulss xmm4, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x172171FE: mulss xmm5, xmm1 */
    MEM32(ecx) = _xmm[3].u32[0]; /* 0x17217202: movss dword ptr [ecx], xmm3 */
    MEM32(ecx + 0x4) = _xmm[4].u32[0]; /* 0x17217206: movss dword ptr [ecx + 4], xmm4 */
    MEM32(ecx + 0x8) = _xmm[5].u32[0]; /* 0x1721720B: movss dword ptr [ecx + 8], xmm5 */
L_17217210:
    eax = MEM32(ebp + 0x8); /* 0x17217210: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17217213: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17217214: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1721721C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721721Cu);

L_1721721C:
    edi = edi; /* 0x1721721C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1721721E: push ebp */
    ebp = esp; /* 0x1721721F: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17217221: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x17217224: movss xmm0, dword ptr [eax] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x17217228: movss xmm1, dword ptr [eax + 4] */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x1721722D: movss xmm2, dword ptr [eax + 8] */
    _xmm[3] = _xmm[0]; /* 0x17217232: movaps xmm3, xmm0 */
    _xmm[4] = _xmm[1]; /* 0x17217235: movaps xmm4, xmm1 */
    _xmm[5] = _xmm[2]; /* 0x17217238: movaps xmm5, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1721723B: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1721723F: mulss xmm1, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x17217243: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17217247: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1721724B: addss xmm0, xmm2 */
    ecx = MEM32(ebp + 0x8); /* 0x1721724F: mov ecx, dword ptr [ebp + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x1702A6B0))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x17217252: comiss xmm0, dword ptr [0x1702a6b0] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_1721726C; /* 0x17217259: jae 0x1721726c */
L_1721725B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1721725B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1721725D: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x1721725F: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x17217262: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x17217265: mov dword ptr [ecx + 0xc], eax */
    goto L_172172B7; /* 0x17217268: jmp 0x172172b7 */
L_1721726C:
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x1721726C: rsqrtss xmm6, xmm0 */
    _xmm[7] = _xmm[6]; /* 0x17217270: movaps xmm7, xmm6 */
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x17217273: mulss xmm6, xmm0 */
    { float _s = _xmm[7].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x17217277: mulss xmm6, xmm7 */
    _xmm[1].u64[0] = MEM32(0x1702A690); _xmm[1].u64[1] = 0; /* 0x1721727B: movss xmm1, dword ptr [0x1702a690] */
    { float _s = sse_f32(MEM32(0x1702A6A0)); _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x17217283: mulss xmm7, dword ptr [0x1702a6a0] */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x1721728B: subss xmm1, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1721728F: mulss xmm1, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x17217293: mulss xmm3, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x17217297: mulss xmm4, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x1721729B: mulss xmm5, xmm1 */
    { float _s = sse_f32(MEM32(eax + 0xC)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1721729F: mulss xmm1, dword ptr [eax + 0xc] */
    MEM32(ecx) = _xmm[3].u32[0]; /* 0x172172A4: movss dword ptr [ecx], xmm3 */
    MEM32(ecx + 0x4) = _xmm[4].u32[0]; /* 0x172172A8: movss dword ptr [ecx + 4], xmm4 */
    MEM32(ecx + 0x8) = _xmm[5].u32[0]; /* 0x172172AD: movss dword ptr [ecx + 8], xmm5 */
    MEM32(ecx + 0xC) = _xmm[1].u32[0]; /* 0x172172B2: movss dword ptr [ecx + 0xc], xmm1 */
L_172172B7:
    eax = MEM32(ebp + 0x8); /* 0x172172B7: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x172172BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x172172BB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_172172C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172172C3u);

L_172172C3:
    edi = edi; /* 0x172172C3: mov edi, edi */
    PUSH32(esp, ebx); /* 0x172172C5: push ebx */
    ebx = esp; /* 0x172172C6: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x172172C8: push ecx */
    PUSH32(esp, ecx); /* 0x172172C9: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x172172CA: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x172172CD: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x172172D0: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x172172D1: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x172172D4: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x172172D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x172172DA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0xC); /* 0x172172DD: mov eax, dword ptr [ebx + 0xc] */
    _xmm[4] = xmm_ld(ebp + (-0x10)); /* 0x172172E0: movaps xmm4, xmmword ptr [ebp - 0x10] */
    _xmm[4].u64[0] = MEM64(eax); /* 0x172172E4: movlps xmm4, qword ptr [eax] */
    _xmm[4].u64[1] = MEM64(eax + 0x8); /* 0x172172E7: movhps xmm4, qword ptr [eax + 8] */
    eax = MEM32(ebx + 0x10); /* 0x172172EB: mov eax, dword ptr [ebx + 0x10] */
    _xmm[0] = xmm_ld(ebp + (-0x10)); /* 0x172172EE: movaps xmm0, xmmword ptr [ebp - 0x10] */
    _xmm[0].u64[0] = MEM64(eax); /* 0x172172F2: movlps xmm0, qword ptr [eax] */
    _xmm[0].u64[1] = MEM64(eax + 0x8); /* 0x172172F5: movhps xmm0, qword ptr [eax + 8] */
    eax = MEM32(ebx + 0x14); /* 0x172172F9: mov eax, dword ptr [ebx + 0x14] */
    _xmm[2] = xmm_ld(ebp + (-0x10)); /* 0x172172FC: movaps xmm2, xmmword ptr [ebp - 0x10] */
    _xmm[2].u64[0] = MEM64(eax); /* 0x17217300: movlps xmm2, qword ptr [eax] */
    _xmm[2].u64[1] = MEM64(eax + 0x8); /* 0x17217303: movhps xmm2, qword ptr [eax + 8] */
    eax = MEM32(ebx + 0x8); /* 0x17217307: mov eax, dword ptr [ebx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1721730A: shufps xmm0, xmm0, 0x39 */
    _xmm[1] = _xmm[0]; /* 0x1721730E: movaps xmm1, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17217311: mulps xmm1, xmm2 */
    _xmm[3] = _xmm[0]; /* 0x17217314: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x17217317: shufps xmm2, xmm2, 0x4e */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721731B: mulps xmm3, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1721731E: shufps xmm2, xmm2, 0x39 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217322: mulps xmm0, xmm2 */
    _xmm[2] = _xmm[1]; /* 0x17217325: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x17217328: shufps xmm2, xmm1, 0x4e */
    _xmm[5] = _xmm[3]; /* 0x1721732C: movaps xmm5, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[3]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1721732F: shufps xmm5, xmm3, 0x39 */
    xmm_st(ebp + (-0x10), _xmm[0]); /* 0x17217333: movaps xmmword ptr [ebp - 0x10], xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x17217337: subps xmm5, xmm2 */
    _xmm[2] = _xmm[0]; /* 0x1721733A: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x1721733D: shufps xmm2, xmm0, 0x4e */
    { float _s0 = sse_f32(MEM32(ebp + (-0x10))); float _s1 = sse_f32(MEM32(ebp + (-0x10) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x10) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x10) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x17217341: subps xmm2, xmmword ptr [ebp - 0x10] */
    _xmm[6] = _xmm[1]; /* 0x17217345: movaps xmm6, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[2]; _xmm[6].u32[2] = _s.u32[3]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x17217348: shufps xmm6, xmm1, 0x39 */
    _xmm[0] = _xmm[4]; /* 0x1721734C: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1721734F: shufps xmm0, xmm4, 0x39 */
    _xmm[4] = xmm_ld(0x1723C3A0); /* 0x17217353: movaps xmm4, xmmword ptr [0x1723c3a0] */
    _xmm[1] = _xmm[0]; /* 0x1721735A: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1721735D: shufps xmm1, xmm0, 0x39 */
    _xmm[7] = _xmm[3]; /* 0x17217361: movaps xmm7, xmm3 */
    _xmm[3] = _xmm[1]; /* 0x17217364: movaps xmm3, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x17217367: shufps xmm3, xmm1, 0x39 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721736B: mulps xmm0, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[7] = _d; } /* 0x1721736E: subps xmm7, xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17217371: mulps xmm1, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217374: addps xmm0, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217377: mulps xmm3, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721737A: addps xmm0, xmm3 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1721737D: xorps xmm0, xmm4 */
    xmm_st(eax, _xmm[0]); /* 0x17217380: movups xmmword ptr [eax], xmm0 */
    esp = ebp; /* 0x17217383: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17217385: pop ebp */
    esp = ebx; /* 0x17217386: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17217388: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17217389: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17217391(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217391u);

L_17217391:
    edi = edi; /* 0x17217391: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17217393: push ebp */
    ebp = esp; /* 0x17217394: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17217396: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x17217399: movss xmm0, dword ptr [eax] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x1721739D: movss xmm1, dword ptr [eax + 4] */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x172173A2: movss xmm2, dword ptr [eax + 8] */
    _xmm[3].u64[0] = MEM32(eax + 0xC); _xmm[3].u64[1] = 0; /* 0x172173A7: movss xmm3, dword ptr [eax + 0xc] */
    _xmm[4].u32[0] = _xmm[0].u32[0]; /* 0x172173AC: movss xmm4, xmm0 */
    _xmm[5].u32[0] = _xmm[1].u32[0]; /* 0x172173B0: movss xmm5, xmm1 */
    _xmm[6].u32[0] = _xmm[2].u32[0]; /* 0x172173B4: movss xmm6, xmm2 */
    _xmm[7].u32[0] = _xmm[3].u32[0]; /* 0x172173B8: movss xmm7, xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x172173BC: mulss xmm4, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x172173C0: mulss xmm5, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x172173C4: mulss xmm6, xmm2 */
    { float _s = _xmm[5].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] + _s); } /* 0x172173C8: addss xmm4, xmm5 */
    { float _s = _xmm[3].f32[0]; _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x172173CC: mulss xmm7, xmm3 */
    { float _s = _xmm[7].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] + _s); } /* 0x172173D0: addss xmm6, xmm7 */
    { float _s = _xmm[6].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] + _s); } /* 0x172173D4: addss xmm4, xmm6 */
    { float _s = _xmm[4].f32[0]; _xmm[5].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x172173D8: rsqrtss xmm5, xmm4 */
    _xmm[6].u32[0] = _xmm[5].u32[0]; /* 0x172173DC: movss xmm6, xmm5 */
    { float _s = _xmm[5].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x172173E0: mulss xmm5, xmm5 */
    { float _s = _xmm[5].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x172173E4: mulss xmm4, xmm5 */
    _xmm[5].u64[0] = MEM32(0x1723C3C0); _xmm[5].u64[1] = 0; /* 0x172173E8: movss xmm5, dword ptr [0x1723c3c0] */
    { float _s = _xmm[4].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x172173F0: subss xmm5, xmm4 */
    { float _s = sse_f32(MEM32(0x1723C3B0)); _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x172173F4: mulss xmm5, dword ptr [0x1723c3b0] */
    { float _s = _xmm[6].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x172173FC: mulss xmm5, xmm6 */
    eax = MEM32(ebp + 0x8); /* 0x17217400: mov eax, dword ptr [ebp + 8] */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x17217403: mulss xmm0, xmm5 */
    { float _s = _xmm[5].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x17217407: mulss xmm1, xmm5 */
    MEM32(eax) = _xmm[0].u32[0]; /* 0x1721740B: movss dword ptr [eax], xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1721740F: mulss xmm2, xmm5 */
    MEM32(eax + 0x4) = _xmm[1].u32[0]; /* 0x17217413: movss dword ptr [eax + 4], xmm1 */
    { float _s = _xmm[5].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x17217418: mulss xmm3, xmm5 */
    MEM32(eax + 0x8) = _xmm[2].u32[0]; /* 0x1721741C: movss dword ptr [eax + 8], xmm2 */
    MEM32(eax + 0xC) = _xmm[3].u32[0]; /* 0x17217421: movss dword ptr [eax + 0xc], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x17217426: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17217429: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1721742A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17217432(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217432u);

L_17217432:
    edi = edi; /* 0x17217432: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17217434: push ebp */
    ebp = esp; /* 0x17217435: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x17217437: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x1721743C: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x17217440: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x17217444: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17217448: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1721744C: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217450: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C2B0)); float _s1 = sse_f32(MEM32(0x1723C2B0 + 4)); float _s2 = sse_f32(MEM32(0x1723C2B0 + 8)); float _s3 = sse_f32(MEM32(0x1723C2B0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217454: mulps xmm0, xmmword ptr [0x1723c2b0] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1721745B: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C2A0)); float _s1 = sse_f32(MEM32(0x1723C2A0 + 4)); float _s2 = sse_f32(MEM32(0x1723C2A0 + 8)); float _s3 = sse_f32(MEM32(0x1723C2A0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721745F: mulps xmm1, xmmword ptr [0x1723c2a0] */
    { float _s0 = sse_f32(MEM32(0x1723C2C0)); float _s1 = sse_f32(MEM32(0x1723C2C0 + 4)); float _s2 = sse_f32(MEM32(0x1723C2C0 + 8)); float _s3 = sse_f32(MEM32(0x1723C2C0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217466: addps xmm0, xmmword ptr [0x1723c2c0] */
    { float _s0 = sse_f32(MEM32(0x1723C290)); float _s1 = sse_f32(MEM32(0x1723C290 + 4)); float _s2 = sse_f32(MEM32(0x1723C290 + 8)); float _s3 = sse_f32(MEM32(0x1723C290 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721746D: mulps xmm2, xmmword ptr [0x1723c290] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217474: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217477: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x1721747A: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1721747D: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x17217480: mov edx, dword ptr [ebp + 0x14] */
    _xmm[1] = _xmm[0]; /* 0x17217483: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17217486: shufps xmm1, xmm0, 0x55 */
    _xmm[2] = _xmm[0]; /* 0x1721748A: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x1721748D: shufps xmm2, xmm0, 0xaa */
    _xmm[3] = _xmm[0]; /* 0x17217491: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x17217494: shufps xmm3, xmm0, 0xff */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17217498: shufps xmm0, xmm0, 0 */
    _xmm[4].u64[0] = MEM32(eax + 0x8); _xmm[4].u64[1] = 0; /* 0x1721749C: movss xmm4, dword ptr [eax + 8] */
    _xmm[4].u64[1] = MEM64(eax); /* 0x172174A1: movhps xmm4, qword ptr [eax] */
    eax = MEM32(ebp + 0x18); /* 0x172174A4: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x172174A7: mulps xmm4, xmm0 */
    _xmm[5].u64[0] = MEM32(ecx + 0x8); _xmm[5].u64[1] = 0; /* 0x172174AA: movss xmm5, dword ptr [ecx + 8] */
    _xmm[5].u64[1] = MEM64(ecx); /* 0x172174AF: movhps xmm5, qword ptr [ecx] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x172174B2: mulps xmm5, xmm1 */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x172174B5: movss xmm6, dword ptr [edx + 8] */
    _xmm[6].u64[1] = MEM64(edx); /* 0x172174BA: movhps xmm6, qword ptr [edx] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172174BD: addps xmm4, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x172174C0: mulps xmm6, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172174C3: addps xmm4, xmm6 */
    _xmm[7].u64[0] = MEM32(eax + 0x8); _xmm[7].u64[1] = 0; /* 0x172174C6: movss xmm7, dword ptr [eax + 8] */
    _xmm[7].u64[1] = MEM64(eax); /* 0x172174CB: movhps xmm7, qword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x172174CE: mov ecx, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x172174D1: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172174D4: addps xmm4, xmm7 */
    MEM64(ecx) = _xmm[4].u64[1]; /* 0x172174D7: movhps qword ptr [ecx], xmm4 */
    MEM32(ecx + 0x8) = _xmm[4].u32[0]; /* 0x172174DA: movss dword ptr [ecx + 8], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x172174DF: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x172174E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x172174E3: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_172174EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172174EBu);

L_172174EB:
    edi = edi; /* 0x172174EB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172174ED: push ebp */
    ebp = esp; /* 0x172174EE: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x172174F0: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x172174F5: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x172174F9: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x172174FD: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17217501: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x17217505: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217509: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C2B0)); float _s1 = sse_f32(MEM32(0x1723C2B0 + 4)); float _s2 = sse_f32(MEM32(0x1723C2B0 + 8)); float _s3 = sse_f32(MEM32(0x1723C2B0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721750D: mulps xmm0, xmmword ptr [0x1723c2b0] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x17217514: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C2A0)); float _s1 = sse_f32(MEM32(0x1723C2A0 + 4)); float _s2 = sse_f32(MEM32(0x1723C2A0 + 8)); float _s3 = sse_f32(MEM32(0x1723C2A0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17217518: mulps xmm1, xmmword ptr [0x1723c2a0] */
    { float _s0 = sse_f32(MEM32(0x1723C2C0)); float _s1 = sse_f32(MEM32(0x1723C2C0 + 4)); float _s2 = sse_f32(MEM32(0x1723C2C0 + 8)); float _s3 = sse_f32(MEM32(0x1723C2C0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721751F: addps xmm0, xmmword ptr [0x1723c2c0] */
    { float _s0 = sse_f32(MEM32(0x1723C290)); float _s1 = sse_f32(MEM32(0x1723C290 + 4)); float _s2 = sse_f32(MEM32(0x1723C290 + 8)); float _s3 = sse_f32(MEM32(0x1723C290 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217526: mulps xmm2, xmmword ptr [0x1723c290] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721752D: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217530: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x17217533: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x17217536: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x17217539: mov edx, dword ptr [ebp + 0x14] */
    _xmm[2] = _xmm[0]; /* 0x1721753C: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1721753F: shufps xmm2, xmm0, 0xfa */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x17217543: shufps xmm0, xmm0, 0x50 */
    _xmm[4].u64[0] = MEM64(eax); /* 0x17217547: movlps xmm4, qword ptr [eax] */
    _xmm[4].u64[1] = MEM64(ecx); /* 0x1721754A: movhps xmm4, qword ptr [ecx] */
    eax = MEM32(ebp + 0x18); /* 0x1721754D: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17217550: mulps xmm4, xmm0 */
    _xmm[6].u64[0] = MEM64(edx); /* 0x17217553: movlps xmm6, qword ptr [edx] */
    _xmm[6].u64[1] = MEM64(eax); /* 0x17217556: movhps xmm6, qword ptr [eax] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17217559: mulps xmm6, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x1721755C: addps xmm4, xmm6 */
    _xmm[6].u64[0] = _xmm[4].u64[1]; /* 0x1721755F: movhlps xmm6, xmm4 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17217562: addps xmm4, xmm6 */
    ecx = MEM32(ebp + 0x8); /* 0x17217565: mov ecx, dword ptr [ebp + 8] */
    MEM64(ecx) = _xmm[4].u64[0]; /* 0x17217568: movlps qword ptr [ecx], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x1721756B: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1721756E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721756F: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17217577(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217577u);

L_17217577:
    edi = edi; /* 0x17217577: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17217579: push ebp */
    ebp = esp; /* 0x1721757A: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x1721757C: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x17217581: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x17217585: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x17217589: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1721758D: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x17217591: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217595: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C2B0)); float _s1 = sse_f32(MEM32(0x1723C2B0 + 4)); float _s2 = sse_f32(MEM32(0x1723C2B0 + 8)); float _s3 = sse_f32(MEM32(0x1723C2B0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217599: mulps xmm0, xmmword ptr [0x1723c2b0] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x172175A0: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C2A0)); float _s1 = sse_f32(MEM32(0x1723C2A0 + 4)); float _s2 = sse_f32(MEM32(0x1723C2A0 + 8)); float _s3 = sse_f32(MEM32(0x1723C2A0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x172175A4: mulps xmm1, xmmword ptr [0x1723c2a0] */
    { float _s0 = sse_f32(MEM32(0x1723C2C0)); float _s1 = sse_f32(MEM32(0x1723C2C0 + 4)); float _s2 = sse_f32(MEM32(0x1723C2C0 + 8)); float _s3 = sse_f32(MEM32(0x1723C2C0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x172175AB: addps xmm0, xmmword ptr [0x1723c2c0] */
    { float _s0 = sse_f32(MEM32(0x1723C290)); float _s1 = sse_f32(MEM32(0x1723C290 + 4)); float _s2 = sse_f32(MEM32(0x1723C290 + 8)); float _s3 = sse_f32(MEM32(0x1723C290 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x172175B2: mulps xmm2, xmmword ptr [0x1723c290] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x172175B9: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x172175BC: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x172175BF: mov eax, dword ptr [ebp + 0xc] */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x172175C2: xorps xmm4, xmm4 */
    ecx = MEM32(ebp + 0x10); /* 0x172175C5: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x172175C8: mov edx, dword ptr [ebp + 0x14] */
    _xmm[1] = _xmm[0]; /* 0x172175CB: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x172175CE: shufps xmm1, xmm0, 0x55 */
    _xmm[2] = _xmm[0]; /* 0x172175D2: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x172175D5: shufps xmm2, xmm0, 0xaa */
    _xmm[3] = _xmm[0]; /* 0x172175D9: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x172175DC: shufps xmm3, xmm0, 0xff */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x172175E0: xorps xmm5, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x172175E3: shufps xmm0, xmm0, 0 */
    _xmm[4] = xmm_ld(eax); /* 0x172175E7: movups xmm4, xmmword ptr [eax] */
    eax = MEM32(ebp + 0x18); /* 0x172175EA: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x172175ED: mulps xmm4, xmm0 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x172175F0: xorps xmm6, xmm6 */
    _xmm[5] = xmm_ld(ecx); /* 0x172175F3: movups xmm5, xmmword ptr [ecx] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x172175F6: mulps xmm5, xmm1 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x172175F9: xorps xmm7, xmm7 */
    _xmm[6] = xmm_ld(edx); /* 0x172175FC: movups xmm6, xmmword ptr [edx] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172175FF: addps xmm4, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17217602: mulps xmm6, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17217605: addps xmm4, xmm6 */
    _xmm[7] = xmm_ld(eax); /* 0x17217608: movups xmm7, xmmword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x1721760B: mov ecx, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721760E: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17217611: addps xmm4, xmm7 */
    xmm_st(ecx, _xmm[4]); /* 0x17217614: movups xmmword ptr [ecx], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x17217617: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1721761A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721761B: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17217623(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217623u);

L_17217623:
    edi = edi; /* 0x17217623: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17217625: push ebp */
    ebp = esp; /* 0x17217626: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x17217628: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x1721762D: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x17217631: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x17217635: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17217639: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x1721763D: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217641: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C270)); float _s1 = sse_f32(MEM32(0x1723C270 + 4)); float _s2 = sse_f32(MEM32(0x1723C270 + 8)); float _s3 = sse_f32(MEM32(0x1723C270 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217645: mulps xmm0, xmmword ptr [0x1723c270] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1721764C: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C260)); float _s1 = sse_f32(MEM32(0x1723C260 + 4)); float _s2 = sse_f32(MEM32(0x1723C260 + 8)); float _s3 = sse_f32(MEM32(0x1723C260 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17217650: mulps xmm1, xmmword ptr [0x1723c260] */
    { float _s = sse_f32(MEM32(0x1723C280)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17217657: addss xmm0, dword ptr [0x1723c280] */
    { float _s0 = sse_f32(MEM32(0x1723C250)); float _s1 = sse_f32(MEM32(0x1723C250 + 4)); float _s2 = sse_f32(MEM32(0x1723C250 + 8)); float _s3 = sse_f32(MEM32(0x1723C250 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721765F: mulps xmm2, xmmword ptr [0x1723c250] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217666: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217669: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x1721766C: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1721766F: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x17217672: mov edx, dword ptr [ebp + 0x14] */
    _xmm[1] = _xmm[0]; /* 0x17217675: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17217678: shufps xmm1, xmm0, 0x55 */
    _xmm[2] = _xmm[0]; /* 0x1721767C: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x1721767F: shufps xmm2, xmm0, 0xaa */
    _xmm[3] = _xmm[0]; /* 0x17217683: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x17217686: shufps xmm3, xmm0, 0xff */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1721768A: shufps xmm0, xmm0, 0 */
    _xmm[4].u64[0] = MEM32(eax + 0x8); _xmm[4].u64[1] = 0; /* 0x1721768E: movss xmm4, dword ptr [eax + 8] */
    _xmm[4].u64[1] = MEM64(eax); /* 0x17217693: movhps xmm4, qword ptr [eax] */
    eax = MEM32(ebp + 0x18); /* 0x17217696: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17217699: mulps xmm4, xmm0 */
    _xmm[5].u64[0] = MEM32(ecx + 0x8); _xmm[5].u64[1] = 0; /* 0x1721769C: movss xmm5, dword ptr [ecx + 8] */
    _xmm[5].u64[1] = MEM64(ecx); /* 0x172176A1: movhps xmm5, qword ptr [ecx] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x172176A4: mulps xmm5, xmm1 */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x172176A7: movss xmm6, dword ptr [edx + 8] */
    _xmm[6].u64[1] = MEM64(edx); /* 0x172176AC: movhps xmm6, qword ptr [edx] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172176AF: addps xmm4, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x172176B2: mulps xmm6, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172176B5: addps xmm4, xmm6 */
    _xmm[7].u64[0] = MEM32(eax + 0x8); _xmm[7].u64[1] = 0; /* 0x172176B8: movss xmm7, dword ptr [eax + 8] */
    _xmm[7].u64[1] = MEM64(eax); /* 0x172176BD: movhps xmm7, qword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x172176C0: mov ecx, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x172176C3: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172176C6: addps xmm4, xmm7 */
    MEM64(ecx) = _xmm[4].u64[1]; /* 0x172176C9: movhps qword ptr [ecx], xmm4 */
    MEM32(ecx + 0x8) = _xmm[4].u32[0]; /* 0x172176CC: movss dword ptr [ecx + 8], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x172176D1: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x172176D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x172176D5: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_172176DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172176DDu);

L_172176DD:
    edi = edi; /* 0x172176DD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172176DF: push ebp */
    ebp = esp; /* 0x172176E0: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x172176E2: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x172176E7: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x172176EB: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x172176EF: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x172176F3: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x172176F7: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x172176FB: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C270)); float _s1 = sse_f32(MEM32(0x1723C270 + 4)); float _s2 = sse_f32(MEM32(0x1723C270 + 8)); float _s3 = sse_f32(MEM32(0x1723C270 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x172176FF: mulps xmm0, xmmword ptr [0x1723c270] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x17217706: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C260)); float _s1 = sse_f32(MEM32(0x1723C260 + 4)); float _s2 = sse_f32(MEM32(0x1723C260 + 8)); float _s3 = sse_f32(MEM32(0x1723C260 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721770A: mulps xmm1, xmmword ptr [0x1723c260] */
    { float _s = sse_f32(MEM32(0x1723C280)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17217711: addss xmm0, dword ptr [0x1723c280] */
    { float _s0 = sse_f32(MEM32(0x1723C250)); float _s1 = sse_f32(MEM32(0x1723C250 + 4)); float _s2 = sse_f32(MEM32(0x1723C250 + 8)); float _s3 = sse_f32(MEM32(0x1723C250 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217719: mulps xmm2, xmmword ptr [0x1723c250] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217720: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217723: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x17217726: mov eax, dword ptr [ebp + 0xc] */
    _xmm[1] = _xmm[0]; /* 0x17217729: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x1721772C: shufps xmm1, xmm0, 0x55 */
    _xmm[2] = _xmm[0]; /* 0x17217730: movaps xmm2, xmm0 */
    ecx = MEM32(ebp + 0x10); /* 0x17217733: mov ecx, dword ptr [ebp + 0x10] */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x17217736: shufps xmm2, xmm0, 0xaa */
    _xmm[3] = _xmm[0]; /* 0x1721773A: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x1721773D: shufps xmm3, xmm0, 0xff */
    edx = MEM32(ebp + 0x14); /* 0x17217741: mov edx, dword ptr [ebp + 0x14] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17217744: shufps xmm0, xmm0, 0 */
    _xmm[4] = xmm_ld(eax); /* 0x17217748: movups xmm4, xmmword ptr [eax] */
    eax = MEM32(ebp + 0x18); /* 0x1721774B: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1721774E: mulps xmm4, xmm0 */
    _xmm[5] = xmm_ld(ecx); /* 0x17217751: movups xmm5, xmmword ptr [ecx] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17217754: mulps xmm5, xmm1 */
    _xmm[6] = xmm_ld(edx); /* 0x17217757: movups xmm6, xmmword ptr [edx] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x1721775A: addps xmm4, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721775D: mulps xmm6, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17217760: addps xmm4, xmm6 */
    _xmm[7] = xmm_ld(eax); /* 0x17217763: movups xmm7, xmmword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x17217766: mov ecx, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17217769: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x1721776C: addps xmm4, xmm7 */
    xmm_st(ecx, _xmm[4]); /* 0x1721776F: movups xmmword ptr [ecx], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x17217772: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17217775: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17217776: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721777E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721777Eu);

L_1721777E:
    edi = edi; /* 0x1721777E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17217780: push ebp */
    ebp = esp; /* 0x17217781: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x17217783: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x17217788: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1721778C: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x17217790: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17217794: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x17217798: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1721779C: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C270)); float _s1 = sse_f32(MEM32(0x1723C270 + 4)); float _s2 = sse_f32(MEM32(0x1723C270 + 8)); float _s3 = sse_f32(MEM32(0x1723C270 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x172177A0: mulps xmm0, xmmword ptr [0x1723c270] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x172177A7: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x1723C260)); float _s1 = sse_f32(MEM32(0x1723C260 + 4)); float _s2 = sse_f32(MEM32(0x1723C260 + 8)); float _s3 = sse_f32(MEM32(0x1723C260 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x172177AB: mulps xmm1, xmmword ptr [0x1723c260] */
    { float _s = sse_f32(MEM32(0x1723C280)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x172177B2: addss xmm0, dword ptr [0x1723c280] */
    { float _s0 = sse_f32(MEM32(0x1723C250)); float _s1 = sse_f32(MEM32(0x1723C250 + 4)); float _s2 = sse_f32(MEM32(0x1723C250 + 8)); float _s3 = sse_f32(MEM32(0x1723C250 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x172177BA: mulps xmm2, xmmword ptr [0x1723c250] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x172177C1: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x172177C4: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x172177C7: mov eax, dword ptr [ebp + 0xc] */
    _xmm[2] = _xmm[0]; /* 0x172177CA: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x172177CD: shufps xmm2, xmm0, 0xfa */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x172177D1: shufps xmm0, xmm0, 0x50 */
    ecx = MEM32(ebp + 0x10); /* 0x172177D5: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x172177D8: mov edx, dword ptr [ebp + 0x14] */
    _xmm[4].u64[0] = MEM64(eax); /* 0x172177DB: movlps xmm4, qword ptr [eax] */
    _xmm[4].u64[1] = MEM64(ecx); /* 0x172177DE: movhps xmm4, qword ptr [ecx] */
    eax = MEM32(ebp + 0x18); /* 0x172177E1: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x172177E4: mulps xmm4, xmm0 */
    _xmm[6].u64[0] = MEM64(edx); /* 0x172177E7: movlps xmm6, qword ptr [edx] */
    _xmm[6].u64[1] = MEM64(eax); /* 0x172177EA: movhps xmm6, qword ptr [eax] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x172177ED: mulps xmm6, xmm2 */
    ecx = MEM32(ebp + 0x8); /* 0x172177F0: mov ecx, dword ptr [ebp + 8] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172177F3: addps xmm4, xmm6 */
    _xmm[3].u64[0] = _xmm[4].u64[1]; /* 0x172177F6: movhlps xmm3, xmm4 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172177F9: addps xmm4, xmm3 */
    MEM64(ecx) = _xmm[4].u64[0]; /* 0x172177FC: movlps qword ptr [ecx], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x172177FF: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17217802: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17217803: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721780B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721780Bu);

L_1721780B:
    edi = edi; /* 0x1721780B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1721780D: push ebp */
    ebp = esp; /* 0x1721780E: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x18); _xmm[0].u64[1] = 0; /* 0x17217810: movss xmm0, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x17217815: mov eax, dword ptr [ebp + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17217818: shufps xmm0, xmm0, 0 */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x1721781C: movss xmm2, dword ptr [eax + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x17217821: mov ecx, dword ptr [ebp + 0x10] */
    _xmm[2].u64[1] = MEM64(eax); /* 0x17217824: movhps xmm2, qword ptr [eax] */
    _xmm[1].u64[0] = MEM32(ebp + 0x1C); _xmm[1].u64[1] = 0; /* 0x17217827: movss xmm1, dword ptr [ebp + 0x1c] */
    _xmm[3].u64[0] = MEM32(ecx + 0x8); _xmm[3].u64[1] = 0; /* 0x1721782C: movss xmm3, dword ptr [ecx + 8] */
    _xmm[3].u64[1] = MEM64(ecx); /* 0x17217831: movhps xmm3, qword ptr [ecx] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217834: shufps xmm1, xmm1, 0 */
    eax = MEM32(ebp + 0x14); /* 0x17217838: mov eax, dword ptr [ebp + 0x14] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x1721783B: subps xmm3, xmm2 */
    _xmm[4].u64[0] = MEM32(eax + 0x8); _xmm[4].u64[1] = 0; /* 0x1721783E: movss xmm4, dword ptr [eax + 8] */
    _xmm[4].u64[1] = MEM64(eax); /* 0x17217843: movhps xmm4, qword ptr [eax] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217846: mulps xmm3, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x17217849: subps xmm4, xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x1721784C: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1721784F: addps xmm3, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17217852: mulps xmm4, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17217855: addps xmm3, xmm4 */
    MEM32(eax + 0x8) = _xmm[3].u32[0]; /* 0x17217858: movss dword ptr [eax + 8], xmm3 */
    MEM64(eax) = _xmm[3].u64[1]; /* 0x1721785D: movhps qword ptr [eax], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x17217860: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17217863: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17217864: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721786C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721786Cu);

L_1721786C:
    edi = edi; /* 0x1721786C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1721786E: push ebp */
    ebp = esp; /* 0x1721786F: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x18); _xmm[0].u64[1] = 0; /* 0x17217871: movss xmm0, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x17217876: mov eax, dword ptr [ebp + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17217879: shufps xmm0, xmm0, 0 */
    ecx = MEM32(ebp + 0x10); /* 0x1721787D: mov ecx, dword ptr [ebp + 0x10] */
    _xmm[2] = xmm_ld(eax); /* 0x17217880: movups xmm2, xmmword ptr [eax] */
    _xmm[1].u64[0] = MEM32(ebp + 0x1C); _xmm[1].u64[1] = 0; /* 0x17217883: movss xmm1, dword ptr [ebp + 0x1c] */
    _xmm[3] = xmm_ld(ecx); /* 0x17217888: movups xmm3, xmmword ptr [ecx] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x1721788B: shufps xmm1, xmm1, 0 */
    eax = MEM32(ebp + 0x14); /* 0x1721788F: mov eax, dword ptr [ebp + 0x14] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x17217892: subps xmm3, xmm2 */
    _xmm[4] = xmm_ld(eax); /* 0x17217895: movups xmm4, xmmword ptr [eax] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217898: mulps xmm3, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x1721789B: subps xmm4, xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x1721789E: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x172178A1: addps xmm3, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x172178A4: mulps xmm4, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x172178A7: addps xmm3, xmm4 */
    xmm_st(eax, _xmm[3]); /* 0x172178AA: movups xmmword ptr [eax], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x172178AD: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x172178B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x172178B1: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_172178B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172178B9u);

L_172178B9:
    edi = edi; /* 0x172178B9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172178BB: push ebp */
    ebp = esp; /* 0x172178BC: mov ebp, esp */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x172178BE: xorps xmm2, xmm2 */
    _xmm[0].u64[0] = MEM32(ebp + 0x18); _xmm[0].u64[1] = 0; /* 0x172178C1: movss xmm0, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x172178C6: mov eax, dword ptr [ebp + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x172178C9: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x172178CD: xorps xmm3, xmm3 */
    ecx = MEM32(ebp + 0x10); /* 0x172178D0: mov ecx, dword ptr [ebp + 0x10] */
    _xmm[2].u64[1] = MEM64(eax); /* 0x172178D3: movhps xmm2, qword ptr [eax] */
    _xmm[1].u64[0] = MEM32(ebp + 0x1C); _xmm[1].u64[1] = 0; /* 0x172178D6: movss xmm1, dword ptr [ebp + 0x1c] */
    _xmm[3].u64[1] = MEM64(ecx); /* 0x172178DB: movhps xmm3, qword ptr [ecx] */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x172178DE: xorps xmm4, xmm4 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x172178E1: shufps xmm1, xmm1, 0 */
    eax = MEM32(ebp + 0x14); /* 0x172178E5: mov eax, dword ptr [ebp + 0x14] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x172178E8: subps xmm3, xmm2 */
    _xmm[4].u64[1] = MEM64(eax); /* 0x172178EB: movhps xmm4, qword ptr [eax] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x172178EE: mulps xmm3, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x172178F1: subps xmm4, xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x172178F4: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x172178F7: addps xmm3, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x172178FA: mulps xmm4, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x172178FD: addps xmm3, xmm4 */
    MEM64(eax) = _xmm[3].u64[1]; /* 0x17217900: movhps qword ptr [eax], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x17217903: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17217906: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17217907: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721790F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721790Fu);

L_1721790F:
    edi = edi; /* 0x1721790F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17217911: push ebp */
    ebp = esp; /* 0x17217912: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17217914: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x17217917: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebp + 0xC); /* 0x1721791A: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0] = xmm_ld(eax); /* 0x1721791D: movups xmm0, xmmword ptr [eax] */
    ecx = MEM32(ebp + 0x10); /* 0x17217920: mov ecx, dword ptr [ebp + 0x10] */
    _xmm[1].u64[0] = MEM32(ecx + 0x8); _xmm[1].u64[1] = 0; /* 0x17217923: movss xmm1, dword ptr [ecx + 8] */
    edx = MEM32(ebp + 0x14); /* 0x17217928: mov edx, dword ptr [ebp + 0x14] */
    _xmm[1].u64[1] = MEM64(ecx); /* 0x1721792B: movhps xmm1, qword ptr [ecx] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x1721792E: movss xmm2, dword ptr [edx + 8] */
    _xmm[4] = _xmm[0]; /* 0x17217933: movaps xmm4, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _d.u32[3]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x17217936: shufps xmm0, xmm0, 0x4e */
    _xmm[3] = _xmm[1]; /* 0x1721793A: movaps xmm3, xmm1 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[3]; _xmm[4].u32[1] = _d.u32[3]; _xmm[4].u32[2] = _s.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x1721793D: shufps xmm4, xmm4, 0xff */
    _xmm[2].u64[1] = MEM64(edx); /* 0x17217941: movhps xmm2, qword ptr [edx] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217944: mulps xmm3, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217947: mulps xmm0, xmm2 */
    _xmm[5].u64[0] = _xmm[3].u64[1]; /* 0x1721794A: movhlps xmm5, xmm3 */
    _xmm[6].u64[0] = _xmm[0].u64[1]; /* 0x1721794D: movhlps xmm6, xmm0 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17217950: addps xmm3, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217953: addps xmm0, xmm6 */
    { xmm_t _s = _xmm[3], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[1]; _xmm[5].u32[2] = _s.u32[1]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x17217956: shufps xmm5, xmm3, 0x55 */
    { xmm_t _s = _xmm[0], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[1]; _xmm[6].u32[2] = _s.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x1721795A: shufps xmm6, xmm0, 0x55 */
    { float _s = _xmm[5].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x1721795E: addss xmm3, xmm5 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17217962: addss xmm0, xmm6 */
    _xmm[5].u32[0] = _xmm[3].u32[0]; /* 0x17217966: movss xmm5, xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x1721796A: subss xmm5, xmm0 */
    { float _s = _xmm[4].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x1721796E: addss xmm3, xmm4 */
    _flag_a = SSE_COMI(_xmm[5].f32[0], sse_f32(MEM32(0x172548CC))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x17217972: comiss xmm5, dword ptr [0x172548cc] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_172179B1; /* 0x17217979: je 0x172179b1 */
L_1721797B:
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(1.0f / _s); } /* 0x1721797B: rcpss xmm0, xmm5 */
    _xmm[6].u32[0] = _xmm[0].u32[0]; /* 0x1721797F: movss xmm6, xmm0 */
    { float _s = _xmm[6].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] + _s); } /* 0x17217983: addss xmm6, xmm6 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x17217987: mulss xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x1721798B: mulss xmm5, xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] - _s); } /* 0x1721798F: subss xmm6, xmm5 */
    { float _s = _xmm[6].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x17217993: mulss xmm3, xmm6 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x17217997: shufps xmm3, xmm3, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x1721799B: subps xmm2, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721799E: mulps xmm3, xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x172179A1: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x172179A4: addps xmm1, xmm3 */
    MEM64(eax) = _xmm[1].u64[1]; /* 0x172179A7: movhps qword ptr [eax], xmm1 */
    MEM32(eax + 0x8) = _xmm[1].u32[0]; /* 0x172179AA: movss dword ptr [eax + 8], xmm1 */
    goto L_172179B8; /* 0x172179AF: jmp 0x172179b8 */
L_172179B1:
    MEM32(ebp + 0x8) = 0; /* 0x172179B1: mov dword ptr [ebp + 8], 0 */
L_172179B8:
    eax = MEM32(ebp + 0x8); /* 0x172179B8: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x172179BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x172179BC: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_172179C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172179C4u);

L_172179C4:
    edi = edi; /* 0x172179C4: mov edi, edi */
    PUSH32(esp, ebx); /* 0x172179C6: push ebx */
    ebx = esp; /* 0x172179C7: mov ebx, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x172179C9: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x172179CC: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x172179CF: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x172179D2: push ebp */
    PUSH32(esp, ebp); /* 0x172179D3: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x172179D4: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x172179D7: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x172179DB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x172179DD: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0xC); /* 0x172179E0: mov edx, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x14); /* 0x172179E3: mov ecx, dword ptr [ebx + 0x14] */
    _xmm[0].u64[0] = MEM32(edx + 0x8); _xmm[0].u64[1] = 0; /* 0x172179E6: movss xmm0, dword ptr [edx + 8] */
    _xmm[1].u64[0] = MEM32(ecx + 0x8); _xmm[1].u64[1] = 0; /* 0x172179EB: movss xmm1, dword ptr [ecx + 8] */
    _xmm[0].u64[1] = MEM64(edx); /* 0x172179F0: movhps xmm0, qword ptr [edx] */
    _xmm[1].u64[1] = MEM64(ecx); /* 0x172179F3: movhps xmm1, qword ptr [ecx] */
    edx = MEM32(ebx + 0x10); /* 0x172179F6: mov edx, dword ptr [ebx + 0x10] */
    eax = MEM32(ebx + 0x8); /* 0x172179F9: mov eax, dword ptr [ebx + 8] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x172179FC: movss xmm2, dword ptr [edx + 8] */
    _xmm[2].u64[1] = MEM64(edx); /* 0x17217A01: movhps xmm2, qword ptr [edx] */
    _xmm[3] = _xmm[0]; /* 0x17217A04: movaps xmm3, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x17217A07: subps xmm0, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x17217A0A: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x17217A0D: shufps xmm0, xmm0, 0x78 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[2]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17217A11: shufps xmm1, xmm1, 0x63 */
    _xmm[4] = _xmm[3]; /* 0x17217A15: movaps xmm4, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x17217A18: subps xmm3, xmm2 */
    _xmm[2] = xmm_ld(0x1702A690); /* 0x17217A1B: movaps xmm2, xmmword ptr [0x1702a690] */
    _xmm[5] = _xmm[3]; /* 0x17217A22: movaps xmm5, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[2]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17217A25: shufps xmm3, xmm3, 0x63 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[3]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x17217A29: shufps xmm5, xmm5, 0x78 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217A2D: mulps xmm0, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17217A30: mulps xmm5, xmm1 */
    _xmm[1] = xmm_ld(0x1702A6A0); /* 0x17217A33: movaps xmm1, xmmword ptr [0x1702a6a0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x17217A3A: subps xmm0, xmm5 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _d.u32[3]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x17217A3D: shufps xmm4, xmm4, 0xe */
    _xmm[3] = _xmm[0]; /* 0x17217A41: movaps xmm3, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217A44: mulps xmm0, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x17217A47: movaps xmm5, xmm0 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x17217A4A: movhlps xmm0, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17217A4D: addps xmm5, xmm0 */
    _xmm[0] = _xmm[5]; /* 0x17217A50: movaps xmm0, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x17217A53: shufps xmm5, xmm5, 1 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17217A57: addss xmm0, xmm5 */
    _xmm[5] = _xmm[0]; /* 0x17217A5B: movaps xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x17217A5E: rsqrtss xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x17217A62: mulss xmm1, xmm0 */
    _xmm[6] = _xmm[5]; /* 0x17217A66: movaps xmm6, xmm5 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x17217A69: mulss xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x17217A6D: mulss xmm5, xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x17217A71: subss xmm2, xmm5 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x17217A75: mulss xmm1, xmm2 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217A79: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217A7D: mulps xmm3, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17217A80: mulps xmm4, xmm3 */
    xmm_st(eax, _xmm[3]); /* 0x17217A83: movups xmmword ptr [eax], xmm3 */
    _xmm[6].u64[0] = _xmm[4].u64[1]; /* 0x17217A86: movhlps xmm6, xmm4 */
    _xmm[0] = _xmm[4]; /* 0x17217A89: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[1]; _xmm[4].u32[2] = _s.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x17217A8C: shufps xmm4, xmm4, 0x55 */
    { float _s = _xmm[4].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] + _s); } /* 0x17217A90: addss xmm6, xmm4 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17217A94: addss xmm0, xmm6 */
    { xmm_t _s = xmm_ld(0x1723C2D0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x17217A98: xorps xmm0, xmmword ptr [0x1723c2d0] */
    MEM32(eax + 0xC) = _xmm[0].u32[0]; /* 0x17217A9F: movss dword ptr [eax + 0xc], xmm0 */
    esp = ebp; /* 0x17217AA4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17217AA6: pop ebp */
    esp = ebx; /* 0x17217AA7: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17217AA9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17217AAA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17217AB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217AB5u);

L_17217AB5:
    edi = edi; /* 0x17217AB5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17217AB7: push ebp */
    ebp = esp; /* 0x17217AB8: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17217ABA: push ebx */
    eax = MEM32(ebp + 0x10); /* 0x17217ABB: mov eax, dword ptr [ebp + 0x10] */
    _xmm[1] = xmm_ld(eax); /* 0x17217ABE: movups xmm1, xmmword ptr [eax] */
    _xmm[2] = _xmm[1]; /* 0x17217AC1: movaps xmm2, xmm1 */
    ebx = 0x1723C3D0; /* 0x17217AC4: lea ebx, [0x1723c3d0] */
    { xmm_t _s = xmm_ld(ebx + 0x40); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x17217ACA: andps xmm2, xmmword ptr [ebx + 0x40] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217ACE: mulps xmm2, xmm2 */
    _xmm[3].u64[0] = _xmm[2].u64[1]; /* 0x17217AD1: movhlps xmm3, xmm2 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17217AD4: addps xmm3, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x17217AD7: movaps xmm2, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x17217ADA: shufps xmm2, xmm2, 1 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x17217ADE: addss xmm2, xmm3 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x17217AE2: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x17217AE5: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_17217B1B; /* 0x17217AE8: je 0x17217b1b */
L_17217AEA:
    _xmm[6] = _xmm[2]; /* 0x17217AEA: movaps xmm6, xmm2 */
    { float _s = _xmm[6].f32[0]; _xmm[2].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x17217AED: rsqrtss xmm2, xmm6 */
    _xmm[3] = _xmm[2]; /* 0x17217AF1: movaps xmm3, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x17217AF4: mulss xmm6, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x17217AF8: mulss xmm6, xmm2 */
    { float _s = sse_f32(MEM32(0x1702A6A0)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x17217AFC: mulss xmm2, dword ptr [0x1702a6a0] */
    _xmm[3].u64[0] = MEM32(0x1702A690); _xmm[3].u64[1] = 0; /* 0x17217B04: movss xmm3, dword ptr [0x1702a690] */
    { float _s = _xmm[6].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x17217B0C: subss xmm3, xmm6 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x17217B10: mulss xmm2, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x17217B14: shufps xmm2, xmm2, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217B18: mulps xmm2, xmm1 */
L_17217B1B:
    ecx = MEM32(ebp + 0xC); /* 0x17217B1B: mov ecx, dword ptr [ebp + 0xc] */
    _xmm[4] = xmm_ld(ecx); /* 0x17217B1E: movups xmm4, xmmword ptr [ecx] */
    _xmm[5] = _xmm[4]; /* 0x17217B21: movaps xmm5, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17217B24: mulps xmm5, xmm2 */
    _xmm[3].u64[0] = _xmm[5].u64[1]; /* 0x17217B27: movhlps xmm3, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17217B2A: addps xmm5, xmm3 */
    _xmm[3] = _xmm[5]; /* 0x17217B2D: movaps xmm3, xmm5 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x17217B30: shufps xmm3, xmm3, 1 */
    { float _s = _xmm[3].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x17217B34: addss xmm5, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x17217B38: shufps xmm5, xmm5, 0 */
    { xmm_t _s = xmm_ld(ebx); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x17217B3C: xorps xmm2, xmmword ptr [ebx] */
    _xmm[0] = _xmm[2]; /* 0x17217B3F: movaps xmm0, xmm2 */
    _xmm[1] = _xmm[2]; /* 0x17217B42: movaps xmm1, xmm2 */
    _xmm[3] = _xmm[2]; /* 0x17217B45: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17217B48: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17217B4C: shufps xmm1, xmm1, 0x55 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x17217B50: shufps xmm2, xmm2, 0xaa */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x17217B54: shufps xmm3, xmm3, 0xff */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217B58: mulps xmm0, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17217B5B: mulps xmm1, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217B5E: mulps xmm2, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217B61: mulps xmm3, xmm4 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17217B64: addss xmm0, xmm5 */
    _xmm[6] = _xmm[5]; /* 0x17217B68: movaps xmm6, xmm5 */
    _xmm[7] = _xmm[5]; /* 0x17217B6B: movaps xmm7, xmm5 */
    { xmm_t _s = xmm_ld(ebx + 0x10); for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x17217B6E: andps xmm5, xmmword ptr [ebx + 0x10] */
    { xmm_t _s = xmm_ld(ebx + 0x20); for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] & _s.u32[_k]; } /* 0x17217B72: andps xmm6, xmmword ptr [ebx + 0x20] */
    { xmm_t _s = xmm_ld(ebx + 0x30); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x17217B76: andps xmm7, xmmword ptr [ebx + 0x30] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x17217B7A: addps xmm1, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17217B7D: addps xmm2, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17217B80: addps xmm3, xmm7 */
    edx = MEM32(ebp + 0x8); /* 0x17217B83: mov edx, dword ptr [ebp + 8] */
    MEM64(edx) = _xmm[0].u64[0]; /* 0x17217B86: movlps qword ptr [edx], xmm0 */
    MEM64(edx + 0x8) = _xmm[0].u64[1]; /* 0x17217B89: movhps qword ptr [edx + 8], xmm0 */
    MEM64(edx + 0x10) = _xmm[1].u64[0]; /* 0x17217B8D: movlps qword ptr [edx + 0x10], xmm1 */
    MEM64(edx + 0x18) = _xmm[1].u64[1]; /* 0x17217B91: movhps qword ptr [edx + 0x18], xmm1 */
    MEM64(edx + 0x20) = _xmm[2].u64[0]; /* 0x17217B95: movlps qword ptr [edx + 0x20], xmm2 */
    MEM64(edx + 0x28) = _xmm[2].u64[1]; /* 0x17217B99: movhps qword ptr [edx + 0x28], xmm2 */
    MEM64(edx + 0x30) = _xmm[3].u64[0]; /* 0x17217B9D: movlps qword ptr [edx + 0x30], xmm3 */
    MEM64(edx + 0x38) = _xmm[3].u64[1]; /* 0x17217BA1: movhps qword ptr [edx + 0x38], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x17217BA5: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x17217BA8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17217BA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17217BAA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17217BB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217BB2u);

L_17217BB2:
    edi = edi; /* 0x17217BB2: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17217BB4: push ebx */
    ebx = esp; /* 0x17217BB5: mov ebx, esp */
    PUSH32(esp, ebp); /* 0x17217BB7: push ebp */
    PUSH32(esp, ebp); /* 0x17217BB8: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17217BB9: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17217BBC: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17217BC0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17217BC2: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0xC); /* 0x17217BC5: mov edx, dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x8); /* 0x17217BC8: mov eax, dword ptr [ebx + 8] */
    _xmm[0].u64[1] = MEM64(edx + 0x8); /* 0x17217BCB: movhps xmm0, qword ptr [edx + 8] */
    _xmm[0].u64[0] = MEM64(edx); /* 0x17217BCF: movlps xmm0, qword ptr [edx] */
    _xmm[1] = xmm_ld(0x1723C2E0); /* 0x17217BD2: movaps xmm1, xmmword ptr [0x1723c2e0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x17217BD9: andps xmm1, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17217BDC: mulps xmm1, xmm1 */
    _xmm[2].u64[0] = MEM32(0x1702A690); _xmm[2].u64[1] = 0; /* 0x17217BDF: movss xmm2, dword ptr [0x1702a690] */
    _xmm[3].u64[0] = MEM32(0x1702A6A0); _xmm[3].u64[1] = 0; /* 0x17217BE7: movss xmm3, dword ptr [0x1702a6a0] */
    _xmm[4] = _xmm[1]; /* 0x17217BEF: movaps xmm4, xmm1 */
    _xmm[1].u64[0] = _xmm[1].u64[1]; /* 0x17217BF2: movhlps xmm1, xmm1 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17217BF5: addps xmm4, xmm1 */
    _xmm[1] = _xmm[4]; /* 0x17217BF8: movaps xmm1, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x17217BFB: shufps xmm4, xmm4, 1 */
    { float _s = _xmm[4].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x17217BFF: addss xmm1, xmm4 */
    _xmm[4] = xmm_ld(0x1723C2F0); /* 0x17217C03: movaps xmm4, xmmword ptr [0x1723c2f0] */
    _xmm[5] = _xmm[1]; /* 0x17217C0A: movaps xmm5, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x17217C0D: rsqrtss xmm1, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x17217C11: mulss xmm5, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x17217C15: mulss xmm5, xmm1 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x17217C19: subss xmm2, xmm5 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x17217C1D: mulss xmm3, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x17217C21: mulss xmm3, xmm2 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x17217C25: shufps xmm3, xmm3, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217C29: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17217C2C: mulps xmm4, xmm0 */
    _xmm[1] = _xmm[0]; /* 0x17217C2F: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17217C32: shufps xmm0, xmm0, 0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217C36: mulps xmm0, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C330)); float _s1 = sse_f32(MEM32(0x1723C330 + 4)); float _s2 = sse_f32(MEM32(0x1723C330 + 8)); float _s3 = sse_f32(MEM32(0x1723C330 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217C39: addps xmm0, xmmword ptr [0x1723c330] */
    _xmm[2] = _xmm[1]; /* 0x17217C40: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x17217C43: shufps xmm1, xmm1, 0xff */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17217C47: mulps xmm1, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C300)); float _s1 = sse_f32(MEM32(0x1723C300 + 4)); float _s2 = sse_f32(MEM32(0x1723C300 + 8)); float _s3 = sse_f32(MEM32(0x1723C300 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x17217C4A: addps xmm1, xmmword ptr [0x1723c300] */
    _xmm[3] = _xmm[2]; /* 0x17217C51: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x17217C54: shufps xmm2, xmm2, 0xaa */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217C58: mulps xmm2, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C310)); float _s1 = sse_f32(MEM32(0x1723C310 + 4)); float _s2 = sse_f32(MEM32(0x1723C310 + 8)); float _s3 = sse_f32(MEM32(0x1723C310 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17217C5B: addps xmm2, xmmword ptr [0x1723c310] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[1]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17217C62: shufps xmm3, xmm3, 0x55 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17217C66: mulps xmm4, xmm3 */
    { float _s0 = sse_f32(MEM32(0x1723C320)); float _s1 = sse_f32(MEM32(0x1723C320 + 4)); float _s2 = sse_f32(MEM32(0x1723C320 + 8)); float _s3 = sse_f32(MEM32(0x1723C320 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17217C69: addps xmm4, xmmword ptr [0x1723c320] */
    xmm_st(eax, _xmm[0]); /* 0x17217C70: movups xmmword ptr [eax], xmm0 */
    xmm_st(eax + 0x10, _xmm[4]); /* 0x17217C73: movups xmmword ptr [eax + 0x10], xmm4 */
    xmm_st(eax + 0x20, _xmm[2]); /* 0x17217C77: movups xmmword ptr [eax + 0x20], xmm2 */
    xmm_st(eax + 0x30, _xmm[1]); /* 0x17217C7B: movups xmmword ptr [eax + 0x30], xmm1 */
    esp = ebp; /* 0x17217C7F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17217C81: pop ebp */
    esp = ebx; /* 0x17217C82: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17217C84: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17217C85: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17217C8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217C8Fu);

L_17217C8F:
    edi = edi; /* 0x17217C8F: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17217C91: push ebx */
    ebx = esp; /* 0x17217C92: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17217C94: push ecx */
    PUSH32(esp, ecx); /* 0x17217C95: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17217C96: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17217C99: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17217C9C: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17217C9D: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17217CA0: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17217CA4: mov ebp, esp */
    eax = MEM32(ebx + 0x10); /* 0x17217CA6: mov eax, dword ptr [ebx + 0x10] */
    ecx = MEM32(ebx + 0xC); /* 0x17217CA9: mov ecx, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x17217CAC: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* test LO8(eax), 0xFu */ /* 0x17217CAF: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17217CF3; /* 0x17217CB1: jne 0x17217cf3 */
L_17217CB3:
    _xmm[1] = xmm_ld(ebp + (-0x20)); /* 0x17217CB3: movaps xmm1, xmmword ptr [ebp - 0x20] */
    _xmm[1].u64[0] = MEM64(ecx); /* 0x17217CB7: movlps xmm1, qword ptr [ecx] */
    ecx = MEM32(ecx + 0x8); /* 0x17217CBA: mov ecx, dword ptr [ecx + 8] */
    _xmm[2] = xmm_ld(eax + 0x20); /* 0x17217CBD: movaps xmm2, xmmword ptr [eax + 0x20] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17217CC1: mov dword ptr [ebp - 4], ecx */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x17217CC4: movss xmm0, dword ptr [ebp - 4] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17217CC9: shufps xmm0, xmm0, 0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217CCD: mulps xmm0, xmm2 */
    _xmm[2] = _xmm[0]; /* 0x17217CD0: movaps xmm2, xmm0 */
    _xmm[0] = xmm_ld(eax + 0x10); /* 0x17217CD3: movaps xmm0, xmmword ptr [eax + 0x10] */
    _xmm[3] = _xmm[1]; /* 0x17217CD7: movaps xmm3, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[1]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17217CDA: shufps xmm3, xmm1, 0x55 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217CDE: mulps xmm3, xmm0 */
    _xmm[0] = xmm_ld(eax); /* 0x17217CE1: movaps xmm0, xmmword ptr [eax] */
    _xmm[4] = _xmm[1]; /* 0x17217CE4: movaps xmm4, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x17217CE7: shufps xmm4, xmm1, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17217CEB: mulps xmm4, xmm0 */
    _xmm[0] = _xmm[4]; /* 0x17217CEE: movaps xmm0, xmm4 */
    goto L_17217D43; /* 0x17217CF1: jmp 0x17217d43 */
L_17217CF3:
    _xmm[0] = xmm_ld(ebp + (-0x20)); /* 0x17217CF3: movaps xmm0, xmmword ptr [ebp - 0x20] */
    _xmm[0].u64[0] = MEM64(ecx); /* 0x17217CF7: movlps xmm0, qword ptr [ecx] */
    ecx = MEM32(ecx + 0x8); /* 0x17217CFA: mov ecx, dword ptr [ecx + 8] */
    _xmm[2] = xmm_ld(ebp + (-0x20)); /* 0x17217CFD: movaps xmm2, xmmword ptr [ebp - 0x20] */
    _xmm[2].u64[0] = MEM64(eax + 0x20); /* 0x17217D01: movlps xmm2, qword ptr [eax + 0x20] */
    _xmm[2].u64[1] = MEM64(eax + 0x28); /* 0x17217D05: movhps xmm2, qword ptr [eax + 0x28] */
    _xmm[3] = xmm_ld(ebp + (-0x20)); /* 0x17217D09: movaps xmm3, xmmword ptr [ebp - 0x20] */
    _xmm[3].u64[0] = MEM64(eax + 0x10); /* 0x17217D0D: movlps xmm3, qword ptr [eax + 0x10] */
    _xmm[3].u64[1] = MEM64(eax + 0x18); /* 0x17217D11: movhps xmm3, qword ptr [eax + 0x18] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17217D15: mov dword ptr [ebp - 4], ecx */
    _xmm[1].u64[0] = MEM32(ebp + (-0x4)); _xmm[1].u64[1] = 0; /* 0x17217D18: movss xmm1, dword ptr [ebp - 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217D1D: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217D21: mulps xmm2, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x17217D24: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17217D27: shufps xmm1, xmm0, 0x55 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217D2B: mulps xmm3, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x17217D2E: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217D31: shufps xmm1, xmm0, 0 */
    _xmm[0] = xmm_ld(ebp + (-0x20)); /* 0x17217D35: movaps xmm0, xmmword ptr [ebp - 0x20] */
    _xmm[0].u64[0] = MEM64(eax); /* 0x17217D39: movlps xmm0, qword ptr [eax] */
    _xmm[0].u64[1] = MEM64(eax + 0x8); /* 0x17217D3C: movhps xmm0, qword ptr [eax + 8] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217D40: mulps xmm0, xmm1 */
L_17217D43:
    eax = MEM32(ebx + 0x8); /* 0x17217D43: mov eax, dword ptr [ebx + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217D46: addps xmm0, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217D49: addps xmm0, xmm2 */
    _xmm[1] = _xmm[0]; /* 0x17217D4C: movaps xmm1, xmm0 */
    _xmm[1].u64[0] = _xmm[0].u64[1]; /* 0x17217D4F: movhlps xmm1, xmm0 */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x17217D52: movlps qword ptr [eax], xmm0 */
    MEM32(eax + 0x8) = _xmm[1].u32[0]; /* 0x17217D55: movss dword ptr [eax + 8], xmm1 */
    esp = ebp; /* 0x17217D5A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17217D5C: pop ebp */
    esp = ebx; /* 0x17217D5D: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17217D5F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17217D60: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17217D68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217D68u);

L_17217D68:
    edi = edi; /* 0x17217D68: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17217D6A: push ebx */
    ebx = esp; /* 0x17217D6B: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17217D6D: push ecx */
    PUSH32(esp, ecx); /* 0x17217D6E: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17217D6F: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17217D72: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17217D75: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17217D76: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17217D79: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17217D7D: mov ebp, esp */
    ecx = MEM32(ebx + 0xC); /* 0x17217D7F: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x10); /* 0x17217D82: mov eax, dword ptr [ebx + 0x10] */
    _xmm[0] = xmm_ld(ebp + (-0x20)); /* 0x17217D85: movaps xmm0, xmmword ptr [ebp - 0x20] */
    _xmm[0].u64[0] = MEM64(ecx); /* 0x17217D89: movlps xmm0, qword ptr [ecx] */
    ecx = MEM32(ecx + 0x8); /* 0x17217D8C: mov ecx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x17217D8F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* test LO8(eax), 0xFu */ /* 0x17217D92: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17217DCA; /* 0x17217D94: jne 0x17217dca */
L_17217D96:
    _xmm[2] = xmm_ld(eax + 0x30); /* 0x17217D96: movaps xmm2, xmmword ptr [eax + 0x30] */
    _xmm[3] = xmm_ld(eax + 0x20); /* 0x17217D9A: movaps xmm3, xmmword ptr [eax + 0x20] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17217D9E: mov dword ptr [ebp - 4], ecx */
    _xmm[1].u64[0] = MEM32(ebp + (-0x4)); _xmm[1].u64[1] = 0; /* 0x17217DA1: movss xmm1, dword ptr [ebp - 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217DA6: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217DAA: mulps xmm3, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17217DAD: addps xmm3, xmm2 */
    _xmm[2] = xmm_ld(eax + 0x10); /* 0x17217DB0: movaps xmm2, xmmword ptr [eax + 0x10] */
    _xmm[1] = _xmm[0]; /* 0x17217DB4: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17217DB7: shufps xmm1, xmm0, 0x55 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217DBB: mulps xmm2, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x17217DBE: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217DC1: shufps xmm1, xmm0, 0 */
    _xmm[0] = xmm_ld(eax); /* 0x17217DC5: movaps xmm0, xmmword ptr [eax] */
    goto L_17217E1F; /* 0x17217DC8: jmp 0x17217e1f */
L_17217DCA:
    _xmm[1] = xmm_ld(ebp + (-0x20)); /* 0x17217DCA: movaps xmm1, xmmword ptr [ebp - 0x20] */
    _xmm[1].u64[0] = MEM64(eax + 0x30); /* 0x17217DCE: movlps xmm1, qword ptr [eax + 0x30] */
    _xmm[1].u64[1] = MEM64(eax + 0x38); /* 0x17217DD2: movhps xmm1, qword ptr [eax + 0x38] */
    _xmm[3] = xmm_ld(ebp + (-0x20)); /* 0x17217DD6: movaps xmm3, xmmword ptr [ebp - 0x20] */
    _xmm[3].u64[0] = MEM64(eax + 0x20); /* 0x17217DDA: movlps xmm3, qword ptr [eax + 0x20] */
    _xmm[3].u64[1] = MEM64(eax + 0x28); /* 0x17217DDE: movhps xmm3, qword ptr [eax + 0x28] */
    _xmm[2] = _xmm[1]; /* 0x17217DE2: movaps xmm2, xmm1 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17217DE5: mov dword ptr [ebp - 4], ecx */
    _xmm[1].u64[0] = MEM32(ebp + (-0x4)); _xmm[1].u64[1] = 0; /* 0x17217DE8: movss xmm1, dword ptr [ebp - 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217DED: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217DF1: mulps xmm3, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17217DF4: addps xmm3, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x20)); /* 0x17217DF7: movaps xmm2, xmmword ptr [ebp - 0x20] */
    _xmm[2].u64[0] = MEM64(eax + 0x10); /* 0x17217DFB: movlps xmm2, qword ptr [eax + 0x10] */
    _xmm[2].u64[1] = MEM64(eax + 0x18); /* 0x17217DFF: movhps xmm2, qword ptr [eax + 0x18] */
    _xmm[1] = _xmm[0]; /* 0x17217E03: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17217E06: shufps xmm1, xmm0, 0x55 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217E0A: mulps xmm2, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x17217E0D: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217E10: shufps xmm1, xmm0, 0 */
    _xmm[0] = xmm_ld(ebp + (-0x20)); /* 0x17217E14: movaps xmm0, xmmword ptr [ebp - 0x20] */
    _xmm[0].u64[0] = MEM64(eax); /* 0x17217E18: movlps xmm0, qword ptr [eax] */
    _xmm[0].u64[1] = MEM64(eax + 0x8); /* 0x17217E1B: movhps xmm0, qword ptr [eax + 8] */
L_17217E1F:
    eax = MEM32(ebx + 0x8); /* 0x17217E1F: mov eax, dword ptr [ebx + 8] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217E22: mulps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217E25: addps xmm0, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217E28: addps xmm0, xmm3 */
    xmm_st(eax, _xmm[0]); /* 0x17217E2B: movups xmmword ptr [eax], xmm0 */
    esp = ebp; /* 0x17217E2E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17217E30: pop ebp */
    esp = ebx; /* 0x17217E31: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17217E33: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17217E34: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17217E3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217E3Cu);

L_17217E3C:
    edi = edi; /* 0x17217E3C: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17217E3E: push ebx */
    ebx = esp; /* 0x17217E3F: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17217E41: push ecx */
    PUSH32(esp, ecx); /* 0x17217E42: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17217E43: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17217E46: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17217E49: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17217E4A: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17217E4D: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17217E51: mov ebp, esp */
    ecx = MEM32(ebx + 0xC); /* 0x17217E53: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x10); /* 0x17217E56: mov eax, dword ptr [ebx + 0x10] */
    _xmm[0] = xmm_ld(ebp + (-0x20)); /* 0x17217E59: movaps xmm0, xmmword ptr [ebp - 0x20] */
    _xmm[0].u64[0] = MEM64(ecx); /* 0x17217E5D: movlps xmm0, qword ptr [ecx] */
    ecx = MEM32(ecx + 0x8); /* 0x17217E60: mov ecx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x17217E63: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* test LO8(eax), 0xFu */ /* 0x17217E66: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17217E9E; /* 0x17217E68: jne 0x17217e9e */
L_17217E6A:
    _xmm[2] = xmm_ld(eax + 0x30); /* 0x17217E6A: movaps xmm2, xmmword ptr [eax + 0x30] */
    _xmm[3] = xmm_ld(eax + 0x20); /* 0x17217E6E: movaps xmm3, xmmword ptr [eax + 0x20] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17217E72: mov dword ptr [ebp - 4], ecx */
    _xmm[1].u64[0] = MEM32(ebp + (-0x4)); _xmm[1].u64[1] = 0; /* 0x17217E75: movss xmm1, dword ptr [ebp - 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217E7A: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217E7E: mulps xmm3, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17217E81: addps xmm3, xmm2 */
    _xmm[2] = xmm_ld(eax + 0x10); /* 0x17217E84: movaps xmm2, xmmword ptr [eax + 0x10] */
    _xmm[1] = _xmm[0]; /* 0x17217E88: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17217E8B: shufps xmm1, xmm0, 0x55 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217E8F: mulps xmm2, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x17217E92: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217E95: shufps xmm1, xmm0, 0 */
    _xmm[0] = xmm_ld(eax); /* 0x17217E99: movaps xmm0, xmmword ptr [eax] */
    goto L_17217EF3; /* 0x17217E9C: jmp 0x17217ef3 */
L_17217E9E:
    _xmm[1] = xmm_ld(ebp + (-0x20)); /* 0x17217E9E: movaps xmm1, xmmword ptr [ebp - 0x20] */
    _xmm[1].u64[0] = MEM64(eax + 0x30); /* 0x17217EA2: movlps xmm1, qword ptr [eax + 0x30] */
    _xmm[1].u64[1] = MEM64(eax + 0x38); /* 0x17217EA6: movhps xmm1, qword ptr [eax + 0x38] */
    _xmm[3] = xmm_ld(ebp + (-0x20)); /* 0x17217EAA: movaps xmm3, xmmword ptr [ebp - 0x20] */
    _xmm[3].u64[0] = MEM64(eax + 0x20); /* 0x17217EAE: movlps xmm3, qword ptr [eax + 0x20] */
    _xmm[3].u64[1] = MEM64(eax + 0x28); /* 0x17217EB2: movhps xmm3, qword ptr [eax + 0x28] */
    _xmm[2] = _xmm[1]; /* 0x17217EB6: movaps xmm2, xmm1 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17217EB9: mov dword ptr [ebp - 4], ecx */
    _xmm[1].u64[0] = MEM32(ebp + (-0x4)); _xmm[1].u64[1] = 0; /* 0x17217EBC: movss xmm1, dword ptr [ebp - 4] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217EC1: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17217EC5: mulps xmm3, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17217EC8: addps xmm3, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x20)); /* 0x17217ECB: movaps xmm2, xmmword ptr [ebp - 0x20] */
    _xmm[2].u64[0] = MEM64(eax + 0x10); /* 0x17217ECF: movlps xmm2, qword ptr [eax + 0x10] */
    _xmm[2].u64[1] = MEM64(eax + 0x18); /* 0x17217ED3: movhps xmm2, qword ptr [eax + 0x18] */
    _xmm[1] = _xmm[0]; /* 0x17217ED7: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17217EDA: shufps xmm1, xmm0, 0x55 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217EDE: mulps xmm2, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x17217EE1: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17217EE4: shufps xmm1, xmm0, 0 */
    _xmm[0] = xmm_ld(ebp + (-0x20)); /* 0x17217EE8: movaps xmm0, xmmword ptr [ebp - 0x20] */
    _xmm[0].u64[0] = MEM64(eax); /* 0x17217EEC: movlps xmm0, qword ptr [eax] */
    _xmm[0].u64[1] = MEM64(eax + 0x8); /* 0x17217EEF: movhps xmm0, qword ptr [eax + 8] */
L_17217EF3:
    eax = MEM32(ebx + 0x8); /* 0x17217EF3: mov eax, dword ptr [ebx + 8] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217EF6: mulps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217EF9: addps xmm0, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17217EFC: addps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[1] = _d; } /* 0x17217EFF: rcpps xmm1, xmm0 */
    _xmm[2] = _xmm[1]; /* 0x17217F02: movaps xmm2, xmm1 */
    _xmm[3] = _xmm[1]; /* 0x17217F05: movaps xmm3, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217F08: mulps xmm2, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17217F0B: mulps xmm2, xmm1 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17217F0E: addps xmm3, xmm1 */
    _xmm[1] = _xmm[3]; /* 0x17217F11: movaps xmm1, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[1] = _d; } /* 0x17217F14: subps xmm1, xmm2 */
    _xmm[2] = _xmm[1]; /* 0x17217F17: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[3]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x17217F1A: shufps xmm2, xmm1, 0xff */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17217F1E: mulps xmm0, xmm2 */
    _xmm[1] = _xmm[0]; /* 0x17217F21: movaps xmm1, xmm0 */
    _xmm[1].u64[0] = _xmm[0].u64[1]; /* 0x17217F24: movhlps xmm1, xmm0 */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x17217F27: movlps qword ptr [eax], xmm0 */
    MEM32(eax + 0x8) = _xmm[1].u32[0]; /* 0x17217F2A: movss dword ptr [eax + 8], xmm1 */
    esp = ebp; /* 0x17217F2F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17217F31: pop ebp */
    esp = ebx; /* 0x17217F32: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17217F34: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17217F35: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17217F3D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17217F3Du);

L_17217F3D:
    edi = edi; /* 0x17217F3D: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17217F3F: push ebx */
    ebx = esp; /* 0x17217F40: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17217F42: push ecx */
    PUSH32(esp, ecx); /* 0x17217F43: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17217F44: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17217F47: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17217F4A: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17217F4B: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17217F4E: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17217F52: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x17217F54: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0xC); /* 0x17217F57: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x17217F5A: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x17217F5C: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17217F5F: mov dword ptr [ebp - 4], ecx */
    _xmm[2].u64[0] = MEM32(ebp + (-0x4)); _xmm[2].u64[1] = 0; /* 0x17217F62: movss xmm2, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17217F67: mov dword ptr [ebp - 4], eax */
    _xmm[3].u64[0] = MEM32(ebp + (-0x4)); _xmm[3].u64[1] = 0; /* 0x17217F6A: movss xmm3, dword ptr [ebp - 4] */
    eax = MEM32(ebx + 0x8); /* 0x17217F6F: mov eax, dword ptr [ebx + 8] */
    _xmm[0] = _xmm[3]; /* 0x17217F72: movaps xmm0, xmm3 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x17217F75: mulss xmm0, xmm3 */
    _xmm[1] = _xmm[0]; /* 0x17217F79: movaps xmm1, xmm0 */
    _xmm[0] = _xmm[2]; /* 0x17217F7C: movaps xmm0, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x17217F7F: mulss xmm0, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17217F83: addss xmm0, xmm1 */
    MEM32(ebp + (-0x4)) = 0x28800000u; /* 0x17217F87: mov dword ptr [ebp - 4], 0x28800000 */
    _xmm[1].u64[0] = MEM32(ebp + (-0x4)); _xmm[1].u64[1] = 0; /* 0x17217F8E: movss xmm1, dword ptr [ebp - 4] */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x17217F93: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_17217FA1; /* 0x17217F96: jbe 0x17217fa1 */
L_17217F98:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x17217F98: xorps xmm0, xmm0 */
    MEM32(eax) = _xmm[0].u32[0]; /* 0x17217F9B: movss dword ptr [eax], xmm0 */
    goto L_17217FED; /* 0x17217F9F: jmp 0x17217fed */
L_17217FA1:
    xmm_st(ebp + (-0x20), _xmm[0]); /* 0x17217FA1: movaps xmmword ptr [ebp - 0x20], xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x17217FA5: rsqrtss xmm1, xmm0 */
    MEM32(ebp + (-0x20)) = _xmm[1].u32[0]; /* 0x17217FA9: movss dword ptr [ebp - 0x20], xmm1 */
    _xmm[1] = xmm_ld(ebp + (-0x20)); /* 0x17217FAE: movaps xmm1, xmmword ptr [ebp - 0x20] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x17217FB2: mulss xmm0, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x17217FB6: mulss xmm0, xmm1 */
    MEM32(ebp + (-0x4)) = 0x40400000u; /* 0x17217FBA: mov dword ptr [ebp - 4], 0x40400000 */
    _xmm[4].u64[0] = MEM32(ebp + (-0x4)); _xmm[4].u64[1] = 0; /* 0x17217FC1: movss xmm4, dword ptr [ebp - 4] */
    { float _s = _xmm[0].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x17217FC6: subss xmm4, xmm0 */
    MEM32(ebp + (-0x4)) = 0x3F000000u; /* 0x17217FCA: mov dword ptr [ebp - 4], 0x3f000000 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x17217FD1: movss xmm0, dword ptr [ebp - 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x17217FD6: mulss xmm0, xmm1 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x17217FDA: mulss xmm0, xmm4 */
    _xmm[1] = _xmm[0]; /* 0x17217FDE: movaps xmm1, xmm0 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x17217FE1: mulss xmm1, xmm2 */
    MEM32(eax) = _xmm[1].u32[0]; /* 0x17217FE5: movss dword ptr [eax], xmm1 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x17217FE9: mulss xmm0, xmm3 */
L_17217FED:
    MEM32(eax + 0x4) = _xmm[0].u32[0]; /* 0x17217FED: movss dword ptr [eax + 4], xmm0 */
    esp = ebp; /* 0x17217FF2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17217FF4: pop ebp */
    esp = ebx; /* 0x17217FF5: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17217FF7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17217FF8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17218000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17218000u);

L_17218000:
    edi = edi; /* 0x17218000: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17218002: push ebp */
    ebp = esp; /* 0x17218003: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17218005: push ebx */
    eax = MEM32(ebp + 0x10); /* 0x17218006: mov eax, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0xC); /* 0x17218009: mov ebx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1721800C: mov edx, dword ptr [ebp + 8] */
    _xmm[1].u64[0] = MEM64(eax); /* 0x1721800F: movlps xmm1, qword ptr [eax] */
    _xmm[1].u64[1] = MEM64(eax + 0x8); /* 0x17218012: movhps xmm1, qword ptr [eax + 8] */
    _xmm[0].u64[0] = MEM64(ebx); /* 0x17218016: movlps xmm0, qword ptr [ebx] */
    _xmm[0].u64[1] = MEM64(ebx + 0x8); /* 0x17218019: movhps xmm0, qword ptr [ebx + 8] */
    _xmm[2] = _xmm[1]; /* 0x1721801D: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x17218020: shufps xmm1, xmm1, 0xff */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17218024: mulps xmm1, xmm0 */
    _xmm[3] = _xmm[2]; /* 0x17218027: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1721802A: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[3]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1721802E: shufps xmm0, xmm0, 0x1b */
    { xmm_t _s = xmm_ld(0x1702A6E0); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x17218032: xorps xmm2, xmmword ptr [0x1702a6e0] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17218039: mulps xmm2, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1721803C: addps xmm1, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x1721803F: movaps xmm2, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[1]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17218042: shufps xmm3, xmm3, 0x55 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x17218046: shufps xmm0, xmm0, 0xb1 */
    { xmm_t _s = xmm_ld(0x1702A6D0); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1721804A: xorps xmm3, xmmword ptr [0x1702a6d0] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17218051: mulps xmm3, xmm0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x17218054: addps xmm1, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x17218057: shufps xmm2, xmm2, 0xaa */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[3]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1721805B: shufps xmm0, xmm0, 0x1b */
    { xmm_t _s = xmm_ld(0x1702A6C0); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x1721805F: xorps xmm2, xmmword ptr [0x1702a6c0] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17218066: mulps xmm2, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x17218069: addps xmm1, xmm2 */
    MEM64(edx) = _xmm[1].u64[0]; /* 0x1721806C: movlps qword ptr [edx], xmm1 */
    MEM64(edx + 0x8) = _xmm[1].u64[1]; /* 0x1721806F: movhps qword ptr [edx + 8], xmm1 */
    eax = MEM32(ebp + 0x8); /* 0x17218073: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x17218076: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17218077: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17218078: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17218080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17218080u);

L_17218080:
    edi = edi; /* 0x17218080: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17218082: push ebx */
    ebx = esp; /* 0x17218083: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17218085: push ecx */
    PUSH32(esp, ecx); /* 0x17218086: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17218087: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721808A: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721808D: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721808E: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17218091: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17218095: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17218097: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0xC); /* 0x1721809A: mov eax, dword ptr [ebx + 0xc] */
    _xmm[1] = xmm_ld(ebp + (-0x10)); /* 0x1721809D: movaps xmm1, xmmword ptr [ebp - 0x10] */
    _xmm[1].u64[0] = MEM64(eax); /* 0x172180A1: movlps xmm1, qword ptr [eax] */
    _xmm[1].u64[1] = MEM64(eax + 0x8); /* 0x172180A4: movhps xmm1, qword ptr [eax + 8] */
    eax = MEM32(ebx + 0x8); /* 0x172180A8: mov eax, dword ptr [ebx + 8] */
    _xmm[0] = _xmm[1]; /* 0x172180AB: movaps xmm0, xmm1 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x172180AE: mulps xmm0, xmm1 */
    _xmm[2] = _xmm[0]; /* 0x172180B1: movaps xmm2, xmm0 */
    _xmm[2].u64[0] = _xmm[0].u64[1]; /* 0x172180B4: movhlps xmm2, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x172180B7: addps xmm0, xmm2 */
    _xmm[2] = _xmm[0]; /* 0x172180BA: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[1]; _xmm[2].u32[2] = _s.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x172180BD: shufps xmm2, xmm0, 0x55 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x172180C1: addss xmm0, xmm2 */
    xmm_st(ebp + (-0x10), _xmm[0]); /* 0x172180C5: movaps xmmword ptr [ebp - 0x10], xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(1.0f / _s); } /* 0x172180C9: rcpss xmm2, xmm0 */
    MEM32(ebp + (-0x10)) = _xmm[2].u32[0]; /* 0x172180CD: movss dword ptr [ebp - 0x10], xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x10)); /* 0x172180D2: movaps xmm2, xmmword ptr [ebp - 0x10] */
    _xmm[3] = _xmm[2]; /* 0x172180D6: movaps xmm3, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x172180D9: mulss xmm3, xmm0 */
    _xmm[0] = _xmm[2]; /* 0x172180DD: movaps xmm0, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x172180E0: addss xmm0, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x172180E4: mulss xmm3, xmm2 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x172180E8: subss xmm0, xmm3 */
    _xmm[2] = _xmm[0]; /* 0x172180EC: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x172180EF: shufps xmm2, xmm0, 0 */
    _xmm[0] = xmm_ld(0x1723C420); /* 0x172180F3: movaps xmm0, xmmword ptr [0x1723c420] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x172180FA: mulps xmm1, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x172180FD: mulps xmm1, xmm2 */
    xmm_st(eax, _xmm[1]); /* 0x17218100: movups xmmword ptr [eax], xmm1 */
    esp = ebp; /* 0x17218103: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17218105: pop ebp */
    esp = ebx; /* 0x17218106: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17218108: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17218109: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17218111(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17218111u);

L_17218111:
    edi = edi; /* 0x17218111: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17218113: push ebx */
    ebx = esp; /* 0x17218114: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17218116: push ecx */
    PUSH32(esp, ecx); /* 0x17218117: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17218118: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721811B: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721811E: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721811F: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17218122: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17218126: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x17218128: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0xC); /* 0x1721812B: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1721812E: mov dword ptr [ebp - 4], eax */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x17218131: movss xmm0, dword ptr [ebp - 4] */
    eax = 0x1702A830u; /* 0x17218136: mov eax, 0x1702a830 */
    _xmm[1] = xmm_ld(eax); /* 0x1721813B: movaps xmm1, xmmword ptr [eax] */
    eax = MEM32(ebx + 0x10); /* 0x1721813E: mov eax, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17218141: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x14); /* 0x17218144: mov eax, dword ptr [ebx + 0x14] */
    _xmm[2] = _xmm[0]; /* 0x17218147: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x1721814A: unpcklps xmm2, xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x1721814D: movss xmm0, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17218152: mov dword ptr [ebp - 4], eax */
    _xmm[3].u64[0] = MEM32(ebp + (-0x4)); _xmm[3].u64[1] = 0; /* 0x17218155: movss xmm3, dword ptr [ebp - 4] */
    eax = ebp + (-0x30); /* 0x1721815A: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1721815D: push eax */
    eax = ebp + (-0x20); /* 0x1721815E: lea eax, [ebp - 0x20] */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _d.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17218161: unpcklps xmm3, xmm0 */
    PUSH32(esp, eax); /* 0x17218164: push eax */
    _xmm[3].u64[1] = _xmm[2].u64[0]; /* 0x17218165: movlhps xmm3, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17218168: mulps xmm3, xmm1 */
    PUSH32(esp, eax); /* 0x1721816B: push eax */
    xmm_st(ebp + (-0x20), _xmm[3]); /* 0x1721816C: movaps xmmword ptr [ebp - 0x20], xmm3 */
    RECOMP_CALL(sub_17218E4D); /* 0x17218170: call 0x17218e4d */
    RECOMP_FLAGS_IN();
    _xmm[0] = xmm_ld(ebp + (-0x20)); /* 0x17218175: movaps xmm0, xmmword ptr [ebp - 0x20] */
    _xmm[4] = xmm_ld(0x1702A820); /* 0x17218179: movaps xmm4, xmmword ptr [0x1702a820] */
    eax = MEM32(ebx + 0x8); /* 0x17218180: mov eax, dword ptr [ebx + 8] */
    _xmm[1] = _xmm[0]; /* 0x17218183: movaps xmm1, xmm0 */
    { xmm_t _s = xmm_ld(ebp + (-0x30)), _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x17218186: shufps xmm1, xmmword ptr [ebp - 0x30], 0x99 */
    { xmm_t _s = xmm_ld(ebp + (-0x30)), _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1721818B: shufps xmm0, xmmword ptr [ebp - 0x30], 0 */
    _xmm[2] = _xmm[1]; /* 0x17218190: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[3]; _xmm[2].u32[1] = _d.u32[1]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x17218193: shufps xmm2, xmm1, 0xf7 */
    _xmm[3] = _xmm[1]; /* 0x17218197: movaps xmm3, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[2]; _xmm[3].u32[3] = _s.u32[2]; } /* 0x1721819A: shufps xmm3, xmm1, 0xa8 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x1721819E: shufps xmm0, xmm0, 0x8a */
    _xmm[1] = _xmm[0]; /* 0x172181A2: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[2]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x172181A5: shufps xmm1, xmm0, 0x8a */
    _xmm[5] = _xmm[3]; /* 0x172181A9: movaps xmm5, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x172181AC: mulps xmm0, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x172181AF: mulps xmm0, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x172181B2: shufps xmm5, xmm3, 1 */
    _xmm[3] = _xmm[2]; /* 0x172181B6: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x172181B9: shufps xmm3, xmm2, 0x51 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x172181BD: mulps xmm1, xmm3 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x172181C0: mulps xmm1, xmm5 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x172181C3: xorps xmm1, xmm4 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x172181C6: addps xmm0, xmm1 */
    xmm_st(eax, _xmm[0]); /* 0x172181C9: movups xmmword ptr [eax], xmm0 */
    esp = ebp; /* 0x172181CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x172181CE: pop ebp */
    esp = ebx; /* 0x172181CF: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x172181D1: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x172181D2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_172181DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172181DAu);

L_172181DA:
    edi = edi; /* 0x172181DA: mov edi, edi */
    PUSH32(esp, ebx); /* 0x172181DC: push ebx */
    ebx = esp; /* 0x172181DD: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x172181DF: push ecx */
    PUSH32(esp, ecx); /* 0x172181E0: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x172181E1: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x172181E4: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x172181E7: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x172181E8: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x172181EB: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x172181EF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x172181F1: sub esp, 0x18 */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0xC); /* 0x172181F4: mov edx, dword ptr [ebx + 0xc] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x172181F7: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x172181F7: shl edx, 2 */
    PUSH32(esp, esi); /* 0x172181FA: push esi */
    PUSH32(esp, edi); /* 0x172181FB: push edi */
    MEM32(ebp + (-0x10)) = ecx; /* 0x172181FC: mov dword ptr [ebp - 0x10], ecx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17218241; /* 0x172181FF: je 0x17218241 */
L_17218201:
    eax = MEM32(ebx + 0x8); /* 0x17218201: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17218204: dec edx */
    _flag_k = FK_DEC;
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x17218205: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x17218205: shr edx, 2 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17218208: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1721820B: inc edx */
    _flag_k = FK_INC;
L_1721820C:
    ecx = MEM32(ebx + 0x10); /* 0x1721820C: mov ecx, dword ptr [ebx + 0x10] */
    /* test ecx, ecx */ /* 0x1721820F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218237; /* 0x17218211: jbe 0x17218237 */
L_17218213:
    edi = MEM32(ebp + (-0x4)); /* 0x17218213: mov edi, dword ptr [ebp - 4] */
    esi = eax; /* 0x17218216: mov esi, eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x17218218: mov dword ptr [ebp - 8], ecx */
L_1721821B:
    ecx = MEM32(esi); /* 0x1721821B: mov ecx, dword ptr [esi] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1721821D: mov dword ptr [ebp - 0xc], ecx */
    _xmm[0].u64[0] = MEM32(ebp + (-0xC)); _xmm[0].u64[1] = 0; /* 0x17218220: movss xmm0, dword ptr [ebp - 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17218225: shufps xmm0, xmm0, 0 */
    xmm_st(edi, _xmm[0]); /* 0x17218229: movaps xmmword ptr [edi], xmm0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1721822C: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1721822F: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x17218232: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721821B; /* 0x17218235: jne 0x1721821b */
L_17218237:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 0x40u; /* 0x17218237: add dword ptr [ebp - 4], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1721823B: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1721823E: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721820C; /* 0x1721823F: jne 0x1721820c */
L_17218241:
    eax = MEM32(ebp + (-0x10)); /* 0x17218241: mov eax, dword ptr [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x17218244: pop edi */
    esi = POP32_VAL(esp); /* 0x17218245: pop esi */
    esp = ebp; /* 0x17218246: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17218248: pop ebp */
    esp = ebx; /* 0x17218249: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721824B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1721824C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17218254(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17218254u);

L_17218254:
    edi = edi; /* 0x17218254: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17218256: push ebx */
    ebx = esp; /* 0x17218257: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17218259: push ecx */
    PUSH32(esp, ecx); /* 0x1721825A: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721825B: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721825E: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17218261: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17218262: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17218265: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17218269: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x128u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x128u; /* 0x1721826B: sub esp, 0x128 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x17218271: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x17218274: push esi */
    PUSH32(esp, edi); /* 0x17218275: push edi */
    edi = MEM32(ebx + 0x8); /* 0x17218276: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xCu); /* 0x17218279: push 0xc */
    edx = eax; /* 0x1721827B: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x1721827D: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17218280: pop ecx */
    /* cmp ecx, eax */ /* 0x17218281: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17218283: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x17218285: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x17218287: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x17218289: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x17218289: shr esi, 2 */
    MEM32(ebp + (-0xC)) = eax; /* 0x1721828C: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x1721828F: mov dword ptr [ebp - 8], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17218403; /* 0x17218292: je 0x17218403 */
L_17218298:
    PUSH32(esp, 4); /* 0x17218298: push 4 */
    PUSH32(esp, 4); /* 0x1721829A: push 4 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721829C: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x120); /* 0x1721829F: lea ecx, [ebp - 0x120] */
    RECOMP_CALL(sub_172181DA); /* 0x172182A5: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x172182AA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x172182AC: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x172182AF: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x172182B2: xorps xmm0, xmm0 */
    xmm_st(ebp + (-0x20), _xmm[0]); /* 0x172182B5: movaps xmmword ptr [ebp - 0x20], xmm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218403; /* 0x172182B9: jbe 0x17218403 */
L_172182BF:
    MEM32(ebp + (-0x4)) = esi; /* 0x172182BF: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x172182C2: mov esi, dword ptr [ebx + 0x10] */
L_172182C5:
    _xmm[3].u64[0] = MEM32(esi + 0x8); _xmm[3].u64[1] = 0; /* 0x172182C5: movss xmm3, dword ptr [esi + 8] */
    _xmm[1] = xmm_ld(ebp + (-0x20)); /* 0x172182CA: movaps xmm1, xmmword ptr [ebp - 0x20] */
    _xmm[1].u64[0] = MEM64(esi); /* 0x172182CE: movlps xmm1, qword ptr [esi] */
    _xmm[1].u64[1] = MEM64(esi + eax); /* 0x172182D1: movhps xmm1, qword ptr [esi + eax] */
    _xmm[2] = xmm_ld(ebp + (-0x20)); /* 0x172182D5: movaps xmm2, xmmword ptr [ebp - 0x20] */
    _xmm[2].u64[0] = MEM64(esi + eax * 2); /* 0x172182D9: movlps xmm2, qword ptr [esi + eax*2] */
    _xmm[0] = _xmm[1]; /* 0x172182DD: movaps xmm0, xmm1 */
    edx = eax + eax * 2; /* 0x172182E0: lea edx, [eax + eax*2] */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x172182E3: movhps xmm2, qword ptr [edx + esi] */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x172182E7: shufps xmm1, xmm2, 0xdd */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x172182EB: shufps xmm0, xmm2, 0x88 */
    _xmm[2].u64[0] = MEM32(esi + eax * 2 + 0x8); _xmm[2].u64[1] = 0; /* 0x172182EF: movss xmm2, dword ptr [esi + eax*2 + 8] */
    _xmm[4] = _xmm[1]; /* 0x172182F5: movaps xmm4, xmm1 */
    _xmm[1].u64[0] = MEM32(edx + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x172182F8: movss xmm1, dword ptr [edx + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x172182FE: unpcklps xmm2, xmm1 */
    _xmm[1].u64[0] = MEM32(eax + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x17218301: movss xmm1, dword ptr [eax + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _d.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17218307: unpcklps xmm3, xmm1 */
    _xmm[1] = _xmm[3]; /* 0x1721830A: movaps xmm1, xmm3 */
    _xmm[1].u64[1] = _xmm[2].u64[0]; /* 0x1721830D: movlhps xmm1, xmm2 */
    _xmm[3] = _xmm[4]; /* 0x17218310: movaps xmm3, xmm4 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xE0))); float _s1 = sse_f32(MEM32(ebp + (-0xE0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xE0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xE0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17218313: mulps xmm3, xmmword ptr [ebp - 0xe0] */
    _xmm[5] = _xmm[0]; /* 0x1721831A: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x120))); float _s1 = sse_f32(MEM32(ebp + (-0x120) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x120) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x120) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721831D: mulps xmm5, xmmword ptr [ebp - 0x120] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17218324: addps xmm5, xmm3 */
    _xmm[3] = _xmm[5]; /* 0x17218327: movaps xmm3, xmm5 */
    _xmm[2] = _xmm[1]; /* 0x1721832A: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xA0))); float _s1 = sse_f32(MEM32(ebp + (-0xA0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xA0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xA0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721832D: mulps xmm2, xmmword ptr [ebp - 0xa0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17218334: addps xmm3, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x17218337: movaps xmm2, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x60))); float _s1 = sse_f32(MEM32(ebp + (-0x60) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x60) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x60) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721833A: addps xmm2, xmmword ptr [ebp - 0x60] */
    _xmm[5] = _xmm[4]; /* 0x1721833E: movaps xmm5, xmm4 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218341: mulps xmm5, xmmword ptr [ebp - 0xd0] */
    _xmm[6] = _xmm[0]; /* 0x17218348: movaps xmm6, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721834B: mulps xmm6, xmmword ptr [ebp - 0x110] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17218352: addps xmm6, xmm5 */
    _xmm[5] = _xmm[6]; /* 0x17218355: movaps xmm5, xmm6 */
    _xmm[3] = _xmm[1]; /* 0x17218358: movaps xmm3, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x90))); float _s1 = sse_f32(MEM32(ebp + (-0x90) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x90) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x90) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721835B: mulps xmm3, xmmword ptr [ebp - 0x90] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17218362: addps xmm5, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17218365: addps xmm5, xmmword ptr [ebp - 0x50] */
    _xmm[6] = _xmm[4]; /* 0x17218369: movaps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721836C: mulps xmm6, xmmword ptr [ebp - 0xc0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xB0))); float _s1 = sse_f32(MEM32(ebp + (-0xB0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xB0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xB0) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17218373: mulps xmm4, xmmword ptr [ebp - 0xb0] */
    _xmm[7] = _xmm[0]; /* 0x1721837A: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721837D: mulps xmm7, xmmword ptr [ebp - 0x100] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xF0))); float _s1 = sse_f32(MEM32(ebp + (-0xF0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xF0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xF0) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17218384: mulps xmm0, xmmword ptr [ebp - 0xf0] */
    _xmm[3] = _xmm[1]; /* 0x1721838B: movaps xmm3, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x80))); float _s1 = sse_f32(MEM32(ebp + (-0x80) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x80) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x80) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721838E: mulps xmm3, xmmword ptr [ebp - 0x80] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x70))); float _s1 = sse_f32(MEM32(ebp + (-0x70) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x70) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x70) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17218392: mulps xmm1, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17218396: addps xmm0, xmm4 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x17218399: addps xmm7, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x1721839C: movaps xmm6, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721839F: addps xmm6, xmm3 */
    _xmm[4] = _xmm[0]; /* 0x172183A2: movaps xmm4, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172183A5: addps xmm4, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172183A8: addps xmm4, xmmword ptr [ebp - 0x30] */
    _xmm[3] = _xmm[6]; /* 0x172183AC: movaps xmm3, xmm6 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x172183AF: addps xmm3, xmmword ptr [ebp - 0x40] */
    _xmm[0] = _xmm[2]; /* 0x172183B3: movaps xmm0, xmm2 */
    { xmm_t _s = _xmm[5], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x172183B6: unpcklps xmm0, xmm5 */
    MEM64(edi) = _xmm[0].u64[0]; /* 0x172183B9: movlps qword ptr [edi], xmm0 */
    _xmm[1] = _xmm[3]; /* 0x172183BC: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[4], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x172183BF: unpcklps xmm1, xmm4 */
    MEM64(edi + 0x8) = _xmm[1].u64[0]; /* 0x172183C2: movlps qword ptr [edi + 8], xmm1 */
    MEM64(edi + ecx) = _xmm[0].u64[1]; /* 0x172183C6: movhps qword ptr [edi + ecx], xmm0 */
    MEM64(ecx + edi + 0x8) = _xmm[1].u64[1]; /* 0x172183CA: movhps qword ptr [ecx + edi + 8], xmm1 */
    { xmm_t _s = _xmm[5], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x172183CF: unpckhps xmm2, xmm5 */
    MEM64(edi + ecx * 2) = _xmm[2].u64[0]; /* 0x172183D2: movlps qword ptr [edi + ecx*2], xmm2 */
    edx = ecx + ecx * 2; /* 0x172183D6: lea edx, [ecx + ecx*2] */
    { xmm_t _s = _xmm[4], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x172183D9: unpckhps xmm3, xmm4 */
    MEM64(edi + ecx * 2 + 0x8) = _xmm[3].u64[0]; /* 0x172183DC: movlps qword ptr [edi + ecx*2 + 8], xmm3 */
    MEM64(edx + edi) = _xmm[2].u64[1]; /* 0x172183E1: movhps qword ptr [edx + edi], xmm2 */
    MEM64(edx + edi + 0x8) = _xmm[3].u64[1]; /* 0x172183E5: movhps qword ptr [edx + edi + 8], xmm3 */
    edx = eax; /* 0x172183EA: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x172183EC: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x172183EC: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x172183EF: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x172183F1: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x172183F3: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x172183F3: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x172183F6: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x172183F8: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_172182C5; /* 0x172183FB: jne 0x172182c5 */
L_17218401:
    goto L_17218406; /* 0x17218401: jmp 0x17218406 */
L_17218403:
    esi = MEM32(ebx + 0x10); /* 0x17218403: mov esi, dword ptr [ebx + 0x10] */
L_17218406:
    eax = MEM32(ebp + (-0xC)); /* 0x17218406: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x17218409: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218425; /* 0x1721840B: jbe 0x17218425 */
L_1721840D:
    MEM32(ebp + (-0x4)) = eax; /* 0x1721840D: mov dword ptr [ebp - 4], eax */
L_17218410:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17218410: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x17218413: push esi */
    PUSH32(esp, edi); /* 0x17218414: push edi */
    RECOMP_CALL(sub_17217D68); /* 0x17218415: call 0x17217d68 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x1721841A: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x1721841D: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17218420: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17218410; /* 0x17218423: jne 0x17218410 */
L_17218425:
    eax = MEM32(ebp + (-0x8)); /* 0x17218425: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x17218428: pop edi */
    esi = POP32_VAL(esp); /* 0x17218429: pop esi */
    esp = ebp; /* 0x1721842A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721842C: pop ebp */
    esp = ebx; /* 0x1721842D: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721842F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17218430: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17218438(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17218438u);

L_17218438:
    edi = edi; /* 0x17218438: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721843A: push ebx */
    ebx = esp; /* 0x1721843B: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1721843D: push ecx */
    PUSH32(esp, ecx); /* 0x1721843E: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721843F: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17218442: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17218445: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17218446: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17218449: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1721844D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x1721844F: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x17218455: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x17218458: push esi */
    esi = MEM32(ebx + 0x8); /* 0x17218459: mov esi, dword ptr [ebx + 8] */
    PUSH32(esp, edi); /* 0x1721845C: push edi */
    edi = MEM32(ebx + 0xC); /* 0x1721845D: mov edi, dword ptr [ebx + 0xc] */
    PUSH32(esp, 0xCu); /* 0x17218460: push 0xc */
    edx = eax; /* 0x17218462: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x17218464: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x17218465: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x17218468: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1721846A: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x1721846C: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1721846E: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17218470: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17218470: shr ecx, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x17218473: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17218476: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0xC)) = esi; /* 0x17218479: mov dword ptr [ebp - 0xc], esi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17218594; /* 0x1721847C: je 0x17218594 */
L_17218482:
    PUSH32(esp, 4); /* 0x17218482: push 4 */
    PUSH32(esp, 4); /* 0x17218484: push 4 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17218486: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x110); /* 0x17218489: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_172181DA); /* 0x1721848F: call 0x172181da */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x17218494: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x17218497: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x14); /* 0x17218499: mov ecx, dword ptr [ebx + 0x14] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1721849C: xorps xmm6, xmm6 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218594; /* 0x1721849F: jbe 0x17218594 */
L_172184A5:
    MEM32(ebp + (-0x4)) = eax; /* 0x172184A5: mov dword ptr [ebp - 4], eax */
L_172184A8:
    eax = MEM32(ebx + 0x10); /* 0x172184A8: mov eax, dword ptr [ebx + 0x10] */
    _xmm[0] = _xmm[6]; /* 0x172184AB: movaps xmm0, xmm6 */
    _xmm[0].u64[0] = MEM64(eax); /* 0x172184AE: movlps xmm0, qword ptr [eax] */
    _xmm[1] = _xmm[0]; /* 0x172184B1: movaps xmm1, xmm0 */
    _xmm[1].u64[1] = MEM64(eax + ecx); /* 0x172184B4: movhps xmm1, qword ptr [eax + ecx] */
    _xmm[0] = _xmm[6]; /* 0x172184B8: movaps xmm0, xmm6 */
    _xmm[0].u64[0] = MEM64(eax + ecx * 2); /* 0x172184BB: movlps xmm0, qword ptr [eax + ecx*2] */
    _xmm[2] = _xmm[0]; /* 0x172184BF: movaps xmm2, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x172184C2: movaps xmm0, xmm1 */
    edx = ecx + ecx * 2; /* 0x172184C5: lea edx, [ecx + ecx*2] */
    _xmm[2].u64[1] = MEM64(edx + eax); /* 0x172184C8: movhps xmm2, qword ptr [edx + eax] */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x172184CC: shufps xmm0, xmm2, 0x88 */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x172184D0: shufps xmm1, xmm2, 0xdd */
    _xmm[3] = _xmm[0]; /* 0x172184D4: movaps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x172184D7: mulps xmm3, xmmword ptr [ebp - 0x110] */
    _xmm[2] = _xmm[1]; /* 0x172184DE: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x172184E1: mulps xmm2, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x172184E8: addps xmm3, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x172184EB: movaps xmm2, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x172184EE: addps xmm2, xmmword ptr [ebp - 0x50] */
    _xmm[4] = _xmm[0]; /* 0x172184F2: movaps xmm4, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x172184F5: mulps xmm4, xmmword ptr [ebp - 0x100] */
    _xmm[3] = _xmm[1]; /* 0x172184FC: movaps xmm3, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x172184FF: mulps xmm3, xmmword ptr [ebp - 0xc0] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17218506: addps xmm4, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17218509: addps xmm4, xmmword ptr [ebp - 0x40] */
    _xmm[5] = _xmm[0]; /* 0x1721850D: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xF0))); float _s1 = sse_f32(MEM32(ebp + (-0xF0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xF0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xF0) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218510: mulps xmm5, xmmword ptr [ebp - 0xf0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xE0))); float _s1 = sse_f32(MEM32(ebp + (-0xE0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xE0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xE0) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17218517: mulps xmm0, xmmword ptr [ebp - 0xe0] */
    _xmm[3] = _xmm[1]; /* 0x1721851E: movaps xmm3, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xB0))); float _s1 = sse_f32(MEM32(ebp + (-0xB0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xB0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xB0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17218521: mulps xmm3, xmmword ptr [ebp - 0xb0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xA0))); float _s1 = sse_f32(MEM32(ebp + (-0xA0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xA0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xA0) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17218528: mulps xmm1, xmmword ptr [ebp - 0xa0] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721852F: addps xmm5, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17218532: addps xmm0, xmm1 */
    _xmm[3] = _xmm[5]; /* 0x17218535: movaps xmm3, xmm5 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17218538: addps xmm3, xmmword ptr [ebp - 0x30] */
    _xmm[5] = _xmm[0]; /* 0x1721853C: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721853F: addps xmm5, xmmword ptr [ebp - 0x20] */
    _xmm[0] = _xmm[2]; /* 0x17218543: movaps xmm0, xmm2 */
    { xmm_t _s = _xmm[4], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x17218546: unpcklps xmm0, xmm4 */
    MEM64(esi) = _xmm[0].u64[0]; /* 0x17218549: movlps qword ptr [esi], xmm0 */
    _xmm[1] = _xmm[3]; /* 0x1721854C: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x1721854F: unpcklps xmm1, xmm5 */
    MEM64(esi + 0x8) = _xmm[1].u64[0]; /* 0x17218552: movlps qword ptr [esi + 8], xmm1 */
    MEM64(esi + edi) = _xmm[0].u64[1]; /* 0x17218556: movhps qword ptr [esi + edi], xmm0 */
    MEM64(edi + esi + 0x8) = _xmm[1].u64[1]; /* 0x1721855A: movhps qword ptr [edi + esi + 8], xmm1 */
    { xmm_t _s = _xmm[4], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1721855F: unpckhps xmm2, xmm4 */
    MEM64(esi + edi * 2) = _xmm[2].u64[0]; /* 0x17218562: movlps qword ptr [esi + edi*2], xmm2 */
    edx = edi + edi * 2; /* 0x17218566: lea edx, [edi + edi*2] */
    { xmm_t _s = _xmm[5], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x17218569: unpckhps xmm3, xmm5 */
    MEM64(esi + edi * 2 + 0x8) = _xmm[3].u64[0]; /* 0x1721856C: movlps qword ptr [esi + edi*2 + 8], xmm3 */
    MEM64(edx + esi) = _xmm[2].u64[1]; /* 0x17218571: movhps qword ptr [edx + esi], xmm2 */
    MEM64(edx + esi + 0x8) = _xmm[3].u64[1]; /* 0x17218575: movhps qword ptr [edx + esi + 8], xmm3 */
    edx = ecx; /* 0x1721857A: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721857C: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721857C: shl edx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1721857F: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x10) = eax; /* 0x17218581: mov dword ptr [ebx + 0x10], eax */
    eax = edi; /* 0x17218584: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17218586: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17218586: shl eax, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17218589: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721858B: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_172184A8; /* 0x1721858E: jne 0x172184a8 */
L_17218594:
    eax = MEM32(ebp + (-0x8)); /* 0x17218594: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x17218597: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_172185B7; /* 0x17218599: jbe 0x172185b7 */
L_1721859B:
    MEM32(ebp + (-0x4)) = eax; /* 0x1721859B: mov dword ptr [ebp - 4], eax */
L_1721859E:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721859E: push dword ptr [ebx + 0x18] */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x172185A1: push dword ptr [ebx + 0x10] */
    PUSH32(esp, esi); /* 0x172185A4: push esi */
    RECOMP_CALL(sub_17216FD5); /* 0x172185A5: call 0x17216fd5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x14); /* 0x172185AA: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + eax; /* 0x172185AD: add dword ptr [ebx + 0x10], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x172185B0: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x172185B2: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721859E; /* 0x172185B5: jne 0x1721859e */
L_172185B7:
    eax = MEM32(ebp + (-0xC)); /* 0x172185B7: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x172185BA: pop edi */
    esi = POP32_VAL(esp); /* 0x172185BB: pop esi */
    esp = ebp; /* 0x172185BC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x172185BE: pop ebp */
    esp = ebx; /* 0x172185BF: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x172185C1: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x172185C2: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_172185CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172185CAu);

L_172185CA:
    edi = edi; /* 0x172185CA: mov edi, edi */
    PUSH32(esp, ebx); /* 0x172185CC: push ebx */
    ebx = esp; /* 0x172185CD: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x172185CF: push ecx */
    PUSH32(esp, ecx); /* 0x172185D0: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x172185D1: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x172185D4: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x172185D7: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x172185D8: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x172185DB: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x172185DF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x172185E1: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x172185E7: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x172185EA: push esi */
    PUSH32(esp, edi); /* 0x172185EB: push edi */
    edi = MEM32(ebx + 0x8); /* 0x172185EC: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xCu); /* 0x172185EF: push 0xc */
    edx = eax; /* 0x172185F1: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x172185F3: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x172185F6: pop ecx */
    /* cmp ecx, eax */ /* 0x172185F7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x172185F9: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x172185FB: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x172185FD: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x172185FF: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x172185FF: shr esi, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x17218602: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x17218605: mov dword ptr [ebp - 0xc], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17218706; /* 0x17218608: je 0x17218706 */
L_1721860E:
    PUSH32(esp, 4); /* 0x1721860E: push 4 */
    PUSH32(esp, 4); /* 0x17218610: push 4 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17218612: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x110); /* 0x17218615: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_172181DA); /* 0x1721861B: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x17218620: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x17218622: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x17218625: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x17218628: xorps xmm4, xmm4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218706; /* 0x1721862B: jbe 0x17218706 */
L_17218631:
    MEM32(ebp + (-0x4)) = esi; /* 0x17218631: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x17218634: mov esi, dword ptr [ebx + 0x10] */
L_17218637:
    _xmm[0] = _xmm[4]; /* 0x17218637: movaps xmm0, xmm4 */
    _xmm[0].u64[0] = MEM64(esi); /* 0x1721863A: movlps xmm0, qword ptr [esi] */
    _xmm[1] = _xmm[0]; /* 0x1721863D: movaps xmm1, xmm0 */
    _xmm[1].u64[1] = MEM64(esi + eax); /* 0x17218640: movhps xmm1, qword ptr [esi + eax] */
    _xmm[0] = _xmm[4]; /* 0x17218644: movaps xmm0, xmm4 */
    _xmm[0].u64[0] = MEM64(esi + eax * 2); /* 0x17218647: movlps xmm0, qword ptr [esi + eax*2] */
    _xmm[2] = _xmm[0]; /* 0x1721864B: movaps xmm2, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x1721864E: movaps xmm0, xmm1 */
    edx = eax + eax * 2; /* 0x17218651: lea edx, [eax + eax*2] */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x17218654: movhps xmm2, qword ptr [edx + esi] */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x17218658: shufps xmm0, xmm2, 0x88 */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x1721865C: shufps xmm1, xmm2, 0xdd */
    _xmm[2] = _xmm[1]; /* 0x17218660: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xA0))); float _s1 = sse_f32(MEM32(ebp + (-0xA0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xA0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xA0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17218663: mulps xmm2, xmmword ptr [ebp - 0xa0] */
    _xmm[3] = _xmm[0]; /* 0x1721866A: movaps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xE0))); float _s1 = sse_f32(MEM32(ebp + (-0xE0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xE0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xE0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721866D: mulps xmm3, xmmword ptr [ebp - 0xe0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17218674: addps xmm3, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x17218677: movaps xmm2, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721867A: addps xmm2, xmmword ptr [ebp - 0x20] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[3] = _d; } /* 0x1721867E: rcpps xmm3, xmm2 */
    _xmm[5] = _xmm[3]; /* 0x17218681: movaps xmm5, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218684: mulps xmm5, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218687: mulps xmm5, xmm3 */
    _xmm[2] = _xmm[3]; /* 0x1721868A: movaps xmm2, xmm3 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721868D: addps xmm2, xmm3 */
    _xmm[3] = _xmm[2]; /* 0x17218690: movaps xmm3, xmm2 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x17218693: subps xmm3, xmm5 */
    _xmm[2] = _xmm[1]; /* 0x17218696: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17218699: mulps xmm2, xmmword ptr [ebp - 0xd0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x172186A0: mulps xmm1, xmmword ptr [ebp - 0xc0] */
    _xmm[5] = _xmm[0]; /* 0x172186A7: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x172186AA: mulps xmm0, xmmword ptr [ebp - 0x100] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x172186B1: mulps xmm5, xmmword ptr [ebp - 0x110] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x172186B8: addps xmm5, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x172186BB: addps xmm0, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x172186BE: movaps xmm1, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x172186C1: addps xmm1, xmmword ptr [ebp - 0x40] */
    _xmm[2] = _xmm[5]; /* 0x172186C5: movaps xmm2, xmm5 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x172186C8: addps xmm2, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x172186CC: mulps xmm2, xmm3 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x172186CF: mulps xmm1, xmm3 */
    _xmm[0] = _xmm[2]; /* 0x172186D2: movaps xmm0, xmm2 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x172186D5: unpcklps xmm0, xmm1 */
    MEM64(edi) = _xmm[0].u64[0]; /* 0x172186D8: movlps qword ptr [edi], xmm0 */
    MEM64(edi + ecx) = _xmm[0].u64[1]; /* 0x172186DB: movhps qword ptr [edi + ecx], xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x172186DF: unpckhps xmm2, xmm1 */
    edx = ecx + ecx * 2; /* 0x172186E2: lea edx, [ecx + ecx*2] */
    MEM64(edi + ecx * 2) = _xmm[2].u64[0]; /* 0x172186E5: movlps qword ptr [edi + ecx*2], xmm2 */
    MEM64(edx + edi) = _xmm[2].u64[1]; /* 0x172186E9: movhps qword ptr [edx + edi], xmm2 */
    edx = eax; /* 0x172186ED: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x172186EF: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x172186EF: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x172186F2: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x172186F4: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x172186F6: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x172186F6: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x172186F9: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x172186FB: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17218637; /* 0x172186FE: jne 0x17218637 */
L_17218704:
    goto L_17218709; /* 0x17218704: jmp 0x17218709 */
L_17218706:
    esi = MEM32(ebx + 0x10); /* 0x17218706: mov esi, dword ptr [ebx + 0x10] */
L_17218709:
    eax = MEM32(ebp + (-0x8)); /* 0x17218709: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1721870C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218728; /* 0x1721870E: jbe 0x17218728 */
L_17218710:
    MEM32(ebp + (-0x4)) = eax; /* 0x17218710: mov dword ptr [ebp - 4], eax */
L_17218713:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17218713: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x17218716: push esi */
    PUSH32(esp, edi); /* 0x17218717: push edi */
    RECOMP_CALL(sub_1721701A); /* 0x17218718: call 0x1721701a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x1721871D: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x17218720: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17218723: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17218713; /* 0x17218726: jne 0x17218713 */
L_17218728:
    eax = MEM32(ebp + (-0xC)); /* 0x17218728: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1721872B: pop edi */
    esi = POP32_VAL(esp); /* 0x1721872C: pop esi */
    esp = ebp; /* 0x1721872D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721872F: pop ebp */
    esp = ebx; /* 0x17218730: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17218732: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17218733: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721873B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721873Bu);

L_1721873B:
    edi = edi; /* 0x1721873B: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721873D: push ebx */
    ebx = esp; /* 0x1721873E: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17218740: push ecx */
    PUSH32(esp, ecx); /* 0x17218741: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17218742: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17218745: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17218748: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17218749: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1721874C: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17218750: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x17218752: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x17218758: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x1721875B: push esi */
    PUSH32(esp, edi); /* 0x1721875C: push edi */
    edi = MEM32(ebx + 0x8); /* 0x1721875D: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xCu); /* 0x17218760: push 0xc */
    edx = eax; /* 0x17218762: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x17218764: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17218767: pop ecx */
    /* cmp ecx, eax */ /* 0x17218768: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1721876A: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1721876C: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1721876E: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x17218770: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x17218770: shr esi, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x17218773: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x17218776: mov dword ptr [ebp - 0xc], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17218829; /* 0x17218779: je 0x17218829 */
L_1721877F:
    PUSH32(esp, 2); /* 0x1721877F: push 2 */
    PUSH32(esp, 2); /* 0x17218781: push 2 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17218783: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x110); /* 0x17218786: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_172181DA); /* 0x1721878C: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x17218791: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x17218793: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x17218796: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x17218799: xorps xmm3, xmm3 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218829; /* 0x1721879C: jbe 0x17218829 */
L_172187A2:
    MEM32(ebp + (-0x4)) = esi; /* 0x172187A2: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x172187A5: mov esi, dword ptr [ebx + 0x10] */
L_172187A8:
    _xmm[0] = _xmm[3]; /* 0x172187A8: movaps xmm0, xmm3 */
    _xmm[0].u64[0] = MEM64(esi); /* 0x172187AB: movlps xmm0, qword ptr [esi] */
    _xmm[0].u64[1] = MEM64(esi + eax); /* 0x172187AE: movhps xmm0, qword ptr [esi + eax] */
    _xmm[1] = _xmm[3]; /* 0x172187B2: movaps xmm1, xmm3 */
    _xmm[1].u64[0] = MEM64(esi + eax * 2); /* 0x172187B5: movlps xmm1, qword ptr [esi + eax*2] */
    _xmm[2] = _xmm[1]; /* 0x172187B9: movaps xmm2, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x172187BC: movaps xmm1, xmm0 */
    edx = eax + eax * 2; /* 0x172187BF: lea edx, [eax + eax*2] */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x172187C2: movhps xmm2, qword ptr [edx + esi] */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[3]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x172187C6: shufps xmm0, xmm2, 0xdd */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x172187CA: shufps xmm1, xmm2, 0x88 */
    _xmm[2] = _xmm[0]; /* 0x172187CE: movaps xmm2, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x172187D1: mulps xmm2, xmmword ptr [ebp - 0xd0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x172187D8: mulps xmm0, xmmword ptr [ebp - 0xc0] */
    _xmm[4] = _xmm[2]; /* 0x172187DF: movaps xmm4, xmm2 */
    _xmm[2] = _xmm[1]; /* 0x172187E2: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x172187E5: mulps xmm2, xmmword ptr [ebp - 0x110] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x172187EC: mulps xmm1, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x172187F3: addps xmm1, xmm0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x172187F6: addps xmm2, xmm4 */
    _xmm[0] = _xmm[2]; /* 0x172187F9: movaps xmm0, xmm2 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x172187FC: unpcklps xmm0, xmm1 */
    MEM64(edi) = _xmm[0].u64[0]; /* 0x172187FF: movlps qword ptr [edi], xmm0 */
    MEM64(edi + ecx) = _xmm[0].u64[1]; /* 0x17218802: movhps qword ptr [edi + ecx], xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x17218806: unpckhps xmm2, xmm1 */
    edx = ecx + ecx * 2; /* 0x17218809: lea edx, [ecx + ecx*2] */
    MEM64(edi + ecx * 2) = _xmm[2].u64[0]; /* 0x1721880C: movlps qword ptr [edi + ecx*2], xmm2 */
    MEM64(edx + edi) = _xmm[2].u64[1]; /* 0x17218810: movhps qword ptr [edx + edi], xmm2 */
    edx = eax; /* 0x17218814: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17218816: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17218816: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x17218819: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x1721881B: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721881D: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721881D: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x17218820: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17218822: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_172187A8; /* 0x17218825: jne 0x172187a8 */
L_17218827:
    goto L_1721882C; /* 0x17218827: jmp 0x1721882c */
L_17218829:
    esi = MEM32(ebx + 0x10); /* 0x17218829: mov esi, dword ptr [ebx + 0x10] */
L_1721882C:
    eax = MEM32(ebp + (-0x8)); /* 0x1721882C: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1721882F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721884B; /* 0x17218831: jbe 0x1721884b */
L_17218833:
    MEM32(ebp + (-0x4)) = eax; /* 0x17218833: mov dword ptr [ebp - 4], eax */
L_17218836:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17218836: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x17218839: push esi */
    PUSH32(esp, edi); /* 0x1721883A: push edi */
    RECOMP_CALL(sub_17217078); /* 0x1721883B: call 0x17217078 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x17218840: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x17218843: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17218846: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17218836; /* 0x17218849: jne 0x17218836 */
L_1721884B:
    eax = MEM32(ebp + (-0xC)); /* 0x1721884B: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1721884E: pop edi */
    esi = POP32_VAL(esp); /* 0x1721884F: pop esi */
    esp = ebp; /* 0x17218850: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17218852: pop ebp */
    esp = ebx; /* 0x17218853: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17218855: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17218856: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721885E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721885Eu);

L_1721885E:
    edi = edi; /* 0x1721885E: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17218860: push ebx */
    ebx = esp; /* 0x17218861: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17218863: push ecx */
    PUSH32(esp, ecx); /* 0x17218864: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17218865: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17218868: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721886B: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721886C: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1721886F: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17218873: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x148u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x148u; /* 0x17218875: sub esp, 0x148 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x1721887B: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x1721887E: push esi */
    PUSH32(esp, edi); /* 0x1721887F: push edi */
    edi = MEM32(ebx + 0x8); /* 0x17218880: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xCu); /* 0x17218883: push 0xc */
    edx = eax; /* 0x17218885: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x17218887: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1721888A: pop ecx */
    /* cmp ecx, eax */ /* 0x1721888B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1721888D: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1721888F: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x17218891: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x17218893: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x17218893: shr esi, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x17218896: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x17218899: mov dword ptr [ebp - 0xc], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17218A49; /* 0x1721889C: je 0x17218a49 */
L_172188A2:
    PUSH32(esp, 4); /* 0x172188A2: push 4 */
    PUSH32(esp, 4); /* 0x172188A4: push 4 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x172188A6: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x140); /* 0x172188A9: lea ecx, [ebp - 0x140] */
    RECOMP_CALL(sub_172181DA); /* 0x172188AF: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x172188B4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x172188B6: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x172188B9: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x172188BC: xorps xmm0, xmm0 */
    xmm_st(ebp + (-0x40), _xmm[0]); /* 0x172188BF: movaps xmmword ptr [ebp - 0x40], xmm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218A49; /* 0x172188C3: jbe 0x17218a49 */
L_172188C9:
    MEM32(ebp + (-0x4)) = esi; /* 0x172188C9: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x172188CC: mov esi, dword ptr [ebx + 0x10] */
L_172188CF:
    _xmm[3] = xmm_ld(ebp + (-0x40)); /* 0x172188CF: movaps xmm3, xmmword ptr [ebp - 0x40] */
    _xmm[0] = _xmm[3]; /* 0x172188D3: movaps xmm0, xmm3 */
    _xmm[0].u64[0] = MEM64(esi); /* 0x172188D6: movlps xmm0, qword ptr [esi] */
    _xmm[1] = _xmm[0]; /* 0x172188D9: movaps xmm1, xmm0 */
    _xmm[1].u64[1] = MEM64(esi + eax); /* 0x172188DC: movhps xmm1, qword ptr [esi + eax] */
    _xmm[0] = _xmm[3]; /* 0x172188E0: movaps xmm0, xmm3 */
    _xmm[0].u64[0] = MEM64(esi + eax * 2); /* 0x172188E3: movlps xmm0, qword ptr [esi + eax*2] */
    _xmm[2] = _xmm[0]; /* 0x172188E7: movaps xmm2, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x172188EA: movaps xmm0, xmm1 */
    edx = eax + eax * 2; /* 0x172188ED: lea edx, [eax + eax*2] */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x172188F0: movhps xmm2, qword ptr [edx + esi] */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x172188F4: shufps xmm1, xmm2, 0xdd */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x172188F8: shufps xmm0, xmm2, 0x88 */
    _xmm[5] = _xmm[1]; /* 0x172188FC: movaps xmm5, xmm1 */
    _xmm[1] = _xmm[3]; /* 0x172188FF: movaps xmm1, xmm3 */
    _xmm[1].u64[0] = MEM64(esi + 0x8); /* 0x17218902: movlps xmm1, qword ptr [esi + 8] */
    _xmm[3].u64[0] = MEM64(esi + eax * 2 + 0x8); /* 0x17218906: movlps xmm3, qword ptr [esi + eax*2 + 8] */
    _xmm[3].u64[1] = MEM64(edx + esi + 0x8); /* 0x1721890B: movhps xmm3, qword ptr [edx + esi + 8] */
    _xmm[2] = _xmm[1]; /* 0x17218910: movaps xmm2, xmm1 */
    _xmm[2].u64[1] = MEM64(eax + esi + 0x8); /* 0x17218913: movhps xmm2, qword ptr [eax + esi + 8] */
    _xmm[1] = _xmm[2]; /* 0x17218918: movaps xmm1, xmm2 */
    { xmm_t _s = _xmm[3], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[1]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1721891B: shufps xmm2, xmm3, 0xdd */
    { xmm_t _s = _xmm[3], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x1721891F: shufps xmm1, xmm3, 0x88 */
    _xmm[3] = _xmm[2]; /* 0x17218923: movaps xmm3, xmm2 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x80))); float _s1 = sse_f32(MEM32(ebp + (-0x80) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x80) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x80) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17218926: mulps xmm3, xmmword ptr [ebp - 0x80] */
    xmm_st(ebp + (-0x20), _xmm[2]); /* 0x1721892A: movaps xmmword ptr [ebp - 0x20], xmm2 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x70))); float _s1 = sse_f32(MEM32(ebp + (-0x70) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x70) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x70) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721892E: mulps xmm2, xmmword ptr [ebp - 0x70] */
    _xmm[7] = _xmm[0]; /* 0x17218932: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x140))); float _s1 = sse_f32(MEM32(ebp + (-0x140) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x140) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x140) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17218935: mulps xmm7, xmmword ptr [ebp - 0x140] */
    _xmm[4] = _xmm[3]; /* 0x1721893C: movaps xmm4, xmm3 */
    _xmm[3] = _xmm[1]; /* 0x1721893F: movaps xmm3, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17218942: mulps xmm3, xmmword ptr [ebp - 0xc0] */
    _xmm[6] = _xmm[5]; /* 0x17218949: movaps xmm6, xmm5 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721894C: mulps xmm6, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x17218953: addps xmm7, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x17218956: movaps xmm6, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17218959: addps xmm6, xmm3 */
    _xmm[3] = _xmm[6]; /* 0x1721895C: movaps xmm3, xmm6 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1721895F: addps xmm3, xmm4 */
    _xmm[4] = _xmm[2]; /* 0x17218962: movaps xmm4, xmm2 */
    _xmm[7] = _xmm[0]; /* 0x17218965: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x130))); float _s1 = sse_f32(MEM32(ebp + (-0x130) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x130) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x130) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17218968: mulps xmm7, xmmword ptr [ebp - 0x130] */
    _xmm[2] = _xmm[1]; /* 0x1721896F: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xB0))); float _s1 = sse_f32(MEM32(ebp + (-0xB0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xB0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xB0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17218972: mulps xmm2, xmmword ptr [ebp - 0xb0] */
    _xmm[6] = _xmm[5]; /* 0x17218979: movaps xmm6, xmm5 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xF0))); float _s1 = sse_f32(MEM32(ebp + (-0xF0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xF0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xF0) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721897C: mulps xmm6, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x17218983: addps xmm7, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x17218986: movaps xmm6, xmm7 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17218989: addps xmm6, xmm2 */
    _xmm[2] = _xmm[6]; /* 0x1721898C: movaps xmm2, xmm6 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721898F: addps xmm2, xmm4 */
    xmm_st(ebp + (-0x30), _xmm[2]); /* 0x17218992: movaps xmmword ptr [ebp - 0x30], xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x20)); /* 0x17218996: movaps xmm2, xmmword ptr [ebp - 0x20] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x60))); float _s1 = sse_f32(MEM32(ebp + (-0x60) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x60) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x60) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721899A: mulps xmm2, xmmword ptr [ebp - 0x60] */
    _xmm[7] = _xmm[0]; /* 0x1721899E: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x120))); float _s1 = sse_f32(MEM32(ebp + (-0x120) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x120) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x120) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x172189A1: mulps xmm7, xmmword ptr [ebp - 0x120] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x172189A8: mulps xmm0, xmmword ptr [ebp - 0x110] */
    _xmm[4] = _xmm[1]; /* 0x172189AF: movaps xmm4, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xA0))); float _s1 = sse_f32(MEM32(ebp + (-0xA0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xA0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xA0) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x172189B2: mulps xmm4, xmmword ptr [ebp - 0xa0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x90))); float _s1 = sse_f32(MEM32(ebp + (-0x90) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x90) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x90) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x172189B9: mulps xmm1, xmmword ptr [ebp - 0x90] */
    _xmm[6] = _xmm[5]; /* 0x172189C0: movaps xmm6, xmm5 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xE0))); float _s1 = sse_f32(MEM32(ebp + (-0xE0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xE0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xE0) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x172189C3: mulps xmm6, xmmword ptr [ebp - 0xe0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x172189CA: mulps xmm5, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x172189D1: addps xmm7, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x172189D4: movaps xmm6, xmm7 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x172189D7: addps xmm6, xmm4 */
    _xmm[4] = _xmm[6]; /* 0x172189DA: movaps xmm4, xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x172189DD: addps xmm4, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x20)); /* 0x172189E0: movaps xmm2, xmmword ptr [ebp - 0x20] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x172189E4: mulps xmm2, xmmword ptr [ebp - 0x50] */
    _xmm[6] = _xmm[2]; /* 0x172189E8: movaps xmm6, xmm2 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x172189EB: addps xmm0, xmm5 */
    _xmm[2] = _xmm[0]; /* 0x172189EE: movaps xmm2, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x172189F1: addps xmm2, xmm1 */
    _xmm[0] = _xmm[3]; /* 0x172189F4: movaps xmm0, xmm3 */
    { xmm_t _s = xmm_ld(ebp + (-0x30)), _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x172189F7: unpcklps xmm0, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x172189FB: addps xmm2, xmm6 */
    _xmm[1] = _xmm[4]; /* 0x172189FE: movaps xmm1, xmm4 */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17218A01: unpcklps xmm1, xmm2 */
    MEM64(edi) = _xmm[0].u64[0]; /* 0x17218A04: movlps qword ptr [edi], xmm0 */
    MEM64(edi + 0x8) = _xmm[1].u64[0]; /* 0x17218A07: movlps qword ptr [edi + 8], xmm1 */
    { xmm_t _s = xmm_ld(ebp + (-0x30)), _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x17218A0B: unpckhps xmm3, xmmword ptr [ebp - 0x30] */
    MEM64(edi + ecx) = _xmm[0].u64[1]; /* 0x17218A0F: movhps qword ptr [edi + ecx], xmm0 */
    MEM64(ecx + edi + 0x8) = _xmm[1].u64[1]; /* 0x17218A13: movhps qword ptr [ecx + edi + 8], xmm1 */
    MEM64(edi + ecx * 2) = _xmm[3].u64[0]; /* 0x17218A18: movlps qword ptr [edi + ecx*2], xmm3 */
    edx = ecx + ecx * 2; /* 0x17218A1C: lea edx, [ecx + ecx*2] */
    { xmm_t _s = _xmm[2], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _s.u32[2]; _xmm[4].u32[2] = _d.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x17218A1F: unpckhps xmm4, xmm2 */
    MEM64(edi + ecx * 2 + 0x8) = _xmm[4].u64[0]; /* 0x17218A22: movlps qword ptr [edi + ecx*2 + 8], xmm4 */
    MEM64(edx + edi) = _xmm[3].u64[1]; /* 0x17218A27: movhps qword ptr [edx + edi], xmm3 */
    MEM64(edx + edi + 0x8) = _xmm[4].u64[1]; /* 0x17218A2B: movhps qword ptr [edx + edi + 8], xmm4 */
    edx = eax; /* 0x17218A30: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17218A32: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17218A32: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x17218A35: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x17218A37: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17218A39: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17218A39: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x17218A3C: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17218A3E: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_172188CF; /* 0x17218A41: jne 0x172188cf */
L_17218A47:
    goto L_17218A4C; /* 0x17218A47: jmp 0x17218a4c */
L_17218A49:
    esi = MEM32(ebx + 0x10); /* 0x17218A49: mov esi, dword ptr [ebx + 0x10] */
L_17218A4C:
    eax = MEM32(ebp + (-0x8)); /* 0x17218A4C: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x17218A4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218A6B; /* 0x17218A51: jbe 0x17218a6b */
L_17218A53:
    MEM32(ebp + (-0x4)) = eax; /* 0x17218A53: mov dword ptr [ebp - 4], eax */
L_17218A56:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17218A56: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x17218A59: push esi */
    PUSH32(esp, edi); /* 0x17218A5A: push edi */
    RECOMP_CALL(sub_172170B6); /* 0x17218A5B: call 0x172170b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x17218A60: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x17218A63: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17218A66: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17218A56; /* 0x17218A69: jne 0x17218a56 */
L_17218A6B:
    eax = MEM32(ebp + (-0xC)); /* 0x17218A6B: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x17218A6E: pop edi */
    esi = POP32_VAL(esp); /* 0x17218A6F: pop esi */
    esp = ebp; /* 0x17218A70: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17218A72: pop ebp */
    esp = ebx; /* 0x17218A73: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17218A75: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17218A76: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17218A7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17218A7Eu);

L_17218A7E:
    edi = edi; /* 0x17218A7E: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17218A80: push ebx */
    ebx = esp; /* 0x17218A81: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17218A83: push ecx */
    PUSH32(esp, ecx); /* 0x17218A84: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17218A85: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17218A88: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17218A8B: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17218A8C: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17218A8F: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17218A93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x17218A95: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x17218A9B: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x17218A9E: push esi */
    PUSH32(esp, edi); /* 0x17218A9F: push edi */
    edi = MEM32(ebx + 0x8); /* 0x17218AA0: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xCu); /* 0x17218AA3: push 0xc */
    edx = eax; /* 0x17218AA5: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x17218AA7: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17218AAA: pop ecx */
    /* cmp ecx, eax */ /* 0x17218AAB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17218AAD: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x17218AAF: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x17218AB1: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x17218AB3: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x17218AB3: shr esi, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x17218AB6: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x17218AB9: mov dword ptr [ebp - 0xc], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17218C06; /* 0x17218ABC: je 0x17218c06 */
L_17218AC2:
    PUSH32(esp, 3); /* 0x17218AC2: push 3 */
    PUSH32(esp, 3); /* 0x17218AC4: push 3 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17218AC6: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x110); /* 0x17218AC9: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_172181DA); /* 0x17218ACF: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x17218AD4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x17218AD6: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x17218AD9: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x17218ADC: xorps xmm5, xmm5 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218C06; /* 0x17218ADF: jbe 0x17218c06 */
L_17218AE5:
    MEM32(ebp + (-0x4)) = esi; /* 0x17218AE5: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x17218AE8: mov esi, dword ptr [ebx + 0x10] */
L_17218AEB:
    _xmm[4].u64[0] = MEM32(esi + 0x8); _xmm[4].u64[1] = 0; /* 0x17218AEB: movss xmm4, dword ptr [esi + 8] */
    _xmm[0] = _xmm[5]; /* 0x17218AF0: movaps xmm0, xmm5 */
    _xmm[0].u64[0] = MEM64(esi); /* 0x17218AF3: movlps xmm0, qword ptr [esi] */
    _xmm[1] = _xmm[0]; /* 0x17218AF6: movaps xmm1, xmm0 */
    _xmm[1].u64[1] = MEM64(esi + eax); /* 0x17218AF9: movhps xmm1, qword ptr [esi + eax] */
    edx = eax + eax * 2; /* 0x17218AFD: lea edx, [eax + eax*2] */
    _xmm[0] = _xmm[5]; /* 0x17218B00: movaps xmm0, xmm5 */
    _xmm[0].u64[0] = MEM64(esi + eax * 2); /* 0x17218B03: movlps xmm0, qword ptr [esi + eax*2] */
    _xmm[2] = _xmm[0]; /* 0x17218B07: movaps xmm2, xmm0 */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x17218B0A: movhps xmm2, qword ptr [edx + esi] */
    _xmm[0] = _xmm[1]; /* 0x17218B0E: movaps xmm0, xmm1 */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x17218B11: shufps xmm1, xmm2, 0xdd */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x17218B15: shufps xmm0, xmm2, 0x88 */
    _xmm[2].u64[0] = MEM32(esi + eax * 2 + 0x8); _xmm[2].u64[1] = 0; /* 0x17218B19: movss xmm2, dword ptr [esi + eax*2 + 8] */
    _xmm[3] = _xmm[1]; /* 0x17218B1F: movaps xmm3, xmm1 */
    _xmm[1].u64[0] = MEM32(edx + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x17218B22: movss xmm1, dword ptr [edx + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x17218B28: unpcklps xmm2, xmm1 */
    _xmm[1].u64[0] = MEM32(eax + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x17218B2B: movss xmm1, dword ptr [eax + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x17218B31: unpcklps xmm4, xmm1 */
    _xmm[1] = _xmm[4]; /* 0x17218B34: movaps xmm1, xmm4 */
    _xmm[1].u64[1] = _xmm[2].u64[0]; /* 0x17218B37: movlhps xmm1, xmm2 */
    _xmm[2] = _xmm[1]; /* 0x17218B3A: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x90))); float _s1 = sse_f32(MEM32(ebp + (-0x90) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x90) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x90) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17218B3D: mulps xmm2, xmmword ptr [ebp - 0x90] */
    _xmm[4] = _xmm[2]; /* 0x17218B44: movaps xmm4, xmm2 */
    _xmm[6] = _xmm[0]; /* 0x17218B47: movaps xmm6, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17218B4A: mulps xmm6, xmmword ptr [ebp - 0x110] */
    _xmm[2] = _xmm[3]; /* 0x17218B51: movaps xmm2, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17218B54: mulps xmm2, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17218B5B: addps xmm6, xmm2 */
    _xmm[2] = _xmm[6]; /* 0x17218B5E: movaps xmm2, xmm6 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17218B61: addps xmm2, xmm4 */
    _xmm[4] = _xmm[1]; /* 0x17218B64: movaps xmm4, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x80))); float _s1 = sse_f32(MEM32(ebp + (-0x80) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x80) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x80) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17218B67: mulps xmm4, xmmword ptr [ebp - 0x80] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x70))); float _s1 = sse_f32(MEM32(ebp + (-0x70) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x70) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x70) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17218B6B: mulps xmm1, xmmword ptr [ebp - 0x70] */
    _xmm[6] = _xmm[4]; /* 0x17218B6F: movaps xmm6, xmm4 */
    _xmm[7] = _xmm[0]; /* 0x17218B72: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xF0))); float _s1 = sse_f32(MEM32(ebp + (-0xF0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xF0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xF0) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17218B75: mulps xmm0, xmmword ptr [ebp - 0xf0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17218B7C: mulps xmm7, xmmword ptr [ebp - 0x100] */
    _xmm[4] = _xmm[3]; /* 0x17218B83: movaps xmm4, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17218B86: mulps xmm4, xmmword ptr [ebp - 0xc0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xB0))); float _s1 = sse_f32(MEM32(ebp + (-0xB0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xB0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xB0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17218B8D: mulps xmm3, xmmword ptr [ebp - 0xb0] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17218B94: addps xmm0, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17218B97: addps xmm0, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x17218B9A: addps xmm7, xmm4 */
    _xmm[4] = _xmm[7]; /* 0x17218B9D: movaps xmm4, xmm7 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17218BA0: addps xmm4, xmm6 */
    _xmm[1] = _xmm[2]; /* 0x17218BA3: movaps xmm1, xmm2 */
    { xmm_t _s = _xmm[4], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17218BA6: unpcklps xmm1, xmm4 */
    MEM64(edi) = _xmm[1].u64[0]; /* 0x17218BA9: movlps qword ptr [edi], xmm1 */
    MEM64(edi + ecx) = _xmm[1].u64[1]; /* 0x17218BAC: movhps qword ptr [edi + ecx], xmm1 */
    MEM32(edi + 0x8) = _xmm[0].u32[0]; /* 0x17218BB0: movss dword ptr [edi + 8], xmm0 */
    _xmm[3] = _xmm[0]; /* 0x17218BB5: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _d.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17218BB8: unpcklps xmm3, xmm0 */
    _xmm[1] = _xmm[3]; /* 0x17218BBB: movaps xmm1, xmm3 */
    _xmm[1].u64[0] = _xmm[3].u64[1]; /* 0x17218BBE: movhlps xmm1, xmm3 */
    MEM32(ecx + edi + 0x8) = _xmm[1].u32[0]; /* 0x17218BC1: movss dword ptr [ecx + edi + 8], xmm1 */
    { xmm_t _s = _xmm[4], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x17218BC7: unpckhps xmm2, xmm4 */
    MEM64(edi + ecx * 2) = _xmm[2].u64[0]; /* 0x17218BCA: movlps qword ptr [edi + ecx*2], xmm2 */
    edx = ecx + ecx * 2; /* 0x17218BCE: lea edx, [ecx + ecx*2] */
    MEM64(edx + edi) = _xmm[2].u64[1]; /* 0x17218BD1: movhps qword ptr [edx + edi], xmm2 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _s.u32[2]; _xmm[0].u32[2] = _d.u32[3]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x17218BD5: unpckhps xmm0, xmm0 */
    edx = ecx + ecx * 2; /* 0x17218BD8: lea edx, [ecx + ecx*2] */
    MEM32(edi + ecx * 2 + 0x8) = _xmm[0].u32[0]; /* 0x17218BDB: movss dword ptr [edi + ecx*2 + 8], xmm0 */
    _xmm[1] = _xmm[0]; /* 0x17218BE1: movaps xmm1, xmm0 */
    _xmm[1].u64[0] = _xmm[0].u64[1]; /* 0x17218BE4: movhlps xmm1, xmm0 */
    MEM32(edx + edi + 0x8) = _xmm[1].u32[0]; /* 0x17218BE7: movss dword ptr [edx + edi + 8], xmm1 */
    edx = eax; /* 0x17218BED: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17218BEF: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17218BEF: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x17218BF2: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x17218BF4: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17218BF6: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17218BF6: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x17218BF9: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17218BFB: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17218AEB; /* 0x17218BFE: jne 0x17218aeb */
L_17218C04:
    goto L_17218C09; /* 0x17218C04: jmp 0x17218c09 */
L_17218C06:
    esi = MEM32(ebx + 0x10); /* 0x17218C06: mov esi, dword ptr [ebx + 0x10] */
L_17218C09:
    eax = MEM32(ebp + (-0x8)); /* 0x17218C09: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x17218C0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218C28; /* 0x17218C0E: jbe 0x17218c28 */
L_17218C10:
    MEM32(ebp + (-0x4)) = eax; /* 0x17218C10: mov dword ptr [ebp - 4], eax */
L_17218C13:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17218C13: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x17218C16: push esi */
    PUSH32(esp, edi); /* 0x17218C17: push edi */
    RECOMP_CALL(sub_17217C8F); /* 0x17218C18: call 0x17217c8f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x17218C1D: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x17218C20: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17218C23: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17218C13; /* 0x17218C26: jne 0x17218c13 */
L_17218C28:
    eax = MEM32(ebp + (-0xC)); /* 0x17218C28: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x17218C2B: pop edi */
    esi = POP32_VAL(esp); /* 0x17218C2C: pop esi */
    esp = ebp; /* 0x17218C2D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17218C2F: pop ebp */
    esp = ebx; /* 0x17218C30: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17218C32: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17218C33: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17218C3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17218C3Bu);

L_17218C3B:
    edi = edi; /* 0x17218C3B: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17218C3D: push ebx */
    ebx = esp; /* 0x17218C3E: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17218C40: push ecx */
    PUSH32(esp, ecx); /* 0x17218C41: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17218C42: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17218C45: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17218C48: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17218C49: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17218C4C: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17218C50: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x128u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x128u; /* 0x17218C52: sub esp, 0x128 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x17218C58: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x17218C5B: push esi */
    PUSH32(esp, edi); /* 0x17218C5C: push edi */
    edi = MEM32(ebx + 0x8); /* 0x17218C5D: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xCu); /* 0x17218C60: push 0xc */
    edx = eax; /* 0x17218C62: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x17218C64: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17218C67: pop ecx */
    /* cmp ecx, eax */ /* 0x17218C68: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17218C6A: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x17218C6C: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x17218C6E: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x17218C70: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x17218C70: shr esi, 2 */
    MEM32(ebp + (-0xC)) = eax; /* 0x17218C73: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x17218C76: mov dword ptr [ebp - 8], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17218E18; /* 0x17218C79: je 0x17218e18 */
L_17218C7F:
    PUSH32(esp, 4); /* 0x17218C7F: push 4 */
    PUSH32(esp, 4); /* 0x17218C81: push 4 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17218C83: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x120); /* 0x17218C86: lea ecx, [ebp - 0x120] */
    RECOMP_CALL(sub_172181DA); /* 0x17218C8C: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x17218C91: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x17218C93: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x17218C96: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x17218C99: xorps xmm0, xmm0 */
    xmm_st(ebp + (-0x20), _xmm[0]); /* 0x17218C9C: movaps xmmword ptr [ebp - 0x20], xmm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218E18; /* 0x17218CA0: jbe 0x17218e18 */
L_17218CA6:
    MEM32(ebp + (-0x4)) = esi; /* 0x17218CA6: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x17218CA9: mov esi, dword ptr [ebx + 0x10] */
L_17218CAC:
    _xmm[1] = xmm_ld(ebp + (-0x20)); /* 0x17218CAC: movaps xmm1, xmmword ptr [ebp - 0x20] */
    _xmm[1].u64[0] = MEM64(esi); /* 0x17218CB0: movlps xmm1, qword ptr [esi] */
    _xmm[1].u64[1] = MEM64(esi + eax); /* 0x17218CB3: movhps xmm1, qword ptr [esi + eax] */
    _xmm[2] = xmm_ld(ebp + (-0x20)); /* 0x17218CB7: movaps xmm2, xmmword ptr [ebp - 0x20] */
    _xmm[2].u64[0] = MEM64(esi + eax * 2); /* 0x17218CBB: movlps xmm2, qword ptr [esi + eax*2] */
    _xmm[4].u64[0] = MEM32(esi + 0x8); _xmm[4].u64[1] = 0; /* 0x17218CBF: movss xmm4, dword ptr [esi + 8] */
    _xmm[0] = _xmm[1]; /* 0x17218CC4: movaps xmm0, xmm1 */
    edx = eax + eax * 2; /* 0x17218CC7: lea edx, [eax + eax*2] */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x17218CCA: movhps xmm2, qword ptr [edx + esi] */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x17218CCE: shufps xmm0, xmm2, 0x88 */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x17218CD2: shufps xmm1, xmm2, 0xdd */
    _xmm[2].u64[0] = MEM32(esi + eax * 2 + 0x8); _xmm[2].u64[1] = 0; /* 0x17218CD6: movss xmm2, dword ptr [esi + eax*2 + 8] */
    _xmm[3] = _xmm[1]; /* 0x17218CDC: movaps xmm3, xmm1 */
    _xmm[1].u64[0] = MEM32(edx + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x17218CDF: movss xmm1, dword ptr [edx + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x17218CE5: unpcklps xmm2, xmm1 */
    _xmm[1].u64[0] = MEM32(eax + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x17218CE8: movss xmm1, dword ptr [eax + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x17218CEE: unpcklps xmm4, xmm1 */
    _xmm[1] = _xmm[4]; /* 0x17218CF1: movaps xmm1, xmm4 */
    _xmm[1].u64[1] = _xmm[2].u64[0]; /* 0x17218CF4: movlhps xmm1, xmm2 */
    _xmm[5] = _xmm[0]; /* 0x17218CF7: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xF0))); float _s1 = sse_f32(MEM32(ebp + (-0xF0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xF0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xF0) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218CFA: mulps xmm5, xmmword ptr [ebp - 0xf0] */
    _xmm[4] = _xmm[3]; /* 0x17218D01: movaps xmm4, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xB0))); float _s1 = sse_f32(MEM32(ebp + (-0xB0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xB0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xB0) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17218D04: mulps xmm4, xmmword ptr [ebp - 0xb0] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17218D0B: addps xmm5, xmm4 */
    _xmm[4] = _xmm[5]; /* 0x17218D0E: movaps xmm4, xmm5 */
    _xmm[2] = _xmm[1]; /* 0x17218D11: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x70))); float _s1 = sse_f32(MEM32(ebp + (-0x70) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x70) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x70) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17218D14: mulps xmm2, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17218D18: addps xmm4, xmm2 */
    _xmm[2] = _xmm[4]; /* 0x17218D1B: movaps xmm2, xmm4 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17218D1E: addps xmm2, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[4] = _d; } /* 0x17218D22: rcpps xmm4, xmm2 */
    _xmm[5] = _xmm[4]; /* 0x17218D25: movaps xmm5, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218D28: mulps xmm5, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218D2B: mulps xmm5, xmm4 */
    _xmm[2] = _xmm[4]; /* 0x17218D2E: movaps xmm2, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17218D31: addps xmm2, xmm4 */
    _xmm[4] = _xmm[2]; /* 0x17218D34: movaps xmm4, xmm2 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x17218D37: subps xmm4, xmm5 */
    _xmm[6] = _xmm[0]; /* 0x17218D3A: movaps xmm6, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x120))); float _s1 = sse_f32(MEM32(ebp + (-0x120) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x120) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x120) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17218D3D: mulps xmm6, xmmword ptr [ebp - 0x120] */
    _xmm[5] = _xmm[3]; /* 0x17218D44: movaps xmm5, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xE0))); float _s1 = sse_f32(MEM32(ebp + (-0xE0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xE0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xE0) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218D47: mulps xmm5, xmmword ptr [ebp - 0xe0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17218D4E: addps xmm6, xmm5 */
    _xmm[2] = _xmm[1]; /* 0x17218D51: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xA0))); float _s1 = sse_f32(MEM32(ebp + (-0xA0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xA0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xA0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17218D54: mulps xmm2, xmmword ptr [ebp - 0xa0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17218D5B: addps xmm6, xmm2 */
    _xmm[7] = _xmm[0]; /* 0x17218D5E: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17218D61: mulps xmm0, xmmword ptr [ebp - 0x100] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17218D68: mulps xmm7, xmmword ptr [ebp - 0x110] */
    _xmm[2] = _xmm[6]; /* 0x17218D6F: movaps xmm2, xmm6 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x60))); float _s1 = sse_f32(MEM32(ebp + (-0x60) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x60) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x60) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17218D72: addps xmm2, xmmword ptr [ebp - 0x60] */
    _xmm[6] = _xmm[3]; /* 0x17218D76: movaps xmm6, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17218D79: mulps xmm3, xmmword ptr [ebp - 0xc0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17218D80: mulps xmm6, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17218D87: addps xmm0, xmm3 */
    _xmm[5] = _xmm[1]; /* 0x17218D8A: movaps xmm5, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x90))); float _s1 = sse_f32(MEM32(ebp + (-0x90) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x90) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x90) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218D8D: mulps xmm5, xmmword ptr [ebp - 0x90] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x80))); float _s1 = sse_f32(MEM32(ebp + (-0x80) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x80) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x80) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17218D94: mulps xmm1, xmmword ptr [ebp - 0x80] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17218D98: addps xmm0, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17218D9B: addps xmm0, xmmword ptr [ebp - 0x40] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x17218D9F: addps xmm7, xmm6 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x17218DA2: addps xmm7, xmm5 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17218DA5: mulps xmm2, xmm4 */
    _xmm[5] = _xmm[7]; /* 0x17218DA8: movaps xmm5, xmm7 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17218DAB: addps xmm5, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218DAF: mulps xmm5, xmm4 */
    _xmm[3] = _xmm[2]; /* 0x17218DB2: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[5], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _d.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17218DB5: unpcklps xmm3, xmm5 */
    MEM64(edi) = _xmm[3].u64[0]; /* 0x17218DB8: movlps qword ptr [edi], xmm3 */
    MEM64(edi + ecx) = _xmm[3].u64[1]; /* 0x17218DBB: movhps qword ptr [edi + ecx], xmm3 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17218DBF: mulps xmm0, xmm4 */
    _xmm[1] = _xmm[0]; /* 0x17218DC2: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[4], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17218DC5: unpcklps xmm1, xmm4 */
    MEM32(edi + 0x8) = _xmm[1].u32[0]; /* 0x17218DC8: movss dword ptr [edi + 8], xmm1 */
    _xmm[3] = _xmm[1]; /* 0x17218DCD: movaps xmm3, xmm1 */
    _xmm[3].u64[0] = _xmm[1].u64[1]; /* 0x17218DD0: movhlps xmm3, xmm1 */
    MEM32(ecx + edi + 0x8) = _xmm[3].u32[0]; /* 0x17218DD3: movss dword ptr [ecx + edi + 8], xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x17218DD9: unpckhps xmm2, xmm5 */
    { xmm_t _s = _xmm[4], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _s.u32[2]; _xmm[0].u32[2] = _d.u32[3]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x17218DDC: unpckhps xmm0, xmm4 */
    MEM64(edi + ecx * 2) = _xmm[2].u64[0]; /* 0x17218DDF: movlps qword ptr [edi + ecx*2], xmm2 */
    edx = ecx + ecx * 2; /* 0x17218DE3: lea edx, [ecx + ecx*2] */
    MEM64(edx + edi) = _xmm[2].u64[1]; /* 0x17218DE6: movhps qword ptr [edx + edi], xmm2 */
    edx = ecx + ecx * 2; /* 0x17218DEA: lea edx, [ecx + ecx*2] */
    MEM32(edi + ecx * 2 + 0x8) = _xmm[0].u32[0]; /* 0x17218DED: movss dword ptr [edi + ecx*2 + 8], xmm0 */
    _xmm[1] = _xmm[0]; /* 0x17218DF3: movaps xmm1, xmm0 */
    _xmm[1].u64[0] = _xmm[0].u64[1]; /* 0x17218DF6: movhlps xmm1, xmm0 */
    MEM32(edx + edi + 0x8) = _xmm[1].u32[0]; /* 0x17218DF9: movss dword ptr [edx + edi + 8], xmm1 */
    edx = eax; /* 0x17218DFF: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17218E01: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17218E01: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x17218E04: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x17218E06: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17218E08: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17218E08: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x17218E0B: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17218E0D: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17218CAC; /* 0x17218E10: jne 0x17218cac */
L_17218E16:
    goto L_17218E1B; /* 0x17218E16: jmp 0x17218e1b */
L_17218E18:
    esi = MEM32(ebx + 0x10); /* 0x17218E18: mov esi, dword ptr [ebx + 0x10] */
L_17218E1B:
    eax = MEM32(ebp + (-0xC)); /* 0x17218E1B: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x17218E1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17218E3A; /* 0x17218E20: jbe 0x17218e3a */
L_17218E22:
    MEM32(ebp + (-0x4)) = eax; /* 0x17218E22: mov dword ptr [ebp - 4], eax */
L_17218E25:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17218E25: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x17218E28: push esi */
    PUSH32(esp, edi); /* 0x17218E29: push edi */
    RECOMP_CALL(sub_17217E3C); /* 0x17218E2A: call 0x17217e3c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x17218E2F: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x17218E32: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17218E35: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17218E25; /* 0x17218E38: jne 0x17218e25 */
L_17218E3A:
    eax = MEM32(ebp + (-0x8)); /* 0x17218E3A: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x17218E3D: pop edi */
    esi = POP32_VAL(esp); /* 0x17218E3E: pop esi */
    esp = ebp; /* 0x17218E3F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17218E41: pop ebp */
    esp = ebx; /* 0x17218E42: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17218E44: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17218E45: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17218E4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17218E4Du);

L_17218E4D:
    edi = edi; /* 0x17218E4D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17218E4F: push ebp */
    ebp = esp; /* 0x17218E50: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17218E52: mov eax, dword ptr [ebp + 8] */
    _xmm[0] = xmm_ld(eax); /* 0x17218E55: movaps xmm0, xmmword ptr [eax] */
    /* nop */ /* 0x17218E58: nop  */
    _xmm[1] = _xmm[0]; /* 0x17218E59: movaps xmm1, xmm0 */
    _xmm[6] = _xmm[0]; /* 0x17218E5C: movaps xmm6, xmm0 */
    { xmm_t _s = xmm_ld(0x1723C570); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x17218E5F: andps xmm0, xmmword ptr [0x1723c570] */
    { xmm_t _s = xmm_ld(0x1723C560); for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x17218E66: andps xmm1, xmmword ptr [0x1723c560] */
    _xmm[2] = _xmm[0]; /* 0x17218E6D: movaps xmm2, xmm0 */
    _xmm[7] = _xmm[0]; /* 0x17218E70: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(0x1723C550)); float _s1 = sse_f32(MEM32(0x1723C550 + 4)); float _s2 = sse_f32(MEM32(0x1723C550 + 8)); float _s3 = sse_f32(MEM32(0x1723C550 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17218E73: mulps xmm0, xmmword ptr [0x1723c550] */
    _xmm[4] = xmm_ld(0x1723C540); /* 0x17218E7A: movaps xmm4, xmmword ptr [0x1723c540] */
    _xmm[5] = xmm_ld(0x1723C530); /* 0x17218E81: movaps xmm5, xmmword ptr [0x1723c530] */
    edx = esp; /* 0x17218E88: mov edx, esp */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFC0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFC0u; /* 0x17218E8A: add edx, -0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    edx = edx & 0xFFFFFFF0u; /* 0x17218E8D: and edx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[6] = xmm_ld(0x1723C520); /* 0x17218E90: movaps xmm6, xmmword ptr [0x1723c520] */
    _xmm[7] = xmm_ld(0x1723C510); /* 0x17218E97: movaps xmm7, xmmword ptr [0x1723c510] */
    { float _s0 = sse_f32(MEM32(0x1723C500)); float _s1 = sse_f32(MEM32(0x1723C500 + 4)); float _s2 = sse_f32(MEM32(0x1723C500 + 8)); float _s3 = sse_f32(MEM32(0x1723C500 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17218E9E: addps xmm0, xmmword ptr [0x1723c500] */
    _xmm[3] = _xmm[0]; /* 0x17218EA5: movaps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(0x1723C500)); float _s1 = sse_f32(MEM32(0x1723C500 + 4)); float _s2 = sse_f32(MEM32(0x1723C500 + 8)); float _s3 = sse_f32(MEM32(0x1723C500 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x17218EA8: subps xmm0, xmmword ptr [0x1723c500] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17218EAF: mulps xmm4, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218EB2: mulps xmm5, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17218EB5: mulps xmm6, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17218EB8: mulps xmm7, xmm0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x17218EBB: subps xmm2, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x17218EBE: subps xmm2, xmm5 */
    _xmm[5] = xmm_ld(0x1723C4F0); /* 0x17218EC1: movaps xmm5, xmmword ptr [0x1723c4f0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x17218EC8: subps xmm2, xmm6 */
    _xmm[6] = xmm_ld(0x1723C4E0); /* 0x17218ECB: movaps xmm6, xmmword ptr [0x1723c4e0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x17218ED2: subps xmm2, xmm7 */
    _xmm[4] = _xmm[2]; /* 0x17218ED5: movaps xmm4, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17218ED8: mulps xmm4, xmm4 */
    { xmm_t _s = xmm_ld(0x1723C4D0); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x17218EDB: andps xmm3, xmmword ptr [0x1723c4d0] */
    _xmm[0] = _xmm[3]; /* 0x17218EE2: movaps xmm0, xmm3 */
    _xmm[7] = _xmm[3]; /* 0x17218EE5: movaps xmm7, xmm3 */
    { xmm_t _s = xmm_ld(0x1723C4C0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x17218EE8: andps xmm0, xmmword ptr [0x1723c4c0] */
    xmm_st(edx, _xmm[0]); /* 0x17218EEF: movaps xmmword ptr [edx], xmm0 */
    xmm_st(edx + 0x10, _xmm[3]); /* 0x17218EF2: movaps xmmword ptr [edx + 0x10], xmm3 */
    xmm_st(edx + 0x20, _xmm[7]); /* 0x17218EF6: movaps xmmword ptr [edx + 0x20], xmm7 */
    eax = MEM32(edx + 0x10); /* 0x17218EFA: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx); /* 0x17218EFD: sub eax, dword ptr [edx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x1723C4B0));
    eax = eax & MEM32(0x1723C4B0); /* 0x17218EFF: and eax, dword ptr [0x1723c4b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218F05: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218F05: shl eax, 0x1e */
    MEM32(edx + 0x10) = eax; /* 0x17218F08: mov dword ptr [edx + 0x10], eax */
    eax = MEM32(edx + 0x14); /* 0x17218F0B: mov eax, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x4); /* 0x17218F0E: sub eax, dword ptr [edx + 4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x1723C4B0));
    eax = eax & MEM32(0x1723C4B0); /* 0x17218F11: and eax, dword ptr [0x1723c4b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218F17: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218F17: shl eax, 0x1e */
    MEM32(edx + 0x14) = eax; /* 0x17218F1A: mov dword ptr [edx + 0x14], eax */
    eax = MEM32(edx + 0x18); /* 0x17218F1D: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x8); /* 0x17218F20: sub eax, dword ptr [edx + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x1723C4B0));
    eax = eax & MEM32(0x1723C4B0); /* 0x17218F23: and eax, dword ptr [0x1723c4b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218F29: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218F29: shl eax, 0x1e */
    MEM32(edx + 0x18) = eax; /* 0x17218F2C: mov dword ptr [edx + 0x18], eax */
    eax = MEM32(edx + 0x1C); /* 0x17218F2F: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0xC); /* 0x17218F32: sub eax, dword ptr [edx + 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x1723C4B0));
    eax = eax & MEM32(0x1723C4B0); /* 0x17218F35: and eax, dword ptr [0x1723c4b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218F3B: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218F3B: shl eax, 0x1e */
    MEM32(edx + 0x1C) = eax; /* 0x17218F3E: mov dword ptr [edx + 0x1c], eax */
    eax = MEM32(edx + 0x20); /* 0x17218F41: mov eax, dword ptr [edx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x17218F44: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x1723C4B0));
    eax = eax & MEM32(0x1723C4B0); /* 0x17218F46: and eax, dword ptr [0x1723c4b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218F4C: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218F4C: shl eax, 0x1e */
    MEM32(edx + 0x20) = eax; /* 0x17218F4F: mov dword ptr [edx + 0x20], eax */
    eax = MEM32(edx + 0x24); /* 0x17218F52: mov eax, dword ptr [edx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x4); /* 0x17218F55: add eax, dword ptr [edx + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x1723C4B0));
    eax = eax & MEM32(0x1723C4B0); /* 0x17218F58: and eax, dword ptr [0x1723c4b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218F5E: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218F5E: shl eax, 0x1e */
    MEM32(edx + 0x24) = eax; /* 0x17218F61: mov dword ptr [edx + 0x24], eax */
    eax = MEM32(edx + 0x28); /* 0x17218F64: mov eax, dword ptr [edx + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x8); /* 0x17218F67: add eax, dword ptr [edx + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x1723C4B0));
    eax = eax & MEM32(0x1723C4B0); /* 0x17218F6A: and eax, dword ptr [0x1723c4b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218F70: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218F70: shl eax, 0x1e */
    MEM32(edx + 0x28) = eax; /* 0x17218F73: mov dword ptr [edx + 0x28], eax */
    eax = MEM32(edx + 0x2C); /* 0x17218F76: mov eax, dword ptr [edx + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0xC); /* 0x17218F79: add eax, dword ptr [edx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x1723C4B0));
    eax = eax & MEM32(0x1723C4B0); /* 0x17218F7C: and eax, dword ptr [0x1723c4b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218F82: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218F82: shl eax, 0x1e */
    MEM32(edx + 0x2C) = eax; /* 0x17218F85: mov dword ptr [edx + 0x2c], eax */
    eax = MEM32(edx); /* 0x17218F88: mov eax, dword ptr [edx] */
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218F8A: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218F8A: shl eax, 0x1e */
    MEM32(edx) = eax; /* 0x17218F8D: mov dword ptr [edx], eax */
    eax = MEM32(edx + 0x4); /* 0x17218F8F: mov eax, dword ptr [edx + 4] */
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218F92: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218F92: shl eax, 0x1e */
    MEM32(edx + 0x4) = eax; /* 0x17218F95: mov dword ptr [edx + 4], eax */
    eax = MEM32(edx + 0x8); /* 0x17218F98: mov eax, dword ptr [edx + 8] */
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218F9B: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218F9B: shl eax, 0x1e */
    MEM32(edx + 0x8) = eax; /* 0x17218F9E: mov dword ptr [edx + 8], eax */
    eax = MEM32(edx + 0xC); /* 0x17218FA1: mov eax, dword ptr [edx + 0xc] */
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x17218FA4: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x17218FA4: shl eax, 0x1e */
    MEM32(edx + 0xC) = eax; /* 0x17218FA7: mov dword ptr [edx + 0xc], eax */
    _xmm[3] = xmm_ld(edx + 0x10); /* 0x17218FAA: movaps xmm3, xmmword ptr [edx + 0x10] */
    _xmm[7] = xmm_ld(edx + 0x20); /* 0x17218FAE: movaps xmm7, xmmword ptr [edx + 0x20] */
    _xmm[0] = xmm_ld(edx); /* 0x17218FB2: movaps xmm0, xmmword ptr [edx] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x17218FB5: xorps xmm3, xmm1 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x17218FB8: xorps xmm1, xmm1 */
    { double _s0 = _xmm[1].f32[0]; double _s1 = _xmm[1].f32[1]; double _s2 = _xmm[1].f32[2]; double _s3 = _xmm[1].f32[3]; _xmm[0].u32[0] = sse_cmp_pred(_xmm[0].f32[0], _s0, 4); _xmm[0].u32[1] = sse_cmp_pred(_xmm[0].f32[1], _s1, 4); _xmm[0].u32[2] = sse_cmp_pred(_xmm[0].f32[2], _s2, 4); _xmm[0].u32[3] = sse_cmp_pred(_xmm[0].f32[3], _s3, 4); } /* 0x17218FBB: cmpneqps xmm0, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218FBF: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17218FC2: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C4A0)); float _s1 = sse_f32(MEM32(0x1723C4A0 + 4)); float _s2 = sse_f32(MEM32(0x1723C4A0 + 8)); float _s3 = sse_f32(MEM32(0x1723C4A0 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17218FC5: addps xmm5, xmmword ptr [0x1723c4a0] */
    { float _s0 = sse_f32(MEM32(0x1723C490)); float _s1 = sse_f32(MEM32(0x1723C490 + 4)); float _s2 = sse_f32(MEM32(0x1723C490 + 8)); float _s3 = sse_f32(MEM32(0x1723C490 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17218FCC: addps xmm6, xmmword ptr [0x1723c490] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218FD3: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17218FD6: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C480)); float _s1 = sse_f32(MEM32(0x1723C480 + 4)); float _s2 = sse_f32(MEM32(0x1723C480 + 8)); float _s3 = sse_f32(MEM32(0x1723C480 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17218FD9: addps xmm5, xmmword ptr [0x1723c480] */
    { float _s0 = sse_f32(MEM32(0x1723C470)); float _s1 = sse_f32(MEM32(0x1723C470 + 4)); float _s2 = sse_f32(MEM32(0x1723C470 + 8)); float _s3 = sse_f32(MEM32(0x1723C470 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17218FE0: addps xmm6, xmmword ptr [0x1723c470] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218FE7: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17218FEA: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C460)); float _s1 = sse_f32(MEM32(0x1723C460 + 4)); float _s2 = sse_f32(MEM32(0x1723C460 + 8)); float _s3 = sse_f32(MEM32(0x1723C460 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17218FED: addps xmm5, xmmword ptr [0x1723c460] */
    { float _s0 = sse_f32(MEM32(0x1723C450)); float _s1 = sse_f32(MEM32(0x1723C450 + 4)); float _s2 = sse_f32(MEM32(0x1723C450 + 8)); float _s3 = sse_f32(MEM32(0x1723C450 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17218FF4: addps xmm6, xmmword ptr [0x1723c450] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17218FFB: mulps xmm5, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17218FFE: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C440)); float _s1 = sse_f32(MEM32(0x1723C440 + 4)); float _s2 = sse_f32(MEM32(0x1723C440 + 8)); float _s3 = sse_f32(MEM32(0x1723C440 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17219001: addps xmm6, xmmword ptr [0x1723c440] */
    _xmm[1] = _xmm[0]; /* 0x17219008: movaps xmm1, xmm0 */
    _xmm[2] = _xmm[0]; /* 0x1721900B: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = ~_xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1721900E: andnps xmm1, xmm5 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x17219011: andps xmm2, xmm6 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x17219014: orps xmm1, xmm2 */
    _xmm[2] = _xmm[0]; /* 0x17219017: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1721901A: andps xmm0, xmm5 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = ~_xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1721901D: andnps xmm2, xmm6 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x17219020: orps xmm0, xmm2 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x17219023: xorps xmm0, xmm7 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x17219026: xorps xmm1, xmm3 */
    eax = MEM32(ebp + 0xC); /* 0x17219029: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1721902C: mov edx, dword ptr [ebp + 0x10] */
    xmm_st(eax, _xmm[1]); /* 0x1721902F: movaps xmmword ptr [eax], xmm1 */
    xmm_st(edx, _xmm[0]); /* 0x17219032: movaps xmmword ptr [edx], xmm0 */
    ebp = POP32_VAL(esp); /* 0x17219035: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17219036: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1721903E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721903Eu);

L_1721903E:
    edi = edi; /* 0x1721903E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17219040: push ebp */
    ebp = esp; /* 0x17219041: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17219043: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 0x17216FD5u; /* 0x17219046: mov dword ptr [eax], 0x17216fd5 */
    eax = MEM32(ebp + 0x8); /* 0x1721904C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = 0x17217D68u; /* 0x1721904F: mov dword ptr [eax + 4], 0x17217d68 */
    eax = MEM32(ebp + 0x8); /* 0x17219056: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x8) = 0x172170B6u; /* 0x17219059: mov dword ptr [eax + 8], 0x172170b6 */
    eax = MEM32(ebp + 0x8); /* 0x17219060: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x8C) = 0x172170B6u; /* 0x17219063: mov dword ptr [eax + 0x8c], 0x172170b6 */
    eax = MEM32(ebp + 0x8); /* 0x1721906D: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x14) = 0x17217078u; /* 0x17219070: mov dword ptr [eax + 0x14], 0x17217078 */
    eax = MEM32(ebp + 0x8); /* 0x17219077: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x18) = 0x17217C8Fu; /* 0x1721907A: mov dword ptr [eax + 0x18], 0x17217c8f */
    eax = MEM32(ebp + 0x8); /* 0x17219081: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x24) = 0x1721701Au; /* 0x17219084: mov dword ptr [eax + 0x24], 0x1721701a */
    eax = MEM32(ebp + 0x8); /* 0x1721908B: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x28) = 0x17217E3Cu; /* 0x1721908E: mov dword ptr [eax + 0x28], 0x17217e3c */
    eax = MEM32(ebp + 0x8); /* 0x17219095: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xBC) = 0x17217F3Du; /* 0x17219098: mov dword ptr [eax + 0xbc], 0x17217f3d */
    eax = MEM32(ebp + 0x8); /* 0x172190A2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x44) = 0x17219BA0u; /* 0x172190A5: mov dword ptr [eax + 0x44], 0x17219ba0 */
    eax = MEM32(ebp + 0x8); /* 0x172190AC: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x4C) = 0x172197A2u; /* 0x172190AF: mov dword ptr [eax + 0x4c], 0x172197a2 */
    eax = MEM32(ebp + 0x8); /* 0x172190B6: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC8) = 0x17217623u; /* 0x172190B9: mov dword ptr [eax + 0xc8], 0x17217623 */
    eax = MEM32(ebp + 0x8); /* 0x172190C3: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xCC) = 0x17217432u; /* 0x172190C6: mov dword ptr [eax + 0xcc], 0x17217432 */
    eax = MEM32(ebp + 0x8); /* 0x172190D0: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD4) = 0x172176DDu; /* 0x172190D3: mov dword ptr [eax + 0xd4], 0x172176dd */
    eax = MEM32(ebp + 0x8); /* 0x172190DD: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD8) = 0x17217577u; /* 0x172190E0: mov dword ptr [eax + 0xd8], 0x17217577 */
    eax = MEM32(ebp + 0x8); /* 0x172190EA: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x48) = 0x1721777Eu; /* 0x172190ED: mov dword ptr [eax + 0x48], 0x1721777e */
    eax = MEM32(ebp + 0x8); /* 0x172190F4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC0) = 0x172174EBu; /* 0x172190F7: mov dword ptr [eax + 0xc0], 0x172174eb */
    eax = MEM32(ebp + 0x8); /* 0x17219101: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x70) = 0x17219E3Cu; /* 0x17219104: mov dword ptr [eax + 0x70], 0x17219e3c */
    eax = MEM32(ebp + 0x8); /* 0x1721910B: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x38) = 0x17219D4Bu; /* 0x1721910E: mov dword ptr [eax + 0x38], 0x17219d4b */
    eax = MEM32(ebp + 0x8); /* 0x17219115: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x74) = 0x17219F39u; /* 0x17219118: mov dword ptr [eax + 0x74], 0x17219f39 */
    eax = MEM32(ebp + 0x8); /* 0x1721911F: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xF0) = 0x1721A354u; /* 0x17219122: mov dword ptr [eax + 0xf0], 0x1721a354 */
    eax = MEM32(ebp + 0x8); /* 0x1721912C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xF4) = 0x1721A4E6u; /* 0x1721912F: mov dword ptr [eax + 0xf4], 0x1721a4e6 */
    eax = MEM32(ebp + 0x8); /* 0x17219139: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xF8) = 0x1721A657u; /* 0x1721913C: mov dword ptr [eax + 0xf8], 0x1721a657 */
    eax = MEM32(ebp + 0x8); /* 0x17219146: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xFC) = 0x1721A170u; /* 0x17219149: mov dword ptr [eax + 0xfc], 0x1721a170 */
    eax = MEM32(ebp + 0x8); /* 0x17219153: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x100) = 0x1721AB57u; /* 0x17219156: mov dword ptr [eax + 0x100], 0x1721ab57 */
    eax = MEM32(ebp + 0x8); /* 0x17219160: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x104) = 0x1721A99Au; /* 0x17219163: mov dword ptr [eax + 0x104], 0x1721a99a */
    eax = MEM32(ebp + 0x8); /* 0x1721916D: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x108) = 0x1721A77Au; /* 0x17219170: mov dword ptr [eax + 0x108], 0x1721a77a */
    eax = MEM32(ebp + 0x8); /* 0x1721917A: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x114) = 0x1721A77Au; /* 0x1721917D: mov dword ptr [eax + 0x114], 0x1721a77a */
    eax = MEM32(ebp + 0x8); /* 0x17219187: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x68) = 0x1721A0A7u; /* 0x1721918A: mov dword ptr [eax + 0x68], 0x1721a0a7 */
    eax = MEM32(ebp + 0x8); /* 0x17219191: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC) = 0x17219527u; /* 0x17219194: mov dword ptr [eax + 0xc], 0x17219527 */
    eax = MEM32(ebp + 0x8); /* 0x1721919B: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x10) = 0x17219A53u; /* 0x1721919E: mov dword ptr [eax + 0x10], 0x17219a53 */
    eax = MEM32(ebp + 0x8); /* 0x172191A5: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x1C) = 0x17219662u; /* 0x172191A8: mov dword ptr [eax + 0x1c], 0x17219662 */
    eax = MEM32(ebp + 0x8); /* 0x172191AF: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x58) = 0x172196FBu; /* 0x172191B2: mov dword ptr [eax + 0x58], 0x172196fb */
    eax = MEM32(ebp + 0x8); /* 0x172191B9: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x5C) = 0x1721790Fu; /* 0x172191BC: mov dword ptr [eax + 0x5c], 0x1721790f */
    eax = MEM32(ebp + 0x8); /* 0x172191C3: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x50) = 0x17218000u; /* 0x172191C6: mov dword ptr [eax + 0x50], 0x17218000 */
    eax = MEM32(ebp + 0x8); /* 0x172191CD: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xB4) = 0x1721A016u; /* 0x172191D0: mov dword ptr [eax + 0xb4], 0x1721a016 */
    eax = MEM32(ebp + 0x8); /* 0x172191DA: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x2C) = 0x17219C6Eu; /* 0x172191DD: mov dword ptr [eax + 0x2c], 0x17219c6e */
    eax = MEM32(ebp + 0x8); /* 0x172191E4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x20) = 0x17217391u; /* 0x172191E7: mov dword ptr [eax + 0x20], 0x17217391 */
    eax = MEM32(ebp + 0x8); /* 0x172191EE: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x54) = 0x17217391u; /* 0x172191F1: mov dword ptr [eax + 0x54], 0x17217391 */
    eax = MEM32(ebp + 0x8); /* 0x172191F8: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD0) = 0x1721780Bu; /* 0x172191FB: mov dword ptr [eax + 0xd0], 0x1721780b */
    eax = MEM32(ebp + 0x8); /* 0x17219205: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xDC) = 0x1721786Cu; /* 0x17219208: mov dword ptr [eax + 0xdc], 0x1721786c */
    eax = MEM32(ebp + 0x8); /* 0x17219212: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC4) = 0x172178B9u; /* 0x17219215: mov dword ptr [eax + 0xc4], 0x172178b9 */
    eax = MEM32(ebp + 0x8); /* 0x1721921F: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xEC) = 0x17219338u; /* 0x17219222: mov dword ptr [eax + 0xec], 0x17219338 */
    eax = MEM32(ebp + 0x8); /* 0x1721922C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xE8) = 0x172194C7u; /* 0x1721922F: mov dword ptr [eax + 0xe8], 0x172194c7 */
    ebp = POP32_VAL(esp); /* 0x17219239: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1721923A: ret  */
    RECOMP_REGS_OUT();
}

void sub_17219240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17219240u);

L_17219240:
    edi = edi; /* 0x17219240: mov edi, edi */
    PUSH32(esp, ecx); /* 0x17219242: push ecx */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x17219243: pxor xmm7, xmm7 */
    _xmm[1] = xmm_ld(0x1723C5A0); /* 0x17219247: movdqa xmm1, xmmword ptr [0x1723c5a0] */
    _xmm[2] = xmm_ld(0x1723C5B0); /* 0x1721924F: movdqa xmm2, xmmword ptr [0x1723c5b0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x17219257: pand xmm1, xmm0 */
    _xmm[3] = _xmm[1]; /* 0x1721925B: movdqa xmm3, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1721925F: pand xmm2, xmm0 */
    { xmm_t _s = xmm_ld(0x1723C590); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x17219263: pand xmm0, xmmword ptr [0x1723c590] */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 8; _k++) _xmm[3].u16[_k] = (_xmm[3].u16[_k] == _s.u16[_k]) ? (uint16_t)~0u : 0; } /* 0x1721926B: pcmpeqw xmm3, xmm7 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[3].u8[_k] >> 7) << _k; ecx = _m; } /* 0x1721926F: pmovmskb ecx, xmm3 */
    /* test ecx, ecx */ /* 0x17219273: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_172192E3; /* 0x17219275: je 0x172192e3 */
L_17219277:
    { xmm_t _s = xmm_ld(0x1723C580); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = ~_xmm[3].u32[_k] & _s.u32[_k]; } /* 0x17219277: pandn xmm3, xmmword ptr [0x1723c580] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x1721927F: por xmm2, xmm3 */
    { xmm_t _s = xmm_ld(0x1723C5C0); for (int _k = 0; _k < 8; _k++) if (_s.i16[_k] > _xmm[1].i16[_k]) _xmm[1].i16[_k] = _s.i16[_k]; } /* 0x17219283: pmaxsw xmm1, xmmword ptr [0x1723c5c0] */
    _xmm[4] = xmm_ld(0x1723C5D0); /* 0x1721928B: movdqa xmm4, xmmword ptr [0x1723c5d0] */
    _xmm[3] = _xmm[1]; /* 0x17219293: movdqa xmm3, xmm1 */
    void_lift_trap(0x17219297u, "punpcklwd xmm1, xmm7");
    void_lift_trap(0x1721929Bu, "punpckhwd xmm3, xmm7");
    _xmm[5] = _xmm[7]; /* 0x1721929F: movdqa xmm5, xmm7 */
    void_lift_trap(0x172192A3u, "punpcklwd xmm5, xmm0");
    void_lift_trap(0x172192A7u, "punpckhwd xmm7, xmm0");
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] += _s.u32[_k]; } /* 0x172192AB: paddd xmm1, xmm4 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] += _s.u32[_k]; } /* 0x172192AF: paddd xmm3, xmm4 */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[1].u32[_k] << _c); } /* 0x172192B3: pslld xmm1, 0xd */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[3].u32[_k] << _c); } /* 0x172192B8: pslld xmm3, 0xd */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x172192BD: por xmm1, xmm5 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] | _s.u32[_k]; } /* 0x172192C1: por xmm3, xmm7 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x172192C5: pxor xmm5, xmm5 */
    _xmm[7] = _xmm[2]; /* 0x172192C9: movdqa xmm7, xmm2 */
    void_lift_trap(0x172192CDu, "punpcklwd xmm2, xmm5");
    void_lift_trap(0x172192D1u, "punpckhwd xmm7, xmm5");
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x172192D5: cvtdq2ps xmm0, xmm2 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x172192D8: cvtdq2ps xmm2, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x172192DB: mulps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x172192DE: mulps xmm3, xmm2 */
    ecx = POP32_VAL(esp); /* 0x172192E1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x172192E2: ret  */
L_172192E3:
    _xmm[6] = xmm_ld(0x1723C5E0); /* 0x172192E3: movdqa xmm6, xmmword ptr [0x1723c5e0] */
    _xmm[5] = _xmm[7]; /* 0x172192EB: movdqa xmm5, xmm7 */
    void_lift_trap(0x172192EFu, "punpcklwd xmm5, xmm0");
    void_lift_trap(0x172192F3u, "punpckhwd xmm7, xmm0");
    _xmm[3] = _xmm[1]; /* 0x172192F7: movdqa xmm3, xmm1 */
    void_lift_trap(0x172192FBu, "punpcklwd xmm1, xmm7");
    void_lift_trap(0x172192FFu, "punpckhwd xmm3, xmm7");
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] += _s.u32[_k]; } /* 0x17219303: paddd xmm1, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] += _s.u32[_k]; } /* 0x17219307: paddd xmm3, xmm6 */
    _xmm[0] = _xmm[2]; /* 0x1721930B: movdqa xmm0, xmm2 */
    void_lift_trap(0x1721930Fu, "punpcklwd xmm0, xmm7");
    void_lift_trap(0x17219313u, "punpckhwd xmm2, xmm7");
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x17219317: por xmm0, xmm1 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] | _s.u32[_k]; } /* 0x1721931B: por xmm3, xmm2 */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[0].u32[_k] << _c); } /* 0x1721931F: pslld xmm0, 0xd */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[3].u32[_k] << _c); } /* 0x17219324: pslld xmm3, 0xd */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x17219329: por xmm0, xmm5 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] | _s.u32[_k]; } /* 0x1721932D: por xmm3, xmm7 */
    ecx = POP32_VAL(esp); /* 0x17219331: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17219332: ret  */
    RECOMP_REGS_OUT();
}

void sub_17219338(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17219338u);

L_17219338:
    edi = edi; /* 0x17219338: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1721933A: push ebp */
    ebp = esp; /* 0x1721933B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1721933D: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 8 */ /* 0x17219340: cmp dword ptr [ebp + 0x10], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17219344: push ebx */
    PUSH32(esp, esi); /* 0x17219345: push esi */
    PUSH32(esp, edi); /* 0x17219346: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17219347: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1721934A: mov dword ptr [ebp - 8], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_17219399; /* 0x1721934D: jb 0x17219399 */
L_1721934F:
    esi = MEM32(ebp + 0x10); /* 0x1721934F: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esi = esi & 0xFFFFFFF8u; /* 0x17219352: and esi, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x17219355: mov dword ptr [ebp - 4], esi */
    edx = MEM32(ebp + (-0x4)); /* 0x17219358: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC); /* 0x1721935B: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1721935E: mov ecx, dword ptr [ebp + 8] */
L_17219361:
    _xmm[0].u64[0] = MEM64(eax); /* 0x17219361: movlps xmm0, qword ptr [eax] */
    _xmm[0].u64[1] = MEM64(eax + 0x8); /* 0x17219364: movhps xmm0, qword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x17219368: add eax, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_17219240); /* 0x1721936B: call 0x17219240 */
    RECOMP_FLAGS_IN();
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x17219370: movlps qword ptr [ecx], xmm0 */
    MEM64(ecx + 0x8) = _xmm[0].u64[1]; /* 0x17219373: movhps qword ptr [ecx + 8], xmm0 */
    MEM64(ecx + 0x10) = _xmm[3].u64[0]; /* 0x17219377: movlps qword ptr [ecx + 0x10], xmm3 */
    MEM64(ecx + 0x18) = _xmm[3].u64[1]; /* 0x1721937B: movhps qword ptr [ecx + 0x18], xmm3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x1721937F: add ecx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x17219382: sub edx, 8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_17219361; /* 0x17219385: jne 0x17219361 */
L_17219387:
    eax = MEM32(ebp + 0xC); /* 0x17219387: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - esi; /* 0x1721938A: sub dword ptr [ebp + 0x10], esi */
    _flag_k = FK_CMP;
    eax = eax + esi * 2; /* 0x1721938D: lea eax, [eax + esi*2] */
    MEM32(ebp + 0xC) = eax; /* 0x17219390: mov dword ptr [ebp + 0xc], eax */
    eax = edi + esi * 4; /* 0x17219393: lea eax, [edi + esi*4] */
    MEM32(ebp + 0x8) = eax; /* 0x17219396: mov dword ptr [ebp + 8], eax */
L_17219399:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17219399: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1721939B: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17219402; /* 0x1721939E: jbe 0x17219402 */
L_172193A0:
    edi = 0x400u; /* 0x172193A0: mov edi, 0x400 */
L_172193A5:
    eax = MEM32(ebp + 0xC); /* 0x172193A5: mov eax, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)MEM16(eax + ebx * 2); /* 0x172193A8: movzx ecx, word ptr [eax + ebx*2] */
    edx = ecx; /* 0x172193AC: mov edx, ecx */
    esi = ecx; /* 0x172193AE: mov esi, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7C00u);
    edx = edx & 0x7C00u; /* 0x172193B0: and edx, 0x7c00 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFF8000u);
    esi = esi & 0xFFFF8000u; /* 0x172193B6: and esi, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((esi) >> 16) & 1u); /* 0x172193BC: shl esi, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((esi << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 16u; /* 0x172193BC: shl esi, 0x10 */
    eax = edx; /* 0x172193BF: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x172193C1: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x172193C3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x172193C5: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FFu);
    ecx = ecx & 0x3FFu; /* 0x172193C7: and ecx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x172193CD: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, edi */ /* 0x172193CF: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_172193D5; /* 0x172193D1: ja 0x172193d5 */
L_172193D3:
    edx = edi; /* 0x172193D3: mov edx, edi */
L_172193D5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00019800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x00019800u; /* 0x172193D5: add edx, 0x19800 */
    _flag_k = FK_ADD;
    if (13u) _cf = (((edx) >> 19) & 1u); /* 0x172193DB: shl edx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((edx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 13u; /* 0x172193DB: shl edx, 0xd */
    _flag_a = (uint32_t)((edx | esi)); _flag_b = (uint32_t)((edx | esi));
    edx = edx | esi; /* 0x172193DE: or edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x172193E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x172193E2: mov dword ptr [ebp - 0xc], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x172193E5: fild dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = edx; /* 0x172193E8: mov dword ptr [ebp - 4], edx */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_172193F3; /* 0x172193EB: jge 0x172193f3 */
L_172193ED:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x172193ED: fadd dword ptr [0x1700142c] */
L_172193F3:
    eax = MEM32(ebp + 0x8); /* 0x172193F3: mov eax, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x172193F6: fmul dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ebx * 4) = _v; } /* 0x172193F9: fstp dword ptr [eax + ebx*4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x172193FC: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0x10) */ /* 0x172193FD: cmp ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_172193A5; /* 0x17219400: jb 0x172193a5 */
L_17219402:
    eax = MEM32(ebp + (-0x8)); /* 0x17219402: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x17219405: pop edi */
    esi = POP32_VAL(esp); /* 0x17219406: pop esi */
    ebx = POP32_VAL(esp); /* 0x17219407: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17219408: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17219409: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17219411(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17219411u);

L_17219411:
    _xmm[7] = xmm_ld(0x1723C600); /* 0x17219411: movdqa xmm7, xmmword ptr [0x1723c600] */
    _xmm[6] = _xmm[7]; /* 0x17219419: movdqa xmm6, xmm7 */
    _xmm[2] = _xmm[7]; /* 0x1721941D: movaps xmm2, xmm7 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x17219420: pand xmm7, xmm0 */
    _xmm[3] = _xmm[2]; /* 0x17219424: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] & _s.u32[_k]; } /* 0x17219427: pand xmm6, xmm1 */
    void_lift_trap(0x1721942Bu, "packssdw xmm7, xmm6");
    _xmm[6] = xmm_ld(0x1723C5F0); /* 0x1721942F: movaps xmm6, xmmword ptr [0x1723c5f0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = ~_xmm[2].u32[_k] & _s.u32[_k]; } /* 0x17219436: andnps xmm2, xmm0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = ~_xmm[3].u32[_k] & _s.u32[_k]; } /* 0x17219439: andnps xmm3, xmm1 */
    _xmm[0] = _xmm[2]; /* 0x1721943C: movaps xmm0, xmm2 */
    _xmm[1] = _xmm[3]; /* 0x1721943F: movaps xmm1, xmm3 */
    { double _s0 = _xmm[6].f32[0]; double _s1 = _xmm[6].f32[1]; double _s2 = _xmm[6].f32[2]; double _s3 = _xmm[6].f32[3]; _xmm[2].u32[0] = sse_cmp_pred(_xmm[2].f32[0], _s0, 1); _xmm[2].u32[1] = sse_cmp_pred(_xmm[2].f32[1], _s1, 1); _xmm[2].u32[2] = sse_cmp_pred(_xmm[2].f32[2], _s2, 1); _xmm[2].u32[3] = sse_cmp_pred(_xmm[2].f32[3], _s3, 1); } /* 0x17219442: cmpltps xmm2, xmm6 */
    { double _s0 = _xmm[6].f32[0]; double _s1 = _xmm[6].f32[1]; double _s2 = _xmm[6].f32[2]; double _s3 = _xmm[6].f32[3]; _xmm[3].u32[0] = sse_cmp_pred(_xmm[3].f32[0], _s0, 1); _xmm[3].u32[1] = sse_cmp_pred(_xmm[3].f32[1], _s1, 1); _xmm[3].u32[2] = sse_cmp_pred(_xmm[3].f32[2], _s2, 1); _xmm[3].u32[3] = sse_cmp_pred(_xmm[3].f32[3], _s3, 1); } /* 0x17219446: cmpltps xmm3, xmm6 */
    _xmm[4] = _xmm[2]; /* 0x1721944A: movaps xmm4, xmm2 */
    _xmm[5] = _xmm[3]; /* 0x1721944D: movaps xmm5, xmm3 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x17219450: andps xmm2, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x17219453: andps xmm3, xmm6 */
    _xmm[6] = xmm_ld(0x1723C610); /* 0x17219456: movdqa xmm6, xmmword ptr [0x1723c610] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721945E: addps xmm0, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x17219461: addps xmm1, xmm3 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] & _s.u32[_k]; } /* 0x17219464: andps xmm4, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x17219467: andps xmm5, xmm6 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] -= _s.u32[_k]; } /* 0x1721946A: psubd xmm0, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] -= _s.u32[_k]; } /* 0x1721946E: psubd xmm1, xmm5 */
    _xmm[4] = _xmm[0]; /* 0x17219472: movdqa xmm4, xmm0 */
    _xmm[5] = _xmm[1]; /* 0x17219476: movdqa xmm5, xmm1 */
    _xmm[6] = xmm_ld(0x1723C660); /* 0x1721947A: movdqa xmm6, xmmword ptr [0x1723c660] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] += _s.u32[_k]; } /* 0x17219482: paddd xmm4, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] += _s.u32[_k]; } /* 0x17219486: paddd xmm5, xmm6 */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[4].u32[_k] >> _c); } /* 0x1721948A: psrld xmm4, 0xd */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[5].u32[_k] >> _c); } /* 0x1721948F: psrld xmm5, 0xd */
    void_lift_trap(0x17219494u, "packssdw xmm4, xmm5");
    _xmm[6] = xmm_ld(0x1723C650); /* 0x17219498: movdqa xmm6, xmmword ptr [0x1723c650] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 8; _k++) if (_s.i16[_k] < _xmm[4].i16[_k]) _xmm[4].i16[_k] = _s.i16[_k]; } /* 0x172194A0: pminsw xmm4, xmm6 */
    _xmm[1] = _xmm[4]; /* 0x172194A4: movdqa xmm1, xmm4 */
    { uint64_t _c = 15u; for (int _k = 0; _k < 8; _k++) _xmm[1].i16[_k] = _xmm[1].i16[_k] >> (_c > 15 ? 15 : (int)_c); } /* 0x172194A8: psraw xmm1, 0xf */
    _xmm[2] = _xmm[1]; /* 0x172194AD: movdqa xmm2, xmm1 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x172194B1: pand xmm1, xmm6 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = ~_xmm[2].u32[_k] & _s.u32[_k]; } /* 0x172194B5: pandn xmm2, xmm4 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x172194B9: por xmm2, xmm1 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] | _s.u32[_k]; } /* 0x172194BD: por xmm7, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x172194C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_172194C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172194C7u);

L_172194C7:
    edi = edi; /* 0x172194C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172194C9: push ebp */
    ebp = esp; /* 0x172194CA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x172194CC: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x172194CD: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x172194D0: push ebx */
    PUSH32(esp, esi); /* 0x172194D1: push esi */
    PUSH32(esp, edi); /* 0x172194D2: push edi */
    edi = MEM32(ebp + 0x10); /* 0x172194D3: mov edi, dword ptr [ebp + 0x10] */
    esi = edi; /* 0x172194D6: mov esi, edi */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x172194D8: shr esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 3u; /* 0x172194D8: shr esi, 3 */
    MEM32(ebp + (-0x4)) = eax; /* 0x172194DB: mov dword ptr [ebp - 4], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17219505; /* 0x172194DE: je 0x17219505 */
L_172194E0:
    ebx = esi; /* 0x172194E0: mov ebx, esi */
L_172194E2:
    eax = MEM32(ebp + 0xC); /* 0x172194E2: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0] = xmm_ld(eax); /* 0x172194E5: movdqu xmm0, xmmword ptr [eax] */
    _xmm[1] = xmm_ld(eax + 0x10); /* 0x172194E9: movdqu xmm1, xmmword ptr [eax + 0x10] */
    RECOMP_CALL(sub_17219411); /* 0x172194EE: call 0x17219411 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x172194F3: mov eax, dword ptr [ebp + 8] */
    xmm_st(eax, _xmm[7]); /* 0x172194F6: movdqu xmmword ptr [eax], xmm7 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x20u; /* 0x172194FA: add dword ptr [ebp + 0xc], 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x10u; /* 0x172194FE: add dword ptr [ebp + 8], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17219502: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_172194E2; /* 0x17219503: jne 0x172194e2 */
L_17219505:
    eax = esi; /* 0x17219505: mov eax, esi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x17219507: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x17219507: shl eax, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1721950A: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1721950C: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1721950D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17219510: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17040697); /* 0x17219513: call 0x17040697 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x17219518: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1721951B: pop edi */
    esi = POP32_VAL(esp); /* 0x1721951C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1721951D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1721951E: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1721951F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17219527(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17219527u);

L_17219527:
    edi = edi; /* 0x17219527: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17219529: push ebp */
    ebp = esp; /* 0x1721952A: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1721952C: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1721952F: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x17219532: mov edx, dword ptr [ebp + 8] */
    _xmm[0].u64[0] = MEM64(ecx); /* 0x17219535: movlps xmm0, qword ptr [ecx] */
    _xmm[0].u64[1] = MEM64(ecx + 0x8); /* 0x17219538: movhps xmm0, qword ptr [ecx + 8] */
    _xmm[1].u64[0] = MEM64(ecx + 0x10); /* 0x1721953C: movlps xmm1, qword ptr [ecx + 0x10] */
    _xmm[1].u64[1] = MEM64(ecx + 0x18); /* 0x17219540: movhps xmm1, qword ptr [ecx + 0x18] */
    _xmm[2].u64[0] = MEM64(ecx + 0x20); /* 0x17219544: movlps xmm2, qword ptr [ecx + 0x20] */
    _xmm[2].u64[1] = MEM64(ecx + 0x28); /* 0x17219548: movhps xmm2, qword ptr [ecx + 0x28] */
    _xmm[3].u64[0] = MEM64(ecx + 0x30); /* 0x1721954C: movlps xmm3, qword ptr [ecx + 0x30] */
    _xmm[3].u64[1] = MEM64(ecx + 0x38); /* 0x17219550: movhps xmm3, qword ptr [ecx + 0x38] */
    _xmm[4].u64[0] = MEM32(eax); _xmm[4].u64[1] = 0; /* 0x17219554: movss xmm4, dword ptr [eax] */
    _xmm[5].u64[0] = MEM32(eax + 0x4); _xmm[5].u64[1] = 0; /* 0x17219558: movss xmm5, dword ptr [eax + 4] */
    _xmm[6].u64[0] = MEM32(eax + 0x8); _xmm[6].u64[1] = 0; /* 0x1721955D: movss xmm6, dword ptr [eax + 8] */
    _xmm[7].u64[0] = MEM32(eax + 0xC); _xmm[7].u64[1] = 0; /* 0x17219562: movss xmm7, dword ptr [eax + 0xc] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x17219567: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1721956B: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x1721956F: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219573: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17219577: mulps xmm4, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721957A: mulps xmm5, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721957D: mulps xmm6, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17219580: mulps xmm7, xmm3 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17219583: addps xmm4, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17219586: addps xmm6, xmm7 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17219589: addps xmm4, xmm6 */
    _xmm[5].u64[0] = MEM32(eax + 0x10); _xmm[5].u64[1] = 0; /* 0x1721958C: movss xmm5, dword ptr [eax + 0x10] */
    _xmm[6].u64[0] = MEM32(eax + 0x14); _xmm[6].u64[1] = 0; /* 0x17219591: movss xmm6, dword ptr [eax + 0x14] */
    _xmm[7].u64[0] = MEM32(eax + 0x18); _xmm[7].u64[1] = 0; /* 0x17219596: movss xmm7, dword ptr [eax + 0x18] */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1721959B: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x1721959F: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x172195A3: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x172195A7: mulps xmm5, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x172195AA: mulps xmm6, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x172195AD: mulps xmm7, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x172195B0: addps xmm5, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x172195B3: addps xmm5, xmm7 */
    _xmm[6].u64[0] = MEM32(eax + 0x1C); _xmm[6].u64[1] = 0; /* 0x172195B6: movss xmm6, dword ptr [eax + 0x1c] */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x172195BB: shufps xmm6, xmm6, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x172195BF: mulps xmm6, xmm3 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x172195C2: addps xmm5, xmm6 */
    _xmm[6].u64[0] = MEM32(eax + 0x20); _xmm[6].u64[1] = 0; /* 0x172195C5: movss xmm6, dword ptr [eax + 0x20] */
    _xmm[7].u64[0] = MEM32(eax + 0x24); _xmm[7].u64[1] = 0; /* 0x172195CA: movss xmm7, dword ptr [eax + 0x24] */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x172195CF: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x172195D3: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x172195D7: mulps xmm6, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x172195DA: mulps xmm7, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x172195DD: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x28); _xmm[7].u64[1] = 0; /* 0x172195E0: movss xmm7, dword ptr [eax + 0x28] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x172195E5: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x172195E9: mulps xmm7, xmm2 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x172195EC: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x2C); _xmm[7].u64[1] = 0; /* 0x172195EF: movss xmm7, dword ptr [eax + 0x2c] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x172195F4: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x172195F8: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x172195FB: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x30); _xmm[7].u64[1] = 0; /* 0x172195FE: movss xmm7, dword ptr [eax + 0x30] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219603: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17219607: mulps xmm0, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x34); _xmm[7].u64[1] = 0; /* 0x1721960A: movss xmm7, dword ptr [eax + 0x34] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x1721960F: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17219613: mulps xmm1, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x38); _xmm[7].u64[1] = 0; /* 0x17219616: movss xmm7, dword ptr [eax + 0x38] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x1721961B: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721961F: mulps xmm2, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x3C); _xmm[7].u64[1] = 0; /* 0x17219622: movss xmm7, dword ptr [eax + 0x3c] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219627: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721962B: mulps xmm3, xmm7 */
    MEM64(edx) = _xmm[4].u64[0]; /* 0x1721962E: movlps qword ptr [edx], xmm4 */
    MEM64(edx + 0x8) = _xmm[4].u64[1]; /* 0x17219631: movhps qword ptr [edx + 8], xmm4 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17219635: addps xmm0, xmm1 */
    MEM64(edx + 0x10) = _xmm[5].u64[0]; /* 0x17219638: movlps qword ptr [edx + 0x10], xmm5 */
    MEM64(edx + 0x18) = _xmm[5].u64[1]; /* 0x1721963C: movhps qword ptr [edx + 0x18], xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17219640: addps xmm2, xmm3 */
    MEM64(edx + 0x20) = _xmm[6].u64[0]; /* 0x17219643: movlps qword ptr [edx + 0x20], xmm6 */
    MEM64(edx + 0x28) = _xmm[6].u64[1]; /* 0x17219647: movhps qword ptr [edx + 0x28], xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721964B: addps xmm0, xmm2 */
    MEM64(edx + 0x30) = _xmm[0].u64[0]; /* 0x1721964E: movlps qword ptr [edx + 0x30], xmm0 */
    MEM64(edx + 0x38) = _xmm[0].u64[1]; /* 0x17219652: movhps qword ptr [edx + 0x38], xmm0 */
    eax = MEM32(ebp + 0x8); /* 0x17219656: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17219659: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1721965A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17219662(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17219662u);

L_17219662:
    edi = edi; /* 0x17219662: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17219664: push ebp */
    ebp = esp; /* 0x17219665: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17219667: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x1721966A: movss xmm0, dword ptr [eax] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x1721966E: movss xmm1, dword ptr [eax + 4] */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x17219673: movss xmm2, dword ptr [eax + 8] */
    _xmm[3] = _xmm[0]; /* 0x17219678: movaps xmm3, xmm0 */
    _xmm[4] = _xmm[1]; /* 0x1721967B: movaps xmm4, xmm1 */
    _xmm[5] = _xmm[2]; /* 0x1721967E: movaps xmm5, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x17219681: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x17219685: mulss xmm1, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x17219689: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1721968D: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17219691: addss xmm0, xmm2 */
    ecx = MEM32(ebp + 0x8); /* 0x17219695: mov ecx, dword ptr [ebp + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x1702A810))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x17219698: comiss xmm0, dword ptr [0x1702a810] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_172196AE; /* 0x1721969F: jae 0x172196ae */
L_172196A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x172196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x172196A3: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x172196A5: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x172196A8: mov dword ptr [ecx + 8], eax */
    goto L_172196EF; /* 0x172196AB: jmp 0x172196ef */
L_172196AE:
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x172196AE: rsqrtss xmm6, xmm0 */
    _xmm[7] = _xmm[6]; /* 0x172196B2: movaps xmm7, xmm6 */
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x172196B5: mulss xmm6, xmm0 */
    { float _s = _xmm[7].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x172196B9: mulss xmm6, xmm7 */
    _xmm[1].u64[0] = MEM32(0x1702A7F0); _xmm[1].u64[1] = 0; /* 0x172196BD: movss xmm1, dword ptr [0x1702a7f0] */
    { float _s = sse_f32(MEM32(0x1702A800)); _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x172196C5: mulss xmm7, dword ptr [0x1702a800] */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x172196CD: subss xmm1, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x172196D1: mulss xmm1, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x172196D5: mulss xmm3, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x172196D9: mulss xmm4, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x172196DD: mulss xmm5, xmm1 */
    MEM32(ecx) = _xmm[3].u32[0]; /* 0x172196E1: movss dword ptr [ecx], xmm3 */
    MEM32(ecx + 0x4) = _xmm[4].u32[0]; /* 0x172196E5: movss dword ptr [ecx + 4], xmm4 */
    MEM32(ecx + 0x8) = _xmm[5].u32[0]; /* 0x172196EA: movss dword ptr [ecx + 8], xmm5 */
L_172196EF:
    eax = MEM32(ebp + 0x8); /* 0x172196EF: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x172196F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x172196F3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_172196FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172196FBu);

L_172196FB:
    edi = edi; /* 0x172196FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x172196FD: push ebp */
    ebp = esp; /* 0x172196FE: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17219700: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x17219703: movss xmm0, dword ptr [eax] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x17219707: movss xmm1, dword ptr [eax + 4] */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x1721970C: movss xmm2, dword ptr [eax + 8] */
    _xmm[3] = _xmm[0]; /* 0x17219711: movaps xmm3, xmm0 */
    _xmm[4] = _xmm[1]; /* 0x17219714: movaps xmm4, xmm1 */
    _xmm[5] = _xmm[2]; /* 0x17219717: movaps xmm5, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x1721971A: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1721971E: mulss xmm1, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x17219722: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17219726: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1721972A: addss xmm0, xmm2 */
    ecx = MEM32(ebp + 0x8); /* 0x1721972E: mov ecx, dword ptr [ebp + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x1702A810))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x17219731: comiss xmm0, dword ptr [0x1702a810] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_1721974B; /* 0x17219738: jae 0x1721974b */
L_1721973A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1721973A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1721973C: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x1721973E: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x17219741: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x17219744: mov dword ptr [ecx + 0xc], eax */
    goto L_17219796; /* 0x17219747: jmp 0x17219796 */
L_1721974B:
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x1721974B: rsqrtss xmm6, xmm0 */
    _xmm[7] = _xmm[6]; /* 0x1721974F: movaps xmm7, xmm6 */
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x17219752: mulss xmm6, xmm0 */
    { float _s = _xmm[7].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x17219756: mulss xmm6, xmm7 */
    _xmm[1].u64[0] = MEM32(0x1702A7F0); _xmm[1].u64[1] = 0; /* 0x1721975A: movss xmm1, dword ptr [0x1702a7f0] */
    { float _s = sse_f32(MEM32(0x1702A800)); _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x17219762: mulss xmm7, dword ptr [0x1702a800] */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x1721976A: subss xmm1, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1721976E: mulss xmm1, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x17219772: mulss xmm3, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x17219776: mulss xmm4, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x1721977A: mulss xmm5, xmm1 */
    { float _s = sse_f32(MEM32(eax + 0xC)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x1721977E: mulss xmm1, dword ptr [eax + 0xc] */
    MEM32(ecx) = _xmm[3].u32[0]; /* 0x17219783: movss dword ptr [ecx], xmm3 */
    MEM32(ecx + 0x4) = _xmm[4].u32[0]; /* 0x17219787: movss dword ptr [ecx + 4], xmm4 */
    MEM32(ecx + 0x8) = _xmm[5].u32[0]; /* 0x1721978C: movss dword ptr [ecx + 8], xmm5 */
    MEM32(ecx + 0xC) = _xmm[1].u32[0]; /* 0x17219791: movss dword ptr [ecx + 0xc], xmm1 */
L_17219796:
    eax = MEM32(ebp + 0x8); /* 0x17219796: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17219799: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1721979A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_172197A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x172197A2u);

L_172197A2:
    edi = edi; /* 0x172197A2: mov edi, edi */
    PUSH32(esp, ebx); /* 0x172197A4: push ebx */
    ebx = esp; /* 0x172197A5: mov ebx, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x172197A7: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x172197AA: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x172197AD: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x172197B0: push ebp */
    PUSH32(esp, ebp); /* 0x172197B1: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x172197B2: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x172197B5: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x172197B9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x110u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x110u; /* 0x172197BB: sub esp, 0x110 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x10); /* 0x172197C1: mov eax, dword ptr [ebx + 0x10] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x172197C4: xorps xmm0, xmm0 */
    _xmm[2].u64[0] = MEM64(eax + 0x8); /* 0x172197C7: movlps xmm2, qword ptr [eax + 8] */
    _xmm[4].u64[0] = MEM64(eax + 0x28); /* 0x172197CB: movlps xmm4, qword ptr [eax + 0x28] */
    _xmm[2].u64[1] = MEM64(eax + 0x18); /* 0x172197CF: movhps xmm2, qword ptr [eax + 0x18] */
    _xmm[4].u64[1] = MEM64(eax + 0x38); /* 0x172197D3: movhps xmm4, qword ptr [eax + 0x38] */
    _xmm[3].u64[0] = MEM64(eax + 0x20); /* 0x172197D7: movlps xmm3, qword ptr [eax + 0x20] */
    _xmm[1].u64[0] = MEM64(eax); /* 0x172197DB: movlps xmm1, qword ptr [eax] */
    _xmm[3].u64[1] = MEM64(eax + 0x30); /* 0x172197DE: movhps xmm3, qword ptr [eax + 0x30] */
    _xmm[1].u64[1] = MEM64(eax + 0x10); /* 0x172197E2: movhps xmm1, qword ptr [eax + 0x10] */
    _xmm[5] = _xmm[2]; /* 0x172197E6: movaps xmm5, xmm2 */
    { xmm_t _s = _xmm[4], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[2]; } /* 0x172197E9: shufps xmm5, xmm4, 0x88 */
    { xmm_t _s = _xmm[2], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[3]; _xmm[4].u32[2] = _s.u32[1]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x172197ED: shufps xmm4, xmm2, 0xdd */
    _xmm[2] = _xmm[4]; /* 0x172197F1: movaps xmm2, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x172197F4: mulps xmm2, xmm5 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x172197F7: shufps xmm2, xmm2, 0xb1 */
    _xmm[6] = _xmm[2]; /* 0x172197FB: movaps xmm6, xmm2 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[2]; _xmm[6].u32[1] = _d.u32[3]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x172197FE: shufps xmm6, xmm6, 0x4e */
    _xmm[7] = _xmm[3]; /* 0x17219802: movaps xmm7, xmm3 */
    { xmm_t _s = _xmm[1], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x17219805: shufps xmm3, xmm1, 0xdd */
    { xmm_t _s = _xmm[7], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x17219809: shufps xmm1, xmm7, 0x88 */
    _xmm[7] = _xmm[3]; /* 0x1721980D: movaps xmm7, xmm3 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17219810: mulps xmm3, xmm6 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17219813: mulps xmm6, xmm1 */
    xmm_st(ebp + (-0xD0), _xmm[6]); /* 0x17219816: movaps xmmword ptr [ebp - 0xd0], xmm6 */
    _xmm[6] = _xmm[7]; /* 0x1721981D: movaps xmm6, xmm7 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17219820: mulps xmm7, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17219823: mulps xmm2, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x17219826: subps xmm3, xmm7 */
    _xmm[7] = _xmm[6]; /* 0x17219829: movaps xmm7, xmm6 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721982C: mulps xmm7, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x1721982F: shufps xmm5, xmm5, 0x4e */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[1]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[3]; _xmm[7].u32[3] = _s.u32[2]; } /* 0x17219833: shufps xmm7, xmm7, 0xb1 */
    xmm_st(ebp + (-0xC0), _xmm[2]); /* 0x17219837: movaps xmmword ptr [ebp - 0xc0], xmm2 */
    _xmm[2] = _xmm[4]; /* 0x1721983E: movaps xmm2, xmm4 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17219841: mulps xmm2, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17219844: addps xmm2, xmm3 */
    _xmm[3] = _xmm[7]; /* 0x17219847: movaps xmm3, xmm7 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[2]; _xmm[7].u32[1] = _d.u32[3]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[1]; } /* 0x1721984A: shufps xmm7, xmm7, 0x4e */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721984E: mulps xmm3, xmm1 */
    xmm_st(ebp + (-0xB0), _xmm[3]); /* 0x17219851: movaps xmmword ptr [ebp - 0xb0], xmm3 */
    _xmm[3] = _xmm[4]; /* 0x17219858: movaps xmm3, xmm4 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721985B: mulps xmm3, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721985E: mulps xmm7, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x17219861: subps xmm2, xmm3 */
    _xmm[3] = _xmm[6]; /* 0x17219864: movaps xmm3, xmm6 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17219867: shufps xmm3, xmm3, 0x4e */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721986B: mulps xmm3, xmm4 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[2]; } /* 0x1721986E: shufps xmm3, xmm3, 0xb1 */
    xmm_st(ebp + (-0xA0), _xmm[7]); /* 0x17219872: movaps xmmword ptr [ebp - 0xa0], xmm7 */
    _xmm[7] = _xmm[5]; /* 0x17219879: movaps xmm7, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721987C: mulps xmm5, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721987F: addps xmm5, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x17219882: movaps xmm2, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17219885: shufps xmm3, xmm3, 0x4e */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17219889: mulps xmm2, xmm1 */
    xmm_st(ebp + (-0x90), _xmm[4]); /* 0x1721988C: movaps xmmword ptr [ebp - 0x90], xmm4 */
    _xmm[4] = _xmm[7]; /* 0x17219893: movaps xmm4, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17219896: mulps xmm7, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17219899: mulps xmm3, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x1721989C: subps xmm5, xmm7 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x1721989F: subps xmm3, xmm2 */
    _xmm[2] = _xmm[1]; /* 0x172198A2: movaps xmm2, xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x172198A5: mulps xmm1, xmm5 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x172198A8: shufps xmm3, xmm3, 0x4e */
    _xmm[7] = _xmm[1]; /* 0x172198AC: movaps xmm7, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[2]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x172198AF: shufps xmm1, xmm1, 0x4e */
    xmm_st(ebp + (-0xE0), _xmm[5]); /* 0x172198B3: movaps xmmword ptr [ebp - 0xe0], xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x172198BA: addps xmm1, xmm7 */
    _xmm[5] = _xmm[1]; /* 0x172198BD: movaps xmm5, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x172198C0: shufps xmm1, xmm1, 0xb1 */
    { float _s = _xmm[5].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x172198C4: addss xmm1, xmm5 */
    xmm_st(ebp + (-0xF0), _xmm[1]); /* 0x172198C8: movaps xmmword ptr [ebp - 0xf0], xmm1 */
    _xmm[5] = _xmm[6]; /* 0x172198CF: movaps xmm5, xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x172198D2: mulps xmm5, xmm2 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[3]; _xmm[5].u32[3] = _s.u32[2]; } /* 0x172198D5: shufps xmm5, xmm5, 0xb1 */
    _xmm[7] = _xmm[5]; /* 0x172198D9: movaps xmm7, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x172198DC: shufps xmm5, xmm5, 0x4e */
    xmm_st(ebp + (-0x80), _xmm[4]); /* 0x172198E0: movaps xmmword ptr [ebp - 0x80], xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0x90)); /* 0x172198E4: movaps xmm4, xmmword ptr [ebp - 0x90] */
    xmm_st(ebp + (-0x70), _xmm[6]); /* 0x172198EB: movaps xmmword ptr [ebp - 0x70], xmm6 */
    _xmm[6] = _xmm[4]; /* 0x172198EF: movaps xmm6, xmm4 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x172198F2: mulps xmm6, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x172198F5: addps xmm6, xmm3 */
    _xmm[3] = _xmm[4]; /* 0x172198F8: movaps xmm3, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x172198FB: mulps xmm3, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x172198FE: subps xmm3, xmm6 */
    _xmm[6] = _xmm[4]; /* 0x17219901: movaps xmm6, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17219904: mulps xmm6, xmm2 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[3]; _xmm[6].u32[3] = _s.u32[2]; } /* 0x17219907: shufps xmm6, xmm6, 0xb1 */
    xmm_st(ebp + (-0x60), _xmm[5]); /* 0x1721990B: movaps xmmword ptr [ebp - 0x60], xmm5 */
    _xmm[5] = xmm_ld(ebp + (-0x70)); /* 0x1721990F: movaps xmm5, xmmword ptr [ebp - 0x70] */
    xmm_st(ebp + (-0x50), _xmm[7]); /* 0x17219913: movaps xmmword ptr [ebp - 0x50], xmm7 */
    _xmm[7] = _xmm[6]; /* 0x17219917: movaps xmm7, xmm6 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721991A: mulps xmm7, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x1721991D: addps xmm7, xmm3 */
    _xmm[3] = _xmm[6]; /* 0x17219920: movaps xmm3, xmm6 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17219923: shufps xmm3, xmm3, 0x4e */
    xmm_st(ebp + (-0x40), _xmm[4]); /* 0x17219927: movaps xmmword ptr [ebp - 0x40], xmm4 */
    _xmm[4] = _xmm[5]; /* 0x1721992B: movaps xmm4, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721992E: mulps xmm5, xmm3 */
    xmm_st(ebp + (-0x30), _xmm[4]); /* 0x17219931: movaps xmmword ptr [ebp - 0x30], xmm4 */
    _xmm[4] = _xmm[6]; /* 0x17219935: movaps xmm4, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x17219938: movaps xmm6, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[6] = _d; } /* 0x1721993B: subps xmm6, xmm5 */
    _xmm[5] = xmm_ld(ebp + (-0xD0)); /* 0x1721993E: movaps xmm5, xmmword ptr [ebp - 0xd0] */
    _xmm[7] = xmm_ld(ebp + (-0xC0)); /* 0x17219945: movaps xmm7, xmmword ptr [ebp - 0xc0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x1721994C: subps xmm5, xmm7 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x1721994F: shufps xmm5, xmm5, 0x4e */
    _xmm[7] = xmm_ld(ebp + (-0x80)); /* 0x17219953: movaps xmm7, xmmword ptr [ebp - 0x80] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17219957: mulps xmm4, xmm7 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721995A: mulps xmm3, xmm7 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x1721995D: subps xmm5, xmm4 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17219960: mulps xmm2, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17219963: addps xmm3, xmm5 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x17219966: shufps xmm2, xmm2, 0xb1 */
    _xmm[4] = _xmm[2]; /* 0x1721996A: movaps xmm4, xmm2 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _d.u32[3]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1721996D: shufps xmm4, xmm4, 0x4e */
    _xmm[5] = xmm_ld(ebp + (-0x40)); /* 0x17219971: movaps xmm5, xmmword ptr [ebp - 0x40] */
    xmm_st(ebp + (-0x20), _xmm[6]); /* 0x17219975: movaps xmmword ptr [ebp - 0x20], xmm6 */
    _xmm[6] = _xmm[5]; /* 0x17219979: movaps xmm6, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721997C: mulps xmm5, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721997F: mulps xmm6, xmm4 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17219982: addps xmm5, xmm3 */
    _xmm[3] = _xmm[4]; /* 0x17219985: movaps xmm3, xmm4 */
    _xmm[4] = _xmm[5]; /* 0x17219988: movaps xmm4, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x1721998B: subps xmm4, xmm6 */
    _xmm[5] = xmm_ld(ebp + (-0xA0)); /* 0x1721998E: movaps xmm5, xmmword ptr [ebp - 0xa0] */
    _xmm[6] = xmm_ld(ebp + (-0xB0)); /* 0x17219995: movaps xmm6, xmmword ptr [ebp - 0xb0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x1721999C: subps xmm5, xmm6 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x1721999F: shufps xmm5, xmm5, 0x4e */
    _xmm[6] = xmm_ld(ebp + (-0x50)); /* 0x172199A3: movaps xmm6, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x172199A7: mulps xmm6, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[6] = _d; } /* 0x172199AA: subps xmm6, xmm5 */
    _xmm[5] = xmm_ld(ebp + (-0x60)); /* 0x172199AD: movaps xmm5, xmmword ptr [ebp - 0x60] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x172199B1: mulps xmm7, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[6] = _d; } /* 0x172199B4: subps xmm6, xmm7 */
    _xmm[5] = xmm_ld(ebp + (-0x30)); /* 0x172199B7: movaps xmm5, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x172199BB: mulps xmm2, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x172199BE: mulps xmm5, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[6] = _d; } /* 0x172199C1: subps xmm6, xmm2 */
    _xmm[2] = _xmm[5]; /* 0x172199C4: movaps xmm2, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x172199C7: addps xmm2, xmm6 */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x172199CA: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    _xmm[6] = xmm_ld(ebp + (-0x20)); /* 0x172199CD: movaps xmm6, xmmword ptr [ebp - 0x20] */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_17219A40; /* 0x172199D1: je 0x17219a40 */
L_172199D3:
    eax = MEM32(ebx + 0xC); /* 0x172199D3: mov eax, dword ptr [ebx + 0xc] */
    /* test eax, eax */ /* 0x172199D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_172199E1; /* 0x172199D8: je 0x172199e1 */
L_172199DA:
    _xmm[0] = _xmm[1]; /* 0x172199DA: movaps xmm0, xmm1 */
    MEM32(eax) = _xmm[0].u32[0]; /* 0x172199DD: movss dword ptr [eax], xmm0 */
L_172199E1:
    _xmm[0] = _xmm[1]; /* 0x172199E1: movaps xmm0, xmm1 */
    _xmm[1] = xmm_ld(ebp + (-0xE0)); /* 0x172199E4: movaps xmm1, xmmword ptr [ebp - 0xe0] */
    eax = MEM32(ebx + 0x8); /* 0x172199EB: mov eax, dword ptr [ebx + 8] */
    _xmm[3] = _xmm[0]; /* 0x172199EE: movaps xmm3, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(1.0f / _s); } /* 0x172199F1: rcpss xmm0, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x172199F5: movaps xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x172199F8: mulss xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x172199FC: mulss xmm3, xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x17219A00: addss xmm5, xmm5 */
    { float _s = _xmm[3].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x17219A04: subss xmm5, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x17219A08: shufps xmm5, xmm5, 0 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17219A0C: mulps xmm1, xmm5 */
    MEM64(eax) = _xmm[1].u64[0]; /* 0x17219A0F: movlps qword ptr [eax], xmm1 */
    MEM64(eax + 0x8) = _xmm[1].u64[1]; /* 0x17219A12: movhps qword ptr [eax + 8], xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17219A16: mulps xmm4, xmm5 */
    MEM64(eax + 0x10) = _xmm[4].u64[0]; /* 0x17219A19: movlps qword ptr [eax + 0x10], xmm4 */
    MEM64(eax + 0x18) = _xmm[4].u64[1]; /* 0x17219A1D: movhps qword ptr [eax + 0x18], xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17219A21: mulps xmm6, xmm5 */
    MEM64(eax + 0x20) = _xmm[6].u64[0]; /* 0x17219A24: movlps qword ptr [eax + 0x20], xmm6 */
    MEM64(eax + 0x28) = _xmm[6].u64[1]; /* 0x17219A28: movhps qword ptr [eax + 0x28], xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17219A2C: mulps xmm5, xmm2 */
    MEM64(eax + 0x30) = _xmm[5].u64[0]; /* 0x17219A2F: movlps qword ptr [eax + 0x30], xmm5 */
    MEM64(eax + 0x38) = _xmm[5].u64[1]; /* 0x17219A33: movhps qword ptr [eax + 0x38], xmm5 */
    esp = ebp; /* 0x17219A37: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17219A39: pop ebp */
    esp = ebx; /* 0x17219A3A: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17219A3C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17219A3D: ret 0xc */
L_17219A40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17219A40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x17219A42: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17219A44: pop ebp */
    esp = ebx; /* 0x17219A45: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17219A47: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17219A48: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17219A53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17219A53u);

L_17219A53:
    edi = edi; /* 0x17219A53: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17219A55: push ebp */
    ebp = esp; /* 0x17219A56: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17219A58: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x17219A5B: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x17219A5E: mov edx, dword ptr [ebp + 8] */
    _xmm[0].u64[0] = MEM64(ecx); /* 0x17219A61: movlps xmm0, qword ptr [ecx] */
    _xmm[0].u64[1] = MEM64(ecx + 0x8); /* 0x17219A64: movhps xmm0, qword ptr [ecx + 8] */
    _xmm[1].u64[0] = MEM64(ecx + 0x10); /* 0x17219A68: movlps xmm1, qword ptr [ecx + 0x10] */
    _xmm[1].u64[1] = MEM64(ecx + 0x18); /* 0x17219A6C: movhps xmm1, qword ptr [ecx + 0x18] */
    _xmm[2].u64[0] = MEM64(ecx + 0x20); /* 0x17219A70: movlps xmm2, qword ptr [ecx + 0x20] */
    _xmm[2].u64[1] = MEM64(ecx + 0x28); /* 0x17219A74: movhps xmm2, qword ptr [ecx + 0x28] */
    _xmm[3].u64[0] = MEM64(ecx + 0x30); /* 0x17219A78: movlps xmm3, qword ptr [ecx + 0x30] */
    _xmm[3].u64[1] = MEM64(ecx + 0x38); /* 0x17219A7C: movhps xmm3, qword ptr [ecx + 0x38] */
    _xmm[4].u64[0] = MEM32(eax); _xmm[4].u64[1] = 0; /* 0x17219A80: movss xmm4, dword ptr [eax] */
    _xmm[5].u64[0] = MEM32(eax + 0x4); _xmm[5].u64[1] = 0; /* 0x17219A84: movss xmm5, dword ptr [eax + 4] */
    _xmm[6].u64[0] = MEM32(eax + 0x8); _xmm[6].u64[1] = 0; /* 0x17219A89: movss xmm6, dword ptr [eax + 8] */
    _xmm[7].u64[0] = MEM32(eax + 0xC); _xmm[7].u64[1] = 0; /* 0x17219A8E: movss xmm7, dword ptr [eax + 0xc] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x17219A93: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x17219A97: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x17219A9B: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219A9F: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17219AA3: mulps xmm4, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17219AA6: mulps xmm5, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17219AA9: mulps xmm6, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17219AAC: mulps xmm7, xmm3 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17219AAF: addps xmm4, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17219AB2: addps xmm6, xmm7 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17219AB5: addps xmm4, xmm6 */
    _xmm[5].u64[0] = MEM32(eax + 0x10); _xmm[5].u64[1] = 0; /* 0x17219AB8: movss xmm5, dword ptr [eax + 0x10] */
    _xmm[6].u64[0] = MEM32(eax + 0x14); _xmm[6].u64[1] = 0; /* 0x17219ABD: movss xmm6, dword ptr [eax + 0x14] */
    _xmm[7].u64[0] = MEM32(eax + 0x18); _xmm[7].u64[1] = 0; /* 0x17219AC2: movss xmm7, dword ptr [eax + 0x18] */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x17219AC7: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x17219ACB: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219ACF: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17219AD3: mulps xmm5, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17219AD6: mulps xmm6, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17219AD9: mulps xmm7, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17219ADC: addps xmm5, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17219ADF: addps xmm5, xmm7 */
    _xmm[6].u64[0] = MEM32(eax + 0x1C); _xmm[6].u64[1] = 0; /* 0x17219AE2: movss xmm6, dword ptr [eax + 0x1c] */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x17219AE7: shufps xmm6, xmm6, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17219AEB: mulps xmm6, xmm3 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17219AEE: addps xmm5, xmm6 */
    _xmm[6].u64[0] = MEM32(eax + 0x20); _xmm[6].u64[1] = 0; /* 0x17219AF1: movss xmm6, dword ptr [eax + 0x20] */
    _xmm[7].u64[0] = MEM32(eax + 0x24); _xmm[7].u64[1] = 0; /* 0x17219AF6: movss xmm7, dword ptr [eax + 0x24] */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x17219AFB: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219AFF: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x17219B03: mulps xmm6, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17219B06: mulps xmm7, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17219B09: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x28); _xmm[7].u64[1] = 0; /* 0x17219B0C: movss xmm7, dword ptr [eax + 0x28] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219B11: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17219B15: mulps xmm7, xmm2 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17219B18: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x2C); _xmm[7].u64[1] = 0; /* 0x17219B1B: movss xmm7, dword ptr [eax + 0x2c] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219B20: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x17219B24: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x17219B27: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x30); _xmm[7].u64[1] = 0; /* 0x17219B2A: movss xmm7, dword ptr [eax + 0x30] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219B2F: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17219B33: mulps xmm0, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x34); _xmm[7].u64[1] = 0; /* 0x17219B36: movss xmm7, dword ptr [eax + 0x34] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219B3B: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17219B3F: mulps xmm1, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x38); _xmm[7].u64[1] = 0; /* 0x17219B42: movss xmm7, dword ptr [eax + 0x38] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219B47: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17219B4B: mulps xmm2, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x3C); _xmm[7].u64[1] = 0; /* 0x17219B4E: movss xmm7, dword ptr [eax + 0x3c] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x17219B53: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17219B57: mulps xmm3, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17219B5A: addps xmm0, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17219B5D: addps xmm2, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17219B60: addps xmm0, xmm2 */
    _xmm[1] = _xmm[4]; /* 0x17219B63: movaps xmm1, xmm4 */
    _xmm[2] = _xmm[6]; /* 0x17219B66: movaps xmm2, xmm6 */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x17219B69: unpcklps xmm4, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x17219B6C: unpcklps xmm6, xmm0 */
    { xmm_t _s = _xmm[5], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[2]; _xmm[1].u32[1] = _s.u32[2]; _xmm[1].u32[2] = _d.u32[3]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x17219B6F: unpckhps xmm1, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x17219B72: unpckhps xmm2, xmm0 */
    MEM64(edx) = _xmm[4].u64[0]; /* 0x17219B75: movlps qword ptr [edx], xmm4 */
    MEM64(edx + 0x8) = _xmm[6].u64[0]; /* 0x17219B78: movlps qword ptr [edx + 8], xmm6 */
    MEM64(edx + 0x10) = _xmm[4].u64[1]; /* 0x17219B7C: movhps qword ptr [edx + 0x10], xmm4 */
    MEM64(edx + 0x18) = _xmm[6].u64[1]; /* 0x17219B80: movhps qword ptr [edx + 0x18], xmm6 */
    MEM64(edx + 0x20) = _xmm[1].u64[0]; /* 0x17219B84: movlps qword ptr [edx + 0x20], xmm1 */
    MEM64(edx + 0x28) = _xmm[2].u64[0]; /* 0x17219B88: movlps qword ptr [edx + 0x28], xmm2 */
    MEM64(edx + 0x30) = _xmm[1].u64[1]; /* 0x17219B8C: movhps qword ptr [edx + 0x30], xmm1 */
    MEM64(edx + 0x38) = _xmm[2].u64[1]; /* 0x17219B90: movhps qword ptr [edx + 0x38], xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x17219B94: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x17219B97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17219B98: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17219BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17219BA0u);

L_17219BA0:
    edi = edi; /* 0x17219BA0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17219BA2: push ebx */
    ebx = esp; /* 0x17219BA3: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17219BA5: push ecx */
    PUSH32(esp, ecx); /* 0x17219BA6: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17219BA7: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17219BAA: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17219BAD: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17219BAE: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17219BB1: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17219BB5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17219BB7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0xC); /* 0x17219BBA: mov eax, dword ptr [ebx + 0xc] */
    _xmm[4] = xmm_ld(ebp + (-0x10)); /* 0x17219BBD: movaps xmm4, xmmword ptr [ebp - 0x10] */
    _xmm[4].u64[0] = MEM64(eax); /* 0x17219BC1: movlps xmm4, qword ptr [eax] */
    _xmm[4].u64[1] = MEM64(eax + 0x8); /* 0x17219BC4: movhps xmm4, qword ptr [eax + 8] */
    eax = MEM32(ebx + 0x10); /* 0x17219BC8: mov eax, dword ptr [ebx + 0x10] */
    _xmm[0] = xmm_ld(ebp + (-0x10)); /* 0x17219BCB: movaps xmm0, xmmword ptr [ebp - 0x10] */
    _xmm[0].u64[0] = MEM64(eax); /* 0x17219BCF: movlps xmm0, qword ptr [eax] */
    _xmm[0].u64[1] = MEM64(eax + 0x8); /* 0x17219BD2: movhps xmm0, qword ptr [eax + 8] */
    eax = MEM32(ebx + 0x14); /* 0x17219BD6: mov eax, dword ptr [ebx + 0x14] */
    _xmm[2] = xmm_ld(ebp + (-0x10)); /* 0x17219BD9: movaps xmm2, xmmword ptr [ebp - 0x10] */
    _xmm[2].u64[0] = MEM64(eax); /* 0x17219BDD: movlps xmm2, qword ptr [eax] */
    _xmm[2].u64[1] = MEM64(eax + 0x8); /* 0x17219BE0: movhps xmm2, qword ptr [eax + 8] */
    eax = MEM32(ebx + 0x8); /* 0x17219BE4: mov eax, dword ptr [ebx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17219BE7: shufps xmm0, xmm0, 0x39 */
    _xmm[1] = _xmm[0]; /* 0x17219BEB: movaps xmm1, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17219BEE: mulps xmm1, xmm2 */
    _xmm[3] = _xmm[0]; /* 0x17219BF1: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x17219BF4: shufps xmm2, xmm2, 0x4e */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17219BF8: mulps xmm3, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x17219BFB: shufps xmm2, xmm2, 0x39 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17219BFF: mulps xmm0, xmm2 */
    _xmm[2] = _xmm[1]; /* 0x17219C02: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x17219C05: shufps xmm2, xmm1, 0x4e */
    _xmm[5] = _xmm[3]; /* 0x17219C09: movaps xmm5, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[3]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x17219C0C: shufps xmm5, xmm3, 0x39 */
    xmm_st(ebp + (-0x10), _xmm[0]); /* 0x17219C10: movaps xmmword ptr [ebp - 0x10], xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x17219C14: subps xmm5, xmm2 */
    _xmm[2] = _xmm[0]; /* 0x17219C17: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x17219C1A: shufps xmm2, xmm0, 0x4e */
    { float _s0 = sse_f32(MEM32(ebp + (-0x10))); float _s1 = sse_f32(MEM32(ebp + (-0x10) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x10) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x10) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x17219C1E: subps xmm2, xmmword ptr [ebp - 0x10] */
    _xmm[6] = _xmm[1]; /* 0x17219C22: movaps xmm6, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[2]; _xmm[6].u32[2] = _s.u32[3]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x17219C25: shufps xmm6, xmm1, 0x39 */
    _xmm[0] = _xmm[4]; /* 0x17219C29: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17219C2C: shufps xmm0, xmm4, 0x39 */
    _xmm[4] = xmm_ld(0x1723C6E0); /* 0x17219C30: movaps xmm4, xmmword ptr [0x1723c6e0] */
    _xmm[1] = _xmm[0]; /* 0x17219C37: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17219C3A: shufps xmm1, xmm0, 0x39 */
    _xmm[7] = _xmm[3]; /* 0x17219C3E: movaps xmm7, xmm3 */
    _xmm[3] = _xmm[1]; /* 0x17219C41: movaps xmm3, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x17219C44: shufps xmm3, xmm1, 0x39 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17219C48: mulps xmm0, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[7] = _d; } /* 0x17219C4B: subps xmm7, xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17219C4E: mulps xmm1, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17219C51: addps xmm0, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17219C54: mulps xmm3, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17219C57: addps xmm0, xmm3 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x17219C5A: xorps xmm0, xmm4 */
    xmm_st(eax, _xmm[0]); /* 0x17219C5D: movups xmmword ptr [eax], xmm0 */
    esp = ebp; /* 0x17219C60: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17219C62: pop ebp */
    esp = ebx; /* 0x17219C63: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17219C65: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17219C66: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17219C6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17219C6Eu);

L_17219C6E:
    edi = edi; /* 0x17219C6E: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17219C70: push ebx */
    ebx = esp; /* 0x17219C71: mov ebx, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x17219C73: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17219C76: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x17219C79: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17219C7C: push ebp */
    PUSH32(esp, ebp); /* 0x17219C7D: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17219C7E: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17219C81: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17219C85: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x17219C87: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x8); /* 0x17219C8A: mov eax, dword ptr [ebx + 8] */
    /* test LO8(eax), 0xFu */ /* 0x17219C8D: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17219CA2; /* 0x17219C8F: jne 0x17219ca2 */
L_17219C91:
    _xmm[7] = xmm_ld(eax); /* 0x17219C91: movaps xmm7, xmmword ptr [eax] */
    _xmm[1] = xmm_ld(eax + 0x10); /* 0x17219C94: movaps xmm1, xmmword ptr [eax + 0x10] */
    _xmm[2] = xmm_ld(eax + 0x20); /* 0x17219C98: movaps xmm2, xmmword ptr [eax + 0x20] */
    _xmm[0] = xmm_ld(eax + 0x30); /* 0x17219C9C: movaps xmm0, xmmword ptr [eax + 0x30] */
    goto L_17219CC1; /* 0x17219CA0: jmp 0x17219cc1 */
L_17219CA2:
    _xmm[1].u64[0] = MEM64(eax + 0x10); /* 0x17219CA2: movlps xmm1, qword ptr [eax + 0x10] */
    _xmm[7].u64[0] = MEM64(eax); /* 0x17219CA6: movlps xmm7, qword ptr [eax] */
    _xmm[1].u64[1] = MEM64(eax + 0x18); /* 0x17219CA9: movhps xmm1, qword ptr [eax + 0x18] */
    _xmm[7].u64[1] = MEM64(eax + 0x8); /* 0x17219CAD: movhps xmm7, qword ptr [eax + 8] */
    _xmm[2].u64[0] = MEM64(eax + 0x20); /* 0x17219CB1: movlps xmm2, qword ptr [eax + 0x20] */
    _xmm[0].u64[0] = MEM64(eax + 0x30); /* 0x17219CB5: movlps xmm0, qword ptr [eax + 0x30] */
    _xmm[2].u64[1] = MEM64(eax + 0x28); /* 0x17219CB9: movhps xmm2, qword ptr [eax + 0x28] */
    _xmm[0].u64[1] = MEM64(eax + 0x38); /* 0x17219CBD: movhps xmm0, qword ptr [eax + 0x38] */
L_17219CC1:
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x17219CC1: shufps xmm2, xmm2, 0x39 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17219CC5: shufps xmm1, xmm1, 0x39 */
    _xmm[3] = _xmm[0]; /* 0x17219CC9: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _d.u32[3]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x17219CCC: shufps xmm0, xmm0, 0x4e */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17219CD0: mulps xmm3, xmm2 */
    _xmm[4] = _xmm[0]; /* 0x17219CD3: movaps xmm4, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17219CD6: shufps xmm0, xmm0, 0x39 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17219CDA: mulps xmm4, xmm2 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17219CDD: mulps xmm2, xmm0 */
    _xmm[0] = _xmm[2]; /* 0x17219CE0: movaps xmm0, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x17219CE3: shufps xmm2, xmm2, 0x4e */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x17219CE7: subps xmm2, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x17219CEA: movaps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17219CED: shufps xmm1, xmm1, 0x39 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17219CF1: mulps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17219CF4: shufps xmm1, xmm1, 0x39 */
    _xmm[5] = _xmm[4]; /* 0x17219CF8: movaps xmm5, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[2]; _xmm[4].u32[2] = _s.u32[3]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x17219CFB: shufps xmm4, xmm4, 0x39 */
    _xmm[6] = _xmm[3]; /* 0x17219CFF: movaps xmm6, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17219D02: shufps xmm3, xmm3, 0x4e */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[2]; _xmm[6].u32[2] = _s.u32[3]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x17219D06: shufps xmm6, xmm6, 0x39 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x17219D0A: subps xmm4, xmm3 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x17219D0D: subps xmm5, xmm6 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17219D10: mulps xmm0, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17219D13: mulps xmm1, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17219D16: addps xmm0, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17219D19: addps xmm0, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17219D1C: mulps xmm0, xmm7 */
    _xmm[1] = _xmm[0]; /* 0x17219D1F: movaps xmm1, xmm0 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x17219D22: movhlps xmm0, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x17219D25: addps xmm1, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x17219D28: movaps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17219D2B: shufps xmm1, xmm1, 1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x17219D2F: subss xmm0, xmm1 */
    MEM32(ebp + (-0x20)) = _xmm[0].u32[0]; /* 0x17219D33: movss dword ptr [ebp - 0x20], xmm0 */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17219D38: fld dword ptr [ebp - 0x20] */
    esp = ebp; /* 0x17219D3B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17219D3D: pop ebp */
    esp = ebx; /* 0x17219D3E: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17219D40: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17219D41: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17219D4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17219D4Bu);

L_17219D4B:
    edi = edi; /* 0x17219D4B: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17219D4D: push ebx */
    ebx = esp; /* 0x17219D4E: mov ebx, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x17219D50: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17219D53: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x17219D56: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17219D59: push ebp */
    PUSH32(esp, ebp); /* 0x17219D5A: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17219D5B: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17219D5E: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17219D62: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17219D64: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0xC); /* 0x17219D67: mov edx, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x14); /* 0x17219D6A: mov ecx, dword ptr [ebx + 0x14] */
    _xmm[0].u64[0] = MEM32(edx + 0x8); _xmm[0].u64[1] = 0; /* 0x17219D6D: movss xmm0, dword ptr [edx + 8] */
    _xmm[1].u64[0] = MEM32(ecx + 0x8); _xmm[1].u64[1] = 0; /* 0x17219D72: movss xmm1, dword ptr [ecx + 8] */
    _xmm[0].u64[1] = MEM64(edx); /* 0x17219D77: movhps xmm0, qword ptr [edx] */
    _xmm[1].u64[1] = MEM64(ecx); /* 0x17219D7A: movhps xmm1, qword ptr [ecx] */
    edx = MEM32(ebx + 0x10); /* 0x17219D7D: mov edx, dword ptr [ebx + 0x10] */
    eax = MEM32(ebx + 0x8); /* 0x17219D80: mov eax, dword ptr [ebx + 8] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x17219D83: movss xmm2, dword ptr [edx + 8] */
    _xmm[2].u64[1] = MEM64(edx); /* 0x17219D88: movhps xmm2, qword ptr [edx] */
    _xmm[3] = _xmm[0]; /* 0x17219D8B: movaps xmm3, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x17219D8E: subps xmm0, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x17219D91: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x17219D94: shufps xmm0, xmm0, 0x78 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[2]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17219D98: shufps xmm1, xmm1, 0x63 */
    _xmm[4] = _xmm[3]; /* 0x17219D9C: movaps xmm4, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x17219D9F: subps xmm3, xmm2 */
    _xmm[2] = xmm_ld(0x1702A7F0); /* 0x17219DA2: movaps xmm2, xmmword ptr [0x1702a7f0] */
    _xmm[5] = _xmm[3]; /* 0x17219DA9: movaps xmm5, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[2]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17219DAC: shufps xmm3, xmm3, 0x63 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[3]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x17219DB0: shufps xmm5, xmm5, 0x78 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17219DB4: mulps xmm0, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17219DB7: mulps xmm5, xmm1 */
    _xmm[1] = xmm_ld(0x1702A800); /* 0x17219DBA: movaps xmm1, xmmword ptr [0x1702a800] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x17219DC1: subps xmm0, xmm5 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _d.u32[3]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x17219DC4: shufps xmm4, xmm4, 0xe */
    _xmm[3] = _xmm[0]; /* 0x17219DC8: movaps xmm3, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17219DCB: mulps xmm0, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x17219DCE: movaps xmm5, xmm0 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x17219DD1: movhlps xmm0, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17219DD4: addps xmm5, xmm0 */
    _xmm[0] = _xmm[5]; /* 0x17219DD7: movaps xmm0, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x17219DDA: shufps xmm5, xmm5, 1 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17219DDE: addss xmm0, xmm5 */
    _xmm[5] = _xmm[0]; /* 0x17219DE2: movaps xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x17219DE5: rsqrtss xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x17219DE9: mulss xmm1, xmm0 */
    _xmm[6] = _xmm[5]; /* 0x17219DED: movaps xmm6, xmm5 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x17219DF0: mulss xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x17219DF4: mulss xmm5, xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x17219DF8: subss xmm2, xmm5 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x17219DFC: mulss xmm1, xmm2 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x17219E00: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17219E04: mulps xmm3, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17219E07: mulps xmm4, xmm3 */
    xmm_st(eax, _xmm[3]); /* 0x17219E0A: movups xmmword ptr [eax], xmm3 */
    _xmm[6].u64[0] = _xmm[4].u64[1]; /* 0x17219E0D: movhlps xmm6, xmm4 */
    _xmm[0] = _xmm[4]; /* 0x17219E10: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[1]; _xmm[4].u32[2] = _s.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x17219E13: shufps xmm4, xmm4, 0x55 */
    { float _s = _xmm[4].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] + _s); } /* 0x17219E17: addss xmm6, xmm4 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17219E1B: addss xmm0, xmm6 */
    { xmm_t _s = xmm_ld(0x1723C670); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x17219E1F: xorps xmm0, xmmword ptr [0x1723c670] */
    MEM32(eax + 0xC) = _xmm[0].u32[0]; /* 0x17219E26: movss dword ptr [eax + 0xc], xmm0 */
    esp = ebp; /* 0x17219E2B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17219E2D: pop ebp */
    esp = ebx; /* 0x17219E2E: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17219E30: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17219E31: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17219E3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17219E3Cu);

L_17219E3C:
    edi = edi; /* 0x17219E3C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17219E3E: push ebp */
    ebp = esp; /* 0x17219E3F: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17219E41: push ebx */
    eax = MEM32(ebp + 0x10); /* 0x17219E42: mov eax, dword ptr [ebp + 0x10] */
    _xmm[1] = xmm_ld(eax); /* 0x17219E45: movups xmm1, xmmword ptr [eax] */
    _xmm[2] = _xmm[1]; /* 0x17219E48: movaps xmm2, xmm1 */
    ebx = 0x1723C6F0; /* 0x17219E4B: lea ebx, [0x1723c6f0] */
    { xmm_t _s = xmm_ld(ebx + 0x40); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x17219E51: andps xmm2, xmmword ptr [ebx + 0x40] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17219E55: mulps xmm2, xmm2 */
    _xmm[3].u64[0] = _xmm[2].u64[1]; /* 0x17219E58: movhlps xmm3, xmm2 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17219E5B: addps xmm3, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x17219E5E: movaps xmm2, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x17219E61: shufps xmm2, xmm2, 1 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x17219E65: addss xmm2, xmm3 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x17219E69: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x17219E6C: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_17219EA2; /* 0x17219E6F: je 0x17219ea2 */
L_17219E71:
    _xmm[6] = _xmm[2]; /* 0x17219E71: movaps xmm6, xmm2 */
    { float _s = _xmm[6].f32[0]; _xmm[2].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x17219E74: rsqrtss xmm2, xmm6 */
    _xmm[3] = _xmm[2]; /* 0x17219E78: movaps xmm3, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x17219E7B: mulss xmm6, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x17219E7F: mulss xmm6, xmm2 */
    { float _s = sse_f32(MEM32(0x1702A800)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x17219E83: mulss xmm2, dword ptr [0x1702a800] */
    _xmm[3].u64[0] = MEM32(0x1702A7F0); _xmm[3].u64[1] = 0; /* 0x17219E8B: movss xmm3, dword ptr [0x1702a7f0] */
    { float _s = _xmm[6].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x17219E93: subss xmm3, xmm6 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x17219E97: mulss xmm2, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x17219E9B: shufps xmm2, xmm2, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17219E9F: mulps xmm2, xmm1 */
L_17219EA2:
    ecx = MEM32(ebp + 0xC); /* 0x17219EA2: mov ecx, dword ptr [ebp + 0xc] */
    _xmm[4] = xmm_ld(ecx); /* 0x17219EA5: movups xmm4, xmmword ptr [ecx] */
    _xmm[5] = _xmm[4]; /* 0x17219EA8: movaps xmm5, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x17219EAB: mulps xmm5, xmm2 */
    _xmm[3].u64[0] = _xmm[5].u64[1]; /* 0x17219EAE: movhlps xmm3, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x17219EB1: addps xmm5, xmm3 */
    _xmm[3] = _xmm[5]; /* 0x17219EB4: movaps xmm3, xmm5 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x17219EB7: shufps xmm3, xmm3, 1 */
    { float _s = _xmm[3].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x17219EBB: addss xmm5, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x17219EBF: shufps xmm5, xmm5, 0 */
    { xmm_t _s = xmm_ld(ebx); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x17219EC3: xorps xmm2, xmmword ptr [ebx] */
    _xmm[0] = _xmm[2]; /* 0x17219EC6: movaps xmm0, xmm2 */
    _xmm[1] = _xmm[2]; /* 0x17219EC9: movaps xmm1, xmm2 */
    _xmm[3] = _xmm[2]; /* 0x17219ECC: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17219ECF: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x17219ED3: shufps xmm1, xmm1, 0x55 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x17219ED7: shufps xmm2, xmm2, 0xaa */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x17219EDB: shufps xmm3, xmm3, 0xff */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17219EDF: mulps xmm0, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17219EE2: mulps xmm1, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17219EE5: mulps xmm2, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x17219EE8: mulps xmm3, xmm4 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x17219EEB: addss xmm0, xmm5 */
    _xmm[6] = _xmm[5]; /* 0x17219EEF: movaps xmm6, xmm5 */
    _xmm[7] = _xmm[5]; /* 0x17219EF2: movaps xmm7, xmm5 */
    { xmm_t _s = xmm_ld(ebx + 0x10); for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x17219EF5: andps xmm5, xmmword ptr [ebx + 0x10] */
    { xmm_t _s = xmm_ld(ebx + 0x20); for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] & _s.u32[_k]; } /* 0x17219EF9: andps xmm6, xmmword ptr [ebx + 0x20] */
    { xmm_t _s = xmm_ld(ebx + 0x30); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x17219EFD: andps xmm7, xmmword ptr [ebx + 0x30] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x17219F01: addps xmm1, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17219F04: addps xmm2, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x17219F07: addps xmm3, xmm7 */
    edx = MEM32(ebp + 0x8); /* 0x17219F0A: mov edx, dword ptr [ebp + 8] */
    MEM64(edx) = _xmm[0].u64[0]; /* 0x17219F0D: movlps qword ptr [edx], xmm0 */
    MEM64(edx + 0x8) = _xmm[0].u64[1]; /* 0x17219F10: movhps qword ptr [edx + 8], xmm0 */
    MEM64(edx + 0x10) = _xmm[1].u64[0]; /* 0x17219F14: movlps qword ptr [edx + 0x10], xmm1 */
    MEM64(edx + 0x18) = _xmm[1].u64[1]; /* 0x17219F18: movhps qword ptr [edx + 0x18], xmm1 */
    MEM64(edx + 0x20) = _xmm[2].u64[0]; /* 0x17219F1C: movlps qword ptr [edx + 0x20], xmm2 */
    MEM64(edx + 0x28) = _xmm[2].u64[1]; /* 0x17219F20: movhps qword ptr [edx + 0x28], xmm2 */
    MEM64(edx + 0x30) = _xmm[3].u64[0]; /* 0x17219F24: movlps qword ptr [edx + 0x30], xmm3 */
    MEM64(edx + 0x38) = _xmm[3].u64[1]; /* 0x17219F28: movhps qword ptr [edx + 0x38], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x17219F2C: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x17219F2F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17219F30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17219F31: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17219F39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17219F39u);

L_17219F39:
    edi = edi; /* 0x17219F39: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17219F3B: push ebx */
    ebx = esp; /* 0x17219F3C: mov ebx, esp */
    PUSH32(esp, ebp); /* 0x17219F3E: push ebp */
    PUSH32(esp, ebp); /* 0x17219F3F: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17219F40: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17219F43: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17219F47: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17219F49: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0xC); /* 0x17219F4C: mov edx, dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x8); /* 0x17219F4F: mov eax, dword ptr [ebx + 8] */
    _xmm[0].u64[1] = MEM64(edx + 0x8); /* 0x17219F52: movhps xmm0, qword ptr [edx + 8] */
    _xmm[0].u64[0] = MEM64(edx); /* 0x17219F56: movlps xmm0, qword ptr [edx] */
    _xmm[1] = xmm_ld(0x1723C680); /* 0x17219F59: movaps xmm1, xmmword ptr [0x1723c680] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x17219F60: andps xmm1, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17219F63: mulps xmm1, xmm1 */
    _xmm[2].u64[0] = MEM32(0x1702A7F0); _xmm[2].u64[1] = 0; /* 0x17219F66: movss xmm2, dword ptr [0x1702a7f0] */
    _xmm[3].u64[0] = MEM32(0x1702A800); _xmm[3].u64[1] = 0; /* 0x17219F6E: movss xmm3, dword ptr [0x1702a800] */
    _xmm[4] = _xmm[1]; /* 0x17219F76: movaps xmm4, xmm1 */
    _xmm[1].u64[0] = _xmm[1].u64[1]; /* 0x17219F79: movhlps xmm1, xmm1 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17219F7C: addps xmm4, xmm1 */
    _xmm[1] = _xmm[4]; /* 0x17219F7F: movaps xmm1, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x17219F82: shufps xmm4, xmm4, 1 */
    { float _s = _xmm[4].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x17219F86: addss xmm1, xmm4 */
    _xmm[4] = xmm_ld(0x1723C690); /* 0x17219F8A: movaps xmm4, xmmword ptr [0x1723c690] */
    _xmm[5] = _xmm[1]; /* 0x17219F91: movaps xmm5, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x17219F94: rsqrtss xmm1, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x17219F98: mulss xmm5, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x17219F9C: mulss xmm5, xmm1 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x17219FA0: subss xmm2, xmm5 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x17219FA4: mulss xmm3, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x17219FA8: mulss xmm3, xmm2 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x17219FAC: shufps xmm3, xmm3, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17219FB0: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17219FB3: mulps xmm4, xmm0 */
    _xmm[1] = _xmm[0]; /* 0x17219FB6: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x17219FB9: shufps xmm0, xmm0, 0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x17219FBD: mulps xmm0, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C6D0)); float _s1 = sse_f32(MEM32(0x1723C6D0 + 4)); float _s2 = sse_f32(MEM32(0x1723C6D0 + 8)); float _s3 = sse_f32(MEM32(0x1723C6D0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x17219FC0: addps xmm0, xmmword ptr [0x1723c6d0] */
    _xmm[2] = _xmm[1]; /* 0x17219FC7: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x17219FCA: shufps xmm1, xmm1, 0xff */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x17219FCE: mulps xmm1, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C6A0)); float _s1 = sse_f32(MEM32(0x1723C6A0 + 4)); float _s2 = sse_f32(MEM32(0x1723C6A0 + 8)); float _s3 = sse_f32(MEM32(0x1723C6A0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x17219FD1: addps xmm1, xmmword ptr [0x1723c6a0] */
    _xmm[3] = _xmm[2]; /* 0x17219FD8: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x17219FDB: shufps xmm2, xmm2, 0xaa */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x17219FDF: mulps xmm2, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C6B0)); float _s1 = sse_f32(MEM32(0x1723C6B0 + 4)); float _s2 = sse_f32(MEM32(0x1723C6B0 + 8)); float _s3 = sse_f32(MEM32(0x1723C6B0 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x17219FE2: addps xmm2, xmmword ptr [0x1723c6b0] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[1]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x17219FE9: shufps xmm3, xmm3, 0x55 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x17219FED: mulps xmm4, xmm3 */
    { float _s0 = sse_f32(MEM32(0x1723C6C0)); float _s1 = sse_f32(MEM32(0x1723C6C0 + 4)); float _s2 = sse_f32(MEM32(0x1723C6C0 + 8)); float _s3 = sse_f32(MEM32(0x1723C6C0 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x17219FF0: addps xmm4, xmmword ptr [0x1723c6c0] */
    xmm_st(eax, _xmm[0]); /* 0x17219FF7: movups xmmword ptr [eax], xmm0 */
    xmm_st(eax + 0x10, _xmm[4]); /* 0x17219FFA: movups xmmword ptr [eax + 0x10], xmm4 */
    xmm_st(eax + 0x20, _xmm[2]); /* 0x17219FFE: movups xmmword ptr [eax + 0x20], xmm2 */
    xmm_st(eax + 0x30, _xmm[1]); /* 0x1721A002: movups xmmword ptr [eax + 0x30], xmm1 */
    esp = ebp; /* 0x1721A006: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721A008: pop ebp */
    esp = ebx; /* 0x1721A009: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721A00B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1721A00C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1721A016(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721A016u);

L_1721A016:
    edi = edi; /* 0x1721A016: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721A018: push ebx */
    ebx = esp; /* 0x1721A019: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1721A01B: push ecx */
    PUSH32(esp, ecx); /* 0x1721A01C: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721A01D: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721A020: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721A023: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721A024: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1721A027: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1721A02B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1721A02D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0xC); /* 0x1721A030: mov eax, dword ptr [ebx + 0xc] */
    _xmm[1] = xmm_ld(ebp + (-0x10)); /* 0x1721A033: movaps xmm1, xmmword ptr [ebp - 0x10] */
    _xmm[1].u64[0] = MEM64(eax); /* 0x1721A037: movlps xmm1, qword ptr [eax] */
    _xmm[1].u64[1] = MEM64(eax + 0x8); /* 0x1721A03A: movhps xmm1, qword ptr [eax + 8] */
    eax = MEM32(ebx + 0x8); /* 0x1721A03E: mov eax, dword ptr [ebx + 8] */
    _xmm[0] = _xmm[1]; /* 0x1721A041: movaps xmm0, xmm1 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721A044: mulps xmm0, xmm1 */
    _xmm[2] = _xmm[0]; /* 0x1721A047: movaps xmm2, xmm0 */
    _xmm[2].u64[0] = _xmm[0].u64[1]; /* 0x1721A04A: movhlps xmm2, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721A04D: addps xmm0, xmm2 */
    _xmm[2] = _xmm[0]; /* 0x1721A050: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[1]; _xmm[2].u32[2] = _s.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x1721A053: shufps xmm2, xmm0, 0x55 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1721A057: addss xmm0, xmm2 */
    xmm_st(ebp + (-0x10), _xmm[0]); /* 0x1721A05B: movaps xmmword ptr [ebp - 0x10], xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(1.0f / _s); } /* 0x1721A05F: rcpss xmm2, xmm0 */
    MEM32(ebp + (-0x10)) = _xmm[2].u32[0]; /* 0x1721A063: movss dword ptr [ebp - 0x10], xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x10)); /* 0x1721A068: movaps xmm2, xmmword ptr [ebp - 0x10] */
    _xmm[3] = _xmm[2]; /* 0x1721A06C: movaps xmm3, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x1721A06F: mulss xmm3, xmm0 */
    _xmm[0] = _xmm[2]; /* 0x1721A073: movaps xmm0, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x1721A076: addss xmm0, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x1721A07A: mulss xmm3, xmm2 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x1721A07E: subss xmm0, xmm3 */
    _xmm[2] = _xmm[0]; /* 0x1721A082: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x1721A085: shufps xmm2, xmm0, 0 */
    _xmm[0] = xmm_ld(0x1723C740); /* 0x1721A089: movaps xmm0, xmmword ptr [0x1723c740] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721A090: mulps xmm1, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721A093: mulps xmm1, xmm2 */
    xmm_st(eax, _xmm[1]); /* 0x1721A096: movups xmmword ptr [eax], xmm1 */
    esp = ebp; /* 0x1721A099: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721A09B: pop ebp */
    esp = ebx; /* 0x1721A09C: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721A09E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1721A09F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1721A0A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721A0A7u);

L_1721A0A7:
    edi = edi; /* 0x1721A0A7: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721A0A9: push ebx */
    ebx = esp; /* 0x1721A0AA: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1721A0AC: push ecx */
    PUSH32(esp, ecx); /* 0x1721A0AD: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721A0AE: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721A0B1: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721A0B4: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721A0B5: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1721A0B8: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1721A0BC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1721A0BE: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0xC); /* 0x1721A0C1: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1721A0C4: mov dword ptr [ebp - 4], eax */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x1721A0C7: movss xmm0, dword ptr [ebp - 4] */
    eax = 0x1702A830u; /* 0x1721A0CC: mov eax, 0x1702a830 */
    _xmm[1] = xmm_ld(eax); /* 0x1721A0D1: movaps xmm1, xmmword ptr [eax] */
    eax = MEM32(ebx + 0x10); /* 0x1721A0D4: mov eax, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1721A0D7: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x14); /* 0x1721A0DA: mov eax, dword ptr [ebx + 0x14] */
    _xmm[2] = _xmm[0]; /* 0x1721A0DD: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x1721A0E0: unpcklps xmm2, xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x1721A0E3: movss xmm0, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1721A0E8: mov dword ptr [ebp - 4], eax */
    _xmm[3].u64[0] = MEM32(ebp + (-0x4)); _xmm[3].u64[1] = 0; /* 0x1721A0EB: movss xmm3, dword ptr [ebp - 4] */
    eax = ebp + (-0x30); /* 0x1721A0F0: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1721A0F3: push eax */
    eax = ebp + (-0x20); /* 0x1721A0F4: lea eax, [ebp - 0x20] */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _d.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x1721A0F7: unpcklps xmm3, xmm0 */
    PUSH32(esp, eax); /* 0x1721A0FA: push eax */
    _xmm[3].u64[1] = _xmm[2].u64[0]; /* 0x1721A0FB: movlhps xmm3, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721A0FE: mulps xmm3, xmm1 */
    PUSH32(esp, eax); /* 0x1721A101: push eax */
    xmm_st(ebp + (-0x20), _xmm[3]); /* 0x1721A102: movaps xmmword ptr [ebp - 0x20], xmm3 */
    RECOMP_CALL(sub_1721AD69); /* 0x1721A106: call 0x1721ad69 */
    RECOMP_FLAGS_IN();
    _xmm[0] = xmm_ld(ebp + (-0x20)); /* 0x1721A10B: movaps xmm0, xmmword ptr [ebp - 0x20] */
    _xmm[4] = xmm_ld(0x1702A820); /* 0x1721A10F: movaps xmm4, xmmword ptr [0x1702a820] */
    eax = MEM32(ebx + 0x8); /* 0x1721A116: mov eax, dword ptr [ebx + 8] */
    _xmm[1] = _xmm[0]; /* 0x1721A119: movaps xmm1, xmm0 */
    { xmm_t _s = xmm_ld(ebp + (-0x30)), _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x1721A11C: shufps xmm1, xmmword ptr [ebp - 0x30], 0x99 */
    { xmm_t _s = xmm_ld(ebp + (-0x30)), _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x1721A121: shufps xmm0, xmmword ptr [ebp - 0x30], 0 */
    _xmm[2] = _xmm[1]; /* 0x1721A126: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[3]; _xmm[2].u32[1] = _d.u32[1]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1721A129: shufps xmm2, xmm1, 0xf7 */
    _xmm[3] = _xmm[1]; /* 0x1721A12D: movaps xmm3, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[2]; _xmm[3].u32[2] = _s.u32[2]; _xmm[3].u32[3] = _s.u32[2]; } /* 0x1721A130: shufps xmm3, xmm1, 0xa8 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x1721A134: shufps xmm0, xmm0, 0x8a */
    _xmm[1] = _xmm[0]; /* 0x1721A138: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[2]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x1721A13B: shufps xmm1, xmm0, 0x8a */
    _xmm[5] = _xmm[3]; /* 0x1721A13F: movaps xmm5, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721A142: mulps xmm0, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721A145: mulps xmm0, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x1721A148: shufps xmm5, xmm3, 1 */
    _xmm[3] = _xmm[2]; /* 0x1721A14C: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x1721A14F: shufps xmm3, xmm2, 0x51 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721A153: mulps xmm1, xmm3 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721A156: mulps xmm1, xmm5 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1721A159: xorps xmm1, xmm4 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721A15C: addps xmm0, xmm1 */
    xmm_st(eax, _xmm[0]); /* 0x1721A15F: movups xmmword ptr [eax], xmm0 */
    esp = ebp; /* 0x1721A162: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721A164: pop ebp */
    esp = ebx; /* 0x1721A165: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721A167: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1721A168: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1721A170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721A170u);

L_1721A170:
    edi = edi; /* 0x1721A170: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721A172: push ebx */
    ebx = esp; /* 0x1721A173: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1721A175: push ecx */
    PUSH32(esp, ecx); /* 0x1721A176: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721A177: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721A17A: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721A17D: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721A17E: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1721A181: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1721A185: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x128u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x128u; /* 0x1721A187: sub esp, 0x128 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x1721A18D: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x1721A190: push esi */
    PUSH32(esp, edi); /* 0x1721A191: push edi */
    edi = MEM32(ebx + 0x8); /* 0x1721A192: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xAu); /* 0x1721A195: push 0xa */
    edx = eax; /* 0x1721A197: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x1721A199: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1721A19C: pop ecx */
    /* cmp ecx, eax */ /* 0x1721A19D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1721A19F: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1721A1A1: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1721A1A3: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x1721A1A5: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x1721A1A5: shr esi, 2 */
    MEM32(ebp + (-0xC)) = eax; /* 0x1721A1A8: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x1721A1AB: mov dword ptr [ebp - 8], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1721A31F; /* 0x1721A1AE: je 0x1721a31f */
L_1721A1B4:
    PUSH32(esp, 4); /* 0x1721A1B4: push 4 */
    PUSH32(esp, 4); /* 0x1721A1B6: push 4 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721A1B8: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x120); /* 0x1721A1BB: lea ecx, [ebp - 0x120] */
    RECOMP_CALL(sub_172181DA); /* 0x1721A1C1: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1721A1C6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x1721A1C8: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x1721A1CB: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1721A1CE: xorps xmm0, xmm0 */
    xmm_st(ebp + (-0x20), _xmm[0]); /* 0x1721A1D1: movaps xmmword ptr [ebp - 0x20], xmm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721A31F; /* 0x1721A1D5: jbe 0x1721a31f */
L_1721A1DB:
    MEM32(ebp + (-0x4)) = esi; /* 0x1721A1DB: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x1721A1DE: mov esi, dword ptr [ebx + 0x10] */
L_1721A1E1:
    _xmm[3].u64[0] = MEM32(esi + 0x8); _xmm[3].u64[1] = 0; /* 0x1721A1E1: movss xmm3, dword ptr [esi + 8] */
    _xmm[1] = xmm_ld(ebp + (-0x20)); /* 0x1721A1E6: movaps xmm1, xmmword ptr [ebp - 0x20] */
    _xmm[1].u64[0] = MEM64(esi); /* 0x1721A1EA: movlps xmm1, qword ptr [esi] */
    _xmm[1].u64[1] = MEM64(esi + eax); /* 0x1721A1ED: movhps xmm1, qword ptr [esi + eax] */
    _xmm[2] = xmm_ld(ebp + (-0x20)); /* 0x1721A1F1: movaps xmm2, xmmword ptr [ebp - 0x20] */
    _xmm[2].u64[0] = MEM64(esi + eax * 2); /* 0x1721A1F5: movlps xmm2, qword ptr [esi + eax*2] */
    _xmm[0] = _xmm[1]; /* 0x1721A1F9: movaps xmm0, xmm1 */
    edx = eax + eax * 2; /* 0x1721A1FC: lea edx, [eax + eax*2] */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x1721A1FF: movhps xmm2, qword ptr [edx + esi] */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x1721A203: shufps xmm1, xmm2, 0xdd */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x1721A207: shufps xmm0, xmm2, 0x88 */
    _xmm[2].u64[0] = MEM32(esi + eax * 2 + 0x8); _xmm[2].u64[1] = 0; /* 0x1721A20B: movss xmm2, dword ptr [esi + eax*2 + 8] */
    _xmm[4] = _xmm[1]; /* 0x1721A211: movaps xmm4, xmm1 */
    _xmm[1].u64[0] = MEM32(edx + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x1721A214: movss xmm1, dword ptr [edx + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x1721A21A: unpcklps xmm2, xmm1 */
    _xmm[1].u64[0] = MEM32(eax + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x1721A21D: movss xmm1, dword ptr [eax + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _d.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x1721A223: unpcklps xmm3, xmm1 */
    _xmm[1] = _xmm[3]; /* 0x1721A226: movaps xmm1, xmm3 */
    _xmm[1].u64[1] = _xmm[2].u64[0]; /* 0x1721A229: movlhps xmm1, xmm2 */
    _xmm[3] = _xmm[4]; /* 0x1721A22C: movaps xmm3, xmm4 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xE0))); float _s1 = sse_f32(MEM32(ebp + (-0xE0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xE0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xE0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721A22F: mulps xmm3, xmmword ptr [ebp - 0xe0] */
    _xmm[5] = _xmm[0]; /* 0x1721A236: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x120))); float _s1 = sse_f32(MEM32(ebp + (-0x120) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x120) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x120) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721A239: mulps xmm5, xmmword ptr [ebp - 0x120] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721A240: addps xmm5, xmm3 */
    _xmm[3] = _xmm[5]; /* 0x1721A243: movaps xmm3, xmm5 */
    _xmm[2] = _xmm[1]; /* 0x1721A246: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xA0))); float _s1 = sse_f32(MEM32(ebp + (-0xA0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xA0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xA0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721A249: mulps xmm2, xmmword ptr [ebp - 0xa0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1721A250: addps xmm3, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x1721A253: movaps xmm2, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x60))); float _s1 = sse_f32(MEM32(ebp + (-0x60) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x60) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x60) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721A256: addps xmm2, xmmword ptr [ebp - 0x60] */
    _xmm[5] = _xmm[4]; /* 0x1721A25A: movaps xmm5, xmm4 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721A25D: mulps xmm5, xmmword ptr [ebp - 0xd0] */
    _xmm[6] = _xmm[0]; /* 0x1721A264: movaps xmm6, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721A267: mulps xmm6, xmmword ptr [ebp - 0x110] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721A26E: addps xmm6, xmm5 */
    _xmm[5] = _xmm[6]; /* 0x1721A271: movaps xmm5, xmm6 */
    _xmm[3] = _xmm[1]; /* 0x1721A274: movaps xmm3, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x90))); float _s1 = sse_f32(MEM32(ebp + (-0x90) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x90) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x90) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721A277: mulps xmm3, xmmword ptr [ebp - 0x90] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721A27E: addps xmm5, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721A281: addps xmm5, xmmword ptr [ebp - 0x50] */
    _xmm[6] = _xmm[4]; /* 0x1721A285: movaps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721A288: mulps xmm6, xmmword ptr [ebp - 0xc0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xB0))); float _s1 = sse_f32(MEM32(ebp + (-0xB0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xB0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xB0) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1721A28F: mulps xmm4, xmmword ptr [ebp - 0xb0] */
    _xmm[7] = _xmm[0]; /* 0x1721A296: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721A299: mulps xmm7, xmmword ptr [ebp - 0x100] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xF0))); float _s1 = sse_f32(MEM32(ebp + (-0xF0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xF0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xF0) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721A2A0: mulps xmm0, xmmword ptr [ebp - 0xf0] */
    _xmm[3] = _xmm[1]; /* 0x1721A2A7: movaps xmm3, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x80))); float _s1 = sse_f32(MEM32(ebp + (-0x80) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x80) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x80) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721A2AA: mulps xmm3, xmmword ptr [ebp - 0x80] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x70))); float _s1 = sse_f32(MEM32(ebp + (-0x70) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x70) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x70) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721A2AE: mulps xmm1, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721A2B2: addps xmm0, xmm4 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x1721A2B5: addps xmm7, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x1721A2B8: movaps xmm6, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721A2BB: addps xmm6, xmm3 */
    _xmm[4] = _xmm[0]; /* 0x1721A2BE: movaps xmm4, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x1721A2C1: addps xmm4, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x1721A2C4: addps xmm4, xmmword ptr [ebp - 0x30] */
    _xmm[3] = _xmm[6]; /* 0x1721A2C8: movaps xmm3, xmm6 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1721A2CB: addps xmm3, xmmword ptr [ebp - 0x40] */
    _xmm[0] = _xmm[2]; /* 0x1721A2CF: movaps xmm0, xmm2 */
    { xmm_t _s = _xmm[5], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1721A2D2: unpcklps xmm0, xmm5 */
    MEM64(edi) = _xmm[0].u64[0]; /* 0x1721A2D5: movlps qword ptr [edi], xmm0 */
    _xmm[1] = _xmm[3]; /* 0x1721A2D8: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[4], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x1721A2DB: unpcklps xmm1, xmm4 */
    MEM64(edi + 0x8) = _xmm[1].u64[0]; /* 0x1721A2DE: movlps qword ptr [edi + 8], xmm1 */
    MEM64(edi + ecx) = _xmm[0].u64[1]; /* 0x1721A2E2: movhps qword ptr [edi + ecx], xmm0 */
    MEM64(ecx + edi + 0x8) = _xmm[1].u64[1]; /* 0x1721A2E6: movhps qword ptr [ecx + edi + 8], xmm1 */
    { xmm_t _s = _xmm[5], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1721A2EB: unpckhps xmm2, xmm5 */
    MEM64(edi + ecx * 2) = _xmm[2].u64[0]; /* 0x1721A2EE: movlps qword ptr [edi + ecx*2], xmm2 */
    edx = ecx + ecx * 2; /* 0x1721A2F2: lea edx, [ecx + ecx*2] */
    { xmm_t _s = _xmm[4], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x1721A2F5: unpckhps xmm3, xmm4 */
    MEM64(edi + ecx * 2 + 0x8) = _xmm[3].u64[0]; /* 0x1721A2F8: movlps qword ptr [edi + ecx*2 + 8], xmm3 */
    MEM64(edx + edi) = _xmm[2].u64[1]; /* 0x1721A2FD: movhps qword ptr [edx + edi], xmm2 */
    MEM64(edx + edi + 0x8) = _xmm[3].u64[1]; /* 0x1721A301: movhps qword ptr [edx + edi + 8], xmm3 */
    edx = eax; /* 0x1721A306: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721A308: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721A308: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1721A30B: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x1721A30D: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721A30F: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721A30F: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1721A312: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721A314: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721A1E1; /* 0x1721A317: jne 0x1721a1e1 */
L_1721A31D:
    goto L_1721A322; /* 0x1721A31D: jmp 0x1721a322 */
L_1721A31F:
    esi = MEM32(ebx + 0x10); /* 0x1721A31F: mov esi, dword ptr [ebx + 0x10] */
L_1721A322:
    eax = MEM32(ebp + (-0xC)); /* 0x1721A322: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x1721A325: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721A341; /* 0x1721A327: jbe 0x1721a341 */
L_1721A329:
    MEM32(ebp + (-0x4)) = eax; /* 0x1721A329: mov dword ptr [ebp - 4], eax */
L_1721A32C:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721A32C: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x1721A32F: push esi */
    PUSH32(esp, edi); /* 0x1721A330: push edi */
    RECOMP_CALL(sub_17217D68); /* 0x1721A331: call 0x17217d68 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x1721A336: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x1721A339: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721A33C: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721A32C; /* 0x1721A33F: jne 0x1721a32c */
L_1721A341:
    eax = MEM32(ebp + (-0x8)); /* 0x1721A341: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x1721A344: pop edi */
    esi = POP32_VAL(esp); /* 0x1721A345: pop esi */
    esp = ebp; /* 0x1721A346: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721A348: pop ebp */
    esp = ebx; /* 0x1721A349: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721A34B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721A34C: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721A354(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721A354u);

L_1721A354:
    edi = edi; /* 0x1721A354: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721A356: push ebx */
    ebx = esp; /* 0x1721A357: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1721A359: push ecx */
    PUSH32(esp, ecx); /* 0x1721A35A: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721A35B: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721A35E: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721A361: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721A362: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1721A365: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1721A369: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x1721A36B: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x1721A371: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x1721A374: push esi */
    esi = MEM32(ebx + 0x8); /* 0x1721A375: mov esi, dword ptr [ebx + 8] */
    PUSH32(esp, edi); /* 0x1721A378: push edi */
    edi = MEM32(ebx + 0xC); /* 0x1721A379: mov edi, dword ptr [ebx + 0xc] */
    PUSH32(esp, 0xAu); /* 0x1721A37C: push 0xa */
    edx = eax; /* 0x1721A37E: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x1721A380: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x1721A381: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x1721A384: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1721A386: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x1721A388: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1721A38A: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1721A38C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1721A38C: shr ecx, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1721A38F: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1721A392: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1721A395: mov dword ptr [ebp - 0xc], esi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1721A4B0; /* 0x1721A398: je 0x1721a4b0 */
L_1721A39E:
    PUSH32(esp, 4); /* 0x1721A39E: push 4 */
    PUSH32(esp, 4); /* 0x1721A3A0: push 4 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721A3A2: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x110); /* 0x1721A3A5: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_172181DA); /* 0x1721A3AB: call 0x172181da */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1721A3B0: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1721A3B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x14); /* 0x1721A3B5: mov ecx, dword ptr [ebx + 0x14] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x1721A3B8: xorps xmm6, xmm6 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721A4B0; /* 0x1721A3BB: jbe 0x1721a4b0 */
L_1721A3C1:
    MEM32(ebp + (-0x4)) = eax; /* 0x1721A3C1: mov dword ptr [ebp - 4], eax */
L_1721A3C4:
    eax = MEM32(ebx + 0x10); /* 0x1721A3C4: mov eax, dword ptr [ebx + 0x10] */
    _xmm[0] = _xmm[6]; /* 0x1721A3C7: movaps xmm0, xmm6 */
    _xmm[0].u64[0] = MEM64(eax); /* 0x1721A3CA: movlps xmm0, qword ptr [eax] */
    _xmm[1] = _xmm[0]; /* 0x1721A3CD: movaps xmm1, xmm0 */
    _xmm[1].u64[1] = MEM64(eax + ecx); /* 0x1721A3D0: movhps xmm1, qword ptr [eax + ecx] */
    _xmm[0] = _xmm[6]; /* 0x1721A3D4: movaps xmm0, xmm6 */
    _xmm[0].u64[0] = MEM64(eax + ecx * 2); /* 0x1721A3D7: movlps xmm0, qword ptr [eax + ecx*2] */
    _xmm[2] = _xmm[0]; /* 0x1721A3DB: movaps xmm2, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x1721A3DE: movaps xmm0, xmm1 */
    edx = ecx + ecx * 2; /* 0x1721A3E1: lea edx, [ecx + ecx*2] */
    _xmm[2].u64[1] = MEM64(edx + eax); /* 0x1721A3E4: movhps xmm2, qword ptr [edx + eax] */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x1721A3E8: shufps xmm0, xmm2, 0x88 */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x1721A3EC: shufps xmm1, xmm2, 0xdd */
    _xmm[3] = _xmm[0]; /* 0x1721A3F0: movaps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721A3F3: mulps xmm3, xmmword ptr [ebp - 0x110] */
    _xmm[2] = _xmm[1]; /* 0x1721A3FA: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721A3FD: mulps xmm2, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1721A404: addps xmm3, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x1721A407: movaps xmm2, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721A40A: addps xmm2, xmmword ptr [ebp - 0x50] */
    _xmm[4] = _xmm[0]; /* 0x1721A40E: movaps xmm4, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1721A411: mulps xmm4, xmmword ptr [ebp - 0x100] */
    _xmm[3] = _xmm[1]; /* 0x1721A418: movaps xmm3, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721A41B: mulps xmm3, xmmword ptr [ebp - 0xc0] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x1721A422: addps xmm4, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x1721A425: addps xmm4, xmmword ptr [ebp - 0x40] */
    _xmm[5] = _xmm[0]; /* 0x1721A429: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xF0))); float _s1 = sse_f32(MEM32(ebp + (-0xF0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xF0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xF0) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721A42C: mulps xmm5, xmmword ptr [ebp - 0xf0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xE0))); float _s1 = sse_f32(MEM32(ebp + (-0xE0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xE0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xE0) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721A433: mulps xmm0, xmmword ptr [ebp - 0xe0] */
    _xmm[3] = _xmm[1]; /* 0x1721A43A: movaps xmm3, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xB0))); float _s1 = sse_f32(MEM32(ebp + (-0xB0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xB0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xB0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721A43D: mulps xmm3, xmmword ptr [ebp - 0xb0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xA0))); float _s1 = sse_f32(MEM32(ebp + (-0xA0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xA0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xA0) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721A444: mulps xmm1, xmmword ptr [ebp - 0xa0] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721A44B: addps xmm5, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721A44E: addps xmm0, xmm1 */
    _xmm[3] = _xmm[5]; /* 0x1721A451: movaps xmm3, xmm5 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1721A454: addps xmm3, xmmword ptr [ebp - 0x30] */
    _xmm[5] = _xmm[0]; /* 0x1721A458: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721A45B: addps xmm5, xmmword ptr [ebp - 0x20] */
    _xmm[0] = _xmm[2]; /* 0x1721A45F: movaps xmm0, xmm2 */
    { xmm_t _s = _xmm[4], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1721A462: unpcklps xmm0, xmm4 */
    MEM64(esi) = _xmm[0].u64[0]; /* 0x1721A465: movlps qword ptr [esi], xmm0 */
    _xmm[1] = _xmm[3]; /* 0x1721A468: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x1721A46B: unpcklps xmm1, xmm5 */
    MEM64(esi + 0x8) = _xmm[1].u64[0]; /* 0x1721A46E: movlps qword ptr [esi + 8], xmm1 */
    MEM64(esi + edi) = _xmm[0].u64[1]; /* 0x1721A472: movhps qword ptr [esi + edi], xmm0 */
    MEM64(edi + esi + 0x8) = _xmm[1].u64[1]; /* 0x1721A476: movhps qword ptr [edi + esi + 8], xmm1 */
    { xmm_t _s = _xmm[4], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1721A47B: unpckhps xmm2, xmm4 */
    MEM64(esi + edi * 2) = _xmm[2].u64[0]; /* 0x1721A47E: movlps qword ptr [esi + edi*2], xmm2 */
    edx = edi + edi * 2; /* 0x1721A482: lea edx, [edi + edi*2] */
    { xmm_t _s = _xmm[5], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x1721A485: unpckhps xmm3, xmm5 */
    MEM64(esi + edi * 2 + 0x8) = _xmm[3].u64[0]; /* 0x1721A488: movlps qword ptr [esi + edi*2 + 8], xmm3 */
    MEM64(edx + esi) = _xmm[2].u64[1]; /* 0x1721A48D: movhps qword ptr [edx + esi], xmm2 */
    MEM64(edx + esi + 0x8) = _xmm[3].u64[1]; /* 0x1721A491: movhps qword ptr [edx + esi + 8], xmm3 */
    edx = ecx; /* 0x1721A496: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721A498: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721A498: shl edx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1721A49B: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x10) = eax; /* 0x1721A49D: mov dword ptr [ebx + 0x10], eax */
    eax = edi; /* 0x1721A4A0: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1721A4A2: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1721A4A2: shl eax, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1721A4A5: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721A4A7: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721A3C4; /* 0x1721A4AA: jne 0x1721a3c4 */
L_1721A4B0:
    eax = MEM32(ebp + (-0x8)); /* 0x1721A4B0: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1721A4B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721A4D3; /* 0x1721A4B5: jbe 0x1721a4d3 */
L_1721A4B7:
    MEM32(ebp + (-0x4)) = eax; /* 0x1721A4B7: mov dword ptr [ebp - 4], eax */
L_1721A4BA:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721A4BA: push dword ptr [ebx + 0x18] */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x1721A4BD: push dword ptr [ebx + 0x10] */
    PUSH32(esp, esi); /* 0x1721A4C0: push esi */
    RECOMP_CALL(sub_17216FD5); /* 0x1721A4C1: call 0x17216fd5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x14); /* 0x1721A4C6: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + eax; /* 0x1721A4C9: add dword ptr [ebx + 0x10], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1721A4CC: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721A4CE: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721A4BA; /* 0x1721A4D1: jne 0x1721a4ba */
L_1721A4D3:
    eax = MEM32(ebp + (-0xC)); /* 0x1721A4D3: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1721A4D6: pop edi */
    esi = POP32_VAL(esp); /* 0x1721A4D7: pop esi */
    esp = ebp; /* 0x1721A4D8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721A4DA: pop ebp */
    esp = ebx; /* 0x1721A4DB: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721A4DD: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721A4DE: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721A4E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721A4E6u);

L_1721A4E6:
    edi = edi; /* 0x1721A4E6: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721A4E8: push ebx */
    ebx = esp; /* 0x1721A4E9: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1721A4EB: push ecx */
    PUSH32(esp, ecx); /* 0x1721A4EC: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721A4ED: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721A4F0: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721A4F3: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721A4F4: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1721A4F7: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1721A4FB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x1721A4FD: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x1721A503: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x1721A506: push esi */
    PUSH32(esp, edi); /* 0x1721A507: push edi */
    edi = MEM32(ebx + 0x8); /* 0x1721A508: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xAu); /* 0x1721A50B: push 0xa */
    edx = eax; /* 0x1721A50D: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x1721A50F: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1721A512: pop ecx */
    /* cmp ecx, eax */ /* 0x1721A513: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1721A515: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1721A517: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1721A519: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x1721A51B: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x1721A51B: shr esi, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1721A51E: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x1721A521: mov dword ptr [ebp - 0xc], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1721A622; /* 0x1721A524: je 0x1721a622 */
L_1721A52A:
    PUSH32(esp, 4); /* 0x1721A52A: push 4 */
    PUSH32(esp, 4); /* 0x1721A52C: push 4 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721A52E: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x110); /* 0x1721A531: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_172181DA); /* 0x1721A537: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1721A53C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x1721A53E: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x1721A541: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x1721A544: xorps xmm4, xmm4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721A622; /* 0x1721A547: jbe 0x1721a622 */
L_1721A54D:
    MEM32(ebp + (-0x4)) = esi; /* 0x1721A54D: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x1721A550: mov esi, dword ptr [ebx + 0x10] */
L_1721A553:
    _xmm[0] = _xmm[4]; /* 0x1721A553: movaps xmm0, xmm4 */
    _xmm[0].u64[0] = MEM64(esi); /* 0x1721A556: movlps xmm0, qword ptr [esi] */
    _xmm[1] = _xmm[0]; /* 0x1721A559: movaps xmm1, xmm0 */
    _xmm[1].u64[1] = MEM64(esi + eax); /* 0x1721A55C: movhps xmm1, qword ptr [esi + eax] */
    _xmm[0] = _xmm[4]; /* 0x1721A560: movaps xmm0, xmm4 */
    _xmm[0].u64[0] = MEM64(esi + eax * 2); /* 0x1721A563: movlps xmm0, qword ptr [esi + eax*2] */
    _xmm[2] = _xmm[0]; /* 0x1721A567: movaps xmm2, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x1721A56A: movaps xmm0, xmm1 */
    edx = eax + eax * 2; /* 0x1721A56D: lea edx, [eax + eax*2] */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x1721A570: movhps xmm2, qword ptr [edx + esi] */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x1721A574: shufps xmm0, xmm2, 0x88 */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x1721A578: shufps xmm1, xmm2, 0xdd */
    _xmm[2] = _xmm[1]; /* 0x1721A57C: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xA0))); float _s1 = sse_f32(MEM32(ebp + (-0xA0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xA0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xA0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721A57F: mulps xmm2, xmmword ptr [ebp - 0xa0] */
    _xmm[3] = _xmm[0]; /* 0x1721A586: movaps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xE0))); float _s1 = sse_f32(MEM32(ebp + (-0xE0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xE0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xE0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721A589: mulps xmm3, xmmword ptr [ebp - 0xe0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1721A590: addps xmm3, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x1721A593: movaps xmm2, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721A596: addps xmm2, xmmword ptr [ebp - 0x20] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[3] = _d; } /* 0x1721A59A: rcpps xmm3, xmm2 */
    _xmm[5] = _xmm[3]; /* 0x1721A59D: movaps xmm5, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721A5A0: mulps xmm5, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721A5A3: mulps xmm5, xmm3 */
    _xmm[2] = _xmm[3]; /* 0x1721A5A6: movaps xmm2, xmm3 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721A5A9: addps xmm2, xmm3 */
    _xmm[3] = _xmm[2]; /* 0x1721A5AC: movaps xmm3, xmm2 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x1721A5AF: subps xmm3, xmm5 */
    _xmm[2] = _xmm[1]; /* 0x1721A5B2: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721A5B5: mulps xmm2, xmmword ptr [ebp - 0xd0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721A5BC: mulps xmm1, xmmword ptr [ebp - 0xc0] */
    _xmm[5] = _xmm[0]; /* 0x1721A5C3: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721A5C6: mulps xmm0, xmmword ptr [ebp - 0x100] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721A5CD: mulps xmm5, xmmword ptr [ebp - 0x110] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721A5D4: addps xmm5, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721A5D7: addps xmm0, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x1721A5DA: movaps xmm1, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1721A5DD: addps xmm1, xmmword ptr [ebp - 0x40] */
    _xmm[2] = _xmm[5]; /* 0x1721A5E1: movaps xmm2, xmm5 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721A5E4: addps xmm2, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721A5E8: mulps xmm2, xmm3 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721A5EB: mulps xmm1, xmm3 */
    _xmm[0] = _xmm[2]; /* 0x1721A5EE: movaps xmm0, xmm2 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1721A5F1: unpcklps xmm0, xmm1 */
    MEM64(edi) = _xmm[0].u64[0]; /* 0x1721A5F4: movlps qword ptr [edi], xmm0 */
    MEM64(edi + ecx) = _xmm[0].u64[1]; /* 0x1721A5F7: movhps qword ptr [edi + ecx], xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1721A5FB: unpckhps xmm2, xmm1 */
    edx = ecx + ecx * 2; /* 0x1721A5FE: lea edx, [ecx + ecx*2] */
    MEM64(edi + ecx * 2) = _xmm[2].u64[0]; /* 0x1721A601: movlps qword ptr [edi + ecx*2], xmm2 */
    MEM64(edx + edi) = _xmm[2].u64[1]; /* 0x1721A605: movhps qword ptr [edx + edi], xmm2 */
    edx = eax; /* 0x1721A609: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721A60B: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721A60B: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1721A60E: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x1721A610: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721A612: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721A612: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1721A615: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721A617: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721A553; /* 0x1721A61A: jne 0x1721a553 */
L_1721A620:
    goto L_1721A625; /* 0x1721A620: jmp 0x1721a625 */
L_1721A622:
    esi = MEM32(ebx + 0x10); /* 0x1721A622: mov esi, dword ptr [ebx + 0x10] */
L_1721A625:
    eax = MEM32(ebp + (-0x8)); /* 0x1721A625: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1721A628: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721A644; /* 0x1721A62A: jbe 0x1721a644 */
L_1721A62C:
    MEM32(ebp + (-0x4)) = eax; /* 0x1721A62C: mov dword ptr [ebp - 4], eax */
L_1721A62F:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721A62F: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x1721A632: push esi */
    PUSH32(esp, edi); /* 0x1721A633: push edi */
    RECOMP_CALL(sub_1721701A); /* 0x1721A634: call 0x1721701a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x1721A639: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x1721A63C: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721A63F: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721A62F; /* 0x1721A642: jne 0x1721a62f */
L_1721A644:
    eax = MEM32(ebp + (-0xC)); /* 0x1721A644: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1721A647: pop edi */
    esi = POP32_VAL(esp); /* 0x1721A648: pop esi */
    esp = ebp; /* 0x1721A649: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721A64B: pop ebp */
    esp = ebx; /* 0x1721A64C: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721A64E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721A64F: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721A657(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721A657u);

L_1721A657:
    edi = edi; /* 0x1721A657: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721A659: push ebx */
    ebx = esp; /* 0x1721A65A: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1721A65C: push ecx */
    PUSH32(esp, ecx); /* 0x1721A65D: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721A65E: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721A661: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721A664: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721A665: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1721A668: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1721A66C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x1721A66E: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x1721A674: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x1721A677: push esi */
    PUSH32(esp, edi); /* 0x1721A678: push edi */
    edi = MEM32(ebx + 0x8); /* 0x1721A679: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xAu); /* 0x1721A67C: push 0xa */
    edx = eax; /* 0x1721A67E: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x1721A680: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1721A683: pop ecx */
    /* cmp ecx, eax */ /* 0x1721A684: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1721A686: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1721A688: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1721A68A: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x1721A68C: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x1721A68C: shr esi, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1721A68F: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x1721A692: mov dword ptr [ebp - 0xc], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1721A745; /* 0x1721A695: je 0x1721a745 */
L_1721A69B:
    PUSH32(esp, 2); /* 0x1721A69B: push 2 */
    PUSH32(esp, 2); /* 0x1721A69D: push 2 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721A69F: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x110); /* 0x1721A6A2: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_172181DA); /* 0x1721A6A8: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1721A6AD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x1721A6AF: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x1721A6B2: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1721A6B5: xorps xmm3, xmm3 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721A745; /* 0x1721A6B8: jbe 0x1721a745 */
L_1721A6BE:
    MEM32(ebp + (-0x4)) = esi; /* 0x1721A6BE: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x1721A6C1: mov esi, dword ptr [ebx + 0x10] */
L_1721A6C4:
    _xmm[0] = _xmm[3]; /* 0x1721A6C4: movaps xmm0, xmm3 */
    _xmm[0].u64[0] = MEM64(esi); /* 0x1721A6C7: movlps xmm0, qword ptr [esi] */
    _xmm[0].u64[1] = MEM64(esi + eax); /* 0x1721A6CA: movhps xmm0, qword ptr [esi + eax] */
    _xmm[1] = _xmm[3]; /* 0x1721A6CE: movaps xmm1, xmm3 */
    _xmm[1].u64[0] = MEM64(esi + eax * 2); /* 0x1721A6D1: movlps xmm1, qword ptr [esi + eax*2] */
    _xmm[2] = _xmm[1]; /* 0x1721A6D5: movaps xmm2, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x1721A6D8: movaps xmm1, xmm0 */
    edx = eax + eax * 2; /* 0x1721A6DB: lea edx, [eax + eax*2] */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x1721A6DE: movhps xmm2, qword ptr [edx + esi] */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[3]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x1721A6E2: shufps xmm0, xmm2, 0xdd */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x1721A6E6: shufps xmm1, xmm2, 0x88 */
    _xmm[2] = _xmm[0]; /* 0x1721A6EA: movaps xmm2, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721A6ED: mulps xmm2, xmmword ptr [ebp - 0xd0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721A6F4: mulps xmm0, xmmword ptr [ebp - 0xc0] */
    _xmm[4] = _xmm[2]; /* 0x1721A6FB: movaps xmm4, xmm2 */
    _xmm[2] = _xmm[1]; /* 0x1721A6FE: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721A701: mulps xmm2, xmmword ptr [ebp - 0x110] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721A708: mulps xmm1, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x1721A70F: addps xmm1, xmm0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721A712: addps xmm2, xmm4 */
    _xmm[0] = _xmm[2]; /* 0x1721A715: movaps xmm0, xmm2 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1721A718: unpcklps xmm0, xmm1 */
    MEM64(edi) = _xmm[0].u64[0]; /* 0x1721A71B: movlps qword ptr [edi], xmm0 */
    MEM64(edi + ecx) = _xmm[0].u64[1]; /* 0x1721A71E: movhps qword ptr [edi + ecx], xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1721A722: unpckhps xmm2, xmm1 */
    edx = ecx + ecx * 2; /* 0x1721A725: lea edx, [ecx + ecx*2] */
    MEM64(edi + ecx * 2) = _xmm[2].u64[0]; /* 0x1721A728: movlps qword ptr [edi + ecx*2], xmm2 */
    MEM64(edx + edi) = _xmm[2].u64[1]; /* 0x1721A72C: movhps qword ptr [edx + edi], xmm2 */
    edx = eax; /* 0x1721A730: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721A732: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721A732: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1721A735: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x1721A737: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721A739: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721A739: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1721A73C: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721A73E: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721A6C4; /* 0x1721A741: jne 0x1721a6c4 */
L_1721A743:
    goto L_1721A748; /* 0x1721A743: jmp 0x1721a748 */
L_1721A745:
    esi = MEM32(ebx + 0x10); /* 0x1721A745: mov esi, dword ptr [ebx + 0x10] */
L_1721A748:
    eax = MEM32(ebp + (-0x8)); /* 0x1721A748: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1721A74B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721A767; /* 0x1721A74D: jbe 0x1721a767 */
L_1721A74F:
    MEM32(ebp + (-0x4)) = eax; /* 0x1721A74F: mov dword ptr [ebp - 4], eax */
L_1721A752:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721A752: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x1721A755: push esi */
    PUSH32(esp, edi); /* 0x1721A756: push edi */
    RECOMP_CALL(sub_17217078); /* 0x1721A757: call 0x17217078 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x1721A75C: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x1721A75F: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721A762: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721A752; /* 0x1721A765: jne 0x1721a752 */
L_1721A767:
    eax = MEM32(ebp + (-0xC)); /* 0x1721A767: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1721A76A: pop edi */
    esi = POP32_VAL(esp); /* 0x1721A76B: pop esi */
    esp = ebp; /* 0x1721A76C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721A76E: pop ebp */
    esp = ebx; /* 0x1721A76F: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721A771: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721A772: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721A77A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721A77Au);

L_1721A77A:
    edi = edi; /* 0x1721A77A: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721A77C: push ebx */
    ebx = esp; /* 0x1721A77D: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1721A77F: push ecx */
    PUSH32(esp, ecx); /* 0x1721A780: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721A781: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721A784: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721A787: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721A788: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1721A78B: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1721A78F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x148u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x148u; /* 0x1721A791: sub esp, 0x148 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x1721A797: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x1721A79A: push esi */
    PUSH32(esp, edi); /* 0x1721A79B: push edi */
    edi = MEM32(ebx + 0x8); /* 0x1721A79C: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xAu); /* 0x1721A79F: push 0xa */
    edx = eax; /* 0x1721A7A1: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x1721A7A3: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1721A7A6: pop ecx */
    /* cmp ecx, eax */ /* 0x1721A7A7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1721A7A9: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1721A7AB: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1721A7AD: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x1721A7AF: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x1721A7AF: shr esi, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1721A7B2: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x1721A7B5: mov dword ptr [ebp - 0xc], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1721A965; /* 0x1721A7B8: je 0x1721a965 */
L_1721A7BE:
    PUSH32(esp, 4); /* 0x1721A7BE: push 4 */
    PUSH32(esp, 4); /* 0x1721A7C0: push 4 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721A7C2: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x140); /* 0x1721A7C5: lea ecx, [ebp - 0x140] */
    RECOMP_CALL(sub_172181DA); /* 0x1721A7CB: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1721A7D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x1721A7D2: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x1721A7D5: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1721A7D8: xorps xmm0, xmm0 */
    xmm_st(ebp + (-0x40), _xmm[0]); /* 0x1721A7DB: movaps xmmword ptr [ebp - 0x40], xmm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721A965; /* 0x1721A7DF: jbe 0x1721a965 */
L_1721A7E5:
    MEM32(ebp + (-0x4)) = esi; /* 0x1721A7E5: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x1721A7E8: mov esi, dword ptr [ebx + 0x10] */
L_1721A7EB:
    _xmm[3] = xmm_ld(ebp + (-0x40)); /* 0x1721A7EB: movaps xmm3, xmmword ptr [ebp - 0x40] */
    _xmm[0] = _xmm[3]; /* 0x1721A7EF: movaps xmm0, xmm3 */
    _xmm[0].u64[0] = MEM64(esi); /* 0x1721A7F2: movlps xmm0, qword ptr [esi] */
    _xmm[1] = _xmm[0]; /* 0x1721A7F5: movaps xmm1, xmm0 */
    _xmm[1].u64[1] = MEM64(esi + eax); /* 0x1721A7F8: movhps xmm1, qword ptr [esi + eax] */
    _xmm[0] = _xmm[3]; /* 0x1721A7FC: movaps xmm0, xmm3 */
    _xmm[0].u64[0] = MEM64(esi + eax * 2); /* 0x1721A7FF: movlps xmm0, qword ptr [esi + eax*2] */
    _xmm[2] = _xmm[0]; /* 0x1721A803: movaps xmm2, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x1721A806: movaps xmm0, xmm1 */
    edx = eax + eax * 2; /* 0x1721A809: lea edx, [eax + eax*2] */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x1721A80C: movhps xmm2, qword ptr [edx + esi] */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x1721A810: shufps xmm1, xmm2, 0xdd */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x1721A814: shufps xmm0, xmm2, 0x88 */
    _xmm[5] = _xmm[1]; /* 0x1721A818: movaps xmm5, xmm1 */
    _xmm[1] = _xmm[3]; /* 0x1721A81B: movaps xmm1, xmm3 */
    _xmm[1].u64[0] = MEM64(esi + 0x8); /* 0x1721A81E: movlps xmm1, qword ptr [esi + 8] */
    _xmm[3].u64[0] = MEM64(esi + eax * 2 + 0x8); /* 0x1721A822: movlps xmm3, qword ptr [esi + eax*2 + 8] */
    _xmm[3].u64[1] = MEM64(edx + esi + 0x8); /* 0x1721A827: movhps xmm3, qword ptr [edx + esi + 8] */
    _xmm[2] = _xmm[1]; /* 0x1721A82C: movaps xmm2, xmm1 */
    _xmm[2].u64[1] = MEM64(eax + esi + 0x8); /* 0x1721A82F: movhps xmm2, qword ptr [eax + esi + 8] */
    _xmm[1] = _xmm[2]; /* 0x1721A834: movaps xmm1, xmm2 */
    { xmm_t _s = _xmm[3], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[1]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1721A837: shufps xmm2, xmm3, 0xdd */
    { xmm_t _s = _xmm[3], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x1721A83B: shufps xmm1, xmm3, 0x88 */
    _xmm[3] = _xmm[2]; /* 0x1721A83F: movaps xmm3, xmm2 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x80))); float _s1 = sse_f32(MEM32(ebp + (-0x80) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x80) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x80) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721A842: mulps xmm3, xmmword ptr [ebp - 0x80] */
    xmm_st(ebp + (-0x20), _xmm[2]); /* 0x1721A846: movaps xmmword ptr [ebp - 0x20], xmm2 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x70))); float _s1 = sse_f32(MEM32(ebp + (-0x70) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x70) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x70) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721A84A: mulps xmm2, xmmword ptr [ebp - 0x70] */
    _xmm[7] = _xmm[0]; /* 0x1721A84E: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x140))); float _s1 = sse_f32(MEM32(ebp + (-0x140) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x140) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x140) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721A851: mulps xmm7, xmmword ptr [ebp - 0x140] */
    _xmm[4] = _xmm[3]; /* 0x1721A858: movaps xmm4, xmm3 */
    _xmm[3] = _xmm[1]; /* 0x1721A85B: movaps xmm3, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721A85E: mulps xmm3, xmmword ptr [ebp - 0xc0] */
    _xmm[6] = _xmm[5]; /* 0x1721A865: movaps xmm6, xmm5 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721A868: mulps xmm6, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x1721A86F: addps xmm7, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x1721A872: movaps xmm6, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721A875: addps xmm6, xmm3 */
    _xmm[3] = _xmm[6]; /* 0x1721A878: movaps xmm3, xmm6 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x1721A87B: addps xmm3, xmm4 */
    _xmm[4] = _xmm[2]; /* 0x1721A87E: movaps xmm4, xmm2 */
    _xmm[7] = _xmm[0]; /* 0x1721A881: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x130))); float _s1 = sse_f32(MEM32(ebp + (-0x130) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x130) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x130) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721A884: mulps xmm7, xmmword ptr [ebp - 0x130] */
    _xmm[2] = _xmm[1]; /* 0x1721A88B: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xB0))); float _s1 = sse_f32(MEM32(ebp + (-0xB0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xB0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xB0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721A88E: mulps xmm2, xmmword ptr [ebp - 0xb0] */
    _xmm[6] = _xmm[5]; /* 0x1721A895: movaps xmm6, xmm5 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xF0))); float _s1 = sse_f32(MEM32(ebp + (-0xF0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xF0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xF0) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721A898: mulps xmm6, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x1721A89F: addps xmm7, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x1721A8A2: movaps xmm6, xmm7 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721A8A5: addps xmm6, xmm2 */
    _xmm[2] = _xmm[6]; /* 0x1721A8A8: movaps xmm2, xmm6 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721A8AB: addps xmm2, xmm4 */
    xmm_st(ebp + (-0x30), _xmm[2]); /* 0x1721A8AE: movaps xmmword ptr [ebp - 0x30], xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x20)); /* 0x1721A8B2: movaps xmm2, xmmword ptr [ebp - 0x20] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x60))); float _s1 = sse_f32(MEM32(ebp + (-0x60) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x60) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x60) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721A8B6: mulps xmm2, xmmword ptr [ebp - 0x60] */
    _xmm[7] = _xmm[0]; /* 0x1721A8BA: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x120))); float _s1 = sse_f32(MEM32(ebp + (-0x120) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x120) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x120) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721A8BD: mulps xmm7, xmmword ptr [ebp - 0x120] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721A8C4: mulps xmm0, xmmword ptr [ebp - 0x110] */
    _xmm[4] = _xmm[1]; /* 0x1721A8CB: movaps xmm4, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xA0))); float _s1 = sse_f32(MEM32(ebp + (-0xA0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xA0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xA0) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1721A8CE: mulps xmm4, xmmword ptr [ebp - 0xa0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x90))); float _s1 = sse_f32(MEM32(ebp + (-0x90) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x90) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x90) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721A8D5: mulps xmm1, xmmword ptr [ebp - 0x90] */
    _xmm[6] = _xmm[5]; /* 0x1721A8DC: movaps xmm6, xmm5 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xE0))); float _s1 = sse_f32(MEM32(ebp + (-0xE0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xE0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xE0) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721A8DF: mulps xmm6, xmmword ptr [ebp - 0xe0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721A8E6: mulps xmm5, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x1721A8ED: addps xmm7, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x1721A8F0: movaps xmm6, xmm7 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721A8F3: addps xmm6, xmm4 */
    _xmm[4] = _xmm[6]; /* 0x1721A8F6: movaps xmm4, xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x1721A8F9: addps xmm4, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x20)); /* 0x1721A8FC: movaps xmm2, xmmword ptr [ebp - 0x20] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721A900: mulps xmm2, xmmword ptr [ebp - 0x50] */
    _xmm[6] = _xmm[2]; /* 0x1721A904: movaps xmm6, xmm2 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721A907: addps xmm0, xmm5 */
    _xmm[2] = _xmm[0]; /* 0x1721A90A: movaps xmm2, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721A90D: addps xmm2, xmm1 */
    _xmm[0] = _xmm[3]; /* 0x1721A910: movaps xmm0, xmm3 */
    { xmm_t _s = xmm_ld(ebp + (-0x30)), _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x1721A913: unpcklps xmm0, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721A917: addps xmm2, xmm6 */
    _xmm[1] = _xmm[4]; /* 0x1721A91A: movaps xmm1, xmm4 */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x1721A91D: unpcklps xmm1, xmm2 */
    MEM64(edi) = _xmm[0].u64[0]; /* 0x1721A920: movlps qword ptr [edi], xmm0 */
    MEM64(edi + 0x8) = _xmm[1].u64[0]; /* 0x1721A923: movlps qword ptr [edi + 8], xmm1 */
    { xmm_t _s = xmm_ld(ebp + (-0x30)), _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x1721A927: unpckhps xmm3, xmmword ptr [ebp - 0x30] */
    MEM64(edi + ecx) = _xmm[0].u64[1]; /* 0x1721A92B: movhps qword ptr [edi + ecx], xmm0 */
    MEM64(ecx + edi + 0x8) = _xmm[1].u64[1]; /* 0x1721A92F: movhps qword ptr [ecx + edi + 8], xmm1 */
    MEM64(edi + ecx * 2) = _xmm[3].u64[0]; /* 0x1721A934: movlps qword ptr [edi + ecx*2], xmm3 */
    edx = ecx + ecx * 2; /* 0x1721A938: lea edx, [ecx + ecx*2] */
    { xmm_t _s = _xmm[2], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _s.u32[2]; _xmm[4].u32[2] = _d.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x1721A93B: unpckhps xmm4, xmm2 */
    MEM64(edi + ecx * 2 + 0x8) = _xmm[4].u64[0]; /* 0x1721A93E: movlps qword ptr [edi + ecx*2 + 8], xmm4 */
    MEM64(edx + edi) = _xmm[3].u64[1]; /* 0x1721A943: movhps qword ptr [edx + edi], xmm3 */
    MEM64(edx + edi + 0x8) = _xmm[4].u64[1]; /* 0x1721A947: movhps qword ptr [edx + edi + 8], xmm4 */
    edx = eax; /* 0x1721A94C: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721A94E: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721A94E: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1721A951: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x1721A953: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721A955: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721A955: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1721A958: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721A95A: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721A7EB; /* 0x1721A95D: jne 0x1721a7eb */
L_1721A963:
    goto L_1721A968; /* 0x1721A963: jmp 0x1721a968 */
L_1721A965:
    esi = MEM32(ebx + 0x10); /* 0x1721A965: mov esi, dword ptr [ebx + 0x10] */
L_1721A968:
    eax = MEM32(ebp + (-0x8)); /* 0x1721A968: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1721A96B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721A987; /* 0x1721A96D: jbe 0x1721a987 */
L_1721A96F:
    MEM32(ebp + (-0x4)) = eax; /* 0x1721A96F: mov dword ptr [ebp - 4], eax */
L_1721A972:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721A972: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x1721A975: push esi */
    PUSH32(esp, edi); /* 0x1721A976: push edi */
    RECOMP_CALL(sub_172170B6); /* 0x1721A977: call 0x172170b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x1721A97C: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x1721A97F: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721A982: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721A972; /* 0x1721A985: jne 0x1721a972 */
L_1721A987:
    eax = MEM32(ebp + (-0xC)); /* 0x1721A987: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1721A98A: pop edi */
    esi = POP32_VAL(esp); /* 0x1721A98B: pop esi */
    esp = ebp; /* 0x1721A98C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721A98E: pop ebp */
    esp = ebx; /* 0x1721A98F: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721A991: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721A992: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721A99A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721A99Au);

L_1721A99A:
    edi = edi; /* 0x1721A99A: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721A99C: push ebx */
    ebx = esp; /* 0x1721A99D: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1721A99F: push ecx */
    PUSH32(esp, ecx); /* 0x1721A9A0: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721A9A1: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721A9A4: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721A9A7: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721A9A8: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1721A9AB: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1721A9AF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x1721A9B1: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x1721A9B7: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x1721A9BA: push esi */
    PUSH32(esp, edi); /* 0x1721A9BB: push edi */
    edi = MEM32(ebx + 0x8); /* 0x1721A9BC: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xAu); /* 0x1721A9BF: push 0xa */
    edx = eax; /* 0x1721A9C1: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x1721A9C3: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1721A9C6: pop ecx */
    /* cmp ecx, eax */ /* 0x1721A9C7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1721A9C9: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1721A9CB: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1721A9CD: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x1721A9CF: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x1721A9CF: shr esi, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1721A9D2: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x1721A9D5: mov dword ptr [ebp - 0xc], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1721AB22; /* 0x1721A9D8: je 0x1721ab22 */
L_1721A9DE:
    PUSH32(esp, 3); /* 0x1721A9DE: push 3 */
    PUSH32(esp, 3); /* 0x1721A9E0: push 3 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721A9E2: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x110); /* 0x1721A9E5: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_172181DA); /* 0x1721A9EB: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1721A9F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x1721A9F2: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x1721A9F5: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x1721A9F8: xorps xmm5, xmm5 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721AB22; /* 0x1721A9FB: jbe 0x1721ab22 */
L_1721AA01:
    MEM32(ebp + (-0x4)) = esi; /* 0x1721AA01: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x1721AA04: mov esi, dword ptr [ebx + 0x10] */
L_1721AA07:
    _xmm[4].u64[0] = MEM32(esi + 0x8); _xmm[4].u64[1] = 0; /* 0x1721AA07: movss xmm4, dword ptr [esi + 8] */
    _xmm[0] = _xmm[5]; /* 0x1721AA0C: movaps xmm0, xmm5 */
    _xmm[0].u64[0] = MEM64(esi); /* 0x1721AA0F: movlps xmm0, qword ptr [esi] */
    _xmm[1] = _xmm[0]; /* 0x1721AA12: movaps xmm1, xmm0 */
    _xmm[1].u64[1] = MEM64(esi + eax); /* 0x1721AA15: movhps xmm1, qword ptr [esi + eax] */
    edx = eax + eax * 2; /* 0x1721AA19: lea edx, [eax + eax*2] */
    _xmm[0] = _xmm[5]; /* 0x1721AA1C: movaps xmm0, xmm5 */
    _xmm[0].u64[0] = MEM64(esi + eax * 2); /* 0x1721AA1F: movlps xmm0, qword ptr [esi + eax*2] */
    _xmm[2] = _xmm[0]; /* 0x1721AA23: movaps xmm2, xmm0 */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x1721AA26: movhps xmm2, qword ptr [edx + esi] */
    _xmm[0] = _xmm[1]; /* 0x1721AA2A: movaps xmm0, xmm1 */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x1721AA2D: shufps xmm1, xmm2, 0xdd */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x1721AA31: shufps xmm0, xmm2, 0x88 */
    _xmm[2].u64[0] = MEM32(esi + eax * 2 + 0x8); _xmm[2].u64[1] = 0; /* 0x1721AA35: movss xmm2, dword ptr [esi + eax*2 + 8] */
    _xmm[3] = _xmm[1]; /* 0x1721AA3B: movaps xmm3, xmm1 */
    _xmm[1].u64[0] = MEM32(edx + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x1721AA3E: movss xmm1, dword ptr [edx + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x1721AA44: unpcklps xmm2, xmm1 */
    _xmm[1].u64[0] = MEM32(eax + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x1721AA47: movss xmm1, dword ptr [eax + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1721AA4D: unpcklps xmm4, xmm1 */
    _xmm[1] = _xmm[4]; /* 0x1721AA50: movaps xmm1, xmm4 */
    _xmm[1].u64[1] = _xmm[2].u64[0]; /* 0x1721AA53: movlhps xmm1, xmm2 */
    _xmm[2] = _xmm[1]; /* 0x1721AA56: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x90))); float _s1 = sse_f32(MEM32(ebp + (-0x90) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x90) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x90) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721AA59: mulps xmm2, xmmword ptr [ebp - 0x90] */
    _xmm[4] = _xmm[2]; /* 0x1721AA60: movaps xmm4, xmm2 */
    _xmm[6] = _xmm[0]; /* 0x1721AA63: movaps xmm6, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721AA66: mulps xmm6, xmmword ptr [ebp - 0x110] */
    _xmm[2] = _xmm[3]; /* 0x1721AA6D: movaps xmm2, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721AA70: mulps xmm2, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721AA77: addps xmm6, xmm2 */
    _xmm[2] = _xmm[6]; /* 0x1721AA7A: movaps xmm2, xmm6 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721AA7D: addps xmm2, xmm4 */
    _xmm[4] = _xmm[1]; /* 0x1721AA80: movaps xmm4, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x80))); float _s1 = sse_f32(MEM32(ebp + (-0x80) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x80) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x80) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1721AA83: mulps xmm4, xmmword ptr [ebp - 0x80] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x70))); float _s1 = sse_f32(MEM32(ebp + (-0x70) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x70) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x70) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721AA87: mulps xmm1, xmmword ptr [ebp - 0x70] */
    _xmm[6] = _xmm[4]; /* 0x1721AA8B: movaps xmm6, xmm4 */
    _xmm[7] = _xmm[0]; /* 0x1721AA8E: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xF0))); float _s1 = sse_f32(MEM32(ebp + (-0xF0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xF0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xF0) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721AA91: mulps xmm0, xmmword ptr [ebp - 0xf0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721AA98: mulps xmm7, xmmword ptr [ebp - 0x100] */
    _xmm[4] = _xmm[3]; /* 0x1721AA9F: movaps xmm4, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1721AAA2: mulps xmm4, xmmword ptr [ebp - 0xc0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xB0))); float _s1 = sse_f32(MEM32(ebp + (-0xB0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xB0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xB0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721AAA9: mulps xmm3, xmmword ptr [ebp - 0xb0] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721AAB0: addps xmm0, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721AAB3: addps xmm0, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x1721AAB6: addps xmm7, xmm4 */
    _xmm[4] = _xmm[7]; /* 0x1721AAB9: movaps xmm4, xmm7 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x1721AABC: addps xmm4, xmm6 */
    _xmm[1] = _xmm[2]; /* 0x1721AABF: movaps xmm1, xmm2 */
    { xmm_t _s = _xmm[4], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x1721AAC2: unpcklps xmm1, xmm4 */
    MEM64(edi) = _xmm[1].u64[0]; /* 0x1721AAC5: movlps qword ptr [edi], xmm1 */
    MEM64(edi + ecx) = _xmm[1].u64[1]; /* 0x1721AAC8: movhps qword ptr [edi + ecx], xmm1 */
    MEM32(edi + 0x8) = _xmm[0].u32[0]; /* 0x1721AACC: movss dword ptr [edi + 8], xmm0 */
    _xmm[3] = _xmm[0]; /* 0x1721AAD1: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _d.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x1721AAD4: unpcklps xmm3, xmm0 */
    _xmm[1] = _xmm[3]; /* 0x1721AAD7: movaps xmm1, xmm3 */
    _xmm[1].u64[0] = _xmm[3].u64[1]; /* 0x1721AADA: movhlps xmm1, xmm3 */
    MEM32(ecx + edi + 0x8) = _xmm[1].u32[0]; /* 0x1721AADD: movss dword ptr [ecx + edi + 8], xmm1 */
    { xmm_t _s = _xmm[4], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1721AAE3: unpckhps xmm2, xmm4 */
    MEM64(edi + ecx * 2) = _xmm[2].u64[0]; /* 0x1721AAE6: movlps qword ptr [edi + ecx*2], xmm2 */
    edx = ecx + ecx * 2; /* 0x1721AAEA: lea edx, [ecx + ecx*2] */
    MEM64(edx + edi) = _xmm[2].u64[1]; /* 0x1721AAED: movhps qword ptr [edx + edi], xmm2 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _s.u32[2]; _xmm[0].u32[2] = _d.u32[3]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x1721AAF1: unpckhps xmm0, xmm0 */
    edx = ecx + ecx * 2; /* 0x1721AAF4: lea edx, [ecx + ecx*2] */
    MEM32(edi + ecx * 2 + 0x8) = _xmm[0].u32[0]; /* 0x1721AAF7: movss dword ptr [edi + ecx*2 + 8], xmm0 */
    _xmm[1] = _xmm[0]; /* 0x1721AAFD: movaps xmm1, xmm0 */
    _xmm[1].u64[0] = _xmm[0].u64[1]; /* 0x1721AB00: movhlps xmm1, xmm0 */
    MEM32(edx + edi + 0x8) = _xmm[1].u32[0]; /* 0x1721AB03: movss dword ptr [edx + edi + 8], xmm1 */
    edx = eax; /* 0x1721AB09: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721AB0B: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721AB0B: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1721AB0E: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x1721AB10: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721AB12: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721AB12: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1721AB15: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721AB17: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721AA07; /* 0x1721AB1A: jne 0x1721aa07 */
L_1721AB20:
    goto L_1721AB25; /* 0x1721AB20: jmp 0x1721ab25 */
L_1721AB22:
    esi = MEM32(ebx + 0x10); /* 0x1721AB22: mov esi, dword ptr [ebx + 0x10] */
L_1721AB25:
    eax = MEM32(ebp + (-0x8)); /* 0x1721AB25: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1721AB28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721AB44; /* 0x1721AB2A: jbe 0x1721ab44 */
L_1721AB2C:
    MEM32(ebp + (-0x4)) = eax; /* 0x1721AB2C: mov dword ptr [ebp - 4], eax */
L_1721AB2F:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721AB2F: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x1721AB32: push esi */
    PUSH32(esp, edi); /* 0x1721AB33: push edi */
    RECOMP_CALL(sub_17217C8F); /* 0x1721AB34: call 0x17217c8f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x1721AB39: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x1721AB3C: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721AB3F: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721AB2F; /* 0x1721AB42: jne 0x1721ab2f */
L_1721AB44:
    eax = MEM32(ebp + (-0xC)); /* 0x1721AB44: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1721AB47: pop edi */
    esi = POP32_VAL(esp); /* 0x1721AB48: pop esi */
    esp = ebp; /* 0x1721AB49: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721AB4B: pop ebp */
    esp = ebx; /* 0x1721AB4C: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721AB4E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721AB4F: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721AB57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721AB57u);

L_1721AB57:
    edi = edi; /* 0x1721AB57: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1721AB59: push ebx */
    ebx = esp; /* 0x1721AB5A: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1721AB5C: push ecx */
    PUSH32(esp, ecx); /* 0x1721AB5D: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721AB5E: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1721AB61: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1721AB64: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1721AB65: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1721AB68: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1721AB6C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x128u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x128u; /* 0x1721AB6E: sub esp, 0x128 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x1C); /* 0x1721AB74: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x1721AB77: push esi */
    PUSH32(esp, edi); /* 0x1721AB78: push edi */
    edi = MEM32(ebx + 0x8); /* 0x1721AB79: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, 0xAu); /* 0x1721AB7C: push 0xa */
    edx = eax; /* 0x1721AB7E: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edx = edx & 0xFFFFFFFCu; /* 0x1721AB80: and edx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1721AB83: pop ecx */
    /* cmp ecx, eax */ /* 0x1721AB84: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1721AB86: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    esi = esi & edx; /* 0x1721AB88: and esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1721AB8A: sub eax, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x1721AB8C: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x1721AB8C: shr esi, 2 */
    MEM32(ebp + (-0xC)) = eax; /* 0x1721AB8F: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x1721AB92: mov dword ptr [ebp - 8], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1721AD34; /* 0x1721AB95: je 0x1721ad34 */
L_1721AB9B:
    PUSH32(esp, 4); /* 0x1721AB9B: push 4 */
    PUSH32(esp, 4); /* 0x1721AB9D: push 4 */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721AB9F: push dword ptr [ebx + 0x18] */
    ecx = ebp + (-0x120); /* 0x1721ABA2: lea ecx, [ebp - 0x120] */
    RECOMP_CALL(sub_172181DA); /* 0x1721ABA8: call 0x172181da */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1721ABAD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x1721ABAF: mov eax, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0xC); /* 0x1721ABB2: mov ecx, dword ptr [ebx + 0xc] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1721ABB5: xorps xmm0, xmm0 */
    xmm_st(ebp + (-0x20), _xmm[0]); /* 0x1721ABB8: movaps xmmword ptr [ebp - 0x20], xmm0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721AD34; /* 0x1721ABBC: jbe 0x1721ad34 */
L_1721ABC2:
    MEM32(ebp + (-0x4)) = esi; /* 0x1721ABC2: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebx + 0x10); /* 0x1721ABC5: mov esi, dword ptr [ebx + 0x10] */
L_1721ABC8:
    _xmm[1] = xmm_ld(ebp + (-0x20)); /* 0x1721ABC8: movaps xmm1, xmmword ptr [ebp - 0x20] */
    _xmm[1].u64[0] = MEM64(esi); /* 0x1721ABCC: movlps xmm1, qword ptr [esi] */
    _xmm[1].u64[1] = MEM64(esi + eax); /* 0x1721ABCF: movhps xmm1, qword ptr [esi + eax] */
    _xmm[2] = xmm_ld(ebp + (-0x20)); /* 0x1721ABD3: movaps xmm2, xmmword ptr [ebp - 0x20] */
    _xmm[2].u64[0] = MEM64(esi + eax * 2); /* 0x1721ABD7: movlps xmm2, qword ptr [esi + eax*2] */
    _xmm[4].u64[0] = MEM32(esi + 0x8); _xmm[4].u64[1] = 0; /* 0x1721ABDB: movss xmm4, dword ptr [esi + 8] */
    _xmm[0] = _xmm[1]; /* 0x1721ABE0: movaps xmm0, xmm1 */
    edx = eax + eax * 2; /* 0x1721ABE3: lea edx, [eax + eax*2] */
    _xmm[2].u64[1] = MEM64(edx + esi); /* 0x1721ABE6: movhps xmm2, qword ptr [edx + esi] */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x1721ABEA: shufps xmm0, xmm2, 0x88 */
    { xmm_t _s = _xmm[2], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x1721ABEE: shufps xmm1, xmm2, 0xdd */
    _xmm[2].u64[0] = MEM32(esi + eax * 2 + 0x8); _xmm[2].u64[1] = 0; /* 0x1721ABF2: movss xmm2, dword ptr [esi + eax*2 + 8] */
    _xmm[3] = _xmm[1]; /* 0x1721ABF8: movaps xmm3, xmm1 */
    _xmm[1].u64[0] = MEM32(edx + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x1721ABFB: movss xmm1, dword ptr [edx + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x1721AC01: unpcklps xmm2, xmm1 */
    _xmm[1].u64[0] = MEM32(eax + esi + 0x8); _xmm[1].u64[1] = 0; /* 0x1721AC04: movss xmm1, dword ptr [eax + esi + 8] */
    { xmm_t _s = _xmm[1], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x1721AC0A: unpcklps xmm4, xmm1 */
    _xmm[1] = _xmm[4]; /* 0x1721AC0D: movaps xmm1, xmm4 */
    _xmm[1].u64[1] = _xmm[2].u64[0]; /* 0x1721AC10: movlhps xmm1, xmm2 */
    _xmm[5] = _xmm[0]; /* 0x1721AC13: movaps xmm5, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xF0))); float _s1 = sse_f32(MEM32(ebp + (-0xF0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xF0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xF0) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721AC16: mulps xmm5, xmmword ptr [ebp - 0xf0] */
    _xmm[4] = _xmm[3]; /* 0x1721AC1D: movaps xmm4, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xB0))); float _s1 = sse_f32(MEM32(ebp + (-0xB0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xB0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xB0) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1721AC20: mulps xmm4, xmmword ptr [ebp - 0xb0] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721AC27: addps xmm5, xmm4 */
    _xmm[4] = _xmm[5]; /* 0x1721AC2A: movaps xmm4, xmm5 */
    _xmm[2] = _xmm[1]; /* 0x1721AC2D: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x70))); float _s1 = sse_f32(MEM32(ebp + (-0x70) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x70) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x70) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721AC30: mulps xmm2, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x1721AC34: addps xmm4, xmm2 */
    _xmm[2] = _xmm[4]; /* 0x1721AC37: movaps xmm2, xmm4 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721AC3A: addps xmm2, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[4] = _d; } /* 0x1721AC3E: rcpps xmm4, xmm2 */
    _xmm[5] = _xmm[4]; /* 0x1721AC41: movaps xmm5, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721AC44: mulps xmm5, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721AC47: mulps xmm5, xmm4 */
    _xmm[2] = _xmm[4]; /* 0x1721AC4A: movaps xmm2, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721AC4D: addps xmm2, xmm4 */
    _xmm[4] = _xmm[2]; /* 0x1721AC50: movaps xmm4, xmm2 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x1721AC53: subps xmm4, xmm5 */
    _xmm[6] = _xmm[0]; /* 0x1721AC56: movaps xmm6, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x120))); float _s1 = sse_f32(MEM32(ebp + (-0x120) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x120) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x120) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721AC59: mulps xmm6, xmmword ptr [ebp - 0x120] */
    _xmm[5] = _xmm[3]; /* 0x1721AC60: movaps xmm5, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xE0))); float _s1 = sse_f32(MEM32(ebp + (-0xE0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xE0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xE0) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721AC63: mulps xmm5, xmmword ptr [ebp - 0xe0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721AC6A: addps xmm6, xmm5 */
    _xmm[2] = _xmm[1]; /* 0x1721AC6D: movaps xmm2, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xA0))); float _s1 = sse_f32(MEM32(ebp + (-0xA0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xA0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xA0) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721AC70: mulps xmm2, xmmword ptr [ebp - 0xa0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721AC77: addps xmm6, xmm2 */
    _xmm[7] = _xmm[0]; /* 0x1721AC7A: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x100))); float _s1 = sse_f32(MEM32(ebp + (-0x100) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x100) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x100) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721AC7D: mulps xmm0, xmmword ptr [ebp - 0x100] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x110))); float _s1 = sse_f32(MEM32(ebp + (-0x110) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x110) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x110) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721AC84: mulps xmm7, xmmword ptr [ebp - 0x110] */
    _xmm[2] = _xmm[6]; /* 0x1721AC8B: movaps xmm2, xmm6 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x60))); float _s1 = sse_f32(MEM32(ebp + (-0x60) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x60) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x60) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x1721AC8E: addps xmm2, xmmword ptr [ebp - 0x60] */
    _xmm[6] = _xmm[3]; /* 0x1721AC92: movaps xmm6, xmm3 */
    { float _s0 = sse_f32(MEM32(ebp + (-0xC0))); float _s1 = sse_f32(MEM32(ebp + (-0xC0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xC0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xC0) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x1721AC95: mulps xmm3, xmmword ptr [ebp - 0xc0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0xD0))); float _s1 = sse_f32(MEM32(ebp + (-0xD0) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0xD0) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0xD0) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721AC9C: mulps xmm6, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721ACA3: addps xmm0, xmm3 */
    _xmm[5] = _xmm[1]; /* 0x1721ACA6: movaps xmm5, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x90))); float _s1 = sse_f32(MEM32(ebp + (-0x90) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x90) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x90) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721ACA9: mulps xmm5, xmmword ptr [ebp - 0x90] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x80))); float _s1 = sse_f32(MEM32(ebp + (-0x80) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x80) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x80) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x1721ACB0: mulps xmm1, xmmword ptr [ebp - 0x80] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721ACB4: addps xmm0, xmm1 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721ACB7: addps xmm0, xmmword ptr [ebp - 0x40] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x1721ACBB: addps xmm7, xmm6 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x1721ACBE: addps xmm7, xmm5 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x1721ACC1: mulps xmm2, xmm4 */
    _xmm[5] = _xmm[7]; /* 0x1721ACC4: movaps xmm5, xmm7 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721ACC7: addps xmm5, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721ACCB: mulps xmm5, xmm4 */
    _xmm[3] = _xmm[2]; /* 0x1721ACCE: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[5], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _s.u32[0]; _xmm[3].u32[2] = _d.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x1721ACD1: unpcklps xmm3, xmm5 */
    MEM64(edi) = _xmm[3].u64[0]; /* 0x1721ACD4: movlps qword ptr [edi], xmm3 */
    MEM64(edi + ecx) = _xmm[3].u64[1]; /* 0x1721ACD7: movhps qword ptr [edi + ecx], xmm3 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721ACDB: mulps xmm0, xmm4 */
    _xmm[1] = _xmm[0]; /* 0x1721ACDE: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[4], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x1721ACE1: unpcklps xmm1, xmm4 */
    MEM32(edi + 0x8) = _xmm[1].u32[0]; /* 0x1721ACE4: movss dword ptr [edi + 8], xmm1 */
    _xmm[3] = _xmm[1]; /* 0x1721ACE9: movaps xmm3, xmm1 */
    _xmm[3].u64[0] = _xmm[1].u64[1]; /* 0x1721ACEC: movhlps xmm3, xmm1 */
    MEM32(ecx + edi + 0x8) = _xmm[3].u32[0]; /* 0x1721ACEF: movss dword ptr [ecx + edi + 8], xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x1721ACF5: unpckhps xmm2, xmm5 */
    { xmm_t _s = _xmm[4], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _s.u32[2]; _xmm[0].u32[2] = _d.u32[3]; _xmm[0].u32[3] = _s.u32[3]; } /* 0x1721ACF8: unpckhps xmm0, xmm4 */
    MEM64(edi + ecx * 2) = _xmm[2].u64[0]; /* 0x1721ACFB: movlps qword ptr [edi + ecx*2], xmm2 */
    edx = ecx + ecx * 2; /* 0x1721ACFF: lea edx, [ecx + ecx*2] */
    MEM64(edx + edi) = _xmm[2].u64[1]; /* 0x1721AD02: movhps qword ptr [edx + edi], xmm2 */
    edx = ecx + ecx * 2; /* 0x1721AD06: lea edx, [ecx + ecx*2] */
    MEM32(edi + ecx * 2 + 0x8) = _xmm[0].u32[0]; /* 0x1721AD09: movss dword ptr [edi + ecx*2 + 8], xmm0 */
    _xmm[1] = _xmm[0]; /* 0x1721AD0F: movaps xmm1, xmm0 */
    _xmm[1].u64[0] = _xmm[0].u64[1]; /* 0x1721AD12: movhlps xmm1, xmm0 */
    MEM32(edx + edi + 0x8) = _xmm[1].u32[0]; /* 0x1721AD15: movss dword ptr [edx + edi + 8], xmm1 */
    edx = eax; /* 0x1721AD1B: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721AD1D: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721AD1D: shl edx, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1721AD20: add esi, edx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x1721AD22: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1721AD24: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1721AD24: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1721AD27: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721AD29: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721ABC8; /* 0x1721AD2C: jne 0x1721abc8 */
L_1721AD32:
    goto L_1721AD37; /* 0x1721AD32: jmp 0x1721ad37 */
L_1721AD34:
    esi = MEM32(ebx + 0x10); /* 0x1721AD34: mov esi, dword ptr [ebx + 0x10] */
L_1721AD37:
    eax = MEM32(ebp + (-0xC)); /* 0x1721AD37: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x1721AD3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721AD56; /* 0x1721AD3C: jbe 0x1721ad56 */
L_1721AD3E:
    MEM32(ebp + (-0x4)) = eax; /* 0x1721AD3E: mov dword ptr [ebp - 4], eax */
L_1721AD41:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1721AD41: push dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x1721AD44: push esi */
    PUSH32(esp, edi); /* 0x1721AD45: push edi */
    RECOMP_CALL(sub_17217E3C); /* 0x1721AD46: call 0x17217e3c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x1721AD4B: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx + 0xC); /* 0x1721AD4E: add edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1721AD51: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1721AD41; /* 0x1721AD54: jne 0x1721ad41 */
L_1721AD56:
    eax = MEM32(ebp + (-0x8)); /* 0x1721AD56: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x1721AD59: pop edi */
    esi = POP32_VAL(esp); /* 0x1721AD5A: pop esi */
    esp = ebp; /* 0x1721AD5B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1721AD5D: pop ebp */
    esp = ebx; /* 0x1721AD5E: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1721AD60: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1721AD61: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1721AD69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721AD69u);

L_1721AD69:
    edi = edi; /* 0x1721AD69: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1721AD6B: push ebp */
    ebp = esp; /* 0x1721AD6C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1721AD6E: mov eax, dword ptr [ebp + 8] */
    _xmm[0] = xmm_ld(eax); /* 0x1721AD71: movaps xmm0, xmmword ptr [eax] */
    /* nop */ /* 0x1721AD74: nop  */
    _xmm[1] = _xmm[0]; /* 0x1721AD75: movaps xmm1, xmm0 */
    _xmm[6] = _xmm[0]; /* 0x1721AD78: movaps xmm6, xmm0 */
    { xmm_t _s = xmm_ld(0x1723C880); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1721AD7B: pand xmm0, xmmword ptr [0x1723c880] */
    { xmm_t _s = xmm_ld(0x1723C870); for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1721AD83: pand xmm1, xmmword ptr [0x1723c870] */
    _xmm[2] = _xmm[0]; /* 0x1721AD8B: movaps xmm2, xmm0 */
    _xmm[7] = _xmm[0]; /* 0x1721AD8E: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(0x1723C860)); float _s1 = sse_f32(MEM32(0x1723C860 + 4)); float _s2 = sse_f32(MEM32(0x1723C860 + 8)); float _s3 = sse_f32(MEM32(0x1723C860 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x1721AD91: mulps xmm0, xmmword ptr [0x1723c860] */
    _xmm[4] = xmm_ld(0x1723C850); /* 0x1721AD98: movaps xmm4, xmmword ptr [0x1723c850] */
    _xmm[5] = xmm_ld(0x1723C840); /* 0x1721AD9F: movaps xmm5, xmmword ptr [0x1723c840] */
    _xmm[6] = xmm_ld(0x1723C830); /* 0x1721ADA6: movaps xmm6, xmmword ptr [0x1723c830] */
    _xmm[7] = xmm_ld(0x1723C820); /* 0x1721ADAD: movaps xmm7, xmmword ptr [0x1723c820] */
    { float _s0 = sse_f32(MEM32(0x1723C810)); float _s1 = sse_f32(MEM32(0x1723C810 + 4)); float _s2 = sse_f32(MEM32(0x1723C810 + 8)); float _s3 = sse_f32(MEM32(0x1723C810 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x1721ADB4: addps xmm0, xmmword ptr [0x1723c810] */
    _xmm[3] = _xmm[0]; /* 0x1721ADBB: movaps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(0x1723C810)); float _s1 = sse_f32(MEM32(0x1723C810 + 4)); float _s2 = sse_f32(MEM32(0x1723C810 + 8)); float _s3 = sse_f32(MEM32(0x1723C810 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x1721ADBE: subps xmm0, xmmword ptr [0x1723c810] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1721ADC5: mulps xmm4, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721ADC8: mulps xmm5, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721ADCB: mulps xmm6, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x1721ADCE: mulps xmm7, xmm0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x1721ADD1: subps xmm2, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x1721ADD4: subps xmm2, xmm5 */
    _xmm[5] = xmm_ld(0x1723C800); /* 0x1721ADD7: movaps xmm5, xmmword ptr [0x1723c800] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x1721ADDE: subps xmm2, xmm6 */
    _xmm[6] = xmm_ld(0x1723C7F0); /* 0x1721ADE1: movaps xmm6, xmmword ptr [0x1723c7f0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x1721ADE8: subps xmm2, xmm7 */
    _xmm[4] = _xmm[2]; /* 0x1721ADEB: movaps xmm4, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x1721ADEE: mulps xmm4, xmm4 */
    { xmm_t _s = xmm_ld(0x1723C7E0); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1721ADF1: andps xmm3, xmmword ptr [0x1723c7e0] */
    _xmm[0] = _xmm[3]; /* 0x1721ADF8: movaps xmm0, xmm3 */
    _xmm[7] = _xmm[3]; /* 0x1721ADFB: movaps xmm7, xmm3 */
    { xmm_t _s = xmm_ld(0x1723C7D0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1721ADFE: andps xmm0, xmmword ptr [0x1723c7d0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] -= _s.u32[_k]; } /* 0x1721AE05: psubd xmm3, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] += _s.u32[_k]; } /* 0x1721AE09: paddd xmm7, xmm0 */
    { xmm_t _s = xmm_ld(0x1723C7C0); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x1721AE0D: pand xmm3, xmmword ptr [0x1723c7c0] */
    { xmm_t _s = xmm_ld(0x1723C7C0); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x1721AE15: pand xmm7, xmmword ptr [0x1723c7c0] */
    { uint64_t _c = 30u; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[3].u32[_k] << _c); } /* 0x1721AE1D: pslld xmm3, 0x1e */
    { uint64_t _c = 30u; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[7].u32[_k] << _c); } /* 0x1721AE22: pslld xmm7, 0x1e */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x1721AE27: pxor xmm3, xmm1 */
    { uint64_t _c = 30u; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[0].u32[_k] << _c); } /* 0x1721AE2B: pslld xmm0, 0x1e */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1721AE30: pxor xmm1, xmm1 */
    { double _s0 = _xmm[1].f32[0]; double _s1 = _xmm[1].f32[1]; double _s2 = _xmm[1].f32[2]; double _s3 = _xmm[1].f32[3]; _xmm[0].u32[0] = sse_cmp_pred(_xmm[0].f32[0], _s0, 4); _xmm[0].u32[1] = sse_cmp_pred(_xmm[0].f32[1], _s1, 4); _xmm[0].u32[2] = sse_cmp_pred(_xmm[0].f32[2], _s2, 4); _xmm[0].u32[3] = sse_cmp_pred(_xmm[0].f32[3], _s3, 4); } /* 0x1721AE34: cmpneqps xmm0, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721AE38: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721AE3B: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C7B0)); float _s1 = sse_f32(MEM32(0x1723C7B0 + 4)); float _s2 = sse_f32(MEM32(0x1723C7B0 + 8)); float _s3 = sse_f32(MEM32(0x1723C7B0 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721AE3E: addps xmm5, xmmword ptr [0x1723c7b0] */
    { float _s0 = sse_f32(MEM32(0x1723C7A0)); float _s1 = sse_f32(MEM32(0x1723C7A0 + 4)); float _s2 = sse_f32(MEM32(0x1723C7A0 + 8)); float _s3 = sse_f32(MEM32(0x1723C7A0 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721AE45: addps xmm6, xmmword ptr [0x1723c7a0] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721AE4C: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721AE4F: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C790)); float _s1 = sse_f32(MEM32(0x1723C790 + 4)); float _s2 = sse_f32(MEM32(0x1723C790 + 8)); float _s3 = sse_f32(MEM32(0x1723C790 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721AE52: addps xmm5, xmmword ptr [0x1723c790] */
    { float _s0 = sse_f32(MEM32(0x1723C780)); float _s1 = sse_f32(MEM32(0x1723C780 + 4)); float _s2 = sse_f32(MEM32(0x1723C780 + 8)); float _s3 = sse_f32(MEM32(0x1723C780 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721AE59: addps xmm6, xmmword ptr [0x1723c780] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721AE60: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721AE63: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C770)); float _s1 = sse_f32(MEM32(0x1723C770 + 4)); float _s2 = sse_f32(MEM32(0x1723C770 + 8)); float _s3 = sse_f32(MEM32(0x1723C770 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x1721AE66: addps xmm5, xmmword ptr [0x1723c770] */
    { float _s0 = sse_f32(MEM32(0x1723C760)); float _s1 = sse_f32(MEM32(0x1723C760 + 4)); float _s2 = sse_f32(MEM32(0x1723C760 + 8)); float _s3 = sse_f32(MEM32(0x1723C760 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721AE6D: addps xmm6, xmmword ptr [0x1723c760] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x1721AE74: mulps xmm5, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x1721AE77: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x1723C750)); float _s1 = sse_f32(MEM32(0x1723C750 + 4)); float _s2 = sse_f32(MEM32(0x1723C750 + 8)); float _s3 = sse_f32(MEM32(0x1723C750 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x1721AE7A: addps xmm6, xmmword ptr [0x1723c750] */
    _xmm[1] = _xmm[0]; /* 0x1721AE81: movaps xmm1, xmm0 */
    _xmm[2] = _xmm[0]; /* 0x1721AE84: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = ~_xmm[1].u32[_k] & _s.u32[_k]; } /* 0x1721AE87: andnps xmm1, xmm5 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1721AE8A: andps xmm2, xmm6 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x1721AE8D: orps xmm1, xmm2 */
    _xmm[2] = _xmm[0]; /* 0x1721AE90: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x1721AE93: andps xmm0, xmm5 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = ~_xmm[2].u32[_k] & _s.u32[_k]; } /* 0x1721AE96: andnps xmm2, xmm6 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x1721AE99: orps xmm0, xmm2 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1721AE9C: xorps xmm0, xmm7 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1721AE9F: xorps xmm1, xmm3 */
    eax = MEM32(ebp + 0xC); /* 0x1721AEA2: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1721AEA5: mov edx, dword ptr [ebp + 0x10] */
    xmm_st(eax, _xmm[1]); /* 0x1721AEA8: movaps xmmword ptr [eax], xmm1 */
    xmm_st(edx, _xmm[0]); /* 0x1721AEAB: movaps xmmword ptr [edx], xmm0 */
    ebp = POP32_VAL(esp); /* 0x1721AEAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1721AEAF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1721AEB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721AEB7u);

L_1721AEB7:
    edi = edi; /* 0x1721AEB7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1721AEB9: push ebp */
    ebp = esp; /* 0x1721AEBA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1721AEBC: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1721AEBD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1721AEBF: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1721AED2; /* 0x1721AEC2: jne 0x1721aed2 */
L_1721AEC4:
    /* cmp MEM32(0x172548D4), esi */ /* 0x1721AEC4: cmp dword ptr [0x172548d4], esi */
    _flag_a = (uint32_t)(MEM32(0x172548D4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1721AEF7; /* 0x1721AECA: jle 0x1721aef7 */
L_1721AECC:
    _flag_a = (uint32_t)(MEM32(0x172548D4)); _flag_b = (uint32_t)(1);
    MEM32(0x172548D4) = MEM32(0x172548D4) - 1; /* 0x1721AECC: dec dword ptr [0x172548d4] */
    _flag_k = FK_DEC;
L_1721AED2:
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x1721AED2: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x170011BC); /* 0x1721AED6: mov eax, dword ptr [0x170011bc] */
    eax = MEM32(eax); /* 0x1721AEDB: mov eax, dword ptr [eax] */
    MEM32(0x17254BF4) = eax; /* 0x1721AEDD: mov dword ptr [0x17254bf4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1721AF1F; /* 0x1721AEE2: jne 0x1721af1f */
L_1721AEE4:
    ecx = 0x80u; /* 0x1721AEE4: mov ecx, 0x80 */
    RECOMP_CALL(sub_1721B643); /* 0x1721AEE9: call 0x1721b643 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1721AEEE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x17254BFC) = eax; /* 0x1721AEF0: mov dword ptr [0x17254bfc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1721AEFB; /* 0x1721AEF5: jne 0x1721aefb */
L_1721AEF7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1721AEF7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1721AF62; /* 0x1721AEF9: jmp 0x1721af62 */
L_1721AEFB:
    MEM32(eax) = esi; /* 0x1721AEFB: mov dword ptr [eax], esi */
    eax = MEM32(0x17254BFC); /* 0x1721AEFD: mov eax, dword ptr [0x17254bfc] */
    PUSH32(esp, 0x170013F0u); /* 0x1721AF02: push 0x170013f0 */
    PUSH32(esp, 0x170012D4u); /* 0x1721AF07: push 0x170012d4 */
    MEM32(0x17254BF8) = eax; /* 0x1721AF0C: mov dword ptr [0x17254bf8], eax */
    RECOMP_CALL(sub_1721B638); /* 0x1721AF11: call 0x1721b638 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x172548D4)); _flag_b = (uint32_t)(1);
    MEM32(0x172548D4) = MEM32(0x172548D4) + 1; /* 0x1721AF16: inc dword ptr [0x172548d4] */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1721AF1C: pop ecx */
    goto L_1721AF5E; /* 0x1721AF1D: jmp 0x1721af5e */
L_1721AF1F:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1721AF1F: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1721AF5F; /* 0x1721AF22: jne 0x1721af5f */
L_1721AF24:
    eax = MEM32(0x17254BFC); /* 0x1721AF24: mov eax, dword ptr [0x17254bfc] */
    /* cmp eax, esi */ /* 0x1721AF29: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1721AF5F; /* 0x1721AF2B: je 0x1721af5f */
L_1721AF2D:
    goto L_1721AF42; /* 0x1721AF2D: jmp 0x1721af42 */
L_1721AF2F:
    ecx = MEM32(0x17254BF8); /* 0x1721AF2F: mov ecx, dword ptr [0x17254bf8] */
    ecx = MEM32(ecx); /* 0x1721AF35: mov ecx, dword ptr [ecx] */
    /* cmp ecx, esi */ /* 0x1721AF37: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1721AF42; /* 0x1721AF39: je 0x1721af42 */
L_1721AF3B:
    RECOMP_ICALL(ecx); /* 0x1721AF3B: call ecx */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x17254BFC); /* 0x1721AF3D: mov eax, dword ptr [0x17254bfc] */
L_1721AF42:
    _flag_a = (uint32_t)(MEM32(0x17254BF8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(0x17254BF8) = MEM32(0x17254BF8) - 4; /* 0x1721AF42: sub dword ptr [0x17254bf8], 4 */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x17254BF8), eax */ /* 0x1721AF49: cmp dword ptr [0x17254bf8], eax */
    _flag_a = (uint32_t)(MEM32(0x17254BF8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1721AF2F; /* 0x1721AF4F: jae 0x1721af2f */
L_1721AF51:
    PUSH32(esp, eax); /* 0x1721AF51: push eax */
    RECOMP_ICALL(MEM32(0x17001278)); /* 0x1721AF52: call dword ptr [0x17001278] */
    RECOMP_FLAGS_IN();
    MEM32(0x17254BFC) = esi; /* 0x1721AF58: mov dword ptr [0x17254bfc], esi */
L_1721AF5E:
    ecx = POP32_VAL(esp); /* 0x1721AF5E: pop ecx */
L_1721AF5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1721AF5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1721AF61: inc eax */
    _flag_k = FK_INC;
L_1721AF62:
    esi = POP32_VAL(esp); /* 0x1721AF62: pop esi */
    ebp = POP32_VAL(esp); /* 0x1721AF63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1721AF64: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1721AF6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721AF6Cu);

L_1721AF6C:
    edi = edi; /* 0x1721AF6C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1721AF6E: push ebp */
    ebp = esp; /* 0x1721AF6F: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1721AF71: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1721AF72: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1721AF75: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1721AF76: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1721AF79: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1721AF7B: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1721AF7C: mov edi, dword ptr [ebp + 0x10] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1721AF8A; /* 0x1721AF7F: jne 0x1721af8a */
L_1721AF81:
    /* cmp MEM32(0x172548D4), 0 */ /* 0x1721AF81: cmp dword ptr [0x172548d4], 0 */
    _flag_a = (uint32_t)(MEM32(0x172548D4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1721AFB0; /* 0x1721AF88: jmp 0x1721afb0 */
L_1721AF8A:
    /* cmp esi, 1 */ /* 0x1721AF8A: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1721AF94; /* 0x1721AF8D: je 0x1721af94 */
L_1721AF8F:
    /* cmp esi, 2 */ /* 0x1721AF8F: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1721AFB6; /* 0x1721AF92: jne 0x1721afb6 */
L_1721AF94:
    eax = MEM32(0x17254C00); /* 0x1721AF94: mov eax, dword ptr [0x17254c00] */
    /* test eax, eax */ /* 0x1721AF99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721AFA6; /* 0x1721AF9B: je 0x1721afa6 */
L_1721AF9D:
    PUSH32(esp, edi); /* 0x1721AF9D: push edi */
    PUSH32(esp, esi); /* 0x1721AF9E: push esi */
    PUSH32(esp, ebx); /* 0x1721AF9F: push ebx */
    RECOMP_ICALL(eax); /* 0x1721AFA0: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1721AFA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721AFB2; /* 0x1721AFA4: je 0x1721afb2 */
L_1721AFA6:
    PUSH32(esp, edi); /* 0x1721AFA6: push edi */
    PUSH32(esp, esi); /* 0x1721AFA7: push esi */
    PUSH32(esp, ebx); /* 0x1721AFA8: push ebx */
    RECOMP_CALL(sub_1721AEB7); /* 0x1721AFA9: call 0x1721aeb7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1721AFAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_1721AFB0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1721AFB6; /* 0x1721AFB0: jne 0x1721afb6 */
L_1721AFB2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1721AFB2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1721B004; /* 0x1721AFB4: jmp 0x1721b004 */
L_1721AFB6:
    PUSH32(esp, edi); /* 0x1721AFB6: push edi */
    PUSH32(esp, esi); /* 0x1721AFB7: push esi */
    PUSH32(esp, ebx); /* 0x1721AFB8: push ebx */
    RECOMP_CALL(sub_1702B005); /* 0x1721AFB9: call 0x1702b005 */
    RECOMP_FLAGS_IN();
    /* cmp esi, 1 */ /* 0x1721AFBE: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x1721AFC1: mov dword ptr [ebp + 0xc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1721AFD2; /* 0x1721AFC4: jne 0x1721afd2 */
L_1721AFC6:
    /* test eax, eax */ /* 0x1721AFC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1721B001; /* 0x1721AFC8: jne 0x1721b001 */
L_1721AFCA:
    PUSH32(esp, edi); /* 0x1721AFCA: push edi */
    PUSH32(esp, eax); /* 0x1721AFCB: push eax */
    PUSH32(esp, ebx); /* 0x1721AFCC: push ebx */
    RECOMP_CALL(sub_1721AEB7); /* 0x1721AFCD: call 0x1721aeb7 */
    RECOMP_FLAGS_IN();
L_1721AFD2:
    /* test esi, esi */ /* 0x1721AFD2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721AFDB; /* 0x1721AFD4: je 0x1721afdb */
L_1721AFD6:
    /* cmp esi, 3 */ /* 0x1721AFD6: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1721B001; /* 0x1721AFD9: jne 0x1721b001 */
L_1721AFDB:
    PUSH32(esp, edi); /* 0x1721AFDB: push edi */
    PUSH32(esp, esi); /* 0x1721AFDC: push esi */
    PUSH32(esp, ebx); /* 0x1721AFDD: push ebx */
    RECOMP_CALL(sub_1721AEB7); /* 0x1721AFDE: call 0x1721aeb7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1721AFE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1721AFEA; /* 0x1721AFE5: jne 0x1721afea */
L_1721AFE7:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & eax; /* 0x1721AFE7: and dword ptr [ebp + 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1721AFEA:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1721AFEA: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1721B001; /* 0x1721AFEE: je 0x1721b001 */
L_1721AFF0:
    eax = MEM32(0x17254C00); /* 0x1721AFF0: mov eax, dword ptr [0x17254c00] */
    /* test eax, eax */ /* 0x1721AFF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721B001; /* 0x1721AFF7: je 0x1721b001 */
L_1721AFF9:
    PUSH32(esp, edi); /* 0x1721AFF9: push edi */
    PUSH32(esp, esi); /* 0x1721AFFA: push esi */
    PUSH32(esp, ebx); /* 0x1721AFFB: push ebx */
    RECOMP_ICALL(eax); /* 0x1721AFFC: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1721AFFE: mov dword ptr [ebp + 0xc], eax */
L_1721B001:
    eax = MEM32(ebp + 0xC); /* 0x1721B001: mov eax, dword ptr [ebp + 0xc] */
L_1721B004:
    edi = POP32_VAL(esp); /* 0x1721B004: pop edi */
    esi = POP32_VAL(esp); /* 0x1721B005: pop esi */
    ebx = POP32_VAL(esp); /* 0x1721B006: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1721B007: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1721B008: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1721B010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B010u);

L_1721B010:
    { _itail_tgt = (uint32_t)(MEM32(0x170012CC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B01C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B01Cu);

L_1721B01C:
    { _itail_tgt = (uint32_t)(MEM32(0x170012C8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B036(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B036u);

L_1721B036:
    { _itail_tgt = (uint32_t)(MEM32(0x170012C4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B050u);

L_1721B050:
    PUSH32(esp, ebp); /* 0x1721B050: push ebp */
    ebp = esp; /* 0x1721B051: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1721B053: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1721B056: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x1721B059: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x1721B05B: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x1721B05F: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x1721B063: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x1721B067: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x1721B06B: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x1721B06F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1721B0AF; /* 0x1721B071: je 0x1721b0af */
L_1721B073:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1721B073: fsubp st(1) */
    /* test edx, edx */ /* 0x1721B075: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1721B097; /* 0x1721B077: jns 0x1721b097 */
L_1721B079:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1721B079: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x1721B07C: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x1721B07F: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x1721B085: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1721B08B: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x1721B08E: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1721B092: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1721B0C3; /* 0x1721B095: jmp 0x1721b0c3 */
L_1721B097:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1721B097: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x1721B09A: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x1721B09D: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1721B0A3: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x1721B0A6: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1721B0AA: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1721B0C3; /* 0x1721B0AD: jmp 0x1721b0c3 */
L_1721B0AF:
    edx = MEM32(esp + 0x14); /* 0x1721B0AF: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x1721B0B3: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1721B073; /* 0x1721B0B9: jne 0x1721b073 */
L_1721B0BB:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x1721B0BB: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x1721B0BF: fstp dword ptr [esp + 0x18] */
L_1721B0C3:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1721B0C3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1721B0C4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1721B0CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B0CAu);

L_1721B0CA:
    { _itail_tgt = (uint32_t)(MEM32(0x170012C0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B0D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B0D6u);

L_1721B0D6:
    { _itail_tgt = (uint32_t)(MEM32(0x170012BC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B0E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B0E2u);

L_1721B0E2:
    { _itail_tgt = (uint32_t)(MEM32(0x170012B8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B0EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B0EEu);

L_1721B0EE:
    { _itail_tgt = (uint32_t)(MEM32(0x170012B4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B0FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B0FAu);

L_1721B0FA:
    { _itail_tgt = (uint32_t)(MEM32(0x170012B0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B106(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B106u);

L_1721B106:
    { _itail_tgt = (uint32_t)(MEM32(0x170012AC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B112(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B112u);

L_1721B112:
    { _itail_tgt = (uint32_t)(MEM32(0x170012A8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B11E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B11Eu);

L_1721B11E:
    { _itail_tgt = (uint32_t)(MEM32(0x170012A4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B12A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B12Au);

L_1721B12A:
    { _itail_tgt = (uint32_t)(MEM32(0x170012A0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B136(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B136u);

L_1721B136:
    { _itail_tgt = (uint32_t)(MEM32(0x1700129C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B142(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B142u);

L_1721B142:
    { _itail_tgt = (uint32_t)(MEM32(0x17001298)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B14E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B14Eu);

L_1721B14E:
    { _itail_tgt = (uint32_t)(MEM32(0x17001294)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B168(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B168u);

L_1721B168:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1721B168: push -1 */
    PUSH32(esp, eax); /* 0x1721B16A: push eax */
    eax = MEM32(FS_BASE + (0)); /* 0x1721B16B: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1721B171: push eax */
    eax = MEM32(esp + 0xC); /* 0x1721B172: mov eax, dword ptr [esp + 0xc] */
    MEM32(FS_BASE + (0)) = esp; /* 0x1721B176: mov dword ptr fs:[0], esp */
    MEM32(esp + 0xC) = ebp; /* 0x1721B17D: mov dword ptr [esp + 0xc], ebp */
    ebp = esp + 0xC; /* 0x1721B181: lea ebp, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x1721B185: push eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1721B186: ret  */
    RECOMP_REGS_OUT();
}

void sub_1721B18C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B18Cu);

L_1721B18C:
    { _itail_tgt = (uint32_t)(MEM32(0x1700128C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B198(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B198u);

L_1721B198:
    { _itail_tgt = (uint32_t)(MEM32(0x17001288)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B1B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B1B0u);

L_1721B1B0:
    PUSH32(esp, ecx); /* 0x1721B1B0: push ecx */
    ecx = esp + 0xC; /* 0x1721B1B1: lea ecx, [esp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1721B1B5: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_1721B1BD; /* 0x1721B1B7: jae 0x1721b1bd */
L_1721B1B9:
    eax = esp + 0xC; /* 0x1721B1B9: lea eax, [esp + 0xc] */
L_1721B1BD:
    ecx = POP32_VAL(esp); /* 0x1721B1BD: pop ecx */
    /* cmp eax, 0x1000u */ /* 0x1721B1BE: cmp eax, 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1721B1D3; /* 0x1721B1C3: jae 0x1721b1d3 */
L_1721B1C5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1721B1C5: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esp);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esp; /* 0x1721B1C7: add eax, esp */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1721B1C9: add eax, 4 */
    _flag_k = FK_ADD;
    /* test MEM32(eax), eax */ /* 0x1721B1CC: test dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = esp; /* 0x1721B1CE: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = MEM32(eax); /* 0x1721B1CF: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1721B1D1: push eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1721B1D2: ret  */
L_1721B1D3:
    PUSH32(esp, ecx); /* 0x1721B1D3: push ecx */
    ecx = esp + 0x8; /* 0x1721B1D4: lea ecx, [esp + 8] */
L_1721B1D8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x1000u; /* 0x1721B1D8: sub ecx, 0x1000 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1000u; /* 0x1721B1DE: sub eax, 0x1000 */
    _flag_k = FK_CMP;
    /* test MEM32(ecx), eax */ /* 0x1721B1E3: test dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1000u */ /* 0x1721B1E5: cmp eax, 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1721B1D8; /* 0x1721B1EA: jae 0x1721b1d8 */
L_1721B1EC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1721B1EC: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = esp; /* 0x1721B1EE: mov eax, esp */
    /* test MEM32(ecx), eax */ /* 0x1721B1F0: test dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ecx; /* 0x1721B1F2: mov esp, ecx */
    ecx = MEM32(eax); /* 0x1721B1F4: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1721B1F6: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, eax); /* 0x1721B1F9: push eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1721B1FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1721B200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B200u);

L_1721B200:
    { _itail_tgt = (uint32_t)(MEM32(0x17001284)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B20C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B20Cu);

L_1721B20C:
    { _itail_tgt = (uint32_t)(MEM32(0x17001280)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B218(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B218u);

L_1721B218:
    { _itail_tgt = (uint32_t)(MEM32(0x1700127C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B224(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B224u);

L_1721B224:
    { _itail_tgt = (uint32_t)(MEM32(0x17001278)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B230u);

L_1721B230:
    { _itail_tgt = (uint32_t)(MEM32(0x17001274)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B23C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B23Cu);

L_1721B23C:
    { _itail_tgt = (uint32_t)(MEM32(0x17001270)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B248(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B248u);

L_1721B248:
    { _itail_tgt = (uint32_t)(MEM32(0x1700126C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B254(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B254u);

L_1721B254:
    { _itail_tgt = (uint32_t)(MEM32(0x17001268)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B260u);

L_1721B260:
    { _itail_tgt = (uint32_t)(MEM32(0x17001264)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B26C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B26Cu);

L_1721B26C:
    { _itail_tgt = (uint32_t)(MEM32(0x17001260)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B278(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B278u);

L_1721B278:
    { _itail_tgt = (uint32_t)(MEM32(0x1700125C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B290u);

L_1721B290:
    /* cmp LO8(ecx), 0x40u */ /* 0x1721B290: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1721B2AA; /* 0x1721B293: jae 0x1721b2aa */
L_1721B295:
    /* cmp LO8(ecx), 0x20u */ /* 0x1721B295: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1721B2A0; /* 0x1721B298: jae 0x1721b2a0 */
L_1721B29A:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1721B29A: shrd eax, edx, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1721B29D: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x1721B29D: shr edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1721B29F: ret  */
L_1721B2A0:
    eax = edx; /* 0x1721B2A0: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1721B2A2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x1721B2A4: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1721B2A7: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x1721B2A7: shr eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1721B2A9: ret  */
L_1721B2AA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1721B2AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1721B2AC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1721B2AE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1721B2B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B2B4u);

L_1721B2B4:
    { _itail_tgt = (uint32_t)(MEM32(0x17001258)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B2C0u);

L_1721B2C0:
    { _itail_tgt = (uint32_t)(MEM32(0x17001254)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B2CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B2CCu);

L_1721B2CC:
    { _itail_tgt = (uint32_t)(MEM32(0x17001250)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B2D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B2D8u);

L_1721B2D8:
    { _itail_tgt = (uint32_t)(MEM32(0x1700124C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B2E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B2E4u);

L_1721B2E4:
    { _itail_tgt = (uint32_t)(MEM32(0x17001248)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B2F0u);

L_1721B2F0:
    { _itail_tgt = (uint32_t)(MEM32(0x17001244)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1721B2FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1721B2FCu);

L_1721B2FC:
    { _itail_tgt = (uint32_t)(MEM32(0x17001240)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
