#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1101414D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101414Du);

L_1101414D:
    PUSH32(esp, ebp); /* 0x1101414D: push ebp */
    ebp = esp; /* 0x1101414E: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x11014150: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x11014153: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x11014156: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11014158: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1101415A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1101415B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1101415E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101415Eu);

L_1101415E:
    eax = MEM32(ecx + 0x2C); /* 0x1101415E: mov eax, dword ptr [ecx + 0x2c] */
    ecx = MEM32(ecx + 0x1C); /* 0x11014161: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(eax); /* 0x11014164: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x11014166: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014168: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014169(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014169u);

L_11014169:
    eax = MEM32(ecx + 0x30); /* 0x11014169: mov eax, dword ptr [ecx + 0x30] */
    ecx = MEM32(ecx + 0x20); /* 0x1101416C: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(eax); /* 0x1101416F: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x11014171: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014173: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014174(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014174u);

L_11014174:
    PUSH32(esp, ebp); /* 0x11014174: push ebp */
    ebp = esp; /* 0x11014175: mov ebp, esp */
    eax = MEM32(ecx + 0x2C); /* 0x11014177: mov eax, dword ptr [ecx + 0x2c] */
    edx = MEM32(ebp + 0x8); /* 0x1101417A: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - edx; /* 0x1101417D: sub dword ptr [eax], edx */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x1C); /* 0x1101417F: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edx; /* 0x11014182: add dword ptr [eax], edx */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11014184: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11014185: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11014188(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014188u);

L_11014188:
    PUSH32(esp, ebp); /* 0x11014188: push ebp */
    ebp = esp; /* 0x11014189: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1101418B: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101418C: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1101418F: mov esi, ecx */
    RECOMP_CALL(sub_11013B1E); /* 0x11014191: call 0x11013b1e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014196: pop ecx */
    PUSH32(esp, eax); /* 0x11014197: push eax */
    ecx = esi; /* 0x11014198: mov ecx, esi */
    RECOMP_CALL(sub_11013F81); /* 0x1101419A: call 0x11013f81 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1101419F: pop esi */
    ebp = POP32_VAL(esp); /* 0x110141A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110141A1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110141A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110141A4u);

L_110141A4:
    PUSH32(esp, ebp); /* 0x110141A4: push ebp */
    ebp = esp; /* 0x110141A5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110141A7: push esi */
    esi = ecx; /* 0x110141A8: mov esi, ecx */
    RECOMP_CALL(sub_1100FBB6); /* 0x110141AA: call 0x1100fbb6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110141AF: mov eax, dword ptr [ebp + 8] */
    ecx = esi; /* 0x110141B2: mov ecx, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0; /* 0x110141B4: and dword ptr [esi + 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x20u); /* 0x110141B8: push 0x20 */
    MEM32(esi + 0x38) = eax; /* 0x110141BA: mov dword ptr [esi + 0x38], eax */
    RECOMP_CALL(sub_11014868); /* 0x110141BD: call 0x11014868 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x38), 0 */ /* 0x110141C2: cmp dword ptr [esi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(esi + 0x40) = (uint8_t)(LO8(eax)); /* 0x110141C6: mov byte ptr [esi + 0x40], al */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110141DB; /* 0x110141C9: jne 0x110141db */
L_110141CB:
    eax = MEM32(esi + 0xC); /* 0x110141CB: mov eax, dword ptr [esi + 0xc] */
    ecx = esi; /* 0x110141CE: mov ecx, esi */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110141D0: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x110141D3: push 0 */
    PUSH32(esp, eax); /* 0x110141D5: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x110141D6: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_110141DB:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x110141DB: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110141E8; /* 0x110141DF: je 0x110141e8 */
L_110141E1:
    PUSH32(esp, esi); /* 0x110141E1: push esi */
    RECOMP_CALL(sub_1103065A); /* 0x110141E2: call 0x1103065a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110141E7: pop ecx */
L_110141E8:
    esi = POP32_VAL(esp); /* 0x110141E8: pop esi */
    ebp = POP32_VAL(esp); /* 0x110141E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110141EA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110141ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110141EDu);

L_110141ED:
    PUSH32(esp, 0x30u); /* 0x110141ED: push 0x30 */
    eax = 0x1103EE82u; /* 0x110141EF: mov eax, 0x1103ee82 */
    RECOMP_CALL(sub_1103B3A5); /* 0x110141F4: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110141F9: mov edi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x110141FB: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x110141FE: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, esi */ /* 0x11014201: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101420C; /* 0x11014203: jne 0x1101420c */
L_11014205:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11014205: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11014373; /* 0x11014207: jmp 0x11014373 */
L_1101420C:
    eax = MEM32(edi + 0x20); /* 0x1101420C: mov eax, dword ptr [edi + 0x20] */
    ecx = MEM32(eax); /* 0x1101420F: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x11014211: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014235; /* 0x11014213: je 0x11014235 */
L_11014215:
    edx = MEM32(edi + 0x30); /* 0x11014215: mov edx, dword ptr [edi + 0x30] */
    eax = MEM32(edx); /* 0x11014218: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1101421A: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x1101421C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11014235; /* 0x1101421E: jae 0x11014235 */
L_11014220:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x11014220: dec dword ptr [edx] */
    _flag_k = FK_DEC;
    edx = MEM32(edi + 0x20); /* 0x11014222: mov edx, dword ptr [edi + 0x20] */
    esi = MEM32(edx); /* 0x11014225: mov esi, dword ptr [edx] */
    ecx = esi + 0x1; /* 0x11014227: lea ecx, [esi + 1] */
    MEM32(edx) = ecx; /* 0x1101422A: mov dword ptr [edx], ecx */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1101422C: mov byte ptr [esi], bl */
L_1101422E:
    eax = ebx; /* 0x1101422E: mov eax, ebx */
    goto L_11014373; /* 0x11014230: jmp 0x11014373 */
L_11014235:
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x11014235: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11014371; /* 0x11014239: je 0x11014371 */
L_1101423F:
    ecx = edi; /* 0x1101423F: mov ecx, edi */
    RECOMP_CALL(sub_11013FBC); /* 0x11014241: call 0x11013fbc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11014246: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x40), eax */ /* 0x11014248: cmp dword ptr [edi + 0x40], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014260; /* 0x1101424B: jne 0x11014260 */
L_1101424D:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x1101424D: push dword ptr [edi + 0x50] */
    PUSH32(esp, ebx); /* 0x11014250: push ebx */
    RECOMP_CALL(sub_11013AE0); /* 0x11014251: call 0x11013ae0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014256: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11014257: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x11014258: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101422E; /* 0x1101425A: jne 0x1101422e */
L_1101425C:
    ebx = esi; /* 0x1101425C: mov ebx, esi */
    RECOMP_BACKEDGE();
    goto L_1101422E; /* 0x1101425E: jmp 0x1101422e */
L_11014260:
    PUSH32(esp, eax); /* 0x11014260: push eax */
    PUSH32(esp, 8); /* 0x11014261: push 8 */
    ecx = ebp + (-0x28); /* 0x11014263: lea ecx, [ebp - 0x28] */
    MEM8(ebp + (-0x34)) = (uint8_t)(LO8(ebx)); /* 0x11014266: mov byte ptr [ebp - 0x34], bl */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x11014269: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = eax; /* 0x11014270: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(eax)); /* 0x11014273: mov byte ptr [ebp - 0x28], al */
    RECOMP_CALL(sub_11014076); /* 0x11014276: call 0x11014076 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101427B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101427F:
    eax = MEM32(ebp + (-0x28)); /* 0x1101427F: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x14)); /* 0x11014282: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x30)) = eax; /* 0x11014285: mov dword ptr [ebp - 0x30], eax */
L_11014288:
    /* cmp ecx, 0x10u */ /* 0x11014288: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11014290; /* 0x1101428B: jae 0x11014290 */
L_1101428D:
    eax = ebp + (-0x28); /* 0x1101428D: lea eax, [ebp - 0x28] */
L_11014290:
    MEM32(ebp + (-0x2C)) = eax; /* 0x11014290: mov dword ptr [ebp - 0x2c], eax */
    /* cmp ecx, 0x10u */ /* 0x11014293: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101429E; /* 0x11014296: jae 0x1101429e */
L_11014298:
    eax = ebp + (-0x28); /* 0x11014298: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1101429B: mov dword ptr [ebp - 0x30], eax */
L_1101429E:
    ecx = MEM32(edi + 0x40); /* 0x1101429E: mov ecx, dword ptr [edi + 0x40] */
    eax = ebp + (-0x38); /* 0x110142A1: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x110142A4: push eax */
    eax = MEM32(ebp + (-0x18)); /* 0x110142A5: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x2C)); /* 0x110142A8: add eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x110142AB: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x110142AD: push eax */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x110142AE: push dword ptr [ebp - 0x30] */
    eax = ebp + (-0x3C); /* 0x110142B1: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x110142B4: push eax */
    eax = ebp + (-0x33); /* 0x110142B5: lea eax, [ebp - 0x33] */
    PUSH32(esp, eax); /* 0x110142B8: push eax */
    eax = ebp + (-0x34); /* 0x110142B9: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x110142BC: push eax */
    eax = edi + 0x48; /* 0x110142BD: lea eax, [edi + 0x48] */
    PUSH32(esp, eax); /* 0x110142C0: push eax */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x110142C1: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x110142C4: mov ebx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x110142C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11014365; /* 0x110142C9: js 0x11014365 */
L_110142CF:
    /* cmp eax, 1 */ /* 0x110142CF: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1101434D; /* 0x110142D2: jg 0x1101434d */
L_110142D4:
    ecx = MEM32(ebp + (-0x14)); /* 0x110142D4: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x28)); /* 0x110142D7: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x30)) = eax; /* 0x110142DA: mov dword ptr [ebp - 0x30], eax */
    /* cmp ecx, 0x10u */ /* 0x110142DD: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110142E7; /* 0x110142E0: jb 0x110142e7 */
L_110142E2:
    MEM32(ebp + (-0x2C)) = eax; /* 0x110142E2: mov dword ptr [ebp - 0x2c], eax */
    goto L_110142ED; /* 0x110142E5: jmp 0x110142ed */
L_110142E7:
    edx = ebp + (-0x28); /* 0x110142E7: lea edx, [ebp - 0x28] */
    MEM32(ebp + (-0x2C)) = edx; /* 0x110142EA: mov dword ptr [ebp - 0x2c], edx */
L_110142ED:
    edx = MEM32(ebp + (-0x38)); /* 0x110142ED: mov edx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x2C)); /* 0x110142F0: sub edx, dword ptr [ebp - 0x2c] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = edx; /* 0x110142F3: mov dword ptr [ebp - 0x2c], edx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11014320; /* 0x110142F6: je 0x11014320 */
L_110142F8:
    /* cmp ecx, 0x10u */ /* 0x110142F8: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11014300; /* 0x110142FB: jae 0x11014300 */
L_110142FD:
    eax = ebp + (-0x28); /* 0x110142FD: lea eax, [ebp - 0x28] */
L_11014300:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x11014300: push dword ptr [edi + 0x50] */
    PUSH32(esp, edx); /* 0x11014303: push edx */
    PUSH32(esp, 1); /* 0x11014304: push 1 */
    PUSH32(esp, eax); /* 0x11014306: push eax */
    RECOMP_ICALL(MEM32(0x110690A8)); /* 0x11014307: call dword ptr [0x110690a8] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x2C)); /* 0x1101430D: mov edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11014310: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x11014313: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014365; /* 0x11014315: jne 0x11014365 */
L_11014317:
    eax = MEM32(ebp + (-0x28)); /* 0x11014317: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1101431A: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1101431D: mov dword ptr [ebp - 0x30], eax */
L_11014320:
    ebx = ebp + (-0x34); /* 0x11014320: lea ebx, [ebp - 0x34] */
    MEM8(edi + 0x45) = (uint8_t)(1); /* 0x11014323: mov byte ptr [edi + 0x45], 1 */
    /* cmp MEM32(ebp + (-0x3C)), ebx */ /* 0x11014327: cmp dword ptr [ebp - 0x3c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x1101432A: mov ebx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014363; /* 0x1101432D: jne 0x11014363 */
L_1101432F:
    /* test edx, edx */ /* 0x1101432F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11014288; /* 0x11014331: jne 0x11014288 */
L_11014337:
    /* cmp MEM32(ebp + (-0x18)), 0x20u */ /* 0x11014337: cmp dword ptr [ebp - 0x18], 0x20 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11014365; /* 0x1101433B: jae 0x11014365 */
L_1101433D:
    PUSH32(esp, edx); /* 0x1101433D: push edx */
    PUSH32(esp, 8); /* 0x1101433E: push 8 */
    ecx = ebp + (-0x28); /* 0x11014340: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11014015); /* 0x11014343: call 0x11014015 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1101427F; /* 0x11014348: jmp 0x1101427f */
L_1101434D:
    /* cmp eax, 3 */ /* 0x1101434D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014365; /* 0x11014350: jne 0x11014365 */
L_11014352:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x11014352: push dword ptr [edi + 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x11014355: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_11013AE0); /* 0x11014358: call 0x11013ae0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101435D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101435E: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1101435F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014365; /* 0x11014361: je 0x11014365 */
L_11014363:
    esi = ebx; /* 0x11014363: mov esi, ebx */
L_11014365:
    PUSH32(esp, 0); /* 0x11014365: push 0 */
    PUSH32(esp, 1); /* 0x11014367: push 1 */
    ecx = ebp + (-0x28); /* 0x11014369: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x1101436C: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11014371:
    eax = esi; /* 0x11014371: mov eax, esi */
L_11014373:
    RECOMP_CALL(sub_1103B354); /* 0x11014373: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11014378: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101437B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101437Bu);

L_1101437B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1101437B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101437E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11014381(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014381u);

L_11014381:
    PUSH32(esp, ebp); /* 0x11014381: push ebp */
    ebp = esp; /* 0x11014382: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11014384: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11014385: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11014388: push esi */
    esi = ecx; /* 0x11014389: mov esi, ecx */
    eax = MEM32(esi + 0x1C); /* 0x1101438B: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax); /* 0x1101438E: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x11014390: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110143BD; /* 0x11014392: je 0x110143bd */
L_11014394:
    eax = MEM32(esi + 0xC); /* 0x11014394: mov eax, dword ptr [esi + 0xc] */
    /* cmp MEM32(eax), ecx */ /* 0x11014397: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110143BD; /* 0x11014399: jae 0x110143bd */
L_1101439B:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1101439B: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110143A8; /* 0x1101439E: je 0x110143a8 */
L_110143A0:
    eax = (uint32_t)MEM8(ecx + (-0x1)); /* 0x110143A0: movzx eax, byte ptr [ecx - 1] */
    /* cmp eax, ebx */ /* 0x110143A4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110143BD; /* 0x110143A6: jne 0x110143bd */
L_110143A8:
    eax = MEM32(esi + 0x2C); /* 0x110143A8: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x110143AB: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x1C); /* 0x110143AD: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x110143B0: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    eax = ebx + 0x1; /* 0x110143B2: lea eax, [ebx + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x110143B5: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x110143B7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x110143B9: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110143FF; /* 0x110143BB: jmp 0x110143ff */
L_110143BD:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x110143BD: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110143FC; /* 0x110143C1: je 0x110143fc */
L_110143C3:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x110143C3: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110143FC; /* 0x110143C6: je 0x110143fc */
L_110143C8:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x110143C8: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110143E7; /* 0x110143CC: jne 0x110143e7 */
L_110143CE:
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x110143CE: push dword ptr [esi + 0x50] */
    eax = ebp + 0xB; /* 0x110143D1: lea eax, [ebp + 0xb] */
    MEM8(ebp + 0xB) = (uint8_t)(LO8(ebx)); /* 0x110143D4: mov byte ptr [ebp + 0xb], bl */
    PUSH32(esp, eax); /* 0x110143D7: push eax */
    RECOMP_CALL(sub_11013AFF); /* 0x110143D8: call 0x11013aff */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110143DD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110143DE: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x110143DF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110143E7; /* 0x110143E1: je 0x110143e7 */
L_110143E3:
    eax = ebx; /* 0x110143E3: mov eax, ebx */
    goto L_110143FF; /* 0x110143E5: jmp 0x110143ff */
L_110143E7:
    eax = MEM32(esi + 0x1C); /* 0x110143E7: mov eax, dword ptr [esi + 0x1c] */
    ecx = esi + 0x44; /* 0x110143EA: lea ecx, [esi + 0x44] */
    /* cmp MEM32(eax), ecx */ /* 0x110143ED: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110143FC; /* 0x110143EF: je 0x110143fc */
L_110143F1:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x110143F1: mov byte ptr [ecx], bl */
    ecx = esi; /* 0x110143F3: mov ecx, esi */
    RECOMP_CALL(sub_11013FDF); /* 0x110143F5: call 0x11013fdf */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_110143E3; /* 0x110143FA: jmp 0x110143e3 */
L_110143FC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x110143FC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_110143FF:
    esi = POP32_VAL(esp); /* 0x110143FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x11014400: pop ebx */
    ebp = POP32_VAL(esp); /* 0x11014401: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11014402: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11014405(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014405u);

L_11014405:
    PUSH32(esp, ebp); /* 0x11014405: push ebp */
    ebp = esp; /* 0x11014406: mov ebp, esp */
    eax = MEM32(ecx + 0x30); /* 0x11014408: mov eax, dword ptr [ecx + 0x30] */
    edx = MEM32(ebp + 0x8); /* 0x1101440B: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - edx; /* 0x1101440E: sub dword ptr [eax], edx */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x20); /* 0x11014410: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edx; /* 0x11014413: add dword ptr [eax], edx */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11014415: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11014416: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11014419(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014419u);

L_11014419:
    PUSH32(esp, ebp); /* 0x11014419: push ebp */
    ebp = esp; /* 0x1101441A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1101441C: push ebx */
    PUSH32(esp, esi); /* 0x1101441D: push esi */
    esi = ecx; /* 0x1101441E: mov esi, ecx */
    PUSH32(esp, edi); /* 0x11014420: push edi */
    edx = MEM32(esi + 0x1C); /* 0x11014421: mov edx, dword ptr [esi + 0x1c] */
    eax = esi + 0x44; /* 0x11014424: lea eax, [esi + 0x44] */
    /* cmp MEM32(edx), eax */ /* 0x11014427: cmp dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014445; /* 0x11014429: jne 0x11014445 */
L_1101442B:
    /* cmp MEM32(ebp + 0x14), 1 */ /* 0x1101442B: cmp dword ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014445; /* 0x1101442F: jne 0x11014445 */
L_11014431:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x11014431: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014445; /* 0x11014435: jne 0x11014445 */
L_11014437:
    edi = MEM32(ebp + 0xC); /* 0x11014437: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x1101443A: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFFu; /* 0x1101443D: add edi, -1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = ebx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11014440: adc ebx, -1 */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1101444B; /* 0x11014443: jmp 0x1101444b */
L_11014445:
    ebx = MEM32(ebp + 0x10); /* 0x11014445: mov ebx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x11014448: mov edi, dword ptr [ebp + 0xc] */
L_1101444B:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x1101444B: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110144B0; /* 0x1101444F: je 0x110144b0 */
L_11014451:
    RECOMP_CALL(sub_11013D9A); /* 0x11014451: call 0x11013d9a */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11014456: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110144B0; /* 0x11014458: je 0x110144b0 */
L_1101445A:
    eax = edi; /* 0x1101445A: mov eax, edi */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x1101445C: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11014466; /* 0x1101445E: jne 0x11014466 */
L_11014460:
    /* cmp MEM32(ebp + 0x14), 1 */ /* 0x11014460: cmp dword ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101447B; /* 0x11014464: je 0x1101447b */
L_11014466:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11014466: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x11014469: push ebx */
    PUSH32(esp, edi); /* 0x1101446A: push edi */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x1101446B: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x110690A4)); /* 0x1101446E: call dword ptr [0x110690a4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11014474: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11014477: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110144B0; /* 0x11014479: jne 0x110144b0 */
L_1101447B:
    eax = ebp + 0xC; /* 0x1101447B: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1101447E: push eax */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x1101447F: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x1106909C)); /* 0x11014482: call dword ptr [0x1106909c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014488: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11014489: pop ecx */
    /* test eax, eax */ /* 0x1101448A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110144B0; /* 0x1101448C: jne 0x110144b0 */
L_1101448E:
    ecx = esi; /* 0x1101448E: mov ecx, esi */
    RECOMP_CALL(sub_11013FBC); /* 0x11014490: call 0x11013fbc */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11014495: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11014498: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x1101449A: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x1101449C: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1101449F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x8) = ecx; /* 0x110144A2: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110144A5: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0xC) = ecx; /* 0x110144A8: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(esi + 0x48); /* 0x110144AB: mov ecx, dword ptr [esi + 0x48] */
    goto L_110144CC; /* 0x110144AE: jmp 0x110144cc */
L_110144B0:
    eax = MEM32(ebp + 0x8); /* 0x110144B0: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(0x110032C8); /* 0x110144B3: mov ecx, dword ptr [0x110032c8] */
    MEM32(eax) = ecx; /* 0x110144B9: mov dword ptr [eax], ecx */
    ecx = MEM32(0x110032CC); /* 0x110144BB: mov ecx, dword ptr [0x110032cc] */
    MEM32(eax + 0x4) = ecx; /* 0x110144C1: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110144C4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x110144C6: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x110144C9: mov dword ptr [eax + 0xc], ecx */
L_110144CC:
    edi = POP32_VAL(esp); /* 0x110144CC: pop edi */
    esi = POP32_VAL(esp); /* 0x110144CD: pop esi */
    MEM32(eax + 0x10) = ecx; /* 0x110144CE: mov dword ptr [eax + 0x10], ecx */
    ebx = POP32_VAL(esp); /* 0x110144D1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x110144D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x110144D3: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_110144D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110144D6u);

L_110144D6:
    PUSH32(esp, ebp); /* 0x110144D6: push ebp */
    ebp = esp; /* 0x110144D7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110144D9: push ecx */
    PUSH32(esp, ecx); /* 0x110144DA: push ecx */
    eax = MEM32(ebp + 0x14); /* 0x110144DB: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x110144DE: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x110144DF: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x110144E2: push esi */
    esi = ecx; /* 0x110144E3: mov esi, ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x110144E5: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x18); /* 0x110144E8: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x110144EB: push edi */
    edi = MEM32(ebp + 0xC); /* 0x110144EC: mov edi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x110144EF: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x110144F3: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11014569; /* 0x110144F6: je 0x11014569 */
L_110144F8:
    RECOMP_CALL(sub_11013D9A); /* 0x110144F8: call 0x11013d9a */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110144FD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014569; /* 0x110144FF: je 0x11014569 */
L_11014501:
    eax = ebp + (-0x8); /* 0x11014501: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x11014504: push eax */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x11014505: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x110690A0)); /* 0x11014508: call dword ptr [0x110690a0] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101450E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101450F: pop ecx */
    /* test eax, eax */ /* 0x11014510: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11014569; /* 0x11014512: jne 0x11014569 */
L_11014514:
    eax = edi; /* 0x11014514: mov eax, edi */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x11014516: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101452E; /* 0x11014518: je 0x1101452e */
L_1101451A:
    PUSH32(esp, 1); /* 0x1101451A: push 1 */
    PUSH32(esp, ebx); /* 0x1101451C: push ebx */
    PUSH32(esp, edi); /* 0x1101451D: push edi */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x1101451E: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x110690A4)); /* 0x11014521: call dword ptr [0x110690a4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11014527: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1101452A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11014569; /* 0x1101452C: jne 0x11014569 */
L_1101452E:
    eax = ebp + (-0x8); /* 0x1101452E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x11014531: push eax */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x11014532: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x1106909C)); /* 0x11014535: call dword ptr [0x1106909c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101453B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101453C: pop ecx */
    /* test eax, eax */ /* 0x1101453D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11014569; /* 0x1101453F: jne 0x11014569 */
L_11014541:
    eax = MEM32(ebp + 0x1C); /* 0x11014541: mov eax, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x11014544: mov ecx, esi */
    MEM32(esi + 0x48) = eax; /* 0x11014546: mov dword ptr [esi + 0x48], eax */
    RECOMP_CALL(sub_11013FBC); /* 0x11014549: call 0x11013fbc */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1101454E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11014551: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x11014553: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x11014555: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x11014558: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x8) = ecx; /* 0x1101455B: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1101455E: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0xC) = ecx; /* 0x11014561: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(esi + 0x48); /* 0x11014564: mov ecx, dword ptr [esi + 0x48] */
    goto L_11014585; /* 0x11014567: jmp 0x11014585 */
L_11014569:
    eax = MEM32(ebp + 0x8); /* 0x11014569: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(0x110032C8); /* 0x1101456C: mov ecx, dword ptr [0x110032c8] */
    MEM32(eax) = ecx; /* 0x11014572: mov dword ptr [eax], ecx */
    ecx = MEM32(0x110032CC); /* 0x11014574: mov ecx, dword ptr [0x110032cc] */
    MEM32(eax + 0x4) = ecx; /* 0x1101457A: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1101457D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x1101457F: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x11014582: mov dword ptr [eax + 0xc], ecx */
L_11014585:
    edi = POP32_VAL(esp); /* 0x11014585: pop edi */
    esi = POP32_VAL(esp); /* 0x11014586: pop esi */
    MEM32(eax + 0x10) = ecx; /* 0x11014587: mov dword ptr [eax + 0x10], ecx */
    ebx = POP32_VAL(esp); /* 0x1101458A: pop ebx */
    esp = ebp; /* 0x1101458B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1101458D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1101458E: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11014591(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014591u);

L_11014591:
    PUSH32(esp, ebp); /* 0x11014591: push ebp */
    ebp = esp; /* 0x11014592: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11014594: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(0x110032C8); /* 0x11014597: mov ecx, dword ptr [0x110032c8] */
    MEM32(eax) = ecx; /* 0x1101459D: mov dword ptr [eax], ecx */
    ecx = MEM32(0x110032CC); /* 0x1101459F: mov ecx, dword ptr [0x110032cc] */
    MEM32(eax + 0x4) = ecx; /* 0x110145A5: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110145A8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x110145AA: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x110145AD: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x110145B0: mov dword ptr [eax + 0x10], ecx */
    ebp = POP32_VAL(esp); /* 0x110145B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x110145B4: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_110145B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110145B7u);

L_110145B7:
    PUSH32(esp, ebp); /* 0x110145B7: push ebp */
    ebp = esp; /* 0x110145B8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110145BA: push esi */
    esi = ecx; /* 0x110145BB: mov esi, ecx */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x110145BD: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110145FF; /* 0x110145C1: je 0x110145ff */
L_110145C3:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x110145C3: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110145D6; /* 0x110145C7: jne 0x110145d6 */
L_110145C9:
    eax = MEM32(ebp + 0xC); /* 0x110145C9: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x10))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x10)));
    eax = eax | MEM32(ebp + 0x10); /* 0x110145CC: or eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110145D6; /* 0x110145CF: jne 0x110145d6 */
