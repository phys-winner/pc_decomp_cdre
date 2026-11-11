#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_170E859D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E859Du);

L_170E859D:
    edi = edi; /* 0x170E859D: mov edi, edi */
    PUSH32(esp, esi); /* 0x170E859F: push esi */
    esi = ecx; /* 0x170E85A0: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x170E85A2: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x170E85A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x1700B4C8u; /* 0x170E85A7: mov dword ptr [esi], 0x1700b4c8 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E85B9; /* 0x170E85AD: je 0x170e85b9 */
L_170E85AF:
    ecx = MEM32(eax); /* 0x170E85AF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E85B1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E85B2: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x170E85B5: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E85B9:
    eax = MEM32(esi + 0xC); /* 0x170E85B9: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x170E85BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E85CA; /* 0x170E85BE: je 0x170e85ca */
L_170E85C0:
    ecx = MEM32(eax); /* 0x170E85C0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E85C2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E85C3: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x170E85C6: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E85CA:
    eax = MEM32(esi + 0x10); /* 0x170E85CA: mov eax, dword ptr [esi + 0x10] */
    /* test eax, eax */ /* 0x170E85CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E85DB; /* 0x170E85CF: je 0x170e85db */
L_170E85D1:
    ecx = MEM32(eax); /* 0x170E85D1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E85D3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E85D4: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x170E85D7: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E85DB:
    esi = POP32_VAL(esp); /* 0x170E85DB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170E85DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_170E85E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E85E2u);

L_170E85E2:
    edi = edi; /* 0x170E85E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E85E4: push ebp */
    ebp = esp; /* 0x170E85E5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x170E85E7: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x10); /* 0x170E85EA: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E85ED: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x170E85F0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E85F2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x170E85F3: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E85F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170E85F7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170E85FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E85FFu);

L_170E85FF:
    edi = edi; /* 0x170E85FF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8601: push ebp */
    ebp = esp; /* 0x170E8602: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E8604: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x170E8607: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E860A: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x10); /* 0x170E860D: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E8610: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x170E8613: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E8615: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x170E8616: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E8619: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E861A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E8622(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8622u);

L_170E8622:
    edi = edi; /* 0x170E8622: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8624: push ebp */
    ebp = esp; /* 0x170E8625: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E8627: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x170E862A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x10); /* 0x170E862D: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E8630: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x170E8633: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E8635: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x170E8636: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E8639: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170E863A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170E8642(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8642u);

L_170E8642:
    edi = edi; /* 0x170E8642: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8644: push ebp */
    ebp = esp; /* 0x170E8645: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E8647: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x170E864A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x10); /* 0x170E864D: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E8650: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x170E8653: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E8655: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x170E8656: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E8659: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170E865A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170E8662(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8662u);

L_170E8662:
    edi = edi; /* 0x170E8662: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8664: push ebp */
    ebp = esp; /* 0x170E8665: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E8667: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x170E866A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x10); /* 0x170E866D: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E8670: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x170E8673: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E8675: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x170E8676: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E8679: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170E867A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170E8682(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8682u);

L_170E8682:
    edi = edi; /* 0x170E8682: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8684: push ebp */
    ebp = esp; /* 0x170E8685: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x170E8687: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x10); /* 0x170E868A: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E868D: push dword ptr [ecx + 0xc] */
    edx = MEM32(eax); /* 0x170E8690: mov edx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E8692: push eax */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x170E8693: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E8696: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170E8697: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170E869F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E869Fu);

L_170E869F:
    edi = edi; /* 0x170E869F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E86A1: push ebp */
    ebp = esp; /* 0x170E86A2: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E86A4: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x170E86A7: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E86AA: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x170E86AD: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E86B0: push dword ptr [ebp + 0xc] */
    edx = MEM32(eax); /* 0x170E86B3: mov edx, dword ptr [eax] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E86B5: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x170E86B8: push eax */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x170E86B9: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E86BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E86BD: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E86C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E86C5u);

L_170E86C5:
    edi = edi; /* 0x170E86C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E86C7: push ebp */
    ebp = esp; /* 0x170E86C8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E86CA: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x170E86CD: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E86D0: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + 0x10); /* 0x170E86D3: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E86D6: push dword ptr [ecx + 0xc] */
    edx = MEM32(eax); /* 0x170E86D9: mov edx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E86DB: push eax */
    RECOMP_ICALL(MEM32(edx + 0x34)); /* 0x170E86DC: call dword ptr [edx + 0x34] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E86DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170E86E0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170E86E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E86E8u);

L_170E86E8:
    edi = edi; /* 0x170E86E8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E86EA: push ebp */
    ebp = esp; /* 0x170E86EB: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E86ED: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x170E86F0: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E86F3: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x170E86F6: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E86F9: push dword ptr [ebp + 0xc] */
    edx = MEM32(eax); /* 0x170E86FC: mov edx, dword ptr [eax] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E86FE: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x170E8701: push eax */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x170E8702: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E8705: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E8706: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E870E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E870Eu);

L_170E870E:
    edi = edi; /* 0x170E870E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8710: push ebp */
    ebp = esp; /* 0x170E8711: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E8713: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x170E8716: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E8719: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + 0x10); /* 0x170E871C: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E871F: push dword ptr [ecx + 0xc] */
    edx = MEM32(eax); /* 0x170E8722: mov edx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E8724: push eax */
    RECOMP_ICALL(MEM32(edx + 0x3C)); /* 0x170E8725: call dword ptr [edx + 0x3c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E8728: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170E8729: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170E8731(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8731u);

L_170E8731:
    edi = edi; /* 0x170E8731: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8733: push ebp */
    ebp = esp; /* 0x170E8734: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E8736: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x170E8739: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E873C: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x170E873F: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E8742: push dword ptr [ebp + 0xc] */
    edx = MEM32(eax); /* 0x170E8745: mov edx, dword ptr [eax] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E8747: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x170E874A: push eax */
    RECOMP_ICALL(MEM32(edx + 0x40)); /* 0x170E874B: call dword ptr [edx + 0x40] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E874E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E874F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E8757(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8757u);

L_170E8757:
    edi = edi; /* 0x170E8757: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8759: push ebp */
    ebp = esp; /* 0x170E875A: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x170E875C: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170E875F: fld dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x170E8762: mov eax, dword ptr [ecx + 0x10] */
    edx = MEM32(eax); /* 0x170E8765: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x170E8767: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170E8768: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E876B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E876E: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x170E8771: push eax */
    RECOMP_ICALL(MEM32(edx + 0x44)); /* 0x170E8772: call dword ptr [edx + 0x44] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E8775: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170E8776: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170E877E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E877Eu);

L_170E877E:
    edi = edi; /* 0x170E877E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8780: push ebp */
    ebp = esp; /* 0x170E8781: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E8783: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x170E8786: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E8789: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x170E878C: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E878F: push dword ptr [ebp + 0xc] */
    edx = MEM32(eax); /* 0x170E8792: mov edx, dword ptr [eax] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E8794: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x170E8797: push eax */
    RECOMP_ICALL(MEM32(edx + 0x48)); /* 0x170E8798: call dword ptr [edx + 0x48] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E879B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E879C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E87A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E87A4u);

L_170E87A4:
    edi = edi; /* 0x170E87A4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E87A6: push ebp */
    ebp = esp; /* 0x170E87A7: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E87A9: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x170E87AC: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E87AF: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + 0x10); /* 0x170E87B2: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E87B5: push dword ptr [ecx + 0xc] */
    edx = MEM32(eax); /* 0x170E87B8: mov edx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E87BA: push eax */
    RECOMP_ICALL(MEM32(edx + 0x4C)); /* 0x170E87BB: call dword ptr [edx + 0x4c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E87BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170E87BF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170E87C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E87C7u);

L_170E87C7:
    edi = edi; /* 0x170E87C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E87C9: push ebp */
    ebp = esp; /* 0x170E87CA: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E87CC: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x170E87CF: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E87D2: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x170E87D5: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E87D8: push dword ptr [ebp + 0xc] */
    edx = MEM32(eax); /* 0x170E87DB: mov edx, dword ptr [eax] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E87DD: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x170E87E0: push eax */
    RECOMP_ICALL(MEM32(edx + 0x50)); /* 0x170E87E1: call dword ptr [edx + 0x50] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E87E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E87E5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E87ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E87EDu);

L_170E87ED:
    edi = edi; /* 0x170E87ED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E87EF: push ebp */
    ebp = esp; /* 0x170E87F0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E87F2: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x170E87F5: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E87F8: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + 0x10); /* 0x170E87FB: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E87FE: push dword ptr [ecx + 0xc] */
    edx = MEM32(eax); /* 0x170E8801: mov edx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E8803: push eax */
    RECOMP_ICALL(MEM32(edx + 0x54)); /* 0x170E8804: call dword ptr [edx + 0x54] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E8807: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170E8808: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170E8810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8810u);

L_170E8810:
    edi = edi; /* 0x170E8810: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8812: push ebp */
    ebp = esp; /* 0x170E8813: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E8815: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x170E8818: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E881B: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x170E881E: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E8821: push dword ptr [ebp + 0xc] */
    edx = MEM32(eax); /* 0x170E8824: mov edx, dword ptr [eax] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E8826: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x170E8829: push eax */
    RECOMP_ICALL(MEM32(edx + 0x58)); /* 0x170E882A: call dword ptr [edx + 0x58] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E882D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E882E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E8836(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8836u);

L_170E8836:
    edi = edi; /* 0x170E8836: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8838: push ebp */
    ebp = esp; /* 0x170E8839: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E883B: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x170E883E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E8841: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x170E8844: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E8847: push dword ptr [ebp + 0xc] */
    edx = MEM32(eax); /* 0x170E884A: mov edx, dword ptr [eax] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E884C: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x170E884F: push eax */
    RECOMP_ICALL(MEM32(edx + 0x5C)); /* 0x170E8850: call dword ptr [edx + 0x5c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E8853: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E8854: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E885C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E885Cu);

L_170E885C:
    edi = edi; /* 0x170E885C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E885E: push ebp */
    ebp = esp; /* 0x170E885F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E8861: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x170E8864: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E8867: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + 0x10); /* 0x170E886A: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E886D: push dword ptr [ecx + 0xc] */
    edx = MEM32(eax); /* 0x170E8870: mov edx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E8872: push eax */
    RECOMP_ICALL(MEM32(edx + 0x60)); /* 0x170E8873: call dword ptr [edx + 0x60] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E8876: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170E8877: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170E887F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E887Fu);

L_170E887F:
    edi = edi; /* 0x170E887F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8881: push ebp */
    ebp = esp; /* 0x170E8882: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E8884: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x170E8887: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E888A: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x170E888D: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E8890: push dword ptr [ebp + 0xc] */
    edx = MEM32(eax); /* 0x170E8893: mov edx, dword ptr [eax] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E8895: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x170E8898: push eax */
    RECOMP_ICALL(MEM32(edx + 0x64)); /* 0x170E8899: call dword ptr [edx + 0x64] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E889C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E889D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E88A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E88A5u);

L_170E88A5:
    edi = edi; /* 0x170E88A5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E88A7: push ebp */
    ebp = esp; /* 0x170E88A8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E88AA: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x170E88AD: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E88B0: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x170E88B3: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E88B6: push dword ptr [ebp + 0xc] */
    edx = MEM32(eax); /* 0x170E88B9: mov edx, dword ptr [eax] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x170E88BB: push dword ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x170E88BE: push eax */
    RECOMP_ICALL(MEM32(edx + 0x68)); /* 0x170E88BF: call dword ptr [edx + 0x68] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170E88C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E88C3: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E88CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E88CBu);

L_170E88CB:
    edi = edi; /* 0x170E88CB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E88CD: push ebp */
    ebp = esp; /* 0x170E88CE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170E88D0: push ecx */
    PUSH32(esp, ebx); /* 0x170E88D1: push ebx */
    PUSH32(esp, esi); /* 0x170E88D2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170E88D3: mov esi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x170E88D6: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x170E88D8: push esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x170E88D9: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_170DB68A); /* 0x170E88DC: call 0x170db68a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E88E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x170E88E3: mov dword ptr [ebp + 8], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E88EF; /* 0x170E88E6: jne 0x170e88ef */
L_170E88E8:
    eax = 0x88760B59u; /* 0x170E88E8: mov eax, 0x88760b59 */
    goto L_170E896D; /* 0x170E88ED: jmp 0x170e896d */
L_170E88EF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x170E88EF: add ebx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x170E88F2: push ebx */
    PUSH32(esp, eax); /* 0x170E88F3: push eax */
    RECOMP_CALL(sub_1702BAA3); /* 0x170E88F4: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E88F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E896D; /* 0x170E88FB: jl 0x170e896d */
L_170E88FD:
    eax = MEM32(ebx); /* 0x170E88FD: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x170E88FF: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x170E8901: push edi */
    PUSH32(esp, eax); /* 0x170E8902: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170E8903: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x170E8906: mov ecx, dword ptr [ebp + 8] */
    edi = eax; /* 0x170E8909: mov edi, eax */
    eax = ecx; /* 0x170E890B: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170E890D: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170E890D: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170E8910: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170E8912: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170E8914: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x20u); /* 0x170E8917: push 0x20 */
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170E8919: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_CALL(sub_1721B01C); /* 0x170E891B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E8920: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170E8922: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8930; /* 0x170E8923: je 0x170e8930 */
L_170E8925:
    ecx = eax; /* 0x170E8925: mov ecx, eax */
    RECOMP_CALL(sub_170E7958); /* 0x170E8927: call 0x170e7958 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170E892C: mov edi, eax */
    goto L_170E8932; /* 0x170E892E: jmp 0x170e8932 */
L_170E8930:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E8930: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E8932:
    /* test edi, edi */ /* 0x170E8932: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E893D; /* 0x170E8934: jne 0x170e893d */
L_170E8936:
    eax = 0x8007000Eu; /* 0x170E8936: mov eax, 0x8007000e */
    goto L_170E896C; /* 0x170E893B: jmp 0x170e896c */
L_170E893D:
    esi = MEM32(ebp + (-0x4)); /* 0x170E893D: mov esi, dword ptr [ebp - 4] */
    ebx = MEM32(ebx); /* 0x170E8940: mov ebx, dword ptr [ebx] */
    eax = esi + 0xC; /* 0x170E8942: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x170E8945: push eax */
    eax = MEM32(ebx); /* 0x170E8946: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x170E8948: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x170E8949: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x170E894C: push eax */
    ecx = edi; /* 0x170E894D: mov ecx, edi */
    RECOMP_CALL(sub_170E797E); /* 0x170E894F: call 0x170e797e */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E8954: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E8956: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170E8967; /* 0x170E8958: jge 0x170e8967 */
L_170E895A:
    PUSH32(esp, 1); /* 0x170E895A: push 1 */
    ecx = edi; /* 0x170E895C: mov ecx, edi */
    RECOMP_CALL(sub_170DBF0D); /* 0x170E895E: call 0x170dbf0d */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x170E8963: mov eax, ebx */
    goto L_170E896C; /* 0x170E8965: jmp 0x170e896c */
L_170E8967:
    MEM32(esi + 0x10) = edi; /* 0x170E8967: mov dword ptr [esi + 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E896A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E896C:
    edi = POP32_VAL(esp); /* 0x170E896C: pop edi */
L_170E896D:
    esi = POP32_VAL(esp); /* 0x170E896D: pop esi */
    ebx = POP32_VAL(esp); /* 0x170E896E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E896F: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170E8970: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170E8978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8978u);

L_170E8978:
    edi = edi; /* 0x170E8978: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E897A: push ebp */
    ebp = esp; /* 0x170E897B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170E897D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x170E897E: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170E8981: push edi */
    PUSH32(esp, 4); /* 0x170E8982: push 4 */
    ecx = POP32_VAL(esp); /* 0x170E8984: pop ecx */
    edi = 0x170019D0u; /* 0x170E8985: mov edi, 0x170019d0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E898A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x170E898C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_170E89A1; /* 0x170E898E: je 0x170e89a1 */
L_170E8990:
    esi = MEM32(ebp + 0xC); /* 0x170E8990: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x170E8993: push 4 */
    ecx = POP32_VAL(esp); /* 0x170E8995: pop ecx */
    edi = 0x1702AA2Cu; /* 0x170E8996: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E899B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x170E899D: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_170E89B3; /* 0x170E899F: jne 0x170e89b3 */
L_170E89A1:
    eax = MEM32(ebp + 0x8); /* 0x170E89A1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x170E89A4: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x170E89A7: mov dword ptr [ecx], eax */
    ecx = MEM32(eax); /* 0x170E89A9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E89AB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170E89AC: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E89AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170E89B8; /* 0x170E89B1: jmp 0x170e89b8 */
L_170E89B3:
    eax = 0x80004002u; /* 0x170E89B3: mov eax, 0x80004002 */
L_170E89B8:
    edi = POP32_VAL(esp); /* 0x170E89B8: pop edi */
    esi = POP32_VAL(esp); /* 0x170E89B9: pop esi */
    ebp = POP32_VAL(esp); /* 0x170E89BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170E89BB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170E89C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E89C3u);

L_170E89C3:
    edi = edi; /* 0x170E89C3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E89C5: push ebp */
    ebp = esp; /* 0x170E89C6: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x170E89C8: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x170E89CB: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    eax = MEM32(ecx + 0x4); /* 0x170E89CE: mov eax, dword ptr [ecx + 4] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170E89DC; /* 0x170E89D1: jne 0x170e89dc */
L_170E89D3:
    PUSH32(esp, 1); /* 0x170E89D3: push 1 */
    RECOMP_CALL(sub_170DC02A); /* 0x170E89D5: call 0x170dc02a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E89DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E89DC:
    ebp = POP32_VAL(esp); /* 0x170E89DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170E89DD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170E89E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E89E5u);

L_170E89E5:
    eax = ecx; /* 0x170E89E5: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170E89E7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x1700B4C8u; /* 0x170E89E9: mov dword ptr [eax], 0x1700b4c8 */
    MEM32(eax + 0x4) = 1; /* 0x170E89EF: mov dword ptr [eax + 4], 1 */
    MEM32(eax + 0x8) = ecx; /* 0x170E89F6: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x170E89F9: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x170E89FC: mov dword ptr [eax + 0x10], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170E89FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_170E8A05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8A05u);

L_170E8A05:
    edi = edi; /* 0x170E8A05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8A07: push ebp */
    ebp = esp; /* 0x170E8A08: mov ebp, esp */
    eax = ecx; /* 0x170E8A0A: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x170E8A0C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x170E8A0F: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x170E8A13: mov dword ptr [eax], ecx */
    ecx = eax + 0x8; /* 0x170E8A15: lea ecx, [eax + 8] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x170E8A18: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0xC) = ecx; /* 0x170E8A1B: mov dword ptr [eax + 0xc], ecx */
    ebp = POP32_VAL(esp); /* 0x170E8A1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170E8A1F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170E8A27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8A27u);

L_170E8A27:
    edi = edi; /* 0x170E8A27: mov edi, edi */
    PUSH32(esp, esi); /* 0x170E8A29: push esi */
    esi = ecx; /* 0x170E8A2A: mov esi, ecx */
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x170E8A2C: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E8A5D; /* 0x170E8A30: je 0x170e8a5d */
L_170E8A32:
    PUSH32(esp, edi); /* 0x170E8A32: push edi */
L_170E8A33:
    edi = MEM32(esi + 0x8); /* 0x170E8A33: mov edi, dword ptr [esi + 8] */
    eax = MEM32(edi + 0x10); /* 0x170E8A36: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0x8) = eax; /* 0x170E8A39: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0x8); /* 0x170E8A3C: mov eax, dword ptr [edi + 8] */
    /* test LO8(eax), 8 */ /* 0x170E8A3F: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8A47; /* 0x170E8A41: jne 0x170e8a47 */
L_170E8A43:
    /* test LO8(eax), 1 */ /* 0x170E8A43: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8A4F; /* 0x170E8A45: jne 0x170e8a4f */
L_170E8A47:
    PUSH32(esp, MEM32(edi)); /* 0x170E8A47: push dword ptr [edi] */
    RECOMP_CALL(sub_1721B010); /* 0x170E8A49: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170E8A4E: pop ecx */
L_170E8A4F:
    PUSH32(esp, edi); /* 0x170E8A4F: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x170E8A50: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x170E8A55: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170E8A59: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E8A33; /* 0x170E8A5A: jne 0x170e8a33 */
L_170E8A5C:
    edi = POP32_VAL(esp); /* 0x170E8A5C: pop edi */
L_170E8A5D:
    esi = POP32_VAL(esp); /* 0x170E8A5D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170E8A5E: ret  */
    RECOMP_REGS_OUT();
}

void sub_170E8A64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8A64u);

L_170E8A64:
    edi = edi; /* 0x170E8A64: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8A66: push ebp */
    ebp = esp; /* 0x170E8A67: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170E8A69: push ecx */
    PUSH32(esp, esi); /* 0x170E8A6A: push esi */
    PUSH32(esp, edi); /* 0x170E8A6B: push edi */
    edi = MEM32(ebp + 0xC); /* 0x170E8A6C: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x170E8A6F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x170E8A71: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x170E8A73: mov dword ptr [ebp - 4], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8A88; /* 0x170E8A76: je 0x170e8a88 */
L_170E8A78:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170E8A78: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E8A88; /* 0x170E8A7C: jne 0x170e8a88 */
L_170E8A7E:
    eax = 0x80004005u; /* 0x170E8A7E: mov eax, 0x80004005 */
    goto L_170E8B97; /* 0x170E8A83: jmp 0x170e8b97 */
L_170E8A88:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x170E8A88: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E8AA2; /* 0x170E8A8B: jne 0x170e8aa2 */
L_170E8A8D:
    eax = MEM32(ebp + 0x8); /* 0x170E8A8D: mov eax, dword ptr [ebp + 8] */
    edx = eax + 0x1; /* 0x170E8A90: lea edx, [eax + 1] */
L_170E8A93:
    SET_LO8(ecx, MEM8(eax)); /* 0x170E8A93: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170E8A95: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x170E8A96: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8A93; /* 0x170E8A98: jne 0x170e8a93 */
L_170E8A9A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x170E8A9A: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170E8A9C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = eax; /* 0x170E8A9D: mov dword ptr [ebp + 0xc], eax */
    edi = eax; /* 0x170E8AA0: mov edi, eax */
L_170E8AA2:
    /* test MEM8(ebp + 0x10), 1 */ /* 0x170E8AA2: test byte ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8AAC; /* 0x170E8AA6: jne 0x170e8aac */
L_170E8AA8:
    _flag_a = (uint32_t)((MEM32(ebp + 0x10) | 2)); _flag_b = (uint32_t)((MEM32(ebp + 0x10) | 2));
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) | 2; /* 0x170E8AA8: or dword ptr [ebp + 0x10], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E8AAC:
    /* test MEM8(ebp + 0x10), 2 */ /* 0x170E8AAC: test byte ptr [ebp + 0x10], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8ADC; /* 0x170E8AB0: je 0x170e8adc */
L_170E8AB2:
    eax = MEM32(esi + 0x8); /* 0x170E8AB2: mov eax, dword ptr [esi + 8] */
    goto L_170E8AD8; /* 0x170E8AB5: jmp 0x170e8ad8 */
L_170E8AB7:
    /* test MEM8(eax + 0x8), 2 */ /* 0x170E8AB7: test byte ptr [eax + 8], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8AD5; /* 0x170E8ABB: je 0x170e8ad5 */
L_170E8ABD:
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x170E8ABD: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E8AD5; /* 0x170E8AC0: jne 0x170e8ad5 */
L_170E8AC2:
    esi = MEM32(ebp + 0x8); /* 0x170E8AC2: mov esi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x170E8AC5: mov ecx, edi */
    edi = MEM32(eax); /* 0x170E8AC7: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170E8AC9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x170E8ACB: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_170E8AF5; /* 0x170E8ACD: je 0x170e8af5 */
L_170E8ACF:
    edi = MEM32(ebp + 0xC); /* 0x170E8ACF: mov edi, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + (-0x4)); /* 0x170E8AD2: mov esi, dword ptr [ebp - 4] */
L_170E8AD5:
    eax = MEM32(eax + 0x10); /* 0x170E8AD5: mov eax, dword ptr [eax + 0x10] */
L_170E8AD8:
    /* test eax, eax */ /* 0x170E8AD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8AB7; /* 0x170E8ADA: jne 0x170e8ab7 */
L_170E8ADC:
    PUSH32(esp, ebx); /* 0x170E8ADC: push ebx */
    PUSH32(esp, 0x14u); /* 0x170E8ADD: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E8ADF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E8AE4: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E8AE6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170E8AE8: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8B1A; /* 0x170E8AE9: jne 0x170e8b1a */
L_170E8AEB:
    eax = 0x8007000Eu; /* 0x170E8AEB: mov eax, 0x8007000e */
    goto L_170E8B96; /* 0x170E8AF0: jmp 0x170e8b96 */
L_170E8AF5:
    ecx = MEM32(ebp + 0x14); /* 0x170E8AF5: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x170E8AF8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8B01; /* 0x170E8AFA: je 0x170e8b01 */
L_170E8AFC:
    eax = MEM32(eax + 0xC); /* 0x170E8AFC: mov eax, dword ptr [eax + 0xc] */
    MEM32(ecx) = eax; /* 0x170E8AFF: mov dword ptr [ecx], eax */
L_170E8B01:
    /* test MEM8(ebp + 0x10), 1 */ /* 0x170E8B01: test byte ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8B16; /* 0x170E8B05: je 0x170e8b16 */
L_170E8B07:
    /* test MEM8(ebp + 0x10), 8 */ /* 0x170E8B07: test byte ptr [ebp + 0x10], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8B16; /* 0x170E8B0B: je 0x170e8b16 */
L_170E8B0D:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170E8B0D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721B010); /* 0x170E8B10: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170E8B15: pop ecx */
L_170E8B16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E8B16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170E8B97; /* 0x170E8B18: jmp 0x170e8b97 */
L_170E8B1A:
    /* test MEM8(ebp + 0x10), 1 */ /* 0x170E8B1A: test byte ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8B53; /* 0x170E8B1E: jne 0x170e8b53 */
L_170E8B20:
    PUSH32(esp, edi); /* 0x170E8B20: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x170E8B21: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E8B26: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170E8B28: pop ecx */
    MEM32(ebx) = eax; /* 0x170E8B29: mov dword ptr [ebx], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8B36; /* 0x170E8B2B: jne 0x170e8b36 */
L_170E8B2D:
    PUSH32(esp, ebx); /* 0x170E8B2D: push ebx */
    RECOMP_CALL(sub_1721B010); /* 0x170E8B2E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170E8B33: pop ecx */
    RECOMP_BACKEDGE();
    goto L_170E8AEB; /* 0x170E8B34: jmp 0x170e8aeb */
L_170E8B36:
    esi = MEM32(ebp + 0x8); /* 0x170E8B36: mov esi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x170E8B39: mov ecx, edi */
    edi = eax; /* 0x170E8B3B: mov edi, eax */
    eax = ecx; /* 0x170E8B3D: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170E8B3F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170E8B3F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170E8B42: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170E8B44: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170E8B46: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170E8B49: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = MEM32(ebp + 0xC); /* 0x170E8B4B: mov edi, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + (-0x4)); /* 0x170E8B4E: mov esi, dword ptr [ebp - 4] */
    goto L_170E8B58; /* 0x170E8B51: jmp 0x170e8b58 */
L_170E8B53:
    eax = MEM32(ebp + 0x8); /* 0x170E8B53: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx) = eax; /* 0x170E8B56: mov dword ptr [ebx], eax */
L_170E8B58:
    eax = MEM32(ebp + 0x10); /* 0x170E8B58: mov eax, dword ptr [ebp + 0x10] */
    /* test LO8(eax), 4 */ /* 0x170E8B5B: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8B6B; /* 0x170E8B5D: jne 0x170e8b6b */
L_170E8B5F:
    ecx = MEM32(esi + 0x4); /* 0x170E8B5F: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x170E8B62: add ecx, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ecx = ecx & 0xFFFFFFFCu; /* 0x170E8B65: and ecx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ecx; /* 0x170E8B68: mov dword ptr [esi + 4], ecx */
L_170E8B6B:
    ecx = MEM32(esi + 0x4); /* 0x170E8B6B: mov ecx, dword ptr [esi + 4] */
    MEM32(ebx + 0x8) = eax; /* 0x170E8B6E: mov dword ptr [ebx + 8], eax */
    eax = ebx + 0x10; /* 0x170E8B71: lea eax, [ebx + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x170E8B74: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xC) = ecx; /* 0x170E8B77: mov dword ptr [ebx + 0xc], ecx */
    MEM32(ebx + 0x4) = edi; /* 0x170E8B7A: mov dword ptr [ebx + 4], edi */
    ecx = MEM32(esi + 0xC); /* 0x170E8B7D: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + edi; /* 0x170E8B80: add dword ptr [esi + 4], edi */
    _flag_k = FK_ADD;
    MEM32(ecx) = ebx; /* 0x170E8B83: mov dword ptr [ecx], ebx */
    MEM32(esi + 0xC) = eax; /* 0x170E8B85: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + 0x14); /* 0x170E8B88: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x170E8B8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8B94; /* 0x170E8B8D: je 0x170e8b94 */
L_170E8B8F:
    ecx = MEM32(ebx + 0xC); /* 0x170E8B8F: mov ecx, dword ptr [ebx + 0xc] */
    MEM32(eax) = ecx; /* 0x170E8B92: mov dword ptr [eax], ecx */
L_170E8B94:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E8B94: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E8B96:
    ebx = POP32_VAL(esp); /* 0x170E8B96: pop ebx */
L_170E8B97:
    edi = POP32_VAL(esp); /* 0x170E8B97: pop edi */
    esi = POP32_VAL(esp); /* 0x170E8B98: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E8B99: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E8B9A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E8BA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8BA2u);

L_170E8BA2:
    eax = MEM32(ecx + 0x4); /* 0x170E8BA2: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x170E8BA5: add eax, 3 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x170E8BA8: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x170E8BA8: shr eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170E8BAB: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170E8BAC: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170E8BAD: ret  */
    RECOMP_REGS_OUT();
}

void sub_170E8BB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8BB3u);

L_170E8BB3:
    edi = edi; /* 0x170E8BB3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8BB5: push ebp */
    ebp = esp; /* 0x170E8BB6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170E8BB8: push ecx */
    PUSH32(esp, ebx); /* 0x170E8BB9: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x170E8BBA: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x170E8BBD: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E8BCF; /* 0x170E8BC0: jne 0x170e8bcf */
L_170E8BC2:
    ebx = MEM32(ecx + 0x4); /* 0x170E8BC2: mov ebx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 3; /* 0x170E8BC5: add ebx, 3 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ebx) >> 1) & 1u); /* 0x170E8BC8: shr ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 2u; /* 0x170E8BC8: shr ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170E8BCB: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170E8BCC: inc ebx */
    _flag_k = FK_INC;
    goto L_170E8BDE; /* 0x170E8BCD: jmp 0x170e8bde */
L_170E8BCF:
    eax = MEM32(ecx + 0x4); /* 0x170E8BCF: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x170E8BD2: add eax, 3 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x170E8BD5: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x170E8BD5: shr eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170E8BD8: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170E8BD9: inc eax */
    _flag_k = FK_INC;
    /* cmp ebx, eax */ /* 0x170E8BDA: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170E8BE6; /* 0x170E8BDC: jb 0x170e8be6 */
L_170E8BDE:
    /* cmp ebx, 0x8000u */ /* 0x170E8BDE: cmp ebx, 0x8000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170E8BF0; /* 0x170E8BE4: jbe 0x170e8bf0 */
L_170E8BE6:
    eax = 0x80004005u; /* 0x170E8BE6: mov eax, 0x80004005 */
    goto L_170E8C9B; /* 0x170E8BEB: jmp 0x170e8c9b */
L_170E8BF0:
    eax = MEM32(ebp + 0x8); /* 0x170E8BF0: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x170E8BF3: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx + (-0x1); /* 0x170E8BF7: lea edx, [ebx - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFu);
    edx = edx & 0x7FFFu; /* 0x170E8BFA: and edx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x170E8C00: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x170E8C00: shl edx, 0x10 */
    _flag_a = (uint32_t)((edx | 0xFFFEu)); _flag_b = (uint32_t)((edx | 0xFFFEu));
    edx = edx | 0xFFFEu; /* 0x170E8C03: or edx, 0xfffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edx; /* 0x170E8C09: mov dword ptr [eax], edx */
    edx = MEM32(ecx); /* 0x170E8C0B: mov edx, dword ptr [ecx] */
    MEM32(eax + 0x4) = edx; /* 0x170E8C0D: mov dword ptr [eax + 4], edx */
    edx = MEM32(ecx + 0x8); /* 0x170E8C10: mov edx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170E8C13: add eax, 8 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x170E8C16: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x170E8C18: push edi */
    MEM32(ebp + 0xC) = eax; /* 0x170E8C19: mov dword ptr [ebp + 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8C78; /* 0x170E8C1C: je 0x170e8c78 */
L_170E8C1E:
    PUSH32(esp, esi); /* 0x170E8C1E: push esi */
L_170E8C1F:
    /* test MEM8(edx + 0x8), 4 */ /* 0x170E8C1F: test byte ptr [edx + 8], 4 */
    _flag_a = (uint32_t)(MEM8(edx + 0x8)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8C51; /* 0x170E8C23: jne 0x170e8c51 */
L_170E8C25:
    eax = MEM32(ebp + 0x8); /* 0x170E8C25: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x170E8C28: mov edi, dword ptr [ebp + 0xc] */
    ecx = eax + 0x3; /* 0x170E8C2B: lea ecx, [eax + 3] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ecx = ecx & 0xFFFFFFFCu; /* 0x170E8C2E: and ecx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170E8C31: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x170E8C33: mov dword ptr [ebp - 4], ecx */
    esi = ecx; /* 0x170E8C36: mov esi, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170E8C38: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170E8C38: shr ecx, 2 */
    eax = 0xABABABABu; /* 0x170E8C3B: mov eax, 0xabababab */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170E8C40: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = esi; /* 0x170E8C42: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170E8C44: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x170E8C47: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = esi; /* 0x170E8C49: mov eax, esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax; /* 0x170E8C4B: add dword ptr [ebp + 0xc], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x170E8C4E: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
L_170E8C51:
    ecx = MEM32(edx + 0x4); /* 0x170E8C51: mov ecx, dword ptr [edx + 4] */
    esi = MEM32(edx); /* 0x170E8C54: mov esi, dword ptr [edx] */
    edi = MEM32(ebp + 0xC); /* 0x170E8C56: mov edi, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x170E8C59: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170E8C5B: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170E8C5B: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170E8C5E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170E8C60: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170E8C62: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170E8C65: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(edx + 0x4); /* 0x170E8C67: mov eax, dword ptr [edx + 4] */
    edx = MEM32(edx + 0x10); /* 0x170E8C6A: mov edx, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax; /* 0x170E8C6D: add dword ptr [ebp + 0xc], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x170E8C70: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x170E8C73: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8C1F; /* 0x170E8C75: jne 0x170e8c1f */
L_170E8C77:
    esi = POP32_VAL(esp); /* 0x170E8C77: pop esi */
L_170E8C78:
    edi = MEM32(ebp + 0xC); /* 0x170E8C78: mov edi, dword ptr [ebp + 0xc] */
    ecx = ebx * 4 + (-0x8); /* 0x170E8C7B: lea ecx, [ebx*4 - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x8); /* 0x170E8C82: sub ecx, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    eax = 0xABABABABu; /* 0x170E8C85: mov eax, 0xabababab */
    edx = ecx; /* 0x170E8C8A: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170E8C8C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170E8C8C: shr ecx, 2 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170E8C8F: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x170E8C91: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170E8C93: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x170E8C96: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E8C98: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x170E8C9A: pop edi */
L_170E8C9B:
    ebx = POP32_VAL(esp); /* 0x170E8C9B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E8C9C: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170E8C9D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170E8CA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8CA5u);

L_170E8CA5:
    edi = edi; /* 0x170E8CA5: mov edi, edi */
    PUSH32(esp, esi); /* 0x170E8CA7: push esi */
    PUSH32(esp, edi); /* 0x170E8CA8: push edi */
    PUSH32(esp, 0x12u); /* 0x170E8CA9: push 0x12 */
    esi = ecx; /* 0x170E8CAB: mov esi, ecx */
    RECOMP_CALL(sub_17129084); /* 0x170E8CAD: call 0x17129084 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E8CB2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x30) = eax; /* 0x170E8CB4: mov dword ptr [esi + 0x30], eax */
    MEM32(esi + 0x34) = eax; /* 0x170E8CB7: mov dword ptr [esi + 0x34], eax */
    MEM32(esi + 0x38) = eax; /* 0x170E8CBA: mov dword ptr [esi + 0x38], eax */
    MEM32(esi + 0x3C) = eax; /* 0x170E8CBD: mov dword ptr [esi + 0x3c], eax */
    MEM32(esi + 0x40) = eax; /* 0x170E8CC0: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x54) = eax; /* 0x170E8CC3: mov dword ptr [esi + 0x54], eax */
    MEM32(esi + 0x58) = eax; /* 0x170E8CC6: mov dword ptr [esi + 0x58], eax */
    MEM32(esi) = 0x1700B530u; /* 0x170E8CC9: mov dword ptr [esi], 0x1700b530 */
    PUSH32(esp, 8); /* 0x170E8CCF: push 8 */
    ecx = POP32_VAL(esp); /* 0x170E8CD1: pop ecx */
    edi = esi + 0x10; /* 0x170E8CD2: lea edi, [esi + 0x10] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170E8CD5: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = esi + 0x44; /* 0x170E8CD7: lea edi, [esi + 0x44] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x170E8CDA: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x170E8CDB: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x170E8CDC: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x170E8CDD: stosd dword ptr es:[edi], eax */
    edi = POP32_VAL(esp); /* 0x170E8CDE: pop edi */
    eax = esi; /* 0x170E8CDF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170E8CE1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170E8CE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_170E8CE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8CE8u);

L_170E8CE8:
    edi = edi; /* 0x170E8CE8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8CEA: push ebp */
    ebp = esp; /* 0x170E8CEB: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170E8CED: push ebx */
    PUSH32(esp, esi); /* 0x170E8CEE: push esi */
    PUSH32(esp, edi); /* 0x170E8CEF: push edi */
    PUSH32(esp, 0x12u); /* 0x170E8CF0: push 0x12 */
    ebx = ecx; /* 0x170E8CF2: mov ebx, ecx */
    RECOMP_CALL(sub_17129084); /* 0x170E8CF4: call 0x17129084 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x170E8CF9: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x170E8CFC: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 8); /* 0x170E8CFF: push 8 */
    MEM32(ebx) = 0x1700B530u; /* 0x170E8D01: mov dword ptr [ebx], 0x1700b530 */
    ecx = POP32_VAL(esp); /* 0x170E8D07: pop ecx */
    edi = ebx + 0x10; /* 0x170E8D08: lea edi, [ebx + 0x10] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170E8D0B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebx + 0x30) = eax; /* 0x170E8D0D: mov dword ptr [ebx + 0x30], eax */
    eax = MEM32(ebp + 0x10); /* 0x170E8D10: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x34) = eax; /* 0x170E8D13: mov dword ptr [ebx + 0x34], eax */
    eax = MEM32(ebp + 0x14); /* 0x170E8D16: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebx + 0x38) = eax; /* 0x170E8D19: mov dword ptr [ebx + 0x38], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E8D1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x3C) = eax; /* 0x170E8D1E: mov dword ptr [ebx + 0x3c], eax */
    MEM32(ebx + 0x40) = eax; /* 0x170E8D21: mov dword ptr [ebx + 0x40], eax */
    MEM32(ebx + 0x54) = eax; /* 0x170E8D24: mov dword ptr [ebx + 0x54], eax */
    MEM32(ebx + 0x58) = eax; /* 0x170E8D27: mov dword ptr [ebx + 0x58], eax */
    edi = ebx + 0x44; /* 0x170E8D2A: lea edi, [ebx + 0x44] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x170E8D2D: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x170E8D2E: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x170E8D2F: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x170E8D30: stosd dword ptr es:[edi], eax */
    edi = POP32_VAL(esp); /* 0x170E8D31: pop edi */
    esi = POP32_VAL(esp); /* 0x170E8D32: pop esi */
    eax = ebx; /* 0x170E8D33: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170E8D35: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170E8D36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170E8D37: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170E8D3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8D3Fu);

L_170E8D3F:
    edi = edi; /* 0x170E8D3F: mov edi, edi */
    PUSH32(esp, esi); /* 0x170E8D41: push esi */
    PUSH32(esp, 0x13u); /* 0x170E8D42: push 0x13 */
    esi = ecx; /* 0x170E8D44: mov esi, ecx */
    RECOMP_CALL(sub_17129084); /* 0x170E8D46: call 0x17129084 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E8D4B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = eax; /* 0x170E8D4D: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = eax; /* 0x170E8D50: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x18) = eax; /* 0x170E8D53: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = eax; /* 0x170E8D56: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x28) = eax; /* 0x170E8D59: mov dword ptr [esi + 0x28], eax */
    MEM32(esi) = 0x1700B53Cu; /* 0x170E8D5C: mov dword ptr [esi], 0x1700b53c */
    MEM32(esi + 0x20) = 0x000F0000u; /* 0x170E8D62: mov dword ptr [esi + 0x20], 0xf0000 */
    MEM32(esi + 0x24) = 0x00E40000u; /* 0x170E8D69: mov dword ptr [esi + 0x24], 0xe40000 */
    eax = esi; /* 0x170E8D70: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170E8D72: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170E8D73: ret  */
    RECOMP_REGS_OUT();
}

void sub_170E8D79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8D79u);

L_170E8D79:
    edi = edi; /* 0x170E8D79: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8D7B: push ebp */
    ebp = esp; /* 0x170E8D7C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170E8D7E: push esi */
    PUSH32(esp, 0x13u); /* 0x170E8D7F: push 0x13 */
    esi = ecx; /* 0x170E8D81: mov esi, ecx */
    RECOMP_CALL(sub_17129084); /* 0x170E8D83: call 0x17129084 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x170E8D88: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x10) = eax; /* 0x170E8D8B: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x170E8D8E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x14) = eax; /* 0x170E8D91: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(ebp + 0x10); /* 0x170E8D94: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x18) = eax; /* 0x170E8D97: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + 0x14); /* 0x170E8D9A: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x1C) = eax; /* 0x170E8D9D: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(ebp + 0x18); /* 0x170E8DA0: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x28) = eax; /* 0x170E8DA3: mov dword ptr [esi + 0x28], eax */
    MEM32(esi) = 0x1700B53Cu; /* 0x170E8DA6: mov dword ptr [esi], 0x1700b53c */
    MEM32(esi + 0x20) = 0x000F0000u; /* 0x170E8DAC: mov dword ptr [esi + 0x20], 0xf0000 */
    MEM32(esi + 0x24) = 0x00E40000u; /* 0x170E8DB3: mov dword ptr [esi + 0x24], 0xe40000 */
    eax = esi; /* 0x170E8DBA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170E8DBC: pop esi */
    ebp = POP32_VAL(esp); /* 0x170E8DBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170E8DBE: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170E8DC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8DC6u);

L_170E8DC6:
    edi = edi; /* 0x170E8DC6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8DC8: push ebp */
    ebp = esp; /* 0x170E8DC9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170E8DCB: push ecx */
    PUSH32(esp, ecx); /* 0x170E8DCC: push ecx */
    PUSH32(esp, ebx); /* 0x170E8DCD: push ebx */
    PUSH32(esp, 0x60u); /* 0x170E8DCE: push 0x60 */
    ebx = ecx; /* 0x170E8DD0: mov ebx, ecx */
    RECOMP_CALL(sub_170E2944); /* 0x170E8DD2: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E8DD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8DE7; /* 0x170E8DD9: je 0x170e8de7 */
L_170E8DDB:
    ecx = eax; /* 0x170E8DDB: mov ecx, eax */
    RECOMP_CALL(sub_170E8CA5); /* 0x170E8DDD: call 0x170e8ca5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x170E8DE2: mov dword ptr [ebp - 4], eax */
    goto L_170E8DEE; /* 0x170E8DE5: jmp 0x170e8dee */
L_170E8DE7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170E8DE7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x170E8DEB: mov eax, dword ptr [ebp - 4] */
L_170E8DEE:
    /* test eax, eax */ /* 0x170E8DEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8E87; /* 0x170E8DF0: je 0x170e8e87 */
L_170E8DF6:
    PUSH32(esp, esi); /* 0x170E8DF6: push esi */
    PUSH32(esp, edi); /* 0x170E8DF7: push edi */
    PUSH32(esp, 8); /* 0x170E8DF8: push 8 */
    esi = ebx + 0x10; /* 0x170E8DFA: lea esi, [ebx + 0x10] */
    edi = eax + 0x10; /* 0x170E8DFD: lea edi, [eax + 0x10] */
    ecx = POP32_VAL(esp); /* 0x170E8E00: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170E8E01: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebx + 0x30); /* 0x170E8E03: mov ecx, dword ptr [ebx + 0x30] */
    MEM32(eax + 0x30) = ecx; /* 0x170E8E06: mov dword ptr [eax + 0x30], ecx */
    ecx = MEM32(ebx + 0x34); /* 0x170E8E09: mov ecx, dword ptr [ebx + 0x34] */
    MEM32(eax + 0x34) = ecx; /* 0x170E8E0C: mov dword ptr [eax + 0x34], ecx */
    ecx = MEM32(ebx + 0x38); /* 0x170E8E0F: mov ecx, dword ptr [ebx + 0x38] */
    MEM32(eax + 0x38) = ecx; /* 0x170E8E12: mov dword ptr [eax + 0x38], ecx */
    ecx = MEM32(ebx + 0x54); /* 0x170E8E15: mov ecx, dword ptr [ebx + 0x54] */
    MEM32(eax + 0x54) = ecx; /* 0x170E8E18: mov dword ptr [eax + 0x54], ecx */
    ecx = MEM32(ebx + 0x58); /* 0x170E8E1B: mov ecx, dword ptr [ebx + 0x58] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E8E1E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x58) = ecx; /* 0x170E8E20: mov dword ptr [eax + 0x58], ecx */
    /* cmp MEM32(ebx + 0x3C), esi */ /* 0x170E8E23: cmp dword ptr [ebx + 0x3c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x3C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E8E3C; /* 0x170E8E26: je 0x170e8e3c */
L_170E8E28:
    ecx = MEM32(ebx + 0x3C); /* 0x170E8E28: mov ecx, dword ptr [ebx + 0x3c] */
    eax = MEM32(ecx); /* 0x170E8E2B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E8E2D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x170E8E30: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x170E8E32: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x3C) = eax; /* 0x170E8E35: mov dword ptr [ecx + 0x3c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E8E83; /* 0x170E8E38: je 0x170e8e83 */
L_170E8E3A:
    eax = ecx; /* 0x170E8E3A: mov eax, ecx */
L_170E8E3C:
    /* cmp MEM32(ebx + 0x40), esi */ /* 0x170E8E3C: cmp dword ptr [ebx + 0x40], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E8E55; /* 0x170E8E3F: je 0x170e8e55 */
L_170E8E41:
    ecx = MEM32(ebx + 0x40); /* 0x170E8E41: mov ecx, dword ptr [ebx + 0x40] */
    eax = MEM32(ecx); /* 0x170E8E44: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E8E46: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x170E8E49: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x170E8E4B: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x40) = eax; /* 0x170E8E4E: mov dword ptr [ecx + 0x40], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E8E83; /* 0x170E8E51: je 0x170e8e83 */
L_170E8E53:
    eax = ecx; /* 0x170E8E53: mov eax, ecx */
L_170E8E55:
    edi = eax; /* 0x170E8E55: mov edi, eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x170E8E57: mov dword ptr [ebp - 8], esi */
    esi = ebx + 0x44; /* 0x170E8E5A: lea esi, [ebx + 0x44] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x170E8E5D: sub edi, ebx */
    _flag_k = FK_CMP;
L_170E8E5F:
    /* cmp MEM32(esi), 0 */ /* 0x170E8E5F: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E8E75; /* 0x170E8E62: je 0x170e8e75 */
L_170E8E64:
    ecx = MEM32(esi); /* 0x170E8E64: mov ecx, dword ptr [esi] */
    eax = MEM32(ecx); /* 0x170E8E66: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E8E68: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E8E6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + esi) = eax; /* 0x170E8E6D: mov dword ptr [edi + esi], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8E83; /* 0x170E8E70: je 0x170e8e83 */
L_170E8E72:
    eax = MEM32(ebp + (-0x4)); /* 0x170E8E72: mov eax, dword ptr [ebp - 4] */
L_170E8E75:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x170E8E75: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x170E8E78: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), 4 */ /* 0x170E8E7B: cmp dword ptr [ebp - 8], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170E8E5F; /* 0x170E8E7F: jb 0x170e8e5f */
L_170E8E81:
    goto L_170E8E85; /* 0x170E8E81: jmp 0x170e8e85 */
L_170E8E83:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E8E83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E8E85:
    edi = POP32_VAL(esp); /* 0x170E8E85: pop edi */
    esi = POP32_VAL(esp); /* 0x170E8E86: pop esi */
L_170E8E87:
    ebx = POP32_VAL(esp); /* 0x170E8E87: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E8E88: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170E8E89: ret  */
    RECOMP_REGS_OUT();
}

void sub_170E8E8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8E8Fu);

L_170E8E8F:
    edi = edi; /* 0x170E8E8F: mov edi, edi */
    PUSH32(esp, esi); /* 0x170E8E91: push esi */
    PUSH32(esp, edi); /* 0x170E8E92: push edi */
    PUSH32(esp, 0x2Cu); /* 0x170E8E93: push 0x2c */
    edi = ecx; /* 0x170E8E95: mov edi, ecx */
    RECOMP_CALL(sub_170E2944); /* 0x170E8E97: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E8E9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8EAB; /* 0x170E8E9E: je 0x170e8eab */
L_170E8EA0:
    ecx = eax; /* 0x170E8EA0: mov ecx, eax */
    RECOMP_CALL(sub_170E8D3F); /* 0x170E8EA2: call 0x170e8d3f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170E8EA7: mov esi, eax */
    goto L_170E8EAD; /* 0x170E8EA9: jmp 0x170e8ead */
L_170E8EAB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E8EAB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E8EAD:
    /* test esi, esi */ /* 0x170E8EAD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8EEA; /* 0x170E8EAF: je 0x170e8eea */
L_170E8EB1:
    eax = MEM32(edi + 0x10); /* 0x170E8EB1: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x170E8EB4: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(edi + 0x14); /* 0x170E8EB7: mov eax, dword ptr [edi + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x170E8EBA: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(edi + 0x18); /* 0x170E8EBD: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x18) = eax; /* 0x170E8EC0: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(edi + 0x1C); /* 0x170E8EC3: mov eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x1C) = eax; /* 0x170E8EC6: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(edi + 0x20); /* 0x170E8EC9: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x20) = eax; /* 0x170E8ECC: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(edi + 0x24); /* 0x170E8ECF: mov eax, dword ptr [edi + 0x24] */
    MEM32(esi + 0x24) = eax; /* 0x170E8ED2: mov dword ptr [esi + 0x24], eax */
    /* cmp MEM32(edi + 0x28), 0 */ /* 0x170E8ED5: cmp dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E8EEE; /* 0x170E8ED9: je 0x170e8eee */
L_170E8EDB:
    ecx = MEM32(edi + 0x28); /* 0x170E8EDB: mov ecx, dword ptr [edi + 0x28] */
    eax = MEM32(ecx); /* 0x170E8EDE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E8EE0: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E8EE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x28) = eax; /* 0x170E8EE5: mov dword ptr [esi + 0x28], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8EEE; /* 0x170E8EE8: jne 0x170e8eee */
L_170E8EEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E8EEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170E8EF0; /* 0x170E8EEC: jmp 0x170e8ef0 */
L_170E8EEE:
    eax = esi; /* 0x170E8EEE: mov eax, esi */
L_170E8EF0:
    edi = POP32_VAL(esp); /* 0x170E8EF0: pop edi */
    esi = POP32_VAL(esp); /* 0x170E8EF1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170E8EF2: ret  */
    RECOMP_REGS_OUT();
}

void sub_170E8EF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8EF8u);

L_170E8EF8:
    edi = edi; /* 0x170E8EF8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8EFA: push ebp */
    ebp = esp; /* 0x170E8EFB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170E8EFD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170E8EFE: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x170E8F01: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E8F02: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x170E8F04: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8F0F; /* 0x170E8F06: jne 0x170e8f0f */
L_170E8F08:
    edi = 0x8876086Cu; /* 0x170E8F08: mov edi, 0x8876086c */
    goto L_170E8F33; /* 0x170E8F0D: jmp 0x170e8f33 */
L_170E8F0F:
    PUSH32(esp, 0x28u); /* 0x170E8F0F: push 0x28 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E8F11: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E8F16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170E8F18: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8F24; /* 0x170E8F19: je 0x170e8f24 */
L_170E8F1B:
    ecx = eax; /* 0x170E8F1B: mov ecx, eax */
    RECOMP_CALL(sub_170EBD9B); /* 0x170E8F1D: call 0x170ebd9b */
    RECOMP_FLAGS_IN();
    goto L_170E8F26; /* 0x170E8F22: jmp 0x170e8f26 */
L_170E8F24:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170E8F24: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E8F26:
    /* test eax, eax */ /* 0x170E8F26: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8F31; /* 0x170E8F28: jne 0x170e8f31 */
L_170E8F2A:
    edi = 0x8007000Eu; /* 0x170E8F2A: mov edi, 0x8007000e */
    goto L_170E8F33; /* 0x170E8F2F: jmp 0x170e8f33 */
L_170E8F31:
    MEM32(esi) = eax; /* 0x170E8F31: mov dword ptr [esi], eax */
L_170E8F33:
    eax = edi; /* 0x170E8F33: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x170E8F35: pop edi */
    esi = POP32_VAL(esp); /* 0x170E8F36: pop esi */
    ebp = POP32_VAL(esp); /* 0x170E8F37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170E8F38: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170E8F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E8F40u);

L_170E8F40:
    edi = edi; /* 0x170E8F40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E8F42: push ebp */
    ebp = esp; /* 0x170E8F43: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170E8F45: push ecx */
    eax = MEM32(ebp + 0x18); /* 0x170E8F46: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x170E8F49: push ebx */
    PUSH32(esp, esi); /* 0x170E8F4A: push esi */
    PUSH32(esp, edi); /* 0x170E8F4B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E8F4C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E8F4E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x170E8F50: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170E8F52: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E8F59; /* 0x170E8F55: je 0x170e8f59 */
L_170E8F57:
    MEM32(eax) = edi; /* 0x170E8F57: mov dword ptr [eax], edi */
L_170E8F59:
    ecx = MEM32(ebp + 0x1C); /* 0x170E8F59: mov ecx, dword ptr [ebp + 0x1c] */
    /* cmp ecx, edi */ /* 0x170E8F5C: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E8F62; /* 0x170E8F5E: je 0x170e8f62 */
L_170E8F60:
    MEM32(ecx) = edi; /* 0x170E8F60: mov dword ptr [ecx], edi */
L_170E8F62:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x170E8F62: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9012; /* 0x170E8F65: je 0x170e9012 */
L_170E8F6B:
    /* cmp eax, edi */ /* 0x170E8F6B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9012; /* 0x170E8F6D: je 0x170e9012 */
L_170E8F73:
    PUSH32(esp, 0x358u); /* 0x170E8F73: push 0x358 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E8F78: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170E8F7D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170E8F7F: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E8F8D; /* 0x170E8F80: je 0x170e8f8d */
L_170E8F82:
    ecx = eax; /* 0x170E8F82: mov ecx, eax */
    RECOMP_CALL(sub_170F2AE1); /* 0x170E8F84: call 0x170f2ae1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170E8F89: mov esi, eax */
    goto L_170E8F8F; /* 0x170E8F8B: jmp 0x170e8f8f */
L_170E8F8D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E8F8D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E8F8F:
    /* cmp esi, edi */ /* 0x170E8F8F: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E8F9D; /* 0x170E8F91: jne 0x170e8f9d */
L_170E8F93:
    ebx = 0x8007000Eu; /* 0x170E8F93: mov ebx, 0x8007000e */
    goto L_170E9035; /* 0x170E8F98: jmp 0x170e9035 */
L_170E8F9D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E8F9D: push dword ptr [ebp + 0x10] */
    edi = esi + 0x10; /* 0x170E8FA0: lea edi, [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E8FA3: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x170E8FA6: mov ecx, edi */
    PUSH32(esp, 0); /* 0x170E8FA8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170E8FAA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17172C47); /* 0x170E8FAD: call 0x17172c47 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E8FB2: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E8FB4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9017; /* 0x170E8FB6: jl 0x170e9017 */
L_170E8FB8:
    eax = ebp + (-0x4); /* 0x170E8FB8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x170E8FBB: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E8FBC: push dword ptr [ebp + 0x14] */
    ecx = esi + 0x2B8; /* 0x170E8FBF: lea ecx, [esi + 0x2b8] */
    PUSH32(esp, edi); /* 0x170E8FC5: push edi */
    RECOMP_CALL(sub_17128F89); /* 0x170E8FC6: call 0x17128f89 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E8FCB: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E8FCD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9017; /* 0x170E8FCF: jl 0x170e9017 */
L_170E8FD1:
    edi = esi + 0x28; /* 0x170E8FD1: lea edi, [esi + 0x28] */
    ecx = edi; /* 0x170E8FD4: mov ecx, edi */
    RECOMP_CALL(sub_17173AEA); /* 0x170E8FD6: call 0x17173aea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E8FDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E8FE6; /* 0x170E8FDD: je 0x170e8fe6 */
L_170E8FDF:
    ebx = 0x88760B59u; /* 0x170E8FDF: mov ebx, 0x88760b59 */
    goto L_170E9017; /* 0x170E8FE4: jmp 0x170e9017 */
L_170E8FE6:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170E8FE6: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x170E8FE9: mov ecx, esi */
    RECOMP_CALL(sub_170F388B); /* 0x170E8FEB: call 0x170f388b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E8FF0: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E8FF2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9017; /* 0x170E8FF4: jl 0x170e9017 */
L_170E8FF6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170E8FF6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x170E8FFA: mov ecx, edi */
    RECOMP_CALL(sub_17173AEA); /* 0x170E8FFC: call 0x17173aea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E9001: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E8FDF; /* 0x170E9003: jne 0x170e8fdf */
L_170E9005:
    eax = MEM32(ebp + 0x18); /* 0x170E9005: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = esi; /* 0x170E9008: mov dword ptr [eax], esi */
    eax = MEM32(esi); /* 0x170E900A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E900C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E900D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_170E9017; /* 0x170E9010: jmp 0x170e9017 */
L_170E9012:
    ebx = 0x8876086Cu; /* 0x170E9012: mov ebx, 0x8876086c */
L_170E9017:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E9017: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x170E9019: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9035; /* 0x170E901B: je 0x170e9035 */
L_170E901D:
    ecx = esi + 0x10; /* 0x170E901D: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_171711E9); /* 0x170E9020: call 0x171711e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x1C), edi */ /* 0x170E9025: cmp dword ptr [ebp + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9035; /* 0x170E9028: je 0x170e9035 */
L_170E902A:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170E902A: push dword ptr [ebp + 0x1c] */
    ecx = esi + 0x28; /* 0x170E902D: lea ecx, [esi + 0x28] */
    RECOMP_CALL(sub_17173A77); /* 0x170E9030: call 0x17173a77 */
    RECOMP_FLAGS_IN();
L_170E9035:
    /* cmp esi, edi */ /* 0x170E9035: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170E9037: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9042; /* 0x170E903A: je 0x170e9042 */
L_170E903C:
    eax = MEM32(esi); /* 0x170E903C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E903E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170E903F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_170E9042:
    edi = POP32_VAL(esp); /* 0x170E9042: pop edi */
    esi = POP32_VAL(esp); /* 0x170E9043: pop esi */
    eax = ebx; /* 0x170E9044: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170E9046: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E9047: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170E9048: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170E9050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E9050u);

L_170E9050:
    edi = edi; /* 0x170E9050: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E9052: push ebp */
    ebp = esp; /* 0x170E9053: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170E9055: push ecx */
    eax = MEM32(ebp + 0x18); /* 0x170E9056: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x170E9059: push ebx */
    PUSH32(esp, esi); /* 0x170E905A: push esi */
    PUSH32(esp, edi); /* 0x170E905B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E905C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E905E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x170E9060: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170E9062: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9069; /* 0x170E9065: je 0x170e9069 */
L_170E9067:
    MEM32(eax) = edi; /* 0x170E9067: mov dword ptr [eax], edi */
L_170E9069:
    ecx = MEM32(ebp + 0x1C); /* 0x170E9069: mov ecx, dword ptr [ebp + 0x1c] */
    /* cmp ecx, edi */ /* 0x170E906C: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9072; /* 0x170E906E: je 0x170e9072 */
L_170E9070:
    MEM32(ecx) = edi; /* 0x170E9070: mov dword ptr [ecx], edi */
L_170E9072:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x170E9072: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9122; /* 0x170E9075: je 0x170e9122 */
L_170E907B:
    /* cmp eax, edi */ /* 0x170E907B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9122; /* 0x170E907D: je 0x170e9122 */
L_170E9083:
    PUSH32(esp, 0x358u); /* 0x170E9083: push 0x358 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E9088: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170E908D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170E908F: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E909D; /* 0x170E9090: je 0x170e909d */
L_170E9092:
    ecx = eax; /* 0x170E9092: mov ecx, eax */
    RECOMP_CALL(sub_170F2AE1); /* 0x170E9094: call 0x170f2ae1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170E9099: mov esi, eax */
    goto L_170E909F; /* 0x170E909B: jmp 0x170e909f */
L_170E909D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E909D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E909F:
    /* cmp esi, edi */ /* 0x170E909F: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E90AD; /* 0x170E90A1: jne 0x170e90ad */
L_170E90A3:
    ebx = 0x8007000Eu; /* 0x170E90A3: mov ebx, 0x8007000e */
    goto L_170E9145; /* 0x170E90A8: jmp 0x170e9145 */
L_170E90AD:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E90AD: push dword ptr [ebp + 0x10] */
    edi = esi + 0x10; /* 0x170E90B0: lea edi, [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E90B3: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x170E90B6: mov ecx, edi */
    PUSH32(esp, 1); /* 0x170E90B8: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170E90BA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17172C47); /* 0x170E90BD: call 0x17172c47 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E90C2: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E90C4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9127; /* 0x170E90C6: jl 0x170e9127 */
L_170E90C8:
    eax = ebp + (-0x4); /* 0x170E90C8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x170E90CB: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E90CC: push dword ptr [ebp + 0x14] */
    ecx = esi + 0x2B8; /* 0x170E90CF: lea ecx, [esi + 0x2b8] */
    PUSH32(esp, edi); /* 0x170E90D5: push edi */
    RECOMP_CALL(sub_17128F89); /* 0x170E90D6: call 0x17128f89 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E90DB: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E90DD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9127; /* 0x170E90DF: jl 0x170e9127 */
L_170E90E1:
    edi = esi + 0x28; /* 0x170E90E1: lea edi, [esi + 0x28] */
    ecx = edi; /* 0x170E90E4: mov ecx, edi */
    RECOMP_CALL(sub_17173AEA); /* 0x170E90E6: call 0x17173aea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E90EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E90F6; /* 0x170E90ED: je 0x170e90f6 */
L_170E90EF:
    ebx = 0x88760B59u; /* 0x170E90EF: mov ebx, 0x88760b59 */
    goto L_170E9127; /* 0x170E90F4: jmp 0x170e9127 */
L_170E90F6:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170E90F6: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x170E90F9: mov ecx, esi */
    RECOMP_CALL(sub_170F388B); /* 0x170E90FB: call 0x170f388b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9100: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9102: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9127; /* 0x170E9104: jl 0x170e9127 */
L_170E9106:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170E9106: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x170E910A: mov ecx, edi */
    RECOMP_CALL(sub_17173AEA); /* 0x170E910C: call 0x17173aea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E9111: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E90EF; /* 0x170E9113: jne 0x170e90ef */
L_170E9115:
    eax = MEM32(ebp + 0x18); /* 0x170E9115: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = esi; /* 0x170E9118: mov dword ptr [eax], esi */
    eax = MEM32(esi); /* 0x170E911A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E911C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E911D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_170E9127; /* 0x170E9120: jmp 0x170e9127 */
L_170E9122:
    ebx = 0x8876086Cu; /* 0x170E9122: mov ebx, 0x8876086c */
L_170E9127:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E9127: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x170E9129: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9145; /* 0x170E912B: je 0x170e9145 */
L_170E912D:
    ecx = esi + 0x10; /* 0x170E912D: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_171711E9); /* 0x170E9130: call 0x171711e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x1C), edi */ /* 0x170E9135: cmp dword ptr [ebp + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9145; /* 0x170E9138: je 0x170e9145 */
L_170E913A:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170E913A: push dword ptr [ebp + 0x1c] */
    ecx = esi + 0x28; /* 0x170E913D: lea ecx, [esi + 0x28] */
    RECOMP_CALL(sub_17173A77); /* 0x170E9140: call 0x17173a77 */
    RECOMP_FLAGS_IN();
L_170E9145:
    /* cmp esi, edi */ /* 0x170E9145: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170E9147: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9152; /* 0x170E914A: je 0x170e9152 */
L_170E914C:
    eax = MEM32(esi); /* 0x170E914C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E914E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170E914F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_170E9152:
    edi = POP32_VAL(esp); /* 0x170E9152: pop edi */
    esi = POP32_VAL(esp); /* 0x170E9153: pop esi */
    eax = ebx; /* 0x170E9154: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170E9156: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E9157: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170E9158: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170E9160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E9160u);

L_170E9160:
    edi = edi; /* 0x170E9160: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E9162: push ebp */
    ebp = esp; /* 0x170E9163: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170E9165: push ecx */
    eax = MEM32(ebp + 0x1C); /* 0x170E9166: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x170E9169: push ebx */
    PUSH32(esp, esi); /* 0x170E916A: push esi */
    PUSH32(esp, edi); /* 0x170E916B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E916C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E916E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x170E9170: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170E9172: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9179; /* 0x170E9175: je 0x170e9179 */
L_170E9177:
    MEM32(eax) = edi; /* 0x170E9177: mov dword ptr [eax], edi */
L_170E9179:
    ecx = MEM32(ebp + 0x20); /* 0x170E9179: mov ecx, dword ptr [ebp + 0x20] */
    /* cmp ecx, edi */ /* 0x170E917C: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9182; /* 0x170E917E: je 0x170e9182 */
L_170E9180:
    MEM32(ecx) = edi; /* 0x170E9180: mov dword ptr [ecx], edi */
L_170E9182:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x170E9182: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9235; /* 0x170E9185: je 0x170e9235 */
L_170E918B:
    /* cmp eax, edi */ /* 0x170E918B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9235; /* 0x170E918D: je 0x170e9235 */
L_170E9193:
    PUSH32(esp, 0x358u); /* 0x170E9193: push 0x358 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E9198: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170E919D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170E919F: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E91AD; /* 0x170E91A0: je 0x170e91ad */
L_170E91A2:
    ecx = eax; /* 0x170E91A2: mov ecx, eax */
    RECOMP_CALL(sub_170F2AE1); /* 0x170E91A4: call 0x170f2ae1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170E91A9: mov esi, eax */
    goto L_170E91AF; /* 0x170E91AB: jmp 0x170e91af */
L_170E91AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E91AD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E91AF:
    /* cmp esi, edi */ /* 0x170E91AF: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E91BD; /* 0x170E91B1: jne 0x170e91bd */
L_170E91B3:
    ebx = 0x8007000Eu; /* 0x170E91B3: mov ebx, 0x8007000e */
    goto L_170E9258; /* 0x170E91B8: jmp 0x170e9258 */
L_170E91BD:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E91BD: push dword ptr [ebp + 0x14] */
    edi = esi + 0x10; /* 0x170E91C0: lea edi, [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E91C3: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x170E91C6: mov ecx, edi */
    PUSH32(esp, 0); /* 0x170E91C8: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E91CA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170E91CD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17172CCA); /* 0x170E91D0: call 0x17172cca */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E91D5: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E91D7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E923A; /* 0x170E91D9: jl 0x170e923a */
L_170E91DB:
    eax = ebp + (-0x4); /* 0x170E91DB: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x170E91DE: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170E91DF: push dword ptr [ebp + 0x18] */
    ecx = esi + 0x2B8; /* 0x170E91E2: lea ecx, [esi + 0x2b8] */
    PUSH32(esp, edi); /* 0x170E91E8: push edi */
    RECOMP_CALL(sub_17128F89); /* 0x170E91E9: call 0x17128f89 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E91EE: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E91F0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E923A; /* 0x170E91F2: jl 0x170e923a */
L_170E91F4:
    edi = esi + 0x28; /* 0x170E91F4: lea edi, [esi + 0x28] */
    ecx = edi; /* 0x170E91F7: mov ecx, edi */
    RECOMP_CALL(sub_17173AEA); /* 0x170E91F9: call 0x17173aea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E91FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9209; /* 0x170E9200: je 0x170e9209 */
L_170E9202:
    ebx = 0x88760B59u; /* 0x170E9202: mov ebx, 0x88760b59 */
    goto L_170E923A; /* 0x170E9207: jmp 0x170e923a */
L_170E9209:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170E9209: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x170E920C: mov ecx, esi */
    RECOMP_CALL(sub_170F388B); /* 0x170E920E: call 0x170f388b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9213: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9215: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E923A; /* 0x170E9217: jl 0x170e923a */
L_170E9219:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170E9219: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x170E921D: mov ecx, edi */
    RECOMP_CALL(sub_17173AEA); /* 0x170E921F: call 0x17173aea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E9224: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E9202; /* 0x170E9226: jne 0x170e9202 */
L_170E9228:
    eax = MEM32(ebp + 0x1C); /* 0x170E9228: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = esi; /* 0x170E922B: mov dword ptr [eax], esi */
    eax = MEM32(esi); /* 0x170E922D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E922F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E9230: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_170E923A; /* 0x170E9233: jmp 0x170e923a */
L_170E9235:
    ebx = 0x8876086Cu; /* 0x170E9235: mov ebx, 0x8876086c */
L_170E923A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E923A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x170E923C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9258; /* 0x170E923E: je 0x170e9258 */
L_170E9240:
    ecx = esi + 0x10; /* 0x170E9240: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_171711E9); /* 0x170E9243: call 0x171711e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x20), edi */ /* 0x170E9248: cmp dword ptr [ebp + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9258; /* 0x170E924B: je 0x170e9258 */
L_170E924D:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170E924D: push dword ptr [ebp + 0x20] */
    ecx = esi + 0x28; /* 0x170E9250: lea ecx, [esi + 0x28] */
    RECOMP_CALL(sub_17173A77); /* 0x170E9253: call 0x17173a77 */
    RECOMP_FLAGS_IN();
L_170E9258:
    /* cmp esi, edi */ /* 0x170E9258: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170E925A: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9265; /* 0x170E925D: je 0x170e9265 */
L_170E925F:
    eax = MEM32(esi); /* 0x170E925F: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E9261: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170E9262: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_170E9265:
    edi = POP32_VAL(esp); /* 0x170E9265: pop edi */
    esi = POP32_VAL(esp); /* 0x170E9266: pop esi */
    eax = ebx; /* 0x170E9267: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170E9269: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E926A: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x170E926B: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_170E9273(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E9273u);

L_170E9273:
    edi = edi; /* 0x170E9273: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E9275: push ebp */
    ebp = esp; /* 0x170E9276: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170E9278: push ecx */
    eax = MEM32(ebp + 0x1C); /* 0x170E9279: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x170E927C: push ebx */
    PUSH32(esp, esi); /* 0x170E927D: push esi */
    PUSH32(esp, edi); /* 0x170E927E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E927F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E9281: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x170E9283: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170E9285: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E928C; /* 0x170E9288: je 0x170e928c */
L_170E928A:
    MEM32(eax) = edi; /* 0x170E928A: mov dword ptr [eax], edi */
L_170E928C:
    ecx = MEM32(ebp + 0x20); /* 0x170E928C: mov ecx, dword ptr [ebp + 0x20] */
    /* cmp ecx, edi */ /* 0x170E928F: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9295; /* 0x170E9291: je 0x170e9295 */
L_170E9293:
    MEM32(ecx) = edi; /* 0x170E9293: mov dword ptr [ecx], edi */
L_170E9295:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x170E9295: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9348; /* 0x170E9298: je 0x170e9348 */
L_170E929E:
    /* cmp eax, edi */ /* 0x170E929E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9348; /* 0x170E92A0: je 0x170e9348 */
L_170E92A6:
    PUSH32(esp, 0x358u); /* 0x170E92A6: push 0x358 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E92AB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170E92B0: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170E92B2: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E92C0; /* 0x170E92B3: je 0x170e92c0 */
L_170E92B5:
    ecx = eax; /* 0x170E92B5: mov ecx, eax */
    RECOMP_CALL(sub_170F2AE1); /* 0x170E92B7: call 0x170f2ae1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170E92BC: mov esi, eax */
    goto L_170E92C2; /* 0x170E92BE: jmp 0x170e92c2 */
L_170E92C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E92C0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E92C2:
    /* cmp esi, edi */ /* 0x170E92C2: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E92D0; /* 0x170E92C4: jne 0x170e92d0 */
L_170E92C6:
    ebx = 0x8007000Eu; /* 0x170E92C6: mov ebx, 0x8007000e */
    goto L_170E936B; /* 0x170E92CB: jmp 0x170e936b */
L_170E92D0:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E92D0: push dword ptr [ebp + 0x14] */
    edi = esi + 0x10; /* 0x170E92D3: lea edi, [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E92D6: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x170E92D9: mov ecx, edi */
    PUSH32(esp, 1); /* 0x170E92DB: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E92DD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170E92E0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17172CCA); /* 0x170E92E3: call 0x17172cca */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E92E8: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E92EA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E934D; /* 0x170E92EC: jl 0x170e934d */
L_170E92EE:
    eax = ebp + (-0x4); /* 0x170E92EE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x170E92F1: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170E92F2: push dword ptr [ebp + 0x18] */
    ecx = esi + 0x2B8; /* 0x170E92F5: lea ecx, [esi + 0x2b8] */
    PUSH32(esp, edi); /* 0x170E92FB: push edi */
    RECOMP_CALL(sub_17128F89); /* 0x170E92FC: call 0x17128f89 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9301: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9303: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E934D; /* 0x170E9305: jl 0x170e934d */
L_170E9307:
    edi = esi + 0x28; /* 0x170E9307: lea edi, [esi + 0x28] */
    ecx = edi; /* 0x170E930A: mov ecx, edi */
    RECOMP_CALL(sub_17173AEA); /* 0x170E930C: call 0x17173aea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E9311: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E931C; /* 0x170E9313: je 0x170e931c */
L_170E9315:
    ebx = 0x88760B59u; /* 0x170E9315: mov ebx, 0x88760b59 */
    goto L_170E934D; /* 0x170E931A: jmp 0x170e934d */
L_170E931C:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170E931C: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x170E931F: mov ecx, esi */
    RECOMP_CALL(sub_170F388B); /* 0x170E9321: call 0x170f388b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9326: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9328: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E934D; /* 0x170E932A: jl 0x170e934d */
L_170E932C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170E932C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x170E9330: mov ecx, edi */
    RECOMP_CALL(sub_17173AEA); /* 0x170E9332: call 0x17173aea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E9337: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E9315; /* 0x170E9339: jne 0x170e9315 */
L_170E933B:
    eax = MEM32(ebp + 0x1C); /* 0x170E933B: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = esi; /* 0x170E933E: mov dword ptr [eax], esi */
    eax = MEM32(esi); /* 0x170E9340: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E9342: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E9343: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_170E934D; /* 0x170E9346: jmp 0x170e934d */
L_170E9348:
    ebx = 0x8876086Cu; /* 0x170E9348: mov ebx, 0x8876086c */
L_170E934D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E934D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x170E934F: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E936B; /* 0x170E9351: je 0x170e936b */
L_170E9353:
    ecx = esi + 0x10; /* 0x170E9353: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_171711E9); /* 0x170E9356: call 0x171711e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x20), edi */ /* 0x170E935B: cmp dword ptr [ebp + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E936B; /* 0x170E935E: je 0x170e936b */
L_170E9360:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170E9360: push dword ptr [ebp + 0x20] */
    ecx = esi + 0x28; /* 0x170E9363: lea ecx, [esi + 0x28] */
    RECOMP_CALL(sub_17173A77); /* 0x170E9366: call 0x17173a77 */
    RECOMP_FLAGS_IN();
L_170E936B:
    /* cmp esi, edi */ /* 0x170E936B: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170E936D: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9378; /* 0x170E9370: je 0x170e9378 */
L_170E9372:
    eax = MEM32(esi); /* 0x170E9372: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E9374: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170E9375: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_170E9378:
    edi = POP32_VAL(esp); /* 0x170E9378: pop edi */
    esi = POP32_VAL(esp); /* 0x170E9379: pop esi */
    eax = ebx; /* 0x170E937A: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170E937C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E937D: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x170E937E: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_170E9386(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E9386u);

L_170E9386:
    edi = edi; /* 0x170E9386: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E9388: push ebp */
    ebp = esp; /* 0x170E9389: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170E938B: push ecx */
    eax = MEM32(ebp + 0x1C); /* 0x170E938C: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x170E938F: push ebx */
    PUSH32(esp, esi); /* 0x170E9390: push esi */
    PUSH32(esp, edi); /* 0x170E9391: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E9392: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E9394: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x170E9396: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170E9398: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E939F; /* 0x170E939B: je 0x170e939f */
L_170E939D:
    MEM32(eax) = edi; /* 0x170E939D: mov dword ptr [eax], edi */
L_170E939F:
    ecx = MEM32(ebp + 0x20); /* 0x170E939F: mov ecx, dword ptr [ebp + 0x20] */
    /* cmp ecx, edi */ /* 0x170E93A2: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E93A8; /* 0x170E93A4: je 0x170e93a8 */
L_170E93A6:
    MEM32(ecx) = edi; /* 0x170E93A6: mov dword ptr [ecx], edi */
L_170E93A8:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x170E93A8: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9459; /* 0x170E93AB: je 0x170e9459 */
L_170E93B1:
    /* cmp eax, edi */ /* 0x170E93B1: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9459; /* 0x170E93B3: je 0x170e9459 */
L_170E93B9:
    PUSH32(esp, 0x358u); /* 0x170E93B9: push 0x358 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E93BE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170E93C3: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170E93C5: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E93D3; /* 0x170E93C6: je 0x170e93d3 */
L_170E93C8:
    ecx = eax; /* 0x170E93C8: mov ecx, eax */
    RECOMP_CALL(sub_170F2AE1); /* 0x170E93CA: call 0x170f2ae1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170E93CF: mov esi, eax */
    goto L_170E93D5; /* 0x170E93D1: jmp 0x170e93d5 */
L_170E93D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E93D3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E93D5:
    /* cmp esi, edi */ /* 0x170E93D5: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E93E3; /* 0x170E93D7: jne 0x170e93e3 */
L_170E93D9:
    ebx = 0x8007000Eu; /* 0x170E93D9: mov ebx, 0x8007000e */
    goto L_170E947C; /* 0x170E93DE: jmp 0x170e947c */
L_170E93E3:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E93E3: push dword ptr [ebp + 0x14] */
    edi = esi + 0x10; /* 0x170E93E6: lea edi, [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E93E9: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x170E93EC: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E93EE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170E93F1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17172D42); /* 0x170E93F4: call 0x17172d42 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E93F9: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E93FB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E945E; /* 0x170E93FD: jl 0x170e945e */
L_170E93FF:
    eax = ebp + (-0x4); /* 0x170E93FF: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x170E9402: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170E9403: push dword ptr [ebp + 0x18] */
    ecx = esi + 0x2B8; /* 0x170E9406: lea ecx, [esi + 0x2b8] */
    PUSH32(esp, edi); /* 0x170E940C: push edi */
    RECOMP_CALL(sub_17128F89); /* 0x170E940D: call 0x17128f89 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9412: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9414: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E945E; /* 0x170E9416: jl 0x170e945e */
L_170E9418:
    edi = esi + 0x28; /* 0x170E9418: lea edi, [esi + 0x28] */
    ecx = edi; /* 0x170E941B: mov ecx, edi */
    RECOMP_CALL(sub_17173AEA); /* 0x170E941D: call 0x17173aea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E9422: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E942D; /* 0x170E9424: je 0x170e942d */
L_170E9426:
    ebx = 0x88760B59u; /* 0x170E9426: mov ebx, 0x88760b59 */
    goto L_170E945E; /* 0x170E942B: jmp 0x170e945e */
L_170E942D:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170E942D: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x170E9430: mov ecx, esi */
    RECOMP_CALL(sub_170F388B); /* 0x170E9432: call 0x170f388b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9437: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9439: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E945E; /* 0x170E943B: jl 0x170e945e */
L_170E943D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170E943D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x170E9441: mov ecx, edi */
    RECOMP_CALL(sub_17173AEA); /* 0x170E9443: call 0x17173aea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E9448: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E9426; /* 0x170E944A: jne 0x170e9426 */
L_170E944C:
    eax = MEM32(ebp + 0x1C); /* 0x170E944C: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = esi; /* 0x170E944F: mov dword ptr [eax], esi */
    eax = MEM32(esi); /* 0x170E9451: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E9453: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E9454: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_170E945E; /* 0x170E9457: jmp 0x170e945e */
L_170E9459:
    ebx = 0x8876086Cu; /* 0x170E9459: mov ebx, 0x8876086c */
L_170E945E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170E945E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x170E9460: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E947C; /* 0x170E9462: je 0x170e947c */
L_170E9464:
    ecx = esi + 0x10; /* 0x170E9464: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_171711E9); /* 0x170E9467: call 0x171711e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x20), edi */ /* 0x170E946C: cmp dword ptr [ebp + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E947C; /* 0x170E946F: je 0x170e947c */
L_170E9471:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170E9471: push dword ptr [ebp + 0x20] */
    ecx = esi + 0x28; /* 0x170E9474: lea ecx, [esi + 0x28] */
    RECOMP_CALL(sub_17173A77); /* 0x170E9477: call 0x17173a77 */
    RECOMP_FLAGS_IN();
L_170E947C:
    /* cmp esi, edi */ /* 0x170E947C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170E947E: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9489; /* 0x170E9481: je 0x170e9489 */
L_170E9483:
    eax = MEM32(esi); /* 0x170E9483: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E9485: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x170E9486: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_170E9489:
    edi = POP32_VAL(esp); /* 0x170E9489: pop edi */
    esi = POP32_VAL(esp); /* 0x170E948A: pop esi */
    eax = ebx; /* 0x170E948B: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170E948D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E948E: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x170E948F: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_170E9497(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E9497u);

L_170E9497:
    edi = edi; /* 0x170E9497: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E9499: push ebp */
    ebp = esp; /* 0x170E949A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x170E949C: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170E949F: push ebx */
    PUSH32(esp, esi); /* 0x170E94A0: push esi */
    PUSH32(esp, edi); /* 0x170E94A1: push edi */
    ecx = ebp + (-0x28); /* 0x170E94A2: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1721BA18); /* 0x170E94A5: call 0x1721ba18 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x1C); /* 0x170E94AA: mov edi, dword ptr [ebp + 0x1c] */
    eax = edi; /* 0x170E94AD: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x170E94AF: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E94B4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x1C) = eax; /* 0x170E94B6: mov dword ptr [ebp + 0x1c], eax */
    eax = MEM32(ebp + 0x24); /* 0x170E94B9: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFF7FFu);
    edi = edi & 0xFFFFF7FFu; /* 0x170E94BC: and edi, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x170E94C2: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = esi; /* 0x170E94C4: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x170E94C7: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x170E94CA: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x14)) = esi; /* 0x170E94CD: mov dword ptr [ebp - 0x14], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E94D4; /* 0x170E94D0: je 0x170e94d4 */
L_170E94D2:
    MEM32(eax) = esi; /* 0x170E94D2: mov dword ptr [eax], esi */
L_170E94D4:
    eax = MEM32(ebp + 0x28); /* 0x170E94D4: mov eax, dword ptr [ebp + 0x28] */
    /* cmp eax, esi */ /* 0x170E94D7: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E94DD; /* 0x170E94D9: je 0x170e94dd */
L_170E94DB:
    MEM32(eax) = esi; /* 0x170E94DB: mov dword ptr [eax], esi */
L_170E94DD:
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x170E94DD: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E967D; /* 0x170E94E0: je 0x170e967d */
L_170E94E6:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x170E94E6: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E967D; /* 0x170E94E9: je 0x170e967d */
L_170E94EF:
    eax = MEM32(ebp + 0x14); /* 0x170E94EF: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, esi */ /* 0x170E94F2: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E951A; /* 0x170E94F4: jne 0x170e951a */
L_170E94F6:
    PUSH32(esp, esi); /* 0x170E94F6: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E94F7: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x28); /* 0x170E94FA: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1721BA2F); /* 0x170E94FD: call 0x1721ba2f */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9502: mov ebx, eax */
    /* cmp ebx, esi */ /* 0x170E9504: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170E96B1; /* 0x170E9506: jl 0x170e96b1 */
L_170E950C:
    eax = MEM32(ebp + (-0x1C)); /* 0x170E950C: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x170E950F: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x170E9512: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x10)) = eax; /* 0x170E9515: mov dword ptr [ebp - 0x10], eax */
    goto L_170E9536; /* 0x170E9518: jmp 0x170e9536 */
L_170E951A:
    ecx = MEM32(eax); /* 0x170E951A: mov ecx, dword ptr [eax] */
    edx = ebp + (-0xC); /* 0x170E951C: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x170E951F: push edx */
    edx = ebp + (-0x10); /* 0x170E9520: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x170E9523: push edx */
    PUSH32(esp, esi); /* 0x170E9524: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E9525: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x170E9528: push esi */
    PUSH32(esp, eax); /* 0x170E9529: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x170E952A: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E952C: mov ebx, eax */
    /* cmp ebx, esi */ /* 0x170E952E: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170E96B1; /* 0x170E9530: jl 0x170e96b1 */
L_170E9536:
    PUSH32(esp, 0x154u); /* 0x170E9536: push 0x154 */
    MEM32(ebp + (-0x14)) = 1; /* 0x170E953B: mov dword ptr [ebp - 0x14], 1 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E9542: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x170E9547: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170E9549: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E955A; /* 0x170E954A: je 0x170e955a */
L_170E954C:
    ecx = eax; /* 0x170E954C: mov ecx, eax */
    RECOMP_CALL(sub_170FAEB0); /* 0x170E954E: call 0x170faeb0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170E9553: mov esi, eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x170E9555: mov dword ptr [ebp - 8], esi */
    goto L_170E955D; /* 0x170E9558: jmp 0x170e955d */
L_170E955A:
    MEM32(ebp + (-0x8)) = esi; /* 0x170E955A: mov dword ptr [ebp - 8], esi */
L_170E955D:
    /* test esi, esi */ /* 0x170E955D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E956B; /* 0x170E955F: jne 0x170e956b */
L_170E9561:
    ebx = 0x8007000Eu; /* 0x170E9561: mov ebx, 0x8007000e */
    goto L_170E9688; /* 0x170E9566: jmp 0x170e9688 */
L_170E956B:
    /* cmp MEM32(ebp + (-0xC)), 4 */ /* 0x170E956B: cmp dword ptr [ebp - 0xc], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170E957B; /* 0x170E956F: jae 0x170e957b */
L_170E9571:
    ebx = 0x80004005u; /* 0x170E9571: mov ebx, 0x80004005 */
    goto L_170E9688; /* 0x170E9576: jmp 0x170e9688 */
L_170E957B:
    eax = MEM32(ebp + (-0x10)); /* 0x170E957B: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax), 0xFEFF0901u */ /* 0x170E957E: cmp dword ptr [eax], 0xfeff0901 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFEFF0901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E95F7; /* 0x170E9584: je 0x170e95f7 */
L_170E9586:
    ebx = MEM32(ebp + 0x14); /* 0x170E9586: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x170E9589: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E9597; /* 0x170E958B: jne 0x170e9597 */
L_170E958D:
    ecx = ebp + (-0x28); /* 0x170E958D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1721BCC5); /* 0x170E9590: call 0x1721bcc5 */
    RECOMP_FLAGS_IN();
    goto L_170E959E; /* 0x170E9595: jmp 0x170e959e */
L_170E9597:
    ecx = MEM32(ebx); /* 0x170E9597: mov ecx, dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x170E9599: push eax */
    PUSH32(esp, ebx); /* 0x170E959A: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170E959B: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_170E959E:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x170E959E: push dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x170E95A1: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x18); /* 0x170E95A5: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x170E95A8: push eax */
    PUSH32(esp, edi); /* 0x170E95A9: push edi */
    PUSH32(esp, ebx); /* 0x170E95AA: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E95AB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E95AE: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_170E8F40); /* 0x170E95B1: call 0x170e8f40 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E95B6: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E95B8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E96A2; /* 0x170E95BA: jl 0x170e96a2 */
L_170E95C0:
    ebx = MEM32(ebp + 0x28); /* 0x170E95C0: mov ebx, dword ptr [ebp + 0x28] */
    /* test ebx, ebx */ /* 0x170E95C3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E95D6; /* 0x170E95C5: je 0x170e95d6 */
L_170E95C7:
    eax = MEM32(ebx); /* 0x170E95C7: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x170E95C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E95D6; /* 0x170E95CB: je 0x170e95d6 */
L_170E95CD:
    ecx = MEM32(eax); /* 0x170E95CD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E95CF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E95D0: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x170E95D3: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E95D6:
    eax = MEM32(ebp + (-0x18)); /* 0x170E95D6: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(eax); /* 0x170E95D9: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x170E95DB: push ebx */
    edx = ebp + (-0x4); /* 0x170E95DC: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x170E95DF: push edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFE7u);
    edi = edi & 0xFFFFFFE7u; /* 0x170E95E0: and edi, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x170E95E3: push edi */
    PUSH32(esp, eax); /* 0x170E95E4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xEC)); /* 0x170E95E5: call dword ptr [ecx + 0xec] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E95EB: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E95ED: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E96A2; /* 0x170E95EF: jl 0x170e96a2 */
L_170E95F5:
    goto L_170E963B; /* 0x170E95F5: jmp 0x170e963b */
L_170E95F7:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x170E95F7: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9688; /* 0x170E95FB: je 0x170e9688 */
L_170E9601:
    eax = ebp + (-0x4); /* 0x170E9601: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x170E9604: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170E9605: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1702BAA3); /* 0x170E9608: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E960D: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E960F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9688; /* 0x170E9611: jl 0x170e9688 */
L_170E9613:
    eax = MEM32(ebp + (-0xC)); /* 0x170E9613: mov eax, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + (-0x10)); /* 0x170E9616: mov esi, dword ptr [ebp - 0x10] */
    MEM32(ebp + 0xC) = eax; /* 0x170E9619: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x170E961C: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170E961F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9621: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170E9622: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170E9625: mov edi, eax */
    eax = MEM32(ebp + 0xC); /* 0x170E9627: mov eax, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x170E962A: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170E962C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170E962C: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170E962F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170E9631: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170E9633: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170E9636: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + (-0x8)); /* 0x170E9638: mov esi, dword ptr [ebp - 8] */
L_170E963B:
    edi = MEM32(ebp + 0x24); /* 0x170E963B: mov edi, dword ptr [ebp + 0x24] */
    /* test edi, edi */ /* 0x170E963E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9682; /* 0x170E9640: je 0x170e9682 */
L_170E9642:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170E9642: push dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x170E9645: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0xC; /* 0x170E9649: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x170E964C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170E964D: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x170E9650: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170E9652: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170E9655: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170E9658: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170F95B8); /* 0x170E965B: call 0x170f95b8 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9660: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9662: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9682; /* 0x170E9664: jl 0x170e9682 */
L_170E9666:
    ecx = esi; /* 0x170E9666: mov ecx, esi */
    RECOMP_CALL(sub_170F7B38); /* 0x170E9668: call 0x170f7b38 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E966D: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E966F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9682; /* 0x170E9671: jl 0x170e9682 */
L_170E9673:
    MEM32(edi) = esi; /* 0x170E9673: mov dword ptr [edi], esi */
    eax = MEM32(esi); /* 0x170E9675: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E9677: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E9678: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_170E9682; /* 0x170E967B: jmp 0x170e9682 */
L_170E967D:
    ebx = 0x8876086Cu; /* 0x170E967D: mov ebx, 0x8876086c */
L_170E9682:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x170E9682: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E96A2; /* 0x170E9686: je 0x170e96a2 */
L_170E9688:
    eax = MEM32(ebp + 0x14); /* 0x170E9688: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x170E968B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E9699; /* 0x170E968D: jne 0x170e9699 */
L_170E968F:
    ecx = ebp + (-0x28); /* 0x170E968F: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1721BCC5); /* 0x170E9692: call 0x1721bcc5 */
    RECOMP_FLAGS_IN();
    goto L_170E96A2; /* 0x170E9697: jmp 0x170e96a2 */
L_170E9699:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x170E9699: push dword ptr [ebp - 0x10] */
    ecx = MEM32(eax); /* 0x170E969C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E969E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170E969F: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_170E96A2:
    eax = MEM32(ebp + (-0x18)); /* 0x170E96A2: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E96A5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x170E96A7: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E96B1; /* 0x170E96A9: je 0x170e96b1 */
L_170E96AB:
    ecx = MEM32(eax); /* 0x170E96AB: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E96AD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E96AE: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170E96B1:
    eax = MEM32(ebp + (-0x4)); /* 0x170E96B1: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, esi */ /* 0x170E96B4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E96C1; /* 0x170E96B6: je 0x170e96c1 */
L_170E96B8:
    ecx = MEM32(eax); /* 0x170E96B8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E96BA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E96BB: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = esi; /* 0x170E96BE: mov dword ptr [ebp - 4], esi */
L_170E96C1:
    eax = MEM32(ebp + (-0x8)); /* 0x170E96C1: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, esi */ /* 0x170E96C4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E96CE; /* 0x170E96C6: je 0x170e96ce */
L_170E96C8:
    ecx = MEM32(eax); /* 0x170E96C8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E96CA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E96CB: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170E96CE:
    ecx = ebp + (-0x28); /* 0x170E96CE: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1721BD0D); /* 0x170E96D1: call 0x1721bd0d */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x170E96D6: pop edi */
    esi = POP32_VAL(esp); /* 0x170E96D7: pop esi */
    eax = ebx; /* 0x170E96D8: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170E96DA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E96DB: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x170E96DC: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_170E96E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E96E4u);

L_170E96E4:
    edi = edi; /* 0x170E96E4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E96E6: push ebp */
    ebp = esp; /* 0x170E96E7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14Cu; /* 0x170E96E9: sub esp, 0x14c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x170E96EF: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x170E96F4: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x170E96F7: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x134)) = eax; /* 0x170E96FA: mov dword ptr [ebp - 0x134], eax */
    eax = MEM32(ebp + 0x10); /* 0x170E9700: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x118)) = eax; /* 0x170E9703: mov dword ptr [ebp - 0x118], eax */
    eax = MEM32(ebp + 0x14); /* 0x170E9709: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x11C)) = eax; /* 0x170E970C: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(ebp + 0x18); /* 0x170E9712: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x138)) = eax; /* 0x170E9715: mov dword ptr [ebp - 0x138], eax */
    eax = MEM32(ebp + 0x20); /* 0x170E971B: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x170E971E: push ebx */
    PUSH32(esp, esi); /* 0x170E971F: push esi */
    esi = MEM32(ebp + 0x28); /* 0x170E9720: mov esi, dword ptr [ebp + 0x28] */
    MEM32(ebp + (-0x13C)) = eax; /* 0x170E9723: mov dword ptr [ebp - 0x13c], eax */
    eax = MEM32(ebp + 0x24); /* 0x170E9729: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, edi); /* 0x170E972C: push edi */
    edi = MEM32(ebp + 0xC); /* 0x170E972D: mov edi, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x14C); /* 0x170E9730: lea ecx, [ebp - 0x14c] */
    MEM32(ebp + (-0x12C)) = eax; /* 0x170E9736: mov dword ptr [ebp - 0x12c], eax */
    RECOMP_CALL(sub_1721BA18); /* 0x170E973C: call 0x1721ba18 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x1C); /* 0x170E9741: mov ebx, dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + (-0x12C)); /* 0x170E9744: mov eax, dword ptr [ebp - 0x12c] */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1D)) << 24; _flag_b = (uint32_t)(0xF7u) << 24;
    MEM8(ebp + 0x1D) = (uint8_t)(MEM8(ebp + 0x1D) & 0xF7u); /* 0x170E974A: and byte ptr [ebp + 0x1d], 0xf7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170E974E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x800u);
    ebx = ebx & 0x800u; /* 0x170E9750: and ebx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x170E9756: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x130)) = ecx; /* 0x170E9758: mov dword ptr [ebp - 0x130], ecx */
    MEM32(ebp + (-0x114)) = ecx; /* 0x170E975E: mov dword ptr [ebp - 0x114], ecx */
    MEM32(ebp + (-0x110)) = ecx; /* 0x170E9764: mov dword ptr [ebp - 0x110], ecx */
    MEM32(ebp + (-0x128)) = ecx; /* 0x170E976A: mov dword ptr [ebp - 0x128], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9774; /* 0x170E9770: je 0x170e9774 */
L_170E9772:
    MEM32(eax) = ecx; /* 0x170E9772: mov dword ptr [eax], ecx */
L_170E9774:
    /* cmp esi, ecx */ /* 0x170E9774: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E977A; /* 0x170E9776: je 0x170e977a */
L_170E9778:
    MEM32(esi) = ecx; /* 0x170E9778: mov dword ptr [esi], ecx */
L_170E977A:
    /* cmp MEM32(ebp + (-0x134)), ecx */ /* 0x170E977A: cmp dword ptr [ebp - 0x134], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E99E1; /* 0x170E9780: je 0x170e99e1 */
L_170E9786:
    /* cmp edi, ecx */ /* 0x170E9786: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E99E1; /* 0x170E9788: je 0x170e99e1 */
L_170E978E:
    /* cmp MEM32(ebp + (-0x11C)), ecx */ /* 0x170E978E: cmp dword ptr [ebp - 0x11c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x11C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E97CC; /* 0x170E9794: jne 0x170e97cc */
L_170E9796:
    PUSH32(esp, 1); /* 0x170E9796: push 1 */
    PUSH32(esp, edi); /* 0x170E9798: push edi */
    ecx = ebp + (-0x14C); /* 0x170E9799: lea ecx, [ebp - 0x14c] */
    RECOMP_CALL(sub_1721BA2F); /* 0x170E979F: call 0x1721ba2f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E97A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10C)) = eax; /* 0x170E97A6: mov dword ptr [ebp - 0x10c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9A27; /* 0x170E97AC: jl 0x170e9a27 */
L_170E97B2:
    eax = MEM32(ebp + (-0x140)); /* 0x170E97B2: mov eax, dword ptr [ebp - 0x140] */
    MEM32(ebp + (-0x124)) = eax; /* 0x170E97B8: mov dword ptr [ebp - 0x124], eax */
    eax = MEM32(ebp + (-0x144)); /* 0x170E97BE: mov eax, dword ptr [ebp - 0x144] */
    MEM32(ebp + (-0x120)) = eax; /* 0x170E97C4: mov dword ptr [ebp - 0x120], eax */
    goto L_170E981B; /* 0x170E97CA: jmp 0x170e981b */
L_170E97CC:
    PUSH32(esp, ecx); /* 0x170E97CC: push ecx */
    PUSH32(esp, ecx); /* 0x170E97CD: push ecx */
    PUSH32(esp, 0x104u); /* 0x170E97CE: push 0x104 */
    eax = ebp + (-0x108); /* 0x170E97D3: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x170E97D9: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x170E97DA: push -1 */
    PUSH32(esp, edi); /* 0x170E97DC: push edi */
    PUSH32(esp, ecx); /* 0x170E97DD: push ecx */
    PUSH32(esp, 0xFDE9u); /* 0x170E97DE: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x1700111C)); /* 0x170E97E3: call dword ptr [0x1700111c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x11C)); /* 0x170E97E9: mov eax, dword ptr [ebp - 0x11c] */
    ecx = MEM32(eax); /* 0x170E97EF: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x124); /* 0x170E97F1: lea edx, [ebp - 0x124] */
    PUSH32(esp, edx); /* 0x170E97F7: push edx */
    edx = ebp + (-0x120); /* 0x170E97F8: lea edx, [ebp - 0x120] */
    PUSH32(esp, edx); /* 0x170E97FE: push edx */
    PUSH32(esp, 0); /* 0x170E97FF: push 0 */
    edx = ebp + (-0x108); /* 0x170E9801: lea edx, [ebp - 0x108] */
    PUSH32(esp, edx); /* 0x170E9807: push edx */
    PUSH32(esp, 0); /* 0x170E9808: push 0 */
    PUSH32(esp, eax); /* 0x170E980A: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x170E980B: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E980D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10C)) = eax; /* 0x170E980F: mov dword ptr [ebp - 0x10c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9A27; /* 0x170E9815: jl 0x170e9a27 */
L_170E981B:
    PUSH32(esp, 0x154u); /* 0x170E981B: push 0x154 */
    MEM32(ebp + (-0x128)) = 1; /* 0x170E9820: mov dword ptr [ebp - 0x128], 1 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E982A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E982F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170E9831: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9843; /* 0x170E9832: je 0x170e9843 */
L_170E9834:
    ecx = eax; /* 0x170E9834: mov ecx, eax */
    RECOMP_CALL(sub_170FAEB0); /* 0x170E9836: call 0x170faeb0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x114)) = eax; /* 0x170E983B: mov dword ptr [ebp - 0x114], eax */
    goto L_170E984A; /* 0x170E9841: jmp 0x170e984a */
L_170E9843:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x114))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x114)) = MEM32(ebp + (-0x114)) & 0; /* 0x170E9843: and dword ptr [ebp - 0x114], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E984A:
    /* cmp MEM32(ebp + (-0x114)), 0 */ /* 0x170E984A: cmp dword ptr [ebp - 0x114], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x114))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E9862; /* 0x170E9851: jne 0x170e9862 */
L_170E9853:
    MEM32(ebp + (-0x10C)) = 0x8007000Eu; /* 0x170E9853: mov dword ptr [ebp - 0x10c], 0x8007000e */
    goto L_170E99F4; /* 0x170E985D: jmp 0x170e99f4 */
L_170E9862:
    /* cmp MEM32(ebp + (-0x124)), 4 */ /* 0x170E9862: cmp dword ptr [ebp - 0x124], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x124))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170E987A; /* 0x170E9869: jae 0x170e987a */
L_170E986B:
    MEM32(ebp + (-0x10C)) = 0x80004005u; /* 0x170E986B: mov dword ptr [ebp - 0x10c], 0x80004005 */
    goto L_170E99F4; /* 0x170E9875: jmp 0x170e99f4 */
L_170E987A:
    ecx = MEM32(ebp + (-0x120)); /* 0x170E987A: mov ecx, dword ptr [ebp - 0x120] */
    /* cmp MEM32(ecx), 0xFEFF0901u */ /* 0x170E9880: cmp dword ptr [ecx], 0xfeff0901 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFEFF0901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E991D; /* 0x170E9886: je 0x170e991d */
L_170E988C:
    eax = MEM32(ebp + (-0x11C)); /* 0x170E988C: mov eax, dword ptr [ebp - 0x11c] */
    /* test eax, eax */ /* 0x170E9892: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E98A3; /* 0x170E9894: jne 0x170e98a3 */
L_170E9896:
    ecx = ebp + (-0x14C); /* 0x170E9896: lea ecx, [ebp - 0x14c] */
    RECOMP_CALL(sub_1721BCC5); /* 0x170E989C: call 0x1721bcc5 */
    RECOMP_FLAGS_IN();
    goto L_170E98AA; /* 0x170E98A1: jmp 0x170e98aa */
L_170E98A3:
    edx = MEM32(eax); /* 0x170E98A3: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x170E98A5: push ecx */
    PUSH32(esp, eax); /* 0x170E98A6: push eax */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x170E98A7: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
L_170E98AA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x128))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x128)) = MEM32(ebp + (-0x128)) & 0; /* 0x170E98AA: and dword ptr [ebp - 0x128], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170E98B1: push esi */
    eax = ebp + (-0x130); /* 0x170E98B2: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x170E98B8: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170E98B9: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x170E98BC: push dword ptr [ebp - 0x11c] */
    PUSH32(esp, MEM32(ebp + (-0x118))); /* 0x170E98C2: push dword ptr [ebp - 0x118] */
    PUSH32(esp, edi); /* 0x170E98C8: push edi */
    RECOMP_CALL(sub_170E9050); /* 0x170E98C9: call 0x170e9050 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E98CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10C)) = eax; /* 0x170E98D0: mov dword ptr [ebp - 0x10c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9A17; /* 0x170E98D6: jl 0x170e9a17 */
L_170E98DC:
    /* test esi, esi */ /* 0x170E98DC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E98EF; /* 0x170E98DE: je 0x170e98ef */
L_170E98E0:
    eax = MEM32(esi); /* 0x170E98E0: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x170E98E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E98EF; /* 0x170E98E4: je 0x170e98ef */
L_170E98E6:
    ecx = MEM32(eax); /* 0x170E98E6: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E98E8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E98E9: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x170E98EC: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E98EF:
    ecx = MEM32(ebp + (-0x130)); /* 0x170E98EF: mov ecx, dword ptr [ebp - 0x130] */
    edx = MEM32(ecx); /* 0x170E98F5: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x170E98F7: push esi */
    eax = ebp + (-0x110); /* 0x170E98F8: lea eax, [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x170E98FE: push eax */
    eax = MEM32(ebp + 0x1C); /* 0x170E98FF: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE7u);
    eax = eax & 0xFFFFFFE7u; /* 0x170E9902: and eax, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x170E9905: push eax */
    PUSH32(esp, ecx); /* 0x170E9906: push ecx */
    RECOMP_ICALL(MEM32(edx + 0xEC)); /* 0x170E9907: call dword ptr [edx + 0xec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E990D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10C)) = eax; /* 0x170E990F: mov dword ptr [ebp - 0x10c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9A17; /* 0x170E9915: jl 0x170e9a17 */
L_170E991B:
    goto L_170E997E; /* 0x170E991B: jmp 0x170e997e */
L_170E991D:
    /* cmp MEM32(ebp + (-0x12C)), 0 */ /* 0x170E991D: cmp dword ptr [ebp - 0x12c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x12C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E99F4; /* 0x170E9924: je 0x170e99f4 */
L_170E992A:
    eax = ebp + (-0x110); /* 0x170E992A: lea eax, [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x170E9930: push eax */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x170E9931: push dword ptr [ebp - 0x124] */
    RECOMP_CALL(sub_1702BAA3); /* 0x170E9937: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E993C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10C)) = eax; /* 0x170E993E: mov dword ptr [ebp - 0x10c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E99F4; /* 0x170E9944: jl 0x170e99f4 */
L_170E994A:
    eax = MEM32(ebp + (-0x124)); /* 0x170E994A: mov eax, dword ptr [ebp - 0x124] */
    esi = MEM32(ebp + (-0x120)); /* 0x170E9950: mov esi, dword ptr [ebp - 0x120] */
    MEM32(ebp + (-0x118)) = eax; /* 0x170E9956: mov dword ptr [ebp - 0x118], eax */
    eax = MEM32(ebp + (-0x110)); /* 0x170E995C: mov eax, dword ptr [ebp - 0x110] */
    ecx = MEM32(eax); /* 0x170E9962: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9964: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170E9965: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170E9968: mov edi, eax */
    eax = MEM32(ebp + (-0x118)); /* 0x170E996A: mov eax, dword ptr [ebp - 0x118] */
    ecx = eax; /* 0x170E9970: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170E9972: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170E9972: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170E9975: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170E9977: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170E9979: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170E997C: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_170E997E:
    edi = MEM32(ebp + (-0x12C)); /* 0x170E997E: mov edi, dword ptr [ebp - 0x12c] */
    /* test edi, edi */ /* 0x170E9984: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E99EB; /* 0x170E9986: je 0x170e99eb */
L_170E9988:
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x170E9988: push dword ptr [ebp - 0x138] */
    esi = MEM32(ebp + (-0x114)); /* 0x170E998E: mov esi, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x118))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x118)) = MEM32(ebp + (-0x118)) & 0; /* 0x170E9994: and dword ptr [ebp - 0x118], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x118); /* 0x170E999B: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x170E99A1: push eax */
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x170E99A2: push dword ptr [ebp - 0x110] */
    ecx = esi; /* 0x170E99A8: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x170E99AA: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x13C))); /* 0x170E99AB: push dword ptr [ebp - 0x13c] */
    PUSH32(esp, MEM32(ebp + (-0x134))); /* 0x170E99B1: push dword ptr [ebp - 0x134] */
    RECOMP_CALL(sub_170F95B8); /* 0x170E99B7: call 0x170f95b8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E99BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10C)) = eax; /* 0x170E99BE: mov dword ptr [ebp - 0x10c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E99EB; /* 0x170E99C4: jl 0x170e99eb */
L_170E99C6:
    ecx = esi; /* 0x170E99C6: mov ecx, esi */
    RECOMP_CALL(sub_170F7B38); /* 0x170E99C8: call 0x170f7b38 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E99CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10C)) = eax; /* 0x170E99CF: mov dword ptr [ebp - 0x10c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E99EB; /* 0x170E99D5: jl 0x170e99eb */
L_170E99D7:
    MEM32(edi) = esi; /* 0x170E99D7: mov dword ptr [edi], esi */
    eax = MEM32(esi); /* 0x170E99D9: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E99DB: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E99DC: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_170E99EB; /* 0x170E99DF: jmp 0x170e99eb */
L_170E99E1:
    MEM32(ebp + (-0x10C)) = 0x8876086Cu; /* 0x170E99E1: mov dword ptr [ebp - 0x10c], 0x8876086c */
L_170E99EB:
    /* cmp MEM32(ebp + (-0x128)), 0 */ /* 0x170E99EB: cmp dword ptr [ebp - 0x128], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x128))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9A17; /* 0x170E99F2: je 0x170e9a17 */
L_170E99F4:
    eax = MEM32(ebp + (-0x11C)); /* 0x170E99F4: mov eax, dword ptr [ebp - 0x11c] */
    /* test eax, eax */ /* 0x170E99FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E9A0B; /* 0x170E99FC: jne 0x170e9a0b */
L_170E99FE:
    ecx = ebp + (-0x14C); /* 0x170E99FE: lea ecx, [ebp - 0x14c] */
    RECOMP_CALL(sub_1721BCC5); /* 0x170E9A04: call 0x1721bcc5 */
    RECOMP_FLAGS_IN();
    goto L_170E9A17; /* 0x170E9A09: jmp 0x170e9a17 */
L_170E9A0B:
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x170E9A0B: push dword ptr [ebp - 0x120] */
    ecx = MEM32(eax); /* 0x170E9A11: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9A13: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170E9A14: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_170E9A17:
    eax = MEM32(ebp + (-0x130)); /* 0x170E9A17: mov eax, dword ptr [ebp - 0x130] */
    /* test eax, eax */ /* 0x170E9A1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9A27; /* 0x170E9A1F: je 0x170e9a27 */
L_170E9A21:
    ecx = MEM32(eax); /* 0x170E9A21: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9A23: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9A24: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170E9A27:
    eax = MEM32(ebp + (-0x110)); /* 0x170E9A27: mov eax, dword ptr [ebp - 0x110] */
    /* test eax, eax */ /* 0x170E9A2D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x170E9A2F: pop edi */
    esi = POP32_VAL(esp); /* 0x170E9A30: pop esi */
    ebx = POP32_VAL(esp); /* 0x170E9A31: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9A41; /* 0x170E9A32: je 0x170e9a41 */
L_170E9A34:
    ecx = MEM32(eax); /* 0x170E9A34: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9A36: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9A37: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x110))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x110)) = MEM32(ebp + (-0x110)) & 0; /* 0x170E9A3A: and dword ptr [ebp - 0x110], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E9A41:
    eax = MEM32(ebp + (-0x114)); /* 0x170E9A41: mov eax, dword ptr [ebp - 0x114] */
    /* test eax, eax */ /* 0x170E9A47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9A51; /* 0x170E9A49: je 0x170e9a51 */
L_170E9A4B:
    ecx = MEM32(eax); /* 0x170E9A4B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9A4D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9A4E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170E9A51:
    ecx = ebp + (-0x14C); /* 0x170E9A51: lea ecx, [ebp - 0x14c] */
    RECOMP_CALL(sub_1721BD0D); /* 0x170E9A57: call 0x1721bd0d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x170E9A5C: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x10C)); /* 0x170E9A5F: mov eax, dword ptr [ebp - 0x10c] */
    RECOMP_CALL(sub_1721B76C); /* 0x170E9A65: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E9A6A: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x170E9A6B: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_170E9A73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E9A73u);

L_170E9A73:
    edi = edi; /* 0x170E9A73: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E9A75: push ebp */
    ebp = esp; /* 0x170E9A76: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x170E9A78: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170E9A7B: push ebx */
    PUSH32(esp, esi); /* 0x170E9A7C: push esi */
    PUSH32(esp, edi); /* 0x170E9A7D: push edi */
    ecx = ebp + (-0x18); /* 0x170E9A7E: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_170D3C30); /* 0x170E9A81: call 0x170d3c30 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x20); /* 0x170E9A86: mov esi, dword ptr [ebp + 0x20] */
    eax = esi; /* 0x170E9A89: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x170E9A8B: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170E9A90: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x20) = eax; /* 0x170E9A92: mov dword ptr [ebp + 0x20], eax */
    eax = MEM32(ebp + 0x28); /* 0x170E9A95: mov eax, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFF7FFu);
    esi = esi & 0xFFFFF7FFu; /* 0x170E9A98: and esi, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x170E9A9E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ecx; /* 0x170E9AA0: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x170E9AA3: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x170E9AA6: mov dword ptr [ebp - 4], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9AAD; /* 0x170E9AA9: je 0x170e9aad */
L_170E9AAB:
    MEM32(eax) = ecx; /* 0x170E9AAB: mov dword ptr [eax], ecx */
L_170E9AAD:
    edi = MEM32(ebp + 0x2C); /* 0x170E9AAD: mov edi, dword ptr [ebp + 0x2c] */
    /* cmp edi, ecx */ /* 0x170E9AB0: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9AB6; /* 0x170E9AB2: je 0x170e9ab6 */
L_170E9AB4:
    MEM32(edi) = ecx; /* 0x170E9AB4: mov dword ptr [edi], ecx */
L_170E9AB6:
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x170E9AB6: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9C0F; /* 0x170E9AB9: je 0x170e9c0f */
L_170E9ABF:
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x170E9ABF: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9C0F; /* 0x170E9AC2: je 0x170e9c0f */
L_170E9AC8:
    PUSH32(esp, 0x154u); /* 0x170E9AC8: push 0x154 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E9ACD: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170E9AD2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x170E9AD4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170E9AD6: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9AE5; /* 0x170E9AD7: je 0x170e9ae5 */
L_170E9AD9:
    ecx = eax; /* 0x170E9AD9: mov ecx, eax */
    RECOMP_CALL(sub_170FAEB0); /* 0x170E9ADB: call 0x170faeb0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x170E9AE0: mov dword ptr [ebp - 8], eax */
    goto L_170E9AE8; /* 0x170E9AE3: jmp 0x170e9ae8 */
L_170E9AE5:
    MEM32(ebp + (-0x8)) = ebx; /* 0x170E9AE5: mov dword ptr [ebp - 8], ebx */
L_170E9AE8:
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x170E9AE8: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E9AF7; /* 0x170E9AEB: jne 0x170e9af7 */
L_170E9AED:
    ebx = 0x8007000Eu; /* 0x170E9AED: mov ebx, 0x8007000e */
    goto L_170E9C21; /* 0x170E9AF2: jmp 0x170e9c21 */
L_170E9AF7:
    PUSH32(esp, ebx); /* 0x170E9AF7: push ebx */
    PUSH32(esp, ebx); /* 0x170E9AF8: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E9AF9: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x18); /* 0x170E9AFC: lea ecx, [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E9AFF: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1721BD56); /* 0x170E9B02: call 0x1721bd56 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9B07: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9B09: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9C21; /* 0x170E9B0B: jl 0x170e9c21 */
L_170E9B11:
    /* cmp MEM32(ebp + (-0x10)), 4 */ /* 0x170E9B11: cmp dword ptr [ebp - 0x10], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170E9B21; /* 0x170E9B15: jae 0x170e9b21 */
L_170E9B17:
    ebx = 0x80004005u; /* 0x170E9B17: mov ebx, 0x80004005 */
    goto L_170E9C21; /* 0x170E9B1C: jmp 0x170e9c21 */
L_170E9B21:
    eax = MEM32(ebp + (-0x14)); /* 0x170E9B21: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax), 0xFEFF0901u */ /* 0x170E9B24: cmp dword ptr [eax], 0xfeff0901 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFEFF0901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9B89; /* 0x170E9B2A: je 0x170e9b89 */
L_170E9B2C:
    ecx = ebp + (-0x18); /* 0x170E9B2C: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1721BD30); /* 0x170E9B2F: call 0x1721bd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x170E9B34: push edi */
    eax = ebp + (-0xC); /* 0x170E9B35: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x170E9B38: push eax */
    PUSH32(esp, esi); /* 0x170E9B39: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170E9B3A: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E9B3D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E9B40: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E9B43: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_170E9160); /* 0x170E9B46: call 0x170e9160 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9B4B: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9B4D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9C14; /* 0x170E9B4F: jl 0x170e9c14 */
L_170E9B55:
    /* test edi, edi */ /* 0x170E9B55: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9B68; /* 0x170E9B57: je 0x170e9b68 */
L_170E9B59:
    eax = MEM32(edi); /* 0x170E9B59: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x170E9B5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9B68; /* 0x170E9B5D: je 0x170e9b68 */
L_170E9B5F:
    ecx = MEM32(eax); /* 0x170E9B5F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9B61: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9B62: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x170E9B65: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E9B68:
    eax = MEM32(ebp + (-0xC)); /* 0x170E9B68: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x170E9B6B: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x170E9B6D: push edi */
    edx = ebp + (-0x4); /* 0x170E9B6E: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x170E9B71: push edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFE7u);
    esi = esi & 0xFFFFFFE7u; /* 0x170E9B72: and esi, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170E9B75: push esi */
    PUSH32(esp, eax); /* 0x170E9B76: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xEC)); /* 0x170E9B77: call dword ptr [ecx + 0xec] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9B7D: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9B7F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9C14; /* 0x170E9B81: jl 0x170e9c14 */
L_170E9B87:
    goto L_170E9BCA; /* 0x170E9B87: jmp 0x170e9bca */
L_170E9B89:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x170E9B89: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9C21; /* 0x170E9B8D: je 0x170e9c21 */
L_170E9B93:
    eax = ebp + (-0x4); /* 0x170E9B93: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x170E9B96: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x170E9B97: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1702BAA3); /* 0x170E9B9A: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9B9F: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9BA1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9C21; /* 0x170E9BA3: jl 0x170e9c21 */
L_170E9BA5:
    eax = MEM32(ebp + (-0x10)); /* 0x170E9BA5: mov eax, dword ptr [ebp - 0x10] */
    esi = MEM32(ebp + (-0x14)); /* 0x170E9BA8: mov esi, dword ptr [ebp - 0x14] */
    MEM32(ebp + 0x10) = eax; /* 0x170E9BAB: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x170E9BAE: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170E9BB1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9BB3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170E9BB4: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170E9BB7: mov edi, eax */
    eax = MEM32(ebp + 0x10); /* 0x170E9BB9: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x170E9BBC: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170E9BBE: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170E9BBE: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170E9BC1: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170E9BC3: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170E9BC5: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170E9BC8: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_170E9BCA:
    edi = MEM32(ebp + 0x28); /* 0x170E9BCA: mov edi, dword ptr [ebp + 0x28] */
    /* test edi, edi */ /* 0x170E9BCD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9C14; /* 0x170E9BCF: je 0x170e9c14 */
L_170E9BD1:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170E9BD1: push dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + (-0x8)); /* 0x170E9BD4: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x170E9BD7: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x170E9BDB: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170E9BDE: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170E9BDF: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x170E9BE2: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170E9BE4: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170E9BE7: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170E9BEA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170F95B8); /* 0x170E9BED: call 0x170f95b8 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9BF2: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9BF4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9C14; /* 0x170E9BF6: jl 0x170e9c14 */
L_170E9BF8:
    ecx = esi; /* 0x170E9BF8: mov ecx, esi */
    RECOMP_CALL(sub_170F7B38); /* 0x170E9BFA: call 0x170f7b38 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9BFF: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9C01: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9C14; /* 0x170E9C03: jl 0x170e9c14 */
L_170E9C05:
    MEM32(edi) = esi; /* 0x170E9C05: mov dword ptr [edi], esi */
    eax = MEM32(esi); /* 0x170E9C07: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E9C09: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E9C0A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_170E9C14; /* 0x170E9C0D: jmp 0x170e9c14 */
L_170E9C0F:
    ebx = 0x8876086Cu; /* 0x170E9C0F: mov ebx, 0x8876086c */
L_170E9C14:
    eax = MEM32(ebp + (-0xC)); /* 0x170E9C14: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x170E9C17: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9C21; /* 0x170E9C19: je 0x170e9c21 */
L_170E9C1B:
    ecx = MEM32(eax); /* 0x170E9C1B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9C1D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9C1E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170E9C21:
    eax = MEM32(ebp + (-0x4)); /* 0x170E9C21: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x170E9C24: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9C32; /* 0x170E9C26: je 0x170e9c32 */
L_170E9C28:
    ecx = MEM32(eax); /* 0x170E9C28: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9C2A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9C2B: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170E9C2E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E9C32:
    eax = MEM32(ebp + (-0x8)); /* 0x170E9C32: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x170E9C35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9C3F; /* 0x170E9C37: je 0x170e9c3f */
L_170E9C39:
    ecx = MEM32(eax); /* 0x170E9C39: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9C3B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9C3C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170E9C3F:
    ecx = ebp + (-0x18); /* 0x170E9C3F: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1721BD1D); /* 0x170E9C42: call 0x1721bd1d */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x170E9C47: pop edi */
    esi = POP32_VAL(esp); /* 0x170E9C48: pop esi */
    eax = ebx; /* 0x170E9C49: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170E9C4B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E9C4C: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x170E9C4D: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_170E9C55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E9C55u);

L_170E9C55:
    edi = edi; /* 0x170E9C55: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E9C57: push ebp */
    ebp = esp; /* 0x170E9C58: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x170E9C5A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170E9C5D: push ebx */
    PUSH32(esp, esi); /* 0x170E9C5E: push esi */
    PUSH32(esp, edi); /* 0x170E9C5F: push edi */
    ecx = ebp + (-0x18); /* 0x170E9C60: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_170D3C30); /* 0x170E9C63: call 0x170d3c30 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x20); /* 0x170E9C68: mov edi, dword ptr [ebp + 0x20] */
    eax = edi; /* 0x170E9C6B: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x170E9C6D: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170E9C72: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x20) = eax; /* 0x170E9C74: mov dword ptr [ebp + 0x20], eax */
    eax = MEM32(ebp + 0x28); /* 0x170E9C77: mov eax, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFF7FFu);
    edi = edi & 0xFFFFF7FFu; /* 0x170E9C7A: and edi, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x170E9C80: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x170E9C82: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x170E9C85: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x170E9C88: mov dword ptr [ebp - 4], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9C8F; /* 0x170E9C8B: je 0x170e9c8f */
L_170E9C8D:
    MEM32(eax) = esi; /* 0x170E9C8D: mov dword ptr [eax], esi */
L_170E9C8F:
    eax = MEM32(ebp + 0x2C); /* 0x170E9C8F: mov eax, dword ptr [ebp + 0x2c] */
    /* cmp eax, esi */ /* 0x170E9C92: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9C98; /* 0x170E9C94: je 0x170e9c98 */
L_170E9C96:
    MEM32(eax) = esi; /* 0x170E9C96: mov dword ptr [eax], esi */
L_170E9C98:
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x170E9C98: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9DF6; /* 0x170E9C9B: je 0x170e9df6 */
L_170E9CA1:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x170E9CA1: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9DF6; /* 0x170E9CA4: je 0x170e9df6 */
L_170E9CAA:
    PUSH32(esp, 1); /* 0x170E9CAA: push 1 */
    PUSH32(esp, esi); /* 0x170E9CAC: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E9CAD: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x18); /* 0x170E9CB0: lea ecx, [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E9CB3: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1721BD56); /* 0x170E9CB6: call 0x1721bd56 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9CBB: mov ebx, eax */
    /* cmp ebx, esi */ /* 0x170E9CBD: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170E9E08; /* 0x170E9CBF: jl 0x170e9e08 */
L_170E9CC5:
    PUSH32(esp, 0x154u); /* 0x170E9CC5: push 0x154 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E9CCA: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x170E9CCF: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170E9CD1: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9CE2; /* 0x170E9CD2: je 0x170e9ce2 */
L_170E9CD4:
    ecx = eax; /* 0x170E9CD4: mov ecx, eax */
    RECOMP_CALL(sub_170FAEB0); /* 0x170E9CD6: call 0x170faeb0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170E9CDB: mov esi, eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x170E9CDD: mov dword ptr [ebp - 8], esi */
    goto L_170E9CE5; /* 0x170E9CE0: jmp 0x170e9ce5 */
L_170E9CE2:
    MEM32(ebp + (-0x8)) = esi; /* 0x170E9CE2: mov dword ptr [ebp - 8], esi */
L_170E9CE5:
    /* test esi, esi */ /* 0x170E9CE5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170E9CF3; /* 0x170E9CE7: jne 0x170e9cf3 */
L_170E9CE9:
    ebx = 0x8007000Eu; /* 0x170E9CE9: mov ebx, 0x8007000e */
    goto L_170E9E08; /* 0x170E9CEE: jmp 0x170e9e08 */
L_170E9CF3:
    /* cmp MEM32(ebp + (-0x10)), 4 */ /* 0x170E9CF3: cmp dword ptr [ebp - 0x10], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170E9D03; /* 0x170E9CF7: jae 0x170e9d03 */
L_170E9CF9:
    ebx = 0x80004005u; /* 0x170E9CF9: mov ebx, 0x80004005 */
    goto L_170E9E08; /* 0x170E9CFE: jmp 0x170e9e08 */
L_170E9D03:
    eax = MEM32(ebp + (-0x14)); /* 0x170E9D03: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax), 0xFEFF0901u */ /* 0x170E9D06: cmp dword ptr [eax], 0xfeff0901 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFEFF0901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9D70; /* 0x170E9D0C: je 0x170e9d70 */
L_170E9D0E:
    ecx = ebp + (-0x18); /* 0x170E9D0E: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1721BD30); /* 0x170E9D11: call 0x1721bd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x170E9D16: push dword ptr [ebp + 0x2c] */
    eax = ebp + (-0xC); /* 0x170E9D19: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x170E9D1C: push eax */
    PUSH32(esp, edi); /* 0x170E9D1D: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170E9D1E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E9D21: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E9D24: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E9D27: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_170E9273); /* 0x170E9D2A: call 0x170e9273 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9D2F: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9D31: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9DFB; /* 0x170E9D33: jl 0x170e9dfb */
L_170E9D39:
    ebx = MEM32(ebp + 0x2C); /* 0x170E9D39: mov ebx, dword ptr [ebp + 0x2c] */
    /* test ebx, ebx */ /* 0x170E9D3C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9D4F; /* 0x170E9D3E: je 0x170e9d4f */
L_170E9D40:
    eax = MEM32(ebx); /* 0x170E9D40: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x170E9D42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9D4F; /* 0x170E9D44: je 0x170e9d4f */
L_170E9D46:
    ecx = MEM32(eax); /* 0x170E9D46: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9D48: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9D49: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x170E9D4C: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E9D4F:
    eax = MEM32(ebp + (-0xC)); /* 0x170E9D4F: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x170E9D52: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x170E9D54: push ebx */
    edx = ebp + (-0x4); /* 0x170E9D55: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x170E9D58: push edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFE7u);
    edi = edi & 0xFFFFFFE7u; /* 0x170E9D59: and edi, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x170E9D5C: push edi */
    PUSH32(esp, eax); /* 0x170E9D5D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xEC)); /* 0x170E9D5E: call dword ptr [ecx + 0xec] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9D64: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9D66: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9DFB; /* 0x170E9D68: jl 0x170e9dfb */
L_170E9D6E:
    goto L_170E9DB4; /* 0x170E9D6E: jmp 0x170e9db4 */
L_170E9D70:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x170E9D70: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9E08; /* 0x170E9D74: je 0x170e9e08 */
L_170E9D7A:
    eax = ebp + (-0x4); /* 0x170E9D7A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x170E9D7D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x170E9D7E: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1702BAA3); /* 0x170E9D81: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9D86: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9D88: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9E08; /* 0x170E9D8A: jl 0x170e9e08 */
L_170E9D8C:
    eax = MEM32(ebp + (-0x10)); /* 0x170E9D8C: mov eax, dword ptr [ebp - 0x10] */
    esi = MEM32(ebp + (-0x14)); /* 0x170E9D8F: mov esi, dword ptr [ebp - 0x14] */
    MEM32(ebp + 0x10) = eax; /* 0x170E9D92: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x170E9D95: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170E9D98: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9D9A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170E9D9B: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170E9D9E: mov edi, eax */
    eax = MEM32(ebp + 0x10); /* 0x170E9DA0: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x170E9DA3: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170E9DA5: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170E9DA5: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170E9DA8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170E9DAA: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170E9DAC: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170E9DAF: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + (-0x8)); /* 0x170E9DB1: mov esi, dword ptr [ebp - 8] */
L_170E9DB4:
    edi = MEM32(ebp + 0x28); /* 0x170E9DB4: mov edi, dword ptr [ebp + 0x28] */
    /* test edi, edi */ /* 0x170E9DB7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9DFB; /* 0x170E9DB9: je 0x170e9dfb */
L_170E9DBB:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170E9DBB: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x170E9DBE: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x170E9DC2: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170E9DC5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170E9DC6: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x170E9DC9: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170E9DCB: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170E9DCE: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170E9DD1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170F95B8); /* 0x170E9DD4: call 0x170f95b8 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9DD9: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9DDB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9DFB; /* 0x170E9DDD: jl 0x170e9dfb */
L_170E9DDF:
    ecx = esi; /* 0x170E9DDF: mov ecx, esi */
    RECOMP_CALL(sub_170F7B38); /* 0x170E9DE1: call 0x170f7b38 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9DE6: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9DE8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9DFB; /* 0x170E9DEA: jl 0x170e9dfb */
L_170E9DEC:
    MEM32(edi) = esi; /* 0x170E9DEC: mov dword ptr [edi], esi */
    eax = MEM32(esi); /* 0x170E9DEE: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E9DF0: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E9DF1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_170E9DFB; /* 0x170E9DF4: jmp 0x170e9dfb */
L_170E9DF6:
    ebx = 0x8876086Cu; /* 0x170E9DF6: mov ebx, 0x8876086c */
L_170E9DFB:
    eax = MEM32(ebp + (-0xC)); /* 0x170E9DFB: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x170E9DFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9E08; /* 0x170E9E00: je 0x170e9e08 */
L_170E9E02:
    ecx = MEM32(eax); /* 0x170E9E02: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9E04: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9E05: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170E9E08:
    eax = MEM32(ebp + (-0x4)); /* 0x170E9E08: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x170E9E0B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9E19; /* 0x170E9E0D: je 0x170e9e19 */
L_170E9E0F:
    ecx = MEM32(eax); /* 0x170E9E0F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9E11: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9E12: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170E9E15: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E9E19:
    eax = MEM32(ebp + (-0x8)); /* 0x170E9E19: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x170E9E1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9E26; /* 0x170E9E1E: je 0x170e9e26 */
L_170E9E20:
    ecx = MEM32(eax); /* 0x170E9E20: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9E22: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9E23: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170E9E26:
    ecx = ebp + (-0x18); /* 0x170E9E26: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1721BD1D); /* 0x170E9E29: call 0x1721bd1d */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x170E9E2E: pop edi */
    esi = POP32_VAL(esp); /* 0x170E9E2F: pop esi */
    eax = ebx; /* 0x170E9E30: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170E9E32: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E9E33: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x170E9E34: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_170E9E3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E9E3Cu);

L_170E9E3C:
    edi = edi; /* 0x170E9E3C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E9E3E: push ebp */
    ebp = esp; /* 0x170E9E3F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170E9E41: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170E9E44: push ebx */
    PUSH32(esp, edi); /* 0x170E9E45: push edi */
    edi = MEM32(ebp + 0x20); /* 0x170E9E46: mov edi, dword ptr [ebp + 0x20] */
    eax = edi; /* 0x170E9E49: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x170E9E4B: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170E9E50: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x20) = eax; /* 0x170E9E52: mov dword ptr [ebp + 0x20], eax */
    eax = MEM32(ebp + 0x28); /* 0x170E9E55: mov eax, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFF7FFu);
    edi = edi & 0xFFFFF7FFu; /* 0x170E9E58: and edi, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x170E9E5E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x170E9E60: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x170E9E63: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x170E9E66: mov dword ptr [ebp - 4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9E6D; /* 0x170E9E69: je 0x170e9e6d */
L_170E9E6B:
    MEM32(eax) = ebx; /* 0x170E9E6B: mov dword ptr [eax], ebx */
L_170E9E6D:
    PUSH32(esp, esi); /* 0x170E9E6D: push esi */
    esi = MEM32(ebp + 0x2C); /* 0x170E9E6E: mov esi, dword ptr [ebp + 0x2c] */
    /* cmp esi, ebx */ /* 0x170E9E71: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9E77; /* 0x170E9E73: je 0x170e9e77 */
L_170E9E75:
    MEM32(esi) = ebx; /* 0x170E9E75: mov dword ptr [esi], ebx */
L_170E9E77:
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x170E9E77: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9FA6; /* 0x170E9E7A: je 0x170e9fa6 */
L_170E9E80:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x170E9E80: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9FA6; /* 0x170E9E83: je 0x170e9fa6 */
L_170E9E89:
    PUSH32(esp, 0x154u); /* 0x170E9E89: push 0x154 */
    RECOMP_CALL(sub_1721B01C); /* 0x170E9E8E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170E9E93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170E9E95: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9EA4; /* 0x170E9E96: je 0x170e9ea4 */
L_170E9E98:
    ecx = eax; /* 0x170E9E98: mov ecx, eax */
    RECOMP_CALL(sub_170FAEB0); /* 0x170E9E9A: call 0x170faeb0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x170E9E9F: mov dword ptr [ebp - 8], eax */
    goto L_170E9EA8; /* 0x170E9EA2: jmp 0x170e9ea8 */
L_170E9EA4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x170E9EA4: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E9EA8:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x170E9EA8: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170E9EB8; /* 0x170E9EAC: jne 0x170e9eb8 */
L_170E9EAE:
    ebx = 0x8007000Eu; /* 0x170E9EAE: mov ebx, 0x8007000e */
    goto L_170E9FB8; /* 0x170E9EB3: jmp 0x170e9fb8 */
L_170E9EB8:
    /* cmp MEM32(ebp + 0x10), 4 */ /* 0x170E9EB8: cmp dword ptr [ebp + 0x10], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170E9EC8; /* 0x170E9EBC: jae 0x170e9ec8 */
L_170E9EBE:
    ebx = 0x80004005u; /* 0x170E9EBE: mov ebx, 0x80004005 */
    goto L_170E9FB8; /* 0x170E9EC3: jmp 0x170e9fb8 */
L_170E9EC8:
    eax = MEM32(ebp + 0xC); /* 0x170E9EC8: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0xFEFF0901u */ /* 0x170E9ECB: cmp dword ptr [eax], 0xfeff0901 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFEFF0901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9F26; /* 0x170E9ED1: je 0x170e9f26 */
L_170E9ED3:
    PUSH32(esp, esi); /* 0x170E9ED3: push esi */
    ecx = ebp + (-0xC); /* 0x170E9ED4: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x170E9ED7: push ecx */
    PUSH32(esp, edi); /* 0x170E9ED8: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170E9ED9: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E9EDC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E9EDF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170E9EE2: push eax */
    RECOMP_CALL(sub_170E9386); /* 0x170E9EE3: call 0x170e9386 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9EE8: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9EEA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9FAB; /* 0x170E9EEC: jl 0x170e9fab */
L_170E9EF2:
    /* test esi, esi */ /* 0x170E9EF2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9F05; /* 0x170E9EF4: je 0x170e9f05 */
L_170E9EF6:
    eax = MEM32(esi); /* 0x170E9EF6: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x170E9EF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9F05; /* 0x170E9EFA: je 0x170e9f05 */
L_170E9EFC:
    ecx = MEM32(eax); /* 0x170E9EFC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9EFE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9EFF: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x170E9F02: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E9F05:
    eax = MEM32(ebp + (-0xC)); /* 0x170E9F05: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x170E9F08: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x170E9F0A: push esi */
    edx = ebp + (-0x4); /* 0x170E9F0B: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x170E9F0E: push edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFE7u);
    edi = edi & 0xFFFFFFE7u; /* 0x170E9F0F: and edi, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x170E9F12: push edi */
    PUSH32(esp, eax); /* 0x170E9F13: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xEC)); /* 0x170E9F14: call dword ptr [ecx + 0xec] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9F1A: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9F1C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9FAB; /* 0x170E9F1E: jl 0x170e9fab */
L_170E9F24:
    goto L_170E9F61; /* 0x170E9F24: jmp 0x170e9f61 */
L_170E9F26:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x170E9F26: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170E9FB8; /* 0x170E9F2A: je 0x170e9fb8 */
L_170E9F30:
    eax = ebp + (-0x4); /* 0x170E9F30: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x170E9F33: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E9F34: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1702BAA3); /* 0x170E9F37: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9F3C: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9F3E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9FB8; /* 0x170E9F40: jl 0x170e9fb8 */
L_170E9F42:
    eax = MEM32(ebp + (-0x4)); /* 0x170E9F42: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170E9F45: mov ecx, dword ptr [eax] */
    esi = MEM32(ebp + 0xC); /* 0x170E9F47: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x170E9F4A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x170E9F4B: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x170E9F4E: mov ecx, dword ptr [ebp + 0x10] */
    edi = eax; /* 0x170E9F51: mov edi, eax */
    eax = ecx; /* 0x170E9F53: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170E9F55: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170E9F55: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170E9F58: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170E9F5A: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170E9F5C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170E9F5F: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_170E9F61:
    edi = MEM32(ebp + 0x28); /* 0x170E9F61: mov edi, dword ptr [ebp + 0x28] */
    /* test edi, edi */ /* 0x170E9F64: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9FAB; /* 0x170E9F66: je 0x170e9fab */
L_170E9F68:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170E9F68: push dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + (-0x8)); /* 0x170E9F6B: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x170E9F6E: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x170E9F72: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170E9F75: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170E9F76: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x170E9F79: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170E9F7B: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170E9F7E: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170E9F81: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170F95B8); /* 0x170E9F84: call 0x170f95b8 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9F89: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9F8B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9FAB; /* 0x170E9F8D: jl 0x170e9fab */
L_170E9F8F:
    ecx = esi; /* 0x170E9F8F: mov ecx, esi */
    RECOMP_CALL(sub_170F7B38); /* 0x170E9F91: call 0x170f7b38 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170E9F96: mov ebx, eax */
    /* test ebx, ebx */ /* 0x170E9F98: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170E9FAB; /* 0x170E9F9A: jl 0x170e9fab */
L_170E9F9C:
    MEM32(edi) = esi; /* 0x170E9F9C: mov dword ptr [edi], esi */
    eax = MEM32(esi); /* 0x170E9F9E: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x170E9FA0: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x170E9FA1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_170E9FAB; /* 0x170E9FA4: jmp 0x170e9fab */
L_170E9FA6:
    ebx = 0x8876086Cu; /* 0x170E9FA6: mov ebx, 0x8876086c */
L_170E9FAB:
    eax = MEM32(ebp + (-0xC)); /* 0x170E9FAB: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x170E9FAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9FB8; /* 0x170E9FB0: je 0x170e9fb8 */
L_170E9FB2:
    ecx = MEM32(eax); /* 0x170E9FB2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9FB4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9FB5: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170E9FB8:
    eax = MEM32(ebp + (-0x4)); /* 0x170E9FB8: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x170E9FBB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170E9FBD: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9FCA; /* 0x170E9FBE: je 0x170e9fca */
L_170E9FC0:
    ecx = MEM32(eax); /* 0x170E9FC0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9FC2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9FC3: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170E9FC6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170E9FCA:
    eax = MEM32(ebp + (-0x8)); /* 0x170E9FCA: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x170E9FCD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170E9FD7; /* 0x170E9FCF: je 0x170e9fd7 */
L_170E9FD1:
    ecx = MEM32(eax); /* 0x170E9FD1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170E9FD3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170E9FD4: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_170E9FD7:
    edi = POP32_VAL(esp); /* 0x170E9FD7: pop edi */
    eax = ebx; /* 0x170E9FD8: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170E9FDA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170E9FDB: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x170E9FDC: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_170E9FE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170E9FE4u);

L_170E9FE4:
    edi = edi; /* 0x170E9FE4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170E9FE6: push ebp */
    ebp = esp; /* 0x170E9FE7: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170E9FE9: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170E9FEC: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170E9FEF: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170E9FF2: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x170E9FF5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170E9FF7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170E9FFA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170E9FFD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170EA000: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170E9497); /* 0x170EA003: call 0x170e9497 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170EA008: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170EA009: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170EA011(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EA011u);

L_170EA011:
    edi = edi; /* 0x170EA011: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EA013: push ebp */
    ebp = esp; /* 0x170EA014: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170EA016: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170EA019: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170EA01C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170EA01F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x170EA022: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170EA024: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170EA027: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170EA02A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170EA02D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170E96E4); /* 0x170EA030: call 0x170e96e4 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170EA035: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170EA036: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170EA03E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EA03Eu);

L_170EA03E:
    edi = edi; /* 0x170EA03E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EA040: push ebp */
    ebp = esp; /* 0x170EA041: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x170EA043: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170EA046: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170EA049: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170EA04C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, 0); /* 0x170EA04F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170EA051: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170EA054: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170EA057: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170EA05A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170EA05D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170E9A73); /* 0x170EA060: call 0x170e9a73 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170EA065: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x170EA066: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_170EA06E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EA06Eu);

L_170EA06E:
    edi = edi; /* 0x170EA06E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EA070: push ebp */
    ebp = esp; /* 0x170EA071: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x170EA073: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170EA076: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170EA079: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170EA07C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, 0); /* 0x170EA07F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170EA081: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170EA084: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170EA087: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170EA08A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170EA08D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170E9C55); /* 0x170EA090: call 0x170e9c55 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170EA095: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x170EA096: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_170EA09E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EA09Eu);

L_170EA09E:
    edi = edi; /* 0x170EA09E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EA0A0: push ebp */
    ebp = esp; /* 0x170EA0A1: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x170EA0A3: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170EA0A6: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170EA0A9: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x170EA0AC: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, 0); /* 0x170EA0AF: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170EA0B1: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170EA0B4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170EA0B7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170EA0BA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170EA0BD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170E9E3C); /* 0x170EA0C0: call 0x170e9e3c */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170EA0C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x170EA0C6: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_170EA0CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EA0CEu);

L_170EA0CE:
    edi = edi; /* 0x170EA0CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EA0D0: push ebp */
    ebp = esp; /* 0x170EA0D1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170EA0D3: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170EA0D4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x170EA0D6: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170EA0D9: push esi */
    PUSH32(esp, edi); /* 0x170EA0DA: push edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170EA12D; /* 0x170EA0DB: jbe 0x170ea12d */
L_170EA0DD:
    eax = MEM32(ebp + 0xC); /* 0x170EA0DD: mov eax, dword ptr [ebp + 0xc] */
L_170EA0E0:
    ecx = MEM32(eax); /* 0x170EA0E0: mov ecx, dword ptr [eax] */
    esi = MEM32(ecx); /* 0x170EA0E2: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x170EA0E4: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x170EA0E7: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax) = ecx; /* 0x170EA0EA: mov dword ptr [eax], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170EA136; /* 0x170EA0EC: jae 0x170ea136 */
L_170EA0EE:
    /* test esi, esi */ /* 0x170EA0EE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EA110; /* 0x170EA0F0: je 0x170ea110 */
L_170EA0F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170EA0F2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x170EA0F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EA110; /* 0x170EA0F6: jbe 0x170ea110 */
L_170EA0F8:
    ecx = MEM32(eax); /* 0x170EA0F8: mov ecx, dword ptr [eax] */
    edx = MEM32(ecx); /* 0x170EA0FA: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EA0FC: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x170EA0FF: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax) = ecx; /* 0x170EA102: mov dword ptr [eax], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170EA136; /* 0x170EA104: jae 0x170ea136 */
L_170EA106:
    /* cmp edx, 9 */ /* 0x170EA106: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA136; /* 0x170EA109: je 0x170ea136 */
L_170EA10B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x170EA10B: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, esi */ /* 0x170EA10C: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EA0F8; /* 0x170EA10E: jb 0x170ea0f8 */
L_170EA110:
    ecx = MEM32(eax); /* 0x170EA110: mov ecx, dword ptr [eax] */
    edx = MEM32(ecx); /* 0x170EA112: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EA114: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x170EA117: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax) = ecx; /* 0x170EA11A: mov dword ptr [eax], ecx */
    if (CMP_A(_flag_a, _flag_b)) goto L_170EA136; /* 0x170EA11C: ja 0x170ea136 */
L_170EA11E:
    /* test edx, edx */ /* 0x170EA11E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EA136; /* 0x170EA120: jbe 0x170ea136 */
L_170EA122:
    /* cmp edx, 9 */ /* 0x170EA122: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170EA136; /* 0x170EA125: ja 0x170ea136 */
L_170EA127:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170EA127: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0x8) */ /* 0x170EA128: cmp ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EA0E0; /* 0x170EA12B: jb 0x170ea0e0 */
L_170EA12D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EA12D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EA12F:
    edi = POP32_VAL(esp); /* 0x170EA12F: pop edi */
    esi = POP32_VAL(esp); /* 0x170EA130: pop esi */
    ebx = POP32_VAL(esp); /* 0x170EA131: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170EA132: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170EA133: ret 0xc */
L_170EA136:
    eax = 0x80004005u; /* 0x170EA136: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_170EA12F; /* 0x170EA13B: jmp 0x170ea12f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170EA142(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EA142u);

L_170EA142:
    edi = edi; /* 0x170EA142: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EA144: push ebp */
    ebp = esp; /* 0x170EA145: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x170EA147: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x170EA14A: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x170EA14C: mov edx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170EA14E: add eax, 4 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x170EA151: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x170EA153: mov dword ptr [ecx], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EA15E; /* 0x170EA155: je 0x170ea15e */
L_170EA157:
    eax = 0x80004005u; /* 0x170EA157: mov eax, 0x80004005 */
    goto L_170EA180; /* 0x170EA15C: jmp 0x170ea180 */
L_170EA15E:
    edx = MEM32(eax); /* 0x170EA15E: mov edx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA160: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x170EA163: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = eax; /* 0x170EA166: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_170EA157; /* 0x170EA168: jae 0x170ea157 */
L_170EA16A:
    /* cmp edx, 7 */ /* 0x170EA16A: cmp edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA17E; /* 0x170EA16D: je 0x170ea17e */
L_170EA16F:
    /* cmp edx, 4 */ /* 0x170EA16F: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA17E; /* 0x170EA172: je 0x170ea17e */
L_170EA174:
    /* cmp edx, 5 */ /* 0x170EA174: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA17E; /* 0x170EA177: je 0x170ea17e */
L_170EA179:
    /* cmp edx, 6 */ /* 0x170EA179: cmp edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA157; /* 0x170EA17C: jne 0x170ea157 */
L_170EA17E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EA17E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EA180:
    ebp = POP32_VAL(esp); /* 0x170EA180: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170EA181: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170EA189(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EA189u);

L_170EA189:
    edi = edi; /* 0x170EA189: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EA18B: push ebp */
    ebp = esp; /* 0x170EA18C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170EA18E: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EA191: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x170EA193: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 3); /* 0x170EA196: push 3 */
    ecx = POP32_VAL(esp); /* 0x170EA198: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170EA1B5; /* 0x170EA199: jbe 0x170ea1b5 */
L_170EA19B:
    /* cmp eax, ecx */ /* 0x170EA19B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170EA1C1; /* 0x170EA19D: jae 0x170ea1c1 */
L_170EA19F:
    edx = MEM32(ebp + 0xC); /* 0x170EA19F: mov edx, dword ptr [ebp + 0xc] */
    edx = MEM32(edx); /* 0x170EA1A2: mov edx, dword ptr [edx] */
    fp_push(*(double*)ADDR(edx + eax * 8)); /* 0x170EA1A4: fld qword ptr [edx + eax*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170EA1A7: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x170EA1A8: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax * 4 + (-0x10)) = _v; } /* 0x170EA1AB: fstp dword ptr [ebp + eax*4 - 0x10] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EA19B; /* 0x170EA1AF: jb 0x170ea19b */
L_170EA1B1:
    /* cmp eax, ecx */ /* 0x170EA1B1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170EA1C1; /* 0x170EA1B3: jae 0x170ea1c1 */
L_170EA1B5:
    PUSH32(esp, edi); /* 0x170EA1B5: push edi */
    edi = ebp + eax * 4 + (-0xC); /* 0x170EA1B6: lea edi, [ebp + eax*4 - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170EA1BA: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EA1BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170EA1BE: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x170EA1C0: pop edi */
L_170EA1C1:
    eax = ebp + (-0xC); /* 0x170EA1C1: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x170EA1C4: push eax */
    RECOMP_CALL(sub_170441D9); /* 0x170EA1C5: call 0x170441d9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x170EA1CA: mov eax, dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x170EA1CD: fstp qword ptr [eax] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EA1CF: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170EA1D0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170EA1D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EA1D8u);

L_170EA1D8:
    edi = edi; /* 0x170EA1D8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EA1DA: push ebp */
    ebp = esp; /* 0x170EA1DB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170EA1DD: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EA1E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x170EA1E2: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170EA209; /* 0x170EA1E5: jbe 0x170ea209 */
L_170EA1E7:
    edx = ebp + (-0xC); /* 0x170EA1E7: lea edx, [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170EA1EA: sub ecx, edx */
    _flag_k = FK_CMP;
L_170EA1EC:
    /* cmp eax, 3 */ /* 0x170EA1EC: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170EA218; /* 0x170EA1EF: jae 0x170ea218 */
L_170EA1F1:
    edx = ecx + eax * 4; /* 0x170EA1F1: lea edx, [ecx + eax*4] */
    edx = MEM32(ebp + edx + (-0xC)); /* 0x170EA1F4: mov edx, dword ptr [ebp + edx - 0xc] */
    fp_push(*(double*)ADDR(edx)); /* 0x170EA1F8: fld qword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170EA1FA: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x170EA1FB: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax * 4 + (-0x10)) = _v; } /* 0x170EA1FE: fstp dword ptr [ebp + eax*4 - 0x10] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EA1EC; /* 0x170EA202: jb 0x170ea1ec */
L_170EA204:
    /* cmp eax, 3 */ /* 0x170EA204: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170EA218; /* 0x170EA207: jae 0x170ea218 */
L_170EA209:
    PUSH32(esp, edi); /* 0x170EA209: push edi */
    PUSH32(esp, 3); /* 0x170EA20A: push 3 */
    ecx = POP32_VAL(esp); /* 0x170EA20C: pop ecx */
    edi = ebp + eax * 4 + (-0xC); /* 0x170EA20D: lea edi, [ebp + eax*4 - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170EA211: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EA213: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170EA215: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x170EA217: pop edi */
L_170EA218:
    eax = ebp + (-0xC); /* 0x170EA218: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x170EA21B: push eax */
    RECOMP_CALL(sub_170441D9); /* 0x170EA21C: call 0x170441d9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x170EA221: mov eax, dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x170EA224: fstp qword ptr [eax] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EA226: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170EA227: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170EA22F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EA22Fu);

L_170EA22F:
    edi = edi; /* 0x170EA22F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EA231: push ebp */
    ebp = esp; /* 0x170EA232: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC1Cu; /* 0x170EA234: sub esp, 0xc1c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x170EA23A: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x170EA23D: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x170EA23F: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x170EA243: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0x8); /* 0x170EA246: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170EA249: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170EA24B: add eax, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x170EA24E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x170EA250: mov dword ptr [ebp - 0x1c], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB53; /* 0x170EA253: jbe 0x170eab53 */
L_170EA259:
    edx = MEM32(ebp + (-0x4)); /* 0x170EA259: mov edx, dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x170EA25C: push ebx */
    PUSH32(esp, esi); /* 0x170EA25D: push esi */
    PUSH32(esp, edi); /* 0x170EA25E: push edi */
    goto L_170EA264; /* 0x170EA25F: jmp 0x170ea264 */
L_170EA261:
    eax = MEM32(ebp + 0x8); /* 0x170EA261: mov eax, dword ptr [ebp + 8] */
L_170EA264:
    edi = MEM32(eax); /* 0x170EA264: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170EA266: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x170EA269: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x10)) = edi; /* 0x170EA26B: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170EA26E: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x000FFFFFu);
    edi = edi & 0x000FFFFFu; /* 0x170EA271: and edi, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170EA277: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x170EA279: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x170EA27B: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + 0x8) = eax; /* 0x170EA27E: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EA3D1; /* 0x170EA281: jbe 0x170ea3d1 */
L_170EA287:
    eax = MEM32(ebp + 0x8); /* 0x170EA287: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x170EA28A: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x170EA28C: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EA290: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x170EA292: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EA331; /* 0x170EA294: jbe 0x170ea331 */
L_170EA29A:
    MEM32(ebp + (-0x18)) = ecx; /* 0x170EA29A: mov dword ptr [ebp - 0x18], ecx */
L_170EA29D:
    ecx = MEM32(ebp + 0x8); /* 0x170EA29D: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x170EA2A0: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    ebx = MEM32(ecx); /* 0x170EA2A4: mov ebx, dword ptr [ecx] */
    ecx = MEM32(ebp + 0x8); /* 0x170EA2A6: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x170EA2A9: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x170EA2AB: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    /* cmp ebx, 7 */ /* 0x170EA2AF: cmp ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ecx + eax * 4; /* 0x170EA2B2: lea eax, [ecx + eax*4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA2CB; /* 0x170EA2B5: jne 0x170ea2cb */
L_170EA2B7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x170EA2B7: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(double*)ADDR(ebp + eax * 8 + (-0xC1C))); /* 0x170EA2BC: fld qword ptr [ebp + eax*8 - 0xc1c] */
    RECOMP_CALL(sub_1721B050); /* 0x170EA2C3: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x170EA2C8: mov edx, dword ptr [ebp - 4] */
L_170EA2CB:
    /* cmp ebx, 1 */ /* 0x170EA2CB: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA2DE; /* 0x170EA2CE: jne 0x170ea2de */
L_170EA2D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170EA2D0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x14)); /* 0x170EA2D2: div dword ptr [ebp - 0x14] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + 0xC); /* 0x170EA2D5: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(eax + edx * 8 + 0x4)); /* 0x170EA2D8: fld qword ptr [eax + edx*8 + 4] */
    goto L_170EA320; /* 0x170EA2DC: jmp 0x170ea320 */
L_170EA2DE:
    /* cmp ebx, 2 */ /* 0x170EA2DE: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA2EB; /* 0x170EA2E1: jne 0x170ea2eb */
L_170EA2E3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    eax = eax & MEM32(ebp + 0x2C); /* 0x170EA2E3: and eax, dword ptr [ebp + 0x2c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14); /* 0x170EA2E6: mov ecx, dword ptr [ebp + 0x14] */
    goto L_170EA31D; /* 0x170EA2E9: jmp 0x170ea31d */
L_170EA2EB:
    /* cmp ebx, 3 */ /* 0x170EA2EB: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA2F8; /* 0x170EA2EE: jne 0x170ea2f8 */
L_170EA2F0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x28));
    eax = eax & MEM32(ebp + 0x28); /* 0x170EA2F0: and eax, dword ptr [ebp + 0x28] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x10); /* 0x170EA2F3: mov ecx, dword ptr [ebp + 0x10] */
    goto L_170EA31D; /* 0x170EA2F6: jmp 0x170ea31d */
L_170EA2F8:
    /* cmp ebx, 4 */ /* 0x170EA2F8: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA305; /* 0x170EA2FB: jne 0x170ea305 */
L_170EA2FD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    eax = eax & MEM32(ebp + 0x34); /* 0x170EA2FD: and eax, dword ptr [ebp + 0x34] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x1C); /* 0x170EA300: mov ecx, dword ptr [ebp + 0x1c] */
    goto L_170EA31D; /* 0x170EA303: jmp 0x170ea31d */
L_170EA305:
    /* cmp ebx, 5 */ /* 0x170EA305: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA312; /* 0x170EA308: jne 0x170ea312 */
L_170EA30A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x3C));
    eax = eax & MEM32(ebp + 0x3C); /* 0x170EA30A: and eax, dword ptr [ebp + 0x3c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x24); /* 0x170EA30D: mov ecx, dword ptr [ebp + 0x24] */
    goto L_170EA31D; /* 0x170EA310: jmp 0x170ea31d */
L_170EA312:
    /* cmp ebx, 6 */ /* 0x170EA312: cmp ebx, 6 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA328; /* 0x170EA315: jne 0x170ea328 */
L_170EA317:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x38));
    eax = eax & MEM32(ebp + 0x38); /* 0x170EA317: and eax, dword ptr [ebp + 0x38] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x20); /* 0x170EA31A: mov ecx, dword ptr [ebp + 0x20] */
L_170EA31D:
    fp_push(*(double*)ADDR(ecx + eax * 8)); /* 0x170EA31D: fld qword ptr [ecx + eax*8] */
L_170EA320:
    RECOMP_CALL(sub_1721B050); /* 0x170EA320: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x170EA325: mov edx, dword ptr [ebp - 4] */
L_170EA328:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x170EA328: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA29D; /* 0x170EA32B: jne 0x170ea29d */
L_170EA331:
    ebx = MEM32(ebp + 0x8); /* 0x170EA331: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebx); /* 0x170EA334: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x170EA336: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x170EA339: mov dword ptr [ebp + 8], ebx */
    ebx = MEM32(ebx); /* 0x170EA33C: mov ebx, dword ptr [ebx] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x170EA33E: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, 7 */ /* 0x170EA342: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx + eax * 4; /* 0x170EA345: lea eax, [ebx + eax*4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA358; /* 0x170EA348: jne 0x170ea358 */
L_170EA34A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x170EA34A: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + eax * 8 + (-0xC1C); /* 0x170EA34F: lea eax, [ebp + eax*8 - 0xc1c] */
    goto L_170EA3C0; /* 0x170EA356: jmp 0x170ea3c0 */
L_170EA358:
    /* cmp ecx, 2 */ /* 0x170EA358: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA365; /* 0x170EA35B: jne 0x170ea365 */
L_170EA35D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    eax = eax & MEM32(ebp + 0x2C); /* 0x170EA35D: and eax, dword ptr [ebp + 0x2c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14); /* 0x170EA360: mov ecx, dword ptr [ebp + 0x14] */
    goto L_170EA3BD; /* 0x170EA363: jmp 0x170ea3bd */
L_170EA365:
    /* cmp ecx, 3 */ /* 0x170EA365: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA372; /* 0x170EA368: jne 0x170ea372 */
L_170EA36A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x28));
    eax = eax & MEM32(ebp + 0x28); /* 0x170EA36A: and eax, dword ptr [ebp + 0x28] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x10); /* 0x170EA36D: mov ecx, dword ptr [ebp + 0x10] */
    goto L_170EA3BD; /* 0x170EA370: jmp 0x170ea3bd */
L_170EA372:
    /* cmp ecx, 1 */ /* 0x170EA372: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA388; /* 0x170EA375: jne 0x170ea388 */
L_170EA377:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170EA377: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x14)); /* 0x170EA379: div dword ptr [ebp - 0x14] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + 0xC); /* 0x170EA37C: mov eax, dword ptr [ebp + 0xc] */
    eax = eax + edx * 8 + 0x4; /* 0x170EA37F: lea eax, [eax + edx*8 + 4] */
    edx = MEM32(ebp + (-0x4)); /* 0x170EA383: mov edx, dword ptr [ebp - 4] */
    goto L_170EA3C0; /* 0x170EA386: jmp 0x170ea3c0 */
L_170EA388:
    /* cmp ecx, 9 */ /* 0x170EA388: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA398; /* 0x170EA38B: jne 0x170ea398 */
L_170EA38D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x30));
    eax = eax & MEM32(ebp + 0x30); /* 0x170EA38D: and eax, dword ptr [ebp + 0x30] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x18); /* 0x170EA390: mov ecx, dword ptr [ebp + 0x18] */
    eax = ecx + eax * 4; /* 0x170EA393: lea eax, [ecx + eax*4] */
    goto L_170EA3C0; /* 0x170EA396: jmp 0x170ea3c0 */
L_170EA398:
    /* cmp ecx, 4 */ /* 0x170EA398: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA3A5; /* 0x170EA39B: jne 0x170ea3a5 */
L_170EA39D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    eax = eax & MEM32(ebp + 0x34); /* 0x170EA39D: and eax, dword ptr [ebp + 0x34] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x1C); /* 0x170EA3A0: mov ecx, dword ptr [ebp + 0x1c] */
    goto L_170EA3BD; /* 0x170EA3A3: jmp 0x170ea3bd */
L_170EA3A5:
    /* cmp ecx, 5 */ /* 0x170EA3A5: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA3B2; /* 0x170EA3A8: jne 0x170ea3b2 */
L_170EA3AA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x3C));
    eax = eax & MEM32(ebp + 0x3C); /* 0x170EA3AA: and eax, dword ptr [ebp + 0x3c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x24); /* 0x170EA3AD: mov ecx, dword ptr [ebp + 0x24] */
    goto L_170EA3BD; /* 0x170EA3B0: jmp 0x170ea3bd */
L_170EA3B2:
    /* cmp ecx, 6 */ /* 0x170EA3B2: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA3C7; /* 0x170EA3B5: jne 0x170ea3c7 */
L_170EA3B7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x38));
    eax = eax & MEM32(ebp + 0x38); /* 0x170EA3B7: and eax, dword ptr [ebp + 0x38] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x20); /* 0x170EA3BA: mov ecx, dword ptr [ebp + 0x20] */
L_170EA3BD:
    eax = ecx + eax * 8; /* 0x170EA3BD: lea eax, [ecx + eax*8] */
L_170EA3C0:
    MEM32(ebp + esi * 4 + (-0x41C)) = eax; /* 0x170EA3C0: mov dword ptr [ebp + esi*4 - 0x41c], eax */
L_170EA3C7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170EA3C7: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x170EA3C8: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EA287; /* 0x170EA3CB: jb 0x170ea287 */
L_170EA3D1:
    ecx = MEM32(ebp + 0x8); /* 0x170EA3D1: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x170EA3D4: push 4 */
    ebx = POP32_VAL(esp); /* 0x170EA3D6: pop ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x170EA3D7: add ecx, ebx */
    _flag_k = FK_ADD;
    esi = MEM32(ecx); /* 0x170EA3D9: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x170EA3DB: add ecx, ebx */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x170EA3DD: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x170EA3DF: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp esi, 7 */ /* 0x170EA3E1: cmp esi, 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x170EA3E4: mov dword ptr [ebp + 8], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA3F7; /* 0x170EA3E7: jne 0x170ea3f7 */
L_170EA3E9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x170EA3E9: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + eax * 8 + (-0xC1C); /* 0x170EA3EE: lea edx, [ebp + eax*8 - 0xc1c] */
    goto L_170EA41E; /* 0x170EA3F5: jmp 0x170ea41e */
L_170EA3F7:
    /* cmp esi, ebx */ /* 0x170EA3F7: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA403; /* 0x170EA3F9: jne 0x170ea403 */
L_170EA3FB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    eax = eax & MEM32(ebp + 0x34); /* 0x170EA3FB: and eax, dword ptr [ebp + 0x34] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x1C); /* 0x170EA3FE: mov ecx, dword ptr [ebp + 0x1c] */
    goto L_170EA41B; /* 0x170EA401: jmp 0x170ea41b */
L_170EA403:
    /* cmp esi, 5 */ /* 0x170EA403: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA410; /* 0x170EA406: jne 0x170ea410 */
L_170EA408:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x3C));
    eax = eax & MEM32(ebp + 0x3C); /* 0x170EA408: and eax, dword ptr [ebp + 0x3c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x24); /* 0x170EA40B: mov ecx, dword ptr [ebp + 0x24] */
    goto L_170EA41B; /* 0x170EA40E: jmp 0x170ea41b */
L_170EA410:
    /* cmp esi, 6 */ /* 0x170EA410: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EA421; /* 0x170EA413: jne 0x170ea421 */
L_170EA415:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x38));
    eax = eax & MEM32(ebp + 0x38); /* 0x170EA415: and eax, dword ptr [ebp + 0x38] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x20); /* 0x170EA418: mov ecx, dword ptr [ebp + 0x20] */
L_170EA41B:
    edx = ecx + eax * 8; /* 0x170EA41B: lea edx, [ecx + eax*8] */
L_170EA41E:
    MEM32(ebp + (-0x4)) = edx; /* 0x170EA41E: mov dword ptr [ebp - 4], edx */
L_170EA421:
    eax = MEM32(ebp + (-0x10)); /* 0x170EA421: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x170EA424: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170EA60E; /* 0x170EA426: jns 0x170ea60e */
L_170EA42C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    eax = eax & 0x7FF00000u; /* 0x170EA42C: and eax, 0x7ff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x20400000u; /* 0x170EA431: mov ecx, 0x20400000 */
    /* cmp eax, ecx */ /* 0x170EA436: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170EA572; /* 0x170EA438: ja 0x170ea572 */
L_170EA43E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA548; /* 0x170EA43E: je 0x170ea548 */
L_170EA444:
    /* cmp eax, 0x20000000u */ /* 0x170EA444: cmp eax, 0x20000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA511; /* 0x170EA449: je 0x170ea511 */
L_170EA44F:
    /* cmp eax, 0x20100000u */ /* 0x170EA44F: cmp eax, 0x20100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA4DA; /* 0x170EA454: je 0x170ea4da */
L_170EA45A:
    /* cmp eax, 0x20200000u */ /* 0x170EA45A: cmp eax, 0x20200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA4A3; /* 0x170EA45F: je 0x170ea4a3 */
L_170EA461:
    /* cmp eax, 0x20300000u */ /* 0x170EA461: cmp eax, 0x20300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA466: jne 0x170eab41 */
L_170EA46C:
    /* test edi, edi */ /* 0x170EA46C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA46E: jbe 0x170eab41 */
L_170EA474:
    esi = MEM32(ebp + (-0x418)); /* 0x170EA474: mov esi, dword ptr [ebp - 0x418] */
    ecx = edx; /* 0x170EA47A: mov ecx, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x170EA47C: sub esi, edx */
    _flag_k = FK_CMP;
L_170EA47E:
    eax = MEM32(ebp + (-0x41C)); /* 0x170EA47E: mov eax, dword ptr [ebp - 0x41c] */
    fp_push(*(double*)ADDR(eax)); /* 0x170EA484: fld qword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + ecx)); /* 0x170EA486: fcomp qword ptr [esi + ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170EA489: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x170EA48B: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EA494; /* 0x170EA48E: jne 0x170ea494 */
L_170EA490:
    fp_push(1.0); /* 0x170EA490: fld1  */
    goto L_170EA496; /* 0x170EA492: jmp 0x170ea496 */
L_170EA494:
    fp_push(0.0); /* 0x170EA494: fldz  */
L_170EA496:
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x170EA496: fstp qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EA498: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA49B: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA47E; /* 0x170EA49C: jne 0x170ea47e */
L_170EA49E:
    goto L_170EAB41; /* 0x170EA49E: jmp 0x170eab41 */
L_170EA4A3:
    /* test edi, edi */ /* 0x170EA4A3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA4A5: jbe 0x170eab41 */
L_170EA4AB:
    esi = MEM32(ebp + (-0x418)); /* 0x170EA4AB: mov esi, dword ptr [ebp - 0x418] */
    ecx = edx; /* 0x170EA4B1: mov ecx, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x170EA4B3: sub esi, edx */
    _flag_k = FK_CMP;
L_170EA4B5:
    eax = MEM32(ebp + (-0x41C)); /* 0x170EA4B5: mov eax, dword ptr [ebp - 0x41c] */
    fp_push(*(double*)ADDR(eax)); /* 0x170EA4BB: fld qword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + ecx)); /* 0x170EA4BD: fcomp qword ptr [esi + ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170EA4C0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170EA4C2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170EA4CB; /* 0x170EA4C5: jp 0x170ea4cb */
L_170EA4C7:
    fp_push(1.0); /* 0x170EA4C7: fld1  */
    goto L_170EA4CD; /* 0x170EA4C9: jmp 0x170ea4cd */
L_170EA4CB:
    fp_push(0.0); /* 0x170EA4CB: fldz  */
L_170EA4CD:
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x170EA4CD: fstp qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EA4CF: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA4D2: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA4B5; /* 0x170EA4D3: jne 0x170ea4b5 */
L_170EA4D5:
    goto L_170EAB41; /* 0x170EA4D5: jmp 0x170eab41 */
L_170EA4DA:
    /* test edi, edi */ /* 0x170EA4DA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA4DC: jbe 0x170eab41 */
L_170EA4E2:
    ecx = MEM32(ebp + (-0x418)); /* 0x170EA4E2: mov ecx, dword ptr [ebp - 0x418] */
    ebx = MEM32(ebp + (-0x41C)); /* 0x170EA4E8: mov ebx, dword ptr [ebp - 0x41c] */
    esi = edx; /* 0x170EA4EE: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x170EA4F0: sub esi, ecx */
    _flag_k = FK_CMP;
L_170EA4F2:
    fp_push(*(double*)ADDR(ebx)); /* 0x170EA4F2: fld qword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x170EA4F4: fcomp qword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170EA4F6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170EA4F8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EA501; /* 0x170EA4FB: jne 0x170ea501 */
L_170EA4FD:
    fp_push(*(double*)ADDR(ebx)); /* 0x170EA4FD: fld qword ptr [ebx] */
    goto L_170EA503; /* 0x170EA4FF: jmp 0x170ea503 */
L_170EA501:
    fp_push(*(double*)ADDR(ecx)); /* 0x170EA501: fld qword ptr [ecx] */
L_170EA503:
    { double _v = fp_pop(); *(double*)ADDR(esi + ecx) = _v; } /* 0x170EA503: fstp qword ptr [esi + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EA506: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA509: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA4F2; /* 0x170EA50A: jne 0x170ea4f2 */
L_170EA50C:
    goto L_170EAB41; /* 0x170EA50C: jmp 0x170eab41 */
L_170EA511:
    /* test edi, edi */ /* 0x170EA511: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA513: jbe 0x170eab41 */
L_170EA519:
    ecx = MEM32(ebp + (-0x418)); /* 0x170EA519: mov ecx, dword ptr [ebp - 0x418] */
    ebx = MEM32(ebp + (-0x41C)); /* 0x170EA51F: mov ebx, dword ptr [ebp - 0x41c] */
    esi = edx; /* 0x170EA525: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x170EA527: sub esi, ecx */
    _flag_k = FK_CMP;
L_170EA529:
    fp_push(*(double*)ADDR(ebx)); /* 0x170EA529: fld qword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x170EA52B: fcomp qword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170EA52D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170EA52F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170EA538; /* 0x170EA532: jp 0x170ea538 */
L_170EA534:
    fp_push(*(double*)ADDR(ebx)); /* 0x170EA534: fld qword ptr [ebx] */
    goto L_170EA53A; /* 0x170EA536: jmp 0x170ea53a */
L_170EA538:
    fp_push(*(double*)ADDR(ecx)); /* 0x170EA538: fld qword ptr [ecx] */
L_170EA53A:
    { double _v = fp_pop(); *(double*)ADDR(ecx + esi) = _v; } /* 0x170EA53A: fstp qword ptr [ecx + esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EA53D: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA540: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA529; /* 0x170EA541: jne 0x170ea529 */
L_170EA543:
    goto L_170EAB41; /* 0x170EA543: jmp 0x170eab41 */
L_170EA548:
    /* test edi, edi */ /* 0x170EA548: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA54A: jbe 0x170eab41 */
L_170EA550:
    ecx = MEM32(ebp + (-0x418)); /* 0x170EA550: mov ecx, dword ptr [ebp - 0x418] */
    eax = edx; /* 0x170EA556: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170EA558: sub ecx, edx */
    _flag_k = FK_CMP;
L_170EA55A:
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x170EA55A: fld qword ptr [ecx + eax] */
    esi = MEM32(ebp + (-0x41C)); /* 0x170EA55D: mov esi, dword ptr [ebp - 0x41c] */
    _st[0] += *(double*)ADDR(esi); /* 0x170EA563: fadd qword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x170EA565: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA567: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA56A: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA55A; /* 0x170EA56B: jne 0x170ea55a */
L_170EA56D:
    goto L_170EAB41; /* 0x170EA56D: jmp 0x170eab41 */
L_170EA572:
    /* cmp eax, 0x20500000u */ /* 0x170EA572: cmp eax, 0x20500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA5E4; /* 0x170EA577: je 0x170ea5e4 */
L_170EA579:
    /* cmp eax, 0x20600000u */ /* 0x170EA579: cmp eax, 0x20600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA5B8; /* 0x170EA57E: je 0x170ea5b8 */
L_170EA580:
    /* cmp eax, 0x50000000u */ /* 0x170EA580: cmp eax, 0x50000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA585: jne 0x170eab41 */
L_170EA58B:
    fp_push(0.0); /* 0x170EA58B: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EA58D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170EA58F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(edx) = _v; } /* 0x170EA591: fstp qword ptr [edx] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA593: jbe 0x170eab41 */
L_170EA599:
    ecx = MEM32(ebp + (-0x418)); /* 0x170EA599: mov ecx, dword ptr [ebp - 0x418] */
    fp_push(*(double*)ADDR(ecx + eax * 8)); /* 0x170EA59F: fld qword ptr [ecx + eax*8] */
    ecx = MEM32(ebp + (-0x41C)); /* 0x170EA5A2: mov ecx, dword ptr [ebp - 0x41c] */
    _st[0] *= *(double*)ADDR(ecx); /* 0x170EA5A8: fmul qword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170EA5AA: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x170EA5AB: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += *(double*)ADDR(edx); /* 0x170EA5AD: fadd qword ptr [edx] */
    { double _v = fp_pop(); *(double*)ADDR(edx) = _v; } /* 0x170EA5AF: fstp qword ptr [edx] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EA599; /* 0x170EA5B1: jb 0x170ea599 */
L_170EA5B3:
    goto L_170EAB41; /* 0x170EA5B3: jmp 0x170eab41 */
L_170EA5B8:
    /* test edi, edi */ /* 0x170EA5B8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA5BA: jbe 0x170eab41 */
L_170EA5C0:
    ecx = MEM32(ebp + (-0x418)); /* 0x170EA5C0: mov ecx, dword ptr [ebp - 0x418] */
    eax = edx; /* 0x170EA5C6: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170EA5C8: sub ecx, edx */
    _flag_k = FK_CMP;
L_170EA5CA:
    esi = MEM32(ebp + (-0x41C)); /* 0x170EA5CA: mov esi, dword ptr [ebp - 0x41c] */
    fp_push(*(double*)ADDR(esi)); /* 0x170EA5D0: fld qword ptr [esi] */
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x170EA5D2: fld qword ptr [ecx + eax] */
    { double _x = fp_pop(); _st[0] = atan2(_st[0], _x); } /* 0x170EA5D5: fpatan  */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x170EA5D7: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA5D9: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA5DC: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA5CA; /* 0x170EA5DD: jne 0x170ea5ca */
L_170EA5DF:
    goto L_170EAB41; /* 0x170EA5DF: jmp 0x170eab41 */
L_170EA5E4:
    /* test edi, edi */ /* 0x170EA5E4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA5E6: jbe 0x170eab41 */
L_170EA5EC:
    ecx = MEM32(ebp + (-0x418)); /* 0x170EA5EC: mov ecx, dword ptr [ebp - 0x418] */
    eax = edx; /* 0x170EA5F2: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170EA5F4: sub ecx, edx */
    _flag_k = FK_CMP;
L_170EA5F6:
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x170EA5F6: fld qword ptr [ecx + eax] */
    esi = MEM32(ebp + (-0x41C)); /* 0x170EA5F9: mov esi, dword ptr [ebp - 0x41c] */
    _st[0] *= *(double*)ADDR(esi); /* 0x170EA5FF: fmul qword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x170EA601: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA603: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA606: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA5F6; /* 0x170EA607: jne 0x170ea5f6 */
L_170EA609:
    goto L_170EAB41; /* 0x170EA609: jmp 0x170eab41 */
L_170EA60E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    eax = eax & 0x7FF00000u; /* 0x170EA60E: and eax, 0x7ff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x20000000u; /* 0x170EA613: mov ecx, 0x20000000 */
    /* cmp eax, ecx */ /* 0x170EA618: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170EA8D0; /* 0x170EA61A: ja 0x170ea8d0 */
L_170EA620:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA895; /* 0x170EA620: je 0x170ea895 */
L_170EA626:
    ecx = 0x10700000u; /* 0x170EA626: mov ecx, 0x10700000 */
    /* cmp eax, ecx */ /* 0x170EA62B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170EA7AA; /* 0x170EA62D: ja 0x170ea7aa */
L_170EA633:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA77E; /* 0x170EA633: je 0x170ea77e */
L_170EA639:
    /* cmp eax, 0x10000000u */ /* 0x170EA639: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA76C; /* 0x170EA63E: je 0x170ea76c */
L_170EA644:
    /* cmp eax, 0x10100000u */ /* 0x170EA644: cmp eax, 0x10100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA748; /* 0x170EA649: je 0x170ea748 */
L_170EA64F:
    /* cmp eax, 0x10300000u */ /* 0x170EA64F: cmp eax, 0x10300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA724; /* 0x170EA654: je 0x170ea724 */
L_170EA65A:
    /* cmp eax, 0x10400000u */ /* 0x170EA65A: cmp eax, 0x10400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA6F4; /* 0x170EA65F: je 0x170ea6f4 */
L_170EA665:
    /* cmp eax, 0x10500000u */ /* 0x170EA665: cmp eax, 0x10500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA6C7; /* 0x170EA66A: je 0x170ea6c7 */
L_170EA66C:
    /* cmp eax, 0x10600000u */ /* 0x170EA66C: cmp eax, 0x10600000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA671: jne 0x170eab41 */
L_170EA677:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170EA677: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170EA679: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA67B: jbe 0x170eab41 */
L_170EA681:
    esi = MEM32(ebp + (-0x41C)); /* 0x170EA681: mov esi, dword ptr [ebp - 0x41c] */
    ecx = edx; /* 0x170EA687: mov ecx, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x170EA689: sub esi, edx */
    _flag_k = FK_CMP;
L_170EA68B:
    eax = MEM32(ebp + ebx * 4 + (-0x41C)); /* 0x170EA68B: mov eax, dword ptr [ebp + ebx*4 - 0x41c] */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x170EA692: fld qword ptr [0x17001d90] */
    fp_push(*(double*)ADDR(eax)); /* 0x170EA698: fld qword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170EA69A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170EA69C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170EA69E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_170EA6B6; /* 0x170EA6A1: jnp 0x170ea6b6 */
L_170EA6A3:
    fp_push(*(double*)ADDR(esi + ecx)); /* 0x170EA6A3: fld qword ptr [esi + ecx] */
    _st[0] = fabs(_st[0]); /* 0x170EA6A6: fabs  */
    fp_push(0.6931471805599453); /* ln(2) */ /* 0x170EA6A8: fldln2  */
    fp_xch(1); /* 0x170EA6AA: fxch st(1) */
    { double _x = fp_pop(); _st[0] *= log(_x) / 0.6931471805599453; } /* 0x170EA6AC: fyl2x  */
    _st[0] *= *(double*)ADDR(0x1700B550); /* 0x170EA6AE: fmul qword ptr [0x1700b550] */
    goto L_170EA6B8; /* 0x170EA6B4: jmp 0x170ea6b8 */
L_170EA6B6:
    fp_push(0.0); /* 0x170EA6B6: fldz  */
L_170EA6B8:
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x170EA6B8: fstp qword ptr [ecx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170EA6BA: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EA6BB: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp ebx, edi */ /* 0x170EA6BE: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EA68B; /* 0x170EA6C0: jb 0x170ea68b */
L_170EA6C2:
    goto L_170EAB41; /* 0x170EA6C2: jmp 0x170eab41 */
L_170EA6C7:
    /* test edi, edi */ /* 0x170EA6C7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA6C9: jbe 0x170eab41 */
L_170EA6CF:
    ebx = MEM32(ebp + (-0x41C)); /* 0x170EA6CF: mov ebx, dword ptr [ebp - 0x41c] */
    esi = edx; /* 0x170EA6D5: mov esi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x170EA6D7: sub ebx, edx */
    _flag_k = FK_CMP;
L_170EA6D9:
    fp_push(*(double*)ADDR(0x1700B548)); /* 0x170EA6D9: fld qword ptr [0x1700b548] */
    fp_push(*(double*)ADDR(esi + ebx)); /* 0x170EA6DF: fld qword ptr [esi + ebx] */
    RECOMP_CALL(sub_1721B036); /* 0x170EA6E2: call 0x1721b036 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x170EA6E7: fstp qword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x170EA6E9: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA6EC: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA6D9; /* 0x170EA6ED: jne 0x170ea6d9 */
L_170EA6EF:
    goto L_170EAA86; /* 0x170EA6EF: jmp 0x170eaa86 */
L_170EA6F4:
    /* test edi, edi */ /* 0x170EA6F4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA6F6: jbe 0x170eab41 */
L_170EA6FC:
    esi = MEM32(ebp + (-0x41C)); /* 0x170EA6FC: mov esi, dword ptr [ebp - 0x41c] */
    ebx = edx; /* 0x170EA702: mov ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x170EA704: sub ebx, esi */
    _flag_k = FK_CMP;
L_170EA706:
    fp_push(*(double*)ADDR(esi)); /* 0x170EA706: fld qword ptr [esi] */
    PUSH32(esp, ecx); /* 0x170EA708: push ecx */
    PUSH32(esp, ecx); /* 0x170EA709: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x170EA70A: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1721B320); /* 0x170EA70D: call 0x1721b320 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(esi) - _st[0]; /* 0x170EA712: fsubr qword ptr [esi] */
    ecx = POP32_VAL(esp); /* 0x170EA714: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170EA715: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebx + esi) = _v; } /* 0x170EA716: fstp qword ptr [ebx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x170EA719: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA71C: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA706; /* 0x170EA71D: jne 0x170ea706 */
L_170EA71F:
    goto L_170EAA86; /* 0x170EA71F: jmp 0x170eaa86 */
L_170EA724:
    /* test edi, edi */ /* 0x170EA724: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA726: jbe 0x170eab41 */
L_170EA72C:
    ecx = MEM32(ebp + (-0x41C)); /* 0x170EA72C: mov ecx, dword ptr [ebp - 0x41c] */
    eax = edx; /* 0x170EA732: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170EA734: sub ecx, edx */
    _flag_k = FK_CMP;
L_170EA736:
    fp_push(1.0); /* 0x170EA736: fld1  */
    _st[0] /= *(double*)ADDR(eax + ecx); /* 0x170EA738: fdiv qword ptr [eax + ecx] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x170EA73B: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA73D: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA740: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA736; /* 0x170EA741: jne 0x170ea736 */
L_170EA743:
    goto L_170EAB41; /* 0x170EA743: jmp 0x170eab41 */
L_170EA748:
    /* test edi, edi */ /* 0x170EA748: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA74A: jbe 0x170eab41 */
L_170EA750:
    ecx = MEM32(ebp + (-0x41C)); /* 0x170EA750: mov ecx, dword ptr [ebp - 0x41c] */
    eax = edx; /* 0x170EA756: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170EA758: sub ecx, edx */
    _flag_k = FK_CMP;
L_170EA75A:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x170EA75A: fld qword ptr [eax + ecx] */
    _st[0] = -_st[0]; /* 0x170EA75D: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x170EA75F: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA761: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA764: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA75A; /* 0x170EA765: jne 0x170ea75a */
L_170EA767:
    goto L_170EAB41; /* 0x170EA767: jmp 0x170eab41 */
L_170EA76C:
    esi = MEM32(ebp + (-0x41C)); /* 0x170EA76C: mov esi, dword ptr [ebp - 0x41c] */
    ecx = edi + edi; /* 0x170EA772: lea ecx, [edi + edi] */
    edi = edx; /* 0x170EA775: mov edi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170EA777: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_170EAB41; /* 0x170EA779: jmp 0x170eab41 */
L_170EA77E:
    /* test edi, edi */ /* 0x170EA77E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA780: jbe 0x170eab41 */
L_170EA786:
    ecx = MEM32(ebp + (-0x41C)); /* 0x170EA786: mov ecx, dword ptr [ebp - 0x41c] */
    eax = edx; /* 0x170EA78C: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170EA78E: sub ecx, edx */
    _flag_k = FK_CMP;
L_170EA790:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x170EA790: fld qword ptr [eax + ecx] */
    _st[0] = fabs(_st[0]); /* 0x170EA793: fabs  */
    _st[0] = sqrt(_st[0]); /* 0x170EA795: fsqrt  */
    _st[0] = *(double*)ADDR(0x17001D88) / _st[0]; /* 0x170EA797: fdivr qword ptr [0x17001d88] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x170EA79D: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA79F: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA7A2: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA790; /* 0x170EA7A3: jne 0x170ea790 */
L_170EA7A5:
    goto L_170EAB41; /* 0x170EA7A5: jmp 0x170eab41 */
L_170EA7AA:
    /* cmp eax, 0x10800000u */ /* 0x170EA7AA: cmp eax, 0x10800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA871; /* 0x170EA7AF: je 0x170ea871 */
L_170EA7B5:
    /* cmp eax, 0x10900000u */ /* 0x170EA7B5: cmp eax, 0x10900000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA84D; /* 0x170EA7BA: je 0x170ea84d */
L_170EA7C0:
    /* cmp eax, 0x10A00000u */ /* 0x170EA7C0: cmp eax, 0x10a00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA826; /* 0x170EA7C5: je 0x170ea826 */
L_170EA7C7:
    /* cmp eax, 0x10B00000u */ /* 0x170EA7C7: cmp eax, 0x10b00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA7FF; /* 0x170EA7CC: je 0x170ea7ff */
L_170EA7CE:
    /* cmp eax, 0x10C00000u */ /* 0x170EA7CE: cmp eax, 0x10c00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA7D3: jne 0x170eab41 */
L_170EA7D9:
    /* test edi, edi */ /* 0x170EA7D9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA7DB: jbe 0x170eab41 */
L_170EA7E1:
    ecx = MEM32(ebp + (-0x41C)); /* 0x170EA7E1: mov ecx, dword ptr [ebp - 0x41c] */
    eax = edx; /* 0x170EA7E7: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170EA7E9: sub ecx, edx */
    _flag_k = FK_CMP;
L_170EA7EB:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x170EA7EB: fld qword ptr [eax + ecx] */
    fp_push(1.0); /* 0x170EA7EE: fld1  */
    { double _x = fp_pop(); _st[0] = atan2(_st[0], _x); } /* 0x170EA7F0: fpatan  */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x170EA7F2: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA7F4: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA7F7: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA7EB; /* 0x170EA7F8: jne 0x170ea7eb */
L_170EA7FA:
    goto L_170EAB41; /* 0x170EA7FA: jmp 0x170eab41 */
L_170EA7FF:
    /* test edi, edi */ /* 0x170EA7FF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA801: jbe 0x170eab41 */
L_170EA807:
    ebx = MEM32(ebp + (-0x41C)); /* 0x170EA807: mov ebx, dword ptr [ebp - 0x41c] */
    esi = edx; /* 0x170EA80D: mov esi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x170EA80F: sub ebx, edx */
    _flag_k = FK_CMP;
L_170EA811:
    fp_push(*(double*)ADDR(esi + ebx)); /* 0x170EA811: fld qword ptr [esi + ebx] */
    RECOMP_CALL(sub_1721B142); /* 0x170EA814: call 0x1721b142 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x170EA819: fstp qword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x170EA81B: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA81E: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA811; /* 0x170EA81F: jne 0x170ea811 */
L_170EA821:
    goto L_170EAA86; /* 0x170EA821: jmp 0x170eaa86 */
L_170EA826:
    /* test edi, edi */ /* 0x170EA826: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA828: jbe 0x170eab41 */
L_170EA82E:
    ebx = MEM32(ebp + (-0x41C)); /* 0x170EA82E: mov ebx, dword ptr [ebp - 0x41c] */
    esi = edx; /* 0x170EA834: mov esi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x170EA836: sub ebx, edx */
    _flag_k = FK_CMP;
L_170EA838:
    fp_push(*(double*)ADDR(esi + ebx)); /* 0x170EA838: fld qword ptr [esi + ebx] */
    RECOMP_CALL(sub_1721B18C); /* 0x170EA83B: call 0x1721b18c */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x170EA840: fstp qword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x170EA842: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA845: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA838; /* 0x170EA846: jne 0x170ea838 */
L_170EA848:
    goto L_170EAA86; /* 0x170EA848: jmp 0x170eaa86 */
L_170EA84D:
    /* test edi, edi */ /* 0x170EA84D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA84F: jbe 0x170eab41 */
L_170EA855:
    ecx = MEM32(ebp + (-0x41C)); /* 0x170EA855: mov ecx, dword ptr [ebp - 0x41c] */
    eax = edx; /* 0x170EA85B: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170EA85D: sub ecx, edx */
    _flag_k = FK_CMP;
L_170EA85F:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x170EA85F: fld qword ptr [eax + ecx] */
    _st[0] = cos(_st[0]); _fpu_cmp = 1; /* 0x170EA862: fcos  */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x170EA864: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA866: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA869: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA85F; /* 0x170EA86A: jne 0x170ea85f */
L_170EA86C:
    goto L_170EAB41; /* 0x170EA86C: jmp 0x170eab41 */
L_170EA871:
    /* test edi, edi */ /* 0x170EA871: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA873: jbe 0x170eab41 */
L_170EA879:
    ecx = MEM32(ebp + (-0x41C)); /* 0x170EA879: mov ecx, dword ptr [ebp - 0x41c] */
    eax = edx; /* 0x170EA87F: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x170EA881: sub ecx, edx */
    _flag_k = FK_CMP;
L_170EA883:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x170EA883: fld qword ptr [eax + ecx] */
    _st[0] = sin(_st[0]); _fpu_cmp = 1; /* 0x170EA886: fsin  */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x170EA888: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA88A: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA88D: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA883; /* 0x170EA88E: jne 0x170ea883 */
L_170EA890:
    goto L_170EAB41; /* 0x170EA890: jmp 0x170eab41 */
L_170EA895:
    /* test edi, edi */ /* 0x170EA895: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA897: jbe 0x170eab41 */
L_170EA89D:
    ecx = MEM32(ebp + (-0x418)); /* 0x170EA89D: mov ecx, dword ptr [ebp - 0x418] */
    ebx = MEM32(ebp + (-0x41C)); /* 0x170EA8A3: mov ebx, dword ptr [ebp - 0x41c] */
    esi = edx; /* 0x170EA8A9: mov esi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x170EA8AB: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x170EA8AD: sub esi, ecx */
    _flag_k = FK_CMP;
L_170EA8AF:
    fp_push(*(double*)ADDR(ebx + ecx)); /* 0x170EA8AF: fld qword ptr [ebx + ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x170EA8B2: fcomp qword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170EA8B4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170EA8B6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170EA8C0; /* 0x170EA8B9: jp 0x170ea8c0 */
L_170EA8BB:
    fp_push(*(double*)ADDR(ebx + ecx)); /* 0x170EA8BB: fld qword ptr [ebx + ecx] */
    goto L_170EA8C2; /* 0x170EA8BE: jmp 0x170ea8c2 */
L_170EA8C0:
    fp_push(*(double*)ADDR(ecx)); /* 0x170EA8C0: fld qword ptr [ecx] */
L_170EA8C2:
    { double _v = fp_pop(); *(double*)ADDR(ecx + esi) = _v; } /* 0x170EA8C2: fstp qword ptr [ecx + esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EA8C5: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA8C8: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA8AF; /* 0x170EA8C9: jne 0x170ea8af */
L_170EA8CB:
    goto L_170EAB41; /* 0x170EA8CB: jmp 0x170eab41 */
L_170EA8D0:
    ecx = 0x20600000u; /* 0x170EA8D0: mov ecx, 0x20600000 */
    /* cmp eax, ecx */ /* 0x170EA8D5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170EAA4A; /* 0x170EA8D7: ja 0x170eaa4a */
L_170EA8DD:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EAA1D; /* 0x170EA8DD: je 0x170eaa1d */
L_170EA8E3:
    /* cmp eax, 0x20100000u */ /* 0x170EA8E3: cmp eax, 0x20100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA9E2; /* 0x170EA8E8: je 0x170ea9e2 */
L_170EA8EE:
    /* cmp eax, 0x20200000u */ /* 0x170EA8EE: cmp eax, 0x20200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA9A8; /* 0x170EA8F3: je 0x170ea9a8 */
L_170EA8F9:
    /* cmp eax, 0x20300000u */ /* 0x170EA8F9: cmp eax, 0x20300000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA96E; /* 0x170EA8FE: je 0x170ea96e */
L_170EA900:
    /* cmp eax, 0x20400000u */ /* 0x170EA900: cmp eax, 0x20400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EA940; /* 0x170EA905: je 0x170ea940 */
L_170EA907:
    /* cmp eax, 0x20500000u */ /* 0x170EA907: cmp eax, 0x20500000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA90C: jne 0x170eab41 */
L_170EA912:
    /* test edi, edi */ /* 0x170EA912: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA914: jbe 0x170eab41 */
L_170EA91A:
    eax = MEM32(ebp + (-0x418)); /* 0x170EA91A: mov eax, dword ptr [ebp - 0x418] */
    ecx = MEM32(ebp + (-0x41C)); /* 0x170EA920: mov ecx, dword ptr [ebp - 0x41c] */
    edx = MEM32(ebp + (-0x4)); /* 0x170EA926: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170EA929: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170EA92B: sub edx, eax */
    _flag_k = FK_CMP;
L_170EA92D:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x170EA92D: fld qword ptr [eax + ecx] */
    _st[0] *= *(double*)ADDR(eax); /* 0x170EA930: fmul qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(eax + edx) = _v; } /* 0x170EA932: fstp qword ptr [eax + edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA935: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA938: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA92D; /* 0x170EA939: jne 0x170ea92d */
L_170EA93B:
    goto L_170EAA86; /* 0x170EA93B: jmp 0x170eaa86 */
L_170EA940:
    /* test edi, edi */ /* 0x170EA940: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA942: jbe 0x170eab41 */
L_170EA948:
    eax = MEM32(ebp + (-0x418)); /* 0x170EA948: mov eax, dword ptr [ebp - 0x418] */
    ecx = MEM32(ebp + (-0x41C)); /* 0x170EA94E: mov ecx, dword ptr [ebp - 0x41c] */
    edx = MEM32(ebp + (-0x4)); /* 0x170EA954: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170EA957: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170EA959: sub edx, eax */
    _flag_k = FK_CMP;
L_170EA95B:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x170EA95B: fld qword ptr [eax + ecx] */
    _st[0] += *(double*)ADDR(eax); /* 0x170EA95E: fadd qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(eax + edx) = _v; } /* 0x170EA960: fstp qword ptr [eax + edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EA963: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA966: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA95B; /* 0x170EA967: jne 0x170ea95b */
L_170EA969:
    goto L_170EAA86; /* 0x170EA969: jmp 0x170eaa86 */
L_170EA96E:
    /* test edi, edi */ /* 0x170EA96E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA970: jbe 0x170eab41 */
L_170EA976:
    ecx = MEM32(ebp + (-0x418)); /* 0x170EA976: mov ecx, dword ptr [ebp - 0x418] */
    ebx = MEM32(ebp + (-0x41C)); /* 0x170EA97C: mov ebx, dword ptr [ebp - 0x41c] */
    esi = edx; /* 0x170EA982: mov esi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x170EA984: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x170EA986: sub esi, ecx */
    _flag_k = FK_CMP;
L_170EA988:
    fp_push(*(double*)ADDR(ecx + ebx)); /* 0x170EA988: fld qword ptr [ecx + ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x170EA98B: fcomp qword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170EA98D: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x170EA98F: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EA998; /* 0x170EA992: jne 0x170ea998 */
L_170EA994:
    fp_push(1.0); /* 0x170EA994: fld1  */
    goto L_170EA99A; /* 0x170EA996: jmp 0x170ea99a */
L_170EA998:
    fp_push(0.0); /* 0x170EA998: fldz  */
L_170EA99A:
    { double _v = fp_pop(); *(double*)ADDR(ecx + esi) = _v; } /* 0x170EA99A: fstp qword ptr [ecx + esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EA99D: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA9A0: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA988; /* 0x170EA9A1: jne 0x170ea988 */
L_170EA9A3:
    goto L_170EAB41; /* 0x170EA9A3: jmp 0x170eab41 */
L_170EA9A8:
    /* test edi, edi */ /* 0x170EA9A8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA9AA: jbe 0x170eab41 */
L_170EA9B0:
    ecx = MEM32(ebp + (-0x418)); /* 0x170EA9B0: mov ecx, dword ptr [ebp - 0x418] */
    ebx = MEM32(ebp + (-0x41C)); /* 0x170EA9B6: mov ebx, dword ptr [ebp - 0x41c] */
    esi = edx; /* 0x170EA9BC: mov esi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x170EA9BE: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x170EA9C0: sub esi, ecx */
    _flag_k = FK_CMP;
L_170EA9C2:
    fp_push(*(double*)ADDR(ecx + ebx)); /* 0x170EA9C2: fld qword ptr [ecx + ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x170EA9C5: fcomp qword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170EA9C7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170EA9C9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170EA9D2; /* 0x170EA9CC: jp 0x170ea9d2 */
L_170EA9CE:
    fp_push(1.0); /* 0x170EA9CE: fld1  */
    goto L_170EA9D4; /* 0x170EA9D0: jmp 0x170ea9d4 */
L_170EA9D2:
    fp_push(0.0); /* 0x170EA9D2: fldz  */
L_170EA9D4:
    { double _v = fp_pop(); *(double*)ADDR(ecx + esi) = _v; } /* 0x170EA9D4: fstp qword ptr [ecx + esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EA9D7: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EA9DA: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA9C2; /* 0x170EA9DB: jne 0x170ea9c2 */
L_170EA9DD:
    goto L_170EAB41; /* 0x170EA9DD: jmp 0x170eab41 */
L_170EA9E2:
    /* test edi, edi */ /* 0x170EA9E2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EA9E4: jbe 0x170eab41 */
L_170EA9EA:
    ecx = MEM32(ebp + (-0x418)); /* 0x170EA9EA: mov ecx, dword ptr [ebp - 0x418] */
    ebx = MEM32(ebp + (-0x41C)); /* 0x170EA9F0: mov ebx, dword ptr [ebp - 0x41c] */
    esi = edx; /* 0x170EA9F6: mov esi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x170EA9F8: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x170EA9FA: sub esi, ecx */
    _flag_k = FK_CMP;
L_170EA9FC:
    fp_push(*(double*)ADDR(ebx + ecx)); /* 0x170EA9FC: fld qword ptr [ebx + ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x170EA9FF: fcomp qword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170EAA01: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170EAA03: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EAA0D; /* 0x170EAA06: jne 0x170eaa0d */
L_170EAA08:
    fp_push(*(double*)ADDR(ebx + ecx)); /* 0x170EAA08: fld qword ptr [ebx + ecx] */
    goto L_170EAA0F; /* 0x170EAA0B: jmp 0x170eaa0f */
L_170EAA0D:
    fp_push(*(double*)ADDR(ecx)); /* 0x170EAA0D: fld qword ptr [ecx] */
L_170EAA0F:
    { double _v = fp_pop(); *(double*)ADDR(esi + ecx) = _v; } /* 0x170EAA0F: fstp qword ptr [esi + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EAA12: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EAA15: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EA9FC; /* 0x170EAA16: jne 0x170ea9fc */
L_170EAA18:
    goto L_170EAB41; /* 0x170EAA18: jmp 0x170eab41 */
L_170EAA1D:
    /* test edi, edi */ /* 0x170EAA1D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EAA1F: jbe 0x170eab41 */
L_170EAA25:
    eax = MEM32(ebp + (-0x418)); /* 0x170EAA25: mov eax, dword ptr [ebp - 0x418] */
    ecx = MEM32(ebp + (-0x41C)); /* 0x170EAA2B: mov ecx, dword ptr [ebp - 0x41c] */
    edx = MEM32(ebp + (-0x4)); /* 0x170EAA31: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170EAA34: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x170EAA36: sub edx, eax */
    _flag_k = FK_CMP;
L_170EAA38:
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x170EAA38: fld qword ptr [ecx + eax] */
    fp_push(*(double*)ADDR(eax)); /* 0x170EAA3B: fld qword ptr [eax] */
    { double _x = fp_pop(); _st[0] = atan2(_st[0], _x); } /* 0x170EAA3D: fpatan  */
    { double _v = fp_pop(); *(double*)ADDR(eax + edx) = _v; } /* 0x170EAA3F: fstp qword ptr [eax + edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EAA42: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EAA45: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EAA38; /* 0x170EAA46: jne 0x170eaa38 */
L_170EAA48:
    goto L_170EAA86; /* 0x170EAA48: jmp 0x170eaa86 */
L_170EAA4A:
    /* cmp eax, 0x30000000u */ /* 0x170EAA4A: cmp eax, 0x30000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EAAFD; /* 0x170EAA4F: je 0x170eaafd */
L_170EAA55:
    /* cmp eax, 0x50000000u */ /* 0x170EAA55: cmp eax, 0x50000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EAAD6; /* 0x170EAA5A: je 0x170eaad6 */
L_170EAA5C:
    /* cmp eax, 0x50200000u */ /* 0x170EAA5C: cmp eax, 0x50200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EAAC4; /* 0x170EAA61: je 0x170eaac4 */
L_170EAA63:
    /* cmp eax, 0x70E00000u */ /* 0x170EAA63: cmp eax, 0x70e00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EAA8E; /* 0x170EAA68: je 0x170eaa8e */
L_170EAA6A:
    /* cmp eax, 0x71100000u */ /* 0x170EAA6A: cmp eax, 0x71100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x71100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EAA6F: jne 0x170eab41 */
L_170EAA75:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170EAA75: push dword ptr [ebp - 4] */
    ecx = ebp + (-0x41C); /* 0x170EAA78: lea ecx, [ebp - 0x41c] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170EAA7E: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_170EA1D8); /* 0x170EAA81: call 0x170ea1d8 */
    RECOMP_FLAGS_IN();
L_170EAA86:
    edx = MEM32(ebp + (-0x4)); /* 0x170EAA86: mov edx, dword ptr [ebp - 4] */
    goto L_170EAB41; /* 0x170EAA89: jmp 0x170eab41 */
L_170EAA8E:
    eax = MEM32(ebp + (-0x8)); /* 0x170EAA8E: mov eax, dword ptr [ebp - 8] */
    fp_push(0.0); /* 0x170EAA91: fldz  */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x170EAA93: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x170EAA93: shr eax, 1 */
    { double _v = fp_pop(); *(double*)ADDR(edx) = _v; } /* 0x170EAA95: fstp qword ptr [edx] */
    PUSH32(esp, 0); /* 0x170EAA97: push 0 */
    esi = eax; /* 0x170EAA99: mov esi, eax */
    eax = POP32_VAL(esp); /* 0x170EAA9B: pop eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_170EAB41; /* 0x170EAA9C: je 0x170eab41 */
L_170EAAA2:
    ecx = ebp + esi * 4 + (-0x41C); /* 0x170EAAA2: lea ecx, [ebp + esi*4 - 0x41c] */
L_170EAAA9:
    edi = MEM32(ebp + eax * 4 + (-0x41C)); /* 0x170EAAA9: mov edi, dword ptr [ebp + eax*4 - 0x41c] */
    ebx = MEM32(ecx); /* 0x170EAAB0: mov ebx, dword ptr [ecx] */
    fp_push(*(double*)ADDR(edi)); /* 0x170EAAB2: fld qword ptr [edi] */
    _st[0] *= *(double*)ADDR(ebx); /* 0x170EAAB4: fmul qword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170EAAB6: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x170EAAB7: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x170EAABA: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += *(double*)ADDR(edx); /* 0x170EAABC: fadd qword ptr [edx] */
    { double _v = fp_pop(); *(double*)ADDR(edx) = _v; } /* 0x170EAABE: fstp qword ptr [edx] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EAAA9; /* 0x170EAAC0: jb 0x170eaaa9 */
L_170EAAC2:
    goto L_170EAB41; /* 0x170EAAC2: jmp 0x170eab41 */
L_170EAAC4:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170EAAC4: push dword ptr [ebp - 4] */
    eax = ebp + (-0x41C); /* 0x170EAAC7: lea eax, [ebp - 0x41c] */
    PUSH32(esp, eax); /* 0x170EAACD: push eax */
    PUSH32(esp, edi); /* 0x170EAACE: push edi */
    RECOMP_CALL(sub_170EA189); /* 0x170EAACF: call 0x170ea189 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_170EAA86; /* 0x170EAAD4: jmp 0x170eaa86 */
L_170EAAD6:
    /* test edi, edi */ /* 0x170EAAD6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x170EAAD8: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(edx) = _v; } /* 0x170EAADA: fstp qword ptr [edx] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EAADC: jbe 0x170eab41 */
L_170EAADE:
    eax = MEM32(ebp + (-0x418)); /* 0x170EAADE: mov eax, dword ptr [ebp - 0x418] */
    ecx = MEM32(ebp + (-0x41C)); /* 0x170EAAE4: mov ecx, dword ptr [ebp - 0x41c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x170EAAEA: sub ecx, eax */
    _flag_k = FK_CMP;
L_170EAAEC:
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x170EAAEC: fld qword ptr [ecx + eax] */
    _st[0] *= *(double*)ADDR(eax); /* 0x170EAAEF: fmul qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x170EAAF1: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EAAF4: dec edi */
    _flag_k = FK_DEC;
    _st[0] += *(double*)ADDR(edx); /* 0x170EAAF5: fadd qword ptr [edx] */
    { double _v = fp_pop(); *(double*)ADDR(edx) = _v; } /* 0x170EAAF7: fstp qword ptr [edx] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EAAEC; /* 0x170EAAF9: jne 0x170eaaec */
L_170EAAFB:
    goto L_170EAB41; /* 0x170EAAFB: jmp 0x170eab41 */
L_170EAAFD:
    /* test edi, edi */ /* 0x170EAAFD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAB41; /* 0x170EAAFF: jbe 0x170eab41 */
L_170EAB01:
    ecx = MEM32(ebp + (-0x418)); /* 0x170EAB01: mov ecx, dword ptr [ebp - 0x418] */
    eax = MEM32(ebp + (-0x414)); /* 0x170EAB07: mov eax, dword ptr [ebp - 0x414] */
    ebx = MEM32(ebp + (-0x41C)); /* 0x170EAB0D: mov ebx, dword ptr [ebp - 0x41c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x170EAB13: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = edx; /* 0x170EAB15: mov esi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x170EAB17: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x170EAB19: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x170EAB1C: sub esi, ecx */
    _flag_k = FK_CMP;
L_170EAB1E:
    fp_push(*(double*)ADDR(ebx + ecx)); /* 0x170EAB1E: fld qword ptr [ebx + ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x170EAB21: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170EAB27: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x170EAB29: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EAB32; /* 0x170EAB2C: jne 0x170eab32 */
L_170EAB2E:
    fp_push(*(double*)ADDR(ecx)); /* 0x170EAB2E: fld qword ptr [ecx] */
    goto L_170EAB38; /* 0x170EAB30: jmp 0x170eab38 */
L_170EAB32:
    eax = MEM32(ebp + (-0x10)); /* 0x170EAB32: mov eax, dword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x170EAB35: fld qword ptr [eax + ecx] */
L_170EAB38:
    { double _v = fp_pop(); *(double*)ADDR(ecx + esi) = _v; } /* 0x170EAB38: fstp qword ptr [ecx + esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x170EAB3B: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EAB3E: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EAB1E; /* 0x170EAB3F: jne 0x170eab1e */
L_170EAB41:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x170EAB41: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x170EAB44: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x170EAB47: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EA261; /* 0x170EAB4A: jb 0x170ea261 */
L_170EAB50:
    edi = POP32_VAL(esp); /* 0x170EAB50: pop edi */
    esi = POP32_VAL(esp); /* 0x170EAB51: pop esi */
    ebx = POP32_VAL(esp); /* 0x170EAB52: pop ebx */
L_170EAB53:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EAB53: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EAB55: leave  */
    RECOMP_FLAGS_OUT(); esp += 60; { RECOMP_REGS_OUT(); return; } /* 0x170EAB56: ret 0x38 */
    RECOMP_REGS_OUT();
}

void sub_170EAC3D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EAC3Du);

    goto L_170EAC3D;
L_170EAB5E:
    edi = edi; /* 0x170EAB5E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EAB60: push ebp */
    ebp = esp; /* 0x170EAB61: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x170EAB63: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x170EAB66: push ebx */
    PUSH32(esp, esi); /* 0x170EAB67: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170EAB68: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x170EAB6B: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x170EAB6D: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(esi); /* 0x170EAB70: mov eax, dword ptr [esi] */
    /* cmp eax, 0x46580200u */ /* 0x170EAB72: cmp eax, 0x46580200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46580200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170EAB77: push edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_170EAC2C; /* 0x170EAB78: jb 0x170eac2c */
L_170EAB7E:
    /* cmp eax, 0x46580201u */ /* 0x170EAB7E: cmp eax, 0x46580201 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46580201u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170EAB90; /* 0x170EAB83: jbe 0x170eab90 */
L_170EAB85:
    /* cmp eax, 0x54580100u */ /* 0x170EAB85: cmp eax, 0x54580100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x54580100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAC2C; /* 0x170EAB8A: jne 0x170eac2c */
L_170EAB90:
    edi = MEM32(ebp + 0x10); /* 0x170EAB90: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x170EAB93: push 0 */
    PUSH32(esp, edi); /* 0x170EAB95: push edi */
    PUSH32(esp, 0x434C5846u); /* 0x170EAB96: push 0x434c5846 */
    PUSH32(esp, esi); /* 0x170EAB9B: push esi */
    RECOMP_CALL(sub_170DB59E); /* 0x170EAB9C: call 0x170db59e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EABA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EAC2C; /* 0x170EABA3: jl 0x170eac2c */
L_170EABA9:
    /* cmp eax, 1 */ /* 0x170EABA9: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EAC2C; /* 0x170EABAC: je 0x170eac2c */
L_170EABAE:
    ebx = MEM32(ebp + 0x14); /* 0x170EABAE: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x170EABB1: push 0 */
    PUSH32(esp, ebx); /* 0x170EABB3: push ebx */
    PUSH32(esp, 0x54494C43u); /* 0x170EABB4: push 0x54494c43 */
    PUSH32(esp, esi); /* 0x170EABB9: push esi */
    RECOMP_CALL(sub_170DB59E); /* 0x170EABBA: call 0x170db59e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EABBF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EAC2C; /* 0x170EABC1: jl 0x170eac2c */
L_170EABC3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170EABC3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170EABC5: inc edx */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x170EABC6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EAC2C; /* 0x170EABC8: je 0x170eac2c */
L_170EABCA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EABCA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), eax */ /* 0x170EABCC: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EAC2C; /* 0x170EABCE: je 0x170eac2c */
L_170EABD0:
    ecx = MEM32(ebx); /* 0x170EABD0: mov ecx, dword ptr [ebx] */
    /* test ecx, ecx */ /* 0x170EABD2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAC2C; /* 0x170EABD4: je 0x170eac2c */
L_170EABD6:
    /* cmp MEM32(ecx), eax */ /* 0x170EABD6: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EABDC; /* 0x170EABD8: jne 0x170eabdc */
L_170EABDA:
    MEM32(ecx) = edx; /* 0x170EABDA: mov dword ptr [ecx], edx */
L_170EABDC:
    ecx = MEM32(edi); /* 0x170EABDC: mov ecx, dword ptr [edi] */
    MEM32(ebp + 0x8) = ecx; /* 0x170EABDE: mov dword ptr [ebp + 8], ecx */
    esi = MEM32(ecx); /* 0x170EABE1: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x170EABE3: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170EABE6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x170EABE8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAC31; /* 0x170EABEA: jbe 0x170eac31 */
L_170EABEC:
    goto L_170EABF1; /* 0x170EABEC: jmp 0x170eabf1 */
L_170EABEE:
    ecx = MEM32(ebp + 0x8); /* 0x170EABEE: mov ecx, dword ptr [ebp + 8] */
L_170EABF1:
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x170EABF1: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170EAC2C; /* 0x170EABF4: jae 0x170eac2c */
L_170EABF6:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170EABF6: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x170EABF9: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x170EABFC: mov dword ptr [ebp + 8], ecx */
    eax = MEM32(ecx); /* 0x170EABFF: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x170EAC01: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x170EAC04: mov dword ptr [ebp + 8], ecx */
    ecx = ebp + 0x8; /* 0x170EAC07: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x170EAC0A: push ecx */
    PUSH32(esp, eax); /* 0x170EAC0B: push eax */
    RECOMP_CALL(sub_170EA0CE); /* 0x170EAC0C: call 0x170ea0ce */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EAC11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EAC31; /* 0x170EAC13: jl 0x170eac31 */
L_170EAC15:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170EAC15: push dword ptr [ebp + 0xc] */
    eax = ebp + 0x8; /* 0x170EAC18: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x170EAC1B: push eax */
    RECOMP_CALL(sub_170EA142); /* 0x170EAC1C: call 0x170ea142 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EAC21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EAC31; /* 0x170EAC23: jl 0x170eac31 */
L_170EAC25:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x170EAC25: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, esi */ /* 0x170EAC26: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EABEE; /* 0x170EAC28: jb 0x170eabee */
L_170EAC2A:
    goto L_170EAC31; /* 0x170EAC2A: jmp 0x170eac31 */
L_170EAC2C:
    eax = 0x80004005u; /* 0x170EAC2C: mov eax, 0x80004005 */
L_170EAC31:
    edi = POP32_VAL(esp); /* 0x170EAC31: pop edi */
    esi = POP32_VAL(esp); /* 0x170EAC32: pop esi */
    ebx = POP32_VAL(esp); /* 0x170EAC33: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170EAC34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170EAC35: ret 0x10 */
L_170EAC3D:
    edi = edi; /* 0x170EAC3D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EAC3F: push ebp */
    ebp = esp; /* 0x170EAC40: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x170EAC42: pop ebp */
    RECOMP_BACKEDGE();
    goto L_170EAB5E; /* 0x170EAC43: jmp 0x170eab5e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170EAC4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EAC4Du);

L_170EAC4D:
    edi = edi; /* 0x170EAC4D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EAC4F: push ebp */
    ebp = esp; /* 0x170EAC50: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170EAC52: push esi */
    esi = ecx; /* 0x170EAC53: mov esi, ecx */
    RECOMP_CALL(sub_170EACB9); /* 0x170EAC55: call 0x170eacb9 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170EAC5A: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAC67; /* 0x170EAC5E: je 0x170eac67 */
L_170EAC60:
    PUSH32(esp, esi); /* 0x170EAC60: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170EAC61: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170EAC66: pop ecx */
L_170EAC67:
    eax = esi; /* 0x170EAC67: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170EAC69: pop esi */
    ebp = POP32_VAL(esp); /* 0x170EAC6A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EAC6B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170EAC73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EAC73u);

L_170EAC73:
    edi = edi; /* 0x170EAC73: mov edi, edi */
    PUSH32(esp, esi); /* 0x170EAC75: push esi */
    esi = ecx; /* 0x170EAC76: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x170EAC78: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1721B010); /* 0x170EAC7B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10); /* 0x170EAC80: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x170EAC83: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EAC87: pop ecx */
    ecx = MEM32(esi + 0xC); /* 0x170EAC88: mov ecx, dword ptr [esi + 0xc] */
    MEM32(eax + 0xC) = ecx; /* 0x170EAC8B: mov dword ptr [eax + 0xc], ecx */
    eax = MEM32(esi + 0xC); /* 0x170EAC8E: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(esi + 0x10); /* 0x170EAC91: mov ecx, dword ptr [esi + 0x10] */
    MEM32(eax + 0x10) = ecx; /* 0x170EAC94: mov dword ptr [eax + 0x10], ecx */
    esi = POP32_VAL(esp); /* 0x170EAC97: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EAC98: ret  */
    RECOMP_REGS_OUT();
}

void sub_170EAC9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EAC9Eu);

L_170EAC9E:
    eax = ecx; /* 0x170EAC9E: mov eax, ecx */
    edx = eax + 0xC; /* 0x170EACA0: lea edx, [eax + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170EACA3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x8) = ecx; /* 0x170EACA5: mov dword ptr [edx + 8], ecx */
    MEM32(edx) = ecx; /* 0x170EACA8: mov dword ptr [edx], ecx */
    MEM32(edx + 0x10) = edx; /* 0x170EACAA: mov dword ptr [edx + 0x10], edx */
    MEM32(edx + 0xC) = edx; /* 0x170EACAD: mov dword ptr [edx + 0xc], edx */
    MEM32(eax + 0x20) = ecx; /* 0x170EACB0: mov dword ptr [eax + 0x20], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EACB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_170EACB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EACB9u);

    goto L_170EACB9;
L_170EAC73:
    edi = edi; /* 0x170EAC73: mov edi, edi */
    PUSH32(esp, esi); /* 0x170EAC75: push esi */
    esi = ecx; /* 0x170EAC76: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x170EAC78: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1721B010); /* 0x170EAC7B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10); /* 0x170EAC80: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x170EAC83: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EAC87: pop ecx */
    ecx = MEM32(esi + 0xC); /* 0x170EAC88: mov ecx, dword ptr [esi + 0xc] */
    MEM32(eax + 0xC) = ecx; /* 0x170EAC8B: mov dword ptr [eax + 0xc], ecx */
    eax = MEM32(esi + 0xC); /* 0x170EAC8E: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(esi + 0x10); /* 0x170EAC91: mov ecx, dword ptr [esi + 0x10] */
    MEM32(eax + 0x10) = ecx; /* 0x170EAC94: mov dword ptr [eax + 0x10], ecx */
    esi = POP32_VAL(esp); /* 0x170EAC97: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EAC98: ret  */
L_170EACB9:
    edi = edi; /* 0x170EACB9: mov edi, edi */
    PUSH32(esp, esi); /* 0x170EACBB: push esi */
    esi = ecx; /* 0x170EACBC: mov esi, ecx */
    goto L_170EACD4; /* 0x170EACBE: jmp 0x170eacd4 */
L_170EACC0:
    ecx = MEM32(esi + 0x20); /* 0x170EACC0: mov ecx, dword ptr [esi + 0x20] */
    eax = MEM32(ecx + 0x20); /* 0x170EACC3: mov eax, dword ptr [ecx + 0x20] */
    MEM32(esi + 0x20) = eax; /* 0x170EACC6: mov dword ptr [esi + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) & 0; /* 0x170EACC9: and dword ptr [ecx + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x170EACCD: push 1 */
    RECOMP_CALL(sub_170EAC4D); /* 0x170EACCF: call 0x170eac4d */
    RECOMP_FLAGS_IN();
L_170EACD4:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x170EACD4: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EACC0; /* 0x170EACD8: jne 0x170eacc0 */
L_170EACDA:
    ecx = esi + 0xC; /* 0x170EACDA: lea ecx, [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x170EACDD: pop esi */
    RECOMP_BACKEDGE();
    goto L_170EAC73; /* 0x170EACDE: jmp 0x170eac73 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170EACE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EACE8u);

L_170EACE8:
    edx = MEM32(ecx + 0x1C); /* 0x170EACE8: mov edx, dword ptr [ecx + 0x1c] */
    /* test edx, edx */ /* 0x170EACEB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAD16; /* 0x170EACED: je 0x170ead16 */
L_170EACEF:
    PUSH32(esp, ebx); /* 0x170EACEF: push ebx */
    PUSH32(esp, esi); /* 0x170EACF0: push esi */
    PUSH32(esp, edi); /* 0x170EACF1: push edi */
L_170EACF2:
    eax = MEM32(edx + 0x1C); /* 0x170EACF2: mov eax, dword ptr [edx + 0x1c] */
    edi = edx + 0xC; /* 0x170EACF5: lea edi, [edx + 0xc] */
    goto L_170EAD08; /* 0x170EACF8: jmp 0x170ead08 */
L_170EACFA:
    esi = MEM32(eax + 0x4); /* 0x170EACFA: mov esi, dword ptr [eax + 4] */
    ebx = MEM32(esi + 0x38); /* 0x170EACFD: mov ebx, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ecx + 0x10); /* 0x170EAD00: add ebx, dword ptr [ecx + 0x10] */
    _flag_k = FK_ADD;
    MEM32(esi) = ebx; /* 0x170EAD03: mov dword ptr [esi], ebx */
    eax = MEM32(eax + 0x10); /* 0x170EAD05: mov eax, dword ptr [eax + 0x10] */
L_170EAD08:
    /* cmp eax, edi */ /* 0x170EAD08: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EACFA; /* 0x170EAD0A: jne 0x170eacfa */
L_170EAD0C:
    edx = MEM32(edx + 0x20); /* 0x170EAD0C: mov edx, dword ptr [edx + 0x20] */
    /* test edx, edx */ /* 0x170EAD0F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EACF2; /* 0x170EAD11: jne 0x170eacf2 */
L_170EAD13:
    edi = POP32_VAL(esp); /* 0x170EAD13: pop edi */
    esi = POP32_VAL(esp); /* 0x170EAD14: pop esi */
    ebx = POP32_VAL(esp); /* 0x170EAD15: pop ebx */
L_170EAD16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EAD16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EAD18: ret  */
    RECOMP_REGS_OUT();
}

void sub_170EAD1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EAD1Eu);

L_170EAD1E:
    edi = edi; /* 0x170EAD1E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EAD20: push ebp */
    ebp = esp; /* 0x170EAD21: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170EAD23: push esi */
    esi = ecx; /* 0x170EAD24: mov esi, ecx */
    RECOMP_CALL(sub_170EAC73); /* 0x170EAD26: call 0x170eac73 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170EAD2B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAD38; /* 0x170EAD2F: je 0x170ead38 */
L_170EAD31:
    PUSH32(esp, esi); /* 0x170EAD31: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170EAD32: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170EAD37: pop ecx */
L_170EAD38:
    eax = esi; /* 0x170EAD38: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170EAD3A: pop esi */
    ebp = POP32_VAL(esp); /* 0x170EAD3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EAD3C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170EAD44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EAD44u);

L_170EAD44:
    edi = edi; /* 0x170EAD44: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EAD46: push ebp */
    ebp = esp; /* 0x170EAD47: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170EAD49: push esi */
    PUSH32(esp, 8); /* 0x170EAD4A: push 8 */
    esi = ecx; /* 0x170EAD4C: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x170EAD4E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EAD53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EAD55: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EAD5F; /* 0x170EAD56: jne 0x170ead5f */
L_170EAD58:
    eax = 0x8007000Eu; /* 0x170EAD58: mov eax, 0x8007000e */
    goto L_170EAD6F; /* 0x170EAD5D: jmp 0x170ead6f */
L_170EAD5F:
    ecx = MEM32(ebp + 0x8); /* 0x170EAD5F: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x170EAD62: mov dword ptr [eax], ecx */
    ecx = MEM32(esi + 0x24); /* 0x170EAD64: mov ecx, dword ptr [esi + 0x24] */
    MEM32(eax + 0x4) = ecx; /* 0x170EAD67: mov dword ptr [eax + 4], ecx */
    MEM32(esi + 0x24) = eax; /* 0x170EAD6A: mov dword ptr [esi + 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EAD6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EAD6F:
    esi = POP32_VAL(esp); /* 0x170EAD6F: pop esi */
    ebp = POP32_VAL(esp); /* 0x170EAD70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EAD71: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170EAD79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EAD79u);

L_170EAD79:
    edi = edi; /* 0x170EAD79: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EAD7B: push ebp */
    ebp = esp; /* 0x170EAD7C: mov ebp, esp */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x170EAD7E: add ecx, 0x24 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x170EAD81: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x170EAD83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAD9B; /* 0x170EAD85: je 0x170ead9b */
L_170EAD87:
    edx = MEM32(eax); /* 0x170EAD87: mov edx, dword ptr [eax] */
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x170EAD89: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EAD97; /* 0x170EAD8C: je 0x170ead97 */
L_170EAD8E:
    ecx = eax + 0x4; /* 0x170EAD8E: lea ecx, [eax + 4] */
    eax = MEM32(ecx); /* 0x170EAD91: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x170EAD93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EAD87; /* 0x170EAD95: jne 0x170ead87 */
L_170EAD97:
    /* test eax, eax */ /* 0x170EAD97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EADA2; /* 0x170EAD99: jne 0x170eada2 */
L_170EAD9B:
    eax = 0x80004005u; /* 0x170EAD9B: mov eax, 0x80004005 */
    goto L_170EADB0; /* 0x170EADA0: jmp 0x170eadb0 */
L_170EADA2:
    edx = MEM32(eax + 0x4); /* 0x170EADA2: mov edx, dword ptr [eax + 4] */
    PUSH32(esp, eax); /* 0x170EADA5: push eax */
    MEM32(ecx) = edx; /* 0x170EADA6: mov dword ptr [ecx], edx */
    RECOMP_CALL(sub_1721B010); /* 0x170EADA8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170EADAD: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EADAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EADB0:
    ebp = POP32_VAL(esp); /* 0x170EADB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EADB1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170EADB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EADB9u);

L_170EADB9:
    edi = edi; /* 0x170EADB9: mov edi, edi */
    PUSH32(esp, esi); /* 0x170EADBB: push esi */
    esi = ecx; /* 0x170EADBC: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x170EADBE: push dword ptr [esi + 0x10] */
    MEM32(esi) = 0x1700EF40u; /* 0x170EADC1: mov dword ptr [esi], 0x1700ef40 */
    RECOMP_CALL(sub_1721B010); /* 0x170EADC7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x170EADCC: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EADD0: pop ecx */
    ecx = MEM32(esi + 0x1C); /* 0x170EADD1: mov ecx, dword ptr [esi + 0x1c] */
    /* test ecx, ecx */ /* 0x170EADD4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EADDF; /* 0x170EADD6: je 0x170eaddf */
L_170EADD8:
    PUSH32(esp, 1); /* 0x170EADD8: push 1 */
    RECOMP_CALL(sub_170EAC4D); /* 0x170EADDA: call 0x170eac4d */
    RECOMP_FLAGS_IN();
L_170EADDF:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0; /* 0x170EADDF: and dword ptr [esi + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170EADE3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EADE4: ret  */
    RECOMP_REGS_OUT();
}

void sub_170EADEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EADEAu);

L_170EADEA:
    edi = edi; /* 0x170EADEA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EADEC: push ebp */
    ebp = esp; /* 0x170EADED: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170EADEF: push esi */
    esi = ecx; /* 0x170EADF0: mov esi, ecx */
    RECOMP_CALL(sub_170EADB9); /* 0x170EADF2: call 0x170eadb9 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170EADF7: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAE04; /* 0x170EADFB: je 0x170eae04 */
L_170EADFD:
    PUSH32(esp, esi); /* 0x170EADFD: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170EADFE: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170EAE03: pop ecx */
L_170EAE04:
    eax = esi; /* 0x170EAE04: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170EAE06: pop esi */
    ebp = POP32_VAL(esp); /* 0x170EAE07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EAE08: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170EAE10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EAE10u);

L_170EAE10:
    edi = edi; /* 0x170EAE10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EAE12: push ebp */
    ebp = esp; /* 0x170EAE13: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170EAE15: push esi */
    esi = MEM32(ebp + 0xC); /* 0x170EAE16: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170EAE19: push edi */
    PUSH32(esp, 4); /* 0x170EAE1A: push 4 */
    ecx = POP32_VAL(esp); /* 0x170EAE1C: pop ecx */
    edi = 0x170019B0u; /* 0x170EAE1D: mov edi, 0x170019b0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EAE22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x170EAE24: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_170EAE39; /* 0x170EAE26: je 0x170eae39 */
L_170EAE28:
    esi = MEM32(ebp + 0xC); /* 0x170EAE28: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x170EAE2B: push 4 */
    ecx = POP32_VAL(esp); /* 0x170EAE2D: pop ecx */
    edi = 0x1702AA2Cu; /* 0x170EAE2E: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EAE33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x170EAE35: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_170EAE4B; /* 0x170EAE37: jne 0x170eae4b */
L_170EAE39:
    eax = MEM32(ebp + 0x8); /* 0x170EAE39: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x170EAE3C: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x170EAE3F: mov dword ptr [ecx], eax */
    ecx = MEM32(eax); /* 0x170EAE41: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EAE43: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170EAE44: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EAE47: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170EAE50; /* 0x170EAE49: jmp 0x170eae50 */
L_170EAE4B:
    eax = 0x80004002u; /* 0x170EAE4B: mov eax, 0x80004002 */
L_170EAE50:
    edi = POP32_VAL(esp); /* 0x170EAE50: pop edi */
    esi = POP32_VAL(esp); /* 0x170EAE51: pop esi */
    ebp = POP32_VAL(esp); /* 0x170EAE52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170EAE53: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170EAE5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EAE5Bu);

L_170EAE5B:
    edi = edi; /* 0x170EAE5B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EAE5D: push ebp */
    ebp = esp; /* 0x170EAE5E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170EAE60: push ecx */
    PUSH32(esp, ecx); /* 0x170EAE61: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x170EAE62: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x170EAE65: mov eax, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x170EAE67: mov edx, dword ptr [eax + 4] */
    PUSH32(esp, ebx); /* 0x170EAE6A: push ebx */
    PUSH32(esp, esi); /* 0x170EAE6B: push esi */
    esi = MEM32(ebp + 0x14); /* 0x170EAE6C: mov esi, dword ptr [ebp + 0x14] */
    ecx = MEM32(esi); /* 0x170EAE6F: mov ecx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x170EAE71: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170EAE72: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(ecx + 0x4) */ /* 0x170EAE74: cmp edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170EAE77: mov dword ptr [ebp - 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAEE2; /* 0x170EAE7A: jne 0x170eaee2 */
L_170EAE7C:
    edx = MEM32(eax); /* 0x170EAE7C: mov edx, dword ptr [eax] */
    /* cmp edx, MEM32(ecx) */ /* 0x170EAE7E: cmp edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAEE2; /* 0x170EAE80: jne 0x170eaee2 */
L_170EAE82:
    edx = MEM32(eax + 0x10); /* 0x170EAE82: mov edx, dword ptr [eax + 0x10] */
    /* cmp edx, MEM32(ecx + 0x10) */ /* 0x170EAE85: cmp edx, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAEE2; /* 0x170EAE88: jne 0x170eaee2 */
L_170EAE8A:
    edx = MEM32(eax + 0x8); /* 0x170EAE8A: mov edx, dword ptr [eax + 8] */
    ebx = MEM32(ebp + 0x8); /* 0x170EAE8D: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x170EAE90: add edx, ebx */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx), edi */ /* 0x170EAE92: cmp dword ptr [edx], edi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAE9B; /* 0x170EAE94: jne 0x170eae9b */
L_170EAE96:
    MEM32(ebp + (-0x8)) = edi; /* 0x170EAE96: mov dword ptr [ebp - 8], edi */
    goto L_170EAEA1; /* 0x170EAE99: jmp 0x170eaea1 */
L_170EAE9B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x170EAE9B: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edx; /* 0x170EAE9E: mov dword ptr [ebp - 8], edx */
L_170EAEA1:
    edx = MEM32(ecx + 0x8); /* 0x170EAEA1: mov edx, dword ptr [ecx + 8] */
    edi = MEM32(ebp + 0x10); /* 0x170EAEA4: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x170EAEA7: add edx, edi */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx), 0 */ /* 0x170EAEA9: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAEB2; /* 0x170EAEAC: jne 0x170eaeb2 */
L_170EAEAE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170EAEAE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170EAEB5; /* 0x170EAEB0: jmp 0x170eaeb5 */
L_170EAEB2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x170EAEB2: add edx, 4 */
    _flag_k = FK_ADD;
L_170EAEB5:
    eax = MEM32(eax + 0xC); /* 0x170EAEB5: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x170EAEB8: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170EAEBA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), ebx */ /* 0x170EAEBC: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAEC5; /* 0x170EAEBE: jne 0x170eaec5 */
L_170EAEC0:
    MEM32(ebp + 0x14) = ebx; /* 0x170EAEC0: mov dword ptr [ebp + 0x14], ebx */
    goto L_170EAECB; /* 0x170EAEC3: jmp 0x170eaecb */
L_170EAEC5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170EAEC5: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = eax; /* 0x170EAEC8: mov dword ptr [ebp + 0x14], eax */
L_170EAECB:
    eax = MEM32(ecx + 0xC); /* 0x170EAECB: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x170EAECE: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), ebx */ /* 0x170EAED0: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EAED7; /* 0x170EAED2: je 0x170eaed7 */
L_170EAED4:
    ebx = eax + 0x4; /* 0x170EAED4: lea ebx, [eax + 4] */
L_170EAED7:
    eax = MEM32(ebp + (-0x8)); /* 0x170EAED7: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x170EAEDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EAEF3; /* 0x170EAEDC: jne 0x170eaef3 */
L_170EAEDE:
    /* test edx, edx */ /* 0x170EAEDE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAF24; /* 0x170EAEE0: je 0x170eaf24 */
L_170EAEE2:
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x170EAEE2: mov dword ptr [ebp - 4], 0x80004005 */
L_170EAEE9:
    eax = MEM32(ebp + (-0x4)); /* 0x170EAEE9: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x170EAEEC: pop edi */
    esi = POP32_VAL(esp); /* 0x170EAEED: pop esi */
    ebx = POP32_VAL(esp); /* 0x170EAEEE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EAEEF: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170EAEF0: ret 0x14 */
L_170EAEF3:
    /* test edx, edx */ /* 0x170EAEF3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAEE2; /* 0x170EAEF5: je 0x170eaee2 */
L_170EAEF7:
    edi = edx; /* 0x170EAEF7: mov edi, edx */
L_170EAEF9:
    SET_LO8(edx, MEM8(eax)); /* 0x170EAEF9: mov dl, byte ptr [eax] */
    SET_LO8(ecx, LO8(edx)); /* 0x170EAEFB: mov cl, dl */
    /* cmp LO8(edx), MEM8(edi) */ /* 0x170EAEFD: cmp dl, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAF1B; /* 0x170EAEFF: jne 0x170eaf1b */
L_170EAF01:
    /* test LO8(ecx), LO8(ecx) */ /* 0x170EAF01: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAF17; /* 0x170EAF03: je 0x170eaf17 */
L_170EAF05:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x170EAF05: mov dl, byte ptr [eax + 1] */
    SET_LO8(ecx, LO8(edx)); /* 0x170EAF08: mov cl, dl */
    /* cmp LO8(edx), MEM8(edi + 0x1) */ /* 0x170EAF0A: cmp dl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAF1B; /* 0x170EAF0D: jne 0x170eaf1b */
L_170EAF0F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170EAF0F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170EAF10: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x170EAF11: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x170EAF12: inc edi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x170EAF13: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EAEF9; /* 0x170EAF15: jne 0x170eaef9 */
L_170EAF17:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EAF17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170EAF20; /* 0x170EAF19: jmp 0x170eaf20 */
L_170EAF1B:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170EAF1B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x170EAF1D: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_170EAF20:
    /* test eax, eax */ /* 0x170EAF20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EAEE2; /* 0x170EAF22: jne 0x170eaee2 */
L_170EAF24:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x170EAF24: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAF30; /* 0x170EAF28: jne 0x170eaf30 */
L_170EAF2A:
    /* test ebx, ebx */ /* 0x170EAF2A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAF43; /* 0x170EAF2C: je 0x170eaf43 */
L_170EAF2E:
    RECOMP_BACKEDGE();
    goto L_170EAEE2; /* 0x170EAF2E: jmp 0x170eaee2 */
L_170EAF30:
    /* test ebx, ebx */ /* 0x170EAF30: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAEE2; /* 0x170EAF32: je 0x170eaee2 */
L_170EAF34:
    PUSH32(esp, ebx); /* 0x170EAF34: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170EAF35: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1721B106); /* 0x170EAF38: call 0x1721b106 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EAF3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EAF3F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x170EAF40: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EAEE2; /* 0x170EAF41: jne 0x170eaee2 */
L_170EAF43:
    edx = MEM32(ebp + 0xC); /* 0x170EAF43: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(edx); /* 0x170EAF46: mov eax, dword ptr [edx] */
    ecx = MEM32(eax + 0x4); /* 0x170EAF48: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x170EAF4B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EAEE2; /* 0x170EAF4D: jl 0x170eaee2 */
L_170EAF4F:
    /* cmp ecx, 3 */ /* 0x170EAF4F: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EAFCF; /* 0x170EAF52: jle 0x170eafcf */
L_170EAF54:
    /* cmp ecx, 4 */ /* 0x170EAF54: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EAFA5; /* 0x170EAF57: je 0x170eafa5 */
L_170EAF59:
    /* cmp ecx, 5 */ /* 0x170EAF59: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAEE2; /* 0x170EAF5C: jne 0x170eaee2 */
L_170EAF5E:
    edi = MEM32(eax + 0x14); /* 0x170EAF5E: mov edi, dword ptr [eax + 0x14] */
    ecx = MEM32(esi); /* 0x170EAF61: mov ecx, dword ptr [esi] */
    /* cmp edi, MEM32(ecx + 0x14) */ /* 0x170EAF63: cmp edi, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAEE2; /* 0x170EAF66: jne 0x170eaee2 */
L_170EAF6C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x170EAF6C: add eax, 0x18 */
    _flag_k = FK_ADD;
    MEM32(edx) = eax; /* 0x170EAF6F: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 0x18u; /* 0x170EAF71: add dword ptr [esi], 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170EAF74: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x170EAF76: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EAEE9; /* 0x170EAF78: jbe 0x170eaee9 */
L_170EAF7E:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170EAF7E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x170EAF81: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170EAF82: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170EAF85: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170EAF88: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170EAE5B); /* 0x170EAF8B: call 0x170eae5b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EAF90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170EAF92: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EAEE9; /* 0x170EAF95: jl 0x170eaee9 */
L_170EAF9B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170EAF9B: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edi */ /* 0x170EAF9C: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EAF7E; /* 0x170EAF9E: jb 0x170eaf7e */
L_170EAFA0:
    RECOMP_BACKEDGE();
    goto L_170EAEE9; /* 0x170EAFA0: jmp 0x170eaee9 */
L_170EAFA5:
    eax = MEM32(eax); /* 0x170EAFA5: mov eax, dword ptr [eax] */
    /* cmp eax, 5 */ /* 0x170EAFA7: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170EAFC4; /* 0x170EAFAA: jl 0x170eafc4 */
L_170EAFAC:
    /* cmp eax, 9 */ /* 0x170EAFAC: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EAFBB; /* 0x170EAFAF: jle 0x170eafbb */
L_170EAFB1:
    /* cmp eax, 0xEu */ /* 0x170EAFB1: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EAFC4; /* 0x170EAFB4: jle 0x170eafc4 */
L_170EAFB6:
    /* cmp eax, 0x10u */ /* 0x170EAFB6: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170EAFC4; /* 0x170EAFB9: jg 0x170eafc4 */
L_170EAFBB:
    eax = MEM32(ebp + 0x18); /* 0x170EAFBB: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = 1; /* 0x170EAFBE: mov dword ptr [eax], 1 */
L_170EAFC4:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 0x14u; /* 0x170EAFC4: add dword ptr [edx], 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 0x14u; /* 0x170EAFC7: add dword ptr [esi], 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_170EAEE9; /* 0x170EAFCA: jmp 0x170eaee9 */
L_170EAFCF:
    ecx = MEM32(esi); /* 0x170EAFCF: mov ecx, dword ptr [esi] */
    edi = MEM32(eax + 0x14); /* 0x170EAFD1: mov edi, dword ptr [eax + 0x14] */
    /* cmp edi, MEM32(ecx + 0x14) */ /* 0x170EAFD4: cmp edi, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAEE2; /* 0x170EAFD7: jne 0x170eaee2 */
L_170EAFDD:
    edi = MEM32(eax + 0x18); /* 0x170EAFDD: mov edi, dword ptr [eax + 0x18] */
    /* cmp edi, MEM32(ecx + 0x18) */ /* 0x170EAFE0: cmp edi, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EAEE2; /* 0x170EAFE3: jne 0x170eaee2 */
L_170EAFE9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x170EAFE9: add eax, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edx) = eax; /* 0x170EAFEC: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 0x1Cu; /* 0x170EAFEE: add dword ptr [esi], 0x1c */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_170EAEE9; /* 0x170EAFF1: jmp 0x170eaee9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170EAFFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EAFFBu);

L_170EAFFB:
    edi = edi; /* 0x170EAFFB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EAFFD: push ebp */
    ebp = esp; /* 0x170EAFFE: mov ebp, esp */
    eax = MEM32(ebp + 0x18); /* 0x170EB000: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x170EB003: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x170EB006: push eax */
    eax = ebp + 0x14; /* 0x170EB007: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x170EB00A: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170EB00B: push dword ptr [ebp + 0x10] */
    eax = ebp + 0xC; /* 0x170EB00E: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x170EB011: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170EB012: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170EAE5B); /* 0x170EB015: call 0x170eae5b */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170EB01A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170EB01B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170EB023(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EB023u);

L_170EB023:
    edi = edi; /* 0x170EB023: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EB025: push ebp */
    ebp = esp; /* 0x170EB026: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x170EB028: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x170EB02B: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x170EB02E: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x4); /* 0x170EB030: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(ecx + 0x10); /* 0x170EB033: mov edx, dword ptr [ecx + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x170EB036: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ecx); /* 0x170EB039: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0xC)) = eax; /* 0x170EB03B: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EB03E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170EB040: push esi */
    PUSH32(esp, edi); /* 0x170EB041: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170EB042: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170EB044: inc eax */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x170EB045: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170EB047: mov dword ptr [ebp - 4], edi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170EB051; /* 0x170EB04A: jae 0x170eb051 */
L_170EB04C:
    MEM32(ebp + (-0x8)) = eax; /* 0x170EB04C: mov dword ptr [ebp - 8], eax */
    goto L_170EB056; /* 0x170EB04F: jmp 0x170eb056 */
L_170EB051:
    MEM32(ebp + (-0x8)) = edx; /* 0x170EB051: mov dword ptr [ebp - 8], edx */
    eax = edx; /* 0x170EB054: mov eax, edx */
L_170EB056:
    edx = MEM32(ecx + 0x8); /* 0x170EB056: mov edx, dword ptr [ecx + 8] */
    esi = MEM32(ebp + 0x8); /* 0x170EB059: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x170EB05C: add edx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx), edi */ /* 0x170EB05E: cmp dword ptr [edx], edi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EB066; /* 0x170EB060: jne 0x170eb066 */
L_170EB062:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170EB062: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170EB069; /* 0x170EB064: jmp 0x170eb069 */
L_170EB066:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x170EB066: add edx, 4 */
    _flag_k = FK_ADD;
L_170EB069:
    ecx = MEM32(ecx + 0xC); /* 0x170EB069: mov ecx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x170EB06C: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), edi */ /* 0x170EB06E: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EB076; /* 0x170EB070: jne 0x170eb076 */
L_170EB072:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170EB072: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170EB079; /* 0x170EB074: jmp 0x170eb079 */
L_170EB076:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x170EB076: add ecx, 4 */
    _flag_k = FK_ADD;
L_170EB079:
    /* cmp edx, edi */ /* 0x170EB079: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EB089; /* 0x170EB07B: jne 0x170eb089 */
L_170EB07D:
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x170EB07D: mov dword ptr [ebp - 4], 0x80004005 */
    goto L_170EB1E0; /* 0x170EB084: jmp 0x170eb1e0 */
L_170EB089:
    esi = edx; /* 0x170EB089: mov esi, edx */
    edi = esi + 0x1; /* 0x170EB08B: lea edi, [esi + 1] */
    PUSH32(esp, ebx); /* 0x170EB08E: push ebx */
L_170EB08F:
    SET_LO8(ebx, MEM8(esi)); /* 0x170EB08F: mov bl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170EB091: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x170EB092: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EB08F; /* 0x170EB094: jne 0x170eb08f */
L_170EB096:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x170EB096: sub esi, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = esi; /* 0x170EB098: mov dword ptr [ebp - 0x10], esi */
    esi = edx + 0x1; /* 0x170EB09B: lea esi, [edx + 1] */
L_170EB09E:
    SET_LO8(ebx, MEM8(edx)); /* 0x170EB09E: mov bl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170EB0A0: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x170EB0A1: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EB09E; /* 0x170EB0A3: jne 0x170eb09e */
L_170EB0A5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x170EB0A5: sub edx, esi */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x170EB0A7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB0D5; /* 0x170EB0A9: je 0x170eb0d5 */
L_170EB0AB:
    esi = ecx; /* 0x170EB0AB: mov esi, ecx */
    edi = esi + 0x1; /* 0x170EB0AD: lea edi, [esi + 1] */
L_170EB0B0:
    SET_LO8(ebx, MEM8(esi)); /* 0x170EB0B0: mov bl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170EB0B2: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x170EB0B3: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EB0B0; /* 0x170EB0B5: jne 0x170eb0b0 */
L_170EB0B7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x170EB0B7: sub esi, edi */
    _flag_k = FK_CMP;
    edi = ecx + 0x1; /* 0x170EB0B9: lea edi, [ecx + 1] */
L_170EB0BC:
    SET_LO8(ebx, MEM8(ecx)); /* 0x170EB0BC: mov bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170EB0BE: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x170EB0BF: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EB0BC; /* 0x170EB0C1: jne 0x170eb0bc */
L_170EB0C3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x170EB0C3: sub ecx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170EB0C5: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170EB0C6: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (LO8(ecx)) != 0;
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx))); /* 0x170EB0C9: neg cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x170EB0CB: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x170EB0CD: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170EB0CF: inc esi */
    _flag_k = FK_INC;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x170EB0D0: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x170EB0D0: shr esi, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x170EB0D3: add ecx, esi */
    _flag_k = FK_ADD;
L_170EB0D5:
    esi = MEM32(ebp + (-0x10)); /* 0x170EB0D5: mov esi, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + 0x18); /* 0x170EB0D8: mov ebx, dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + 0x10); /* 0x170EB0DB: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170EB0DE: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x170EB0DF: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (LO8(edx)) != 0;
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx))); /* 0x170EB0E2: neg dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x170EB0E4: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x170EB0E6: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170EB0E8: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x170EB0E9: add edx, ecx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x170EB0EB: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x170EB0EB: shr esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x170EB0EE: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi * 4 + 0x8; /* 0x170EB0F0: lea ecx, [esi*4 + 8] */
    esi = MEM32(ebp + 0x14); /* 0x170EB0F7: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebx) = ecx; /* 0x170EB0FA: mov dword ptr [ebx], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x170EB0FC: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x170EB0FF: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x170EB102: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x170EB105: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EB1D8; /* 0x170EB107: jl 0x170eb1d8 */
L_170EB10D:
    /* cmp ecx, 1 */ /* 0x170EB10D: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB1D3; /* 0x170EB110: jle 0x170eb1d3 */
L_170EB116:
    /* cmp ecx, 3 */ /* 0x170EB116: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB1B3; /* 0x170EB119: jle 0x170eb1b3 */
L_170EB11F:
    /* cmp ecx, 4 */ /* 0x170EB11F: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB190; /* 0x170EB122: je 0x170eb190 */
L_170EB124:
    /* cmp ecx, 5 */ /* 0x170EB124: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EB1D8; /* 0x170EB127: jne 0x170eb1d8 */
L_170EB12D:
    eax = MEM32(ebp + 0xC); /* 0x170EB12D: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x170EB130: mov ecx, dword ptr [eax] */
    edx = MEM32(ecx + 0x14); /* 0x170EB132: mov edx, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0; /* 0x170EB135: and dword ptr [ebp + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x170EB139: add ecx, 0x18 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x170EB13C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x170EB13E: mov dword ptr [eax], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x170EB140: mov dword ptr [ebp - 0x10], edx */
    MEM32(edi) = 0x18u; /* 0x170EB143: mov dword ptr [edi], 0x18 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB186; /* 0x170EB149: jbe 0x170eb186 */
L_170EB14B:
    goto L_170EB150; /* 0x170EB14B: jmp 0x170eb150 */
L_170EB14D:
    eax = MEM32(ebp + 0xC); /* 0x170EB14D: mov eax, dword ptr [ebp + 0xc] */
L_170EB150:
    ecx = ebp + (-0x14); /* 0x170EB150: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x170EB153: push ecx */
    ecx = ebp + 0x14; /* 0x170EB154: lea ecx, [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x170EB157: push ecx */
    ecx = ebp + 0x10; /* 0x170EB158: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x170EB15B: push ecx */
    PUSH32(esp, eax); /* 0x170EB15C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170EB15D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170EB023); /* 0x170EB160: call 0x170eb023 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EB165: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170EB167: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EB1DF; /* 0x170EB16A: jl 0x170eb1df */
L_170EB16C:
    eax = MEM32(ebp + 0x14); /* 0x170EB16C: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x170EB16F: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x170EB171: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + eax; /* 0x170EB174: add dword ptr [edi], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x14)); /* 0x170EB176: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x170EB179: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1; /* 0x170EB17B: inc dword ptr [ebp + 0x18] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x18); /* 0x170EB17E: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x170EB181: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EB14D; /* 0x170EB184: jb 0x170eb14d */
L_170EB186:
    eax = MEM32(esi); /* 0x170EB186: mov eax, dword ptr [esi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x8))); /* 0x170EB188: imul eax, dword ptr [ebp - 8] */
    MEM32(esi) = eax; /* 0x170EB18C: mov dword ptr [esi], eax */
    goto L_170EB1DF; /* 0x170EB18E: jmp 0x170eb1df */
L_170EB190:
    edx = MEM32(ebp + (-0xC)); /* 0x170EB190: mov edx, dword ptr [ebp - 0xc] */
    /* cmp edx, 4 */ /* 0x170EB193: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x14u); /* 0x170EB196: push 0x14 */
    ecx = POP32_VAL(esp); /* 0x170EB198: pop ecx */
    MEM32(edi) = ecx; /* 0x170EB199: mov dword ptr [edi], ecx */
    if (CMP_L(_flag_a, _flag_b)) goto L_170EB1D8; /* 0x170EB19B: jl 0x170eb1d8 */
L_170EB19D:
    /* cmp edx, 9 */ /* 0x170EB19D: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB1AC; /* 0x170EB1A0: jle 0x170eb1ac */
L_170EB1A2:
    /* cmp edx, 0xEu */ /* 0x170EB1A2: cmp edx, 0xe */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB1D8; /* 0x170EB1A5: jle 0x170eb1d8 */
L_170EB1A7:
    /* cmp edx, 0x10u */ /* 0x170EB1A7: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170EB1D8; /* 0x170EB1AA: jg 0x170eb1d8 */
L_170EB1AC:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EB1AC: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EB1AC: shl eax, 2 */
    MEM32(esi) = eax; /* 0x170EB1AF: mov dword ptr [esi], eax */
    goto L_170EB1CC; /* 0x170EB1B1: jmp 0x170eb1cc */
L_170EB1B3:
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170EB1B3: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170EB1B3: shl eax, 4 */
L_170EB1B6:
    edx = MEM32(ebp + (-0xC)); /* 0x170EB1B6: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x170EB1B9: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, 0x1Cu); /* 0x170EB1BA: push 0x1c */
    ecx = POP32_VAL(esp); /* 0x170EB1BC: pop ecx */
    MEM32(esi) = eax; /* 0x170EB1BD: mov dword ptr [esi], eax */
    MEM32(edi) = ecx; /* 0x170EB1BF: mov dword ptr [edi], ecx */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170EB1C9; /* 0x170EB1C1: je 0x170eb1c9 */
L_170EB1C3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x170EB1C3: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170EB1C9; /* 0x170EB1C4: je 0x170eb1c9 */
L_170EB1C6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x170EB1C6: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB1D8; /* 0x170EB1C7: jne 0x170eb1d8 */
L_170EB1C9:
    if (2u) _cf = (((MEM32(esi)) >> 30) & 1u); /* 0x170EB1C9: shl dword ptr [esi], 2 */
    if (2u) { _flag_a = recomp_flags_pack((MEM32(esi) << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(esi) = MEM32(esi) << 2u; /* 0x170EB1C9: shl dword ptr [esi], 2 */
L_170EB1CC:
    eax = MEM32(ebp + 0xC); /* 0x170EB1CC: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x170EB1CF: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    goto L_170EB1DF; /* 0x170EB1D1: jmp 0x170eb1df */
L_170EB1D3:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EB1D3: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EB1D3: shl eax, 2 */
    RECOMP_BACKEDGE();
    goto L_170EB1B6; /* 0x170EB1D6: jmp 0x170eb1b6 */
L_170EB1D8:
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x170EB1D8: mov dword ptr [ebp - 4], 0x80004005 */
L_170EB1DF:
    ebx = POP32_VAL(esp); /* 0x170EB1DF: pop ebx */
L_170EB1E0:
    eax = MEM32(ebp + (-0x4)); /* 0x170EB1E0: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x170EB1E3: pop edi */
    esi = POP32_VAL(esp); /* 0x170EB1E4: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EB1E5: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170EB1E6: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170EB1EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EB1EEu);

L_170EB1EE:
    edi = edi; /* 0x170EB1EE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EB1F0: push ebp */
    ebp = esp; /* 0x170EB1F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x170EB1F3: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170EB1F6: push ebx */
    PUSH32(esp, esi); /* 0x170EB1F7: push esi */
    PUSH32(esp, edi); /* 0x170EB1F8: push edi */
    eax = MEM32(ebp + 0xC); /* 0x170EB1F9: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x170EB1FC: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx + 0x4); /* 0x170EB1FE: mov ecx, dword ptr [ecx + 4] */
    edx = MEM32(ebp + 0x1C); /* 0x170EB201: mov edx, dword ptr [ebp + 0x1c] */
    ebx = MEM32(ebp + 0x18); /* 0x170EB204: mov ebx, dword ptr [ebp + 0x18] */
    esi = MEM32(edx); /* 0x170EB207: mov esi, dword ptr [edx] */
    MEM32(esi + 0x4) = ecx; /* 0x170EB209: mov dword ptr [esi + 4], ecx */
    ecx = MEM32(eax); /* 0x170EB20C: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x170EB20E: mov ecx, dword ptr [ecx] */
    esi = MEM32(edx); /* 0x170EB210: mov esi, dword ptr [edx] */
    MEM32(esi) = ecx; /* 0x170EB212: mov dword ptr [esi], ecx */
    ecx = MEM32(eax); /* 0x170EB214: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx + 0x10); /* 0x170EB216: mov ecx, dword ptr [ecx + 0x10] */
    esi = MEM32(edx); /* 0x170EB219: mov esi, dword ptr [edx] */
    MEM32(esi + 0x10) = ecx; /* 0x170EB21B: mov dword ptr [esi + 0x10], ecx */
    ecx = MEM32(edx); /* 0x170EB21E: mov ecx, dword ptr [edx] */
    esi = MEM32(ebx); /* 0x170EB220: mov esi, dword ptr [ebx] */
    MEM32(ecx + 0x8) = esi; /* 0x170EB222: mov dword ptr [ecx + 8], esi */
    eax = MEM32(eax); /* 0x170EB225: mov eax, dword ptr [eax] */
    ecx = MEM32(eax + 0x4); /* 0x170EB227: mov ecx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x170EB22A: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(eax); /* 0x170EB22D: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170EB22F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x170EB231: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(eax + 0x10); /* 0x170EB234: mov ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170EB237: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170EB238: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, esi */ /* 0x170EB23A: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170EB23C: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x10)) = edi; /* 0x170EB23F: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + 0x18) = esi; /* 0x170EB242: mov dword ptr [ebp + 0x18], esi */
    if (CMP_B(_flag_a, _flag_b)) goto L_170EB24A; /* 0x170EB245: jb 0x170eb24a */
L_170EB247:
    MEM32(ebp + 0x18) = ecx; /* 0x170EB247: mov dword ptr [ebp + 0x18], ecx */
L_170EB24A:
    ecx = MEM32(eax + 0x8); /* 0x170EB24A: mov ecx, dword ptr [eax + 8] */
    esi = MEM32(ebp + 0x8); /* 0x170EB24D: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x170EB250: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), edi */ /* 0x170EB252: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EB25B; /* 0x170EB254: jne 0x170eb25b */
L_170EB256:
    MEM32(ebp + (-0x8)) = edi; /* 0x170EB256: mov dword ptr [ebp - 8], edi */
    goto L_170EB261; /* 0x170EB259: jmp 0x170eb261 */
L_170EB25B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x170EB25B: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x170EB25E: mov dword ptr [ebp - 8], ecx */
L_170EB261:
    eax = MEM32(eax + 0xC); /* 0x170EB261: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x170EB264: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), edi */ /* 0x170EB266: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EB26F; /* 0x170EB268: jne 0x170eb26f */
L_170EB26A:
    MEM32(ebp + (-0xC)) = edi; /* 0x170EB26A: mov dword ptr [ebp - 0xc], edi */
    goto L_170EB275; /* 0x170EB26D: jmp 0x170eb275 */
L_170EB26F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170EB26F: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x170EB272: mov dword ptr [ebp - 0xc], eax */
L_170EB275:
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x170EB275: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB498; /* 0x170EB278: je 0x170eb498 */
L_170EB27E:
    edi = MEM32(ebp + (-0x8)); /* 0x170EB27E: mov edi, dword ptr [ebp - 8] */
    esi = edi + 0x1; /* 0x170EB281: lea esi, [edi + 1] */
L_170EB284:
    SET_LO8(eax, MEM8(edi)); /* 0x170EB284: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x170EB286: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x170EB287: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EB284; /* 0x170EB289: jne 0x170eb284 */
L_170EB28B:
    eax = MEM32(ebp + 0x14); /* 0x170EB28B: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x170EB28E: sub edi, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebx); /* 0x170EB290: mov esi, dword ptr [ebx] */
    ecx = edi + 0x1; /* 0x170EB292: lea ecx, [edi + 1] */
    MEM32(eax + esi) = ecx; /* 0x170EB295: mov dword ptr [eax + esi], ecx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 4; /* 0x170EB298: add dword ptr [ebx], 4 */
    _flag_k = FK_ADD;
    edi = MEM32(ebx); /* 0x170EB29B: mov edi, dword ptr [ebx] */
    esi = MEM32(ebp + (-0x8)); /* 0x170EB29D: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x170EB2A0: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x170EB2A2: mov dword ptr [ebp - 0x18], ecx */
    eax = ecx; /* 0x170EB2A5: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170EB2A7: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170EB2A7: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170EB2AA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170EB2AC: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170EB2AE: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170EB2B1: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = eax; /* 0x170EB2B3: mov esi, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170EB2B5: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x170EB2B8: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x170EB2BA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x170EB2BC: neg eax */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x170EB2BE: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x170EB2BE: shr esi, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x170EB2C1: add eax, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0xC)); /* 0x170EB2C3: mov esi, dword ptr [ebp - 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EB2C6: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EB2C6: shl eax, 2 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x170EB2C9: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x170EB2CB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx); /* 0x170EB2CD: mov eax, dword ptr [ebx] */
    ecx = MEM32(edx); /* 0x170EB2CF: mov ecx, dword ptr [edx] */
    MEM32(ecx + 0xC) = eax; /* 0x170EB2D1: mov dword ptr [ecx + 0xc], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EB2E3; /* 0x170EB2D4: jne 0x170eb2e3 */
L_170EB2D6:
    eax = MEM32(ebx); /* 0x170EB2D6: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + 0x14); /* 0x170EB2D8: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(esi);
    MEM32(ecx + eax) = MEM32(ecx + eax) & esi; /* 0x170EB2DB: and dword ptr [ecx + eax], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 4; /* 0x170EB2DE: add dword ptr [ebx], 4 */
    _flag_k = FK_ADD;
    goto L_170EB32A; /* 0x170EB2E1: jmp 0x170eb32a */
L_170EB2E3:
    edi = esi + 0x1; /* 0x170EB2E3: lea edi, [esi + 1] */
L_170EB2E6:
    SET_LO8(eax, MEM8(esi)); /* 0x170EB2E6: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170EB2E8: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x170EB2E9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EB2E6; /* 0x170EB2EB: jne 0x170eb2e6 */
L_170EB2ED:
    eax = MEM32(ebp + 0x14); /* 0x170EB2ED: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x170EB2F0: sub esi, edi */
    _flag_k = FK_CMP;
    ecx = esi + 0x1; /* 0x170EB2F2: lea ecx, [esi + 1] */
    esi = MEM32(ebx); /* 0x170EB2F5: mov esi, dword ptr [ebx] */
    MEM32(eax + esi) = ecx; /* 0x170EB2F7: mov dword ptr [eax + esi], ecx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 4; /* 0x170EB2FA: add dword ptr [ebx], 4 */
    _flag_k = FK_ADD;
    edi = MEM32(ebx); /* 0x170EB2FD: mov edi, dword ptr [ebx] */
    esi = MEM32(ebp + (-0xC)); /* 0x170EB2FF: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x170EB302: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x170EB304: mov dword ptr [ebp - 0x18], ecx */
    eax = ecx; /* 0x170EB307: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170EB309: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170EB309: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170EB30C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170EB30E: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170EB310: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170EB313: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = eax; /* 0x170EB315: mov esi, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170EB317: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x170EB31A: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x170EB31C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x170EB31E: neg eax */
    _flag_k = FK_CMP;
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x170EB320: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x170EB320: shr esi, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x170EB323: add eax, esi */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EB325: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EB325: shl eax, 2 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x170EB328: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
L_170EB32A:
    eax = MEM32(ebp + (-0x1C)); /* 0x170EB32A: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x170EB32D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EB498; /* 0x170EB32F: jl 0x170eb498 */
L_170EB335:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170EB335: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x170EB337: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x170EB338: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB432; /* 0x170EB33A: jle 0x170eb432 */
L_170EB340:
    /* cmp eax, 3 */ /* 0x170EB340: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB42F; /* 0x170EB343: jle 0x170eb42f */
L_170EB349:
    /* cmp eax, 4 */ /* 0x170EB349: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB3DB; /* 0x170EB34C: je 0x170eb3db */
L_170EB352:
    /* cmp eax, 5 */ /* 0x170EB352: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EB498; /* 0x170EB355: jne 0x170eb498 */
L_170EB35B:
    eax = MEM32(ebp + 0xC); /* 0x170EB35B: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x170EB35E: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx + 0x14); /* 0x170EB360: mov ecx, dword ptr [ecx + 0x14] */
    esi = MEM32(edx); /* 0x170EB363: mov esi, dword ptr [edx] */
    MEM32(esi + 0x14) = ecx; /* 0x170EB365: mov dword ptr [esi + 0x14], ecx */
    ecx = MEM32(eax); /* 0x170EB368: mov ecx, dword ptr [eax] */
    esi = MEM32(ecx + 0x14); /* 0x170EB36A: mov esi, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x170EB36D: add ecx, 0x18 */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x170EB370: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 0x18u; /* 0x170EB372: add dword ptr [edx], 0x18 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x170EB375: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebx); /* 0x170EB379: mov ecx, dword ptr [ebx] */
    edi = MEM32(eax); /* 0x170EB37B: mov edi, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = esi; /* 0x170EB37D: mov dword ptr [ebp - 8], esi */
    esi = MEM32(edx); /* 0x170EB380: mov esi, dword ptr [edx] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x170EB382: mov dword ptr [ebp - 0x1c], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB49F; /* 0x170EB385: je 0x170eb49f */
L_170EB38B:
    ecx = MEM32(ebp + (-0x1C)); /* 0x170EB38B: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x170EB38E: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x170EB392: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax) = edi; /* 0x170EB396: mov dword ptr [eax], edi */
    MEM32(edx) = esi; /* 0x170EB398: mov dword ptr [edx], esi */
    MEM32(ebx) = ecx; /* 0x170EB39A: mov dword ptr [ebx], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170EB3D1; /* 0x170EB39C: jbe 0x170eb3d1 */
L_170EB39E:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x170EB39E: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170EB3A1: push dword ptr [ebp + 0x20] */
    PUSH32(esp, edx); /* 0x170EB3A4: push edx */
    PUSH32(esp, ebx); /* 0x170EB3A5: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170EB3A6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170EB3A9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170EB3AC: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170EB3AD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170EB1EE); /* 0x170EB3B0: call 0x170eb1ee */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EB3B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170EB3B7: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EB49F; /* 0x170EB3BA: jl 0x170eb49f */
L_170EB3C0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x170EB3C0: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x170EB3C3: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x170EB3C6: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x1C); /* 0x170EB3C9: mov edx, dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0xC); /* 0x170EB3CC: mov eax, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EB39E; /* 0x170EB3CF: jb 0x170eb39e */
L_170EB3D1:
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1; /* 0x170EB3D1: dec dword ptr [ebp + 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB38B; /* 0x170EB3D4: jne 0x170eb38b */
L_170EB3D6:
    goto L_170EB49F; /* 0x170EB3D6: jmp 0x170eb49f */
L_170EB3DB:
    eax = MEM32(ebp + (-0x14)); /* 0x170EB3DB: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, 4 */ /* 0x170EB3DE: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170EB498; /* 0x170EB3E1: jl 0x170eb498 */
L_170EB3E7:
    /* cmp eax, 9 */ /* 0x170EB3E7: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB3FE; /* 0x170EB3EA: jle 0x170eb3fe */
L_170EB3EC:
    /* cmp eax, 0xEu */ /* 0x170EB3EC: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB498; /* 0x170EB3EF: jle 0x170eb498 */
L_170EB3F5:
    /* cmp eax, 0x10u */ /* 0x170EB3F5: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170EB498; /* 0x170EB3F8: jg 0x170eb498 */
L_170EB3FE:
    eax = MEM32(ebp + 0x18); /* 0x170EB3FE: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x170EB401: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB424; /* 0x170EB403: je 0x170eb424 */
L_170EB405:
    ecx = MEM32(ebp + 0x20); /* 0x170EB405: mov ecx, dword ptr [ebp + 0x20] */
    esi = MEM32(ebp + 0x10); /* 0x170EB408: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x14) = eax; /* 0x170EB40B: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(ebp + 0x24); /* 0x170EB40E: mov eax, dword ptr [ebp + 0x24] */
L_170EB411:
    edi = MEM32(ecx); /* 0x170EB411: mov edi, dword ptr [ecx] */
    ebx = MEM32(eax); /* 0x170EB413: mov ebx, dword ptr [eax] */
    MEM32(edi) = ebx; /* 0x170EB415: mov dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x170EB417: inc dword ptr [eax] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x170EB419: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + 4; /* 0x170EB41C: add dword ptr [ecx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x170EB41F: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB411; /* 0x170EB422: jne 0x170eb411 */
L_170EB424:
    eax = MEM32(ebp + 0xC); /* 0x170EB424: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 0x14u; /* 0x170EB427: add dword ptr [eax], 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 0x14u; /* 0x170EB42A: add dword ptr [edx], 0x14 */
    _flag_k = FK_ADD;
    goto L_170EB49F; /* 0x170EB42D: jmp 0x170eb49f */
L_170EB42F:
    MEM32(ebp + (-0x10)) = ecx; /* 0x170EB42F: mov dword ptr [ebp - 0x10], ecx */
L_170EB432:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x170EB432: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x170EB436: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x170EB439: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx + 0x14); /* 0x170EB43B: mov ecx, dword ptr [ecx + 0x14] */
    esi = MEM32(edx); /* 0x170EB43E: mov esi, dword ptr [edx] */
    MEM32(esi + 0x14) = ecx; /* 0x170EB440: mov dword ptr [esi + 0x14], ecx */
    eax = MEM32(eax); /* 0x170EB443: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x18); /* 0x170EB445: mov eax, dword ptr [eax + 0x18] */
    ecx = MEM32(edx); /* 0x170EB448: mov ecx, dword ptr [edx] */
    MEM32(ecx + 0x18) = eax; /* 0x170EB44A: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ebp + 0x18); /* 0x170EB44D: mov eax, dword ptr [ebp + 0x18] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB457; /* 0x170EB450: je 0x170eb457 */
L_170EB452:
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x170EB452: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x170EB452: shl eax, 4 */
    goto L_170EB45A; /* 0x170EB455: jmp 0x170eb45a */
L_170EB457:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EB457: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EB457: shl eax, 2 */
L_170EB45A:
    ecx = MEM32(ebp + (-0x14)); /* 0x170EB45A: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170EB45D: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170EB466; /* 0x170EB45E: je 0x170eb466 */
L_170EB460:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170EB460: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170EB466; /* 0x170EB461: je 0x170eb466 */
L_170EB463:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x170EB463: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB498; /* 0x170EB464: jne 0x170eb498 */
L_170EB466:
    esi = MEM32(ebp + 0x10); /* 0x170EB466: mov esi, dword ptr [ebp + 0x10] */
    esi = MEM32(esi); /* 0x170EB469: mov esi, dword ptr [esi] */
    edi = MEM32(ebp + 0x20); /* 0x170EB46B: mov edi, dword ptr [ebp + 0x20] */
    edi = MEM32(edi); /* 0x170EB46E: mov edi, dword ptr [edi] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EB470: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EB470: shl eax, 2 */
    ecx = eax; /* 0x170EB473: mov ecx, eax */
    ebx = ecx; /* 0x170EB475: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170EB477: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170EB477: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170EB47A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x170EB47C: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170EB47E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170EB481: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x10); /* 0x170EB483: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x170EB486: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x20); /* 0x170EB488: mov ecx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x170EB48B: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x170EB48D: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 0x1Cu; /* 0x170EB490: add dword ptr [eax], 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 0x1Cu; /* 0x170EB493: add dword ptr [edx], 0x1c */
    _flag_k = FK_ADD;
    goto L_170EB49F; /* 0x170EB496: jmp 0x170eb49f */
L_170EB498:
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x170EB498: mov dword ptr [ebp - 4], 0x80004005 */
L_170EB49F:
    eax = MEM32(ebp + (-0x4)); /* 0x170EB49F: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x170EB4A2: pop edi */
    esi = POP32_VAL(esp); /* 0x170EB4A3: pop esi */
    ebx = POP32_VAL(esp); /* 0x170EB4A4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EB4A5: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170EB4A6: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170EB4AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EB4AEu);

L_170EB4AE:
    edi = edi; /* 0x170EB4AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EB4B0: push ebp */
    ebp = esp; /* 0x170EB4B1: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x170EB4B3: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x18); /* 0x170EB4B6: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x24); /* 0x170EB4B9: mov ecx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170EB4BC: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x1C); /* 0x170EB4BE: add eax, dword ptr [ebp + 0x1c] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x170EB4C1: push esi */
    esi = MEM32(ebp + 0x20); /* 0x170EB4C2: mov esi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x170EB4C5: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = eax; /* 0x170EB4C8: mov dword ptr [ebp + 0x14], eax */
    eax = eax + esi + 0x4; /* 0x170EB4CB: lea eax, [eax + esi + 4] */
    PUSH32(esp, ecx); /* 0x170EB4CF: push ecx */
    MEM32(ebp + 0x24) = eax; /* 0x170EB4D0: mov dword ptr [ebp + 0x24], eax */
    eax = ebp + 0x24; /* 0x170EB4D3: lea eax, [ebp + 0x24] */
    PUSH32(esp, eax); /* 0x170EB4D6: push eax */
    eax = ebp + 0x14; /* 0x170EB4D7: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x170EB4DA: push eax */
    eax = ebp + 0x18; /* 0x170EB4DB: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x170EB4DE: push eax */
    PUSH32(esp, edx); /* 0x170EB4DF: push edx */
    eax = ebp + 0x10; /* 0x170EB4E0: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170EB4E3: push eax */
    eax = ebp + 0xC; /* 0x170EB4E4: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x170EB4E7: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170EB4E8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170EB1EE); /* 0x170EB4EB: call 0x170eb1ee */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x170EB4F0: pop esi */
    ebp = POP32_VAL(esp); /* 0x170EB4F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170EB4F2: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170EB4FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EB4FAu);

L_170EB4FA:
    edi = edi; /* 0x170EB4FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EB4FC: push ebp */
    ebp = esp; /* 0x170EB4FD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170EB4FF: push ecx */
    PUSH32(esp, ecx); /* 0x170EB500: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170EB501: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x170EB505: push ebx */
    PUSH32(esp, esi); /* 0x170EB506: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170EB507: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x170EB50A: mov ecx, dword ptr [esi] */
    edx = MEM32(ecx + 0x10); /* 0x170EB50C: mov edx, dword ptr [ecx + 0x10] */
    eax = MEM32(ecx); /* 0x170EB50F: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170EB511: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170EB513: inc ebx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x170EB514: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x170EB516: push edi */
    edi = MEM32(ecx + 0x4); /* 0x170EB517: mov edi, dword ptr [ecx + 4] */
    MEM32(ebp + 0x8) = ebx; /* 0x170EB51A: mov dword ptr [ebp + 8], ebx */
    if (CMP_B(_flag_a, _flag_b)) goto L_170EB522; /* 0x170EB51D: jb 0x170eb522 */
L_170EB51F:
    MEM32(ebp + 0x8) = edx; /* 0x170EB51F: mov dword ptr [ebp + 8], edx */
L_170EB522:
    /* test edi, edi */ /* 0x170EB522: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EB5D9; /* 0x170EB524: jl 0x170eb5d9 */
L_170EB52A:
    /* cmp edi, 3 */ /* 0x170EB52A: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB5B6; /* 0x170EB52D: jle 0x170eb5b6 */
L_170EB533:
    /* cmp edi, 4 */ /* 0x170EB533: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB57F; /* 0x170EB536: je 0x170eb57f */
L_170EB538:
    /* cmp edi, 5 */ /* 0x170EB538: cmp edi, 5 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EB5D9; /* 0x170EB53B: jne 0x170eb5d9 */
L_170EB541:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170EB541: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ecx + 0x14); /* 0x170EB545: mov ebx, dword ptr [ecx + 0x14] */
    edi = ecx + 0x18; /* 0x170EB548: lea edi, [ecx + 0x18] */
    MEM32(esi) = edi; /* 0x170EB54B: mov dword ptr [esi], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB5E0; /* 0x170EB54D: je 0x170eb5e0 */
L_170EB553:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x170EB553: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170EB557: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edi; /* 0x170EB559: mov dword ptr [esi], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB578; /* 0x170EB55B: jbe 0x170eb578 */
L_170EB55D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170EB55D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170EB560: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x170EB563: push esi */
    RECOMP_CALL(sub_170EB4FA); /* 0x170EB564: call 0x170eb4fa */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EB569: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170EB56B: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EB5E0; /* 0x170EB56E: jl 0x170eb5e0 */
L_170EB570:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x170EB570: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x170EB573: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EB55D; /* 0x170EB576: jb 0x170eb55d */
L_170EB578:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x170EB578: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB553; /* 0x170EB57B: jne 0x170eb553 */
L_170EB57D:
    goto L_170EB5E0; /* 0x170EB57D: jmp 0x170eb5e0 */
L_170EB57F:
    /* cmp eax, 4 */ /* 0x170EB57F: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_170EB5D9; /* 0x170EB582: jl 0x170eb5d9 */
L_170EB584:
    /* cmp eax, 9 */ /* 0x170EB584: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB593; /* 0x170EB587: jle 0x170eb593 */
L_170EB589:
    /* cmp eax, 0xEu */ /* 0x170EB589: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB5D9; /* 0x170EB58C: jle 0x170eb5d9 */
L_170EB58E:
    /* cmp eax, 0x10u */ /* 0x170EB58E: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170EB5D9; /* 0x170EB591: jg 0x170eb5d9 */
L_170EB593:
    eax = MEM32(ebp + 0x8); /* 0x170EB593: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x170EB596: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB5B1; /* 0x170EB598: je 0x170eb5b1 */
L_170EB59A:
    ecx = MEM32(ebp + 0x10); /* 0x170EB59A: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x170EB59D: mov edx, dword ptr [ebp + 0xc] */
L_170EB5A0:
    edi = MEM32(edx); /* 0x170EB5A0: mov edi, dword ptr [edx] */
    ebx = MEM32(ecx); /* 0x170EB5A2: mov ebx, dword ptr [ecx] */
    edi = MEM32(edi); /* 0x170EB5A4: mov edi, dword ptr [edi] */
    MEM32(ebx) = edi; /* 0x170EB5A6: mov dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + 4; /* 0x170EB5A8: add dword ptr [ecx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 4; /* 0x170EB5AB: add dword ptr [edx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170EB5AE: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB5A0; /* 0x170EB5AF: jne 0x170eb5a0 */
L_170EB5B1:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 0x14u; /* 0x170EB5B1: add dword ptr [esi], 0x14 */
    _flag_k = FK_ADD;
    goto L_170EB5E0; /* 0x170EB5B4: jmp 0x170eb5e0 */
L_170EB5B6:
    edx = MEM32(ecx + 0x18); /* 0x170EB5B6: mov edx, dword ptr [ecx + 0x18] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x14)); /* 0x170EB5B9: imul edx, dword ptr [ecx + 0x14] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x8)); /* 0x170EB5BD: imul edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170EB5C1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170EB5CA; /* 0x170EB5C2: je 0x170eb5ca */
L_170EB5C4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170EB5C4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170EB5CA; /* 0x170EB5C5: je 0x170eb5ca */
L_170EB5C7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170EB5C7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB5D9; /* 0x170EB5C8: jne 0x170eb5d9 */
L_170EB5CA:
    eax = MEM32(ebp + 0xC); /* 0x170EB5CA: mov eax, dword ptr [ebp + 0xc] */
    ecx = edx; /* 0x170EB5CD: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x170EB5CF: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x170EB5CF: shl ecx, 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x170EB5D2: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 0x1Cu; /* 0x170EB5D4: add dword ptr [esi], 0x1c */
    _flag_k = FK_ADD;
    goto L_170EB5E0; /* 0x170EB5D7: jmp 0x170eb5e0 */
L_170EB5D9:
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x170EB5D9: mov dword ptr [ebp - 4], 0x80004005 */
L_170EB5E0:
    eax = MEM32(ebp + (-0x4)); /* 0x170EB5E0: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x170EB5E3: pop edi */
    esi = POP32_VAL(esp); /* 0x170EB5E4: pop esi */
    ebx = POP32_VAL(esp); /* 0x170EB5E5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EB5E6: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170EB5E7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170EB5EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EB5EFu);

L_170EB5EF:
    edi = edi; /* 0x170EB5EF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EB5F1: push ebp */
    ebp = esp; /* 0x170EB5F2: mov ebp, esp */
    eax = ebp + 0x10; /* 0x170EB5F4: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170EB5F7: push eax */
    eax = ebp + 0xC; /* 0x170EB5F8: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x170EB5FB: push eax */
    eax = ebp + 0x8; /* 0x170EB5FC: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x170EB5FF: push eax */
    RECOMP_CALL(sub_170EB4FA); /* 0x170EB600: call 0x170eb4fa */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170EB605: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170EB606: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170EB60E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EB60Eu);

L_170EB60E:
    edi = edi; /* 0x170EB60E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EB610: push ebp */
    ebp = esp; /* 0x170EB611: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170EB613: push ecx */
    PUSH32(esp, ebx); /* 0x170EB614: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x170EB615: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebx); /* 0x170EB618: mov ecx, dword ptr [ebx] */
    edx = MEM32(ecx + 0x4); /* 0x170EB61A: mov edx, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x170EB61D: push esi */
    esi = MEM32(ecx); /* 0x170EB61E: mov esi, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x170EB620: push edi */
    edi = MEM32(ecx + 0x10); /* 0x170EB621: mov edi, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EB624: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 1 */ /* 0x170EB626: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x170EB629: mov dword ptr [ebp - 4], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_170EB631; /* 0x170EB62C: jae 0x170eb631 */
L_170EB62E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170EB62E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x170EB630: inc edi */
    _flag_k = FK_INC;
L_170EB631:
    /* test edx, edx */ /* 0x170EB631: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EB6FB; /* 0x170EB633: jl 0x170eb6fb */
L_170EB639:
    /* cmp edx, 3 */ /* 0x170EB639: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB6B9; /* 0x170EB63C: jle 0x170eb6b9 */
L_170EB63E:
    /* cmp edx, 4 */ /* 0x170EB63E: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB68F; /* 0x170EB641: je 0x170eb68f */
L_170EB643:
    /* cmp edx, 5 */ /* 0x170EB643: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EB6FB; /* 0x170EB646: jne 0x170eb6fb */
L_170EB64C:
    /* test edi, edi */ /* 0x170EB64C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ecx + 0x14); /* 0x170EB64E: mov edx, dword ptr [ecx + 0x14] */
    esi = ecx + 0x18; /* 0x170EB651: lea esi, [ecx + 0x18] */
    MEM32(ebp + (-0x4)) = edx; /* 0x170EB654: mov dword ptr [ebp - 4], edx */
    MEM32(ebx) = esi; /* 0x170EB657: mov dword ptr [ebx], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB700; /* 0x170EB659: je 0x170eb700 */
L_170EB65F:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x170EB65F: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x170EB663: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx) = esi; /* 0x170EB667: mov dword ptr [ebx], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170EB68A; /* 0x170EB669: jbe 0x170eb68a */
L_170EB66B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170EB66B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170EB66E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x170EB671: push ebx */
    RECOMP_CALL(sub_170EB60E); /* 0x170EB672: call 0x170eb60e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EB677: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EB700; /* 0x170EB679: jl 0x170eb700 */
L_170EB67F:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x170EB67F: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + 0x8); /* 0x170EB682: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(ebp + (-0x4)) */ /* 0x170EB685: cmp ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EB66B; /* 0x170EB688: jb 0x170eb66b */
L_170EB68A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EB68A: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB65F; /* 0x170EB68B: jne 0x170eb65f */
L_170EB68D:
    goto L_170EB700; /* 0x170EB68D: jmp 0x170eb700 */
L_170EB68F:
    ecx = esi + (-0x4); /* 0x170EB68F: lea ecx, [esi - 4] */
    /* cmp ecx, 0xEu */ /* 0x170EB692: cmp ecx, 0xe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_170EB6FB; /* 0x170EB695: ja 0x170eb6fb */
L_170EB697:
    ecx = (uint32_t)MEM8(ecx + 0x170EB70F); /* 0x170EB697: movzx ecx, byte ptr [ecx + 0x170eb70f] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x170EB707)); goto _ljump; }
L_170EB6A5:
    edx = MEM32(ebp + 0xC); /* 0x170EB6A5: mov edx, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x170EB6A8: mov ecx, edi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x170EB6AA: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x170EB6AA: shl ecx, 2 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + ecx; /* 0x170EB6AD: add dword ptr [edx], ecx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x10); /* 0x170EB6AF: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + ecx; /* 0x170EB6B2: add dword ptr [edx], ecx */
    _flag_k = FK_ADD;
L_170EB6B4:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 0x14u; /* 0x170EB6B4: add dword ptr [ebx], 0x14 */
    _flag_k = FK_ADD;
    goto L_170EB700; /* 0x170EB6B7: jmp 0x170eb700 */
L_170EB6B9:
    edx = MEM32(ecx + 0x18); /* 0x170EB6B9: mov edx, dword ptr [ecx + 0x18] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x14)); /* 0x170EB6BC: imul edx, dword ptr [ecx + 0x14] */
    edx = (uint32_t)((int32_t)edx * (int32_t)edi); /* 0x170EB6C0: imul edx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170EB6C3: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170EB6CC; /* 0x170EB6C4: je 0x170eb6cc */
L_170EB6C6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170EB6C6: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170EB6CC; /* 0x170EB6C7: je 0x170eb6cc */
L_170EB6C9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170EB6C9: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB6FB; /* 0x170EB6CA: jne 0x170eb6fb */
L_170EB6CC:
    eax = MEM32(ebp + 0x10); /* 0x170EB6CC: mov eax, dword ptr [ebp + 0x10] */
    esi = MEM32(eax); /* 0x170EB6CF: mov esi, dword ptr [eax] */
    eax = MEM32(ebp + 0xC); /* 0x170EB6D1: mov eax, dword ptr [ebp + 0xc] */
    edi = MEM32(eax); /* 0x170EB6D4: mov edi, dword ptr [eax] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x170EB6D6: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x170EB6D6: shl edx, 2 */
    ecx = edx; /* 0x170EB6D9: mov ecx, edx */
    eax = ecx; /* 0x170EB6DB: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170EB6DD: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170EB6DD: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170EB6E0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170EB6E2: mov ecx, eax */
    eax = MEM32(ebp + 0xC); /* 0x170EB6E4: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170EB6E7: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170EB6EA: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edx; /* 0x170EB6EC: add dword ptr [eax], edx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x170EB6EE: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edx; /* 0x170EB6F1: add dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 0x1Cu; /* 0x170EB6F3: add dword ptr [ebx], 0x1c */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x170EB6F6: mov eax, dword ptr [ebp - 4] */
    goto L_170EB700; /* 0x170EB6F9: jmp 0x170eb700 */
L_170EB6FB:
    eax = 0x80004005u; /* 0x170EB6FB: mov eax, 0x80004005 */
L_170EB700:
    edi = POP32_VAL(esp); /* 0x170EB700: pop edi */
    esi = POP32_VAL(esp); /* 0x170EB701: pop esi */
    ebx = POP32_VAL(esp); /* 0x170EB702: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EB703: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170EB704: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x170EB6A5u: goto L_170EB6A5;
      case 0x170EB6B4u: goto L_170EB6B4;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170EB723(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EB723u);

L_170EB723:
    edi = edi; /* 0x170EB723: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EB725: push ebp */
    ebp = esp; /* 0x170EB726: mov ebp, esp */
    eax = ebp + 0x10; /* 0x170EB728: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x170EB72B: push eax */
    eax = ebp + 0xC; /* 0x170EB72C: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x170EB72F: push eax */
    eax = ebp + 0x8; /* 0x170EB730: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x170EB733: push eax */
    RECOMP_CALL(sub_170EB60E); /* 0x170EB734: call 0x170eb60e */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170EB739: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170EB73A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170EB742(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EB742u);

L_170EB742:
    edi = edi; /* 0x170EB742: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EB744: push ebp */
    ebp = esp; /* 0x170EB745: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170EB747: push ecx */
    PUSH32(esp, ecx); /* 0x170EB748: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x170EB749: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x170EB74C: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170EB74E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x170EB752: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, ebx); /* 0x170EB755: push ebx */
    PUSH32(esp, esi); /* 0x170EB756: push esi */
    esi = MEM32(eax); /* 0x170EB757: mov esi, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x170EB759: push edi */
    edi = MEM32(eax + 0x10); /* 0x170EB75A: mov edi, dword ptr [eax + 0x10] */
    /* cmp edi, 1 */ /* 0x170EB75D: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170EB765; /* 0x170EB760: jae 0x170eb765 */
L_170EB762:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170EB762: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x170EB764: inc edi */
    _flag_k = FK_INC;
L_170EB765:
    /* test ecx, ecx */ /* 0x170EB765: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EB998; /* 0x170EB767: jl 0x170eb998 */
L_170EB76D:
    /* cmp ecx, 3 */ /* 0x170EB76D: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EBA61; /* 0x170EB770: jle 0x170eba61 */
L_170EB776:
    /* cmp ecx, 4 */ /* 0x170EB776: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB7CB; /* 0x170EB779: je 0x170eb7cb */
L_170EB77B:
    /* cmp ecx, 5 */ /* 0x170EB77B: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EB998; /* 0x170EB77E: jne 0x170eb998 */
L_170EB784:
    /* test edi, edi */ /* 0x170EB784: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(eax + 0x14); /* 0x170EB786: mov ebx, dword ptr [eax + 0x14] */
    esi = eax + 0x18; /* 0x170EB789: lea esi, [eax + 0x18] */
    MEM32(edx) = esi; /* 0x170EB78C: mov dword ptr [edx], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB99F; /* 0x170EB78E: je 0x170eb99f */
L_170EB794:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x170EB794: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x170EB798: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = esi; /* 0x170EB79A: mov dword ptr [edx], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB7C3; /* 0x170EB79C: jbe 0x170eb7c3 */
L_170EB79E:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170EB79E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170EB7A1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170EB7A4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x170EB7A7: push edx */
    RECOMP_CALL(sub_170EB742); /* 0x170EB7A8: call 0x170eb742 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EB7AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170EB7AF: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EB99F; /* 0x170EB7B2: jl 0x170eb99f */
L_170EB7B8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x170EB7B8: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x170EB7BB: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x170EB7BE: mov edx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170EB79E; /* 0x170EB7C1: jb 0x170eb79e */
L_170EB7C3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170EB7C3: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB794; /* 0x170EB7C4: jne 0x170eb794 */
L_170EB7C6:
    goto L_170EB99F; /* 0x170EB7C6: jmp 0x170eb99f */
L_170EB7CB:
    /* cmp esi, 0xFu */ /* 0x170EB7CB: cmp esi, 0xf */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_170EB988; /* 0x170EB7CE: jg 0x170eb988 */
L_170EB7D4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB8D6; /* 0x170EB7D4: je 0x170eb8d6 */
L_170EB7DA:
    /* cmp esi, 4 */ /* 0x170EB7DA: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB866; /* 0x170EB7DD: je 0x170eb866 */
L_170EB7E3:
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB998; /* 0x170EB7E3: jle 0x170eb998 */
L_170EB7E9:
    /* cmp esi, 9 */ /* 0x170EB7E9: cmp esi, 9 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB7F6; /* 0x170EB7EC: jle 0x170eb7f6 */
L_170EB7EE:
    /* cmp esi, 0xEu */ /* 0x170EB7EE: cmp esi, 0xe */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_170EB992; /* 0x170EB7F1: jmp 0x170eb992 */
L_170EB7F6:
    /* test edi, edi */ /* 0x170EB7F6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBA59; /* 0x170EB7F8: je 0x170eba59 */
L_170EB7FE:
    ebx = MEM32(ebp + 0xC); /* 0x170EB7FE: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = edi; /* 0x170EB801: mov dword ptr [ebp - 8], edi */
L_170EB804:
    eax = MEM32(ebx); /* 0x170EB804: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x170EB806: mov eax, dword ptr [eax] */
    edx = MEM32(ebp + 0x14); /* 0x170EB808: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(edx + 0x8); /* 0x170EB80B: mov ecx, dword ptr [edx + 8] */
    edx = MEM32(edx); /* 0x170EB80E: mov edx, dword ptr [edx] */
    edx = MEM32(edx + 0x18); /* 0x170EB810: mov edx, dword ptr [edx + 0x18] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EB813: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EB813: shl eax, 2 */
    ecx = MEM32(eax + ecx); /* 0x170EB816: mov ecx, dword ptr [eax + ecx] */
    ecx = ecx + ecx * 2; /* 0x170EB819: lea ecx, [ecx + ecx*2] */
    edi = edx + ecx * 8; /* 0x170EB81C: lea edi, [edx + ecx*8] */
    ecx = MEM32(ebp + 0x10); /* 0x170EB81F: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ecx + 0x8); /* 0x170EB822: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(eax + edx); /* 0x170EB825: mov eax, dword ptr [eax + edx] */
    ecx = MEM32(ecx); /* 0x170EB828: mov ecx, dword ptr [ecx] */
    ecx = MEM32(ecx + 0x18); /* 0x170EB82A: mov ecx, dword ptr [ecx + 0x18] */
    eax = eax + eax * 2; /* 0x170EB82D: lea eax, [eax + eax*2] */
    esi = ecx + eax * 8; /* 0x170EB830: lea esi, [ecx + eax*8] */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x170EB833: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB842; /* 0x170EB837: je 0x170eb842 */
L_170EB839:
    eax = MEM32(esi + 0x4); /* 0x170EB839: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax); /* 0x170EB83C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EB83E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170EB83F: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_170EB842:
    eax = MEM32(edi + 0x4); /* 0x170EB842: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x170EB845: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB853; /* 0x170EB847: je 0x170eb853 */
L_170EB849:
    ecx = MEM32(eax); /* 0x170EB849: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EB84B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170EB84C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0; /* 0x170EB84F: and dword ptr [edi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EB853:
    eax = MEM32(esi + 0x4); /* 0x170EB853: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0x4) = eax; /* 0x170EB856: mov dword ptr [edi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 4; /* 0x170EB859: add dword ptr [ebx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x170EB85C: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB804; /* 0x170EB85F: jne 0x170eb804 */
L_170EB861:
    goto L_170EBA56; /* 0x170EB861: jmp 0x170eba56 */
L_170EB866:
    /* test edi, edi */ /* 0x170EB866: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBA59; /* 0x170EB868: je 0x170eba59 */
L_170EB86E:
    ebx = MEM32(ebp + 0xC); /* 0x170EB86E: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = edi; /* 0x170EB871: mov dword ptr [ebp - 8], edi */
L_170EB874:
    eax = MEM32(ebx); /* 0x170EB874: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x170EB876: mov eax, dword ptr [eax] */
    edx = MEM32(ebp + 0x14); /* 0x170EB878: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(edx + 0x8); /* 0x170EB87B: mov ecx, dword ptr [edx + 8] */
    edx = MEM32(edx); /* 0x170EB87E: mov edx, dword ptr [edx] */
    edx = MEM32(edx + 0x18); /* 0x170EB880: mov edx, dword ptr [edx + 0x18] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EB883: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EB883: shl eax, 2 */
    ecx = MEM32(eax + ecx); /* 0x170EB886: mov ecx, dword ptr [eax + ecx] */
    ecx = ecx + ecx * 2; /* 0x170EB889: lea ecx, [ecx + ecx*2] */
    edi = edx + ecx * 8; /* 0x170EB88C: lea edi, [edx + ecx*8] */
    ecx = MEM32(ebp + 0x10); /* 0x170EB88F: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ecx + 0x8); /* 0x170EB892: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(eax + edx); /* 0x170EB895: mov eax, dword ptr [eax + edx] */
    ecx = MEM32(ecx); /* 0x170EB898: mov ecx, dword ptr [ecx] */
    ecx = MEM32(ecx + 0x18); /* 0x170EB89A: mov ecx, dword ptr [ecx + 0x18] */
    eax = eax + eax * 2; /* 0x170EB89D: lea eax, [eax + eax*2] */
    esi = ecx + eax * 8; /* 0x170EB8A0: lea esi, [ecx + eax*8] */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x170EB8A3: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB8B2; /* 0x170EB8A7: je 0x170eb8b2 */
L_170EB8A9:
    eax = MEM32(esi + 0x4); /* 0x170EB8A9: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax); /* 0x170EB8AC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EB8AE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170EB8AF: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_170EB8B2:
    eax = MEM32(edi + 0x4); /* 0x170EB8B2: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x170EB8B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB8C3; /* 0x170EB8B7: je 0x170eb8c3 */
L_170EB8B9:
    ecx = MEM32(eax); /* 0x170EB8B9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EB8BB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170EB8BC: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0; /* 0x170EB8BF: and dword ptr [edi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EB8C3:
    eax = MEM32(esi + 0x4); /* 0x170EB8C3: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0x4) = eax; /* 0x170EB8C6: mov dword ptr [edi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 4; /* 0x170EB8C9: add dword ptr [ebx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x170EB8CC: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB874; /* 0x170EB8CF: jne 0x170eb874 */
L_170EB8D1:
    goto L_170EBA56; /* 0x170EB8D1: jmp 0x170eba56 */
L_170EB8D6:
    /* test edi, edi */ /* 0x170EB8D6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBA59; /* 0x170EB8D8: je 0x170eba59 */
L_170EB8DE:
    ebx = MEM32(ebp + 0xC); /* 0x170EB8DE: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = edi; /* 0x170EB8E1: mov dword ptr [ebp - 8], edi */
L_170EB8E4:
    eax = MEM32(ebx); /* 0x170EB8E4: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x170EB8E6: mov eax, dword ptr [eax] */
    edx = MEM32(ebp + 0x14); /* 0x170EB8E8: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(edx + 0x8); /* 0x170EB8EB: mov ecx, dword ptr [edx + 8] */
    edx = MEM32(edx); /* 0x170EB8EE: mov edx, dword ptr [edx] */
    edx = MEM32(edx + 0x18); /* 0x170EB8F0: mov edx, dword ptr [edx + 0x18] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EB8F3: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EB8F3: shl eax, 2 */
    ecx = MEM32(eax + ecx); /* 0x170EB8F6: mov ecx, dword ptr [eax + ecx] */
    ecx = ecx + ecx * 2; /* 0x170EB8F9: lea ecx, [ecx + ecx*2] */
    esi = edx + ecx * 8; /* 0x170EB8FC: lea esi, [edx + ecx*8] */
    ecx = MEM32(ebp + 0x10); /* 0x170EB8FF: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ecx + 0x8); /* 0x170EB902: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(eax + edx); /* 0x170EB905: mov eax, dword ptr [eax + edx] */
    ecx = MEM32(ecx); /* 0x170EB908: mov ecx, dword ptr [ecx] */
    ecx = MEM32(ecx + 0x18); /* 0x170EB90A: mov ecx, dword ptr [ecx + 0x18] */
    eax = eax + eax * 2; /* 0x170EB90D: lea eax, [eax + eax*2] */
    edi = ecx + eax * 8; /* 0x170EB910: lea edi, [ecx + eax*8] */
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x170EB913: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB922; /* 0x170EB917: je 0x170eb922 */
L_170EB919:
    eax = MEM32(edi + 0x4); /* 0x170EB919: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax); /* 0x170EB91C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EB91E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170EB91F: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_170EB922:
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x170EB922: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB931; /* 0x170EB926: je 0x170eb931 */
L_170EB928:
    eax = MEM32(edi + 0x8); /* 0x170EB928: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(eax); /* 0x170EB92B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EB92D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170EB92E: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_170EB931:
    eax = MEM32(esi + 0x4); /* 0x170EB931: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x170EB934: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB942; /* 0x170EB936: je 0x170eb942 */
L_170EB938:
    ecx = MEM32(eax); /* 0x170EB938: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EB93A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170EB93B: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x170EB93E: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EB942:
    eax = MEM32(esi + 0x8); /* 0x170EB942: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x170EB945: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EB953; /* 0x170EB947: je 0x170eb953 */
L_170EB949:
    ecx = MEM32(eax); /* 0x170EB949: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EB94B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170EB94C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x170EB94F: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EB953:
    eax = MEM32(edi + 0x4); /* 0x170EB953: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x170EB956: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi + 0x8); /* 0x170EB959: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x170EB95C: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0x14); /* 0x170EB95F: mov eax, dword ptr [edi + 0x14] */
    if (31u) _cf = (((eax) >> 1) & 1u); /* 0x170EB962: shl eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 31u; /* 0x170EB962: shl eax, 0x1f */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x170EB965: sar eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 31u);
    _flag_a = (uint32_t)((eax ^ MEM32(esi + 0x14))); _flag_b = (uint32_t)((eax ^ MEM32(esi + 0x14)));
    eax = eax ^ MEM32(esi + 0x14); /* 0x170EB968: xor eax, dword ptr [esi + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x170EB96B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0x14) ^ eax)); _flag_b = (uint32_t)((MEM32(esi + 0x14) ^ eax));
    MEM32(esi + 0x14) = MEM32(esi + 0x14) ^ eax; /* 0x170EB96E: xor dword ptr [esi + 0x14], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0xC); /* 0x170EB971: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x170EB974: mov dword ptr [esi + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 4; /* 0x170EB977: add dword ptr [ebx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x170EB97A: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB8E4; /* 0x170EB97D: jne 0x170eb8e4 */
L_170EB983:
    goto L_170EBA56; /* 0x170EB983: jmp 0x170eba56 */
L_170EB988:
    /* cmp esi, 0x10u */ /* 0x170EB988: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB9A9; /* 0x170EB98B: je 0x170eb9a9 */
L_170EB98D:
    if (CMP_LE(_flag_a, _flag_b)) goto L_170EB998; /* 0x170EB98D: jle 0x170eb998 */
L_170EB98F:
    /* cmp esi, 0x12u */ /* 0x170EB98F: cmp esi, 0x12 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_170EB992:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_170EBA59; /* 0x170EB992: jle 0x170eba59 */
L_170EB998:
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x170EB998: mov dword ptr [ebp - 4], 0x80004005 */
L_170EB99F:
    eax = MEM32(ebp + (-0x4)); /* 0x170EB99F: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x170EB9A2: pop edi */
    esi = POP32_VAL(esp); /* 0x170EB9A3: pop esi */
    ebx = POP32_VAL(esp); /* 0x170EB9A4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EB9A5: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170EB9A6: ret 0x10 */
L_170EB9A9:
    /* test edi, edi */ /* 0x170EB9A9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBA59; /* 0x170EB9AB: je 0x170eba59 */
L_170EB9B1:
    ebx = MEM32(ebp + 0xC); /* 0x170EB9B1: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = edi; /* 0x170EB9B4: mov dword ptr [ebp - 8], edi */
L_170EB9B7:
    eax = MEM32(ebx); /* 0x170EB9B7: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x170EB9B9: mov eax, dword ptr [eax] */
    edx = MEM32(ebp + 0x14); /* 0x170EB9BB: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(edx + 0x8); /* 0x170EB9BE: mov ecx, dword ptr [edx + 8] */
    edx = MEM32(edx); /* 0x170EB9C1: mov edx, dword ptr [edx] */
    edx = MEM32(edx + 0x18); /* 0x170EB9C3: mov edx, dword ptr [edx + 0x18] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EB9C6: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EB9C6: shl eax, 2 */
    ecx = MEM32(eax + ecx); /* 0x170EB9C9: mov ecx, dword ptr [eax + ecx] */
    ecx = ecx + ecx * 2; /* 0x170EB9CC: lea ecx, [ecx + ecx*2] */
    esi = edx + ecx * 8; /* 0x170EB9CF: lea esi, [edx + ecx*8] */
    ecx = MEM32(ebp + 0x10); /* 0x170EB9D2: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ecx + 0x8); /* 0x170EB9D5: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(eax + edx); /* 0x170EB9D8: mov eax, dword ptr [eax + edx] */
    ecx = MEM32(ecx); /* 0x170EB9DB: mov ecx, dword ptr [ecx] */
    ecx = MEM32(ecx + 0x18); /* 0x170EB9DD: mov ecx, dword ptr [ecx + 0x18] */
    eax = eax + eax * 2; /* 0x170EB9E0: lea eax, [eax + eax*2] */
    edi = ecx + eax * 8; /* 0x170EB9E3: lea edi, [ecx + eax*8] */
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x170EB9E6: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EB9F5; /* 0x170EB9EA: je 0x170eb9f5 */
L_170EB9EC:
    eax = MEM32(edi + 0x4); /* 0x170EB9EC: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax); /* 0x170EB9EF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EB9F1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170EB9F2: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_170EB9F5:
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x170EB9F5: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EBA04; /* 0x170EB9F9: je 0x170eba04 */
L_170EB9FB:
    eax = MEM32(edi + 0x8); /* 0x170EB9FB: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(eax); /* 0x170EB9FE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EBA00: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170EBA01: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_170EBA04:
    eax = MEM32(esi + 0x4); /* 0x170EBA04: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x170EBA07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBA15; /* 0x170EBA09: je 0x170eba15 */
L_170EBA0B:
    ecx = MEM32(eax); /* 0x170EBA0B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EBA0D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170EBA0E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x170EBA11: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EBA15:
    eax = MEM32(esi + 0x8); /* 0x170EBA15: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x170EBA18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBA26; /* 0x170EBA1A: je 0x170eba26 */
L_170EBA1C:
    ecx = MEM32(eax); /* 0x170EBA1C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170EBA1E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170EBA1F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x170EBA22: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EBA26:
    eax = MEM32(edi + 0x4); /* 0x170EBA26: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x170EBA29: mov dword ptr [esi + 4], eax */
    eax = MEM32(edi + 0x8); /* 0x170EBA2C: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x170EBA2F: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0x14); /* 0x170EBA32: mov eax, dword ptr [edi + 0x14] */
    if (31u) _cf = (((eax) >> 1) & 1u); /* 0x170EBA35: shl eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax << 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 31u; /* 0x170EBA35: shl eax, 0x1f */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x170EBA38: sar eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 31u);
    _flag_a = (uint32_t)((eax ^ MEM32(esi + 0x14))); _flag_b = (uint32_t)((eax ^ MEM32(esi + 0x14)));
    eax = eax ^ MEM32(esi + 0x14); /* 0x170EBA3B: xor eax, dword ptr [esi + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x170EBA3E: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0x14) ^ eax)); _flag_b = (uint32_t)((MEM32(esi + 0x14) ^ eax));
    MEM32(esi + 0x14) = MEM32(esi + 0x14) ^ eax; /* 0x170EBA41: xor dword ptr [esi + 0x14], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0xC); /* 0x170EBA44: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x170EBA47: mov dword ptr [esi + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 4; /* 0x170EBA4A: add dword ptr [ebx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x170EBA4D: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB9B7; /* 0x170EBA50: jne 0x170eb9b7 */
L_170EBA56:
    edx = MEM32(ebp + 0x8); /* 0x170EBA56: mov edx, dword ptr [ebp + 8] */
L_170EBA59:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 0x14u; /* 0x170EBA59: add dword ptr [edx], 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_170EB99F; /* 0x170EBA5C: jmp 0x170eb99f */
L_170EBA61:
    ecx = MEM32(eax + 0x18); /* 0x170EBA61: mov ecx, dword ptr [eax + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x14)); /* 0x170EBA64: imul ecx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi); /* 0x170EBA68: imul ecx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170EBA6B: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170EBA78; /* 0x170EBA6C: je 0x170eba78 */
L_170EBA6E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170EBA6E: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170EBA78; /* 0x170EBA6F: je 0x170eba78 */
L_170EBA71:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170EBA71: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EB998; /* 0x170EBA72: jne 0x170eb998 */
L_170EBA78:
    eax = MEM32(ebp + 0xC); /* 0x170EBA78: mov eax, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x170EBA7B: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x170EBA7B: shl ecx, 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x170EBA7E: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 0x1Cu; /* 0x170EBA80: add dword ptr [edx], 0x1c */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_170EB99F; /* 0x170EBA83: jmp 0x170eb99f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170EBA8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBA8Du);

L_170EBA8D:
    edi = edi; /* 0x170EBA8D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EBA8F: push ebp */
    ebp = esp; /* 0x170EBA90: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x170EBA92: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x170EBA95: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EBAB2; /* 0x170EBA98: je 0x170ebab2 */
L_170EBA9A:
    /* cmp MEM32(eax), 0 */ /* 0x170EBA9A: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EBAB2; /* 0x170EBA9D: je 0x170ebab2 */
L_170EBA9F:
    PUSH32(esp, eax); /* 0x170EBA9F: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170EBAA0: push dword ptr [ebp + 0x10] */
    eax = ebp + 0xC; /* 0x170EBAA3: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x170EBAA6: push eax */
    eax = ebp + 0x8; /* 0x170EBAA7: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x170EBAAA: push eax */
    RECOMP_CALL(sub_170EB742); /* 0x170EBAAB: call 0x170eb742 */
    RECOMP_FLAGS_IN();
    goto L_170EBAB4; /* 0x170EBAB0: jmp 0x170ebab4 */
L_170EBAB2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EBAB2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EBAB4:
    ebp = POP32_VAL(esp); /* 0x170EBAB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170EBAB5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170EBABD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBABDu);

L_170EBABD:
    edi = edi; /* 0x170EBABD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EBABF: push ebp */
    ebp = esp; /* 0x170EBAC0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x170EBAC2: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x170EBAC5: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x20); /* 0x170EBAC8: mov edx, dword ptr [eax + 0x20] */
    PUSH32(esp, ebx); /* 0x170EBACB: push ebx */
    PUSH32(esp, esi); /* 0x170EBACC: push esi */
    PUSH32(esp, edi); /* 0x170EBACD: push edi */
    edi = MEM32(ebp + 0xC); /* 0x170EBACE: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + 0x34); /* 0x170EBAD1: mov eax, dword ptr [edi + 0x34] */
    ebx = ecx; /* 0x170EBAD4: mov ebx, ecx */
    ecx = MEM32(edi + 0x38); /* 0x170EBAD6: mov ecx, dword ptr [edi + 0x38] */
    esi = MEM32(ebx + 0x1C); /* 0x170EBAD9: mov esi, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170EBADC: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x170EBADE: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x170EBAE0: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x170EBAE3: mov dword ptr [ebp - 0x14], ecx */
    goto L_170EBB0F; /* 0x170EBAE6: jmp 0x170ebb0f */
L_170EBAE8:
    ecx = MEM32(ebx + 0x10); /* 0x170EBAE8: mov ecx, dword ptr [ebx + 0x10] */
    edx = ebp + (-0x10); /* 0x170EBAEB: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x170EBAEE: push edx */
    edx = MEM32(esi); /* 0x170EBAEF: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x170EBAF1: add edx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x170EBAF3: push edx */
    PUSH32(esp, ecx); /* 0x170EBAF4: push ecx */
    PUSH32(esp, eax); /* 0x170EBAF5: push eax */
    eax = MEM32(ebp + 0x8); /* 0x170EBAF6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x20)); /* 0x170EBAF9: push dword ptr [eax + 0x20] */
    RECOMP_CALL(sub_170EAFFB); /* 0x170EBAFC: call 0x170eaffb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EBB01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170EBC0D; /* 0x170EBB03: jge 0x170ebc0d */
L_170EBB09:
    esi = MEM32(esi + 0x20); /* 0x170EBB09: mov esi, dword ptr [esi + 0x20] */
    eax = MEM32(ebp + (-0x8)); /* 0x170EBB0C: mov eax, dword ptr [ebp - 8] */
L_170EBB0F:
    /* test esi, esi */ /* 0x170EBB0F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EBAE8; /* 0x170EBB11: jne 0x170ebae8 */
L_170EBB13:
    ecx = ebp + (-0xC); /* 0x170EBB13: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x170EBB16: push ecx */
    ecx = ebp + (-0x18); /* 0x170EBB17: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x170EBB1A: push ecx */
    ecx = ebp + (-0x10); /* 0x170EBB1B: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x170EBB1E: push ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x170EBB1F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x170EBB22: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x20); /* 0x170EBB25: mov eax, dword ptr [eax + 0x20] */
    ecx = ebp + (-0x4); /* 0x170EBB28: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x170EBB2B: push ecx */
    PUSH32(esp, eax); /* 0x170EBB2C: push eax */
    RECOMP_CALL(sub_170EB023); /* 0x170EBB2D: call 0x170eb023 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EBB32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170EBB34: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EBD84; /* 0x170EBB37: jl 0x170ebd84 */
L_170EBB3D:
    eax = MEM32(ebx + 0x14); /* 0x170EBB3D: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x10)); /* 0x170EBB40: add eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x170EBB43: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x18)); /* 0x170EBB46: add eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    ecx = eax + ecx + 0x4; /* 0x170EBB49: lea ecx, [eax + ecx + 4] */
    eax = MEM32(ebx + 0x18); /* 0x170EBB4D: mov eax, dword ptr [ebx + 0x18] */
    /* cmp ecx, eax */ /* 0x170EBB50: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = ecx; /* 0x170EBB52: mov dword ptr [ebp - 0x20], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170EBBCA; /* 0x170EBB55: jbe 0x170ebbca */
L_170EBB57:
    ecx = eax + eax; /* 0x170EBB57: lea ecx, [eax + eax] */
    eax = 0x00010000u; /* 0x170EBB5A: mov eax, 0x10000 */
    /* cmp ecx, eax */ /* 0x170EBB5F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170EBB65; /* 0x170EBB61: jb 0x170ebb65 */
L_170EBB63:
    eax = ecx; /* 0x170EBB63: mov eax, ecx */
L_170EBB65:
    PUSH32(esp, eax); /* 0x170EBB65: push eax */
    MEM32(ebx + 0x18) = eax; /* 0x170EBB66: mov dword ptr [ebx + 0x18], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170EBB69: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x170EBB6E: mov edx, eax */
    /* test edx, edx */ /* 0x170EBB70: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EBB72: pop ecx */
    MEM32(ebp + (-0x18)) = edx; /* 0x170EBB73: mov dword ptr [ebp - 0x18], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBCC5; /* 0x170EBB76: je 0x170ebcc5 */
L_170EBB7C:
    ecx = MEM32(ebx + 0x14); /* 0x170EBB7C: mov ecx, dword ptr [ebx + 0x14] */
    /* test ecx, ecx */ /* 0x170EBB7F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBB96; /* 0x170EBB81: jbe 0x170ebb96 */
L_170EBB83:
    esi = MEM32(ebx + 0x10); /* 0x170EBB83: mov esi, dword ptr [ebx + 0x10] */
    eax = ecx; /* 0x170EBB86: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170EBB88: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170EBB88: shr ecx, 2 */
    edi = edx; /* 0x170EBB8B: mov edi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170EBB8D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170EBB8F: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170EBB91: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170EBB94: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_170EBB96:
    esi = MEM32(ebx + 0x14); /* 0x170EBB96: mov esi, dword ptr [ebx + 0x14] */
    ecx = MEM32(ebx + 0x18); /* 0x170EBB99: mov ecx, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x170EBB9C: sub ecx, esi */
    _flag_k = FK_CMP;
    edi = esi + edx; /* 0x170EBB9E: lea edi, [esi + edx] */
    edx = ecx; /* 0x170EBBA1: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170EBBA3: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170EBBA3: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EBBA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170EBBA8: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x170EBBAA: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170EBBAC: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x170EBBAF: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x170EBBB1: push dword ptr [ebx + 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x170EBBB4: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x170EBBB9: mov eax, dword ptr [ebp - 0x18] */
    ecx = POP32_VAL(esp); /* 0x170EBBBC: pop ecx */
    ecx = ebx; /* 0x170EBBBD: mov ecx, ebx */
    MEM32(ebx + 0x10) = eax; /* 0x170EBBBF: mov dword ptr [ebx + 0x10], eax */
    RECOMP_CALL(sub_170EACE8); /* 0x170EBBC2: call 0x170eace8 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x170EBBC7: mov edi, dword ptr [ebp + 0xc] */
L_170EBBCA:
    eax = ebp + (-0x1C); /* 0x170EBBCA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x170EBBCD: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x170EBBCE: push dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x170EBBD1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x170EBBD4: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x170EBBD7: push dword ptr [ebx + 0x14] */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x170EBBDA: push dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170EBBDD: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170EBBE0: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + 0x20)); /* 0x170EBBE3: push dword ptr [eax + 0x20] */
    RECOMP_CALL(sub_170EB4AE); /* 0x170EBBE6: call 0x170eb4ae */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EBBEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170EBBED: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EBD84; /* 0x170EBBF0: jl 0x170ebd84 */
L_170EBBF6:
    PUSH32(esp, 0x24u); /* 0x170EBBF6: push 0x24 */
    RECOMP_CALL(sub_1721B01C); /* 0x170EBBF8: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EBBFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EBBFF: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBC33; /* 0x170EBC00: je 0x170ebc33 */
L_170EBC02:
    ecx = eax; /* 0x170EBC02: mov ecx, eax */
    RECOMP_CALL(sub_170EAC9E); /* 0x170EBC04: call 0x170eac9e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170EBC09: mov esi, eax */
    goto L_170EBC35; /* 0x170EBC0B: jmp 0x170ebc35 */
L_170EBC0D:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x170EBC0D: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EBC79; /* 0x170EBC11: je 0x170ebc79 */
L_170EBC13:
    eax = MEM32(esi + 0x1C); /* 0x170EBC13: mov eax, dword ptr [esi + 0x1c] */
    eax = MEM32(eax); /* 0x170EBC16: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x170EBC18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBC79; /* 0x170EBC1A: je 0x170ebc79 */
L_170EBC1C:
    ecx = MEM32(ebp + 0x8); /* 0x170EBC1C: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0xC); /* 0x170EBC1F: mov ecx, dword ptr [ecx + 0xc] */
    /* cmp ecx, MEM32(eax + 0xC) */ /* 0x170EBC22: cmp ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EBC79; /* 0x170EBC25: je 0x170ebc79 */
L_170EBC27:
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x170EBC27: mov dword ptr [ebp - 4], 0x80004005 */
    goto L_170EBD84; /* 0x170EBC2E: jmp 0x170ebd84 */
L_170EBC33:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170EBC33: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EBC35:
    /* test esi, esi */ /* 0x170EBC35: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBCC5; /* 0x170EBC37: je 0x170ebcc5 */
L_170EBC3D:
    ecx = MEM32(ebx + 0x14); /* 0x170EBC3D: mov ecx, dword ptr [ebx + 0x14] */
    eax = MEM32(ebp + (-0xC)); /* 0x170EBC40: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x170EBC43: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(esi) = ecx; /* 0x170EBC45: mov dword ptr [esi], ecx */
    ecx = MEM32(ebx + 0x14); /* 0x170EBC47: mov ecx, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x10)); /* 0x170EBC4A: add ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    eax = ecx + eax + 0x4; /* 0x170EBC4D: lea eax, [ecx + eax + 4] */
    MEM32(esi + 0x4) = eax; /* 0x170EBC51: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x170EBC54: mov eax, dword ptr [ebp - 0x1c] */
    edx = MEM32(esi + 0x4); /* 0x170EBC57: mov edx, dword ptr [esi + 4] */
    MEM32(esi + 0x8) = eax; /* 0x170EBC5A: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebx + 0x1C); /* 0x170EBC5D: mov eax, dword ptr [ebx + 0x1c] */
    MEM32(esi + 0x20) = eax; /* 0x170EBC60: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(ebx + 0x20); /* 0x170EBC63: mov eax, dword ptr [ebx + 0x20] */
    ecx = MEM32(ebx + 0x10); /* 0x170EBC66: mov ecx, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170EBC69: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + edx + (-0x4)) = eax; /* 0x170EBC6A: mov dword ptr [ecx + edx - 4], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x170EBC6E: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebx + 0x1C) = esi; /* 0x170EBC71: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebx + 0x14) = eax; /* 0x170EBC74: mov dword ptr [ebx + 0x14], eax */
    goto L_170EBC9E; /* 0x170EBC77: jmp 0x170ebc9e */
L_170EBC79:
    eax = esi + 0xC; /* 0x170EBC79: lea eax, [esi + 0xc] */
    /* cmp eax, MEM32(esi + 0x1C) */ /* 0x170EBC7C: cmp eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EBC9E; /* 0x170EBC7F: jne 0x170ebc9e */
L_170EBC81:
    eax = MEM32(esi + 0x4); /* 0x170EBC81: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170EBC84: push dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x10); /* 0x170EBC87: add eax, dword ptr [ebx + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x170EBC8A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170EBC8B: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_170EB723); /* 0x170EBC8E: call 0x170eb723 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EBC93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170EBC95: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EBD84; /* 0x170EBC98: jl 0x170ebd84 */
L_170EBC9E:
    PUSH32(esp, 0x14u); /* 0x170EBC9E: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x170EBCA0: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170EBCA5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x170EBCA7: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170EBCA9: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EBCBC; /* 0x170EBCAA: je 0x170ebcbc */
L_170EBCAC:
    MEM32(eax + 0x8) = edx; /* 0x170EBCAC: mov dword ptr [eax + 8], edx */
    MEM32(eax) = edx; /* 0x170EBCAF: mov dword ptr [eax], edx */
    MEM32(eax + 0x10) = eax; /* 0x170EBCB1: mov dword ptr [eax + 0x10], eax */
    MEM32(eax + 0xC) = eax; /* 0x170EBCB4: mov dword ptr [eax + 0xc], eax */
    MEM32(ebp + 0xC) = eax; /* 0x170EBCB7: mov dword ptr [ebp + 0xc], eax */
    goto L_170EBCC1; /* 0x170EBCBA: jmp 0x170ebcc1 */
L_170EBCBC:
    MEM32(ebp + 0xC) = edx; /* 0x170EBCBC: mov dword ptr [ebp + 0xc], edx */
    eax = edx; /* 0x170EBCBF: mov eax, edx */
L_170EBCC1:
    /* cmp eax, edx */ /* 0x170EBCC1: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EBCD1; /* 0x170EBCC3: jne 0x170ebcd1 */
L_170EBCC5:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x170EBCC5: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_170EBD84; /* 0x170EBCCC: jmp 0x170ebd84 */
L_170EBCD1:
    ecx = MEM32(esi + 0x8); /* 0x170EBCD1: mov ecx, dword ptr [esi + 8] */
    /* cmp ecx, edx */ /* 0x170EBCD4: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170EBD0D; /* 0x170EBCD6: jbe 0x170ebd0d */
L_170EBCD8:
    eax = ecx; /* 0x170EBCD8: mov eax, ecx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EBCDA: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EBCDA: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170EBCDD: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170EBCDE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EBCE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EBCE5: pop ecx */
    ecx = MEM32(ebp + 0xC); /* 0x170EBCE6: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x170EBCE9: mov dword ptr [ecx + 8], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EBCF7; /* 0x170EBCEC: jne 0x170ebcf7 */
L_170EBCEE:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x170EBCEE: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_170EBD76; /* 0x170EBCF5: jmp 0x170ebd76 */
L_170EBCF7:
    PUSH32(esp, eax); /* 0x170EBCF7: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x170EBCF8: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x170EBCFB: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_170EB5EF); /* 0x170EBCFE: call 0x170eb5ef */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EBD03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x170EBD05: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EBD76; /* 0x170EBD08: jl 0x170ebd76 */
L_170EBD0A:
    eax = MEM32(ebp + 0xC); /* 0x170EBD0A: mov eax, dword ptr [ebp + 0xc] */
L_170EBD0D:
    ecx = MEM32(ebp + 0x8); /* 0x170EBD0D: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x170EBD10: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edi; /* 0x170EBD12: mov dword ptr [eax + 4], edi */
    ecx = MEM32(esi + 0x1C); /* 0x170EBD15: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(ecx + 0xC) = eax; /* 0x170EBD18: mov dword ptr [ecx + 0xc], eax */
    ecx = esi + 0xC; /* 0x170EBD1B: lea ecx, [esi + 0xc] */
    MEM32(eax + 0xC) = ecx; /* 0x170EBD1E: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(esi + 0x1C); /* 0x170EBD21: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(eax + 0x10) = ecx; /* 0x170EBD24: mov dword ptr [eax + 0x10], ecx */
    MEM32(esi + 0x1C) = eax; /* 0x170EBD27: mov dword ptr [esi + 0x1c], eax */
    MEM32(edi + 0x48) = eax; /* 0x170EBD2A: mov dword ptr [edi + 0x48], eax */
    eax = MEM32(esi); /* 0x170EBD2D: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(edi + 0x48)); /* 0x170EBD2F: push dword ptr [edi + 0x48] */
    MEM32(edi + 0x34) = eax; /* 0x170EBD32: mov dword ptr [edi + 0x34], eax */
    eax = MEM32(esi + 0x4); /* 0x170EBD35: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0x38) = eax; /* 0x170EBD38: mov dword ptr [edi + 0x38], eax */
    eax = MEM32(ebx + 0x10); /* 0x170EBD3B: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x170EBD3E: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x170EBD40: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x170EBD44: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebx + 0x10); /* 0x170EBD47: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x4); /* 0x170EBD4A: add eax, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; /* 0x170EBD4D: mov dword ptr [edi], eax */
    eax = MEM32(ebx + 0x10); /* 0x170EBD4F: mov eax, dword ptr [ebx + 0x10] */
    ecx = MEM32(esi + 0x4); /* 0x170EBD52: mov ecx, dword ptr [esi + 4] */
    eax = eax + ecx + (-0x4); /* 0x170EBD55: lea eax, [eax + ecx - 4] */
    MEM32(edi + 0x8) = eax; /* 0x170EBD59: mov dword ptr [edi + 8], eax */
    ebx = MEM32(ebx + 0x10); /* 0x170EBD5C: mov ebx, dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x170EBD5F: push dword ptr [esi + 0x18] */
    eax = MEM32(edi + 0x38); /* 0x170EBD62: mov eax, dword ptr [edi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x170EBD65: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x170EBD67: push eax */
    eax = MEM32(edi + 0x34); /* 0x170EBD68: mov eax, dword ptr [edi + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x170EBD6B: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x170EBD6D: push eax */
    RECOMP_CALL(sub_170EBA8D); /* 0x170EBD6E: call 0x170eba8d */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x170EBD73: mov dword ptr [ebp - 4], eax */
L_170EBD76:
    ecx = MEM32(ebp + 0xC); /* 0x170EBD76: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x170EBD79: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBD84; /* 0x170EBD7B: je 0x170ebd84 */
L_170EBD7D:
    PUSH32(esp, 1); /* 0x170EBD7D: push 1 */
    RECOMP_CALL(sub_170EAD1E); /* 0x170EBD7F: call 0x170ead1e */
    RECOMP_FLAGS_IN();
L_170EBD84:
    PUSH32(esp, 0); /* 0x170EBD84: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x170EBD86: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x170EBD8B: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x170EBD8E: pop ecx */
    edi = POP32_VAL(esp); /* 0x170EBD8F: pop edi */
    esi = POP32_VAL(esp); /* 0x170EBD90: pop esi */
    ebx = POP32_VAL(esp); /* 0x170EBD91: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EBD92: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170EBD93: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170EBD9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBD9Bu);

L_170EBD9B:
    eax = ecx; /* 0x170EBD9B: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170EBD9D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170EBD9F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170EBDA1: inc edx */
    _flag_k = FK_INC;
    MEM32(eax) = 0x1700EF40u; /* 0x170EBDA2: mov dword ptr [eax], 0x1700ef40 */
    MEM32(eax + 0x4) = edx; /* 0x170EBDA8: mov dword ptr [eax + 4], edx */
    MEM32(eax + 0x10) = ecx; /* 0x170EBDAB: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x170EBDAE: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x170EBDB1: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x170EBDB4: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x170EBDB7: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x170EBDBA: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x20) = edx; /* 0x170EBDBD: mov dword ptr [eax + 0x20], edx */
    MEM32(eax + 0x24) = ecx; /* 0x170EBDC0: mov dword ptr [eax + 0x24], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EBDC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_170EBDC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBDC9u);

L_170EBDC9:
    edi = edi; /* 0x170EBDC9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EBDCB: push ebp */
    ebp = esp; /* 0x170EBDCC: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x170EBDCE: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x170EBDD1: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    eax = MEM32(ecx + 0x4); /* 0x170EBDD4: mov eax, dword ptr [ecx + 4] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170EBDE2; /* 0x170EBDD7: jne 0x170ebde2 */
L_170EBDD9:
    PUSH32(esp, 1); /* 0x170EBDD9: push 1 */
    RECOMP_CALL(sub_170EADEA); /* 0x170EBDDB: call 0x170eadea */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EBDE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EBDE2:
    ebp = POP32_VAL(esp); /* 0x170EBDE2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EBDE3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170EBDEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBDEBu);

L_170EBDEB:
    edi = edi; /* 0x170EBDEB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EBDED: push ebp */
    ebp = esp; /* 0x170EBDEE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170EBDF0: push esi */
    esi = ecx; /* 0x170EBDF1: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x170EBDF3: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi) = ecx; /* 0x170EBDF6: mov dword ptr [esi], ecx */
    RECOMP_CALL(sub_171711BD); /* 0x170EBDF8: call 0x171711bd */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x170EBDFD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170EBDFF: pop esi */
    ebp = POP32_VAL(esp); /* 0x170EBE00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EBE01: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170EBE09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBE09u);

L_170EBE09:
    eax = ecx; /* 0x170EBE09: mov eax, ecx */
    _flag_a = (uint32_t)((MEM32(eax + 0x10) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x10) | 0xFFFFFFFFu));
    MEM32(eax + 0x10) = MEM32(eax + 0x10) | 0xFFFFFFFFu; /* 0x170EBE0B: or dword ptr [eax + 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170EBE0F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x1C) = ecx; /* 0x170EBE11: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x170EBE14: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x170EBE17: mov dword ptr [eax + 0xc], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EBE1A: ret  */
    RECOMP_REGS_OUT();
}

void sub_170EBE20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBE20u);

L_170EBE20:
    edi = edi; /* 0x170EBE20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EBE22: push ebp */
    ebp = esp; /* 0x170EBE23: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170EBE25: push esi */
    esi = ecx; /* 0x170EBE26: mov esi, ecx */
    RECOMP_CALL(sub_170EF2D5); /* 0x170EBE28: call 0x170ef2d5 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170EBE2D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBE3A; /* 0x170EBE31: je 0x170ebe3a */
L_170EBE33:
    PUSH32(esp, esi); /* 0x170EBE33: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170EBE34: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170EBE39: pop ecx */
L_170EBE3A:
    eax = esi; /* 0x170EBE3A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170EBE3C: pop esi */
    ebp = POP32_VAL(esp); /* 0x170EBE3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EBE3E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170EBE46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBE46u);

L_170EBE46:
    edi = edi; /* 0x170EBE46: mov edi, edi */
    PUSH32(esp, esi); /* 0x170EBE48: push esi */
    esi = ecx; /* 0x170EBE49: mov esi, ecx */
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x170EBE4B: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EBE74; /* 0x170EBE4F: je 0x170ebe74 */
L_170EBE51:
    PUSH32(esp, edi); /* 0x170EBE51: push edi */
L_170EBE52:
    edi = MEM32(esi + 0x8); /* 0x170EBE52: mov edi, dword ptr [esi + 8] */
    eax = MEM32(edi + 0x8); /* 0x170EBE55: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x170EBE58: mov dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0; /* 0x170EBE5B: and dword ptr [edi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x170EBE5F: mov ecx, edi */
    RECOMP_CALL(sub_170EBE46); /* 0x170EBE61: call 0x170ebe46 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x170EBE66: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x170EBE67: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x170EBE6C: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170EBE70: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EBE52; /* 0x170EBE71: jne 0x170ebe52 */
L_170EBE73:
    edi = POP32_VAL(esp); /* 0x170EBE73: pop edi */
L_170EBE74:
    esi = POP32_VAL(esp); /* 0x170EBE74: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EBE75: ret  */
    RECOMP_REGS_OUT();
}

void sub_170EBE7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBE7Bu);

L_170EBE7B:
    edi = edi; /* 0x170EBE7B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EBE7D: push ebp */
    ebp = esp; /* 0x170EBE7E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170EBE80: push esi */
    esi = ecx; /* 0x170EBE81: mov esi, ecx */
    RECOMP_CALL(sub_170EBE46); /* 0x170EBE83: call 0x170ebe46 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170EBE88: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBE95; /* 0x170EBE8C: je 0x170ebe95 */
L_170EBE8E:
    PUSH32(esp, esi); /* 0x170EBE8E: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170EBE8F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170EBE94: pop ecx */
L_170EBE95:
    eax = esi; /* 0x170EBE95: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170EBE97: pop esi */
    ebp = POP32_VAL(esp); /* 0x170EBE98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EBE99: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170EBEA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBEA1u);

L_170EBEA1:
    edi = edi; /* 0x170EBEA1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EBEA3: push ebp */
    ebp = esp; /* 0x170EBEA4: mov ebp, esp */
    eax = ecx; /* 0x170EBEA6: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x170EBEA8: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x170EBEAB: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x170EBEAD: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) & 0; /* 0x170EBEB0: and dword ptr [eax + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ecx; /* 0x170EBEB4: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x170EBEB7: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x8) = ecx; /* 0x170EBEBA: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x170EBEBD: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0xC) = ecx; /* 0x170EBEC0: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x170EBEC3: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(eax + 0x10) = ecx; /* 0x170EBEC6: mov dword ptr [eax + 0x10], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x170EBEC9: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(eax + 0x14) = ecx; /* 0x170EBECC: mov dword ptr [eax + 0x14], ecx */
    ecx = MEM32(ebp + 0x20); /* 0x170EBECF: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(eax + 0x18) = ecx; /* 0x170EBED2: mov dword ptr [eax + 0x18], ecx */
    ecx = MEM32(ebp + 0x24); /* 0x170EBED5: mov ecx, dword ptr [ebp + 0x24] */
    MEM32(eax + 0x1C) = ecx; /* 0x170EBED8: mov dword ptr [eax + 0x1c], ecx */
    ecx = MEM32(ebp + 0x28); /* 0x170EBEDB: mov ecx, dword ptr [ebp + 0x28] */
    MEM32(eax + 0x20) = ecx; /* 0x170EBEDE: mov dword ptr [eax + 0x20], ecx */
    ecx = MEM32(ebp + 0x2C); /* 0x170EBEE1: mov ecx, dword ptr [ebp + 0x2c] */
    MEM32(eax + 0x24) = ecx; /* 0x170EBEE4: mov dword ptr [eax + 0x24], ecx */
    ebp = POP32_VAL(esp); /* 0x170EBEE7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x170EBEE8: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_170EBEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBEF0u);

L_170EBEF0:
    edi = edi; /* 0x170EBEF0: mov edi, edi */
    PUSH32(esp, esi); /* 0x170EBEF2: push esi */
    esi = ecx; /* 0x170EBEF3: mov esi, ecx */
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x170EBEF5: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EBF1E; /* 0x170EBEF9: je 0x170ebf1e */
L_170EBEFB:
    PUSH32(esp, edi); /* 0x170EBEFB: push edi */
L_170EBEFC:
    edi = MEM32(esi + 0x28); /* 0x170EBEFC: mov edi, dword ptr [esi + 0x28] */
    eax = MEM32(edi + 0x28); /* 0x170EBEFF: mov eax, dword ptr [edi + 0x28] */
    MEM32(esi + 0x28) = eax; /* 0x170EBF02: mov dword ptr [esi + 0x28], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0; /* 0x170EBF05: and dword ptr [edi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x170EBF09: mov ecx, edi */
    RECOMP_CALL(sub_170EBEF0); /* 0x170EBF0B: call 0x170ebef0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x170EBF10: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x170EBF11: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x170EBF16: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170EBF1A: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EBEFC; /* 0x170EBF1B: jne 0x170ebefc */
L_170EBF1D:
    edi = POP32_VAL(esp); /* 0x170EBF1D: pop edi */
L_170EBF1E:
    esi = POP32_VAL(esp); /* 0x170EBF1E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EBF1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_170EBF25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBF25u);

L_170EBF25:
    edi = edi; /* 0x170EBF25: mov edi, edi */
    PUSH32(esp, esi); /* 0x170EBF27: push esi */
    esi = ecx; /* 0x170EBF28: mov esi, ecx */
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x170EBF2A: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EBF53; /* 0x170EBF2E: je 0x170ebf53 */
L_170EBF30:
    PUSH32(esp, edi); /* 0x170EBF30: push edi */
L_170EBF31:
    edi = MEM32(esi + 0x18); /* 0x170EBF31: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(edi + 0x18); /* 0x170EBF34: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x18) = eax; /* 0x170EBF37: mov dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0; /* 0x170EBF3A: and dword ptr [edi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x170EBF3E: mov ecx, edi */
    RECOMP_CALL(sub_170EBF25); /* 0x170EBF40: call 0x170ebf25 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x170EBF45: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x170EBF46: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x170EBF4B: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170EBF4F: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EBF31; /* 0x170EBF50: jne 0x170ebf31 */
L_170EBF52:
    edi = POP32_VAL(esp); /* 0x170EBF52: pop edi */
L_170EBF53:
    esi = POP32_VAL(esp); /* 0x170EBF53: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EBF54: ret  */
    RECOMP_REGS_OUT();
}

void sub_170EBF5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBF5Au);

L_170EBF5A:
    edi = edi; /* 0x170EBF5A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EBF5C: push ebp */
    ebp = esp; /* 0x170EBF5D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170EBF5F: push esi */
    esi = ecx; /* 0x170EBF60: mov esi, ecx */
    RECOMP_CALL(sub_170EBF25); /* 0x170EBF62: call 0x170ebf25 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170EBF67: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBF74; /* 0x170EBF6B: je 0x170ebf74 */
L_170EBF6D:
    PUSH32(esp, esi); /* 0x170EBF6D: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170EBF6E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170EBF73: pop ecx */
L_170EBF74:
    eax = esi; /* 0x170EBF74: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170EBF76: pop esi */
    ebp = POP32_VAL(esp); /* 0x170EBF77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EBF78: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170EBF80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBF80u);

L_170EBF80:
    eax = ecx; /* 0x170EBF80: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170EBF82: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0xC) = ecx; /* 0x170EBF84: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x170EBF87: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0x10) = eax; /* 0x170EBF8A: mov dword ptr [eax + 0x10], eax */
    MEM32(eax + 0x14) = ecx; /* 0x170EBF8D: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x170EBF90: mov dword ptr [eax + 4], ecx */
    MEM32(eax) = ecx; /* 0x170EBF93: mov dword ptr [eax], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x170EBF95: mov dword ptr [eax + 0x18], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EBF98: ret  */
    RECOMP_REGS_OUT();
}

void sub_170EBF9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBF9Eu);

L_170EBF9E:
    edi = edi; /* 0x170EBF9E: mov edi, edi */
    PUSH32(esp, esi); /* 0x170EBFA0: push esi */
    esi = ecx; /* 0x170EBFA1: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x170EBFA3: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B010); /* 0x170EBFA6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x170EBFAB: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x170EBFAF: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170EBFB3: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170EBFD9; /* 0x170EBFB4: je 0x170ebfd9 */
L_170EBFB6:
    PUSH32(esp, edi); /* 0x170EBFB6: push edi */
L_170EBFB7:
    edi = MEM32(esi + 0x8); /* 0x170EBFB7: mov edi, dword ptr [esi + 8] */
    eax = MEM32(edi + 0x8); /* 0x170EBFBA: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x170EBFBD: mov dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0; /* 0x170EBFC0: and dword ptr [edi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x170EBFC4: mov ecx, edi */
    RECOMP_CALL(sub_170EBF9E); /* 0x170EBFC6: call 0x170ebf9e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x170EBFCB: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x170EBFCC: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x170EBFD1: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170EBFD5: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170EBFB7; /* 0x170EBFD6: jne 0x170ebfb7 */
L_170EBFD8:
    edi = POP32_VAL(esp); /* 0x170EBFD8: pop edi */
L_170EBFD9:
    esi = POP32_VAL(esp); /* 0x170EBFD9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170EBFDA: ret  */
    RECOMP_REGS_OUT();
}

void sub_170EBFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EBFE0u);

L_170EBFE0:
    edi = edi; /* 0x170EBFE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EBFE2: push ebp */
    ebp = esp; /* 0x170EBFE3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x170EBFE5: push esi */
    esi = ecx; /* 0x170EBFE6: mov esi, ecx */
    RECOMP_CALL(sub_170EBF9E); /* 0x170EBFE8: call 0x170ebf9e */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x170EBFED: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EBFFA; /* 0x170EBFF1: je 0x170ebffa */
L_170EBFF3:
    PUSH32(esp, esi); /* 0x170EBFF3: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x170EBFF4: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170EBFF9: pop ecx */
L_170EBFFA:
    eax = esi; /* 0x170EBFFA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170EBFFC: pop esi */
    ebp = POP32_VAL(esp); /* 0x170EBFFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EBFFE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170EC006(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EC006u);

L_170EC006:
    edi = edi; /* 0x170EC006: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EC008: push ebp */
    ebp = esp; /* 0x170EC009: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170EC00B: push ecx */
    PUSH32(esp, ecx); /* 0x170EC00C: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170EC00D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x170EC011: push ebx */
    PUSH32(esp, esi); /* 0x170EC012: push esi */
    esi = ecx; /* 0x170EC013: mov esi, ecx */
    PUSH32(esp, 0x1Cu); /* 0x170EC015: push 0x1c */
    MEM32(ebp + (-0x8)) = esi; /* 0x170EC017: mov dword ptr [ebp - 8], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x170EC01A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EC01F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EC021: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EC02F; /* 0x170EC022: je 0x170ec02f */
L_170EC024:
    ecx = eax; /* 0x170EC024: mov ecx, eax */
    RECOMP_CALL(sub_170EBF80); /* 0x170EC026: call 0x170ebf80 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x170EC02B: mov ebx, eax */
    goto L_170EC031; /* 0x170EC02D: jmp 0x170ec031 */
L_170EC02F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170EC02F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EC031:
    /* test ebx, ebx */ /* 0x170EC031: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EC03E; /* 0x170EC033: jne 0x170ec03e */
L_170EC035:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x170EC035: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_170EC0B4; /* 0x170EC03C: jmp 0x170ec0b4 */
L_170EC03E:
    PUSH32(esp, edi); /* 0x170EC03E: push edi */
    edi = MEM32(ebp + 0xC); /* 0x170EC03F: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x170EC042: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EC08C; /* 0x170EC044: jbe 0x170ec08c */
L_170EC046:
    eax = edi; /* 0x170EC046: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x170EC048: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x170EC04B: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = edi; /* 0x170EC04D: mov ecx, edi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x170EC04F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x170EC051: neg eax */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170EC053: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170EC053: shr ecx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x170EC056: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x170EC058: mov dword ptr [ebx], eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170EC05A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170EC05A: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170EC05D: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170EC05E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EC063: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EC065: pop ecx */
    MEM32(ebx + 0x4) = eax; /* 0x170EC066: mov dword ptr [ebx + 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EC074; /* 0x170EC069: jne 0x170ec074 */
L_170EC06B:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x170EC06B: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_170EC0A6; /* 0x170EC072: jmp 0x170ec0a6 */
L_170EC074:
    esi = MEM32(ebp + 0x8); /* 0x170EC074: mov esi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x170EC077: mov ecx, edi */
    edi = eax; /* 0x170EC079: mov edi, eax */
    eax = ecx; /* 0x170EC07B: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170EC07D: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170EC07D: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170EC080: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170EC082: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170EC084: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170EC087: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + (-0x8)); /* 0x170EC089: mov esi, dword ptr [ebp - 8] */
L_170EC08C:
    eax = MEM32(esi + 0x10); /* 0x170EC08C: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebx + 0xC) = eax; /* 0x170EC08F: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(esi + 0x10); /* 0x170EC092: mov eax, dword ptr [esi + 0x10] */
    MEM32(eax + 0x8) = ebx; /* 0x170EC095: mov dword ptr [eax + 8], ebx */
    eax = MEM32(ebp + 0x10); /* 0x170EC098: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x170EC09B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = ebx; /* 0x170EC09D: mov dword ptr [esi + 0x10], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EC0A4; /* 0x170EC0A0: je 0x170ec0a4 */
L_170EC0A2:
    MEM32(eax) = ebx; /* 0x170EC0A2: mov dword ptr [eax], ebx */
L_170EC0A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170EC0A4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EC0A6:
    /* test ebx, ebx */ /* 0x170EC0A6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x170EC0A8: pop edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EC0B4; /* 0x170EC0A9: je 0x170ec0b4 */
L_170EC0AB:
    PUSH32(esp, 1); /* 0x170EC0AB: push 1 */
    ecx = ebx; /* 0x170EC0AD: mov ecx, ebx */
    RECOMP_CALL(sub_170EBFE0); /* 0x170EC0AF: call 0x170ebfe0 */
    RECOMP_FLAGS_IN();
L_170EC0B4:
    eax = MEM32(ebp + (-0x4)); /* 0x170EC0B4: mov eax, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x170EC0B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x170EC0B8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EC0B9: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170EC0BA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170EC0C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EC0C2u);

L_170EC0C2:
    edi = edi; /* 0x170EC0C2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EC0C4: push ebp */
    ebp = esp; /* 0x170EC0C5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170EC0C7: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170EC0C8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170EC0CC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170EC0CD: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x170EC0D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x170EC0D2: push edi */
    edi = ecx; /* 0x170EC0D3: mov edi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EC0E9; /* 0x170EC0D5: je 0x170ec0e9 */
L_170EC0D7:
    eax = esi; /* 0x170EC0D7: mov eax, esi */
    edx = eax + 0x1; /* 0x170EC0D9: lea edx, [eax + 1] */
L_170EC0DC:
    SET_LO8(ecx, MEM8(eax)); /* 0x170EC0DC: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170EC0DE: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x170EC0DF: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EC0DC; /* 0x170EC0E1: jne 0x170ec0dc */
L_170EC0E3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x170EC0E3: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170EC0E5: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x170EC0E6: mov dword ptr [ebp - 4], eax */
L_170EC0E9:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170EC0E9: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x170EC0EC: lea eax, [ebp - 4] */
    PUSH32(esp, 4); /* 0x170EC0EF: push 4 */
    PUSH32(esp, eax); /* 0x170EC0F1: push eax */
    ecx = edi; /* 0x170EC0F2: mov ecx, edi */
    RECOMP_CALL(sub_170EC006); /* 0x170EC0F4: call 0x170ec006 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EC0F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_170EC10E; /* 0x170EC0FB: jl 0x170ec10e */
L_170EC0FD:
    /* test esi, esi */ /* 0x170EC0FD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EC10E; /* 0x170EC0FF: je 0x170ec10e */
L_170EC101:
    PUSH32(esp, 0); /* 0x170EC101: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x170EC103: push dword ptr [ebp - 4] */
    ecx = edi; /* 0x170EC106: mov ecx, edi */
    PUSH32(esp, esi); /* 0x170EC108: push esi */
    RECOMP_CALL(sub_170EC006); /* 0x170EC109: call 0x170ec006 */
    RECOMP_FLAGS_IN();
L_170EC10E:
    edi = POP32_VAL(esp); /* 0x170EC10E: pop edi */
    esi = POP32_VAL(esp); /* 0x170EC10F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EC110: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170EC111: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170EC119(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EC119u);

L_170EC119:
    edi = edi; /* 0x170EC119: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EC11B: push ebp */
    ebp = esp; /* 0x170EC11C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170EC11E: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170EC11F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170EC123: push esi */
    PUSH32(esp, edi); /* 0x170EC124: push edi */
    PUSH32(esp, 0x1Cu); /* 0x170EC125: push 0x1c */
    edi = ecx; /* 0x170EC127: mov edi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x170EC129: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EC12E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EC130: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EC13E; /* 0x170EC131: je 0x170ec13e */
L_170EC133:
    ecx = eax; /* 0x170EC133: mov ecx, eax */
    RECOMP_CALL(sub_170EBF80); /* 0x170EC135: call 0x170ebf80 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170EC13A: mov esi, eax */
    goto L_170EC140; /* 0x170EC13C: jmp 0x170ec140 */
L_170EC13E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170EC13E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EC140:
    /* test esi, esi */ /* 0x170EC140: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EC14D; /* 0x170EC142: jne 0x170ec14d */
L_170EC144:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x170EC144: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_170EC19B; /* 0x170EC14B: jmp 0x170ec19b */
L_170EC14D:
    PUSH32(esp, 4); /* 0x170EC14D: push 4 */
    MEM32(esi) = 1; /* 0x170EC14F: mov dword ptr [esi], 1 */
    RECOMP_CALL(sub_1721B01C); /* 0x170EC155: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170EC15A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170EC15C: pop ecx */
    MEM32(esi + 0x4) = eax; /* 0x170EC15D: mov dword ptr [esi + 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170EC16B; /* 0x170EC160: jne 0x170ec16b */
L_170EC162:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x170EC162: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_170EC18E; /* 0x170EC169: jmp 0x170ec18e */
L_170EC16B:
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x170EC16B: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x170EC16E: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x14) = eax; /* 0x170EC171: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(edi + 0x10); /* 0x170EC174: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0xC) = eax; /* 0x170EC177: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edi + 0x10); /* 0x170EC17A: mov eax, dword ptr [edi + 0x10] */
    MEM32(eax + 0x8) = esi; /* 0x170EC17D: mov dword ptr [eax + 8], esi */
    eax = MEM32(ebp + 0xC); /* 0x170EC180: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x170EC183: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x10) = esi; /* 0x170EC185: mov dword ptr [edi + 0x10], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EC18C; /* 0x170EC188: je 0x170ec18c */
L_170EC18A:
    MEM32(eax) = esi; /* 0x170EC18A: mov dword ptr [eax], esi */
L_170EC18C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170EC18C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170EC18E:
    /* test esi, esi */ /* 0x170EC18E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170EC19B; /* 0x170EC190: je 0x170ec19b */
L_170EC192:
    PUSH32(esp, 1); /* 0x170EC192: push 1 */
    ecx = esi; /* 0x170EC194: mov ecx, esi */
    RECOMP_CALL(sub_170EBFE0); /* 0x170EC196: call 0x170ebfe0 */
    RECOMP_FLAGS_IN();
L_170EC19B:
    eax = MEM32(ebp + (-0x4)); /* 0x170EC19B: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x170EC19E: pop edi */
    esi = POP32_VAL(esp); /* 0x170EC19F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170EC1A0: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170EC1A1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170EC1A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170EC1A9u);

L_170EC1A9:
    edi = edi; /* 0x170EC1A9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170EC1AB: push ebp */
    ebp = esp; /* 0x170EC1AC: mov ebp, esp */
    edx = MEM32(ecx + 0x10); /* 0x170EC1AE: mov edx, dword ptr [ecx + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x170EC1B1: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC) = edx; /* 0x170EC1B4: mov dword ptr [eax + 0xc], edx */
    edx = MEM32(ecx + 0x10); /* 0x170EC1B7: mov edx, dword ptr [ecx + 0x10] */
    MEM32(edx + 0x8) = eax; /* 0x170EC1BA: mov dword ptr [edx + 8], eax */
    eax = MEM32(eax + 0x10); /* 0x170EC1BD: mov eax, dword ptr [eax + 0x10] */
    MEM32(ecx + 0x10) = eax; /* 0x170EC1C0: mov dword ptr [ecx + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170EC1C3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x170EC1C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170EC1C6: ret 4 */
    RECOMP_REGS_OUT();
}
