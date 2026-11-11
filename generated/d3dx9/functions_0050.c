#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_121BA731(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA731u);

L_121BA731:
    edi = edi; /* 0x121BA731: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA733: push ebp */
    ebp = esp; /* 0x121BA734: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x121BA736: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x121BA73B: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA73F: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x121BA743: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA747: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BA74B: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BA74F: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8FB0)); float _s1 = sse_f32(MEM32(0x121D8FB0 + 4)); float _s2 = sse_f32(MEM32(0x121D8FB0 + 8)); float _s3 = sse_f32(MEM32(0x121D8FB0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BA753: mulps xmm0, xmmword ptr [0x121d8fb0] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BA75A: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8FA0)); float _s1 = sse_f32(MEM32(0x121D8FA0 + 4)); float _s2 = sse_f32(MEM32(0x121D8FA0 + 8)); float _s3 = sse_f32(MEM32(0x121D8FA0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA75E: mulps xmm1, xmmword ptr [0x121d8fa0] */
    { float _s0 = sse_f32(MEM32(0x121D8FC0)); float _s1 = sse_f32(MEM32(0x121D8FC0 + 4)); float _s2 = sse_f32(MEM32(0x121D8FC0 + 8)); float _s3 = sse_f32(MEM32(0x121D8FC0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA765: addps xmm0, xmmword ptr [0x121d8fc0] */
    { float _s0 = sse_f32(MEM32(0x121D8F90)); float _s1 = sse_f32(MEM32(0x121D8F90 + 4)); float _s2 = sse_f32(MEM32(0x121D8F90 + 8)); float _s3 = sse_f32(MEM32(0x121D8F90 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA76C: mulps xmm2, xmmword ptr [0x121d8f90] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA773: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA776: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x121BA779: mov eax, dword ptr [ebp + 0xc] */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x121BA77C: xorps xmm4, xmm4 */
    ecx = MEM32(ebp + 0x10); /* 0x121BA77F: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x121BA782: mov edx, dword ptr [ebp + 0x14] */
    _xmm[1] = _xmm[0]; /* 0x121BA785: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BA788: shufps xmm1, xmm0, 0x55 */
    _xmm[2] = _xmm[0]; /* 0x121BA78C: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BA78F: shufps xmm2, xmm0, 0xaa */
    _xmm[3] = _xmm[0]; /* 0x121BA793: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BA796: shufps xmm3, xmm0, 0xff */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x121BA79A: xorps xmm5, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA79D: shufps xmm0, xmm0, 0 */
    _xmm[4] = xmm_ld(eax); /* 0x121BA7A1: movups xmm4, xmmword ptr [eax] */
    eax = MEM32(ebp + 0x18); /* 0x121BA7A4: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BA7A7: mulps xmm4, xmm0 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x121BA7AA: xorps xmm6, xmm6 */
    _xmm[5] = xmm_ld(ecx); /* 0x121BA7AD: movups xmm5, xmmword ptr [ecx] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BA7B0: mulps xmm5, xmm1 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x121BA7B3: xorps xmm7, xmm7 */
    _xmm[6] = xmm_ld(edx); /* 0x121BA7B6: movups xmm6, xmmword ptr [edx] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA7B9: addps xmm4, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BA7BC: mulps xmm6, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA7BF: addps xmm4, xmm6 */
    _xmm[7] = xmm_ld(eax); /* 0x121BA7C2: movups xmm7, xmmword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x121BA7C5: mov ecx, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BA7C8: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA7CB: addps xmm4, xmm7 */
    xmm_st(ecx, _xmm[4]); /* 0x121BA7CE: movups xmmword ptr [ecx], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x121BA7D1: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA7D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BA7D5: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BA7DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA7DDu);

L_121BA7DD:
    edi = edi; /* 0x121BA7DD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA7DF: push ebp */
    ebp = esp; /* 0x121BA7E0: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x121BA7E2: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x121BA7E7: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA7EB: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x121BA7EF: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA7F3: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BA7F7: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BA7FB: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8F70)); float _s1 = sse_f32(MEM32(0x121D8F70 + 4)); float _s2 = sse_f32(MEM32(0x121D8F70 + 8)); float _s3 = sse_f32(MEM32(0x121D8F70 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BA7FF: mulps xmm0, xmmword ptr [0x121d8f70] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BA806: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8F60)); float _s1 = sse_f32(MEM32(0x121D8F60 + 4)); float _s2 = sse_f32(MEM32(0x121D8F60 + 8)); float _s3 = sse_f32(MEM32(0x121D8F60 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA80A: mulps xmm1, xmmword ptr [0x121d8f60] */
    { float _s = sse_f32(MEM32(0x121D8F80)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BA811: addss xmm0, dword ptr [0x121d8f80] */
    { float _s0 = sse_f32(MEM32(0x121D8F50)); float _s1 = sse_f32(MEM32(0x121D8F50 + 4)); float _s2 = sse_f32(MEM32(0x121D8F50 + 8)); float _s3 = sse_f32(MEM32(0x121D8F50 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA819: mulps xmm2, xmmword ptr [0x121d8f50] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA820: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA823: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x121BA826: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x121BA829: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x121BA82C: mov edx, dword ptr [ebp + 0x14] */
    _xmm[1] = _xmm[0]; /* 0x121BA82F: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BA832: shufps xmm1, xmm0, 0x55 */
    _xmm[2] = _xmm[0]; /* 0x121BA836: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BA839: shufps xmm2, xmm0, 0xaa */
    _xmm[3] = _xmm[0]; /* 0x121BA83D: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BA840: shufps xmm3, xmm0, 0xff */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA844: shufps xmm0, xmm0, 0 */
    _xmm[4].u64[0] = MEM32(eax + 0x8); _xmm[4].u64[1] = 0; /* 0x121BA848: movss xmm4, dword ptr [eax + 8] */
    _xmm[4].u64[1] = MEM64(eax); /* 0x121BA84D: movhps xmm4, qword ptr [eax] */
    eax = MEM32(ebp + 0x18); /* 0x121BA850: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BA853: mulps xmm4, xmm0 */
    _xmm[5].u64[0] = MEM32(ecx + 0x8); _xmm[5].u64[1] = 0; /* 0x121BA856: movss xmm5, dword ptr [ecx + 8] */
    _xmm[5].u64[1] = MEM64(ecx); /* 0x121BA85B: movhps xmm5, qword ptr [ecx] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BA85E: mulps xmm5, xmm1 */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x121BA861: movss xmm6, dword ptr [edx + 8] */
    _xmm[6].u64[1] = MEM64(edx); /* 0x121BA866: movhps xmm6, qword ptr [edx] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA869: addps xmm4, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BA86C: mulps xmm6, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA86F: addps xmm4, xmm6 */
    _xmm[7].u64[0] = MEM32(eax + 0x8); _xmm[7].u64[1] = 0; /* 0x121BA872: movss xmm7, dword ptr [eax + 8] */
    _xmm[7].u64[1] = MEM64(eax); /* 0x121BA877: movhps xmm7, qword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x121BA87A: mov ecx, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BA87D: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA880: addps xmm4, xmm7 */
    MEM64(ecx) = _xmm[4].u64[1]; /* 0x121BA883: movhps qword ptr [ecx], xmm4 */
    MEM32(ecx + 0x8) = _xmm[4].u32[0]; /* 0x121BA886: movss dword ptr [ecx + 8], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x121BA88B: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA88E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BA88F: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BA897(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA897u);

L_121BA897:
    edi = edi; /* 0x121BA897: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA899: push ebp */
    ebp = esp; /* 0x121BA89A: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x121BA89C: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x121BA8A1: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA8A5: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x121BA8A9: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA8AD: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BA8B1: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BA8B5: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8F70)); float _s1 = sse_f32(MEM32(0x121D8F70 + 4)); float _s2 = sse_f32(MEM32(0x121D8F70 + 8)); float _s3 = sse_f32(MEM32(0x121D8F70 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BA8B9: mulps xmm0, xmmword ptr [0x121d8f70] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BA8C0: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8F60)); float _s1 = sse_f32(MEM32(0x121D8F60 + 4)); float _s2 = sse_f32(MEM32(0x121D8F60 + 8)); float _s3 = sse_f32(MEM32(0x121D8F60 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA8C4: mulps xmm1, xmmword ptr [0x121d8f60] */
    { float _s = sse_f32(MEM32(0x121D8F80)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BA8CB: addss xmm0, dword ptr [0x121d8f80] */
    { float _s0 = sse_f32(MEM32(0x121D8F50)); float _s1 = sse_f32(MEM32(0x121D8F50 + 4)); float _s2 = sse_f32(MEM32(0x121D8F50 + 8)); float _s3 = sse_f32(MEM32(0x121D8F50 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA8D3: mulps xmm2, xmmword ptr [0x121d8f50] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA8DA: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA8DD: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x121BA8E0: mov eax, dword ptr [ebp + 0xc] */
    _xmm[1] = _xmm[0]; /* 0x121BA8E3: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BA8E6: shufps xmm1, xmm0, 0x55 */
    _xmm[2] = _xmm[0]; /* 0x121BA8EA: movaps xmm2, xmm0 */
    ecx = MEM32(ebp + 0x10); /* 0x121BA8ED: mov ecx, dword ptr [ebp + 0x10] */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BA8F0: shufps xmm2, xmm0, 0xaa */
    _xmm[3] = _xmm[0]; /* 0x121BA8F4: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BA8F7: shufps xmm3, xmm0, 0xff */
    edx = MEM32(ebp + 0x14); /* 0x121BA8FB: mov edx, dword ptr [ebp + 0x14] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA8FE: shufps xmm0, xmm0, 0 */
    _xmm[4] = xmm_ld(eax); /* 0x121BA902: movups xmm4, xmmword ptr [eax] */
    eax = MEM32(ebp + 0x18); /* 0x121BA905: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BA908: mulps xmm4, xmm0 */
    _xmm[5] = xmm_ld(ecx); /* 0x121BA90B: movups xmm5, xmmword ptr [ecx] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BA90E: mulps xmm5, xmm1 */
    _xmm[6] = xmm_ld(edx); /* 0x121BA911: movups xmm6, xmmword ptr [edx] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA914: addps xmm4, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BA917: mulps xmm6, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA91A: addps xmm4, xmm6 */
    _xmm[7] = xmm_ld(eax); /* 0x121BA91D: movups xmm7, xmmword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x121BA920: mov ecx, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BA923: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA926: addps xmm4, xmm7 */
    xmm_st(ecx, _xmm[4]); /* 0x121BA929: movups xmmword ptr [ecx], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x121BA92C: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA92F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BA930: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BA938(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA938u);

L_121BA938:
    edi = edi; /* 0x121BA938: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA93A: push ebp */
    ebp = esp; /* 0x121BA93B: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x1C); _xmm[0].u64[1] = 0; /* 0x121BA93D: movss xmm0, dword ptr [ebp + 0x1c] */
    _xmm[1].u32[0] = _xmm[0].u32[0]; /* 0x121BA942: movss xmm1, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BA946: mulss xmm1, xmm0 */
    _xmm[2].u32[0] = _xmm[0].u32[0]; /* 0x121BA94A: movss xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA94E: shufps xmm0, xmm0, 0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BA952: mulss xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BA956: shufps xmm1, xmm1, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8F70)); float _s1 = sse_f32(MEM32(0x121D8F70 + 4)); float _s2 = sse_f32(MEM32(0x121D8F70 + 8)); float _s3 = sse_f32(MEM32(0x121D8F70 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BA95A: mulps xmm0, xmmword ptr [0x121d8f70] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BA961: shufps xmm2, xmm2, 0 */
    { float _s0 = sse_f32(MEM32(0x121D8F60)); float _s1 = sse_f32(MEM32(0x121D8F60 + 4)); float _s2 = sse_f32(MEM32(0x121D8F60 + 8)); float _s3 = sse_f32(MEM32(0x121D8F60 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BA965: mulps xmm1, xmmword ptr [0x121d8f60] */
    { float _s = sse_f32(MEM32(0x121D8F80)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BA96C: addss xmm0, dword ptr [0x121d8f80] */
    { float _s0 = sse_f32(MEM32(0x121D8F50)); float _s1 = sse_f32(MEM32(0x121D8F50 + 4)); float _s2 = sse_f32(MEM32(0x121D8F50 + 8)); float _s3 = sse_f32(MEM32(0x121D8F50 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BA974: mulps xmm2, xmmword ptr [0x121d8f50] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA97B: addps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BA97E: addps xmm0, xmm2 */
    eax = MEM32(ebp + 0xC); /* 0x121BA981: mov eax, dword ptr [ebp + 0xc] */
    _xmm[2] = _xmm[0]; /* 0x121BA984: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x121BA987: shufps xmm2, xmm0, 0xfa */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BA98B: shufps xmm0, xmm0, 0x50 */
    ecx = MEM32(ebp + 0x10); /* 0x121BA98F: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x121BA992: mov edx, dword ptr [ebp + 0x14] */
    _xmm[4].u64[0] = MEM64(eax); /* 0x121BA995: movlps xmm4, qword ptr [eax] */
    _xmm[4].u64[1] = MEM64(ecx); /* 0x121BA998: movhps xmm4, qword ptr [ecx] */
    eax = MEM32(ebp + 0x18); /* 0x121BA99B: mov eax, dword ptr [ebp + 0x18] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BA99E: mulps xmm4, xmm0 */
    _xmm[6].u64[0] = MEM64(edx); /* 0x121BA9A1: movlps xmm6, qword ptr [edx] */
    _xmm[6].u64[1] = MEM64(eax); /* 0x121BA9A4: movhps xmm6, qword ptr [eax] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BA9A7: mulps xmm6, xmm2 */
    ecx = MEM32(ebp + 0x8); /* 0x121BA9AA: mov ecx, dword ptr [ebp + 8] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA9AD: addps xmm4, xmm6 */
    _xmm[3].u64[0] = _xmm[4].u64[1]; /* 0x121BA9B0: movhlps xmm3, xmm4 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BA9B3: addps xmm4, xmm3 */
    MEM64(ecx) = _xmm[4].u64[0]; /* 0x121BA9B6: movlps qword ptr [ecx], xmm4 */
    eax = MEM32(ebp + 0x8); /* 0x121BA9B9: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BA9BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BA9BD: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BA9C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BA9C5u);

L_121BA9C5:
    edi = edi; /* 0x121BA9C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BA9C7: push ebp */
    ebp = esp; /* 0x121BA9C8: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x18); _xmm[0].u64[1] = 0; /* 0x121BA9CA: movss xmm0, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x121BA9CF: mov eax, dword ptr [ebp + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BA9D2: shufps xmm0, xmm0, 0 */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x121BA9D6: movss xmm2, dword ptr [eax + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x121BA9DB: mov ecx, dword ptr [ebp + 0x10] */
    _xmm[2].u64[1] = MEM64(eax); /* 0x121BA9DE: movhps xmm2, qword ptr [eax] */
    _xmm[1].u64[0] = MEM32(ebp + 0x1C); _xmm[1].u64[1] = 0; /* 0x121BA9E1: movss xmm1, dword ptr [ebp + 0x1c] */
    _xmm[3].u64[0] = MEM32(ecx + 0x8); _xmm[3].u64[1] = 0; /* 0x121BA9E6: movss xmm3, dword ptr [ecx + 8] */
    _xmm[3].u64[1] = MEM64(ecx); /* 0x121BA9EB: movhps xmm3, qword ptr [ecx] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BA9EE: shufps xmm1, xmm1, 0 */
    eax = MEM32(ebp + 0x14); /* 0x121BA9F2: mov eax, dword ptr [ebp + 0x14] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x121BA9F5: subps xmm3, xmm2 */
    _xmm[4].u64[0] = MEM32(eax + 0x8); _xmm[4].u64[1] = 0; /* 0x121BA9F8: movss xmm4, dword ptr [eax + 8] */
    _xmm[4].u64[1] = MEM64(eax); /* 0x121BA9FD: movhps xmm4, qword ptr [eax] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BAA00: mulps xmm3, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x121BAA03: subps xmm4, xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x121BAA06: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BAA09: addps xmm3, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BAA0C: mulps xmm4, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BAA0F: addps xmm3, xmm4 */
    MEM32(eax + 0x8) = _xmm[3].u32[0]; /* 0x121BAA12: movss dword ptr [eax + 8], xmm3 */
    MEM64(eax) = _xmm[3].u64[1]; /* 0x121BAA17: movhps qword ptr [eax], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x121BAA1A: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BAA1D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BAA1E: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BAA26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BAA26u);

L_121BAA26:
    edi = edi; /* 0x121BAA26: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BAA28: push ebp */
    ebp = esp; /* 0x121BAA29: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x18); _xmm[0].u64[1] = 0; /* 0x121BAA2B: movss xmm0, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x121BAA30: mov eax, dword ptr [ebp + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BAA33: shufps xmm0, xmm0, 0 */
    ecx = MEM32(ebp + 0x10); /* 0x121BAA37: mov ecx, dword ptr [ebp + 0x10] */
    _xmm[2] = xmm_ld(eax); /* 0x121BAA3A: movups xmm2, xmmword ptr [eax] */
    _xmm[1].u64[0] = MEM32(ebp + 0x1C); _xmm[1].u64[1] = 0; /* 0x121BAA3D: movss xmm1, dword ptr [ebp + 0x1c] */
    _xmm[3] = xmm_ld(ecx); /* 0x121BAA42: movups xmm3, xmmword ptr [ecx] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BAA45: shufps xmm1, xmm1, 0 */
    eax = MEM32(ebp + 0x14); /* 0x121BAA49: mov eax, dword ptr [ebp + 0x14] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x121BAA4C: subps xmm3, xmm2 */
    _xmm[4] = xmm_ld(eax); /* 0x121BAA4F: movups xmm4, xmmword ptr [eax] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BAA52: mulps xmm3, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x121BAA55: subps xmm4, xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x121BAA58: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BAA5B: addps xmm3, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BAA5E: mulps xmm4, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BAA61: addps xmm3, xmm4 */
    xmm_st(eax, _xmm[3]); /* 0x121BAA64: movups xmmword ptr [eax], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x121BAA67: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BAA6A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BAA6B: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BAA73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BAA73u);

L_121BAA73:
    edi = edi; /* 0x121BAA73: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BAA75: push ebp */
    ebp = esp; /* 0x121BAA76: mov ebp, esp */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x121BAA78: xorps xmm2, xmm2 */
    _xmm[0].u64[0] = MEM32(ebp + 0x18); _xmm[0].u64[1] = 0; /* 0x121BAA7B: movss xmm0, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x121BAA80: mov eax, dword ptr [ebp + 0xc] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BAA83: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x121BAA87: xorps xmm3, xmm3 */
    ecx = MEM32(ebp + 0x10); /* 0x121BAA8A: mov ecx, dword ptr [ebp + 0x10] */
    _xmm[2].u64[1] = MEM64(eax); /* 0x121BAA8D: movhps xmm2, qword ptr [eax] */
    _xmm[1].u64[0] = MEM32(ebp + 0x1C); _xmm[1].u64[1] = 0; /* 0x121BAA90: movss xmm1, dword ptr [ebp + 0x1c] */
    _xmm[3].u64[1] = MEM64(ecx); /* 0x121BAA95: movhps xmm3, qword ptr [ecx] */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] ^ _s.u32[_k]; } /* 0x121BAA98: xorps xmm4, xmm4 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BAA9B: shufps xmm1, xmm1, 0 */
    eax = MEM32(ebp + 0x14); /* 0x121BAA9F: mov eax, dword ptr [ebp + 0x14] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x121BAAA2: subps xmm3, xmm2 */
    _xmm[4].u64[1] = MEM64(eax); /* 0x121BAAA5: movhps xmm4, qword ptr [eax] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BAAA8: mulps xmm3, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x121BAAAB: subps xmm4, xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x121BAAAE: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BAAB1: addps xmm3, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BAAB4: mulps xmm4, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BAAB7: addps xmm3, xmm4 */
    MEM64(eax) = _xmm[3].u64[1]; /* 0x121BAABA: movhps qword ptr [eax], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x121BAABD: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BAAC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BAAC1: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BAAC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BAAC9u);

L_121BAAC9:
    edi = edi; /* 0x121BAAC9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BAACB: push ebp */
    ebp = esp; /* 0x121BAACC: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121BAACE: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x121BAAD1: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebp + 0xC); /* 0x121BAAD4: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0] = xmm_ld(eax); /* 0x121BAAD7: movups xmm0, xmmword ptr [eax] */
    ecx = MEM32(ebp + 0x10); /* 0x121BAADA: mov ecx, dword ptr [ebp + 0x10] */
    _xmm[1].u64[0] = MEM32(ecx + 0x8); _xmm[1].u64[1] = 0; /* 0x121BAADD: movss xmm1, dword ptr [ecx + 8] */
    edx = MEM32(ebp + 0x14); /* 0x121BAAE2: mov edx, dword ptr [ebp + 0x14] */
    _xmm[1].u64[1] = MEM64(ecx); /* 0x121BAAE5: movhps xmm1, qword ptr [ecx] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121BAAE8: movss xmm2, dword ptr [edx + 8] */
    _xmm[4] = _xmm[0]; /* 0x121BAAED: movaps xmm4, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _d.u32[3]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BAAF0: shufps xmm0, xmm0, 0x4e */
    _xmm[3] = _xmm[1]; /* 0x121BAAF4: movaps xmm3, xmm1 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[3]; _xmm[4].u32[1] = _d.u32[3]; _xmm[4].u32[2] = _s.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x121BAAF7: shufps xmm4, xmm4, 0xff */
    _xmm[2].u64[1] = MEM64(edx); /* 0x121BAAFB: movhps xmm2, qword ptr [edx] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BAAFE: mulps xmm3, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BAB01: mulps xmm0, xmm2 */
    _xmm[5].u64[0] = _xmm[3].u64[1]; /* 0x121BAB04: movhlps xmm5, xmm3 */
    _xmm[6].u64[0] = _xmm[0].u64[1]; /* 0x121BAB07: movhlps xmm6, xmm0 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BAB0A: addps xmm3, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BAB0D: addps xmm0, xmm6 */
    { xmm_t _s = _xmm[3], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[1]; _xmm[5].u32[2] = _s.u32[1]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x121BAB10: shufps xmm5, xmm3, 0x55 */
    { xmm_t _s = _xmm[0], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[1]; _xmm[6].u32[2] = _s.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x121BAB14: shufps xmm6, xmm0, 0x55 */
    { float _s = _xmm[5].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x121BAB18: addss xmm3, xmm5 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BAB1C: addss xmm0, xmm6 */
    _xmm[5].u32[0] = _xmm[3].u32[0]; /* 0x121BAB20: movss xmm5, xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x121BAB24: subss xmm5, xmm0 */
    { float _s = _xmm[4].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x121BAB28: addss xmm3, xmm4 */
    _flag_a = SSE_COMI(_xmm[5].f32[0], sse_f32(MEM32(0x121EED64))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x121BAB2C: comiss xmm5, dword ptr [0x121eed64] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_121BAB6B; /* 0x121BAB33: je 0x121bab6b */
L_121BAB35:
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(1.0f / _s); } /* 0x121BAB35: rcpss xmm0, xmm5 */
    _xmm[6].u32[0] = _xmm[0].u32[0]; /* 0x121BAB39: movss xmm6, xmm0 */
    { float _s = _xmm[6].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] + _s); } /* 0x121BAB3D: addss xmm6, xmm6 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BAB41: mulss xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BAB45: mulss xmm5, xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] - _s); } /* 0x121BAB49: subss xmm6, xmm5 */
    { float _s = _xmm[6].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x121BAB4D: mulss xmm3, xmm6 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121BAB51: shufps xmm3, xmm3, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BAB55: subps xmm2, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BAB58: mulps xmm3, xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x121BAB5B: mov eax, dword ptr [ebp + 8] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BAB5E: addps xmm1, xmm3 */
    MEM64(eax) = _xmm[1].u64[1]; /* 0x121BAB61: movhps qword ptr [eax], xmm1 */
    MEM32(eax + 0x8) = _xmm[1].u32[0]; /* 0x121BAB64: movss dword ptr [eax + 8], xmm1 */
    goto L_121BAB72; /* 0x121BAB69: jmp 0x121bab72 */
L_121BAB6B:
    MEM32(ebp + 0x8) = 0; /* 0x121BAB6B: mov dword ptr [ebp + 8], 0 */
L_121BAB72:
    eax = MEM32(ebp + 0x8); /* 0x121BAB72: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BAB75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BAB76: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121BAB7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BAB7Eu);

L_121BAB7E:
    PUSH32(esp, ebx); /* 0x121BAB7E: push ebx */
    ebx = esp; /* 0x121BAB7F: mov ebx, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x121BAB81: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BAB84: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x121BAB87: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BAB8A: push ebp */
    PUSH32(esp, ebp); /* 0x121BAB8B: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BAB8C: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BAB8F: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BAB93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x121BAB95: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x8); /* 0x121BAB98: mov eax, dword ptr [ebx + 8] */
    /* test LO8(eax), 0xFu */ /* 0x121BAB9B: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BABB0; /* 0x121BAB9D: jne 0x121babb0 */
L_121BAB9F:
    _xmm[7] = xmm_ld(eax); /* 0x121BAB9F: movaps xmm7, xmmword ptr [eax] */
    _xmm[1] = xmm_ld(eax + 0x10); /* 0x121BABA2: movaps xmm1, xmmword ptr [eax + 0x10] */
    _xmm[2] = xmm_ld(eax + 0x20); /* 0x121BABA6: movaps xmm2, xmmword ptr [eax + 0x20] */
    _xmm[0] = xmm_ld(eax + 0x30); /* 0x121BABAA: movaps xmm0, xmmword ptr [eax + 0x30] */
    goto L_121BABCF; /* 0x121BABAE: jmp 0x121babcf */
L_121BABB0:
    _xmm[1].u64[0] = MEM64(eax + 0x10); /* 0x121BABB0: movlps xmm1, qword ptr [eax + 0x10] */
    _xmm[7].u64[0] = MEM64(eax); /* 0x121BABB4: movlps xmm7, qword ptr [eax] */
    _xmm[1].u64[1] = MEM64(eax + 0x18); /* 0x121BABB7: movhps xmm1, qword ptr [eax + 0x18] */
    _xmm[7].u64[1] = MEM64(eax + 0x8); /* 0x121BABBB: movhps xmm7, qword ptr [eax + 8] */
    _xmm[2].u64[0] = MEM64(eax + 0x20); /* 0x121BABBF: movlps xmm2, qword ptr [eax + 0x20] */
    _xmm[0].u64[0] = MEM64(eax + 0x30); /* 0x121BABC3: movlps xmm0, qword ptr [eax + 0x30] */
    _xmm[2].u64[1] = MEM64(eax + 0x28); /* 0x121BABC7: movhps xmm2, qword ptr [eax + 0x28] */
    _xmm[0].u64[1] = MEM64(eax + 0x38); /* 0x121BABCB: movhps xmm0, qword ptr [eax + 0x38] */
L_121BABCF:
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BABCF: shufps xmm2, xmm2, 0x39 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BABD3: shufps xmm1, xmm1, 0x39 */
    _xmm[3] = _xmm[0]; /* 0x121BABD7: movaps xmm3, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _d.u32[3]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BABDA: shufps xmm0, xmm0, 0x4e */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BABDE: mulps xmm3, xmm2 */
    _xmm[4] = _xmm[0]; /* 0x121BABE1: movaps xmm4, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BABE4: shufps xmm0, xmm0, 0x39 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BABE8: mulps xmm4, xmm2 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BABEB: mulps xmm2, xmm0 */
    _xmm[0] = _xmm[2]; /* 0x121BABEE: movaps xmm0, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x121BABF1: shufps xmm2, xmm2, 0x4e */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BABF5: subps xmm2, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x121BABF8: movaps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BABFB: shufps xmm1, xmm1, 0x39 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BABFF: mulps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BAC02: shufps xmm1, xmm1, 0x39 */
    _xmm[5] = _xmm[4]; /* 0x121BAC06: movaps xmm5, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[2]; _xmm[4].u32[2] = _s.u32[3]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121BAC09: shufps xmm4, xmm4, 0x39 */
    _xmm[6] = _xmm[3]; /* 0x121BAC0D: movaps xmm6, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BAC10: shufps xmm3, xmm3, 0x4e */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[2]; _xmm[6].u32[2] = _s.u32[3]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121BAC14: shufps xmm6, xmm6, 0x39 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x121BAC18: subps xmm4, xmm3 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x121BAC1B: subps xmm5, xmm6 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BAC1E: mulps xmm0, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BAC21: mulps xmm1, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BAC24: addps xmm0, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BAC27: addps xmm0, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BAC2A: mulps xmm0, xmm7 */
    _xmm[1] = _xmm[0]; /* 0x121BAC2D: movaps xmm1, xmm0 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x121BAC30: movhlps xmm0, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BAC33: addps xmm1, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x121BAC36: movaps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BAC39: shufps xmm1, xmm1, 1 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x121BAC3D: subss xmm0, xmm1 */
    MEM32(ebp + (-0x20)) = _xmm[0].u32[0]; /* 0x121BAC41: movss dword ptr [ebp - 0x20], xmm0 */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x121BAC46: fld dword ptr [ebp - 0x20] */
    esp = ebp; /* 0x121BAC49: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BAC4B: pop ebp */
    esp = ebx; /* 0x121BAC4C: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BAC4E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121BAC4F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121BAC57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BAC57u);

L_121BAC57:
    PUSH32(esp, ebx); /* 0x121BAC57: push ebx */
    ebx = esp; /* 0x121BAC58: mov ebx, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x121BAC5A: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BAC5D: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x121BAC60: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BAC63: push ebp */
    PUSH32(esp, ebp); /* 0x121BAC64: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BAC65: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BAC68: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BAC6C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121BAC6E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0xC); /* 0x121BAC71: mov edx, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x14); /* 0x121BAC74: mov ecx, dword ptr [ebx + 0x14] */
    _xmm[0].u64[0] = MEM32(edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BAC77: movss xmm0, dword ptr [edx + 8] */
    _xmm[1].u64[0] = MEM32(ecx + 0x8); _xmm[1].u64[1] = 0; /* 0x121BAC7C: movss xmm1, dword ptr [ecx + 8] */
    _xmm[0].u64[1] = MEM64(edx); /* 0x121BAC81: movhps xmm0, qword ptr [edx] */
    _xmm[1].u64[1] = MEM64(ecx); /* 0x121BAC84: movhps xmm1, qword ptr [ecx] */
    edx = MEM32(ebx + 0x10); /* 0x121BAC87: mov edx, dword ptr [ebx + 0x10] */
    eax = MEM32(ebx + 0x8); /* 0x121BAC8A: mov eax, dword ptr [ebx + 8] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121BAC8D: movss xmm2, dword ptr [edx + 8] */
    _xmm[2].u64[1] = MEM64(edx); /* 0x121BAC92: movhps xmm2, qword ptr [edx] */
    _xmm[3] = _xmm[0]; /* 0x121BAC95: movaps xmm3, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x121BAC98: subps xmm0, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x121BAC9B: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BAC9E: shufps xmm0, xmm0, 0x78 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[2]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BACA2: shufps xmm1, xmm1, 0x63 */
    _xmm[4] = _xmm[3]; /* 0x121BACA6: movaps xmm4, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x121BACA9: subps xmm3, xmm2 */
    _xmm[2] = xmm_ld(0x12017EE0); /* 0x121BACAC: movaps xmm2, xmmword ptr [0x12017ee0] */
    _xmm[5] = _xmm[3]; /* 0x121BACB3: movaps xmm5, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[2]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BACB6: shufps xmm3, xmm3, 0x63 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[3]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x121BACBA: shufps xmm5, xmm5, 0x78 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BACBE: mulps xmm0, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BACC1: mulps xmm5, xmm1 */
    _xmm[1] = xmm_ld(0x12017EF0); /* 0x121BACC4: movaps xmm1, xmmword ptr [0x12017ef0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x121BACCB: subps xmm0, xmm5 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _d.u32[3]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121BACCE: shufps xmm4, xmm4, 0xe */
    _xmm[3] = _xmm[0]; /* 0x121BACD2: movaps xmm3, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BACD5: mulps xmm0, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x121BACD8: movaps xmm5, xmm0 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x121BACDB: movhlps xmm0, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BACDE: addps xmm5, xmm0 */
    _xmm[0] = _xmm[5]; /* 0x121BACE1: movaps xmm0, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121BACE4: shufps xmm5, xmm5, 1 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BACE8: addss xmm0, xmm5 */
    _xmm[5] = _xmm[0]; /* 0x121BACEC: movaps xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BACEF: rsqrtss xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BACF3: mulss xmm1, xmm0 */
    _xmm[6] = _xmm[5]; /* 0x121BACF7: movaps xmm6, xmm5 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BACFA: mulss xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BACFE: mulss xmm5, xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x121BAD02: subss xmm2, xmm5 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BAD06: mulss xmm1, xmm2 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BAD0A: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BAD0E: mulps xmm3, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BAD11: mulps xmm4, xmm3 */
    xmm_st(eax, _xmm[3]); /* 0x121BAD14: movups xmmword ptr [eax], xmm3 */
    _xmm[6].u64[0] = _xmm[4].u64[1]; /* 0x121BAD17: movhlps xmm6, xmm4 */
    _xmm[0] = _xmm[4]; /* 0x121BAD1A: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[1]; _xmm[4].u32[2] = _s.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121BAD1D: shufps xmm4, xmm4, 0x55 */
    { float _s = _xmm[4].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] + _s); } /* 0x121BAD21: addss xmm6, xmm4 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BAD25: addss xmm0, xmm6 */
    { xmm_t _s = xmm_ld(0x121D8FD0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x121BAD29: xorps xmm0, xmmword ptr [0x121d8fd0] */
    MEM32(eax + 0xC) = _xmm[0].u32[0]; /* 0x121BAD30: movss dword ptr [eax + 0xc], xmm0 */
    esp = ebp; /* 0x121BAD35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BAD37: pop ebp */
    esp = ebx; /* 0x121BAD38: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BAD3A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BAD3B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121BAD44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BAD44u);

L_121BAD44:
    edi = edi; /* 0x121BAD44: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BAD46: push ebp */
    ebp = esp; /* 0x121BAD47: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121BAD49: push ebx */
    eax = MEM32(ebp + 0x10); /* 0x121BAD4A: mov eax, dword ptr [ebp + 0x10] */
    _xmm[1] = xmm_ld(eax); /* 0x121BAD4D: movups xmm1, xmmword ptr [eax] */
    _xmm[2] = _xmm[1]; /* 0x121BAD50: movaps xmm2, xmm1 */
    ebx = 0x121D90D0; /* 0x121BAD53: lea ebx, [0x121d90d0] */
    { xmm_t _s = xmm_ld(ebx + 0x40); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x121BAD59: andps xmm2, xmmword ptr [ebx + 0x40] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BAD5D: mulps xmm2, xmm2 */
    _xmm[3].u64[0] = _xmm[2].u64[1]; /* 0x121BAD60: movhlps xmm3, xmm2 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BAD63: addps xmm3, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x121BAD66: movaps xmm2, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BAD69: shufps xmm2, xmm2, 1 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x121BAD6D: addss xmm2, xmm3 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x121BAD71: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x121BAD74: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_121BADAA; /* 0x121BAD77: je 0x121badaa */
L_121BAD79:
    _xmm[6] = _xmm[2]; /* 0x121BAD79: movaps xmm6, xmm2 */
    { float _s = _xmm[6].f32[0]; _xmm[2].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BAD7C: rsqrtss xmm2, xmm6 */
    _xmm[3] = _xmm[2]; /* 0x121BAD80: movaps xmm3, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BAD83: mulss xmm6, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BAD87: mulss xmm6, xmm2 */
    { float _s = sse_f32(MEM32(0x12017EF0)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BAD8B: mulss xmm2, dword ptr [0x12017ef0] */
    _xmm[3].u64[0] = MEM32(0x12017EE0); _xmm[3].u64[1] = 0; /* 0x121BAD93: movss xmm3, dword ptr [0x12017ee0] */
    { float _s = _xmm[6].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x121BAD9B: subss xmm3, xmm6 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BAD9F: mulss xmm2, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BADA3: shufps xmm2, xmm2, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BADA7: mulps xmm2, xmm1 */
L_121BADAA:
    ecx = MEM32(ebp + 0xC); /* 0x121BADAA: mov ecx, dword ptr [ebp + 0xc] */
    _xmm[4] = xmm_ld(ecx); /* 0x121BADAD: movups xmm4, xmmword ptr [ecx] */
    _xmm[5] = _xmm[4]; /* 0x121BADB0: movaps xmm5, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BADB3: mulps xmm5, xmm2 */
    _xmm[3].u64[0] = _xmm[5].u64[1]; /* 0x121BADB6: movhlps xmm3, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BADB9: addps xmm5, xmm3 */
    _xmm[3] = _xmm[5]; /* 0x121BADBC: movaps xmm3, xmm5 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121BADBF: shufps xmm3, xmm3, 1 */
    { float _s = _xmm[3].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x121BADC3: addss xmm5, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121BADC7: shufps xmm5, xmm5, 0 */
    { xmm_t _s = xmm_ld(ebx); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x121BADCB: xorps xmm2, xmmword ptr [ebx] */
    _xmm[0] = _xmm[2]; /* 0x121BADCE: movaps xmm0, xmm2 */
    _xmm[1] = _xmm[2]; /* 0x121BADD1: movaps xmm1, xmm2 */
    _xmm[3] = _xmm[2]; /* 0x121BADD4: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BADD7: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BADDB: shufps xmm1, xmm1, 0x55 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BADDF: shufps xmm2, xmm2, 0xaa */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BADE3: shufps xmm3, xmm3, 0xff */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BADE7: mulps xmm0, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BADEA: mulps xmm1, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BADED: mulps xmm2, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BADF0: mulps xmm3, xmm4 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BADF3: addss xmm0, xmm5 */
    _xmm[6] = _xmm[5]; /* 0x121BADF7: movaps xmm6, xmm5 */
    _xmm[7] = _xmm[5]; /* 0x121BADFA: movaps xmm7, xmm5 */
    { xmm_t _s = xmm_ld(ebx + 0x10); for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x121BADFD: andps xmm5, xmmword ptr [ebx + 0x10] */
    { xmm_t _s = xmm_ld(ebx + 0x20); for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] & _s.u32[_k]; } /* 0x121BAE01: andps xmm6, xmmword ptr [ebx + 0x20] */
    { xmm_t _s = xmm_ld(ebx + 0x30); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x121BAE05: andps xmm7, xmmword ptr [ebx + 0x30] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BAE09: addps xmm1, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BAE0C: addps xmm2, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BAE0F: addps xmm3, xmm7 */
    edx = MEM32(ebp + 0x8); /* 0x121BAE12: mov edx, dword ptr [ebp + 8] */
    MEM64(edx) = _xmm[0].u64[0]; /* 0x121BAE15: movlps qword ptr [edx], xmm0 */
    MEM64(edx + 0x8) = _xmm[0].u64[1]; /* 0x121BAE18: movhps qword ptr [edx + 8], xmm0 */
    MEM64(edx + 0x10) = _xmm[1].u64[0]; /* 0x121BAE1C: movlps qword ptr [edx + 0x10], xmm1 */
    MEM64(edx + 0x18) = _xmm[1].u64[1]; /* 0x121BAE20: movhps qword ptr [edx + 0x18], xmm1 */
    MEM64(edx + 0x20) = _xmm[2].u64[0]; /* 0x121BAE24: movlps qword ptr [edx + 0x20], xmm2 */
    MEM64(edx + 0x28) = _xmm[2].u64[1]; /* 0x121BAE28: movhps qword ptr [edx + 0x28], xmm2 */
    MEM64(edx + 0x30) = _xmm[3].u64[0]; /* 0x121BAE2C: movlps qword ptr [edx + 0x30], xmm3 */
    MEM64(edx + 0x38) = _xmm[3].u64[1]; /* 0x121BAE30: movhps qword ptr [edx + 0x38], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x121BAE34: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x121BAE37: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121BAE38: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BAE39: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BAE41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BAE41u);

L_121BAE41:
    PUSH32(esp, ebx); /* 0x121BAE41: push ebx */
    ebx = esp; /* 0x121BAE42: mov ebx, esp */
    PUSH32(esp, ebp); /* 0x121BAE44: push ebp */
    PUSH32(esp, ebp); /* 0x121BAE45: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BAE46: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BAE49: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BAE4D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121BAE4F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0xC); /* 0x121BAE52: mov edx, dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x8); /* 0x121BAE55: mov eax, dword ptr [ebx + 8] */
    _xmm[0].u64[1] = MEM64(edx + 0x8); /* 0x121BAE58: movhps xmm0, qword ptr [edx + 8] */
    _xmm[0].u64[0] = MEM64(edx); /* 0x121BAE5C: movlps xmm0, qword ptr [edx] */
    _xmm[1] = xmm_ld(0x121D8FE0); /* 0x121BAE5F: movaps xmm1, xmmword ptr [0x121d8fe0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x121BAE66: andps xmm1, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BAE69: mulps xmm1, xmm1 */
    _xmm[2].u64[0] = MEM32(0x12017EE0); _xmm[2].u64[1] = 0; /* 0x121BAE6C: movss xmm2, dword ptr [0x12017ee0] */
    _xmm[3].u64[0] = MEM32(0x12017EF0); _xmm[3].u64[1] = 0; /* 0x121BAE74: movss xmm3, dword ptr [0x12017ef0] */
    _xmm[4] = _xmm[1]; /* 0x121BAE7C: movaps xmm4, xmm1 */
    _xmm[1].u64[0] = _xmm[1].u64[1]; /* 0x121BAE7F: movhlps xmm1, xmm1 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BAE82: addps xmm4, xmm1 */
    _xmm[1] = _xmm[4]; /* 0x121BAE85: movaps xmm1, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121BAE88: shufps xmm4, xmm4, 1 */
    { float _s = _xmm[4].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x121BAE8C: addss xmm1, xmm4 */
    _xmm[4] = xmm_ld(0x121D8FF0); /* 0x121BAE90: movaps xmm4, xmmword ptr [0x121d8ff0] */
    _xmm[5] = _xmm[1]; /* 0x121BAE97: movaps xmm5, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BAE9A: rsqrtss xmm1, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BAE9E: mulss xmm5, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BAEA2: mulss xmm5, xmm1 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x121BAEA6: subss xmm2, xmm5 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x121BAEAA: mulss xmm3, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x121BAEAE: mulss xmm3, xmm2 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121BAEB2: shufps xmm3, xmm3, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BAEB6: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BAEB9: mulps xmm4, xmm0 */
    _xmm[1] = _xmm[0]; /* 0x121BAEBC: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BAEBF: shufps xmm0, xmm0, 0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BAEC3: mulps xmm0, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D9030)); float _s1 = sse_f32(MEM32(0x121D9030 + 4)); float _s2 = sse_f32(MEM32(0x121D9030 + 8)); float _s3 = sse_f32(MEM32(0x121D9030 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BAEC6: addps xmm0, xmmword ptr [0x121d9030] */
    _xmm[2] = _xmm[1]; /* 0x121BAECD: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x121BAED0: shufps xmm1, xmm1, 0xff */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BAED4: mulps xmm1, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D9000)); float _s1 = sse_f32(MEM32(0x121D9000 + 4)); float _s2 = sse_f32(MEM32(0x121D9000 + 8)); float _s3 = sse_f32(MEM32(0x121D9000 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BAED7: addps xmm1, xmmword ptr [0x121d9000] */
    _xmm[3] = _xmm[2]; /* 0x121BAEDE: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BAEE1: shufps xmm2, xmm2, 0xaa */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BAEE5: mulps xmm2, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D9010)); float _s1 = sse_f32(MEM32(0x121D9010 + 4)); float _s2 = sse_f32(MEM32(0x121D9010 + 8)); float _s3 = sse_f32(MEM32(0x121D9010 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BAEE8: addps xmm2, xmmword ptr [0x121d9010] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[1]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BAEEF: shufps xmm3, xmm3, 0x55 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BAEF3: mulps xmm4, xmm3 */
    { float _s0 = sse_f32(MEM32(0x121D9020)); float _s1 = sse_f32(MEM32(0x121D9020 + 4)); float _s2 = sse_f32(MEM32(0x121D9020 + 8)); float _s3 = sse_f32(MEM32(0x121D9020 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BAEF6: addps xmm4, xmmword ptr [0x121d9020] */
    xmm_st(eax, _xmm[0]); /* 0x121BAEFD: movups xmmword ptr [eax], xmm0 */
    xmm_st(eax + 0x10, _xmm[4]); /* 0x121BAF00: movups xmmword ptr [eax + 0x10], xmm4 */
    xmm_st(eax + 0x20, _xmm[2]); /* 0x121BAF04: movups xmmword ptr [eax + 0x20], xmm2 */
    xmm_st(eax + 0x30, _xmm[1]); /* 0x121BAF08: movups xmmword ptr [eax + 0x30], xmm1 */
    esp = ebp; /* 0x121BAF0C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BAF0E: pop ebp */
    esp = ebx; /* 0x121BAF0F: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BAF11: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121BAF12: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121BAF1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BAF1Au);

L_121BAF1A:
    edi = edi; /* 0x121BAF1A: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BAF1C: push ebx */
    ebx = esp; /* 0x121BAF1D: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BAF1F: push ecx */
    PUSH32(esp, ecx); /* 0x121BAF20: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BAF21: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BAF24: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BAF27: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BAF28: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BAF2B: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BAF2F: mov ebp, esp */
    ecx = MEM32(ebx + 0x10); /* 0x121BAF31: mov ecx, dword ptr [ebx + 0x10] */
    eax = MEM32(ebx + 0xC); /* 0x121BAF34: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121BAF37: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test LO8(ecx), 0xFu */ /* 0x121BAF3A: test cl, 0xf */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BAF77; /* 0x121BAF3D: jne 0x121baf77 */
L_121BAF3F:
    _xmm[0].u64[0] = MEM64(eax); /* 0x121BAF3F: movlps xmm0, qword ptr [eax] */
    _xmm[1] = _xmm[0]; /* 0x121BAF42: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BAF45: shufps xmm1, xmm0, 0x55 */
    { float _s0 = sse_f32(MEM32(ecx + 0x10)); float _s1 = sse_f32(MEM32(ecx + 0x10 + 4)); float _s2 = sse_f32(MEM32(ecx + 0x10 + 8)); float _s3 = sse_f32(MEM32(ecx + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BAF49: mulps xmm1, xmmword ptr [ecx + 0x10] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BAF4D: shufps xmm0, xmm0, 0 */
    { float _s0 = sse_f32(MEM32(ecx)); float _s1 = sse_f32(MEM32(ecx + 4)); float _s2 = sse_f32(MEM32(ecx + 8)); float _s3 = sse_f32(MEM32(ecx + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BAF51: mulps xmm0, xmmword ptr [ecx] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BAF54: addps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + 0x8); _xmm[0].u64[1] = 0; /* 0x121BAF57: movss xmm0, dword ptr [eax + 8] */
    eax = MEM32(ebx + 0x8); /* 0x121BAF5C: mov eax, dword ptr [ebx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BAF5F: shufps xmm0, xmm0, 0 */
    { float _s0 = sse_f32(MEM32(ecx + 0x20)); float _s1 = sse_f32(MEM32(ecx + 0x20 + 4)); float _s2 = sse_f32(MEM32(ecx + 0x20 + 8)); float _s3 = sse_f32(MEM32(ecx + 0x20 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BAF63: mulps xmm0, xmmword ptr [ecx + 0x20] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BAF67: addps xmm1, xmm0 */
    MEM64(eax) = _xmm[1].u64[0]; /* 0x121BAF6A: movlps qword ptr [eax], xmm1 */
    _xmm[1].u64[0] = _xmm[1].u64[1]; /* 0x121BAF6D: movhlps xmm1, xmm1 */
    MEM32(eax + 0x8) = _xmm[1].u32[0]; /* 0x121BAF70: movss dword ptr [eax + 8], xmm1 */
    goto L_121BAFB6; /* 0x121BAF75: jmp 0x121bafb6 */
L_121BAF77:
    _xmm[1].u64[0] = MEM64(eax); /* 0x121BAF77: movlps xmm1, qword ptr [eax] */
    _xmm[0] = xmm_ld(ecx + 0x10); /* 0x121BAF7A: movups xmm0, xmmword ptr [ecx + 0x10] */
    _xmm[2] = _xmm[1]; /* 0x121BAF7E: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[1]; _xmm[2].u32[2] = _s.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x121BAF81: shufps xmm2, xmm1, 0x55 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BAF85: mulps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ecx); /* 0x121BAF88: movups xmm0, xmmword ptr [ecx] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BAF8B: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BAF8F: mulps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + 0x8); _xmm[0].u64[1] = 0; /* 0x121BAF92: movss xmm0, dword ptr [eax + 8] */
    eax = MEM32(ebx + 0x8); /* 0x121BAF97: mov eax, dword ptr [ebx + 8] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BAF9A: addps xmm2, xmm1 */
    _xmm[1] = xmm_ld(ecx + 0x20); /* 0x121BAF9D: movups xmm1, xmmword ptr [ecx + 0x20] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BAFA1: shufps xmm0, xmm0, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BAFA5: mulps xmm1, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BAFA8: addps xmm2, xmm1 */
    MEM64(eax) = _xmm[2].u64[0]; /* 0x121BAFAB: movlps qword ptr [eax], xmm2 */
    _xmm[2].u64[0] = _xmm[2].u64[1]; /* 0x121BAFAE: movhlps xmm2, xmm2 */
    MEM32(eax + 0x8) = _xmm[2].u32[0]; /* 0x121BAFB1: movss dword ptr [eax + 8], xmm2 */
L_121BAFB6:
    esp = ebp; /* 0x121BAFB6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BAFB8: pop ebp */
    esp = ebx; /* 0x121BAFB9: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BAFBB: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BAFBC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BAFC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BAFC4u);

L_121BAFC4:
    edi = edi; /* 0x121BAFC4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BAFC6: push ebp */
    ebp = esp; /* 0x121BAFC7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121BAFC9: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x121BAFCA: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x12017F04)); /* 0x121BAFCD: fld dword ptr [0x12017f04] */
    _xmm[3].u64[0] = MEM32(eax); _xmm[3].u64[1] = 0; /* 0x121BAFD3: movss xmm3, dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x121BAFD7: fstp dword ptr [ebp + 0xc] */
    _xmm[4].u64[0] = MEM32(eax + 0x4); _xmm[4].u64[1] = 0; /* 0x121BAFDA: movss xmm4, dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x8); /* 0x121BAFDF: mov eax, dword ptr [ebp + 8] */
    _xmm[0] = _xmm[4]; /* 0x121BAFE2: movaps xmm0, xmm4 */
    { float _s = _xmm[4].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BAFE5: mulss xmm0, xmm4 */
    _xmm[1] = _xmm[3]; /* 0x121BAFE9: movaps xmm1, xmm3 */
    { float _s = _xmm[3].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BAFEC: mulss xmm1, xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x121BAFF0: addss xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + 0xC); _xmm[0].u64[1] = 0; /* 0x121BAFF4: movss xmm0, dword ptr [ebp + 0xc] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x121BAFF9: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_121BB00C; /* 0x121BAFFC: jbe 0x121bb00c */
L_121BAFFE:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x121BAFFE: xorps xmm0, xmm0 */
    MEM32(eax) = _xmm[0].u32[0]; /* 0x121BB001: movss dword ptr [eax], xmm0 */
    MEM32(eax + 0x4) = _xmm[0].u32[0]; /* 0x121BB005: movss dword ptr [eax + 4], xmm0 */
    goto L_121BB057; /* 0x121BB00A: jmp 0x121bb057 */
L_121BB00C:
    fp_push(*(float*)&MEM32(0x12017ED0)); /* 0x121BB00C: fld dword ptr [0x12017ed0] */
    _xmm[2] = _xmm[1]; /* 0x121BB012: movaps xmm2, xmm1 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x121BB015: fstp dword ptr [ebp + 0xc] */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BB018: rsqrtss xmm2, xmm2 */
    fp_push(*(float*)&MEM32(0x120019B0)); /* 0x121BB01C: fld dword ptr [0x120019b0] */
    _xmm[0].u64[0] = MEM32(ebp + 0xC); _xmm[0].u64[1] = 0; /* 0x121BB022: movss xmm0, dword ptr [ebp + 0xc] */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BB027: mulss xmm1, xmm2 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121BB02B: fstp dword ptr [ebp - 4] */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BB02E: mulss xmm1, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x121BB032: subss xmm0, xmm1 */
    _xmm[1].u64[0] = MEM32(ebp + (-0x4)); _xmm[1].u64[1] = 0; /* 0x121BB036: movss xmm1, dword ptr [ebp - 4] */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BB03B: mulss xmm1, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BB03F: mulss xmm1, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x121BB043: movaps xmm0, xmm1 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BB046: mulss xmm0, xmm3 */
    MEM32(eax) = _xmm[0].u32[0]; /* 0x121BB04A: movss dword ptr [eax], xmm0 */
    { float _s = _xmm[4].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BB04E: mulss xmm1, xmm4 */
    MEM32(eax + 0x4) = _xmm[1].u32[0]; /* 0x121BB052: movss dword ptr [eax + 4], xmm1 */
L_121BB057:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BB057: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121BB058: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121BB060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BB060u);

L_121BB060:
    edi = edi; /* 0x121BB060: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BB062: push ebp */
    ebp = esp; /* 0x121BB063: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121BB065: push ebx */
    eax = MEM32(ebp + 0x10); /* 0x121BB066: mov eax, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0xC); /* 0x121BB069: mov ebx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x121BB06C: mov edx, dword ptr [ebp + 8] */
    _xmm[1].u64[0] = MEM64(eax); /* 0x121BB06F: movlps xmm1, qword ptr [eax] */
    _xmm[1].u64[1] = MEM64(eax + 0x8); /* 0x121BB072: movhps xmm1, qword ptr [eax + 8] */
    _xmm[0].u64[0] = MEM64(ebx); /* 0x121BB076: movlps xmm0, qword ptr [ebx] */
    _xmm[0].u64[1] = MEM64(ebx + 0x8); /* 0x121BB079: movhps xmm0, qword ptr [ebx + 8] */
    _xmm[2] = _xmm[1]; /* 0x121BB07D: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x121BB080: shufps xmm1, xmm1, 0xff */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BB084: mulps xmm1, xmm0 */
    _xmm[3] = _xmm[2]; /* 0x121BB087: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BB08A: shufps xmm2, xmm2, 0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[3]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BB08E: shufps xmm0, xmm0, 0x1b */
    { xmm_t _s = xmm_ld(0x12017F30); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x121BB092: xorps xmm2, xmmword ptr [0x12017f30] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BB099: mulps xmm2, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BB09C: addps xmm1, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x121BB09F: movaps xmm2, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[1]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BB0A2: shufps xmm3, xmm3, 0x55 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x121BB0A6: shufps xmm0, xmm0, 0xb1 */
    { xmm_t _s = xmm_ld(0x12017F20); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x121BB0AA: xorps xmm3, xmmword ptr [0x12017f20] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BB0B1: mulps xmm3, xmm0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BB0B4: addps xmm1, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BB0B7: shufps xmm2, xmm2, 0xaa */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[3]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BB0BB: shufps xmm0, xmm0, 0x1b */
    { xmm_t _s = xmm_ld(0x12017F10); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x121BB0BF: xorps xmm2, xmmword ptr [0x12017f10] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BB0C6: mulps xmm2, xmm0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BB0C9: addps xmm1, xmm2 */
    MEM64(edx) = _xmm[1].u64[0]; /* 0x121BB0CC: movlps qword ptr [edx], xmm1 */
    MEM64(edx + 0x8) = _xmm[1].u64[1]; /* 0x121BB0CF: movhps qword ptr [edx + 8], xmm1 */
    eax = MEM32(ebp + 0x8); /* 0x121BB0D3: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x121BB0D6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121BB0D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BB0D8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BB0E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BB0E0u);

L_121BB0E0:
    edi = edi; /* 0x121BB0E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BB0E2: push ebp */
    ebp = esp; /* 0x121BB0E3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BB0E5: mov eax, dword ptr [ebp + 0xc] */
    _xmm[3].u64[0] = MEM64(eax); _xmm[3].u64[1] = 0; /* 0x121BB0E8: movsd xmm3, qword ptr [eax] */
    _xmm[3].u64[1] = MEM64(eax + 0x8); /* 0x121BB0EC: movhps xmm3, qword ptr [eax + 8] */
    eax = MEM32(ebp + 0x8); /* 0x121BB0F0: mov eax, dword ptr [ebp + 8] */
    _xmm[0] = _xmm[3]; /* 0x121BB0F3: movaps xmm0, xmm3 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB0F6: mulps xmm0, xmm3 */
    _xmm[1] = _xmm[0]; /* 0x121BB0F9: movaps xmm1, xmm0 */
    _xmm[1].u64[0] = _xmm[0].u64[1]; /* 0x121BB0FC: movhlps xmm1, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BB0FF: addps xmm1, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x121BB102: movaps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[1]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BB105: shufps xmm0, xmm1, 0x55 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x121BB109: addss xmm1, xmm0 */
    _xmm[2] = _xmm[1]; /* 0x121BB10D: movaps xmm2, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(1.0f / _s); } /* 0x121BB110: rcpss xmm2, xmm2 */
    _xmm[0] = _xmm[2]; /* 0x121BB114: movaps xmm0, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BB117: mulss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BB11B: mulss xmm0, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x121BB11F: addss xmm2, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x121BB123: subss xmm2, xmm0 */
    _xmm[0] = xmm_ld(0x121D9120); /* 0x121BB127: movaps xmm0, xmmword ptr [0x121d9120] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BB12E: shufps xmm2, xmm2, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB132: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BB135: mulps xmm2, xmm0 */
    xmm_st(eax, _xmm[2]); /* 0x121BB138: movups xmmword ptr [eax], xmm2 */
    ebp = POP32_VAL(esp); /* 0x121BB13B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121BB13C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121BB144(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BB144u);

L_121BB144:
    edi = edi; /* 0x121BB144: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BB146: push ebx */
    ebx = esp; /* 0x121BB147: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BB149: push ecx */
    PUSH32(esp, ecx); /* 0x121BB14A: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BB14B: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BB14E: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BB151: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BB152: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BB155: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BB159: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x121BB15B: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _xmm[2].u64[0] = MEM32(ebx + 0x14); _xmm[2].u64[1] = 0; /* 0x121BB15E: movss xmm2, dword ptr [ebx + 0x14] */
    _xmm[0].u64[0] = MEM32(ebx + 0x10); _xmm[0].u64[1] = 0; /* 0x121BB163: movss xmm0, dword ptr [ebx + 0x10] */
    _xmm[1].u64[0] = MEM32(ebx + 0xC); _xmm[1].u64[1] = 0; /* 0x121BB168: movss xmm1, dword ptr [ebx + 0xc] */
    eax = ebp + (-0x20); /* 0x121BB16D: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x121BB170: push eax */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x121BB171: unpcklps xmm2, xmm0 */
    eax = ebp + (-0x10); /* 0x121BB174: lea eax, [ebp - 0x10] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BB177: unpcklps xmm1, xmm1 */
    _xmm[2].u64[1] = _xmm[1].u64[0]; /* 0x121BB17A: movlhps xmm2, xmm1 */
    xmm_st(ebp + (-0x10), _xmm[2]); /* 0x121BB17D: movaps xmmword ptr [ebp - 0x10], xmm2 */
    _xmm[0] = xmm_ld(0x12018090); /* 0x121BB181: movaps xmm0, xmmword ptr [0x12018090] */
    PUSH32(esp, eax); /* 0x121BB188: push eax */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB189: mulps xmm0, xmm2 */
    PUSH32(esp, eax); /* 0x121BB18C: push eax */
    xmm_st(ebp + (-0x10), _xmm[0]); /* 0x121BB18D: movaps xmmword ptr [ebp - 0x10], xmm0 */
    RECOMP_CALL(sub_121BC330); /* 0x121BB191: call 0x121bc330 */
    RECOMP_FLAGS_IN();
    _xmm[2] = xmm_ld(ebp + (-0x10)); /* 0x121BB196: movaps xmm2, xmmword ptr [ebp - 0x10] */
    eax = MEM32(ebx + 0x8); /* 0x121BB19A: mov eax, dword ptr [ebx + 8] */
    _xmm[4] = _xmm[2]; /* 0x121BB19D: movaps xmm4, xmm2 */
    { xmm_t _s = xmm_ld(ebp + (-0x20)), _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[2]; _xmm[4].u32[2] = _s.u32[1]; _xmm[4].u32[3] = _s.u32[2]; } /* 0x121BB1A0: shufps xmm4, xmmword ptr [ebp - 0x20], 0x99 */
    { xmm_t _s = xmm_ld(ebp + (-0x20)), _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BB1A5: shufps xmm2, xmmword ptr [ebp - 0x20], 0 */
    _xmm[3] = _xmm[4]; /* 0x121BB1AA: movaps xmm3, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[1]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BB1AD: shufps xmm3, xmm4, 0xf7 */
    _xmm[1] = _xmm[3]; /* 0x121BB1B1: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BB1B4: shufps xmm2, xmm2, 0x8a */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BB1B8: shufps xmm3, xmm3, 0x51 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[2]; _xmm[4].u32[2] = _s.u32[2]; _xmm[4].u32[3] = _s.u32[2]; } /* 0x121BB1BC: shufps xmm4, xmm4, 0xa8 */
    _xmm[0] = _xmm[2]; /* 0x121BB1C0: movaps xmm0, xmm2 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BB1C3: mulps xmm1, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BB1C6: mulps xmm1, xmm4 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x121BB1C9: shufps xmm0, xmm2, 0x8a */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BB1CD: mulps xmm3, xmm0 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121BB1D0: shufps xmm4, xmm4, 1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BB1D4: mulps xmm3, xmm4 */
    { xmm_t _s = xmm_ld(0x12018080); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x121BB1D7: xorps xmm3, xmmword ptr [0x12018080] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BB1DE: addps xmm3, xmm1 */
    xmm_st(eax, _xmm[3]); /* 0x121BB1E1: movups xmmword ptr [eax], xmm3 */
    esp = ebp; /* 0x121BB1E4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BB1E6: pop ebp */
    esp = ebx; /* 0x121BB1E7: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BB1E9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BB1EA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121BB1F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BB1F2u);

L_121BB1F2:
    edi = edi; /* 0x121BB1F2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BB1F4: push ebp */
    ebp = esp; /* 0x121BB1F5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121BB1F7: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x121BB1F8: mov eax, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x121BB1FB: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x121BB1FB: shl eax, 2 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x121BB1FE: mov dword ptr [ebp - 4], ecx */
    /* test eax, eax */ /* 0x121BB201: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BB24B; /* 0x121BB203: je 0x121bb24b */
L_121BB205:
    edx = MEM32(ebp + 0x8); /* 0x121BB205: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121BB208: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x121BB209: push esi */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x121BB20A: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x121BB20A: shr eax, 2 */
    PUSH32(esp, edi); /* 0x121BB20D: push edi */
    esi = ecx; /* 0x121BB20E: mov esi, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121BB210: inc eax */
    _flag_k = FK_INC;
L_121BB211:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x121BB211: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121BB23A; /* 0x121BB215: jbe 0x121bb23a */
L_121BB217:
    ecx = edx; /* 0x121BB217: mov ecx, edx */
    edx = MEM32(ebp + 0x10); /* 0x121BB219: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0xC) = edx; /* 0x121BB21C: mov dword ptr [ebp + 0xc], edx */
    edx = MEM32(ebp + 0x8); /* 0x121BB21F: mov edx, dword ptr [ebp + 8] */
    edi = esi; /* 0x121BB222: mov edi, esi */
L_121BB224:
    _xmm[0].u64[0] = MEM32(ecx); _xmm[0].u64[1] = 0; /* 0x121BB224: movss xmm0, dword ptr [ecx] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BB228: shufps xmm0, xmm0, 0 */
    xmm_st(edi, _xmm[0]); /* 0x121BB22C: movaps xmmword ptr [edi], xmm0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x121BB22F: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x121BB232: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x121BB235: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BB224; /* 0x121BB238: jne 0x121bb224 */
L_121BB23A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x121BB23A: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40u; /* 0x121BB23D: add esi, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121BB240: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = edx; /* 0x121BB241: mov dword ptr [ebp + 8], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BB211; /* 0x121BB244: jne 0x121bb211 */
L_121BB246:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BB246: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121BB249: pop edi */
    esi = POP32_VAL(esp); /* 0x121BB24A: pop esi */
L_121BB24B:
    eax = ecx; /* 0x121BB24B: mov eax, ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BB24D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BB24E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BB256(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BB256u);

L_121BB256:
    edi = edi; /* 0x121BB256: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BB258: push ebx */
    ebx = esp; /* 0x121BB259: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BB25B: push ecx */
    PUSH32(esp, ecx); /* 0x121BB25C: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BB25D: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BB260: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BB263: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BB264: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BB267: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BB26B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BB26D: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BB273: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BB278: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BB27A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BB27D: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BB280: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BB283: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BB286: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BB28C: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BB28F: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BB290: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BB293: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BB294: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BB29A: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BB29D: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xCu); /* 0x121BB2A3: push 0xc */
    eax = esi; /* 0x121BB2A5: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BB2A7: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BB2A8: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BB2AB: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BB2AD: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BB2AF: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BB2B1: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BB2B3: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BB2B3: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BB2B6: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BB2BC: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BB2C2: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BB2C5: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BB2CB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BB498; /* 0x121BB2CD: je 0x121bb498 */
L_121BB2D3:
    PUSH32(esp, 4); /* 0x121BB2D3: push 4 */
    PUSH32(esp, 4); /* 0x121BB2D5: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BB2D7: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BB2DD: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BB2E3: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BB2E8: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BB2EE: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BB2F4: imul edx, edx, 3 */
    eax = ecx; /* 0x121BB2F7: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BB2F9: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BB2FC: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BB302: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BB308: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BB30E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BB492; /* 0x121BB310: je 0x121bb492 */
L_121BB316:
    _xmm[3] = xmm_ld(ebp + (-0x80)); /* 0x121BB316: movaps xmm3, xmmword ptr [ebp - 0x80] */
    _xmm[4] = xmm_ld(ebp + (-0x90)); /* 0x121BB31A: movaps xmm4, xmmword ptr [ebp - 0x90] */
    _xmm[7] = xmm_ld(ebp + (-0x110)); /* 0x121BB321: movaps xmm7, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BB328: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BB32E: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BB32E: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BB331: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BB337: mov ecx, dword ptr [ebp - 0x114] */
L_121BB33D:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BB33D: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[2].u64[0] = MEM64(edx); _xmm[2].u64[1] = 0; /* 0x121BB342: movsd xmm2, qword ptr [edx] */
    _xmm[2].u64[1] = MEM64(esi + edx); /* 0x121BB346: movhps xmm2, qword ptr [esi + edx] */
    _xmm[1].u64[0] = MEM32(edx + esi * 2 + 0x8); _xmm[1].u64[1] = 0; /* 0x121BB34A: movss xmm1, dword ptr [edx + esi*2 + 8] */
    _xmm[5].u64[0] = MEM32(edx + 0x8); _xmm[5].u64[1] = 0; /* 0x121BB350: movss xmm5, dword ptr [edx + 8] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BB355: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BB35B: movhps xmm0, qword ptr [edx + eax] */
    _xmm[6] = _xmm[2]; /* 0x121BB35F: movaps xmm6, xmm2 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[1]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x121BB362: shufps xmm2, xmm0, 0xdd */
    { xmm_t _s = _xmm[0], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[2]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[2]; } /* 0x121BB366: shufps xmm6, xmm0, 0x88 */
    _xmm[0].u64[0] = MEM32(esi + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BB36A: movss xmm0, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _s.u32[0]; _xmm[5].u32[2] = _d.u32[1]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x121BB370: unpcklps xmm5, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BB373: movss xmm0, dword ptr [eax + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BB379: unpcklps xmm1, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xD0)); /* 0x121BB37C: movaps xmm0, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB383: mulps xmm0, xmm2 */
    eax = MEM32(ebp + (-0x120)); /* 0x121BB386: mov eax, dword ptr [ebp - 0x120] */
    esi = MEM32(ebp + (-0x130)); /* 0x121BB38C: mov esi, dword ptr [ebp - 0x130] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BB392: mulps xmm7, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x121BB395: addps xmm7, xmm0 */
    _xmm[0] = _xmm[4]; /* 0x121BB398: movaps xmm0, xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0x100)); /* 0x121BB39B: movaps xmm4, xmmword ptr [ebp - 0x100] */
    _xmm[5].u64[1] = _xmm[1].u64[0]; /* 0x121BB3A2: movlhps xmm5, xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB3A5: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x121BB3A8: addps xmm7, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xC0)); /* 0x121BB3AB: movaps xmm0, xmmword ptr [ebp - 0xc0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x121BB3B2: addps xmm7, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB3B6: mulps xmm0, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BB3B9: mulps xmm4, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BB3BC: addps xmm4, xmm0 */
    _xmm[0] = _xmm[3]; /* 0x121BB3BF: movaps xmm0, xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0xF0)); /* 0x121BB3C2: movaps xmm3, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB3C9: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BB3CC: addps xmm4, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xB0)); /* 0x121BB3CF: movaps xmm0, xmmword ptr [ebp - 0xb0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BB3D6: addps xmm4, xmmword ptr [ebp - 0x40] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB3DA: mulps xmm0, xmm2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BB3DD: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BB3E3: mulps xmm3, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BB3E6: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x70)); /* 0x121BB3E9: movaps xmm0, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB3ED: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BB3F0: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xA0)); /* 0x121BB3F3: movaps xmm0, xmmword ptr [ebp - 0xa0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BB3FA: addps xmm3, xmmword ptr [ebp - 0x30] */
    xmm_st(ebp + (-0x150), _xmm[2]); /* 0x121BB3FE: movaps xmmword ptr [ebp - 0x150], xmm2 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x150))); float _s1 = sse_f32(MEM32(ebp + (-0x150) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x150) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x150) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB405: mulps xmm0, xmmword ptr [ebp - 0x150] */
    _xmm[2] = xmm_ld(ebp + (-0xE0)); /* 0x121BB40C: movaps xmm2, xmmword ptr [ebp - 0xe0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BB413: mulps xmm2, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BB416: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x60)); /* 0x121BB419: movaps xmm0, xmmword ptr [ebp - 0x60] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB41D: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BB420: addps xmm2, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BB423: addps xmm2, xmmword ptr [ebp - 0x20] */
    _xmm[1] = _xmm[7]; /* 0x121BB427: movaps xmm1, xmm7 */
    { xmm_t _s = _xmm[4], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BB42A: unpcklps xmm1, xmm4 */
    MEM64(ecx) = _xmm[1].u64[0]; /* 0x121BB42D: movlps qword ptr [ecx], xmm1 */
    _xmm[0] = _xmm[3]; /* 0x121BB430: movaps xmm0, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BB433: unpcklps xmm0, xmm2 */
    MEM64(ecx + 0x8) = _xmm[0].u64[0]; /* 0x121BB436: movlps qword ptr [ecx + 8], xmm0 */
    MEM64(ecx + eax) = _xmm[1].u64[1]; /* 0x121BB43A: movhps qword ptr [ecx + eax], xmm1 */
    MEM64(eax + ecx + 0x8) = _xmm[0].u64[1]; /* 0x121BB43E: movhps qword ptr [eax + ecx + 8], xmm0 */
    { xmm_t _s = _xmm[4], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[2]; _xmm[7].u32[1] = _s.u32[2]; _xmm[7].u32[2] = _d.u32[3]; _xmm[7].u32[3] = _s.u32[3]; } /* 0x121BB443: unpckhps xmm7, xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0x90)); /* 0x121BB446: movaps xmm4, xmmword ptr [ebp - 0x90] */
    MEM64(ecx + eax * 2) = _xmm[7].u64[0]; /* 0x121BB44D: movlps qword ptr [ecx + eax*2], xmm7 */
    { xmm_t _s = _xmm[2], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BB451: unpckhps xmm3, xmm2 */
    MEM64(ecx + eax * 2 + 0x8) = _xmm[3].u64[0]; /* 0x121BB454: movlps qword ptr [ecx + eax*2 + 8], xmm3 */
    MEM64(ecx + esi) = _xmm[7].u64[1]; /* 0x121BB459: movhps qword ptr [ecx + esi], xmm7 */
    _xmm[7] = xmm_ld(ebp + (-0x110)); /* 0x121BB45D: movaps xmm7, xmmword ptr [ebp - 0x110] */
    MEM64(esi + ecx + 0x8) = _xmm[3].u64[1]; /* 0x121BB464: movhps qword ptr [esi + ecx + 8], xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0x80)); /* 0x121BB469: movaps xmm3, xmmword ptr [ebp - 0x80] */
    esi = eax; /* 0x121BB46D: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BB46F: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BB46F: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BB472: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BB474: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BB475: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BB33D; /* 0x121BB47B: jne 0x121bb33d */
L_121BB481:
    esi = MEM32(ebx + 0x1C); /* 0x121BB481: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BB484: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BB48A: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BB498; /* 0x121BB490: jmp 0x121bb498 */
L_121BB492:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BB492: mov ecx, dword ptr [ebp - 0x114] */
L_121BB498:
    /* test esi, esi */ /* 0x121BB498: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BB4D2; /* 0x121BB49A: je 0x121bb4d2 */
L_121BB49C:
    edi = MEM32(ebp + (-0x120)); /* 0x121BB49C: mov edi, dword ptr [ebp - 0x120] */
L_121BB4A2:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BB4A2: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BB4A8: push edx */
    PUSH32(esp, ecx); /* 0x121BB4A9: push ecx */
    RECOMP_CALL(sub_121BD2A9); /* 0x121BB4AA: call 0x121bd2a9 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BB4AF: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BB4B5: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BB4BB: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BB4C1: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BB4C3: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BB4C4: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BB4CA: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BB4A2; /* 0x121BB4D0: jne 0x121bb4a2 */
L_121BB4D2:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BB4D2: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BB4D5: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BB4DB: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BB4DC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BB4DE: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BB4DF: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BB4E4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BB4E6: pop ebp */
    esp = ebx; /* 0x121BB4E7: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BB4E9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BB4EA: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BB4F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BB4F2u);

L_121BB4F2:
    edi = edi; /* 0x121BB4F2: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BB4F4: push ebx */
    ebx = esp; /* 0x121BB4F5: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BB4F7: push ecx */
    PUSH32(esp, ecx); /* 0x121BB4F8: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BB4F9: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BB4FC: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BB4FF: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BB500: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BB503: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BB507: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BB509: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BB50F: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BB514: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BB516: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BB519: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BB51C: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BB51F: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BB522: mov dword ptr [ebp - 0x124], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BB528: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BB52B: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BB52C: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BB52F: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BB530: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BB536: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BB539: mov dword ptr [ebp - 0x120], eax */
    PUSH32(esp, 0xCu); /* 0x121BB53F: push 0xc */
    eax = esi; /* 0x121BB541: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BB543: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BB544: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BB547: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BB549: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BB54B: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BB54D: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BB54F: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BB54F: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BB552: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BB558: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BB55E: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BB561: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BB567: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BB6EA; /* 0x121BB569: je 0x121bb6ea */
L_121BB56F:
    PUSH32(esp, 4); /* 0x121BB56F: push 4 */
    PUSH32(esp, 4); /* 0x121BB571: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x121BB573: push dword ptr [ebp - 0x120] */
    ecx = ebp + (-0x110); /* 0x121BB579: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BB57F: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BB584: mov ecx, dword ptr [ebp - 0x11c] */
    eax = ecx; /* 0x121BB58A: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BB58C: imul eax, eax, 3 */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BB58F: mov dword ptr [ebp - 0x128], eax */
    eax = MEM32(ebp + (-0x124)); /* 0x121BB595: mov eax, dword ptr [ebp - 0x124] */
    edx = eax; /* 0x121BB59B: mov edx, eax */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BB59D: imul edx, edx, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BB5A0: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BB5A6: mov edx, dword ptr [ebp - 0x118] */
    /* test edi, edi */ /* 0x121BB5AC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BB6E4; /* 0x121BB5AE: je 0x121bb6e4 */
L_121BB5B4:
    _xmm[7] = xmm_ld(ebp + (-0xA0)); /* 0x121BB5B4: movaps xmm7, xmmword ptr [ebp - 0xa0] */
    _xmm[2] = xmm_ld(ebp + (-0xB0)); /* 0x121BB5BB: movaps xmm2, xmmword ptr [ebp - 0xb0] */
    _xmm[4] = xmm_ld(ebp + (-0xC0)); /* 0x121BB5C2: movaps xmm4, xmmword ptr [ebp - 0xc0] */
    _xmm[3] = xmm_ld(ebp + (-0xD0)); /* 0x121BB5C9: movaps xmm3, xmmword ptr [ebp - 0xd0] */
    _xmm[6] = xmm_ld(ebp + (-0x110)); /* 0x121BB5D0: movaps xmm6, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BB5D7: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BB5DD: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BB5DD: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BB5E0: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BB5E6: mov ecx, dword ptr [ebp - 0x114] */
L_121BB5EC:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BB5EC: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[5].u64[0] = MEM64(edx); _xmm[5].u64[1] = 0; /* 0x121BB5F1: movsd xmm5, qword ptr [edx] */
    _xmm[5].u64[1] = MEM64(esi + edx); /* 0x121BB5F5: movhps xmm5, qword ptr [esi + edx] */
    esi = MEM32(ebp + (-0x128)); /* 0x121BB5F9: mov esi, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + esi); /* 0x121BB5FF: movhps xmm0, qword ptr [edx + esi] */
    esi = MEM32(ebp + (-0x130)); /* 0x121BB603: mov esi, dword ptr [ebp - 0x130] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BB609: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    _xmm[1] = _xmm[5]; /* 0x121BB60F: movaps xmm1, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x121BB612: shufps xmm1, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[1]; _xmm[5].u32[3] = _s.u32[3]; } /* 0x121BB616: shufps xmm5, xmm0, 0xdd */
    _xmm[0] = _xmm[3]; /* 0x121BB61A: movaps xmm0, xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0x100)); /* 0x121BB61D: movaps xmm3, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB624: mulps xmm0, xmm5 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BB627: mulps xmm6, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BB62A: addps xmm6, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BB62D: addps xmm6, xmmword ptr [ebp - 0x50] */
    _xmm[0] = _xmm[4]; /* 0x121BB631: movaps xmm0, xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0xF0)); /* 0x121BB634: movaps xmm4, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB63B: mulps xmm0, xmm5 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BB63E: mulps xmm3, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BB641: addps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BB644: addps xmm3, xmmword ptr [ebp - 0x40] */
    _xmm[0] = _xmm[2]; /* 0x121BB648: movaps xmm0, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0xE0)); /* 0x121BB64B: movaps xmm2, xmmword ptr [ebp - 0xe0] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BB652: mulps xmm4, xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB655: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BB658: addps xmm4, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BB65B: addps xmm4, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BB65F: mulps xmm2, xmm1 */
    _xmm[0] = _xmm[7]; /* 0x121BB662: movaps xmm0, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB665: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BB668: addps xmm2, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BB66B: addps xmm2, xmmword ptr [ebp - 0x20] */
    _xmm[1] = _xmm[6]; /* 0x121BB66F: movaps xmm1, xmm6 */
    { xmm_t _s = _xmm[3], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BB672: unpcklps xmm1, xmm3 */
    MEM64(ecx) = _xmm[1].u64[0]; /* 0x121BB675: movlps qword ptr [ecx], xmm1 */
    _xmm[0] = _xmm[4]; /* 0x121BB678: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BB67B: unpcklps xmm0, xmm2 */
    MEM64(ecx + 0x8) = _xmm[0].u64[0]; /* 0x121BB67E: movlps qword ptr [ecx + 8], xmm0 */
    MEM64(eax + ecx) = _xmm[1].u64[1]; /* 0x121BB682: movhps qword ptr [eax + ecx], xmm1 */
    MEM64(eax + ecx + 0x8) = _xmm[0].u64[1]; /* 0x121BB686: movhps qword ptr [eax + ecx + 8], xmm0 */
    { xmm_t _s = _xmm[3], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[2]; _xmm[6].u32[1] = _s.u32[2]; _xmm[6].u32[2] = _d.u32[3]; _xmm[6].u32[3] = _s.u32[3]; } /* 0x121BB68B: unpckhps xmm6, xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0xD0)); /* 0x121BB68E: movaps xmm3, xmmword ptr [ebp - 0xd0] */
    MEM64(ecx + eax * 2) = _xmm[6].u64[0]; /* 0x121BB695: movlps qword ptr [ecx + eax*2], xmm6 */
    { xmm_t _s = _xmm[2], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _s.u32[2]; _xmm[4].u32[2] = _d.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x121BB699: unpckhps xmm4, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0xB0)); /* 0x121BB69C: movaps xmm2, xmmword ptr [ebp - 0xb0] */
    MEM64(ecx + eax * 2 + 0x8) = _xmm[4].u64[0]; /* 0x121BB6A3: movlps qword ptr [ecx + eax*2 + 8], xmm4 */
    MEM64(ecx + esi) = _xmm[6].u64[1]; /* 0x121BB6A8: movhps qword ptr [ecx + esi], xmm6 */
    _xmm[6] = xmm_ld(ebp + (-0x110)); /* 0x121BB6AC: movaps xmm6, xmmword ptr [ebp - 0x110] */
    MEM64(esi + ecx + 0x8) = _xmm[4].u64[1]; /* 0x121BB6B3: movhps qword ptr [esi + ecx + 8], xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0xC0)); /* 0x121BB6B8: movaps xmm4, xmmword ptr [ebp - 0xc0] */
    esi = eax; /* 0x121BB6BF: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BB6C1: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BB6C1: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BB6C4: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BB6C6: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BB6C7: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BB5EC; /* 0x121BB6CD: jne 0x121bb5ec */
L_121BB6D3:
    esi = MEM32(ebx + 0x1C); /* 0x121BB6D3: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BB6D6: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BB6DC: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BB6EA; /* 0x121BB6E2: jmp 0x121bb6ea */
L_121BB6E4:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BB6E4: mov ecx, dword ptr [ebp - 0x114] */
L_121BB6EA:
    /* test esi, esi */ /* 0x121BB6EA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BB724; /* 0x121BB6EC: je 0x121bb724 */
L_121BB6EE:
    edi = MEM32(ebp + (-0x124)); /* 0x121BB6EE: mov edi, dword ptr [ebp - 0x124] */
L_121BB6F4:
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x121BB6F4: push dword ptr [ebp - 0x120] */
    PUSH32(esp, edx); /* 0x121BB6FA: push edx */
    PUSH32(esp, ecx); /* 0x121BB6FB: push ecx */
    RECOMP_CALL(sub_121BA0E0); /* 0x121BB6FC: call 0x121ba0e0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BB701: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BB707: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BB70D: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BB713: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BB715: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BB716: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BB71C: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BB6F4; /* 0x121BB722: jne 0x121bb6f4 */
L_121BB724:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BB724: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BB727: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BB72D: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BB72E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BB730: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BB731: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BB736: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BB738: pop ebp */
    esp = ebx; /* 0x121BB739: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BB73B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BB73C: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BB744(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BB744u);

L_121BB744:
    edi = edi; /* 0x121BB744: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BB746: push ebx */
    ebx = esp; /* 0x121BB747: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BB749: push ecx */
    PUSH32(esp, ecx); /* 0x121BB74A: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BB74B: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BB74E: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BB751: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BB752: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BB755: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BB759: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BB75B: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BB761: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BB766: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BB768: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BB76B: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BB76E: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BB771: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BB774: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BB77A: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BB77D: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BB77E: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BB781: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BB782: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BB788: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BB78B: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xCu); /* 0x121BB791: push 0xc */
    eax = esi; /* 0x121BB793: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BB795: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BB796: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BB799: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BB79B: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BB79D: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BB79F: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BB7A1: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BB7A1: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BB7A4: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BB7AA: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BB7B0: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BB7B3: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BB7B9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BB90D; /* 0x121BB7BB: je 0x121bb90d */
L_121BB7C1:
    PUSH32(esp, 4); /* 0x121BB7C1: push 4 */
    PUSH32(esp, 4); /* 0x121BB7C3: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BB7C5: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BB7CB: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BB7D1: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BB7D6: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BB7DC: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BB7E2: imul edx, edx, 3 */
    eax = ecx; /* 0x121BB7E5: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BB7E7: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BB7EA: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BB7F0: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BB7F6: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BB7FC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BB907; /* 0x121BB7FE: je 0x121bb907 */
L_121BB804:
    _xmm[6] = xmm_ld(ebp + (-0xA0)); /* 0x121BB804: movaps xmm6, xmmword ptr [ebp - 0xa0] */
    _xmm[7] = xmm_ld(ebp + (-0xC0)); /* 0x121BB80B: movaps xmm7, xmmword ptr [ebp - 0xc0] */
    _xmm[1] = xmm_ld(ebp + (-0xE0)); /* 0x121BB812: movaps xmm1, xmmword ptr [ebp - 0xe0] */
    _xmm[3] = xmm_ld(ebp + (-0x110)); /* 0x121BB819: movaps xmm3, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BB820: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BB826: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BB826: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BB829: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BB82F: mov ecx, dword ptr [ebp - 0x114] */
L_121BB835:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BB835: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[5].u64[0] = MEM64(edx); _xmm[5].u64[1] = 0; /* 0x121BB83A: movsd xmm5, qword ptr [edx] */
    _xmm[5].u64[1] = MEM64(esi + edx); /* 0x121BB83E: movhps xmm5, qword ptr [esi + edx] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BB842: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BB848: movhps xmm0, qword ptr [edx + eax] */
    eax = MEM32(ebp + (-0x120)); /* 0x121BB84C: mov eax, dword ptr [ebp - 0x120] */
    esi = MEM32(ebp + (-0x130)); /* 0x121BB852: mov esi, dword ptr [ebp - 0x130] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BB858: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    _xmm[4] = _xmm[5]; /* 0x121BB85E: movaps xmm4, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[2]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[2]; } /* 0x121BB861: shufps xmm4, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[1]; _xmm[5].u32[3] = _s.u32[3]; } /* 0x121BB865: shufps xmm5, xmm0, 0xdd */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BB869: mulps xmm1, xmm4 */
    _xmm[0] = _xmm[6]; /* 0x121BB86C: movaps xmm0, xmm6 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB86F: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BB872: addps xmm1, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BB875: addps xmm1, xmmword ptr [ebp - 0x20] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[2] = _d; } /* 0x121BB879: rcpps xmm2, xmm1 */
    _xmm[0] = _xmm[2]; /* 0x121BB87C: movaps xmm0, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB87F: mulps xmm0, xmm1 */
    _xmm[1] = xmm_ld(ebp + (-0x100)); /* 0x121BB882: movaps xmm1, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB889: mulps xmm0, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BB88C: mulps xmm3, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BB88F: addps xmm2, xmm2 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BB892: subps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xD0)); /* 0x121BB895: movaps xmm0, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB89C: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BB89F: addps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BB8A2: addps xmm3, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BB8A6: mulps xmm1, xmm4 */
    _xmm[0] = _xmm[7]; /* 0x121BB8A9: movaps xmm0, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BB8AC: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BB8AF: addps xmm1, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BB8B2: addps xmm1, xmmword ptr [ebp - 0x40] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BB8B6: mulps xmm3, xmm2 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BB8B9: mulps xmm1, xmm2 */
    _xmm[0] = _xmm[3]; /* 0x121BB8BC: movaps xmm0, xmm3 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BB8BF: unpcklps xmm0, xmm1 */
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x121BB8C2: movlps qword ptr [ecx], xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BB8C5: unpckhps xmm3, xmm1 */
    _xmm[1] = xmm_ld(ebp + (-0xE0)); /* 0x121BB8C8: movaps xmm1, xmmword ptr [ebp - 0xe0] */
    MEM64(ecx + eax) = _xmm[0].u64[1]; /* 0x121BB8CF: movhps qword ptr [ecx + eax], xmm0 */
    MEM64(ecx + eax * 2) = _xmm[3].u64[0]; /* 0x121BB8D3: movlps qword ptr [ecx + eax*2], xmm3 */
    MEM64(ecx + esi) = _xmm[3].u64[1]; /* 0x121BB8D7: movhps qword ptr [ecx + esi], xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0x110)); /* 0x121BB8DB: movaps xmm3, xmmword ptr [ebp - 0x110] */
    esi = eax; /* 0x121BB8E2: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BB8E4: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BB8E4: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BB8E7: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BB8E9: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BB8EA: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BB835; /* 0x121BB8F0: jne 0x121bb835 */
L_121BB8F6:
    esi = MEM32(ebx + 0x1C); /* 0x121BB8F6: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BB8F9: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BB8FF: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BB90D; /* 0x121BB905: jmp 0x121bb90d */
L_121BB907:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BB907: mov ecx, dword ptr [ebp - 0x114] */
L_121BB90D:
    /* test esi, esi */ /* 0x121BB90D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BB947; /* 0x121BB90F: je 0x121bb947 */
L_121BB911:
    edi = MEM32(ebp + (-0x120)); /* 0x121BB911: mov edi, dword ptr [ebp - 0x120] */
L_121BB917:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BB917: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BB91D: push edx */
    PUSH32(esp, ecx); /* 0x121BB91E: push ecx */
    RECOMP_CALL(sub_121BA125); /* 0x121BB91F: call 0x121ba125 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BB924: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BB92A: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BB930: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BB936: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BB938: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BB939: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BB93F: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BB917; /* 0x121BB945: jne 0x121bb917 */
L_121BB947:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BB947: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BB94A: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BB950: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BB951: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BB953: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BB954: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BB959: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BB95B: pop ebp */
    esp = ebx; /* 0x121BB95C: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BB95E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BB95F: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BB967(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BB967u);

L_121BB967:
    edi = edi; /* 0x121BB967: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BB969: push ebx */
    ebx = esp; /* 0x121BB96A: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BB96C: push ecx */
    PUSH32(esp, ecx); /* 0x121BB96D: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BB96E: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BB971: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BB974: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BB975: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BB978: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BB97C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BB97E: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BB984: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BB989: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BB98B: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BB98E: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BB991: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BB994: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BB997: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BB99D: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BB9A0: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BB9A1: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BB9A4: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BB9A5: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BB9AB: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BB9AE: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xCu); /* 0x121BB9B4: push 0xc */
    eax = esi; /* 0x121BB9B6: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BB9B8: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BB9B9: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BB9BC: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BB9BE: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BB9C0: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BB9C2: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BB9C4: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BB9C4: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BB9C7: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BB9CD: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BB9D3: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BB9D6: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BB9DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BBAF4; /* 0x121BB9DE: je 0x121bbaf4 */
L_121BB9E4:
    PUSH32(esp, 2); /* 0x121BB9E4: push 2 */
    PUSH32(esp, 2); /* 0x121BB9E6: push 2 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BB9E8: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BB9EE: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BB9F4: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BB9F9: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BB9FF: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BBA05: imul edx, edx, 3 */
    eax = ecx; /* 0x121BBA08: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BBA0A: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BBA0D: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BBA13: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BBA19: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BBA1F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BBAEE; /* 0x121BBA21: je 0x121bbaee */
L_121BBA27:
    _xmm[5] = xmm_ld(ebp + (-0xC0)); /* 0x121BBA27: movaps xmm5, xmmword ptr [ebp - 0xc0] */
    _xmm[6] = xmm_ld(ebp + (-0xD0)); /* 0x121BBA2E: movaps xmm6, xmmword ptr [ebp - 0xd0] */
    _xmm[7] = xmm_ld(ebp + (-0x100)); /* 0x121BBA35: movaps xmm7, xmmword ptr [ebp - 0x100] */
    _xmm[2] = xmm_ld(ebp + (-0x110)); /* 0x121BBA3C: movaps xmm2, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BBA43: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BBA49: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BBA49: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BBA4C: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BBA52: mov ecx, dword ptr [ebp - 0x114] */
L_121BBA58:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BBA58: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[3].u64[0] = MEM64(edx); _xmm[3].u64[1] = 0; /* 0x121BBA5D: movsd xmm3, qword ptr [edx] */
    _xmm[3].u64[1] = MEM64(esi + edx); /* 0x121BBA61: movhps xmm3, qword ptr [esi + edx] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BBA65: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BBA6B: movhps xmm0, qword ptr [edx + eax] */
    eax = MEM32(ebp + (-0x120)); /* 0x121BBA6F: mov eax, dword ptr [ebp - 0x120] */
    esi = MEM32(ebp + (-0x130)); /* 0x121BBA75: mov esi, dword ptr [ebp - 0x130] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BBA7B: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    _xmm[4] = _xmm[2]; /* 0x121BBA81: movaps xmm4, xmm2 */
    _xmm[1] = _xmm[3]; /* 0x121BBA84: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x121BBA87: shufps xmm1, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BBA8B: shufps xmm3, xmm0, 0xdd */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BBA8F: mulps xmm4, xmm1 */
    _xmm[0] = _xmm[6]; /* 0x121BBA92: movaps xmm0, xmm6 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBA95: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BBA98: addps xmm4, xmm0 */
    _xmm[2] = _xmm[7]; /* 0x121BBA9B: movaps xmm2, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BBA9E: mulps xmm2, xmm1 */
    _xmm[0] = _xmm[5]; /* 0x121BBAA1: movaps xmm0, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBAA4: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BBAA7: addps xmm2, xmm0 */
    _xmm[0] = _xmm[4]; /* 0x121BBAAA: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BBAAD: unpcklps xmm0, xmm2 */
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x121BBAB0: movlps qword ptr [ecx], xmm0 */
    MEM64(eax + ecx) = _xmm[0].u64[1]; /* 0x121BBAB3: movhps qword ptr [eax + ecx], xmm0 */
    { xmm_t _s = _xmm[2], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _s.u32[2]; _xmm[4].u32[2] = _d.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x121BBAB7: unpckhps xmm4, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x110)); /* 0x121BBABA: movaps xmm2, xmmword ptr [ebp - 0x110] */
    MEM64(ecx + eax * 2) = _xmm[4].u64[0]; /* 0x121BBAC1: movlps qword ptr [ecx + eax*2], xmm4 */
    MEM64(ecx + esi) = _xmm[4].u64[1]; /* 0x121BBAC5: movhps qword ptr [ecx + esi], xmm4 */
    esi = eax; /* 0x121BBAC9: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BBACB: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BBACB: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BBACE: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BBAD0: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BBAD1: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BBA58; /* 0x121BBAD7: jne 0x121bba58 */
L_121BBADD:
    esi = MEM32(ebx + 0x1C); /* 0x121BBADD: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BBAE0: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BBAE6: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BBAF4; /* 0x121BBAEC: jmp 0x121bbaf4 */
L_121BBAEE:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BBAEE: mov ecx, dword ptr [ebp - 0x114] */
L_121BBAF4:
    /* test esi, esi */ /* 0x121BBAF4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BBB2E; /* 0x121BBAF6: je 0x121bbb2e */
L_121BBAF8:
    edi = MEM32(ebp + (-0x120)); /* 0x121BBAF8: mov edi, dword ptr [ebp - 0x120] */
L_121BBAFE:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BBAFE: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BBB04: push edx */
    PUSH32(esp, ecx); /* 0x121BBB05: push ecx */
    RECOMP_CALL(sub_121BA189); /* 0x121BBB06: call 0x121ba189 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BBB0B: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BBB11: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BBB17: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BBB1D: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BBB1F: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BBB20: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BBB26: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BBAFE; /* 0x121BBB2C: jne 0x121bbafe */
L_121BBB2E:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BBB2E: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BBB31: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BBB37: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BBB38: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BBB3A: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BBB3B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BBB40: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BBB42: pop ebp */
    esp = ebx; /* 0x121BBB43: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BBB45: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BBB46: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BBB4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BBB4Eu);

L_121BBB4E:
    edi = edi; /* 0x121BBB4E: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BBB50: push ebx */
    ebx = esp; /* 0x121BBB51: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BBB53: push ecx */
    PUSH32(esp, ecx); /* 0x121BBB54: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BBB55: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BBB58: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BBB5B: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BBB5C: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BBB5F: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BBB63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BBB65: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BBB6B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BBB70: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BBB72: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BBB75: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BBB78: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BBB7B: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BBB7E: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BBB84: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BBB87: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BBB88: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BBB8B: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BBB8C: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BBB92: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BBB95: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xCu); /* 0x121BBB9B: push 0xc */
    eax = esi; /* 0x121BBB9D: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BBB9F: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BBBA0: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BBBA3: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BBBA5: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BBBA7: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BBBA9: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BBBAB: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BBBAB: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BBBAE: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BBBB4: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BBBBA: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BBBBD: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BBBC3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BBDA8; /* 0x121BBBC5: je 0x121bbda8 */
L_121BBBCB:
    PUSH32(esp, 4); /* 0x121BBBCB: push 4 */
    PUSH32(esp, 4); /* 0x121BBBCD: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BBBCF: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BBBD5: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BBBDB: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BBBE0: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BBBE6: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BBBEC: imul edx, edx, 3 */
    eax = ecx; /* 0x121BBBEF: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BBBF1: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BBBF4: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BBBFA: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BBC00: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BBC06: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BBDA2; /* 0x121BBC08: je 0x121bbda2 */
L_121BBC0E:
    _xmm[3] = xmm_ld(ebp + (-0x40)); /* 0x121BBC0E: movaps xmm3, xmmword ptr [ebp - 0x40] */
    _xmm[4] = xmm_ld(ebp + (-0x50)); /* 0x121BBC12: movaps xmm4, xmmword ptr [ebp - 0x50] */
    _xmm[2] = xmm_ld(ebp + (-0x110)); /* 0x121BBC16: movaps xmm2, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BBC1D: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BBC23: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BBC23: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BBC26: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BBC2C: mov ecx, dword ptr [ebp - 0x114] */
L_121BBC32:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BBC32: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[7].u64[0] = MEM64(edx); _xmm[7].u64[1] = 0; /* 0x121BBC37: movsd xmm7, qword ptr [edx] */
    _xmm[7].u64[1] = MEM64(esi + edx); /* 0x121BBC3B: movhps xmm7, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM64(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x121BBC3F: movsd xmm6, qword ptr [edx + 8] */
    _xmm[6].u64[1] = MEM64(esi + edx + 0x8); /* 0x121BBC44: movhps xmm6, qword ptr [esi + edx + 8] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BBC49: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BBC4F: movhps xmm0, qword ptr [edx + eax] */
    _xmm[5] = _xmm[7]; /* 0x121BBC53: movaps xmm5, xmm7 */
    { xmm_t _s = _xmm[0], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[2]; } /* 0x121BBC56: shufps xmm5, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[1]; _xmm[7].u32[1] = _d.u32[3]; _xmm[7].u32[2] = _s.u32[1]; _xmm[7].u32[3] = _s.u32[3]; } /* 0x121BBC5A: shufps xmm7, xmm0, 0xdd */
    _xmm[0].u64[0] = MEM64(edx + esi * 2 + 0x8); _xmm[0].u64[1] = 0; /* 0x121BBC5E: movsd xmm0, qword ptr [edx + esi*2 + 8] */
    _xmm[0].u64[1] = MEM64(eax + edx + 0x8); /* 0x121BBC64: movhps xmm0, qword ptr [eax + edx + 8] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BBC69: mulps xmm2, xmm5 */
    _xmm[1] = _xmm[6]; /* 0x121BBC6C: movaps xmm1, xmm6 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x121BBC6F: shufps xmm1, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[3]; _xmm[6].u32[2] = _s.u32[1]; _xmm[6].u32[3] = _s.u32[3]; } /* 0x121BBC73: shufps xmm6, xmm0, 0xdd */
    _xmm[0] = xmm_ld(ebp + (-0xD0)); /* 0x121BBC77: movaps xmm0, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBC7E: mulps xmm0, xmm7 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BBC81: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x90)); /* 0x121BBC84: movaps xmm0, xmmword ptr [ebp - 0x90] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBC8B: mulps xmm0, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BBC8E: addps xmm2, xmm0 */
    _xmm[0] = _xmm[4]; /* 0x121BBC91: movaps xmm0, xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0x100)); /* 0x121BBC94: movaps xmm4, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBC9B: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BBC9E: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xC0)); /* 0x121BBCA1: movaps xmm0, xmmword ptr [ebp - 0xc0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBCA8: mulps xmm0, xmm7 */
    eax = MEM32(ebp + (-0x120)); /* 0x121BBCAB: mov eax, dword ptr [ebp - 0x120] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BBCB1: mulps xmm4, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BBCB4: addps xmm4, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x80)); /* 0x121BBCB7: movaps xmm0, xmmword ptr [ebp - 0x80] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBCBB: mulps xmm0, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BBCBE: addps xmm4, xmm0 */
    esi = MEM32(ebp + (-0x130)); /* 0x121BBCC1: mov esi, dword ptr [ebp - 0x130] */
    _xmm[0] = _xmm[3]; /* 0x121BBCC7: movaps xmm0, xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0xF0)); /* 0x121BBCCA: movaps xmm3, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBCD1: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BBCD4: addps xmm4, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xB0)); /* 0x121BBCD7: movaps xmm0, xmmword ptr [ebp - 0xb0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBCDE: mulps xmm0, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BBCE1: mulps xmm3, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BBCE4: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x70)); /* 0x121BBCE7: movaps xmm0, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBCEB: mulps xmm0, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BBCEE: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x30)); /* 0x121BBCF1: movaps xmm0, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBCF5: mulps xmm0, xmm6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BBCF8: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BBCFE: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xA0)); /* 0x121BBD01: movaps xmm0, xmmword ptr [ebp - 0xa0] */
    xmm_st(ebp + (-0x150), _xmm[2]); /* 0x121BBD08: movaps xmmword ptr [ebp - 0x150], xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0xE0)); /* 0x121BBD0F: movaps xmm2, xmmword ptr [ebp - 0xe0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBD16: mulps xmm0, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BBD19: mulps xmm2, xmm5 */
    _xmm[5] = xmm_ld(ebp + (-0x150)); /* 0x121BBD1C: movaps xmm5, xmmword ptr [ebp - 0x150] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BBD23: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x60)); /* 0x121BBD26: movaps xmm0, xmmword ptr [ebp - 0x60] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBD2A: mulps xmm0, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BBD2D: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x20)); /* 0x121BBD30: movaps xmm0, xmmword ptr [ebp - 0x20] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBD34: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BBD37: addps xmm2, xmm0 */
    _xmm[1] = _xmm[5]; /* 0x121BBD3A: movaps xmm1, xmm5 */
    { xmm_t _s = _xmm[4], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BBD3D: unpcklps xmm1, xmm4 */
    MEM64(ecx) = _xmm[1].u64[0]; /* 0x121BBD40: movlps qword ptr [ecx], xmm1 */
    _xmm[0] = _xmm[3]; /* 0x121BBD43: movaps xmm0, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BBD46: unpcklps xmm0, xmm2 */
    MEM64(ecx + 0x8) = _xmm[0].u64[0]; /* 0x121BBD49: movlps qword ptr [ecx + 8], xmm0 */
    MEM64(eax + ecx) = _xmm[1].u64[1]; /* 0x121BBD4D: movhps qword ptr [eax + ecx], xmm1 */
    MEM64(eax + ecx + 0x8) = _xmm[0].u64[1]; /* 0x121BBD51: movhps qword ptr [eax + ecx + 8], xmm0 */
    { xmm_t _s = _xmm[4], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _s.u32[2]; _xmm[5].u32[2] = _d.u32[3]; _xmm[5].u32[3] = _s.u32[3]; } /* 0x121BBD56: unpckhps xmm5, xmm4 */
    MEM64(ecx + eax * 2) = _xmm[5].u64[0]; /* 0x121BBD59: movlps qword ptr [ecx + eax*2], xmm5 */
    { xmm_t _s = _xmm[2], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BBD5D: unpckhps xmm3, xmm2 */
    MEM64(ecx + eax * 2 + 0x8) = _xmm[3].u64[0]; /* 0x121BBD60: movlps qword ptr [ecx + eax*2 + 8], xmm3 */
    MEM64(ecx + esi) = _xmm[5].u64[1]; /* 0x121BBD65: movhps qword ptr [ecx + esi], xmm5 */
    MEM64(esi + ecx + 0x8) = _xmm[3].u64[1]; /* 0x121BBD69: movhps qword ptr [esi + ecx + 8], xmm3 */
    esi = eax; /* 0x121BBD6E: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BBD70: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BBD70: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BBD73: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BBD75: dec edi */
    _flag_k = FK_DEC;
    _xmm[3] = xmm_ld(ebp + (-0x40)); /* 0x121BBD76: movaps xmm3, xmmword ptr [ebp - 0x40] */
    _xmm[4] = xmm_ld(ebp + (-0x50)); /* 0x121BBD7A: movaps xmm4, xmmword ptr [ebp - 0x50] */
    _xmm[2] = xmm_ld(ebp + (-0x110)); /* 0x121BBD7E: movaps xmm2, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BBD85: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BBC32; /* 0x121BBD8B: jne 0x121bbc32 */
L_121BBD91:
    esi = MEM32(ebx + 0x1C); /* 0x121BBD91: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BBD94: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BBD9A: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BBDA8; /* 0x121BBDA0: jmp 0x121bbda8 */
L_121BBDA2:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BBDA2: mov ecx, dword ptr [ebp - 0x114] */
L_121BBDA8:
    /* test esi, esi */ /* 0x121BBDA8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BBDE2; /* 0x121BBDAA: je 0x121bbde2 */
L_121BBDAC:
    edi = MEM32(ebp + (-0x120)); /* 0x121BBDAC: mov edi, dword ptr [ebp - 0x120] */
L_121BBDB2:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BBDB2: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BBDB8: push edx */
    PUSH32(esp, ecx); /* 0x121BBDB9: push ecx */
    RECOMP_CALL(sub_121BA1C7); /* 0x121BBDBA: call 0x121ba1c7 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BBDBF: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BBDC5: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BBDCB: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BBDD1: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BBDD3: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BBDD4: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BBDDA: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BBDB2; /* 0x121BBDE0: jne 0x121bbdb2 */
L_121BBDE2:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BBDE2: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BBDE5: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BBDEB: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BBDEC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BBDEE: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BBDEF: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BBDF4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BBDF6: pop ebp */
    esp = ebx; /* 0x121BBDF7: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BBDF9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BBDFA: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BBE02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BBE02u);

L_121BBE02:
    edi = edi; /* 0x121BBE02: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BBE04: push ebx */
    ebx = esp; /* 0x121BBE05: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BBE07: push ecx */
    PUSH32(esp, ecx); /* 0x121BBE08: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BBE09: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BBE0C: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BBE0F: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BBE10: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BBE13: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BBE17: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BBE19: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BBE1F: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BBE24: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BBE26: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BBE29: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BBE2C: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BBE2F: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BBE32: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BBE38: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BBE3B: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BBE3C: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BBE3F: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BBE40: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BBE46: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BBE49: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xCu); /* 0x121BBE4F: push 0xc */
    eax = esi; /* 0x121BBE51: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BBE53: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BBE54: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BBE57: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BBE59: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BBE5B: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BBE5D: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BBE5F: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BBE5F: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BBE62: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BBE68: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BBE6E: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BBE71: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BBE77: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BC012; /* 0x121BBE79: je 0x121bc012 */
L_121BBE7F:
    PUSH32(esp, 3); /* 0x121BBE7F: push 3 */
    PUSH32(esp, 3); /* 0x121BBE81: push 3 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BBE83: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BBE89: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BBE8F: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BBE94: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BBE9A: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BBEA0: imul edx, edx, 3 */
    eax = ecx; /* 0x121BBEA3: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BBEA5: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BBEA8: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BBEAE: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BBEB4: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BBEBA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BC00C; /* 0x121BBEBC: je 0x121bc00c */
L_121BBEC2:
    _xmm[3] = xmm_ld(ebp + (-0x80)); /* 0x121BBEC2: movaps xmm3, xmmword ptr [ebp - 0x80] */
    _xmm[2] = xmm_ld(ebp + (-0x90)); /* 0x121BBEC6: movaps xmm2, xmmword ptr [ebp - 0x90] */
    _xmm[6] = xmm_ld(ebp + (-0x110)); /* 0x121BBECD: movaps xmm6, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BBED4: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BBEDA: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BBEDA: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BBEDD: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BBEE3: mov ecx, dword ptr [ebp - 0x114] */
L_121BBEE9:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BBEE9: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[7].u64[0] = MEM64(edx); _xmm[7].u64[1] = 0; /* 0x121BBEEE: movsd xmm7, qword ptr [edx] */
    _xmm[7].u64[1] = MEM64(esi + edx); /* 0x121BBEF2: movhps xmm7, qword ptr [esi + edx] */
    _xmm[1].u64[0] = MEM32(edx + esi * 2 + 0x8); _xmm[1].u64[1] = 0; /* 0x121BBEF6: movss xmm1, dword ptr [edx + esi*2 + 8] */
    _xmm[4].u64[0] = MEM32(edx + 0x8); _xmm[4].u64[1] = 0; /* 0x121BBEFC: movss xmm4, dword ptr [edx + 8] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BBF01: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BBF07: movhps xmm0, qword ptr [edx + eax] */
    _xmm[5] = _xmm[7]; /* 0x121BBF0B: movaps xmm5, xmm7 */
    { xmm_t _s = _xmm[0], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[2]; } /* 0x121BBF0E: shufps xmm5, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[1]; _xmm[7].u32[1] = _d.u32[3]; _xmm[7].u32[2] = _s.u32[1]; _xmm[7].u32[3] = _s.u32[3]; } /* 0x121BBF12: shufps xmm7, xmm0, 0xdd */
    _xmm[0].u64[0] = MEM32(esi + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BBF16: movss xmm0, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121BBF1C: unpcklps xmm4, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BBF1F: movss xmm0, dword ptr [eax + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BBF25: unpcklps xmm1, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xD0)); /* 0x121BBF28: movaps xmm0, xmmword ptr [ebp - 0xd0] */
    eax = MEM32(ebp + (-0x120)); /* 0x121BBF2F: mov eax, dword ptr [ebp - 0x120] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBF35: mulps xmm0, xmm7 */
    esi = MEM32(ebp + (-0x130)); /* 0x121BBF38: mov esi, dword ptr [ebp - 0x130] */
    _xmm[4].u64[1] = _xmm[1].u64[0]; /* 0x121BBF3E: movlhps xmm4, xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BBF41: mulps xmm6, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BBF44: addps xmm6, xmm0 */
    _xmm[0] = _xmm[2]; /* 0x121BBF47: movaps xmm0, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x100)); /* 0x121BBF4A: movaps xmm2, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBF51: mulps xmm0, xmm4 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BBF54: addps xmm6, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xC0)); /* 0x121BBF57: movaps xmm0, xmmword ptr [ebp - 0xc0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBF5E: mulps xmm0, xmm7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BBF61: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BBF67: mulps xmm2, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BBF6A: addps xmm2, xmm0 */
    _xmm[0] = _xmm[3]; /* 0x121BBF6D: movaps xmm0, xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0xF0)); /* 0x121BBF70: movaps xmm3, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBF77: mulps xmm0, xmm4 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BBF7A: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xB0)); /* 0x121BBF7D: movaps xmm0, xmmword ptr [ebp - 0xb0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BBF84: mulps xmm3, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBF87: mulps xmm0, xmm7 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BBF8A: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x70)); /* 0x121BBF8D: movaps xmm0, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BBF91: mulps xmm0, xmm4 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BBF94: addps xmm3, xmm0 */
    _xmm[0] = _xmm[6]; /* 0x121BBF97: movaps xmm0, xmm6 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BBF9A: unpcklps xmm0, xmm2 */
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x121BBF9D: movlps qword ptr [ecx], xmm0 */
    MEM64(eax + ecx) = _xmm[0].u64[1]; /* 0x121BBFA0: movhps qword ptr [eax + ecx], xmm0 */
    MEM32(ecx + 0x8) = _xmm[3].u32[0]; /* 0x121BBFA4: movss dword ptr [ecx + 8], xmm3 */
    _xmm[1] = _xmm[3]; /* 0x121BBFA9: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BBFAC: unpcklps xmm1, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[2]; _xmm[6].u32[1] = _s.u32[2]; _xmm[6].u32[2] = _d.u32[3]; _xmm[6].u32[3] = _s.u32[3]; } /* 0x121BBFAF: unpckhps xmm6, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x90)); /* 0x121BBFB2: movaps xmm2, xmmword ptr [ebp - 0x90] */
    _xmm[1].u64[0] = _xmm[1].u64[1]; /* 0x121BBFB9: movhlps xmm1, xmm1 */
    MEM32(eax + ecx + 0x8) = _xmm[1].u32[0]; /* 0x121BBFBC: movss dword ptr [eax + ecx + 8], xmm1 */
    MEM64(ecx + eax * 2) = _xmm[6].u64[0]; /* 0x121BBFC2: movlps qword ptr [ecx + eax*2], xmm6 */
    MEM64(ecx + esi) = _xmm[6].u64[1]; /* 0x121BBFC6: movhps qword ptr [ecx + esi], xmm6 */
    _xmm[6] = xmm_ld(ebp + (-0x110)); /* 0x121BBFCA: movaps xmm6, xmmword ptr [ebp - 0x110] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BBFD1: unpckhps xmm3, xmm3 */
    MEM32(ecx + eax * 2 + 0x8) = _xmm[3].u32[0]; /* 0x121BBFD4: movss dword ptr [ecx + eax*2 + 8], xmm3 */
    _xmm[3].u64[0] = _xmm[3].u64[1]; /* 0x121BBFDA: movhlps xmm3, xmm3 */
    MEM32(esi + ecx + 0x8) = _xmm[3].u32[0]; /* 0x121BBFDD: movss dword ptr [esi + ecx + 8], xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0x80)); /* 0x121BBFE3: movaps xmm3, xmmword ptr [ebp - 0x80] */
    esi = eax; /* 0x121BBFE7: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BBFE9: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BBFE9: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BBFEC: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BBFEE: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BBFEF: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BBEE9; /* 0x121BBFF5: jne 0x121bbee9 */
L_121BBFFB:
    esi = MEM32(ebx + 0x1C); /* 0x121BBFFB: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BBFFE: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BC004: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BC012; /* 0x121BC00A: jmp 0x121bc012 */
L_121BC00C:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BC00C: mov ecx, dword ptr [ebp - 0x114] */
L_121BC012:
    /* test esi, esi */ /* 0x121BC012: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BC04C; /* 0x121BC014: je 0x121bc04c */
L_121BC016:
    edi = MEM32(ebp + (-0x120)); /* 0x121BC016: mov edi, dword ptr [ebp - 0x120] */
L_121BC01C:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BC01C: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BC022: push edx */
    PUSH32(esp, ecx); /* 0x121BC023: push ecx */
    RECOMP_CALL(sub_121BAF1A); /* 0x121BC024: call 0x121baf1a */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BC029: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BC02F: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BC035: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BC03B: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BC03D: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BC03E: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BC044: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BC01C; /* 0x121BC04A: jne 0x121bc01c */
L_121BC04C:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BC04C: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BC04F: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BC055: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BC056: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BC058: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BC059: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BC05E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BC060: pop ebp */
    esp = ebx; /* 0x121BC061: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BC063: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BC064: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BC06C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BC06Cu);

L_121BC06C:
    edi = edi; /* 0x121BC06C: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BC06E: push ebx */
    ebx = esp; /* 0x121BC06F: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BC071: push ecx */
    PUSH32(esp, ecx); /* 0x121BC072: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BC073: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BC076: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BC079: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BC07A: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BC07D: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BC081: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BC083: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BC089: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BC08E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BC090: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BC093: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BC096: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BC099: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BC09C: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BC0A2: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BC0A5: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BC0A6: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BC0A9: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BC0AA: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BC0B0: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BC0B3: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xCu); /* 0x121BC0B9: push 0xc */
    eax = esi; /* 0x121BC0BB: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BC0BD: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BC0BE: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BC0C1: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BC0C3: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BC0C5: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BC0C7: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BC0C9: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BC0C9: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BC0CC: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BC0D2: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BC0D8: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BC0DB: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BC0E1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BC2D6; /* 0x121BC0E3: je 0x121bc2d6 */
L_121BC0E9:
    PUSH32(esp, 4); /* 0x121BC0E9: push 4 */
    PUSH32(esp, 4); /* 0x121BC0EB: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BC0ED: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BC0F3: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BC0F9: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BC0FE: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BC104: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BC10A: imul edx, edx, 3 */
    eax = ecx; /* 0x121BC10D: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BC10F: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BC112: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BC118: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BC11E: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BC124: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BC2D0; /* 0x121BC126: je 0x121bc2d0 */
L_121BC12C:
    _xmm[2] = xmm_ld(ebp + (-0x60)); /* 0x121BC12C: movaps xmm2, xmmword ptr [ebp - 0x60] */
    _xmm[4] = xmm_ld(ebp + (-0xA0)); /* 0x121BC130: movaps xmm4, xmmword ptr [ebp - 0xa0] */
    _xmm[5] = xmm_ld(ebp + (-0xE0)); /* 0x121BC137: movaps xmm5, xmmword ptr [ebp - 0xe0] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BC13E: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BC144: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BC144: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BC147: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BC14D: mov ecx, dword ptr [ebp - 0x114] */
L_121BC153:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BC153: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[3].u64[0] = MEM64(edx); _xmm[3].u64[1] = 0; /* 0x121BC158: movsd xmm3, qword ptr [edx] */
    _xmm[3].u64[1] = MEM64(esi + edx); /* 0x121BC15C: movhps xmm3, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x121BC160: movss xmm6, dword ptr [edx + 8] */
    _xmm[1].u64[0] = MEM32(edx + esi * 2 + 0x8); _xmm[1].u64[1] = 0; /* 0x121BC165: movss xmm1, dword ptr [edx + esi*2 + 8] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BC16B: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BC171: movhps xmm0, qword ptr [edx + eax] */
    _xmm[7] = _xmm[3]; /* 0x121BC175: movaps xmm7, xmm3 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BC178: shufps xmm3, xmm0, 0xdd */
    { xmm_t _s = _xmm[0], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[2]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[2]; } /* 0x121BC17C: shufps xmm7, xmm0, 0x88 */
    _xmm[0].u64[0] = MEM32(esi + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BC180: movss xmm0, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x121BC186: unpcklps xmm6, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BC189: movss xmm0, dword ptr [eax + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BC18F: unpcklps xmm1, xmm0 */
    _xmm[6].u64[1] = _xmm[1].u64[0]; /* 0x121BC192: movlhps xmm6, xmm1 */
    _xmm[0] = _xmm[4]; /* 0x121BC195: movaps xmm0, xmm4 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC198: mulps xmm0, xmm3 */
    _xmm[4] = xmm_ld(ebp + (-0x110)); /* 0x121BC19B: movaps xmm4, xmmword ptr [ebp - 0x110] */
    eax = MEM32(ebp + (-0x120)); /* 0x121BC1A2: mov eax, dword ptr [ebp - 0x120] */
    _xmm[1] = _xmm[5]; /* 0x121BC1A8: movaps xmm1, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BC1AB: mulps xmm1, xmm7 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BC1AE: addps xmm1, xmm0 */
    _xmm[0] = _xmm[2]; /* 0x121BC1B1: movaps xmm0, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC1B4: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BC1B7: addps xmm1, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BC1BA: addps xmm1, xmmword ptr [ebp - 0x20] */
    _xmm[2] = xmm_ld(ebp + (-0x100)); /* 0x121BC1BE: movaps xmm2, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[5] = _d; } /* 0x121BC1C5: rcpps xmm5, xmm1 */
    esi = MEM32(ebp + (-0x130)); /* 0x121BC1C8: mov esi, dword ptr [ebp - 0x130] */
    _xmm[0] = _xmm[5]; /* 0x121BC1CE: movaps xmm0, xmm5 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC1D1: mulps xmm0, xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC1D4: mulps xmm0, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BC1D7: mulps xmm4, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BC1DA: addps xmm5, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x121BC1DD: subps xmm5, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xD0)); /* 0x121BC1E0: movaps xmm0, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC1E7: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BC1EA: addps xmm4, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x90)); /* 0x121BC1ED: movaps xmm0, xmmword ptr [ebp - 0x90] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC1F4: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BC1F7: addps xmm4, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xC0)); /* 0x121BC1FA: movaps xmm0, xmmword ptr [ebp - 0xc0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BC201: addps xmm4, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC205: mulps xmm0, xmm3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BC208: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    xmm_st(ebp + (-0x150), _xmm[3]); /* 0x121BC20E: movaps xmmword ptr [ebp - 0x150], xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0xF0)); /* 0x121BC215: movaps xmm3, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BC21C: mulps xmm2, xmm7 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BC21F: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x80)); /* 0x121BC222: movaps xmm0, xmmword ptr [ebp - 0x80] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC226: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BC229: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xB0)); /* 0x121BC22C: movaps xmm0, xmmword ptr [ebp - 0xb0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x150))); float _s1 = sse_f32(MEM32(ebp + (-0x150) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x150) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x150) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC233: mulps xmm0, xmmword ptr [ebp - 0x150] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BC23A: addps xmm2, xmmword ptr [ebp - 0x40] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BC23E: mulps xmm3, xmm7 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BC241: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x70)); /* 0x121BC244: movaps xmm0, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC248: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BC24B: addps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BC24E: addps xmm3, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BC252: mulps xmm4, xmm5 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BC255: mulps xmm2, xmm5 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BC258: mulps xmm3, xmm5 */
    _xmm[0] = _xmm[4]; /* 0x121BC25B: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BC25E: unpcklps xmm0, xmm2 */
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x121BC261: movlps qword ptr [ecx], xmm0 */
    MEM64(eax + ecx) = _xmm[0].u64[1]; /* 0x121BC264: movhps qword ptr [eax + ecx], xmm0 */
    _xmm[1] = _xmm[3]; /* 0x121BC268: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BC26B: unpcklps xmm1, xmm5 */
    MEM32(ecx + 0x8) = _xmm[1].u32[0]; /* 0x121BC26E: movss dword ptr [ecx + 8], xmm1 */
    _xmm[1].u64[0] = _xmm[1].u64[1]; /* 0x121BC273: movhlps xmm1, xmm1 */
    MEM32(eax + ecx + 0x8) = _xmm[1].u32[0]; /* 0x121BC276: movss dword ptr [eax + ecx + 8], xmm1 */
    { xmm_t _s = _xmm[2], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _s.u32[2]; _xmm[4].u32[2] = _d.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x121BC27C: unpckhps xmm4, xmm2 */
    MEM64(ecx + eax * 2) = _xmm[4].u64[0]; /* 0x121BC27F: movlps qword ptr [ecx + eax*2], xmm4 */
    MEM64(ecx + esi) = _xmm[4].u64[1]; /* 0x121BC283: movhps qword ptr [ecx + esi], xmm4 */
    { xmm_t _s = _xmm[5], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BC287: unpckhps xmm3, xmm5 */
    MEM32(ecx + eax * 2 + 0x8) = _xmm[3].u32[0]; /* 0x121BC28A: movss dword ptr [ecx + eax*2 + 8], xmm3 */
    _xmm[3].u64[0] = _xmm[3].u64[1]; /* 0x121BC290: movhlps xmm3, xmm3 */
    MEM32(esi + ecx + 0x8) = _xmm[3].u32[0]; /* 0x121BC293: movss dword ptr [esi + ecx + 8], xmm3 */
    esi = eax; /* 0x121BC299: mov esi, eax */
    _xmm[2] = xmm_ld(ebp + (-0x60)); /* 0x121BC29B: movaps xmm2, xmmword ptr [ebp - 0x60] */
    _xmm[4] = xmm_ld(ebp + (-0xA0)); /* 0x121BC29F: movaps xmm4, xmmword ptr [ebp - 0xa0] */
    _xmm[5] = xmm_ld(ebp + (-0xE0)); /* 0x121BC2A6: movaps xmm5, xmmword ptr [ebp - 0xe0] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BC2AD: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BC2AD: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BC2B0: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BC2B2: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BC2B3: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BC153; /* 0x121BC2B9: jne 0x121bc153 */
L_121BC2BF:
    esi = MEM32(ebx + 0x1C); /* 0x121BC2BF: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BC2C2: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BC2C8: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BC2D6; /* 0x121BC2CE: jmp 0x121bc2d6 */
L_121BC2D0:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BC2D0: mov ecx, dword ptr [ebp - 0x114] */
L_121BC2D6:
    /* test esi, esi */ /* 0x121BC2D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BC310; /* 0x121BC2D8: je 0x121bc310 */
L_121BC2DA:
    edi = MEM32(ebp + (-0x120)); /* 0x121BC2DA: mov edi, dword ptr [ebp - 0x120] */
L_121BC2E0:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BC2E0: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BC2E6: push edx */
    PUSH32(esp, ecx); /* 0x121BC2E7: push ecx */
    RECOMP_CALL(sub_121BD34B); /* 0x121BC2E8: call 0x121bd34b */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BC2ED: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BC2F3: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BC2F9: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BC2FF: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BC301: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BC302: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BC308: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BC2E0; /* 0x121BC30E: jne 0x121bc2e0 */
L_121BC310:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BC310: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BC313: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BC319: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BC31A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BC31C: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BC31D: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BC322: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BC324: pop ebp */
    esp = ebx; /* 0x121BC325: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BC327: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BC328: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BC330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BC330u);

L_121BC330:
    edi = edi; /* 0x121BC330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BC332: push ebp */
    ebp = esp; /* 0x121BC333: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121BC335: mov eax, dword ptr [ebp + 8] */
    _xmm[0] = xmm_ld(eax); /* 0x121BC338: movaps xmm0, xmmword ptr [eax] */
    /* nop */ /* 0x121BC33B: nop  */
    _xmm[1] = _xmm[0]; /* 0x121BC33C: movaps xmm1, xmm0 */
    _xmm[6] = _xmm[0]; /* 0x121BC33F: movaps xmm6, xmm0 */
    { xmm_t _s = xmm_ld(0x121D9270); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x121BC342: andps xmm0, xmmword ptr [0x121d9270] */
    { xmm_t _s = xmm_ld(0x121D9260); for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x121BC349: andps xmm1, xmmword ptr [0x121d9260] */
    _xmm[2] = _xmm[0]; /* 0x121BC350: movaps xmm2, xmm0 */
    _xmm[7] = _xmm[0]; /* 0x121BC353: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(0x121D9250)); float _s1 = sse_f32(MEM32(0x121D9250 + 4)); float _s2 = sse_f32(MEM32(0x121D9250 + 8)); float _s3 = sse_f32(MEM32(0x121D9250 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC356: mulps xmm0, xmmword ptr [0x121d9250] */
    _xmm[4] = xmm_ld(0x121D9240); /* 0x121BC35D: movaps xmm4, xmmword ptr [0x121d9240] */
    _xmm[5] = xmm_ld(0x121D9230); /* 0x121BC364: movaps xmm5, xmmword ptr [0x121d9230] */
    edx = esp; /* 0x121BC36B: mov edx, esp */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFC0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFC0u; /* 0x121BC36D: add edx, -0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    edx = edx & 0xFFFFFFF0u; /* 0x121BC370: and edx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[6] = xmm_ld(0x121D9220); /* 0x121BC373: movaps xmm6, xmmword ptr [0x121d9220] */
    _xmm[7] = xmm_ld(0x121D9210); /* 0x121BC37A: movaps xmm7, xmmword ptr [0x121d9210] */
    { float _s0 = sse_f32(MEM32(0x121D9200)); float _s1 = sse_f32(MEM32(0x121D9200 + 4)); float _s2 = sse_f32(MEM32(0x121D9200 + 8)); float _s3 = sse_f32(MEM32(0x121D9200 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BC381: addps xmm0, xmmword ptr [0x121d9200] */
    _xmm[3] = _xmm[0]; /* 0x121BC388: movaps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(0x121D9200)); float _s1 = sse_f32(MEM32(0x121D9200 + 4)); float _s2 = sse_f32(MEM32(0x121D9200 + 8)); float _s3 = sse_f32(MEM32(0x121D9200 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x121BC38B: subps xmm0, xmmword ptr [0x121d9200] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BC392: mulps xmm4, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BC395: mulps xmm5, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BC398: mulps xmm6, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BC39B: mulps xmm7, xmm0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BC39E: subps xmm2, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BC3A1: subps xmm2, xmm5 */
    _xmm[5] = xmm_ld(0x121D91F0); /* 0x121BC3A4: movaps xmm5, xmmword ptr [0x121d91f0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BC3AB: subps xmm2, xmm6 */
    _xmm[6] = xmm_ld(0x121D91E0); /* 0x121BC3AE: movaps xmm6, xmmword ptr [0x121d91e0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BC3B5: subps xmm2, xmm7 */
    _xmm[4] = _xmm[2]; /* 0x121BC3B8: movaps xmm4, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BC3BB: mulps xmm4, xmm4 */
    { xmm_t _s = xmm_ld(0x121D91D0); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x121BC3BE: andps xmm3, xmmword ptr [0x121d91d0] */
    _xmm[0] = _xmm[3]; /* 0x121BC3C5: movaps xmm0, xmm3 */
    _xmm[7] = _xmm[3]; /* 0x121BC3C8: movaps xmm7, xmm3 */
    { xmm_t _s = xmm_ld(0x121D91C0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x121BC3CB: andps xmm0, xmmword ptr [0x121d91c0] */
    xmm_st(edx, _xmm[0]); /* 0x121BC3D2: movaps xmmword ptr [edx], xmm0 */
    xmm_st(edx + 0x10, _xmm[3]); /* 0x121BC3D5: movaps xmmword ptr [edx + 0x10], xmm3 */
    xmm_st(edx + 0x20, _xmm[7]); /* 0x121BC3D9: movaps xmmword ptr [edx + 0x20], xmm7 */
    eax = MEM32(edx + 0x10); /* 0x121BC3DD: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx); /* 0x121BC3E0: sub eax, dword ptr [edx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x121D91B0));
    eax = eax & MEM32(0x121D91B0); /* 0x121BC3E2: and eax, dword ptr [0x121d91b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC3E8: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC3E8: shl eax, 0x1e */
    MEM32(edx + 0x10) = eax; /* 0x121BC3EB: mov dword ptr [edx + 0x10], eax */
    eax = MEM32(edx + 0x14); /* 0x121BC3EE: mov eax, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x4); /* 0x121BC3F1: sub eax, dword ptr [edx + 4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x121D91B0));
    eax = eax & MEM32(0x121D91B0); /* 0x121BC3F4: and eax, dword ptr [0x121d91b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC3FA: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC3FA: shl eax, 0x1e */
    MEM32(edx + 0x14) = eax; /* 0x121BC3FD: mov dword ptr [edx + 0x14], eax */
    eax = MEM32(edx + 0x18); /* 0x121BC400: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x8); /* 0x121BC403: sub eax, dword ptr [edx + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x121D91B0));
    eax = eax & MEM32(0x121D91B0); /* 0x121BC406: and eax, dword ptr [0x121d91b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC40C: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC40C: shl eax, 0x1e */
    MEM32(edx + 0x18) = eax; /* 0x121BC40F: mov dword ptr [edx + 0x18], eax */
    eax = MEM32(edx + 0x1C); /* 0x121BC412: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0xC); /* 0x121BC415: sub eax, dword ptr [edx + 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x121D91B0));
    eax = eax & MEM32(0x121D91B0); /* 0x121BC418: and eax, dword ptr [0x121d91b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC41E: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC41E: shl eax, 0x1e */
    MEM32(edx + 0x1C) = eax; /* 0x121BC421: mov dword ptr [edx + 0x1c], eax */
    eax = MEM32(edx + 0x20); /* 0x121BC424: mov eax, dword ptr [edx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x121BC427: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x121D91B0));
    eax = eax & MEM32(0x121D91B0); /* 0x121BC429: and eax, dword ptr [0x121d91b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC42F: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC42F: shl eax, 0x1e */
    MEM32(edx + 0x20) = eax; /* 0x121BC432: mov dword ptr [edx + 0x20], eax */
    eax = MEM32(edx + 0x24); /* 0x121BC435: mov eax, dword ptr [edx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x4); /* 0x121BC438: add eax, dword ptr [edx + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x121D91B0));
    eax = eax & MEM32(0x121D91B0); /* 0x121BC43B: and eax, dword ptr [0x121d91b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC441: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC441: shl eax, 0x1e */
    MEM32(edx + 0x24) = eax; /* 0x121BC444: mov dword ptr [edx + 0x24], eax */
    eax = MEM32(edx + 0x28); /* 0x121BC447: mov eax, dword ptr [edx + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x8); /* 0x121BC44A: add eax, dword ptr [edx + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x121D91B0));
    eax = eax & MEM32(0x121D91B0); /* 0x121BC44D: and eax, dword ptr [0x121d91b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC453: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC453: shl eax, 0x1e */
    MEM32(edx + 0x28) = eax; /* 0x121BC456: mov dword ptr [edx + 0x28], eax */
    eax = MEM32(edx + 0x2C); /* 0x121BC459: mov eax, dword ptr [edx + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0xC); /* 0x121BC45C: add eax, dword ptr [edx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x121D91B0));
    eax = eax & MEM32(0x121D91B0); /* 0x121BC45F: and eax, dword ptr [0x121d91b0] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC465: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC465: shl eax, 0x1e */
    MEM32(edx + 0x2C) = eax; /* 0x121BC468: mov dword ptr [edx + 0x2c], eax */
    eax = MEM32(edx); /* 0x121BC46B: mov eax, dword ptr [edx] */
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC46D: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC46D: shl eax, 0x1e */
    MEM32(edx) = eax; /* 0x121BC470: mov dword ptr [edx], eax */
    eax = MEM32(edx + 0x4); /* 0x121BC472: mov eax, dword ptr [edx + 4] */
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC475: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC475: shl eax, 0x1e */
    MEM32(edx + 0x4) = eax; /* 0x121BC478: mov dword ptr [edx + 4], eax */
    eax = MEM32(edx + 0x8); /* 0x121BC47B: mov eax, dword ptr [edx + 8] */
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC47E: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC47E: shl eax, 0x1e */
    MEM32(edx + 0x8) = eax; /* 0x121BC481: mov dword ptr [edx + 8], eax */
    eax = MEM32(edx + 0xC); /* 0x121BC484: mov eax, dword ptr [edx + 0xc] */
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x121BC487: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x121BC487: shl eax, 0x1e */
    MEM32(edx + 0xC) = eax; /* 0x121BC48A: mov dword ptr [edx + 0xc], eax */
    _xmm[3] = xmm_ld(edx + 0x10); /* 0x121BC48D: movaps xmm3, xmmword ptr [edx + 0x10] */
    _xmm[7] = xmm_ld(edx + 0x20); /* 0x121BC491: movaps xmm7, xmmword ptr [edx + 0x20] */
    _xmm[0] = xmm_ld(edx); /* 0x121BC495: movaps xmm0, xmmword ptr [edx] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x121BC498: xorps xmm3, xmm1 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x121BC49B: xorps xmm1, xmm1 */
    { double _s0 = _xmm[1].f32[0]; double _s1 = _xmm[1].f32[1]; double _s2 = _xmm[1].f32[2]; double _s3 = _xmm[1].f32[3]; _xmm[0].u32[0] = sse_cmp_pred(_xmm[0].f32[0], _s0, 4); _xmm[0].u32[1] = sse_cmp_pred(_xmm[0].f32[1], _s1, 4); _xmm[0].u32[2] = sse_cmp_pred(_xmm[0].f32[2], _s2, 4); _xmm[0].u32[3] = sse_cmp_pred(_xmm[0].f32[3], _s3, 4); } /* 0x121BC49E: cmpneqps xmm0, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BC4A2: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BC4A5: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D91A0)); float _s1 = sse_f32(MEM32(0x121D91A0 + 4)); float _s2 = sse_f32(MEM32(0x121D91A0 + 8)); float _s3 = sse_f32(MEM32(0x121D91A0 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BC4A8: addps xmm5, xmmword ptr [0x121d91a0] */
    { float _s0 = sse_f32(MEM32(0x121D9190)); float _s1 = sse_f32(MEM32(0x121D9190 + 4)); float _s2 = sse_f32(MEM32(0x121D9190 + 8)); float _s3 = sse_f32(MEM32(0x121D9190 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BC4AF: addps xmm6, xmmword ptr [0x121d9190] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BC4B6: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BC4B9: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D9180)); float _s1 = sse_f32(MEM32(0x121D9180 + 4)); float _s2 = sse_f32(MEM32(0x121D9180 + 8)); float _s3 = sse_f32(MEM32(0x121D9180 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BC4BC: addps xmm5, xmmword ptr [0x121d9180] */
    { float _s0 = sse_f32(MEM32(0x121D9170)); float _s1 = sse_f32(MEM32(0x121D9170 + 4)); float _s2 = sse_f32(MEM32(0x121D9170 + 8)); float _s3 = sse_f32(MEM32(0x121D9170 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BC4C3: addps xmm6, xmmword ptr [0x121d9170] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BC4CA: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BC4CD: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D9160)); float _s1 = sse_f32(MEM32(0x121D9160 + 4)); float _s2 = sse_f32(MEM32(0x121D9160 + 8)); float _s3 = sse_f32(MEM32(0x121D9160 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BC4D0: addps xmm5, xmmword ptr [0x121d9160] */
    { float _s0 = sse_f32(MEM32(0x121D9150)); float _s1 = sse_f32(MEM32(0x121D9150 + 4)); float _s2 = sse_f32(MEM32(0x121D9150 + 8)); float _s3 = sse_f32(MEM32(0x121D9150 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BC4D7: addps xmm6, xmmword ptr [0x121d9150] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BC4DE: mulps xmm5, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BC4E1: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D9140)); float _s1 = sse_f32(MEM32(0x121D9140 + 4)); float _s2 = sse_f32(MEM32(0x121D9140 + 8)); float _s3 = sse_f32(MEM32(0x121D9140 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BC4E4: addps xmm6, xmmword ptr [0x121d9140] */
    _xmm[1] = _xmm[0]; /* 0x121BC4EB: movaps xmm1, xmm0 */
    _xmm[2] = _xmm[0]; /* 0x121BC4EE: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = ~_xmm[1].u32[_k] & _s.u32[_k]; } /* 0x121BC4F1: andnps xmm1, xmm5 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x121BC4F4: andps xmm2, xmm6 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x121BC4F7: orps xmm1, xmm2 */
    _xmm[2] = _xmm[0]; /* 0x121BC4FA: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x121BC4FD: andps xmm0, xmm5 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = ~_xmm[2].u32[_k] & _s.u32[_k]; } /* 0x121BC500: andnps xmm2, xmm6 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x121BC503: orps xmm0, xmm2 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x121BC506: xorps xmm0, xmm7 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x121BC509: xorps xmm1, xmm3 */
    eax = MEM32(ebp + 0xC); /* 0x121BC50C: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x121BC50F: mov edx, dword ptr [ebp + 0x10] */
    xmm_st(eax, _xmm[1]); /* 0x121BC512: movaps xmmword ptr [eax], xmm1 */
    xmm_st(edx, _xmm[0]); /* 0x121BC515: movaps xmmword ptr [edx], xmm0 */
    ebp = POP32_VAL(esp); /* 0x121BC518: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BC519: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BC521(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BC521u);

L_121BC521:
    edi = edi; /* 0x121BC521: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BC523: push ebp */
    ebp = esp; /* 0x121BC524: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121BC526: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 0x121BA0E0u; /* 0x121BC529: mov dword ptr [eax], 0x121ba0e0 */
    eax = MEM32(ebp + 0x8); /* 0x121BC52F: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = 0x121BD2A9u; /* 0x121BC532: mov dword ptr [eax + 4], 0x121bd2a9 */
    eax = MEM32(ebp + 0x8); /* 0x121BC539: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x8) = 0x121BA1C7u; /* 0x121BC53C: mov dword ptr [eax + 8], 0x121ba1c7 */
    eax = MEM32(ebp + 0x8); /* 0x121BC543: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x8C) = 0x121BA1C7u; /* 0x121BC546: mov dword ptr [eax + 0x8c], 0x121ba1c7 */
    eax = MEM32(ebp + 0x8); /* 0x121BC550: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x14) = 0x121BA189u; /* 0x121BC553: mov dword ptr [eax + 0x14], 0x121ba189 */
    eax = MEM32(ebp + 0x8); /* 0x121BC55A: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x18) = 0x121BAF1Au; /* 0x121BC55D: mov dword ptr [eax + 0x18], 0x121baf1a */
    eax = MEM32(ebp + 0x8); /* 0x121BC564: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x24) = 0x121BA125u; /* 0x121BC567: mov dword ptr [eax + 0x24], 0x121ba125 */
    eax = MEM32(ebp + 0x8); /* 0x121BC56E: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x28) = 0x121BD34Bu; /* 0x121BC571: mov dword ptr [eax + 0x28], 0x121bd34b */
    eax = MEM32(ebp + 0x8); /* 0x121BC578: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xBC) = 0x121BAFC4u; /* 0x121BC57B: mov dword ptr [eax + 0xbc], 0x121bafc4 */
    eax = MEM32(ebp + 0x8); /* 0x121BC585: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x44) = 0x121BCF5Bu; /* 0x121BC588: mov dword ptr [eax + 0x44], 0x121bcf5b */
    eax = MEM32(ebp + 0x8); /* 0x121BC58F: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x4C) = 0x121BCB61u; /* 0x121BC592: mov dword ptr [eax + 0x4c], 0x121bcb61 */
    eax = MEM32(ebp + 0x8); /* 0x121BC599: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC8) = 0x121BA7DDu; /* 0x121BC59C: mov dword ptr [eax + 0xc8], 0x121ba7dd */
    eax = MEM32(ebp + 0x8); /* 0x121BC5A6: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xCC) = 0x121BA5ECu; /* 0x121BC5A9: mov dword ptr [eax + 0xcc], 0x121ba5ec */
    eax = MEM32(ebp + 0x8); /* 0x121BC5B3: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD4) = 0x121BA897u; /* 0x121BC5B6: mov dword ptr [eax + 0xd4], 0x121ba897 */
    eax = MEM32(ebp + 0x8); /* 0x121BC5C0: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD8) = 0x121BA731u; /* 0x121BC5C3: mov dword ptr [eax + 0xd8], 0x121ba731 */
    eax = MEM32(ebp + 0x8); /* 0x121BC5CD: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x48) = 0x121BA938u; /* 0x121BC5D0: mov dword ptr [eax + 0x48], 0x121ba938 */
    eax = MEM32(ebp + 0x8); /* 0x121BC5D7: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC0) = 0x121BA6A5u; /* 0x121BC5DA: mov dword ptr [eax + 0xc0], 0x121ba6a5 */
    eax = MEM32(ebp + 0x8); /* 0x121BC5E4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x70) = 0x121BD0D3u; /* 0x121BC5E7: mov dword ptr [eax + 0x70], 0x121bd0d3 */
    eax = MEM32(ebp + 0x8); /* 0x121BC5EE: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x38) = 0x121BCFE6u; /* 0x121BC5F1: mov dword ptr [eax + 0x38], 0x121bcfe6 */
    eax = MEM32(ebp + 0x8); /* 0x121BC5F8: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x74) = 0x121BD1D0u; /* 0x121BC5FB: mov dword ptr [eax + 0x74], 0x121bd1d0 */
    eax = MEM32(ebp + 0x8); /* 0x121BC602: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xF0) = 0x121BD7B9u; /* 0x121BC605: mov dword ptr [eax + 0xf0], 0x121bd7b9 */
    eax = MEM32(ebp + 0x8); /* 0x121BC60F: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xF4) = 0x121BDA0Bu; /* 0x121BC612: mov dword ptr [eax + 0xf4], 0x121bda0b */
    eax = MEM32(ebp + 0x8); /* 0x121BC61C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xF8) = 0x121BDC2Eu; /* 0x121BC61F: mov dword ptr [eax + 0xf8], 0x121bdc2e */
    eax = MEM32(ebp + 0x8); /* 0x121BC629: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xFC) = 0x121BD51Du; /* 0x121BC62C: mov dword ptr [eax + 0xfc], 0x121bd51d */
    eax = MEM32(ebp + 0x8); /* 0x121BC636: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x100) = 0x121BE333u; /* 0x121BC639: mov dword ptr [eax + 0x100], 0x121be333 */
    eax = MEM32(ebp + 0x8); /* 0x121BC643: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x104) = 0x121BE0C9u; /* 0x121BC646: mov dword ptr [eax + 0x104], 0x121be0c9 */
    eax = MEM32(ebp + 0x8); /* 0x121BC650: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x108) = 0x121BDE15u; /* 0x121BC653: mov dword ptr [eax + 0x108], 0x121bde15 */
    eax = MEM32(ebp + 0x8); /* 0x121BC65D: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x114) = 0x121BDE15u; /* 0x121BC660: mov dword ptr [eax + 0x114], 0x121bde15 */
    eax = MEM32(ebp + 0x8); /* 0x121BC66A: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x68) = 0x121BD46Fu; /* 0x121BC66D: mov dword ptr [eax + 0x68], 0x121bd46f */
    eax = MEM32(ebp + 0x8); /* 0x121BC674: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC) = 0x121BA245u; /* 0x121BC677: mov dword ptr [eax + 0xc], 0x121ba245 */
    eax = MEM32(ebp + 0x8); /* 0x121BC67E: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x10) = 0x121BCE0Eu; /* 0x121BC681: mov dword ptr [eax + 0x10], 0x121bce0e */
    eax = MEM32(ebp + 0x8); /* 0x121BC688: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x1C) = 0x121BCA21u; /* 0x121BC68B: mov dword ptr [eax + 0x1c], 0x121bca21 */
    eax = MEM32(ebp + 0x8); /* 0x121BC692: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x58) = 0x121BCABAu; /* 0x121BC695: mov dword ptr [eax + 0x58], 0x121bcaba */
    eax = MEM32(ebp + 0x8); /* 0x121BC69C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x5C) = 0x121BAAC9u; /* 0x121BC69F: mov dword ptr [eax + 0x5c], 0x121baac9 */
    eax = MEM32(ebp + 0x8); /* 0x121BC6A6: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x50) = 0x121BB060u; /* 0x121BC6A9: mov dword ptr [eax + 0x50], 0x121bb060 */
    eax = MEM32(ebp + 0x8); /* 0x121BC6B0: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xB4) = 0x121BD40Bu; /* 0x121BC6B3: mov dword ptr [eax + 0xb4], 0x121bd40b */
    eax = MEM32(ebp + 0x8); /* 0x121BC6BD: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x2C) = 0x121BAB7Eu; /* 0x121BC6C0: mov dword ptr [eax + 0x2c], 0x121bab7e */
    eax = MEM32(ebp + 0x8); /* 0x121BC6C7: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x20) = 0x121BA54Bu; /* 0x121BC6CA: mov dword ptr [eax + 0x20], 0x121ba54b */
    eax = MEM32(ebp + 0x8); /* 0x121BC6D1: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x54) = 0x121BA54Bu; /* 0x121BC6D4: mov dword ptr [eax + 0x54], 0x121ba54b */
    eax = MEM32(ebp + 0x8); /* 0x121BC6DB: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD0) = 0x121BA9C5u; /* 0x121BC6DE: mov dword ptr [eax + 0xd0], 0x121ba9c5 */
    eax = MEM32(ebp + 0x8); /* 0x121BC6E8: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xDC) = 0x121BAA26u; /* 0x121BC6EB: mov dword ptr [eax + 0xdc], 0x121baa26 */
    eax = MEM32(ebp + 0x8); /* 0x121BC6F5: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC4) = 0x121BAA73u; /* 0x121BC6F8: mov dword ptr [eax + 0xc4], 0x121baa73 */
    eax = MEM32(ebp + 0x8); /* 0x121BC702: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xEC) = 0x121BC819u; /* 0x121BC705: mov dword ptr [eax + 0xec], 0x121bc819 */
    eax = MEM32(ebp + 0x8); /* 0x121BC70F: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xE8) = 0x121BC9B3u; /* 0x121BC712: mov dword ptr [eax + 0xe8], 0x121bc9b3 */
    ebp = POP32_VAL(esp); /* 0x121BC71C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BC71D: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BC723(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BC723u);

L_121BC723:
    PUSH32(esp, ecx); /* 0x121BC723: push ecx */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] ^ _s.u32[_k]; } /* 0x121BC724: pxor xmm7, xmm7 */
    _xmm[1] = xmm_ld(0x121D92A0); /* 0x121BC728: movdqa xmm1, xmmword ptr [0x121d92a0] */
    _xmm[2] = xmm_ld(0x121D92B0); /* 0x121BC730: movdqa xmm2, xmmword ptr [0x121d92b0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x121BC738: pand xmm1, xmm0 */
    _xmm[3] = _xmm[1]; /* 0x121BC73C: movdqa xmm3, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x121BC740: pand xmm2, xmm0 */
    { xmm_t _s = xmm_ld(0x121D9290); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x121BC744: pand xmm0, xmmword ptr [0x121d9290] */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 8; _k++) _xmm[3].u16[_k] = (_xmm[3].u16[_k] == _s.u16[_k]) ? (uint16_t)~0u : 0; } /* 0x121BC74C: pcmpeqw xmm3, xmm7 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[3].u8[_k] >> 7) << _k; ecx = _m; } /* 0x121BC750: pmovmskb ecx, xmm3 */
    /* test ecx, ecx */ /* 0x121BC754: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BC7C4; /* 0x121BC756: je 0x121bc7c4 */
L_121BC758:
    { xmm_t _s = xmm_ld(0x121D9280); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = ~_xmm[3].u32[_k] & _s.u32[_k]; } /* 0x121BC758: pandn xmm3, xmmword ptr [0x121d9280] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x121BC760: por xmm2, xmm3 */
    { xmm_t _s = xmm_ld(0x121D92C0); for (int _k = 0; _k < 8; _k++) if (_s.i16[_k] > _xmm[1].i16[_k]) _xmm[1].i16[_k] = _s.i16[_k]; } /* 0x121BC764: pmaxsw xmm1, xmmword ptr [0x121d92c0] */
    _xmm[4] = xmm_ld(0x121D92D0); /* 0x121BC76C: movdqa xmm4, xmmword ptr [0x121d92d0] */
    _xmm[3] = _xmm[1]; /* 0x121BC774: movdqa xmm3, xmm1 */
    void_lift_trap(0x121BC778u, "punpcklwd xmm1, xmm7");
    void_lift_trap(0x121BC77Cu, "punpckhwd xmm3, xmm7");
    _xmm[5] = _xmm[7]; /* 0x121BC780: movdqa xmm5, xmm7 */
    void_lift_trap(0x121BC784u, "punpcklwd xmm5, xmm0");
    void_lift_trap(0x121BC788u, "punpckhwd xmm7, xmm0");
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] += _s.u32[_k]; } /* 0x121BC78C: paddd xmm1, xmm4 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] += _s.u32[_k]; } /* 0x121BC790: paddd xmm3, xmm4 */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[1].u32[_k] << _c); } /* 0x121BC794: pslld xmm1, 0xd */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[3].u32[_k] << _c); } /* 0x121BC799: pslld xmm3, 0xd */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x121BC79E: por xmm1, xmm5 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] | _s.u32[_k]; } /* 0x121BC7A2: por xmm3, xmm7 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x121BC7A6: pxor xmm5, xmm5 */
    _xmm[7] = _xmm[2]; /* 0x121BC7AA: movdqa xmm7, xmm2 */
    void_lift_trap(0x121BC7AEu, "punpcklwd xmm2, xmm5");
    void_lift_trap(0x121BC7B2u, "punpckhwd xmm7, xmm5");
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x121BC7B6: cvtdq2ps xmm0, xmm2 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x121BC7B9: cvtdq2ps xmm2, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BC7BC: mulps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BC7BF: mulps xmm3, xmm2 */
    ecx = POP32_VAL(esp); /* 0x121BC7C2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BC7C3: ret  */
L_121BC7C4:
    _xmm[6] = xmm_ld(0x121D92E0); /* 0x121BC7C4: movdqa xmm6, xmmword ptr [0x121d92e0] */
    _xmm[5] = _xmm[7]; /* 0x121BC7CC: movdqa xmm5, xmm7 */
    void_lift_trap(0x121BC7D0u, "punpcklwd xmm5, xmm0");
    void_lift_trap(0x121BC7D4u, "punpckhwd xmm7, xmm0");
    _xmm[3] = _xmm[1]; /* 0x121BC7D8: movdqa xmm3, xmm1 */
    void_lift_trap(0x121BC7DCu, "punpcklwd xmm1, xmm7");
    void_lift_trap(0x121BC7E0u, "punpckhwd xmm3, xmm7");
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] += _s.u32[_k]; } /* 0x121BC7E4: paddd xmm1, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] += _s.u32[_k]; } /* 0x121BC7E8: paddd xmm3, xmm6 */
    _xmm[0] = _xmm[2]; /* 0x121BC7EC: movdqa xmm0, xmm2 */
    void_lift_trap(0x121BC7F0u, "punpcklwd xmm0, xmm7");
    void_lift_trap(0x121BC7F4u, "punpckhwd xmm2, xmm7");
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x121BC7F8: por xmm0, xmm1 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] | _s.u32[_k]; } /* 0x121BC7FC: por xmm3, xmm2 */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[0].u32[_k] << _c); } /* 0x121BC800: pslld xmm0, 0xd */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[3].u32[_k] << _c); } /* 0x121BC805: pslld xmm3, 0xd */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x121BC80A: por xmm0, xmm5 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] | _s.u32[_k]; } /* 0x121BC80E: por xmm3, xmm7 */
    ecx = POP32_VAL(esp); /* 0x121BC812: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BC813: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BC819(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BC819u);

L_121BC819:
    edi = edi; /* 0x121BC819: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BC81B: push ebp */
    ebp = esp; /* 0x121BC81C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121BC81E: push ecx */
    PUSH32(esp, ebx); /* 0x121BC81F: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x121BC820: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121BC823: push esi */
    PUSH32(esp, edi); /* 0x121BC824: push edi */
    edi = MEM32(ebp + 0x10); /* 0x121BC825: mov edi, dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x121BC828: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x121BC82A: mov dword ptr [ebp - 4], ecx */
    /* cmp edi, 8 */ /* 0x121BC82D: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121BC879; /* 0x121BC830: jb 0x121bc879 */
L_121BC832:
    esi = edi; /* 0x121BC832: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esi = esi & 0xFFFFFFF8u; /* 0x121BC834: and esi, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = esi; /* 0x121BC837: mov dword ptr [ebp + 0x10], esi */
    edx = MEM32(ebp + 0x10); /* 0x121BC83A: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x121BC83D: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x121BC840: mov ecx, dword ptr [ebp + 8] */
L_121BC843:
    _xmm[0].u64[0] = MEM64(eax); /* 0x121BC843: movlps xmm0, qword ptr [eax] */
    _xmm[0].u64[1] = MEM64(eax + 0x8); /* 0x121BC846: movhps xmm0, qword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x121BC84A: add eax, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_121BC723); /* 0x121BC84D: call 0x121bc723 */
    RECOMP_FLAGS_IN();
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x121BC852: movlps qword ptr [ecx], xmm0 */
    MEM64(ecx + 0x8) = _xmm[0].u64[1]; /* 0x121BC855: movhps qword ptr [ecx + 8], xmm0 */
    MEM64(ecx + 0x10) = _xmm[3].u64[0]; /* 0x121BC859: movlps qword ptr [ecx + 0x10], xmm3 */
    MEM64(ecx + 0x18) = _xmm[3].u64[1]; /* 0x121BC85D: movhps qword ptr [ecx + 0x18], xmm3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x121BC861: add ecx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x121BC864: sub edx, 8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_121BC843; /* 0x121BC867: jne 0x121bc843 */
L_121BC869:
    eax = MEM32(ebp + 0xC); /* 0x121BC869: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x121BC86C: mov ecx, dword ptr [ebp - 4] */
    edx = eax + esi * 2; /* 0x121BC86F: lea edx, [eax + esi*2] */
    ebx = ebx + esi * 4; /* 0x121BC872: lea ebx, [ebx + esi*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x121BC875: sub edi, esi */
    _flag_k = FK_CMP;
    goto L_121BC87C; /* 0x121BC877: jmp 0x121bc87c */
L_121BC879:
    edx = MEM32(ebp + 0xC); /* 0x121BC879: mov edx, dword ptr [ebp + 0xc] */
L_121BC87C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121BC87C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x121BC87E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BC8EF; /* 0x121BC880: je 0x121bc8ef */
L_121BC882:
    eax = (uint32_t)MEM16(edx + esi * 2); /* 0x121BC882: movzx eax, word ptr [edx + esi*2] */
    ecx = eax; /* 0x121BC886: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF8000u);
    ecx = ecx & 0xFFFF8000u; /* 0x121BC888: and ecx, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x121BC88E: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x121BC88E: shl ecx, 0x10 */
    MEM32(ebp + 0x8) = ecx; /* 0x121BC891: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + 0xC) = eax; /* 0x121BC894: mov dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x7C00u);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0x7C00u; /* 0x121BC897: and dword ptr [ebp + 0xc], 0x7c00 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x121BC89E: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x121BC8A1: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BC8A3: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    ecx = ecx & 0x400u; /* 0x121BC8A5: and ecx, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x121BC8AB: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x121BC8B0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x121BC8B2: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = ecx; /* 0x121BC8B5: mov dword ptr [ebp + 0x10], ecx */
    ecx = 0x400u; /* 0x121BC8B8: mov ecx, 0x400 */
    /* cmp eax, ecx */ /* 0x121BC8BD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121BC8C3; /* 0x121BC8BF: ja 0x121bc8c3 */
L_121BC8C1:
    eax = ecx; /* 0x121BC8C1: mov eax, ecx */
L_121BC8C3:
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x121BC8C3: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00019800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x00019800u; /* 0x121BC8C6: add eax, 0x19800 */
    _flag_k = FK_ADD;
    if (13u) _cf = (((eax) >> 19) & 1u); /* 0x121BC8CB: shl eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 13u; /* 0x121BC8CB: shl eax, 0xd */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x8)));
    eax = eax | MEM32(ebp + 0x8); /* 0x121BC8CE: or eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x121BC8D1: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x121BC8D4: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x121BC8D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121BC8E1; /* 0x121BC8D9: jns 0x121bc8e1 */
L_121BC8DB:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x121BC8DB: fadd dword ptr [0x120014d0] */
L_121BC8E1:
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x121BC8E1: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + esi * 4) = _v; } /* 0x121BC8E4: fstp dword ptr [ebx + esi*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121BC8E7: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x121BC8E8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121BC882; /* 0x121BC8EA: jb 0x121bc882 */
L_121BC8EC:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BC8EC: mov ecx, dword ptr [ebp - 4] */
L_121BC8EF:
    edi = POP32_VAL(esp); /* 0x121BC8EF: pop edi */
    esi = POP32_VAL(esp); /* 0x121BC8F0: pop esi */
    eax = ecx; /* 0x121BC8F1: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x121BC8F3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BC8F4: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BC8F5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BC8FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BC8FDu);

L_121BC8FD:
    _xmm[7] = xmm_ld(0x121D9300); /* 0x121BC8FD: movdqa xmm7, xmmword ptr [0x121d9300] */
    _xmm[6] = _xmm[7]; /* 0x121BC905: movdqa xmm6, xmm7 */
    _xmm[2] = _xmm[7]; /* 0x121BC909: movaps xmm2, xmm7 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x121BC90C: pand xmm7, xmm0 */
    _xmm[3] = _xmm[2]; /* 0x121BC910: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] & _s.u32[_k]; } /* 0x121BC913: pand xmm6, xmm1 */
    void_lift_trap(0x121BC917u, "packssdw xmm7, xmm6");
    _xmm[6] = xmm_ld(0x121D92F0); /* 0x121BC91B: movaps xmm6, xmmword ptr [0x121d92f0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = ~_xmm[2].u32[_k] & _s.u32[_k]; } /* 0x121BC922: andnps xmm2, xmm0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = ~_xmm[3].u32[_k] & _s.u32[_k]; } /* 0x121BC925: andnps xmm3, xmm1 */
    _xmm[0] = _xmm[2]; /* 0x121BC928: movaps xmm0, xmm2 */
    _xmm[1] = _xmm[3]; /* 0x121BC92B: movaps xmm1, xmm3 */
    { double _s0 = _xmm[6].f32[0]; double _s1 = _xmm[6].f32[1]; double _s2 = _xmm[6].f32[2]; double _s3 = _xmm[6].f32[3]; _xmm[2].u32[0] = sse_cmp_pred(_xmm[2].f32[0], _s0, 1); _xmm[2].u32[1] = sse_cmp_pred(_xmm[2].f32[1], _s1, 1); _xmm[2].u32[2] = sse_cmp_pred(_xmm[2].f32[2], _s2, 1); _xmm[2].u32[3] = sse_cmp_pred(_xmm[2].f32[3], _s3, 1); } /* 0x121BC92E: cmpltps xmm2, xmm6 */
    { double _s0 = _xmm[6].f32[0]; double _s1 = _xmm[6].f32[1]; double _s2 = _xmm[6].f32[2]; double _s3 = _xmm[6].f32[3]; _xmm[3].u32[0] = sse_cmp_pred(_xmm[3].f32[0], _s0, 1); _xmm[3].u32[1] = sse_cmp_pred(_xmm[3].f32[1], _s1, 1); _xmm[3].u32[2] = sse_cmp_pred(_xmm[3].f32[2], _s2, 1); _xmm[3].u32[3] = sse_cmp_pred(_xmm[3].f32[3], _s3, 1); } /* 0x121BC932: cmpltps xmm3, xmm6 */
    _xmm[4] = _xmm[2]; /* 0x121BC936: movaps xmm4, xmm2 */
    _xmm[5] = _xmm[3]; /* 0x121BC939: movaps xmm5, xmm3 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x121BC93C: andps xmm2, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x121BC93F: andps xmm3, xmm6 */
    _xmm[6] = xmm_ld(0x121D9310); /* 0x121BC942: movdqa xmm6, xmmword ptr [0x121d9310] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BC94A: addps xmm0, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BC94D: addps xmm1, xmm3 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _xmm[4].u32[_k] & _s.u32[_k]; } /* 0x121BC950: andps xmm4, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x121BC953: andps xmm5, xmm6 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] -= _s.u32[_k]; } /* 0x121BC956: psubd xmm0, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] -= _s.u32[_k]; } /* 0x121BC95A: psubd xmm1, xmm5 */
    _xmm[4] = _xmm[0]; /* 0x121BC95E: movdqa xmm4, xmm0 */
    _xmm[5] = _xmm[1]; /* 0x121BC962: movdqa xmm5, xmm1 */
    _xmm[6] = xmm_ld(0x121D9360); /* 0x121BC966: movdqa xmm6, xmmword ptr [0x121d9360] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] += _s.u32[_k]; } /* 0x121BC96E: paddd xmm4, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] += _s.u32[_k]; } /* 0x121BC972: paddd xmm5, xmm6 */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[4].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[4].u32[_k] >> _c); } /* 0x121BC976: psrld xmm4, 0xd */
    { uint64_t _c = 13u; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[5].u32[_k] >> _c); } /* 0x121BC97B: psrld xmm5, 0xd */
    void_lift_trap(0x121BC980u, "packssdw xmm4, xmm5");
    _xmm[6] = xmm_ld(0x121D9350); /* 0x121BC984: movdqa xmm6, xmmword ptr [0x121d9350] */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 8; _k++) if (_s.i16[_k] < _xmm[4].i16[_k]) _xmm[4].i16[_k] = _s.i16[_k]; } /* 0x121BC98C: pminsw xmm4, xmm6 */
    _xmm[1] = _xmm[4]; /* 0x121BC990: movdqa xmm1, xmm4 */
    { uint64_t _c = 15u; for (int _k = 0; _k < 8; _k++) _xmm[1].i16[_k] = _xmm[1].i16[_k] >> (_c > 15 ? 15 : (int)_c); } /* 0x121BC994: psraw xmm1, 0xf */
    _xmm[2] = _xmm[1]; /* 0x121BC999: movdqa xmm2, xmm1 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x121BC99D: pand xmm1, xmm6 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = ~_xmm[2].u32[_k] & _s.u32[_k]; } /* 0x121BC9A1: pandn xmm2, xmm4 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x121BC9A5: por xmm2, xmm1 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] | _s.u32[_k]; } /* 0x121BC9A9: por xmm7, xmm2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BC9AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BC9B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BC9B3u);

L_121BC9B3:
    edi = edi; /* 0x121BC9B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BC9B5: push ebp */
    ebp = esp; /* 0x121BC9B6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121BC9B8: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x121BC9BB: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x121BC9BE: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x121BC9BF: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121BC9C2: push esi */
    esi = eax; /* 0x121BC9C3: mov esi, eax */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x121BC9C5: shr esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 3u; /* 0x121BC9C5: shr esi, 3 */
    PUSH32(esp, edi); /* 0x121BC9C8: push edi */
    edi = MEM32(ebp + 0xC); /* 0x121BC9C9: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x121BC9CC: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = esi; /* 0x121BC9CF: mov dword ptr [ebp - 8], esi */
    /* test esi, esi */ /* 0x121BC9D2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BCA03; /* 0x121BC9D4: je 0x121bca03 */
L_121BC9D6:
    eax = MEM32(ebp + 0xC); /* 0x121BC9D6: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0] = xmm_ld(eax); /* 0x121BC9D9: movdqu xmm0, xmmword ptr [eax] */
    _xmm[1] = xmm_ld(eax + 0x10); /* 0x121BC9DD: movdqu xmm1, xmmword ptr [eax + 0x10] */
    RECOMP_CALL(sub_121BC8FD); /* 0x121BC9E2: call 0x121bc8fd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x121BC9E7: mov eax, dword ptr [ebp + 8] */
    xmm_st(eax, _xmm[7]); /* 0x121BC9EA: movdqu xmmword ptr [eax], xmm7 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x121BC9EE: add edi, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x121BC9F1: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BC9F4: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = edi; /* 0x121BC9F5: mov dword ptr [ebp + 0xc], edi */
    MEM32(ebp + 0x8) = ebx; /* 0x121BC9F8: mov dword ptr [ebp + 8], ebx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BC9D6; /* 0x121BC9FB: jne 0x121bc9d6 */
L_121BC9FD:
    esi = MEM32(ebp + (-0x8)); /* 0x121BC9FD: mov esi, dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x10); /* 0x121BCA00: mov eax, dword ptr [ebp + 0x10] */
L_121BCA03:
    ecx = esi; /* 0x121BCA03: mov ecx, esi */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x121BCA05: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x121BCA05: shl ecx, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x121BCA08: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x121BCA0A: push eax */
    PUSH32(esp, edi); /* 0x121BCA0B: push edi */
    PUSH32(esp, ebx); /* 0x121BCA0C: push ebx */
    RECOMP_CALL(sub_1202FC9C); /* 0x121BCA0D: call 0x1202fc9c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x121BCA12: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x121BCA15: pop edi */
    esi = POP32_VAL(esp); /* 0x121BCA16: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BCA17: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BCA18: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BCA19: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BCA21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BCA21u);

L_121BCA21:
    edi = edi; /* 0x121BCA21: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BCA23: push ebp */
    ebp = esp; /* 0x121BCA24: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BCA26: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x121BCA29: movss xmm0, dword ptr [eax] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x121BCA2D: movss xmm1, dword ptr [eax + 4] */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x121BCA32: movss xmm2, dword ptr [eax + 8] */
    _xmm[3] = _xmm[0]; /* 0x121BCA37: movaps xmm3, xmm0 */
    _xmm[4] = _xmm[1]; /* 0x121BCA3A: movaps xmm4, xmm1 */
    _xmm[5] = _xmm[2]; /* 0x121BCA3D: movaps xmm5, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BCA40: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BCA44: mulss xmm1, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BCA48: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BCA4C: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BCA50: addss xmm0, xmm2 */
    ecx = MEM32(ebp + 0x8); /* 0x121BCA54: mov ecx, dword ptr [ebp + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x12018070))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x121BCA57: comiss xmm0, dword ptr [0x12018070] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_121BCA6D; /* 0x121BCA5E: jae 0x121bca6d */
L_121BCA60:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BCA60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x121BCA62: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x121BCA64: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x121BCA67: mov dword ptr [ecx + 8], eax */
    goto L_121BCAAE; /* 0x121BCA6A: jmp 0x121bcaae */
L_121BCA6D:
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BCA6D: rsqrtss xmm6, xmm0 */
    _xmm[7] = _xmm[6]; /* 0x121BCA71: movaps xmm7, xmm6 */
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BCA74: mulss xmm6, xmm0 */
    { float _s = _xmm[7].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BCA78: mulss xmm6, xmm7 */
    _xmm[1].u64[0] = MEM32(0x12018050); _xmm[1].u64[1] = 0; /* 0x121BCA7C: movss xmm1, dword ptr [0x12018050] */
    { float _s = sse_f32(MEM32(0x12018060)); _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x121BCA84: mulss xmm7, dword ptr [0x12018060] */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x121BCA8C: subss xmm1, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BCA90: mulss xmm1, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x121BCA94: mulss xmm3, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x121BCA98: mulss xmm4, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BCA9C: mulss xmm5, xmm1 */
    MEM32(ecx) = _xmm[3].u32[0]; /* 0x121BCAA0: movss dword ptr [ecx], xmm3 */
    MEM32(ecx + 0x4) = _xmm[4].u32[0]; /* 0x121BCAA4: movss dword ptr [ecx + 4], xmm4 */
    MEM32(ecx + 0x8) = _xmm[5].u32[0]; /* 0x121BCAA9: movss dword ptr [ecx + 8], xmm5 */
L_121BCAAE:
    eax = MEM32(ebp + 0x8); /* 0x121BCAAE: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BCAB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121BCAB2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121BCABA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BCABAu);

L_121BCABA:
    edi = edi; /* 0x121BCABA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BCABC: push ebp */
    ebp = esp; /* 0x121BCABD: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BCABF: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x121BCAC2: movss xmm0, dword ptr [eax] */
    _xmm[1].u64[0] = MEM32(eax + 0x4); _xmm[1].u64[1] = 0; /* 0x121BCAC6: movss xmm1, dword ptr [eax + 4] */
    _xmm[2].u64[0] = MEM32(eax + 0x8); _xmm[2].u64[1] = 0; /* 0x121BCACB: movss xmm2, dword ptr [eax + 8] */
    _xmm[3] = _xmm[0]; /* 0x121BCAD0: movaps xmm3, xmm0 */
    _xmm[4] = _xmm[1]; /* 0x121BCAD3: movaps xmm4, xmm1 */
    _xmm[5] = _xmm[2]; /* 0x121BCAD6: movaps xmm5, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BCAD9: mulss xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BCADD: mulss xmm1, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BCAE1: mulss xmm2, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BCAE5: addss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BCAE9: addss xmm0, xmm2 */
    ecx = MEM32(ebp + 0x8); /* 0x121BCAED: mov ecx, dword ptr [ebp + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x12018070))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x121BCAF0: comiss xmm0, dword ptr [0x12018070] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_121BCB0A; /* 0x121BCAF7: jae 0x121bcb0a */
L_121BCAF9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BCAF9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x121BCAFB: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x121BCAFD: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x121BCB00: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x121BCB03: mov dword ptr [ecx + 0xc], eax */
    goto L_121BCB55; /* 0x121BCB06: jmp 0x121bcb55 */
L_121BCB0A:
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BCB0A: rsqrtss xmm6, xmm0 */
    _xmm[7] = _xmm[6]; /* 0x121BCB0E: movaps xmm7, xmm6 */
    { float _s = _xmm[0].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BCB11: mulss xmm6, xmm0 */
    { float _s = _xmm[7].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BCB15: mulss xmm6, xmm7 */
    _xmm[1].u64[0] = MEM32(0x12018050); _xmm[1].u64[1] = 0; /* 0x121BCB19: movss xmm1, dword ptr [0x12018050] */
    { float _s = sse_f32(MEM32(0x12018060)); _xmm[7].f32[0] = (float)(_xmm[7].f32[0] * _s); } /* 0x121BCB21: mulss xmm7, dword ptr [0x12018060] */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x121BCB29: subss xmm1, xmm6 */
    { float _s = _xmm[7].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BCB2D: mulss xmm1, xmm7 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x121BCB31: mulss xmm3, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x121BCB35: mulss xmm4, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BCB39: mulss xmm5, xmm1 */
    { float _s = sse_f32(MEM32(eax + 0xC)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BCB3D: mulss xmm1, dword ptr [eax + 0xc] */
    MEM32(ecx) = _xmm[3].u32[0]; /* 0x121BCB42: movss dword ptr [ecx], xmm3 */
    MEM32(ecx + 0x4) = _xmm[4].u32[0]; /* 0x121BCB46: movss dword ptr [ecx + 4], xmm4 */
    MEM32(ecx + 0x8) = _xmm[5].u32[0]; /* 0x121BCB4B: movss dword ptr [ecx + 8], xmm5 */
    MEM32(ecx + 0xC) = _xmm[1].u32[0]; /* 0x121BCB50: movss dword ptr [ecx + 0xc], xmm1 */
L_121BCB55:
    eax = MEM32(ebp + 0x8); /* 0x121BCB55: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BCB58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121BCB59: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121BCB61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BCB61u);

L_121BCB61:
    PUSH32(esp, ebx); /* 0x121BCB61: push ebx */
    ebx = esp; /* 0x121BCB62: mov ebx, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x121BCB64: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BCB67: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x121BCB6A: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BCB6D: push ebp */
    PUSH32(esp, ebp); /* 0x121BCB6E: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BCB6F: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BCB72: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BCB76: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x110u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x110u; /* 0x121BCB78: sub esp, 0x110 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x10); /* 0x121BCB7E: mov eax, dword ptr [ebx + 0x10] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x121BCB81: xorps xmm0, xmm0 */
    _xmm[2].u64[0] = MEM64(eax + 0x8); /* 0x121BCB84: movlps xmm2, qword ptr [eax + 8] */
    _xmm[4].u64[0] = MEM64(eax + 0x28); /* 0x121BCB88: movlps xmm4, qword ptr [eax + 0x28] */
    _xmm[2].u64[1] = MEM64(eax + 0x18); /* 0x121BCB8C: movhps xmm2, qword ptr [eax + 0x18] */
    _xmm[4].u64[1] = MEM64(eax + 0x38); /* 0x121BCB90: movhps xmm4, qword ptr [eax + 0x38] */
    _xmm[3].u64[0] = MEM64(eax + 0x20); /* 0x121BCB94: movlps xmm3, qword ptr [eax + 0x20] */
    _xmm[1].u64[0] = MEM64(eax); /* 0x121BCB98: movlps xmm1, qword ptr [eax] */
    _xmm[3].u64[1] = MEM64(eax + 0x30); /* 0x121BCB9B: movhps xmm3, qword ptr [eax + 0x30] */
    _xmm[1].u64[1] = MEM64(eax + 0x10); /* 0x121BCB9F: movhps xmm1, qword ptr [eax + 0x10] */
    _xmm[5] = _xmm[2]; /* 0x121BCBA3: movaps xmm5, xmm2 */
    { xmm_t _s = _xmm[4], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[2]; } /* 0x121BCBA6: shufps xmm5, xmm4, 0x88 */
    { xmm_t _s = _xmm[2], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[3]; _xmm[4].u32[2] = _s.u32[1]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x121BCBAA: shufps xmm4, xmm2, 0xdd */
    _xmm[2] = _xmm[4]; /* 0x121BCBAE: movaps xmm2, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BCBB1: mulps xmm2, xmm5 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BCBB4: shufps xmm2, xmm2, 0xb1 */
    _xmm[6] = _xmm[2]; /* 0x121BCBB8: movaps xmm6, xmm2 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[2]; _xmm[6].u32[1] = _d.u32[3]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x121BCBBB: shufps xmm6, xmm6, 0x4e */
    _xmm[7] = _xmm[3]; /* 0x121BCBBF: movaps xmm7, xmm3 */
    { xmm_t _s = _xmm[1], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BCBC2: shufps xmm3, xmm1, 0xdd */
    { xmm_t _s = _xmm[7], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x121BCBC6: shufps xmm1, xmm7, 0x88 */
    _xmm[7] = _xmm[3]; /* 0x121BCBCA: movaps xmm7, xmm3 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BCBCD: mulps xmm3, xmm6 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BCBD0: mulps xmm6, xmm1 */
    xmm_st(ebp + (-0xD0), _xmm[6]); /* 0x121BCBD3: movaps xmmword ptr [ebp - 0xd0], xmm6 */
    _xmm[6] = _xmm[7]; /* 0x121BCBDA: movaps xmm6, xmm7 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCBDD: mulps xmm7, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BCBE0: mulps xmm2, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x121BCBE3: subps xmm3, xmm7 */
    _xmm[7] = _xmm[6]; /* 0x121BCBE6: movaps xmm7, xmm6 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCBE9: mulps xmm7, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x121BCBEC: shufps xmm5, xmm5, 0x4e */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[1]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[3]; _xmm[7].u32[3] = _s.u32[2]; } /* 0x121BCBF0: shufps xmm7, xmm7, 0xb1 */
    xmm_st(ebp + (-0xC0), _xmm[2]); /* 0x121BCBF4: movaps xmmword ptr [ebp - 0xc0], xmm2 */
    _xmm[2] = _xmm[4]; /* 0x121BCBFB: movaps xmm2, xmm4 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BCBFE: mulps xmm2, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BCC01: addps xmm2, xmm3 */
    _xmm[3] = _xmm[7]; /* 0x121BCC04: movaps xmm3, xmm7 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[2]; _xmm[7].u32[1] = _d.u32[3]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[1]; } /* 0x121BCC07: shufps xmm7, xmm7, 0x4e */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BCC0B: mulps xmm3, xmm1 */
    xmm_st(ebp + (-0xB0), _xmm[3]); /* 0x121BCC0E: movaps xmmword ptr [ebp - 0xb0], xmm3 */
    _xmm[3] = _xmm[4]; /* 0x121BCC15: movaps xmm3, xmm4 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BCC18: mulps xmm3, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCC1B: mulps xmm7, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BCC1E: subps xmm2, xmm3 */
    _xmm[3] = _xmm[6]; /* 0x121BCC21: movaps xmm3, xmm6 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BCC24: shufps xmm3, xmm3, 0x4e */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BCC28: mulps xmm3, xmm4 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[2]; } /* 0x121BCC2B: shufps xmm3, xmm3, 0xb1 */
    xmm_st(ebp + (-0xA0), _xmm[7]); /* 0x121BCC2F: movaps xmmword ptr [ebp - 0xa0], xmm7 */
    _xmm[7] = _xmm[5]; /* 0x121BCC36: movaps xmm7, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BCC39: mulps xmm5, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BCC3C: addps xmm5, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x121BCC3F: movaps xmm2, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BCC42: shufps xmm3, xmm3, 0x4e */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BCC46: mulps xmm2, xmm1 */
    xmm_st(ebp + (-0x90), _xmm[4]); /* 0x121BCC49: movaps xmmword ptr [ebp - 0x90], xmm4 */
    _xmm[4] = _xmm[7]; /* 0x121BCC50: movaps xmm4, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCC53: mulps xmm7, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BCC56: mulps xmm3, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x121BCC59: subps xmm5, xmm7 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x121BCC5C: subps xmm3, xmm2 */
    _xmm[2] = _xmm[1]; /* 0x121BCC5F: movaps xmm2, xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BCC62: mulps xmm1, xmm5 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BCC65: shufps xmm3, xmm3, 0x4e */
    _xmm[7] = _xmm[1]; /* 0x121BCC69: movaps xmm7, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[2]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BCC6C: shufps xmm1, xmm1, 0x4e */
    xmm_st(ebp + (-0xE0), _xmm[5]); /* 0x121BCC70: movaps xmmword ptr [ebp - 0xe0], xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BCC77: addps xmm1, xmm7 */
    _xmm[5] = _xmm[1]; /* 0x121BCC7A: movaps xmm5, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x121BCC7D: shufps xmm1, xmm1, 0xb1 */
    { float _s = _xmm[5].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x121BCC81: addss xmm1, xmm5 */
    xmm_st(ebp + (-0xF0), _xmm[1]); /* 0x121BCC85: movaps xmmword ptr [ebp - 0xf0], xmm1 */
    _xmm[5] = _xmm[6]; /* 0x121BCC8C: movaps xmm5, xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BCC8F: mulps xmm5, xmm2 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[3]; _xmm[5].u32[3] = _s.u32[2]; } /* 0x121BCC92: shufps xmm5, xmm5, 0xb1 */
    _xmm[7] = _xmm[5]; /* 0x121BCC96: movaps xmm7, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x121BCC99: shufps xmm5, xmm5, 0x4e */
    xmm_st(ebp + (-0x80), _xmm[4]); /* 0x121BCC9D: movaps xmmword ptr [ebp - 0x80], xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0x90)); /* 0x121BCCA1: movaps xmm4, xmmword ptr [ebp - 0x90] */
    xmm_st(ebp + (-0x70), _xmm[6]); /* 0x121BCCA8: movaps xmmword ptr [ebp - 0x70], xmm6 */
    _xmm[6] = _xmm[4]; /* 0x121BCCAC: movaps xmm6, xmm4 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BCCAF: mulps xmm6, xmm7 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BCCB2: addps xmm6, xmm3 */
    _xmm[3] = _xmm[4]; /* 0x121BCCB5: movaps xmm3, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BCCB8: mulps xmm3, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x121BCCBB: subps xmm3, xmm6 */
    _xmm[6] = _xmm[4]; /* 0x121BCCBE: movaps xmm6, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BCCC1: mulps xmm6, xmm2 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[3]; _xmm[6].u32[3] = _s.u32[2]; } /* 0x121BCCC4: shufps xmm6, xmm6, 0xb1 */
    xmm_st(ebp + (-0x60), _xmm[5]); /* 0x121BCCC8: movaps xmmword ptr [ebp - 0x60], xmm5 */
    _xmm[5] = xmm_ld(ebp + (-0x70)); /* 0x121BCCCC: movaps xmm5, xmmword ptr [ebp - 0x70] */
    xmm_st(ebp + (-0x50), _xmm[7]); /* 0x121BCCD0: movaps xmmword ptr [ebp - 0x50], xmm7 */
    _xmm[7] = _xmm[6]; /* 0x121BCCD4: movaps xmm7, xmm6 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCCD7: mulps xmm7, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x121BCCDA: addps xmm7, xmm3 */
    _xmm[3] = _xmm[6]; /* 0x121BCCDD: movaps xmm3, xmm6 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BCCE0: shufps xmm3, xmm3, 0x4e */
    xmm_st(ebp + (-0x40), _xmm[4]); /* 0x121BCCE4: movaps xmmword ptr [ebp - 0x40], xmm4 */
    _xmm[4] = _xmm[5]; /* 0x121BCCE8: movaps xmm4, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BCCEB: mulps xmm5, xmm3 */
    xmm_st(ebp + (-0x30), _xmm[4]); /* 0x121BCCEE: movaps xmmword ptr [ebp - 0x30], xmm4 */
    _xmm[4] = _xmm[6]; /* 0x121BCCF2: movaps xmm4, xmm6 */
    _xmm[6] = _xmm[7]; /* 0x121BCCF5: movaps xmm6, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[6] = _d; } /* 0x121BCCF8: subps xmm6, xmm5 */
    _xmm[5] = xmm_ld(ebp + (-0xD0)); /* 0x121BCCFB: movaps xmm5, xmmword ptr [ebp - 0xd0] */
    _xmm[7] = xmm_ld(ebp + (-0xC0)); /* 0x121BCD02: movaps xmm7, xmmword ptr [ebp - 0xc0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x121BCD09: subps xmm5, xmm7 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x121BCD0C: shufps xmm5, xmm5, 0x4e */
    _xmm[7] = xmm_ld(ebp + (-0x80)); /* 0x121BCD10: movaps xmm7, xmmword ptr [ebp - 0x80] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BCD14: mulps xmm4, xmm7 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BCD17: mulps xmm3, xmm7 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x121BCD1A: subps xmm5, xmm4 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BCD1D: mulps xmm2, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BCD20: addps xmm3, xmm5 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BCD23: shufps xmm2, xmm2, 0xb1 */
    _xmm[4] = _xmm[2]; /* 0x121BCD27: movaps xmm4, xmm2 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _d.u32[3]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121BCD2A: shufps xmm4, xmm4, 0x4e */
    _xmm[5] = xmm_ld(ebp + (-0x40)); /* 0x121BCD2E: movaps xmm5, xmmword ptr [ebp - 0x40] */
    xmm_st(ebp + (-0x20), _xmm[6]); /* 0x121BCD32: movaps xmmword ptr [ebp - 0x20], xmm6 */
    _xmm[6] = _xmm[5]; /* 0x121BCD36: movaps xmm6, xmm5 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BCD39: mulps xmm5, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BCD3C: mulps xmm6, xmm4 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BCD3F: addps xmm5, xmm3 */
    _xmm[3] = _xmm[4]; /* 0x121BCD42: movaps xmm3, xmm4 */
    _xmm[4] = _xmm[5]; /* 0x121BCD45: movaps xmm4, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x121BCD48: subps xmm4, xmm6 */
    _xmm[5] = xmm_ld(ebp + (-0xA0)); /* 0x121BCD4B: movaps xmm5, xmmword ptr [ebp - 0xa0] */
    _xmm[6] = xmm_ld(ebp + (-0xB0)); /* 0x121BCD52: movaps xmm6, xmmword ptr [ebp - 0xb0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x121BCD59: subps xmm5, xmm6 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x121BCD5C: shufps xmm5, xmm5, 0x4e */
    _xmm[6] = xmm_ld(ebp + (-0x50)); /* 0x121BCD60: movaps xmm6, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BCD64: mulps xmm6, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[6] = _d; } /* 0x121BCD67: subps xmm6, xmm5 */
    _xmm[5] = xmm_ld(ebp + (-0x60)); /* 0x121BCD6A: movaps xmm5, xmmword ptr [ebp - 0x60] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCD6E: mulps xmm7, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[6] = _d; } /* 0x121BCD71: subps xmm6, xmm7 */
    _xmm[5] = xmm_ld(ebp + (-0x30)); /* 0x121BCD74: movaps xmm5, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BCD78: mulps xmm2, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BCD7B: mulps xmm5, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[6] = _d; } /* 0x121BCD7E: subps xmm6, xmm2 */
    _xmm[2] = _xmm[5]; /* 0x121BCD81: movaps xmm2, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BCD84: addps xmm2, xmm6 */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x121BCD87: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    _xmm[6] = xmm_ld(ebp + (-0x20)); /* 0x121BCD8A: movaps xmm6, xmmword ptr [ebp - 0x20] */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_121BCDFD; /* 0x121BCD8E: je 0x121bcdfd */
L_121BCD90:
    eax = MEM32(ebx + 0xC); /* 0x121BCD90: mov eax, dword ptr [ebx + 0xc] */
    /* test eax, eax */ /* 0x121BCD93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BCD9E; /* 0x121BCD95: je 0x121bcd9e */
L_121BCD97:
    _xmm[0] = _xmm[1]; /* 0x121BCD97: movaps xmm0, xmm1 */
    MEM32(eax) = _xmm[0].u32[0]; /* 0x121BCD9A: movss dword ptr [eax], xmm0 */
L_121BCD9E:
    _xmm[0] = _xmm[1]; /* 0x121BCD9E: movaps xmm0, xmm1 */
    _xmm[1] = xmm_ld(ebp + (-0xE0)); /* 0x121BCDA1: movaps xmm1, xmmword ptr [ebp - 0xe0] */
    eax = MEM32(ebx + 0x8); /* 0x121BCDA8: mov eax, dword ptr [ebx + 8] */
    _xmm[3] = _xmm[0]; /* 0x121BCDAB: movaps xmm3, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(1.0f / _s); } /* 0x121BCDAE: rcpss xmm0, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x121BCDB2: movaps xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BCDB5: mulss xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x121BCDB9: mulss xmm3, xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x121BCDBD: addss xmm5, xmm5 */
    { float _s = _xmm[3].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x121BCDC1: subss xmm5, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121BCDC5: shufps xmm5, xmm5, 0 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BCDC9: mulps xmm1, xmm5 */
    MEM64(eax) = _xmm[1].u64[0]; /* 0x121BCDCC: movlps qword ptr [eax], xmm1 */
    MEM64(eax + 0x8) = _xmm[1].u64[1]; /* 0x121BCDCF: movhps qword ptr [eax + 8], xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BCDD3: mulps xmm4, xmm5 */
    MEM64(eax + 0x10) = _xmm[4].u64[0]; /* 0x121BCDD6: movlps qword ptr [eax + 0x10], xmm4 */
    MEM64(eax + 0x18) = _xmm[4].u64[1]; /* 0x121BCDDA: movhps qword ptr [eax + 0x18], xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BCDDE: mulps xmm6, xmm5 */
    MEM64(eax + 0x20) = _xmm[6].u64[0]; /* 0x121BCDE1: movlps qword ptr [eax + 0x20], xmm6 */
    MEM64(eax + 0x28) = _xmm[6].u64[1]; /* 0x121BCDE5: movhps qword ptr [eax + 0x28], xmm6 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BCDE9: mulps xmm5, xmm2 */
    MEM64(eax + 0x30) = _xmm[5].u64[0]; /* 0x121BCDEC: movlps qword ptr [eax + 0x30], xmm5 */
    MEM64(eax + 0x38) = _xmm[5].u64[1]; /* 0x121BCDF0: movhps qword ptr [eax + 0x38], xmm5 */
    esp = ebp; /* 0x121BCDF4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BCDF6: pop ebp */
    esp = ebx; /* 0x121BCDF7: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BCDF9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BCDFA: ret 0xc */
L_121BCDFD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BCDFD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x121BCDFF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BCE01: pop ebp */
    esp = ebx; /* 0x121BCE02: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BCE04: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BCE05: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BCE0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BCE0Eu);

L_121BCE0E:
    edi = edi; /* 0x121BCE0E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BCE10: push ebp */
    ebp = esp; /* 0x121BCE11: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BCE13: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x121BCE16: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x121BCE19: mov edx, dword ptr [ebp + 8] */
    _xmm[0].u64[0] = MEM64(ecx); /* 0x121BCE1C: movlps xmm0, qword ptr [ecx] */
    _xmm[0].u64[1] = MEM64(ecx + 0x8); /* 0x121BCE1F: movhps xmm0, qword ptr [ecx + 8] */
    _xmm[1].u64[0] = MEM64(ecx + 0x10); /* 0x121BCE23: movlps xmm1, qword ptr [ecx + 0x10] */
    _xmm[1].u64[1] = MEM64(ecx + 0x18); /* 0x121BCE27: movhps xmm1, qword ptr [ecx + 0x18] */
    _xmm[2].u64[0] = MEM64(ecx + 0x20); /* 0x121BCE2B: movlps xmm2, qword ptr [ecx + 0x20] */
    _xmm[2].u64[1] = MEM64(ecx + 0x28); /* 0x121BCE2F: movhps xmm2, qword ptr [ecx + 0x28] */
    _xmm[3].u64[0] = MEM64(ecx + 0x30); /* 0x121BCE33: movlps xmm3, qword ptr [ecx + 0x30] */
    _xmm[3].u64[1] = MEM64(ecx + 0x38); /* 0x121BCE37: movhps xmm3, qword ptr [ecx + 0x38] */
    _xmm[4].u64[0] = MEM32(eax); _xmm[4].u64[1] = 0; /* 0x121BCE3B: movss xmm4, dword ptr [eax] */
    _xmm[5].u64[0] = MEM32(eax + 0x4); _xmm[5].u64[1] = 0; /* 0x121BCE3F: movss xmm5, dword ptr [eax + 4] */
    _xmm[6].u64[0] = MEM32(eax + 0x8); _xmm[6].u64[1] = 0; /* 0x121BCE44: movss xmm6, dword ptr [eax + 8] */
    _xmm[7].u64[0] = MEM32(eax + 0xC); _xmm[7].u64[1] = 0; /* 0x121BCE49: movss xmm7, dword ptr [eax + 0xc] */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121BCE4E: shufps xmm4, xmm4, 0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121BCE52: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121BCE56: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BCE5A: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BCE5E: mulps xmm4, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BCE61: mulps xmm5, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BCE64: mulps xmm6, xmm2 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCE67: mulps xmm7, xmm3 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BCE6A: addps xmm4, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BCE6D: addps xmm6, xmm7 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BCE70: addps xmm4, xmm6 */
    _xmm[5].u64[0] = MEM32(eax + 0x10); _xmm[5].u64[1] = 0; /* 0x121BCE73: movss xmm5, dword ptr [eax + 0x10] */
    _xmm[6].u64[0] = MEM32(eax + 0x14); _xmm[6].u64[1] = 0; /* 0x121BCE78: movss xmm6, dword ptr [eax + 0x14] */
    _xmm[7].u64[0] = MEM32(eax + 0x18); _xmm[7].u64[1] = 0; /* 0x121BCE7D: movss xmm7, dword ptr [eax + 0x18] */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121BCE82: shufps xmm5, xmm5, 0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121BCE86: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BCE8A: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BCE8E: mulps xmm5, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BCE91: mulps xmm6, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCE94: mulps xmm7, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BCE97: addps xmm5, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BCE9A: addps xmm5, xmm7 */
    _xmm[6].u64[0] = MEM32(eax + 0x1C); _xmm[6].u64[1] = 0; /* 0x121BCE9D: movss xmm6, dword ptr [eax + 0x1c] */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121BCEA2: shufps xmm6, xmm6, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BCEA6: mulps xmm6, xmm3 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BCEA9: addps xmm5, xmm6 */
    _xmm[6].u64[0] = MEM32(eax + 0x20); _xmm[6].u64[1] = 0; /* 0x121BCEAC: movss xmm6, dword ptr [eax + 0x20] */
    _xmm[7].u64[0] = MEM32(eax + 0x24); _xmm[7].u64[1] = 0; /* 0x121BCEB1: movss xmm7, dword ptr [eax + 0x24] */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[0]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121BCEB6: shufps xmm6, xmm6, 0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BCEBA: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BCEBE: mulps xmm6, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCEC1: mulps xmm7, xmm1 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BCEC4: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x28); _xmm[7].u64[1] = 0; /* 0x121BCEC7: movss xmm7, dword ptr [eax + 0x28] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BCECC: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCED0: mulps xmm7, xmm2 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BCED3: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x2C); _xmm[7].u64[1] = 0; /* 0x121BCED6: movss xmm7, dword ptr [eax + 0x2c] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BCEDB: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCEDF: mulps xmm7, xmm3 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BCEE2: addps xmm6, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x30); _xmm[7].u64[1] = 0; /* 0x121BCEE5: movss xmm7, dword ptr [eax + 0x30] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BCEEA: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BCEEE: mulps xmm0, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x34); _xmm[7].u64[1] = 0; /* 0x121BCEF1: movss xmm7, dword ptr [eax + 0x34] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BCEF6: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BCEFA: mulps xmm1, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x38); _xmm[7].u64[1] = 0; /* 0x121BCEFD: movss xmm7, dword ptr [eax + 0x38] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BCF02: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BCF06: mulps xmm2, xmm7 */
    _xmm[7].u64[0] = MEM32(eax + 0x3C); _xmm[7].u64[1] = 0; /* 0x121BCF09: movss xmm7, dword ptr [eax + 0x3c] */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[0]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BCF0E: shufps xmm7, xmm7, 0 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BCF12: mulps xmm3, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BCF15: addps xmm0, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BCF18: addps xmm2, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BCF1B: addps xmm0, xmm2 */
    _xmm[1] = _xmm[4]; /* 0x121BCF1E: movaps xmm1, xmm4 */
    _xmm[2] = _xmm[6]; /* 0x121BCF21: movaps xmm2, xmm6 */
    { xmm_t _s = _xmm[5], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121BCF24: unpcklps xmm4, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x121BCF27: unpcklps xmm6, xmm0 */
    { xmm_t _s = _xmm[5], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[2]; _xmm[1].u32[1] = _s.u32[2]; _xmm[1].u32[2] = _d.u32[3]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x121BCF2A: unpckhps xmm1, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _s.u32[2]; _xmm[2].u32[2] = _d.u32[3]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x121BCF2D: unpckhps xmm2, xmm0 */
    MEM64(edx) = _xmm[4].u64[0]; /* 0x121BCF30: movlps qword ptr [edx], xmm4 */
    MEM64(edx + 0x8) = _xmm[6].u64[0]; /* 0x121BCF33: movlps qword ptr [edx + 8], xmm6 */
    MEM64(edx + 0x10) = _xmm[4].u64[1]; /* 0x121BCF37: movhps qword ptr [edx + 0x10], xmm4 */
    MEM64(edx + 0x18) = _xmm[6].u64[1]; /* 0x121BCF3B: movhps qword ptr [edx + 0x18], xmm6 */
    MEM64(edx + 0x20) = _xmm[1].u64[0]; /* 0x121BCF3F: movlps qword ptr [edx + 0x20], xmm1 */
    MEM64(edx + 0x28) = _xmm[2].u64[0]; /* 0x121BCF43: movlps qword ptr [edx + 0x28], xmm2 */
    MEM64(edx + 0x30) = _xmm[1].u64[1]; /* 0x121BCF47: movhps qword ptr [edx + 0x30], xmm1 */
    MEM64(edx + 0x38) = _xmm[2].u64[1]; /* 0x121BCF4B: movhps qword ptr [edx + 0x38], xmm2 */
    eax = MEM32(ebp + 0x8); /* 0x121BCF4F: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x121BCF52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BCF53: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BCF5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BCF5Bu);

L_121BCF5B:
    edi = edi; /* 0x121BCF5B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BCF5D: push ebp */
    ebp = esp; /* 0x121BCF5E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BCF60: mov eax, dword ptr [ebp + 0xc] */
    _xmm[7] = xmm_ld(eax); /* 0x121BCF63: movups xmm7, xmmword ptr [eax] */
    eax = MEM32(ebp + 0x10); /* 0x121BCF66: mov eax, dword ptr [ebp + 0x10] */
    _xmm[0] = xmm_ld(eax); /* 0x121BCF69: movups xmm0, xmmword ptr [eax] */
    eax = MEM32(ebp + 0x14); /* 0x121BCF6C: mov eax, dword ptr [ebp + 0x14] */
    _xmm[5] = xmm_ld(eax); /* 0x121BCF6F: movups xmm5, xmmword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x121BCF72: mov eax, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BCF75: shufps xmm0, xmm0, 0x39 */
    _xmm[6] = _xmm[5]; /* 0x121BCF79: movaps xmm6, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x121BCF7C: shufps xmm5, xmm5, 0x4e */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BCF80: mulps xmm6, xmm0 */
    _xmm[4] = _xmm[5]; /* 0x121BCF83: movaps xmm4, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BCF86: mulps xmm4, xmm0 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[3]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121BCF89: shufps xmm5, xmm5, 0x39 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BCF8D: mulps xmm5, xmm0 */
    _xmm[2] = _xmm[4]; /* 0x121BCF90: movaps xmm2, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[3]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BCF93: shufps xmm2, xmm4, 0x39 */
    _xmm[0] = _xmm[6]; /* 0x121BCF97: movaps xmm0, xmm6 */
    { xmm_t _s = _xmm[6], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _d.u32[3]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BCF9A: shufps xmm0, xmm6, 0x4e */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BCF9E: subps xmm2, xmm0 */
    { xmm_t _s = _xmm[7], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[1]; _xmm[7].u32[1] = _d.u32[2]; _xmm[7].u32[2] = _s.u32[3]; _xmm[7].u32[3] = _s.u32[0]; } /* 0x121BCFA1: shufps xmm7, xmm7, 0x39 */
    _xmm[0] = _xmm[7]; /* 0x121BCFA5: movaps xmm0, xmm7 */
    { xmm_t _s = _xmm[7], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BCFA8: shufps xmm0, xmm7, 0x39 */
    _xmm[3] = _xmm[5]; /* 0x121BCFAC: movaps xmm3, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BCFAF: shufps xmm3, xmm5, 0x4e */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x121BCFB3: subps xmm3, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BCFB6: mulps xmm3, xmm0 */
    { xmm_t _s = _xmm[6], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[2]; _xmm[6].u32[2] = _s.u32[3]; _xmm[6].u32[3] = _s.u32[0]; } /* 0x121BCFB9: shufps xmm6, xmm6, 0x39 */
    _xmm[1] = _xmm[0]; /* 0x121BCFBD: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BCFC0: shufps xmm1, xmm0, 0x39 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BCFC4: mulps xmm7, xmm2 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BCFC7: addps xmm3, xmm7 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[4] = _d; } /* 0x121BCFCA: subps xmm4, xmm6 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BCFCD: mulps xmm4, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BCFD0: addps xmm3, xmm4 */
    { xmm_t _s = xmm_ld(0x121D93E0); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x121BCFD3: xorps xmm3, xmmword ptr [0x121d93e0] */
    xmm_st(eax, _xmm[3]); /* 0x121BCFDA: movups xmmword ptr [eax], xmm3 */
    ebp = POP32_VAL(esp); /* 0x121BCFDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BCFDE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121BCFE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BCFE6u);

L_121BCFE6:
    PUSH32(esp, ebx); /* 0x121BCFE6: push ebx */
    ebx = esp; /* 0x121BCFE7: mov ebx, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x121BCFE9: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BCFEC: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x121BCFEF: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BCFF2: push ebp */
    PUSH32(esp, ebp); /* 0x121BCFF3: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BCFF4: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BCFF7: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BCFFB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121BCFFD: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0xC); /* 0x121BD000: mov edx, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x14); /* 0x121BD003: mov ecx, dword ptr [ebx + 0x14] */
    _xmm[0].u64[0] = MEM32(edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BD006: movss xmm0, dword ptr [edx + 8] */
    _xmm[1].u64[0] = MEM32(ecx + 0x8); _xmm[1].u64[1] = 0; /* 0x121BD00B: movss xmm1, dword ptr [ecx + 8] */
    _xmm[0].u64[1] = MEM64(edx); /* 0x121BD010: movhps xmm0, qword ptr [edx] */
    _xmm[1].u64[1] = MEM64(ecx); /* 0x121BD013: movhps xmm1, qword ptr [ecx] */
    edx = MEM32(ebx + 0x10); /* 0x121BD016: mov edx, dword ptr [ebx + 0x10] */
    eax = MEM32(ebx + 0x8); /* 0x121BD019: mov eax, dword ptr [ebx + 8] */
    _xmm[2].u64[0] = MEM32(edx + 0x8); _xmm[2].u64[1] = 0; /* 0x121BD01C: movss xmm2, dword ptr [edx + 8] */
    _xmm[2].u64[1] = MEM64(edx); /* 0x121BD021: movhps xmm2, qword ptr [edx] */
    _xmm[3] = _xmm[0]; /* 0x121BD024: movaps xmm3, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x121BD027: subps xmm0, xmm1 */
    _xmm[1] = _xmm[0]; /* 0x121BD02A: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[3]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BD02D: shufps xmm0, xmm0, 0x78 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[2]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BD031: shufps xmm1, xmm1, 0x63 */
    _xmm[4] = _xmm[3]; /* 0x121BD035: movaps xmm4, xmm3 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[3] = _d; } /* 0x121BD038: subps xmm3, xmm2 */
    _xmm[2] = xmm_ld(0x12018050); /* 0x121BD03B: movaps xmm2, xmmword ptr [0x12018050] */
    _xmm[5] = _xmm[3]; /* 0x121BD042: movaps xmm5, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[2]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BD045: shufps xmm3, xmm3, 0x63 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[3]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x121BD049: shufps xmm5, xmm5, 0x78 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD04D: mulps xmm0, xmm3 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BD050: mulps xmm5, xmm1 */
    _xmm[1] = xmm_ld(0x12018060); /* 0x121BD053: movaps xmm1, xmmword ptr [0x12018060] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x121BD05A: subps xmm0, xmm5 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _d.u32[3]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121BD05D: shufps xmm4, xmm4, 0xe */
    _xmm[3] = _xmm[0]; /* 0x121BD061: movaps xmm3, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD064: mulps xmm0, xmm0 */
    _xmm[5] = _xmm[0]; /* 0x121BD067: movaps xmm5, xmm0 */
    _xmm[0].u64[0] = _xmm[0].u64[1]; /* 0x121BD06A: movhlps xmm0, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BD06D: addps xmm5, xmm0 */
    _xmm[0] = _xmm[5]; /* 0x121BD070: movaps xmm0, xmm5 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121BD073: shufps xmm5, xmm5, 1 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BD077: addss xmm0, xmm5 */
    _xmm[5] = _xmm[0]; /* 0x121BD07B: movaps xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BD07E: rsqrtss xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BD082: mulss xmm1, xmm0 */
    _xmm[6] = _xmm[5]; /* 0x121BD086: movaps xmm6, xmm5 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BD089: mulss xmm5, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BD08D: mulss xmm5, xmm0 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x121BD091: subss xmm2, xmm5 */
    { float _s = _xmm[2].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x121BD095: mulss xmm1, xmm2 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BD099: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BD09D: mulps xmm3, xmm1 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BD0A0: mulps xmm4, xmm3 */
    xmm_st(eax, _xmm[3]); /* 0x121BD0A3: movups xmmword ptr [eax], xmm3 */
    _xmm[6].u64[0] = _xmm[4].u64[1]; /* 0x121BD0A6: movhlps xmm6, xmm4 */
    _xmm[0] = _xmm[4]; /* 0x121BD0A9: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[1]; _xmm[4].u32[2] = _s.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121BD0AC: shufps xmm4, xmm4, 0x55 */
    { float _s = _xmm[4].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] + _s); } /* 0x121BD0B0: addss xmm6, xmm4 */
    { float _s = _xmm[6].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BD0B4: addss xmm0, xmm6 */
    { xmm_t _s = xmm_ld(0x121D9370); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x121BD0B8: xorps xmm0, xmmword ptr [0x121d9370] */
    MEM32(eax + 0xC) = _xmm[0].u32[0]; /* 0x121BD0BF: movss dword ptr [eax + 0xc], xmm0 */
    esp = ebp; /* 0x121BD0C4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BD0C6: pop ebp */
    esp = ebx; /* 0x121BD0C7: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BD0C9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BD0CA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121BD0D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BD0D3u);

L_121BD0D3:
    edi = edi; /* 0x121BD0D3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BD0D5: push ebp */
    ebp = esp; /* 0x121BD0D6: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121BD0D8: push ebx */
    eax = MEM32(ebp + 0x10); /* 0x121BD0D9: mov eax, dword ptr [ebp + 0x10] */
    _xmm[1] = xmm_ld(eax); /* 0x121BD0DC: movups xmm1, xmmword ptr [eax] */
    _xmm[2] = _xmm[1]; /* 0x121BD0DF: movaps xmm2, xmm1 */
    ebx = 0x121D93F0; /* 0x121BD0E2: lea ebx, [0x121d93f0] */
    { xmm_t _s = xmm_ld(ebx + 0x40); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x121BD0E8: andps xmm2, xmmword ptr [ebx + 0x40] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BD0EC: mulps xmm2, xmm2 */
    _xmm[3].u64[0] = _xmm[2].u64[1]; /* 0x121BD0EF: movhlps xmm3, xmm2 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BD0F2: addps xmm3, xmm2 */
    _xmm[2] = _xmm[3]; /* 0x121BD0F5: movaps xmm2, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BD0F8: shufps xmm2, xmm2, 1 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x121BD0FC: addss xmm2, xmm3 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x121BD100: xorps xmm0, xmm0 */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x121BD103: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_121BD139; /* 0x121BD106: je 0x121bd139 */
L_121BD108:
    _xmm[6] = _xmm[2]; /* 0x121BD108: movaps xmm6, xmm2 */
    { float _s = _xmm[6].f32[0]; _xmm[2].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BD10B: rsqrtss xmm2, xmm6 */
    _xmm[3] = _xmm[2]; /* 0x121BD10F: movaps xmm3, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BD112: mulss xmm6, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[6].f32[0] = (float)(_xmm[6].f32[0] * _s); } /* 0x121BD116: mulss xmm6, xmm2 */
    { float _s = sse_f32(MEM32(0x12018060)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BD11A: mulss xmm2, dword ptr [0x12018060] */
    _xmm[3].u64[0] = MEM32(0x12018050); _xmm[3].u64[1] = 0; /* 0x121BD122: movss xmm3, dword ptr [0x12018050] */
    { float _s = _xmm[6].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x121BD12A: subss xmm3, xmm6 */
    { float _s = _xmm[3].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x121BD12E: mulss xmm2, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BD132: shufps xmm2, xmm2, 0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BD136: mulps xmm2, xmm1 */
L_121BD139:
    ecx = MEM32(ebp + 0xC); /* 0x121BD139: mov ecx, dword ptr [ebp + 0xc] */
    _xmm[4] = xmm_ld(ecx); /* 0x121BD13C: movups xmm4, xmmword ptr [ecx] */
    _xmm[5] = _xmm[4]; /* 0x121BD13F: movaps xmm5, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BD142: mulps xmm5, xmm2 */
    _xmm[3].u64[0] = _xmm[5].u64[1]; /* 0x121BD145: movhlps xmm3, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BD148: addps xmm5, xmm3 */
    _xmm[3] = _xmm[5]; /* 0x121BD14B: movaps xmm3, xmm5 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121BD14E: shufps xmm3, xmm3, 1 */
    { float _s = _xmm[3].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x121BD152: addss xmm5, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[0]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[0]; } /* 0x121BD156: shufps xmm5, xmm5, 0 */
    { xmm_t _s = xmm_ld(ebx); for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x121BD15A: xorps xmm2, xmmword ptr [ebx] */
    _xmm[0] = _xmm[2]; /* 0x121BD15D: movaps xmm0, xmm2 */
    _xmm[1] = _xmm[2]; /* 0x121BD160: movaps xmm1, xmm2 */
    _xmm[3] = _xmm[2]; /* 0x121BD163: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BD166: shufps xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BD16A: shufps xmm1, xmm1, 0x55 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BD16E: shufps xmm2, xmm2, 0xaa */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BD172: shufps xmm3, xmm3, 0xff */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD176: mulps xmm0, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BD179: mulps xmm1, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BD17C: mulps xmm2, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BD17F: mulps xmm3, xmm4 */
    { float _s = _xmm[5].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x121BD182: addss xmm0, xmm5 */
    _xmm[6] = _xmm[5]; /* 0x121BD186: movaps xmm6, xmm5 */
    _xmm[7] = _xmm[5]; /* 0x121BD189: movaps xmm7, xmm5 */
    { xmm_t _s = xmm_ld(ebx + 0x10); for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] & _s.u32[_k]; } /* 0x121BD18C: andps xmm5, xmmword ptr [ebx + 0x10] */
    { xmm_t _s = xmm_ld(ebx + 0x20); for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] & _s.u32[_k]; } /* 0x121BD190: andps xmm6, xmmword ptr [ebx + 0x20] */
    { xmm_t _s = xmm_ld(ebx + 0x30); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x121BD194: andps xmm7, xmmword ptr [ebx + 0x30] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BD198: addps xmm1, xmm5 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD19B: addps xmm2, xmm6 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BD19E: addps xmm3, xmm7 */
    edx = MEM32(ebp + 0x8); /* 0x121BD1A1: mov edx, dword ptr [ebp + 8] */
    MEM64(edx) = _xmm[0].u64[0]; /* 0x121BD1A4: movlps qword ptr [edx], xmm0 */
    MEM64(edx + 0x8) = _xmm[0].u64[1]; /* 0x121BD1A7: movhps qword ptr [edx + 8], xmm0 */
    MEM64(edx + 0x10) = _xmm[1].u64[0]; /* 0x121BD1AB: movlps qword ptr [edx + 0x10], xmm1 */
    MEM64(edx + 0x18) = _xmm[1].u64[1]; /* 0x121BD1AF: movhps qword ptr [edx + 0x18], xmm1 */
    MEM64(edx + 0x20) = _xmm[2].u64[0]; /* 0x121BD1B3: movlps qword ptr [edx + 0x20], xmm2 */
    MEM64(edx + 0x28) = _xmm[2].u64[1]; /* 0x121BD1B7: movhps qword ptr [edx + 0x28], xmm2 */
    MEM64(edx + 0x30) = _xmm[3].u64[0]; /* 0x121BD1BB: movlps qword ptr [edx + 0x30], xmm3 */
    MEM64(edx + 0x38) = _xmm[3].u64[1]; /* 0x121BD1BF: movhps qword ptr [edx + 0x38], xmm3 */
    eax = MEM32(ebp + 0x8); /* 0x121BD1C3: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x121BD1C6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121BD1C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BD1C8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BD1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BD1D0u);

L_121BD1D0:
    PUSH32(esp, ebx); /* 0x121BD1D0: push ebx */
    ebx = esp; /* 0x121BD1D1: mov ebx, esp */
    PUSH32(esp, ebp); /* 0x121BD1D3: push ebp */
    PUSH32(esp, ebp); /* 0x121BD1D4: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BD1D5: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BD1D8: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BD1DC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121BD1DE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0xC); /* 0x121BD1E1: mov edx, dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x8); /* 0x121BD1E4: mov eax, dword ptr [ebx + 8] */
    _xmm[0].u64[1] = MEM64(edx + 0x8); /* 0x121BD1E7: movhps xmm0, qword ptr [edx + 8] */
    _xmm[0].u64[0] = MEM64(edx); /* 0x121BD1EB: movlps xmm0, qword ptr [edx] */
    _xmm[1] = xmm_ld(0x121D9380); /* 0x121BD1EE: movaps xmm1, xmmword ptr [0x121d9380] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x121BD1F5: andps xmm1, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BD1F8: mulps xmm1, xmm1 */
    _xmm[2].u64[0] = MEM32(0x12018050); _xmm[2].u64[1] = 0; /* 0x121BD1FB: movss xmm2, dword ptr [0x12018050] */
    _xmm[3].u64[0] = MEM32(0x12018060); _xmm[3].u64[1] = 0; /* 0x121BD203: movss xmm3, dword ptr [0x12018060] */
    _xmm[4] = _xmm[1]; /* 0x121BD20B: movaps xmm4, xmm1 */
    _xmm[1].u64[0] = _xmm[1].u64[1]; /* 0x121BD20E: movhlps xmm1, xmm1 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BD211: addps xmm4, xmm1 */
    _xmm[1] = _xmm[4]; /* 0x121BD214: movaps xmm1, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121BD217: shufps xmm4, xmm4, 1 */
    { float _s = _xmm[4].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x121BD21B: addss xmm1, xmm4 */
    _xmm[4] = xmm_ld(0x121D9390); /* 0x121BD21F: movaps xmm4, xmmword ptr [0x121d9390] */
    _xmm[5] = _xmm[1]; /* 0x121BD226: movaps xmm5, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[1].f32[0] = (float)(1.0f / sqrtf(_s)); } /* 0x121BD229: rsqrtss xmm1, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BD22D: mulss xmm5, xmm1 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x121BD231: mulss xmm5, xmm1 */
    { float _s = _xmm[5].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x121BD235: subss xmm2, xmm5 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x121BD239: mulss xmm3, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x121BD23D: mulss xmm3, xmm2 */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[0]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[0]; _xmm[3].u32[3] = _s.u32[0]; } /* 0x121BD241: shufps xmm3, xmm3, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD245: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BD248: mulps xmm4, xmm0 */
    _xmm[1] = _xmm[0]; /* 0x121BD24B: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BD24E: shufps xmm0, xmm0, 0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD252: mulps xmm0, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D93D0)); float _s1 = sse_f32(MEM32(0x121D93D0 + 4)); float _s2 = sse_f32(MEM32(0x121D93D0 + 8)); float _s3 = sse_f32(MEM32(0x121D93D0 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BD255: addps xmm0, xmmword ptr [0x121d93d0] */
    _xmm[2] = _xmm[1]; /* 0x121BD25C: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x121BD25F: shufps xmm1, xmm1, 0xff */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BD263: mulps xmm1, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D93A0)); float _s1 = sse_f32(MEM32(0x121D93A0 + 4)); float _s2 = sse_f32(MEM32(0x121D93A0 + 8)); float _s3 = sse_f32(MEM32(0x121D93A0 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BD266: addps xmm1, xmmword ptr [0x121d93a0] */
    _xmm[3] = _xmm[2]; /* 0x121BD26D: movaps xmm3, xmm2 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[2]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BD270: shufps xmm2, xmm2, 0xaa */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BD274: mulps xmm2, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D93B0)); float _s1 = sse_f32(MEM32(0x121D93B0 + 4)); float _s2 = sse_f32(MEM32(0x121D93B0 + 8)); float _s3 = sse_f32(MEM32(0x121D93B0 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD277: addps xmm2, xmmword ptr [0x121d93b0] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[1]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BD27E: shufps xmm3, xmm3, 0x55 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BD282: mulps xmm4, xmm3 */
    { float _s0 = sse_f32(MEM32(0x121D93C0)); float _s1 = sse_f32(MEM32(0x121D93C0 + 4)); float _s2 = sse_f32(MEM32(0x121D93C0 + 8)); float _s3 = sse_f32(MEM32(0x121D93C0 + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BD285: addps xmm4, xmmword ptr [0x121d93c0] */
    xmm_st(eax, _xmm[0]); /* 0x121BD28C: movups xmmword ptr [eax], xmm0 */
    xmm_st(eax + 0x10, _xmm[4]); /* 0x121BD28F: movups xmmword ptr [eax + 0x10], xmm4 */
    xmm_st(eax + 0x20, _xmm[2]); /* 0x121BD293: movups xmmword ptr [eax + 0x20], xmm2 */
    xmm_st(eax + 0x30, _xmm[1]); /* 0x121BD297: movups xmmword ptr [eax + 0x30], xmm1 */
    esp = ebp; /* 0x121BD29B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BD29D: pop ebp */
    esp = ebx; /* 0x121BD29E: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BD2A0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121BD2A1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121BD2A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BD2A9u);

L_121BD2A9:
    edi = edi; /* 0x121BD2A9: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BD2AB: push ebx */
    ebx = esp; /* 0x121BD2AC: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BD2AE: push ecx */
    PUSH32(esp, ecx); /* 0x121BD2AF: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BD2B0: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BD2B3: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BD2B6: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BD2B7: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BD2BA: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BD2BE: mov ebp, esp */
    edx = MEM32(ebx + 0x10); /* 0x121BD2C0: mov edx, dword ptr [ebx + 0x10] */
    ecx = MEM32(ebx + 0xC); /* 0x121BD2C3: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x8); /* 0x121BD2C6: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121BD2C9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test LO8(edx), 0xFu */ /* 0x121BD2CC: test dl, 0xf */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BD302; /* 0x121BD2CF: jne 0x121bd302 */
L_121BD2D1:
    _xmm[0].u64[0] = MEM64(ecx); /* 0x121BD2D1: movlps xmm0, qword ptr [ecx] */
    _xmm[1] = _xmm[0]; /* 0x121BD2D4: movaps xmm1, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[1]; _xmm[1].u32[1] = _d.u32[1]; _xmm[1].u32[2] = _s.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BD2D7: shufps xmm1, xmm0, 0x55 */
    { float _s0 = sse_f32(MEM32(edx + 0x10)); float _s1 = sse_f32(MEM32(edx + 0x10 + 4)); float _s2 = sse_f32(MEM32(edx + 0x10 + 8)); float _s3 = sse_f32(MEM32(edx + 0x10 + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BD2DB: mulps xmm1, xmmword ptr [edx + 0x10] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BD2DF: shufps xmm0, xmm0, 0 */
    { float _s0 = sse_f32(MEM32(edx)); float _s1 = sse_f32(MEM32(edx + 4)); float _s2 = sse_f32(MEM32(edx + 8)); float _s3 = sse_f32(MEM32(edx + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD2E3: mulps xmm0, xmmword ptr [edx] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BD2E6: addps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(ecx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BD2E9: movss xmm0, dword ptr [ecx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BD2EE: shufps xmm0, xmm0, 0 */
    { float _s0 = sse_f32(MEM32(edx + 0x20)); float _s1 = sse_f32(MEM32(edx + 0x20 + 4)); float _s2 = sse_f32(MEM32(edx + 0x20 + 8)); float _s3 = sse_f32(MEM32(edx + 0x20 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD2F2: mulps xmm0, xmmword ptr [edx + 0x20] */
    { float _s0 = sse_f32(MEM32(edx + 0x30)); float _s1 = sse_f32(MEM32(edx + 0x30 + 4)); float _s2 = sse_f32(MEM32(edx + 0x30 + 8)); float _s3 = sse_f32(MEM32(edx + 0x30 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BD2F6: addps xmm0, xmmword ptr [edx + 0x30] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BD2FA: addps xmm1, xmm0 */
    xmm_st(eax, _xmm[1]); /* 0x121BD2FD: movups xmmword ptr [eax], xmm1 */
    goto L_121BD33D; /* 0x121BD300: jmp 0x121bd33d */
L_121BD302:
    _xmm[1].u64[0] = MEM64(ecx); /* 0x121BD302: movlps xmm1, qword ptr [ecx] */
    _xmm[0] = xmm_ld(edx + 0x10); /* 0x121BD305: movups xmm0, xmmword ptr [edx + 0x10] */
    _xmm[2] = _xmm[1]; /* 0x121BD309: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[1]; _xmm[2].u32[2] = _s.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x121BD30C: shufps xmm2, xmm1, 0x55 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BD310: mulps xmm2, xmm0 */
    _xmm[0] = xmm_ld(edx); /* 0x121BD313: movups xmm0, xmmword ptr [edx] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BD316: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BD31A: mulps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(ecx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BD31D: movss xmm0, dword ptr [ecx + 8] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD322: addps xmm2, xmm1 */
    _xmm[1] = xmm_ld(edx + 0x20); /* 0x121BD325: movups xmm1, xmmword ptr [edx + 0x20] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BD329: shufps xmm0, xmm0, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BD32D: mulps xmm1, xmm0 */
    _xmm[0] = xmm_ld(edx + 0x30); /* 0x121BD330: movups xmm0, xmmword ptr [edx + 0x30] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BD334: addps xmm1, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD337: addps xmm2, xmm1 */
    xmm_st(eax, _xmm[2]); /* 0x121BD33A: movups xmmword ptr [eax], xmm2 */
L_121BD33D:
    esp = ebp; /* 0x121BD33D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BD33F: pop ebp */
    esp = ebx; /* 0x121BD340: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BD342: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BD343: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BD34B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BD34Bu);

L_121BD34B:
    edi = edi; /* 0x121BD34B: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BD34D: push ebx */
    ebx = esp; /* 0x121BD34E: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BD350: push ecx */
    PUSH32(esp, ecx); /* 0x121BD351: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BD352: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BD355: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BD358: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BD359: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BD35C: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BD360: mov ebp, esp */
    ecx = MEM32(ebx + 0x10); /* 0x121BD362: mov ecx, dword ptr [ebx + 0x10] */
    eax = MEM32(ebx + 0xC); /* 0x121BD365: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x121BD368: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test LO8(ecx), 0xFu */ /* 0x121BD36B: test cl, 0xf */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BD39E; /* 0x121BD36E: jne 0x121bd39e */
L_121BD370:
    _xmm[0].u64[0] = MEM64(eax); /* 0x121BD370: movlps xmm0, qword ptr [eax] */
    _xmm[2] = _xmm[0]; /* 0x121BD373: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[1]; _xmm[2].u32[2] = _s.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x121BD376: shufps xmm2, xmm0, 0x55 */
    { float _s0 = sse_f32(MEM32(ecx + 0x10)); float _s1 = sse_f32(MEM32(ecx + 0x10 + 4)); float _s2 = sse_f32(MEM32(ecx + 0x10 + 8)); float _s3 = sse_f32(MEM32(ecx + 0x10 + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BD37A: mulps xmm2, xmmword ptr [ecx + 0x10] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BD37E: shufps xmm0, xmm0, 0 */
    { float _s0 = sse_f32(MEM32(ecx)); float _s1 = sse_f32(MEM32(ecx + 4)); float _s2 = sse_f32(MEM32(ecx + 8)); float _s3 = sse_f32(MEM32(ecx + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD382: mulps xmm0, xmmword ptr [ecx] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD385: addps xmm2, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + 0x8); _xmm[0].u64[1] = 0; /* 0x121BD388: movss xmm0, dword ptr [eax + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BD38D: shufps xmm0, xmm0, 0 */
    { float _s0 = sse_f32(MEM32(ecx + 0x20)); float _s1 = sse_f32(MEM32(ecx + 0x20 + 4)); float _s2 = sse_f32(MEM32(ecx + 0x20 + 8)); float _s3 = sse_f32(MEM32(ecx + 0x20 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD391: mulps xmm0, xmmword ptr [ecx + 0x20] */
    { float _s0 = sse_f32(MEM32(ecx + 0x30)); float _s1 = sse_f32(MEM32(ecx + 0x30 + 4)); float _s2 = sse_f32(MEM32(ecx + 0x30 + 8)); float _s3 = sse_f32(MEM32(ecx + 0x30 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BD395: addps xmm0, xmmword ptr [ecx + 0x30] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD399: addps xmm2, xmm0 */
    goto L_121BD3D6; /* 0x121BD39C: jmp 0x121bd3d6 */
L_121BD39E:
    _xmm[1].u64[0] = MEM64(eax); /* 0x121BD39E: movlps xmm1, qword ptr [eax] */
    _xmm[0] = xmm_ld(ecx + 0x10); /* 0x121BD3A1: movups xmm0, xmmword ptr [ecx + 0x10] */
    _xmm[2] = _xmm[1]; /* 0x121BD3A5: movaps xmm2, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[1]; _xmm[2].u32[2] = _s.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x121BD3A8: shufps xmm2, xmm1, 0x55 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BD3AC: mulps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ecx); /* 0x121BD3AF: movups xmm0, xmmword ptr [ecx] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[0]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[0]; } /* 0x121BD3B2: shufps xmm1, xmm1, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BD3B6: mulps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + 0x8); _xmm[0].u64[1] = 0; /* 0x121BD3B9: movss xmm0, dword ptr [eax + 8] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD3BE: addps xmm2, xmm1 */
    _xmm[1] = xmm_ld(ecx + 0x20); /* 0x121BD3C1: movups xmm1, xmmword ptr [ecx + 0x20] */
    { xmm_t _s = _xmm[0], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _d.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x121BD3C5: shufps xmm0, xmm0, 0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BD3C9: mulps xmm1, xmm0 */
    _xmm[0] = xmm_ld(ecx + 0x30); /* 0x121BD3CC: movups xmm0, xmmword ptr [ecx + 0x30] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BD3D0: addps xmm1, xmm0 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD3D3: addps xmm2, xmm1 */
L_121BD3D6:
    eax = MEM32(ebx + 0x8); /* 0x121BD3D6: mov eax, dword ptr [ebx + 8] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[1] = _d; } /* 0x121BD3D9: rcpps xmm1, xmm2 */
    _xmm[0] = _xmm[1]; /* 0x121BD3DC: movaps xmm0, xmm1 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD3DF: mulps xmm0, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD3E2: mulps xmm0, xmm1 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BD3E5: addps xmm1, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[1] = _d; } /* 0x121BD3E8: subps xmm1, xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[3]; _xmm[1].u32[1] = _d.u32[3]; _xmm[1].u32[2] = _s.u32[3]; _xmm[1].u32[3] = _s.u32[3]; } /* 0x121BD3EB: shufps xmm1, xmm1, 0xff */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BD3EF: mulps xmm1, xmm2 */
    MEM64(eax) = _xmm[1].u64[0]; /* 0x121BD3F2: movlps qword ptr [eax], xmm1 */
    _xmm[1].u64[0] = _xmm[1].u64[1]; /* 0x121BD3F5: movhlps xmm1, xmm1 */
    MEM32(eax + 0x8) = _xmm[1].u32[0]; /* 0x121BD3F8: movss dword ptr [eax + 8], xmm1 */
    esp = ebp; /* 0x121BD3FD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BD3FF: pop ebp */
    esp = ebx; /* 0x121BD400: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BD402: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BD403: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BD40B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BD40Bu);

L_121BD40B:
    edi = edi; /* 0x121BD40B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BD40D: push ebp */
    ebp = esp; /* 0x121BD40E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121BD410: mov eax, dword ptr [ebp + 0xc] */
    _xmm[3].u64[0] = MEM64(eax); _xmm[3].u64[1] = 0; /* 0x121BD413: movsd xmm3, qword ptr [eax] */
    _xmm[3].u64[1] = MEM64(eax + 0x8); /* 0x121BD417: movhps xmm3, qword ptr [eax + 8] */
    eax = MEM32(ebp + 0x8); /* 0x121BD41B: mov eax, dword ptr [ebp + 8] */
    _xmm[0] = _xmm[3]; /* 0x121BD41E: movaps xmm0, xmm3 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD421: mulps xmm0, xmm3 */
    _xmm[1] = _xmm[0]; /* 0x121BD424: movaps xmm1, xmm0 */
    _xmm[1].u64[0] = _xmm[0].u64[1]; /* 0x121BD427: movhlps xmm1, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BD42A: addps xmm1, xmm0 */
    _xmm[0] = _xmm[1]; /* 0x121BD42D: movaps xmm0, xmm1 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[1]; _xmm[0].u32[1] = _d.u32[1]; _xmm[0].u32[2] = _s.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BD430: shufps xmm0, xmm1, 0x55 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x121BD434: addss xmm1, xmm0 */
    _xmm[2] = _xmm[1]; /* 0x121BD438: movaps xmm2, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(1.0f / _s); } /* 0x121BD43B: rcpss xmm2, xmm2 */
    _xmm[0] = _xmm[2]; /* 0x121BD43F: movaps xmm0, xmm2 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BD442: mulss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x121BD446: mulss xmm0, xmm2 */
    { float _s = _xmm[2].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x121BD44A: addss xmm2, xmm2 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x121BD44E: subss xmm2, xmm0 */
    _xmm[0] = xmm_ld(0x121D9440); /* 0x121BD452: movaps xmm0, xmmword ptr [0x121d9440] */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BD459: shufps xmm2, xmm2, 0 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD45D: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BD460: mulps xmm2, xmm0 */
    xmm_st(eax, _xmm[2]); /* 0x121BD463: movups xmmword ptr [eax], xmm2 */
    ebp = POP32_VAL(esp); /* 0x121BD466: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121BD467: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121BD46F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BD46Fu);

L_121BD46F:
    edi = edi; /* 0x121BD46F: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BD471: push ebx */
    ebx = esp; /* 0x121BD472: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BD474: push ecx */
    PUSH32(esp, ecx); /* 0x121BD475: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BD476: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BD479: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BD47C: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BD47D: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BD480: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BD484: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x121BD486: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _xmm[2].u64[0] = MEM32(ebx + 0x14); _xmm[2].u64[1] = 0; /* 0x121BD489: movss xmm2, dword ptr [ebx + 0x14] */
    _xmm[0].u64[0] = MEM32(ebx + 0x10); _xmm[0].u64[1] = 0; /* 0x121BD48E: movss xmm0, dword ptr [ebx + 0x10] */
    _xmm[1].u64[0] = MEM32(ebx + 0xC); _xmm[1].u64[1] = 0; /* 0x121BD493: movss xmm1, dword ptr [ebx + 0xc] */
    eax = ebp + (-0x20); /* 0x121BD498: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x121BD49B: push eax */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _s.u32[0]; _xmm[2].u32[2] = _d.u32[1]; _xmm[2].u32[3] = _s.u32[1]; } /* 0x121BD49C: unpcklps xmm2, xmm0 */
    eax = ebp + (-0x10); /* 0x121BD49F: lea eax, [ebp - 0x10] */
    { xmm_t _s = _xmm[1], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BD4A2: unpcklps xmm1, xmm1 */
    _xmm[2].u64[1] = _xmm[1].u64[0]; /* 0x121BD4A5: movlhps xmm2, xmm1 */
    xmm_st(ebp + (-0x10), _xmm[2]); /* 0x121BD4A8: movaps xmmword ptr [ebp - 0x10], xmm2 */
    _xmm[0] = xmm_ld(0x12018090); /* 0x121BD4AC: movaps xmm0, xmmword ptr [0x12018090] */
    PUSH32(esp, eax); /* 0x121BD4B3: push eax */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD4B4: mulps xmm0, xmm2 */
    PUSH32(esp, eax); /* 0x121BD4B7: push eax */
    xmm_st(ebp + (-0x10), _xmm[0]); /* 0x121BD4B8: movaps xmmword ptr [ebp - 0x10], xmm0 */
    RECOMP_CALL(sub_121BE5F7); /* 0x121BD4BC: call 0x121be5f7 */
    RECOMP_FLAGS_IN();
    _xmm[2] = xmm_ld(ebp + (-0x10)); /* 0x121BD4C1: movaps xmm2, xmmword ptr [ebp - 0x10] */
    eax = MEM32(ebx + 0x8); /* 0x121BD4C5: mov eax, dword ptr [ebx + 8] */
    _xmm[4] = _xmm[2]; /* 0x121BD4C8: movaps xmm4, xmm2 */
    { xmm_t _s = xmm_ld(ebp + (-0x20)), _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[2]; _xmm[4].u32[2] = _s.u32[1]; _xmm[4].u32[3] = _s.u32[2]; } /* 0x121BD4CB: shufps xmm4, xmmword ptr [ebp - 0x20], 0x99 */
    { xmm_t _s = xmm_ld(ebp + (-0x20)), _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[0]; _xmm[2].u32[1] = _d.u32[0]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[0]; } /* 0x121BD4D0: shufps xmm2, xmmword ptr [ebp - 0x20], 0 */
    _xmm[3] = _xmm[4]; /* 0x121BD4D5: movaps xmm3, xmm4 */
    { xmm_t _s = _xmm[4], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[3]; _xmm[3].u32[1] = _d.u32[1]; _xmm[3].u32[2] = _s.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BD4D8: shufps xmm3, xmm4, 0xf7 */
    _xmm[1] = _xmm[3]; /* 0x121BD4DC: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[2]; _xmm[2].u32[1] = _d.u32[2]; _xmm[2].u32[2] = _s.u32[0]; _xmm[2].u32[3] = _s.u32[2]; } /* 0x121BD4DF: shufps xmm2, xmm2, 0x8a */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[0]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[1]; } /* 0x121BD4E3: shufps xmm3, xmm3, 0x51 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[2]; _xmm[4].u32[2] = _s.u32[2]; _xmm[4].u32[3] = _s.u32[2]; } /* 0x121BD4E7: shufps xmm4, xmm4, 0xa8 */
    _xmm[0] = _xmm[2]; /* 0x121BD4EB: movaps xmm0, xmm2 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BD4EE: mulps xmm1, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BD4F1: mulps xmm1, xmm4 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[2]; _xmm[0].u32[1] = _d.u32[2]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[2]; } /* 0x121BD4F4: shufps xmm0, xmm2, 0x8a */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BD4F8: mulps xmm3, xmm0 */
    { xmm_t _s = _xmm[4], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[1]; _xmm[4].u32[1] = _d.u32[0]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[0]; } /* 0x121BD4FB: shufps xmm4, xmm4, 1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BD4FF: mulps xmm3, xmm4 */
    { xmm_t _s = xmm_ld(0x12018080); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x121BD502: xorps xmm3, xmmword ptr [0x12018080] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BD509: addps xmm3, xmm1 */
    xmm_st(eax, _xmm[3]); /* 0x121BD50C: movups xmmword ptr [eax], xmm3 */
    esp = ebp; /* 0x121BD50F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BD511: pop ebp */
    esp = ebx; /* 0x121BD512: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BD514: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BD515: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121BD51D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BD51Du);

L_121BD51D:
    edi = edi; /* 0x121BD51D: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BD51F: push ebx */
    ebx = esp; /* 0x121BD520: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BD522: push ecx */
    PUSH32(esp, ecx); /* 0x121BD523: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BD524: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BD527: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BD52A: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BD52B: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BD52E: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BD532: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BD534: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BD53A: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BD53F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BD541: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BD544: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BD547: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BD54A: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BD54D: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BD553: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BD556: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BD557: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BD55A: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BD55B: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BD561: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BD564: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xAu); /* 0x121BD56A: push 0xa */
    eax = esi; /* 0x121BD56C: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BD56E: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BD56F: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BD572: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BD574: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BD576: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BD578: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BD57A: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BD57A: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BD57D: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BD583: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BD589: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BD58C: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BD592: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BD75F; /* 0x121BD594: je 0x121bd75f */
L_121BD59A:
    PUSH32(esp, 4); /* 0x121BD59A: push 4 */
    PUSH32(esp, 4); /* 0x121BD59C: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BD59E: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BD5A4: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BD5AA: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BD5AF: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BD5B5: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BD5BB: imul edx, edx, 3 */
    eax = ecx; /* 0x121BD5BE: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BD5C0: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BD5C3: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BD5C9: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BD5CF: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BD5D5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BD759; /* 0x121BD5D7: je 0x121bd759 */
L_121BD5DD:
    _xmm[3] = xmm_ld(ebp + (-0x80)); /* 0x121BD5DD: movaps xmm3, xmmword ptr [ebp - 0x80] */
    _xmm[4] = xmm_ld(ebp + (-0x90)); /* 0x121BD5E1: movaps xmm4, xmmword ptr [ebp - 0x90] */
    _xmm[7] = xmm_ld(ebp + (-0x110)); /* 0x121BD5E8: movaps xmm7, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BD5EF: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BD5F5: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BD5F5: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BD5F8: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BD5FE: mov ecx, dword ptr [ebp - 0x114] */
L_121BD604:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BD604: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[2].u64[0] = MEM64(edx); _xmm[2].u64[1] = 0; /* 0x121BD609: movsd xmm2, qword ptr [edx] */
    _xmm[2].u64[1] = MEM64(esi + edx); /* 0x121BD60D: movhps xmm2, qword ptr [esi + edx] */
    _xmm[1].u64[0] = MEM32(edx + esi * 2 + 0x8); _xmm[1].u64[1] = 0; /* 0x121BD611: movss xmm1, dword ptr [edx + esi*2 + 8] */
    _xmm[5].u64[0] = MEM32(edx + 0x8); _xmm[5].u64[1] = 0; /* 0x121BD617: movss xmm5, dword ptr [edx + 8] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BD61C: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BD622: movhps xmm0, qword ptr [edx + eax] */
    _xmm[6] = _xmm[2]; /* 0x121BD626: movaps xmm6, xmm2 */
    { xmm_t _s = _xmm[0], _d = _xmm[2]; _xmm[2].u32[0] = _d.u32[1]; _xmm[2].u32[1] = _d.u32[3]; _xmm[2].u32[2] = _s.u32[1]; _xmm[2].u32[3] = _s.u32[3]; } /* 0x121BD629: shufps xmm2, xmm0, 0xdd */
    { xmm_t _s = _xmm[0], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _d.u32[2]; _xmm[6].u32[2] = _s.u32[0]; _xmm[6].u32[3] = _s.u32[2]; } /* 0x121BD62D: shufps xmm6, xmm0, 0x88 */
    _xmm[0].u64[0] = MEM32(esi + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BD631: movss xmm0, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _s.u32[0]; _xmm[5].u32[2] = _d.u32[1]; _xmm[5].u32[3] = _s.u32[1]; } /* 0x121BD637: unpcklps xmm5, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BD63A: movss xmm0, dword ptr [eax + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BD640: unpcklps xmm1, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xD0)); /* 0x121BD643: movaps xmm0, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD64A: mulps xmm0, xmm2 */
    eax = MEM32(ebp + (-0x120)); /* 0x121BD64D: mov eax, dword ptr [ebp - 0x120] */
    esi = MEM32(ebp + (-0x130)); /* 0x121BD653: mov esi, dword ptr [ebp - 0x130] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BD659: mulps xmm7, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x121BD65C: addps xmm7, xmm0 */
    _xmm[0] = _xmm[4]; /* 0x121BD65F: movaps xmm0, xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0x100)); /* 0x121BD662: movaps xmm4, xmmword ptr [ebp - 0x100] */
    _xmm[5].u64[1] = _xmm[1].u64[0]; /* 0x121BD669: movlhps xmm5, xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD66C: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x121BD66F: addps xmm7, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xC0)); /* 0x121BD672: movaps xmm0, xmmword ptr [ebp - 0xc0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[7] = _d; } /* 0x121BD679: addps xmm7, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD67D: mulps xmm0, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BD680: mulps xmm4, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BD683: addps xmm4, xmm0 */
    _xmm[0] = _xmm[3]; /* 0x121BD686: movaps xmm0, xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0xF0)); /* 0x121BD689: movaps xmm3, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD690: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BD693: addps xmm4, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xB0)); /* 0x121BD696: movaps xmm0, xmmword ptr [ebp - 0xb0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BD69D: addps xmm4, xmmword ptr [ebp - 0x40] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD6A1: mulps xmm0, xmm2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BD6A4: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BD6AA: mulps xmm3, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BD6AD: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x70)); /* 0x121BD6B0: movaps xmm0, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD6B4: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BD6B7: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xA0)); /* 0x121BD6BA: movaps xmm0, xmmword ptr [ebp - 0xa0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BD6C1: addps xmm3, xmmword ptr [ebp - 0x30] */
    xmm_st(ebp + (-0x150), _xmm[2]); /* 0x121BD6C5: movaps xmmword ptr [ebp - 0x150], xmm2 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x150))); float _s1 = sse_f32(MEM32(ebp + (-0x150) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x150) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x150) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD6CC: mulps xmm0, xmmword ptr [ebp - 0x150] */
    _xmm[2] = xmm_ld(ebp + (-0xE0)); /* 0x121BD6D3: movaps xmm2, xmmword ptr [ebp - 0xe0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BD6DA: mulps xmm2, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD6DD: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x60)); /* 0x121BD6E0: movaps xmm0, xmmword ptr [ebp - 0x60] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD6E4: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD6E7: addps xmm2, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD6EA: addps xmm2, xmmword ptr [ebp - 0x20] */
    _xmm[1] = _xmm[7]; /* 0x121BD6EE: movaps xmm1, xmm7 */
    { xmm_t _s = _xmm[4], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BD6F1: unpcklps xmm1, xmm4 */
    MEM64(ecx) = _xmm[1].u64[0]; /* 0x121BD6F4: movlps qword ptr [ecx], xmm1 */
    _xmm[0] = _xmm[3]; /* 0x121BD6F7: movaps xmm0, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BD6FA: unpcklps xmm0, xmm2 */
    MEM64(ecx + 0x8) = _xmm[0].u64[0]; /* 0x121BD6FD: movlps qword ptr [ecx + 8], xmm0 */
    MEM64(ecx + eax) = _xmm[1].u64[1]; /* 0x121BD701: movhps qword ptr [ecx + eax], xmm1 */
    MEM64(eax + ecx + 0x8) = _xmm[0].u64[1]; /* 0x121BD705: movhps qword ptr [eax + ecx + 8], xmm0 */
    { xmm_t _s = _xmm[4], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[2]; _xmm[7].u32[1] = _s.u32[2]; _xmm[7].u32[2] = _d.u32[3]; _xmm[7].u32[3] = _s.u32[3]; } /* 0x121BD70A: unpckhps xmm7, xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0x90)); /* 0x121BD70D: movaps xmm4, xmmword ptr [ebp - 0x90] */
    MEM64(ecx + eax * 2) = _xmm[7].u64[0]; /* 0x121BD714: movlps qword ptr [ecx + eax*2], xmm7 */
    { xmm_t _s = _xmm[2], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BD718: unpckhps xmm3, xmm2 */
    MEM64(ecx + eax * 2 + 0x8) = _xmm[3].u64[0]; /* 0x121BD71B: movlps qword ptr [ecx + eax*2 + 8], xmm3 */
    MEM64(ecx + esi) = _xmm[7].u64[1]; /* 0x121BD720: movhps qword ptr [ecx + esi], xmm7 */
    _xmm[7] = xmm_ld(ebp + (-0x110)); /* 0x121BD724: movaps xmm7, xmmword ptr [ebp - 0x110] */
    MEM64(esi + ecx + 0x8) = _xmm[3].u64[1]; /* 0x121BD72B: movhps qword ptr [esi + ecx + 8], xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0x80)); /* 0x121BD730: movaps xmm3, xmmword ptr [ebp - 0x80] */
    esi = eax; /* 0x121BD734: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BD736: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BD736: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BD739: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BD73B: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BD73C: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BD604; /* 0x121BD742: jne 0x121bd604 */
L_121BD748:
    esi = MEM32(ebx + 0x1C); /* 0x121BD748: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BD74B: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BD751: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BD75F; /* 0x121BD757: jmp 0x121bd75f */
L_121BD759:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BD759: mov ecx, dword ptr [ebp - 0x114] */
L_121BD75F:
    /* test esi, esi */ /* 0x121BD75F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BD799; /* 0x121BD761: je 0x121bd799 */
L_121BD763:
    edi = MEM32(ebp + (-0x120)); /* 0x121BD763: mov edi, dword ptr [ebp - 0x120] */
L_121BD769:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BD769: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BD76F: push edx */
    PUSH32(esp, ecx); /* 0x121BD770: push ecx */
    RECOMP_CALL(sub_121BD2A9); /* 0x121BD771: call 0x121bd2a9 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BD776: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BD77C: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BD782: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BD788: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BD78A: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BD78B: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BD791: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BD769; /* 0x121BD797: jne 0x121bd769 */
L_121BD799:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BD799: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BD79C: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BD7A2: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BD7A3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BD7A5: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BD7A6: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BD7AB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BD7AD: pop ebp */
    esp = ebx; /* 0x121BD7AE: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BD7B0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BD7B1: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BD7B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BD7B9u);

L_121BD7B9:
    edi = edi; /* 0x121BD7B9: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BD7BB: push ebx */
    ebx = esp; /* 0x121BD7BC: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BD7BE: push ecx */
    PUSH32(esp, ecx); /* 0x121BD7BF: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BD7C0: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BD7C3: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BD7C6: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BD7C7: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BD7CA: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BD7CE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BD7D0: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BD7D6: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BD7DB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BD7DD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BD7E0: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BD7E3: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BD7E6: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BD7E9: mov dword ptr [ebp - 0x124], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BD7EF: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BD7F2: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BD7F3: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BD7F6: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BD7F7: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BD7FD: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BD800: mov dword ptr [ebp - 0x120], eax */
    PUSH32(esp, 0xAu); /* 0x121BD806: push 0xa */
    eax = esi; /* 0x121BD808: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BD80A: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BD80B: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BD80E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BD810: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BD812: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BD814: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BD816: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BD816: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BD819: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BD81F: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BD825: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BD828: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BD82E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BD9B1; /* 0x121BD830: je 0x121bd9b1 */
L_121BD836:
    PUSH32(esp, 4); /* 0x121BD836: push 4 */
    PUSH32(esp, 4); /* 0x121BD838: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x121BD83A: push dword ptr [ebp - 0x120] */
    ecx = ebp + (-0x110); /* 0x121BD840: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BD846: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BD84B: mov ecx, dword ptr [ebp - 0x11c] */
    eax = ecx; /* 0x121BD851: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BD853: imul eax, eax, 3 */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BD856: mov dword ptr [ebp - 0x128], eax */
    eax = MEM32(ebp + (-0x124)); /* 0x121BD85C: mov eax, dword ptr [ebp - 0x124] */
    edx = eax; /* 0x121BD862: mov edx, eax */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BD864: imul edx, edx, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BD867: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BD86D: mov edx, dword ptr [ebp - 0x118] */
    /* test edi, edi */ /* 0x121BD873: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BD9AB; /* 0x121BD875: je 0x121bd9ab */
L_121BD87B:
    _xmm[7] = xmm_ld(ebp + (-0xA0)); /* 0x121BD87B: movaps xmm7, xmmword ptr [ebp - 0xa0] */
    _xmm[2] = xmm_ld(ebp + (-0xB0)); /* 0x121BD882: movaps xmm2, xmmword ptr [ebp - 0xb0] */
    _xmm[4] = xmm_ld(ebp + (-0xC0)); /* 0x121BD889: movaps xmm4, xmmword ptr [ebp - 0xc0] */
    _xmm[3] = xmm_ld(ebp + (-0xD0)); /* 0x121BD890: movaps xmm3, xmmword ptr [ebp - 0xd0] */
    _xmm[6] = xmm_ld(ebp + (-0x110)); /* 0x121BD897: movaps xmm6, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BD89E: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BD8A4: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BD8A4: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BD8A7: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BD8AD: mov ecx, dword ptr [ebp - 0x114] */
L_121BD8B3:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BD8B3: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[5].u64[0] = MEM64(edx); _xmm[5].u64[1] = 0; /* 0x121BD8B8: movsd xmm5, qword ptr [edx] */
    _xmm[5].u64[1] = MEM64(esi + edx); /* 0x121BD8BC: movhps xmm5, qword ptr [esi + edx] */
    esi = MEM32(ebp + (-0x128)); /* 0x121BD8C0: mov esi, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + esi); /* 0x121BD8C6: movhps xmm0, qword ptr [edx + esi] */
    esi = MEM32(ebp + (-0x130)); /* 0x121BD8CA: mov esi, dword ptr [ebp - 0x130] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BD8D0: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    _xmm[1] = _xmm[5]; /* 0x121BD8D6: movaps xmm1, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x121BD8D9: shufps xmm1, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[1]; _xmm[5].u32[3] = _s.u32[3]; } /* 0x121BD8DD: shufps xmm5, xmm0, 0xdd */
    _xmm[0] = _xmm[3]; /* 0x121BD8E1: movaps xmm0, xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0x100)); /* 0x121BD8E4: movaps xmm3, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD8EB: mulps xmm0, xmm5 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BD8EE: mulps xmm6, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BD8F1: addps xmm6, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BD8F4: addps xmm6, xmmword ptr [ebp - 0x50] */
    _xmm[0] = _xmm[4]; /* 0x121BD8F8: movaps xmm0, xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0xF0)); /* 0x121BD8FB: movaps xmm4, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD902: mulps xmm0, xmm5 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BD905: mulps xmm3, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BD908: addps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BD90B: addps xmm3, xmmword ptr [ebp - 0x40] */
    _xmm[0] = _xmm[2]; /* 0x121BD90F: movaps xmm0, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0xE0)); /* 0x121BD912: movaps xmm2, xmmword ptr [ebp - 0xe0] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BD919: mulps xmm4, xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD91C: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BD91F: addps xmm4, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BD922: addps xmm4, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BD926: mulps xmm2, xmm1 */
    _xmm[0] = _xmm[7]; /* 0x121BD929: movaps xmm0, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BD92C: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD92F: addps xmm2, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BD932: addps xmm2, xmmword ptr [ebp - 0x20] */
    _xmm[1] = _xmm[6]; /* 0x121BD936: movaps xmm1, xmm6 */
    { xmm_t _s = _xmm[3], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BD939: unpcklps xmm1, xmm3 */
    MEM64(ecx) = _xmm[1].u64[0]; /* 0x121BD93C: movlps qword ptr [ecx], xmm1 */
    _xmm[0] = _xmm[4]; /* 0x121BD93F: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BD942: unpcklps xmm0, xmm2 */
    MEM64(ecx + 0x8) = _xmm[0].u64[0]; /* 0x121BD945: movlps qword ptr [ecx + 8], xmm0 */
    MEM64(eax + ecx) = _xmm[1].u64[1]; /* 0x121BD949: movhps qword ptr [eax + ecx], xmm1 */
    MEM64(eax + ecx + 0x8) = _xmm[0].u64[1]; /* 0x121BD94D: movhps qword ptr [eax + ecx + 8], xmm0 */
    { xmm_t _s = _xmm[3], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[2]; _xmm[6].u32[1] = _s.u32[2]; _xmm[6].u32[2] = _d.u32[3]; _xmm[6].u32[3] = _s.u32[3]; } /* 0x121BD952: unpckhps xmm6, xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0xD0)); /* 0x121BD955: movaps xmm3, xmmword ptr [ebp - 0xd0] */
    MEM64(ecx + eax * 2) = _xmm[6].u64[0]; /* 0x121BD95C: movlps qword ptr [ecx + eax*2], xmm6 */
    { xmm_t _s = _xmm[2], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _s.u32[2]; _xmm[4].u32[2] = _d.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x121BD960: unpckhps xmm4, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0xB0)); /* 0x121BD963: movaps xmm2, xmmword ptr [ebp - 0xb0] */
    MEM64(ecx + eax * 2 + 0x8) = _xmm[4].u64[0]; /* 0x121BD96A: movlps qword ptr [ecx + eax*2 + 8], xmm4 */
    MEM64(ecx + esi) = _xmm[6].u64[1]; /* 0x121BD96F: movhps qword ptr [ecx + esi], xmm6 */
    _xmm[6] = xmm_ld(ebp + (-0x110)); /* 0x121BD973: movaps xmm6, xmmword ptr [ebp - 0x110] */
    MEM64(esi + ecx + 0x8) = _xmm[4].u64[1]; /* 0x121BD97A: movhps qword ptr [esi + ecx + 8], xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0xC0)); /* 0x121BD97F: movaps xmm4, xmmword ptr [ebp - 0xc0] */
    esi = eax; /* 0x121BD986: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BD988: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BD988: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BD98B: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BD98D: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BD98E: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BD8B3; /* 0x121BD994: jne 0x121bd8b3 */
L_121BD99A:
    esi = MEM32(ebx + 0x1C); /* 0x121BD99A: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BD99D: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BD9A3: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BD9B1; /* 0x121BD9A9: jmp 0x121bd9b1 */
L_121BD9AB:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BD9AB: mov ecx, dword ptr [ebp - 0x114] */
L_121BD9B1:
    /* test esi, esi */ /* 0x121BD9B1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BD9EB; /* 0x121BD9B3: je 0x121bd9eb */
L_121BD9B5:
    edi = MEM32(ebp + (-0x124)); /* 0x121BD9B5: mov edi, dword ptr [ebp - 0x124] */
L_121BD9BB:
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x121BD9BB: push dword ptr [ebp - 0x120] */
    PUSH32(esp, edx); /* 0x121BD9C1: push edx */
    PUSH32(esp, ecx); /* 0x121BD9C2: push ecx */
    RECOMP_CALL(sub_121BA0E0); /* 0x121BD9C3: call 0x121ba0e0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BD9C8: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BD9CE: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BD9D4: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BD9DA: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BD9DC: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BD9DD: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BD9E3: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BD9BB; /* 0x121BD9E9: jne 0x121bd9bb */
L_121BD9EB:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BD9EB: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BD9EE: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BD9F4: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BD9F5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BD9F7: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BD9F8: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BD9FD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BD9FF: pop ebp */
    esp = ebx; /* 0x121BDA00: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BDA02: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BDA03: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BDA0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BDA0Bu);

L_121BDA0B:
    edi = edi; /* 0x121BDA0B: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BDA0D: push ebx */
    ebx = esp; /* 0x121BDA0E: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BDA10: push ecx */
    PUSH32(esp, ecx); /* 0x121BDA11: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BDA12: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BDA15: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BDA18: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BDA19: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BDA1C: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BDA20: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BDA22: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BDA28: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BDA2D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BDA2F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BDA32: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BDA35: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BDA38: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BDA3B: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BDA41: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BDA44: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BDA45: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BDA48: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BDA49: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BDA4F: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BDA52: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xAu); /* 0x121BDA58: push 0xa */
    eax = esi; /* 0x121BDA5A: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BDA5C: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BDA5D: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BDA60: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BDA62: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BDA64: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BDA66: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BDA68: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BDA68: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BDA6B: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BDA71: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BDA77: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BDA7A: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BDA80: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BDBD4; /* 0x121BDA82: je 0x121bdbd4 */
L_121BDA88:
    PUSH32(esp, 4); /* 0x121BDA88: push 4 */
    PUSH32(esp, 4); /* 0x121BDA8A: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BDA8C: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BDA92: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BDA98: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BDA9D: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BDAA3: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BDAA9: imul edx, edx, 3 */
    eax = ecx; /* 0x121BDAAC: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BDAAE: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BDAB1: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BDAB7: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BDABD: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BDAC3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BDBCE; /* 0x121BDAC5: je 0x121bdbce */
L_121BDACB:
    _xmm[6] = xmm_ld(ebp + (-0xA0)); /* 0x121BDACB: movaps xmm6, xmmword ptr [ebp - 0xa0] */
    _xmm[7] = xmm_ld(ebp + (-0xC0)); /* 0x121BDAD2: movaps xmm7, xmmword ptr [ebp - 0xc0] */
    _xmm[1] = xmm_ld(ebp + (-0xE0)); /* 0x121BDAD9: movaps xmm1, xmmword ptr [ebp - 0xe0] */
    _xmm[3] = xmm_ld(ebp + (-0x110)); /* 0x121BDAE0: movaps xmm3, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BDAE7: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BDAED: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BDAED: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BDAF0: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BDAF6: mov ecx, dword ptr [ebp - 0x114] */
L_121BDAFC:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BDAFC: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[5].u64[0] = MEM64(edx); _xmm[5].u64[1] = 0; /* 0x121BDB01: movsd xmm5, qword ptr [edx] */
    _xmm[5].u64[1] = MEM64(esi + edx); /* 0x121BDB05: movhps xmm5, qword ptr [esi + edx] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BDB09: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BDB0F: movhps xmm0, qword ptr [edx + eax] */
    eax = MEM32(ebp + (-0x120)); /* 0x121BDB13: mov eax, dword ptr [ebp - 0x120] */
    esi = MEM32(ebp + (-0x130)); /* 0x121BDB19: mov esi, dword ptr [ebp - 0x130] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BDB1F: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    _xmm[4] = _xmm[5]; /* 0x121BDB25: movaps xmm4, xmm5 */
    { xmm_t _s = _xmm[0], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _d.u32[2]; _xmm[4].u32[2] = _s.u32[0]; _xmm[4].u32[3] = _s.u32[2]; } /* 0x121BDB28: shufps xmm4, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[1]; _xmm[5].u32[1] = _d.u32[3]; _xmm[5].u32[2] = _s.u32[1]; _xmm[5].u32[3] = _s.u32[3]; } /* 0x121BDB2C: shufps xmm5, xmm0, 0xdd */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BDB30: mulps xmm1, xmm4 */
    _xmm[0] = _xmm[6]; /* 0x121BDB33: movaps xmm0, xmm6 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDB36: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BDB39: addps xmm1, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BDB3C: addps xmm1, xmmword ptr [ebp - 0x20] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[2] = _d; } /* 0x121BDB40: rcpps xmm2, xmm1 */
    _xmm[0] = _xmm[2]; /* 0x121BDB43: movaps xmm0, xmm2 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDB46: mulps xmm0, xmm1 */
    _xmm[1] = xmm_ld(ebp + (-0x100)); /* 0x121BDB49: movaps xmm1, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDB50: mulps xmm0, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BDB53: mulps xmm3, xmm4 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BDB56: addps xmm2, xmm2 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BDB59: subps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xD0)); /* 0x121BDB5C: movaps xmm0, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDB63: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BDB66: addps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BDB69: addps xmm3, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BDB6D: mulps xmm1, xmm4 */
    _xmm[0] = _xmm[7]; /* 0x121BDB70: movaps xmm0, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDB73: mulps xmm0, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BDB76: addps xmm1, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BDB79: addps xmm1, xmmword ptr [ebp - 0x40] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BDB7D: mulps xmm3, xmm2 */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BDB80: mulps xmm1, xmm2 */
    _xmm[0] = _xmm[3]; /* 0x121BDB83: movaps xmm0, xmm3 */
    { xmm_t _s = _xmm[1], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BDB86: unpcklps xmm0, xmm1 */
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x121BDB89: movlps qword ptr [ecx], xmm0 */
    { xmm_t _s = _xmm[1], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BDB8C: unpckhps xmm3, xmm1 */
    _xmm[1] = xmm_ld(ebp + (-0xE0)); /* 0x121BDB8F: movaps xmm1, xmmword ptr [ebp - 0xe0] */
    MEM64(ecx + eax) = _xmm[0].u64[1]; /* 0x121BDB96: movhps qword ptr [ecx + eax], xmm0 */
    MEM64(ecx + eax * 2) = _xmm[3].u64[0]; /* 0x121BDB9A: movlps qword ptr [ecx + eax*2], xmm3 */
    MEM64(ecx + esi) = _xmm[3].u64[1]; /* 0x121BDB9E: movhps qword ptr [ecx + esi], xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0x110)); /* 0x121BDBA2: movaps xmm3, xmmword ptr [ebp - 0x110] */
    esi = eax; /* 0x121BDBA9: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BDBAB: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BDBAB: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BDBAE: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BDBB0: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BDBB1: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BDAFC; /* 0x121BDBB7: jne 0x121bdafc */
L_121BDBBD:
    esi = MEM32(ebx + 0x1C); /* 0x121BDBBD: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BDBC0: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BDBC6: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BDBD4; /* 0x121BDBCC: jmp 0x121bdbd4 */
L_121BDBCE:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BDBCE: mov ecx, dword ptr [ebp - 0x114] */
L_121BDBD4:
    /* test esi, esi */ /* 0x121BDBD4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BDC0E; /* 0x121BDBD6: je 0x121bdc0e */
L_121BDBD8:
    edi = MEM32(ebp + (-0x120)); /* 0x121BDBD8: mov edi, dword ptr [ebp - 0x120] */
L_121BDBDE:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BDBDE: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BDBE4: push edx */
    PUSH32(esp, ecx); /* 0x121BDBE5: push ecx */
    RECOMP_CALL(sub_121BA125); /* 0x121BDBE6: call 0x121ba125 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BDBEB: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BDBF1: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BDBF7: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BDBFD: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BDBFF: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BDC00: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BDC06: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BDBDE; /* 0x121BDC0C: jne 0x121bdbde */
L_121BDC0E:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BDC0E: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BDC11: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BDC17: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BDC18: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BDC1A: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BDC1B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BDC20: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BDC22: pop ebp */
    esp = ebx; /* 0x121BDC23: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BDC25: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BDC26: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BDC2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BDC2Eu);

L_121BDC2E:
    edi = edi; /* 0x121BDC2E: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BDC30: push ebx */
    ebx = esp; /* 0x121BDC31: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BDC33: push ecx */
    PUSH32(esp, ecx); /* 0x121BDC34: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BDC35: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BDC38: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BDC3B: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BDC3C: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BDC3F: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BDC43: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BDC45: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BDC4B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BDC50: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BDC52: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BDC55: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BDC58: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BDC5B: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BDC5E: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BDC64: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BDC67: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BDC68: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BDC6B: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BDC6C: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BDC72: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BDC75: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xAu); /* 0x121BDC7B: push 0xa */
    eax = esi; /* 0x121BDC7D: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BDC7F: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BDC80: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BDC83: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BDC85: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BDC87: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BDC89: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BDC8B: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BDC8B: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BDC8E: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BDC94: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BDC9A: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BDC9D: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BDCA3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BDDBB; /* 0x121BDCA5: je 0x121bddbb */
L_121BDCAB:
    PUSH32(esp, 2); /* 0x121BDCAB: push 2 */
    PUSH32(esp, 2); /* 0x121BDCAD: push 2 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BDCAF: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BDCB5: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BDCBB: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BDCC0: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BDCC6: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BDCCC: imul edx, edx, 3 */
    eax = ecx; /* 0x121BDCCF: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BDCD1: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BDCD4: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BDCDA: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BDCE0: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BDCE6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BDDB5; /* 0x121BDCE8: je 0x121bddb5 */
L_121BDCEE:
    _xmm[5] = xmm_ld(ebp + (-0xC0)); /* 0x121BDCEE: movaps xmm5, xmmword ptr [ebp - 0xc0] */
    _xmm[6] = xmm_ld(ebp + (-0xD0)); /* 0x121BDCF5: movaps xmm6, xmmword ptr [ebp - 0xd0] */
    _xmm[7] = xmm_ld(ebp + (-0x100)); /* 0x121BDCFC: movaps xmm7, xmmword ptr [ebp - 0x100] */
    _xmm[2] = xmm_ld(ebp + (-0x110)); /* 0x121BDD03: movaps xmm2, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BDD0A: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BDD10: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BDD10: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BDD13: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BDD19: mov ecx, dword ptr [ebp - 0x114] */
L_121BDD1F:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BDD1F: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[3].u64[0] = MEM64(edx); _xmm[3].u64[1] = 0; /* 0x121BDD24: movsd xmm3, qword ptr [edx] */
    _xmm[3].u64[1] = MEM64(esi + edx); /* 0x121BDD28: movhps xmm3, qword ptr [esi + edx] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BDD2C: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BDD32: movhps xmm0, qword ptr [edx + eax] */
    eax = MEM32(ebp + (-0x120)); /* 0x121BDD36: mov eax, dword ptr [ebp - 0x120] */
    esi = MEM32(ebp + (-0x130)); /* 0x121BDD3C: mov esi, dword ptr [ebp - 0x130] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BDD42: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    _xmm[4] = _xmm[2]; /* 0x121BDD48: movaps xmm4, xmm2 */
    _xmm[1] = _xmm[3]; /* 0x121BDD4B: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x121BDD4E: shufps xmm1, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BDD52: shufps xmm3, xmm0, 0xdd */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BDD56: mulps xmm4, xmm1 */
    _xmm[0] = _xmm[6]; /* 0x121BDD59: movaps xmm0, xmm6 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDD5C: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BDD5F: addps xmm4, xmm0 */
    _xmm[2] = _xmm[7]; /* 0x121BDD62: movaps xmm2, xmm7 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BDD65: mulps xmm2, xmm1 */
    _xmm[0] = _xmm[5]; /* 0x121BDD68: movaps xmm0, xmm5 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDD6B: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BDD6E: addps xmm2, xmm0 */
    _xmm[0] = _xmm[4]; /* 0x121BDD71: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BDD74: unpcklps xmm0, xmm2 */
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x121BDD77: movlps qword ptr [ecx], xmm0 */
    MEM64(eax + ecx) = _xmm[0].u64[1]; /* 0x121BDD7A: movhps qword ptr [eax + ecx], xmm0 */
    { xmm_t _s = _xmm[2], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _s.u32[2]; _xmm[4].u32[2] = _d.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x121BDD7E: unpckhps xmm4, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x110)); /* 0x121BDD81: movaps xmm2, xmmword ptr [ebp - 0x110] */
    MEM64(ecx + eax * 2) = _xmm[4].u64[0]; /* 0x121BDD88: movlps qword ptr [ecx + eax*2], xmm4 */
    MEM64(ecx + esi) = _xmm[4].u64[1]; /* 0x121BDD8C: movhps qword ptr [ecx + esi], xmm4 */
    esi = eax; /* 0x121BDD90: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BDD92: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BDD92: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BDD95: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BDD97: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BDD98: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BDD1F; /* 0x121BDD9E: jne 0x121bdd1f */
L_121BDDA4:
    esi = MEM32(ebx + 0x1C); /* 0x121BDDA4: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BDDA7: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BDDAD: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BDDBB; /* 0x121BDDB3: jmp 0x121bddbb */
L_121BDDB5:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BDDB5: mov ecx, dword ptr [ebp - 0x114] */
L_121BDDBB:
    /* test esi, esi */ /* 0x121BDDBB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BDDF5; /* 0x121BDDBD: je 0x121bddf5 */
L_121BDDBF:
    edi = MEM32(ebp + (-0x120)); /* 0x121BDDBF: mov edi, dword ptr [ebp - 0x120] */
L_121BDDC5:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BDDC5: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BDDCB: push edx */
    PUSH32(esp, ecx); /* 0x121BDDCC: push ecx */
    RECOMP_CALL(sub_121BA189); /* 0x121BDDCD: call 0x121ba189 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BDDD2: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BDDD8: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BDDDE: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BDDE4: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BDDE6: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BDDE7: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BDDED: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BDDC5; /* 0x121BDDF3: jne 0x121bddc5 */
L_121BDDF5:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BDDF5: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BDDF8: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BDDFE: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BDDFF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BDE01: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BDE02: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BDE07: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BDE09: pop ebp */
    esp = ebx; /* 0x121BDE0A: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BDE0C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BDE0D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BDE15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BDE15u);

L_121BDE15:
    edi = edi; /* 0x121BDE15: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BDE17: push ebx */
    ebx = esp; /* 0x121BDE18: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BDE1A: push ecx */
    PUSH32(esp, ecx); /* 0x121BDE1B: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BDE1C: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BDE1F: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BDE22: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BDE23: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BDE26: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BDE2A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BDE2C: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BDE32: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BDE37: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BDE39: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BDE3C: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BDE3F: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BDE42: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BDE45: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BDE4B: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BDE4E: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BDE4F: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BDE52: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BDE53: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BDE59: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BDE5C: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xAu); /* 0x121BDE62: push 0xa */
    eax = esi; /* 0x121BDE64: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BDE66: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BDE67: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BDE6A: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BDE6C: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BDE6E: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BDE70: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BDE72: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BDE72: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BDE75: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BDE7B: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BDE81: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BDE84: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BDE8A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE06F; /* 0x121BDE8C: je 0x121be06f */
L_121BDE92:
    PUSH32(esp, 4); /* 0x121BDE92: push 4 */
    PUSH32(esp, 4); /* 0x121BDE94: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BDE96: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BDE9C: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BDEA2: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BDEA7: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BDEAD: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BDEB3: imul edx, edx, 3 */
    eax = ecx; /* 0x121BDEB6: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BDEB8: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BDEBB: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BDEC1: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BDEC7: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BDECD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE069; /* 0x121BDECF: je 0x121be069 */
L_121BDED5:
    _xmm[3] = xmm_ld(ebp + (-0x40)); /* 0x121BDED5: movaps xmm3, xmmword ptr [ebp - 0x40] */
    _xmm[4] = xmm_ld(ebp + (-0x50)); /* 0x121BDED9: movaps xmm4, xmmword ptr [ebp - 0x50] */
    _xmm[2] = xmm_ld(ebp + (-0x110)); /* 0x121BDEDD: movaps xmm2, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BDEE4: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BDEEA: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BDEEA: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BDEED: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BDEF3: mov ecx, dword ptr [ebp - 0x114] */
L_121BDEF9:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BDEF9: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[7].u64[0] = MEM64(edx); _xmm[7].u64[1] = 0; /* 0x121BDEFE: movsd xmm7, qword ptr [edx] */
    _xmm[7].u64[1] = MEM64(esi + edx); /* 0x121BDF02: movhps xmm7, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM64(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x121BDF06: movsd xmm6, qword ptr [edx + 8] */
    _xmm[6].u64[1] = MEM64(esi + edx + 0x8); /* 0x121BDF0B: movhps xmm6, qword ptr [esi + edx + 8] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BDF10: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BDF16: movhps xmm0, qword ptr [edx + eax] */
    _xmm[5] = _xmm[7]; /* 0x121BDF1A: movaps xmm5, xmm7 */
    { xmm_t _s = _xmm[0], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[2]; } /* 0x121BDF1D: shufps xmm5, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[1]; _xmm[7].u32[1] = _d.u32[3]; _xmm[7].u32[2] = _s.u32[1]; _xmm[7].u32[3] = _s.u32[3]; } /* 0x121BDF21: shufps xmm7, xmm0, 0xdd */
    _xmm[0].u64[0] = MEM64(edx + esi * 2 + 0x8); _xmm[0].u64[1] = 0; /* 0x121BDF25: movsd xmm0, qword ptr [edx + esi*2 + 8] */
    _xmm[0].u64[1] = MEM64(eax + edx + 0x8); /* 0x121BDF2B: movhps xmm0, qword ptr [eax + edx + 8] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BDF30: mulps xmm2, xmm5 */
    _xmm[1] = _xmm[6]; /* 0x121BDF33: movaps xmm1, xmm6 */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _d.u32[2]; _xmm[1].u32[2] = _s.u32[0]; _xmm[1].u32[3] = _s.u32[2]; } /* 0x121BDF36: shufps xmm1, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[1]; _xmm[6].u32[1] = _d.u32[3]; _xmm[6].u32[2] = _s.u32[1]; _xmm[6].u32[3] = _s.u32[3]; } /* 0x121BDF3A: shufps xmm6, xmm0, 0xdd */
    _xmm[0] = xmm_ld(ebp + (-0xD0)); /* 0x121BDF3E: movaps xmm0, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDF45: mulps xmm0, xmm7 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BDF48: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x90)); /* 0x121BDF4B: movaps xmm0, xmmword ptr [ebp - 0x90] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDF52: mulps xmm0, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BDF55: addps xmm2, xmm0 */
    _xmm[0] = _xmm[4]; /* 0x121BDF58: movaps xmm0, xmm4 */
    _xmm[4] = xmm_ld(ebp + (-0x100)); /* 0x121BDF5B: movaps xmm4, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDF62: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BDF65: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xC0)); /* 0x121BDF68: movaps xmm0, xmmword ptr [ebp - 0xc0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDF6F: mulps xmm0, xmm7 */
    eax = MEM32(ebp + (-0x120)); /* 0x121BDF72: mov eax, dword ptr [ebp - 0x120] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BDF78: mulps xmm4, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BDF7B: addps xmm4, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x80)); /* 0x121BDF7E: movaps xmm0, xmmword ptr [ebp - 0x80] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDF82: mulps xmm0, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BDF85: addps xmm4, xmm0 */
    esi = MEM32(ebp + (-0x130)); /* 0x121BDF88: mov esi, dword ptr [ebp - 0x130] */
    _xmm[0] = _xmm[3]; /* 0x121BDF8E: movaps xmm0, xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0xF0)); /* 0x121BDF91: movaps xmm3, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDF98: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BDF9B: addps xmm4, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xB0)); /* 0x121BDF9E: movaps xmm0, xmmword ptr [ebp - 0xb0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDFA5: mulps xmm0, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BDFA8: mulps xmm3, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BDFAB: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x70)); /* 0x121BDFAE: movaps xmm0, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDFB2: mulps xmm0, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BDFB5: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x30)); /* 0x121BDFB8: movaps xmm0, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDFBC: mulps xmm0, xmm6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BDFBF: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BDFC5: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xA0)); /* 0x121BDFC8: movaps xmm0, xmmword ptr [ebp - 0xa0] */
    xmm_st(ebp + (-0x150), _xmm[2]); /* 0x121BDFCF: movaps xmmword ptr [ebp - 0x150], xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0xE0)); /* 0x121BDFD6: movaps xmm2, xmmword ptr [ebp - 0xe0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDFDD: mulps xmm0, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BDFE0: mulps xmm2, xmm5 */
    _xmm[5] = xmm_ld(ebp + (-0x150)); /* 0x121BDFE3: movaps xmm5, xmmword ptr [ebp - 0x150] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BDFEA: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x60)); /* 0x121BDFED: movaps xmm0, xmmword ptr [ebp - 0x60] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDFF1: mulps xmm0, xmm1 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BDFF4: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x20)); /* 0x121BDFF7: movaps xmm0, xmmword ptr [ebp - 0x20] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BDFFB: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BDFFE: addps xmm2, xmm0 */
    _xmm[1] = _xmm[5]; /* 0x121BE001: movaps xmm1, xmm5 */
    { xmm_t _s = _xmm[4], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BE004: unpcklps xmm1, xmm4 */
    MEM64(ecx) = _xmm[1].u64[0]; /* 0x121BE007: movlps qword ptr [ecx], xmm1 */
    _xmm[0] = _xmm[3]; /* 0x121BE00A: movaps xmm0, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BE00D: unpcklps xmm0, xmm2 */
    MEM64(ecx + 0x8) = _xmm[0].u64[0]; /* 0x121BE010: movlps qword ptr [ecx + 8], xmm0 */
    MEM64(eax + ecx) = _xmm[1].u64[1]; /* 0x121BE014: movhps qword ptr [eax + ecx], xmm1 */
    MEM64(eax + ecx + 0x8) = _xmm[0].u64[1]; /* 0x121BE018: movhps qword ptr [eax + ecx + 8], xmm0 */
    { xmm_t _s = _xmm[4], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[2]; _xmm[5].u32[1] = _s.u32[2]; _xmm[5].u32[2] = _d.u32[3]; _xmm[5].u32[3] = _s.u32[3]; } /* 0x121BE01D: unpckhps xmm5, xmm4 */
    MEM64(ecx + eax * 2) = _xmm[5].u64[0]; /* 0x121BE020: movlps qword ptr [ecx + eax*2], xmm5 */
    { xmm_t _s = _xmm[2], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BE024: unpckhps xmm3, xmm2 */
    MEM64(ecx + eax * 2 + 0x8) = _xmm[3].u64[0]; /* 0x121BE027: movlps qword ptr [ecx + eax*2 + 8], xmm3 */
    MEM64(ecx + esi) = _xmm[5].u64[1]; /* 0x121BE02C: movhps qword ptr [ecx + esi], xmm5 */
    MEM64(esi + ecx + 0x8) = _xmm[3].u64[1]; /* 0x121BE030: movhps qword ptr [esi + ecx + 8], xmm3 */
    esi = eax; /* 0x121BE035: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BE037: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BE037: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BE03A: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BE03C: dec edi */
    _flag_k = FK_DEC;
    _xmm[3] = xmm_ld(ebp + (-0x40)); /* 0x121BE03D: movaps xmm3, xmmword ptr [ebp - 0x40] */
    _xmm[4] = xmm_ld(ebp + (-0x50)); /* 0x121BE041: movaps xmm4, xmmword ptr [ebp - 0x50] */
    _xmm[2] = xmm_ld(ebp + (-0x110)); /* 0x121BE045: movaps xmm2, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BE04C: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BDEF9; /* 0x121BE052: jne 0x121bdef9 */
L_121BE058:
    esi = MEM32(ebx + 0x1C); /* 0x121BE058: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BE05B: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BE061: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BE06F; /* 0x121BE067: jmp 0x121be06f */
L_121BE069:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BE069: mov ecx, dword ptr [ebp - 0x114] */
L_121BE06F:
    /* test esi, esi */ /* 0x121BE06F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE0A9; /* 0x121BE071: je 0x121be0a9 */
L_121BE073:
    edi = MEM32(ebp + (-0x120)); /* 0x121BE073: mov edi, dword ptr [ebp - 0x120] */
L_121BE079:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BE079: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BE07F: push edx */
    PUSH32(esp, ecx); /* 0x121BE080: push ecx */
    RECOMP_CALL(sub_121BA1C7); /* 0x121BE081: call 0x121ba1c7 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BE086: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BE08C: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BE092: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BE098: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BE09A: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BE09B: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BE0A1: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BE079; /* 0x121BE0A7: jne 0x121be079 */
L_121BE0A9:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BE0A9: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BE0AC: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BE0B2: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BE0B3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BE0B5: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BE0B6: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BE0BB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BE0BD: pop ebp */
    esp = ebx; /* 0x121BE0BE: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BE0C0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BE0C1: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BE0C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BE0C9u);

L_121BE0C9:
    edi = edi; /* 0x121BE0C9: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BE0CB: push ebx */
    ebx = esp; /* 0x121BE0CC: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BE0CE: push ecx */
    PUSH32(esp, ecx); /* 0x121BE0CF: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BE0D0: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BE0D3: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BE0D6: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BE0D7: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BE0DA: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BE0DE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BE0E0: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BE0E6: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BE0EB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BE0ED: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BE0F0: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BE0F3: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BE0F6: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BE0F9: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BE0FF: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BE102: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BE103: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BE106: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BE107: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BE10D: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BE110: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xAu); /* 0x121BE116: push 0xa */
    eax = esi; /* 0x121BE118: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BE11A: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BE11B: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BE11E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BE120: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BE122: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BE124: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BE126: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BE126: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BE129: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BE12F: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BE135: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BE138: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BE13E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE2D9; /* 0x121BE140: je 0x121be2d9 */
L_121BE146:
    PUSH32(esp, 3); /* 0x121BE146: push 3 */
    PUSH32(esp, 3); /* 0x121BE148: push 3 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BE14A: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BE150: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BE156: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BE15B: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BE161: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BE167: imul edx, edx, 3 */
    eax = ecx; /* 0x121BE16A: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BE16C: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BE16F: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BE175: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BE17B: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BE181: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE2D3; /* 0x121BE183: je 0x121be2d3 */
L_121BE189:
    _xmm[3] = xmm_ld(ebp + (-0x80)); /* 0x121BE189: movaps xmm3, xmmword ptr [ebp - 0x80] */
    _xmm[2] = xmm_ld(ebp + (-0x90)); /* 0x121BE18D: movaps xmm2, xmmword ptr [ebp - 0x90] */
    _xmm[6] = xmm_ld(ebp + (-0x110)); /* 0x121BE194: movaps xmm6, xmmword ptr [ebp - 0x110] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BE19B: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BE1A1: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BE1A1: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BE1A4: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BE1AA: mov ecx, dword ptr [ebp - 0x114] */
L_121BE1B0:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BE1B0: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[7].u64[0] = MEM64(edx); _xmm[7].u64[1] = 0; /* 0x121BE1B5: movsd xmm7, qword ptr [edx] */
    _xmm[7].u64[1] = MEM64(esi + edx); /* 0x121BE1B9: movhps xmm7, qword ptr [esi + edx] */
    _xmm[1].u64[0] = MEM32(edx + esi * 2 + 0x8); _xmm[1].u64[1] = 0; /* 0x121BE1BD: movss xmm1, dword ptr [edx + esi*2 + 8] */
    _xmm[4].u64[0] = MEM32(edx + 0x8); _xmm[4].u64[1] = 0; /* 0x121BE1C3: movss xmm4, dword ptr [edx + 8] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BE1C8: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BE1CE: movhps xmm0, qword ptr [edx + eax] */
    _xmm[5] = _xmm[7]; /* 0x121BE1D2: movaps xmm5, xmm7 */
    { xmm_t _s = _xmm[0], _d = _xmm[5]; _xmm[5].u32[0] = _d.u32[0]; _xmm[5].u32[1] = _d.u32[2]; _xmm[5].u32[2] = _s.u32[0]; _xmm[5].u32[3] = _s.u32[2]; } /* 0x121BE1D5: shufps xmm5, xmm0, 0x88 */
    { xmm_t _s = _xmm[0], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[1]; _xmm[7].u32[1] = _d.u32[3]; _xmm[7].u32[2] = _s.u32[1]; _xmm[7].u32[3] = _s.u32[3]; } /* 0x121BE1D9: shufps xmm7, xmm0, 0xdd */
    _xmm[0].u64[0] = MEM32(esi + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BE1DD: movss xmm0, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[0]; _xmm[4].u32[1] = _s.u32[0]; _xmm[4].u32[2] = _d.u32[1]; _xmm[4].u32[3] = _s.u32[1]; } /* 0x121BE1E3: unpcklps xmm4, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BE1E6: movss xmm0, dword ptr [eax + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BE1EC: unpcklps xmm1, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xD0)); /* 0x121BE1EF: movaps xmm0, xmmword ptr [ebp - 0xd0] */
    eax = MEM32(ebp + (-0x120)); /* 0x121BE1F6: mov eax, dword ptr [ebp - 0x120] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE1FC: mulps xmm0, xmm7 */
    esi = MEM32(ebp + (-0x130)); /* 0x121BE1FF: mov esi, dword ptr [ebp - 0x130] */
    _xmm[4].u64[1] = _xmm[1].u64[0]; /* 0x121BE205: movlhps xmm4, xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BE208: mulps xmm6, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BE20B: addps xmm6, xmm0 */
    _xmm[0] = _xmm[2]; /* 0x121BE20E: movaps xmm0, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x100)); /* 0x121BE211: movaps xmm2, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE218: mulps xmm0, xmm4 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BE21B: addps xmm6, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xC0)); /* 0x121BE21E: movaps xmm0, xmmword ptr [ebp - 0xc0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE225: mulps xmm0, xmm7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BE228: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BE22E: mulps xmm2, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BE231: addps xmm2, xmm0 */
    _xmm[0] = _xmm[3]; /* 0x121BE234: movaps xmm0, xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0xF0)); /* 0x121BE237: movaps xmm3, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE23E: mulps xmm0, xmm4 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BE241: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xB0)); /* 0x121BE244: movaps xmm0, xmmword ptr [ebp - 0xb0] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BE24B: mulps xmm3, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE24E: mulps xmm0, xmm7 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BE251: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x70)); /* 0x121BE254: movaps xmm0, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE258: mulps xmm0, xmm4 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BE25B: addps xmm3, xmm0 */
    _xmm[0] = _xmm[6]; /* 0x121BE25E: movaps xmm0, xmm6 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BE261: unpcklps xmm0, xmm2 */
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x121BE264: movlps qword ptr [ecx], xmm0 */
    MEM64(eax + ecx) = _xmm[0].u64[1]; /* 0x121BE267: movhps qword ptr [eax + ecx], xmm0 */
    MEM32(ecx + 0x8) = _xmm[3].u32[0]; /* 0x121BE26B: movss dword ptr [ecx + 8], xmm3 */
    _xmm[1] = _xmm[3]; /* 0x121BE270: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[3], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BE273: unpcklps xmm1, xmm3 */
    { xmm_t _s = _xmm[2], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[2]; _xmm[6].u32[1] = _s.u32[2]; _xmm[6].u32[2] = _d.u32[3]; _xmm[6].u32[3] = _s.u32[3]; } /* 0x121BE276: unpckhps xmm6, xmm2 */
    _xmm[2] = xmm_ld(ebp + (-0x90)); /* 0x121BE279: movaps xmm2, xmmword ptr [ebp - 0x90] */
    _xmm[1].u64[0] = _xmm[1].u64[1]; /* 0x121BE280: movhlps xmm1, xmm1 */
    MEM32(eax + ecx + 0x8) = _xmm[1].u32[0]; /* 0x121BE283: movss dword ptr [eax + ecx + 8], xmm1 */
    MEM64(ecx + eax * 2) = _xmm[6].u64[0]; /* 0x121BE289: movlps qword ptr [ecx + eax*2], xmm6 */
    MEM64(ecx + esi) = _xmm[6].u64[1]; /* 0x121BE28D: movhps qword ptr [ecx + esi], xmm6 */
    _xmm[6] = xmm_ld(ebp + (-0x110)); /* 0x121BE291: movaps xmm6, xmmword ptr [ebp - 0x110] */
    { xmm_t _s = _xmm[3], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BE298: unpckhps xmm3, xmm3 */
    MEM32(ecx + eax * 2 + 0x8) = _xmm[3].u32[0]; /* 0x121BE29B: movss dword ptr [ecx + eax*2 + 8], xmm3 */
    _xmm[3].u64[0] = _xmm[3].u64[1]; /* 0x121BE2A1: movhlps xmm3, xmm3 */
    MEM32(esi + ecx + 0x8) = _xmm[3].u32[0]; /* 0x121BE2A4: movss dword ptr [esi + ecx + 8], xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0x80)); /* 0x121BE2AA: movaps xmm3, xmmword ptr [ebp - 0x80] */
    esi = eax; /* 0x121BE2AE: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BE2B0: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BE2B0: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BE2B3: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BE2B5: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BE2B6: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BE1B0; /* 0x121BE2BC: jne 0x121be1b0 */
L_121BE2C2:
    esi = MEM32(ebx + 0x1C); /* 0x121BE2C2: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BE2C5: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BE2CB: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BE2D9; /* 0x121BE2D1: jmp 0x121be2d9 */
L_121BE2D3:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BE2D3: mov ecx, dword ptr [ebp - 0x114] */
L_121BE2D9:
    /* test esi, esi */ /* 0x121BE2D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE313; /* 0x121BE2DB: je 0x121be313 */
L_121BE2DD:
    edi = MEM32(ebp + (-0x120)); /* 0x121BE2DD: mov edi, dword ptr [ebp - 0x120] */
L_121BE2E3:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BE2E3: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BE2E9: push edx */
    PUSH32(esp, ecx); /* 0x121BE2EA: push ecx */
    RECOMP_CALL(sub_121BAF1A); /* 0x121BE2EB: call 0x121baf1a */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BE2F0: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BE2F6: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BE2FC: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BE302: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BE304: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BE305: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BE30B: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BE2E3; /* 0x121BE311: jne 0x121be2e3 */
L_121BE313:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BE313: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BE316: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BE31C: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BE31D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BE31F: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BE320: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BE325: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BE327: pop ebp */
    esp = ebx; /* 0x121BE328: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BE32A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BE32B: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BE333(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BE333u);

L_121BE333:
    edi = edi; /* 0x121BE333: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121BE335: push ebx */
    ebx = esp; /* 0x121BE336: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x121BE338: push ecx */
    PUSH32(esp, ecx); /* 0x121BE339: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BE33A: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BE33D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x121BE340: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x121BE341: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x121BE344: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x121BE348: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x158u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x158u; /* 0x121BE34A: sub esp, 0x158 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BE350: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BE355: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BE357: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BE35A: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(ebx + 0x8); /* 0x121BE35D: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0x10); /* 0x121BE360: mov edx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x121BE363: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebx + 0x14); /* 0x121BE369: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x121BE36C: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x121BE36D: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x121BE370: push edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121BE371: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebx + 0x18); /* 0x121BE377: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x124)) = eax; /* 0x121BE37A: mov dword ptr [ebp - 0x124], eax */
    PUSH32(esp, 0xAu); /* 0x121BE380: push 0xa */
    eax = esi; /* 0x121BE382: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x121BE384: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x121BE385: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x121BE388: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BE38A: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x121BE38C: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121BE38E: sub esi, edi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121BE390: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121BE390: shr edi, 2 */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BE393: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BE399: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebx + 0x1C) = esi; /* 0x121BE39F: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebp + (-0x12C)) = ecx; /* 0x121BE3A2: mov dword ptr [ebp - 0x12c], ecx */
    /* test edi, edi */ /* 0x121BE3A8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE59D; /* 0x121BE3AA: je 0x121be59d */
L_121BE3B0:
    PUSH32(esp, 4); /* 0x121BE3B0: push 4 */
    PUSH32(esp, 4); /* 0x121BE3B2: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BE3B4: push dword ptr [ebp - 0x124] */
    ecx = ebp + (-0x110); /* 0x121BE3BA: lea ecx, [ebp - 0x110] */
    RECOMP_CALL(sub_121BB1F2); /* 0x121BE3C0: call 0x121bb1f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x121BE3C5: mov ecx, dword ptr [ebp - 0x11c] */
    edx = MEM32(ebp + (-0x120)); /* 0x121BE3CB: mov edx, dword ptr [ebp - 0x120] */
    edx = (uint32_t)((int32_t)edx * (int32_t)3); /* 0x121BE3D1: imul edx, edx, 3 */
    eax = ecx; /* 0x121BE3D4: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x121BE3D6: imul eax, eax, 3 */
    MEM32(ebp + (-0x130)) = edx; /* 0x121BE3D9: mov dword ptr [ebp - 0x130], edx */
    edx = MEM32(ebp + (-0x118)); /* 0x121BE3DF: mov edx, dword ptr [ebp - 0x118] */
    MEM32(ebp + (-0x128)) = eax; /* 0x121BE3E5: mov dword ptr [ebp - 0x128], eax */
    /* test edi, edi */ /* 0x121BE3EB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE597; /* 0x121BE3ED: je 0x121be597 */
L_121BE3F3:
    _xmm[2] = xmm_ld(ebp + (-0x60)); /* 0x121BE3F3: movaps xmm2, xmmword ptr [ebp - 0x60] */
    _xmm[4] = xmm_ld(ebp + (-0xA0)); /* 0x121BE3F7: movaps xmm4, xmmword ptr [ebp - 0xa0] */
    _xmm[5] = xmm_ld(ebp + (-0xE0)); /* 0x121BE3FE: movaps xmm5, xmmword ptr [ebp - 0xe0] */
    esi = MEM32(ebp + (-0x11C)); /* 0x121BE405: mov esi, dword ptr [ebp - 0x11c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x121BE40B: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x121BE40B: shl ecx, 2 */
    MEM32(ebp + (-0x134)) = ecx; /* 0x121BE40E: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BE414: mov ecx, dword ptr [ebp - 0x114] */
L_121BE41A:
    _xmm[0].u64[0] = MEM64(edx + esi * 2); _xmm[0].u64[1] = 0; /* 0x121BE41A: movsd xmm0, qword ptr [edx + esi*2] */
    _xmm[3].u64[0] = MEM64(edx); _xmm[3].u64[1] = 0; /* 0x121BE41F: movsd xmm3, qword ptr [edx] */
    _xmm[3].u64[1] = MEM64(esi + edx); /* 0x121BE423: movhps xmm3, qword ptr [esi + edx] */
    _xmm[6].u64[0] = MEM32(edx + 0x8); _xmm[6].u64[1] = 0; /* 0x121BE427: movss xmm6, dword ptr [edx + 8] */
    _xmm[1].u64[0] = MEM32(edx + esi * 2 + 0x8); _xmm[1].u64[1] = 0; /* 0x121BE42C: movss xmm1, dword ptr [edx + esi*2 + 8] */
    eax = MEM32(ebp + (-0x128)); /* 0x121BE432: mov eax, dword ptr [ebp - 0x128] */
    _xmm[0].u64[1] = MEM64(edx + eax); /* 0x121BE438: movhps xmm0, qword ptr [edx + eax] */
    _xmm[7] = _xmm[3]; /* 0x121BE43C: movaps xmm7, xmm3 */
    { xmm_t _s = _xmm[0], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[1]; _xmm[3].u32[1] = _d.u32[3]; _xmm[3].u32[2] = _s.u32[1]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BE43F: shufps xmm3, xmm0, 0xdd */
    { xmm_t _s = _xmm[0], _d = _xmm[7]; _xmm[7].u32[0] = _d.u32[0]; _xmm[7].u32[1] = _d.u32[2]; _xmm[7].u32[2] = _s.u32[0]; _xmm[7].u32[3] = _s.u32[2]; } /* 0x121BE443: shufps xmm7, xmm0, 0x88 */
    _xmm[0].u64[0] = MEM32(esi + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BE447: movss xmm0, dword ptr [esi + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[6]; _xmm[6].u32[0] = _d.u32[0]; _xmm[6].u32[1] = _s.u32[0]; _xmm[6].u32[2] = _d.u32[1]; _xmm[6].u32[3] = _s.u32[1]; } /* 0x121BE44D: unpcklps xmm6, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + edx + 0x8); _xmm[0].u64[1] = 0; /* 0x121BE450: movss xmm0, dword ptr [eax + edx + 8] */
    { xmm_t _s = _xmm[0], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BE456: unpcklps xmm1, xmm0 */
    _xmm[6].u64[1] = _xmm[1].u64[0]; /* 0x121BE459: movlhps xmm6, xmm1 */
    _xmm[0] = _xmm[4]; /* 0x121BE45C: movaps xmm0, xmm4 */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE45F: mulps xmm0, xmm3 */
    _xmm[4] = xmm_ld(ebp + (-0x110)); /* 0x121BE462: movaps xmm4, xmmword ptr [ebp - 0x110] */
    eax = MEM32(ebp + (-0x120)); /* 0x121BE469: mov eax, dword ptr [ebp - 0x120] */
    _xmm[1] = _xmm[5]; /* 0x121BE46F: movaps xmm1, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[1] = _d; } /* 0x121BE472: mulps xmm1, xmm7 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BE475: addps xmm1, xmm0 */
    _xmm[0] = _xmm[2]; /* 0x121BE478: movaps xmm0, xmm2 */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE47B: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BE47E: addps xmm1, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x20))); float _s1 = sse_f32(MEM32(ebp + (-0x20) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x20) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x20) + 12)); xmm_t _d = _xmm[1]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[1] = _d; } /* 0x121BE481: addps xmm1, xmmword ptr [ebp - 0x20] */
    _xmm[2] = xmm_ld(ebp + (-0x100)); /* 0x121BE485: movaps xmm2, xmmword ptr [ebp - 0x100] */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(1.0f / _s0); _d.f32[1] = (float)(1.0f / _s1); _d.f32[2] = (float)(1.0f / _s2); _d.f32[3] = (float)(1.0f / _s3); _xmm[5] = _d; } /* 0x121BE48C: rcpps xmm5, xmm1 */
    esi = MEM32(ebp + (-0x130)); /* 0x121BE48F: mov esi, dword ptr [ebp - 0x130] */
    _xmm[0] = _xmm[5]; /* 0x121BE495: movaps xmm0, xmm5 */
    { float _s0 = _xmm[1].f32[0]; float _s1 = _xmm[1].f32[1]; float _s2 = _xmm[1].f32[2]; float _s3 = _xmm[1].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE498: mulps xmm0, xmm1 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE49B: mulps xmm0, xmm5 */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BE49E: mulps xmm4, xmm7 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BE4A1: addps xmm5, xmm5 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[5] = _d; } /* 0x121BE4A4: subps xmm5, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xD0)); /* 0x121BE4A7: movaps xmm0, xmmword ptr [ebp - 0xd0] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE4AE: mulps xmm0, xmm3 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BE4B1: addps xmm4, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x90)); /* 0x121BE4B4: movaps xmm0, xmmword ptr [ebp - 0x90] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE4BB: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BE4BE: addps xmm4, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xC0)); /* 0x121BE4C1: movaps xmm0, xmmword ptr [ebp - 0xc0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x50))); float _s1 = sse_f32(MEM32(ebp + (-0x50) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x50) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x50) + 12)); xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[4] = _d; } /* 0x121BE4C8: addps xmm4, xmmword ptr [ebp - 0x50] */
    { float _s0 = _xmm[3].f32[0]; float _s1 = _xmm[3].f32[1]; float _s2 = _xmm[3].f32[2]; float _s3 = _xmm[3].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE4CC: mulps xmm0, xmm3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x134)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x134)); /* 0x121BE4CF: add edx, dword ptr [ebp - 0x134] */
    _flag_k = FK_ADD;
    xmm_st(ebp + (-0x150), _xmm[3]); /* 0x121BE4D5: movaps xmmword ptr [ebp - 0x150], xmm3 */
    _xmm[3] = xmm_ld(ebp + (-0xF0)); /* 0x121BE4DC: movaps xmm3, xmmword ptr [ebp - 0xf0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BE4E3: mulps xmm2, xmm7 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BE4E6: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x80)); /* 0x121BE4E9: movaps xmm0, xmmword ptr [ebp - 0x80] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE4ED: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BE4F0: addps xmm2, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0xB0)); /* 0x121BE4F3: movaps xmm0, xmmword ptr [ebp - 0xb0] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x150))); float _s1 = sse_f32(MEM32(ebp + (-0x150) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x150) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x150) + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE4FA: mulps xmm0, xmmword ptr [ebp - 0x150] */
    { float _s0 = sse_f32(MEM32(ebp + (-0x40))); float _s1 = sse_f32(MEM32(ebp + (-0x40) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x40) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x40) + 12)); xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[2] = _d; } /* 0x121BE501: addps xmm2, xmmword ptr [ebp - 0x40] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BE505: mulps xmm3, xmm7 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BE508: addps xmm3, xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x70)); /* 0x121BE50B: movaps xmm0, xmmword ptr [ebp - 0x70] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE50F: mulps xmm0, xmm6 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BE512: addps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(ebp + (-0x30))); float _s1 = sse_f32(MEM32(ebp + (-0x30) + 4)); float _s2 = sse_f32(MEM32(ebp + (-0x30) + 8)); float _s3 = sse_f32(MEM32(ebp + (-0x30) + 12)); xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[3] = _d; } /* 0x121BE515: addps xmm3, xmmword ptr [ebp - 0x30] */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BE519: mulps xmm4, xmm5 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[2] = _d; } /* 0x121BE51C: mulps xmm2, xmm5 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[3]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[3] = _d; } /* 0x121BE51F: mulps xmm3, xmm5 */
    _xmm[0] = _xmm[4]; /* 0x121BE522: movaps xmm0, xmm4 */
    { xmm_t _s = _xmm[2], _d = _xmm[0]; _xmm[0].u32[0] = _d.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _d.u32[1]; _xmm[0].u32[3] = _s.u32[1]; } /* 0x121BE525: unpcklps xmm0, xmm2 */
    MEM64(ecx) = _xmm[0].u64[0]; /* 0x121BE528: movlps qword ptr [ecx], xmm0 */
    MEM64(eax + ecx) = _xmm[0].u64[1]; /* 0x121BE52B: movhps qword ptr [eax + ecx], xmm0 */
    _xmm[1] = _xmm[3]; /* 0x121BE52F: movaps xmm1, xmm3 */
    { xmm_t _s = _xmm[5], _d = _xmm[1]; _xmm[1].u32[0] = _d.u32[0]; _xmm[1].u32[1] = _s.u32[0]; _xmm[1].u32[2] = _d.u32[1]; _xmm[1].u32[3] = _s.u32[1]; } /* 0x121BE532: unpcklps xmm1, xmm5 */
    MEM32(ecx + 0x8) = _xmm[1].u32[0]; /* 0x121BE535: movss dword ptr [ecx + 8], xmm1 */
    _xmm[1].u64[0] = _xmm[1].u64[1]; /* 0x121BE53A: movhlps xmm1, xmm1 */
    MEM32(eax + ecx + 0x8) = _xmm[1].u32[0]; /* 0x121BE53D: movss dword ptr [eax + ecx + 8], xmm1 */
    { xmm_t _s = _xmm[2], _d = _xmm[4]; _xmm[4].u32[0] = _d.u32[2]; _xmm[4].u32[1] = _s.u32[2]; _xmm[4].u32[2] = _d.u32[3]; _xmm[4].u32[3] = _s.u32[3]; } /* 0x121BE543: unpckhps xmm4, xmm2 */
    MEM64(ecx + eax * 2) = _xmm[4].u64[0]; /* 0x121BE546: movlps qword ptr [ecx + eax*2], xmm4 */
    MEM64(ecx + esi) = _xmm[4].u64[1]; /* 0x121BE54A: movhps qword ptr [ecx + esi], xmm4 */
    { xmm_t _s = _xmm[5], _d = _xmm[3]; _xmm[3].u32[0] = _d.u32[2]; _xmm[3].u32[1] = _s.u32[2]; _xmm[3].u32[2] = _d.u32[3]; _xmm[3].u32[3] = _s.u32[3]; } /* 0x121BE54E: unpckhps xmm3, xmm5 */
    MEM32(ecx + eax * 2 + 0x8) = _xmm[3].u32[0]; /* 0x121BE551: movss dword ptr [ecx + eax*2 + 8], xmm3 */
    _xmm[3].u64[0] = _xmm[3].u64[1]; /* 0x121BE557: movhlps xmm3, xmm3 */
    MEM32(esi + ecx + 0x8) = _xmm[3].u32[0]; /* 0x121BE55A: movss dword ptr [esi + ecx + 8], xmm3 */
    esi = eax; /* 0x121BE560: mov esi, eax */
    _xmm[2] = xmm_ld(ebp + (-0x60)); /* 0x121BE562: movaps xmm2, xmmword ptr [ebp - 0x60] */
    _xmm[4] = xmm_ld(ebp + (-0xA0)); /* 0x121BE566: movaps xmm4, xmmword ptr [ebp - 0xa0] */
    _xmm[5] = xmm_ld(ebp + (-0xE0)); /* 0x121BE56D: movaps xmm5, xmmword ptr [ebp - 0xe0] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x121BE574: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x121BE574: shl esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121BE577: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BE579: dec edi */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x11C)); /* 0x121BE57A: mov esi, dword ptr [ebp - 0x11c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BE41A; /* 0x121BE580: jne 0x121be41a */
L_121BE586:
    esi = MEM32(ebx + 0x1C); /* 0x121BE586: mov esi, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x118)) = edx; /* 0x121BE589: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BE58F: mov dword ptr [ebp - 0x114], ecx */
    goto L_121BE59D; /* 0x121BE595: jmp 0x121be59d */
L_121BE597:
    ecx = MEM32(ebp + (-0x114)); /* 0x121BE597: mov ecx, dword ptr [ebp - 0x114] */
L_121BE59D:
    /* test esi, esi */ /* 0x121BE59D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE5D7; /* 0x121BE59F: je 0x121be5d7 */
L_121BE5A1:
    edi = MEM32(ebp + (-0x120)); /* 0x121BE5A1: mov edi, dword ptr [ebp - 0x120] */
L_121BE5A7:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x121BE5A7: push dword ptr [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x121BE5AD: push edx */
    PUSH32(esp, ecx); /* 0x121BE5AE: push ecx */
    RECOMP_CALL(sub_121BD34B); /* 0x121BE5AF: call 0x121bd34b */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x118)); /* 0x121BE5B4: mov edx, dword ptr [ebp - 0x118] */
    ecx = MEM32(ebp + (-0x114)); /* 0x121BE5BA: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x11C)); /* 0x121BE5C0: add edx, dword ptr [ebp - 0x11c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BE5C6: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BE5C8: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = edx; /* 0x121BE5C9: mov dword ptr [ebp - 0x118], edx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x121BE5CF: mov dword ptr [ebp - 0x114], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BE5A7; /* 0x121BE5D5: jne 0x121be5a7 */
L_121BE5D7:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BE5D7: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x12C)); /* 0x121BE5DA: mov eax, dword ptr [ebp - 0x12c] */
    edi = POP32_VAL(esp); /* 0x121BE5E0: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BE5E1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BE5E3: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BE5E4: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121BE5E9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BE5EB: pop ebp */
    esp = ebx; /* 0x121BE5EC: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x121BE5EE: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x121BE5EF: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_121BE5F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BE5F7u);

L_121BE5F7:
    edi = edi; /* 0x121BE5F7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BE5F9: push ebp */
    ebp = esp; /* 0x121BE5FA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121BE5FC: mov eax, dword ptr [ebp + 8] */
    _xmm[0] = xmm_ld(eax); /* 0x121BE5FF: movaps xmm0, xmmword ptr [eax] */
    /* nop */ /* 0x121BE602: nop  */
    _xmm[1] = _xmm[0]; /* 0x121BE603: movaps xmm1, xmm0 */
    _xmm[6] = _xmm[0]; /* 0x121BE606: movaps xmm6, xmm0 */
    { xmm_t _s = xmm_ld(0x121D9580); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x121BE609: pand xmm0, xmmword ptr [0x121d9580] */
    { xmm_t _s = xmm_ld(0x121D9570); for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x121BE611: pand xmm1, xmmword ptr [0x121d9570] */
    _xmm[2] = _xmm[0]; /* 0x121BE619: movaps xmm2, xmm0 */
    _xmm[7] = _xmm[0]; /* 0x121BE61C: movaps xmm7, xmm0 */
    { float _s0 = sse_f32(MEM32(0x121D9560)); float _s1 = sse_f32(MEM32(0x121D9560 + 4)); float _s2 = sse_f32(MEM32(0x121D9560 + 8)); float _s3 = sse_f32(MEM32(0x121D9560 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[0] = _d; } /* 0x121BE61F: mulps xmm0, xmmword ptr [0x121d9560] */
    _xmm[4] = xmm_ld(0x121D9550); /* 0x121BE626: movaps xmm4, xmmword ptr [0x121d9550] */
    _xmm[5] = xmm_ld(0x121D9540); /* 0x121BE62D: movaps xmm5, xmmword ptr [0x121d9540] */
    _xmm[6] = xmm_ld(0x121D9530); /* 0x121BE634: movaps xmm6, xmmword ptr [0x121d9530] */
    _xmm[7] = xmm_ld(0x121D9520); /* 0x121BE63B: movaps xmm7, xmmword ptr [0x121d9520] */
    { float _s0 = sse_f32(MEM32(0x121D9510)); float _s1 = sse_f32(MEM32(0x121D9510 + 4)); float _s2 = sse_f32(MEM32(0x121D9510 + 8)); float _s3 = sse_f32(MEM32(0x121D9510 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[0] = _d; } /* 0x121BE642: addps xmm0, xmmword ptr [0x121d9510] */
    _xmm[3] = _xmm[0]; /* 0x121BE649: movaps xmm3, xmm0 */
    { float _s0 = sse_f32(MEM32(0x121D9510)); float _s1 = sse_f32(MEM32(0x121D9510 + 4)); float _s2 = sse_f32(MEM32(0x121D9510 + 8)); float _s3 = sse_f32(MEM32(0x121D9510 + 12)); xmm_t _d = _xmm[0]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[0] = _d; } /* 0x121BE64C: subps xmm0, xmmword ptr [0x121d9510] */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BE653: mulps xmm4, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BE656: mulps xmm5, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BE659: mulps xmm6, xmm0 */
    { float _s0 = _xmm[0].f32[0]; float _s1 = _xmm[0].f32[1]; float _s2 = _xmm[0].f32[2]; float _s3 = _xmm[0].f32[3]; xmm_t _d = _xmm[7]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[7] = _d; } /* 0x121BE65C: mulps xmm7, xmm0 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BE65F: subps xmm2, xmm4 */
    { float _s0 = _xmm[5].f32[0]; float _s1 = _xmm[5].f32[1]; float _s2 = _xmm[5].f32[2]; float _s3 = _xmm[5].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BE662: subps xmm2, xmm5 */
    _xmm[5] = xmm_ld(0x121D9500); /* 0x121BE665: movaps xmm5, xmmword ptr [0x121d9500] */
    { float _s0 = _xmm[6].f32[0]; float _s1 = _xmm[6].f32[1]; float _s2 = _xmm[6].f32[2]; float _s3 = _xmm[6].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BE66C: subps xmm2, xmm6 */
    _xmm[6] = xmm_ld(0x121D94F0); /* 0x121BE66F: movaps xmm6, xmmword ptr [0x121d94f0] */
    { float _s0 = _xmm[7].f32[0]; float _s1 = _xmm[7].f32[1]; float _s2 = _xmm[7].f32[2]; float _s3 = _xmm[7].f32[3]; xmm_t _d = _xmm[2]; _d.f32[0] = (float)(_d.f32[0] - _s0); _d.f32[1] = (float)(_d.f32[1] - _s1); _d.f32[2] = (float)(_d.f32[2] - _s2); _d.f32[3] = (float)(_d.f32[3] - _s3); _xmm[2] = _d; } /* 0x121BE676: subps xmm2, xmm7 */
    _xmm[4] = _xmm[2]; /* 0x121BE679: movaps xmm4, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[4]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[4] = _d; } /* 0x121BE67C: mulps xmm4, xmm4 */
    { xmm_t _s = xmm_ld(0x121D94E0); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x121BE67F: andps xmm3, xmmword ptr [0x121d94e0] */
    _xmm[0] = _xmm[3]; /* 0x121BE686: movaps xmm0, xmm3 */
    _xmm[7] = _xmm[3]; /* 0x121BE689: movaps xmm7, xmm3 */
    { xmm_t _s = xmm_ld(0x121D94D0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x121BE68C: andps xmm0, xmmword ptr [0x121d94d0] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] -= _s.u32[_k]; } /* 0x121BE693: psubd xmm3, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] += _s.u32[_k]; } /* 0x121BE697: paddd xmm7, xmm0 */
    { xmm_t _s = xmm_ld(0x121D94C0); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x121BE69B: pand xmm3, xmmword ptr [0x121d94c0] */
    { xmm_t _s = xmm_ld(0x121D94C0); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _xmm[7].u32[_k] & _s.u32[_k]; } /* 0x121BE6A3: pand xmm7, xmmword ptr [0x121d94c0] */
    { uint64_t _c = 30u; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[3].u32[_k] << _c); } /* 0x121BE6AB: pslld xmm3, 0x1e */
    { uint64_t _c = 30u; for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[7].u32[_k] << _c); } /* 0x121BE6B0: pslld xmm7, 0x1e */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x121BE6B5: pxor xmm3, xmm1 */
    { uint64_t _c = 30u; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _c > 31 ? 0 : (uint32_t)(_xmm[0].u32[_k] << _c); } /* 0x121BE6B9: pslld xmm0, 0x1e */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x121BE6BE: pxor xmm1, xmm1 */
    { double _s0 = _xmm[1].f32[0]; double _s1 = _xmm[1].f32[1]; double _s2 = _xmm[1].f32[2]; double _s3 = _xmm[1].f32[3]; _xmm[0].u32[0] = sse_cmp_pred(_xmm[0].f32[0], _s0, 4); _xmm[0].u32[1] = sse_cmp_pred(_xmm[0].f32[1], _s1, 4); _xmm[0].u32[2] = sse_cmp_pred(_xmm[0].f32[2], _s2, 4); _xmm[0].u32[3] = sse_cmp_pred(_xmm[0].f32[3], _s3, 4); } /* 0x121BE6C2: cmpneqps xmm0, xmm1 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BE6C6: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BE6C9: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D94B0)); float _s1 = sse_f32(MEM32(0x121D94B0 + 4)); float _s2 = sse_f32(MEM32(0x121D94B0 + 8)); float _s3 = sse_f32(MEM32(0x121D94B0 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BE6CC: addps xmm5, xmmword ptr [0x121d94b0] */
    { float _s0 = sse_f32(MEM32(0x121D94A0)); float _s1 = sse_f32(MEM32(0x121D94A0 + 4)); float _s2 = sse_f32(MEM32(0x121D94A0 + 8)); float _s3 = sse_f32(MEM32(0x121D94A0 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BE6D3: addps xmm6, xmmword ptr [0x121d94a0] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BE6DA: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BE6DD: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D9490)); float _s1 = sse_f32(MEM32(0x121D9490 + 4)); float _s2 = sse_f32(MEM32(0x121D9490 + 8)); float _s3 = sse_f32(MEM32(0x121D9490 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BE6E0: addps xmm5, xmmword ptr [0x121d9490] */
    { float _s0 = sse_f32(MEM32(0x121D9480)); float _s1 = sse_f32(MEM32(0x121D9480 + 4)); float _s2 = sse_f32(MEM32(0x121D9480 + 8)); float _s3 = sse_f32(MEM32(0x121D9480 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BE6E7: addps xmm6, xmmword ptr [0x121d9480] */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BE6EE: mulps xmm5, xmm4 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BE6F1: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D9470)); float _s1 = sse_f32(MEM32(0x121D9470 + 4)); float _s2 = sse_f32(MEM32(0x121D9470 + 8)); float _s3 = sse_f32(MEM32(0x121D9470 + 12)); xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[5] = _d; } /* 0x121BE6F4: addps xmm5, xmmword ptr [0x121d9470] */
    { float _s0 = sse_f32(MEM32(0x121D9460)); float _s1 = sse_f32(MEM32(0x121D9460 + 4)); float _s2 = sse_f32(MEM32(0x121D9460 + 8)); float _s3 = sse_f32(MEM32(0x121D9460 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BE6FB: addps xmm6, xmmword ptr [0x121d9460] */
    { float _s0 = _xmm[2].f32[0]; float _s1 = _xmm[2].f32[1]; float _s2 = _xmm[2].f32[2]; float _s3 = _xmm[2].f32[3]; xmm_t _d = _xmm[5]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[5] = _d; } /* 0x121BE702: mulps xmm5, xmm2 */
    { float _s0 = _xmm[4].f32[0]; float _s1 = _xmm[4].f32[1]; float _s2 = _xmm[4].f32[2]; float _s3 = _xmm[4].f32[3]; xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] * _s0); _d.f32[1] = (float)(_d.f32[1] * _s1); _d.f32[2] = (float)(_d.f32[2] * _s2); _d.f32[3] = (float)(_d.f32[3] * _s3); _xmm[6] = _d; } /* 0x121BE705: mulps xmm6, xmm4 */
    { float _s0 = sse_f32(MEM32(0x121D9450)); float _s1 = sse_f32(MEM32(0x121D9450 + 4)); float _s2 = sse_f32(MEM32(0x121D9450 + 8)); float _s3 = sse_f32(MEM32(0x121D9450 + 12)); xmm_t _d = _xmm[6]; _d.f32[0] = (float)(_d.f32[0] + _s0); _d.f32[1] = (float)(_d.f32[1] + _s1); _d.f32[2] = (float)(_d.f32[2] + _s2); _d.f32[3] = (float)(_d.f32[3] + _s3); _xmm[6] = _d; } /* 0x121BE708: addps xmm6, xmmword ptr [0x121d9450] */
    _xmm[1] = _xmm[0]; /* 0x121BE70F: movaps xmm1, xmm0 */
    _xmm[2] = _xmm[0]; /* 0x121BE712: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = ~_xmm[1].u32[_k] & _s.u32[_k]; } /* 0x121BE715: andnps xmm1, xmm5 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x121BE718: andps xmm2, xmm6 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x121BE71B: orps xmm1, xmm2 */
    _xmm[2] = _xmm[0]; /* 0x121BE71E: movaps xmm2, xmm0 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x121BE721: andps xmm0, xmm5 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = ~_xmm[2].u32[_k] & _s.u32[_k]; } /* 0x121BE724: andnps xmm2, xmm6 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x121BE727: orps xmm0, xmm2 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x121BE72A: xorps xmm0, xmm7 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x121BE72D: xorps xmm1, xmm3 */
    eax = MEM32(ebp + 0xC); /* 0x121BE730: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x121BE733: mov edx, dword ptr [ebp + 0x10] */
    xmm_st(eax, _xmm[1]); /* 0x121BE736: movaps xmmword ptr [eax], xmm1 */
    xmm_st(edx, _xmm[0]); /* 0x121BE739: movaps xmmword ptr [edx], xmm0 */
    ebp = POP32_VAL(esp); /* 0x121BE73C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BE73D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BE745(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BE745u);

L_121BE745:
    edi = edi; /* 0x121BE745: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BE747: push ebp */
    ebp = esp; /* 0x121BE748: mov ebp, esp */
    eax = 0xE06D7363u; /* 0x121BE74A: mov eax, 0xe06d7363 */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x121BE74F: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BE761; /* 0x121BE752: jne 0x121be761 */
L_121BE754:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BE754: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x121BE757: push eax */
    RECOMP_CALL(sub_121BFA2A); /* 0x121BE758: call 0x121bfa2a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121BE75D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121BE75E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x121BE75F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BE760: ret  */
L_121BE761:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BE761: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x121BE763: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BE764: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BE76A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BE76Au);

L_121BE76A:
    edi = edi; /* 0x121BE76A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BE76C: push ebp */
    ebp = esp; /* 0x121BE76D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121BE76F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121BE770: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BE773: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121BE786; /* 0x121BE775: jmp 0x121be786 */
L_121BE777:
    /* test eax, eax */ /* 0x121BE777: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BE78B; /* 0x121BE779: jne 0x121be78b */
L_121BE77B:
    ecx = MEM32(esi); /* 0x121BE77B: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x121BE77D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE783; /* 0x121BE77F: je 0x121be783 */
L_121BE781:
    RECOMP_ICALL(ecx); /* 0x121BE781: call ecx */
    RECOMP_FLAGS_IN();
L_121BE783:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x121BE783: add esi, 4 */
    _flag_k = FK_ADD;
L_121BE786:
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x121BE786: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121BE777; /* 0x121BE789: jb 0x121be777 */
L_121BE78B:
    esi = POP32_VAL(esp); /* 0x121BE78B: pop esi */
    ebp = POP32_VAL(esp); /* 0x121BE78C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BE78D: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BE793(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BE793u);

L_121BE793:
    PUSH32(esp, 0x80u); /* 0x121BE793: push 0x80 */
    RECOMP_ICALL(MEM32(0x12001294)); /* 0x121BE798: call dword ptr [0x12001294] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121BE79E: pop ecx */
    MEM32(0x121EF0A4) = eax; /* 0x121BE79F: mov dword ptr [0x121ef0a4], eax */
    MEM32(0x121EF0A0) = eax; /* 0x121BE7A4: mov dword ptr [0x121ef0a0], eax */
    /* test eax, eax */ /* 0x121BE7A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BE7AF; /* 0x121BE7AB: jne 0x121be7af */
L_121BE7AD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121BE7AD: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BE7AE: ret  */
L_121BE7AF:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x121BE7AF: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BE7B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BE7B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BE7BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BE7BAu);

L_121BE7BA:
    edi = edi; /* 0x121BE7BA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BE7BC: push ebp */
    ebp = esp; /* 0x121BE7BD: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121BE7BF: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121BE7C3: push ebx */
    PUSH32(esp, esi); /* 0x121BE7C4: push esi */
    PUSH32(esp, edi); /* 0x121BE7C5: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BE8C6; /* 0x121BE7C6: jne 0x121be8c6 */
L_121BE7CC:
    eax = MEM32(0x121EED6C); /* 0x121BE7CC: mov eax, dword ptr [0x121eed6c] */
    /* test eax, eax */ /* 0x121BE7D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121BE8BF; /* 0x121BE7D3: jle 0x121be8bf */
L_121BE7D9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121BE7D9: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x121EED6C) = eax; /* 0x121BE7DA: mov dword ptr [0x121eed6c], eax */
    eax = MEM32(FS_BASE + (0x18)); /* 0x121BE7DF: mov eax, dword ptr fs:[0x18] */
    eax = MEM32(eax + 0x4); /* 0x121BE7E5: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121BE7E8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x121BE7EA: push esi */
    PUSH32(esp, eax); /* 0x121BE7EB: push eax */
    ebx = 0x121EF09Cu; /* 0x121BE7EC: mov ebx, 0x121ef09c */
    PUSH32(esp, ebx); /* 0x121BE7F1: push ebx */
    MEM32(ebp + 0xC) = eax; /* 0x121BE7F2: mov dword ptr [ebp + 0xc], eax */
    MEM32(ebp + 0x10) = esi; /* 0x121BE7F5: mov dword ptr [ebp + 0x10], esi */
    RECOMP_ICALL(MEM32(0x12001178)); /* 0x121BE7F8: call dword ptr [0x12001178] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121BE7FE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121BE800: inc edi */
    _flag_k = FK_INC;
    goto L_121BE81E; /* 0x121BE801: jmp 0x121be81e */
L_121BE803:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x121BE803: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BE824; /* 0x121BE806: je 0x121be824 */
L_121BE808:
    PUSH32(esp, 0x3E8u); /* 0x121BE808: push 0x3e8 */
    RECOMP_ICALL(MEM32(0x12001170)); /* 0x121BE80D: call dword ptr [0x12001170] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x121BE813: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BE814: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x121BE817: push ebx */
    RECOMP_ICALL(MEM32(0x12001178)); /* 0x121BE818: call dword ptr [0x12001178] */
    RECOMP_FLAGS_IN();
L_121BE81E:
    /* test eax, eax */ /* 0x121BE81E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BE803; /* 0x121BE820: jne 0x121be803 */
L_121BE822:
    goto L_121BE827; /* 0x121BE822: jmp 0x121be827 */
L_121BE824:
    MEM32(ebp + 0x10) = edi; /* 0x121BE824: mov dword ptr [ebp + 0x10], edi */
L_121BE827:
    /* cmp MEM32(0x121EF098), 2 */ /* 0x121BE827: cmp dword ptr [0x121ef098], 2 */
    _flag_a = (uint32_t)(MEM32(0x121EF098)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BE83D; /* 0x121BE82E: je 0x121be83d */
L_121BE830:
    PUSH32(esp, 0x1Fu); /* 0x121BE830: push 0x1f */
    RECOMP_CALL(sub_121BFB9E); /* 0x121BE832: call 0x121bfb9e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121BE837: pop ecx */
    goto L_121BE98F; /* 0x121BE838: jmp 0x121be98f */
L_121BE83D:
    ebx = MEM32(0x121EF0A4); /* 0x121BE83D: mov ebx, dword ptr [0x121ef0a4] */
    /* test ebx, ebx */ /* 0x121BE843: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE89F; /* 0x121BE845: je 0x121be89f */
L_121BE847:
    ecx = MEM32(0x121EF0A0); /* 0x121BE847: mov ecx, dword ptr [0x121ef0a0] */
    MEM32(ebp + 0xC) = ebx; /* 0x121BE84D: mov dword ptr [ebp + 0xc], ebx */
    edi = ecx; /* 0x121BE850: mov edi, ecx */
L_121BE852:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x121BE852: sub ecx, 4 */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x121BE855: mov dword ptr [ebp + 8], ecx */
    /* cmp ecx, ebx */ /* 0x121BE858: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121BE888; /* 0x121BE85A: jb 0x121be888 */
L_121BE85C:
    /* cmp MEM32(ecx), esi */ /* 0x121BE85C: cmp dword ptr [ecx], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BE852; /* 0x121BE85E: je 0x121be852 */
L_121BE860:
    eax = MEM32(ecx); /* 0x121BE860: mov eax, dword ptr [ecx] */
    MEM32(ecx) = esi; /* 0x121BE862: mov dword ptr [ecx], esi */
    RECOMP_ICALL(eax); /* 0x121BE864: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x121EF0A4); /* 0x121BE866: mov edx, dword ptr [0x121ef0a4] */
    eax = MEM32(0x121EF0A0); /* 0x121BE86C: mov eax, dword ptr [0x121ef0a0] */
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x121BE871: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BE87D; /* 0x121BE874: jne 0x121be87d */
L_121BE876:
    ecx = MEM32(ebp + 0x8); /* 0x121BE876: mov ecx, dword ptr [ebp + 8] */
    /* cmp edi, eax */ /* 0x121BE879: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BE852; /* 0x121BE87B: je 0x121be852 */
L_121BE87D:
    MEM32(ebp + 0xC) = edx; /* 0x121BE87D: mov dword ptr [ebp + 0xc], edx */
    ebx = edx; /* 0x121BE880: mov ebx, edx */
    edi = eax; /* 0x121BE882: mov edi, eax */
    ecx = eax; /* 0x121BE884: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_121BE852; /* 0x121BE886: jmp 0x121be852 */
L_121BE888:
    PUSH32(esp, ebx); /* 0x121BE888: push ebx */
    RECOMP_ICALL(MEM32(0x12001284)); /* 0x121BE889: call dword ptr [0x12001284] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121BE88F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x121BE891: pop ecx */
    MEM32(0x121EF0A0) = esi; /* 0x121BE892: mov dword ptr [0x121ef0a0], esi */
    MEM32(0x121EF0A4) = esi; /* 0x121BE898: mov dword ptr [0x121ef0a4], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121BE89E: inc edi */
    _flag_k = FK_INC;
L_121BE89F:
    MEM32(0x121EF098) = esi; /* 0x121BE89F: mov dword ptr [0x121ef098], esi */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x121BE8A5: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BE98F; /* 0x121BE8A8: jne 0x121be98f */
L_121BE8AE:
    PUSH32(esp, esi); /* 0x121BE8AE: push esi */
    PUSH32(esp, 0x121EF09Cu); /* 0x121BE8AF: push 0x121ef09c */
    RECOMP_ICALL(MEM32(0x12001174)); /* 0x121BE8B4: call dword ptr [0x12001174] */
    RECOMP_FLAGS_IN();
    goto L_121BE98F; /* 0x121BE8BA: jmp 0x121be98f */
L_121BE8BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BE8BF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121BE991; /* 0x121BE8C1: jmp 0x121be991 */
L_121BE8C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121BE8C6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121BE8C8: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x121BE8C9: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BE98F; /* 0x121BE8CC: jne 0x121be98f */
L_121BE8D2:
    eax = MEM32(FS_BASE + (0x18)); /* 0x121BE8D2: mov eax, dword ptr fs:[0x18] */
    eax = MEM32(eax + 0x4); /* 0x121BE8D8: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121BE8DB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x121BE8DD: push esi */
    MEM32(ebp + 0xC) = eax; /* 0x121BE8DE: mov dword ptr [ebp + 0xc], eax */
    ebx = esi; /* 0x121BE8E1: mov ebx, esi */
    PUSH32(esp, eax); /* 0x121BE8E3: push eax */
    goto L_121BE8FA; /* 0x121BE8E4: jmp 0x121be8fa */
L_121BE8E6:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x121BE8E6: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BE90B; /* 0x121BE8E9: je 0x121be90b */
L_121BE8EB:
    PUSH32(esp, 0x3E8u); /* 0x121BE8EB: push 0x3e8 */
    RECOMP_ICALL(MEM32(0x12001170)); /* 0x121BE8F0: call dword ptr [0x12001170] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x121BE8F6: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BE8F7: push dword ptr [ebp + 0xc] */
L_121BE8FA:
    PUSH32(esp, 0x121EF09Cu); /* 0x121BE8FA: push 0x121ef09c */
    RECOMP_ICALL(MEM32(0x12001178)); /* 0x121BE8FF: call dword ptr [0x12001178] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121BE905: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BE8E6; /* 0x121BE907: jne 0x121be8e6 */
L_121BE909:
    goto L_121BE90D; /* 0x121BE909: jmp 0x121be90d */
L_121BE90B:
    ebx = edi; /* 0x121BE90B: mov ebx, edi */
L_121BE90D:
    /* cmp MEM32(0x121EF098), esi */ /* 0x121BE90D: cmp dword ptr [0x121ef098], esi */
    _flag_a = (uint32_t)(MEM32(0x121EF098)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BE91E; /* 0x121BE913: je 0x121be91e */
L_121BE915:
    PUSH32(esp, 0x1Fu); /* 0x121BE915: push 0x1f */
    RECOMP_CALL(sub_121BFB9E); /* 0x121BE917: call 0x121bfb9e */
    RECOMP_FLAGS_IN();
    goto L_121BE953; /* 0x121BE91C: jmp 0x121be953 */
L_121BE91E:
    PUSH32(esp, 0x1200149Cu); /* 0x121BE91E: push 0x1200149c */
    PUSH32(esp, 0x12001490u); /* 0x121BE923: push 0x12001490 */
    MEM32(0x121EF098) = edi; /* 0x121BE928: mov dword ptr [0x121ef098], edi */
    RECOMP_CALL(sub_121BE76A); /* 0x121BE92E: call 0x121be76a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121BE933: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121BE934: pop ecx */
    /* test eax, eax */ /* 0x121BE935: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BE8BF; /* 0x121BE937: jne 0x121be8bf */
L_121BE939:
    PUSH32(esp, 0x1200148Cu); /* 0x121BE939: push 0x1200148c */
    PUSH32(esp, 0x1200130Cu); /* 0x121BE93E: push 0x1200130c */
    RECOMP_CALL(sub_121BFB92); /* 0x121BE943: call 0x121bfb92 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121BE948: pop ecx */
    MEM32(0x121EF098) = 2; /* 0x121BE949: mov dword ptr [0x121ef098], 2 */
L_121BE953:
    ecx = POP32_VAL(esp); /* 0x121BE953: pop ecx */
    /* test ebx, ebx */ /* 0x121BE954: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BE964; /* 0x121BE956: jne 0x121be964 */
L_121BE958:
    PUSH32(esp, esi); /* 0x121BE958: push esi */
    PUSH32(esp, 0x121EF09Cu); /* 0x121BE959: push 0x121ef09c */
    RECOMP_ICALL(MEM32(0x12001174)); /* 0x121BE95E: call dword ptr [0x12001174] */
    RECOMP_FLAGS_IN();
L_121BE964:
    /* cmp MEM32(0x121EF0B0), esi */ /* 0x121BE964: cmp dword ptr [0x121ef0b0], esi */
    _flag_a = (uint32_t)(MEM32(0x121EF0B0)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BE989; /* 0x121BE96A: je 0x121be989 */
L_121BE96C:
    PUSH32(esp, 0x121EF0B0u); /* 0x121BE96C: push 0x121ef0b0 */
    RECOMP_CALL(sub_121BFAD0); /* 0x121BE971: call 0x121bfad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121BE976: pop ecx */
    /* test eax, eax */ /* 0x121BE977: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BE989; /* 0x121BE979: je 0x121be989 */
L_121BE97B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121BE97B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x121BE97E: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BE980: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121EF0B0)); /* 0x121BE983: call dword ptr [0x121ef0b0] */
    RECOMP_FLAGS_IN();
L_121BE989:
    _flag_a = (uint32_t)(MEM32(0x121EED6C)); _flag_b = (uint32_t)(1);
    MEM32(0x121EED6C) = MEM32(0x121EED6C) + 1; /* 0x121BE989: inc dword ptr [0x121eed6c] */
    _flag_k = FK_INC;
L_121BE98F:
    eax = edi; /* 0x121BE98F: mov eax, edi */
L_121BE991:
    edi = POP32_VAL(esp); /* 0x121BE991: pop edi */
    esi = POP32_VAL(esp); /* 0x121BE992: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BE993: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121BE994: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BE995: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121BEBFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BEBFDu);

L_121BEBFD:
    MEM32(0x121D95A0) = 0xFFFFFFFFu; /* 0x121BEBFD: mov dword ptr [0x121d95a0], 0xffffffff */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BEC07: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BEC0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BEC0Du);

    goto L_121BEC0D;
L_121BE99D:
    PUSH32(esp, 0x2Cu); /* 0x121BE99D: push 0x2c */
    PUSH32(esp, 0x121C5980u); /* 0x121BE99F: push 0x121c5980 */
    RECOMP_CALL(sub_121BF3A0); /* 0x121BE9A4: call 0x121bf3a0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = 1; /* 0x121BE9A9: mov dword ptr [ebp - 0x1c], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121BE9B0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x121BE9B2: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + 0xC); /* 0x121BE9B5: mov eax, dword ptr [ebp + 0xc] */
    MEM32(0x121D95A0) = eax; /* 0x121BE9B8: mov dword ptr [0x121d95a0], eax */
    /* test eax, eax */ /* 0x121BE9BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BE9D1; /* 0x121BE9BF: jne 0x121be9d1 */
L_121BE9C1:
    /* cmp MEM32(0x121EED6C), eax */ /* 0x121BE9C1: cmp dword ptr [0x121eed6c], eax */
    _flag_a = (uint32_t)(MEM32(0x121EED6C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BE9D1; /* 0x121BE9C7: jne 0x121be9d1 */
L_121BE9C9:
    MEM32(ebp + (-0x1C)) = esi; /* 0x121BE9C9: mov dword ptr [ebp - 0x1c], esi */
    goto L_121BEBE6; /* 0x121BE9CC: jmp 0x121bebe6 */
L_121BE9D1:
    /* cmp eax, 1 */ /* 0x121BE9D1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BE9DF; /* 0x121BE9D4: je 0x121be9df */
L_121BE9D6:
    /* cmp eax, 2 */ /* 0x121BE9D6: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BEA75; /* 0x121BE9D9: jne 0x121bea75 */
L_121BE9DF:
    eax = MEM32(0x121EF0AC); /* 0x121BE9DF: mov eax, dword ptr [0x121ef0ac] */
    /* test eax, eax */ /* 0x121BE9E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEA28; /* 0x121BE9E6: je 0x121bea28 */
L_121BE9E8:
    MEM32(ebp + (-0x4)) = 1; /* 0x121BE9E8: mov dword ptr [ebp - 4], 1 */
    MEM32(0x121EED70) = 1; /* 0x121BE9EF: mov dword ptr [0x121eed70], 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121BE9F9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BE9FC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BE9FF: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x121BEA02: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x121BEA04: mov dword ptr [ebp - 0x1c], eax */
    goto L_121BEA25; /* 0x121BEA07: jmp 0x121bea25 */
L_121BEA25:
    MEM32(ebp + (-0x4)) = esi; /* 0x121BEA25: mov dword ptr [ebp - 4], esi */
L_121BEA28:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x121BEA28: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BEBE6; /* 0x121BEA2C: je 0x121bebe6 */
L_121BEA32:
    MEM32(ebp + (-0x4)) = 2; /* 0x121BEA32: mov dword ptr [ebp - 4], 2 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121BEA39: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BEA3C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BEA3F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121BE7BA); /* 0x121BEA42: call 0x121be7ba */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x121BEA47: mov dword ptr [ebp - 0x1c], eax */
    goto L_121BEA68; /* 0x121BEA4A: jmp 0x121bea68 */
L_121BEA68:
    MEM32(ebp + (-0x4)) = esi; /* 0x121BEA68: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x121BEA6B: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BEBE6; /* 0x121BEA6F: je 0x121bebe6 */
L_121BEA75:
    MEM32(ebp + (-0x4)) = 3; /* 0x121BEA75: mov dword ptr [ebp - 4], 3 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121BEA7C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BEA7F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BEA82: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12018705); /* 0x121BEA85: call 0x12018705 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x121BEA8A: mov dword ptr [ebp - 0x1c], eax */
    goto L_121BEAAB; /* 0x121BEA8D: jmp 0x121beaab */
L_121BEAAB:
    MEM32(ebp + (-0x4)) = esi; /* 0x121BEAAB: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x121BEAAE: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BEB55; /* 0x121BEAB2: jne 0x121beb55 */
L_121BEAB8:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x121BEAB8: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BEB55; /* 0x121BEABC: jne 0x121beb55 */
L_121BEAC2:
    MEM32(ebp + (-0x4)) = 4; /* 0x121BEAC2: mov dword ptr [ebp - 4], 4 */
    PUSH32(esp, esi); /* 0x121BEAC9: push esi */
    PUSH32(esp, esi); /* 0x121BEACA: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BEACB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12018705); /* 0x121BEACE: call 0x12018705 */
    RECOMP_FLAGS_IN();
    goto L_121BEAEE; /* 0x121BEAD3: jmp 0x121beaee */
L_121BEAEE:
    MEM32(ebp + (-0x4)) = esi; /* 0x121BEAEE: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x4)) = 5; /* 0x121BEAF1: mov dword ptr [ebp - 4], 5 */
    PUSH32(esp, esi); /* 0x121BEAF8: push esi */
    PUSH32(esp, esi); /* 0x121BEAF9: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BEAFA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121BE7BA); /* 0x121BEAFD: call 0x121be7ba */
    RECOMP_FLAGS_IN();
    goto L_121BEB1D; /* 0x121BEB02: jmp 0x121beb1d */
L_121BEB1D:
    MEM32(ebp + (-0x4)) = esi; /* 0x121BEB1D: mov dword ptr [ebp - 4], esi */
    eax = MEM32(0x121EF0AC); /* 0x121BEB20: mov eax, dword ptr [0x121ef0ac] */
    /* test eax, eax */ /* 0x121BEB25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEB55; /* 0x121BEB27: je 0x121beb55 */
L_121BEB29:
    MEM32(ebp + (-0x4)) = 6; /* 0x121BEB29: mov dword ptr [ebp - 4], 6 */
    PUSH32(esp, esi); /* 0x121BEB30: push esi */
    PUSH32(esp, esi); /* 0x121BEB31: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BEB32: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x121BEB35: call eax */
    RECOMP_FLAGS_IN();
    goto L_121BEB52; /* 0x121BEB37: jmp 0x121beb52 */
L_121BEB52:
    MEM32(ebp + (-0x4)) = esi; /* 0x121BEB52: mov dword ptr [ebp - 4], esi */
L_121BEB55:
    eax = MEM32(ebp + 0xC); /* 0x121BEB55: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x121BEB58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEB65; /* 0x121BEB5A: je 0x121beb65 */
L_121BEB5C:
    /* cmp eax, 3 */ /* 0x121BEB5C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BEBE6; /* 0x121BEB5F: jne 0x121bebe6 */
L_121BEB65:
    MEM32(ebp + (-0x4)) = 7; /* 0x121BEB65: mov dword ptr [ebp - 4], 7 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121BEB6C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BEB6F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BEB72: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121BE7BA); /* 0x121BEB75: call 0x121be7ba */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x121BEB7A: mov dword ptr [ebp - 0x1c], eax */
    goto L_121BEB9B; /* 0x121BEB7D: jmp 0x121beb9b */
L_121BEB9B:
    MEM32(ebp + (-0x4)) = esi; /* 0x121BEB9B: mov dword ptr [ebp - 4], esi */
    eax = MEM32(0x121EF0AC); /* 0x121BEB9E: mov eax, dword ptr [0x121ef0ac] */
    /* test eax, eax */ /* 0x121BEBA3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEBE6; /* 0x121BEBA5: je 0x121bebe6 */
L_121BEBA7:
    /* cmp MEM32(0x121EED70), 0 */ /* 0x121BEBA7: cmp dword ptr [0x121eed70], 0 */
    _flag_a = (uint32_t)(MEM32(0x121EED70)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BEBE6; /* 0x121BEBAE: je 0x121bebe6 */
L_121BEBB0:
    MEM32(ebp + (-0x4)) = 8; /* 0x121BEBB0: mov dword ptr [ebp - 4], 8 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121BEBB7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BEBBA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BEBBD: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x121BEBC0: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x121BEBC2: mov dword ptr [ebp - 0x1c], eax */
    goto L_121BEBE3; /* 0x121BEBC5: jmp 0x121bebe3 */
L_121BEBE3:
    MEM32(ebp + (-0x4)) = esi; /* 0x121BEBE3: mov dword ptr [ebp - 4], esi */
L_121BEBE6:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x121BEBE6: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_121BEBFD); /* 0x121BEBED: call 0x121bebfd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x121BEBF2: mov eax, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_121BF3E5); /* 0x121BEBF5: call 0x121bf3e5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121BEBFA: ret 0xc */
L_121BEC0D:
    edi = edi; /* 0x121BEC0D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BEC0F: push ebp */
    ebp = esp; /* 0x121BEC10: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x121BEC12: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BEC1D; /* 0x121BEC16: jne 0x121bec1d */
L_121BEC18:
    RECOMP_CALL(sub_121BFBA9); /* 0x121BEC18: call 0x121bfba9 */
    RECOMP_FLAGS_IN();
L_121BEC1D:
    ebp = POP32_VAL(esp); /* 0x121BEC1D: pop ebp */
    RECOMP_BACKEDGE();
    goto L_121BE99D; /* 0x121BEC1E: jmp 0x121be99d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121BEC28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BEC28u);

L_121BEC28:
    edi = edi; /* 0x121BEC28: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BEC2A: push ebp */
    ebp = esp; /* 0x121BEC2B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2D0u; /* 0x121BEC2D: sub esp, 0x2d0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BEC33: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BEC38: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BEC3A: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x220)) = eax; /* 0x121BEC3D: mov dword ptr [ebp - 0x220], eax */
    MEM32(ebp + (-0x224)) = ecx; /* 0x121BEC43: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x228)) = edx; /* 0x121BEC49: mov dword ptr [ebp - 0x228], edx */
    MEM32(ebp + (-0x22C)) = ebx; /* 0x121BEC4F: mov dword ptr [ebp - 0x22c], ebx */
    MEM32(ebp + (-0x230)) = esi; /* 0x121BEC55: mov dword ptr [ebp - 0x230], esi */
    MEM32(ebp + (-0x234)) = edi; /* 0x121BEC5B: mov dword ptr [ebp - 0x234], edi */
    MEM16(ebp + (-0x208)) = (uint16_t)(_seg_ss); /* 0x121BEC61: mov word ptr [ebp - 0x208], ss */
    MEM16(ebp + (-0x214)) = (uint16_t)(_seg_cs); /* 0x121BEC68: mov word ptr [ebp - 0x214], cs */
    MEM16(ebp + (-0x238)) = (uint16_t)(_seg_ds); /* 0x121BEC6F: mov word ptr [ebp - 0x238], ds */
    MEM16(ebp + (-0x23C)) = (uint16_t)(_seg_es); /* 0x121BEC76: mov word ptr [ebp - 0x23c], es */
    MEM16(ebp + (-0x240)) = (uint16_t)(_seg_fs); /* 0x121BEC7D: mov word ptr [ebp - 0x240], fs */
    MEM16(ebp + (-0x244)) = (uint16_t)(_seg_gs); /* 0x121BEC84: mov word ptr [ebp - 0x244], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x121BEC8B: pushfd  */
    POP32(esp, MEM32(ebp + (-0x210))); /* 0x121BEC8C: pop dword ptr [ebp - 0x210] */
    eax = MEM32(ebp + 0x4); /* 0x121BEC92: mov eax, dword ptr [ebp + 4] */
    MEM32(ebp + (-0x218)) = eax; /* 0x121BEC95: mov dword ptr [ebp - 0x218], eax */
    eax = ebp + 0x4; /* 0x121BEC9B: lea eax, [ebp + 4] */
    MEM32(ebp + (-0x2D0)) = 0x00010001u; /* 0x121BEC9E: mov dword ptr [ebp - 0x2d0], 0x10001 */
    MEM32(ebp + (-0x20C)) = eax; /* 0x121BECA8: mov dword ptr [ebp - 0x20c], eax */
    eax = MEM32(eax + (-0x4)); /* 0x121BECAE: mov eax, dword ptr [eax - 4] */
    PUSH32(esp, 0x12018264u); /* 0x121BECB1: push 0x12018264 */
    MEM32(ebp + (-0x21C)) = eax; /* 0x121BECB6: mov dword ptr [ebp - 0x21c], eax */
    RECOMP_ICALL(MEM32(0x12001114)); /* 0x121BECBC: call dword ptr [0x12001114] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x121BECC2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BECC5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121BECC7: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BECCC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BECCD: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BECD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BECD3u);

    goto L_121BECD3;
L_121BEC28:
    edi = edi; /* 0x121BEC28: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BEC2A: push ebp */
    ebp = esp; /* 0x121BEC2B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2D0u; /* 0x121BEC2D: sub esp, 0x2d0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BEC33: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BEC38: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BEC3A: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x220)) = eax; /* 0x121BEC3D: mov dword ptr [ebp - 0x220], eax */
    MEM32(ebp + (-0x224)) = ecx; /* 0x121BEC43: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x228)) = edx; /* 0x121BEC49: mov dword ptr [ebp - 0x228], edx */
    MEM32(ebp + (-0x22C)) = ebx; /* 0x121BEC4F: mov dword ptr [ebp - 0x22c], ebx */
    MEM32(ebp + (-0x230)) = esi; /* 0x121BEC55: mov dword ptr [ebp - 0x230], esi */
    MEM32(ebp + (-0x234)) = edi; /* 0x121BEC5B: mov dword ptr [ebp - 0x234], edi */
    MEM16(ebp + (-0x208)) = (uint16_t)(_seg_ss); /* 0x121BEC61: mov word ptr [ebp - 0x208], ss */
    MEM16(ebp + (-0x214)) = (uint16_t)(_seg_cs); /* 0x121BEC68: mov word ptr [ebp - 0x214], cs */
    MEM16(ebp + (-0x238)) = (uint16_t)(_seg_ds); /* 0x121BEC6F: mov word ptr [ebp - 0x238], ds */
    MEM16(ebp + (-0x23C)) = (uint16_t)(_seg_es); /* 0x121BEC76: mov word ptr [ebp - 0x23c], es */
    MEM16(ebp + (-0x240)) = (uint16_t)(_seg_fs); /* 0x121BEC7D: mov word ptr [ebp - 0x240], fs */
    MEM16(ebp + (-0x244)) = (uint16_t)(_seg_gs); /* 0x121BEC84: mov word ptr [ebp - 0x244], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x121BEC8B: pushfd  */
    POP32(esp, MEM32(ebp + (-0x210))); /* 0x121BEC8C: pop dword ptr [ebp - 0x210] */
    eax = MEM32(ebp + 0x4); /* 0x121BEC92: mov eax, dword ptr [ebp + 4] */
    MEM32(ebp + (-0x218)) = eax; /* 0x121BEC95: mov dword ptr [ebp - 0x218], eax */
    eax = ebp + 0x4; /* 0x121BEC9B: lea eax, [ebp + 4] */
    MEM32(ebp + (-0x2D0)) = 0x00010001u; /* 0x121BEC9E: mov dword ptr [ebp - 0x2d0], 0x10001 */
    MEM32(ebp + (-0x20C)) = eax; /* 0x121BECA8: mov dword ptr [ebp - 0x20c], eax */
    eax = MEM32(eax + (-0x4)); /* 0x121BECAE: mov eax, dword ptr [eax - 4] */
    PUSH32(esp, 0x12018264u); /* 0x121BECB1: push 0x12018264 */
    MEM32(ebp + (-0x21C)) = eax; /* 0x121BECB6: mov dword ptr [ebp - 0x21c], eax */
    RECOMP_ICALL(MEM32(0x12001114)); /* 0x121BECBC: call dword ptr [0x12001114] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x121BECC2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BECC5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121BECC7: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BECCC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BECCD: ret  */
L_121BECD3:
    edi = edi; /* 0x121BECD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BECD5: push ebp */
    ebp = esp; /* 0x121BECD6: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x121BECD8: pop ebp */
    RECOMP_BACKEDGE();
    goto L_121BEC28; /* 0x121BECD9: jmp 0x121bec28 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121BECE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BECE4u);

L_121BECE4:
    { _itail_tgt = (uint32_t)(MEM32(0x12001300)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BECF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BECF5u);

L_121BECF5:
    /* cmp ecx, MEM32(0x121D9590) */ /* 0x121BECF5: cmp ecx, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x121D9590));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BED00; /* 0x121BECFB: jne 0x121bed00 */
L_121BECFD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BECFD: ret 0 */
L_121BED00:
    goto L_121BFC4E; /* 0x121BED00: jmp 0x121bfc4e */
L_121BFC4E:
    edi = edi; /* 0x121BFC4E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BFC50: push ebp */
    ebp = esp; /* 0x121BFC51: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x328u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x328u; /* 0x121BFC53: sub esp, 0x328 */
    _flag_k = FK_CMP;
    MEM32(0x121EEE78) = eax; /* 0x121BFC59: mov dword ptr [0x121eee78], eax */
    MEM32(0x121EEE74) = ecx; /* 0x121BFC5E: mov dword ptr [0x121eee74], ecx */
    MEM32(0x121EEE70) = edx; /* 0x121BFC64: mov dword ptr [0x121eee70], edx */
    MEM32(0x121EEE6C) = ebx; /* 0x121BFC6A: mov dword ptr [0x121eee6c], ebx */
    MEM32(0x121EEE68) = esi; /* 0x121BFC70: mov dword ptr [0x121eee68], esi */
    MEM32(0x121EEE64) = edi; /* 0x121BFC76: mov dword ptr [0x121eee64], edi */
    MEM16(0x121EEE90) = (uint16_t)(_seg_ss); /* 0x121BFC7C: mov word ptr [0x121eee90], ss */
    MEM16(0x121EEE84) = (uint16_t)(_seg_cs); /* 0x121BFC83: mov word ptr [0x121eee84], cs */
    MEM16(0x121EEE60) = (uint16_t)(_seg_ds); /* 0x121BFC8A: mov word ptr [0x121eee60], ds */
    MEM16(0x121EEE5C) = (uint16_t)(_seg_es); /* 0x121BFC91: mov word ptr [0x121eee5c], es */
    MEM16(0x121EEE58) = (uint16_t)(_seg_fs); /* 0x121BFC98: mov word ptr [0x121eee58], fs */
    MEM16(0x121EEE54) = (uint16_t)(_seg_gs); /* 0x121BFC9F: mov word ptr [0x121eee54], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x121BFCA6: pushfd  */
    POP32(esp, MEM32(0x121EEE88)); /* 0x121BFCA7: pop dword ptr [0x121eee88] */
    eax = MEM32(ebp); /* 0x121BFCAD: mov eax, dword ptr [ebp] */
    MEM32(0x121EEE7C) = eax; /* 0x121BFCB0: mov dword ptr [0x121eee7c], eax */
    eax = MEM32(ebp + 0x4); /* 0x121BFCB5: mov eax, dword ptr [ebp + 4] */
    MEM32(0x121EEE80) = eax; /* 0x121BFCB8: mov dword ptr [0x121eee80], eax */
    eax = ebp + 0x8; /* 0x121BFCBD: lea eax, [ebp + 8] */
    MEM32(0x121EEE8C) = eax; /* 0x121BFCC0: mov dword ptr [0x121eee8c], eax */
    eax = MEM32(ebp + (-0x320)); /* 0x121BFCC5: mov eax, dword ptr [ebp - 0x320] */
    MEM32(0x121EEDC8) = 0x00010001u; /* 0x121BFCCB: mov dword ptr [0x121eedc8], 0x10001 */
    eax = MEM32(0x121EEE80); /* 0x121BFCD5: mov eax, dword ptr [0x121eee80] */
    MEM32(0x121EED84) = eax; /* 0x121BFCDA: mov dword ptr [0x121eed84], eax */
    MEM32(0x121EED78) = 0xC0000409u; /* 0x121BFCDF: mov dword ptr [0x121eed78], 0xc0000409 */
    MEM32(0x121EED7C) = 1; /* 0x121BFCE9: mov dword ptr [0x121eed7c], 1 */
    eax = MEM32(0x121D9590); /* 0x121BFCF3: mov eax, dword ptr [0x121d9590] */
    MEM32(ebp + (-0x328)) = eax; /* 0x121BFCF8: mov dword ptr [ebp - 0x328], eax */
    eax = MEM32(0x121D9594); /* 0x121BFCFE: mov eax, dword ptr [0x121d9594] */
    MEM32(ebp + (-0x324)) = eax; /* 0x121BFD03: mov dword ptr [ebp - 0x324], eax */
    PUSH32(esp, 0); /* 0x121BFD09: push 0 */
    RECOMP_ICALL(MEM32(0x120011A0)); /* 0x121BFD0B: call dword ptr [0x120011a0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12018298u); /* 0x121BFD11: push 0x12018298 */
    RECOMP_ICALL(MEM32(0x1200119C)); /* 0x121BFD16: call dword ptr [0x1200119c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xC0000409u); /* 0x121BFD1C: push 0xc0000409 */
    RECOMP_ICALL(MEM32(0x12001198)); /* 0x121BFD21: call dword ptr [0x12001198] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x121BFD27: push eax */
    RECOMP_ICALL(MEM32(0x12001194)); /* 0x121BFD28: call dword ptr [0x12001194] */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BFD2E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFD2F: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BED0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BED0Au);

L_121BED0A:
    { _itail_tgt = (uint32_t)(MEM32(0x120012FC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BED16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BED16u);

L_121BED16:
    { _itail_tgt = (uint32_t)(MEM32(0x120012F8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BED30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BED30u);

L_121BED30:
    PUSH32(esp, ecx); /* 0x121BED30: push ecx */
    ecx = esp + 0x4; /* 0x121BED31: lea ecx, [esp + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121BED35: sub ecx, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BED37: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x121BED39: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x121BED3B: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x121BED3D: mov eax, esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x121BED3F: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121BED44:
    /* cmp ecx, eax */ /* 0x121BED44: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121BED52; /* 0x121BED46: jb 0x121bed52 */
L_121BED48:
    eax = ecx; /* 0x121BED48: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x121BED4A: pop ecx */
    { uint32_t _tmp = esp; /* 0x121BED4B: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = MEM32(eax); /* 0x121BED4C: mov eax, dword ptr [eax] */
    MEM32(esp) = eax; /* 0x121BED4E: mov dword ptr [esp], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BED51: ret  */
L_121BED52:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1000u; /* 0x121BED52: sub eax, 0x1000 */
    _flag_k = FK_CMP;
    /* test MEM32(eax), eax */ /* 0x121BED57: test dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121BED44; /* 0x121BED59: jmp 0x121bed44 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121BED60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BED60u);

L_121BED60:
    edi = edi; /* 0x121BED60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BED62: push ebp */
    ebp = esp; /* 0x121BED63: mov ebp, esp */
    PUSH32(esp, edi); /* 0x121BED65: push edi */
    edi = MEM32(ebp + 0x14); /* 0x121BED66: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x121BED69: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BED74; /* 0x121BED6B: jne 0x121bed74 */
L_121BED6D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BED6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121BEDF6; /* 0x121BED6F: jmp 0x121bedf6 */
L_121BED74:
    eax = MEM32(ebp + 0x8); /* 0x121BED74: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121BED77: push esi */
    /* test eax, eax */ /* 0x121BED78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BED99; /* 0x121BED7A: jne 0x121bed99 */
L_121BED7C:
    RECOMP_CALL(sub_121BECE4); /* 0x121BED7C: call 0x121bece4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x121BED81: push 0x16 */
    edi = POP32_VAL(esp); /* 0x121BED83: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121BED84: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x121BED86: push esi */
    PUSH32(esp, esi); /* 0x121BED87: push esi */
    PUSH32(esp, esi); /* 0x121BED88: push esi */
    PUSH32(esp, esi); /* 0x121BED89: push esi */
    PUSH32(esp, esi); /* 0x121BED8A: push esi */
    MEM32(eax) = edi; /* 0x121BED8B: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_121BECD3); /* 0x121BED8D: call 0x121becd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121BED92: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x121BED95: mov eax, edi */
    goto L_121BEDF5; /* 0x121BED97: jmp 0x121bedf5 */
L_121BED99:
    PUSH32(esp, ebx); /* 0x121BED99: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x121BED9A: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x121BED9D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEDB5; /* 0x121BED9F: je 0x121bedb5 */
L_121BEDA1:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x121BEDA1: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121BEDB5; /* 0x121BEDA4: jb 0x121bedb5 */
L_121BEDA6:
    PUSH32(esp, edi); /* 0x121BEDA6: push edi */
    PUSH32(esp, ebx); /* 0x121BEDA7: push ebx */
    PUSH32(esp, eax); /* 0x121BEDA8: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x121BEDA9: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121BEDAE: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BEDB1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121BEDF4; /* 0x121BEDB3: jmp 0x121bedf4 */
L_121BEDB5:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BEDB5: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121BEDB8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x121BEDBA: push esi */
    PUSH32(esp, eax); /* 0x121BEDBB: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x121BEDBC: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121BEDC1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x121BEDC4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BEDD1; /* 0x121BEDC6: jne 0x121bedd1 */
L_121BEDC8:
    RECOMP_CALL(sub_121BECE4); /* 0x121BEDC8: call 0x121bece4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x121BEDCD: push 0x16 */
    goto L_121BEDDD; /* 0x121BEDCF: jmp 0x121beddd */
L_121BEDD1:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x121BEDD1: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121BEDF1; /* 0x121BEDD4: jae 0x121bedf1 */
L_121BEDD6:
    RECOMP_CALL(sub_121BECE4); /* 0x121BEDD6: call 0x121bece4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x121BEDDB: push 0x22 */
L_121BEDDD:
    edi = POP32_VAL(esp); /* 0x121BEDDD: pop edi */
    PUSH32(esp, esi); /* 0x121BEDDE: push esi */
    PUSH32(esp, esi); /* 0x121BEDDF: push esi */
    PUSH32(esp, esi); /* 0x121BEDE0: push esi */
    PUSH32(esp, esi); /* 0x121BEDE1: push esi */
    PUSH32(esp, esi); /* 0x121BEDE2: push esi */
    MEM32(eax) = edi; /* 0x121BEDE3: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_121BECD3); /* 0x121BEDE5: call 0x121becd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121BEDEA: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x121BEDED: mov eax, edi */
    goto L_121BEDF4; /* 0x121BEDEF: jmp 0x121bedf4 */
L_121BEDF1:
    PUSH32(esp, 0x16u); /* 0x121BEDF1: push 0x16 */
    eax = POP32_VAL(esp); /* 0x121BEDF3: pop eax */
L_121BEDF4:
    ebx = POP32_VAL(esp); /* 0x121BEDF4: pop ebx */
L_121BEDF5:
    esi = POP32_VAL(esp); /* 0x121BEDF5: pop esi */
L_121BEDF6:
    edi = POP32_VAL(esp); /* 0x121BEDF6: pop edi */
    ebp = POP32_VAL(esp); /* 0x121BEDF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BEDF8: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BEDFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BEDFEu);

L_121BEDFE:
    edi = edi; /* 0x121BEDFE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BEE00: push ebp */
    ebp = esp; /* 0x121BEE01: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121BEE03: push ebx */
    PUSH32(esp, esi); /* 0x121BEE04: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121BEE05: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x121BEE08: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEE45; /* 0x121BEE0A: je 0x121bee45 */
L_121BEE0C:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121BEE0C: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121BEE45; /* 0x121BEE10: jbe 0x121bee45 */
L_121BEE12:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x121BEE12: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BEE45; /* 0x121BEE16: je 0x121bee45 */
L_121BEE18:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x121BEE18: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121BEE1B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BEE1E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x121BEE21: push esi */
    RECOMP_CALL(sub_121C0B4C); /* 0x121BEE22: call 0x121c0b4c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x121BEE27: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x121BEE2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121BEE63; /* 0x121BEE2C: jns 0x121bee63 */
L_121BEE2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121BEE2E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x121BEE30: mov byte ptr [esi], bl */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x121BEE32: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BEE60; /* 0x121BEE35: jne 0x121bee60 */
L_121BEE37:
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121BEE37: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x121BEE3D: mov dword ptr [eax], 0x22 */
    goto L_121BEE53; /* 0x121BEE43: jmp 0x121bee53 */
L_121BEE45:
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121BEE45: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121BEE4B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x16u; /* 0x121BEE4D: mov dword ptr [eax], 0x16 */
L_121BEE53:
    PUSH32(esp, ebx); /* 0x121BEE53: push ebx */
    PUSH32(esp, ebx); /* 0x121BEE54: push ebx */
    PUSH32(esp, ebx); /* 0x121BEE55: push ebx */
    PUSH32(esp, ebx); /* 0x121BEE56: push ebx */
    PUSH32(esp, ebx); /* 0x121BEE57: push ebx */
    RECOMP_CALL(sub_121BECD3); /* 0x121BEE58: call 0x121becd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121BEE5D: add esp, 0x14 */
    _flag_k = FK_ADD;
L_121BEE60:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x121BEE60: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_121BEE63:
    esi = POP32_VAL(esp); /* 0x121BEE63: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BEE64: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121BEE65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BEE66: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BEE6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BEE6Cu);

L_121BEE6C:
    edi = edi; /* 0x121BEE6C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BEE6E: push ebp */
    ebp = esp; /* 0x121BEE6F: mov ebp, esp */
    eax = ebp + 0x14; /* 0x121BEE71: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x121BEE74: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121BEE75: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BEE78: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BEE7B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121BEDFE); /* 0x121BEE7E: call 0x121bedfe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x121BEE83: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x121BEE86: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BEE87: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BEE8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BEE8Du);

L_121BEE8D:
    edi = edi; /* 0x121BEE8D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BEE8F: push ebp */
    ebp = esp; /* 0x121BEE90: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121BEE92: push ebx */
    PUSH32(esp, esi); /* 0x121BEE93: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121BEE94: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x121BEE97: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEEDC; /* 0x121BEE99: je 0x121beedc */
L_121BEE9B:
    ecx = MEM32(ebp + 0xC); /* 0x121BEE9B: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x121BEE9E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEEDC; /* 0x121BEEA0: je 0x121beedc */
L_121BEEA2:
    edx = MEM32(ebp + 0x10); /* 0x121BEEA2: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x121BEEA5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BEEB4; /* 0x121BEEA7: jne 0x121beeb4 */
L_121BEEA9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121BEEA9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x121BEEAB: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_121BECE4); /* 0x121BEEAD: call 0x121bece4 */
    RECOMP_FLAGS_IN();
    goto L_121BEEE3; /* 0x121BEEB2: jmp 0x121beee3 */
L_121BEEB4:
    PUSH32(esp, edi); /* 0x121BEEB4: push edi */
    edi = esi; /* 0x121BEEB5: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x121BEEB7: sub edi, edx */
    _flag_k = FK_CMP;
L_121BEEB9:
    SET_LO8(eax, MEM8(edx)); /* 0x121BEEB9: mov al, byte ptr [edx] */
    MEM8(edi + edx) = (uint8_t)(LO8(eax)); /* 0x121BEEBB: mov byte ptr [edi + edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x121BEEBE: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121BEEBF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEEC6; /* 0x121BEEC1: je 0x121beec6 */
L_121BEEC3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x121BEEC3: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BEEB9; /* 0x121BEEC4: jne 0x121beeb9 */
L_121BEEC6:
    edi = POP32_VAL(esp); /* 0x121BEEC6: pop edi */
    /* test ecx, ecx */ /* 0x121BEEC7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BEED8; /* 0x121BEEC9: jne 0x121beed8 */
L_121BEECB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121BEECB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x121BEECD: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_121BECE4); /* 0x121BEECF: call 0x121bece4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x121BEED4: push 0x22 */
    goto L_121BEEE5; /* 0x121BEED6: jmp 0x121beee5 */
L_121BEED8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BEED8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121BEEF7; /* 0x121BEEDA: jmp 0x121beef7 */
L_121BEEDC:
    RECOMP_CALL(sub_121BECE4); /* 0x121BEEDC: call 0x121bece4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121BEEE1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_121BEEE3:
    PUSH32(esp, 0x16u); /* 0x121BEEE3: push 0x16 */
L_121BEEE5:
    esi = POP32_VAL(esp); /* 0x121BEEE5: pop esi */
    PUSH32(esp, ebx); /* 0x121BEEE6: push ebx */
    PUSH32(esp, ebx); /* 0x121BEEE7: push ebx */
    PUSH32(esp, ebx); /* 0x121BEEE8: push ebx */
    PUSH32(esp, ebx); /* 0x121BEEE9: push ebx */
    PUSH32(esp, ebx); /* 0x121BEEEA: push ebx */
    MEM32(eax) = esi; /* 0x121BEEEB: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_121BECD3); /* 0x121BEEED: call 0x121becd3 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x121BEEF2: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121BEEF4: add esp, 0x14 */
    _flag_k = FK_ADD;
L_121BEEF7:
    esi = POP32_VAL(esp); /* 0x121BEEF7: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BEEF8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121BEEF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BEEFA: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BEF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BEF00u);

L_121BEF00:
    edi = edi; /* 0x121BEF00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BEF02: push ebp */
    ebp = esp; /* 0x121BEF03: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121BEF05: push ecx */
    edx = MEM32(ebp + 0x14); /* 0x121BEF06: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x121BEF09: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x121BEF0C: push ebx */
    PUSH32(esp, esi); /* 0x121BEF0D: push esi */
    PUSH32(esp, edi); /* 0x121BEF0E: push edi */
    /* test edx, edx */ /* 0x121BEF0F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BEF27; /* 0x121BEF11: jne 0x121bef27 */
L_121BEF13:
    /* test ecx, ecx */ /* 0x121BEF13: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BEF2F; /* 0x121BEF15: jne 0x121bef2f */
L_121BEF17:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x121BEF17: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BEFC8; /* 0x121BEF1A: jne 0x121befc8 */
L_121BEF20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BEF20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121BEFE3; /* 0x121BEF22: jmp 0x121befe3 */
L_121BEF27:
    /* test ecx, ecx */ /* 0x121BEF27: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEFC8; /* 0x121BEF29: je 0x121befc8 */
L_121BEF2F:
    edi = MEM32(ebp + 0xC); /* 0x121BEF2F: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x121BEF32: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEFC8; /* 0x121BEF34: je 0x121befc8 */
L_121BEF3A:
    /* test edx, edx */ /* 0x121BEF3A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BEF42; /* 0x121BEF3C: jne 0x121bef42 */
L_121BEF3E:
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x121BEF3E: mov byte ptr [ecx], dl */
    RECOMP_BACKEDGE();
    goto L_121BEF20; /* 0x121BEF40: jmp 0x121bef20 */
L_121BEF42:
    esi = MEM32(ebp + 0x10); /* 0x121BEF42: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121BEF45: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x121BEF47: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BEF54; /* 0x121BEF49: jne 0x121bef54 */
L_121BEF4B:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x121BEF4B: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_121BECE4); /* 0x121BEF4D: call 0x121bece4 */
    RECOMP_FLAGS_IN();
    goto L_121BEFCF; /* 0x121BEF52: jmp 0x121befcf */
L_121BEF54:
    MEM32(ebp + 0x14) = edi; /* 0x121BEF54: mov dword ptr [ebp + 0x14], edi */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x121BEF57: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BEF7E; /* 0x121BEF5A: jne 0x121bef7e */
L_121BEF5C:
    eax = ecx; /* 0x121BEF5C: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x121BEF5E: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BEF60: mov dword ptr [ebp - 4], eax */
L_121BEF63:
    SET_LO8(eax, MEM8(esi)); /* 0x121BEF63: mov al, byte ptr [esi] */
    edi = MEM32(ebp + (-0x4)); /* 0x121BEF65: mov edi, dword ptr [ebp - 4] */
    MEM8(edi + esi) = (uint8_t)(LO8(eax)); /* 0x121BEF68: mov byte ptr [edi + esi], al */
    edi = MEM32(ebp + 0xC); /* 0x121BEF6B: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121BEF6E: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121BEF6F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x14); /* 0x121BEF71: mov eax, dword ptr [ebp + 0x14] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEFA7; /* 0x121BEF74: je 0x121befa7 */
L_121BEF76:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121BEF76: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = eax; /* 0x121BEF77: mov dword ptr [ebp + 0x14], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BEF63; /* 0x121BEF7A: jne 0x121bef63 */
L_121BEF7C:
    goto L_121BEFA7; /* 0x121BEF7C: jmp 0x121befa7 */
L_121BEF7E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x121BEF7E: sub esi, ecx */
    _flag_k = FK_CMP;
    edi = ecx; /* 0x121BEF80: mov edi, ecx */
L_121BEF82:
    SET_LO8(eax, MEM8(esi + edi)); /* 0x121BEF82: mov al, byte ptr [esi + edi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x121BEF85: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121BEF87: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121BEF88: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x14); /* 0x121BEF8A: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = edi; /* 0x121BEF8D: mov dword ptr [ebp - 4], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BEF9B; /* 0x121BEF90: je 0x121bef9b */
L_121BEF92:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121BEF92: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = eax; /* 0x121BEF93: mov dword ptr [ebp + 0x14], eax */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121BEF9B; /* 0x121BEF96: je 0x121bef9b */
L_121BEF98:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x121BEF98: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121BEF82; /* 0x121BEF99: jne 0x121bef82 */
L_121BEF9B:
    edi = MEM32(ebp + 0xC); /* 0x121BEF9B: mov edi, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x121BEF9E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BEFA7; /* 0x121BEFA0: jne 0x121befa7 */
L_121BEFA2:
    esi = MEM32(ebp + (-0x4)); /* 0x121BEFA2: mov esi, dword ptr [ebp - 4] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x121BEFA5: mov byte ptr [esi], bl */
L_121BEFA7:
    /* test eax, eax */ /* 0x121BEFA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BEF20; /* 0x121BEFA9: jne 0x121bef20 */
L_121BEFAF:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x121BEFAF: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BEFBD; /* 0x121BEFB2: jne 0x121befbd */
L_121BEFB4:
    PUSH32(esp, 0x50u); /* 0x121BEFB4: push 0x50 */
    MEM8(ecx + edi + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x121BEFB6: mov byte ptr [ecx + edi - 1], bl */
    eax = POP32_VAL(esp); /* 0x121BEFBA: pop eax */
    goto L_121BEFE3; /* 0x121BEFBB: jmp 0x121befe3 */
L_121BEFBD:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x121BEFBD: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_121BECE4); /* 0x121BEFBF: call 0x121bece4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x121BEFC4: push 0x22 */
    goto L_121BEFD1; /* 0x121BEFC6: jmp 0x121befd1 */
L_121BEFC8:
    RECOMP_CALL(sub_121BECE4); /* 0x121BEFC8: call 0x121bece4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121BEFCD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_121BEFCF:
    PUSH32(esp, 0x16u); /* 0x121BEFCF: push 0x16 */
L_121BEFD1:
    esi = POP32_VAL(esp); /* 0x121BEFD1: pop esi */
    PUSH32(esp, ebx); /* 0x121BEFD2: push ebx */
    PUSH32(esp, ebx); /* 0x121BEFD3: push ebx */
    PUSH32(esp, ebx); /* 0x121BEFD4: push ebx */
    PUSH32(esp, ebx); /* 0x121BEFD5: push ebx */
    PUSH32(esp, ebx); /* 0x121BEFD6: push ebx */
    MEM32(eax) = esi; /* 0x121BEFD7: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_121BECD3); /* 0x121BEFD9: call 0x121becd3 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x121BEFDE: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121BEFE0: add esp, 0x14 */
    _flag_k = FK_ADD;
L_121BEFE3:
    edi = POP32_VAL(esp); /* 0x121BEFE3: pop edi */
    esi = POP32_VAL(esp); /* 0x121BEFE4: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BEFE5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BEFE6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BEFE7: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BEFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BEFF0u);

L_121BEFF0:
    PUSH32(esp, ebx); /* 0x121BEFF0: push ebx */
    PUSH32(esp, esi); /* 0x121BEFF1: push esi */
    PUSH32(esp, edi); /* 0x121BEFF2: push edi */
    edx = MEM32(esp + 0x10); /* 0x121BEFF3: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x14); /* 0x121BEFF7: mov eax, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x18); /* 0x121BEFFB: mov ecx, dword ptr [esp + 0x18] */
    PUSH32(esp, ebp); /* 0x121BEFFF: push ebp */
    PUSH32(esp, edx); /* 0x121BF000: push edx */
    PUSH32(esp, eax); /* 0x121BF001: push eax */
    PUSH32(esp, ecx); /* 0x121BF002: push ecx */
    PUSH32(esp, ecx); /* 0x121BF003: push ecx */
    PUSH32(esp, 0x121BF080u); /* 0x121BF004: push 0x121bf080 */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x121BF009: push dword ptr fs:[0] */
    eax = MEM32(0x121D9590); /* 0x121BF010: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x121BF015: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x121BF017: mov dword ptr [esp + 8], eax */
    MEM32(FS_BASE + (0)) = esp; /* 0x121BF01B: mov dword ptr fs:[0], esp */
L_121BF022:
    eax = MEM32(esp + 0x30); /* 0x121BF022: mov eax, dword ptr [esp + 0x30] */
    ebx = MEM32(eax + 0x8); /* 0x121BF026: mov ebx, dword ptr [eax + 8] */
    ecx = MEM32(esp + 0x2C); /* 0x121BF029: mov ecx, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)((ebx ^ MEM32(ecx))); _flag_b = (uint32_t)((ebx ^ MEM32(ecx)));
    ebx = ebx ^ MEM32(ecx); /* 0x121BF02D: xor ebx, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax + 0xC); /* 0x121BF02F: mov esi, dword ptr [eax + 0xc] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x121BF032: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BF072; /* 0x121BF035: je 0x121bf072 */
L_121BF037:
    edx = MEM32(esp + 0x34); /* 0x121BF037: mov edx, dword ptr [esp + 0x34] */
    /* cmp edx, 0xFFFFFFFEu */ /* 0x121BF03B: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BF044; /* 0x121BF03E: je 0x121bf044 */
L_121BF040:
    /* cmp esi, edx */ /* 0x121BF040: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121BF072; /* 0x121BF042: jbe 0x121bf072 */
L_121BF044:
    esi = esi + esi * 2; /* 0x121BF044: lea esi, [esi + esi*2] */
    ebx = ebx + esi * 4 + 0x10; /* 0x121BF047: lea ebx, [ebx + esi*4 + 0x10] */
    ecx = MEM32(ebx); /* 0x121BF04B: mov ecx, dword ptr [ebx] */
    MEM32(eax + 0xC) = ecx; /* 0x121BF04D: mov dword ptr [eax + 0xc], ecx */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x121BF050: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BF022; /* 0x121BF054: jne 0x121bf022 */
L_121BF056:
    PUSH32(esp, 0x101u); /* 0x121BF056: push 0x101 */
    eax = MEM32(ebx + 0x8); /* 0x121BF05B: mov eax, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_121C0C11); /* 0x121BF05E: call 0x121c0c11 */
    RECOMP_FLAGS_IN();
    ecx = 1; /* 0x121BF063: mov ecx, 1 */
    eax = MEM32(ebx + 0x8); /* 0x121BF068: mov eax, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_121C0C30); /* 0x121BF06B: call 0x121c0c30 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_121BF022; /* 0x121BF070: jmp 0x121bf022 */
L_121BF072:
    POP32(esp, MEM32(FS_BASE + (0))); /* 0x121BF072: pop dword ptr fs:[0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x121BF079: add esp, 0x18 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x121BF07C: pop edi */
    esi = POP32_VAL(esp); /* 0x121BF07D: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BF07E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF07F: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF080u);

L_121BF080:
    ecx = MEM32(esp + 0x4); /* 0x121BF080: mov ecx, dword ptr [esp + 4] */
    /* test MEM32(ecx + 0x4), 6 */ /* 0x121BF084: test dword ptr [ecx + 4], 6 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(6);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x121BF08B: mov eax, 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BF0C5; /* 0x121BF090: je 0x121bf0c5 */
L_121BF092:
    eax = MEM32(esp + 0x8); /* 0x121BF092: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(eax + 0x8); /* 0x121BF096: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121BF099: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121BF09B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebp); /* 0x121BF0A0: push ebp */
    ebp = MEM32(eax + 0x18); /* 0x121BF0A1: mov ebp, dword ptr [eax + 0x18] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121BF0A4: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x121BF0A7: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x121BF0AA: push dword ptr [eax + 0x14] */
    RECOMP_CALL(sub_121BEFF0); /* 0x121BF0AD: call 0x121beff0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121BF0B2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x121BF0B5: pop ebp */
    eax = MEM32(esp + 0x8); /* 0x121BF0B6: mov eax, dword ptr [esp + 8] */
    edx = MEM32(esp + 0x10); /* 0x121BF0BA: mov edx, dword ptr [esp + 0x10] */
    MEM32(edx) = eax; /* 0x121BF0BE: mov dword ptr [edx], eax */
    eax = 3; /* 0x121BF0C0: mov eax, 3 */
L_121BF0C5:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF0C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF0E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF0E2u);

L_121BF0E2:
    PUSH32(esp, ebp); /* 0x121BF0E2: push ebp */
    PUSH32(esp, esi); /* 0x121BF0E3: push esi */
    PUSH32(esp, edi); /* 0x121BF0E4: push edi */
    PUSH32(esp, ebx); /* 0x121BF0E5: push ebx */
    ebp = edx; /* 0x121BF0E6: mov ebp, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BF0E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121BF0EA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121BF0EC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121BF0EE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121BF0F0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ecx); /* 0x121BF0F2: call ecx */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x121BF0F4: pop ebx */
    edi = POP32_VAL(esp); /* 0x121BF0F5: pop edi */
    esi = POP32_VAL(esp); /* 0x121BF0F6: pop esi */
    ebp = POP32_VAL(esp); /* 0x121BF0F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF0F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF0F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF0F9u);

L_121BF0F9:
    ebp = edx; /* 0x121BF0F9: mov ebp, edx */
    esi = ecx; /* 0x121BF0FB: mov esi, ecx */
    eax = ecx; /* 0x121BF0FD: mov eax, ecx */
    PUSH32(esp, 1); /* 0x121BF0FF: push 1 */
    RECOMP_CALL(sub_121C0C11); /* 0x121BF101: call 0x121c0c11 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BF106: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121BF108: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121BF10A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121BF10C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121BF10E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _itail_tgt = (uint32_t)(esi); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF112(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF112u);

L_121BF112:
    PUSH32(esp, ebp); /* 0x121BF112: push ebp */
    ebp = esp; /* 0x121BF113: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121BF115: push ebx */
    PUSH32(esp, esi); /* 0x121BF116: push esi */
    PUSH32(esp, edi); /* 0x121BF117: push edi */
    PUSH32(esp, 0); /* 0x121BF118: push 0 */
    PUSH32(esp, 0); /* 0x121BF11A: push 0 */
    PUSH32(esp, 0x121BF127u); /* 0x121BF11C: push 0x121bf127 */
    PUSH32(esp, ecx); /* 0x121BF121: push ecx */
    RECOMP_CALL(sub_121C0ECA); /* 0x121BF122: call 0x121c0eca */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x121BF127: pop edi */
    esi = POP32_VAL(esp); /* 0x121BF128: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BF129: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121BF12A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF12B: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF127(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF127u);

L_121BF127:
    edi = POP32_VAL(esp); /* 0x121BF127: pop edi */
    esi = POP32_VAL(esp); /* 0x121BF128: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BF129: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121BF12A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF12B: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF12C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF12Cu);

L_121BF12C:
    PUSH32(esp, ebp); /* 0x121BF12C: push ebp */
    ebp = MEM32(esp + 0x8); /* 0x121BF12D: mov ebp, dword ptr [esp + 8] */
    PUSH32(esp, edx); /* 0x121BF131: push edx */
    PUSH32(esp, ecx); /* 0x121BF132: push ecx */
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x121BF133: push dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_121BEFF0); /* 0x121BF137: call 0x121beff0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121BF13C: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x121BF13F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121BF140: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121BF150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF150u);

L_121BF150:
    edi = edi; /* 0x121BF150: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BF152: push ebp */
    ebp = esp; /* 0x121BF153: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x121BF155: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x121BF158: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x121BF15B: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x121BF15E: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x121BF15F: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x121BF162: push esi */
    esi = MEM32(ebx + 0x8); /* 0x121BF163: mov esi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)((esi ^ MEM32(eax))); _flag_b = (uint32_t)((esi ^ MEM32(eax)));
    esi = esi ^ MEM32(eax); /* 0x121BF166: xor esi, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x121BF168: push edi */
    eax = MEM32(esi); /* 0x121BF169: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x121BF16B: mov byte ptr [ebp - 1], 0 */
    MEM32(ebp + (-0xC)) = 1; /* 0x121BF16F: mov dword ptr [ebp - 0xc], 1 */
    edi = ebx + 0x10; /* 0x121BF176: lea edi, [ebx + 0x10] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x121BF179: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BF18B; /* 0x121BF17C: je 0x121bf18b */
L_121BF17E:
    ecx = MEM32(esi + 0x4); /* 0x121BF17E: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BF181: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x121BF183: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(edx); /* 0x121BF186: call edx */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x121BF188: mov edx, dword ptr [ebp + 0xc] */
L_121BF18B:
    ecx = MEM32(esi + 0xC); /* 0x121BF18B: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x8); /* 0x121BF18E: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BF191: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x121BF193: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(edx); /* 0x121BF196: call edx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x121BF198: mov eax, dword ptr [ebp + 0x10] */
    /* test MEM8(eax + 0x4), 0x66u */ /* 0x121BF19B: test byte ptr [eax + 4], 0x66 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0x66u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BF299; /* 0x121BF19F: jne 0x121bf299 */
L_121BF1A5:
    MEM32(ebp + (-0x18)) = eax; /* 0x121BF1A5: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + 0x18); /* 0x121BF1A8: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x121BF1AB: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x18); /* 0x121BF1AE: lea eax, [ebp - 0x18] */
    MEM32(ebx + (-0x4)) = eax; /* 0x121BF1B1: mov dword ptr [ebx - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x121BF1B4: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x121BF1B7: mov dword ptr [ebp - 8], eax */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x121BF1BA: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BF2D0; /* 0x121BF1BD: je 0x121bf2d0 */
L_121BF1C3:
    eax = eax + eax * 2; /* 0x121BF1C3: lea eax, [eax + eax*2] */
    ecx = MEM32(esi + eax * 4 + 0x14); /* 0x121BF1C6: mov ecx, dword ptr [esi + eax*4 + 0x14] */
    ebx = MEM32(esi + eax * 4 + 0x10); /* 0x121BF1CA: mov ebx, dword ptr [esi + eax*4 + 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x121BF1CE: mov dword ptr [ebp - 0x10], eax */
    /* test ecx, ecx */ /* 0x121BF1D1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BF279; /* 0x121BF1D3: je 0x121bf279 */
L_121BF1D9:
    edx = edi; /* 0x121BF1D9: mov edx, edi */
    RECOMP_CALL(sub_121BF0E2); /* 0x121BF1DB: call 0x121bf0e2 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 1); /* 0x121BF1E0: mov cl, 1 */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x121BF1E2: mov byte ptr [ebp - 1], cl */
    /* test eax, eax */ /* 0x121BF1E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121BF290; /* 0x121BF1E7: js 0x121bf290 */
L_121BF1ED:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121BF27C; /* 0x121BF1ED: jle 0x121bf27c */
L_121BF1F3:
    eax = MEM32(ebp + 0x10); /* 0x121BF1F3: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x121BF1F6: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BF226; /* 0x121BF1FC: jne 0x121bf226 */
L_121BF1FE:
    /* cmp MEM32(0x121EF0A8), 0 */ /* 0x121BF1FE: cmp dword ptr [0x121ef0a8], 0 */
    _flag_a = (uint32_t)(MEM32(0x121EF0A8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BF226; /* 0x121BF205: je 0x121bf226 */
L_121BF207:
    PUSH32(esp, 0x121EF0A8u); /* 0x121BF207: push 0x121ef0a8 */
    RECOMP_CALL(sub_121BFAD0); /* 0x121BF20C: call 0x121bfad0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BF211: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x121BF214: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BF226; /* 0x121BF216: je 0x121bf226 */
L_121BF218:
    PUSH32(esp, 1); /* 0x121BF218: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121BF21A: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(0x121EF0A8)); /* 0x121BF21D: call dword ptr [0x121ef0a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x121BF223: add esp, 8 */
    _flag_k = FK_ADD;
L_121BF226:
    ecx = MEM32(ebp + 0x14); /* 0x121BF226: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_121BF112); /* 0x121BF229: call 0x121bf112 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x121BF22E: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x14); /* 0x121BF231: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax + 0xC), edx */ /* 0x121BF234: cmp dword ptr [eax + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BF247; /* 0x121BF237: je 0x121bf247 */
L_121BF239:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BF239: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x121BF23C: mov ecx, eax */
    PUSH32(esp, edi); /* 0x121BF23E: push edi */
    RECOMP_CALL(sub_121BF12C); /* 0x121BF23F: call 0x121bf12c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x121BF244: mov eax, dword ptr [ebp + 0x14] */
L_121BF247:
    MEM32(eax + 0xC) = ebx; /* 0x121BF247: mov dword ptr [eax + 0xc], ebx */
    eax = MEM32(esi); /* 0x121BF24A: mov eax, dword ptr [esi] */
    ebx = MEM32(ebp + 0xC); /* 0x121BF24C: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x121BF24F: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BF25E; /* 0x121BF252: je 0x121bf25e */
L_121BF254:
    ecx = MEM32(esi + 0x4); /* 0x121BF254: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BF257: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x121BF259: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ebx); /* 0x121BF25C: call ebx */
    RECOMP_FLAGS_IN();
L_121BF25E:
    ecx = MEM32(esi + 0xC); /* 0x121BF25E: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x8); /* 0x121BF261: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BF264: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x121BF266: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ebx); /* 0x121BF269: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x121BF26B: mov ecx, dword ptr [ebp - 0x10] */
    ecx = MEM32(esi + ecx * 4 + 0x18); /* 0x121BF26E: mov ecx, dword ptr [esi + ecx*4 + 0x18] */
    edx = edi; /* 0x121BF272: mov edx, edi */
    RECOMP_CALL(sub_121BF0F9); /* 0x121BF274: call 0x121bf0f9 */
    RECOMP_FLAGS_IN();
L_121BF279:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x121BF279: mov cl, byte ptr [ebp - 1] */
L_121BF27C:
    eax = ebx; /* 0x121BF27C: mov eax, ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x121BF27E: mov dword ptr [ebp - 8], ebx */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x121BF281: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BF1C3; /* 0x121BF284: jne 0x121bf1c3 */
L_121BF28A:
    /* test LO8(ecx), LO8(ecx) */ /* 0x121BF28A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BF2D0; /* 0x121BF28C: je 0x121bf2d0 */
L_121BF28E:
    goto L_121BF2AF; /* 0x121BF28E: jmp 0x121bf2af */
L_121BF290:
    MEM32(ebp + (-0xC)) = 0; /* 0x121BF290: mov dword ptr [ebp - 0xc], 0 */
    goto L_121BF2AF; /* 0x121BF297: jmp 0x121bf2af */
L_121BF299:
    /* cmp MEM32(ebx + 0xC), 0xFFFFFFFEu */ /* 0x121BF299: cmp dword ptr [ebx + 0xc], -2 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BF2D0; /* 0x121BF29D: je 0x121bf2d0 */
L_121BF29F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BF29F: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x121BF2A2: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x121BF2A4: push edi */
    edx = 0xFFFFFFFEu; /* 0x121BF2A5: mov edx, 0xfffffffe */
    RECOMP_CALL(sub_121BF12C); /* 0x121BF2AA: call 0x121bf12c */
    RECOMP_FLAGS_IN();
L_121BF2AF:
    eax = MEM32(esi); /* 0x121BF2AF: mov eax, dword ptr [esi] */
    ebx = MEM32(ebp + 0xC); /* 0x121BF2B1: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x121BF2B4: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BF2C3; /* 0x121BF2B7: je 0x121bf2c3 */
L_121BF2B9:
    ecx = MEM32(esi + 0x4); /* 0x121BF2B9: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BF2BC: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x121BF2BE: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ebx); /* 0x121BF2C1: call ebx */
    RECOMP_FLAGS_IN();
L_121BF2C3:
    ecx = MEM32(esi + 0xC); /* 0x121BF2C3: mov ecx, dword ptr [esi + 0xc] */
    edx = MEM32(esi + 0x8); /* 0x121BF2C6: mov edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121BF2C9: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(edx + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(edx + edi)));
    ecx = ecx ^ MEM32(edx + edi); /* 0x121BF2CB: xor ecx, dword ptr [edx + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ebx); /* 0x121BF2CE: call ebx */
    RECOMP_FLAGS_IN();
L_121BF2D0:
    eax = MEM32(ebp + (-0xC)); /* 0x121BF2D0: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x121BF2D3: pop edi */
    esi = POP32_VAL(esp); /* 0x121BF2D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BF2D5: pop ebx */
    esp = ebp; /* 0x121BF2D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BF2D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF2D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF2DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF2DFu);

L_121BF2DF:
    PUSH32(esp, ebp); /* 0x121BF2DF: push ebp */
    ebp = esp; /* 0x121BF2E0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x121BF2E2: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121BF2E5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x121BF2E8: fstp qword ptr [esp] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp)), 1); /* 0x121BF2EB: cvttsd2si eax, qword ptr [esp] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BF2F0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF2F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF2F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF2F7u);

L_121BF2F7:
    PUSH32(esp, ebp); /* 0x121BF2F7: push ebp */
    ebp = esp; /* 0x121BF2F8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x121BF2FA: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BF2FD: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x121BF300: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x121BF302: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x121BF306: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x121BF30A: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x121BF30E: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x121BF312: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x121BF316: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BF356; /* 0x121BF318: je 0x121bf356 */
L_121BF31A:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x121BF31A: fsubp st(1) */
    /* test edx, edx */ /* 0x121BF31C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121BF33E; /* 0x121BF31E: jns 0x121bf33e */
L_121BF320:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x121BF320: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x121BF323: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x121BF326: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x121BF32C: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BF332: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x121BF335: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BF339: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_121BF36A; /* 0x121BF33C: jmp 0x121bf36a */
L_121BF33E:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x121BF33E: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x121BF341: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x121BF344: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BF34A: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x121BF34D: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BF351: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_121BF36A; /* 0x121BF354: jmp 0x121bf36a */
L_121BF356:
    edx = MEM32(esp + 0x14); /* 0x121BF356: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x121BF35A: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BF31A; /* 0x121BF360: jne 0x121bf31a */
L_121BF362:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x121BF362: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x121BF366: fstp dword ptr [esp + 0x18] */
L_121BF36A:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BF36A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF36B: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF371(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF371u);

    goto L_121BF371;
L_121BF2DF:
    PUSH32(esp, ebp); /* 0x121BF2DF: push ebp */
    ebp = esp; /* 0x121BF2E0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x121BF2E2: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x121BF2E5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x121BF2E8: fstp qword ptr [esp] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp)), 1); /* 0x121BF2EB: cvttsd2si eax, qword ptr [esp] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BF2F0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF2F1: ret  */
L_121BF2F7:
    PUSH32(esp, ebp); /* 0x121BF2F7: push ebp */
    ebp = esp; /* 0x121BF2F8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x121BF2FA: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x121BF2FD: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x121BF300: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x121BF302: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x121BF306: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x121BF30A: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x121BF30E: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x121BF312: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x121BF316: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BF356; /* 0x121BF318: je 0x121bf356 */
L_121BF31A:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x121BF31A: fsubp st(1) */
    /* test edx, edx */ /* 0x121BF31C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121BF33E; /* 0x121BF31E: jns 0x121bf33e */
L_121BF320:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x121BF320: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x121BF323: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x121BF326: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x121BF32C: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BF332: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x121BF335: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BF339: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_121BF36A; /* 0x121BF33C: jmp 0x121bf36a */
L_121BF33E:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x121BF33E: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x121BF341: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x121BF344: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BF34A: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x121BF34D: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BF351: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_121BF36A; /* 0x121BF354: jmp 0x121bf36a */
L_121BF356:
    edx = MEM32(esp + 0x14); /* 0x121BF356: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x121BF35A: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BF31A; /* 0x121BF360: jne 0x121bf31a */
L_121BF362:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x121BF362: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x121BF366: fstp dword ptr [esp + 0x18] */
L_121BF36A:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BF36A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF36B: ret  */
L_121BF371:
    /* cmp MEM32(0x121D95C8), 0 */ /* 0x121BF371: cmp dword ptr [0x121d95c8], 0 */
    _flag_a = (uint32_t)(MEM32(0x121D95C8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BF2F7; /* 0x121BF378: je 0x121bf2f7 */
L_121BF37E:
    RECOMP_BACKEDGE();
    goto L_121BF2DF; /* 0x121BF37E: jmp 0x121bf2df */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121BF388(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF388u);

L_121BF388:
    { _itail_tgt = (uint32_t)(MEM32(0x120012F0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF394(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF394u);

L_121BF394:
    { _itail_tgt = (uint32_t)(MEM32(0x120012EC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF3A0u);

L_121BF3A0:
    PUSH32(esp, 0x121BF3FEu); /* 0x121BF3A0: push 0x121bf3fe */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x121BF3A5: push dword ptr fs:[0] */
    eax = MEM32(esp + 0x10); /* 0x121BF3AC: mov eax, dword ptr [esp + 0x10] */
    MEM32(esp + 0x10) = ebp; /* 0x121BF3B0: mov dword ptr [esp + 0x10], ebp */
    ebp = esp + 0x10; /* 0x121BF3B4: lea ebp, [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - eax; /* 0x121BF3B8: sub esp, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121BF3BA: push ebx */
    PUSH32(esp, esi); /* 0x121BF3BB: push esi */
    PUSH32(esp, edi); /* 0x121BF3BC: push edi */
    eax = MEM32(0x121D9590); /* 0x121BF3BD: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x121BF3C2: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BF3C5: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121BF3C7: push eax */
    MEM32(ebp + (-0x18)) = esp; /* 0x121BF3C8: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x121BF3CB: push dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x121BF3CE: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x121BF3D1: mov dword ptr [ebp - 4], 0xfffffffe */
    MEM32(ebp + (-0x8)) = eax; /* 0x121BF3D8: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x10); /* 0x121BF3DB: lea eax, [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = eax; /* 0x121BF3DE: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF3E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF3E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF3E5u);

L_121BF3E5:
    ecx = MEM32(ebp + (-0x10)); /* 0x121BF3E5: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x121BF3E8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x121BF3EF: pop ecx */
    edi = POP32_VAL(esp); /* 0x121BF3F0: pop edi */
    edi = POP32_VAL(esp); /* 0x121BF3F1: pop edi */
    esi = POP32_VAL(esp); /* 0x121BF3F2: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BF3F3: pop ebx */
    esp = ebp; /* 0x121BF3F4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BF3F6: pop ebp */
    PUSH32(esp, ecx); /* 0x121BF3F7: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF3F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF3FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF3FEu);

L_121BF3FE:
    edi = edi; /* 0x121BF3FE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BF400: push ebp */
    ebp = esp; /* 0x121BF401: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x121BF403: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121BF406: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121BF409: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BF40C: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x121BECF5u); /* 0x121BF40F: push 0x121becf5 */
    PUSH32(esp, 0x121D9590u); /* 0x121BF414: push 0x121d9590 */
    RECOMP_CALL(sub_121BF150); /* 0x121BF419: call 0x121bf150 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x121BF41E: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x121BF421: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF422: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF428(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF428u);

L_121BF428:
    { _itail_tgt = (uint32_t)(MEM32(0x120012E8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF434(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF434u);

L_121BF434:
    { _itail_tgt = (uint32_t)(MEM32(0x120012E4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF440u);

L_121BF440:
    { _itail_tgt = (uint32_t)(MEM32(0x120012E0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF44C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF44Cu);

L_121BF44C:
    { _itail_tgt = (uint32_t)(MEM32(0x120012DC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF458(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF458u);

L_121BF458:
    { _itail_tgt = (uint32_t)(MEM32(0x120012D8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF464(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF464u);

L_121BF464:
    { _itail_tgt = (uint32_t)(MEM32(0x120012D4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF470u);

L_121BF470:
    { _itail_tgt = (uint32_t)(MEM32(0x120012D0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF47C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF47Cu);

L_121BF47C:
    { _itail_tgt = (uint32_t)(MEM32(0x120012CC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF488(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF488u);

L_121BF488:
    { _itail_tgt = (uint32_t)(MEM32(0x120012C8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF494(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF494u);

L_121BF494:
    { _itail_tgt = (uint32_t)(MEM32(0x120012C4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF4AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF4ACu);

L_121BF4AC:
    { _itail_tgt = (uint32_t)(MEM32(0x120012BC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF4B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF4B8u);

L_121BF4B8:
    { _itail_tgt = (uint32_t)(MEM32(0x120012B8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF4C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF4C4u);

L_121BF4C4:
    { _itail_tgt = (uint32_t)(MEM32(0x120012B4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF4D0u);

L_121BF4D0:
    { _itail_tgt = (uint32_t)(MEM32(0x120012B0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF4DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF4DCu);

L_121BF4DC:
    { _itail_tgt = (uint32_t)(MEM32(0x120012AC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