L_110145D1:
    PUSH32(esp, 4); /* 0x110145D1: push 4 */
    eax = POP32_VAL(esp); /* 0x110145D3: pop eax */
    goto L_110145D8; /* 0x110145D4: jmp 0x110145d8 */
L_110145D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110145D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_110145D8:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110145D8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110145DB: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110145DC: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x110145DF: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x110690AC)); /* 0x110145E2: call dword ptr [0x110690ac] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110145E8: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x110145EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110145FF; /* 0x110145ED: jne 0x110145ff */
L_110145EF:
    PUSH32(esp, 1); /* 0x110145EF: push 1 */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x110145F1: push dword ptr [esi + 0x50] */
    ecx = esi; /* 0x110145F4: mov ecx, esi */
    RECOMP_CALL(sub_11013F0A); /* 0x110145F6: call 0x11013f0a */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110145FB: mov eax, esi */
    goto L_11014601; /* 0x110145FD: jmp 0x11014601 */
L_110145FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110145FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014601:
    esi = POP32_VAL(esp); /* 0x11014601: pop esi */
    ebp = POP32_VAL(esp); /* 0x11014602: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11014603: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11014606(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014606u);

L_11014606:
    PUSH32(esp, ebp); /* 0x11014606: push ebp */
    ebp = esp; /* 0x11014607: mov ebp, esp */
    edx = MEM32(ecx + 0xC); /* 0x11014609: mov edx, dword ptr [ecx + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1101460C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1101460F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x11014610: mov esi, dword ptr [ebp + 0x10] */
    MEM32(edx) = eax; /* 0x11014613: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x1C); /* 0x11014615: mov eax, dword ptr [ecx + 0x1c] */
    edx = MEM32(ebp + 0xC); /* 0x11014618: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1101461B: sub esi, edx */
    _flag_k = FK_CMP;
    MEM32(eax) = edx; /* 0x1101461D: mov dword ptr [eax], edx */
    eax = MEM32(ecx + 0x2C); /* 0x1101461F: mov eax, dword ptr [ecx + 0x2c] */
    MEM32(eax) = esi; /* 0x11014622: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x11014624: pop esi */
    ebp = POP32_VAL(esp); /* 0x11014625: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11014626: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11014629(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014629u);

L_11014629:
    PUSH32(esp, ebp); /* 0x11014629: push ebp */
    ebp = esp; /* 0x1101462A: mov ebp, esp */
    eax = MEM32(ecx + 0x10); /* 0x1101462C: mov eax, dword ptr [ecx + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x1101462F: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11014632: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11014633: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x11014636: sub edx, esi */
    _flag_k = FK_CMP;
    MEM32(eax) = esi; /* 0x11014638: mov dword ptr [eax], esi */
    eax = MEM32(ecx + 0x20); /* 0x1101463A: mov eax, dword ptr [ecx + 0x20] */
    MEM32(eax) = esi; /* 0x1101463D: mov dword ptr [eax], esi */
    eax = MEM32(ecx + 0x30); /* 0x1101463F: mov eax, dword ptr [ecx + 0x30] */
    esi = POP32_VAL(esp); /* 0x11014642: pop esi */
    MEM32(eax) = edx; /* 0x11014643: mov dword ptr [eax], edx */
    ebp = POP32_VAL(esp); /* 0x11014645: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11014646: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11014649(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014649u);

L_11014649:
    PUSH32(esp, esi); /* 0x11014649: push esi */
    PUSH32(esp, edi); /* 0x1101464A: push edi */
    edi = ecx; /* 0x1101464B: mov edi, ecx */
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x1101464D: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101466E; /* 0x11014651: je 0x1101466e */
L_11014653:
    eax = MEM32(edi); /* 0x11014653: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x11014655: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11014658: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x11014659: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1101465C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101466E; /* 0x1101465E: je 0x1101466e */
L_11014660:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x11014660: push dword ptr [edi + 0x50] */
    RECOMP_ICALL(MEM32(0x11069094)); /* 0x11014663: call dword ptr [0x11069094] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014669: pop ecx */
    /* test eax, eax */ /* 0x1101466A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11014670; /* 0x1101466C: js 0x11014670 */
L_1101466E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1101466E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014670:
    edi = POP32_VAL(esp); /* 0x11014670: pop edi */
    eax = esi; /* 0x11014671: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11014673: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014674: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014675(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014675u);

L_11014675:
    PUSH32(esp, 0x2Cu); /* 0x11014675: push 0x2c */
    eax = 0x1103CF73u; /* 0x11014677: mov eax, 0x1103cf73 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1101467C: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11014681: mov edi, ecx */
    eax = MEM32(edi + 0x1C); /* 0x11014683: mov eax, dword ptr [edi + 0x1c] */
    ecx = MEM32(eax); /* 0x11014686: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x11014688: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110146AF; /* 0x1101468A: je 0x110146af */
L_1101468C:
    edx = MEM32(edi + 0x2C); /* 0x1101468C: mov edx, dword ptr [edi + 0x2c] */
    esi = MEM32(edx); /* 0x1101468F: mov esi, dword ptr [edx] */
    eax = esi + ecx; /* 0x11014691: lea eax, [esi + ecx] */
    /* cmp ecx, eax */ /* 0x11014694: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110146AF; /* 0x11014696: jae 0x110146af */
L_11014698:
    eax = esi + (-0x1); /* 0x11014698: lea eax, [esi - 1] */
    MEM32(edx) = eax; /* 0x1101469B: mov dword ptr [edx], eax */
    ecx = MEM32(edi + 0x1C); /* 0x1101469D: mov ecx, dword ptr [edi + 0x1c] */
    edx = MEM32(ecx); /* 0x110146A0: mov edx, dword ptr [ecx] */
    eax = edx + 0x1; /* 0x110146A2: lea eax, [edx + 1] */
    MEM32(ecx) = eax; /* 0x110146A5: mov dword ptr [ecx], eax */
    eax = (uint32_t)MEM8(edx); /* 0x110146A7: movzx eax, byte ptr [edx] */
    goto L_11014799; /* 0x110146AA: jmp 0x11014799 */
L_110146AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110146AF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x50), ebx */ /* 0x110146B1: cmp dword ptr [edi + 0x50], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110146BE; /* 0x110146B4: jne 0x110146be */
L_110146B6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x110146B6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11014799; /* 0x110146B9: jmp 0x11014799 */
L_110146BE:
    ecx = edi; /* 0x110146BE: mov ecx, edi */
    RECOMP_CALL(sub_11013FBC); /* 0x110146C0: call 0x11013fbc */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x40), ebx */ /* 0x110146C5: cmp dword ptr [edi + 0x40], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110146E8; /* 0x110146C8: jne 0x110146e8 */
L_110146CA:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x110146CA: push dword ptr [edi + 0x50] */
    eax = ebp + (-0x2A); /* 0x110146CD: lea eax, [ebp - 0x2a] */
    MEM8(ebp + (-0x2A)) = (uint8_t)(LO8(ebx)); /* 0x110146D0: mov byte ptr [ebp - 0x2a], bl */
    PUSH32(esp, eax); /* 0x110146D3: push eax */
    RECOMP_CALL(sub_11013ABF); /* 0x110146D4: call 0x11013abf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110146D9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110146DA: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x110146DB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110146B6; /* 0x110146DD: je 0x110146b6 */
L_110146DF:
    eax = (uint32_t)MEM8(ebp + (-0x2A)); /* 0x110146DF: movzx eax, byte ptr [ebp - 0x2a] */
    goto L_11014799; /* 0x110146E3: jmp 0x11014799 */
L_110146E8:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x110146E8: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = ebx; /* 0x110146EF: mov dword ptr [ebp - 0x18], ebx */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(ebx)); /* 0x110146F2: mov byte ptr [ebp - 0x28], bl */
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x110146F5: push dword ptr [edi + 0x50] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x110146F8: mov dword ptr [ebp - 4], ebx */
    RECOMP_ICALL(MEM32(0x11069098)); /* 0x110146FB: call dword ptr [0x11069098] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x11014701: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110147CC; /* 0x11014704: jmp 0x110147cc */
L_11014709:
    PUSH32(esp, eax); /* 0x11014709: push eax */
    PUSH32(esp, 1); /* 0x1101470A: push 1 */
    ecx = ebp + (-0x28); /* 0x1101470C: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11014015); /* 0x1101470F: call 0x11014015 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11014714: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x28)); /* 0x11014718: mov ebx, dword ptr [ebp - 0x28] */
    if (CMP_B(_flag_a, _flag_b)) goto L_11014722; /* 0x1101471B: jb 0x11014722 */
L_1101471D:
    MEM32(ebp + (-0x34)) = ebx; /* 0x1101471D: mov dword ptr [ebp - 0x34], ebx */
    goto L_11014728; /* 0x11014720: jmp 0x11014728 */
L_11014722:
    eax = ebp + (-0x28); /* 0x11014722: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x34)) = eax; /* 0x11014725: mov dword ptr [ebp - 0x34], eax */
L_11014728:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11014728: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11014731; /* 0x1101472C: jae 0x11014731 */
L_1101472E:
    ebx = ebp + (-0x28); /* 0x1101472E: lea ebx, [ebp - 0x28] */
L_11014731:
    ecx = MEM32(edi + 0x40); /* 0x11014731: mov ecx, dword ptr [edi + 0x40] */
    eax = ebp + (-0x38); /* 0x11014734: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11014737: push eax */
    eax = ebp + (-0x28); /* 0x11014738: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1101473B: push eax */
    edx = MEM32(ecx); /* 0x1101473C: mov edx, dword ptr [ecx] */
    eax = ebp + (-0x29); /* 0x1101473E: lea eax, [ebp - 0x29] */
    PUSH32(esp, eax); /* 0x11014741: push eax */
    eax = ebp + (-0x30); /* 0x11014742: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11014745: push eax */
    eax = MEM32(ebp + (-0x18)); /* 0x11014746: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x34)); /* 0x11014749: add eax, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1101474C: push eax */
    PUSH32(esp, ebx); /* 0x1101474D: push ebx */
    eax = edi + 0x48; /* 0x1101474E: lea eax, [edi + 0x48] */
    PUSH32(esp, eax); /* 0x11014751: push eax */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x11014752: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x11014755: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1101478B; /* 0x11014757: js 0x1101478b */
L_11014759:
    /* cmp eax, 1 */ /* 0x11014759: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1101479F; /* 0x1101475C: jle 0x1101479f */
L_1101475E:
    /* cmp eax, 3 */ /* 0x1101475E: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101478B; /* 0x11014761: jne 0x1101478b */
L_11014763:
    /* cmp MEM32(ebp + (-0x18)), 1 */ /* 0x11014763: cmp dword ptr [ebp - 0x18], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110147C3; /* 0x11014767: jb 0x110147c3 */
L_11014769:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11014769: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101476D: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11014775; /* 0x11014770: jae 0x11014775 */
L_11014772:
    eax = ebp + (-0x28); /* 0x11014772: lea eax, [ebp - 0x28] */
L_11014775:
    PUSH32(esp, 1); /* 0x11014775: push 1 */
    PUSH32(esp, eax); /* 0x11014777: push eax */
    eax = ebp + (-0x29); /* 0x11014778: lea eax, [ebp - 0x29] */
    PUSH32(esp, 1); /* 0x1101477B: push 1 */
    PUSH32(esp, eax); /* 0x1101477D: push eax */
    RECOMP_ICALL(MEM32(0x110690BC)); /* 0x1101477E: call dword ptr [0x110690bc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11014784: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11014787:
    esi = (uint32_t)MEM8(ebp + (-0x29)); /* 0x11014787: movzx esi, byte ptr [ebp - 0x29] */
L_1101478B:
    PUSH32(esp, 0); /* 0x1101478B: push 0 */
    PUSH32(esp, 1); /* 0x1101478D: push 1 */
    ecx = ebp + (-0x28); /* 0x1101478F: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x11014792: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11014797: mov eax, esi */
L_11014799:
    RECOMP_CALL(sub_1103B354); /* 0x11014799: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101479E: ret  */
L_1101479F:
    eax = ebp + (-0x29); /* 0x1101479F: lea eax, [ebp - 0x29] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x110147A2: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110147D7; /* 0x110147A5: jne 0x110147d7 */
L_110147A7:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x110147A7: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x110147AB: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110147B3; /* 0x110147AE: jae 0x110147b3 */
L_110147B0:
    ecx = ebp + (-0x28); /* 0x110147B0: lea ecx, [ebp - 0x28] */
L_110147B3:
    eax = MEM32(ebp + (-0x30)); /* 0x110147B3: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x110147B6: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x28); /* 0x110147B8: lea ecx, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x110147BB: push eax */
    PUSH32(esp, 0); /* 0x110147BC: push 0 */
    RECOMP_CALL(sub_11010B5C); /* 0x110147BE: call 0x11010b5c */
    RECOMP_FLAGS_IN();
L_110147C3:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x110147C3: push dword ptr [edi + 0x50] */
    RECOMP_ICALL(MEM32(0x11069098)); /* 0x110147C6: call dword ptr [0x11069098] */
    RECOMP_FLAGS_IN();
L_110147CC:
    ecx = POP32_VAL(esp); /* 0x110147CC: pop ecx */
    /* cmp eax, esi */ /* 0x110147CD: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014709; /* 0x110147CF: jne 0x11014709 */
L_110147D5:
    RECOMP_BACKEDGE();
    goto L_1101478B; /* 0x110147D5: jmp 0x1101478b */
L_110147D7:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x110147D7: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x28)); /* 0x110147DB: mov esi, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110147E3; /* 0x110147DE: jae 0x110147e3 */
L_110147E0:
    esi = ebp + (-0x28); /* 0x110147E0: lea esi, [ebp - 0x28] */
L_110147E3:
    eax = MEM32(ebp + (-0x30)); /* 0x110147E3: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x110147E6: sub esi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x18)); /* 0x110147E8: add esi, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x110147EB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11014787; /* 0x110147ED: jle 0x11014787 */
L_110147EF:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x110147EF: push dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x110147F2: dec esi */
    _flag_k = FK_DEC;
    eax = (int32_t)(int8_t)MEM8(esi + eax); /* 0x110147F3: movsx eax, byte ptr [esi + eax] */
    PUSH32(esp, eax); /* 0x110147F7: push eax */
    RECOMP_ICALL(MEM32(0x110690B0)); /* 0x110147F8: call dword ptr [0x110690b0] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110147FE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110147FF: pop ecx */
    /* test esi, esi */ /* 0x11014800: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11014787; /* 0x11014802: jle 0x11014787 */
L_11014804:
    eax = MEM32(ebp + (-0x30)); /* 0x11014804: mov eax, dword ptr [ebp - 0x30] */
    RECOMP_BACKEDGE();
    goto L_110147EF; /* 0x11014807: jmp 0x110147ef */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11014809(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014809u);

L_11014809:
    PUSH32(esp, esi); /* 0x11014809: push esi */
    esi = ecx; /* 0x1101480A: mov esi, ecx */
    eax = MEM32(esi); /* 0x1101480C: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1101480E: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x11014811: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x11014814: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101482A; /* 0x11014816: je 0x1101482a */
L_11014818:
    eax = MEM32(esi + 0x2C); /* 0x11014818: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1101481B: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    ecx = MEM32(esi + 0x1C); /* 0x1101481D: mov ecx, dword ptr [esi + 0x1c] */
    edx = MEM32(ecx); /* 0x11014820: mov edx, dword ptr [ecx] */
    eax = edx + 0x1; /* 0x11014822: lea eax, [edx + 1] */
    MEM32(ecx) = eax; /* 0x11014825: mov dword ptr [ecx], eax */
    ecx = (uint32_t)MEM8(edx); /* 0x11014827: movzx ecx, byte ptr [edx] */
L_1101482A:
    eax = ecx; /* 0x1101482A: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x1101482C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101482D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101482E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101482Eu);

L_1101482E:
    PUSH32(esp, esi); /* 0x1101482E: push esi */
    esi = ecx; /* 0x1101482F: mov esi, ecx */
    eax = MEM32(esi + 0x1C); /* 0x11014831: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax); /* 0x11014834: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x11014836: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101484A; /* 0x11014838: je 0x1101484a */
L_1101483A:
    eax = MEM32(esi + 0x2C); /* 0x1101483A: mov eax, dword ptr [esi + 0x2c] */
    eax = MEM32(eax); /* 0x1101483D: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1101483F: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x11014841: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101484A; /* 0x11014843: jae 0x1101484a */
L_11014845:
    eax = (uint32_t)MEM8(ecx); /* 0x11014845: movzx eax, byte ptr [ecx] */
    esi = POP32_VAL(esp); /* 0x11014848: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014849: ret  */
L_1101484A:
    eax = MEM32(esi); /* 0x1101484A: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1101484C: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1101484E: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1101484F: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x11014852: mov edi, eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x11014854: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, eax */ /* 0x11014857: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11014865; /* 0x11014859: je 0x11014865 */
L_1101485B:
    eax = MEM32(esi); /* 0x1101485B: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1101485D: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1101485F: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11014860: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11014863: mov eax, edi */
L_11014865:
    edi = POP32_VAL(esp); /* 0x11014865: pop edi */
    esi = POP32_VAL(esp); /* 0x11014866: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014867: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014868(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014868u);

L_11014868:
    PUSH32(esp, 4); /* 0x11014868: push 4 */
    eax = 0x1103D313u; /* 0x1101486A: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x1101486F: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x11014874: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11014877: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11014878: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101487D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11014881: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x11014882: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11014887: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1101488B: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1101488D: pop ecx */
    ecx = ebp + (-0x10); /* 0x1101488E: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x11014891: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x11014896: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x11014898: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101489A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x1101489D: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x110148A0: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110148A5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110148A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110148A8u);

L_110148A8:
    PUSH32(esp, ebp); /* 0x110148A8: push ebp */
    ebp = esp; /* 0x110148A9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x110148AB: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x110148AE: push ebx */
    ebx = ecx; /* 0x110148AF: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110148B1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x110148B3: push edi */
    edi = MEM32(ebp + 0x10); /* 0x110148B4: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110148B7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x110148B9: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x110148BC: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x110148BF: mov dword ptr [ebp - 8], edx */
    /* test edi, edi */ /* 0x110148C2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1101498C; /* 0x110148C4: jl 0x1101498c */
L_110148CA:
    PUSH32(esp, esi); /* 0x110148CA: push esi */
    esi = MEM32(ebp + 0xC); /* 0x110148CB: mov esi, dword ptr [ebp + 0xc] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110148D8; /* 0x110148CE: jg 0x110148d8 */
L_110148D0:
    /* test esi, esi */ /* 0x110148D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101498B; /* 0x110148D2: je 0x1101498b */
L_110148D8:
    eax = MEM32(ebx + 0x1C); /* 0x110148D8: mov eax, dword ptr [ebx + 0x1c] */
    eax = MEM32(eax); /* 0x110148DB: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x10)) = eax; /* 0x110148DD: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x110148E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110148EB; /* 0x110148E2: je 0x110148eb */
L_110148E4:
    eax = MEM32(ebx + 0x2C); /* 0x110148E4: mov eax, dword ptr [ebx + 0x2c] */
    eax = MEM32(eax); /* 0x110148E7: mov eax, dword ptr [eax] */
    goto L_110148ED; /* 0x110148E9: jmp 0x110148ed */
L_110148EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110148EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_110148ED:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x110148ED: cdq  */
    ebx = eax; /* 0x110148EE: mov ebx, eax */
    eax = edx; /* 0x110148F0: mov eax, edx */
    MEM32(ebp + 0x10) = eax; /* 0x110148F2: mov dword ptr [ebp + 0x10], eax */
    /* test eax, eax */ /* 0x110148F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11014948; /* 0x110148F7: jl 0x11014948 */
L_110148F9:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110148FF; /* 0x110148F9: jg 0x110148ff */
L_110148FB:
    /* test ebx, ebx */ /* 0x110148FB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014948; /* 0x110148FD: je 0x11014948 */
L_110148FF:
    /* cmp edi, eax */ /* 0x110148FF: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1101490E; /* 0x11014901: jg 0x1101490e */
L_11014903:
    if (CMP_L(_flag_a, _flag_b)) goto L_11014909; /* 0x11014903: jl 0x11014909 */
L_11014905:
    /* cmp esi, ebx */ /* 0x11014905: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101490E; /* 0x11014907: jae 0x1101490e */
L_11014909:
    ebx = esi; /* 0x11014909: mov ebx, esi */
    MEM32(ebp + 0x10) = edi; /* 0x1101490B: mov dword ptr [ebp + 0x10], edi */
L_1101490E:
    /* test ebx, ebx */ /* 0x1101490E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014924; /* 0x11014910: je 0x11014924 */
L_11014912:
    PUSH32(esp, ebx); /* 0x11014912: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x11014913: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014916: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B300); /* 0x11014919: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1101491E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014921: add esp, 0xc */
    _flag_k = FK_ADD;
L_11014924:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + ebx; /* 0x11014924: add dword ptr [ebp + 8], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x11014927: add ecx, ebx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x8)); /* 0x11014929: mov edx, dword ptr [ebp - 8] */
    { uint32_t _aa = edx, _ab = MEM32(ebp + 0x10), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1101492C: adc edx, dword ptr [ebp + 0x10] */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1101492F: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edx; /* 0x11014931: mov dword ptr [ebp - 8], edx */
    edx = MEM32(ebp + (-0xC)); /* 0x11014934: mov edx, dword ptr [ebp - 0xc] */
    { uint32_t _sa = edi, _sb = MEM32(ebp + 0x10), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11014937: sbb edi, dword ptr [ebp + 0x10] */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(edx + 0x2C); /* 0x1101493A: mov eax, dword ptr [edx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - ebx; /* 0x1101493D: sub dword ptr [eax], ebx */
    _flag_k = FK_CMP;
    eax = MEM32(edx + 0x1C); /* 0x1101493F: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ebx; /* 0x11014942: add dword ptr [eax], ebx */
    _flag_k = FK_ADD;
    ebx = edx; /* 0x11014944: mov ebx, edx */
    goto L_11014970; /* 0x11014946: jmp 0x11014970 */
L_11014948:
    ebx = MEM32(ebp + (-0xC)); /* 0x11014948: mov ebx, dword ptr [ebp - 0xc] */
    ecx = ebx; /* 0x1101494B: mov ecx, ebx */
    eax = MEM32(ebx); /* 0x1101494D: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1101494F: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11014952: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11014985; /* 0x11014955: je 0x11014985 */
L_11014957:
    ecx = MEM32(ebp + 0x8); /* 0x11014957: mov ecx, dword ptr [ebp + 8] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1101495A: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1101495C: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x1101495D: mov dword ptr [ebp + 8], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x11014960: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x11014963: add ecx, 1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(ebp + (-0x8)), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11014966: adc dword ptr [ebp - 8], 0 */
      MEM32(ebp + (-0x8)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFFu; /* 0x1101496A: add esi, -1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1101496D: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_11014970:
    MEM32(ebp + (-0x4)) = ecx; /* 0x11014970: mov dword ptr [ebp - 4], ecx */
    /* test edi, edi */ /* 0x11014973: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110148D8; /* 0x11014975: jg 0x110148d8 */
L_1101497B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11014985; /* 0x1101497B: jl 0x11014985 */
L_1101497D:
    /* test esi, esi */ /* 0x1101497D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110148D8; /* 0x1101497F: jne 0x110148d8 */
L_11014985:
    ecx = MEM32(ebp + (-0x4)); /* 0x11014985: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x11014988: mov edx, dword ptr [ebp - 8] */
L_1101498B:
    esi = POP32_VAL(esp); /* 0x1101498B: pop esi */
L_1101498C:
    edi = POP32_VAL(esp); /* 0x1101498C: pop edi */
    eax = ecx; /* 0x1101498D: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x1101498F: pop ebx */
    esp = ebp; /* 0x11014990: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11014992: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11014993: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11014996(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014996u);

L_11014996:
    PUSH32(esp, ebp); /* 0x11014996: push ebp */
    ebp = esp; /* 0x11014997: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x11014999: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1101499C: push ebx */
    ebx = ecx; /* 0x1101499D: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1101499F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x110149A1: push edi */
    edi = MEM32(ebp + 0x10); /* 0x110149A2: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110149A5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x110149A7: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x110149AA: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x110149AD: mov dword ptr [ebp - 8], edx */
    /* test edi, edi */ /* 0x110149B0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11014A7B; /* 0x110149B2: jl 0x11014a7b */
L_110149B8:
    PUSH32(esp, esi); /* 0x110149B8: push esi */
    esi = MEM32(ebp + 0xC); /* 0x110149B9: mov esi, dword ptr [ebp + 0xc] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110149C6; /* 0x110149BC: jg 0x110149c6 */
L_110149BE:
    /* test esi, esi */ /* 0x110149BE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014A7A; /* 0x110149C0: je 0x11014a7a */
L_110149C6:
    eax = MEM32(ebx + 0x20); /* 0x110149C6: mov eax, dword ptr [ebx + 0x20] */
    eax = MEM32(eax); /* 0x110149C9: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x10)) = eax; /* 0x110149CB: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x110149CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110149D9; /* 0x110149D0: je 0x110149d9 */
L_110149D2:
    eax = MEM32(ebx + 0x30); /* 0x110149D2: mov eax, dword ptr [ebx + 0x30] */
    eax = MEM32(eax); /* 0x110149D5: mov eax, dword ptr [eax] */
    goto L_110149DB; /* 0x110149D7: jmp 0x110149db */
L_110149D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110149D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_110149DB:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x110149DB: cdq  */
    ebx = eax; /* 0x110149DC: mov ebx, eax */
    eax = edx; /* 0x110149DE: mov eax, edx */
    MEM32(ebp + 0x10) = eax; /* 0x110149E0: mov dword ptr [ebp + 0x10], eax */
    /* test eax, eax */ /* 0x110149E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11014A34; /* 0x110149E5: jl 0x11014a34 */
L_110149E7:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110149ED; /* 0x110149E7: jg 0x110149ed */
L_110149E9:
    /* test ebx, ebx */ /* 0x110149E9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014A34; /* 0x110149EB: je 0x11014a34 */
L_110149ED:
    /* cmp edi, eax */ /* 0x110149ED: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_110149FC; /* 0x110149EF: jg 0x110149fc */
L_110149F1:
    if (CMP_L(_flag_a, _flag_b)) goto L_110149F7; /* 0x110149F1: jl 0x110149f7 */
L_110149F3:
    /* cmp esi, ebx */ /* 0x110149F3: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110149FC; /* 0x110149F5: jae 0x110149fc */
L_110149F7:
    ebx = esi; /* 0x110149F7: mov ebx, esi */
    MEM32(ebp + 0x10) = edi; /* 0x110149F9: mov dword ptr [ebp + 0x10], edi */
L_110149FC:
    /* test ebx, ebx */ /* 0x110149FC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014A12; /* 0x110149FE: je 0x11014a12 */
L_11014A00:
    PUSH32(esp, ebx); /* 0x11014A00: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014A01: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x11014A04: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1103B300); /* 0x11014A07: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11014A0C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014A0F: add esp, 0xc */
    _flag_k = FK_ADD;
L_11014A12:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + ebx; /* 0x11014A12: add dword ptr [ebp + 8], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x11014A15: add ecx, ebx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x8)); /* 0x11014A17: mov edx, dword ptr [ebp - 8] */
    { uint32_t _aa = edx, _ab = MEM32(ebp + 0x10), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11014A1A: adc edx, dword ptr [ebp + 0x10] */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x11014A1D: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edx; /* 0x11014A1F: mov dword ptr [ebp - 8], edx */
    edx = MEM32(ebp + (-0xC)); /* 0x11014A22: mov edx, dword ptr [ebp - 0xc] */
    { uint32_t _sa = edi, _sb = MEM32(ebp + 0x10), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11014A25: sbb edi, dword ptr [ebp + 0x10] */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(edx + 0x30); /* 0x11014A28: mov eax, dword ptr [edx + 0x30] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - ebx; /* 0x11014A2B: sub dword ptr [eax], ebx */
    _flag_k = FK_CMP;
    eax = MEM32(edx + 0x20); /* 0x11014A2D: mov eax, dword ptr [edx + 0x20] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ebx; /* 0x11014A30: add dword ptr [eax], ebx */
    _flag_k = FK_ADD;
    goto L_11014A5C; /* 0x11014A32: jmp 0x11014a5c */
L_11014A34:
    ecx = MEM32(ebp + (-0xC)); /* 0x11014A34: mov ecx, dword ptr [ebp - 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x11014A37: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x11014A3A: mov edx, dword ptr [ecx] */
    eax = (uint32_t)MEM8(ebx); /* 0x11014A3C: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x11014A3F: push eax */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x11014A40: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11014A43: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11014A74; /* 0x11014A46: je 0x11014a74 */
L_11014A48:
    ecx = MEM32(ebp + (-0x4)); /* 0x11014A48: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11014A4B: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x11014A4C: add ecx, 1 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x11014A4F: mov dword ptr [ebp + 8], ebx */
    { uint32_t _aa = MEM32(ebp + (-0x8)), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11014A52: adc dword ptr [ebp - 8], 0 */
      MEM32(ebp + (-0x8)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFFu; /* 0x11014A56: add esi, -1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11014A59: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_11014A5C:
    ebx = MEM32(ebp + (-0xC)); /* 0x11014A5C: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x11014A5F: mov dword ptr [ebp - 4], ecx */
    /* test edi, edi */ /* 0x11014A62: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110149C6; /* 0x11014A64: jg 0x110149c6 */
L_11014A6A:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11014A74; /* 0x11014A6A: jl 0x11014a74 */
L_11014A6C:
    /* test esi, esi */ /* 0x11014A6C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110149C6; /* 0x11014A6E: jne 0x110149c6 */
L_11014A74:
    ecx = MEM32(ebp + (-0x4)); /* 0x11014A74: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x11014A77: mov edx, dword ptr [ebp - 8] */
L_11014A7A:
    esi = POP32_VAL(esp); /* 0x11014A7A: pop esi */
L_11014A7B:
    edi = POP32_VAL(esp); /* 0x11014A7B: pop edi */
    eax = ecx; /* 0x11014A7C: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x11014A7E: pop ebx */
    esp = ebp; /* 0x11014A7F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11014A81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11014A82: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11014A85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014A85u);

L_11014A85:
    PUSH32(esp, 8); /* 0x11014A85: push 8 */
    eax = 0x1103D21Au; /* 0x11014A87: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x11014A8C: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11014A91: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11014A93: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11014A96: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x11014A98: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + 0x10), edx */ /* 0x11014A9B: cmp dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11014AB7; /* 0x11014A9E: je 0x11014ab7 */
L_11014AA0:
    MEM32(esi) = 0x11001CECu; /* 0x11014AA0: mov dword ptr [esi], 0x11001cec */
    MEM32(esi + 0x18) = 0x11001C24u; /* 0x11014AA6: mov dword ptr [esi + 0x18], 0x11001c24 */
    MEM32(ebp + (-0x4)) = edx; /* 0x11014AAD: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x10)) = 1; /* 0x11014AB0: mov dword ptr [ebp - 0x10], 1 */
L_11014AB7:
    eax = MEM32(esi); /* 0x11014AB7: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11014AB9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014ABC: push dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x11014ABF: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11001CE8u; /* 0x11014AC2: mov dword ptr [esi + eax], 0x11001ce8 */
    eax = MEM32(esi); /* 0x11014AC9: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11014ACB: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x11014ACE: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x11014AD1: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x11014AD5: mov eax, dword ptr [esi] */
    MEM32(esi + 0x8) = edx; /* 0x11014AD7: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x11014ADA: mov dword ptr [esi + 0xc], edx */
    ecx = MEM32(eax + 0x4); /* 0x11014ADD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11014AE0: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110141A4); /* 0x11014AE2: call 0x110141a4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11014AE7: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11014AE9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11014AEE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11014AF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014AF1u);

L_11014AF1:
    eax = MEM32(ecx + (-0x18)); /* 0x11014AF1: mov eax, dword ptr [ecx - 0x18] */
    eax = MEM32(eax + 0x4); /* 0x11014AF4: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + (-0x18)) = 0x11001CE8u; /* 0x11014AF7: mov dword ptr [eax + ecx - 0x18], 0x11001ce8 */
    eax = MEM32(ecx + (-0x18)); /* 0x11014AFF: mov eax, dword ptr [ecx - 0x18] */
    edx = MEM32(eax + 0x4); /* 0x11014B02: mov edx, dword ptr [eax + 4] */
    eax = edx + (-0x18); /* 0x11014B05: lea eax, [edx - 0x18] */
    MEM32(edx + ecx + (-0x1C)) = eax; /* 0x11014B08: mov dword ptr [edx + ecx - 0x1c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014B0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014B0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014B0Du);

L_11014B0D:
    edx = ecx + 0x18; /* 0x11014B0D: lea edx, [ecx + 0x18] */
    eax = MEM32(edx + (-0x18)); /* 0x11014B10: mov eax, dword ptr [edx - 0x18] */
    PUSH32(esp, edx); /* 0x11014B13: push edx */
    eax = MEM32(eax + 0x4); /* 0x11014B14: mov eax, dword ptr [eax + 4] */
    MEM32(eax + edx + (-0x18)) = 0x11001CE8u; /* 0x11014B17: mov dword ptr [eax + edx - 0x18], 0x11001ce8 */
    eax = MEM32(edx + (-0x18)); /* 0x11014B1F: mov eax, dword ptr [edx - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11014B22: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x11014B25: lea eax, [ecx - 0x18] */
    MEM32(ecx + edx + (-0x1C)) = eax; /* 0x11014B28: mov dword ptr [ecx + edx - 0x1c], eax */
    MEM32(edx) = 0x110016C4u; /* 0x11014B2C: mov dword ptr [edx], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x11014B32: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014B37: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014B38: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014B39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014B39u);

L_11014B39:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ecx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ecx + (-0x4)); /* 0x11014B39: sub ecx, dword ptr [ecx - 4] */
    _flag_k = FK_CMP;
    goto L_1101C973; /* 0x11014B3C: jmp 0x1101c973 */
L_1101C973:
    PUSH32(esp, ebp); /* 0x1101C973: push ebp */
    ebp = esp; /* 0x1101C974: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1101C976: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1101C97A: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C9A0; /* 0x1101C97B: je 0x1101c9a0 */
L_1101C97D:
    PUSH32(esp, 0x11014B0Du); /* 0x1101C97D: push 0x11014b0d */
    esi = ecx + (-0x1C); /* 0x1101C982: lea esi, [ecx - 0x1c] */
    PUSH32(esp, MEM32(esi)); /* 0x1101C985: push dword ptr [esi] */
    eax = ecx + (-0x18); /* 0x1101C987: lea eax, [ecx - 0x18] */
    PUSH32(esp, 0x60u); /* 0x1101C98A: push 0x60 */
    PUSH32(esp, eax); /* 0x1101C98C: push eax */
    RECOMP_CALL(sub_1103B132); /* 0x1101C98D: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C992: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C9B7; /* 0x1101C996: je 0x1101c9b7 */
L_1101C998:
    PUSH32(esp, esi); /* 0x1101C998: push esi */
    RECOMP_CALL(sub_1103B312); /* 0x1101C999: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    goto L_1101C9B6; /* 0x1101C99E: jmp 0x1101c9b6 */
L_1101C9A0:
    esi = ecx + (-0x18); /* 0x1101C9A0: lea esi, [ecx - 0x18] */
    ecx = esi; /* 0x1101C9A3: mov ecx, esi */
    RECOMP_CALL(sub_11014B0D); /* 0x1101C9A5: call 0x11014b0d */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1101C9AA: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101C9B7; /* 0x1101C9AE: je 0x1101c9b7 */
L_1101C9B0:
    PUSH32(esp, esi); /* 0x1101C9B0: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101C9B1: call 0x1103b126 */
    RECOMP_FLAGS_IN();
L_1101C9B6:
    ecx = POP32_VAL(esp); /* 0x1101C9B6: pop ecx */
L_1101C9B7:
    eax = esi; /* 0x1101C9B7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101C9B9: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101C9BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101C9BB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11014B9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014B9Au);

L_11014B9A:
    PUSH32(esp, ebp); /* 0x11014B9A: push ebp */
    ebp = esp; /* 0x11014B9B: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11014B9D: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11014BA0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11014BA2: push esi */
    PUSH32(esp, edi); /* 0x11014BA3: push edi */
    edi = eax; /* 0x11014BA4: mov edi, eax */
    edx = eax; /* 0x11014BA6: mov edx, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    edi = edi & 4; /* 0x11014BA8: and edi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    edx = edx & 0x80u; /* 0x11014BAB: and edx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11014BB1: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), 0x40u */ /* 0x11014BB2: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014BB8; /* 0x11014BB4: je 0x11014bb8 */
L_11014BB6:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x11014BB6: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014BB8:
    /* test LO8(eax), 8 */ /* 0x11014BB8: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014BBF; /* 0x11014BBA: je 0x11014bbf */
L_11014BBC:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x11014BBC: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014BBF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF3Bu);
    eax = eax & 0xFFFFFF3Bu; /* 0x11014BBF: and eax, 0xffffff3b */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11014BC4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014BC6:
    /* cmp ecx, eax */ /* 0x11014BC6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11014BD6; /* 0x11014BC8: je 0x11014bd6 */
L_11014BCA:
    ecx = MEM32(esi * 4 + 0x11001DEC); /* 0x11014BCA: mov ecx, dword ptr [esi*4 + 0x11001dec] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11014BD1: inc esi */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x11014BD2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11014BC6; /* 0x11014BD4: jne 0x11014bc6 */
L_11014BD6:
    /* cmp MEM32(esi * 4 + 0x11001DE8), 0 */ /* 0x11014BD6: cmp dword ptr [esi*4 + 0x11001de8], 0 */
    _flag_a = (uint32_t)(MEM32(esi * 4 + 0x11001DE8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014BE4; /* 0x11014BDE: jne 0x11014be4 */
L_11014BE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11014BE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11014C3A; /* 0x11014BE2: jmp 0x11014c3a */
L_11014BE4:
    /* test edx, edx */ /* 0x11014BE4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C0A; /* 0x11014BE6: je 0x11014c0a */
L_11014BE8:
    /* test LO8(eax), 0xAu */ /* 0x11014BE8: test al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C0A; /* 0x11014BEA: je 0x11014c0a */
L_11014BEC:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014BEC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x11014BEF: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014BF1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11014CF4); /* 0x11014BF4: call 0x11014cf4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014BF9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11014BFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C0A; /* 0x11014BFE: je 0x11014c0a */
L_11014C00:
    PUSH32(esp, eax); /* 0x11014C00: push eax */
L_11014C01:
    RECOMP_ICALL(MEM32(0x11069090)); /* 0x11014C01: call dword ptr [0x11069090] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014C07: pop ecx */
    RECOMP_BACKEDGE();
    goto L_11014BE0; /* 0x11014C08: jmp 0x11014be0 */
L_11014C0A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014C0A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x11014C0D: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014C0E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11014CF4); /* 0x11014C11: call 0x11014cf4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11014C16: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014C18: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x11014C1B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014BE0; /* 0x11014C1D: je 0x11014be0 */
L_11014C1F:
    /* test edi, edi */ /* 0x11014C1F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C38; /* 0x11014C21: je 0x11014c38 */
L_11014C23:
    PUSH32(esp, 2); /* 0x11014C23: push 2 */
    PUSH32(esp, 0); /* 0x11014C25: push 0 */
    PUSH32(esp, esi); /* 0x11014C27: push esi */
    RECOMP_ICALL(MEM32(0x110690C8)); /* 0x11014C28: call dword ptr [0x110690c8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014C2E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11014C31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C38; /* 0x11014C33: je 0x11014c38 */
L_11014C35:
    PUSH32(esp, esi); /* 0x11014C35: push esi */
    RECOMP_BACKEDGE();
    goto L_11014C01; /* 0x11014C36: jmp 0x11014c01 */
L_11014C38:
    eax = esi; /* 0x11014C38: mov eax, esi */
L_11014C3A:
    edi = POP32_VAL(esp); /* 0x11014C3A: pop edi */
    esi = POP32_VAL(esp); /* 0x11014C3B: pop esi */
    ebp = POP32_VAL(esp); /* 0x11014C3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014C3D: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014C3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014C3Eu);

L_11014C3E:
    PUSH32(esp, ebp); /* 0x11014C3E: push ebp */
    ebp = esp; /* 0x11014C3F: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11014C41: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11014C44: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11014C46: push esi */
    PUSH32(esp, edi); /* 0x11014C47: push edi */
    edi = eax; /* 0x11014C48: mov edi, eax */
    edx = eax; /* 0x11014C4A: mov edx, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    edi = edi & 4; /* 0x11014C4C: and edi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    edx = edx & 0x80u; /* 0x11014C4F: and edx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11014C55: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), 0x40u */ /* 0x11014C56: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C5C; /* 0x11014C58: je 0x11014c5c */
L_11014C5A:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x11014C5A: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014C5C:
    /* test LO8(eax), 8 */ /* 0x11014C5C: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C63; /* 0x11014C5E: je 0x11014c63 */
L_11014C60:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x11014C60: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014C63:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF3Bu);
    eax = eax & 0xFFFFFF3Bu; /* 0x11014C63: and eax, 0xffffff3b */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11014C68: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014C6A:
    /* cmp ecx, eax */ /* 0x11014C6A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11014C7A; /* 0x11014C6C: je 0x11014c7a */
L_11014C6E:
    ecx = MEM32(esi * 4 + 0x11001E28); /* 0x11014C6E: mov ecx, dword ptr [esi*4 + 0x11001e28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11014C75: inc esi */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x11014C76: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11014C6A; /* 0x11014C78: jne 0x11014c6a */
L_11014C7A:
    /* cmp MEM32(esi * 4 + 0x11001E24), 0 */ /* 0x11014C7A: cmp dword ptr [esi*4 + 0x11001e24], 0 */
    _flag_a = (uint32_t)(MEM32(esi * 4 + 0x11001E24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014C88; /* 0x11014C82: jne 0x11014c88 */
L_11014C84:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11014C84: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11014CDE; /* 0x11014C86: jmp 0x11014cde */
L_11014C88:
    /* test edx, edx */ /* 0x11014C88: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014CAE; /* 0x11014C8A: je 0x11014cae */
L_11014C8C:
    /* test LO8(eax), 0xAu */ /* 0x11014C8C: test al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014CAE; /* 0x11014C8E: je 0x11014cae */
L_11014C90:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014C90: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x11014C93: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014C95: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11014D12); /* 0x11014C98: call 0x11014d12 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014C9D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11014CA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014CAE; /* 0x11014CA2: je 0x11014cae */
L_11014CA4:
    PUSH32(esp, eax); /* 0x11014CA4: push eax */
L_11014CA5:
    RECOMP_ICALL(MEM32(0x11069090)); /* 0x11014CA5: call dword ptr [0x11069090] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014CAB: pop ecx */
    RECOMP_BACKEDGE();
    goto L_11014C84; /* 0x11014CAC: jmp 0x11014c84 */
L_11014CAE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014CAE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x11014CB1: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014CB2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11014D12); /* 0x11014CB5: call 0x11014d12 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11014CBA: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014CBC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x11014CBF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C84; /* 0x11014CC1: je 0x11014c84 */
L_11014CC3:
    /* test edi, edi */ /* 0x11014CC3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014CDC; /* 0x11014CC5: je 0x11014cdc */
L_11014CC7:
    PUSH32(esp, 2); /* 0x11014CC7: push 2 */
    PUSH32(esp, 0); /* 0x11014CC9: push 0 */
    PUSH32(esp, esi); /* 0x11014CCB: push esi */
    RECOMP_ICALL(MEM32(0x110690C8)); /* 0x11014CCC: call dword ptr [0x110690c8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014CD2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11014CD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014CDC; /* 0x11014CD7: je 0x11014cdc */
L_11014CD9:
    PUSH32(esp, esi); /* 0x11014CD9: push esi */
    RECOMP_BACKEDGE();
    goto L_11014CA5; /* 0x11014CDA: jmp 0x11014ca5 */
L_11014CDC:
    eax = esi; /* 0x11014CDC: mov eax, esi */
L_11014CDE:
    edi = POP32_VAL(esp); /* 0x11014CDE: pop edi */
    esi = POP32_VAL(esp); /* 0x11014CDF: pop esi */
    ebp = POP32_VAL(esp); /* 0x11014CE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014CE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014CE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014CE2u);

    goto L_11014CE2;
L_11014B9A:
    PUSH32(esp, ebp); /* 0x11014B9A: push ebp */
    ebp = esp; /* 0x11014B9B: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11014B9D: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11014BA0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11014BA2: push esi */
    PUSH32(esp, edi); /* 0x11014BA3: push edi */
    edi = eax; /* 0x11014BA4: mov edi, eax */
    edx = eax; /* 0x11014BA6: mov edx, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    edi = edi & 4; /* 0x11014BA8: and edi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    edx = edx & 0x80u; /* 0x11014BAB: and edx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11014BB1: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), 0x40u */ /* 0x11014BB2: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014BB8; /* 0x11014BB4: je 0x11014bb8 */
L_11014BB6:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x11014BB6: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014BB8:
    /* test LO8(eax), 8 */ /* 0x11014BB8: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014BBF; /* 0x11014BBA: je 0x11014bbf */
L_11014BBC:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x11014BBC: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014BBF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF3Bu);
    eax = eax & 0xFFFFFF3Bu; /* 0x11014BBF: and eax, 0xffffff3b */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11014BC4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014BC6:
    /* cmp ecx, eax */ /* 0x11014BC6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11014BD6; /* 0x11014BC8: je 0x11014bd6 */
L_11014BCA:
    ecx = MEM32(esi * 4 + 0x11001DEC); /* 0x11014BCA: mov ecx, dword ptr [esi*4 + 0x11001dec] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11014BD1: inc esi */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x11014BD2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11014BC6; /* 0x11014BD4: jne 0x11014bc6 */
L_11014BD6:
    /* cmp MEM32(esi * 4 + 0x11001DE8), 0 */ /* 0x11014BD6: cmp dword ptr [esi*4 + 0x11001de8], 0 */
    _flag_a = (uint32_t)(MEM32(esi * 4 + 0x11001DE8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014BE4; /* 0x11014BDE: jne 0x11014be4 */
L_11014BE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11014BE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11014C3A; /* 0x11014BE2: jmp 0x11014c3a */
L_11014BE4:
    /* test edx, edx */ /* 0x11014BE4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C0A; /* 0x11014BE6: je 0x11014c0a */
L_11014BE8:
    /* test LO8(eax), 0xAu */ /* 0x11014BE8: test al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C0A; /* 0x11014BEA: je 0x11014c0a */
L_11014BEC:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014BEC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x11014BEF: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014BF1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11014CF4); /* 0x11014BF4: call 0x11014cf4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014BF9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11014BFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C0A; /* 0x11014BFE: je 0x11014c0a */
L_11014C00:
    PUSH32(esp, eax); /* 0x11014C00: push eax */
L_11014C01:
    RECOMP_ICALL(MEM32(0x11069090)); /* 0x11014C01: call dword ptr [0x11069090] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014C07: pop ecx */
    RECOMP_BACKEDGE();
    goto L_11014BE0; /* 0x11014C08: jmp 0x11014be0 */
L_11014C0A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014C0A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x11014C0D: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014C0E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11014CF4); /* 0x11014C11: call 0x11014cf4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11014C16: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014C18: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x11014C1B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014BE0; /* 0x11014C1D: je 0x11014be0 */
L_11014C1F:
    /* test edi, edi */ /* 0x11014C1F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C38; /* 0x11014C21: je 0x11014c38 */
L_11014C23:
    PUSH32(esp, 2); /* 0x11014C23: push 2 */
    PUSH32(esp, 0); /* 0x11014C25: push 0 */
    PUSH32(esp, esi); /* 0x11014C27: push esi */
    RECOMP_ICALL(MEM32(0x110690C8)); /* 0x11014C28: call dword ptr [0x110690c8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014C2E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11014C31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C38; /* 0x11014C33: je 0x11014c38 */
L_11014C35:
    PUSH32(esp, esi); /* 0x11014C35: push esi */
    RECOMP_BACKEDGE();
    goto L_11014C01; /* 0x11014C36: jmp 0x11014c01 */
L_11014C38:
    eax = esi; /* 0x11014C38: mov eax, esi */
L_11014C3A:
    edi = POP32_VAL(esp); /* 0x11014C3A: pop edi */
    esi = POP32_VAL(esp); /* 0x11014C3B: pop esi */
    ebp = POP32_VAL(esp); /* 0x11014C3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014C3D: ret  */
L_11014CE2:
    PUSH32(esp, ebp); /* 0x11014CE2: push ebp */
    ebp = esp; /* 0x11014CE3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x11014CE5: pop ebp */
    RECOMP_BACKEDGE();
    goto L_11014B9A; /* 0x11014CE6: jmp 0x11014b9a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11014CEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014CEBu);

    goto L_11014CEB;
L_11014C3E:
    PUSH32(esp, ebp); /* 0x11014C3E: push ebp */
    ebp = esp; /* 0x11014C3F: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11014C41: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11014C44: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11014C46: push esi */
    PUSH32(esp, edi); /* 0x11014C47: push edi */
    edi = eax; /* 0x11014C48: mov edi, eax */
    edx = eax; /* 0x11014C4A: mov edx, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    edi = edi & 4; /* 0x11014C4C: and edi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    edx = edx & 0x80u; /* 0x11014C4F: and edx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11014C55: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), 0x40u */ /* 0x11014C56: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C5C; /* 0x11014C58: je 0x11014c5c */
L_11014C5A:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x11014C5A: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014C5C:
    /* test LO8(eax), 8 */ /* 0x11014C5C: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C63; /* 0x11014C5E: je 0x11014c63 */
L_11014C60:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x11014C60: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014C63:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF3Bu);
    eax = eax & 0xFFFFFF3Bu; /* 0x11014C63: and eax, 0xffffff3b */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11014C68: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11014C6A:
    /* cmp ecx, eax */ /* 0x11014C6A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11014C7A; /* 0x11014C6C: je 0x11014c7a */
L_11014C6E:
    ecx = MEM32(esi * 4 + 0x11001E28); /* 0x11014C6E: mov ecx, dword ptr [esi*4 + 0x11001e28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11014C75: inc esi */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x11014C76: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11014C6A; /* 0x11014C78: jne 0x11014c6a */
L_11014C7A:
    /* cmp MEM32(esi * 4 + 0x11001E24), 0 */ /* 0x11014C7A: cmp dword ptr [esi*4 + 0x11001e24], 0 */
    _flag_a = (uint32_t)(MEM32(esi * 4 + 0x11001E24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014C88; /* 0x11014C82: jne 0x11014c88 */
L_11014C84:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11014C84: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11014CDE; /* 0x11014C86: jmp 0x11014cde */
L_11014C88:
    /* test edx, edx */ /* 0x11014C88: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014CAE; /* 0x11014C8A: je 0x11014cae */
L_11014C8C:
    /* test LO8(eax), 0xAu */ /* 0x11014C8C: test al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014CAE; /* 0x11014C8E: je 0x11014cae */
L_11014C90:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014C90: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x11014C93: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014C95: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11014D12); /* 0x11014C98: call 0x11014d12 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014C9D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11014CA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014CAE; /* 0x11014CA2: je 0x11014cae */
L_11014CA4:
    PUSH32(esp, eax); /* 0x11014CA4: push eax */
L_11014CA5:
    RECOMP_ICALL(MEM32(0x11069090)); /* 0x11014CA5: call dword ptr [0x11069090] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014CAB: pop ecx */
    RECOMP_BACKEDGE();
    goto L_11014C84; /* 0x11014CAC: jmp 0x11014c84 */
L_11014CAE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014CAE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x11014CB1: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014CB2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11014D12); /* 0x11014CB5: call 0x11014d12 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11014CBA: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014CBC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x11014CBF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014C84; /* 0x11014CC1: je 0x11014c84 */
L_11014CC3:
    /* test edi, edi */ /* 0x11014CC3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014CDC; /* 0x11014CC5: je 0x11014cdc */
L_11014CC7:
    PUSH32(esp, 2); /* 0x11014CC7: push 2 */
    PUSH32(esp, 0); /* 0x11014CC9: push 0 */
    PUSH32(esp, esi); /* 0x11014CCB: push esi */
    RECOMP_ICALL(MEM32(0x110690C8)); /* 0x11014CCC: call dword ptr [0x110690c8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014CD2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11014CD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014CDC; /* 0x11014CD7: je 0x11014cdc */
L_11014CD9:
    PUSH32(esp, esi); /* 0x11014CD9: push esi */
    RECOMP_BACKEDGE();
    goto L_11014CA5; /* 0x11014CDA: jmp 0x11014ca5 */
L_11014CDC:
    eax = esi; /* 0x11014CDC: mov eax, esi */
L_11014CDE:
    edi = POP32_VAL(esp); /* 0x11014CDE: pop edi */
    esi = POP32_VAL(esp); /* 0x11014CDF: pop esi */
    ebp = POP32_VAL(esp); /* 0x11014CE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014CE1: ret  */
L_11014CEB:
    PUSH32(esp, ebp); /* 0x11014CEB: push ebp */
    ebp = esp; /* 0x11014CEC: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x11014CEE: pop ebp */
    RECOMP_BACKEDGE();
    goto L_11014C3E; /* 0x11014CEF: jmp 0x11014c3e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11014CF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014CF4u);

L_11014CF4:
    PUSH32(esp, ebp); /* 0x11014CF4: push ebp */
    ebp = esp; /* 0x11014CF5: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11014CF7: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014CFA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(eax * 4 + 0x11001CF4)); /* 0x11014CFD: push dword ptr [eax*4 + 0x11001cf4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014D04: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x110690C4)); /* 0x11014D07: call dword ptr [0x110690c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014D0D: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11014D10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014D11: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014D12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014D12u);

L_11014D12:
    PUSH32(esp, ebp); /* 0x11014D12: push ebp */
    ebp = esp; /* 0x11014D13: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11014D15: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014D18: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(eax * 4 + 0x11001D5C)); /* 0x11014D1B: push dword ptr [eax*4 + 0x11001d5c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014D22: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x110690CC)); /* 0x11014D25: call dword ptr [0x110690cc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014D2B: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11014D2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014D2F: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014D30u);

L_11014D30:
    PUSH32(esp, ebp); /* 0x11014D30: push ebp */
    ebp = esp; /* 0x11014D31: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x11014D33: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx) = 0x11001E64u; /* 0x11014D36: mov dword ptr [ecx], 0x11001e64 */
    eax = MEM32(edx + 0x4); /* 0x11014D3C: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x11014D3F: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx + 0x8); /* 0x11014D42: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x11014D45: mov dword ptr [ecx + 8], eax */
    SET_LO8(eax, MEM8(edx + 0xC)); /* 0x11014D48: mov al, byte ptr [edx + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x11014D4B: mov byte ptr [ecx + 0xc], al */
    eax = ecx; /* 0x11014D4E: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x11014D50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11014D51: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11014D7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014D7Fu);

L_11014D7F:
    PUSH32(esp, ebp); /* 0x11014D7F: push ebp */
    ebp = esp; /* 0x11014D80: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11014D82: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11014D85: push esi */
    esi = ecx; /* 0x11014D86: mov esi, ecx */
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x11014D88: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11014D90; /* 0x11014D8C: jb 0x11014d90 */
L_11014D8E:
    eax = MEM32(eax); /* 0x11014D8E: mov eax, dword ptr [eax] */
L_11014D90:
    MEM32(ebp + 0x8) = eax; /* 0x11014D90: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0x8; /* 0x11014D93: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11014D96: push eax */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11014D97: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11001464u; /* 0x11014D9D: mov dword ptr [esi], 0x11001464 */
    eax = esi; /* 0x11014DA3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11014DA5: pop esi */
    ebp = POP32_VAL(esp); /* 0x11014DA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11014DA7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11014DB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014DB3u);

L_11014DB3:
    PUSH32(esp, ebp); /* 0x11014DB3: push ebp */
    ebp = esp; /* 0x11014DB4: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x11014DB6: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x11014DB9: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x11014DBC: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx + 0x8); /* 0x11014DBF: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x11014DC2: mov dword ptr [ecx + 8], eax */
    SET_LO8(eax, MEM8(edx + 0xC)); /* 0x11014DC5: mov al, byte ptr [edx + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x11014DC8: mov byte ptr [ecx + 0xc], al */
    eax = ecx; /* 0x11014DCB: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x11014DCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11014DCE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11014DD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014DD1u);

L_11014DD1:
    PUSH32(esp, ebp); /* 0x11014DD1: push ebp */
    ebp = esp; /* 0x11014DD2: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x11014DD4: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x11014DD8: push esi */
    esi = ecx; /* 0x11014DD9: mov esi, ecx */
    MEM32(esi) = 0x11001630u; /* 0x11014DDB: mov dword ptr [esi], 0x11001630 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014DEA; /* 0x11014DE1: je 0x11014dea */
L_11014DE3:
    PUSH32(esp, esi); /* 0x11014DE3: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11014DE4: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014DE9: pop ecx */
L_11014DEA:
    eax = esi; /* 0x11014DEA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11014DEC: pop esi */
    ebp = POP32_VAL(esp); /* 0x11014DED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11014DEE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11014DF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014DF1u);

L_11014DF1:
    PUSH32(esp, ebp); /* 0x11014DF1: push ebp */
    ebp = esp; /* 0x11014DF2: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11014DF4: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11014DF7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11014E1C; /* 0x11014DF8: je 0x11014e1c */
L_11014DFA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11014DFA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11014E15; /* 0x11014DFB: je 0x11014e15 */
L_11014DFD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11014DFD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11014E0E; /* 0x11014DFE: je 0x11014e0e */
L_11014E00:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11014E00: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11014E07; /* 0x11014E01: je 0x11014e07 */
L_11014E03:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11014E03: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x11014E05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014E06: ret  */
L_11014E07:
    eax = 0x11001EECu; /* 0x11014E07: mov eax, 0x11001eec */
    ebp = POP32_VAL(esp); /* 0x11014E0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014E0D: ret  */
L_11014E0E:
    eax = 0x11001ED0u; /* 0x11014E0E: mov eax, 0x11001ed0 */
    ebp = POP32_VAL(esp); /* 0x11014E13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014E14: ret  */
L_11014E15:
    eax = 0x11001EB4u; /* 0x11014E15: mov eax, 0x11001eb4 */
    ebp = POP32_VAL(esp); /* 0x11014E1A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014E1B: ret  */
L_11014E1C:
    eax = 0x11001EA4u; /* 0x11014E1C: mov eax, 0x11001ea4 */
    ebp = POP32_VAL(esp); /* 0x11014E21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014E22: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014E23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014E23u);

L_11014E23:
    PUSH32(esp, 4); /* 0x11014E23: push 4 */
    eax = 0x1103CFA0u; /* 0x11014E25: mov eax, 0x1103cfa0 */
    RECOMP_CALL(sub_1103B372); /* 0x11014E2A: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11014E2F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x11014E33: push ecx */
    PUSH32(esp, ecx); /* 0x11014E34: push ecx */
    eax = esp; /* 0x11014E35: mov eax, esp */
    ecx = ebp + 0x8; /* 0x11014E37: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x11014E3A: push ecx */
    PUSH32(esp, eax); /* 0x11014E3B: push eax */
    RECOMP_ICALL(MEM32(0x110690D4)); /* 0x11014E3C: call dword ptr [0x110690d4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014E42: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11014E43: pop ecx */
    RECOMP_CALL(sub_11014EED); /* 0x11014E44: call 0x11014eed */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11014E49: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x8; /* 0x11014E4D: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11014E50: push eax */
    RECOMP_ICALL(MEM32(0x110690D0)); /* 0x11014E51: call dword ptr [0x110690d0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11014E57: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1103B340); /* 0x11014E5A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014E5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014E60u);

L_11014E60:
    PUSH32(esp, 0x2Cu); /* 0x11014E60: push 0x2c */
    eax = 0x1103CFC3u; /* 0x11014E62: mov eax, 0x1103cfc3 */
    RECOMP_CALL(sub_1103B372); /* 0x11014E67: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x110048B6u); /* 0x11014E6C: push 0x110048b6 */
    ecx = ebp + (-0x38); /* 0x11014E71: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_11010191); /* 0x11014E74: call 0x11010191 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11014E79: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x20); /* 0x11014E7C: lea ecx, [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11014E7F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax); /* 0x11014E83: mov esi, dword ptr [eax] */
    edi = MEM32(eax + 0x4); /* 0x11014E85: mov edi, dword ptr [eax + 4] */
    eax = ebp + (-0x38); /* 0x11014E88: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11014E8B: push eax */
    RECOMP_CALL(sub_11014D7F); /* 0x11014E8C: call 0x11014d7f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11040E5Cu); /* 0x11014E91: push 0x11040e5c */
    eax = ebp + (-0x20); /* 0x11014E96: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = 0x11001E78u; /* 0x11014E99: mov dword ptr [ebp - 0x20], 0x11001e78 */
    PUSH32(esp, eax); /* 0x11014EA0: push eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x11014EA1: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = edi; /* 0x11014EA4: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11014EA7: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11014EACu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11014EAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014EADu);

L_11014EAD:
    PUSH32(esp, ebp); /* 0x11014EAD: push ebp */
    ebp = esp; /* 0x11014EAE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11014EB0: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11014EB1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11014EB5: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11014EB6: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x11014EB9: mov esi, ecx */
    RECOMP_CALL(sub_11014DF1); /* 0x11014EBB: call 0x11014df1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014EC0: pop ecx */
    /* test eax, eax */ /* 0x11014EC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014ED0; /* 0x11014EC3: je 0x11014ed0 */
L_11014EC5:
    ecx = MEM32(ebp + 0x8); /* 0x11014EC5: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11014EC8: push eax */
    RECOMP_CALL(sub_11010191); /* 0x11014EC9: call 0x11010191 */
    RECOMP_FLAGS_IN();
    goto L_11014EDD; /* 0x11014ECE: jmp 0x11014edd */
L_11014ED0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11014ED0: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x11014ED3: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014ED5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100F684); /* 0x11014ED8: call 0x1100f684 */
    RECOMP_FLAGS_IN();
L_11014EDD:
    eax = MEM32(ebp + 0x8); /* 0x11014EDD: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x11014EE0: pop esi */
    esp = ebp; /* 0x11014EE1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11014EE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11014EE4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11014EE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014EE7u);

L_11014EE7:
    eax = 0x11001E9Cu; /* 0x11014EE7: mov eax, 0x11001e9c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014EEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014EED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014EEDu);

L_11014EED:
    PUSH32(esp, 0); /* 0x11014EED: push 0 */
    eax = 0x1103CFE6u; /* 0x11014EEF: mov eax, 0x1103cfe6 */
    RECOMP_CALL(sub_1103B372); /* 0x11014EF4: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11014EF9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x8; /* 0x11014EFD: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11014F00: push eax */
    RECOMP_ICALL(MEM32(0x110690D8)); /* 0x11014F01: call dword ptr [0x110690d8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11014F07: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x8; /* 0x11014F0B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11014F0E: push eax */
    RECOMP_ICALL(MEM32(0x110690D0)); /* 0x11014F0F: call dword ptr [0x110690d0] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014F15: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11014F16: pop ecx */
    RECOMP_CALL(sub_1103B340); /* 0x11014F17: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014F1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014F1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014F1Du);

L_11014F1D:
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x11014F1D: push dword ptr [ecx + 0xc] */
    RECOMP_CALL(sub_11014DF1); /* 0x11014F20: call 0x11014df1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014F25: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014F26: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014F27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014F27u);

    goto L_11014F27;
L_1101163C:
    PUSH32(esp, ebp); /* 0x1101163C: push ebp */
    ebp = esp; /* 0x1101163D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1101163F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x11011642: push 1 */
    eax = ebp + (-0x4); /* 0x11011644: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x110049A0u; /* 0x11011647: mov dword ptr [ebp - 4], 0x110049a0 */
    PUSH32(esp, eax); /* 0x1101164E: push eax */
    ecx = ebp + (-0x10); /* 0x1101164F: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x110692E8)); /* 0x11011652: call dword ptr [0x110692e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045724u); /* 0x11011658: push 0x11045724 */
    eax = ebp + (-0x10); /* 0x1101165D: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x11001458u; /* 0x11011660: mov dword ptr [ebp - 0x10], 0x11001458 */
    PUSH32(esp, eax); /* 0x11011667: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11011668: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1101166Du, "int3 ");
L_11014F27:
    PUSH32(esp, ebp); /* 0x11014F27: push ebp */
    ebp = esp; /* 0x11014F28: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11014F2A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11014F2D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x11014F2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014F4E; /* 0x11014F31: je 0x11014f4e */
L_11014F33:
    /* cmp eax, 0x7FFFFFFFu */ /* 0x11014F33: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11014F49; /* 0x11014F38: ja 0x11014f49 */
L_11014F3A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x11014F3A: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11014F3C: push eax */
    RECOMP_CALL(sub_1103B120); /* 0x11014F3D: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014F42: pop ecx */
    ecx = eax; /* 0x11014F43: mov ecx, eax */
    /* test ecx, ecx */ /* 0x11014F45: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11014F4E; /* 0x11014F47: jne 0x11014f4e */
L_11014F49:
    RECOMP_BACKEDGE();
    goto L_1101163C; /* 0x11014F49: jmp 0x1101163c */
L_11014F4E:
    eax = ecx; /* 0x11014F4E: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x11014F50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014F51: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014F52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014F52u);

L_11014F52:
    PUSH32(esp, ebp); /* 0x11014F52: push ebp */
    ebp = esp; /* 0x11014F53: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014F55: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11014F58: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11014F5B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014F5E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11014F61: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014F64: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11014F74); /* 0x11014F67: call 0x11014f74 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11014F6C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11014F6F: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11014F72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014F73: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014F74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014F74u);

L_11014F74:
    PUSH32(esp, ebp); /* 0x11014F74: push ebp */
    ebp = esp; /* 0x11014F75: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x11014F77: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x11014F7A: push ebx */
    PUSH32(esp, esi); /* 0x11014F7B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11014F7C: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11014F7F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x11014F81: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x11014F83: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11014F86: push edi */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x11014F87: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = ~edi; /* 0x11014F89: not edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x11014F8B: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11014FA1; /* 0x11014F8D: je 0x11014fa1 */
L_11014F8F:
    eax = (uint32_t)MEM8(esi); /* 0x11014F8F: movzx eax, byte ptr [esi] */
    ecx = ebp + 0x14; /* 0x11014F92: lea ecx, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11014F95: push eax */
    RECOMP_CALL(sub_1101776A); /* 0x11014F96: call 0x1101776a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11014F9B: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11014F9C: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edi */ /* 0x11014F9D: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014F8F; /* 0x11014F9F: jne 0x11014f8f */
L_11014FA1:
    eax = MEM32(ebp + 0x8); /* 0x11014FA1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x14); /* 0x11014FA4: mov ecx, dword ptr [ebp + 0x14] */
    edi = POP32_VAL(esp); /* 0x11014FA7: pop edi */
    esi = POP32_VAL(esp); /* 0x11014FA8: pop esi */
    MEM32(eax) = ecx; /* 0x11014FA9: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x11014FAB: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(eax + 0x4) = ecx; /* 0x11014FAE: mov dword ptr [eax + 4], ecx */
    ebx = POP32_VAL(esp); /* 0x11014FB1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x11014FB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014FB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014FB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014FB4u);

L_11014FB4:
    PUSH32(esp, ebp); /* 0x11014FB4: push ebp */
    ebp = esp; /* 0x11014FB5: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014FB7: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11014FBA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11014FBD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11014FC0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11014FC3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11014FC6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11014FD6); /* 0x11014FC9: call 0x11014fd6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11014FCE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11014FD1: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11014FD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014FD5: ret  */
    RECOMP_REGS_OUT();
}

void sub_11014FD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11014FD6u);

L_11014FD6:
    PUSH32(esp, ebp); /* 0x11014FD6: push ebp */
    ebp = esp; /* 0x11014FD7: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x11014FD9: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x11014FDC: push ebx */
    PUSH32(esp, esi); /* 0x11014FDD: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11014FDE: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11014FE1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x11014FE3: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11014FE5: inc eax */
    _flag_k = FK_INC;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x11014FE6: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x11014FE6: shr eax, 1 */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x11014FE8: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11014FEB: push edi */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x11014FEC: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = ~edi; /* 0x11014FEE: not edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x11014FF0: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015008; /* 0x11014FF2: je 0x11015008 */
L_11014FF4:
    eax = (uint32_t)MEM16(esi); /* 0x11014FF4: movzx eax, word ptr [esi] */
    ecx = ebp + 0x14; /* 0x11014FF7: lea ecx, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11014FFA: push eax */
    RECOMP_CALL(sub_1101778E); /* 0x11014FFB: call 0x1101778e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11015000: inc ebx */
    _flag_k = FK_INC;
    esi = esi + 0x2; /* 0x11015001: lea esi, [esi + 2] */
    /* cmp ebx, edi */ /* 0x11015004: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11014FF4; /* 0x11015006: jne 0x11014ff4 */
L_11015008:
    eax = MEM32(ebp + 0x8); /* 0x11015008: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x14); /* 0x1101500B: mov ecx, dword ptr [ebp + 0x14] */
    edi = POP32_VAL(esp); /* 0x1101500E: pop edi */
    esi = POP32_VAL(esp); /* 0x1101500F: pop esi */
    MEM32(eax) = ecx; /* 0x11015010: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x11015012: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(eax + 0x4) = ecx; /* 0x11015015: mov dword ptr [eax + 4], ecx */
    ebx = POP32_VAL(esp); /* 0x11015018: pop ebx */
    ebp = POP32_VAL(esp); /* 0x11015019: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101501A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101501B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101501Bu);

L_1101501B:
    PUSH32(esp, ebp); /* 0x1101501B: push ebp */
    ebp = esp; /* 0x1101501C: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1101501E: mov edx, dword ptr [ebp + 8] */
    eax = edx; /* 0x11015021: mov eax, edx */
    SET_LO8(ecx, MEM8(edx)); /* 0x11015023: mov cl, byte ptr [edx] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x11015025: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015039; /* 0x11015027: je 0x11015039 */
L_11015029:
    PUSH32(esp, ebx); /* 0x11015029: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0xC)); /* 0x1101502A: mov bl, byte ptr [ebp + 0xc] */
L_1101502D:
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x1101502D: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11015038; /* 0x1101502F: je 0x11015038 */
L_11015031:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11015031: inc eax */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(eax)); /* 0x11015032: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x11015034: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101502D; /* 0x11015036: jne 0x1101502d */
L_11015038:
    ebx = POP32_VAL(esp); /* 0x11015038: pop ebx */
L_11015039:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x11015039: sub eax, edx */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x1101503B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101503C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101503D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101503Du);

L_1101503D:
    PUSH32(esp, ebp); /* 0x1101503D: push ebp */
    ebp = esp; /* 0x1101503E: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x11015040: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x11015043: mov eax, ecx */
    edx = (uint32_t)MEM16(ecx); /* 0x11015045: movzx edx, word ptr [ecx] */
    goto L_11015056; /* 0x11015048: jmp 0x11015056 */
L_1101504A:
    /* cmp LO16(edx), MEM16(ebp + 0xC) */ /* 0x1101504A: cmp dx, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0xC)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101505B; /* 0x1101504E: je 0x1101505b */
L_11015050:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x11015050: add eax, 2 */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM16(eax); /* 0x11015053: movzx edx, word ptr [eax] */
L_11015056:
    /* test LO16(edx), LO16(edx) */ /* 0x11015056: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101504A; /* 0x11015059: jne 0x1101504a */
L_1101505B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1101505B: sub eax, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1101505D: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ebp = POP32_VAL(esp); /* 0x1101505F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11015060: ret  */
    RECOMP_REGS_OUT();
}

void sub_11015061(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015061u);

L_11015061:
    PUSH32(esp, 0x34u); /* 0x11015061: push 0x34 */
    eax = 0x1103D009u; /* 0x11015063: mov eax, 0x1103d009 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11015068: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1101506D: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x14); /* 0x11015070: mov edi, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0x10); /* 0x11015073: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x30)) = eax; /* 0x11015076: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + 0xC); /* 0x11015079: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1101507C: mov dword ptr [ebp - 0x40], eax */
    SET_LO8(eax, MEM8(edi)); /* 0x1101507F: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x11015081: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015095; /* 0x11015083: je 0x11015095 */
L_11015085:
    SET_LO8(ecx, LO8(eax)); /* 0x11015085: mov cl, al */
    edx = edi; /* 0x11015087: mov edx, edi */
L_11015089:
    /* cmp LO8(ecx), LO8(eax) */ /* 0x11015089: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101508E; /* 0x1101508B: jne 0x1101508e */
L_1101508D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1101508D: inc esi */
    _flag_k = FK_INC;
L_1101508E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1101508E: inc edx */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(edx)); /* 0x1101508F: mov cl, byte ptr [edx] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x11015091: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015089; /* 0x11015093: jne 0x11015089 */
L_11015095:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x11015095: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x11015099: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x1101509C: push 0 */
    PUSH32(esp, esi); /* 0x1101509E: push esi */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x1101509F: mov dword ptr [ebp - 0x14], 0xf */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x110150A6: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_11014076); /* 0x110150AA: call 0x11014076 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110150AF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110150B3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x110150B5: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x3C)) = 0xFFFFFFFEu; /* 0x110150B6: mov dword ptr [ebp - 0x3c], 0xfffffffe */
    MEM32(ebp + (-0x34)) = ecx; /* 0x110150BD: mov dword ptr [ebp - 0x34], ecx */
L_110150C0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_HI8(eax, 0); /* 0x110150C0: xor ah, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110150C2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110150C4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x29)) = (uint8_t)(HI8(eax)); /* 0x110150C6: mov byte ptr [ebp - 0x29], ah */
    MEM32(ebp + (-0x38)) = edx; /* 0x110150C9: mov dword ptr [ebp - 0x38], edx */
    /* test esi, esi */ /* 0x110150CC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110150E8; /* 0x110150CE: jne 0x110150e8 */
L_110150D0:
    PUSH32(esp, 0); /* 0x110150D0: push 0 */
    PUSH32(esp, 1); /* 0x110150D2: push 1 */
    ecx = ebp + (-0x28); /* 0x110150D4: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x110150D7: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x3C)); /* 0x110150DC: mov eax, dword ptr [ebp - 0x3c] */
    RECOMP_CALL(sub_1103B354); /* 0x110150DF: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110150E4: ret  */
L_110150E5:
    ecx = MEM32(ebp + (-0x34)); /* 0x110150E5: mov ecx, dword ptr [ebp - 0x34] */
L_110150E8:
    SET_LO8(eax, MEM8(ebx + edi)); /* 0x110150E8: mov al, byte ptr [ebx + edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x110150EB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015100; /* 0x110150ED: je 0x11015100 */
L_110150EF:
    SET_LO8(ecx, MEM8(edi)); /* 0x110150EF: mov cl, byte ptr [edi] */
L_110150F1:
    /* cmp LO8(eax), LO8(ecx) */ /* 0x110150F1: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110150FD; /* 0x110150F3: je 0x110150fd */
L_110150F5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110150F5: inc ebx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ebx + edi)); /* 0x110150F6: mov al, byte ptr [ebx + edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x110150F9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110150F1; /* 0x110150FB: jne 0x110150f1 */
L_110150FD:
    ecx = MEM32(ebp + (-0x34)); /* 0x110150FD: mov ecx, dword ptr [ebp - 0x34] */
L_11015100:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11015100: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11015104: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101510C; /* 0x11015107: jae 0x1101510c */
L_11015109:
    eax = ebp + (-0x28); /* 0x11015109: lea eax, [ebp - 0x28] */
L_1101510C:
    /* cmp MEM8(eax + edx), 0 */ /* 0x1101510C: cmp byte ptr [eax + edx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11015126; /* 0x11015110: je 0x11015126 */
L_11015112:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11015112: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11015116: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101511E; /* 0x11015119: jae 0x1101511e */
L_1101511B:
    eax = ebp + (-0x28); /* 0x1101511B: lea eax, [ebp - 0x28] */
L_1101511E:
    eax = (int32_t)(int8_t)MEM8(eax + edx); /* 0x1101511E: movsx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x11015122: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_1101519A; /* 0x11015124: jmp 0x1101519a */
L_11015126:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x11015126: add ebx, ecx */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ebx + edi)); /* 0x11015128: mov al, byte ptr [ebx + edi] */
    /* cmp LO8(eax), MEM8(edi) */ /* 0x1101512B: cmp al, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11015180; /* 0x1101512D: je 0x11015180 */
L_1101512F:
    /* test LO8(eax), LO8(eax) */ /* 0x1101512F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015180; /* 0x11015131: je 0x11015180 */
L_11015133:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x11015133: push dword ptr [ebp - 0x40] */
    ecx = MEM32(ebp + (-0x30)); /* 0x11015136: mov ecx, dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_11027871); /* 0x11015139: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101513E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015164; /* 0x11015140: jne 0x11015164 */
L_11015142:
    ecx = MEM32(ebp + (-0x30)); /* 0x11015142: mov ecx, dword ptr [ebp - 0x30] */
    /* cmp MEM8(ecx + 0x4), LO8(eax) */ /* 0x11015145: cmp byte ptr [ecx + 4], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11015152; /* 0x11015148: jne 0x11015152 */
L_1101514A:
    RECOMP_CALL(sub_110224F1); /* 0x1101514A: call 0x110224f1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x30)); /* 0x1101514F: mov ecx, dword ptr [ebp - 0x30] */
L_11015152:
    SET_LO8(eax, MEM8(ebx + edi)); /* 0x11015152: mov al, byte ptr [ebx + edi] */
    /* cmp LO8(eax), MEM8(ecx + 0x5) */ /* 0x11015155: cmp al, byte ptr [ecx + 5] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x5)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11015164; /* 0x11015158: jne 0x11015164 */
L_1101515A:
    edx = MEM32(ebp + (-0x38)); /* 0x1101515A: mov edx, dword ptr [ebp - 0x38] */
    SET_HI8(eax, 1); /* 0x1101515D: mov ah, 1 */
    MEM8(ebp + (-0x29)) = (uint8_t)(HI8(eax)); /* 0x1101515F: mov byte ptr [ebp - 0x29], ah */
    goto L_110151A0; /* 0x11015162: jmp 0x110151a0 */
L_11015164:
    ecx = MEM32(ebp + (-0x34)); /* 0x11015164: mov ecx, dword ptr [ebp - 0x34] */
    /* cmp ecx, 0x7Fu */ /* 0x11015167: cmp ecx, 0x7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1101516F; /* 0x1101516A: jb 0x1101516f */
L_1101516C:
    PUSH32(esp, 0x7Fu); /* 0x1101516C: push 0x7f */
    ecx = POP32_VAL(esp); /* 0x1101516E: pop ecx */
L_1101516F:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1101516F: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11015173: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1101517B; /* 0x11015176: jae 0x1101517b */
L_11015178:
    eax = ebp + (-0x28); /* 0x11015178: lea eax, [ebp - 0x28] */
L_1101517B:
    edx = MEM32(ebp + (-0x38)); /* 0x1101517B: mov edx, dword ptr [ebp - 0x38] */
    goto L_11015197; /* 0x1101517E: jmp 0x11015197 */
L_11015180:
    /* cmp ecx, 0x7Fu */ /* 0x11015180: cmp ecx, 0x7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11015188; /* 0x11015183: jb 0x11015188 */
L_11015185:
    PUSH32(esp, 0x7Fu); /* 0x11015185: push 0x7f */
    ecx = POP32_VAL(esp); /* 0x11015187: pop ecx */
L_11015188:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11015188: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101518C: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11015194; /* 0x1101518F: jae 0x11015194 */
L_11015191:
    eax = ebp + (-0x28); /* 0x11015191: lea eax, [ebp - 0x28] */
L_11015194:
    MEM32(ebp + (-0x3C)) = edx; /* 0x11015194: mov dword ptr [ebp - 0x3c], edx */
L_11015197:
    MEM8(eax + edx) = (uint8_t)(LO8(ecx)); /* 0x11015197: mov byte ptr [eax + edx], cl */
L_1101519A:
    ecx = MEM32(ebp + (-0x30)); /* 0x1101519A: mov ecx, dword ptr [ebp - 0x30] */
    SET_HI8(eax, MEM8(ebp + (-0x29))); /* 0x1101519D: mov ah, byte ptr [ebp - 0x29] */
L_110151A0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x110151A0: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = edx; /* 0x110151A1: mov dword ptr [ebp - 0x38], edx */
    /* cmp edx, esi */ /* 0x110151A4: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110150E5; /* 0x110151A6: jb 0x110150e5 */
L_110151AC:
    /* test HI8(eax), HI8(eax) */ /* 0x110151AC: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110150D0; /* 0x110151AE: je 0x110150d0 */
L_110151B4:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x110151B4: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_11027871); /* 0x110151B7: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110151BC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110150D0; /* 0x110151BE: jne 0x110150d0 */
L_110151C4:
    ecx = MEM32(ebp + (-0x30)); /* 0x110151C4: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) + 1; /* 0x110151C7: inc dword ptr [ebp - 0x34] */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_11021816); /* 0x110151CA: call 0x11021816 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x3C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x3C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) | 0xFFFFFFFFu; /* 0x110151CF: or dword ptr [ebp - 0x3c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x34)); /* 0x110151D3: mov ecx, dword ptr [ebp - 0x34] */
    RECOMP_BACKEDGE();
    goto L_110150C0; /* 0x110151D6: jmp 0x110150c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110151DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110151DBu);

L_110151DB:
    PUSH32(esp, 0x34u); /* 0x110151DB: push 0x34 */
    eax = 0x1103D009u; /* 0x110151DD: mov eax, 0x1103d009 */
    RECOMP_CALL(sub_1103B3A5); /* 0x110151E2: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110151E7: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x14); /* 0x110151EA: mov edi, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0x10); /* 0x110151ED: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x34)) = eax; /* 0x110151F0: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + 0xC); /* 0x110151F3: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x40)) = eax; /* 0x110151F6: mov dword ptr [ebp - 0x40], eax */
    SET_LO8(eax, MEM8(edi)); /* 0x110151F9: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x110151FB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101520F; /* 0x110151FD: je 0x1101520f */
L_110151FF:
    SET_LO8(ecx, LO8(eax)); /* 0x110151FF: mov cl, al */
    edx = edi; /* 0x11015201: mov edx, edi */
L_11015203:
    /* cmp LO8(ecx), LO8(eax) */ /* 0x11015203: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11015208; /* 0x11015205: jne 0x11015208 */
L_11015207:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11015207: inc esi */
    _flag_k = FK_INC;
L_11015208:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11015208: inc edx */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(edx)); /* 0x11015209: mov cl, byte ptr [edx] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1101520B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015203; /* 0x1101520D: jne 0x11015203 */
L_1101520F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x1101520F: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x11015213: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x11015216: push 0 */
    PUSH32(esp, esi); /* 0x11015218: push esi */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x11015219: mov dword ptr [ebp - 0x14], 0xf */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x11015220: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_11014076); /* 0x11015224: call 0x11014076 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11015229: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1101522D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1101522F: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x3C)) = 0xFFFFFFFEu; /* 0x11015230: mov dword ptr [ebp - 0x3c], 0xfffffffe */
    MEM32(ebp + (-0x30)) = ecx; /* 0x11015237: mov dword ptr [ebp - 0x30], ecx */
L_1101523A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_HI8(eax, 0); /* 0x1101523A: xor ah, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1101523C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101523E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x29)) = (uint8_t)(HI8(eax)); /* 0x11015240: mov byte ptr [ebp - 0x29], ah */
    MEM32(ebp + (-0x38)) = edx; /* 0x11015243: mov dword ptr [ebp - 0x38], edx */
    /* test esi, esi */ /* 0x11015246: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015262; /* 0x11015248: jne 0x11015262 */
L_1101524A:
    PUSH32(esp, 0); /* 0x1101524A: push 0 */
    PUSH32(esp, 1); /* 0x1101524C: push 1 */
    ecx = ebp + (-0x28); /* 0x1101524E: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x11015251: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x3C)); /* 0x11015256: mov eax, dword ptr [ebp - 0x3c] */
    RECOMP_CALL(sub_1103B354); /* 0x11015259: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101525E: ret  */
L_1101525F:
    ecx = MEM32(ebp + (-0x30)); /* 0x1101525F: mov ecx, dword ptr [ebp - 0x30] */
L_11015262:
    SET_LO8(eax, MEM8(ebx + edi)); /* 0x11015262: mov al, byte ptr [ebx + edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x11015265: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101527A; /* 0x11015267: je 0x1101527a */
L_11015269:
    SET_LO8(ecx, MEM8(edi)); /* 0x11015269: mov cl, byte ptr [edi] */
L_1101526B:
    /* cmp LO8(eax), LO8(ecx) */ /* 0x1101526B: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11015277; /* 0x1101526D: je 0x11015277 */
L_1101526F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1101526F: inc ebx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ebx + edi)); /* 0x11015270: mov al, byte ptr [ebx + edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x11015273: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101526B; /* 0x11015275: jne 0x1101526b */
L_11015277:
    ecx = MEM32(ebp + (-0x30)); /* 0x11015277: mov ecx, dword ptr [ebp - 0x30] */
L_1101527A:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1101527A: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101527E: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11015286; /* 0x11015281: jae 0x11015286 */
L_11015283:
    eax = ebp + (-0x28); /* 0x11015283: lea eax, [ebp - 0x28] */
L_11015286:
    /* cmp MEM8(eax + edx), 0 */ /* 0x11015286: cmp byte ptr [eax + edx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110152A0; /* 0x1101528A: je 0x110152a0 */
L_1101528C:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1101528C: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11015290: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11015298; /* 0x11015293: jae 0x11015298 */
L_11015295:
    eax = ebp + (-0x28); /* 0x11015295: lea eax, [ebp - 0x28] */
L_11015298:
    eax = (int32_t)(int8_t)MEM8(eax + edx); /* 0x11015298: movsx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1101529C: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_1101531B; /* 0x1101529E: jmp 0x1101531b */
L_110152A0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x110152A0: add ebx, ecx */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ebx + edi)); /* 0x110152A2: mov al, byte ptr [ebx + edi] */
    /* cmp LO8(eax), MEM8(edi) */ /* 0x110152A5: cmp al, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11015301; /* 0x110152A7: je 0x11015301 */
L_110152A9:
    /* test LO8(eax), LO8(eax) */ /* 0x110152A9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015301; /* 0x110152AB: je 0x11015301 */
L_110152AD:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x110152AD: push dword ptr [ebp - 0x40] */
    ecx = MEM32(ebp + (-0x34)); /* 0x110152B0: mov ecx, dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_110278AC); /* 0x110152B3: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110152B8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110152E5; /* 0x110152BA: jne 0x110152e5 */
L_110152BC:
    eax = MEM32(ebp + (-0x34)); /* 0x110152BC: mov eax, dword ptr [ebp - 0x34] */
    /* cmp MEM8(eax + 0x4), 0 */ /* 0x110152BF: cmp byte ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110152CF; /* 0x110152C3: jne 0x110152cf */
L_110152C5:
    ecx = eax; /* 0x110152C5: mov ecx, eax */
    RECOMP_CALL(sub_11022515); /* 0x110152C7: call 0x11022515 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x110152CC: mov eax, dword ptr [ebp - 0x34] */
L_110152CF:
    ecx = (uint32_t)MEM16(eax + 0x6); /* 0x110152CF: movzx ecx, word ptr [eax + 6] */
    eax = (int32_t)(int8_t)MEM8(ebx + edi); /* 0x110152D3: movsx eax, byte ptr [ebx + edi] */
    /* cmp eax, ecx */ /* 0x110152D7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110152E5; /* 0x110152D9: jne 0x110152e5 */
L_110152DB:
    edx = MEM32(ebp + (-0x38)); /* 0x110152DB: mov edx, dword ptr [ebp - 0x38] */
    SET_HI8(eax, 1); /* 0x110152DE: mov ah, 1 */
    MEM8(ebp + (-0x29)) = (uint8_t)(HI8(eax)); /* 0x110152E0: mov byte ptr [ebp - 0x29], ah */
    goto L_1101531E; /* 0x110152E3: jmp 0x1101531e */
L_110152E5:
    ecx = MEM32(ebp + (-0x30)); /* 0x110152E5: mov ecx, dword ptr [ebp - 0x30] */
    /* cmp ecx, 0x7Fu */ /* 0x110152E8: cmp ecx, 0x7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110152F0; /* 0x110152EB: jb 0x110152f0 */
L_110152ED:
    PUSH32(esp, 0x7Fu); /* 0x110152ED: push 0x7f */
    ecx = POP32_VAL(esp); /* 0x110152EF: pop ecx */
L_110152F0:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x110152F0: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x110152F4: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110152FC; /* 0x110152F7: jae 0x110152fc */
L_110152F9:
    eax = ebp + (-0x28); /* 0x110152F9: lea eax, [ebp - 0x28] */
L_110152FC:
    edx = MEM32(ebp + (-0x38)); /* 0x110152FC: mov edx, dword ptr [ebp - 0x38] */
    goto L_11015318; /* 0x110152FF: jmp 0x11015318 */
L_11015301:
    /* cmp ecx, 0x7Fu */ /* 0x11015301: cmp ecx, 0x7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11015309; /* 0x11015304: jb 0x11015309 */
L_11015306:
    PUSH32(esp, 0x7Fu); /* 0x11015306: push 0x7f */
    ecx = POP32_VAL(esp); /* 0x11015308: pop ecx */
L_11015309:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11015309: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101530D: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11015315; /* 0x11015310: jae 0x11015315 */
L_11015312:
    eax = ebp + (-0x28); /* 0x11015312: lea eax, [ebp - 0x28] */
L_11015315:
    MEM32(ebp + (-0x3C)) = edx; /* 0x11015315: mov dword ptr [ebp - 0x3c], edx */
L_11015318:
    MEM8(eax + edx) = (uint8_t)(LO8(ecx)); /* 0x11015318: mov byte ptr [eax + edx], cl */
L_1101531B:
    SET_HI8(eax, MEM8(ebp + (-0x29))); /* 0x1101531B: mov ah, byte ptr [ebp - 0x29] */
L_1101531E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1101531E: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = edx; /* 0x1101531F: mov dword ptr [ebp - 0x38], edx */
    /* cmp edx, esi */ /* 0x11015322: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1101525F; /* 0x11015324: jb 0x1101525f */
L_1101532A:
    /* test HI8(eax), HI8(eax) */ /* 0x1101532A: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101524A; /* 0x1101532C: je 0x1101524a */
L_11015332:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x11015332: push dword ptr [ebp - 0x40] */
    ebx = MEM32(ebp + (-0x34)); /* 0x11015335: mov ebx, dword ptr [ebp - 0x34] */
    ecx = ebx; /* 0x11015338: mov ecx, ebx */
    RECOMP_CALL(sub_110278AC); /* 0x1101533A: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1101533F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101524A; /* 0x11015341: jne 0x1101524a */
L_11015347:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 1; /* 0x11015347: inc dword ptr [ebp - 0x30] */
    _flag_k = FK_INC;
    ecx = ebx; /* 0x1101534A: mov ecx, ebx */
    RECOMP_CALL(sub_11021838); /* 0x1101534C: call 0x11021838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x3C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x3C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) | 0xFFFFFFFFu; /* 0x11015351: or dword ptr [ebp - 0x3c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x30)); /* 0x11015355: mov ecx, dword ptr [ebp - 0x30] */
    RECOMP_BACKEDGE();
    goto L_1101523A; /* 0x11015358: jmp 0x1101523a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1101535D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101535Du);

L_1101535D:
    PUSH32(esp, 0x34u); /* 0x1101535D: push 0x34 */
    eax = 0x1103D009u; /* 0x1101535F: mov eax, 0x1103d009 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11015364: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11015369: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1101536C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x14); /* 0x1101536E: mov ebx, dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x10); /* 0x11015371: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x30)) = eax; /* 0x11015374: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + 0xC); /* 0x11015377: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1101537A: mov dword ptr [ebp - 0x40], eax */
    eax = (uint32_t)MEM16(ebx); /* 0x1101537D: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x11015380: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015397; /* 0x11015383: je 0x11015397 */
L_11015385:
    ecx = eax; /* 0x11015385: mov ecx, eax */
L_11015387:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11015387: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101538D; /* 0x1101538A: jne 0x1101538d */
L_1101538C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1101538C: inc edi */
    _flag_k = FK_INC;
L_1101538D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1101538D: inc edx */
    _flag_k = FK_INC;
    ecx = (uint32_t)MEM16(ebx + edx * 2); /* 0x1101538E: movzx ecx, word ptr [ebx + edx*2] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x11015392: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015387; /* 0x11015395: jne 0x11015387 */
L_11015397:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x11015397: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1101539B: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x1101539E: push 0 */
    PUSH32(esp, edi); /* 0x110153A0: push edi */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x110153A1: mov dword ptr [ebp - 0x14], 0xf */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x110153A8: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_11014076); /* 0x110153AC: call 0x11014076 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110153B1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110153B5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x110153B7: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x3C)) = 0xFFFFFFFEu; /* 0x110153B8: mov dword ptr [ebp - 0x3c], 0xfffffffe */
    MEM32(ebp + (-0x34)) = ecx; /* 0x110153BF: mov dword ptr [ebp - 0x34], ecx */
L_110153C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110153C2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x29)) = (uint8_t)(0); /* 0x110153C4: mov byte ptr [ebp - 0x29], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110153C8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = edx; /* 0x110153CA: mov dword ptr [ebp - 0x38], edx */
    /* test edi, edi */ /* 0x110153CD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110153E9; /* 0x110153CF: jne 0x110153e9 */
L_110153D1:
    PUSH32(esp, 0); /* 0x110153D1: push 0 */
    PUSH32(esp, 1); /* 0x110153D3: push 1 */
    ecx = ebp + (-0x28); /* 0x110153D5: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x110153D8: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x3C)); /* 0x110153DD: mov eax, dword ptr [ebp - 0x3c] */
    RECOMP_CALL(sub_1103B354); /* 0x110153E0: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110153E5: ret  */
L_110153E6:
    ecx = MEM32(ebp + (-0x34)); /* 0x110153E6: mov ecx, dword ptr [ebp - 0x34] */
L_110153E9:
    eax = (uint32_t)MEM16(ebx + esi * 2); /* 0x110153E9: movzx eax, word ptr [ebx + esi*2] */
    /* test LO16(eax), LO16(eax) */ /* 0x110153ED: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015407; /* 0x110153F0: je 0x11015407 */
L_110153F2:
    ecx = (uint32_t)MEM16(ebx); /* 0x110153F2: movzx ecx, word ptr [ebx] */
L_110153F5:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x110153F5: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11015404; /* 0x110153F8: je 0x11015404 */
L_110153FA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110153FA: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM16(ebx + esi * 2); /* 0x110153FB: movzx eax, word ptr [ebx + esi*2] */
    /* test LO16(eax), LO16(eax) */ /* 0x110153FF: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110153F5; /* 0x11015402: jne 0x110153f5 */
L_11015404:
    ecx = MEM32(ebp + (-0x34)); /* 0x11015404: mov ecx, dword ptr [ebp - 0x34] */
L_11015407:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11015407: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101540B: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11015413; /* 0x1101540E: jae 0x11015413 */
L_11015410:
    eax = ebp + (-0x28); /* 0x11015410: lea eax, [ebp - 0x28] */
L_11015413:
    /* cmp MEM8(eax + edx), 0 */ /* 0x11015413: cmp byte ptr [eax + edx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101542D; /* 0x11015417: je 0x1101542d */
L_11015419:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11015419: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101541D: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11015425; /* 0x11015420: jae 0x11015425 */
L_11015422:
    eax = ebp + (-0x28); /* 0x11015422: lea eax, [ebp - 0x28] */
L_11015425:
    eax = (int32_t)(int8_t)MEM8(eax + edx); /* 0x11015425: movsx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x11015429: add esi, eax */
    _flag_k = FK_ADD;
    goto L_110154A6; /* 0x1101542B: jmp 0x110154a6 */
L_1101542D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1101542D: add esi, ecx */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ebx + esi * 2); /* 0x1101542F: movzx eax, word ptr [ebx + esi*2] */
    /* cmp LO16(eax), MEM16(ebx) */ /* 0x11015433: cmp ax, word ptr [ebx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101548C; /* 0x11015436: je 0x1101548c */
L_11015438:
    /* test LO16(eax), LO16(eax) */ /* 0x11015438: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101548C; /* 0x1101543B: je 0x1101548c */
L_1101543D:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x1101543D: push dword ptr [ebp - 0x40] */
    ecx = MEM32(ebp + (-0x30)); /* 0x11015440: mov ecx, dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_110278AC); /* 0x11015443: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11015448: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015470; /* 0x1101544A: jne 0x11015470 */
L_1101544C:
    ecx = MEM32(ebp + (-0x30)); /* 0x1101544C: mov ecx, dword ptr [ebp - 0x30] */
    /* cmp MEM8(ecx + 0x4), LO8(eax) */ /* 0x1101544F: cmp byte ptr [ecx + 4], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101545C; /* 0x11015452: jne 0x1101545c */
L_11015454:
    RECOMP_CALL(sub_11022515); /* 0x11015454: call 0x11022515 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x30)); /* 0x11015459: mov ecx, dword ptr [ebp - 0x30] */
L_1101545C:
    SET_LO16(eax, MEM16(ebx + esi * 2)); /* 0x1101545C: mov ax, word ptr [ebx + esi*2] */
    /* cmp LO16(eax), MEM16(ecx + 0x6) */ /* 0x11015460: cmp ax, word ptr [ecx + 6] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x6)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11015470; /* 0x11015464: jne 0x11015470 */
L_11015466:
    edx = MEM32(ebp + (-0x38)); /* 0x11015466: mov edx, dword ptr [ebp - 0x38] */
    SET_LO8(eax, 1); /* 0x11015469: mov al, 1 */
    MEM8(ebp + (-0x29)) = (uint8_t)(LO8(eax)); /* 0x1101546B: mov byte ptr [ebp - 0x29], al */
    goto L_110154AC; /* 0x1101546E: jmp 0x110154ac */
L_11015470:
    ecx = MEM32(ebp + (-0x34)); /* 0x11015470: mov ecx, dword ptr [ebp - 0x34] */
    /* cmp ecx, 0x7Fu */ /* 0x11015473: cmp ecx, 0x7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1101547B; /* 0x11015476: jb 0x1101547b */
L_11015478:
    PUSH32(esp, 0x7Fu); /* 0x11015478: push 0x7f */
    ecx = POP32_VAL(esp); /* 0x1101547A: pop ecx */
L_1101547B:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1101547B: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1101547F: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11015487; /* 0x11015482: jae 0x11015487 */
L_11015484:
    eax = ebp + (-0x28); /* 0x11015484: lea eax, [ebp - 0x28] */
L_11015487:
    edx = MEM32(ebp + (-0x38)); /* 0x11015487: mov edx, dword ptr [ebp - 0x38] */
    goto L_110154A3; /* 0x1101548A: jmp 0x110154a3 */
L_1101548C:
    /* cmp ecx, 0x7Fu */ /* 0x1101548C: cmp ecx, 0x7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11015494; /* 0x1101548F: jb 0x11015494 */
L_11015491:
    PUSH32(esp, 0x7Fu); /* 0x11015491: push 0x7f */
    ecx = POP32_VAL(esp); /* 0x11015493: pop ecx */
L_11015494:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11015494: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11015498: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110154A0; /* 0x1101549B: jae 0x110154a0 */
L_1101549D:
    eax = ebp + (-0x28); /* 0x1101549D: lea eax, [ebp - 0x28] */
L_110154A0:
    MEM32(ebp + (-0x3C)) = edx; /* 0x110154A0: mov dword ptr [ebp - 0x3c], edx */
L_110154A3:
    MEM8(eax + edx) = (uint8_t)(LO8(ecx)); /* 0x110154A3: mov byte ptr [eax + edx], cl */
L_110154A6:
    ecx = MEM32(ebp + (-0x30)); /* 0x110154A6: mov ecx, dword ptr [ebp - 0x30] */
    SET_LO8(eax, MEM8(ebp + (-0x29))); /* 0x110154A9: mov al, byte ptr [ebp - 0x29] */
L_110154AC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x110154AC: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = edx; /* 0x110154AD: mov dword ptr [ebp - 0x38], edx */
    /* cmp edx, edi */ /* 0x110154B0: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110153E6; /* 0x110154B2: jb 0x110153e6 */
L_110154B8:
    /* test LO8(eax), LO8(eax) */ /* 0x110154B8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110153D1; /* 0x110154BA: je 0x110153d1 */
L_110154C0:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x110154C0: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_110278AC); /* 0x110154C3: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110154C8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110153D1; /* 0x110154CA: jne 0x110153d1 */
L_110154D0:
    ecx = MEM32(ebp + (-0x30)); /* 0x110154D0: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) + 1; /* 0x110154D3: inc dword ptr [ebp - 0x34] */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_11021838); /* 0x110154D6: call 0x11021838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x3C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x3C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) | 0xFFFFFFFFu; /* 0x110154DB: or dword ptr [ebp - 0x3c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x34)); /* 0x110154DF: mov ecx, dword ptr [ebp - 0x34] */
    RECOMP_BACKEDGE();
    goto L_110153C2; /* 0x110154E2: jmp 0x110153c2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110154E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110154E7u);

L_110154E7:
    PUSH32(esp, ebp); /* 0x110154E7: push ebp */
    ebp = esp; /* 0x110154E8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x110154EA: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x110154ED: push ebx */
    PUSH32(esp, esi); /* 0x110154EE: push esi */
    eax = ebp + (-0x30); /* 0x110154EF: lea eax, [ebp - 0x30] */
    ebx = ecx; /* 0x110154F2: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x110154F4: push edi */
    PUSH32(esp, eax); /* 0x110154F5: push eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x110154F6: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_1102DA53); /* 0x110154F9: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110154FE: pop ecx */
    PUSH32(esp, 0xBu); /* 0x110154FF: push 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x11015501: add ebx, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11015504: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11015506: pop ecx */
    edi = ebx; /* 0x11015507: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x11015509: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x1101550B: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101550E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x11015510: push ebx */
    PUSH32(esp, edi); /* 0x11015511: push edi */
    RECOMP_CALL(sub_1100E139); /* 0x11015512: call 0x1100e139 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11015517: push eax */
    RECOMP_CALL(sub_110156AE); /* 0x11015518: call 0x110156ae */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x1101551D: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11015520: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x11015523: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x11015526: push ebx */
    PUSH32(esp, edi); /* 0x11015527: push edi */
    MEM32(esi + 0x8) = eax; /* 0x11015528: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_1100E174); /* 0x1101552B: call 0x1100e174 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11015530: push eax */
    RECOMP_CALL(sub_110156AE); /* 0x11015531: call 0x110156ae */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11015536: push ebx */
    PUSH32(esp, edi); /* 0x11015537: push edi */
    PUSH32(esp, 0x110023CCu); /* 0x11015538: push 0x110023cc */
    MEM32(esi + 0xC) = eax; /* 0x1101553D: mov dword ptr [esi + 0xc], eax */
    RECOMP_CALL(sub_110156AE); /* 0x11015540: call 0x110156ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11015545: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = eax; /* 0x11015548: mov dword ptr [esi + 0x10], eax */
    edi = POP32_VAL(esp); /* 0x1101554B: pop edi */
    esi = POP32_VAL(esp); /* 0x1101554C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1101554D: pop ebx */
    esp = ebp; /* 0x1101554E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11015550: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11015551: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11015554(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015554u);

L_11015554:
    PUSH32(esp, ebp); /* 0x11015554: push ebp */
    ebp = esp; /* 0x11015555: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x11015557: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1101555A: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1101555F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11015561: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x11015564: push ebx */
    PUSH32(esp, esi); /* 0x11015565: push esi */
    PUSH32(esp, edi); /* 0x11015566: push edi */
    PUSH32(esp, 0xBu); /* 0x11015567: push 0xb */
    ebx = ecx; /* 0x11015569: mov ebx, ecx */
    esi = ebp + 0x10; /* 0x1101556B: lea esi, [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x1101556E: pop ecx */
    edi = ebp + (-0x30); /* 0x1101556F: lea edi, [ebp - 0x30] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x11015572: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0xC); /* 0x11015574: mov esi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x30); /* 0x11015577: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101557A: push eax */
    PUSH32(esp, 0); /* 0x1101557B: push 0 */
    eax = MEM32(esi); /* 0x1101557D: mov eax, dword ptr [esi] */
    eax = (uint32_t)MEM8(eax); /* 0x1101557F: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x11015582: push eax */
    RECOMP_CALL(sub_11015680); /* 0x11015583: call 0x11015680 */
    RECOMP_FLAGS_IN();
    MEM16(ebx + 0xC) = (uint16_t)(LO16(eax)); /* 0x11015588: mov word ptr [ebx + 0xc], ax */
    eax = ebp + (-0x30); /* 0x1101558C: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1101558F: push eax */
    eax = MEM32(esi + 0x4); /* 0x11015590: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 0); /* 0x11015593: push 0 */
    eax = (uint32_t)MEM8(eax); /* 0x11015595: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x11015598: push eax */
    RECOMP_CALL(sub_11015680); /* 0x11015599: call 0x11015680 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1101559E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x110155A1: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM16(ebx + 0xE) = (uint16_t)(LO16(eax)); /* 0x110155A4: mov word ptr [ebx + 0xe], ax */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x110155A8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x110155AA: pop edi */
    esi = POP32_VAL(esp); /* 0x110155AB: pop esi */
    ebx = POP32_VAL(esp); /* 0x110155AC: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x110155AD: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110155B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110155B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 56; { RECOMP_REGS_OUT(); return; } /* 0x110155B5: ret 0x34 */
    RECOMP_REGS_OUT();
}

void sub_110155B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110155B8u);

L_110155B8:
    PUSH32(esp, ebp); /* 0x110155B8: push ebp */
    ebp = esp; /* 0x110155B9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x110155BB: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x110155BE: push ebx */
    PUSH32(esp, esi); /* 0x110155BF: push esi */
    eax = ebp + (-0x30); /* 0x110155C0: lea eax, [ebp - 0x30] */
    ebx = ecx; /* 0x110155C3: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x110155C5: push edi */
    PUSH32(esp, eax); /* 0x110155C6: push eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x110155C7: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_1102DA53); /* 0x110155CA: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110155CF: pop ecx */
    PUSH32(esp, 0xBu); /* 0x110155D0: push 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x110155D2: add ebx, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x110155D5: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110155D7: pop ecx */
    edi = ebx; /* 0x110155D8: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x110155DA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x110155DC: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110155DF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x110155E1: push ebx */
    PUSH32(esp, edi); /* 0x110155E2: push edi */
    RECOMP_CALL(sub_1100E139); /* 0x110155E3: call 0x1100e139 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110155E8: push eax */
    RECOMP_CALL(sub_110156DC); /* 0x110155E9: call 0x110156dc */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x110155EE: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110155F1: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x110155F4: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x110155F7: push ebx */
    PUSH32(esp, edi); /* 0x110155F8: push edi */
    MEM32(esi + 0x8) = eax; /* 0x110155F9: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_1100E174); /* 0x110155FC: call 0x1100e174 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11015601: push eax */
    RECOMP_CALL(sub_110156DC); /* 0x11015602: call 0x110156dc */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11015607: push ebx */
    PUSH32(esp, edi); /* 0x11015608: push edi */
    PUSH32(esp, 0x110023CCu); /* 0x11015609: push 0x110023cc */
    MEM32(esi + 0xC) = eax; /* 0x1101560E: mov dword ptr [esi + 0xc], eax */
    RECOMP_CALL(sub_110156DC); /* 0x11015611: call 0x110156dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11015616: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = eax; /* 0x11015619: mov dword ptr [esi + 0x10], eax */
    edi = POP32_VAL(esp); /* 0x1101561C: pop edi */
    esi = POP32_VAL(esp); /* 0x1101561D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1101561E: pop ebx */
    esp = ebp; /* 0x1101561F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11015621: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11015622: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11015625(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015625u);

L_11015625:
    PUSH32(esp, ebp); /* 0x11015625: push ebp */
    ebp = esp; /* 0x11015626: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x11015628: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = ebp + (-0x2C); /* 0x1101562B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x1101562E: push ebx */
    PUSH32(esp, esi); /* 0x1101562F: push esi */
    PUSH32(esp, edi); /* 0x11015630: push edi */
    PUSH32(esp, eax); /* 0x11015631: push eax */
    ebx = ecx; /* 0x11015632: mov ebx, ecx */
    RECOMP_CALL(sub_1102DA53); /* 0x11015634: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015639: pop ecx */
    PUSH32(esp, 0xBu); /* 0x1101563A: push 0xb */
    ecx = POP32_VAL(esp); /* 0x1101563C: pop ecx */
    esi = eax; /* 0x1101563D: mov esi, eax */
    edi = ebx + 0x18; /* 0x1101563F: lea edi, [ebx + 0x18] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x11015642: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x11015644: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E1D4); /* 0x11015647: call 0x1100e1d4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101564C: push eax */
    RECOMP_CALL(sub_110224B2); /* 0x1101564D: call 0x110224b2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015652: pop ecx */
    ecx = MEM32(ebp + 0xC); /* 0x11015653: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebx + 0x8) = eax; /* 0x11015656: mov dword ptr [ebx + 8], eax */
    RECOMP_CALL(sub_1100E20F); /* 0x11015659: call 0x1100e20f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101565E: push eax */
    RECOMP_CALL(sub_110224B2); /* 0x1101565F: call 0x110224b2 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0xC) = eax; /* 0x11015664: mov dword ptr [ebx + 0xc], eax */
    MEM32(esp) = 0x11002384u; /* 0x11015667: mov dword ptr [esp], 0x11002384 */
    RECOMP_CALL(sub_110224B2); /* 0x1101566E: call 0x110224b2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015673: pop ecx */
    edi = POP32_VAL(esp); /* 0x11015674: pop edi */
    esi = POP32_VAL(esp); /* 0x11015675: pop esi */
    MEM32(ebx + 0x10) = eax; /* 0x11015676: mov dword ptr [ebx + 0x10], eax */
    ebx = POP32_VAL(esp); /* 0x11015679: pop ebx */
    esp = ebp; /* 0x1101567A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1101567C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101567D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11015680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015680u);

L_11015680:
    PUSH32(esp, ebp); /* 0x11015680: push ebp */
    ebp = esp; /* 0x11015681: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11015683: push ecx */
    PUSH32(esp, ecx); /* 0x11015684: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11015685: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11015688: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x8); /* 0x1101568C: lea eax, [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1101568F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11015693: push eax */
    PUSH32(esp, 1); /* 0x11015694: push 1 */
    eax = ebp + 0x8; /* 0x11015696: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11015699: push eax */
    eax = ebp + (-0x4); /* 0x1101569A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1101569D: push eax */
    RECOMP_CALL(sub_1102D797); /* 0x1101569E: call 0x1102d797 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x110156A3: mov ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x110156A7: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x110156AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110156AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110156AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_110156AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110156AEu);

L_110156AE:
    PUSH32(esp, ebp); /* 0x110156AE: push ebp */
    ebp = esp; /* 0x110156AF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110156B1: push esi */
    PUSH32(esp, edi); /* 0x110156B2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110156B3: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x110156B6: push edi */
    RECOMP_CALL(sub_1103B306); /* 0x110156B7: call 0x1103b306 */
    RECOMP_FLAGS_IN();
    esi = eax + 0x1; /* 0x110156BC: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x110156BF: push esi */
    RECOMP_CALL(sub_110306E8); /* 0x110156C0: call 0x110306e8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110156C5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110156C6: pop ecx */
    /* test esi, esi */ /* 0x110156C7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110156D8; /* 0x110156C9: je 0x110156d8 */
L_110156CB:
    edx = eax; /* 0x110156CB: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x110156CD: sub edx, edi */
    _flag_k = FK_CMP;
L_110156CF:
    SET_LO8(ecx, MEM8(edi)); /* 0x110156CF: mov cl, byte ptr [edi] */
    MEM8(edx + edi) = (uint8_t)(LO8(ecx)); /* 0x110156D1: mov byte ptr [edx + edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110156D4: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x110156D5: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_110156CF; /* 0x110156D6: jne 0x110156cf */
L_110156D8:
    edi = POP32_VAL(esp); /* 0x110156D8: pop edi */
    esi = POP32_VAL(esp); /* 0x110156D9: pop esi */
    ebp = POP32_VAL(esp); /* 0x110156DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110156DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_110156DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110156DCu);

L_110156DC:
    PUSH32(esp, ebp); /* 0x110156DC: push ebp */
    ebp = esp; /* 0x110156DD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x110156DF: sub esp, 0x14 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x110156E2: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x110156E6: push ebx */
    PUSH32(esp, esi); /* 0x110156E7: push esi */
    PUSH32(esp, edi); /* 0x110156E8: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110156E9: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x110156EC: push edi */
    RECOMP_CALL(sub_1103B306); /* 0x110156ED: call 0x1103b306 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110156F2: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110156F3: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x110156F4: push 0 */
    MEM32(ebp + (-0x14)) = eax; /* 0x110156F6: mov dword ptr [ebp - 0x14], eax */
    ebx = eax; /* 0x110156F9: mov ebx, eax */
    esi = POP32_VAL(esp); /* 0x110156FB: pop esi */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_11015721; /* 0x110156FC: je 0x11015721 */
L_110156FE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110156FE: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xC); /* 0x11015701: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x11015704: push eax */
    PUSH32(esp, ebx); /* 0x11015705: push ebx */
    eax = ebp + (-0x4); /* 0x11015706: lea eax, [ebp - 4] */
    PUSH32(esp, edi); /* 0x11015709: push edi */
    PUSH32(esp, eax); /* 0x1101570A: push eax */
    RECOMP_CALL(sub_1102D797); /* 0x1101570B: call 0x1102d797 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11015710: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11015713: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1101571E; /* 0x11015715: jle 0x1101571e */
L_11015717:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x11015717: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11015719: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1101571A: sub ebx, eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_110156FE; /* 0x1101571C: jne 0x110156fe */
L_1101571E:
    edi = MEM32(ebp + 0x8); /* 0x1101571E: mov edi, dword ptr [ebp + 8] */
L_11015721:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11015721: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11015722: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x11015724: push 2 */
    edx = POP32_VAL(esp); /* 0x11015726: pop edx */
    eax = esi; /* 0x11015727: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x11015729: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1101572B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1101572E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x11015730: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x11015732: push ecx */
    RECOMP_CALL(sub_110306E8); /* 0x11015733: call 0x110306e8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x11015738: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x1101573C: mov ebx, eax */
    MEM32(ebp + 0x8) = eax; /* 0x1101573E: mov dword ptr [ebp + 8], eax */
    ecx = POP32_VAL(esp); /* 0x11015741: pop ecx */
    /* test esi, esi */ /* 0x11015742: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015769; /* 0x11015744: je 0x11015769 */
L_11015746:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11015746: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x10); /* 0x11015749: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1101574C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1101574D: push dword ptr [ebp - 0x14] */
    PUSH32(esp, edi); /* 0x11015750: push edi */
    PUSH32(esp, ebx); /* 0x11015751: push ebx */
    RECOMP_CALL(sub_1102D797); /* 0x11015752: call 0x1102d797 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11015757: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1101575A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11015766; /* 0x1101575C: jle 0x11015766 */
L_1101575E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1101575E: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x11015760: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11015763: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11015746; /* 0x11015764: jne 0x11015746 */
L_11015766:
    eax = MEM32(ebp + 0x8); /* 0x11015766: mov eax, dword ptr [ebp + 8] */
L_11015769:
    edi = POP32_VAL(esp); /* 0x11015769: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1101576A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1101576C: pop esi */
    MEM16(ebx) = (uint16_t)(LO16(ecx)); /* 0x1101576D: mov word ptr [ebx], cx */
    ebx = POP32_VAL(esp); /* 0x11015770: pop ebx */
    esp = ebp; /* 0x11015771: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11015773: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11015774: ret  */
    RECOMP_REGS_OUT();
}

void sub_11015775(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015775u);

L_11015775:
    PUSH32(esp, ebp); /* 0x11015775: push ebp */
    ebp = esp; /* 0x11015776: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11015778: push ecx */
    PUSH32(esp, ecx); /* 0x11015779: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1101577A: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x8); /* 0x1101577D: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11015780: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11015783: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11015786: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11015789: push eax */
    RECOMP_CALL(sub_11014F52); /* 0x1101578A: call 0x11014f52 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1101578F: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11015792: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x11015795: mov ecx, dword ptr [eax] */
    MEM32(edx) = ecx; /* 0x11015797: mov dword ptr [edx], ecx */
    ecx = MEM32(eax + 0x4); /* 0x11015799: mov ecx, dword ptr [eax + 4] */
    eax = edx; /* 0x1101579C: mov eax, edx */
    MEM32(edx + 0x4) = ecx; /* 0x1101579E: mov dword ptr [edx + 4], ecx */
    esp = ebp; /* 0x110157A1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110157A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110157A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_110157A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110157A5u);

L_110157A5:
    PUSH32(esp, ebp); /* 0x110157A5: push ebp */
    ebp = esp; /* 0x110157A6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110157A8: push ecx */
    PUSH32(esp, ecx); /* 0x110157A9: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110157AA: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x8); /* 0x110157AD: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110157B0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110157B3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110157B6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110157B9: push eax */
    RECOMP_CALL(sub_11014FB4); /* 0x110157BA: call 0x11014fb4 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x110157BF: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x110157C2: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x110157C5: mov ecx, dword ptr [eax] */
    MEM32(edx) = ecx; /* 0x110157C7: mov dword ptr [edx], ecx */
    ecx = MEM32(eax + 0x4); /* 0x110157C9: mov ecx, dword ptr [eax + 4] */
    eax = edx; /* 0x110157CC: mov eax, edx */
    MEM32(edx + 0x4) = ecx; /* 0x110157CE: mov dword ptr [edx + 4], ecx */
    esp = ebp; /* 0x110157D1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110157D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110157D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_110157D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110157D5u);

L_110157D5:
    PUSH32(esp, 0x14u); /* 0x110157D5: push 0x14 */
    eax = 0x1103EFF4u; /* 0x110157D7: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x110157DC: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110157E1: push 0 */
    ecx = ebp + (-0x14); /* 0x110157E3: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x110157E6: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11066284); /* 0x110157EB: mov edi, dword ptr [0x11066284] */
    ecx = 0x110661F0u; /* 0x110157F1: mov ecx, 0x110661f0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110157F6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x110157FA: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x110157FD: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11015802: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11015805: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11015806: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101580B: mov esi, eax */
    /* test esi, esi */ /* 0x1101580D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101585F; /* 0x1101580F: jne 0x1101585f */
L_11015811:
    /* test edi, edi */ /* 0x11015811: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015819; /* 0x11015813: je 0x11015819 */
L_11015815:
    esi = edi; /* 0x11015815: mov esi, edi */
    goto L_1101585F; /* 0x11015817: jmp 0x1101585f */
L_11015819:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11015819: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x1101581C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1101581F: push eax */
    RECOMP_CALL(sub_1101DB97); /* 0x11015820: call 0x1101db97 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015825: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11015826: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11015827: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11015848; /* 0x1101582A: jne 0x11015848 */
L_1101582C:
    PUSH32(esp, 0x11004970u); /* 0x1101582C: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11015831: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11015834: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x1101583A: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x1101583F: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11015842: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11015843: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11015848:
    esi = MEM32(ebp + (-0x10)); /* 0x11015848: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x1101584B: mov ecx, esi */
    MEM32(0x11066284) = esi; /* 0x1101584D: mov dword ptr [0x11066284], esi */
    eax = MEM32(esi); /* 0x11015853: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11015855: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11015858: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11015859: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101585E: pop ecx */
L_1101585F:
    ecx = ebp + (-0x14); /* 0x1101585F: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11015862: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015867: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015869: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101586E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101586F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101586Fu);

L_1101586F:
    PUSH32(esp, 0x14u); /* 0x1101586F: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11015871: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11015876: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1101587B: push 0 */
    ecx = ebp + (-0x14); /* 0x1101587D: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11015880: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x1106628C); /* 0x11015885: mov edi, dword ptr [0x1106628c] */
    ecx = 0x11066204u; /* 0x1101588B: mov ecx, 0x11066204 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11015890: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11015894: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11015897: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1101589C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1101589F: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x110158A0: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110158A5: mov esi, eax */
    /* test esi, esi */ /* 0x110158A7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110158F9; /* 0x110158A9: jne 0x110158f9 */
L_110158AB:
    /* test edi, edi */ /* 0x110158AB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110158B3; /* 0x110158AD: je 0x110158b3 */
L_110158AF:
    esi = edi; /* 0x110158AF: mov esi, edi */
    goto L_110158F9; /* 0x110158B1: jmp 0x110158f9 */
L_110158B3:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110158B3: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x110158B6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110158B9: push eax */
    RECOMP_CALL(sub_1101DBFF); /* 0x110158BA: call 0x1101dbff */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110158BF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110158C0: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110158C1: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110158E2; /* 0x110158C4: jne 0x110158e2 */
L_110158C6:
    PUSH32(esp, 0x11004970u); /* 0x110158C6: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x110158CB: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x110158CE: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x110158D4: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x110158D9: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x110158DC: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x110158DD: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_110158E2:
    esi = MEM32(ebp + (-0x10)); /* 0x110158E2: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x110158E5: mov ecx, esi */
    MEM32(0x1106628C) = esi; /* 0x110158E7: mov dword ptr [0x1106628c], esi */
    eax = MEM32(esi); /* 0x110158ED: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110158EF: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110158F2: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x110158F3: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110158F8: pop ecx */
L_110158F9:
    ecx = ebp + (-0x14); /* 0x110158F9: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x110158FC: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015901: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015903: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11015908: ret  */
    RECOMP_REGS_OUT();
}

void sub_11015909(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015909u);

L_11015909:
    PUSH32(esp, 0x14u); /* 0x11015909: push 0x14 */
    eax = 0x1103EFF4u; /* 0x1101590B: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11015910: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11015915: push 0 */
    ecx = ebp + (-0x14); /* 0x11015917: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x1101591A: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11066288); /* 0x1101591F: mov edi, dword ptr [0x11066288] */
    ecx = 0x110661F8u; /* 0x11015925: mov ecx, 0x110661f8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101592A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x1101592E: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11015931: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11015936: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11015939: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x1101593A: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1101593F: mov esi, eax */
    /* test esi, esi */ /* 0x11015941: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015993; /* 0x11015943: jne 0x11015993 */
L_11015945:
    /* test edi, edi */ /* 0x11015945: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101594D; /* 0x11015947: je 0x1101594d */
L_11015949:
    esi = edi; /* 0x11015949: mov esi, edi */
    goto L_11015993; /* 0x1101594B: jmp 0x11015993 */
L_1101594D:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101594D: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11015950: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11015953: push eax */
    RECOMP_CALL(sub_1101DC67); /* 0x11015954: call 0x1101dc67 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015959: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1101595A: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1101595B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101597C; /* 0x1101595E: jne 0x1101597c */
L_11015960:
    PUSH32(esp, 0x11004970u); /* 0x11015960: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11015965: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11015968: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x1101596E: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11015973: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11015976: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11015977: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1101597C:
    esi = MEM32(ebp + (-0x10)); /* 0x1101597C: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x1101597F: mov ecx, esi */
    MEM32(0x11066288) = esi; /* 0x11015981: mov dword ptr [0x11066288], esi */
    eax = MEM32(esi); /* 0x11015987: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11015989: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1101598C: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x1101598D: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015992: pop ecx */
L_11015993:
    ecx = ebp + (-0x14); /* 0x11015993: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11015996: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101599B: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101599D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110159A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_110159A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110159A3u);

L_110159A3:
    PUSH32(esp, 0x14u); /* 0x110159A3: push 0x14 */
    eax = 0x1103EFF4u; /* 0x110159A5: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x110159AA: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110159AF: push 0 */
    ecx = ebp + (-0x14); /* 0x110159B1: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x110159B4: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11066278); /* 0x110159B9: mov edi, dword ptr [0x11066278] */
    ecx = 0x110661F4u; /* 0x110159BF: mov ecx, 0x110661f4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110159C4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x110159C8: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x110159CB: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x110159D0: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x110159D3: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x110159D4: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110159D9: mov esi, eax */
    /* test esi, esi */ /* 0x110159DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015A2D; /* 0x110159DD: jne 0x11015a2d */
L_110159DF:
    /* test edi, edi */ /* 0x110159DF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110159E7; /* 0x110159E1: je 0x110159e7 */
L_110159E3:
    esi = edi; /* 0x110159E3: mov esi, edi */
    goto L_11015A2D; /* 0x110159E5: jmp 0x11015a2d */
L_110159E7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110159E7: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x110159EA: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110159ED: push eax */
    RECOMP_CALL(sub_1101DCCF); /* 0x110159EE: call 0x1101dccf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110159F3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110159F4: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110159F5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11015A16; /* 0x110159F8: jne 0x11015a16 */
L_110159FA:
    PUSH32(esp, 0x11004970u); /* 0x110159FA: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x110159FF: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11015A02: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11015A08: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11015A0D: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11015A10: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11015A11: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11015A16:
    esi = MEM32(ebp + (-0x10)); /* 0x11015A16: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11015A19: mov ecx, esi */
    MEM32(0x11066278) = esi; /* 0x11015A1B: mov dword ptr [0x11066278], esi */
    eax = MEM32(esi); /* 0x11015A21: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11015A23: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11015A26: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11015A27: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015A2C: pop ecx */
L_11015A2D:
    ecx = ebp + (-0x14); /* 0x11015A2D: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11015A30: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015A35: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015A37: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11015A3C: ret  */
    RECOMP_REGS_OUT();
}

void sub_11015A3D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015A3Du);

L_11015A3D:
    PUSH32(esp, 0x14u); /* 0x11015A3D: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11015A3F: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11015A44: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11015A49: push 0 */
    ecx = ebp + (-0x14); /* 0x11015A4B: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11015A4E: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11066280); /* 0x11015A53: mov edi, dword ptr [0x11066280] */
    ecx = 0x11066208u; /* 0x11015A59: mov ecx, 0x11066208 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11015A5E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11015A62: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11015A65: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11015A6A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11015A6D: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11015A6E: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11015A73: mov esi, eax */
    /* test esi, esi */ /* 0x11015A75: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015AC7; /* 0x11015A77: jne 0x11015ac7 */
L_11015A79:
    /* test edi, edi */ /* 0x11015A79: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015A81; /* 0x11015A7B: je 0x11015a81 */
L_11015A7D:
    esi = edi; /* 0x11015A7D: mov esi, edi */
    goto L_11015AC7; /* 0x11015A7F: jmp 0x11015ac7 */
L_11015A81:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11015A81: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11015A84: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11015A87: push eax */
    RECOMP_CALL(sub_1101DD37); /* 0x11015A88: call 0x1101dd37 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015A8D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11015A8E: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11015A8F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11015AB0; /* 0x11015A92: jne 0x11015ab0 */
L_11015A94:
    PUSH32(esp, 0x11004970u); /* 0x11015A94: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11015A99: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11015A9C: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11015AA2: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11015AA7: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11015AAA: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11015AAB: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11015AB0:
    esi = MEM32(ebp + (-0x10)); /* 0x11015AB0: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11015AB3: mov ecx, esi */
    MEM32(0x11066280) = esi; /* 0x11015AB5: mov dword ptr [0x11066280], esi */
    eax = MEM32(esi); /* 0x11015ABB: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11015ABD: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11015AC0: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11015AC1: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015AC6: pop ecx */
L_11015AC7:
    ecx = ebp + (-0x14); /* 0x11015AC7: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11015ACA: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015ACF: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015AD1: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11015AD6: ret  */
    RECOMP_REGS_OUT();
}

void sub_11015AD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015AD7u);

L_11015AD7:
    PUSH32(esp, 0x14u); /* 0x11015AD7: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11015AD9: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11015ADE: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11015AE3: push 0 */
    ecx = ebp + (-0x14); /* 0x11015AE5: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11015AE8: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x1106627C); /* 0x11015AED: mov edi, dword ptr [0x1106627c] */
    ecx = 0x110661FCu; /* 0x11015AF3: mov ecx, 0x110661fc */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11015AF8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11015AFC: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11015AFF: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11015B04: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11015B07: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11015B08: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11015B0D: mov esi, eax */
    /* test esi, esi */ /* 0x11015B0F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015B61; /* 0x11015B11: jne 0x11015b61 */
L_11015B13:
    /* test edi, edi */ /* 0x11015B13: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015B1B; /* 0x11015B15: je 0x11015b1b */
L_11015B17:
    esi = edi; /* 0x11015B17: mov esi, edi */
    goto L_11015B61; /* 0x11015B19: jmp 0x11015b61 */
L_11015B1B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11015B1B: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11015B1E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11015B21: push eax */
    RECOMP_CALL(sub_1101DD9F); /* 0x11015B22: call 0x1101dd9f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015B27: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11015B28: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11015B29: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11015B4A; /* 0x11015B2C: jne 0x11015b4a */
L_11015B2E:
    PUSH32(esp, 0x11004970u); /* 0x11015B2E: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11015B33: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11015B36: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11015B3C: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11015B41: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11015B44: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11015B45: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11015B4A:
    esi = MEM32(ebp + (-0x10)); /* 0x11015B4A: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11015B4D: mov ecx, esi */
    MEM32(0x1106627C) = esi; /* 0x11015B4F: mov dword ptr [0x1106627c], esi */
    eax = MEM32(esi); /* 0x11015B55: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11015B57: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11015B5A: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11015B5B: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015B60: pop ecx */
L_11015B61:
    ecx = ebp + (-0x14); /* 0x11015B61: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11015B64: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015B69: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015B6B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11015B70: ret  */
    RECOMP_REGS_OUT();
}

void sub_11015B71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015B71u);

L_11015B71:
    PUSH32(esp, 0x14u); /* 0x11015B71: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11015B73: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11015B78: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11015B7D: push 0 */
    ecx = ebp + (-0x14); /* 0x11015B7F: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11015B82: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x1106626C); /* 0x11015B87: mov edi, dword ptr [0x1106626c] */
    ecx = 0x11065F10u; /* 0x11015B8D: mov ecx, 0x11065f10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11015B92: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11015B96: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11015B99: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11015B9E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11015BA1: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11015BA2: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11015BA7: mov esi, eax */
    /* test esi, esi */ /* 0x11015BA9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015BFB; /* 0x11015BAB: jne 0x11015bfb */
L_11015BAD:
    /* test edi, edi */ /* 0x11015BAD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015BB5; /* 0x11015BAF: je 0x11015bb5 */
L_11015BB1:
    esi = edi; /* 0x11015BB1: mov esi, edi */
    goto L_11015BFB; /* 0x11015BB3: jmp 0x11015bfb */
L_11015BB5:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11015BB5: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11015BB8: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11015BBB: push eax */
    RECOMP_CALL(sub_1101DE07); /* 0x11015BBC: call 0x1101de07 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015BC1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11015BC2: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11015BC3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11015BE4; /* 0x11015BC6: jne 0x11015be4 */
L_11015BC8:
    PUSH32(esp, 0x11004970u); /* 0x11015BC8: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11015BCD: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11015BD0: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11015BD6: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11015BDB: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11015BDE: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11015BDF: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11015BE4:
    esi = MEM32(ebp + (-0x10)); /* 0x11015BE4: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11015BE7: mov ecx, esi */
    MEM32(0x1106626C) = esi; /* 0x11015BE9: mov dword ptr [0x1106626c], esi */
    eax = MEM32(esi); /* 0x11015BEF: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11015BF1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11015BF4: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11015BF5: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015BFA: pop ecx */
L_11015BFB:
    ecx = ebp + (-0x14); /* 0x11015BFB: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11015BFE: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015C03: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015C05: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11015C0A: ret  */
    RECOMP_REGS_OUT();
}

void sub_11015C0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015C0Bu);

L_11015C0B:
    PUSH32(esp, 0x14u); /* 0x11015C0B: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11015C0D: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11015C12: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11015C17: push 0 */
    ecx = ebp + (-0x14); /* 0x11015C19: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11015C1C: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11066274); /* 0x11015C21: mov edi, dword ptr [0x11066274] */
    ecx = 0x11066200u; /* 0x11015C27: mov ecx, 0x11066200 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11015C2C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11015C30: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11015C33: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11015C38: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11015C3B: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11015C3C: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11015C41: mov esi, eax */
    /* test esi, esi */ /* 0x11015C43: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015C95; /* 0x11015C45: jne 0x11015c95 */
L_11015C47:
    /* test edi, edi */ /* 0x11015C47: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015C4F; /* 0x11015C49: je 0x11015c4f */
L_11015C4B:
    esi = edi; /* 0x11015C4B: mov esi, edi */
    goto L_11015C95; /* 0x11015C4D: jmp 0x11015c95 */
L_11015C4F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11015C4F: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11015C52: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11015C55: push eax */
    RECOMP_CALL(sub_1101DE82); /* 0x11015C56: call 0x1101de82 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015C5B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11015C5C: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11015C5D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11015C7E; /* 0x11015C60: jne 0x11015c7e */
L_11015C62:
    PUSH32(esp, 0x11004970u); /* 0x11015C62: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11015C67: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11015C6A: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11015C70: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11015C75: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11015C78: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11015C79: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11015C7E:
    esi = MEM32(ebp + (-0x10)); /* 0x11015C7E: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11015C81: mov ecx, esi */
    MEM32(0x11066274) = esi; /* 0x11015C83: mov dword ptr [0x11066274], esi */
    eax = MEM32(esi); /* 0x11015C89: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11015C8B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11015C8E: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11015C8F: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015C94: pop ecx */
L_11015C95:
    ecx = ebp + (-0x14); /* 0x11015C95: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11015C98: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015C9D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015C9F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11015CA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_11015CA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015CA5u);

L_11015CA5:
    PUSH32(esp, 0x14u); /* 0x11015CA5: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11015CA7: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11015CAC: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11015CB1: push 0 */
    ecx = ebp + (-0x14); /* 0x11015CB3: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11015CB6: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11066270); /* 0x11015CBB: mov edi, dword ptr [0x11066270] */
    ecx = 0x11065F14u; /* 0x11015CC1: mov ecx, 0x11065f14 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11015CC6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11015CCA: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11015CCD: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11015CD2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11015CD5: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11015CD6: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11015CDB: mov esi, eax */
    /* test esi, esi */ /* 0x11015CDD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11015D2F; /* 0x11015CDF: jne 0x11015d2f */
L_11015CE1:
    /* test edi, edi */ /* 0x11015CE1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11015CE9; /* 0x11015CE3: je 0x11015ce9 */
L_11015CE5:
    esi = edi; /* 0x11015CE5: mov esi, edi */
    goto L_11015D2F; /* 0x11015CE7: jmp 0x11015d2f */
L_11015CE9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11015CE9: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11015CEC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11015CEF: push eax */
    RECOMP_CALL(sub_1101DEFD); /* 0x11015CF0: call 0x1101defd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015CF5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11015CF6: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11015CF7: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11015D18; /* 0x11015CFA: jne 0x11015d18 */
L_11015CFC:
    PUSH32(esp, 0x11004970u); /* 0x11015CFC: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11015D01: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11015D04: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11015D0A: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11015D0F: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11015D12: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11015D13: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11015D18:
    esi = MEM32(ebp + (-0x10)); /* 0x11015D18: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11015D1B: mov ecx, esi */
    MEM32(0x11066270) = esi; /* 0x11015D1D: mov dword ptr [0x11066270], esi */
    eax = MEM32(esi); /* 0x11015D23: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11015D25: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11015D28: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11015D29: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11015D2E: pop ecx */
L_11015D2F:
    ecx = ebp + (-0x14); /* 0x11015D2F: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11015D32: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015D37: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015D39: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11015D3E: ret  */
    RECOMP_REGS_OUT();
}

void sub_11015D3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015D3Fu);

L_11015D3F:
    PUSH32(esp, ebp); /* 0x11015D3F: push ebp */
    ebp = esp; /* 0x11015D40: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11015D42: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11015D45: push esi */
    esi = ecx; /* 0x11015D46: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x11015D48: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x11015D4B: mov byte ptr [esi + 4], 0 */
    PUSH32(esp, MEM32(eax)); /* 0x11015D4F: push dword ptr [eax] */
    RECOMP_CALL(sub_11010213); /* 0x11015D51: call 0x11010213 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015D56: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11015D58: pop esi */
    ebp = POP32_VAL(esp); /* 0x11015D59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11015D5A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11015D5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015D5Du);

L_11015D5D:
    PUSH32(esp, 4); /* 0x11015D5D: push 4 */
    eax = 0x1103D036u; /* 0x11015D5F: mov eax, 0x1103d036 */
    RECOMP_CALL(sub_1103B372); /* 0x11015D64: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11015D69: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11015D6B: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11015D6E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11015D72: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11015D74: push dword ptr [ebp + 8] */
    MEM32(esi) = 0x11001C24u; /* 0x11015D77: mov dword ptr [esi], 0x11001c24 */
    RECOMP_CALL(sub_110141A4); /* 0x11015D7D: call 0x110141a4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015D82: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015D84: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11015D89: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11015D8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015D8Cu);

L_11015D8C:
    MEM32(ecx) = 0x11002138u; /* 0x11015D8C: mov dword ptr [ecx], 0x11002138 */
    eax = ecx; /* 0x11015D92: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11015D94: ret  */
    RECOMP_REGS_OUT();
}

void sub_11015D95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015D95u);

L_11015D95:
    PUSH32(esp, 4); /* 0x11015D95: push 4 */
    eax = 0x1103D036u; /* 0x11015D97: mov eax, 0x1103d036 */
    RECOMP_CALL(sub_1103B372); /* 0x11015D9C: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11015DA1: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11015DA3: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11015DA6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11015DAA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11015DAC: push dword ptr [ebp + 8] */
    MEM32(esi) = 0x11002138u; /* 0x11015DAF: mov dword ptr [esi], 0x11002138 */
    RECOMP_CALL(sub_11029718); /* 0x11015DB5: call 0x11029718 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015DBA: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015DBC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11015DC1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11015DC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015DC4u);

L_11015DC4:
    MEM32(ecx) = 0x11002130u; /* 0x11015DC4: mov dword ptr [ecx], 0x11002130 */
    eax = ecx; /* 0x11015DCA: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11015DCC: ret  */
    RECOMP_REGS_OUT();
}

void sub_11015DCD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015DCDu);

L_11015DCD:
    PUSH32(esp, 4); /* 0x11015DCD: push 4 */
    eax = 0x1103D036u; /* 0x11015DCF: mov eax, 0x1103d036 */
    RECOMP_CALL(sub_1103B372); /* 0x11015DD4: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11015DD9: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11015DDB: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11015DDE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11015DE2: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11015DE4: push dword ptr [ebp + 8] */
    MEM32(esi) = 0x11002130u; /* 0x11015DE7: mov dword ptr [esi], 0x11002130 */
    RECOMP_CALL(sub_11029762); /* 0x11015DED: call 0x11029762 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11015DF2: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015DF4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11015DF9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11015DFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015DFCu);

L_11015DFC:
    PUSH32(esp, 8); /* 0x11015DFC: push 8 */
    eax = 0x1103D083u; /* 0x11015DFE: mov eax, 0x1103d083 */
    RECOMP_CALL(sub_1103B372); /* 0x11015E03: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11015E08: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x11015E0A: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11015E0D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11015E0F: mov dword ptr [ebp - 0x10], ebx */
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x11015E12: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11015E35; /* 0x11015E15: je 0x11015e35 */
L_11015E17:
    MEM32(edi) = 0x11002184u; /* 0x11015E17: mov dword ptr [edi], 0x11002184 */
    MEM32(edi + 0x10) = 0x1100218Cu; /* 0x11015E1D: mov dword ptr [edi + 0x10], 0x1100218c */
    MEM32(edi + 0x20) = 0x11001C24u; /* 0x11015E24: mov dword ptr [edi + 0x20], 0x11001c24 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11015E2B: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = 1; /* 0x11015E2E: mov dword ptr [ebp - 0x10], 1 */
L_11015E35:
    esi = MEM32(ebp + 0x8); /* 0x11015E35: mov esi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x11015E38: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x11015E3A: push ebx */
    PUSH32(esp, ebx); /* 0x11015E3B: push ebx */
    eax = MEM32(esi); /* 0x11015E3C: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11015E3E: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax + esi + 0x38)); /* 0x11015E41: push dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11014A85); /* 0x11015E45: call 0x11014a85 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x11015E4A: mov eax, dword ptr [edi + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x11015E4D: mov eax, dword ptr [eax + 4] */
    MEM32(edi + eax + 0x10) = 0x11001C6Cu; /* 0x11015E50: mov dword ptr [edi + eax + 0x10], 0x11001c6c */
    eax = MEM32(edi + 0x10); /* 0x11015E58: mov eax, dword ptr [edi + 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x11015E5B: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11015E5E: lea eax, [ecx - 8] */
    MEM32(ecx + edi + 0xC) = eax; /* 0x11015E61: mov dword ptr [ecx + edi + 0xc], eax */
    eax = MEM32(edi); /* 0x11015E65: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x11015E67: push ebx */
    PUSH32(esp, ebx); /* 0x11015E68: push ebx */
    MEM32(ebp + (-0x4)) = 3; /* 0x11015E69: mov dword ptr [ebp - 4], 3 */
    eax = MEM32(eax + 0x4); /* 0x11015E70: mov eax, dword ptr [eax + 4] */
    MEM32(edi + eax) = 0x11002180u; /* 0x11015E73: mov dword ptr [edi + eax], 0x11002180 */
    eax = MEM32(edi); /* 0x11015E7A: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x11015E7C: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x20); /* 0x11015E7F: lea eax, [ecx - 0x20] */
    MEM32(ecx + edi + (-0x4)) = eax; /* 0x11015E82: mov dword ptr [ecx + edi - 4], eax */
    eax = MEM32(edi); /* 0x11015E86: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x11015E88: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11015E8B: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110141A4); /* 0x11015E8D: call 0x110141a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11015E92: mov eax, dword ptr [esi] */
    edx = MEM32(eax + 0x4); /* 0x11015E94: mov edx, dword ptr [eax + 4] */
    eax = MEM32(edi); /* 0x11015E97: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x11015E99: add edx, esi */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x4); /* 0x11015E9B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11015E9E: add ecx, edi */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x11015EA0: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11015EB0; /* 0x11015EA2: je 0x11015eb0 */
L_11015EA4:
    PUSH32(esp, edx); /* 0x11015EA4: push edx */
    MEM32(ecx + 0x38) = ebx; /* 0x11015EA5: mov dword ptr [ecx + 0x38], ebx */
    MEM32(ecx + 0x3C) = ebx; /* 0x11015EA8: mov dword ptr [ecx + 0x3c], ebx */
    RECOMP_CALL(sub_1102B4CB); /* 0x11015EAB: call 0x1102b4cb */
    RECOMP_FLAGS_IN();
L_11015EB0:
    eax = edi; /* 0x11015EB0: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11015EB2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11015EB7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11015EBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015EBAu);

L_11015EBA:
    PUSH32(esp, 8); /* 0x11015EBA: push 8 */
    eax = 0x1103D0C5u; /* 0x11015EBC: mov eax, 0x1103d0c5 */
    RECOMP_CALL(sub_1103B372); /* 0x11015EC1: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11015EC6: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11015EC8: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11015ECB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x11015ECD: mov dword ptr [ebp - 0x10], eax */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x11015ED0: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11015EF3; /* 0x11015ED3: je 0x11015ef3 */
L_11015ED5:
    MEM32(esi) = 0x11002184u; /* 0x11015ED5: mov dword ptr [esi], 0x11002184 */
    MEM32(esi + 0x10) = 0x1100218Cu; /* 0x11015EDB: mov dword ptr [esi + 0x10], 0x1100218c */
    MEM32(esi + 0x20) = 0x11001C24u; /* 0x11015EE2: mov dword ptr [esi + 0x20], 0x11001c24 */
    MEM32(ebp + (-0x4)) = eax; /* 0x11015EE9: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x10)) = 1; /* 0x11015EEC: mov dword ptr [ebp - 0x10], 1 */
L_11015EF3:
    PUSH32(esp, eax); /* 0x11015EF3: push eax */
    PUSH32(esp, eax); /* 0x11015EF4: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11015EF5: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x11015EF8: mov ecx, esi */
    RECOMP_CALL(sub_11014A85); /* 0x11015EFA: call 0x11014a85 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10); /* 0x11015EFF: mov eax, dword ptr [esi + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x11015F02: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax + 0x10) = 0x11001C6Cu; /* 0x11015F05: mov dword ptr [esi + eax + 0x10], 0x11001c6c */
    eax = MEM32(esi + 0x10); /* 0x11015F0D: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x11015F10: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11015F13: lea eax, [ecx - 8] */
    MEM32(ecx + esi + 0xC) = eax; /* 0x11015F16: mov dword ptr [ecx + esi + 0xc], eax */
    eax = MEM32(esi); /* 0x11015F1A: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11015F1C: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002180u; /* 0x11015F1F: mov dword ptr [esi + eax], 0x11002180 */
    eax = MEM32(esi); /* 0x11015F26: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11015F28: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x20); /* 0x11015F2B: lea eax, [ecx - 0x20] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x11015F2E: mov dword ptr [ecx + esi - 4], eax */
    eax = esi; /* 0x11015F32: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11015F34: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11015F39: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11015F3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015F3Cu);

L_11015F3C:
    PUSH32(esp, 8); /* 0x11015F3C: push 8 */
    eax = 0x1103D112u; /* 0x11015F3E: mov eax, 0x1103d112 */
    RECOMP_CALL(sub_1103B372); /* 0x11015F43: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11015F48: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x11015F4A: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11015F4D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11015F4F: mov dword ptr [ebp - 0x10], ebx */
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x11015F52: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11015F75; /* 0x11015F55: je 0x11015f75 */
L_11015F57:
    MEM32(edi) = 0x110021B4u; /* 0x11015F57: mov dword ptr [edi], 0x110021b4 */
    MEM32(edi + 0x10) = 0x110021BCu; /* 0x11015F5D: mov dword ptr [edi + 0x10], 0x110021bc */
    MEM32(edi + 0x20) = 0x11002138u; /* 0x11015F64: mov dword ptr [edi + 0x20], 0x11002138 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11015F6B: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = 1; /* 0x11015F6E: mov dword ptr [ebp - 0x10], 1 */
L_11015F75:
    esi = MEM32(ebp + 0x8); /* 0x11015F75: mov esi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x11015F78: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x11015F7A: push ebx */
    PUSH32(esp, ebx); /* 0x11015F7B: push ebx */
    eax = MEM32(esi); /* 0x11015F7C: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11015F7E: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax + esi + 0x38)); /* 0x11015F81: push dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11016430); /* 0x11015F85: call 0x11016430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x11015F8A: mov eax, dword ptr [edi + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x11015F8D: mov eax, dword ptr [eax + 4] */
    MEM32(edi + eax + 0x10) = 0x11002150u; /* 0x11015F90: mov dword ptr [edi + eax + 0x10], 0x11002150 */
    eax = MEM32(edi + 0x10); /* 0x11015F98: mov eax, dword ptr [edi + 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x11015F9B: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11015F9E: lea eax, [ecx - 8] */
    MEM32(ecx + edi + 0xC) = eax; /* 0x11015FA1: mov dword ptr [ecx + edi + 0xc], eax */
    eax = MEM32(edi); /* 0x11015FA5: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x11015FA7: push ebx */
    PUSH32(esp, ebx); /* 0x11015FA8: push ebx */
    MEM32(ebp + (-0x4)) = 3; /* 0x11015FA9: mov dword ptr [ebp - 4], 3 */
    eax = MEM32(eax + 0x4); /* 0x11015FB0: mov eax, dword ptr [eax + 4] */
    MEM32(edi + eax) = 0x110021B0u; /* 0x11015FB3: mov dword ptr [edi + eax], 0x110021b0 */
    eax = MEM32(edi); /* 0x11015FBA: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x11015FBC: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x20); /* 0x11015FBF: lea eax, [ecx - 0x20] */
    MEM32(ecx + edi + (-0x4)) = eax; /* 0x11015FC2: mov dword ptr [ecx + edi - 4], eax */
    eax = MEM32(edi); /* 0x11015FC6: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x11015FC8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11015FCB: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029718); /* 0x11015FCD: call 0x11029718 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11015FD2: mov eax, dword ptr [esi] */
    edx = MEM32(eax + 0x4); /* 0x11015FD4: mov edx, dword ptr [eax + 4] */
    eax = MEM32(edi); /* 0x11015FD7: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x11015FD9: add edx, esi */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x4); /* 0x11015FDB: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11015FDE: add ecx, edi */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x11015FE0: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11015FF0; /* 0x11015FE2: je 0x11015ff0 */
L_11015FE4:
    PUSH32(esp, edx); /* 0x11015FE4: push edx */
    MEM32(ecx + 0x38) = ebx; /* 0x11015FE5: mov dword ptr [ecx + 0x38], ebx */
    MEM32(ecx + 0x3C) = ebx; /* 0x11015FE8: mov dword ptr [ecx + 0x3c], ebx */
    RECOMP_CALL(sub_1102B4F9); /* 0x11015FEB: call 0x1102b4f9 */
    RECOMP_FLAGS_IN();
L_11015FF0:
    eax = edi; /* 0x11015FF0: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11015FF2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11015FF7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11015FFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11015FFDu);

L_11015FFD:
    PUSH32(esp, 8); /* 0x11015FFD: push 8 */
    eax = 0x1103D154u; /* 0x11015FFF: mov eax, 0x1103d154 */
    RECOMP_CALL(sub_1103B372); /* 0x11016004: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016009: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101600B: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101600E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x11016010: mov dword ptr [ebp - 0x10], eax */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x11016013: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016036; /* 0x11016016: je 0x11016036 */
L_11016018:
    MEM32(esi) = 0x110021B4u; /* 0x11016018: mov dword ptr [esi], 0x110021b4 */
    MEM32(esi + 0x10) = 0x110021BCu; /* 0x1101601E: mov dword ptr [esi + 0x10], 0x110021bc */
    MEM32(esi + 0x20) = 0x11002138u; /* 0x11016025: mov dword ptr [esi + 0x20], 0x11002138 */
    MEM32(ebp + (-0x4)) = eax; /* 0x1101602C: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x10)) = 1; /* 0x1101602F: mov dword ptr [ebp - 0x10], 1 */
L_11016036:
    PUSH32(esp, eax); /* 0x11016036: push eax */
    PUSH32(esp, eax); /* 0x11016037: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11016038: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1101603B: mov ecx, esi */
    RECOMP_CALL(sub_11016430); /* 0x1101603D: call 0x11016430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10); /* 0x11016042: mov eax, dword ptr [esi + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x11016045: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax + 0x10) = 0x11002150u; /* 0x11016048: mov dword ptr [esi + eax + 0x10], 0x11002150 */
    eax = MEM32(esi + 0x10); /* 0x11016050: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x11016053: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11016056: lea eax, [ecx - 8] */
    MEM32(ecx + esi + 0xC) = eax; /* 0x11016059: mov dword ptr [ecx + esi + 0xc], eax */
    eax = MEM32(esi); /* 0x1101605D: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101605F: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x110021B0u; /* 0x11016062: mov dword ptr [esi + eax], 0x110021b0 */
    eax = MEM32(esi); /* 0x11016069: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101606B: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x20); /* 0x1101606E: lea eax, [ecx - 0x20] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x11016071: mov dword ptr [ecx + esi - 4], eax */
    eax = esi; /* 0x11016075: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016077: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101607C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1101607F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101607Fu);

L_1101607F:
    PUSH32(esp, 8); /* 0x1101607F: push 8 */
    eax = 0x1103D1A1u; /* 0x11016081: mov eax, 0x1103d1a1 */
    RECOMP_CALL(sub_1103B372); /* 0x11016086: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1101608B: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x1101608D: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11016090: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11016092: mov dword ptr [ebp - 0x10], ebx */
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x11016095: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110160B8; /* 0x11016098: je 0x110160b8 */
L_1101609A:
    MEM32(edi) = 0x1100219Cu; /* 0x1101609A: mov dword ptr [edi], 0x1100219c */
    MEM32(edi + 0x10) = 0x110021A4u; /* 0x110160A0: mov dword ptr [edi + 0x10], 0x110021a4 */
    MEM32(edi + 0x20) = 0x11002130u; /* 0x110160A7: mov dword ptr [edi + 0x20], 0x11002130 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x110160AE: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = 1; /* 0x110160B1: mov dword ptr [ebp - 0x10], 1 */
L_110160B8:
    esi = MEM32(ebp + 0x8); /* 0x110160B8: mov esi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x110160BB: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x110160BD: push ebx */
    PUSH32(esp, ebx); /* 0x110160BE: push ebx */
    eax = MEM32(esi); /* 0x110160BF: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110160C1: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax + esi + 0x38)); /* 0x110160C4: push dword ptr [eax + esi + 0x38] */
    RECOMP_CALL(sub_11016606); /* 0x110160C8: call 0x11016606 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x110160CD: mov eax, dword ptr [edi + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x110160D0: mov eax, dword ptr [eax + 4] */
    MEM32(edi + eax + 0x10) = 0x11002140u; /* 0x110160D3: mov dword ptr [edi + eax + 0x10], 0x11002140 */
    eax = MEM32(edi + 0x10); /* 0x110160DB: mov eax, dword ptr [edi + 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x110160DE: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x110160E1: lea eax, [ecx - 8] */
    MEM32(ecx + edi + 0xC) = eax; /* 0x110160E4: mov dword ptr [ecx + edi + 0xc], eax */
    eax = MEM32(edi); /* 0x110160E8: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x110160EA: push ebx */
    PUSH32(esp, ebx); /* 0x110160EB: push ebx */
    MEM32(ebp + (-0x4)) = 3; /* 0x110160EC: mov dword ptr [ebp - 4], 3 */
    eax = MEM32(eax + 0x4); /* 0x110160F3: mov eax, dword ptr [eax + 4] */
    MEM32(edi + eax) = 0x11002198u; /* 0x110160F6: mov dword ptr [edi + eax], 0x11002198 */
    eax = MEM32(edi); /* 0x110160FD: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x110160FF: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x20); /* 0x11016102: lea eax, [ecx - 0x20] */
    MEM32(ecx + edi + (-0x4)) = eax; /* 0x11016105: mov dword ptr [ecx + edi - 4], eax */
    eax = MEM32(edi); /* 0x11016109: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x1101610B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1101610E: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029762); /* 0x11016110: call 0x11029762 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11016115: mov eax, dword ptr [esi] */
    edx = MEM32(eax + 0x4); /* 0x11016117: mov edx, dword ptr [eax + 4] */
    eax = MEM32(edi); /* 0x1101611A: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1101611C: add edx, esi */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x4); /* 0x1101611E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x11016121: add ecx, edi */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x11016123: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016133; /* 0x11016125: je 0x11016133 */
L_11016127:
    PUSH32(esp, edx); /* 0x11016127: push edx */
    MEM32(ecx + 0x38) = ebx; /* 0x11016128: mov dword ptr [ecx + 0x38], ebx */
    MEM32(ecx + 0x3C) = ebx; /* 0x1101612B: mov dword ptr [ecx + 0x3c], ebx */
    RECOMP_CALL(sub_1102B4F9); /* 0x1101612E: call 0x1102b4f9 */
    RECOMP_FLAGS_IN();
L_11016133:
    eax = edi; /* 0x11016133: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11016135: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101613A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1101613D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101613Du);

L_1101613D:
    PUSH32(esp, 8); /* 0x1101613D: push 8 */
    eax = 0x1103D1E3u; /* 0x1101613F: mov eax, 0x1103d1e3 */
    RECOMP_CALL(sub_1103B372); /* 0x11016144: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016149: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101614B: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1101614E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x11016150: mov dword ptr [ebp - 0x10], eax */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x11016153: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016176; /* 0x11016156: je 0x11016176 */
L_11016158:
    MEM32(esi) = 0x1100219Cu; /* 0x11016158: mov dword ptr [esi], 0x1100219c */
    MEM32(esi + 0x10) = 0x110021A4u; /* 0x1101615E: mov dword ptr [esi + 0x10], 0x110021a4 */
    MEM32(esi + 0x20) = 0x11002130u; /* 0x11016165: mov dword ptr [esi + 0x20], 0x11002130 */
    MEM32(ebp + (-0x4)) = eax; /* 0x1101616C: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x10)) = 1; /* 0x1101616F: mov dword ptr [ebp - 0x10], 1 */
L_11016176:
    PUSH32(esp, eax); /* 0x11016176: push eax */
    PUSH32(esp, eax); /* 0x11016177: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11016178: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1101617B: mov ecx, esi */
    RECOMP_CALL(sub_11016606); /* 0x1101617D: call 0x11016606 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10); /* 0x11016182: mov eax, dword ptr [esi + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x11016185: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax + 0x10) = 0x11002140u; /* 0x11016188: mov dword ptr [esi + eax + 0x10], 0x11002140 */
    eax = MEM32(esi + 0x10); /* 0x11016190: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x11016193: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11016196: lea eax, [ecx - 8] */
    MEM32(ecx + esi + 0xC) = eax; /* 0x11016199: mov dword ptr [ecx + esi + 0xc], eax */
    eax = MEM32(esi); /* 0x1101619D: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101619F: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002198u; /* 0x110161A2: mov dword ptr [esi + eax], 0x11002198 */
    eax = MEM32(esi); /* 0x110161A9: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110161AB: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x20); /* 0x110161AE: lea eax, [ecx - 0x20] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x110161B1: mov dword ptr [ecx + esi - 4], eax */
    eax = esi; /* 0x110161B5: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110161B7: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110161BC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110161BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110161BFu);

L_110161BF:
    PUSH32(esp, 8); /* 0x110161BF: push 8 */
    eax = 0x1103D21Au; /* 0x110161C1: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x110161C6: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110161CB: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110161CD: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110161D0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x110161D2: mov dword ptr [ebp - 0x10], ebx */
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x110161D5: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110161F1; /* 0x110161D8: je 0x110161f1 */
L_110161DA:
    MEM32(esi) = 0x11001CECu; /* 0x110161DA: mov dword ptr [esi], 0x11001cec */
    MEM32(esi + 0x18) = 0x11001C24u; /* 0x110161E0: mov dword ptr [esi + 0x18], 0x11001c24 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x110161E7: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = 1; /* 0x110161EA: mov dword ptr [ebp - 0x10], 1 */
L_110161F1:
    eax = MEM32(esi); /* 0x110161F1: mov eax, dword ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x110161F3: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x110161F6: push ebx */
    PUSH32(esp, ebx); /* 0x110161F7: push ebx */
    eax = MEM32(eax + 0x4); /* 0x110161F8: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11001CE8u; /* 0x110161FB: mov dword ptr [esi + eax], 0x11001ce8 */
    eax = MEM32(esi); /* 0x11016202: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016204: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x11016207: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x1101620A: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(edi + 0x8); /* 0x1101620E: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x11016211: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0xC); /* 0x11016214: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x11016217: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(esi); /* 0x1101621A: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101621C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101621F: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110141A4); /* 0x11016221: call 0x110141a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x11016226: mov eax, dword ptr [edi] */
    edx = MEM32(eax + 0x4); /* 0x11016228: mov edx, dword ptr [eax + 4] */
    eax = MEM32(esi); /* 0x1101622B: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1101622D: add edx, edi */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x4); /* 0x1101622F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11016232: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x11016234: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016244; /* 0x11016236: je 0x11016244 */
L_11016238:
    PUSH32(esp, edx); /* 0x11016238: push edx */
    MEM32(ecx + 0x38) = ebx; /* 0x11016239: mov dword ptr [ecx + 0x38], ebx */
    MEM32(ecx + 0x3C) = ebx; /* 0x1101623C: mov dword ptr [ecx + 0x3c], ebx */
    RECOMP_CALL(sub_1102B4CB); /* 0x1101623F: call 0x1102b4cb */
    RECOMP_FLAGS_IN();
L_11016244:
    MEM32(edi + 0x8) = ebx; /* 0x11016244: mov dword ptr [edi + 8], ebx */
    eax = esi; /* 0x11016247: mov eax, esi */
    MEM32(edi + 0xC) = ebx; /* 0x11016249: mov dword ptr [edi + 0xc], ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1101624C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016251: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016254(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016254u);

L_11016254:
    PUSH32(esp, 8); /* 0x11016254: push 8 */
    eax = 0x1103D21Au; /* 0x11016256: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x1101625B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016260: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11016262: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11016265: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x11016267: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x1101626A: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016286; /* 0x1101626D: je 0x11016286 */
L_1101626F:
    MEM32(esi) = 0x11001CECu; /* 0x1101626F: mov dword ptr [esi], 0x11001cec */
    MEM32(esi + 0x18) = 0x11001C24u; /* 0x11016275: mov dword ptr [esi + 0x18], 0x11001c24 */
    MEM32(ebp + (-0x4)) = edx; /* 0x1101627C: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x10)) = 1; /* 0x1101627F: mov dword ptr [ebp - 0x10], 1 */
L_11016286:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11016286: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi); /* 0x1101628A: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101628C: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11001CE8u; /* 0x1101628F: mov dword ptr [esi + eax], 0x11001ce8 */
    eax = MEM32(esi); /* 0x11016296: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016298: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x1101629B: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x1101629E: mov dword ptr [ecx + esi - 4], eax */
    MEM32(esi + 0x8) = edx; /* 0x110162A2: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x110162A5: mov dword ptr [esi + 0xc], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110162BC; /* 0x110162A8: jne 0x110162bc */
L_110162AA:
    eax = MEM32(esi); /* 0x110162AA: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110162AC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110162AF: push dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x110162B2: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110162B5: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110141A4); /* 0x110162B7: call 0x110141a4 */
    RECOMP_FLAGS_IN();
L_110162BC:
    eax = esi; /* 0x110162BC: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110162BE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x110162C3: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_110162C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110162C6u);

L_110162C6:
    PUSH32(esp, 8); /* 0x110162C6: push 8 */
    eax = 0x1103D21Au; /* 0x110162C8: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x110162CD: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110162D2: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110162D4: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x110162D7: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x110162DB: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110162F9; /* 0x110162DF: je 0x110162f9 */
L_110162E1:
    MEM32(esi) = 0x11001CECu; /* 0x110162E1: mov dword ptr [esi], 0x11001cec */
    MEM32(esi + 0x18) = 0x11001C24u; /* 0x110162E7: mov dword ptr [esi + 0x18], 0x11001c24 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110162EE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 1; /* 0x110162F2: mov dword ptr [ebp - 0x10], 1 */
L_110162F9:
    eax = MEM32(esi); /* 0x110162F9: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110162FB: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11001CE8u; /* 0x110162FE: mov dword ptr [esi + eax], 0x11001ce8 */
    eax = MEM32(esi); /* 0x11016305: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016307: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x1101630A: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x1101630D: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x11016311: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11016313: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x11016316: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11016318: push eax */
    RECOMP_CALL(sub_1103065A); /* 0x11016319: call 0x1103065a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101631E: pop ecx */
    eax = esi; /* 0x1101631F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016321: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016326: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016329(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016329u);

L_11016329:
    PUSH32(esp, 8); /* 0x11016329: push 8 */
    eax = 0x1103D21Au; /* 0x1101632B: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x11016330: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016335: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11016337: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1101633A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1101633C: mov dword ptr [ebp - 0x10], ebx */
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1101633F: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101635B; /* 0x11016342: je 0x1101635b */
L_11016344:
    MEM32(esi) = 0x11002174u; /* 0x11016344: mov dword ptr [esi], 0x11002174 */
    MEM32(esi + 0x18) = 0x11002138u; /* 0x1101634A: mov dword ptr [esi + 0x18], 0x11002138 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11016351: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = 1; /* 0x11016354: mov dword ptr [ebp - 0x10], 1 */
L_1101635B:
    eax = MEM32(esi); /* 0x1101635B: mov eax, dword ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x1101635D: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x11016360: push ebx */
    PUSH32(esp, ebx); /* 0x11016361: push ebx */
    eax = MEM32(eax + 0x4); /* 0x11016362: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002170u; /* 0x11016365: mov dword ptr [esi + eax], 0x11002170 */
    eax = MEM32(esi); /* 0x1101636C: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101636E: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x11016371: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x11016374: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(edi + 0x8); /* 0x11016378: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1101637B: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0xC); /* 0x1101637E: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x11016381: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(esi); /* 0x11016384: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016386: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11016389: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029718); /* 0x1101638B: call 0x11029718 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x11016390: mov eax, dword ptr [edi] */
    edx = MEM32(eax + 0x4); /* 0x11016392: mov edx, dword ptr [eax + 4] */
    eax = MEM32(esi); /* 0x11016395: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x11016397: add edx, edi */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x4); /* 0x11016399: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101639C: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x1101639E: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110163AE; /* 0x110163A0: je 0x110163ae */
L_110163A2:
    PUSH32(esp, edx); /* 0x110163A2: push edx */
    MEM32(ecx + 0x38) = ebx; /* 0x110163A3: mov dword ptr [ecx + 0x38], ebx */
    MEM32(ecx + 0x3C) = ebx; /* 0x110163A6: mov dword ptr [ecx + 0x3c], ebx */
    RECOMP_CALL(sub_1102B4F9); /* 0x110163A9: call 0x1102b4f9 */
    RECOMP_FLAGS_IN();
L_110163AE:
    MEM32(edi + 0x8) = ebx; /* 0x110163AE: mov dword ptr [edi + 8], ebx */
    eax = esi; /* 0x110163B1: mov eax, esi */
    MEM32(edi + 0xC) = ebx; /* 0x110163B3: mov dword ptr [edi + 0xc], ebx */
    RECOMP_CALL(sub_1103B340); /* 0x110163B6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110163BB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110163BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110163BEu);

L_110163BE:
    PUSH32(esp, 8); /* 0x110163BE: push 8 */
    eax = 0x1103D21Au; /* 0x110163C0: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x110163C5: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110163CA: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110163CC: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110163CF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x110163D1: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x110163D4: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110163F0; /* 0x110163D7: je 0x110163f0 */
L_110163D9:
    MEM32(esi) = 0x11002174u; /* 0x110163D9: mov dword ptr [esi], 0x11002174 */
    MEM32(esi + 0x18) = 0x11002138u; /* 0x110163DF: mov dword ptr [esi + 0x18], 0x11002138 */
    MEM32(ebp + (-0x4)) = edx; /* 0x110163E6: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x10)) = 1; /* 0x110163E9: mov dword ptr [ebp - 0x10], 1 */
L_110163F0:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x110163F0: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi); /* 0x110163F4: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110163F6: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002170u; /* 0x110163F9: mov dword ptr [esi + eax], 0x11002170 */
    eax = MEM32(esi); /* 0x11016400: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016402: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x11016405: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x11016408: mov dword ptr [ecx + esi - 4], eax */
    MEM32(esi + 0x8) = edx; /* 0x1101640C: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x1101640F: mov dword ptr [esi + 0xc], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11016426; /* 0x11016412: jne 0x11016426 */
L_11016414:
    eax = MEM32(esi); /* 0x11016414: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11016416: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11016419: push dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x1101641C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101641F: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029718); /* 0x11016421: call 0x11029718 */
    RECOMP_FLAGS_IN();
L_11016426:
    eax = esi; /* 0x11016426: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016428: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1101642D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_11016430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016430u);

L_11016430:
    PUSH32(esp, 8); /* 0x11016430: push 8 */
    eax = 0x1103D21Au; /* 0x11016432: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x11016437: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101643C: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101643E: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11016441: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x11016443: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + 0x10), edx */ /* 0x11016446: cmp dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016462; /* 0x11016449: je 0x11016462 */
L_1101644B:
    MEM32(esi) = 0x11002174u; /* 0x1101644B: mov dword ptr [esi], 0x11002174 */
    MEM32(esi + 0x18) = 0x11002138u; /* 0x11016451: mov dword ptr [esi + 0x18], 0x11002138 */
    MEM32(ebp + (-0x4)) = edx; /* 0x11016458: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x10)) = 1; /* 0x1101645B: mov dword ptr [ebp - 0x10], 1 */
L_11016462:
    eax = MEM32(esi); /* 0x11016462: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11016464: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11016467: push dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1101646A: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002170u; /* 0x1101646D: mov dword ptr [esi + eax], 0x11002170 */
    eax = MEM32(esi); /* 0x11016474: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016476: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x11016479: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x1101647C: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x11016480: mov eax, dword ptr [esi] */
    MEM32(esi + 0x8) = edx; /* 0x11016482: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x11016485: mov dword ptr [esi + 0xc], edx */
    ecx = MEM32(eax + 0x4); /* 0x11016488: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101648B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029718); /* 0x1101648D: call 0x11029718 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016492: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016494: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11016499: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1101649C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101649Cu);

L_1101649C:
    PUSH32(esp, 8); /* 0x1101649C: push 8 */
    eax = 0x1103D21Au; /* 0x1101649E: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x110164A3: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110164A8: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110164AA: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x110164AD: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x110164B1: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110164CF; /* 0x110164B5: je 0x110164cf */
L_110164B7:
    MEM32(esi) = 0x11002174u; /* 0x110164B7: mov dword ptr [esi], 0x11002174 */
    MEM32(esi + 0x18) = 0x11002138u; /* 0x110164BD: mov dword ptr [esi + 0x18], 0x11002138 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110164C4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 1; /* 0x110164C8: mov dword ptr [ebp - 0x10], 1 */
L_110164CF:
    eax = MEM32(esi); /* 0x110164CF: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110164D1: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002170u; /* 0x110164D4: mov dword ptr [esi + eax], 0x11002170 */
    eax = MEM32(esi); /* 0x110164DB: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110164DD: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x110164E0: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x110164E3: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x110164E7: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110164E9: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x110164EC: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110164EE: push eax */
    RECOMP_CALL(sub_1103065A); /* 0x110164EF: call 0x1103065a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110164F4: pop ecx */
    eax = esi; /* 0x110164F5: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110164F7: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110164FC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110164FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110164FFu);

L_110164FF:
    PUSH32(esp, 8); /* 0x110164FF: push 8 */
    eax = 0x1103D21Au; /* 0x11016501: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x11016506: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101650B: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101650D: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11016510: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11016512: mov dword ptr [ebp - 0x10], ebx */
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x11016515: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016531; /* 0x11016518: je 0x11016531 */
L_1101651A:
    MEM32(esi) = 0x11002164u; /* 0x1101651A: mov dword ptr [esi], 0x11002164 */
    MEM32(esi + 0x18) = 0x11002130u; /* 0x11016520: mov dword ptr [esi + 0x18], 0x11002130 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11016527: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = 1; /* 0x1101652A: mov dword ptr [ebp - 0x10], 1 */
L_11016531:
    eax = MEM32(esi); /* 0x11016531: mov eax, dword ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x11016533: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x11016536: push ebx */
    PUSH32(esp, ebx); /* 0x11016537: push ebx */
    eax = MEM32(eax + 0x4); /* 0x11016538: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002160u; /* 0x1101653B: mov dword ptr [esi + eax], 0x11002160 */
    eax = MEM32(esi); /* 0x11016542: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016544: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x11016547: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x1101654A: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(edi + 0x8); /* 0x1101654E: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x8) = eax; /* 0x11016551: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi + 0xC); /* 0x11016554: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x11016557: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(esi); /* 0x1101655A: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101655C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101655F: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029762); /* 0x11016561: call 0x11029762 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x11016566: mov eax, dword ptr [edi] */
    edx = MEM32(eax + 0x4); /* 0x11016568: mov edx, dword ptr [eax + 4] */
    eax = MEM32(esi); /* 0x1101656B: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1101656D: add edx, edi */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x4); /* 0x1101656F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11016572: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x11016574: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016584; /* 0x11016576: je 0x11016584 */
L_11016578:
    PUSH32(esp, edx); /* 0x11016578: push edx */
    MEM32(ecx + 0x38) = ebx; /* 0x11016579: mov dword ptr [ecx + 0x38], ebx */
    MEM32(ecx + 0x3C) = ebx; /* 0x1101657C: mov dword ptr [ecx + 0x3c], ebx */
    RECOMP_CALL(sub_1102B4F9); /* 0x1101657F: call 0x1102b4f9 */
    RECOMP_FLAGS_IN();
L_11016584:
    MEM32(edi + 0x8) = ebx; /* 0x11016584: mov dword ptr [edi + 8], ebx */
    eax = esi; /* 0x11016587: mov eax, esi */
    MEM32(edi + 0xC) = ebx; /* 0x11016589: mov dword ptr [edi + 0xc], ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1101658C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016591: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016594(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016594u);

L_11016594:
    PUSH32(esp, 8); /* 0x11016594: push 8 */
    eax = 0x1103D21Au; /* 0x11016596: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x1101659B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110165A0: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110165A2: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110165A5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x110165A7: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x110165AA: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110165C6; /* 0x110165AD: je 0x110165c6 */
L_110165AF:
    MEM32(esi) = 0x11002164u; /* 0x110165AF: mov dword ptr [esi], 0x11002164 */
    MEM32(esi + 0x18) = 0x11002130u; /* 0x110165B5: mov dword ptr [esi + 0x18], 0x11002130 */
    MEM32(ebp + (-0x4)) = edx; /* 0x110165BC: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x10)) = 1; /* 0x110165BF: mov dword ptr [ebp - 0x10], 1 */
L_110165C6:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x110165C6: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi); /* 0x110165CA: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110165CC: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002160u; /* 0x110165CF: mov dword ptr [esi + eax], 0x11002160 */
    eax = MEM32(esi); /* 0x110165D6: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110165D8: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x110165DB: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x110165DE: mov dword ptr [ecx + esi - 4], eax */
    MEM32(esi + 0x8) = edx; /* 0x110165E2: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x110165E5: mov dword ptr [esi + 0xc], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110165FC; /* 0x110165E8: jne 0x110165fc */
L_110165EA:
    eax = MEM32(esi); /* 0x110165EA: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110165EC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110165EF: push dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x110165F2: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110165F5: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029762); /* 0x110165F7: call 0x11029762 */
    RECOMP_FLAGS_IN();
L_110165FC:
    eax = esi; /* 0x110165FC: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110165FE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x11016603: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_11016606(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016606u);

L_11016606:
    PUSH32(esp, 8); /* 0x11016606: push 8 */
    eax = 0x1103D21Au; /* 0x11016608: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x1101660D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016612: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11016614: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11016617: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x11016619: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + 0x10), edx */ /* 0x1101661C: cmp dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016638; /* 0x1101661F: je 0x11016638 */
L_11016621:
    MEM32(esi) = 0x11002164u; /* 0x11016621: mov dword ptr [esi], 0x11002164 */
    MEM32(esi + 0x18) = 0x11002130u; /* 0x11016627: mov dword ptr [esi + 0x18], 0x11002130 */
    MEM32(ebp + (-0x4)) = edx; /* 0x1101662E: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x10)) = 1; /* 0x11016631: mov dword ptr [ebp - 0x10], 1 */
L_11016638:
    eax = MEM32(esi); /* 0x11016638: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1101663A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101663D: push dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x11016640: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002160u; /* 0x11016643: mov dword ptr [esi + eax], 0x11002160 */
    eax = MEM32(esi); /* 0x1101664A: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101664C: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x1101664F: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x11016652: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x11016656: mov eax, dword ptr [esi] */
    MEM32(esi + 0x8) = edx; /* 0x11016658: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x1101665B: mov dword ptr [esi + 0xc], edx */
    ecx = MEM32(eax + 0x4); /* 0x1101665E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11016661: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029762); /* 0x11016663: call 0x11029762 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016668: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101666A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1101666F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11016672(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016672u);

L_11016672:
    PUSH32(esp, 8); /* 0x11016672: push 8 */
    eax = 0x1103D21Au; /* 0x11016674: mov eax, 0x1103d21a */
    RECOMP_CALL(sub_1103B372); /* 0x11016679: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101667E: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11016680: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x11016683: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x11016687: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110166A5; /* 0x1101668B: je 0x110166a5 */
L_1101668D:
    MEM32(esi) = 0x11002164u; /* 0x1101668D: mov dword ptr [esi], 0x11002164 */
    MEM32(esi + 0x18) = 0x11002130u; /* 0x11016693: mov dword ptr [esi + 0x18], 0x11002130 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101669A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 1; /* 0x1101669E: mov dword ptr [ebp - 0x10], 1 */
L_110166A5:
    eax = MEM32(esi); /* 0x110166A5: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110166A7: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002160u; /* 0x110166AA: mov dword ptr [esi + eax], 0x11002160 */
    eax = MEM32(esi); /* 0x110166B1: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110166B3: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x110166B6: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x110166B9: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x110166BD: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110166BF: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x110166C2: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110166C4: push eax */
    RECOMP_CALL(sub_1103065A); /* 0x110166C5: call 0x1103065a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110166CA: pop ecx */
    eax = esi; /* 0x110166CB: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110166CD: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110166D2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110166D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110166D5u);

L_110166D5:
    PUSH32(esp, 8); /* 0x110166D5: push 8 */
    eax = 0x1103D251u; /* 0x110166D7: mov eax, 0x1103d251 */
    RECOMP_CALL(sub_1103B372); /* 0x110166DC: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110166E1: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110166E3: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110166E6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x110166E8: mov dword ptr [ebp - 0x10], edi */
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x110166EB: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016707; /* 0x110166EE: je 0x11016707 */
L_110166F0:
    MEM32(esi) = 0x11001C70u; /* 0x110166F0: mov dword ptr [esi], 0x11001c70 */
    MEM32(esi + 0x8) = 0x11001C24u; /* 0x110166F6: mov dword ptr [esi + 8], 0x11001c24 */
    MEM32(ebp + (-0x4)) = edi; /* 0x110166FD: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x10)) = 1; /* 0x11016700: mov dword ptr [ebp - 0x10], 1 */
L_11016707:
    eax = MEM32(esi); /* 0x11016707: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11016709: push edi */
    PUSH32(esp, edi); /* 0x1101670A: push edi */
    eax = MEM32(eax + 0x4); /* 0x1101670B: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11001C6Cu; /* 0x1101670E: mov dword ptr [esi + eax], 0x11001c6c */
    eax = MEM32(esi); /* 0x11016715: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016717: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x1101671A: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x1101671D: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x11016721: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016723: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11016726: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110141A4); /* 0x11016728: call 0x110141a4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1101672D: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x11016730: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11016738; /* 0x11016732: jne 0x11016738 */
L_11016734:
    edx = edi; /* 0x11016734: mov edx, edi */
    goto L_1101673F; /* 0x11016736: jmp 0x1101673f */
L_11016738:
    eax = MEM32(ecx); /* 0x11016738: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101673A: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101673D: add edx, ecx */
    _flag_k = FK_ADD;
L_1101673F:
    eax = MEM32(esi); /* 0x1101673F: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016741: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11016744: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x11016746: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016756; /* 0x11016748: je 0x11016756 */
L_1101674A:
    PUSH32(esp, edx); /* 0x1101674A: push edx */
    MEM32(ecx + 0x38) = edi; /* 0x1101674B: mov dword ptr [ecx + 0x38], edi */
    MEM32(ecx + 0x3C) = edi; /* 0x1101674E: mov dword ptr [ecx + 0x3c], edi */
    RECOMP_CALL(sub_1102B4CB); /* 0x11016751: call 0x1102b4cb */
    RECOMP_FLAGS_IN();
L_11016756:
    eax = esi; /* 0x11016756: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016758: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101675D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016760u);

L_11016760:
    PUSH32(esp, 8); /* 0x11016760: push 8 */
    eax = 0x1103D251u; /* 0x11016762: mov eax, 0x1103d251 */
    RECOMP_CALL(sub_1103B372); /* 0x11016767: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101676C: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1101676E: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x11016771: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x11016775: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016793; /* 0x11016779: je 0x11016793 */
L_1101677B:
    MEM32(esi) = 0x11001C70u; /* 0x1101677B: mov dword ptr [esi], 0x11001c70 */
    MEM32(esi + 0x8) = 0x11001C24u; /* 0x11016781: mov dword ptr [esi + 8], 0x11001c24 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016788: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 1; /* 0x1101678C: mov dword ptr [ebp - 0x10], 1 */
L_11016793:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x11016793: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi); /* 0x11016797: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11016799: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11001C6Cu; /* 0x1101679C: mov dword ptr [esi + eax], 0x11001c6c */
    eax = MEM32(esi); /* 0x110167A3: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110167A5: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x110167A8: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x110167AB: mov dword ptr [ecx + esi - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110167BF; /* 0x110167AF: je 0x110167bf */
L_110167B1:
    eax = MEM32(esi); /* 0x110167B1: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110167B3: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x110167B6: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110167B8: push eax */
    RECOMP_CALL(sub_1103065A); /* 0x110167B9: call 0x1103065a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110167BE: pop ecx */
L_110167BF:
    eax = esi; /* 0x110167BF: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110167C1: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x110167C6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_110167C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110167C9u);

L_110167C9:
    PUSH32(esp, 8); /* 0x110167C9: push 8 */
    eax = 0x1103D251u; /* 0x110167CB: mov eax, 0x1103d251 */
    RECOMP_CALL(sub_1103B372); /* 0x110167D0: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110167D5: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110167D7: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110167DA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x110167DC: mov dword ptr [ebp - 0x10], edi */
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x110167DF: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110167FB; /* 0x110167E2: je 0x110167fb */
L_110167E4:
    MEM32(esi) = 0x11002154u; /* 0x110167E4: mov dword ptr [esi], 0x11002154 */
    MEM32(esi + 0x8) = 0x11002138u; /* 0x110167EA: mov dword ptr [esi + 8], 0x11002138 */
    MEM32(ebp + (-0x4)) = edi; /* 0x110167F1: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x10)) = 1; /* 0x110167F4: mov dword ptr [ebp - 0x10], 1 */
L_110167FB:
    eax = MEM32(esi); /* 0x110167FB: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110167FD: push edi */
    PUSH32(esp, edi); /* 0x110167FE: push edi */
    eax = MEM32(eax + 0x4); /* 0x110167FF: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002150u; /* 0x11016802: mov dword ptr [esi + eax], 0x11002150 */
    eax = MEM32(esi); /* 0x11016809: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101680B: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x1101680E: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x11016811: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x11016815: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016817: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101681A: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029718); /* 0x1101681C: call 0x11029718 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11016821: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x11016824: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1101682C; /* 0x11016826: jne 0x1101682c */
L_11016828:
    edx = edi; /* 0x11016828: mov edx, edi */
    goto L_11016833; /* 0x1101682A: jmp 0x11016833 */
L_1101682C:
    eax = MEM32(ecx); /* 0x1101682C: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101682E: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11016831: add edx, ecx */
    _flag_k = FK_ADD;
L_11016833:
    eax = MEM32(esi); /* 0x11016833: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016835: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11016838: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x1101683A: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101684A; /* 0x1101683C: je 0x1101684a */
L_1101683E:
    PUSH32(esp, edx); /* 0x1101683E: push edx */
    MEM32(ecx + 0x38) = edi; /* 0x1101683F: mov dword ptr [ecx + 0x38], edi */
    MEM32(ecx + 0x3C) = edi; /* 0x11016842: mov dword ptr [ecx + 0x3c], edi */
    RECOMP_CALL(sub_1102B4F9); /* 0x11016845: call 0x1102b4f9 */
    RECOMP_FLAGS_IN();
L_1101684A:
    eax = esi; /* 0x1101684A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101684C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016851: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016854(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016854u);

L_11016854:
    PUSH32(esp, 8); /* 0x11016854: push 8 */
    eax = 0x1103D251u; /* 0x11016856: mov eax, 0x1103d251 */
    RECOMP_CALL(sub_1103B372); /* 0x1101685B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016860: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11016862: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x11016865: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x11016869: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016887; /* 0x1101686D: je 0x11016887 */
L_1101686F:
    MEM32(esi) = 0x11002154u; /* 0x1101686F: mov dword ptr [esi], 0x11002154 */
    MEM32(esi + 0x8) = 0x11002138u; /* 0x11016875: mov dword ptr [esi + 8], 0x11002138 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101687C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 1; /* 0x11016880: mov dword ptr [ebp - 0x10], 1 */
L_11016887:
    eax = MEM32(esi); /* 0x11016887: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11016889: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101688C: push dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1101688F: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002150u; /* 0x11016892: mov dword ptr [esi + eax], 0x11002150 */
    eax = MEM32(esi); /* 0x11016899: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101689B: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x1101689E: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x110168A1: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x110168A5: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110168A7: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110168AA: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029718); /* 0x110168AC: call 0x11029718 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110168B1: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110168B3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x110168B8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_110168BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110168BBu);

L_110168BB:
    PUSH32(esp, 8); /* 0x110168BB: push 8 */
    eax = 0x1103D251u; /* 0x110168BD: mov eax, 0x1103d251 */
    RECOMP_CALL(sub_1103B372); /* 0x110168C2: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110168C7: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110168C9: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x110168CC: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x110168D0: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110168EE; /* 0x110168D4: je 0x110168ee */
L_110168D6:
    MEM32(esi) = 0x11002154u; /* 0x110168D6: mov dword ptr [esi], 0x11002154 */
    MEM32(esi + 0x8) = 0x11002138u; /* 0x110168DC: mov dword ptr [esi + 8], 0x11002138 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110168E3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 1; /* 0x110168E7: mov dword ptr [ebp - 0x10], 1 */
L_110168EE:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x110168EE: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi); /* 0x110168F2: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110168F4: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002150u; /* 0x110168F7: mov dword ptr [esi + eax], 0x11002150 */
    eax = MEM32(esi); /* 0x110168FE: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016900: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11016903: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x11016906: mov dword ptr [ecx + esi - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1101691A; /* 0x1101690A: je 0x1101691a */
L_1101690C:
    eax = MEM32(esi); /* 0x1101690C: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1101690E: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x11016911: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11016913: push eax */
    RECOMP_CALL(sub_1103065A); /* 0x11016914: call 0x1103065a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11016919: pop ecx */
L_1101691A:
    eax = esi; /* 0x1101691A: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101691C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11016921: ret 0xc */
    RECOMP_REGS_OUT();
}
