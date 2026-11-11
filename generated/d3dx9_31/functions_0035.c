#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_171852DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171852DEu);

L_171852DE:
    edi = edi; /* 0x171852DE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171852E0: push ebp */
    ebp = esp; /* 0x171852E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171852E3: push esi */
    PUSH32(esp, edi); /* 0x171852E4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171852E5: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x171852E8: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x171852EA: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171852F3; /* 0x171852ED: jne 0x171852f3 */
L_171852EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171852EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171852FF; /* 0x171852F1: jmp 0x171852ff */
L_171852F3:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x171852F3: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171852F7: push edi */
    ecx = esi; /* 0x171852F8: mov ecx, esi */
    RECOMP_CALL(sub_17194548); /* 0x171852FA: call 0x17194548 */
    RECOMP_FLAGS_IN();
L_171852FF:
    MEM32(esi + 0x4) = edi; /* 0x171852FF: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x17185302: pop edi */
    esi = POP32_VAL(esp); /* 0x17185303: pop esi */
    ebp = POP32_VAL(esp); /* 0x17185304: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17185305: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718530D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718530Du);

L_1718530D:
    edi = edi; /* 0x1718530D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718530F: push ebp */
    ebp = esp; /* 0x17185310: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17185312: push esi */
    PUSH32(esp, edi); /* 0x17185313: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17185314: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x17185317: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185319: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x1718531B: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17185326; /* 0x1718531E: jae 0x17185326 */
L_17185320:
    PUSH32(esp, edi); /* 0x17185320: push edi */
    RECOMP_CALL(sub_17194548); /* 0x17185321: call 0x17194548 */
    RECOMP_FLAGS_IN();
L_17185326:
    MEM32(esi + 0x4) = edi; /* 0x17185326: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x17185329: pop edi */
    esi = POP32_VAL(esp); /* 0x1718532A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718532B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718532C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17185334(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17185334u);

L_17185334:
    edi = edi; /* 0x17185334: mov edi, edi */
    PUSH32(esp, esi); /* 0x17185336: push esi */
    esi = ecx; /* 0x17185337: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185339: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1718533B: push 8 */
    MEM32(esi) = eax; /* 0x1718533D: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x1718533F: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x17185342: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_17184E1B); /* 0x17185345: call 0x17184e1b */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1718534A: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x1718534D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718534F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17185350: ret  */
    RECOMP_REGS_OUT();
}

void sub_17185356(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17185356u);

L_17185356:
    edi = edi; /* 0x17185356: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17185358: push ebp */
    ebp = esp; /* 0x17185359: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718535B: push esi */
    PUSH32(esp, edi); /* 0x1718535C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718535D: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x17185360: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185362: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x17185364: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1718536F; /* 0x17185367: jae 0x1718536f */
L_17185369:
    PUSH32(esp, edi); /* 0x17185369: push edi */
    RECOMP_CALL(sub_17184E1B); /* 0x1718536A: call 0x17184e1b */
    RECOMP_FLAGS_IN();
L_1718536F:
    MEM32(esi + 0x4) = edi; /* 0x1718536F: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x17185372: pop edi */
    esi = POP32_VAL(esp); /* 0x17185373: pop esi */
    ebp = POP32_VAL(esp); /* 0x17185374: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17185375: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718537D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718537Du);

L_1718537D:
    edi = edi; /* 0x1718537D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718537F: push ebp */
    ebp = esp; /* 0x17185380: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17185382: push ebx */
    ebx = ecx; /* 0x17185383: mov ebx, ecx */
    eax = MEM32(ebx + 0x8); /* 0x17185385: mov eax, dword ptr [ebx + 8] */
    /* cmp MEM32(ebx + 0x4), eax */ /* 0x17185388: cmp dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171853A1; /* 0x1718538B: jne 0x171853a1 */
L_1718538D:
    /* test eax, eax */ /* 0x1718538D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185396; /* 0x1718538F: je 0x17185396 */
L_17185391:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x17185391: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17185393: push eax */
    goto L_17185398; /* 0x17185394: jmp 0x17185398 */
L_17185396:
    PUSH32(esp, 8); /* 0x17185396: push 8 */
L_17185398:
    RECOMP_CALL(sub_17184E1B); /* 0x17185398: call 0x17184e1b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718539D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171853BD; /* 0x1718539F: jl 0x171853bd */
L_171853A1:
    eax = MEM32(ebx + 0x4); /* 0x171853A1: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x171853A4: mov ecx, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x171853A6: push esi */
    PUSH32(esp, edi); /* 0x171853A7: push edi */
    eax = eax + eax * 4; /* 0x171853A8: lea eax, [eax + eax*4] */
    PUSH32(esp, 5); /* 0x171853AB: push 5 */
    edi = ecx + eax * 4; /* 0x171853AD: lea edi, [ecx + eax*4] */
    ecx = POP32_VAL(esp); /* 0x171853B0: pop ecx */
    esi = ebp + 0x8; /* 0x171853B1: lea esi, [ebp + 8] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171853B4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 1; /* 0x171853B6: inc dword ptr [ebx + 4] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x171853B9: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171853BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171853BC: pop esi */
L_171853BD:
    ebx = POP32_VAL(esp); /* 0x171853BD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171853BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171853BF: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171853C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171853C7u);

L_171853C7:
    eax = 0x1721C356u; /* 0x171853C7: mov eax, 0x1721c356 */
    RECOMP_CALL(sub_1721B168); /* 0x171853CC: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x171853D1: push ecx */
    PUSH32(esp, esi); /* 0x171853D2: push esi */
    esi = ecx; /* 0x171853D3: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x171853D5: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171853D8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x14; /* 0x171853DC: lea ecx, [esi + 0x14] */
    RECOMP_CALL(sub_1717AF06); /* 0x171853DF: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x171853E4: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x171853E8: mov ecx, esi */
    RECOMP_CALL(sub_1717AF06); /* 0x171853EA: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x171853EF: mov ecx, dword ptr [ebp - 0xc] */
    esi = POP32_VAL(esp); /* 0x171853F2: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x171853F3: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171853FA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171853FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_17185401(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17185401u);

L_17185401:
    edi = edi; /* 0x17185401: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17185403: push ebp */
    ebp = esp; /* 0x17185404: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17185406: push esi */
    PUSH32(esp, edi); /* 0x17185407: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17185408: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1718540B: push edi */
    esi = ecx; /* 0x1718540C: mov esi, ecx */
    RECOMP_CALL(sub_17184E95); /* 0x1718540E: call 0x17184e95 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x17185413: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x17185416: mov dword ptr [esi + 0x10], eax */
    edi = POP32_VAL(esp); /* 0x17185419: pop edi */
    eax = esi; /* 0x1718541A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718541C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718541D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718541E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17185426(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17185426u);

L_17185426:
    edi = edi; /* 0x17185426: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17185428: push ebp */
    ebp = esp; /* 0x17185429: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718542B: push esi */
    esi = ecx; /* 0x1718542C: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x1718542E: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x17185431: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17185432: mov edi, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edi + 0x8) */ /* 0x17185435: cmp eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17185449; /* 0x17185438: jae 0x17185449 */
L_1718543A:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1718543A: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1718543E: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_17194548); /* 0x17185441: call 0x17194548 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x17185446: mov dword ptr [esi + 0xc], eax */
L_17185449:
    eax = MEM32(edi + 0x4); /* 0x17185449: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718544C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1718544E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x17185450: mov dword ptr [esi + 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185465; /* 0x17185453: jbe 0x17185465 */
L_17185455:
    eax = MEM32(edi); /* 0x17185455: mov eax, dword ptr [edi] */
    eax = MEM32(eax + ecx * 4); /* 0x17185457: mov eax, dword ptr [eax + ecx*4] */
    edx = MEM32(esi); /* 0x1718545A: mov edx, dword ptr [esi] */
    MEM32(edx + ecx * 4) = eax; /* 0x1718545C: mov dword ptr [edx + ecx*4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718545F: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x17185460: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185455; /* 0x17185463: jb 0x17185455 */
L_17185465:
    edi = POP32_VAL(esp); /* 0x17185465: pop edi */
    eax = esi; /* 0x17185466: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17185468: pop esi */
    ebp = POP32_VAL(esp); /* 0x17185469: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718546A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17185472(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17185472u);

L_17185472:
    edi = edi; /* 0x17185472: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17185474: push ebp */
    ebp = esp; /* 0x17185475: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17185477: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1718547A: push esi */
    esi = ecx; /* 0x1718547B: mov esi, ecx */
    MEM32(esi + 0x10) = eax; /* 0x1718547D: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x17185480: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x17185483: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x17185483: shr eax, 3 */
    PUSH32(esp, eax); /* 0x17185486: push eax */
    RECOMP_CALL(sub_171852AF); /* 0x17185487: call 0x171852af */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718548C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171854A1; /* 0x1718548E: jl 0x171854a1 */
L_17185490:
    eax = ebp + 0xB; /* 0x17185490: lea eax, [ebp + 0xb] */
    PUSH32(esp, eax); /* 0x17185493: push eax */
    ecx = esi; /* 0x17185494: mov ecx, esi */
    MEM8(ebp + 0xB) = (uint8_t)(0); /* 0x17185496: mov byte ptr [ebp + 0xb], 0 */
    RECOMP_CALL(sub_1718BAB3); /* 0x1718549A: call 0x1718bab3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718549F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171854A1:
    esi = POP32_VAL(esp); /* 0x171854A1: pop esi */
    ebp = POP32_VAL(esp); /* 0x171854A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171854A3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171854AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171854ABu);

L_171854AB:
    edi = edi; /* 0x171854AB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171854AD: push ebp */
    ebp = esp; /* 0x171854AE: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171854B0: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x171854B3: add eax, 3 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x171854B6: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x171854B6: shr eax, 2 */
    PUSH32(esp, eax); /* 0x171854B9: push eax */
    RECOMP_CALL(sub_171852AF); /* 0x171854BA: call 0x171852af */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171854BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171854C0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171854C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171854C8u);

L_171854C8:
    edi = edi; /* 0x171854C8: mov edi, edi */
    PUSH32(esp, esi); /* 0x171854CA: push esi */
    esi = ecx; /* 0x171854CB: mov esi, ecx */
    RECOMP_CALL(sub_1718BF75); /* 0x171854CD: call 0x1718bf75 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171854D2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171854D4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171854D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_171854DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171854DBu);

L_171854DB:
    edi = edi; /* 0x171854DB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171854DD: push ebp */
    ebp = esp; /* 0x171854DE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171854E0: push esi */
    esi = ecx; /* 0x171854E1: mov esi, ecx */
    RECOMP_CALL(sub_1717AFBF); /* 0x171854E3: call 0x1717afbf */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171854E8: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171854F5; /* 0x171854EC: je 0x171854f5 */
L_171854EE:
    PUSH32(esp, esi); /* 0x171854EE: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171854EF: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171854F4: pop ecx */
L_171854F5:
    eax = esi; /* 0x171854F5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171854F7: pop esi */
    ebp = POP32_VAL(esp); /* 0x171854F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171854F9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17185501(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17185501u);

L_17185501:
    eax = 0x1721C36Du; /* 0x17185501: mov eax, 0x1721c36d */
    RECOMP_CALL(sub_1721B168); /* 0x17185506: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1718550B: push ecx */
    PUSH32(esp, esi); /* 0x1718550C: push esi */
    esi = ecx; /* 0x1718550D: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1718550F: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_17185334); /* 0x17185512: call 0x17185334 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x17185517: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1718551A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1718551E: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17185522: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = eax; /* 0x17185524: mov dword ptr [esi + 0x14], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17185536; /* 0x17185527: jl 0x17185536 */
L_17185529:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17185529: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1718552C: mov ecx, esi */
    RECOMP_CALL(sub_17185356); /* 0x1718552E: call 0x17185356 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = eax; /* 0x17185533: mov dword ptr [esi + 0x14], eax */
L_17185536:
    ecx = MEM32(ebp + (-0xC)); /* 0x17185536: mov ecx, dword ptr [ebp - 0xc] */
    eax = esi; /* 0x17185539: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718553B: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718553C: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17185543: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17185544: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718554C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718554Cu);

L_1718554C:
    edi = edi; /* 0x1718554C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718554E: push ebp */
    ebp = esp; /* 0x1718554F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17185551: push ecx */
    PUSH32(esp, ebx); /* 0x17185552: push ebx */
    ebx = ecx; /* 0x17185553: mov ebx, ecx */
    eax = MEM32(ebx + 0x4); /* 0x17185555: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17185558: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebx + 0x10), eax */ /* 0x17185559: cmp dword ptr [ebx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1718555C: push esi */
    PUSH32(esp, edi); /* 0x1718555D: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17185578; /* 0x1718555E: jne 0x17185578 */
L_17185560:
    esi = MEM32(ebp + 0x8); /* 0x17185560: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x17185563: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, 5); /* 0x17185566: push 5 */
    ecx = POP32_VAL(esp); /* 0x17185568: pop ecx */
    edi = esp; /* 0x17185569: mov edi, esp */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718556B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x1718556D: mov ecx, ebx */
    RECOMP_CALL(sub_1718537D); /* 0x1718556F: call 0x1718537d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17185574: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171855C0; /* 0x17185576: jl 0x171855c0 */
L_17185578:
    ecx = MEM32(ebp + 0x8); /* 0x17185578: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x10); /* 0x1718557B: mov eax, dword ptr [ebx + 0x10] */
    ecx = MEM32(ecx); /* 0x1718557E: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17185580: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x17185581: mov dword ptr [ebp - 4], ecx */
    goto L_171855A6; /* 0x17185584: jmp 0x171855a6 */
L_17185586:
    ecx = MEM32(ebx); /* 0x17185586: mov ecx, dword ptr [ebx] */
    edi = MEM32(ebp + (-0x4)); /* 0x17185588: mov edi, dword ptr [ebp - 4] */
    edx = eax; /* 0x1718558B: mov edx, eax */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1718558D: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    esi = edx + edx * 4; /* 0x1718558F: lea esi, [edx + edx*4] */
    esi = ecx + esi * 4; /* 0x17185592: lea esi, [ecx + esi*4] */
    /* cmp MEM32(esi), edi */ /* 0x17185595: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171855AB; /* 0x17185597: jge 0x171855ab */
L_17185599:
    eax = eax + eax * 4; /* 0x17185599: lea eax, [eax + eax*4] */
    edi = ecx + eax * 4; /* 0x1718559C: lea edi, [ecx + eax*4] */
    PUSH32(esp, 5); /* 0x1718559F: push 5 */
    ecx = POP32_VAL(esp); /* 0x171855A1: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171855A2: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = edx; /* 0x171855A4: mov eax, edx */
L_171855A6:
    /* cmp eax, 1 */ /* 0x171855A6: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_17185586; /* 0x171855A9: jg 0x17185586 */
L_171855AB:
    ecx = MEM32(ebx); /* 0x171855AB: mov ecx, dword ptr [ebx] */
    esi = MEM32(ebp + 0x8); /* 0x171855AD: mov esi, dword ptr [ebp + 8] */
    eax = eax + eax * 4; /* 0x171855B0: lea eax, [eax + eax*4] */
    edi = ecx + eax * 4; /* 0x171855B3: lea edi, [ecx + eax*4] */
    PUSH32(esp, 5); /* 0x171855B6: push 5 */
    ecx = POP32_VAL(esp); /* 0x171855B8: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171855B9: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 1; /* 0x171855BB: inc dword ptr [ebx + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171855BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171855C0:
    edi = POP32_VAL(esp); /* 0x171855C0: pop edi */
    esi = POP32_VAL(esp); /* 0x171855C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x171855C2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171855C3: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171855C4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171855CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171855CCu);

L_171855CC:
    edi = edi; /* 0x171855CC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171855CE: push ebp */
    ebp = esp; /* 0x171855CF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x171855D1: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171855D4: push ebx */
    PUSH32(esp, esi); /* 0x171855D5: push esi */
    eax = ecx; /* 0x171855D6: mov eax, ecx */
    edx = MEM32(eax); /* 0x171855D8: mov edx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x171855DA: push edi */
    PUSH32(esp, 5); /* 0x171855DB: push 5 */
    ebx = edx + 0x14; /* 0x171855DD: lea ebx, [edx + 0x14] */
    ecx = POP32_VAL(esp); /* 0x171855E0: pop ecx */
    esi = ebx; /* 0x171855E1: mov esi, ebx */
    edi = ebp + (-0x14); /* 0x171855E3: lea edi, [ebp - 0x14] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171855E6: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(eax + 0x10); /* 0x171855E8: mov ecx, dword ptr [eax + 0x10] */
    ecx = ecx + ecx * 4; /* 0x171855EB: lea ecx, [ecx + ecx*4] */
    esi = edx + ecx * 4; /* 0x171855EE: lea esi, [edx + ecx*4] */
    PUSH32(esp, 5); /* 0x171855F1: push 5 */
    ecx = POP32_VAL(esp); /* 0x171855F3: pop ecx */
    edi = ebx; /* 0x171855F4: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171855F6: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) - 1; /* 0x171855F8: dec dword ptr [eax + 0x10] */
    _flag_k = FK_DEC;
    PUSH32(esp, 1); /* 0x171855FB: push 1 */
    ecx = eax; /* 0x171855FD: mov ecx, eax */
    RECOMP_CALL(sub_171851E2); /* 0x171855FF: call 0x171851e2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x17185604: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 5); /* 0x17185607: push 5 */
    ecx = POP32_VAL(esp); /* 0x17185609: pop ecx */
    esi = ebp + (-0x14); /* 0x1718560A: lea esi, [ebp - 0x14] */
    edi = eax; /* 0x1718560D: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718560F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17185611: pop edi */
    esi = POP32_VAL(esp); /* 0x17185612: pop esi */
    ebx = POP32_VAL(esp); /* 0x17185613: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17185614: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17185615: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718561D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718561Du);

L_1718561D:
    edi = edi; /* 0x1718561D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718561F: push ebp */
    ebp = esp; /* 0x17185620: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x17185622: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x17185626: push edi */
    edi = ecx; /* 0x17185627: mov edi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185650; /* 0x17185629: je 0x17185650 */
L_1718562B:
    PUSH32(esp, esi); /* 0x1718562B: push esi */
    PUSH32(esp, 0x171853C7u); /* 0x1718562C: push 0x171853c7 */
    esi = edi + (-0x4); /* 0x17185631: lea esi, [edi - 4] */
    PUSH32(esp, MEM32(esi)); /* 0x17185634: push dword ptr [esi] */
    PUSH32(esp, 0x2Cu); /* 0x17185636: push 0x2c */
    PUSH32(esp, edi); /* 0x17185638: push edi */
    RECOMP_CALL(sub_1721B478); /* 0x17185639: call 0x1721b478 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1718563E: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718564B; /* 0x17185642: je 0x1718564b */
L_17185644:
    PUSH32(esp, esi); /* 0x17185644: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x17185645: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718564A: pop ecx */
L_1718564B:
    eax = esi; /* 0x1718564B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718564D: pop esi */
    goto L_17185666; /* 0x1718564E: jmp 0x17185666 */
L_17185650:
    ecx = edi; /* 0x17185650: mov ecx, edi */
    RECOMP_CALL(sub_171853C7); /* 0x17185652: call 0x171853c7 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x17185657: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185664; /* 0x1718565B: je 0x17185664 */
L_1718565D:
    PUSH32(esp, edi); /* 0x1718565D: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1718565E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17185663: pop ecx */
L_17185664:
    eax = edi; /* 0x17185664: mov eax, edi */
L_17185666:
    edi = POP32_VAL(esp); /* 0x17185666: pop edi */
    ebp = POP32_VAL(esp); /* 0x17185667: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17185668: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17185670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17185670u);

L_17185670:
    edi = edi; /* 0x17185670: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17185672: push ebp */
    ebp = esp; /* 0x17185673: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x17185675: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x17185679: push edi */
    edi = ecx; /* 0x1718567A: mov edi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171856A3; /* 0x1718567C: je 0x171856a3 */
L_1718567E:
    PUSH32(esp, esi); /* 0x1718567E: push esi */
    PUSH32(esp, 0x171853C7u); /* 0x1718567F: push 0x171853c7 */
    esi = edi + (-0x4); /* 0x17185684: lea esi, [edi - 4] */
    PUSH32(esp, MEM32(esi)); /* 0x17185687: push dword ptr [esi] */
    PUSH32(esp, 0x24u); /* 0x17185689: push 0x24 */
    PUSH32(esp, edi); /* 0x1718568B: push edi */
    RECOMP_CALL(sub_1721B478); /* 0x1718568C: call 0x1721b478 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x17185691: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718569E; /* 0x17185695: je 0x1718569e */
L_17185697:
    PUSH32(esp, esi); /* 0x17185697: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x17185698: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718569D: pop ecx */
L_1718569E:
    eax = esi; /* 0x1718569E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171856A0: pop esi */
    goto L_171856B9; /* 0x171856A1: jmp 0x171856b9 */
L_171856A3:
    ecx = edi; /* 0x171856A3: mov ecx, edi */
    RECOMP_CALL(sub_171853C7); /* 0x171856A5: call 0x171853c7 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171856AA: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171856B7; /* 0x171856AE: je 0x171856b7 */
L_171856B0:
    PUSH32(esp, edi); /* 0x171856B0: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x171856B1: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171856B6: pop ecx */
L_171856B7:
    eax = edi; /* 0x171856B7: mov eax, edi */
L_171856B9:
    edi = POP32_VAL(esp); /* 0x171856B9: pop edi */
    ebp = POP32_VAL(esp); /* 0x171856BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171856BB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171856C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171856C3u);

L_171856C3:
    eax = 0x1721C356u; /* 0x171856C3: mov eax, 0x1721c356 */
    RECOMP_CALL(sub_1721B168); /* 0x171856C8: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x171856CD: push ecx */
    PUSH32(esp, esi); /* 0x171856CE: push esi */
    esi = ecx; /* 0x171856CF: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x171856D1: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_1718BF75); /* 0x171856D4: call 0x1718bf75 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171856D9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x14; /* 0x171856DD: lea ecx, [esi + 0x14] */
    RECOMP_CALL(sub_1718BF75); /* 0x171856E0: call 0x1718bf75 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x171856E5: mov ecx, dword ptr [ebp - 0xc] */
    eax = esi; /* 0x171856E8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171856EA: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x171856EB: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171856F2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171856F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_171856F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171856F9u);

L_171856F9:
    edi = edi; /* 0x171856F9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171856FB: push ebp */
    ebp = esp; /* 0x171856FC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171856FE: push esi */
    PUSH32(esp, edi); /* 0x171856FF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17185700: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x17185703: push edi */
    esi = ecx; /* 0x17185704: mov esi, ecx */
    RECOMP_CALL(sub_17185401); /* 0x17185706: call 0x17185401 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x14; /* 0x1718570B: lea eax, [edi + 0x14] */
    PUSH32(esp, eax); /* 0x1718570E: push eax */
    ecx = esi + 0x14; /* 0x1718570F: lea ecx, [esi + 0x14] */
    RECOMP_CALL(sub_17185401); /* 0x17185712: call 0x17185401 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x28); /* 0x17185717: mov eax, dword ptr [edi + 0x28] */
    MEM32(esi + 0x28) = eax; /* 0x1718571A: mov dword ptr [esi + 0x28], eax */
    edi = POP32_VAL(esp); /* 0x1718571D: pop edi */
    eax = esi; /* 0x1718571E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17185720: pop esi */
    ebp = POP32_VAL(esp); /* 0x17185721: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17185722: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718572A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718572Au);

L_1718572A:
    eax = 0x1721C356u; /* 0x1718572A: mov eax, 0x1721c356 */
    RECOMP_CALL(sub_1721B168); /* 0x1718572F: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x17185734: push ecx */
    PUSH32(esp, esi); /* 0x17185735: push esi */
    esi = ecx; /* 0x17185736: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x17185738: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_1718BF75); /* 0x1718573B: call 0x1718bf75 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17185740: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x14; /* 0x17185744: lea ecx, [esi + 0x14] */
    RECOMP_CALL(sub_17195352); /* 0x17185747: call 0x17195352 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1718574C: mov ecx, dword ptr [ebp - 0xc] */
    eax = esi; /* 0x1718574F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17185751: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x17185752: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17185759: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718575A: ret  */
    RECOMP_REGS_OUT();
}

void sub_17185760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17185760u);

L_17185760:
    edi = edi; /* 0x17185760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17185762: push ebp */
    ebp = esp; /* 0x17185763: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17185765: push esi */
    PUSH32(esp, edi); /* 0x17185766: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17185767: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1718576A: push edi */
    esi = ecx; /* 0x1718576B: mov esi, ecx */
    RECOMP_CALL(sub_17185401); /* 0x1718576D: call 0x17185401 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x17185772: add edi, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x17185775: push edi */
    ecx = esi + 0x14; /* 0x17185776: lea ecx, [esi + 0x14] */
    RECOMP_CALL(sub_17185426); /* 0x17185779: call 0x17185426 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1718577E: pop edi */
    eax = esi; /* 0x1718577F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17185781: pop esi */
    ebp = POP32_VAL(esp); /* 0x17185782: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17185783: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718578B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718578Bu);

L_1718578B:
    edi = edi; /* 0x1718578B: mov edi, edi */
    PUSH32(esp, esi); /* 0x1718578D: push esi */
    esi = ecx; /* 0x1718578E: mov esi, ecx */
    ecx = MEM32(esi); /* 0x17185790: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x17185792: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718579D; /* 0x17185794: je 0x1718579d */
L_17185796:
    PUSH32(esp, 3); /* 0x17185796: push 3 */
    RECOMP_CALL(sub_1718561D); /* 0x17185798: call 0x1718561d */
    RECOMP_FLAGS_IN();
L_1718579D:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1718579D: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x171857A1: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171857A5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171857A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_171857AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171857ACu);

L_171857AC:
    edi = edi; /* 0x171857AC: mov edi, edi */
    PUSH32(esp, esi); /* 0x171857AE: push esi */
    esi = ecx; /* 0x171857AF: mov esi, ecx */
    ecx = MEM32(esi); /* 0x171857B1: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x171857B3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171857BE; /* 0x171857B5: je 0x171857be */
L_171857B7:
    PUSH32(esp, 3); /* 0x171857B7: push 3 */
    RECOMP_CALL(sub_17185670); /* 0x171857B9: call 0x17185670 */
    RECOMP_FLAGS_IN();
L_171857BE:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x171857BE: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x171857C2: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171857C6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171857C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_171857CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171857CDu);

L_171857CD:
    eax = 0x1721C386u; /* 0x171857CD: mov eax, 0x1721c386 */
    RECOMP_CALL(sub_1721B168); /* 0x171857D2: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x171857D7: push ecx */
    PUSH32(esp, ebx); /* 0x171857D8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171857D9: mov ebx, dword ptr [ebp + 8] */
    eax = ebx; /* 0x171857DC: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2Cu); /* 0x171857DE: imul eax, eax, 0x2c */
    PUSH32(esp, esi); /* 0x171857E1: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171857E2: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171857E5: push edi */
    PUSH32(esp, eax); /* 0x171857E6: push eax */
    esi = ecx; /* 0x171857E7: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x171857E9: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171857EE: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x171857EF: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171857F2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171857F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185817; /* 0x171857F8: je 0x17185817 */
L_171857FA:
    PUSH32(esp, 0x171853C7u); /* 0x171857FA: push 0x171853c7 */
    PUSH32(esp, 0x171856C3u); /* 0x171857FF: push 0x171856c3 */
    PUSH32(esp, ebx); /* 0x17185804: push ebx */
    edi = eax + 0x4; /* 0x17185805: lea edi, [eax + 4] */
    PUSH32(esp, 0x2Cu); /* 0x17185808: push 0x2c */
    PUSH32(esp, edi); /* 0x1718580A: push edi */
    MEM32(eax) = ebx; /* 0x1718580B: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1721B4DD); /* 0x1718580D: call 0x1721b4dd */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = edi; /* 0x17185812: mov dword ptr [ebp - 0x10], edi */
    goto L_1718581B; /* 0x17185815: jmp 0x1718581b */
L_17185817:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17185817: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718581B:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1718581B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718581F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x17185821: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718582D; /* 0x17185824: jne 0x1718582d */
L_17185826:
    eax = 0x8007000Eu; /* 0x17185826: mov eax, 0x8007000e */
    goto L_17185876; /* 0x1718582B: jmp 0x17185876 */
L_1718582D:
    /* cmp MEM32(esi), ebx */ /* 0x1718582D: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17185869; /* 0x1718582F: je 0x17185869 */
L_17185831:
    eax = MEM32(esi + 0x4); /* 0x17185831: mov eax, dword ptr [esi + 4] */
    /* cmp eax, ebx */ /* 0x17185834: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718585C; /* 0x17185836: je 0x1718585c */
L_17185838:
    /* test eax, eax */ /* 0x17185838: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718585C; /* 0x1718583A: jbe 0x1718585c */
L_1718583C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718583C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718583E:
    /* cmp ebx, MEM32(ebp + 0x8) */ /* 0x1718583E: cmp ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1718585C; /* 0x17185841: jae 0x1718585c */
L_17185843:
    eax = MEM32(esi); /* 0x17185843: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x17185845: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17185847: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x17185848: mov eax, dword ptr [ebp - 0x10] */
    ecx = edi + eax; /* 0x1718584B: lea ecx, [edi + eax] */
    RECOMP_CALL(sub_171856F9); /* 0x1718584E: call 0x171856f9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17185853: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x2Cu; /* 0x17185854: add edi, 0x2c */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(esi + 0x4) */ /* 0x17185857: cmp ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718583E; /* 0x1718585A: jb 0x1718583e */
L_1718585C:
    ecx = MEM32(esi); /* 0x1718585C: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1718585E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185869; /* 0x17185860: je 0x17185869 */
L_17185862:
    PUSH32(esp, 3); /* 0x17185862: push 3 */
    RECOMP_CALL(sub_1718561D); /* 0x17185864: call 0x1718561d */
    RECOMP_FLAGS_IN();
L_17185869:
    eax = MEM32(ebp + 0x8); /* 0x17185869: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1718586C: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1718586F: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi) = eax; /* 0x17185872: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185874: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17185876:
    ecx = MEM32(ebp + (-0xC)); /* 0x17185876: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x17185879: pop edi */
    esi = POP32_VAL(esp); /* 0x1718587A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718587B: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718587C: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17185883: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17185884: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718588C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718588Cu);

L_1718588C:
    eax = 0x1721C39Fu; /* 0x1718588C: mov eax, 0x1721c39f */
    RECOMP_CALL(sub_1721B168); /* 0x17185891: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x17185896: push ecx */
    PUSH32(esp, ebx); /* 0x17185897: push ebx */
    PUSH32(esp, esi); /* 0x17185898: push esi */
    PUSH32(esp, edi); /* 0x17185899: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718589A: mov edi, dword ptr [ebp + 8] */
    eax = edi + edi * 8; /* 0x1718589D: lea eax, [edi + edi*8] */
    eax = eax * 4 + 0x4; /* 0x171858A0: lea eax, [eax*4 + 4] */
    PUSH32(esp, eax); /* 0x171858A7: push eax */
    esi = ecx; /* 0x171858A8: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x171858AA: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171858AF: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x171858B0: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171858B3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171858B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171858D8; /* 0x171858B9: je 0x171858d8 */
L_171858BB:
    PUSH32(esp, 0x171853C7u); /* 0x171858BB: push 0x171853c7 */
    PUSH32(esp, 0x1718572Au); /* 0x171858C0: push 0x1718572a */
    PUSH32(esp, edi); /* 0x171858C5: push edi */
    ebx = eax + 0x4; /* 0x171858C6: lea ebx, [eax + 4] */
    PUSH32(esp, 0x24u); /* 0x171858C9: push 0x24 */
    PUSH32(esp, ebx); /* 0x171858CB: push ebx */
    MEM32(eax) = edi; /* 0x171858CC: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1721B4DD); /* 0x171858CE: call 0x1721b4dd */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = ebx; /* 0x171858D3: mov dword ptr [ebp - 0x10], ebx */
    goto L_171858DC; /* 0x171858D6: jmp 0x171858dc */
L_171858D8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x171858D8: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171858DC:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x171858DC: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171858E0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x171858E2: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171858EE; /* 0x171858E5: jne 0x171858ee */
L_171858E7:
    eax = 0x8007000Eu; /* 0x171858E7: mov eax, 0x8007000e */
    goto L_17185938; /* 0x171858EC: jmp 0x17185938 */
L_171858EE:
    /* cmp MEM32(esi), ebx */ /* 0x171858EE: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718592E; /* 0x171858F0: je 0x1718592e */
L_171858F2:
    eax = MEM32(esi + 0x4); /* 0x171858F2: mov eax, dword ptr [esi + 4] */
    /* cmp eax, ebx */ /* 0x171858F5: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17185921; /* 0x171858F7: je 0x17185921 */
L_171858F9:
    MEM32(ebp + 0x8) = ebx; /* 0x171858F9: mov dword ptr [ebp + 8], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17185921; /* 0x171858FC: jbe 0x17185921 */
L_171858FE:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x171858FE: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17185921; /* 0x17185901: jae 0x17185921 */
L_17185903:
    eax = MEM32(esi); /* 0x17185903: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x17185905: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17185907: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x17185908: mov eax, dword ptr [ebp - 0x10] */
    ecx = ebx + eax; /* 0x1718590B: lea ecx, [ebx + eax] */
    RECOMP_CALL(sub_17185760); /* 0x1718590E: call 0x17185760 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17185913: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x17185916: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x24u; /* 0x17185919: add ebx, 0x24 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1718591C: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171858FE; /* 0x1718591F: jb 0x171858fe */
L_17185921:
    ecx = MEM32(esi); /* 0x17185921: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x17185923: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718592E; /* 0x17185925: je 0x1718592e */
L_17185927:
    PUSH32(esp, 3); /* 0x17185927: push 3 */
    RECOMP_CALL(sub_17185670); /* 0x17185929: call 0x17185670 */
    RECOMP_FLAGS_IN();
L_1718592E:
    eax = MEM32(ebp + (-0x10)); /* 0x1718592E: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi) = eax; /* 0x17185931: mov dword ptr [esi], eax */
    MEM32(esi + 0x8) = edi; /* 0x17185933: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185936: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17185938:
    ecx = MEM32(ebp + (-0xC)); /* 0x17185938: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1718593B: pop edi */
    esi = POP32_VAL(esp); /* 0x1718593C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718593D: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718593E: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17185945: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17185946: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718594E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718594Eu);

L_1718594E:
    edi = edi; /* 0x1718594E: mov edi, edi */
    PUSH32(esp, esi); /* 0x17185950: push esi */
    esi = ecx; /* 0x17185951: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185953: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x17185955: push 8 */
    MEM32(esi) = eax; /* 0x17185957: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x17185959: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x1718595C: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_171857CD); /* 0x1718595F: call 0x171857cd */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x17185964: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x17185967: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17185969: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718596A: ret  */
    RECOMP_REGS_OUT();
}

void sub_17185970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17185970u);

L_17185970:
    edi = edi; /* 0x17185970: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17185972: push ebp */
    ebp = esp; /* 0x17185973: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17185975: push esi */
    PUSH32(esp, edi); /* 0x17185976: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17185977: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1718597A: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x1718597C: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17185985; /* 0x1718597F: jne 0x17185985 */
L_17185981:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185981: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17185991; /* 0x17185983: jmp 0x17185991 */
L_17185985:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x17185985: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17185989: push edi */
    ecx = esi; /* 0x1718598A: mov ecx, esi */
    RECOMP_CALL(sub_171857CD); /* 0x1718598C: call 0x171857cd */
    RECOMP_FLAGS_IN();
L_17185991:
    MEM32(esi + 0x4) = edi; /* 0x17185991: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x17185994: pop edi */
    esi = POP32_VAL(esp); /* 0x17185995: pop esi */
    ebp = POP32_VAL(esp); /* 0x17185996: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17185997: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718599F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718599Fu);

L_1718599F:
    edi = edi; /* 0x1718599F: mov edi, edi */
    PUSH32(esp, esi); /* 0x171859A1: push esi */
    esi = ecx; /* 0x171859A2: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171859A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x171859A6: push 8 */
    MEM32(esi) = eax; /* 0x171859A8: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x171859AA: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x171859AD: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_1718588C); /* 0x171859B0: call 0x1718588c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x171859B5: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x171859B8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171859BA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171859BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_171859C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171859C1u);

L_171859C1:
    edi = edi; /* 0x171859C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171859C3: push ebp */
    ebp = esp; /* 0x171859C4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171859C6: push esi */
    PUSH32(esp, edi); /* 0x171859C7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171859C8: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x171859CB: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x171859CD: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171859D6; /* 0x171859D0: jne 0x171859d6 */
L_171859D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171859D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171859E2; /* 0x171859D4: jmp 0x171859e2 */
L_171859D6:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x171859D6: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171859DA: push edi */
    ecx = esi; /* 0x171859DB: mov ecx, esi */
    RECOMP_CALL(sub_1718588C); /* 0x171859DD: call 0x1718588c */
    RECOMP_FLAGS_IN();
L_171859E2:
    MEM32(esi + 0x4) = edi; /* 0x171859E2: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x171859E5: pop edi */
    esi = POP32_VAL(esp); /* 0x171859E6: pop esi */
    ebp = POP32_VAL(esp); /* 0x171859E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171859E8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171859F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171859F0u);

L_171859F0:
    eax = 0x1721C3DBu; /* 0x171859F0: mov eax, 0x1721c3db */
    RECOMP_CALL(sub_1721B168); /* 0x171859F5: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xBCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xBCu; /* 0x171859FA: sub esp, 0xbc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17185A00: push ebx */
    PUSH32(esp, esi); /* 0x17185A01: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17185A02: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17185A04: push edi */
    ecx = ebp + (-0x58); /* 0x17185A05: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x18)) = esi; /* 0x17185A08: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x17185A0B: mov dword ptr [ebp - 0x20], esi */
    RECOMP_CALL(sub_1718594E); /* 0x17185A0E: call 0x1718594e */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x78); /* 0x17185A13: lea ecx, [ebp - 0x78] */
    MEM32(ebp + (-0x4)) = esi; /* 0x17185A16: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_17195352); /* 0x17185A19: call 0x17195352 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8C); /* 0x17185A1E: lea ecx, [ebp - 0x8c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x17185A24: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1718BF75); /* 0x17185A28: call 0x1718bf75 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x68); /* 0x17185A2D: lea ecx, [ebp - 0x68] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x17185A30: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1718BF75); /* 0x17185A34: call 0x1718bf75 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x6C)), esi */ /* 0x17185A39: cmp dword ptr [ebp - 0x6c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x17185A3C: mov byte ptr [ebp - 4], 3 */
    if (CMP_L(_flag_a, _flag_b)) goto L_17186080; /* 0x17185A40: jl 0x17186080 */
L_17185A46:
    /* cmp MEM32(ebp + (-0x4C)), esi */ /* 0x17185A46: cmp dword ptr [ebp - 0x4c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17186080; /* 0x17185A49: jl 0x17186080 */
L_17185A4F:
    /* cmp MEM32(ebp + (-0x80)), esi */ /* 0x17185A4F: cmp dword ptr [ebp - 0x80], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17186080; /* 0x17185A52: jl 0x17186080 */
L_17185A58:
    /* cmp MEM32(ebp + (-0x5C)), esi */ /* 0x17185A58: cmp dword ptr [ebp - 0x5c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17186080; /* 0x17185A5B: jl 0x17186080 */
L_17185A61:
    eax = MEM32(ebp + 0x10); /* 0x17185A61: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x17185A64: push dword ptr [eax + 4] */
    ecx = ebp + (-0x68); /* 0x17185A67: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_171854AB); /* 0x17185A6A: call 0x171854ab */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17185A6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17186080; /* 0x17185A71: jl 0x17186080 */
L_17185A77:
    PUSH32(esp, esi); /* 0x17185A77: push esi */
    ecx = ebp + (-0x68); /* 0x17185A78: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_17185021); /* 0x17185A7B: call 0x17185021 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x14); /* 0x17185A80: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x17185A83: push edi */
    ecx = ebp + (-0x58); /* 0x17185A84: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x48)) = esi; /* 0x17185A87: mov dword ptr [ebp - 0x48], esi */
    MEM32(ebp + (-0x44)) = esi; /* 0x17185A8A: mov dword ptr [ebp - 0x44], esi */
    MEM32(ebp + (-0x40)) = esi; /* 0x17185A8D: mov dword ptr [ebp - 0x40], esi */
    MEM32(ebp + (-0x3C)) = esi; /* 0x17185A90: mov dword ptr [ebp - 0x3c], esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x17185A93: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_17185970); /* 0x17185A96: call 0x17185970 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17185A9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17186080; /* 0x17185A9D: jl 0x17186080 */
L_17185AA3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & esi; /* 0x17185AA3: and dword ptr [ebp - 0x10], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17185AA6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x58)); /* 0x17185AA8: mov ebx, dword ptr [ebp - 0x58] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185AEC; /* 0x17185AAB: jbe 0x17185aec */
L_17185AAD:
    esi = ebx; /* 0x17185AAD: mov esi, ebx */
L_17185AAF:
    PUSH32(esp, edi); /* 0x17185AAF: push edi */
    ecx = esi; /* 0x17185AB0: mov ecx, esi */
    RECOMP_CALL(sub_17185472); /* 0x17185AB2: call 0x17185472 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17185AB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17186080; /* 0x17185AB9: jl 0x17186080 */
L_17185ABF:
    PUSH32(esp, edi); /* 0x17185ABF: push edi */
    ecx = esi + 0x14; /* 0x17185AC0: lea ecx, [esi + 0x14] */
    RECOMP_CALL(sub_17185472); /* 0x17185AC3: call 0x17185472 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17185AC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17186080; /* 0x17185ACA: jl 0x17186080 */
L_17185AD0:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x17185AD0: push dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x17185AD3: mov ecx, esi */
    MEM32(esi + 0x28) = 1; /* 0x17185AD5: mov dword ptr [esi + 0x28], 1 */
    RECOMP_CALL(sub_17184EE1); /* 0x17185ADC: call 0x17184ee1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x17185AE1: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x2Cu; /* 0x17185AE4: add esi, 0x2c */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x17185AE7: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185AAF; /* 0x17185AEA: jb 0x17185aaf */
L_17185AEC:
    eax = MEM32(ebp + 0x10); /* 0x17185AEC: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x17185AEF: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x17185AF2: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17185AF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185C07; /* 0x17185AF8: jbe 0x17185c07 */
L_17185AFE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17185AFE: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17185B02:
    eax = MEM32(ebp + 0x10); /* 0x17185B02: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x17185B05: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x10)); /* 0x17185B07: add eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    edx = ebp + (-0x2C); /* 0x17185B0A: lea edx, [ebp - 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17185B0D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17185B0F: sub eax, edx */
    _flag_k = FK_CMP;
L_17185B11:
    esi = MEM32(ebp + 0xC); /* 0x17185B11: mov esi, dword ptr [ebp + 0xc] */
    edx = eax + ecx * 4; /* 0x17185B14: lea edx, [eax + ecx*4] */
    edx = MEM32(ebp + edx + (-0x2C)); /* 0x17185B17: mov edx, dword ptr [ebp + edx - 0x2c] */
    edx = MEM32(esi + edx * 4); /* 0x17185B1B: mov edx, dword ptr [esi + edx*4] */
    MEM32(ebp + ecx * 4 + (-0x2C)) = edx; /* 0x17185B1E: mov dword ptr [ebp + ecx*4 - 0x2c], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17185B22: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 3 */ /* 0x17185B23: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185B11; /* 0x17185B26: jb 0x17185b11 */
L_17185B28:
    ecx = MEM32(ebp + (-0x2C)); /* 0x17185B28: mov ecx, dword ptr [ebp - 0x2c] */
    /* cmp ecx, MEM32(ebp + (-0x28)) */ /* 0x17185B2B: cmp ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x24)); /* 0x17185B2E: mov esi, dword ptr [ebp - 0x24] */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17185B31: sete al */
    /* cmp ecx, esi */ /* 0x17185B34: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17185B36: sete cl */
    /* cmp MEM32(ebp + (-0x28)), esi */ /* 0x17185B39: cmp dword ptr [ebp - 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17185B3C: sete dl */
    /* test LO8(eax), LO8(eax) */ /* 0x17185B3F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185BD6; /* 0x17185B41: je 0x17185bd6 */
L_17185B47:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17185B47: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185B53; /* 0x17185B49: je 0x17185b53 */
L_17185B4B:
    /* test LO8(edx), LO8(edx) */ /* 0x17185B4B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17185BEE; /* 0x17185B4D: jne 0x17185bee */
L_17185B53:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17185B53: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17185B55: inc edi */
    _flag_k = FK_INC;
L_17185B56:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x17185B56: push dword ptr [ebp - 0x14] */
    ecx = ebp + (-0x78); /* 0x17185B59: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_17175CCD); /* 0x17185B5C: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17185B61: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17186080; /* 0x17185B63: jl 0x17186080 */
L_17185B69:
    PUSH32(esp, edi); /* 0x17185B69: push edi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17185B6A: push dword ptr [ebp - 0x1c] */
    ecx = ebp + (-0x68); /* 0x17185B6D: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_17184FBA); /* 0x17185B70: call 0x17184fba */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x17185B75: push dword ptr [ebp - 0x28] */
    eax = ebp + edi * 4 + (-0x44); /* 0x17185B78: lea eax, [ebp + edi*4 - 0x44] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x17185B7C: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x2C)); /* 0x17185B7E: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 1; /* 0x17185B81: inc dword ptr [ebp - 0x1c] */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2Cu); /* 0x17185B84: imul eax, eax, 0x2c */
    edi = eax + ebx + 0x14; /* 0x17185B87: lea edi, [eax + ebx + 0x14] */
    ecx = edi; /* 0x17185B8B: mov ecx, edi */
    RECOMP_CALL(sub_17184EE1); /* 0x17185B8D: call 0x17184ee1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x17185B92: push esi */
    ecx = edi; /* 0x17185B93: mov ecx, edi */
    RECOMP_CALL(sub_17184EE1); /* 0x17185B95: call 0x17184ee1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x17185B9A: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x17185B9D: push dword ptr [ebp - 0x2c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2Cu); /* 0x17185BA0: imul eax, eax, 0x2c */
    edi = eax + ebx + 0x14; /* 0x17185BA3: lea edi, [eax + ebx + 0x14] */
    ecx = edi; /* 0x17185BA7: mov ecx, edi */
    RECOMP_CALL(sub_17184EE1); /* 0x17185BA9: call 0x17184ee1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x17185BAE: push esi */
    ecx = edi; /* 0x17185BAF: mov ecx, edi */
    RECOMP_CALL(sub_17184EE1); /* 0x17185BB1: call 0x17184ee1 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2Cu); /* 0x17185BB6: imul esi, esi, 0x2c */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x17185BB9: push dword ptr [ebp - 0x2c] */
    esi = esi + ebx + 0x14; /* 0x17185BBC: lea esi, [esi + ebx + 0x14] */
    ecx = esi; /* 0x17185BC0: mov ecx, esi */
    RECOMP_CALL(sub_17184EE1); /* 0x17185BC2: call 0x17184ee1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x17185BC7: push dword ptr [ebp - 0x28] */
    ecx = esi; /* 0x17185BCA: mov ecx, esi */
    RECOMP_CALL(sub_17184EE1); /* 0x17185BCC: call 0x17184ee1 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x14); /* 0x17185BD1: mov edi, dword ptr [ebp + 0x14] */
    goto L_17185BF1; /* 0x17185BD4: jmp 0x17185bf1 */
L_17185BD6:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17185BD6: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17185B53; /* 0x17185BD8: jne 0x17185b53 */
L_17185BDE:
    /* test LO8(edx), LO8(edx) */ /* 0x17185BDE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17185B53; /* 0x17185BE0: jne 0x17185b53 */
L_17185BE6:
    PUSH32(esp, 2); /* 0x17185BE6: push 2 */
    edi = POP32_VAL(esp); /* 0x17185BE8: pop edi */
    RECOMP_BACKEDGE();
    goto L_17185B56; /* 0x17185BE9: jmp 0x17185b56 */
L_17185BEE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) + 1; /* 0x17185BEE: inc dword ptr [ebp - 0x44] */
    _flag_k = FK_INC;
L_17185BF1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x17185BF1: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x10); /* 0x17185BF4: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x14)); /* 0x17185BF7: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 0xCu; /* 0x17185BFA: add dword ptr [ebp - 0x10], 0xc */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x17185BFE: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185B02; /* 0x17185C01: jb 0x17185b02 */
L_17185C07:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17185C07: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x17185C09: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi + 0x1; /* 0x17185C0B: lea eax, [edi + 1] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x17185C0E: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x17185C11: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x17185C14: mov dword ptr [ebp - 0x18], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17185C46; /* 0x17185C17: jbe 0x17185c46 */
L_17185C19:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x17185C19: add ebx, 0x14 */
    _flag_k = FK_ADD;
L_17185C1C:
    PUSH32(esp, esi); /* 0x17185C1C: push esi */
    ecx = ebx; /* 0x17185C1D: mov ecx, ebx */
    RECOMP_CALL(sub_17184F36); /* 0x17185C1F: call 0x17184f36 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x17185C24: mov ecx, ebx */
    RECOMP_CALL(sub_17184F5C); /* 0x17185C26: call 0x17184f5c */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x17185C2B: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17185C33; /* 0x17185C2E: jbe 0x17185c33 */
L_17185C30:
    MEM32(ebp + (-0x20)) = eax; /* 0x17185C30: mov dword ptr [ebp - 0x20], eax */
L_17185C33:
    /* cmp eax, MEM32(ebp + (-0x18)) */ /* 0x17185C33: cmp eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17185C3B; /* 0x17185C36: jae 0x17185c3b */
L_17185C38:
    MEM32(ebp + (-0x18)) = eax; /* 0x17185C38: mov dword ptr [ebp - 0x18], eax */
L_17185C3B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + eax; /* 0x17185C3B: add dword ptr [ebp - 0x1c], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17185C3E: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2Cu; /* 0x17185C3F: add ebx, 0x2c */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x17185C42: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185C1C; /* 0x17185C44: jb 0x17185c1c */
L_17185C46:
    esi = edi; /* 0x17185C46: mov esi, edi */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x17185C48: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x17185C48: shl esi, 2 */
    PUSH32(esp, esi); /* 0x17185C4B: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x17185C4C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x17185C51: push esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x17185C52: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17185C55: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x17185C5A: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17185C5E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17185C5F: pop ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x17185C60: mov dword ptr [ebp - 0x20], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186080; /* 0x17185C63: je 0x17186080 */
L_17185C69:
    /* test eax, eax */ /* 0x17185C69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186080; /* 0x17185C6B: je 0x17186080 */
L_17185C71:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185C71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17185C73: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185C8C; /* 0x17185C75: jbe 0x17185c8c */
L_17185C77:
    ecx = MEM32(ebp + (-0x18)); /* 0x17185C77: mov ecx, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0x20)); /* 0x17185C7A: mov edx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x17185C7D: sub edx, ecx */
    _flag_k = FK_CMP;
L_17185C7F:
    MEM32(edx + ecx) = eax; /* 0x17185C7F: mov dword ptr [edx + ecx], eax */
    MEM32(ecx) = eax; /* 0x17185C82: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17185C84: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17185C85: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x17185C88: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185C7F; /* 0x17185C8A: jb 0x17185c7f */
L_17185C8C:
    PUSH32(esp, 0x18u); /* 0x17185C8C: push 0x18 */
    RECOMP_CALL(sub_1721B01C); /* 0x17185C8E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17185C93: pop ecx */
    MEM32(ebp + (-0x38)) = eax; /* 0x17185C94: mov dword ptr [ebp - 0x38], eax */
    /* test eax, eax */ /* 0x17185C97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x17185C99: mov byte ptr [ebp - 4], 4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185CAB; /* 0x17185C9D: je 0x17185cab */
L_17185C9F:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17185C9F: push dword ptr [ebp - 0x1c] */
    ecx = eax; /* 0x17185CA2: mov ecx, eax */
    RECOMP_CALL(sub_17185501); /* 0x17185CA4: call 0x17185501 */
    RECOMP_FLAGS_IN();
    goto L_17185CAD; /* 0x17185CA9: jmp 0x17185cad */
L_17185CAB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185CAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17185CAD:
    /* test eax, eax */ /* 0x17185CAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x17185CAF: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x17185CB2: mov byte ptr [ebp - 4], 3 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186080; /* 0x17185CB6: je 0x17186080 */
L_17185CBC:
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x17185CBC: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17186076; /* 0x17185CC0: jl 0x17186076 */
L_17185CC6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17185CC6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x17185CC8: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17185D48; /* 0x17185CCB: jbe 0x17185d48 */
L_17185CCD:
    eax = MEM32(ebp + (-0x58)); /* 0x17185CCD: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x17185CD0: add eax, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x17185CD3: mov dword ptr [ebp - 0x1c], eax */
L_17185CD6:
    ebx = edi + 0x1; /* 0x17185CD6: lea ebx, [edi + 1] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x17185CD9: mov dword ptr [ebp - 0x10], ebx */
    goto L_17185D37; /* 0x17185CDC: jmp 0x17185d37 */
L_17185CDE:
    ecx = MEM32(ebp + (-0x1C)); /* 0x17185CDE: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x17185CE1: push ebx */
    RECOMP_CALL(sub_17184F05); /* 0x17185CE2: call 0x17184f05 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x17185CE7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185D36; /* 0x17185CE9: je 0x17185d36 */
L_17185CEB:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17185CEB: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0x18)); /* 0x17185CEE: mov eax, dword ptr [ebp - 0x18] */
    ecx = ebp + (-0x68); /* 0x17185CF1: lea ecx, [ebp - 0x68] */
    PUSH32(esp, ecx); /* 0x17185CF4: push ecx */
    ecx = ebp + (-0x78); /* 0x17185CF5: lea ecx, [ebp - 0x78] */
    PUSH32(esp, ecx); /* 0x17185CF8: push ecx */
    PUSH32(esp, eax); /* 0x17185CF9: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17185CFA: push dword ptr [ebp + 0xc] */
    esi = eax + ebx * 4; /* 0x17185CFD: lea esi, [eax + ebx*4] */
    MEM32(esi) = edi; /* 0x17185D00: mov dword ptr [esi], edi */
    RECOMP_CALL(sub_1718504F); /* 0x17185D02: call 0x1718504f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17185D07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17185D34; /* 0x17185D09: jle 0x17185d34 */
L_17185D0B:
    PUSH32(esp, eax); /* 0x17185D0B: push eax */
    PUSH32(esp, 1); /* 0x17185D0C: push 1 */
    PUSH32(esp, ebx); /* 0x17185D0E: push ebx */
    PUSH32(esp, 1); /* 0x17185D0F: push 1 */
    PUSH32(esp, edi); /* 0x17185D11: push edi */
    ecx = ebp + (-0xA0); /* 0x17185D12: lea ecx, [ebp - 0xa0] */
    RECOMP_CALL(sub_17184D4F); /* 0x17185D18: call 0x17184d4f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x17185D1D: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + (-0xA0); /* 0x17185D20: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x17185D26: push eax */
    RECOMP_CALL(sub_1718554C); /* 0x17185D27: call 0x1718554c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17185D2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17186076; /* 0x17185D2E: jl 0x17186076 */
L_17185D34:
    MEM32(esi) = ebx; /* 0x17185D34: mov dword ptr [esi], ebx */
L_17185D36:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17185D36: inc ebx */
    _flag_k = FK_INC;
L_17185D37:
    /* cmp ebx, MEM32(ebp + 0x14) */ /* 0x17185D37: cmp ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185CDE; /* 0x17185D3A: jb 0x17185cde */
L_17185D3C:
    edi = MEM32(ebp + (-0x10)); /* 0x17185D3C: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 0x2Cu; /* 0x17185D3F: add dword ptr [ebp - 0x1c], 0x2c */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + 0x14) */ /* 0x17185D43: cmp edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185CD6; /* 0x17185D46: jb 0x17185cd6 */
L_17185D48:
    ecx = MEM32(ebp + (-0x14)); /* 0x17185D48: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185D4B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x10), eax */ /* 0x17185D4D: cmp dword ptr [ecx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x38)) = eax; /* 0x17185D50: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x17185D53: mov dword ptr [ebp - 0x1c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17185F49; /* 0x17185D56: je 0x17185f49 */
L_17185D5C:
    ecx = MEM32(ebp + (-0x14)); /* 0x17185D5C: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + (-0x34); /* 0x17185D5F: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x17185D62: push eax */
    RECOMP_CALL(sub_171855CC); /* 0x17185D63: call 0x171855cc */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x17185D68: mov eax, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x58)); /* 0x17185D6B: mov ecx, dword ptr [ebp - 0x58] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2Cu); /* 0x17185D6E: imul eax, eax, 0x2c */
    ebx = eax + ecx; /* 0x17185D71: lea ebx, [eax + ecx] */
    eax = MEM32(ebx + 0x28); /* 0x17185D74: mov eax, dword ptr [ebx + 0x28] */
    /* cmp eax, MEM32(ebp + (-0x2C)) */ /* 0x17185D77: cmp eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17185F3C; /* 0x17185D7A: jne 0x17185f3c */
L_17185D80:
    eax = MEM32(ebp + (-0x28)); /* 0x17185D80: mov eax, dword ptr [ebp - 0x28] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2Cu); /* 0x17185D83: imul eax, eax, 0x2c */
    esi = eax + ecx; /* 0x17185D86: lea esi, [eax + ecx] */
    eax = MEM32(esi + 0x28); /* 0x17185D89: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x17185D8C: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17185F3C; /* 0x17185D8F: jne 0x17185f3c */
L_17185D95:
    _flag_a = (uint32_t)(MEM32(ebx + 0x28)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x28) = MEM32(ebx + 0x28) + eax; /* 0x17185D95: add dword ptr [ebx + 0x28], eax */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x17185D98: push esi */
    ecx = ebx; /* 0x17185D99: mov ecx, ebx */
    RECOMP_CALL(sub_17184F8C); /* 0x17185D9B: call 0x17184f8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0; /* 0x17185DA0: and dword ptr [esi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x17185DA4: push dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x17185DA7: add esi, 0x14 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x17185DAA: mov ecx, esi */
    RECOMP_CALL(sub_17184F36); /* 0x17185DAC: call 0x17184f36 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x17185DB1: push dword ptr [ebp - 0x28] */
    edi = ebx + 0x14; /* 0x17185DB4: lea edi, [ebx + 0x14] */
    ecx = edi; /* 0x17185DB7: mov ecx, edi */
    RECOMP_CALL(sub_17184F36); /* 0x17185DB9: call 0x17184f36 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x17185DBE: push esi */
    ecx = edi; /* 0x17185DBF: mov ecx, edi */
    RECOMP_CALL(sub_17184F8C); /* 0x17185DC1: call 0x17184f8c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x17185DC6: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x17185DC9: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17185DCD: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x17185DD0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17185E2E; /* 0x17185DD2: jne 0x17185e2e */
L_17185DD4:
    eax = MEM32(ebp + (-0x14)); /* 0x17185DD4: mov eax, dword ptr [ebp - 0x14] */
    esi = MEM32(eax); /* 0x17185DD7: mov esi, dword ptr [eax] */
    eax = MEM32(ebp + (-0x58)); /* 0x17185DD9: mov eax, dword ptr [ebp - 0x58] */
    PUSH32(esp, 5); /* 0x17185DDC: push 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x17185DDE: add esi, 0x14 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x17185DE1: pop ecx */
    edi = ebp + (-0xA0); /* 0x17185DE2: lea edi, [ebp - 0xa0] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17185DE8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x9C)); /* 0x17185DEA: mov ecx, dword ptr [ebp - 0x9c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2Cu); /* 0x17185DF0: imul ecx, ecx, 0x2c */
    ecx = MEM32(ecx + eax + 0x28); /* 0x17185DF3: mov ecx, dword ptr [ecx + eax + 0x28] */
    /* cmp ecx, MEM32(ebp + (-0x98)) */ /* 0x17185DF7: cmp ecx, dword ptr [ebp - 0x98] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x98)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17185E14; /* 0x17185DFD: jne 0x17185e14 */
L_17185DFF:
    ecx = MEM32(ebp + (-0x94)); /* 0x17185DFF: mov ecx, dword ptr [ebp - 0x94] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2Cu); /* 0x17185E05: imul ecx, ecx, 0x2c */
    eax = MEM32(ecx + eax + 0x28); /* 0x17185E08: mov eax, dword ptr [ecx + eax + 0x28] */
    /* cmp eax, MEM32(ebp + (-0x90)) */ /* 0x17185E0C: cmp eax, dword ptr [ebp - 0x90] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x90)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17185E2E; /* 0x17185E12: je 0x17185e2e */
L_17185E14:
    esi = MEM32(ebp + (-0x14)); /* 0x17185E14: mov esi, dword ptr [ebp - 0x14] */
    eax = ebp + (-0xC8); /* 0x17185E17: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x17185E1D: push eax */
    ecx = esi; /* 0x17185E1E: mov ecx, esi */
    RECOMP_CALL(sub_171855CC); /* 0x17185E20: call 0x171855cc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 1; /* 0x17185E25: inc dword ptr [ebp - 0x1c] */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x17185E28: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17185DD4; /* 0x17185E2C: jne 0x17185dd4 */
L_17185E2E:
    esi = MEM32(ebp + (-0x30)); /* 0x17185E2E: mov esi, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x18)); /* 0x17185E31: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x28)); /* 0x17185E34: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17185E37: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x17185E39: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx + eax * 4) = esi; /* 0x17185E3C: mov dword ptr [ecx + eax*4], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17185E4F; /* 0x17185E3F: jbe 0x17185e4f */
L_17185E41:
    /* cmp MEM32(ecx + edx * 4), eax */ /* 0x17185E41: cmp dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + edx * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17185E49; /* 0x17185E44: jne 0x17185e49 */
L_17185E46:
    MEM32(ecx + edx * 4) = esi; /* 0x17185E46: mov dword ptr [ecx + edx*4], esi */
L_17185E49:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17185E49: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0x14) */ /* 0x17185E4A: cmp edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185E41; /* 0x17185E4D: jb 0x17185e41 */
L_17185E4F:
    eax = ebp + (-0x38); /* 0x17185E4F: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x17185E52: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17185E53: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x68); /* 0x17185E56: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x17185E59: push eax */
    eax = ebp + (-0x78); /* 0x17185E5A: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x17185E5D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x17185E5E: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17185E61: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_17185115); /* 0x17185E64: call 0x17185115 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17185E69: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17185E6D: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17185F3C; /* 0x17185E71: jbe 0x17185f3c */
L_17185E77:
    esi = MEM32(ebp + (-0x58)); /* 0x17185E77: mov esi, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x28u; /* 0x17185E7A: add esi, 0x28 */
    _flag_k = FK_ADD;
L_17185E7D:
    eax = MEM32(ebp + (-0x10)); /* 0x17185E7D: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x30)) */ /* 0x17185E80: cmp eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17185F2A; /* 0x17185E83: je 0x17185f2a */
L_17185E89:
    /* cmp MEM32(esi), 0 */ /* 0x17185E89: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17185F2A; /* 0x17185E8C: je 0x17185f2a */
L_17185E92:
    PUSH32(esp, eax); /* 0x17185E92: push eax */
    ecx = ebx + 0x14; /* 0x17185E93: lea ecx, [ebx + 0x14] */
    RECOMP_CALL(sub_17184F05); /* 0x17185E96: call 0x17184f05 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x17185E9B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185F2A; /* 0x17185E9D: je 0x17185f2a */
L_17185EA3:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x17185EA3: push dword ptr [ebp - 0x28] */
    edi = esi + (-0x14); /* 0x17185EA6: lea edi, [esi - 0x14] */
    ecx = edi; /* 0x17185EA9: mov ecx, edi */
    RECOMP_CALL(sub_17184F36); /* 0x17185EAB: call 0x17184f36 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x17185EB0: push dword ptr [ebp - 0x30] */
    ecx = edi; /* 0x17185EB3: mov ecx, edi */
    RECOMP_CALL(sub_17184EE1); /* 0x17185EB5: call 0x17184ee1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x28); /* 0x17185EBA: mov eax, dword ptr [ebx + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x17185EBD: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x17185EBF: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17185F2A; /* 0x17185EC2: ja 0x17185f2a */
L_17185EC4:
    eax = MEM32(ebp + (-0x18)); /* 0x17185EC4: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x20)); /* 0x17185EC7: mov ecx, dword ptr [ebp - 0x20] */
    edi = MEM32(ebp + 0x14); /* 0x17185ECA: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x17185ECD: sub ecx, eax */
    _flag_k = FK_CMP;
L_17185ECF:
    edx = MEM32(eax); /* 0x17185ECF: mov edx, dword ptr [eax] */
    /* cmp edx, MEM32(ebp + (-0x10)) */ /* 0x17185ED1: cmp edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17185ED9; /* 0x17185ED4: jne 0x17185ed9 */
L_17185ED6:
    edx = MEM32(ebp + (-0x30)); /* 0x17185ED6: mov edx, dword ptr [ebp - 0x30] */
L_17185ED9:
    MEM32(eax + ecx) = edx; /* 0x17185ED9: mov dword ptr [eax + ecx], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17185EDC: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17185EDF: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17185ECF; /* 0x17185EE0: jne 0x17185ecf */
L_17185EE2:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17185EE2: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x68); /* 0x17185EE5: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x17185EE8: push eax */
    eax = ebp + (-0x78); /* 0x17185EE9: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x17185EEC: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x17185EED: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17185EF0: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1718504F); /* 0x17185EF3: call 0x1718504f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17185EF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17185F2A; /* 0x17185EFA: jle 0x17185f2a */
L_17185EFC:
    PUSH32(esp, eax); /* 0x17185EFC: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x17185EFD: push dword ptr [esi] */
    ecx = ebp + (-0xB4); /* 0x17185EFF: lea ecx, [ebp - 0xb4] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x17185F05: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebx + 0x28)); /* 0x17185F08: push dword ptr [ebx + 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x17185F0B: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_17184D4F); /* 0x17185F0E: call 0x17184d4f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x17185F13: mov ecx, dword ptr [ebp - 0x14] */
    eax = ebp + (-0xB4); /* 0x17185F16: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x17185F1C: push eax */
    RECOMP_CALL(sub_1718554C); /* 0x17185F1D: call 0x1718554c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17185F22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17186076; /* 0x17185F24: jl 0x17186076 */
L_17185F2A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x17185F2A: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x17185F2D: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x2Cu; /* 0x17185F30: add esi, 0x2c */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x17185F33: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185E7D; /* 0x17185F36: jb 0x17185e7d */
L_17185F3C:
    eax = MEM32(ebp + (-0x14)); /* 0x17185F3C: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x17185F3F: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17185D5C; /* 0x17185F43: jne 0x17185d5c */
L_17185F49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185F49: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x48); /* 0x17185F4B: lea edi, [ebp - 0x48] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x17185F4E: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x17185F4F: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x17185F50: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x17185F51: stosd dword ptr es:[edi], eax */
    eax = MEM32(ebp + 0x10); /* 0x17185F52: mov eax, dword ptr [ebp + 0x10] */
    esi = MEM32(eax + 0x4); /* 0x17185F55: mov esi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17185F58: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x17185F5A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185FCA; /* 0x17185F5C: jbe 0x17185fca */
L_17185F5E:
    ecx = MEM32(eax); /* 0x17185F5E: mov ecx, dword ptr [eax] */
    eax = ebp + (-0x2C); /* 0x17185F60: lea eax, [ebp - 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x17185F63: sub ecx, eax */
    _flag_k = FK_CMP;
L_17185F65:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185F65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17185F67:
    ebx = MEM32(ebp + 0xC); /* 0x17185F67: mov ebx, dword ptr [ebp + 0xc] */
    edx = ecx + eax * 4; /* 0x17185F6A: lea edx, [ecx + eax*4] */
    edx = MEM32(ebp + edx + (-0x2C)); /* 0x17185F6D: mov edx, dword ptr [ebp + edx - 0x2c] */
    edx = MEM32(ebx + edx * 4); /* 0x17185F71: mov edx, dword ptr [ebx + edx*4] */
    ebx = MEM32(ebp + (-0x18)); /* 0x17185F74: mov ebx, dword ptr [ebp - 0x18] */
    edx = MEM32(ebx + edx * 4); /* 0x17185F77: mov edx, dword ptr [ebx + edx*4] */
    MEM32(ebp + eax * 4 + (-0x2C)) = edx; /* 0x17185F7A: mov dword ptr [ebp + eax*4 - 0x2c], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17185F7E: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 3 */ /* 0x17185F7F: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185F67; /* 0x17185F82: jb 0x17185f67 */
L_17185F84:
    edx = MEM32(ebp + (-0x2C)); /* 0x17185F84: mov edx, dword ptr [ebp - 0x2c] */
    /* cmp edx, MEM32(ebp + (-0x28)) */ /* 0x17185F87: cmp edx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x24)); /* 0x17185F8A: mov ebx, dword ptr [ebp - 0x24] */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17185F8D: sete al */
    /* cmp edx, ebx */ /* 0x17185F90: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17185F92: sete dl */
    /* cmp MEM32(ebp + (-0x28)), ebx */ /* 0x17185F95: cmp dword ptr [ebp - 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17185F98: sete bl */
    /* test LO8(eax), LO8(eax) */ /* 0x17185F9B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185FB2; /* 0x17185F9D: je 0x17185fb2 */
L_17185F9F:
    /* test LO8(edx), LO8(edx) */ /* 0x17185F9F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17185FA7; /* 0x17185FA1: je 0x17185fa7 */
L_17185FA3:
    /* test LO8(ebx), LO8(ebx) */ /* 0x17185FA3: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17185FBF; /* 0x17185FA5: jne 0x17185fbf */
L_17185FA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17185FA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17185FA9: inc eax */
    _flag_k = FK_INC;
L_17185FAA:
    eax = ebp + eax * 4 + (-0x44); /* 0x17185FAA: lea eax, [ebp + eax*4 - 0x44] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x17185FAE: inc dword ptr [eax] */
    _flag_k = FK_INC;
    goto L_17185FC2; /* 0x17185FB0: jmp 0x17185fc2 */
L_17185FB2:
    /* test LO8(edx), LO8(edx) */ /* 0x17185FB2: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17185FA7; /* 0x17185FB4: jne 0x17185fa7 */
L_17185FB6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x17185FB6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17185FA7; /* 0x17185FB8: jne 0x17185fa7 */
L_17185FBA:
    PUSH32(esp, 2); /* 0x17185FBA: push 2 */
    eax = POP32_VAL(esp); /* 0x17185FBC: pop eax */
    RECOMP_BACKEDGE();
    goto L_17185FAA; /* 0x17185FBD: jmp 0x17185faa */
L_17185FBF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) + 1; /* 0x17185FBF: inc dword ptr [ebp - 0x44] */
    _flag_k = FK_INC;
L_17185FC2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17185FC2: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x17185FC3: add ecx, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, esi */ /* 0x17185FC6: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17185F65; /* 0x17185FC8: jb 0x17185f65 */
L_17185FCA:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17185FCA: push dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + (-0x18)); /* 0x17185FCD: mov ebx, dword ptr [ebp - 0x18] */
    ecx = ebp + (-0x8C); /* 0x17185FD0: lea ecx, [ebp - 0x8c] */
    RECOMP_CALL(sub_17185472); /* 0x17185FD6: call 0x17185472 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17185FDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17186076; /* 0x17185FDD: jl 0x17186076 */
L_17185FE3:
    eax = ebp + 0x13; /* 0x17185FE3: lea eax, [ebp + 0x13] */
    PUSH32(esp, eax); /* 0x17185FE6: push eax */
    ecx = ebp + (-0x8C); /* 0x17185FE7: lea ecx, [ebp - 0x8c] */
    MEM8(ebp + 0x13) = (uint8_t)(0); /* 0x17185FED: mov byte ptr [ebp + 0x13], 0 */
    RECOMP_CALL(sub_1718BAB3); /* 0x17185FF1: call 0x1718bab3 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x20)); /* 0x17185FF6: mov edi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17185FF9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x17185FFB: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = esi; /* 0x17185FFE: mov dword ptr [ebp - 0x10], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17186046; /* 0x17186001: jbe 0x17186046 */
L_17186003:
    eax = MEM32(ebp + (-0x10)); /* 0x17186003: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebx + eax * 4)); /* 0x17186006: push dword ptr [ebx + eax*4] */
    ecx = ebp + (-0x8C); /* 0x17186009: lea ecx, [ebp - 0x8c] */
    RECOMP_CALL(sub_17184F05); /* 0x1718600F: call 0x17184f05 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x17186014: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718603B; /* 0x17186016: jne 0x1718603b */
L_17186018:
    eax = MEM32(ebp + (-0x10)); /* 0x17186018: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebx + eax * 4); /* 0x1718601B: mov ecx, dword ptr [ebx + eax*4] */
    edx = MEM32(ebp + (-0x8C)); /* 0x1718601E: mov edx, dword ptr [ebp - 0x8c] */
    MEM32(edi + ecx * 4) = esi; /* 0x17186024: mov dword ptr [edi + ecx*4], esi */
    ecx = MEM32(ebx + eax * 4); /* 0x17186027: mov ecx, dword ptr [ebx + eax*4] */
    eax = ecx; /* 0x1718602A: mov eax, ecx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1718602C: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1718602C: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1718602F: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x17186031: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, 1); /* 0x17186034: mov dl, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(edx)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17186036: shl dl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << ((LO8(ecx)) & 31)); /* 0x17186036: shl dl, cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17186038: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM8(eax) | LO8(edx))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(edx))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(edx)); /* 0x17186039: or byte ptr [eax], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1718603B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1718603B: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1718603E: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x17186041: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186003; /* 0x17186044: jb 0x17186003 */
L_17186046:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186046: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x17186048: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718605C; /* 0x1718604B: jbe 0x1718605c */
L_1718604D:
    ecx = MEM32(ebx + eax * 4); /* 0x1718604D: mov ecx, dword ptr [ebx + eax*4] */
    ecx = MEM32(edi + ecx * 4); /* 0x17186050: mov ecx, dword ptr [edi + ecx*4] */
    MEM32(ebx + eax * 4) = ecx; /* 0x17186053: mov dword ptr [ebx + eax*4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17186056: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x17186057: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718604D; /* 0x1718605A: jb 0x1718604d */
L_1718605C:
    eax = MEM32(ebp + 0x18); /* 0x1718605C: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1718605F: push edi */
    MEM32(eax) = esi; /* 0x17186060: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1721B010); /* 0x17186062: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17186067: pop ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x17186068: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x1718606B: push 1 */
    RECOMP_CALL(sub_171854DB); /* 0x1718606D: call 0x171854db */
    RECOMP_FLAGS_IN();
    esi = ebx; /* 0x17186072: mov esi, ebx */
    goto L_17186094; /* 0x17186074: jmp 0x17186094 */
L_17186076:
    ecx = MEM32(ebp + (-0x14)); /* 0x17186076: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x17186079: push 1 */
    RECOMP_CALL(sub_171854DB); /* 0x1718607B: call 0x171854db */
    RECOMP_FLAGS_IN();
L_17186080:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x17186080: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x17186083: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x17186088: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1721B010); /* 0x1718608B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17186090: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17186091: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17186092: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17186094:
    ecx = ebp + (-0x68); /* 0x17186094: lea ecx, [ebp - 0x68] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x17186097: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718609B: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8C); /* 0x171860A0: lea ecx, [ebp - 0x8c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x171860A6: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1717AF06); /* 0x171860AA: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x78); /* 0x171860AF: lea ecx, [ebp - 0x78] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x171860B2: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1717AF06); /* 0x171860B6: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x171860BB: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x58); /* 0x171860BF: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_1718578B); /* 0x171860C2: call 0x1718578b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x171860C7: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x171860CA: pop edi */
    eax = esi; /* 0x171860CB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171860CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x171860CE: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x171860CF: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171860D6: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171860D7: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171860DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171860DFu);

L_171860DF:
    edi = edi; /* 0x171860DF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171860E1: push ebp */
    ebp = esp; /* 0x171860E2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x171860E4: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171860E7: push esi */
    PUSH32(esp, edi); /* 0x171860E8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171860E9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1C); /* 0x171860EB: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = edi; /* 0x171860EE: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_17175D0B); /* 0x171860F1: call 0x17175d0b */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x171860F6: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edi; /* 0x171860F9: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x171860FC: mov dword ptr [ebp - 8], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186277; /* 0x171860FF: je 0x17186277 */
L_17186105:
    esi = MEM32(ebp + 0xC); /* 0x17186105: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, edi */ /* 0x17186108: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186277; /* 0x1718610A: je 0x17186277 */
L_17186110:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x17186110: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186277; /* 0x17186113: je 0x17186277 */
L_17186119:
    /* cmp MEM32(ebp + 0x1C), edi */ /* 0x17186119: cmp dword ptr [ebp + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186277; /* 0x1718611C: je 0x17186277 */
L_17186122:
    /* cmp MEM32(ebp + 0x14), 3 */ /* 0x17186122: cmp dword ptr [ebp + 0x14], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17186277; /* 0x17186126: jb 0x17186277 */
L_1718612C:
    eax = MEM32(esi); /* 0x1718612C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1718612E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1718612F: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test HI8(eax), 4 */ /* 0x17186132: test ah, 4 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17186277; /* 0x17186135: jne 0x17186277 */
L_1718613B:
    eax = MEM32(esi); /* 0x1718613B: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1718613D: push ebx */
    PUSH32(esp, esi); /* 0x1718613E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1718613F: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17186142: mov ebx, eax */
    eax = MEM32(esi); /* 0x17186144: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17186146: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17186147: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x10)); /* 0x1718614A: mov edi, dword ptr [ebp - 0x10] */
    /* test edi, edi */ /* 0x1718614D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718625A; /* 0x1718614F: jl 0x1718625a */
L_17186155:
    PUSH32(esp, ebx); /* 0x17186155: push ebx */
    ecx = ebp + (-0x1C); /* 0x17186156: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_17185280); /* 0x17186159: call 0x17185280 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718615E: mov edi, eax */
    /* test edi, edi */ /* 0x17186160: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718625A; /* 0x17186162: jl 0x1718625a */
L_17186168:
    eax = MEM32(esi); /* 0x17186168: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x4); /* 0x1718616A: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1718616D: push ecx */
    PUSH32(esp, esi); /* 0x1718616E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x1718616F: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17186172: mov edi, eax */
    /* test edi, edi */ /* 0x17186174: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718625A; /* 0x17186176: jl 0x1718625a */
L_1718617C:
    eax = MEM32(ebp + (-0x4)); /* 0x1718617C: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1718617F: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x30); /* 0x17186181: lea edx, [ebp - 0x30] */
    PUSH32(esp, edx); /* 0x17186184: push edx */
    PUSH32(esp, eax); /* 0x17186185: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x17186186: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17186189: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17186199; /* 0x1718618B: jl 0x17186199 */
L_1718618D:
    /* cmp MEM32(ebp + (-0x30)), 0x65u */ /* 0x1718618D: cmp dword ptr [ebp - 0x30], 0x65 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171861A3; /* 0x17186191: je 0x171861a3 */
L_17186193:
    /* cmp MEM32(ebp + (-0x30)), 0x66u */ /* 0x17186193: cmp dword ptr [ebp - 0x30], 0x66 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x66u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171861A3; /* 0x17186197: je 0x171861a3 */
L_17186199:
    edi = 0x8876086Cu; /* 0x17186199: mov edi, 0x8876086c */
    goto L_1718625A; /* 0x1718619E: jmp 0x1718625a */
L_171861A3:
    eax = MEM32(ebp + (-0x4)); /* 0x171861A3: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x171861A6: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x10u); /* 0x171861A8: push 0x10 */
    edx = ebp + (-0x8); /* 0x171861AA: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x171861AD: push edx */
    PUSH32(esp, 0); /* 0x171861AE: push 0 */
    PUSH32(esp, 0); /* 0x171861B0: push 0 */
    PUSH32(esp, eax); /* 0x171861B2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x171861B3: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171861B6: mov edi, eax */
    /* test edi, edi */ /* 0x171861B8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718625A; /* 0x171861BA: jl 0x1718625a */
L_171861C0:
    /* cmp MEM32(ebp + (-0x30)), 0x65u */ /* 0x171861C0: cmp dword ptr [ebp - 0x30], 0x65 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171861E8; /* 0x171861C4: jne 0x171861e8 */
L_171861C6:
    /* test ebx, ebx */ /* 0x171861C6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186206; /* 0x171861C8: jbe 0x17186206 */
L_171861CA:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171861CA: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171861CD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171861CF:
    PUSH32(esp, 3); /* 0x171861CF: push 3 */
    edx = POP32_VAL(esp); /* 0x171861D1: pop edx */
L_171861D2:
    esi = MEM32(ebp + (-0x8)); /* 0x171861D2: mov esi, dword ptr [ebp - 8] */
    esi = (uint32_t)MEM16(eax + esi); /* 0x171861D5: movzx esi, word ptr [eax + esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171861D9: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx) = esi; /* 0x171861DA: mov dword ptr [ecx], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171861DC: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171861DD: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171861E0: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171861D2; /* 0x171861E1: jne 0x171861d2 */
L_171861E3:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171861E3: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171861CF; /* 0x171861E4: jne 0x171861cf */
L_171861E6:
    goto L_17186206; /* 0x171861E6: jmp 0x17186206 */
L_171861E8:
    /* test ebx, ebx */ /* 0x171861E8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186206; /* 0x171861EA: jbe 0x17186206 */
L_171861EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171861EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171861EE:
    PUSH32(esp, 3); /* 0x171861EE: push 3 */
    ecx = POP32_VAL(esp); /* 0x171861F0: pop ecx */
L_171861F1:
    edx = MEM32(ebp + (-0x8)); /* 0x171861F1: mov edx, dword ptr [ebp - 8] */
    edx = MEM32(eax + edx); /* 0x171861F4: mov edx, dword ptr [eax + edx] */
    esi = MEM32(ebp + (-0x1C)); /* 0x171861F7: mov esi, dword ptr [ebp - 0x1c] */
    MEM32(eax + esi) = edx; /* 0x171861FA: mov dword ptr [eax + esi], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171861FD: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17186200: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171861F1; /* 0x17186201: jne 0x171861f1 */
L_17186203:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17186203: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171861EE; /* 0x17186204: jne 0x171861ee */
L_17186206:
    eax = MEM32(ebp + (-0x4)); /* 0x17186206: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x17186209: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718620B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1718620C: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1718620F: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x17186212: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17186214: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17186215: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x17186218: push dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x1C); /* 0x1718621B: lea eax, [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1718621E: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17186221: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x17186223: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17186224: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = edi; /* 0x17186227: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718622A: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_171859F0); /* 0x1718622D: call 0x171859f0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x17186232: mov ecx, eax */
    /* cmp ecx, edi */ /* 0x17186234: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ecx; /* 0x17186236: mov dword ptr [ebp - 0xc], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186242; /* 0x17186239: jne 0x17186242 */
L_1718623B:
    edi = 0x8007000Eu; /* 0x1718623B: mov edi, 0x8007000e */
    goto L_1718625A; /* 0x17186240: jmp 0x1718625a */
L_17186242:
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x17186242: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718625A; /* 0x17186245: jbe 0x1718625a */
L_17186247:
    eax = MEM32(ebp + 0x18); /* 0x17186247: mov eax, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x14); /* 0x1718624A: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1718624D: sub ecx, eax */
    _flag_k = FK_CMP;
L_1718624F:
    esi = MEM32(ecx + eax); /* 0x1718624F: mov esi, dword ptr [ecx + eax] */
    MEM32(eax) = esi; /* 0x17186252: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17186254: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17186257: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718624F; /* 0x17186258: jne 0x1718624f */
L_1718625A:
    eax = MEM32(ebp + (-0x4)); /* 0x1718625A: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1718625D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1718625F: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718626C; /* 0x17186260: je 0x1718626c */
L_17186262:
    ecx = MEM32(eax); /* 0x17186262: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17186264: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17186265: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17186268: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718626C:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718626C: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1718626F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17186274: pop ecx */
    goto L_1718627C; /* 0x17186275: jmp 0x1718627c */
L_17186277:
    edi = 0x8876086Cu; /* 0x17186277: mov edi, 0x8876086c */
L_1718627C:
    ecx = ebp + (-0x1C); /* 0x1718627C: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1717AF06); /* 0x1718627F: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x17186284: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x17186286: pop edi */
    esi = POP32_VAL(esp); /* 0x17186287: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17186288: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17186289: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17186291(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186291u);

L_17186291:
    edi = edi; /* 0x17186291: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186293: push ebp */
    ebp = esp; /* 0x17186294: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x8Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x8Cu; /* 0x17186296: sub esp, 0x8c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1718629C: push esi */
    PUSH32(esp, edi); /* 0x1718629D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718629E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x60); /* 0x171862A0: lea ecx, [ebp - 0x60] */
    MEM32(ebp + (-0x24)) = edi; /* 0x171862A3: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0x14)) = edi; /* 0x171862A6: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x10)) = edi; /* 0x171862A9: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x171862AC: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x20)) = edi; /* 0x171862AF: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x28)) = edi; /* 0x171862B2: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x171862B5: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0x40)) = edi; /* 0x171862B8: mov dword ptr [ebp - 0x40], edi */
    RECOMP_CALL(sub_1718599F); /* 0x171862BB: call 0x1718599f */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x78); /* 0x171862C0: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_17195352); /* 0x171862C3: call 0x17195352 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x8C); /* 0x171862C8: lea ecx, [ebp - 0x8c] */
    RECOMP_CALL(sub_171854C8); /* 0x171862CE: call 0x171854c8 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x171862D3: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186868; /* 0x171862D6: je 0x17186868 */
L_171862DC:
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x171862DC: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186868; /* 0x171862DF: je 0x17186868 */
L_171862E5:
    /* cmp MEM32(ebp + 0x28), edi */ /* 0x171862E5: cmp dword ptr [ebp + 0x28], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186868; /* 0x171862E8: je 0x17186868 */
L_171862EE:
    /* cmp MEM32(ebp + 0x2C), edi */ /* 0x171862EE: cmp dword ptr [ebp + 0x2c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186868; /* 0x171862F1: je 0x17186868 */
L_171862F7:
    /* cmp MEM32(ebp + 0x3C), edi */ /* 0x171862F7: cmp dword ptr [ebp + 0x3c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x3C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186868; /* 0x171862FA: je 0x17186868 */
L_17186300:
    /* cmp MEM32(ebp + 0x38), edi */ /* 0x17186300: cmp dword ptr [ebp + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186868; /* 0x17186303: je 0x17186868 */
L_17186309:
    /* cmp MEM32(ebp + 0x40), edi */ /* 0x17186309: cmp dword ptr [ebp + 0x40], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x40)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186868; /* 0x1718630C: je 0x17186868 */
L_17186312:
    eax = MEM32(ebp + 0x1C); /* 0x17186312: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp eax, edi */ /* 0x17186315: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186868; /* 0x17186317: je 0x17186868 */
L_1718631D:
    /* cmp MEM32(ebp + 0x44), edi */ /* 0x1718631D: cmp dword ptr [ebp + 0x44], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x44)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186868; /* 0x17186320: je 0x17186868 */
L_17186326:
    /* cmp MEM32(ebp + 0x20), edi */ /* 0x17186326: cmp dword ptr [ebp + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186330; /* 0x17186329: je 0x17186330 */
L_1718632B:
    MEM32(ebp + (-0x20)) = eax; /* 0x1718632B: mov dword ptr [ebp - 0x20], eax */
    goto L_17186333; /* 0x1718632E: jmp 0x17186333 */
L_17186330:
    MEM32(ebp + (-0x28)) = eax; /* 0x17186330: mov dword ptr [ebp - 0x28], eax */
L_17186333:
    esi = MEM32(ebp + (-0x80)); /* 0x17186333: mov esi, dword ptr [ebp - 0x80] */
    /* cmp esi, edi */ /* 0x17186336: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1718684C; /* 0x17186338: jl 0x1718684c */
L_1718633E:
    esi = MEM32(ebp + (-0x54)); /* 0x1718633E: mov esi, dword ptr [ebp - 0x54] */
    /* test esi, esi */ /* 0x17186341: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718684C; /* 0x17186343: jl 0x1718684c */
L_17186349:
    esi = MEM32(ebp + (-0x6C)); /* 0x17186349: mov esi, dword ptr [ebp - 0x6c] */
    /* test esi, esi */ /* 0x1718634C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718684C; /* 0x1718634E: jl 0x1718684c */
L_17186354:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17186354: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x60); /* 0x17186357: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_171859C1); /* 0x1718635A: call 0x171859c1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718635F: mov esi, eax */
    /* test esi, esi */ /* 0x17186361: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718684C; /* 0x17186363: jl 0x1718684c */
L_17186369:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & 0; /* 0x17186369: and dword ptr [ebp + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1718636D: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17186371: push ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171863A9; /* 0x17186372: jbe 0x171863a9 */
L_17186374:
    edi = MEM32(ebp + 0x44); /* 0x17186374: mov edi, dword ptr [ebp + 0x44] */
    ebx = MEM32(ebp + (-0x60)); /* 0x17186377: mov ebx, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x1718637A: add edi, 0xc */
    _flag_k = FK_ADD;
L_1718637D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718637D: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x17186380: mov ecx, ebx */
    RECOMP_CALL(sub_17185472); /* 0x17186382: call 0x17185472 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17186387: mov esi, eax */
    /* test esi, esi */ /* 0x17186389: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718684B; /* 0x1718638B: jl 0x1718684b */
L_17186391:
    _flag_a = (uint32_t)(MEM32(edi + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(edi + (-0x8)) = MEM32(edi + (-0x8)) & 0; /* 0x17186391: and dword ptr [edi - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x17186395: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 1; /* 0x17186398: inc dword ptr [ebp + 0x20] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x20); /* 0x1718639B: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x24u; /* 0x1718639E: add ebx, 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x18u; /* 0x171863A1: add edi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x18) */ /* 0x171863A4: cmp eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718637D; /* 0x171863A7: jb 0x1718637d */
L_171863A9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171863A9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x171863AB: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171863D1; /* 0x171863AE: jbe 0x171863d1 */
L_171863B0:
    eax = MEM32(ebp + 0x8); /* 0x171863B0: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + esi * 4); /* 0x171863B3: mov eax, dword ptr [eax + esi*4] */
    ecx = MEM32(ebp + 0x14); /* 0x171863B6: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x171863B9: push eax */
    eax = MEM32(ecx + eax * 4); /* 0x171863BA: mov eax, dword ptr [ecx + eax*4] */
    ecx = MEM32(ebp + (-0x60)); /* 0x171863BD: mov ecx, dword ptr [ebp - 0x60] */
    eax = eax + eax * 8; /* 0x171863C0: lea eax, [eax + eax*8] */
    ecx = ecx + eax * 4; /* 0x171863C3: lea ecx, [ecx + eax*4] */
    RECOMP_CALL(sub_17184EE1); /* 0x171863C6: call 0x17184ee1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171863CB: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x171863CC: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171863B0; /* 0x171863CF: jb 0x171863b0 */
L_171863D1:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171863D1: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x8C); /* 0x171863D4: lea ecx, [ebp - 0x8c] */
    RECOMP_CALL(sub_17185472); /* 0x171863DA: call 0x17185472 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171863DF: mov esi, eax */
    /* test esi, esi */ /* 0x171863E1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718684B; /* 0x171863E3: jl 0x1718684b */
L_171863E9:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & 0; /* 0x171863E9: and dword ptr [ebp + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x171863ED: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17186581; /* 0x171863F1: jbe 0x17186581 */
L_171863F7:
    ebx = MEM32(ebp + (-0x60)); /* 0x171863F7: mov ebx, dword ptr [ebp - 0x60] */
    edi = MEM32(ebp + 0x44); /* 0x171863FA: mov edi, dword ptr [ebp + 0x44] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x171863FD: add ebx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ebx; /* 0x17186400: mov dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x17186403: add edi, 0x10 */
    _flag_k = FK_ADD;
    goto L_1718640B; /* 0x17186406: jmp 0x1718640b */
L_17186408:
    ebx = MEM32(ebp + (-0x8)); /* 0x17186408: mov ebx, dword ptr [ebp - 8] */
L_1718640B:
    ecx = ebx + (-0x14); /* 0x1718640B: lea ecx, [ebx - 0x14] */
    RECOMP_CALL(sub_17184F5C); /* 0x1718640E: call 0x17184f5c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x17186413: push eax */
    ecx = ebx; /* 0x17186414: mov ecx, ebx */
    RECOMP_CALL(sub_171852DE); /* 0x17186416: call 0x171852de */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718641B: mov esi, eax */
    /* test esi, esi */ /* 0x1718641D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718684B; /* 0x1718641F: jl 0x1718684b */
L_17186425:
    eax = MEM32(ebp + (-0x14)); /* 0x17186425: mov eax, dword ptr [ebp - 0x14] */
    MEM32(edi + (-0x10)) = eax; /* 0x17186428: mov dword ptr [edi - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1718642B: mov eax, dword ptr [ebp - 0x10] */
    MEM32(edi + (-0x8)) = eax; /* 0x1718642E: mov dword ptr [edi - 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17186431: mov eax, dword ptr [ebp - 4] */
    MEM32(edi) = eax; /* 0x17186434: mov dword ptr [edi], eax */
    eax = MEM32(ebx + 0x4); /* 0x17186436: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, 0); /* 0x17186439: push 0 */
    ecx = ebx; /* 0x1718643B: mov ecx, ebx */
    MEM32(edi + 0x4) = eax; /* 0x1718643D: mov dword ptr [edi + 4], eax */
    RECOMP_CALL(sub_1718530D); /* 0x17186440: call 0x1718530d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17186445: mov esi, eax */
    /* test esi, esi */ /* 0x17186447: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718684B; /* 0x17186449: jl 0x1718684b */
L_1718644F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718644F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x17186451: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718648B; /* 0x17186454: jbe 0x1718648b */
L_17186456:
    ecx = MEM32(ebp + (-0x8)); /* 0x17186456: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x17186459: push ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFECu; /* 0x1718645A: add ecx, -0x14 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_17184F05); /* 0x1718645D: call 0x17184f05 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x17186462: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186485; /* 0x17186464: je 0x17186485 */
L_17186466:
    ecx = MEM32(ebp + (-0x8)); /* 0x17186466: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x17186469: push ebx */
    RECOMP_CALL(sub_17175CCD); /* 0x1718646A: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718646F: mov esi, eax */
    /* test esi, esi */ /* 0x17186471: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718684B; /* 0x17186473: jl 0x1718684b */
L_17186479:
    ecx = MEM32(ebp + (-0x4)); /* 0x17186479: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x40); /* 0x1718647C: mov eax, dword ptr [ebp + 0x40] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1718647F: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    MEM32(eax + ecx * 4) = ebx; /* 0x17186482: mov dword ptr [eax + ecx*4], ebx */
L_17186485:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17186485: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0x10) */ /* 0x17186486: cmp ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186456; /* 0x17186489: jb 0x17186456 */
L_1718648B:
    eax = ebp + 0x1F; /* 0x1718648B: lea eax, [ebp + 0x1f] */
    PUSH32(esp, eax); /* 0x1718648E: push eax */
    ecx = ebp + (-0x8C); /* 0x1718648F: lea ecx, [ebp - 0x8c] */
    MEM8(ebp + 0x1F) = (uint8_t)(0); /* 0x17186495: mov byte ptr [ebp + 0x1f], 0 */
    RECOMP_CALL(sub_1718BAB3); /* 0x17186499: call 0x1718bab3 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x24); /* 0x1718649E: mov esi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171864A1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x171864A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186554; /* 0x171864A5: jbe 0x17186554 */
L_171864AB:
    ecx = MEM32(ebp + (-0x20)); /* 0x171864AB: mov ecx, dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0x28)); /* 0x171864AE: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x171864B1: mov dword ptr [ebp - 0x1c], esi */
    esi = MEM32(ebp + (-0x8C)); /* 0x171864B4: mov esi, dword ptr [ebp - 0x8c] */
L_171864BA:
    MEM32(ebp + 0x1C) = eax; /* 0x171864BA: mov dword ptr [ebp + 0x1c], eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171864BD: mov dword ptr [ebp - 0xc], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171864C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171864C2:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x171864C2: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171864CF; /* 0x171864C6: je 0x171864cf */
L_171864C8:
    ecx = MEM32(ebp + (-0xC)); /* 0x171864C8: mov ecx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ecx); /* 0x171864CB: mov ecx, dword ptr [ecx] */
    goto L_171864D5; /* 0x171864CD: jmp 0x171864d5 */
L_171864CF:
    ecx = MEM32(ebp + 0x1C); /* 0x171864CF: mov ecx, dword ptr [ebp + 0x1c] */
    ecx = (uint32_t)MEM16(ecx); /* 0x171864D2: movzx ecx, word ptr [ecx] */
L_171864D5:
    ebx = MEM32(ebp + 0x8); /* 0x171864D5: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 2; /* 0x171864D8: add dword ptr [ebp + 0x1c], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 4; /* 0x171864DC: add dword ptr [ebp - 0xc], 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + eax + (-0x34)) = ecx; /* 0x171864E0: mov dword ptr [ebp + eax - 0x34], ecx */
    ecx = MEM32(ebx + ecx * 4); /* 0x171864E4: mov ecx, dword ptr [ebx + ecx*4] */
    ebx = MEM32(ebp + 0x14); /* 0x171864E7: mov ebx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebx + ecx * 4); /* 0x171864EA: mov ecx, dword ptr [ebx + ecx*4] */
    MEM32(ebp + eax + (-0x4C)) = ecx; /* 0x171864ED: mov dword ptr [ebp + eax - 0x4c], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171864F1: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xCu */ /* 0x171864F4: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171864C2; /* 0x171864F7: jb 0x171864c2 */
L_171864F9:
    eax = MEM32(ebp + 0x20); /* 0x171864F9: mov eax, dword ptr [ebp + 0x20] */
    /* cmp MEM32(ebp + (-0x4C)), eax */ /* 0x171864FC: cmp dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718650B; /* 0x171864FF: je 0x1718650b */
L_17186501:
    /* cmp MEM32(ebp + (-0x48)), eax */ /* 0x17186501: cmp dword ptr [ebp - 0x48], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718650B; /* 0x17186504: je 0x1718650b */
L_17186506:
    /* cmp MEM32(ebp + (-0x44)), eax */ /* 0x17186506: cmp dword ptr [ebp - 0x44], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186545; /* 0x17186509: jne 0x17186545 */
L_1718650B:
    ecx = MEM32(ebp + (-0x34)); /* 0x1718650B: mov ecx, dword ptr [ebp - 0x34] */
    eax = ecx; /* 0x1718650E: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x17186510: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x17186513: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x17186513: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17186516: add eax, esi */
    _flag_k = FK_ADD;
    SET_LO8(ebx, 1); /* 0x17186518: mov bl, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(ebx)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1718651A: shl bl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ebx) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ebx, LO8(ebx) << ((LO8(ecx)) & 31)); /* 0x1718651A: shl bl, cl */
    ecx = MEM32(ebp + (-0x30)); /* 0x1718651C: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)((MEM8(eax) | LO8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(ebx))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(ebx)); /* 0x1718651F: or byte ptr [eax], bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ecx; /* 0x17186521: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x17186523: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x17186526: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x17186526: shr eax, 3 */
    SET_LO8(ebx, 1); /* 0x17186529: mov bl, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(ebx)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1718652B: shl bl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ebx) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ebx, LO8(ebx) << ((LO8(ecx)) & 31)); /* 0x1718652B: shl bl, cl */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1718652D: mov ecx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17186530: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM8(eax) | LO8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(ebx))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(ebx)); /* 0x17186532: or byte ptr [eax], bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ecx; /* 0x17186534: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x17186536: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, 1); /* 0x17186539: mov bl, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(ebx)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1718653B: shl bl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ebx) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ebx, LO8(ebx) << ((LO8(ecx)) & 31)); /* 0x1718653B: shl bl, cl */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1718653D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1718653D: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17186540: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM8(eax) | LO8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(ebx))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(ebx)); /* 0x17186542: or byte ptr [eax], bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17186544: inc edx */
    _flag_k = FK_INC;
L_17186545:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x17186545: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + 0x1C); /* 0x17186548: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1718654B: mov ecx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171864BA; /* 0x1718654E: jne 0x171864ba */
L_17186554:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + edx; /* 0x17186554: add dword ptr [ebp - 0x10], edx */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x8C); /* 0x17186557: lea ecx, [ebp - 0x8c] */
    MEM32(edi + (-0x4)) = edx; /* 0x1718655D: mov dword ptr [edi - 4], edx */
    RECOMP_CALL(sub_17184F5C); /* 0x17186560: call 0x17184f5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + eax; /* 0x17186565: add dword ptr [ebp - 0x14], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 1; /* 0x17186568: inc dword ptr [ebp + 0x20] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 0x24u; /* 0x1718656B: add dword ptr [ebp - 8], 0x24 */
    _flag_k = FK_ADD;
    MEM32(edi + (-0xC)) = eax; /* 0x1718656F: mov dword ptr [edi - 0xc], eax */
    eax = MEM32(ebp + 0x20); /* 0x17186572: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x18u; /* 0x17186575: add edi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x18) */ /* 0x17186578: cmp eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186408; /* 0x1718657B: jb 0x17186408 */
L_17186581:
    ebx = MEM32(ebp + (-0x10)); /* 0x17186581: mov ebx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + 0x2C); /* 0x17186584: mov ecx, dword ptr [ebp + 0x2c] */
    edi = MEM32(ebp + 0x34); /* 0x17186587: mov edi, dword ptr [ebp + 0x34] */
    eax = ebx + ebx * 2; /* 0x1718658A: lea eax, [ebx + ebx*2] */
    MEM32(ecx) = eax; /* 0x1718658D: mov dword ptr [ecx], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718658F: mov dword ptr [ebp - 0xc], eax */
    eax = ebx; /* 0x17186592: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17186594: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17186594: shl eax, 2 */
    /* cmp MEM32(edi), 0 */ /* 0x17186597: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186605; /* 0x1718659A: je 0x17186605 */
L_1718659C:
    PUSH32(esp, edi); /* 0x1718659C: push edi */
    PUSH32(esp, eax); /* 0x1718659D: push eax */
    RECOMP_CALL(sub_1702BAA3); /* 0x1718659E: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171865A3: mov esi, eax */
    /* test esi, esi */ /* 0x171865A5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718684B; /* 0x171865A7: jl 0x1718684b */
L_171865AD:
    edi = MEM32(edi); /* 0x171865AD: mov edi, dword ptr [edi] */
    eax = MEM32(edi); /* 0x171865AF: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171865B1: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171865B2: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x171865B5: mov dword ptr [ebp - 4], eax */
L_171865B8:
    eax = MEM32(ebp + (-0x14)); /* 0x171865B8: mov eax, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x38); /* 0x171865BB: mov edi, dword ptr [ebp + 0x38] */
    eax = eax + eax * 2; /* 0x171865BE: lea eax, [eax + eax*2] */
    PUSH32(esp, edi); /* 0x171865C1: push edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171865C2: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171865C2: shl eax, 2 */
    PUSH32(esp, eax); /* 0x171865C5: push eax */
    RECOMP_CALL(sub_1702BAA3); /* 0x171865C6: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171865CB: mov esi, eax */
    /* test esi, esi */ /* 0x171865CD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718683C; /* 0x171865CF: jl 0x1718683c */
L_171865D5:
    eax = MEM32(edi); /* 0x171865D5: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x171865D7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171865D9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x171865DA: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171865DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = eax; /* 0x171865DF: mov dword ptr [ebp - 0x24], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171865FB; /* 0x171865E2: je 0x171865fb */
L_171865E4:
    eax = ebx + ebx * 2; /* 0x171865E4: lea eax, [ebx + ebx*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171865E7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171865E7: shl eax, 2 */
    PUSH32(esp, eax); /* 0x171865EA: push eax */
    MEM32(ebp + (-0x68)) = eax; /* 0x171865EB: mov dword ptr [ebp - 0x68], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x171865EE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171865F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171865F5: pop ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x171865F6: mov dword ptr [ebp - 0x18], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17186624; /* 0x171865F9: jne 0x17186624 */
L_171865FB:
    esi = 0x8007000Eu; /* 0x171865FB: mov esi, 0x8007000e */
    goto L_1718683C; /* 0x17186600: jmp 0x1718683c */
L_17186605:
    PUSH32(esp, eax); /* 0x17186605: push eax */
    MEM32(ebp + (-0x40)) = 1; /* 0x17186606: mov dword ptr [ebp - 0x40], 1 */
    RECOMP_CALL(sub_1721B01C); /* 0x1718660D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17186612: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17186614: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x17186615: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171865B8; /* 0x17186618: jne 0x171865b8 */
L_1718661A:
    esi = 0x8007000Eu; /* 0x1718661A: mov esi, 0x8007000e */
    goto L_17186842; /* 0x1718661F: jmp 0x17186842 */
L_17186624:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17186624: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x78); /* 0x17186627: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_171852DE); /* 0x1718662A: call 0x171852de */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718662F: mov esi, eax */
    /* test esi, esi */ /* 0x17186631: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718683C; /* 0x17186633: jl 0x1718683c */
L_17186639:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & 0; /* 0x17186639: and dword ptr [ebp + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1718663D: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171867C5; /* 0x17186641: jbe 0x171867c5 */
L_17186647:
    eax = MEM32(ebp + (-0x60)); /* 0x17186647: mov eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x64)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x64)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x64)) = MEM32(ebp + (-0x64)) | 0xFFFFFFFFu; /* 0x1718664A: or dword ptr [ebp - 0x64], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x44); /* 0x1718664E: mov esi, dword ptr [ebp + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x17186651: add eax, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3C)) = esi; /* 0x17186654: mov dword ptr [ebp - 0x3c], esi */
    MEM32(ebp + 0x10) = eax; /* 0x17186657: mov dword ptr [ebp + 0x10], eax */
L_1718665A:
    eax = ebp + (-0x64); /* 0x1718665A: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1718665D: push eax */
    ecx = ebp + (-0x78); /* 0x1718665E: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_17184D8F); /* 0x17186661: call 0x17184d8f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x17186666: mov ecx, dword ptr [esi] */
    eax = MEM32(esi + 0x8); /* 0x17186668: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718666B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x24), edi */ /* 0x1718666D: cmp dword ptr [ebp + 0x24], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x40) = edi; /* 0x17186670: mov dword ptr [ebp + 0x40], edi */
    MEM32(ebp + (-0x50)) = ecx; /* 0x17186673: mov dword ptr [ebp - 0x50], ecx */
    MEM32(ebp + (-0x38)) = edi; /* 0x17186676: mov dword ptr [ebp - 0x38], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171867AC; /* 0x17186679: jbe 0x171867ac */
L_1718667F:
    esi = MEM32(ebp + (-0x4)); /* 0x1718667F: mov esi, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x20)); /* 0x17186682: mov edx, dword ptr [ebp - 0x20] */
    ecx = MEM32(ebp + (-0x28)); /* 0x17186685: mov ecx, dword ptr [ebp - 0x28] */
    esi = esi + eax * 4; /* 0x17186688: lea esi, [esi + eax*4] */
    MEM32(ebp + 0x34) = esi; /* 0x1718668B: mov dword ptr [ebp + 0x34], esi */
    esi = MEM32(ebp + (-0x18)); /* 0x1718668E: mov esi, dword ptr [ebp - 0x18] */
    eax = eax + eax * 2; /* 0x17186691: lea eax, [eax + eax*2] */
    esi = esi + eax * 4; /* 0x17186694: lea esi, [esi + eax*4] */
L_17186697:
    MEM32(ebp + 0x38) = ecx; /* 0x17186697: mov dword ptr [ebp + 0x38], ecx */
    MEM32(ebp + 0x1C) = edx; /* 0x1718669A: mov dword ptr [ebp + 0x1c], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718669D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718669F:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x1718669F: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171866AC; /* 0x171866A3: je 0x171866ac */
L_171866A5:
    ecx = MEM32(ebp + 0x1C); /* 0x171866A5: mov ecx, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ecx); /* 0x171866A8: mov ecx, dword ptr [ecx] */
    goto L_171866B2; /* 0x171866AA: jmp 0x171866b2 */
L_171866AC:
    ecx = MEM32(ebp + 0x38); /* 0x171866AC: mov ecx, dword ptr [ebp + 0x38] */
    ecx = (uint32_t)MEM16(ecx); /* 0x171866AF: movzx ecx, word ptr [ecx] */
L_171866B2:
    edx = MEM32(ebp + 0x8); /* 0x171866B2: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x38) = MEM32(ebp + 0x38) + 2; /* 0x171866B5: add dword ptr [ebp + 0x38], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4; /* 0x171866B9: add dword ptr [ebp + 0x1c], 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + eax + (-0x34)) = ecx; /* 0x171866BD: mov dword ptr [ebp + eax - 0x34], ecx */
    ecx = MEM32(edx + ecx * 4); /* 0x171866C1: mov ecx, dword ptr [edx + ecx*4] */
    edx = MEM32(ebp + 0x14); /* 0x171866C4: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(edx + ecx * 4); /* 0x171866C7: mov ecx, dword ptr [edx + ecx*4] */
    MEM32(ebp + eax + (-0x4C)) = ecx; /* 0x171866CA: mov dword ptr [ebp + eax - 0x4c], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171866CE: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xCu */ /* 0x171866D1: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718669F; /* 0x171866D4: jb 0x1718669f */
L_171866D6:
    eax = MEM32(ebp + 0x20); /* 0x171866D6: mov eax, dword ptr [ebp + 0x20] */
    /* cmp MEM32(ebp + (-0x4C)), eax */ /* 0x171866D9: cmp dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171866EC; /* 0x171866DC: je 0x171866ec */
L_171866DE:
    /* cmp MEM32(ebp + (-0x48)), eax */ /* 0x171866DE: cmp dword ptr [ebp - 0x48], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171866EC; /* 0x171866E1: je 0x171866ec */
L_171866E3:
    /* cmp MEM32(ebp + (-0x44)), eax */ /* 0x171866E3: cmp dword ptr [ebp - 0x44], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186796; /* 0x171866E6: jne 0x17186796 */
L_171866EC:
    ecx = MEM32(ebp + 0x40); /* 0x171866EC: mov ecx, dword ptr [ebp + 0x40] */
    eax = MEM32(ebp + (-0x50)); /* 0x171866EF: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) & 0; /* 0x171866F2: and dword ptr [ebp + 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171866F6: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x24)); /* 0x171866F8: mov ecx, dword ptr [ebp - 0x24] */
    eax = eax + eax * 2; /* 0x171866FB: lea eax, [eax + eax*2] */
    MEM32(ebp + (-0x8)) = esi; /* 0x171866FE: mov dword ptr [ebp - 8], esi */
    eax = ecx + eax * 4 + 0x8; /* 0x17186701: lea eax, [ecx + eax*4 + 8] */
L_17186705:
    ecx = MEM32(ebp + 0x2C); /* 0x17186705: mov ecx, dword ptr [ebp + 0x2c] */
    esi = MEM32(ebp + ecx * 4 + (-0x34)); /* 0x17186708: mov esi, dword ptr [ebp + ecx*4 - 0x34] */
    ecx = MEM32(ebp + (-0x78)); /* 0x1718670C: mov ecx, dword ptr [ebp - 0x78] */
    ecx = ecx + esi * 4; /* 0x1718670F: lea ecx, [ecx + esi*4] */
    /* cmp MEM32(ecx), 0xFFFFFFFFu */ /* 0x17186712: cmp dword ptr [ecx], -1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186770; /* 0x17186715: jne 0x17186770 */
L_17186717:
    edx = MEM32(ebp + 0x8); /* 0x17186717: mov edx, dword ptr [ebp + 8] */
    edi = MEM32(edx + esi * 4); /* 0x1718671A: mov edi, dword ptr [edx + esi*4] */
    ebx = MEM32(ebp + 0x10); /* 0x1718671D: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17186720: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx), edx */ /* 0x17186722: cmp dword ptr [ebx], edx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + 0xF) = (uint8_t)(0); /* 0x17186724: mov byte ptr [ebp + 0xf], 0 */
    MEM32(ebp + (-0x1C)) = edx; /* 0x17186728: mov dword ptr [ebp - 0x1c], edx */
    MEM8(ebp + 0x47) = (uint8_t)(LO8(edx)); /* 0x1718672B: mov byte ptr [ebp + 0x47], dl */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17186754; /* 0x1718672E: jbe 0x17186754 */
L_17186730:
    /* cmp MEM8(ebp + 0xF), 0 */ /* 0x17186730: cmp byte ptr [ebp + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186754; /* 0x17186734: jne 0x17186754 */
L_17186736:
    ebx = MEM32(ebp + 0x10); /* 0x17186736: mov ebx, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebx + (-0x4)); /* 0x17186739: mov ebx, dword ptr [ebx - 4] */
    /* cmp MEM32(ebx + edx * 4), edi */ /* 0x1718673C: cmp dword ptr [ebx + edx*4], edi */
    _flag_a = (uint32_t)(MEM32(ebx + edx * 4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718674C; /* 0x1718673F: jne 0x1718674c */
L_17186741:
    MEM8(ebp + 0xF) = (uint8_t)(1); /* 0x17186741: mov byte ptr [ebp + 0xf], 1 */
    MEM32(ebp + (-0x1C)) = edx; /* 0x17186745: mov dword ptr [ebp - 0x1c], edx */
    MEM8(ebp + 0x47) = (uint8_t)(1); /* 0x17186748: mov byte ptr [ebp + 0x47], 1 */
L_1718674C:
    ebx = MEM32(ebp + 0x10); /* 0x1718674C: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718674F: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebx) */ /* 0x17186750: cmp edx, dword ptr [ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186730; /* 0x17186752: jb 0x17186730 */
L_17186754:
    edx = MEM32(ebp + (-0x1C)); /* 0x17186754: mov edx, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x10)); /* 0x17186757: mov ebx, dword ptr [ebp - 0x10] */
    MEM32(eax + (-0x4)) = edx; /* 0x1718675A: mov dword ptr [eax - 4], edx */
    SET_LO8(edx, MEM8(ebp + 0x47)); /* 0x1718675D: mov dl, byte ptr [ebp + 0x47] */
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x17186760: mov byte ptr [eax], dl */
    edx = MEM32(ebp + 0x40); /* 0x17186762: mov edx, dword ptr [ebp + 0x40] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x40)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x40) = MEM32(ebp + 0x40) + 1; /* 0x17186765: inc dword ptr [ebp + 0x40] */
    _flag_k = FK_INC;
    MEM32(eax + (-0x8)) = esi; /* 0x17186768: mov dword ptr [eax - 8], esi */
    MEM32(ecx) = edx; /* 0x1718676B: mov dword ptr [ecx], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1718676D: add eax, 0xc */
    _flag_k = FK_ADD;
L_17186770:
    esi = MEM32(ebp + (-0x8)); /* 0x17186770: mov esi, dword ptr [ebp - 8] */
    ecx = MEM32(ecx); /* 0x17186773: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) + 1; /* 0x17186775: inc dword ptr [ebp + 0x2c] */
    _flag_k = FK_INC;
    MEM32(esi) = ecx; /* 0x17186778: mov dword ptr [esi], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1718677A: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x2C), 3 */ /* 0x1718677D: cmp dword ptr [ebp + 0x2c], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = esi; /* 0x17186781: mov dword ptr [ebp - 8], esi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186705; /* 0x17186784: jb 0x17186705 */
L_1718678A:
    eax = MEM32(ebp + 0x34); /* 0x1718678A: mov eax, dword ptr [ebp + 0x34] */
    edi = MEM32(ebp + (-0x38)); /* 0x1718678D: mov edi, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x34) = MEM32(ebp + 0x34) + 4; /* 0x17186790: add dword ptr [ebp + 0x34], 4 */
    _flag_k = FK_ADD;
    MEM32(eax) = edi; /* 0x17186794: mov dword ptr [eax], edi */
L_17186796:
    ecx = MEM32(ebp + 0x38); /* 0x17186796: mov ecx, dword ptr [ebp + 0x38] */
    edx = MEM32(ebp + 0x1C); /* 0x17186799: mov edx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1718679C: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0x24) */ /* 0x1718679D: cmp edi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x38)) = edi; /* 0x171867A0: mov dword ptr [ebp - 0x38], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186697; /* 0x171867A3: jb 0x17186697 */
L_171867A9:
    esi = MEM32(ebp + (-0x3C)); /* 0x171867A9: mov esi, dword ptr [ebp - 0x3c] */
L_171867AC:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 1; /* 0x171867AC: inc dword ptr [ebp + 0x20] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x20); /* 0x171867AF: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x24u; /* 0x171867B2: add dword ptr [ebp + 0x10], 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x171867B6: add esi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x18) */ /* 0x171867B9: cmp eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = esi; /* 0x171867BC: mov dword ptr [ebp - 0x3c], esi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718665A; /* 0x171867BF: jb 0x1718665a */
L_171867C5:
    /* cmp MEM32(ebp + 0x30), 0 */ /* 0x171867C5: cmp dword ptr [ebp + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x28); /* 0x171867C9: mov edi, dword ptr [ebp + 0x28] */
    PUSH32(esp, edi); /* 0x171867CC: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171867FE; /* 0x171867CD: je 0x171867fe */
L_171867CF:
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x171867CF: push dword ptr [ebp - 0x68] */
    RECOMP_CALL(sub_1702BAA3); /* 0x171867D2: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171867D7: mov esi, eax */
    /* test esi, esi */ /* 0x171867D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718683C; /* 0x171867DB: jl 0x1718683c */
L_171867DD:
    eax = MEM32(edi); /* 0x171867DD: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x171867DF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171867E1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x171867E2: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x171867E5: mov edx, dword ptr [ebp - 0xc] */
    /* test edx, edx */ /* 0x171867E8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718682F; /* 0x171867EA: jbe 0x1718682f */
L_171867EC:
    ecx = MEM32(ebp + (-0x18)); /* 0x171867EC: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171867EF: sub ecx, eax */
    _flag_k = FK_CMP;
L_171867F1:
    esi = MEM32(ecx + eax); /* 0x171867F1: mov esi, dword ptr [ecx + eax] */
    MEM32(eax) = esi; /* 0x171867F4: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171867F6: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171867F9: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171867F1; /* 0x171867FA: jne 0x171867f1 */
L_171867FC:
    goto L_1718682F; /* 0x171867FC: jmp 0x1718682f */
L_171867FE:
    eax = ebx + ebx * 2; /* 0x171867FE: lea eax, [ebx + ebx*2] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17186801: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17186801: shl eax, 1 */
    PUSH32(esp, eax); /* 0x17186803: push eax */
    RECOMP_CALL(sub_1702BAA3); /* 0x17186804: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17186809: mov esi, eax */
    /* test esi, esi */ /* 0x1718680B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718683C; /* 0x1718680D: jl 0x1718683c */
L_1718680F:
    eax = MEM32(edi); /* 0x1718680F: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x17186811: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17186813: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x17186814: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17186817: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0xC)), ecx */ /* 0x17186819: cmp dword ptr [ebp - 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718682F; /* 0x1718681C: jbe 0x1718682f */
L_1718681E:
    edx = MEM32(ebp + (-0x18)); /* 0x1718681E: mov edx, dword ptr [ebp - 0x18] */
    SET_LO16(edx, MEM16(edx + ecx * 4)); /* 0x17186821: mov dx, word ptr [edx + ecx*4] */
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x17186825: mov word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17186829: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + (-0xC)) */ /* 0x1718682A: cmp ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718681E; /* 0x1718682D: jb 0x1718681e */
L_1718682F:
    eax = MEM32(ebp + 0x3C); /* 0x1718682F: mov eax, dword ptr [ebp + 0x3c] */
    ecx = MEM32(ebp + (-0x14)); /* 0x17186832: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17186835: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x17186837: mov dword ptr [eax], ecx */
    MEM32(ebp + (-0x24)) = esi; /* 0x17186839: mov dword ptr [ebp - 0x24], esi */
L_1718683C:
    /* cmp MEM32(ebp + (-0x40)), 0 */ /* 0x1718683C: cmp dword ptr [ebp - 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718684B; /* 0x17186840: je 0x1718684b */
L_17186842:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17186842: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x17186845: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718684A: pop ecx */
L_1718684B:
    ebx = POP32_VAL(esp); /* 0x1718684B: pop ebx */
L_1718684C:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1718684C: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1721B010); /* 0x1718684F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x17186854: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x17186857: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1718685C: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1718685E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x17186863: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1718686D; /* 0x17186866: jmp 0x1718686d */
L_17186868:
    esi = 0x8876086Cu; /* 0x17186868: mov esi, 0x8876086c */
L_1718686D:
    ecx = ebp + (-0x8C); /* 0x1718686D: lea ecx, [ebp - 0x8c] */
    RECOMP_CALL(sub_1717AFBF); /* 0x17186873: call 0x1717afbf */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x78); /* 0x17186878: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_1717AF06); /* 0x1718687B: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x60); /* 0x17186880: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_171857AC); /* 0x17186883: call 0x171857ac */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x17186888: pop edi */
    eax = esi; /* 0x17186889: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718688B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718688C: leave  */
    RECOMP_FLAGS_OUT(); esp += 68; { RECOMP_REGS_OUT(); return; } /* 0x1718688D: ret 0x40 */
    RECOMP_REGS_OUT();
}

void sub_17186895(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186895u);

L_17186895:
    edi = edi; /* 0x17186895: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186897: push ebp */
    ebp = esp; /* 0x17186898: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1718689A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1718689B: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718689E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171868A0:
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x171868A0: fld dword ptr [0x17001430] */
    fp_push(*(float*)&MEM32(ecx + edx * 4 + 0xC)); /* 0x171868A6: fld dword ptr [ecx + edx*4 + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171868AA: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171868AC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171868AE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171868B8; /* 0x171868B1: jnp 0x171868b8 */
L_171868B3:
    /* cmp MEM32(ecx + edx * 4), edi */ /* 0x171868B3: cmp dword ptr [ecx + edx*4], edi */
    _flag_a = (uint32_t)(MEM32(ecx + edx * 4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171868E0; /* 0x171868B6: je 0x171868e0 */
L_171868B8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171868B8: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 3 */ /* 0x171868B9: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171868A0; /* 0x171868BC: jb 0x171868a0 */
L_171868BE:
    PUSH32(esp, esi); /* 0x171868BE: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171868BF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx + 0xC; /* 0x171868C1: lea esi, [ecx + 0xc] */
L_171868C4:
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x171868C4: fld dword ptr [0x17001430] */
    fp_push(*(float*)&MEM32(esi)); /* 0x171868CA: fld dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171868CC: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171868CE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171868D0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171868ED; /* 0x171868D3: jnp 0x171868ed */
L_171868D5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171868D5: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171868D6: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, 3 */ /* 0x171868D9: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171868C4; /* 0x171868DC: jb 0x171868c4 */
L_171868DE:
    goto L_171868F7; /* 0x171868DE: jmp 0x171868f7 */
L_171868E0:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171868E0: fld dword ptr [ebp + 8] */
    eax = ecx + edx * 4 + 0xC; /* 0x171868E3: lea eax, [ecx + edx*4 + 0xc] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x171868E7: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171868E9: fstp dword ptr [eax] */
    goto L_171868F8; /* 0x171868EB: jmp 0x171868f8 */
L_171868ED:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171868ED: fld dword ptr [ebp + 8] */
    MEM32(ecx + edx * 4) = edi; /* 0x171868F0: mov dword ptr [ecx + edx*4], edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edx * 4 + 0xC) = _v; } /* 0x171868F3: fstp dword ptr [ecx + edx*4 + 0xc] */
L_171868F7:
    esi = POP32_VAL(esp); /* 0x171868F7: pop esi */
L_171868F8:
    edi = POP32_VAL(esp); /* 0x171868F8: pop edi */
    ebp = POP32_VAL(esp); /* 0x171868F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171868FA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17186902(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186902u);

L_17186902:
    edi = edi; /* 0x17186902: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186904: push ebp */
    ebp = esp; /* 0x17186905: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17186907: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17186908: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1718690B: push edi */
    PUSH32(esp, 3); /* 0x1718690C: push 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1718690E: add esi, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x17186911: pop edi */
L_17186912:
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17186912: fld dword ptr [0x17001430] */
    fp_push(*(float*)&MEM32(esi)); /* 0x17186918: fld dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1718691A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718691C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1718691E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17186934; /* 0x17186921: jnp 0x17186934 */
L_17186923:
    PUSH32(esp, MEM32(esi + (-0xC))); /* 0x17186923: push dword ptr [esi - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17186926: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17186929: fmul dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x1718692B: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718692C: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17186895); /* 0x1718692F: call 0x17186895 */
    RECOMP_FLAGS_IN();
L_17186934:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17186934: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17186937: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17186912; /* 0x17186938: jne 0x17186912 */
L_1718693A:
    edi = POP32_VAL(esp); /* 0x1718693A: pop edi */
    esi = POP32_VAL(esp); /* 0x1718693B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718693C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1718693D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17186945(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186945u);

L_17186945:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186945: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17186947:
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + eax * 4) = MEM32(ecx + eax * 4) & 0; /* 0x17186947: and dword ptr [ecx + eax*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x1718694B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4 + 0xC) = _v; } /* 0x1718694D: fstp dword ptr [ecx + eax*4 + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17186951: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 3 */ /* 0x17186952: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186947; /* 0x17186955: jb 0x17186947 */
L_17186957:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17186957: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718695D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718695Du);

L_1718695D:
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x1718695D: fld dword ptr [0x17001430] */
    PUSH32(esp, esi); /* 0x17186963: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17186964: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17186966:
    fp_push(_st[0]); /* 0x17186966: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + esi * 4 + 0xC)); /* 0x17186968: fld dword ptr [ecx + esi*4 + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1718696C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718696E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17186970: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17186995; /* 0x17186973: jp 0x17186995 */
L_17186975:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17186975: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17186977:
    fp_push(_st[0]); /* 0x17186977: fld st(0) */
    fp_push(*(float*)&MEM32(ecx + edx * 4 + 0xC)); /* 0x17186979: fld dword ptr [ecx + edx*4 + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1718697D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718697F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17186981: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1718698F; /* 0x17186984: jnp 0x1718698f */
L_17186986:
    eax = MEM32(ecx + edx * 4); /* 0x17186986: mov eax, dword ptr [ecx + edx*4] */
    PUSH32(esp, 3); /* 0x17186989: push 3 */
    MEM32(ecx + esi * 4) = eax; /* 0x1718698B: mov dword ptr [ecx + esi*4], eax */
    edx = POP32_VAL(esp); /* 0x1718698E: pop edx */
L_1718698F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718698F: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 3 */ /* 0x17186990: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186977; /* 0x17186993: jb 0x17186977 */
L_17186995:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17186995: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 3 */ /* 0x17186996: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186966; /* 0x17186999: jb 0x17186966 */
L_1718699B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718699B: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x1718699D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718699E: ret  */
    RECOMP_REGS_OUT();
}

void sub_171869A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171869A4u);

L_171869A4:
    edi = edi; /* 0x171869A4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171869A6: push ebp */
    ebp = esp; /* 0x171869A7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171869A9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171869AC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x171869AF: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171869B1: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(eax + 0x4); /* 0x171869B4: mov ecx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171869B7: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(eax + 0x8); /* 0x171869BA: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x171869BD: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x171869C0: mov dword ptr [ebp + 8], eax */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171869C3: fld dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171869C6: mov dword ptr [ebp - 0x10], ecx */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171869C9: fmul dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0xC); /* 0x171869CC: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x171869CF: fld dword ptr [ebp - 0x10] */
    ecx = MEM32(eax); /* 0x171869D2: mov ecx, dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171869D4: fmul dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x4); /* 0x171869D7: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171869DA: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + 0xC) = eax; /* 0x171869DD: mov dword ptr [ebp + 0xc], eax */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171869E0: fsubp st(1) */
    eax = MEM32(ebp + 0x10); /* 0x171869E2: mov eax, dword ptr [ebp + 0x10] */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x171869E5: fdivr dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171869EB: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x171869EE: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171869F1: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171869F4: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171869F7: fsubp st(1) */
    _st[0] *= _st[1]; /* 0x171869F9: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171869FB: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171869FE: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17186A01: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17186A04: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17186A07: fsubp st(1) */
    _st[0] *= _st[2]; /* 0x17186A09: fmul st(2) */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x17186A0B: fld dword ptr [0x1700141c] */
    fp_push(_st[2]); /* 0x17186A11: fld st(2) */
    _st[0] *= _st[1]; /* 0x17186A13: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17186A15: fstp dword ptr [eax] */
    fp_push(_st[1]); /* 0x17186A17: fld st(1) */
    _st[0] *= _st[1]; /* 0x17186A19: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17186A1B: fstp dword ptr [eax + 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17186A1E: fstp st(0) */
    fp_push(_st[0]); /* 0x17186A20: fld st(0) */
    _st[0] *= _st[1]; /* 0x17186A22: fmul st(1) */
    fp_push(_st[2]); /* 0x17186A24: fld st(2) */
    _st[0] *= _st[3]; /* 0x17186A26: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17186A28: faddp st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17001870); /* 0x17186A2A: fmul dword ptr [0x17001870] */
    _st[0] = sqrt(_st[0]); /* 0x17186A30: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x17186A32: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17186A34: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17186A36: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17186A38: fstp dword ptr [eax + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17186A3B: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17186A3C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17186A44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186A44u);

L_17186A44:
    edi = edi; /* 0x17186A44: mov edi, edi */
    PUSH32(esp, esi); /* 0x17186A46: push esi */
    esi = ecx; /* 0x17186A47: mov esi, ecx */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x17186A49: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186A85; /* 0x17186A4D: je 0x17186a85 */
L_17186A4F:
    PUSH32(esp, edi); /* 0x17186A4F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17186A50: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x17186A52: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17186A80; /* 0x17186A55: jbe 0x17186a80 */
L_17186A57:
    PUSH32(esp, ebx); /* 0x17186A57: push ebx */
L_17186A58:
    eax = MEM32(esi + 0x4); /* 0x17186A58: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + edi * 4); /* 0x17186A5B: mov eax, dword ptr [eax + edi*4] */
    /* test eax, eax */ /* 0x17186A5E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186A72; /* 0x17186A60: je 0x17186a72 */
L_17186A62:
    ebx = MEM32(eax + 0x4); /* 0x17186A62: mov ebx, dword ptr [eax + 4] */
    PUSH32(esp, eax); /* 0x17186A65: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x17186A66: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x17186A6B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17186A6D: pop ecx */
    eax = ebx; /* 0x17186A6E: mov eax, ebx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17186A62; /* 0x17186A70: jne 0x17186a62 */
L_17186A72:
    eax = MEM32(esi + 0x4); /* 0x17186A72: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + edi * 4) = MEM32(eax + edi * 4) & 0; /* 0x17186A75: and dword ptr [eax + edi*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17186A79: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x17186A7A: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186A58; /* 0x17186A7D: jb 0x17186a58 */
L_17186A7F:
    ebx = POP32_VAL(esp); /* 0x17186A7F: pop ebx */
L_17186A80:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x17186A80: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x17186A84: pop edi */
L_17186A85:
    esi = POP32_VAL(esp); /* 0x17186A85: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17186A86: ret  */
    RECOMP_REGS_OUT();
}

void sub_17186A8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186A8Cu);

L_17186A8C:
    edi = edi; /* 0x17186A8C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186A8E: push ebp */
    ebp = esp; /* 0x17186A8F: mov ebp, esp */
    eax = MEM32(ecx + 0x4); /* 0x17186A91: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x17186A94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17186A9C; /* 0x17186A96: jne 0x17186a9c */
L_17186A98:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x17186A98: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_17186AAC; /* 0x17186A9A: jmp 0x17186aac */
L_17186A9C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17186A9C: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x4) = eax; /* 0x17186A9D: mov dword ptr [ecx + 4], eax */
    ecx = MEM32(ecx); /* 0x17186AA0: mov ecx, dword ptr [ecx] */
    eax = MEM32(ecx + eax * 4); /* 0x17186AA2: mov eax, dword ptr [ecx + eax*4] */
    ecx = MEM32(ebp + 0x8); /* 0x17186AA5: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x17186AA8: mov dword ptr [ecx], eax */
    SET_LO8(eax, 1); /* 0x17186AAA: mov al, 1 */
L_17186AAC:
    ebp = POP32_VAL(esp); /* 0x17186AAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17186AAD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17186AB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186AB5u);

L_17186AB5:
    edi = edi; /* 0x17186AB5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186AB7: push ebp */
    ebp = esp; /* 0x17186AB8: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186ABA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x17186ABC: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17186ADC; /* 0x17186ABF: jbe 0x17186adc */
L_17186AC1:
    edx = MEM32(ebp + 0x8); /* 0x17186AC1: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17186AC4: push esi */
    PUSH32(esp, edi); /* 0x17186AC5: push edi */
L_17186AC6:
    edi = MEM32(edx); /* 0x17186AC6: mov edi, dword ptr [edx] */
    esi = MEM32(ecx); /* 0x17186AC8: mov esi, dword ptr [ecx] */
    MEM32(esi + eax * 8) = edi; /* 0x17186ACA: mov dword ptr [esi + eax*8], edi */
    edi = MEM32(edx + 0x4); /* 0x17186ACD: mov edi, dword ptr [edx + 4] */
    MEM32(esi + eax * 8 + 0x4) = edi; /* 0x17186AD0: mov dword ptr [esi + eax*8 + 4], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17186AD4: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x17186AD5: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186AC6; /* 0x17186AD8: jb 0x17186ac6 */
L_17186ADA:
    edi = POP32_VAL(esp); /* 0x17186ADA: pop edi */
    esi = POP32_VAL(esp); /* 0x17186ADB: pop esi */
L_17186ADC:
    ebp = POP32_VAL(esp); /* 0x17186ADC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17186ADD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17186AE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186AE5u);

L_17186AE5:
    eax = MEM32(ecx); /* 0x17186AE5: mov eax, dword ptr [ecx] */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x17186AE7: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17186AEB: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186B18; /* 0x17186AEC: je 0x17186b18 */
L_17186AEE:
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x17186AEE: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax + 0x4); /* 0x17186AF2: mov edx, dword ptr [eax + 4] */
    edx = MEM32(edx); /* 0x17186AF5: mov edx, dword ptr [edx] */
    /* test edx, edx */ /* 0x17186AF7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = edx; /* 0x17186AF9: mov dword ptr [ecx + 4], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17186B1C; /* 0x17186AFC: jne 0x17186b1c */
L_17186AFE:
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) + 1; /* 0x17186AFE: inc dword ptr [ecx + 8] */
    _flag_k = FK_INC;
    edx = MEM32(ecx + 0x8); /* 0x17186B01: mov edx, dword ptr [ecx + 8] */
    /* cmp edx, MEM32(eax + 0x8) */ /* 0x17186B04: cmp edx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17186B1C; /* 0x17186B07: jae 0x17186b1c */
L_17186B09:
    edi = MEM32(eax + 0x4); /* 0x17186B09: mov edi, dword ptr [eax + 4] */
    edx = MEM32(edi + edx * 4); /* 0x17186B0C: mov edx, dword ptr [edi + edx*4] */
    /* test edx, edx */ /* 0x17186B0F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = edx; /* 0x17186B11: mov dword ptr [ecx + 4], edx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186AFE; /* 0x17186B14: je 0x17186afe */
L_17186B16:
    edi = POP32_VAL(esp); /* 0x17186B16: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17186B17: ret  */
L_17186B18:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x17186B18: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17186B1C:
    edi = POP32_VAL(esp); /* 0x17186B1C: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17186B1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_17186B23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186B23u);

L_17186B23:
    eax = MEM32(ecx + 0x4); /* 0x17186B23: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x4); /* 0x17186B26: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x17186B29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = eax; /* 0x17186B2B: mov dword ptr [ecx + 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17186B4C; /* 0x17186B2E: jne 0x17186b4c */
L_17186B30:
    edx = MEM32(ecx); /* 0x17186B30: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x17186B32: push esi */
L_17186B33:
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) + 1; /* 0x17186B33: inc dword ptr [ecx + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ecx + 0x8); /* 0x17186B36: mov eax, dword ptr [ecx + 8] */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x17186B39: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17186B4B; /* 0x17186B3C: jae 0x17186b4b */
L_17186B3E:
    esi = MEM32(edx + 0x4); /* 0x17186B3E: mov esi, dword ptr [edx + 4] */
    eax = MEM32(esi + eax * 4); /* 0x17186B41: mov eax, dword ptr [esi + eax*4] */
    /* test eax, eax */ /* 0x17186B44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = eax; /* 0x17186B46: mov dword ptr [ecx + 4], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186B33; /* 0x17186B49: je 0x17186b33 */
L_17186B4B:
    esi = POP32_VAL(esp); /* 0x17186B4B: pop esi */
L_17186B4C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17186B4C: ret  */
    RECOMP_REGS_OUT();
}

void sub_17186B52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186B52u);

L_17186B52:
    edi = edi; /* 0x17186B52: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186B54: push ebp */
    ebp = esp; /* 0x17186B55: mov ebp, esp */
    eax = MEM32(ecx + 0x4); /* 0x17186B57: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x17186B5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17186B62; /* 0x17186B5C: jne 0x17186b62 */
L_17186B5E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x17186B5E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_17186B7B; /* 0x17186B60: jmp 0x17186b7b */
L_17186B62:
    edx = MEM32(ecx); /* 0x17186B62: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17186B64: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x4) = eax; /* 0x17186B65: mov dword ptr [ecx + 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x17186B68: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17186B6B: push esi */
    esi = MEM32(edx + eax * 8); /* 0x17186B6C: mov esi, dword ptr [edx + eax*8] */
    MEM32(ecx) = esi; /* 0x17186B6F: mov dword ptr [ecx], esi */
    eax = MEM32(edx + eax * 8 + 0x4); /* 0x17186B71: mov eax, dword ptr [edx + eax*8 + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x17186B75: mov dword ptr [ecx + 4], eax */
    SET_LO8(eax, 1); /* 0x17186B78: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x17186B7A: pop esi */
L_17186B7B:
    ebp = POP32_VAL(esp); /* 0x17186B7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17186B7C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17186B84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186B84u);

L_17186B84:
    edi = edi; /* 0x17186B84: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186B86: push ebp */
    ebp = esp; /* 0x17186B87: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17186B89: push ecx */
    PUSH32(esp, ebx); /* 0x17186B8A: push ebx */
    PUSH32(esp, esi); /* 0x17186B8B: push esi */
    PUSH32(esp, edi); /* 0x17186B8C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17186B8D: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0x17u */ /* 0x17186B90: cmp edi, 0x17 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = ecx; /* 0x17186B93: mov esi, ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17186B9A; /* 0x17186B95: jae 0x17186b9a */
L_17186B97:
    PUSH32(esp, 0x17u); /* 0x17186B97: push 0x17 */
    edi = POP32_VAL(esp); /* 0x17186B99: pop edi */
L_17186B9A:
    eax = MEM32(esi + 0x4); /* 0x17186B9A: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + 0x8) = eax; /* 0x17186B9D: mov dword ptr [ebp + 8], eax */
    eax = edi; /* 0x17186BA0: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17186BA2: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17186BA2: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17186BA5: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17186BA6: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17186BAB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x17186BAD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17186BAF: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186BB9; /* 0x17186BB0: jne 0x17186bb9 */
L_17186BB2:
    eax = 0x8007000Eu; /* 0x17186BB2: mov eax, 0x8007000e */
    goto L_17186C1F; /* 0x17186BB7: jmp 0x17186c1f */
L_17186BB9:
    MEM32(esi + 0x4) = eax; /* 0x17186BB9: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186BBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ebx */ /* 0x17186BBE: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17186BCD; /* 0x17186BC0: jbe 0x17186bcd */
L_17186BC2:
    ecx = MEM32(esi + 0x4); /* 0x17186BC2: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx + eax * 4) = ebx; /* 0x17186BC5: mov dword ptr [ecx + eax*4], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17186BC8: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x17186BC9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186BC2; /* 0x17186BCB: jb 0x17186bc2 */
L_17186BCD:
    eax = MEM32(esi + 0x8); /* 0x17186BCD: mov eax, dword ptr [esi + 8] */
    /* cmp eax, ebx */ /* 0x17186BD0: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x17186BD2: mov dword ptr [ebp - 4], eax */
    MEM32(esi + 0x8) = edi; /* 0x17186BD5: mov dword ptr [esi + 8], edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_17186C0E; /* 0x17186BD8: jle 0x17186c0e */
L_17186BDA:
    eax = MEM32(ebp + 0x8); /* 0x17186BDA: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + ebx * 4); /* 0x17186BDD: mov ecx, dword ptr [eax + ebx*4] */
    /* test ecx, ecx */ /* 0x17186BE0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186C08; /* 0x17186BE2: je 0x17186c08 */
L_17186BE4:
    eax = MEM32(ecx); /* 0x17186BE4: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17186BE6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(esi + 0x8); /* 0x17186BE8: div dword ptr [esi + 8] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edi = MEM32(ecx + 0x4); /* 0x17186BEB: mov edi, dword ptr [ecx + 4] */
    eax = edx; /* 0x17186BEE: mov eax, edx */
    edx = MEM32(esi + 0x4); /* 0x17186BF0: mov edx, dword ptr [esi + 4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17186BF3: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17186BF3: shl eax, 2 */
    /* test edi, edi */ /* 0x17186BF6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax + edx); /* 0x17186BF8: mov edx, dword ptr [eax + edx] */
    MEM32(ecx + 0x4) = edx; /* 0x17186BFB: mov dword ptr [ecx + 4], edx */
    edx = MEM32(esi + 0x4); /* 0x17186BFE: mov edx, dword ptr [esi + 4] */
    MEM32(eax + edx) = ecx; /* 0x17186C01: mov dword ptr [eax + edx], ecx */
    ecx = edi; /* 0x17186C04: mov ecx, edi */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17186BE4; /* 0x17186C06: jne 0x17186be4 */
L_17186C08:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17186C08: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x4)) */ /* 0x17186C09: cmp ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_17186BDA; /* 0x17186C0C: jl 0x17186bda */
L_17186C0E:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17186C0E: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186C1D; /* 0x17186C12: je 0x17186c1d */
L_17186C14:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17186C14: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721B010); /* 0x17186C17: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17186C1C: pop ecx */
L_17186C1D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186C1D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17186C1F:
    edi = POP32_VAL(esp); /* 0x17186C1F: pop edi */
    esi = POP32_VAL(esp); /* 0x17186C20: pop esi */
    ebx = POP32_VAL(esp); /* 0x17186C21: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17186C22: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17186C23: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17186C2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186C2Bu);

L_17186C2B:
    edi = edi; /* 0x17186C2B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186C2D: push ebp */
    ebp = esp; /* 0x17186C2E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17186C30: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x17186C31: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x17186C34: imul eax, eax, 0x1c */
    PUSH32(esp, ebx); /* 0x17186C37: push ebx */
    PUSH32(esp, eax); /* 0x17186C38: push eax */
    ebx = ecx; /* 0x17186C39: mov ebx, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x17186C3B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17186C40: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x17186C42: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17186C44: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x17186C45: mov dword ptr [ebp - 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186C51; /* 0x17186C48: jne 0x17186c51 */
L_17186C4A:
    eax = 0x8007000Eu; /* 0x17186C4A: mov eax, 0x8007000e */
    goto L_17186C99; /* 0x17186C4F: jmp 0x17186c99 */
L_17186C51:
    /* cmp MEM32(ebx), edx */ /* 0x17186C51: cmp dword ptr [ebx], edx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186C8C; /* 0x17186C53: je 0x17186c8c */
L_17186C55:
    eax = MEM32(ebx + 0x4); /* 0x17186C55: mov eax, dword ptr [ebx + 4] */
    /* cmp eax, edx */ /* 0x17186C58: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17186C7F; /* 0x17186C5A: jbe 0x17186c7f */
L_17186C5C:
    PUSH32(esp, esi); /* 0x17186C5C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186C5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17186C5F: push edi */
L_17186C60:
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x17186C60: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17186C7D; /* 0x17186C63: jae 0x17186c7d */
L_17186C65:
    ecx = MEM32(ebp + (-0x4)); /* 0x17186C65: mov ecx, dword ptr [ebp - 4] */
    esi = MEM32(ebx); /* 0x17186C68: mov esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17186C6A: add esi, eax */
    _flag_k = FK_ADD;
    edi = eax + ecx; /* 0x17186C6C: lea edi, [eax + ecx] */
    PUSH32(esp, 7); /* 0x17186C6F: push 7 */
    ecx = POP32_VAL(esp); /* 0x17186C71: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17186C72: inc edx */
    _flag_k = FK_INC;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17186C73: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x17186C75: add eax, 0x1c */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebx + 0x4) */ /* 0x17186C78: cmp edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186C60; /* 0x17186C7B: jb 0x17186c60 */
L_17186C7D:
    edi = POP32_VAL(esp); /* 0x17186C7D: pop edi */
    esi = POP32_VAL(esp); /* 0x17186C7E: pop esi */
L_17186C7F:
    eax = MEM32(ebx); /* 0x17186C7F: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x17186C81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186C8C; /* 0x17186C83: je 0x17186c8c */
L_17186C85:
    PUSH32(esp, eax); /* 0x17186C85: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x17186C86: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17186C8B: pop ecx */
L_17186C8C:
    eax = MEM32(ebp + 0x8); /* 0x17186C8C: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx + 0x8) = eax; /* 0x17186C8F: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17186C92: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx) = eax; /* 0x17186C95: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186C97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17186C99:
    ebx = POP32_VAL(esp); /* 0x17186C99: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17186C9A: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17186C9B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17186CA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186CA3u);

L_17186CA3:
    edi = edi; /* 0x17186CA3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186CA5: push ebp */
    ebp = esp; /* 0x17186CA6: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17186CA8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17186CAB: push esi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x17186CAC: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x17186CAC: shl eax, 3 */
    PUSH32(esp, edi); /* 0x17186CAF: push edi */
    PUSH32(esp, eax); /* 0x17186CB0: push eax */
    esi = ecx; /* 0x17186CB1: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x17186CB3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17186CB8: pop ecx */
    edi = eax; /* 0x17186CB9: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17186CBB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ecx */ /* 0x17186CBD: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186CC8; /* 0x17186CBF: jne 0x17186cc8 */
L_17186CC1:
    eax = 0x8007000Eu; /* 0x17186CC1: mov eax, 0x8007000e */
    goto L_17186D0C; /* 0x17186CC6: jmp 0x17186d0c */
L_17186CC8:
    /* cmp MEM32(esi), ecx */ /* 0x17186CC8: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186D02; /* 0x17186CCA: je 0x17186d02 */
L_17186CCC:
    eax = MEM32(esi + 0x4); /* 0x17186CCC: mov eax, dword ptr [esi + 4] */
    /* cmp eax, ecx */ /* 0x17186CCF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17186CF5; /* 0x17186CD1: jbe 0x17186cf5 */
L_17186CD3:
    PUSH32(esp, ebx); /* 0x17186CD3: push ebx */
L_17186CD4:
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x17186CD4: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17186CF4; /* 0x17186CD7: jae 0x17186cf4 */
L_17186CD9:
    edx = MEM32(esi); /* 0x17186CD9: mov edx, dword ptr [esi] */
    eax = ecx; /* 0x17186CDB: mov eax, ecx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x17186CDD: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x17186CDD: shl eax, 3 */
    ebx = MEM32(eax + edx); /* 0x17186CE0: mov ebx, dword ptr [eax + edx] */
    MEM32(eax + edi) = ebx; /* 0x17186CE3: mov dword ptr [eax + edi], ebx */
    edx = MEM32(eax + edx + 0x4); /* 0x17186CE6: mov edx, dword ptr [eax + edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17186CEA: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax + edi + 0x4) = edx; /* 0x17186CEB: mov dword ptr [eax + edi + 4], edx */
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x17186CEF: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186CD4; /* 0x17186CF2: jb 0x17186cd4 */
L_17186CF4:
    ebx = POP32_VAL(esp); /* 0x17186CF4: pop ebx */
L_17186CF5:
    eax = MEM32(esi); /* 0x17186CF5: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x17186CF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17186D02; /* 0x17186CF9: je 0x17186d02 */
L_17186CFB:
    PUSH32(esp, eax); /* 0x17186CFB: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x17186CFC: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17186D01: pop ecx */
L_17186D02:
    eax = MEM32(ebp + 0x8); /* 0x17186D02: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x8) = eax; /* 0x17186D05: mov dword ptr [esi + 8], eax */
    MEM32(esi) = edi; /* 0x17186D08: mov dword ptr [esi], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186D0A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17186D0C:
    edi = POP32_VAL(esp); /* 0x17186D0C: pop edi */
    esi = POP32_VAL(esp); /* 0x17186D0D: pop esi */
    ebp = POP32_VAL(esp); /* 0x17186D0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17186D0F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17186D17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186D17u);

L_17186D17:
    edi = edi; /* 0x17186D17: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186D19: push ebp */
    ebp = esp; /* 0x17186D1A: mov ebp, esp */
    edx = MEM32(ecx + 0x8); /* 0x17186D1C: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(ebp + 0x8); /* 0x17186D1F: mov eax, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(eax + 0x8) */ /* 0x17186D22: cmp edx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186D34; /* 0x17186D25: jne 0x17186d34 */
L_17186D27:
    ecx = MEM32(ecx + 0xC); /* 0x17186D27: mov ecx, dword ptr [ecx + 0xc] */
    /* cmp ecx, MEM32(eax + 0xC) */ /* 0x17186D2A: cmp ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186D34; /* 0x17186D2D: jne 0x17186d34 */
L_17186D2F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186D2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17186D31: inc eax */
    _flag_k = FK_INC;
    goto L_17186D36; /* 0x17186D32: jmp 0x17186d36 */
L_17186D34:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186D34: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17186D36:
    ebp = POP32_VAL(esp); /* 0x17186D36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17186D37: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17186D3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186D3Fu);

L_17186D3F:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x17186D3F: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186D4E; /* 0x17186D43: je 0x17186d4e */
L_17186D45:
    /* cmp MEM32(ecx + 0x14), 0xFFFFFFFFu */ /* 0x17186D45: cmp dword ptr [ecx + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186D4E; /* 0x17186D49: je 0x17186d4e */
L_17186D4B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186D4B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17186D4D: ret  */
L_17186D4E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186D4E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17186D50: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17186D51: ret  */
    RECOMP_REGS_OUT();
}

void sub_17186D57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186D57u);

L_17186D57:
    edi = edi; /* 0x17186D57: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186D59: push ebp */
    ebp = esp; /* 0x17186D5A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17186D5C: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x17186D5F: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x17186D62: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x17186D66: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17186D7C; /* 0x17186D68: jae 0x17186d7c */
L_17186D6A:
    _flag_a = (uint32_t)((MEM32(ecx + 0x14) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + 0x14) | 0xFFFFFFFFu));
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) | 0xFFFFFFFFu; /* 0x17186D6A: or dword ptr [ecx + 0x14], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x8) = eax; /* 0x17186D6E: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x17186D71: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0xC) = edx; /* 0x17186D74: mov dword ptr [ecx + 0xc], edx */
    MEM32(ecx + 0x10) = eax; /* 0x17186D77: mov dword ptr [ecx + 0x10], eax */
    goto L_17186D8C; /* 0x17186D7A: jmp 0x17186d8c */
L_17186D7C:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 0xFFFFFFFFu));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0xFFFFFFFFu; /* 0x17186D7C: or dword ptr [ecx + 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0xC) = eax; /* 0x17186D80: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x17186D83: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x8) = edx; /* 0x17186D86: mov dword ptr [ecx + 8], edx */
    MEM32(ecx + 0x14) = eax; /* 0x17186D89: mov dword ptr [ecx + 0x14], eax */
L_17186D8C:
    edx = MEM32(ecx + 0x8); /* 0x17186D8C: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(ecx + 0xC); /* 0x17186D8F: mov eax, dword ptr [ecx + 0xc] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xBu); /* 0x17186D92: imul edx, edx, 0xb */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) & 0; /* 0x17186D95: and dword ptr [ecx + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edx + eax + 0x3; /* 0x17186D99: lea edx, [edx + eax + 3] */
    eax = (uint32_t)((int32_t)eax * (int32_t)7); /* 0x17186D9D: imul eax, eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 5; /* 0x17186DA0: add eax, 5 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x17186DA3: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x1C) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + 0x1C) | 0xFFFFFFFFu));
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) | 0xFFFFFFFFu; /* 0x17186DA5: or dword ptr [ecx + 0x1c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = edx; /* 0x17186DA9: mov dword ptr [ecx], edx */
    ebp = POP32_VAL(esp); /* 0x17186DAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17186DAC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17186DB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186DB4u);

L_17186DB4:
    edi = edi; /* 0x17186DB4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186DB6: push ebp */
    ebp = esp; /* 0x17186DB7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17186DB9: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17186DBC: push esi */
    esi = ecx; /* 0x17186DBD: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) & 0; /* 0x17186DBF: and dword ptr [esi + 0x5c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17186DC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x17186DC5: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x17186DC8: fild dword ptr [ebp + 8] */
    MEM32(esi + 0x60) = eax; /* 0x17186DCB: mov dword ptr [esi + 0x60], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17186DD6; /* 0x17186DCE: jge 0x17186dd6 */
L_17186DD0:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17186DD0: fadd dword ptr [0x1700142c] */
L_17186DD6:
    eax = MEM32(ebp + 0xC); /* 0x17186DD6: mov eax, dword ptr [ebp + 0xc] */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x17186DD9: fild dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x17186DDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17186DE6; /* 0x17186DDE: jge 0x17186de6 */
L_17186DE0:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17186DE0: fadd dword ptr [0x1700142c] */
L_17186DE6:
    _st[0] *= (double)*(float*)ADDR(esi + 0x54); /* 0x17186DE6: fmul dword ptr [esi + 0x54] */
    _st[0] *= _st[1]; /* 0x17186DE9: fmul st(1) */
    RECOMP_CALL(sub_1721B050); /* 0x17186DEB: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17186DF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x68) = eax; /* 0x17186DF2: mov dword ptr [esi + 0x68], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17186DFE; /* 0x17186DF5: jne 0x17186dfe */
L_17186DF7:
    MEM32(esi + 0x68) = 1; /* 0x17186DF7: mov dword ptr [esi + 0x68], 1 */
L_17186DFE:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17186DFE: fld dword ptr [ebp + 0x10] */
    eax = MEM32(esi + 0x68); /* 0x17186E01: mov eax, dword ptr [esi + 0x68] */
    _st[0] /= _st[1]; /* 0x17186E04: fdiv st(1) */
    MEM32(esi + 0x64) = eax; /* 0x17186E06: mov dword ptr [esi + 0x64], eax */
    eax = MEM32(ebp + 0x14); /* 0x17186E09: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x70) = eax; /* 0x17186E0C: mov dword ptr [esi + 0x70], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x58) = _v; } /* 0x17186E0F: fstp dword ptr [esi + 0x58] */
    esi = POP32_VAL(esp); /* 0x17186E12: pop esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17186E13: fstp st(0) */
    ebp = POP32_VAL(esp); /* 0x17186E15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17186E16: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17186E1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186E1Eu);

L_17186E1E:
    edi = edi; /* 0x17186E1E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186E20: push ebp */
    ebp = esp; /* 0x17186E21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x17186E23: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x17186E26: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x17186E29: push ebx */
    ebx = ecx; /* 0x17186E2A: mov ebx, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x17186E2C: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x17186E2F: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x17186E32: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17186E35: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x17186E39: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x17186E3D: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x17186E40: mov dword ptr [ebp - 0x18], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x17186E43: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x10)) = eax; /* 0x17186E46: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x17186E49: push esi */
    eax = ebp + (-0x50); /* 0x17186E4A: lea eax, [ebp - 0x50] */
    PUSH32(esp, edi); /* 0x17186E4D: push edi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x17186E4E: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + 0x14) = 0xC0000000u; /* 0x17186E51: mov dword ptr [ebp + 0x14], 0xc0000000 */
    MEM32(ebp + 0x8) = eax; /* 0x17186E58: mov dword ptr [ebp + 8], eax */
L_17186E5B:
    eax = MEM32(ebx + 0xA4); /* 0x17186E5B: mov eax, dword ptr [ebx + 0xa4] */
    edx = MEM32(eax); /* 0x17186E61: mov edx, dword ptr [eax] */
    esi = MEM32(ebp + 0xC); /* 0x17186E63: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebx + 0x84); /* 0x17186E66: mov edi, dword ptr [ebx + 0x84] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x17186E6C: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x17186E6C: shl esi, 2 */
    eax = MEM32(ebp + esi + (-0x20)); /* 0x17186E6F: mov eax, dword ptr [ebp + esi - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x17186E73: add eax, edi */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x17186E75: lea eax, [eax + eax*2] */
    ecx = edx + eax * 4; /* 0x17186E78: lea ecx, [edx + eax*4] */
    eax = MEM32(ebp + esi + (-0x1C)); /* 0x17186E7B: mov eax, dword ptr [ebp + esi - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x17186E7F: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0x8); /* 0x17186E81: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17186E84: push dword ptr [ebp + 8] */
    eax = eax + eax * 2; /* 0x17186E87: lea eax, [eax + eax*2] */
    eax = edx + eax * 4; /* 0x17186E8A: lea eax, [edx + eax*4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17186E8D: fld dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17186E8F: push dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17186E92: fsub dword ptr [ecx] */
    esi = ebp + (-0xC); /* 0x17186E94: lea esi, [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17186E97: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17186E9A: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x17186E9D: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17186EA0: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17186EA3: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x17186EA6: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17186EA9: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17186EAC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17186EAD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17186EAE: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17040B68); /* 0x17186EAF: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x17186EB4: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0xCu; /* 0x17186EB7: add dword ptr [ebp + 8], 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), 4 */ /* 0x17186EBB: cmp dword ptr [ebp + 0xc], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17186E5B; /* 0x17186EBF: jb 0x17186e5b */
L_17186EC1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17186EC1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x17186EC3: push 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17186EC5: inc esi */
    _flag_k = FK_INC;
    ecx = ebp + (-0x4C); /* 0x17186EC6: lea ecx, [ebp - 0x4c] */
    edi = POP32_VAL(esp); /* 0x17186EC9: pop edi */
L_17186ECA:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17186ECA: fld dword ptr [ecx + 4] */
    edx = esi; /* 0x17186ECD: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x17186ECF: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + edx * 2; /* 0x17186ED2: lea eax, [edx + edx*2] */
    eax = ebp + eax * 4 + (-0x50); /* 0x17186ED5: lea eax, [ebp + eax*4 - 0x50] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17186ED9: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x17186EDC: fld dword ptr [ecx - 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17186EDF: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17186EE1: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17186EE3: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17186EE6: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17186EE8: faddp st(1) */
    _st[0] = -_st[0]; /* 0x17186EEA: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x14)); /* 0x17186EEC: fcom dword ptr [ebp + 0x14] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17186EEF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17186EF1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17186EFE; /* 0x17186EF4: jne 0x17186efe */
L_17186EF6:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x17186EF6: fstp dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x10) = edx; /* 0x17186EF9: mov dword ptr [ebp + 0x10], edx */
    goto L_17186F00; /* 0x17186EFC: jmp 0x17186f00 */
L_17186EFE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17186EFE: fstp st(0) */
L_17186F00:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x17186F00: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17186F03: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17186F04: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17186ECA; /* 0x17186F05: jne 0x17186eca */
L_17186F07:
    /* cmp MEM32(ebp + 0x10), 1 */ /* 0x17186F07: cmp dword ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x17186F0B: pop edi */
    esi = POP32_VAL(esp); /* 0x17186F0C: pop esi */
    ebx = POP32_VAL(esp); /* 0x17186F0D: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186F1A; /* 0x17186F0E: je 0x17186f1a */
L_17186F10:
    /* cmp MEM32(ebp + 0x10), 3 */ /* 0x17186F10: cmp dword ptr [ebp + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186F1A; /* 0x17186F14: je 0x17186f1a */
L_17186F16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186F16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17186F1D; /* 0x17186F18: jmp 0x17186f1d */
L_17186F1A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17186F1A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17186F1C: inc eax */
    _flag_k = FK_INC;
L_17186F1D:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17186F1D: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17186F1E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17186F26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186F26u);

L_17186F26:
    edi = edi; /* 0x17186F26: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186F28: push ebp */
    ebp = esp; /* 0x17186F29: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17186F2B: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x17186F2E: mov edx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x1C) = edx; /* 0x17186F31: mov dword ptr [eax + 0x1c], edx */
    edx = MEM32(eax + 0x10); /* 0x17186F34: mov edx, dword ptr [eax + 0x10] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x17186F37: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186F47; /* 0x17186F3A: je 0x17186f47 */
L_17186F3C:
    PUSH32(esp, esi); /* 0x17186F3C: push esi */
    esi = MEM32(ecx + 0x10); /* 0x17186F3D: mov esi, dword ptr [ecx + 0x10] */
    edx = esi + edx * 4; /* 0x17186F40: lea edx, [esi + edx*4] */
    _flag_a = (uint32_t)((MEM32(edx) | 4)); _flag_b = (uint32_t)((MEM32(edx) | 4));
    MEM32(edx) = MEM32(edx) | 4; /* 0x17186F43: or dword ptr [edx], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17186F46: pop esi */
L_17186F47:
    edx = MEM32(eax + 0x14); /* 0x17186F47: mov edx, dword ptr [eax + 0x14] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x17186F4A: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186F58; /* 0x17186F4D: je 0x17186f58 */
L_17186F4F:
    ecx = MEM32(ecx + 0x10); /* 0x17186F4F: mov ecx, dword ptr [ecx + 0x10] */
    ecx = ecx + edx * 4; /* 0x17186F52: lea ecx, [ecx + edx*4] */
    _flag_a = (uint32_t)((MEM32(ecx) | 4)); _flag_b = (uint32_t)((MEM32(ecx) | 4));
    MEM32(ecx) = MEM32(ecx) | 4; /* 0x17186F55: or dword ptr [ecx], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17186F58:
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0xFFFFFFFBu; /* 0x17186F58: and dword ptr [eax + 0x18], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x17186F5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17186F5D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17186F65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186F65u);

L_17186F65:
    edi = edi; /* 0x17186F65: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186F67: push ebp */
    ebp = esp; /* 0x17186F68: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17186F6A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x20); /* 0x17186F6D: mov ecx, dword ptr [ecx + 0x20] */
    goto L_17186F74; /* 0x17186F70: jmp 0x17186f74 */
L_17186F72:
    eax = edx; /* 0x17186F72: mov eax, edx */
L_17186F74:
    edx = MEM32(ecx + eax * 4); /* 0x17186F74: mov edx, dword ptr [ecx + eax*4] */
    /* cmp edx, eax */ /* 0x17186F77: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186F72; /* 0x17186F79: jne 0x17186f72 */
L_17186F7B:
    ebp = POP32_VAL(esp); /* 0x17186F7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17186F7C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17186F84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186F84u);

L_17186F84:
    edi = edi; /* 0x17186F84: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186F86: push ebp */
    ebp = esp; /* 0x17186F87: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17186F89: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x17186F8C: push esi */
    esi = MEM32(ecx + 0x20); /* 0x17186F8D: mov esi, dword ptr [ecx + 0x20] */
    edx = eax; /* 0x17186F90: mov edx, eax */
    PUSH32(esp, edi); /* 0x17186F92: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17186F93: mov edi, dword ptr [ebp + 8] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17186F96: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17186F96: shl edx, 2 */
    /* cmp MEM32(edx + esi), edi */ /* 0x17186F99: cmp dword ptr [edx + esi], edi */
    _flag_a = (uint32_t)(MEM32(edx + esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186FB1; /* 0x17186F9C: je 0x17186fb1 */
L_17186F9E:
    ecx = esi; /* 0x17186F9E: mov ecx, esi */
    edx = MEM32(edx + ecx); /* 0x17186FA0: mov edx, dword ptr [edx + ecx] */
L_17186FA3:
    eax = edx; /* 0x17186FA3: mov eax, edx */
    edx = MEM32(ecx + eax * 4); /* 0x17186FA5: mov edx, dword ptr [ecx + eax*4] */
    /* cmp edx, eax */ /* 0x17186FA8: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17186FB1; /* 0x17186FAA: je 0x17186fb1 */
L_17186FAC:
    /* cmp MEM32(esi + eax * 4), edi */ /* 0x17186FAC: cmp dword ptr [esi + eax*4], edi */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17186FA3; /* 0x17186FAF: jne 0x17186fa3 */
L_17186FB1:
    edi = POP32_VAL(esp); /* 0x17186FB1: pop edi */
    esi = POP32_VAL(esp); /* 0x17186FB2: pop esi */
    ebp = POP32_VAL(esp); /* 0x17186FB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17186FB4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17186FBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17186FBCu);

L_17186FBC:
    edi = edi; /* 0x17186FBC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17186FBE: push ebp */
    ebp = esp; /* 0x17186FBF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x17186FC1: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x9C); /* 0x17186FC4: mov eax, dword ptr [ecx + 0x9c] */
    edx = MEM32(eax); /* 0x17186FCA: mov edx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x17186FCC: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x17186FCF: push ebx */
    ebx = MEM32(ecx + 0x8C); /* 0x17186FD0: mov ebx, dword ptr [ecx + 0x8c] */
    PUSH32(esp, esi); /* 0x17186FD6: push esi */
    esi = MEM32(ecx + 0x80); /* 0x17186FD7: mov esi, dword ptr [ecx + 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17186FDD: add eax, esi */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x17186FDF: lea eax, [eax + eax*2] */
    eax = edx + eax * 4; /* 0x17186FE2: lea eax, [edx + eax*4] */
    PUSH32(esp, edi); /* 0x17186FE5: push edi */
    edi = MEM32(eax); /* 0x17186FE6: mov edi, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x17186FE8: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17186FEB: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x17186FEE: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x17186FF1: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17186FF4: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17186FF6: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + eax * 2; /* 0x17186FFA: lea eax, [eax + eax*2] */
    eax = edx + eax * 4; /* 0x17186FFD: lea eax, [edx + eax*4] */
    MEM32(ebp + (-0x10)) = edi; /* 0x17187000: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x8)) = eax; /* 0x17187003: mov dword ptr [ebp - 8], eax */
    edx = ebp + (-0x30); /* 0x17187006: lea edx, [ebp - 0x30] */
L_17187009:
    eax = MEM32(ebp + (-0x8)); /* 0x17187009: mov eax, dword ptr [ebp - 8] */
    fp_push(0.0); /* 0x1718700C: fldz  */
    esi = MEM32(ebp + 0x8); /* 0x1718700E: mov esi, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17187011: fstp dword ptr [edx] */
    eax = MEM32(eax + esi * 4); /* 0x17187013: mov eax, dword ptr [eax + esi*4] */
    fp_push(0.0); /* 0x17187016: fldz  */
    /* cmp eax, ebx */ /* 0x17187018: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x4)) = _v; } /* 0x1718701A: fstp dword ptr [edx - 4] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_17187036; /* 0x1718701D: jge 0x17187036 */
L_1718701F:
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x1718701F: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718702B; /* 0x17187022: jne 0x1718702b */
L_17187024:
    fp_push(1.0); /* 0x17187024: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x4)) = _v; } /* 0x17187026: fstp dword ptr [edx - 4] */
    goto L_1718707E; /* 0x17187029: jmp 0x1718707e */
L_1718702B:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x1718702B: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718707E; /* 0x1718702E: jne 0x1718707e */
L_17187030:
    fp_push(1.0); /* 0x17187030: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17187032: fstp dword ptr [edx] */
    goto L_1718707E; /* 0x17187034: jmp 0x1718707e */
L_17187036:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x17187036: sub eax, ebx */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x17187038: imul eax, eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x40));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x40); /* 0x1718703B: add eax, dword ptr [ecx + 0x40] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 3; /* 0x1718703E: mov dword ptr [ebp - 4], 3 */
    esi = eax + 0xC; /* 0x17187045: lea esi, [eax + 0xc] */
L_17187048:
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17187048: fld dword ptr [0x17001430] */
    fp_push(*(float*)&MEM32(esi)); /* 0x1718704E: fld dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17187050: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17187052: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17187054: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17187076; /* 0x17187057: jnp 0x17187076 */
L_17187059:
    eax = MEM32(esi + (-0xC)); /* 0x17187059: mov eax, dword ptr [esi - 0xc] */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x1718705C: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718706B; /* 0x1718705F: jne 0x1718706b */
L_17187061:
    fp_push(*(float*)&MEM32(edx + (-0x4))); /* 0x17187061: fld dword ptr [edx - 4] */
    _st[0] += (double)*(float*)ADDR(esi); /* 0x17187064: fadd dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x4)) = _v; } /* 0x17187066: fstp dword ptr [edx - 4] */
    goto L_17187076; /* 0x17187069: jmp 0x17187076 */
L_1718706B:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x1718706B: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17187076; /* 0x1718706E: jne 0x17187076 */
L_17187070:
    fp_push(*(float*)&MEM32(edx)); /* 0x17187070: fld dword ptr [edx] */
    _st[0] += (double)*(float*)ADDR(esi); /* 0x17187072: fadd dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17187074: fstp dword ptr [edx] */
L_17187076:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17187076: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17187079: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17187048; /* 0x1718707C: jne 0x17187048 */
L_1718707E:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1718707E: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x17187081: add edx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), 3 */ /* 0x17187084: cmp dword ptr [ebp + 8], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17187009; /* 0x17187088: jb 0x17187009 */
L_1718708E:
    eax = MEM32(ebp + 0xC); /* 0x1718708E: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17187091: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17187093: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x17187094: add eax, 0xc */
    _flag_k = FK_ADD;
    ebx = ebp + (-0x34); /* 0x17187097: lea ebx, [ebp - 0x34] */
    MEM32(ebp + 0x8) = eax; /* 0x1718709A: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x8)) = 2; /* 0x1718709D: mov dword ptr [ebp - 8], 2 */
L_171870A4:
    eax = esi + 0x1; /* 0x171870A4: lea eax, [esi + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171870A7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x171870A9: push 3 */
    MEM32(ebp + (-0xC)) = eax; /* 0x171870AB: mov dword ptr [ebp - 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x171870AE: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171870AF: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = esi; /* 0x171870B1: mov eax, esi */
    PUSH32(esp, 3); /* 0x171870B3: push 3 */
    esi = POP32_VAL(esp); /* 0x171870B5: pop esi */
    edi = MEM32(ebp + 0x8); /* 0x171870B6: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0xCu; /* 0x171870B9: add dword ptr [ebp + 8], 0xc */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x171870BD: mov ecx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171870BF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x171870C1: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x171870C3: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x171870C3: shl ecx, 3 */
    esi = ebp + (-0x1C); /* 0x171870C6: lea esi, [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + ecx + (-0x34))); /* 0x171870C9: fld dword ptr [ebp + ecx - 0x34] */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x171870CD: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x171870CD: shl edx, 3 */
    eax = ebp + edx + (-0x34); /* 0x171870D0: lea eax, [ebp + edx - 0x34] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x171870D4: fsub dword ptr [eax] */
    edx = ebp + edx + (-0x30); /* 0x171870D6: lea edx, [ebp + edx - 0x30] */
    fp_push(*(float*)&MEM32(ebp + ecx + (-0x30))); /* 0x171870DA: fld dword ptr [ebp + ecx - 0x30] */
    _st[0] -= (double)*(float*)ADDR(edx); /* 0x171870DE: fsub dword ptr [edx] */
    _st[0] = -_st[0]; /* 0x171870E0: fchs  */
    fp_push(_st[0]); /* 0x171870E2: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x171870E4: fmul dword ptr [eax] */
    fp_push(_st[2]); /* 0x171870E6: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x171870E8: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171870EA: faddp st(1) */
    _st[0] = -_st[0]; /* 0x171870EC: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171870EE: fstp dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x171870F1: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x171870F3: fmul dword ptr [ebx + 4] */
    fp_push(_st[1]); /* 0x171870F6: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x171870F8: fmul dword ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171870FA: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x171870FD: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17187100: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17187102: fadd dword ptr [ebp - 4] */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x17187105: fdivr dword ptr [0x17001424] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1718710B: fst dword ptr [ebp + 0xc] */
    _st[0] *= _st[1]; /* 0x1718710E: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17187110: fstp dword ptr [ebp - 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187113: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17187115: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[1]; /* 0x17187118: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1718711A: fstp dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718711D: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1718711F: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17187122: fmul dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17187125: fstp dword ptr [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187128: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187129: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718712A: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0xC)); /* 0x1718712B: mov esi, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171870A4; /* 0x1718712E: jne 0x171870a4 */
L_17187134:
    edi = POP32_VAL(esp); /* 0x17187134: pop edi */
    esi = POP32_VAL(esp); /* 0x17187135: pop esi */
    ebx = POP32_VAL(esp); /* 0x17187136: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17187137: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17187138: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17187140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187140u);

L_17187140:
    edi = edi; /* 0x17187140: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187142: push ebp */
    ebp = esp; /* 0x17187143: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x17187145: sub esp, 0x2c */
    _flag_k = FK_CMP;
    edx = MEM32(ecx + 0x80); /* 0x17187148: mov edx, dword ptr [ecx + 0x80] */
    PUSH32(esp, ebx); /* 0x1718714E: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1718714F: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x17187152: push esi */
    PUSH32(esp, edi); /* 0x17187153: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17187154: mov edi, dword ptr [ebp + 8] */
    eax = edi; /* 0x17187157: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17187159: sub eax, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebx); /* 0x1718715B: mov edx, dword ptr [ebx] */
    MEM32(ebp + (-0x2C)) = edx; /* 0x1718715D: mov dword ptr [ebp - 0x2c], edx */
    edx = MEM32(ebx + 0x4); /* 0x17187160: mov edx, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x28)) = edx; /* 0x17187163: mov dword ptr [ebp - 0x28], edx */
    edx = MEM32(ecx + 0x60); /* 0x17187166: mov edx, dword ptr [ecx + 0x60] */
    eax = edx + eax * 8; /* 0x17187169: lea eax, [edx + eax*8] */
    edx = MEM32(eax); /* 0x1718716C: mov edx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1718716E: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17187171: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, eax */ /* 0x17187173: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x17187175: mov byte ptr [ebp - 1], 0 */
    MEM32(ebp + (-0x8)) = 0x42C80000u; /* 0x17187179: mov dword ptr [ebp - 8], 0x42c80000 */
    MEM32(ebp + (-0x10)) = eax; /* 0x17187180: mov dword ptr [ebp - 0x10], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17187256; /* 0x17187183: jae 0x17187256 */
L_17187189:
    eax = MEM32(ecx + 0x70); /* 0x17187189: mov eax, dword ptr [ecx + 0x70] */
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x1718718C: fld dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17187192: fld dword ptr [0x17001430] */
    edi = edx + edx * 8; /* 0x17187198: lea edi, [edx + edx*8] */
    eax = eax + edi * 4 + 0x10; /* 0x1718719B: lea eax, [eax + edi*4 + 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718719F: mov dword ptr [ebp - 0xc], eax */
L_171871A2:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x171871A2: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x171871A6: fldz  */
    edi = MEM32(ebp + (-0xC)); /* 0x171871A8: mov edi, dword ptr [ebp - 0xc] */
L_171871AB:
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x171871AB: fld dword ptr [ebp - 0x2c] */
    eax = MEM32(ebp + 0xC); /* 0x171871AE: mov eax, dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edi + (-0x4)); /* 0x171871B1: fmul dword ptr [edi - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x171871B4: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x171871B7: fmul dword ptr [edi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171871B9: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(edi + 0x4); /* 0x171871BB: fadd dword ptr [edi + 4] */
    fp_push(_st[0]); /* 0x171871BE: fld st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax * 4 + (-0x18)) = _v; } /* 0x171871C0: fstp dword ptr [ebp + eax*4 - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x171871C4: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171871C6: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171871C8: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171871D3; /* 0x171871CB: jp 0x171871d3 */
L_171871CD:
    fp_push(_st[1]); /* 0x171871CD: fld st(1) */
    _st[0] -= _st[1]; /* 0x171871CF: fsub st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171871D1: fstp st(2) */
L_171871D3:
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x171871D3: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171871D5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171871D7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171871E2; /* 0x171871DA: jne 0x171871e2 */
L_171871DC:
    _st[0] -= _st[3]; /* 0x171871DC: fsub st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171871DE: faddp st(1) */
    goto L_171871E4; /* 0x171871E0: jmp 0x171871e4 */
L_171871E2:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171871E2: fstp st(0) */
L_171871E4:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x171871E4: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x171871E7: add edi, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), 2 */ /* 0x171871EA: cmp dword ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171871AB; /* 0x171871EE: jb 0x171871ab */
L_171871F0:
    fp_push(1.0); /* 0x171871F0: fld1  */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x171871F2: fsub dword ptr [ebp - 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x171871F5: fsub dword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x171871F8: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171871FA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171871FC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17187207; /* 0x171871FF: jp 0x17187207 */
L_17187201:
    fp_push(_st[1]); /* 0x17187201: fld st(1) */
    _st[0] -= _st[1]; /* 0x17187203: fsub st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17187205: fstp st(2) */
L_17187207:
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x17187207: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17187209: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1718720B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17187216; /* 0x1718720E: jne 0x17187216 */
L_17187210:
    _st[0] -= _st[3]; /* 0x17187210: fsub st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17187212: faddp st(1) */
    goto L_17187218; /* 0x17187214: jmp 0x17187218 */
L_17187216:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187216: fstp st(0) */
L_17187218:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x17187218: fcom dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718721B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718721D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17187239; /* 0x17187220: jp 0x17187239 */
L_17187222:
    eax = MEM32(ebp + (-0x18)); /* 0x17187222: mov eax, dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17187225: fstp dword ptr [ebp - 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x17187228: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1718722B: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x1718722E: mov byte ptr [ebp - 1], 1 */
    esi = edx; /* 0x17187232: mov esi, edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x17187234: mov dword ptr [ebp - 0x1c], eax */
    goto L_1718723B; /* 0x17187237: jmp 0x1718723b */
L_17187239:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187239: fstp st(0) */
L_1718723B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 0x24u; /* 0x1718723B: add dword ptr [ebp - 0xc], 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718723F: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + (-0x10)) */ /* 0x17187240: cmp edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171871A2; /* 0x17187243: jb 0x171871a2 */
L_17187249:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x17187249: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17187282; /* 0x1718724D: jne 0x17187282 */
L_1718724F:
    edi = MEM32(ebp + 0x8); /* 0x1718724F: mov edi, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187252: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187254: fstp st(0) */
L_17187256:
    eax = MEM32(ecx + 0x9C); /* 0x17187256: mov eax, dword ptr [ecx + 0x9c] */
    eax = MEM32(eax); /* 0x1718725C: mov eax, dword ptr [eax] */
    ecx = edi + edi * 2; /* 0x1718725E: lea ecx, [edi + edi*2] */
    edi = MEM32(ebp + 0x14); /* 0x17187261: mov edi, dword ptr [ebp + 0x14] */
    esi = eax + ecx * 4; /* 0x17187264: lea esi, [eax + ecx*4] */
    eax = MEM32(ebp + 0x10); /* 0x17187267: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718726A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718726B: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 2); /* 0x1718726C: push 2 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718726E: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1718726F: sub ebx, eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17187271: pop ecx */
L_17187272:
    fp_push(*(float*)&MEM32(ebx + eax)); /* 0x17187272: fld dword ptr [ebx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17187275: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17187277: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1718727A: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17187272; /* 0x1718727B: jne 0x17187272 */
L_1718727D:
    goto L_171873ED; /* 0x1718727D: jmp 0x171873ed */
L_17187282:
    eax = MEM32(ecx + 0x70); /* 0x17187282: mov eax, dword ptr [ecx + 0x70] */
    edx = esi + esi * 8; /* 0x17187285: lea edx, [esi + esi*8] */
    eax = eax + edx * 4; /* 0x17187288: lea eax, [eax + edx*4] */
    edi = MEM32(eax + 0x4); /* 0x1718728B: mov edi, dword ptr [eax + 4] */
    edx = MEM32(eax); /* 0x1718728E: mov edx, dword ptr [eax] */
    /* cmp edx, edi */ /* 0x17187290: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edi; /* 0x17187292: mov dword ptr [ebp + 0xc], edi */
    MEM32(ebp + (-0x8)) = 0x42C80000u; /* 0x17187295: mov dword ptr [ebp - 8], 0x42c80000 */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x1718729C: mov byte ptr [ebp - 1], 0 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1718735A; /* 0x171872A0: jae 0x1718735a */
L_171872A6:
    eax = MEM32(ecx + 0x70); /* 0x171872A6: mov eax, dword ptr [ecx + 0x70] */
    edi = edx + edx * 8; /* 0x171872A9: lea edi, [edx + edx*8] */
    eax = eax + edi * 4 + 0x10; /* 0x171872AC: lea eax, [eax + edi*4 + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x171872B0: mov dword ptr [ebp + 8], eax */
L_171872B3:
    ebx = MEM32(ebp + 0x8); /* 0x171872B3: mov ebx, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x171872B6: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171872B8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171872BA:
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x171872BA: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x4)); /* 0x171872BD: fmul dword ptr [ebx - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x171872C0: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x171872C3: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171872C5: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebx + 0x4); /* 0x171872C7: fadd dword ptr [ebx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x171872CA: fcom st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + edi * 4 + (-0x18)) = _v; } /* 0x171872CC: fst dword ptr [ebp + edi*4 - 0x18] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171872D0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171872D2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171872DD; /* 0x171872D5: jp 0x171872dd */
L_171872D7:
    fp_push(_st[1]); /* 0x171872D7: fld st(1) */
    _st[0] -= _st[1]; /* 0x171872D9: fsub st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171872DB: fstp st(2) */
L_171872DD:
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x171872DD: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171872DF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171872E1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171872EC; /* 0x171872E4: jne 0x171872ec */
L_171872E6:
    _st[0] -= _st[3]; /* 0x171872E6: fsub st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171872E8: faddp st(1) */
    goto L_171872EE; /* 0x171872EA: jmp 0x171872ee */
L_171872EC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171872EC: fstp st(0) */
L_171872EE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171872EE: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x171872EF: add ebx, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, 2 */ /* 0x171872F2: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171872BA; /* 0x171872F5: jb 0x171872ba */
L_171872F7:
    fp_push(1.0); /* 0x171872F7: fld1  */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x171872F9: fsub dword ptr [ebp - 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x171872FC: fsub dword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x171872FF: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17187301: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17187303: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1718730E; /* 0x17187306: jp 0x1718730e */
L_17187308:
    fp_push(_st[1]); /* 0x17187308: fld st(1) */
    _st[0] -= _st[1]; /* 0x1718730A: fsub st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1718730C: fstp st(2) */
L_1718730E:
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x1718730E: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17187310: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17187312: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718731D; /* 0x17187315: jne 0x1718731d */
L_17187317:
    _st[0] -= _st[3]; /* 0x17187317: fsub st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17187319: faddp st(1) */
    goto L_1718731F; /* 0x1718731B: jmp 0x1718731f */
L_1718731D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718731D: fstp st(0) */
L_1718731F:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x1718731F: fcom dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17187322: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17187324: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17187340; /* 0x17187327: jp 0x17187340 */
L_17187329:
    eax = MEM32(ebp + (-0x18)); /* 0x17187329: mov eax, dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1718732C: fstp dword ptr [ebp - 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718732F: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x17187332: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x17187335: mov byte ptr [ebp - 1], 1 */
    esi = edx; /* 0x17187339: mov esi, edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718733B: mov dword ptr [ebp - 0x1c], eax */
    goto L_17187342; /* 0x1718733E: jmp 0x17187342 */
L_17187340:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187340: fstp st(0) */
L_17187342:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x24u; /* 0x17187342: add dword ptr [ebp + 8], 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17187346: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x17187347: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171872B3; /* 0x1718734A: jb 0x171872b3 */
L_17187350:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x17187350: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17187282; /* 0x17187354: jne 0x17187282 */
L_1718735A:
    eax = MEM32(ecx + 0x70); /* 0x1718735A: mov eax, dword ptr [ecx + 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1718735D: fld dword ptr [ebp - 0x20] */
    edi = MEM32(ebp + 0x14); /* 0x17187360: mov edi, dword ptr [ebp + 0x14] */
    edx = esi + esi * 8; /* 0x17187363: lea edx, [esi + esi*8] */
    eax = MEM32(eax + edx * 4 + 0x8); /* 0x17187366: mov eax, dword ptr [eax + edx*4 + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x80));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x80); /* 0x1718736A: add eax, dword ptr [ecx + 0x80] */
    _flag_k = FK_ADD;
    ecx = MEM32(ecx + 0x9C); /* 0x17187370: mov ecx, dword ptr [ecx + 0x9c] */
    ecx = MEM32(ecx); /* 0x17187376: mov ecx, dword ptr [ecx] */
    eax = eax + eax * 2; /* 0x17187378: lea eax, [eax + eax*2] */
    esi = ecx + eax * 4; /* 0x1718737B: lea esi, [ecx + eax*4] */
    ecx = MEM32(ebp + 0x10); /* 0x1718737E: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0x1C)); /* 0x17187381: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187384: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187385: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187386: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17187387: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17187389: fld dword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1718738C: fcomp st(1) */
    fp_pop();
    MEM32(ecx + 0x4) = eax; /* 0x1718738E: mov dword ptr [ecx + 4], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17187391: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17187393: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1718739C; /* 0x17187396: jp 0x1718739c */
L_17187398:
    fp_push(0.0); /* 0x17187398: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1718739A: fstp dword ptr [ecx] */
L_1718739C:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718739C: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1718739E: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171873A0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171873A2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171873AB; /* 0x171873A5: jne 0x171873ab */
L_171873A7:
    fp_push(1.0); /* 0x171873A7: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x171873A9: fstp dword ptr [ecx] */
L_171873AB:
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x171873AB: fld dword ptr [ebp - 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171873AE: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171873B0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171873B2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171873BC; /* 0x171873B5: jp 0x171873bc */
L_171873B7:
    fp_push(0.0); /* 0x171873B7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x171873B9: fstp dword ptr [ecx + 4] */
L_171873BC:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx + 0x4)); /* 0x171873BC: fcom dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171873BF: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171873C1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171873CB; /* 0x171873C4: jp 0x171873cb */
L_171873C6:
    fp_push(1.0); /* 0x171873C6: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x171873C8: fstp dword ptr [ecx + 4] */
L_171873CB:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x171873CB: fld dword ptr [ecx + 4] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x171873CE: fadd dword ptr [ecx] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171873D0: fst dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171873D3: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171873D5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171873D7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171873ED; /* 0x171873DA: jne 0x171873ed */
L_171873DC:
    fp_push(1.0); /* 0x171873DC: fld1  */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x8); /* 0x171873DE: fdiv dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x171873E1: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x171873E3: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x171873E5: fstp dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x171873E7: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x171873EA: fstp dword ptr [ecx + 4] */
L_171873ED:
    edi = POP32_VAL(esp); /* 0x171873ED: pop edi */
    esi = POP32_VAL(esp); /* 0x171873EE: pop esi */
    ebx = POP32_VAL(esp); /* 0x171873EF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171873F0: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171873F1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171873F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171873F9u);

L_171873F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171873F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x14), eax */ /* 0x171873FB: cmp dword ptr [ecx + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx + 0x90) = eax; /* 0x171873FE: mov dword ptr [ecx + 0x90], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718741D; /* 0x17187404: jbe 0x1718741d */
L_17187406:
    edx = MEM32(ecx + 0x10); /* 0x17187406: mov edx, dword ptr [ecx + 0x10] */
L_17187409:
    /* test MEM8(edx), 8 */ /* 0x17187409: test byte ptr [edx], 8 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17187414; /* 0x1718740C: jne 0x17187414 */
L_1718740E:
    _flag_a = (uint32_t)(MEM32(ecx + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x90) = MEM32(ecx + 0x90) + 1; /* 0x1718740E: inc dword ptr [ecx + 0x90] */
    _flag_k = FK_INC;
L_17187414:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17187414: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x17187415: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ecx + 0x14) */ /* 0x17187418: cmp eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17187409; /* 0x1718741B: jb 0x17187409 */
L_1718741D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718741D: ret  */
    RECOMP_REGS_OUT();
}

void sub_17187423(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187423u);

L_17187423:
    edi = edi; /* 0x17187423: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187425: push ebp */
    ebp = esp; /* 0x17187426: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x80u; /* 0x17187428: sub esp, 0x80 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1718742E: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(0x170018D8)); /* 0x17187431: fld dword ptr [0x170018d8] */
    PUSH32(esp, ebx); /* 0x17187437: push ebx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17187438: fst dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718743B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0x40); /* 0x1718743D: lea edx, [ebp - 0x40] */
    PUSH32(esp, esi); /* 0x17187440: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17187441: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17187443: push edi */
    MEM32(ebp + (-0x10)) = 0x49742400u; /* 0x17187444: mov dword ptr [ebp - 0x10], 0x49742400 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1718744B: mov dword ptr [ebp - 8], ecx */
    ebx = ebp + (-0x80); /* 0x1718744E: lea ebx, [ebp - 0x80] */
    MEM32(ebp + (-0x14)) = eax; /* 0x17187451: mov dword ptr [ebp - 0x14], eax */
    goto L_17187459; /* 0x17187454: jmp 0x17187459 */
L_17187456:
    eax = MEM32(ebp + (-0x14)); /* 0x17187456: mov eax, dword ptr [ebp - 0x14] */
L_17187459:
    edx = MEM32(ebp + 0xC); /* 0x17187459: mov edx, dword ptr [ebp + 0xc] */
    eax = eax + ecx * 4; /* 0x1718745C: lea eax, [eax + ecx*4] */
    eax = MEM32(ebp + eax + (-0x40)); /* 0x1718745F: mov eax, dword ptr [ebp + eax - 0x40] */
    eax = eax + eax * 2; /* 0x17187463: lea eax, [eax + eax*2] */
    esi = edx + eax * 8; /* 0x17187466: lea esi, [edx + eax*8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17187469: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x1; /* 0x1718746B: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718746E: mov dword ptr [ebp - 0x20], eax */
    PUSH32(esp, 3); /* 0x17187471: push 3 */
    edi = POP32_VAL(esp); /* 0x17187473: pop edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x17187474: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + 0x8); /* 0x17187476: mov eax, dword ptr [ebp + 8] */
    edi = ebx; /* 0x17187479: mov edi, ebx */
    edx = MEM32(eax + edx * 4); /* 0x1718747B: mov edx, dword ptr [eax + edx*4] */
    eax = edx + edx * 2; /* 0x1718747E: lea eax, [edx + edx*2] */
    edx = MEM32(ebp + 0xC); /* 0x17187481: mov edx, dword ptr [ebp + 0xc] */
    eax = edx + eax * 8; /* 0x17187484: lea eax, [edx + eax*8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17187487: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x17187489: fsub dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1718748B: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718748E: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x17187491: fsub dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17187494: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17187497: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x8); /* 0x1718749A: fsub dword ptr [esi + 8] */
    esi = ebp + (-0x34); /* 0x1718749D: lea esi, [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x171874A0: fstp dword ptr [ebp - 0x2c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171874A3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171874A4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171874A5: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x171874A6: fld dword ptr [ebx + 8] */
    fp_push(_st[0]); /* 0x171874A9: fld st(0) */
    eax = MEM32(ebx); /* 0x171874AB: mov eax, dword ptr [ebx] */
    _st[0] *= _st[1]; /* 0x171874AD: fmul st(1) */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x171874AF: fld dword ptr [ebx + 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x171874B2: mov dword ptr [ebp - 0xc], eax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171874B5: fstp st(2) */
    fp_push(_st[1]); /* 0x171874B7: fld st(1) */
    _st[0] *= _st[2]; /* 0x171874B9: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171874BB: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171874BD: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x171874C0: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171874C3: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x171874C5: fsqrt  */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171874C7: fstp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x10)); /* 0x171874C9: fcom dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + ecx * 4 + (-0x40)) = _v; } /* 0x171874CC: fst dword ptr [ebp + ecx*4 - 0x40] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171874D0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171874D2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17187676; /* 0x171874D5: jnp 0x17187676 */
L_171874DB:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x10))); /* 0x171874DB: fcom dword ptr [ebp - 0x10] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171874DE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171874E0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171874E8; /* 0x171874E3: jp 0x171874e8 */
L_171874E5:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x171874E5: fst dword ptr [ebp - 0x10] */
L_171874E8:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4))); /* 0x171874E8: fcom dword ptr [ebp - 4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171874EB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171874ED: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171874FA; /* 0x171874F0: jne 0x171874fa */
L_171874F2:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171874F2: fstp dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171874F5: mov dword ptr [ebp - 8], ecx */
    goto L_171874FC; /* 0x171874F8: jmp 0x171874fc */
L_171874FA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171874FA: fstp st(0) */
L_171874FC:
    ecx = MEM32(ebp + (-0x20)); /* 0x171874FC: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x171874FF: add ebx, 0xc */
    _flag_k = FK_ADD;
    /* cmp ecx, 3 */ /* 0x17187502: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17187456; /* 0x17187505: jb 0x17187456 */
L_1718750B:
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x1718750B: fld dword ptr [ebp - 0x6c] */
    ebx = MEM32(ebp + 0x18); /* 0x1718750E: mov ebx, dword ptr [ebp + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17187511: fmul dword ptr [ebp - 0x64] */
    eax = MEM32(ebp + 0x8); /* 0x17187514: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x17187517: fld dword ptr [ebp - 0x70] */
    esi = ebp + (-0x34); /* 0x1718751A: lea esi, [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x1718751D: fmul dword ptr [ebp - 0x60] */
    edi = ebx; /* 0x17187520: mov edi, ebx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17187522: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17187524: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x17187527: fld dword ptr [ebp - 0x74] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x1718752A: fmul dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x1718752D: fld dword ptr [ebp - 0x68] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x6C)); /* 0x17187530: fmul dword ptr [ebp - 0x6c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17187533: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17187535: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x17187538: fld dword ptr [ebp - 0x68] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x70)); /* 0x1718753B: fmul dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x1718753E: fld dword ptr [ebp - 0x74] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17187541: fmul dword ptr [ebp - 0x64] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17187544: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17187546: fstp dword ptr [ebp - 0x2c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187549: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718754A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718754B: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(eax); /* 0x1718754C: mov eax, dword ptr [eax] */
    eax = eax + eax * 2; /* 0x1718754E: lea eax, [eax + eax*2] */
    eax = edx + eax * 8 + 0xC; /* 0x17187551: lea eax, [edx + eax*8 + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17187555: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x17187558: fmul dword ptr [ebx + 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718755B: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x1718755E: fmul dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17187561: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx)); /* 0x17187563: fld dword ptr [ebx] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17187565: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17187567: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x17187569: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718756F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17187571: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17187595; /* 0x17187574: jp 0x17187595 */
L_17187576:
    fp_push(*(float*)&MEM32(ebx)); /* 0x17187576: fld dword ptr [ebx] */
    esi = ebp + (-0x34); /* 0x17187578: lea esi, [ebp - 0x34] */
    _st[0] *= _st[1]; /* 0x1718757B: fmul st(1) */
    edi = ebx; /* 0x1718757D: mov edi, ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1718757F: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x17187582: fld dword ptr [ebx + 4] */
    _st[0] *= _st[1]; /* 0x17187585: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17187587: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x1718758A: fld dword ptr [ebx + 8] */
    _st[0] *= _st[1]; /* 0x1718758D: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1718758F: fstp dword ptr [ebp - 0x2c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187592: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187593: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187594: movsd dword ptr es:[edi], dword ptr [esi] */
L_17187595:
    PUSH32(esp, ebx); /* 0x17187595: push ebx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187596: fstp st(0) */
    PUSH32(esp, ebx); /* 0x17187598: push ebx */
    RECOMP_CALL(sub_17040B68); /* 0x17187599: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x1718759E: fld dword ptr [0x1700141c] */
    edx = MEM32(ebp + (-0x8)); /* 0x171875A4: mov edx, dword ptr [ebp - 8] */
    esi = MEM32(ebp + 0x8); /* 0x171875A7: mov esi, dword ptr [ebp + 8] */
    ecx = edx + edx * 2; /* 0x171875AA: lea ecx, [edx + edx*2] */
    ecx = ebp + ecx * 4 + (-0x80); /* 0x171875AD: lea ecx, [ebp + ecx*4 - 0x80] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x171875B1: fld dword ptr [ecx] */
    eax = edx; /* 0x171875B3: mov eax, edx */
    _st[0] *= _st[1]; /* 0x171875B5: fmul st(1) */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171875B7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171875B7: shl eax, 2 */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x171875BA: fld dword ptr [ecx + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x171875BD: mov dword ptr [ebp + 0x10], eax */
    _st[0] *= _st[2]; /* 0x171875C0: fmul st(2) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x171875C2: add eax, esi */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x171875C4: fld dword ptr [ecx + 8] */
    esi = MEM32(ebp + 0xC); /* 0x171875C7: mov esi, dword ptr [ebp + 0xc] */
    _st[0] *= _st[3]; /* 0x171875CA: fmul st(3) */
    MEM32(ebp + 0x18) = eax; /* 0x171875CC: mov dword ptr [ebp + 0x18], eax */
    eax = MEM32(eax); /* 0x171875CF: mov eax, dword ptr [eax] */
    eax = eax + eax * 2; /* 0x171875D1: lea eax, [eax + eax*2] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x171875D4: fstp dword ptr [ebp - 0x2c] */
    eax = esi + eax * 8; /* 0x171875D7: lea eax, [esi + eax*8] */
    fp_push(_st[1]); /* 0x171875DA: fld st(1) */
    esi = ebp + (-0x28); /* 0x171875DC: lea esi, [ebp - 0x28] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x171875DF: fadd dword ptr [eax] */
    edi = ebp + (-0x5C); /* 0x171875E1: lea edi, [ebp - 0x5c] */
    PUSH32(esp, 3); /* 0x171875E4: push 3 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x171875E6: fstp dword ptr [ebp - 0x28] */
    _st[0] += (double)*(float*)ADDR(eax + 0x4); /* 0x171875E9: fadd dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x171875EC: fstp dword ptr [ebp - 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171875EF: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x171875F1: fld dword ptr [ebp - 0x2c] */
    _st[0] += (double)*(float*)ADDR(eax + 0x8); /* 0x171875F4: fadd dword ptr [eax + 8] */
    eax = edx + 0x2; /* 0x171875F7: lea eax, [edx + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171875FA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x171875FC: fstp dword ptr [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171875FF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187600: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187601: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x17187602: fld dword ptr [ebp - 0x5c] */
    esi = POP32_VAL(esp); /* 0x17187605: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x17187606: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + 0x8); /* 0x17187608: mov eax, dword ptr [ebp + 8] */
    esi = ebp + (-0x34); /* 0x1718760B: lea esi, [ebp - 0x34] */
    edi = ebp + (-0x50); /* 0x1718760E: lea edi, [ebp - 0x50] */
    edx = MEM32(eax + edx * 4); /* 0x17187611: mov edx, dword ptr [eax + edx*4] */
    eax = edx + edx * 2; /* 0x17187614: lea eax, [edx + edx*2] */
    edx = MEM32(ebp + 0xC); /* 0x17187617: mov edx, dword ptr [ebp + 0xc] */
    eax = edx + eax * 8; /* 0x1718761A: lea eax, [edx + eax*8] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1718761D: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1718761F: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x17187622: fld dword ptr [ebp - 0x58] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x17187625: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17187628: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x1718762B: fld dword ptr [ebp - 0x54] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1718762E: fsub dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17187631: fstp dword ptr [ebp - 0x2c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187634: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17187635: fmul dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187638: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187639: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x1718763A: fld dword ptr [ebp - 0x4c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x1718763D: fmul dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17187640: fld dword ptr [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x17187643: fmul dword ptr [ebp - 0x48] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17187646: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x17187648: fld dword ptr [ebp - 0x50] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x1718764B: fmul dword ptr [ebp - 0x50] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718764E: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17187650: fsqrt  */
    fp_push(_st[0]); /* 0x17187652: fld st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x17187654: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17187656: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187658: fstp st(0) */
    /* test HI8(eax), 5 */ /* 0x1718765A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17187681; /* 0x1718765D: jp 0x17187681 */
L_1718765F:
    edi = MEM32(ebp + 0x14); /* 0x1718765F: mov edi, dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x17187662: fld st(0) */
    eax = MEM32(ebp + 0x1C); /* 0x17187664: mov eax, dword ptr [ebp + 0x1c] */
    esi = ebp + (-0x28); /* 0x17187667: lea esi, [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718766A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718766B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718766C: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718766D: fstp dword ptr [eax] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718766F: fstp st(0) */
    goto L_171877FD; /* 0x17187671: jmp 0x171877fd */
L_17187676:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187676: fstp st(0) */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x17187678: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718767A: fstp st(0) */
    goto L_171877FF; /* 0x1718767C: jmp 0x171877ff */
L_17187681:
    eax = MEM32(ebp + 0x10); /* 0x17187681: mov eax, dword ptr [ebp + 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187684: fstp st(0) */
    fp_push(1.0); /* 0x17187686: fld1  */
    esi = ebp + (-0x40); /* 0x17187688: lea esi, [ebp - 0x40] */
    _st[0] /= (double)*(float*)ADDR(ebp + eax + (-0x40)); /* 0x1718768B: fdiv dword ptr [ebp + eax - 0x40] */
    edi = ebp + (-0x5C); /* 0x1718768F: lea edi, [ebp - 0x5c] */
    eax = ebp + (-0x5C); /* 0x17187692: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x17187695: push eax */
    PUSH32(esp, eax); /* 0x17187696: push eax */
    fp_push(_st[0]); /* 0x17187697: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17187699: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1718769B: fstp dword ptr [ebp - 0x40] */
    fp_push(_st[0]); /* 0x1718769E: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x171876A0: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x171876A3: fstp dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x171876A6: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x171876A9: fstp dword ptr [ebp - 0x38] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171876AC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171876AD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171876AE: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x171876AF: fld dword ptr [ebp - 0x54] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x171876B2: fmul dword ptr [ebx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x171876B5: fld dword ptr [ebp - 0x58] */
    esi = ebp + (-0x40); /* 0x171876B8: lea esi, [ebp - 0x40] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x171876BB: fmul dword ptr [ebx + 8] */
    edi = ebp + (-0x50); /* 0x171876BE: lea edi, [ebp - 0x50] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171876C1: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x171876C3: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x171876C6: fld dword ptr [ebp - 0x5c] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x171876C9: fmul dword ptr [ebx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x171876CC: fld dword ptr [ebp - 0x54] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x171876CF: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171876D1: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x171876D3: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x171876D6: fld dword ptr [ebp - 0x58] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x171876D9: fmul dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x171876DB: fld dword ptr [ebp - 0x5c] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x171876DE: fmul dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171876E1: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x171876E3: fstp dword ptr [ebp - 0x38] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171876E6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171876E7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171876E8: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17040B68); /* 0x171876E9: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x171876EE: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x171876F1: push eax */
    PUSH32(esp, eax); /* 0x171876F2: push eax */
    RECOMP_CALL(sub_17040B68); /* 0x171876F3: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x171876F8: mov eax, dword ptr [ebp + 0x18] */
    eax = MEM32(eax); /* 0x171876FB: mov eax, dword ptr [eax] */
    esi = MEM32(ebp + 0xC); /* 0x171876FD: mov esi, dword ptr [ebp + 0xc] */
    eax = eax + eax * 2; /* 0x17187700: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17187703: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi + eax * 8; /* 0x17187705: lea edx, [esi + eax*8] */
    ebx = ebp + (-0x18); /* 0x17187708: lea ebx, [ebp - 0x18] */
    edi = ebp + (-0x40); /* 0x1718770B: lea edi, [ebp - 0x40] */
L_1718770E:
    /* cmp ecx, MEM32(ebp + (-0x8)) */ /* 0x1718770E: cmp ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x17187711: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + ecx * 4); /* 0x17187714: mov eax, dword ptr [eax + ecx*4] */
    eax = eax + eax * 2; /* 0x17187717: lea eax, [eax + eax*2] */
    eax = esi + eax * 8; /* 0x1718771A: lea eax, [esi + eax*8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1718771D: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(edx); /* 0x1718771F: fsub dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17187721: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(edx + 0x4); /* 0x17187724: fsub dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17187727: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(edx + 0x8); /* 0x1718772A: fsub dword ptr [edx + 8] */
    fp_push(_st[1]); /* 0x1718772D: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x58)); /* 0x1718772F: fmul dword ptr [ebp - 0x58] */
    fp_push(_st[1]); /* 0x17187732: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x17187734: fmul dword ptr [ebp - 0x54] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17187737: faddp st(1) */
    fp_push(_st[3]); /* 0x17187739: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x5C)); /* 0x1718773B: fmul dword ptr [ebp - 0x5c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718773E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17187740: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17187743: fld dword ptr [ebp - 0x48] */
    _st[0] *= _st[1]; /* 0x17187746: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17187748: fld dword ptr [ebp - 0x4c] */
    _st[0] *= _st[3]; /* 0x1718774B: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718774D: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x1718774F: fld dword ptr [ebp - 0x50] */
    _st[0] *= _st[4]; /* 0x17187752: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17187754: faddp st(1) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x17187756: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187758: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718775A: fstp st(0) */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718777A; /* 0x1718775C: je 0x1718777a */
L_1718775E:
    eax = MEM32(ebp + (-0x24)); /* 0x1718775E: mov eax, dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(edi) = _v; } /* 0x17187761: fst dword ptr [edi] */
    fp_push(_st[0]); /* 0x17187763: fld st(0) */
    MEM32(edi + (-0x4)) = eax; /* 0x17187765: mov dword ptr [edi - 4], eax */
    _st[0] *= _st[1]; /* 0x17187768: fmul st(1) */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1718776A: add edi, 8 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1718776D: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x17187770: fmul dword ptr [ebp - 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17187773: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x17187775: fstp dword ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x17187777: add ebx, 4 */
    _flag_k = FK_ADD;
L_1718777A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718777A: inc ecx */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718777B: fstp st(0) */
    /* cmp ecx, 3 */ /* 0x1718777D: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718770E; /* 0x17187780: jb 0x1718770e */
L_17187782:
    eax = ebp + (-0x28); /* 0x17187782: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x17187785: push eax */
    eax = ebp + (-0x18); /* 0x17187786: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x17187789: push eax */
    eax = ebp + (-0x44); /* 0x1718778A: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1718778D: push eax */
    RECOMP_CALL(sub_171869A4); /* 0x1718778E: call 0x171869a4 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x17187793: fld dword ptr [ebp - 0x50] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x17187796: fmul dword ptr [ebp - 0x24] */
    edi = MEM32(ebp + 0x14); /* 0x17187799: mov edi, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x1718779C: fld dword ptr [ebp - 0x4c] */
    eax = MEM32(ebp + 0x1C); /* 0x1718779F: mov eax, dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x171877A2: fmul dword ptr [ebp - 0x24] */
    esi = ebp + (-0x34); /* 0x171877A5: lea esi, [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x171877A8: fld dword ptr [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x171877AB: fmul dword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171877AE: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x171877B1: fld dword ptr [ebp - 0x5c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x171877B4: fmul dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x171877B7: fld dword ptr [ebp - 0x58] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x171877BA: fmul dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x171877BD: fld dword ptr [ebp - 0x54] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x171877C0: fmul dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x171877C3: fstp dword ptr [ebp - 0x2c] */
    fp_push(_st[1]); /* 0x171877C6: fld st(1) */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x171877C8: fadd dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x171877CA: fstp dword ptr [ebp - 0x40] */
    _st[0] += (double)*(float*)ADDR(edx + 0x4); /* 0x171877CD: fadd dword ptr [edx + 4] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171877D0: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x171877D2: fld dword ptr [ebp - 0x2c] */
    _st[0] += (double)*(float*)ADDR(edx + 0x8); /* 0x171877D5: fadd dword ptr [edx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x171877D8: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x171877DB: fld dword ptr [ebp - 0x40] */
    _st[0] += _st[3]; /* 0x171877DE: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x171877E0: fstp dword ptr [ebp - 0x34] */
    _st[0] += _st[1]; /* 0x171877E3: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x171877E5: fstp dword ptr [ebp - 0x30] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171877E8: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171877EA: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x171877EC: fld dword ptr [ebp - 0x38] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x171877EF: fadd dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x171877F2: fstp dword ptr [ebp - 0x2c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171877F5: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x171877F6: fld dword ptr [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171877F9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171877FA: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171877FB: fstp dword ptr [eax] */
L_171877FD:
    SET_LO8(eax, 1); /* 0x171877FD: mov al, 1 */
L_171877FF:
    edi = POP32_VAL(esp); /* 0x171877FF: pop edi */
    esi = POP32_VAL(esp); /* 0x17187800: pop esi */
    ebx = POP32_VAL(esp); /* 0x17187801: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17187802: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17187803: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1718780B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718780Bu);

L_1718780B:
    edi = edi; /* 0x1718780B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718780D: push ebp */
    ebp = esp; /* 0x1718780E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x17187810: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17187813: push esi */
    esi = ecx; /* 0x17187814: mov esi, ecx */
    /* cmp MEM32(esi + 0x2C), 0 */ /* 0x17187816: cmp dword ptr [esi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17187823; /* 0x1718781A: jne 0x17187823 */
L_1718781C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718781C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17187937; /* 0x1718781E: jmp 0x17187937 */
L_17187823:
    eax = MEM32(esi + 0x118); /* 0x17187823: mov eax, dword ptr [esi + 0x118] */
    eax = MEM32(eax + 0x4); /* 0x17187829: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xF8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0xF8); /* 0x1718782C: sub eax, dword ptr [esi + 0xf8] */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17187832: push edi */
    eax = eax + eax * 2; /* 0x17187833: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17187836: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17187836: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17187839: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718783A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718783F: mov edi, eax */
    /* test edi, edi */ /* 0x17187841: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17187843: pop ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x17187844: mov dword ptr [ebp - 0x14], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17187853; /* 0x17187847: jne 0x17187853 */
L_17187849:
    eax = 0x8007000Eu; /* 0x17187849: mov eax, 0x8007000e */
    goto L_17187936; /* 0x1718784E: jmp 0x17187936 */
L_17187853:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17187853: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x100), ecx */ /* 0x17187855: cmp dword ptr [esi + 0x100], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x100)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718785B: push ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718785C: mov dword ptr [ebp - 4], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17187881; /* 0x1718785F: jbe 0x17187881 */
L_17187861:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187861: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17187863:
    PUSH32(esp, 3); /* 0x17187863: push 3 */
    edx = POP32_VAL(esp); /* 0x17187865: pop edx */
L_17187866:
    ebx = MEM32(esi + 0x2C); /* 0x17187866: mov ebx, dword ptr [esi + 0x2c] */
    fp_push(*(float*)&MEM32(eax + ebx)); /* 0x17187869: fld dword ptr [eax + ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + edi) = _v; } /* 0x1718786C: fstp dword ptr [eax + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718786F: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17187872: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17187866; /* 0x17187873: jne 0x17187866 */
L_17187875:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17187875: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0x100) */ /* 0x17187876: cmp ecx, dword ptr [esi + 0x100] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x100));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17187863; /* 0x1718787C: jb 0x17187863 */
L_1718787E:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718787E: mov dword ptr [ebp - 4], ecx */
L_17187881:
    eax = MEM32(esi + 0xB8); /* 0x17187881: mov eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x100));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x100); /* 0x17187887: add eax, dword ptr [esi + 0x100] */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x1718788D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17187927; /* 0x1718788F: jae 0x17187927 */
L_17187895:
    eax = ecx + ecx * 2; /* 0x17187895: lea eax, [ecx + ecx*2] */
    edi = edi + eax * 4; /* 0x17187898: lea edi, [edi + eax*4] */
    MEM32(ebp + (-0xC)) = edi; /* 0x1718789B: mov dword ptr [ebp - 0xc], edi */
L_1718789E:
    eax = ecx; /* 0x1718789E: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x100));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x100); /* 0x171878A0: sub eax, dword ptr [esi + 0x100] */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x171878A6: imul eax, eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xB4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0xB4); /* 0x171878A9: add eax, dword ptr [esi + 0xb4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171878AF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171878B1:
    ecx = MEM32(eax); /* 0x171878B1: mov ecx, dword ptr [eax] */
    ebx = edx + ecx * 2; /* 0x171878B3: lea ebx, [edx + ecx*2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171878B6: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x2C); /* 0x171878B8: mov ecx, dword ptr [esi + 0x2c] */
    fp_push(*(float*)&MEM32(ecx + ebx * 4)); /* 0x171878BB: fld dword ptr [ecx + ebx*4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171878BE: inc edx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x171878BF: fmul dword ptr [eax + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x171878C2: fstp dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171878C4: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, 3 */ /* 0x171878C7: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171878B1; /* 0x171878CA: jb 0x171878b1 */
L_171878CC:
    MEM32(ebp + (-0x10)) = edi; /* 0x171878CC: mov dword ptr [ebp - 0x10], edi */
    ecx = eax + 0x4; /* 0x171878CF: lea ecx, [eax + 4] */
    MEM32(ebp + (-0x8)) = 2; /* 0x171878D2: mov dword ptr [ebp - 8], 2 */
L_171878D9:
    eax = MEM32(ebp + (-0xC)); /* 0x171878D9: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171878DC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171878DE:
    edx = MEM32(ecx); /* 0x171878DE: mov edx, dword ptr [ecx] */
    ebx = edi + edx * 2; /* 0x171878E0: lea ebx, [edi + edx*2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171878E3: add ebx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x2C); /* 0x171878E5: mov edx, dword ptr [esi + 0x2c] */
    fp_push(*(float*)&MEM32(edx + ebx * 4)); /* 0x171878E8: fld dword ptr [edx + ebx*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171878EB: inc edi */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x171878EC: fmul dword ptr [ecx + 0xc] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x171878EF: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171878F1: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171878F3: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 3 */ /* 0x171878F6: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171878DE; /* 0x171878F9: jb 0x171878de */
L_171878FB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171878FB: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x171878FE: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171878D9; /* 0x17187901: jne 0x171878d9 */
L_17187903:
    ecx = MEM32(ebp + (-0x4)); /* 0x17187903: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0xB8); /* 0x17187906: mov eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x100));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x100); /* 0x1718790C: add eax, dword ptr [esi + 0x100] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x10)); /* 0x17187912: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17187915: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x17187916: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x17187918: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0xC)) = edi; /* 0x1718791B: mov dword ptr [ebp - 0xc], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718789E; /* 0x1718791E: jb 0x1718789e */
L_17187924:
    edi = MEM32(ebp + (-0x14)); /* 0x17187924: mov edi, dword ptr [ebp - 0x14] */
L_17187927:
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x17187927: push dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_1721B010); /* 0x1718792A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718792F: pop ecx */
    MEM32(esi + 0x2C) = edi; /* 0x17187930: mov dword ptr [esi + 0x2c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187933: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x17187935: pop ebx */
L_17187936:
    edi = POP32_VAL(esp); /* 0x17187936: pop edi */
L_17187937:
    esi = POP32_VAL(esp); /* 0x17187937: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17187938: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17187939: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718793F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718793Fu);

L_1718793F:
    edi = edi; /* 0x1718793F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187941: push ebp */
    ebp = esp; /* 0x17187942: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x300u; /* 0x17187944: sub esp, 0x300 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718794A: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718794B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1718794D: push esi */
    PUSH32(esp, edi); /* 0x1718794E: push edi */
    ecx = ebp + (-0xF8); /* 0x1718794F: lea ecx, [ebp - 0xf8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17187955: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x17187958: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718795B: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718795E: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_170B7D30); /* 0x17187961: call 0x170b7d30 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x17187966: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x1718796A: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x4); /* 0x1718796D: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(eax + 0x94); /* 0x17187970: mov ecx, dword ptr [eax + 0x94] */
    esi = eax + 0x6C; /* 0x17187976: lea esi, [eax + 0x6c] */
    edi = ebp + (-0x3C); /* 0x17187979: lea edi, [ebp - 0x3c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718797C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718797D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + 0x8) = ecx; /* 0x1718797E: mov dword ptr [ebp + 8], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187981: movsd dword ptr es:[edi], dword ptr [esi] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718798A; /* 0x17187982: je 0x1718798a */
L_17187984:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x17187984: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171879BF; /* 0x17187988: jne 0x171879bf */
L_1718798A:
    edi = 0x8876086Cu; /* 0x1718798A: mov edi, 0x8876086c */
L_1718798F:
    esi = MEM32(ebp + (-0x4)); /* 0x1718798F: mov esi, dword ptr [ebp - 4] */
L_17187992:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x17187992: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718799E; /* 0x17187996: je 0x1718799e */
L_17187998:
    eax = MEM32(esi); /* 0x17187998: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1718799A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1718799B: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_1718799E:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1718799E: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171879AA; /* 0x171879A2: je 0x171879aa */
L_171879A4:
    eax = MEM32(esi); /* 0x171879A4: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171879A6: push esi */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x171879A7: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_171879AA:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x171879AA: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171879B6; /* 0x171879AE: je 0x171879b6 */
L_171879B0:
    eax = MEM32(esi); /* 0x171879B0: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171879B2: push esi */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x171879B3: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
L_171879B6:
    eax = edi; /* 0x171879B6: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x171879B8: pop edi */
    esi = POP32_VAL(esp); /* 0x171879B9: pop esi */
    ebx = POP32_VAL(esp); /* 0x171879BA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171879BB: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171879BC: ret 0x18 */
L_171879BF:
    ecx = ebx; /* 0x171879BF: mov ecx, ebx */
    RECOMP_CALL(sub_17174E5D); /* 0x171879C1: call 0x17174e5d */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171879C6: mov edi, eax */
    /* test edi, edi */ /* 0x171879C8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718798F; /* 0x171879CA: jl 0x1718798f */
L_171879CC:
    ecx = ebx + 0x74; /* 0x171879CC: lea ecx, [ebx + 0x74] */
    RECOMP_CALL(sub_171873F9); /* 0x171879CF: call 0x171873f9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x118); /* 0x171879D4: mov eax, dword ptr [ebx + 0x118] */
    eax = MEM32(eax + 0x4); /* 0x171879DA: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xF8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0xF8); /* 0x171879DD: sub eax, dword ptr [ebx + 0xf8] */
    _flag_k = FK_CMP;
    esi = MEM32(ebx + 0x11C); /* 0x171879E3: mov esi, dword ptr [ebx + 0x11c] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x171879E9: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebx + 0x104); /* 0x171879EC: mov ecx, dword ptr [ebx + 0x104] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171879F2: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x171879F5: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171879F7: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100u);
    esi = esi & 0x100u; /* 0x171879F9: and esi, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0x12u)); _flag_b = (uint32_t)((esi | 0x12u));
    esi = esi | 0x12u; /* 0x171879FF: or esi, 0x12 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17187A02: push esi */
    PUSH32(esp, 0x221u); /* 0x17187A03: push 0x221 */
    PUSH32(esp, eax); /* 0x17187A08: push eax */
    PUSH32(esp, ecx); /* 0x17187A09: push ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x17187A0A: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_17065125); /* 0x17187A0D: call 0x17065125 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17187A12: mov edi, eax */
    /* test edi, edi */ /* 0x17187A14: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718798F; /* 0x17187A16: jl 0x1718798f */
L_17187A1C:
    eax = ebp + (-0x300); /* 0x17187A1C: lea eax, [ebp - 0x300] */
    PUSH32(esp, eax); /* 0x17187A22: push eax */
    PUSH32(esp, esi); /* 0x17187A23: push esi */
    RECOMP_CALL(sub_170533BA); /* 0x17187A24: call 0x170533ba */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17187A29: mov edi, eax */
    /* test edi, edi */ /* 0x17187A2B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718798F; /* 0x17187A2D: jl 0x1718798f */
L_17187A33:
    eax = MEM32(ebp + 0x1C); /* 0x17187A33: mov eax, dword ptr [ebp + 0x1c] */
    esi = MEM32(eax); /* 0x17187A36: mov esi, dword ptr [eax] */
    eax = MEM32(esi); /* 0x17187A38: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x10); /* 0x17187A3A: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x17187A3D: push ecx */
    PUSH32(esp, 0); /* 0x17187A3E: push 0 */
    PUSH32(esp, esi); /* 0x17187A40: push esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x17187A41: mov dword ptr [ebp - 4], esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x17187A44: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17187A47: mov edi, eax */
    /* test edi, edi */ /* 0x17187A49: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17187992; /* 0x17187A4B: jl 0x17187992 */
L_17187A51:
    eax = MEM32(esi); /* 0x17187A51: mov eax, dword ptr [esi] */
    ecx = ebp + (-0xC); /* 0x17187A53: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x17187A56: push ecx */
    PUSH32(esp, 0); /* 0x17187A57: push 0 */
    PUSH32(esp, esi); /* 0x17187A59: push esi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x17187A5A: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17187A5D: mov edi, eax */
    /* test edi, edi */ /* 0x17187A5F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17187992; /* 0x17187A61: jl 0x17187992 */
L_17187A67:
    eax = MEM32(esi); /* 0x17187A67: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x8); /* 0x17187A69: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x17187A6C: push ecx */
    PUSH32(esp, 0); /* 0x17187A6D: push 0 */
    PUSH32(esp, esi); /* 0x17187A6F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x17187A70: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17187A73: mov edi, eax */
    /* test edi, edi */ /* 0x17187A75: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17187992; /* 0x17187A77: jl 0x17187992 */
L_17187A7D:
    eax = ebp + (-0x300); /* 0x17187A7D: lea eax, [ebp - 0x300] */
    PUSH32(esp, eax); /* 0x17187A83: push eax */
    ecx = ebp + (-0xF8); /* 0x17187A84: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_170B7D48); /* 0x17187A8A: call 0x170b7d48 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x17187A8F: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17187A91: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x17187A92: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x17187A95: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x17187A96: push dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17187A99: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17187A9B: push edi */
    ecx = ebp + (-0xF8); /* 0x17187A9C: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_170B7D6A); /* 0x17187AA2: call 0x170b7d6a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17187AA7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x88), edi */ /* 0x17187AA9: cmp dword ptr [ebx + 0x88], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x88)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = ecx; /* 0x17187AAF: mov dword ptr [ebp - 0x18], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17187B70; /* 0x17187AB2: jbe 0x17187b70 */
L_17187AB8:
    MEM32(ebp + (-0x14)) = edi; /* 0x17187AB8: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + 0x1C) = edi; /* 0x17187ABB: mov dword ptr [ebp + 0x1c], edi */
L_17187ABE:
    eax = MEM32(ebx + 0x84); /* 0x17187ABE: mov eax, dword ptr [ebx + 0x84] */
    /* test MEM8(eax + ecx * 4), 8 */ /* 0x17187AC4: test byte ptr [eax + ecx*4], 8 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 4)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17187B5E; /* 0x17187AC8: jne 0x17187b5e */
L_17187ACE:
    eax = MEM32(ebx + 0xF4); /* 0x17187ACE: mov eax, dword ptr [ebx + 0xf4] */
    edx = MEM32(ebx + 0x110); /* 0x17187AD4: mov edx, dword ptr [ebx + 0x110] */
    edx = MEM32(edx); /* 0x17187ADA: mov edx, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17187ADC: add eax, ecx */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x17187ADE: lea eax, [eax + eax*2] */
    eax = edx + eax * 4; /* 0x17187AE1: lea eax, [edx + eax*4] */
    PUSH32(esp, ecx); /* 0x17187AE4: push ecx */
    ecx = ebx + 0x74; /* 0x17187AE5: lea ecx, [ebx + 0x74] */
    MEM32(ebp + (-0x20)) = eax; /* 0x17187AE8: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_17186F65); /* 0x17187AEB: call 0x17186f65 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx + 0x14); /* 0x17187AF0: mov edx, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17187AF3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, edi */ /* 0x17187AF5: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x17187AF7: mov dword ptr [ebp + 0xc], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17187B2A; /* 0x17187AFA: jbe 0x17187b2a */
L_17187AFC:
    edi = MEM32(ebx + 0x10); /* 0x17187AFC: mov edi, dword ptr [ebx + 0x10] */
    eax = ecx + ecx * 8; /* 0x17187AFF: lea eax, [ecx + ecx*8] */
    edi = edi + eax * 8; /* 0x17187B02: lea edi, [edi + eax*8] */
    eax = MEM32(edi); /* 0x17187B05: mov eax, dword ptr [edi] */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x17187B07: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17187B25; /* 0x17187B0A: jb 0x17187b25 */
L_17187B0C:
    edi = MEM32(edi + 0x8); /* 0x17187B0C: mov edi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x17187B0F: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x17187B11: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17187B25; /* 0x17187B14: jae 0x17187b25 */
L_17187B16:
    edx = MEM32(ebp + 0x1C); /* 0x17187B16: mov edx, dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + (-0x8)); /* 0x17187B19: mov eax, dword ptr [ebp - 8] */
    MEM32(edx + eax) = ecx; /* 0x17187B1C: mov dword ptr [edx + eax], ecx */
    edx = MEM32(ebx + 0x14); /* 0x17187B1F: mov edx, dword ptr [ebx + 0x14] */
    ecx = edx + 0x2; /* 0x17187B22: lea ecx, [edx + 2] */
L_17187B25:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17187B25: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x17187B26: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17187AFC; /* 0x17187B28: jb 0x17187afc */
L_17187B2A:
    eax = MEM32(ebp + 0x10); /* 0x17187B2A: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x17187B2D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17187B3A; /* 0x17187B2F: je 0x17187b3a */
L_17187B31:
    ecx = MEM32(ebp + 0x1C); /* 0x17187B31: mov ecx, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0xC); /* 0x17187B34: mov edx, dword ptr [ebp + 0xc] */
    MEM32(ecx + eax) = edx; /* 0x17187B37: mov dword ptr [ecx + eax], edx */
L_17187B3A:
    ecx = MEM32(ebp + (-0x14)); /* 0x17187B3A: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187B3D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17187B3F:
    edx = MEM32(ebp + (-0x20)); /* 0x17187B3F: mov edx, dword ptr [ebp - 0x20] */
    edx = MEM32(edx + eax * 4); /* 0x17187B42: mov edx, dword ptr [edx + eax*4] */
    edi = MEM32(ebp + (-0x10)); /* 0x17187B45: mov edi, dword ptr [ebp - 0x10] */
    MEM32(ecx + edi) = edx; /* 0x17187B48: mov dword ptr [ecx + edi], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17187B4B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17187B4C: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x17187B4F: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17187B3F; /* 0x17187B52: jb 0x17187b3f */
L_17187B54:
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4; /* 0x17187B54: add dword ptr [ebp + 0x1c], 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x17187B58: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(ebp + (-0x18)); /* 0x17187B5B: mov ecx, dword ptr [ebp - 0x18] */
L_17187B5E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17187B5E: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17187B5F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebx + 0x88) */ /* 0x17187B61: cmp ecx, dword ptr [ebx + 0x88] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x88));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = ecx; /* 0x17187B67: mov dword ptr [ebp - 0x18], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17187ABE; /* 0x17187B6A: jb 0x17187abe */
L_17187B70:
    /* cmp MEM32(ebp + (-0x1C)), edi */ /* 0x17187B70: cmp dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x1C) = edi; /* 0x17187B73: mov dword ptr [ebp + 0x1c], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17187CF3; /* 0x17187B76: jbe 0x17187cf3 */
L_17187B7C:
    MEM32(ebp + 0xC) = edi; /* 0x17187B7C: mov dword ptr [ebp + 0xc], edi */
L_17187B7F:
    ecx = MEM32(ebp + 0x1C); /* 0x17187B7F: mov ecx, dword ptr [ebp + 0x1c] */
    eax = MEM32(ebx + 0xF8); /* 0x17187B82: mov eax, dword ptr [ebx + 0xf8] */
    esi = MEM32(ebx + 0x118); /* 0x17187B88: mov esi, dword ptr [ebx + 0x118] */
    esi = MEM32(esi); /* 0x17187B8E: mov esi, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17187B90: add eax, ecx */
    _flag_k = FK_ADD;
    edx = eax + eax * 2; /* 0x17187B92: lea edx, [eax + eax*2] */
    esi = esi + edx * 4; /* 0x17187B95: lea esi, [esi + edx*4] */
    edi = ebp + (-0x30); /* 0x17187B98: lea edi, [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187B9B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187B9C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187B9D: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17187B9E: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17187BA1: fmul dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17187BA4: fld dword ptr [ebp - 0x2c] */
    edx = MEM32(ebx + 0x114); /* 0x17187BA7: mov edx, dword ptr [ebx + 0x114] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17187BAD: fmul dword ptr [ebp + 8] */
    esi = ebp + (-0x48); /* 0x17187BB0: lea esi, [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17187BB3: fld dword ptr [ebp - 0x28] */
    edi = ebp + (-0x30); /* 0x17187BB6: lea edi, [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17187BB9: fmul dword ptr [ebp + 8] */
    eax = eax + eax * 2; /* 0x17187BBC: lea eax, [eax + eax*2] */
    PUSH32(esp, 3); /* 0x17187BBF: push 3 */
    fp_push(_st[2]); /* 0x17187BC1: fld st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x17187BC3: fadd dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x17187BC6: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17187BC9: fld dword ptr [ebp - 0x38] */
    _st[0] += _st[2]; /* 0x17187BCC: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17187BCE: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17187BD1: fld dword ptr [ebp - 0x34] */
    _st[0] += _st[1]; /* 0x17187BD4: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17187BD6: fstp dword ptr [ebp - 0x40] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187BD9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187BDA: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187BDB: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187BDD: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17187BDF: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187BE1: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = MEM32(edx); /* 0x17187BE2: mov edx, dword ptr [edx] */
    esi = edx + eax * 8 + 0xC; /* 0x17187BE4: lea esi, [edx + eax*8 + 0xc] */
    edi = ebp + (-0x70); /* 0x17187BE8: lea edi, [ebp - 0x70] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187BEB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187BEC: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x30); /* 0x17187BED: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x17187BF0: push eax */
    PUSH32(esp, ecx); /* 0x17187BF1: push ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187BF2: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17187BF3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17187BF5: push edi */
    PUSH32(esp, edi); /* 0x17187BF6: push edi */
    ecx = ebp + (-0xF8); /* 0x17187BF7: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_1704E9C0); /* 0x17187BFD: call 0x1704e9c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x17187C02: push eax */
    ecx = ebp + (-0xF8); /* 0x17187C03: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_170B81B2); /* 0x17187C09: call 0x170b81b2 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x1C); /* 0x17187C0E: mov esi, dword ptr [ebp + 0x1c] */
    PUSH32(esp, 3); /* 0x17187C11: push 3 */
    eax = ebp + (-0x70); /* 0x17187C13: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x17187C16: push eax */
    PUSH32(esp, esi); /* 0x17187C17: push esi */
    PUSH32(esp, edi); /* 0x17187C18: push edi */
    PUSH32(esp, 3); /* 0x17187C19: push 3 */
    ecx = ebp + (-0xF8); /* 0x17187C1B: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_1704E9C0); /* 0x17187C21: call 0x1704e9c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x17187C26: push eax */
    ecx = ebp + (-0xF8); /* 0x17187C27: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_170B81B2); /* 0x17187C2D: call 0x170b81b2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x11C); /* 0x17187C32: mov eax, dword ptr [ebx + 0x11c] */
    /* cmp eax, edi */ /* 0x17187C38: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17187C6C; /* 0x17187C3A: je 0x17187c6c */
L_17187C3C:
    eax = MEM32(eax); /* 0x17187C3C: mov eax, dword ptr [eax] */
    ecx = MEM32(eax + esi * 8); /* 0x17187C3E: mov ecx, dword ptr [eax + esi*8] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x17187C41: mov dword ptr [ebp - 0x24], ecx */
    eax = MEM32(eax + esi * 8 + 0x4); /* 0x17187C44: mov eax, dword ptr [eax + esi*8 + 4] */
    PUSH32(esp, 2); /* 0x17187C48: push 2 */
    MEM32(ebp + (-0x20)) = eax; /* 0x17187C4A: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x24); /* 0x17187C4D: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x17187C50: push eax */
    PUSH32(esp, esi); /* 0x17187C51: push esi */
    PUSH32(esp, edi); /* 0x17187C52: push edi */
    PUSH32(esp, 5); /* 0x17187C53: push 5 */
    ecx = ebp + (-0xF8); /* 0x17187C55: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_1704E9C0); /* 0x17187C5B: call 0x1704e9c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x17187C60: push eax */
    ecx = ebp + (-0xF8); /* 0x17187C61: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_170B81B2); /* 0x17187C67: call 0x170b81b2 */
    RECOMP_FLAGS_IN();
L_17187C6C:
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x17187C6C: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17187C76; /* 0x17187C6F: jne 0x17187c76 */
L_17187C71:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x17187C71: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17187CDF; /* 0x17187C74: je 0x17187cdf */
L_17187C76:
    eax = MEM32(ebx + 0x100); /* 0x17187C76: mov eax, dword ptr [ebx + 0x100] */
    /* cmp esi, eax */ /* 0x17187C7C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17187C9B; /* 0x17187C7E: jae 0x17187c9b */
L_17187C80:
    ecx = ebp + (-0x64); /* 0x17187C80: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_17186945); /* 0x17187C83: call 0x17186945 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x17187C88: fld1  */
    PUSH32(esp, esi); /* 0x17187C8A: push esi */
    PUSH32(esp, ecx); /* 0x17187C8B: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17187C8C: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17186895); /* 0x17187C8F: call 0x17186895 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1718695D); /* 0x17187C94: call 0x1718695d */
    RECOMP_FLAGS_IN();
    goto L_17187CB1; /* 0x17187C99: jmp 0x17187cb1 */
L_17187C9B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x17187C9B: sub esi, eax */
    _flag_k = FK_CMP;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1Cu); /* 0x17187C9D: imul esi, esi, 0x1c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xB4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0xB4); /* 0x17187CA0: add esi, dword ptr [ebx + 0xb4] */
    _flag_k = FK_ADD;
    PUSH32(esp, 7); /* 0x17187CA6: push 7 */
    ecx = POP32_VAL(esp); /* 0x17187CA8: pop ecx */
    edi = ebp + (-0x64); /* 0x17187CA9: lea edi, [ebp - 0x64] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17187CAC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x1C); /* 0x17187CAE: mov esi, dword ptr [ebp + 0x1c] */
L_17187CB1:
    edx = MEM32(ebp + 0x14); /* 0x17187CB1: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187CB4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17187CB6:
    /* test edx, edx */ /* 0x17187CB6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17187CC6; /* 0x17187CB8: je 0x17187cc6 */
L_17187CBA:
    ecx = MEM32(ebp + 0xC); /* 0x17187CBA: mov ecx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + eax * 4 + (-0x64)); /* 0x17187CBD: mov edi, dword ptr [ebp + eax*4 - 0x64] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x17187CC1: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(edx + ecx * 4) = edi; /* 0x17187CC3: mov dword ptr [edx + ecx*4], edi */
L_17187CC6:
    ecx = MEM32(ebp + 0x18); /* 0x17187CC6: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x17187CC9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17187CD9; /* 0x17187CCB: je 0x17187cd9 */
L_17187CCD:
    edi = MEM32(ebp + 0xC); /* 0x17187CCD: mov edi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x58))); /* 0x17187CD0: fld dword ptr [ebp + eax*4 - 0x58] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x17187CD4: add edi, eax */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edi * 4) = _v; } /* 0x17187CD6: fstp dword ptr [ecx + edi*4] */
L_17187CD9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17187CD9: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 3 */ /* 0x17187CDA: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17187CB6; /* 0x17187CDD: jb 0x17187cb6 */
L_17187CDF:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 3; /* 0x17187CDF: add dword ptr [ebp + 0xc], 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17187CE3: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x1C)) */ /* 0x17187CE4: cmp esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x1C) = esi; /* 0x17187CE7: mov dword ptr [ebp + 0x1c], esi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17187B7F; /* 0x17187CEA: jb 0x17187b7f */
L_17187CF0:
    esi = MEM32(ebp + (-0x4)); /* 0x17187CF0: mov esi, dword ptr [ebp - 4] */
L_17187CF3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17187CF3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_17187992; /* 0x17187CF5: jmp 0x17187992 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17187CFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187CFFu);

L_17187CFF:
    edi = edi; /* 0x17187CFF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187D01: push ebp */
    ebp = esp; /* 0x17187D02: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17187D04: push esi */
    esi = ecx; /* 0x17187D05: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x17187D07: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0x8); /* 0x17187D0A: mov ecx, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x17187D0D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17187D0E: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x17187D11: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x17187D13: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17187D2C; /* 0x17187D15: jbe 0x17187d2c */
L_17187D17:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x17187D17: add ecx, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x17187D19: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17187D1F; /* 0x17187D1B: ja 0x17187d1f */
L_17187D1D:
    eax = ecx; /* 0x17187D1D: mov eax, ecx */
L_17187D1F:
    PUSH32(esp, eax); /* 0x17187D1F: push eax */
    ecx = esi; /* 0x17187D20: mov ecx, esi */
    RECOMP_CALL(sub_17194548); /* 0x17187D22: call 0x17194548 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + edi; /* 0x17187D27: add dword ptr [esi + 4], edi */
    _flag_k = FK_ADD;
    goto L_17187D31; /* 0x17187D2A: jmp 0x17187d31 */
L_17187D2C:
    MEM32(esi + 0x4) = eax; /* 0x17187D2C: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187D2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17187D31:
    edi = POP32_VAL(esp); /* 0x17187D31: pop edi */
    esi = POP32_VAL(esp); /* 0x17187D32: pop esi */
    ebp = POP32_VAL(esp); /* 0x17187D33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17187D34: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17187D3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187D3Cu);

L_17187D3C:
    edi = edi; /* 0x17187D3C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187D3E: push ebp */
    ebp = esp; /* 0x17187D3F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17187D41: push esi */
    PUSH32(esp, edi); /* 0x17187D42: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17187D43: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x17187D46: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x17187D48: mov esi, ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17187D53; /* 0x17187D4A: jne 0x17187d53 */
L_17187D4C:
    eax = 0x8007000Eu; /* 0x17187D4C: mov eax, 0x8007000e */
    goto L_17187D9E; /* 0x17187D51: jmp 0x17187d9e */
L_17187D53:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x17187D53: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    ecx = MEM32(esi + 0xC); /* 0x17187D56: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x8); /* 0x17187D59: mov eax, dword ptr [esi + 8] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17187D5C: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17187D5C: shl eax, 1 */
    ecx = ecx + ecx * 2; /* 0x17187D5E: lea ecx, [ecx + ecx*2] */
    /* cmp ecx, eax */ /* 0x17187D61: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17187D63: push ebx */
    if (CMP_B(_flag_a, _flag_b)) goto L_17187D80; /* 0x17187D64: jb 0x17187d80 */
L_17187D66:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17187D66: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x17187D67: push eax */
    ecx = esi; /* 0x17187D68: mov ecx, esi */
    RECOMP_CALL(sub_17186B84); /* 0x17187D6A: call 0x17186b84 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17187D6F: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17187D71: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17187D80; /* 0x17187D73: jge 0x17187d80 */
L_17187D75:
    PUSH32(esp, edi); /* 0x17187D75: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x17187D76: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17187D7B: pop ecx */
    eax = ebx; /* 0x17187D7C: mov eax, ebx */
    goto L_17187D9D; /* 0x17187D7E: jmp 0x17187d9d */
L_17187D80:
    eax = MEM32(edi); /* 0x17187D80: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17187D82: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(esi + 0x8); /* 0x17187D84: div dword ptr [esi + 8] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi + 0x4); /* 0x17187D87: mov ecx, dword ptr [esi + 4] */
    eax = edx; /* 0x17187D8A: mov eax, edx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17187D8C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17187D8C: shl eax, 2 */
    ecx = MEM32(eax + ecx); /* 0x17187D8F: mov ecx, dword ptr [eax + ecx] */
    MEM32(edi + 0x4) = ecx; /* 0x17187D92: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(esi + 0x4); /* 0x17187D95: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + ecx) = edi; /* 0x17187D98: mov dword ptr [eax + ecx], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187D9B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17187D9D:
    ebx = POP32_VAL(esp); /* 0x17187D9D: pop ebx */
L_17187D9E:
    edi = POP32_VAL(esp); /* 0x17187D9E: pop edi */
    esi = POP32_VAL(esp); /* 0x17187D9F: pop esi */
    ebp = POP32_VAL(esp); /* 0x17187DA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17187DA1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17187DA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187DA9u);

L_17187DA9:
    edi = edi; /* 0x17187DA9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187DAB: push ebp */
    ebp = esp; /* 0x17187DAC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17187DAE: push esi */
    esi = MEM32(ecx + 0x4); /* 0x17187DAF: mov esi, dword ptr [ecx + 4] */
    /* test esi, esi */ /* 0x17187DB2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17187DB4: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17187DD9; /* 0x17187DB5: je 0x17187dd9 */
L_17187DB7:
    edi = MEM32(ebp + 0x8); /* 0x17187DB7: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x17187DBA: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17187DBC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ecx + 0x8); /* 0x17187DBE: div dword ptr [ecx + 8] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = MEM32(esi + edx * 4); /* 0x17187DC1: mov esi, dword ptr [esi + edx*4] */
    goto L_17187DD5; /* 0x17187DC4: jmp 0x17187dd5 */
L_17187DC6:
    PUSH32(esp, edi); /* 0x17187DC6: push edi */
    ecx = esi; /* 0x17187DC7: mov ecx, esi */
    RECOMP_CALL(sub_17186D17); /* 0x17187DC9: call 0x17186d17 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17187DCE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17187DE7; /* 0x17187DD0: jne 0x17187de7 */
L_17187DD2:
    esi = MEM32(esi + 0x4); /* 0x17187DD2: mov esi, dword ptr [esi + 4] */
L_17187DD5:
    /* test esi, esi */ /* 0x17187DD5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17187DC6; /* 0x17187DD7: jne 0x17187dc6 */
L_17187DD9:
    eax = MEM32(ebp + 0xC); /* 0x17187DD9: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x17187DDC: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187DDF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17187DE1:
    edi = POP32_VAL(esp); /* 0x17187DE1: pop edi */
    esi = POP32_VAL(esp); /* 0x17187DE2: pop esi */
    ebp = POP32_VAL(esp); /* 0x17187DE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17187DE4: ret 8 */
L_17187DE7:
    eax = MEM32(ebp + 0xC); /* 0x17187DE7: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x17187DEA: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187DEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17187DEE: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_17187DE1; /* 0x17187DEF: jmp 0x17187de1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17187DF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187DF6u);

L_17187DF6:
    edi = edi; /* 0x17187DF6: mov edi, edi */
    PUSH32(esp, esi); /* 0x17187DF8: push esi */
    esi = ecx; /* 0x17187DF9: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187DFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x17187DFD: push 8 */
    MEM32(esi) = eax; /* 0x17187DFF: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x17187E01: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x17187E04: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_17186C2B); /* 0x17187E07: call 0x17186c2b */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x17187E0C: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x17187E0F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17187E11: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17187E12: ret  */
    RECOMP_REGS_OUT();
}

void sub_17187E18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187E18u);

L_17187E18:
    edi = edi; /* 0x17187E18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187E1A: push ebp */
    ebp = esp; /* 0x17187E1B: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17187E1D: push ebx */
    ebx = ecx; /* 0x17187E1E: mov ebx, ecx */
    eax = MEM32(ebx + 0x8); /* 0x17187E20: mov eax, dword ptr [ebx + 8] */
    /* cmp MEM32(ebx + 0x4), eax */ /* 0x17187E23: cmp dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17187E3C; /* 0x17187E26: jne 0x17187e3c */
L_17187E28:
    /* test eax, eax */ /* 0x17187E28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17187E31; /* 0x17187E2A: je 0x17187e31 */
L_17187E2C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x17187E2C: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17187E2E: push eax */
    goto L_17187E33; /* 0x17187E2F: jmp 0x17187e33 */
L_17187E31:
    PUSH32(esp, 8); /* 0x17187E31: push 8 */
L_17187E33:
    RECOMP_CALL(sub_17186C2B); /* 0x17187E33: call 0x17186c2b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17187E38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17187E55; /* 0x17187E3A: jl 0x17187e55 */
L_17187E3C:
    PUSH32(esp, esi); /* 0x17187E3C: push esi */
    PUSH32(esp, edi); /* 0x17187E3D: push edi */
    edi = MEM32(ebx + 0x4); /* 0x17187E3E: mov edi, dword ptr [ebx + 4] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1Cu); /* 0x17187E41: imul edi, edi, 0x1c */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebx); /* 0x17187E44: add edi, dword ptr [ebx] */
    _flag_k = FK_ADD;
    PUSH32(esp, 7); /* 0x17187E46: push 7 */
    ecx = POP32_VAL(esp); /* 0x17187E48: pop ecx */
    esi = ebp + 0x8; /* 0x17187E49: lea esi, [ebp + 8] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17187E4C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 1; /* 0x17187E4E: inc dword ptr [ebx + 4] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x17187E51: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187E52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17187E54: pop esi */
L_17187E55:
    ebx = POP32_VAL(esp); /* 0x17187E55: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17187E56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x17187E57: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17187E5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187E5Fu);

L_17187E5F:
    edi = edi; /* 0x17187E5F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187E61: push ebp */
    ebp = esp; /* 0x17187E62: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17187E64: push esi */
    PUSH32(esp, edi); /* 0x17187E65: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17187E66: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x17187E69: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187E6B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x17187E6D: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17187E78; /* 0x17187E70: jae 0x17187e78 */
L_17187E72:
    PUSH32(esp, edi); /* 0x17187E72: push edi */
    RECOMP_CALL(sub_17186CA3); /* 0x17187E73: call 0x17186ca3 */
    RECOMP_FLAGS_IN();
L_17187E78:
    MEM32(esi + 0x4) = edi; /* 0x17187E78: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x17187E7B: pop edi */
    esi = POP32_VAL(esp); /* 0x17187E7C: pop esi */
    ebp = POP32_VAL(esp); /* 0x17187E7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17187E7E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17187E86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187E86u);

L_17187E86:
    edi = edi; /* 0x17187E86: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187E88: push ebp */
    ebp = esp; /* 0x17187E89: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17187E8B: push ebx */
    ebx = ecx; /* 0x17187E8C: mov ebx, ecx */
    eax = MEM32(ebx + 0x8); /* 0x17187E8E: mov eax, dword ptr [ebx + 8] */
    /* cmp MEM32(ebx + 0x4), eax */ /* 0x17187E91: cmp dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17187EAA; /* 0x17187E94: jne 0x17187eaa */
L_17187E96:
    /* test eax, eax */ /* 0x17187E96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17187E9F; /* 0x17187E98: je 0x17187e9f */
L_17187E9A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x17187E9A: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17187E9C: push eax */
    goto L_17187EA1; /* 0x17187E9D: jmp 0x17187ea1 */
L_17187E9F:
    PUSH32(esp, 8); /* 0x17187E9F: push 8 */
L_17187EA1:
    RECOMP_CALL(sub_17174FBB); /* 0x17187EA1: call 0x17174fbb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17187EA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17187EC4; /* 0x17187EA8: jl 0x17187ec4 */
L_17187EAA:
    eax = MEM32(ebx + 0x4); /* 0x17187EAA: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x17187EAD: mov ecx, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x17187EAF: push esi */
    PUSH32(esp, edi); /* 0x17187EB0: push edi */
    eax = eax + eax * 2; /* 0x17187EB1: lea eax, [eax + eax*2] */
    edi = ecx + eax * 4; /* 0x17187EB4: lea edi, [ecx + eax*4] */
    esi = ebp + 0x8; /* 0x17187EB7: lea esi, [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187EBA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187EBB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17187EBC: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 1; /* 0x17187EBD: inc dword ptr [ebx + 4] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x17187EC0: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187EC1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17187EC3: pop esi */
L_17187EC4:
    ebx = POP32_VAL(esp); /* 0x17187EC4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17187EC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17187EC6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17187ECE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187ECEu);

L_17187ECE:
    edi = edi; /* 0x17187ECE: mov edi, edi */
    PUSH32(esp, esi); /* 0x17187ED0: push esi */
    esi = ecx; /* 0x17187ED1: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187ED3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x17187ED5: push 8 */
    MEM32(esi) = eax; /* 0x17187ED7: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x17187ED9: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x17187EDC: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_17186CA3); /* 0x17187EDF: call 0x17186ca3 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x17187EE4: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x17187EE7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17187EE9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17187EEA: ret  */
    RECOMP_REGS_OUT();
}

void sub_17187EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187EF0u);

L_17187EF0:
    edi = edi; /* 0x17187EF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187EF2: push ebp */
    ebp = esp; /* 0x17187EF3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17187EF5: push esi */
    esi = ecx; /* 0x17187EF6: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x17187EF8: mov eax, dword ptr [esi + 8] */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x17187EFB: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17187F14; /* 0x17187EFE: jne 0x17187f14 */
L_17187F00:
    /* test eax, eax */ /* 0x17187F00: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17187F09; /* 0x17187F02: je 0x17187f09 */
L_17187F04:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x17187F04: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17187F06: push eax */
    goto L_17187F0B; /* 0x17187F07: jmp 0x17187f0b */
L_17187F09:
    PUSH32(esp, 8); /* 0x17187F09: push 8 */
L_17187F0B:
    RECOMP_CALL(sub_17186CA3); /* 0x17187F0B: call 0x17186ca3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17187F10: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17187F2B; /* 0x17187F12: jl 0x17187f2b */
L_17187F14:
    eax = MEM32(esi + 0x4); /* 0x17187F14: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x17187F17: mov ecx, dword ptr [esi] */
    edx = MEM32(ebp + 0x8); /* 0x17187F19: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx + eax * 8) = edx; /* 0x17187F1C: mov dword ptr [ecx + eax*8], edx */
    edx = MEM32(ebp + 0xC); /* 0x17187F1F: mov edx, dword ptr [ebp + 0xc] */
    MEM32(ecx + eax * 8 + 0x4) = edx; /* 0x17187F22: mov dword ptr [ecx + eax*8 + 4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x17187F26: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17187F29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17187F2B:
    esi = POP32_VAL(esp); /* 0x17187F2B: pop esi */
    ebp = POP32_VAL(esp); /* 0x17187F2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17187F2D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17187F35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187F35u);

L_17187F35:
    edi = edi; /* 0x17187F35: mov edi, edi */
    PUSH32(esp, esi); /* 0x17187F37: push esi */
    PUSH32(esp, 0x1706E47Eu); /* 0x17187F38: push 0x1706e47e */
    PUSH32(esp, 2); /* 0x17187F3D: push 2 */
    esi = ecx; /* 0x17187F3F: mov esi, ecx */
    PUSH32(esp, 0xCu); /* 0x17187F41: push 0xc */
    eax = esi + 0xC; /* 0x17187F43: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x17187F46: push eax */
    RECOMP_CALL(sub_1702C116); /* 0x17187F47: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x17187F4C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17187F4E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17187F4F: ret  */
    RECOMP_REGS_OUT();
}

void sub_17187F55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187F55u);

L_17187F55:
    edi = edi; /* 0x17187F55: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187F57: push ebp */
    ebp = esp; /* 0x17187F58: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17187F5A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x14), edx */ /* 0x17187F5C: cmp dword ptr [ecx + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17187F79; /* 0x17187F5F: jbe 0x17187f79 */
L_17187F61:
    PUSH32(esp, esi); /* 0x17187F61: push esi */
L_17187F62:
    eax = MEM32(ecx + 0x10); /* 0x17187F62: mov eax, dword ptr [ecx + 0x10] */
    esi = MEM32(ebp + 0x8); /* 0x17187F65: mov esi, dword ptr [ebp + 8] */
    eax = eax + edx * 4; /* 0x17187F68: lea eax, [eax + edx*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    esi = esi & MEM32(eax); /* 0x17187F6B: and esi, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | MEM32(ebp + 0xC))); _flag_b = (uint32_t)((esi | MEM32(ebp + 0xC)));
    esi = esi | MEM32(ebp + 0xC); /* 0x17187F6D: or esi, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17187F70: inc edx */
    _flag_k = FK_INC;
    MEM32(eax) = esi; /* 0x17187F71: mov dword ptr [eax], esi */
    /* cmp edx, MEM32(ecx + 0x14) */ /* 0x17187F73: cmp edx, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17187F62; /* 0x17187F76: jb 0x17187f62 */
L_17187F78:
    esi = POP32_VAL(esp); /* 0x17187F78: pop esi */
L_17187F79:
    ebp = POP32_VAL(esp); /* 0x17187F79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17187F7A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17187F82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187F82u);

L_17187F82:
    edi = edi; /* 0x17187F82: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187F84: push ebp */
    ebp = esp; /* 0x17187F85: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x17187F87: mov edx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x17187F8A: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17187FA7; /* 0x17187F8D: jae 0x17187fa7 */
L_17187F8F:
    PUSH32(esp, esi); /* 0x17187F8F: push esi */
L_17187F90:
    eax = MEM32(ecx + 0x10); /* 0x17187F90: mov eax, dword ptr [ecx + 0x10] */
    eax = eax + edx * 4; /* 0x17187F93: lea eax, [eax + edx*4] */
    esi = MEM32(eax); /* 0x17187F96: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    esi = esi & MEM32(ebp + 0x10); /* 0x17187F98: and esi, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | MEM32(ebp + 0x14))); _flag_b = (uint32_t)((esi | MEM32(ebp + 0x14)));
    esi = esi | MEM32(ebp + 0x14); /* 0x17187F9B: or esi, dword ptr [ebp + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17187F9E: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x17187F9F: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax) = esi; /* 0x17187FA2: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17187F90; /* 0x17187FA4: jb 0x17187f90 */
L_17187FA6:
    esi = POP32_VAL(esp); /* 0x17187FA6: pop esi */
L_17187FA7:
    ebp = POP32_VAL(esp); /* 0x17187FA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17187FA8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17187FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17187FB0u);

L_17187FB0:
    edi = edi; /* 0x17187FB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17187FB2: push ebp */
    ebp = esp; /* 0x17187FB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x17187FB5: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17187FB8: push ebx */
    PUSH32(esp, esi); /* 0x17187FB9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17187FBA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x17187FBD: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17187FBE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x17187FC0: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x17187FC2: mov ebx, ecx */
    MEM8(ebx + 0xAC) = (uint8_t)(1); /* 0x17187FC4: mov byte ptr [ebx + 0xac], 1 */
    MEM8(ebx + 0xAD) = (uint8_t)(1); /* 0x17187FCB: mov byte ptr [ebx + 0xad], 1 */
    MEM32(ebp + (-0x8)) = edi; /* 0x17187FD2: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x17187FD5: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171882ED; /* 0x17187FD8: je 0x171882ed */
L_17187FDE:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x17187FDE: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171882ED; /* 0x17187FE1: je 0x171882ed */
L_17187FE7:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x17187FE7: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171882ED; /* 0x17187FEA: je 0x171882ed */
L_17187FF0:
    RECOMP_CALL(sub_17186A44); /* 0x17187FF0: call 0x17186a44 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x17187FF5: mov eax, dword ptr [ebx] */
    /* cmp eax, edi */ /* 0x17187FF7: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171882F2; /* 0x17187FF9: jl 0x171882f2 */
L_17187FFF:
    eax = MEM32(esi + 0x4); /* 0x17187FFF: mov eax, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x18); /* 0x17188002: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x17188005: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = ebx + 0x10; /* 0x17188007: lea ecx, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x1718800A: push eax */
    RECOMP_CALL(sub_1718530D); /* 0x1718800B: call 0x1718530d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188010: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171882F2; /* 0x17188012: jl 0x171882f2 */
L_17188018:
    eax = MEM32(esi + 0x4); /* 0x17188018: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1718801B: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = ebx + 0x20; /* 0x1718801D: lea ecx, [ebx + 0x20] */
    PUSH32(esp, eax); /* 0x17188020: push eax */
    RECOMP_CALL(sub_1718530D); /* 0x17188021: call 0x1718530d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188026: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171882F2; /* 0x17188028: jl 0x171882f2 */
L_1718802E:
    _flag_a = (uint32_t)(MEM32(ebx + 0x44)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x44) = MEM32(ebx + 0x44) & 0; /* 0x1718802E: and dword ptr [ebx + 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x4); /* 0x17188032: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x17188035: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = ebx + 0x60; /* 0x17188037: lea ecx, [ebx + 0x60] */
    PUSH32(esp, eax); /* 0x1718803A: push eax */
    RECOMP_CALL(sub_17187E5F); /* 0x1718803B: call 0x17187e5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188040: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171882F2; /* 0x17188042: jl 0x171882f2 */
L_17188048:
    eax = ebp + (-0x8); /* 0x17188048: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1718804B: push eax */
    ecx = ebx + 0x60; /* 0x1718804C: lea ecx, [ebx + 0x60] */
    RECOMP_CALL(sub_17186AB5); /* 0x1718804F: call 0x17186ab5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17188054: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x8; /* 0x17188058: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1718805B: push eax */
    ecx = ebx + 0x10; /* 0x1718805C: lea ecx, [ebx + 0x10] */
    RECOMP_CALL(sub_17184D8F); /* 0x1718805F: call 0x17184d8f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x1C); /* 0x17188064: mov ecx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x74)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x74) = MEM32(ebx + 0x74) & 0; /* 0x17188067: and dword ptr [ebx + 0x74], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x84) = ecx; /* 0x1718806B: mov dword ptr [ebx + 0x84], ecx */
    MEM32(ebx + 0x80) = edi; /* 0x17188071: mov dword ptr [ebx + 0x80], edi */
    eax = MEM32(esi + 0x4); /* 0x17188077: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1718807A: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebx + 0x88) = eax; /* 0x1718807C: mov dword ptr [ebx + 0x88], eax */
    eax = MEM32(ebp + 0x10); /* 0x17188082: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(eax + 0x4); /* 0x17188085: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)((MEM32(ebx + 0x98) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx + 0x98) | 0xFFFFFFFFu));
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) | 0xFFFFFFFFu; /* 0x17188088: or dword ptr [ebx + 0x98], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebx + 0x94) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx + 0x94) | 0xFFFFFFFFu));
    MEM32(ebx + 0x94) = MEM32(ebx + 0x94) | 0xFFFFFFFFu; /* 0x1718808F: or dword ptr [ebx + 0x94], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebx + 0x90) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx + 0x90) | 0xFFFFFFFFu));
    MEM32(ebx + 0x90) = MEM32(ebx + 0x90) | 0xFFFFFFFFu; /* 0x17188096: or dword ptr [ebx + 0x90], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1718809D: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x1718809F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebx + 0xA0) = ecx; /* 0x171880A2: mov dword ptr [ebx + 0xa0], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x171880A8: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x171880AB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xA4) = eax; /* 0x171880AD: mov dword ptr [ebx + 0xa4], eax */
    eax = ebx + 0xA8; /* 0x171880B3: lea eax, [ebx + 0xa8] */
    MEM32(ebx + 0x8C) = edx; /* 0x171880B9: mov dword ptr [ebx + 0x8c], edx */
    MEM32(ebx + 0x9C) = esi; /* 0x171880BF: mov dword ptr [ebx + 0x9c], esi */
    MEM32(eax) = ecx; /* 0x171880C5: mov dword ptr [eax], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171880D2; /* 0x171880C7: je 0x171880d2 */
L_171880C9:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x171880C9: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171880D2; /* 0x171880CD: jne 0x171880d2 */
L_171880CF:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x171880CF: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171880D2:
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x171880D2: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edi; /* 0x171880D5: mov dword ptr [ebp + 0x10], edi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171881F3; /* 0x171880D8: jae 0x171881f3 */
L_171880DE:
    eax = edi + edi * 2; /* 0x171880DE: lea eax, [edi + edi*2] */
    edi = edi + edi * 2; /* 0x171880E1: lea edi, [edi + edi*2] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x171880E4: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x171880E4: shl edi, 2 */
    MEM32(ebp + 0x18) = eax; /* 0x171880E7: mov dword ptr [ebp + 0x18], eax */
    MEM32(ebp + 0x1C) = edi; /* 0x171880EA: mov dword ptr [ebp + 0x1c], edi */
    goto L_171880F2; /* 0x171880ED: jmp 0x171880f2 */
L_171880EF:
    edi = MEM32(ebp + 0x1C); /* 0x171880EF: mov edi, dword ptr [ebp + 0x1c] */
L_171880F2:
    eax = MEM32(ebp + 0x10); /* 0x171880F2: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x80));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x80); /* 0x171880F5: sub eax, dword ptr [ebx + 0x80] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x20); /* 0x171880FB: mov ecx, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x14)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x14)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) | 0xFFFFFFFFu; /* 0x171880FE: or dword ptr [ebp - 0x14], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x18)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x18)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) | 0xFFFFFFFFu; /* 0x17188102: or dword ptr [ebp - 0x18], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x17188106: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718810A: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0xFFFFFFFFu; /* 0x1718810E: or dword ptr [ebp - 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + eax * 4) = eax; /* 0x17188112: mov dword ptr [ecx + eax*4], eax */
    MEM32(ebp + 0x8) = 1; /* 0x17188115: mov dword ptr [ebp + 8], 1 */
    MEM32(ebp + 0xC) = edi; /* 0x1718811C: mov dword ptr [ebp + 0xc], edi */
L_1718811F:
    eax = MEM32(ebp + 0x8); /* 0x1718811F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 3); /* 0x17188122: push 3 */
    esi = POP32_VAL(esp); /* 0x17188124: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17188125: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x17188127: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebx + 0x80); /* 0x17188129: mov ecx, dword ptr [ebx + 0x80] */
    edi = MEM32(ebx + 0x9C); /* 0x1718812F: mov edi, dword ptr [ebx + 0x9c] */
    eax = MEM32(edi); /* 0x17188135: mov eax, dword ptr [edi] */
    esi = edx; /* 0x17188137: mov esi, edx */
    edx = MEM32(ebp + 0x10); /* 0x17188139: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x18); /* 0x1718813C: add esi, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1718813F: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x17188141: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x17188144: push edx */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x17188145: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x17188145: shl esi, 2 */
    PUSH32(esp, MEM32(esi + eax)); /* 0x17188148: push dword ptr [esi + eax] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x1718814B: push dword ptr [ecx + eax] */
    ecx = ebp + (-0x28); /* 0x1718814E: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_17186D57); /* 0x17188151: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    edi = MEM32(edi); /* 0x17188156: mov edi, dword ptr [edi] */
    eax = MEM32(ebp + 0xC); /* 0x17188158: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + edi); /* 0x1718815B: mov eax, dword ptr [eax + edi] */
    /* cmp eax, MEM32(esi + edi) */ /* 0x1718815E: cmp eax, dword ptr [esi + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + 0x14; /* 0x17188161: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x17188164: push eax */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17188165: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x17188167: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x28); /* 0x1718816B: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1718816E: push eax */
    ecx = ebx; /* 0x1718816F: mov ecx, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17188171: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_17187DA9); /* 0x17188172: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188177: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17188198; /* 0x17188179: je 0x17188198 */
L_1718817B:
    eax = MEM32(ebp + 0x14); /* 0x1718817B: mov eax, dword ptr [ebp + 0x14] */
    esi = eax + esi * 4 + 0x10; /* 0x1718817E: lea esi, [eax + esi*4 + 0x10] */
    /* cmp MEM32(esi), 0xFFFFFFFFu */ /* 0x17188182: cmp dword ptr [esi], -1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171882ED; /* 0x17188185: jne 0x171882ed */
L_1718818B:
    eax = MEM32(ebp + 0x10); /* 0x1718818B: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x80));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x80); /* 0x1718818E: sub eax, dword ptr [ebx + 0x80] */
    _flag_k = FK_CMP;
    MEM32(esi) = eax; /* 0x17188194: mov dword ptr [esi], eax */
    goto L_171881C2; /* 0x17188196: jmp 0x171881c2 */
L_17188198:
    PUSH32(esp, 0x20u); /* 0x17188198: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x1718819A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718819F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171881A1: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171881B0; /* 0x171881A2: je 0x171881b0 */
L_171881A4:
    PUSH32(esp, 8); /* 0x171881A4: push 8 */
    ecx = POP32_VAL(esp); /* 0x171881A6: pop ecx */
    esi = ebp + (-0x28); /* 0x171881A7: lea esi, [ebp - 0x28] */
    edi = eax; /* 0x171881AA: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171881AC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_171881B2; /* 0x171881AE: jmp 0x171881b2 */
L_171881B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171881B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171881B2:
    PUSH32(esp, eax); /* 0x171881B2: push eax */
    ecx = ebx; /* 0x171881B3: mov ecx, ebx */
    RECOMP_CALL(sub_17187D3C); /* 0x171881B5: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171881BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171882F2; /* 0x171881BC: jl 0x171882f2 */
L_171881C2:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4; /* 0x171881C2: add dword ptr [ebp + 0xc], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x171881C6: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x171881C9: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171881CC: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 3 */ /* 0x171881CD: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718811F; /* 0x171881D0: jb 0x1718811f */
L_171881D6:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x171881D6: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebx + 0x9C); /* 0x171881D9: mov eax, dword ptr [ebx + 0x9c] */
    ecx = MEM32(ebp + 0x10); /* 0x171881DF: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 3; /* 0x171881E2: add dword ptr [ebp + 0x18], 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 0xCu; /* 0x171881E6: add dword ptr [ebp + 0x1c], 0xc */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x171881EA: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171880EF; /* 0x171881ED: jb 0x171880ef */
L_171881F3:
    PUSH32(esp, MEM32(ebx + 0x8C)); /* 0x171881F3: push dword ptr [ebx + 0x8c] */
    esi = ebx + 0x30; /* 0x171881F9: lea esi, [ebx + 0x30] */
    ecx = esi; /* 0x171881FC: mov ecx, esi */
    RECOMP_CALL(sub_1718530D); /* 0x171881FE: call 0x1718530d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17188203: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x17188205: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171882F2; /* 0x17188207: jl 0x171882f2 */
L_1718820D:
    eax = MEM32(ebp + 0x20); /* 0x1718820D: mov eax, dword ptr [ebp + 0x20] */
    /* cmp eax, edi */ /* 0x17188210: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17188235; /* 0x17188212: jne 0x17188235 */
L_17188214:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17188214: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8C), edi */ /* 0x17188216: cmp dword ptr [ebx + 0x8c], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171882E3; /* 0x1718821C: jbe 0x171882e3 */
L_17188222:
    ecx = MEM32(esi); /* 0x17188222: mov ecx, dword ptr [esi] */
    MEM32(ecx + eax * 4) = eax; /* 0x17188224: mov dword ptr [ecx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17188227: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebx + 0x8C) */ /* 0x17188228: cmp eax, dword ptr [ebx + 0x8c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17188222; /* 0x1718822E: jb 0x17188222 */
L_17188230:
    goto L_171882E3; /* 0x17188230: jmp 0x171882e3 */
L_17188235:
    ecx = MEM32(ebx + 0x8C); /* 0x17188235: mov ecx, dword ptr [ebx + 0x8c] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x1718823B: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test ecx, ecx */ /* 0x1718823D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17188295; /* 0x1718823F: jbe 0x17188295 */
L_17188241:
    esi = MEM32(eax + edi * 4); /* 0x17188241: mov esi, dword ptr [eax + edi*4] */
    /* cmp esi, edi */ /* 0x17188244: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718825F; /* 0x17188246: je 0x1718825f */
L_17188248:
    /* cmp esi, ecx */ /* 0x17188248: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171882ED; /* 0x1718824A: ja 0x171882ed */
L_17188250:
    /* cmp esi, edi */ /* 0x17188250: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17188256; /* 0x17188252: jbe 0x17188256 */
L_17188254:
    SET_LO8(edx, 1); /* 0x17188254: mov dl, 1 */
L_17188256:
    /* cmp MEM32(eax + esi * 4), esi */ /* 0x17188256: cmp dword ptr [eax + esi*4], esi */
    _flag_a = (uint32_t)(MEM32(eax + esi * 4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171882ED; /* 0x17188259: jne 0x171882ed */
L_1718825F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1718825F: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebx + 0x8C) */ /* 0x17188260: cmp edi, dword ptr [ebx + 0x8c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x8C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17188241; /* 0x17188266: jb 0x17188241 */
L_17188268:
    /* test LO8(edx), LO8(edx) */ /* 0x17188268: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17188295; /* 0x1718826A: je 0x17188295 */
L_1718826C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718826C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718826E:
    edx = MEM32(eax + ecx * 4); /* 0x1718826E: mov edx, dword ptr [eax + ecx*4] */
    /* cmp edx, ecx */ /* 0x17188271: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718828C; /* 0x17188273: je 0x1718828c */
L_17188275:
    esi = eax + edx * 4; /* 0x17188275: lea esi, [eax + edx*4] */
    edi = MEM32(esi); /* 0x17188278: mov edi, dword ptr [esi] */
    /* cmp edi, edx */ /* 0x1718827A: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17188283; /* 0x1718827C: je 0x17188283 */
L_1718827E:
    MEM32(eax + ecx * 4) = edi; /* 0x1718827E: mov dword ptr [eax + ecx*4], edi */
    goto L_1718828C; /* 0x17188281: jmp 0x1718828c */
L_17188283:
    /* cmp edx, ecx */ /* 0x17188283: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718828C; /* 0x17188285: jbe 0x1718828c */
L_17188287:
    MEM32(esi) = ecx; /* 0x17188287: mov dword ptr [esi], ecx */
    MEM32(eax + ecx * 4) = ecx; /* 0x17188289: mov dword ptr [eax + ecx*4], ecx */
L_1718828C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718828C: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebx + 0x8C) */ /* 0x1718828D: cmp ecx, dword ptr [ebx + 0x8c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718826E; /* 0x17188293: jb 0x1718826e */
L_17188295:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17188295: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8C), ecx */ /* 0x17188297: cmp dword ptr [ebx + 0x8c], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171882B1; /* 0x1718829D: jbe 0x171882b1 */
L_1718829F:
    esi = MEM32(eax + ecx * 4); /* 0x1718829F: mov esi, dword ptr [eax + ecx*4] */
    edx = MEM32(ebx + 0x30); /* 0x171882A2: mov edx, dword ptr [ebx + 0x30] */
    MEM32(edx + ecx * 4) = esi; /* 0x171882A5: mov dword ptr [edx + ecx*4], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171882A8: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebx + 0x8C) */ /* 0x171882A9: cmp ecx, dword ptr [ebx + 0x8c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718829F; /* 0x171882AF: jb 0x1718829f */
L_171882B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171882B1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8C), ecx */ /* 0x171882B3: cmp dword ptr [ebx + 0x8c], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171882E3; /* 0x171882B9: jbe 0x171882e3 */
L_171882BB:
    edx = MEM32(ebx + 0x30); /* 0x171882BB: mov edx, dword ptr [ebx + 0x30] */
    esi = edx + ecx * 4; /* 0x171882BE: lea esi, [edx + ecx*4] */
    /* cmp MEM32(esi), ecx */ /* 0x171882C1: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171882DA; /* 0x171882C3: je 0x171882da */
L_171882C5:
    eax = eax + ecx * 4; /* 0x171882C5: lea eax, [eax + ecx*4] */
    edi = MEM32(eax); /* 0x171882C8: mov edi, dword ptr [eax] */
    edx = MEM32(edx + edi * 4); /* 0x171882CA: mov edx, dword ptr [edx + edi*4] */
    MEM32(esi) = edx; /* 0x171882CD: mov dword ptr [esi], edx */
    eax = MEM32(eax); /* 0x171882CF: mov eax, dword ptr [eax] */
    edx = MEM32(ebx + 0x30); /* 0x171882D1: mov edx, dword ptr [ebx + 0x30] */
    MEM32(edx + eax * 4) = ecx; /* 0x171882D4: mov dword ptr [edx + eax*4], ecx */
    eax = MEM32(ebp + 0x20); /* 0x171882D7: mov eax, dword ptr [ebp + 0x20] */
L_171882DA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171882DA: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebx + 0x8C) */ /* 0x171882DB: cmp ecx, dword ptr [ebx + 0x8c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171882BB; /* 0x171882E1: jb 0x171882bb */
L_171882E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171882E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebx + 0xAD) = (uint8_t)(LO8(eax)); /* 0x171882E5: mov byte ptr [ebx + 0xad], al */
    goto L_171882F2; /* 0x171882EB: jmp 0x171882f2 */
L_171882ED:
    eax = 0x8876086Cu; /* 0x171882ED: mov eax, 0x8876086c */
L_171882F2:
    edi = POP32_VAL(esp); /* 0x171882F2: pop edi */
    esi = POP32_VAL(esp); /* 0x171882F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x171882F4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171882F5: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x171882F6: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_171882FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171882FEu);

L_171882FE:
    edi = edi; /* 0x171882FE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17188300: push ebp */
    ebp = esp; /* 0x17188301: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x17188303: sub esp, 0x24 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) | 0xFFFFFFFFu; /* 0x17188306: or dword ptr [ebp - 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x14)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x14)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) | 0xFFFFFFFFu; /* 0x1718830A: or dword ptr [ebp - 0x14], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) | 0xFFFFFFFFu; /* 0x1718830E: or dword ptr [ebp - 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17188312: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17188314: push esi */
    PUSH32(esp, eax); /* 0x17188315: push eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x17188316: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x17188319: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1718831C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1718831F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x17188322: push dword ptr [eax + 4] */
    esi = ecx; /* 0x17188325: mov esi, ecx */
    PUSH32(esp, MEM32(eax)); /* 0x17188327: push dword ptr [eax] */
    ecx = ebp + (-0x24); /* 0x17188329: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_17186D57); /* 0x1718832C: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4); /* 0x17188331: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17188334: push eax */
    eax = ebp + (-0x24); /* 0x17188335: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x17188338: push eax */
    ecx = esi; /* 0x17188339: mov ecx, esi */
    RECOMP_CALL(sub_17187DA9); /* 0x1718833B: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x17188340: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0xC); /* 0x17188343: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x1C) = ecx; /* 0x17188346: mov dword ptr [eax + 0x1c], ecx */
    ecx = MEM32(eax + 0x10); /* 0x17188349: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1718834C: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718835A; /* 0x1718834F: je 0x1718835a */
L_17188351:
    edx = MEM32(esi + 0x10); /* 0x17188351: mov edx, dword ptr [esi + 0x10] */
    ecx = edx + ecx * 4; /* 0x17188354: lea ecx, [edx + ecx*4] */
    _flag_a = (uint32_t)((MEM32(ecx) | 4)); _flag_b = (uint32_t)((MEM32(ecx) | 4));
    MEM32(ecx) = MEM32(ecx) | 4; /* 0x17188357: or dword ptr [ecx], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718835A:
    ecx = MEM32(eax + 0x14); /* 0x1718835A: mov ecx, dword ptr [eax + 0x14] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1718835D: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718836B; /* 0x17188360: je 0x1718836b */
L_17188362:
    edx = MEM32(esi + 0x10); /* 0x17188362: mov edx, dword ptr [esi + 0x10] */
    ecx = edx + ecx * 4; /* 0x17188365: lea ecx, [edx + ecx*4] */
    _flag_a = (uint32_t)((MEM32(ecx) | 4)); _flag_b = (uint32_t)((MEM32(ecx) | 4));
    MEM32(ecx) = MEM32(ecx) | 4; /* 0x17188368: or dword ptr [ecx], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718836B:
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0xFFFFFFFBu; /* 0x1718836B: and dword ptr [eax + 0x18], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1718836F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17188370: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17188371: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17188379(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17188379u);

L_17188379:
    edi = edi; /* 0x17188379: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718837B: push ebp */
    ebp = esp; /* 0x1718837C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1718837E: sub esp, 0x24 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) | 0xFFFFFFFFu; /* 0x17188381: or dword ptr [ebp - 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x14)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x14)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) | 0xFFFFFFFFu; /* 0x17188385: or dword ptr [ebp - 0x14], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x17188389: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1718838D: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) | 0xFFFFFFFFu; /* 0x17188391: or dword ptr [ebp - 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17188395: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17188396: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17188399: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718839C: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x24); /* 0x1718839F: lea ecx, [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171883A2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17186D57); /* 0x171883A5: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x171883AA: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x171883AC: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171883B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171883B3: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171883C4; /* 0x171883B4: je 0x171883c4 */
L_171883B6:
    PUSH32(esp, edi); /* 0x171883B6: push edi */
    PUSH32(esp, 8); /* 0x171883B7: push 8 */
    ecx = POP32_VAL(esp); /* 0x171883B9: pop ecx */
    esi = ebp + (-0x24); /* 0x171883BA: lea esi, [ebp - 0x24] */
    edi = eax; /* 0x171883BD: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171883BF: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171883C1: pop edi */
    goto L_171883C6; /* 0x171883C2: jmp 0x171883c6 */
L_171883C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171883C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171883C6:
    esi = MEM32(ebp + 0x1C); /* 0x171883C6: mov esi, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171883C9: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x171883CC: push eax */
    MEM32(esi) = eax; /* 0x171883CD: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_17187D3C); /* 0x171883CF: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171883D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171883F7; /* 0x171883D6: jl 0x171883f7 */
L_171883D8:
    edx = MEM32(ebp + 0x18); /* 0x171883D8: mov edx, dword ptr [ebp + 0x18] */
    ecx = MEM32(esi); /* 0x171883DB: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = edx; /* 0x171883DD: mov dword ptr [ecx + 0x18], edx */
    edx = MEM32(ebp + 0x14); /* 0x171883E0: mov edx, dword ptr [ebp + 0x14] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x171883E3: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171883F7; /* 0x171883E6: je 0x171883f7 */
L_171883E8:
    ecx = MEM32(ebp + 0x8); /* 0x171883E8: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x171883EB: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(esi); /* 0x171883EE: mov esi, dword ptr [esi] */
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171883F0: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171883F2: inc ecx */
    _flag_k = FK_INC;
    MEM32(esi + ecx * 4 + 0x10) = edx; /* 0x171883F3: mov dword ptr [esi + ecx*4 + 0x10], edx */
L_171883F7:
    esi = POP32_VAL(esp); /* 0x171883F7: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171883F8: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171883F9: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17188401(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17188401u);

L_17188401:
    edi = edi; /* 0x17188401: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17188403: push ebp */
    ebp = esp; /* 0x17188404: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17188406: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x17188409: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1718840C: push ebx */
    PUSH32(esp, esi); /* 0x1718840D: push esi */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718840E: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x17188411: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x17188414: push edi */
    MEM32(ebp + (-0x8)) = eax; /* 0x17188415: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x17188418: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1718841B: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1718841E: mov dword ptr [ebp - 4], eax */
    edi = esp; /* 0x17188421: mov edi, esp */
    esi = ebp + (-0xC); /* 0x17188423: lea esi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188426: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188427: movsd dword ptr es:[edi], dword ptr [esi] */
    ebx = ecx; /* 0x17188428: mov ebx, ecx */
    ecx = MEM32(ebx + 0x9C); /* 0x1718842A: mov ecx, dword ptr [ebx + 0x9c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188430: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17187E86); /* 0x17188431: call 0x17187e86 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188436: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188461; /* 0x17188438: jl 0x17188461 */
L_1718843A:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718843A: push dword ptr [ebp + 0x18] */
    ecx = ebx + 0x10; /* 0x1718843D: lea ecx, [ebx + 0x10] */
    RECOMP_CALL(sub_17175CCD); /* 0x17188440: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188445: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188461; /* 0x17188447: jl 0x17188461 */
L_17188449:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17188449: push dword ptr [ebp + 0x14] */
    ecx = ebx + 0x20; /* 0x1718844C: lea ecx, [ebx + 0x20] */
    RECOMP_CALL(sub_17175CCD); /* 0x1718844F: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188454: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188461; /* 0x17188456: jl 0x17188461 */
L_17188458:
    ecx = MEM32(ebx + 0x24); /* 0x17188458: mov ecx, dword ptr [ebx + 0x24] */
    edx = MEM32(ebp + 0x1C); /* 0x1718845B: mov edx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1718845E: dec ecx */
    _flag_k = FK_DEC;
    MEM32(edx) = ecx; /* 0x1718845F: mov dword ptr [edx], ecx */
L_17188461:
    edi = POP32_VAL(esp); /* 0x17188461: pop edi */
    esi = POP32_VAL(esp); /* 0x17188462: pop esi */
    ebx = POP32_VAL(esp); /* 0x17188463: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17188464: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17188465: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1718846D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718846Du);

L_1718846D:
    edi = edi; /* 0x1718846D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718846F: push ebp */
    ebp = esp; /* 0x17188470: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x17188472: sub esp, 0x48 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x18); /* 0x17188475: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x17188478: push ebx */
    PUSH32(esp, esi); /* 0x17188479: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1718847A: mov esi, dword ptr [ebp + 0x10] */
    ebx = ecx; /* 0x1718847D: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718847F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x17188481: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x14); /* 0x17188483: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = ecx; /* 0x17188486: mov dword ptr [eax], ecx */
    PUSH32(esp, edi); /* 0x17188488: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17188489: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1718848B: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, 2); /* 0x1718848C: push 2 */
    eax = POP32_VAL(esp); /* 0x1718848E: pop eax */
    MEM32(esi + 0x8) = eax; /* 0x1718848F: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0x14) = eax; /* 0x17188492: mov dword ptr [esi + 0x14], eax */
    MEM32(esi) = ecx; /* 0x17188495: mov dword ptr [esi], ecx */
    MEM32(esi + 0x4) = edi; /* 0x17188497: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0xC) = ecx; /* 0x1718849A: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = edi; /* 0x1718849D: mov dword ptr [esi + 0x10], edi */
    eax = MEM32(ebx + 0x80); /* 0x171884A0: mov eax, dword ptr [ebx + 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x171884A6: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + 0x9C); /* 0x171884A9: mov edx, dword ptr [ebx + 0x9c] */
    edx = MEM32(edx); /* 0x171884AF: mov edx, dword ptr [edx] */
    eax = eax + eax * 2; /* 0x171884B1: lea eax, [eax + eax*2] */
    edx = edx + eax * 4; /* 0x171884B4: lea edx, [edx + eax*4] */
    eax = MEM32(ebp + 0xC); /* 0x171884B7: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = edx; /* 0x171884BA: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax; /* 0x171884BD: sub dword ptr [ebp + 0x10], eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = edx; /* 0x171884C0: mov dword ptr [ebp - 0x14], edx */
    edx = ebp + (-0x28); /* 0x171884C3: lea edx, [ebp - 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x171884C6: sub edx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ecx; /* 0x171884C8: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171884CB: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x171884CE: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x18)) = edx; /* 0x171884D1: mov dword ptr [ebp - 0x18], edx */
    goto L_171884D8; /* 0x171884D4: jmp 0x171884d8 */
L_171884D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171884D6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171884D8:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171884D8: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x34)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x34)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) | 0xFFFFFFFFu; /* 0x171884DB: or dword ptr [ebp - 0x34], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x38)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x38)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) | 0xFFFFFFFFu; /* 0x171884DF: or dword ptr [ebp - 0x38], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x2C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x2C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) | 0xFFFFFFFFu; /* 0x171884E3: or dword ptr [ebp - 0x2c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x171884E7: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171884EA: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x171884EB: push 3 */
    MEM32(ebp + (-0x44)) = ecx; /* 0x171884ED: mov dword ptr [ebp - 0x44], ecx */
    MEM32(ebp + (-0x30)) = ecx; /* 0x171884F0: mov dword ptr [ebp - 0x30], ecx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171884F3: mov dword ptr [ebp - 0x10], ecx */
    ecx = POP32_VAL(esp); /* 0x171884F6: pop ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171884F7: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171884FA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171884FC: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + (-0x14)); /* 0x171884FE: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x8)); /* 0x17188501: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + edx * 4)); /* 0x17188504: push dword ptr [eax + edx*4] */
    eax = MEM32(ebp + 0x10); /* 0x17188507: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(eax + ecx)); /* 0x1718850A: push dword ptr [eax + ecx] */
    ecx = ebp + (-0x48); /* 0x1718850D: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_17186D57); /* 0x17188510: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x17188515: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x17188518: push eax */
    eax = ebp + (-0x48); /* 0x17188519: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1718851C: push eax */
    ecx = ebx; /* 0x1718851D: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x1718851F: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x17188524: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x8)); /* 0x17188527: mov edx, dword ptr [ebp - 8] */
    MEM32(edx) = eax; /* 0x1718852A: mov dword ptr [edx], eax */
    /* cmp MEM32(eax + 0x1C), 0xFFFFFFFFu */ /* 0x1718852C: cmp dword ptr [eax + 0x1c], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17188547; /* 0x17188530: je 0x17188547 */
L_17188532:
    ecx = MEM32(ebp + (-0x4)); /* 0x17188532: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x17188535: mov eax, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17188537: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x17188537: shl eax, cl */
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | eax));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | eax; /* 0x17188539: or dword ptr [ebp - 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x18); /* 0x1718853C: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1718853F: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x18)); /* 0x17188541: mov eax, dword ptr [ebp - 0x18] */
    MEM32(eax + edx) = edi; /* 0x17188544: mov dword ptr [eax + edx], edi */
L_17188547:
    eax = MEM32(ebp + (-0x1C)); /* 0x17188547: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1718854A: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x1718854D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x17188550: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x17188553: mov dword ptr [ebp - 8], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171884D6; /* 0x17188556: jb 0x171884d6 */
L_1718855C:
    eax = MEM32(ebp + (-0xC)); /* 0x1718855C: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1718855F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1718861A; /* 0x17188560: je 0x1718861a */
L_17188566:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17188566: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17188610; /* 0x17188567: je 0x17188610 */
L_1718856D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1718856D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17188605; /* 0x1718856E: je 0x17188605 */
L_17188574:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17188574: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171885A1; /* 0x17188575: je 0x171885a1 */
L_17188577:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17188577: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17188596; /* 0x17188578: je 0x17188596 */
L_1718857A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1718857A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1718858B; /* 0x1718857B: je 0x1718858b */
L_1718857D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1718857D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171885FE; /* 0x1718857E: jne 0x171885fe */
L_17188580:
    eax = MEM32(ebp + 0x14); /* 0x17188580: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = 7; /* 0x17188583: mov dword ptr [eax], 7 */
    goto L_171885FE; /* 0x17188589: jmp 0x171885fe */
L_1718858B:
    eax = MEM32(ebp + 0x14); /* 0x1718858B: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = 3; /* 0x1718858E: mov dword ptr [eax], 3 */
    goto L_17188615; /* 0x17188594: jmp 0x17188615 */
L_17188596:
    eax = MEM32(ebp + 0x14); /* 0x17188596: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = 3; /* 0x17188599: mov dword ptr [eax], 3 */
    goto L_171885A6; /* 0x1718859F: jmp 0x171885a6 */
L_171885A1:
    eax = MEM32(ebp + 0x14); /* 0x171885A1: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = edi; /* 0x171885A4: mov dword ptr [eax], edi */
L_171885A6:
    MEM32(ebp + 0x14) = 2; /* 0x171885A6: mov dword ptr [ebp + 0x14], 2 */
L_171885AD:
    eax = MEM32(ebp + 0xC); /* 0x171885AD: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x171885B0: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171885B4: sub eax, esi */
    _flag_k = FK_CMP;
    ebx = ebp + (-0x28); /* 0x171885B6: lea ebx, [ebp - 0x28] */
    ecx = esi; /* 0x171885B9: mov ecx, esi */
    MEM32(ebp + 0x18) = eax; /* 0x171885BB: mov dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x171885BE: sub ebx, esi */
    _flag_k = FK_CMP;
L_171885C0:
    eax = MEM32(ebp + 0x8); /* 0x171885C0: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x14); /* 0x171885C3: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171885C6: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171885C8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x171885CA: push 3 */
    edi = POP32_VAL(esp); /* 0x171885CC: pop edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x171885CD: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + 0x18); /* 0x171885CF: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x171885D2: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    MEM32(ecx + 0xC) = edx; /* 0x171885D5: mov dword ptr [ecx + 0xc], edx */
    MEM32(ecx) = edx; /* 0x171885D8: mov dword ptr [ecx], edx */
    eax = MEM32(eax + ecx); /* 0x171885DA: mov eax, dword ptr [eax + ecx] */
    MEM32(ebx + ecx) = eax; /* 0x171885DD: mov dword ptr [ebx + ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171885E0: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x171885E3: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171885C0; /* 0x171885E6: jb 0x171885c0 */
L_171885E8:
    eax = MEM32(ebp + 0xC); /* 0x171885E8: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171885EB: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x171885EC: sub esi, eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171885EE: pop ecx */
L_171885EF:
    edx = MEM32(esi + eax); /* 0x171885EF: mov edx, dword ptr [esi + eax] */
    edx = MEM32(ebp + edx * 4 + (-0x28)); /* 0x171885F2: mov edx, dword ptr [ebp + edx*4 - 0x28] */
    MEM32(eax) = edx; /* 0x171885F6: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171885F8: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171885FB: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171885EF; /* 0x171885FC: jne 0x171885ef */
L_171885FE:
    edi = POP32_VAL(esp); /* 0x171885FE: pop edi */
    esi = POP32_VAL(esp); /* 0x171885FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x17188600: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17188601: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17188602: ret 0x14 */
L_17188605:
    eax = MEM32(ebp + 0x14); /* 0x17188605: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = 3; /* 0x17188608: mov dword ptr [eax], 3 */
    RECOMP_BACKEDGE();
    goto L_171885FE; /* 0x1718860E: jmp 0x171885fe */
L_17188610:
    eax = MEM32(ebp + 0x14); /* 0x17188610: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = edi; /* 0x17188613: mov dword ptr [eax], edi */
L_17188615:
    MEM32(ebp + 0x14) = edi; /* 0x17188615: mov dword ptr [ebp + 0x14], edi */
    RECOMP_BACKEDGE();
    goto L_171885AD; /* 0x17188618: jmp 0x171885ad */
L_1718861A:
    eax = MEM32(ebp + 0x14); /* 0x1718861A: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = edi; /* 0x1718861D: mov dword ptr [eax], edi */
    RECOMP_BACKEDGE();
    goto L_171885FE; /* 0x1718861F: jmp 0x171885fe */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17188626(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17188626u);

L_17188626:
    edi = edi; /* 0x17188626: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17188628: push ebp */
    ebp = esp; /* 0x17188629: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1718862B: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718862E: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1718862F: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x17188632: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x80); /* 0x17188635: mov eax, dword ptr [ecx + 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x1718863B: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718863E: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ecx + 0x9C); /* 0x17188641: mov ecx, dword ptr [ecx + 0x9c] */
    ecx = MEM32(ecx); /* 0x17188647: mov ecx, dword ptr [ecx] */
    eax = eax + eax * 2; /* 0x17188649: lea eax, [eax + eax*2] */
    ecx = ecx + eax * 4; /* 0x1718864C: lea ecx, [ecx + eax*4] */
    PUSH32(esp, esi); /* 0x1718864F: push esi */
    esi = ebp + (-0x24); /* 0x17188650: lea esi, [ebp - 0x24] */
    MEM32(ebp + 0x10) = ecx; /* 0x17188653: mov dword ptr [ebp + 0x10], ecx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x17188656: mov dword ptr [ebp - 0x14], ecx */
    ecx = esi; /* 0x17188659: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718865B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - ecx; /* 0x1718865D: sub dword ptr [ebp + 0x10], ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17188660: push edi */
L_17188661:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17188661: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x17188663: push ecx */
    edi = eax + 0x1; /* 0x17188664: lea edi, [eax + 1] */
    PUSH32(esp, 3); /* 0x17188667: push 3 */
    MEM32(ebp + (-0x40)) = ecx; /* 0x17188669: mov dword ptr [ebp - 0x40], ecx */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1718866C: mov dword ptr [ebp - 0x2c], ecx */
    ecx = POP32_VAL(esp); /* 0x1718866F: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17188670: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x17188672: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x17188674: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + (-0x14)); /* 0x17188676: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x30)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x30)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) | 0xFFFFFFFFu; /* 0x17188679: or dword ptr [ebp - 0x30], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x34)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x34)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) | 0xFFFFFFFFu; /* 0x1718867D: or dword ptr [ebp - 0x34], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x28)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x28)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) | 0xFFFFFFFFu; /* 0x17188681: or dword ptr [ebp - 0x28], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x17188685: lea ecx, [ebp - 0x44] */
    PUSH32(esp, MEM32(eax + edx * 4)); /* 0x17188688: push dword ptr [eax + edx*4] */
    eax = MEM32(ebp + 0x10); /* 0x1718868B: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(eax + esi)); /* 0x1718868E: push dword ptr [eax + esi] */
    RECOMP_CALL(sub_17186D57); /* 0x17188691: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x17188696: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x17188699: push esi */
    eax = ebp + (-0x44); /* 0x1718869A: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1718869D: push eax */
    RECOMP_CALL(sub_17187DA9); /* 0x1718869E: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x171886A3: mov eax, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171886A5: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x171886A8: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17188661; /* 0x171886AB: jb 0x17188661 */
L_171886AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171886AD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x171886AF: mov dword ptr [ebp - 0x10], edi */
L_171886B2:
    eax = MEM32(ebp + edi * 4 + (-0x24)); /* 0x171886B2: mov eax, dword ptr [ebp + edi*4 - 0x24] */
    ecx = MEM32(eax + 0x1C); /* 0x171886B6: mov ecx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x30)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x30)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) | 0xFFFFFFFFu; /* 0x171886B9: or dword ptr [ebp - 0x30], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x34)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x34)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) | 0xFFFFFFFFu; /* 0x171886BD: or dword ptr [ebp - 0x34], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x28)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x28)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) | 0xFFFFFFFFu; /* 0x171886C1: or dword ptr [ebp - 0x28], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171886C5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edx */ /* 0x171886C7: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edx; /* 0x171886C9: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x40)) = edx; /* 0x171886CC: mov dword ptr [ebp - 0x40], edx */
    MEM32(ebp + (-0x2C)) = edx; /* 0x171886CF: mov dword ptr [ebp - 0x2c], edx */
    if (CMP_L(_flag_a, _flag_b)) goto L_17188809; /* 0x171886D2: jl 0x17188809 */
L_171886D8:
    PUSH32(esp, edx); /* 0x171886D8: push edx */
    PUSH32(esp, 3); /* 0x171886D9: push 3 */
    esi = POP32_VAL(esp); /* 0x171886DB: pop esi */
    eax = edi + 0x2; /* 0x171886DC: lea eax, [edi + 2] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x171886DF: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + (-0x14)); /* 0x171886E1: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(eax + edx * 4)); /* 0x171886E4: push dword ptr [eax + edx*4] */
    PUSH32(esp, ecx); /* 0x171886E7: push ecx */
    ecx = ebp + (-0x44); /* 0x171886E8: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_17186D57); /* 0x171886EB: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x171886F0: mov ecx, dword ptr [ebp - 4] */
    eax = ebp + (-0x8); /* 0x171886F3: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171886F6: push eax */
    eax = ebp + (-0x44); /* 0x171886F7: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x171886FA: push eax */
    RECOMP_CALL(sub_17187DA9); /* 0x171886FB: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188700: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17188760; /* 0x17188702: je 0x17188760 */
L_17188704:
    eax = MEM32(ebp + (-0x8)); /* 0x17188704: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x17188707: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x1718870A: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x18)) = 2; /* 0x1718870D: mov dword ptr [ebp - 0x18], 2 */
L_17188714:
    eax = MEM32(ebp + (-0xC)); /* 0x17188714: mov eax, dword ptr [ebp - 0xc] */
    eax = MEM32(eax); /* 0x17188717: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x17188719: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x13) = (uint8_t)(0); /* 0x1718871B: mov byte ptr [ebp + 0x13], 0 */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188757; /* 0x1718871F: jl 0x17188757 */
L_17188721:
    ecx = MEM32(ebp + (-0x4)); /* 0x17188721: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x17188724: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17188725: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17186F84); /* 0x17188728: call 0x17186f84 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x1718872D: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718872F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x17188731: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718874F; /* 0x17188733: jbe 0x1718874f */
L_17188735:
    esi = MEM32(ebp + 0xC); /* 0x17188735: mov esi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(esi + edx * 4), eax */ /* 0x17188738: cmp dword ptr [esi + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(esi + edx * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17188744; /* 0x1718873B: jne 0x17188744 */
L_1718873D:
    PUSH32(esp, 4); /* 0x1718873D: push 4 */
    MEM8(ebp + 0x13) = (uint8_t)(1); /* 0x1718873F: mov byte ptr [ebp + 0x13], 1 */
    edx = POP32_VAL(esp); /* 0x17188743: pop edx */
L_17188744:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17188744: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebx) */ /* 0x17188745: cmp edx, dword ptr [ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17188735; /* 0x17188747: jb 0x17188735 */
L_17188749:
    /* cmp MEM8(ebp + 0x13), 0 */ /* 0x17188749: cmp byte ptr [ebp + 0x13], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x13)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17188757; /* 0x1718874D: jne 0x17188757 */
L_1718874F:
    edx = MEM32(ebp + 0xC); /* 0x1718874F: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx + ecx * 4) = eax; /* 0x17188752: mov dword ptr [edx + ecx*4], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x17188755: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_17188757:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 4; /* 0x17188757: add dword ptr [ebp - 0xc], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x1718875B: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17188714; /* 0x1718875E: jne 0x17188714 */
L_17188760:
    MEM32(ebp + (-0xC)) = 1; /* 0x17188760: mov dword ptr [ebp - 0xc], 1 */
L_17188767:
    eax = MEM32(ebp + (-0xC)); /* 0x17188767: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1718876A: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x1718876C: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718876E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17188770: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x17188771: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + edx * 4 + (-0x24)); /* 0x17188773: mov eax, dword ptr [ebp + edx*4 - 0x24] */
    eax = MEM32(eax + 0x1C); /* 0x17188777: mov eax, dword ptr [eax + 0x1c] */
    /* test eax, eax */ /* 0x1718877A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171887FC; /* 0x1718877C: jl 0x171887fc */
L_1718877E:
    PUSH32(esp, 0); /* 0x1718877E: push 0 */
    PUSH32(esp, eax); /* 0x17188780: push eax */
    eax = MEM32(ebp + edi * 4 + (-0x24)); /* 0x17188781: mov eax, dword ptr [ebp + edi*4 - 0x24] */
    PUSH32(esp, MEM32(eax + 0x1C)); /* 0x17188785: push dword ptr [eax + 0x1c] */
    ecx = ebp + (-0x44); /* 0x17188788: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_17186D57); /* 0x1718878B: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x17188790: mov ecx, dword ptr [ebp - 4] */
    eax = ebp + (-0x8); /* 0x17188793: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x17188796: push eax */
    eax = ebp + (-0x44); /* 0x17188797: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1718879A: push eax */
    RECOMP_CALL(sub_17187DA9); /* 0x1718879B: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171887A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171887FC; /* 0x171887A2: je 0x171887fc */
L_171887A4:
    esi = MEM32(ebp + (-0x8)); /* 0x171887A4: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x171887A7: add esi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = 2; /* 0x171887AA: mov dword ptr [ebp - 0x18], 2 */
L_171887B1:
    eax = MEM32(esi); /* 0x171887B1: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x171887B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x13) = (uint8_t)(0); /* 0x171887B5: mov byte ptr [ebp + 0x13], 0 */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171887F4; /* 0x171887B9: jl 0x171887f4 */
L_171887BB:
    ecx = MEM32(ebp + (-0x4)); /* 0x171887BB: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x171887BE: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171887BF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17186F84); /* 0x171887C2: call 0x17186f84 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x171887C7: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171887C9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171887CB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171887EC; /* 0x171887CD: jbe 0x171887ec */
L_171887CF:
    edi = MEM32(ebp + 0xC); /* 0x171887CF: mov edi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(edi + edx * 4), eax */ /* 0x171887D2: cmp dword ptr [edi + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(edi + edx * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171887DE; /* 0x171887D5: jne 0x171887de */
L_171887D7:
    PUSH32(esp, 4); /* 0x171887D7: push 4 */
    MEM8(ebp + 0x13) = (uint8_t)(1); /* 0x171887D9: mov byte ptr [ebp + 0x13], 1 */
    edx = POP32_VAL(esp); /* 0x171887DD: pop edx */
L_171887DE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171887DE: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebx) */ /* 0x171887DF: cmp edx, dword ptr [ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171887CF; /* 0x171887E1: jb 0x171887cf */
L_171887E3:
    /* cmp MEM8(ebp + 0x13), 0 */ /* 0x171887E3: cmp byte ptr [ebp + 0x13], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x13)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(ebp + (-0x10)); /* 0x171887E7: mov edi, dword ptr [ebp - 0x10] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171887F4; /* 0x171887EA: jne 0x171887f4 */
L_171887EC:
    edx = MEM32(ebp + 0xC); /* 0x171887EC: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx + ecx * 4) = eax; /* 0x171887EF: mov dword ptr [edx + ecx*4], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x171887F2: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_171887F4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171887F4: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x171887F7: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171887B1; /* 0x171887FA: jne 0x171887b1 */
L_171887FC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x171887FC: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0xC)), 3 */ /* 0x171887FF: cmp dword ptr [ebp - 0xc], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17188767; /* 0x17188803: jb 0x17188767 */
L_17188809:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17188809: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 3 */ /* 0x1718880A: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edi; /* 0x1718880D: mov dword ptr [ebp - 0x10], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171886B2; /* 0x17188810: jb 0x171886b2 */
L_17188816:
    edi = POP32_VAL(esp); /* 0x17188816: pop edi */
    esi = POP32_VAL(esp); /* 0x17188817: pop esi */
    ebx = POP32_VAL(esp); /* 0x17188818: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17188819: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718881A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17188822(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17188822u);

L_17188822:
    edi = edi; /* 0x17188822: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17188824: push ebp */
    ebp = esp; /* 0x17188825: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17188827: push ebx */
    ebx = ecx; /* 0x17188828: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x1718882A: push esi */
    esi = ebx + 0x90; /* 0x1718882B: lea esi, [ebx + 0x90] */
    /* cmp MEM32(esi), 0xFFFFFFFFu */ /* 0x17188831: cmp dword ptr [esi], -1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718883B; /* 0x17188834: jne 0x1718883b */
L_17188836:
    RECOMP_CALL(sub_171873F9); /* 0x17188836: call 0x171873f9 */
    RECOMP_FLAGS_IN();
L_1718883B:
    PUSH32(esp, MEM32(esi)); /* 0x1718883B: push dword ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x1718883D: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17185280); /* 0x17188840: call 0x17185280 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17188845: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x17188847: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17188888; /* 0x17188849: jl 0x17188888 */
L_1718884B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718884B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x14), edx */ /* 0x1718884D: cmp dword ptr [ebx + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17188886; /* 0x17188850: jbe 0x17188886 */
L_17188852:
    PUSH32(esp, edi); /* 0x17188852: push edi */
L_17188853:
    eax = MEM32(ebx + 0x10); /* 0x17188853: mov eax, dword ptr [ebx + 0x10] */
    /* test MEM8(eax + ecx * 4), 8 */ /* 0x17188856: test byte ptr [eax + ecx*4], 8 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 4)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718887F; /* 0x1718885A: jne 0x1718887f */
L_1718885C:
    eax = MEM32(ebx + 0x80); /* 0x1718885C: mov eax, dword ptr [ebx + 0x80] */
    esi = MEM32(ebx + 0x9C); /* 0x17188862: mov esi, dword ptr [ebx + 0x9c] */
    esi = MEM32(esi); /* 0x17188868: mov esi, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1718886A: add eax, ecx */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x1718886C: lea eax, [eax + eax*2] */
    esi = esi + eax * 4; /* 0x1718886F: lea esi, [esi + eax*4] */
    eax = MEM32(ebp + 0x8); /* 0x17188872: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(eax); /* 0x17188875: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x17188877: add edi, edx */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188879: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718887A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718887B: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x1718887C: add edx, 0xc */
    _flag_k = FK_ADD;
L_1718887F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718887F: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebx + 0x14) */ /* 0x17188880: cmp ecx, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17188853; /* 0x17188883: jb 0x17188853 */
L_17188885:
    edi = POP32_VAL(esp); /* 0x17188885: pop edi */
L_17188886:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17188886: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17188888:
    esi = POP32_VAL(esp); /* 0x17188888: pop esi */
    ebx = POP32_VAL(esp); /* 0x17188889: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1718888A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718888B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17188893(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17188893u);

L_17188893:
    edi = edi; /* 0x17188893: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17188895: push ebp */
    ebp = esp; /* 0x17188896: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17188898: push ebx */
    ebx = ecx; /* 0x17188899: mov ebx, ecx */
    eax = MEM32(ebx + 0x8); /* 0x1718889B: mov eax, dword ptr [ebx + 8] */
    /* cmp MEM32(ebx + 0x4), eax */ /* 0x1718889E: cmp dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171888B7; /* 0x171888A1: jne 0x171888b7 */
L_171888A3:
    /* test eax, eax */ /* 0x171888A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171888AC; /* 0x171888A5: je 0x171888ac */
L_171888A7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x171888A7: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171888A9: push eax */
    goto L_171888AE; /* 0x171888AA: jmp 0x171888ae */
L_171888AC:
    PUSH32(esp, 8); /* 0x171888AC: push 8 */
L_171888AE:
    RECOMP_CALL(sub_17175D54); /* 0x171888AE: call 0x17175d54 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171888B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171888D1; /* 0x171888B5: jl 0x171888d1 */
L_171888B7:
    eax = MEM32(ebx + 0x4); /* 0x171888B7: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x171888BA: mov ecx, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x171888BC: push esi */
    PUSH32(esp, edi); /* 0x171888BD: push edi */
    eax = eax + eax * 2; /* 0x171888BE: lea eax, [eax + eax*2] */
    edi = ecx + eax * 4; /* 0x171888C1: lea edi, [ecx + eax*4] */
    esi = ebp + 0x8; /* 0x171888C4: lea esi, [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171888C7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171888C8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171888C9: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 1; /* 0x171888CA: inc dword ptr [ebx + 4] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x171888CD: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171888CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171888D0: pop esi */
L_171888D1:
    ebx = POP32_VAL(esp); /* 0x171888D1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171888D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171888D3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171888DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171888DBu);

L_171888DB:
    edi = edi; /* 0x171888DB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171888DD: push ebp */
    ebp = esp; /* 0x171888DE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171888E0: push esi */
    esi = ecx; /* 0x171888E1: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x171888E3: mov eax, dword ptr [esi + 8] */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x171888E6: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171888FF; /* 0x171888E9: jne 0x171888ff */
L_171888EB:
    /* test eax, eax */ /* 0x171888EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171888F4; /* 0x171888ED: je 0x171888f4 */
L_171888EF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x171888EF: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171888F1: push eax */
    goto L_171888F6; /* 0x171888F2: jmp 0x171888f6 */
L_171888F4:
    PUSH32(esp, 8); /* 0x171888F4: push 8 */
L_171888F6:
    RECOMP_CALL(sub_17175E01); /* 0x171888F6: call 0x17175e01 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171888FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188916; /* 0x171888FD: jl 0x17188916 */
L_171888FF:
    eax = MEM32(esi + 0x4); /* 0x171888FF: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x17188902: mov ecx, dword ptr [esi] */
    edx = MEM32(ebp + 0x8); /* 0x17188904: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx + eax * 8) = edx; /* 0x17188907: mov dword ptr [ecx + eax*8], edx */
    edx = MEM32(ebp + 0xC); /* 0x1718890A: mov edx, dword ptr [ebp + 0xc] */
    MEM32(ecx + eax * 8 + 0x4) = edx; /* 0x1718890D: mov dword ptr [ecx + eax*8 + 4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x17188911: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17188914: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17188916:
    esi = POP32_VAL(esp); /* 0x17188916: pop esi */
    ebp = POP32_VAL(esp); /* 0x17188917: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17188918: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17188920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17188920u);

L_17188920:
    eax = 0x1721C3F4u; /* 0x17188920: mov eax, 0x1721c3f4 */
    RECOMP_CALL(sub_1721B168); /* 0x17188925: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1718892A: push ecx */
    PUSH32(esp, ebx); /* 0x1718892B: push ebx */
    PUSH32(esp, esi); /* 0x1718892C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1718892D: mov esi, dword ptr [ebp + 8] */
    eax = esi + esi * 8; /* 0x17188930: lea eax, [esi + esi*8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17188933: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17188933: shl eax, 2 */
    PUSH32(esp, edi); /* 0x17188936: push edi */
    PUSH32(esp, eax); /* 0x17188937: push eax */
    ebx = ecx; /* 0x17188938: mov ebx, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1718893A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718893F: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x17188941: pop ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x17188942: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17188945: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17188949: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17188960; /* 0x1718894B: je 0x17188960 */
L_1718894D:
    PUSH32(esp, 0x17187F35u); /* 0x1718894D: push 0x17187f35 */
    PUSH32(esp, esi); /* 0x17188952: push esi */
    PUSH32(esp, 0x24u); /* 0x17188953: push 0x24 */
    PUSH32(esp, edi); /* 0x17188955: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x17188956: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = edi; /* 0x1718895B: mov dword ptr [ebp - 0x10], edi */
    goto L_17188964; /* 0x1718895E: jmp 0x17188964 */
L_17188960:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17188960: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17188964:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x17188964: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17188968: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x10)), edx */ /* 0x1718896A: cmp dword ptr [ebp - 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17188976; /* 0x1718896D: jne 0x17188976 */
L_1718896F:
    eax = 0x8007000Eu; /* 0x1718896F: mov eax, 0x8007000e */
    goto L_171889B9; /* 0x17188974: jmp 0x171889b9 */
L_17188976:
    /* cmp MEM32(ebx), edx */ /* 0x17188976: cmp dword ptr [ebx], edx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171889AF; /* 0x17188978: je 0x171889af */
L_1718897A:
    eax = MEM32(ebx + 0x4); /* 0x1718897A: mov eax, dword ptr [ebx + 4] */
    /* cmp eax, edx */ /* 0x1718897D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171889A2; /* 0x1718897F: jbe 0x171889a2 */
L_17188981:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17188981: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17188983:
    /* cmp edx, esi */ /* 0x17188983: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171889A2; /* 0x17188985: jae 0x171889a2 */
L_17188987:
    ecx = MEM32(ebp + (-0x10)); /* 0x17188987: mov ecx, dword ptr [ebp - 0x10] */
    esi = MEM32(ebx); /* 0x1718898A: mov esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1718898C: add esi, eax */
    _flag_k = FK_ADD;
    edi = eax + ecx; /* 0x1718898E: lea edi, [eax + ecx] */
    PUSH32(esp, 9); /* 0x17188991: push 9 */
    ecx = POP32_VAL(esp); /* 0x17188993: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17188994: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x17188996: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17188999: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x24u; /* 0x1718899A: add eax, 0x24 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebx + 0x4) */ /* 0x1718899D: cmp edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17188983; /* 0x171889A0: jb 0x17188983 */
L_171889A2:
    eax = MEM32(ebx); /* 0x171889A2: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x171889A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171889AF; /* 0x171889A6: je 0x171889af */
L_171889A8:
    PUSH32(esp, eax); /* 0x171889A8: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x171889A9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171889AE: pop ecx */
L_171889AF:
    eax = MEM32(ebp + (-0x10)); /* 0x171889AF: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebx) = eax; /* 0x171889B2: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x8) = esi; /* 0x171889B4: mov dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171889B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171889B9:
    ecx = MEM32(ebp + (-0xC)); /* 0x171889B9: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x171889BC: pop edi */
    esi = POP32_VAL(esp); /* 0x171889BD: pop esi */
    ebx = POP32_VAL(esp); /* 0x171889BE: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x171889BF: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171889C6: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171889C7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171889CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171889CFu);

L_171889CF:
    eax = 0x1721C40Bu; /* 0x171889CF: mov eax, 0x1721c40b */
    RECOMP_CALL(sub_1721B168); /* 0x171889D4: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x171889D9: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171889DC: push ebx */
    ebx = ecx; /* 0x171889DD: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x171889DF: push esi */
    ecx = ebp + (-0x2C); /* 0x171889E0: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_17187ECE); /* 0x171889E3: call 0x17187ece */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x171889E8: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171889EB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_17186945); /* 0x171889EF: call 0x17186945 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x171889F4: fld1  */
    eax = MEM32(ebp + 0x8); /* 0x171889F6: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x171889F9: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171889FC: push dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x2C); /* 0x171889FF: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x17188A02: push eax */
    RECOMP_CALL(sub_17187EF0); /* 0x17188A03: call 0x17187ef0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17188A08: mov esi, eax */
    /* test esi, esi */ /* 0x17188A0A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188AAE; /* 0x17188A0C: jl 0x17188aae */
L_17188A12:
    PUSH32(esp, edi); /* 0x17188A12: push edi */
    goto L_17188A8F; /* 0x17188A13: jmp 0x17188a8f */
L_17188A15:
    ecx = MEM32(ebx + 0x8C); /* 0x17188A15: mov ecx, dword ptr [ebx + 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17188A1B: fld dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x1C)); /* 0x17188A1E: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, ecx */ /* 0x17188A21: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17188A34; /* 0x17188A23: jae 0x17188a34 */
L_17188A25:
    PUSH32(esp, eax); /* 0x17188A25: push eax */
L_17188A26:
    PUSH32(esp, ecx); /* 0x17188A26: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x17188A27: mov ecx, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17188A2A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17186895); /* 0x17188A2D: call 0x17186895 */
    RECOMP_FLAGS_IN();
    goto L_17188A8F; /* 0x17188A32: jmp 0x17188a8f */
L_17188A34:
    edx = MEM32(ebx + 0x50); /* 0x17188A34: mov edx, dword ptr [ebx + 0x50] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17188A37: fmul dword ptr [0x1700141c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x17188A3D: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(edx + eax * 8); /* 0x17188A3F: mov ecx, dword ptr [edx + eax*8] */
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x17188A42: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17188A45: fstp dword ptr [ebp - 0x10] */
    edi = MEM32(edx + eax * 8 + 0x4); /* 0x17188A48: mov edi, dword ptr [edx + eax*8 + 4] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17188A60; /* 0x17188A4C: jae 0x17188a60 */
L_17188A4E:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17188A4E: fld dword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x17188A51: push ecx */
    PUSH32(esp, ecx); /* 0x17188A52: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x17188A53: mov ecx, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17188A56: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17186895); /* 0x17188A59: call 0x17186895 */
    RECOMP_FLAGS_IN();
    goto L_17188A72; /* 0x17188A5E: jmp 0x17188a72 */
L_17188A60:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x17188A60: push dword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x17188A63: push ecx */
    ecx = ebp + (-0x2C); /* 0x17188A64: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_17187EF0); /* 0x17188A67: call 0x17187ef0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17188A6C: mov esi, eax */
    /* test esi, esi */ /* 0x17188A6E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188AAD; /* 0x17188A70: jl 0x17188aad */
L_17188A72:
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x17188A72: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17188A7D; /* 0x17188A75: jae 0x17188a7d */
L_17188A77:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17188A77: fld dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x17188A7A: push edi */
    RECOMP_BACKEDGE();
    goto L_17188A26; /* 0x17188A7B: jmp 0x17188a26 */
L_17188A7D:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x17188A7D: push dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x2C); /* 0x17188A80: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, edi); /* 0x17188A83: push edi */
    RECOMP_CALL(sub_17187EF0); /* 0x17188A84: call 0x17187ef0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17188A89: mov esi, eax */
    /* test esi, esi */ /* 0x17188A8B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188AAD; /* 0x17188A8D: jl 0x17188aad */
L_17188A8F:
    eax = ebp + (-0x1C); /* 0x17188A8F: lea eax, [ebp - 0x1c] */
    ecx = ebp + (-0x2C); /* 0x17188A92: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x17188A95: push eax */
    RECOMP_CALL(sub_17186B52); /* 0x17188A96: call 0x17186b52 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x17188A9B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17188A15; /* 0x17188A9D: jne 0x17188a15 */
L_17188AA3:
    ecx = MEM32(ebp + 0xC); /* 0x17188AA3: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1718695D); /* 0x17188AA6: call 0x1718695d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17188AAB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17188AAD:
    edi = POP32_VAL(esp); /* 0x17188AAD: pop edi */
L_17188AAE:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x17188AAE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x17188AB2: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1717AF06); /* 0x17188AB5: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x17188ABA: mov ecx, dword ptr [ebp - 0xc] */
    eax = esi; /* 0x17188ABD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17188ABF: pop esi */
    ebx = POP32_VAL(esp); /* 0x17188AC0: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x17188AC1: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17188AC8: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17188AC9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17188AD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17188AD1u);

L_17188AD1:
    edi = edi; /* 0x17188AD1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17188AD3: push ebp */
    ebp = esp; /* 0x17188AD4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x80u; /* 0x17188AD6: sub esp, 0x80 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) & 0; /* 0x17188ADC: and dword ptr [ebp - 0x68], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17188AE0: push ebx */
    PUSH32(esp, esi); /* 0x17188AE1: push esi */
    ebx = ecx; /* 0x17188AE2: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x17188AE4: push edi */
    ecx = ebp + (-0x80); /* 0x17188AE5: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_17186945); /* 0x17188AE8: call 0x17186945 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x17188AED: fld dword ptr [0x1700141c] */
    esi = MEM32(ebx + 0x8C); /* 0x17188AF3: mov esi, dword ptr [ebx + 0x8c] */
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x17188AF9: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17188B0C; /* 0x17188AFC: jae 0x17188b0c */
L_17188AFE:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17188AFE: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x17188B01: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17188B02: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17186895); /* 0x17188B05: call 0x17186895 */
    RECOMP_FLAGS_IN();
    goto L_17188B24; /* 0x17188B0A: jmp 0x17188b24 */
L_17188B0C:
    eax = MEM32(ebp + 0x8); /* 0x17188B0C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x17188B0F: sub eax, esi */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x17188B11: imul eax, eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x40));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x40); /* 0x17188B14: add eax, dword ptr [ebx + 0x40] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17188B17: push eax */
    PUSH32(esp, ecx); /* 0x17188B18: push ecx */
    ecx = ebp + (-0x80); /* 0x17188B19: lea ecx, [ebp - 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17188B1C: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17186902); /* 0x17188B1F: call 0x17186902 */
    RECOMP_FLAGS_IN();
L_17188B24:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x17188B24: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x17188B27: fld dword ptr [0x1700141c] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17188B40; /* 0x17188B2D: jae 0x17188b40 */
L_17188B2F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17188B2F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x17188B32: push ecx */
    ecx = ebp + (-0x80); /* 0x17188B33: lea ecx, [ebp - 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17188B36: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17186895); /* 0x17188B39: call 0x17186895 */
    RECOMP_FLAGS_IN();
    goto L_17188B58; /* 0x17188B3E: jmp 0x17188b58 */
L_17188B40:
    eax = MEM32(ebp + 0xC); /* 0x17188B40: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x17188B43: sub eax, esi */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x17188B45: imul eax, eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x40));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x40); /* 0x17188B48: add eax, dword ptr [ebx + 0x40] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17188B4B: push eax */
    PUSH32(esp, ecx); /* 0x17188B4C: push ecx */
    ecx = ebp + (-0x80); /* 0x17188B4D: lea ecx, [ebp - 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17188B50: fstp dword ptr [esp] */
    RECOMP_CALL(sub_17186902); /* 0x17188B53: call 0x17186902 */
    RECOMP_FLAGS_IN();
L_17188B58:
    ecx = ebp + (-0x80); /* 0x17188B58: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1718695D); /* 0x17188B5B: call 0x1718695d */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x17188B60: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17188B62: fstp dword ptr [ebp - 0x1c] */
    esi = ebp + (-0x1C); /* 0x17188B65: lea esi, [ebp - 0x1c] */
    fp_push(0.0); /* 0x17188B68: fldz  */
    edi = ebp + (-0x34); /* 0x17188B6A: lea edi, [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17188B6D: fstp dword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x17188B70: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17188B72: fstp dword ptr [ebp - 0x14] */
    fp_push(0.0); /* 0x17188B75: fldz  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188B77: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17188B78: fstp dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188B7B: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x17188B7C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17188B7E: fstp dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x8)); /* 0x17188B81: mov eax, dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188B84: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x1C); /* 0x17188B85: lea esi, [ebp - 0x1c] */
    edi = ebp + (-0x28); /* 0x17188B88: lea edi, [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188B8B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188B8C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188B8D: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x1C); /* 0x17188B8E: lea esi, [ebp - 0x1c] */
    edi = ebp + (-0x40); /* 0x17188B91: lea edi, [ebp - 0x40] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188B94: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188B95: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x10)) = eax; /* 0x17188B96: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17188B99: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17188B9C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188BA0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17188BA1: mov dword ptr [ebp - 0xc], eax */
L_17188BA4:
    eax = MEM32(ebp + (-0x4)); /* 0x17188BA4: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebx + 0xA4); /* 0x17188BA7: mov edx, dword ptr [ebx + 0xa4] */
    edx = MEM32(edx); /* 0x17188BAD: mov edx, dword ptr [edx] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17188BAF: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17188BAF: shl eax, 2 */
    esi = MEM32(ebp + eax + (-0x80)); /* 0x17188BB2: mov esi, dword ptr [ebp + eax - 0x80] */
    ecx = ebp + eax + (-0x74); /* 0x17188BB6: lea ecx, [ebp + eax - 0x74] */
    eax = MEM32(ebx + 0x84); /* 0x17188BBA: mov eax, dword ptr [ebx + 0x84] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17188BC0: fld dword ptr [ecx] */
    fp_push(_st[0]); /* 0x17188BC2: fld st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17188BC4: add eax, esi */
    _flag_k = FK_ADD;
    edi = eax + eax * 2; /* 0x17188BC6: lea edi, [eax + eax*2] */
    edx = edx + edi * 4; /* 0x17188BC9: lea edx, [edx + edi*4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17188BCC: fmul dword ptr [edx] */
    fp_push(_st[1]); /* 0x17188BCE: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17188BD0: fmul dword ptr [edx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x17188BD3: fstp dword ptr [ebp - 0x48] */
    fp_push(_st[1]); /* 0x17188BD6: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17188BD8: fmul dword ptr [edx + 8] */
    edx = eax + eax * 2; /* 0x17188BDB: lea edx, [eax + eax*2] */
    eax = MEM32(ebx + 0xA0); /* 0x17188BDE: mov eax, dword ptr [ebx + 0xa0] */
    eax = MEM32(eax); /* 0x17188BE4: mov eax, dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17188BE6: fstp dword ptr [ebp - 0x44] */
    eax = eax + edx * 8; /* 0x17188BE9: lea eax, [eax + edx*8] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x17188BEC: fld dword ptr [ebp - 0x40] */
    _st[0] += _st[1]; /* 0x17188BEF: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17188BF1: fstp dword ptr [ebp - 0x40] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17188BF4: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17188BF6: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x17188BF8: fld dword ptr [ebp - 0x3c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x48)); /* 0x17188BFB: fadd dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17188BFE: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17188C01: fld dword ptr [ebp - 0x38] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x44)); /* 0x17188C04: fadd dword ptr [ebp - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17188C07: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17188C0A: fld dword ptr [ecx] */
    fp_push(_st[0]); /* 0x17188C0C: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17188C0E: fmul dword ptr [eax] */
    fp_push(_st[1]); /* 0x17188C10: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17188C12: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x17188C15: fstp dword ptr [ebp - 0x54] */
    fp_push(_st[1]); /* 0x17188C18: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17188C1A: fmul dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x17188C1D: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17188C20: fld dword ptr [ebp - 0x34] */
    _st[0] += _st[1]; /* 0x17188C23: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17188C25: fstp dword ptr [ebp - 0x34] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17188C28: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17188C2A: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17188C2C: fld dword ptr [ebp - 0x30] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x54)); /* 0x17188C2F: fadd dword ptr [ebp - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17188C32: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17188C35: fld dword ptr [ebp - 0x2c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x50)); /* 0x17188C38: fadd dword ptr [ebp - 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17188C3B: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17188C3E: fld dword ptr [ecx] */
    fp_push(_st[0]); /* 0x17188C40: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17188C42: fmul dword ptr [eax + 0xc] */
    fp_push(_st[1]); /* 0x17188C45: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x17188C47: fmul dword ptr [eax + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x17188C4A: fstp dword ptr [ebp - 0x60] */
    fp_push(_st[1]); /* 0x17188C4D: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x17188C4F: fmul dword ptr [eax + 0x14] */
    eax = MEM32(ebx + 0xA8); /* 0x17188C52: mov eax, dword ptr [ebx + 0xa8] */
    /* test eax, eax */ /* 0x17188C58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x17188C5A: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17188C5D: fld dword ptr [ebp - 0x28] */
    _st[0] += _st[1]; /* 0x17188C60: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17188C62: fstp dword ptr [ebp - 0x28] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17188C65: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17188C67: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17188C69: fld dword ptr [ebp - 0x24] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x60)); /* 0x17188C6C: fadd dword ptr [ebp - 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17188C6F: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17188C72: fld dword ptr [ebp - 0x20] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x5C)); /* 0x17188C75: fadd dword ptr [ebp - 0x5c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17188C78: fstp dword ptr [ebp - 0x20] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17188CA5; /* 0x17188C7B: je 0x17188ca5 */
L_17188C7D:
    fp_push(*(float*)&MEM32(ecx)); /* 0x17188C7D: fld dword ptr [ecx] */
    eax = MEM32(eax); /* 0x17188C7F: mov eax, dword ptr [eax] */
    fp_push(_st[0]); /* 0x17188C81: fld st(0) */
    esi = eax + esi * 8; /* 0x17188C83: lea esi, [eax + esi*8] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17188C86: fmul dword ptr [esi] */
    fp_push(_st[1]); /* 0x17188C88: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17188C8A: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17188C8D: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17188C90: fld dword ptr [ebp - 0x10] */
    _st[0] += _st[1]; /* 0x17188C93: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17188C95: fstp dword ptr [ebp - 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17188C98: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17188C9A: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17188C9C: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17188C9F: fadd dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17188CA2: fstp dword ptr [ebp - 0xc] */
L_17188CA5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17188CA5: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), 3 */ /* 0x17188CA8: cmp dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17188BA4; /* 0x17188CAC: jb 0x17188ba4 */
L_17188CB2:
    eax = ebp + (-0x28); /* 0x17188CB2: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x17188CB5: push eax */
    PUSH32(esp, eax); /* 0x17188CB6: push eax */
    RECOMP_CALL(sub_17040B68); /* 0x17188CB7: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xA0); /* 0x17188CBC: mov ecx, dword ptr [ebx + 0xa0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17188CC2: sub esp, 0xc */
    _flag_k = FK_CMP;
    edi = esp; /* 0x17188CC5: mov edi, esp */
    esi = ebp + (-0x34); /* 0x17188CC7: lea esi, [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188CCA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188CCB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188CCC: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17188893); /* 0x17188CCD: call 0x17188893 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188CD2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188D67; /* 0x17188CD4: jl 0x17188d67 */
L_17188CDA:
    ecx = MEM32(ebx + 0xA0); /* 0x17188CDA: mov ecx, dword ptr [ebx + 0xa0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17188CE0: sub esp, 0xc */
    _flag_k = FK_CMP;
    edi = esp; /* 0x17188CE3: mov edi, esp */
    esi = ebp + (-0x28); /* 0x17188CE5: lea esi, [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188CE8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188CE9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188CEA: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17188893); /* 0x17188CEB: call 0x17188893 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188CF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188D67; /* 0x17188CF2: jl 0x17188d67 */
L_17188CF4:
    ecx = MEM32(ebx + 0xA4); /* 0x17188CF4: mov ecx, dword ptr [ebx + 0xa4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17188CFA: sub esp, 0xc */
    _flag_k = FK_CMP;
    edi = esp; /* 0x17188CFD: mov edi, esp */
    esi = ebp + (-0x40); /* 0x17188CFF: lea esi, [ebp - 0x40] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188D02: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188D03: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188D04: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17188893); /* 0x17188D05: call 0x17188893 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188D0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188D67; /* 0x17188D0C: jl 0x17188d67 */
L_17188D0E:
    ecx = MEM32(ebx + 0xA8); /* 0x17188D0E: mov ecx, dword ptr [ebx + 0xa8] */
    /* test ecx, ecx */ /* 0x17188D14: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17188D27; /* 0x17188D16: je 0x17188d27 */
L_17188D18:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x17188D18: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x17188D1B: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_171888DB); /* 0x17188D1E: call 0x171888db */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188D23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188D67; /* 0x17188D25: jl 0x17188d67 */
L_17188D27:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x17188D27: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, 7); /* 0x17188D2A: push 7 */
    ecx = POP32_VAL(esp); /* 0x17188D2C: pop ecx */
    edi = esp; /* 0x17188D2D: mov edi, esp */
    esi = ebp + (-0x80); /* 0x17188D2F: lea esi, [ebp - 0x80] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17188D32: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx + 0x40; /* 0x17188D34: lea ecx, [ebx + 0x40] */
    RECOMP_CALL(sub_17187E18); /* 0x17188D37: call 0x17187e18 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188D3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188D67; /* 0x17188D3E: jl 0x17188d67 */
L_17188D40:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17188D40: push dword ptr [ebp + 0xc] */
    ecx = ebx + 0x50; /* 0x17188D43: lea ecx, [ebx + 0x50] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17188D46: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17187EF0); /* 0x17188D49: call 0x17187ef0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188D4E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17188D67; /* 0x17188D50: jl 0x17188d67 */
L_17188D52:
    ecx = MEM32(ebx + 0xA4); /* 0x17188D52: mov ecx, dword ptr [ebx + 0xa4] */
    ecx = MEM32(ecx + 0x4); /* 0x17188D58: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x84));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0x84); /* 0x17188D5B: sub ecx, dword ptr [ebx + 0x84] */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x10); /* 0x17188D61: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17188D64: dec ecx */
    _flag_k = FK_DEC;
    MEM32(edx) = ecx; /* 0x17188D65: mov dword ptr [edx], ecx */
L_17188D67:
    edi = POP32_VAL(esp); /* 0x17188D67: pop edi */
    esi = POP32_VAL(esp); /* 0x17188D68: pop esi */
    ebx = POP32_VAL(esp); /* 0x17188D69: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17188D6A: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17188D6B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17188D73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17188D73u);

L_17188D73:
    edi = edi; /* 0x17188D73: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17188D75: push ebp */
    ebp = esp; /* 0x17188D76: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x12Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x12Cu; /* 0x17188D78: sub esp, 0x12c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17188D7E: push ebx */
    ebx = ecx; /* 0x17188D7F: mov ebx, ecx */
    eax = MEM32(ebx + 0x9C); /* 0x17188D81: mov eax, dword ptr [ebx + 0x9c] */
    ecx = MEM32(eax + 0x4); /* 0x17188D87: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ebx + 0x80); /* 0x17188D8A: mov eax, dword ptr [ebx + 0x80] */
    PUSH32(esp, esi); /* 0x17188D90: push esi */
    PUSH32(esp, edi); /* 0x17188D91: push edi */
    MEM32(ebp + (-0xB8)) = ecx; /* 0x17188D92: mov dword ptr [ebp - 0xb8], ecx */
    /* cmp eax, ecx */ /* 0x17188D98: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_17189845; /* 0x17188D9A: jmp 0x17189845 */
L_17188D9F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x80));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x80); /* 0x17188D9F: sub eax, dword ptr [ebx + 0x80] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x10); /* 0x17188DA5: mov ecx, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17188DA8: mov dword ptr [ebp - 0xc], eax */
    eax = ecx + eax * 4; /* 0x17188DAB: lea eax, [ecx + eax*4] */
    /* test MEM8(eax), 4 */ /* 0x17188DAE: test byte ptr [eax], 4 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718983B; /* 0x17188DB1: je 0x1718983b */
L_17188DB7:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFBu; /* 0x17188DB7: and dword ptr [eax], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x17188DBA: push 2 */
    eax = POP32_VAL(esp); /* 0x17188DBC: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17188DBD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17188DBF: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x70)) = eax; /* 0x17188DC0: mov dword ptr [ebp - 0x70], eax */
    MEM32(ebp + (-0x64)) = eax; /* 0x17188DC3: mov dword ptr [ebp - 0x64], eax */
    eax = MEM32(ebp + (-0x60)); /* 0x17188DC6: mov eax, dword ptr [ebp - 0x60] */
    MEM32(ebp + (-0x74)) = ecx; /* 0x17188DC9: mov dword ptr [ebp - 0x74], ecx */
    MEM32(ebp + (-0x68)) = ecx; /* 0x17188DCC: mov dword ptr [ebp - 0x68], ecx */
    ecx = MEM32(ebx + 0x9C); /* 0x17188DCF: mov ecx, dword ptr [ebx + 0x9c] */
    ecx = MEM32(ecx); /* 0x17188DD5: mov ecx, dword ptr [ecx] */
    eax = eax + eax * 2; /* 0x17188DD7: lea eax, [eax + eax*2] */
    esi = ecx + eax * 4; /* 0x17188DDA: lea esi, [ecx + eax*4] */
    eax = ebp + (-0x4); /* 0x17188DDD: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17188DE0: push eax */
    eax = ebp + (-0x3C); /* 0x17188DE1: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x17188DE4: push eax */
    edi = ebp + (-0x48); /* 0x17188DE5: lea edi, [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188DE8: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x78); /* 0x17188DE9: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x17188DEC: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17188DED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0xA4); /* 0x17188DEF: lea eax, [ebp - 0xa4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188DF5: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, eax); /* 0x17188DF6: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x17188DF7: push dword ptr [ebp - 0xc] */
    ecx = ebx; /* 0x17188DFA: mov ecx, ebx */
    MEM32(ebp + (-0xA4)) = edx; /* 0x17188DFC: mov dword ptr [ebp - 0xa4], edx */
    MEM32(ebp + (-0xA0)) = edx; /* 0x17188E02: mov dword ptr [ebp - 0xa0], edx */
    MEM32(ebp + (-0x9C)) = edx; /* 0x17188E08: mov dword ptr [ebp - 0x9c], edx */
    MEM32(ebp + (-0x78)) = edx; /* 0x17188E0E: mov dword ptr [ebp - 0x78], edx */
    MEM32(ebp + (-0x6C)) = edx; /* 0x17188E11: mov dword ptr [ebp - 0x6c], edx */
    MEM32(ebp + (-0x4)) = edx; /* 0x17188E14: mov dword ptr [ebp - 4], edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17188E17: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1718846D); /* 0x17188E18: call 0x1718846d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x17188E1D: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x17188E20: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718983B; /* 0x17188E22: je 0x1718983b */
L_17188E28:
    eax = MEM32(ebx + 0x10); /* 0x17188E28: mov eax, dword ptr [ebx + 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x17188E2B: mov edx, dword ptr [ebp - 0xc] */
    eax = eax + edx * 4; /* 0x17188E2E: lea eax, [eax + edx*4] */
    _flag_a = (uint32_t)((MEM32(eax) | 8)); _flag_b = (uint32_t)((MEM32(eax) | 8));
    MEM32(eax) = MEM32(eax) | 8; /* 0x17188E31: or dword ptr [eax], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 1 */ /* 0x17188E34: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718907A; /* 0x17188E37: jne 0x1718907a */
L_17188E3D:
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC4)) = MEM32(ebp + (-0xC4)) | 0xFFFFFFFFu; /* 0x17188E3D: or dword ptr [ebp - 0xc4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC8)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC8)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC8)) = MEM32(ebp + (-0xC8)) | 0xFFFFFFFFu; /* 0x17188E44: or dword ptr [ebp - 0xc8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xBC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xBC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xBC)) = MEM32(ebp + (-0xBC)) | 0xFFFFFFFFu; /* 0x17188E4B: or dword ptr [ebp - 0xbc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x78)); /* 0x17188E52: mov edi, dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17188E55: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xD4)) = eax; /* 0x17188E57: mov dword ptr [ebp - 0xd4], eax */
    MEM32(ebp + (-0xC0)) = eax; /* 0x17188E5D: mov dword ptr [ebp - 0xc0], eax */
    MEM32(ebp + (-0xB0)) = eax; /* 0x17188E63: mov dword ptr [ebp - 0xb0], eax */
    MEM32(ebp + (-0xAC)) = eax; /* 0x17188E69: mov dword ptr [ebp - 0xac], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x17188E6F: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x17188E72: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0xA4)); /* 0x17188E75: mov eax, dword ptr [ebp - 0xa4] */
    _flag_a = (uint32_t)((MEM32(eax + 0x18) | 0x10u)); _flag_b = (uint32_t)((MEM32(eax + 0x18) | 0x10u));
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 0x10u; /* 0x17188E7B: or dword ptr [eax + 0x18], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax + 0x1C; /* 0x17188E7F: lea esi, [eax + 0x1c] */
    /* cmp MEM32(esi), 0xFFFFFFFEu */ /* 0x17188E82: cmp dword ptr [esi], -2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = esi; /* 0x17188E85: mov dword ptr [ebp - 0x3c], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17188EA5; /* 0x17188E88: jne 0x17188ea5 */
L_17188E8A:
    eax = MEM32(ebp + (-0x74)); /* 0x17188E8A: mov eax, dword ptr [ebp - 0x74] */
    PUSH32(esp, esi); /* 0x17188E8D: push esi */
    PUSH32(esp, MEM32(ebp + eax * 4 + (-0x48))); /* 0x17188E8E: push dword ptr [ebp + eax*4 - 0x48] */
    ecx = ebx; /* 0x17188E92: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + edi * 4 + (-0x48))); /* 0x17188E94: push dword ptr [ebp + edi*4 - 0x48] */
    RECOMP_CALL(sub_17188AD1); /* 0x17188E98: call 0x17188ad1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188E9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17188E9F: jl 0x17189850 */
L_17188EA5:
    eax = MEM32(ebp + (-0x70)); /* 0x17188EA5: mov eax, dword ptr [ebp - 0x70] */
    eax = MEM32(ebp + eax * 4 + (-0x48)); /* 0x17188EA8: mov eax, dword ptr [ebp + eax*4 - 0x48] */
    edi = MEM32(ebp + edi * 4 + (-0x48)); /* 0x17188EAC: mov edi, dword ptr [ebp + edi*4 - 0x48] */
    ecx = ebp + (-0x5C); /* 0x17188EB0: lea ecx, [ebp - 0x5c] */
    PUSH32(esp, ecx); /* 0x17188EB3: push ecx */
    PUSH32(esp, 3); /* 0x17188EB4: push 3 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x17188EB6: push dword ptr [ebp - 0xc] */
    ecx = ebx; /* 0x17188EB9: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x17188EBB: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x17188EBC: push dword ptr [esi] */
    MEM32(ebp + (-0x8)) = eax; /* 0x17188EBE: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, edi); /* 0x17188EC1: push edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x17188EC2: mov dword ptr [ebp - 0x18], edi */
    RECOMP_CALL(sub_17188401); /* 0x17188EC5: call 0x17188401 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188ECA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17188ECC: jl 0x17189850 */
L_17188ED2:
    eax = MEM32(ebp + (-0x74)); /* 0x17188ED2: mov eax, dword ptr [ebp - 0x74] */
    eax = MEM32(ebp + eax * 4 + (-0x48)); /* 0x17188ED5: mov eax, dword ptr [ebp + eax*4 - 0x48] */
    ecx = ebp + (-0x58); /* 0x17188ED9: lea ecx, [ebp - 0x58] */
    PUSH32(esp, ecx); /* 0x17188EDC: push ecx */
    PUSH32(esp, 3); /* 0x17188EDD: push 3 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x17188EDF: push dword ptr [ebp - 0xc] */
    ecx = ebx; /* 0x17188EE2: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17188EE4: push dword ptr [ebp - 8] */
    MEM32(ebp + (-0x14)) = eax; /* 0x17188EE7: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, eax); /* 0x17188EEA: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x17188EEB: push dword ptr [esi] */
    RECOMP_CALL(sub_17188401); /* 0x17188EED: call 0x17188401 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188EF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17188EF4: jl 0x17189850 */
L_17188EFA:
    eax = ebp + (-0x4); /* 0x17188EFA: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17188EFD: push eax */
    PUSH32(esp, 2); /* 0x17188EFE: push 2 */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x17188F00: push dword ptr [ebp - 0x58] */
    ecx = ebx; /* 0x17188F03: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x17188F05: push dword ptr [ebp - 0x5c] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17188F08: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi)); /* 0x17188F0B: push dword ptr [esi] */
    RECOMP_CALL(sub_17188379); /* 0x17188F0D: call 0x17188379 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188F12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17188F14: jl 0x17189850 */
L_17188F1A:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x17188F1A: push dword ptr [ebp - 0x5c] */
    edi = MEM32(esi); /* 0x17188F1D: mov edi, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x17188F1F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x17188F20: push dword ptr [ebp - 0x18] */
    ecx = ebp + (-0xD8); /* 0x17188F23: lea ecx, [ebp - 0xd8] */
    RECOMP_CALL(sub_17186D57); /* 0x17188F29: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xB0); /* 0x17188F2E: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x17188F34: push eax */
    eax = ebp + (-0xD8); /* 0x17188F35: lea eax, [ebp - 0xd8] */
    PUSH32(esp, eax); /* 0x17188F3B: push eax */
    ecx = ebx; /* 0x17188F3C: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x17188F3E: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188F43: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17188F82; /* 0x17188F45: jne 0x17188f82 */
L_17188F47:
    PUSH32(esp, 0x20u); /* 0x17188F47: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x17188F49: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188F4E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17188F50: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17188F67; /* 0x17188F51: je 0x17188f67 */
L_17188F53:
    PUSH32(esp, 8); /* 0x17188F53: push 8 */
    ecx = POP32_VAL(esp); /* 0x17188F55: pop ecx */
    esi = ebp + (-0xD8); /* 0x17188F56: lea esi, [ebp - 0xd8] */
    edi = eax; /* 0x17188F5C: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17188F5E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x3C)); /* 0x17188F60: mov esi, dword ptr [ebp - 0x3c] */
    edi = eax; /* 0x17188F63: mov edi, eax */
    goto L_17188F69; /* 0x17188F65: jmp 0x17188f69 */
L_17188F67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17188F67: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17188F69:
    PUSH32(esp, edi); /* 0x17188F69: push edi */
    ecx = ebx; /* 0x17188F6A: mov ecx, ebx */
    RECOMP_CALL(sub_17187D3C); /* 0x17188F6C: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188F71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17188F73: jl 0x17189850 */
L_17188F79:
    MEM32(edi + 0x18) = 1; /* 0x17188F79: mov dword ptr [edi + 0x18], 1 */
    goto L_17188F95; /* 0x17188F80: jmp 0x17188f95 */
L_17188F82:
    /* cmp MEM32(ebp + (-0x18)), edi */ /* 0x17188F82: cmp dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xB0)); /* 0x17188F85: mov ecx, dword ptr [ebp - 0xb0] */
    edx = MEM32(ebp + (-0x5C)); /* 0x17188F8B: mov edx, dword ptr [ebp - 0x5c] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17188F8E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17188F90: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edx; /* 0x17188F91: mov dword ptr [ecx + eax*4 + 0x10], edx */
L_17188F95:
    edi = MEM32(ebp + (-0x58)); /* 0x17188F95: mov edi, dword ptr [ebp - 0x58] */
    esi = MEM32(esi); /* 0x17188F98: mov esi, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x17188F9A: push edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x17188F9B: push dword ptr [ebp - 0x14] */
    ecx = ebp + (-0xD8); /* 0x17188F9E: lea ecx, [ebp - 0xd8] */
    PUSH32(esp, esi); /* 0x17188FA4: push esi */
    RECOMP_CALL(sub_17186D57); /* 0x17188FA5: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xAC); /* 0x17188FAA: lea eax, [ebp - 0xac] */
    PUSH32(esp, eax); /* 0x17188FB0: push eax */
    eax = ebp + (-0xD8); /* 0x17188FB1: lea eax, [ebp - 0xd8] */
    PUSH32(esp, eax); /* 0x17188FB7: push eax */
    ecx = ebx; /* 0x17188FB8: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x17188FBA: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188FBF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17188FFE; /* 0x17188FC1: jne 0x17188ffe */
L_17188FC3:
    PUSH32(esp, 0x20u); /* 0x17188FC3: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x17188FC5: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188FCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17188FCC: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17188FE3; /* 0x17188FCD: je 0x17188fe3 */
L_17188FCF:
    PUSH32(esp, 8); /* 0x17188FCF: push 8 */
    ecx = POP32_VAL(esp); /* 0x17188FD1: pop ecx */
    esi = ebp + (-0xD8); /* 0x17188FD2: lea esi, [ebp - 0xd8] */
    edi = eax; /* 0x17188FD8: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17188FDA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x58)); /* 0x17188FDC: mov edi, dword ptr [ebp - 0x58] */
    esi = eax; /* 0x17188FDF: mov esi, eax */
    goto L_17188FE5; /* 0x17188FE1: jmp 0x17188fe5 */
L_17188FE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17188FE3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17188FE5:
    PUSH32(esp, esi); /* 0x17188FE5: push esi */
    ecx = ebx; /* 0x17188FE6: mov ecx, ebx */
    RECOMP_CALL(sub_17187D3C); /* 0x17188FE8: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17188FED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17188FEF: jl 0x17189850 */
L_17188FF5:
    MEM32(esi + 0x18) = 1; /* 0x17188FF5: mov dword ptr [esi + 0x18], 1 */
    goto L_1718900E; /* 0x17188FFC: jmp 0x1718900e */
L_17188FFE:
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x17188FFE: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xAC)); /* 0x17189001: mov ecx, dword ptr [ebp - 0xac] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17189007: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17189009: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edi; /* 0x1718900A: mov dword ptr [ecx + eax*4 + 0x10], edi */
L_1718900E:
    esi = MEM32(ebp + (-0x5C)); /* 0x1718900E: mov esi, dword ptr [ebp - 0x5c] */
    PUSH32(esp, esi); /* 0x17189011: push esi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x17189012: push dword ptr [ebp - 0x18] */
    ecx = ebp + (-0xD8); /* 0x17189015: lea ecx, [ebp - 0xd8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718901B: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_17186D57); /* 0x1718901E: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x17189023: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x17189026: push eax */
    eax = ebp + (-0xD8); /* 0x17189027: lea eax, [ebp - 0xd8] */
    PUSH32(esp, eax); /* 0x1718902D: push eax */
    ecx = ebx; /* 0x1718902E: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x17189030: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x17189035: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, MEM32(ebp + (-0x18)) */ /* 0x17189038: cmp ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x10)); /* 0x1718903B: mov edx, dword ptr [ebp - 0x10] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1718903E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17189040: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x17189041: push edi */
    MEM32(edx + eax * 4 + 0x10) = esi; /* 0x17189042: mov dword ptr [edx + eax*4 + 0x10], esi */
    esi = MEM32(ebp + (-0x14)); /* 0x17189046: mov esi, dword ptr [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x17189049: push ecx */
    PUSH32(esp, esi); /* 0x1718904A: push esi */
    ecx = ebp + (-0xD8); /* 0x1718904B: lea ecx, [ebp - 0xd8] */
    RECOMP_CALL(sub_17186D57); /* 0x17189051: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x17189056: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x17189059: push eax */
    eax = ebp + (-0xD8); /* 0x1718905A: lea eax, [ebp - 0xd8] */
    PUSH32(esp, eax); /* 0x17189060: push eax */
    ecx = ebx; /* 0x17189061: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x17189063: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x17189068: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10)); /* 0x1718906B: mov ecx, dword ptr [ebp - 0x10] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1718906E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17189070: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edi; /* 0x17189071: mov dword ptr [ecx + eax*4 + 0x10], edi */
    goto L_1718983B; /* 0x17189075: jmp 0x1718983b */
L_1718907A:
    /* cmp ecx, 2 */ /* 0x1718907A: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17189597; /* 0x1718907D: jne 0x17189597 */
L_17189083:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x84)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x84)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x84)) = MEM32(ebp + (-0x84)) | 0xFFFFFFFFu; /* 0x17189083: or dword ptr [ebp - 0x84], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x88)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x88)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x88)) = MEM32(ebp + (-0x88)) | 0xFFFFFFFFu; /* 0x1718908A: or dword ptr [ebp - 0x88], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17189091: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x7C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x7C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x7C)) = MEM32(ebp + (-0x7C)) | 0xFFFFFFFFu; /* 0x17189093: or dword ptr [ebp - 0x7c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFEu); /* 0x17189097: push -2 */
    eax = POP32_VAL(esp); /* 0x17189099: pop eax */
    MEM32(ebp + (-0x94)) = esi; /* 0x1718909A: mov dword ptr [ebp - 0x94], esi */
    MEM32(ebp + (-0x80)) = esi; /* 0x171890A0: mov dword ptr [ebp - 0x80], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x171890A3: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x171890A6: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x20)) = eax; /* 0x171890A9: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171890AC: mov dword ptr [ebp - 0x1c], eax */
L_171890AF:
    eax = MEM32(ebp + esi + (-0xA4)); /* 0x171890AF: mov eax, dword ptr [ebp + esi - 0xa4] */
    eax = MEM32(eax + 0x1C); /* 0x171890B6: mov eax, dword ptr [eax + 0x1c] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x171890B9: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ebp + esi + (-0x20); /* 0x171890BC: lea edi, [ebp + esi - 0x20] */
    MEM32(edi) = eax; /* 0x171890C0: mov dword ptr [edi], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171890F4; /* 0x171890C2: jne 0x171890f4 */
L_171890C4:
    eax = MEM32(ebp + esi + (-0x74)); /* 0x171890C4: mov eax, dword ptr [ebp + esi - 0x74] */
    PUSH32(esp, edi); /* 0x171890C8: push edi */
    PUSH32(esp, MEM32(ebp + eax * 4 + (-0x48))); /* 0x171890C9: push dword ptr [ebp + eax*4 - 0x48] */
    eax = MEM32(ebp + esi + (-0x78)); /* 0x171890CD: mov eax, dword ptr [ebp + esi - 0x78] */
    PUSH32(esp, MEM32(ebp + eax * 4 + (-0x48))); /* 0x171890D1: push dword ptr [ebp + eax*4 - 0x48] */
    ecx = ebx; /* 0x171890D5: mov ecx, ebx */
    RECOMP_CALL(sub_17188AD1); /* 0x171890D7: call 0x17188ad1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171890DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x171890DE: jl 0x17189850 */
L_171890E4:
    eax = MEM32(ebp + esi + (-0xA4)); /* 0x171890E4: mov eax, dword ptr [ebp + esi - 0xa4] */
    ecx = MEM32(edi); /* 0x171890EB: mov ecx, dword ptr [edi] */
    MEM32(eax + 0x1C) = ecx; /* 0x171890ED: mov dword ptr [eax + 0x1c], ecx */
    _flag_a = (uint32_t)((MEM32(eax + 0x18) | 0x10u)); _flag_b = (uint32_t)((MEM32(eax + 0x18) | 0x10u));
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 0x10u; /* 0x171890F0: or dword ptr [eax + 0x18], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171890F4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171890F4: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 8 */ /* 0x171890F7: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171890AF; /* 0x171890FA: jb 0x171890af */
L_171890FC:
    eax = MEM32(ebp + (-0x74)); /* 0x171890FC: mov eax, dword ptr [ebp - 0x74] */
    eax = MEM32(ebp + eax * 4 + (-0x48)); /* 0x171890FF: mov eax, dword ptr [ebp + eax*4 - 0x48] */
    esi = MEM32(ebp + (-0x20)); /* 0x17189103: mov esi, dword ptr [ebp - 0x20] */
    ecx = ebp + (-0xA8); /* 0x17189106: lea ecx, [ebp - 0xa8] */
    PUSH32(esp, ecx); /* 0x1718910C: push ecx */
    PUSH32(esp, 1); /* 0x1718910D: push 1 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718910F: push dword ptr [ebp - 0xc] */
    ecx = ebx; /* 0x17189112: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17189114: push dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x17189117: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, eax); /* 0x1718911A: push eax */
    PUSH32(esp, esi); /* 0x1718911B: push esi */
    RECOMP_CALL(sub_17188401); /* 0x1718911C: call 0x17188401 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189121: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17189123: jl 0x17189850 */
L_17189129:
    edi = MEM32(ebp + (-0xA8)); /* 0x17189129: mov edi, dword ptr [ebp - 0xa8] */
    eax = ebp + (-0x4); /* 0x1718912F: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17189132: push eax */
    PUSH32(esp, 1); /* 0x17189133: push 1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x17189135: push -1 */
    PUSH32(esp, edi); /* 0x17189137: push edi */
    PUSH32(esp, esi); /* 0x17189138: push esi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17189139: push dword ptr [ebp - 0x1c] */
    ecx = ebx; /* 0x1718913C: mov ecx, ebx */
    RECOMP_CALL(sub_17188379); /* 0x1718913E: call 0x17188379 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189143: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17189145: jl 0x17189850 */
L_1718914B:
    PUSH32(esp, edi); /* 0x1718914B: push edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1718914C: push dword ptr [ebp - 0x14] */
    ecx = ebp + (-0x98); /* 0x1718914F: lea ecx, [ebp - 0x98] */
    PUSH32(esp, esi); /* 0x17189155: push esi */
    RECOMP_CALL(sub_17186D57); /* 0x17189156: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x2C); /* 0x1718915B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1718915E: push eax */
    eax = ebp + (-0x98); /* 0x1718915F: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x17189165: push eax */
    ecx = ebx; /* 0x17189166: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x17189168: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718916D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171891BA; /* 0x1718916F: jne 0x171891ba */
L_17189171:
    PUSH32(esp, 0x20u); /* 0x17189171: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x17189173: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189178: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718917A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17189198; /* 0x1718917B: je 0x17189198 */
L_1718917D:
    PUSH32(esp, 8); /* 0x1718917D: push 8 */
    ecx = POP32_VAL(esp); /* 0x1718917F: pop ecx */
    esi = ebp + (-0x98); /* 0x17189180: lea esi, [ebp - 0x98] */
    edi = eax; /* 0x17189186: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17189188: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x20)); /* 0x1718918A: mov esi, dword ptr [ebp - 0x20] */
    edi = MEM32(ebp + (-0xA8)); /* 0x1718918D: mov edi, dword ptr [ebp - 0xa8] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x17189193: mov dword ptr [ebp - 0x2c], eax */
    goto L_1718919C; /* 0x17189196: jmp 0x1718919c */
L_17189198:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0; /* 0x17189198: and dword ptr [ebp - 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718919C:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1718919C: push dword ptr [ebp - 0x2c] */
    ecx = ebx; /* 0x1718919F: mov ecx, ebx */
    RECOMP_CALL(sub_17187D3C); /* 0x171891A1: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171891A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x171891A8: jl 0x17189850 */
L_171891AE:
    eax = MEM32(ebp + (-0x2C)); /* 0x171891AE: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(eax + 0x18) = 1; /* 0x171891B1: mov dword ptr [eax + 0x18], 1 */
    goto L_171891C7; /* 0x171891B8: jmp 0x171891c7 */
L_171891BA:
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x171891BA: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x2C)); /* 0x171891BD: mov ecx, dword ptr [ebp - 0x2c] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171891C0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171891C2: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edi; /* 0x171891C3: mov dword ptr [ecx + eax*4 + 0x10], edi */
L_171891C7:
    PUSH32(esp, edi); /* 0x171891C7: push edi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x171891C8: push dword ptr [ebp - 0x1c] */
    ecx = ebp + (-0x98); /* 0x171891CB: lea ecx, [ebp - 0x98] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x171891D1: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_17186D57); /* 0x171891D4: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x28); /* 0x171891D9: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x171891DC: push eax */
    eax = ebp + (-0x98); /* 0x171891DD: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x171891E3: push eax */
    ecx = ebx; /* 0x171891E4: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x171891E6: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171891EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17189232; /* 0x171891ED: jne 0x17189232 */
L_171891EF:
    PUSH32(esp, 0x20u); /* 0x171891EF: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x171891F1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171891F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171891F8: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17189210; /* 0x171891F9: je 0x17189210 */
L_171891FB:
    PUSH32(esp, 8); /* 0x171891FB: push 8 */
    ecx = POP32_VAL(esp); /* 0x171891FD: pop ecx */
    esi = ebp + (-0x98); /* 0x171891FE: lea esi, [ebp - 0x98] */
    edi = eax; /* 0x17189204: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17189206: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x20)); /* 0x17189208: mov esi, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1718920B: mov dword ptr [ebp - 0x28], eax */
    goto L_17189214; /* 0x1718920E: jmp 0x17189214 */
L_17189210:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0; /* 0x17189210: and dword ptr [ebp - 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17189214:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x17189214: push dword ptr [ebp - 0x28] */
    ecx = ebx; /* 0x17189217: mov ecx, ebx */
    RECOMP_CALL(sub_17187D3C); /* 0x17189219: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718921E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17189220: jl 0x17189850 */
L_17189226:
    eax = MEM32(ebp + (-0x28)); /* 0x17189226: mov eax, dword ptr [ebp - 0x28] */
    MEM32(eax + 0x18) = 1; /* 0x17189229: mov dword ptr [eax + 0x18], 1 */
    goto L_17189242; /* 0x17189230: jmp 0x17189242 */
L_17189232:
    eax = MEM32(ebp + (-0x1C)); /* 0x17189232: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x17189235: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x17189238: mov ecx, dword ptr [ebp - 0x28] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1718923B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718923D: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edi; /* 0x1718923E: mov dword ptr [ecx + eax*4 + 0x10], edi */
L_17189242:
    eax = MEM32(ebp + (-0x70)); /* 0x17189242: mov eax, dword ptr [ebp - 0x70] */
    eax = MEM32(ebp + eax * 4 + (-0x48)); /* 0x17189245: mov eax, dword ptr [ebp + eax*4 - 0x48] */
    ecx = MEM32(ebp + (-0x78)); /* 0x17189249: mov ecx, dword ptr [ebp - 0x78] */
    edi = MEM32(ebp + ecx * 4 + (-0x48)); /* 0x1718924C: mov edi, dword ptr [ebp + ecx*4 - 0x48] */
    PUSH32(esp, eax); /* 0x17189250: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17189251: push dword ptr [ebp - 0x1c] */
    ecx = ebx; /* 0x17189254: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x17189256: push esi */
    PUSH32(esp, edi); /* 0x17189257: push edi */
    MEM32(ebp + (-0x8)) = eax; /* 0x17189258: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x18)) = edi; /* 0x1718925B: mov dword ptr [ebp - 0x18], edi */
    RECOMP_CALL(sub_17186E1E); /* 0x1718925E: call 0x17186e1e */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x17189263: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + (-0x38); /* 0x17189265: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x17189268: push eax */
    PUSH32(esp, 3); /* 0x17189269: push 3 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718926B: push dword ptr [ebp - 0xc] */
    ecx = ebx; /* 0x1718926E: mov ecx, ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17189400; /* 0x17189270: je 0x17189400 */
L_17189276:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17189276: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x17189279: push esi */
    PUSH32(esp, edi); /* 0x1718927A: push edi */
    RECOMP_CALL(sub_17188401); /* 0x1718927B: call 0x17188401 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189280: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17189282: jl 0x17189850 */
L_17189288:
    eax = ebp + (-0x34); /* 0x17189288: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1718928B: push eax */
    PUSH32(esp, 3); /* 0x1718928C: push 3 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718928E: push dword ptr [ebp - 0xc] */
    ecx = ebx; /* 0x17189291: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17189293: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17189296: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x17189299: push edi */
    RECOMP_CALL(sub_17188401); /* 0x1718929A: call 0x17188401 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718929F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x171892A1: jl 0x17189850 */
L_171892A7:
    /* cmp esi, MEM32(ebp + (-0x1C)) */ /* 0x171892A7: cmp esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x38)); /* 0x171892AA: mov edi, dword ptr [ebp - 0x38] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171892AD: mov ecx, dword ptr [ebp - 4] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171892B0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171892B2: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edi; /* 0x171892B3: mov dword ptr [ecx + eax*4 + 0x10], edi */
    eax = ebp + (-0xB4); /* 0x171892B7: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x171892BD: push eax */
    PUSH32(esp, 1); /* 0x171892BE: push 1 */
    PUSH32(esp, edi); /* 0x171892C0: push edi */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x171892C1: push dword ptr [ebp - 0x34] */
    ecx = ebx; /* 0x171892C4: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x171892C6: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171892C9: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_17188379); /* 0x171892CC: call 0x17188379 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171892D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x171892D3: jl 0x17189850 */
L_171892D9:
    PUSH32(esp, edi); /* 0x171892D9: push edi */
    PUSH32(esp, esi); /* 0x171892DA: push esi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171892DB: push dword ptr [ebp - 0x18] */
    ecx = ebp + (-0x98); /* 0x171892DE: lea ecx, [ebp - 0x98] */
    RECOMP_CALL(sub_17186D57); /* 0x171892E4: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x171892E9: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x171892EC: push eax */
    eax = ebp + (-0x98); /* 0x171892ED: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x171892F3: push eax */
    ecx = ebx; /* 0x171892F4: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x171892F6: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171892FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718933F; /* 0x171892FD: jne 0x1718933f */
L_171892FF:
    PUSH32(esp, 0x20u); /* 0x171892FF: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x17189301: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189306: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17189308: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718931D; /* 0x17189309: je 0x1718931d */
L_1718930B:
    PUSH32(esp, 8); /* 0x1718930B: push 8 */
    ecx = POP32_VAL(esp); /* 0x1718930D: pop ecx */
    esi = ebp + (-0x98); /* 0x1718930E: lea esi, [ebp - 0x98] */
    edi = eax; /* 0x17189314: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17189316: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x30)) = eax; /* 0x17189318: mov dword ptr [ebp - 0x30], eax */
    goto L_17189321; /* 0x1718931B: jmp 0x17189321 */
L_1718931D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x1718931D: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17189321:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x17189321: push dword ptr [ebp - 0x30] */
    ecx = ebx; /* 0x17189324: mov ecx, ebx */
    RECOMP_CALL(sub_17187D3C); /* 0x17189326: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718932B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x1718932D: jl 0x17189850 */
L_17189333:
    eax = MEM32(ebp + (-0x30)); /* 0x17189333: mov eax, dword ptr [ebp - 0x30] */
    MEM32(eax + 0x18) = 1; /* 0x17189336: mov dword ptr [eax + 0x18], 1 */
    goto L_1718934C; /* 0x1718933D: jmp 0x1718934c */
L_1718933F:
    /* cmp MEM32(ebp + (-0x18)), esi */ /* 0x1718933F: cmp dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x30)); /* 0x17189342: mov ecx, dword ptr [ebp - 0x30] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17189345: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17189347: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edi; /* 0x17189348: mov dword ptr [ecx + eax*4 + 0x10], edi */
L_1718934C:
    esi = MEM32(ebp + (-0x34)); /* 0x1718934C: mov esi, dword ptr [ebp - 0x34] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1718934F: mov edi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x17189352: push esi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17189353: push dword ptr [ebp - 8] */
    ecx = ebp + (-0x98); /* 0x17189356: lea ecx, [ebp - 0x98] */
    PUSH32(esp, edi); /* 0x1718935C: push edi */
    RECOMP_CALL(sub_17186D57); /* 0x1718935D: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x17189362: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x17189365: push eax */
    eax = ebp + (-0x98); /* 0x17189366: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x1718936C: push eax */
    ecx = ebx; /* 0x1718936D: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x1718936F: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189374: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171893BB; /* 0x17189376: jne 0x171893bb */
L_17189378:
    PUSH32(esp, 0x20u); /* 0x17189378: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x1718937A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718937F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17189381: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17189399; /* 0x17189382: je 0x17189399 */
L_17189384:
    PUSH32(esp, 8); /* 0x17189384: push 8 */
    ecx = POP32_VAL(esp); /* 0x17189386: pop ecx */
    esi = ebp + (-0x98); /* 0x17189387: lea esi, [ebp - 0x98] */
    edi = eax; /* 0x1718938D: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718938F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x34)); /* 0x17189391: mov esi, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x24)) = eax; /* 0x17189394: mov dword ptr [ebp - 0x24], eax */
    goto L_1718939D; /* 0x17189397: jmp 0x1718939d */
L_17189399:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x17189399: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718939D:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1718939D: push dword ptr [ebp - 0x24] */
    ecx = ebx; /* 0x171893A0: mov ecx, ebx */
    RECOMP_CALL(sub_17187D3C); /* 0x171893A2: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171893A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x171893A9: jl 0x17189850 */
L_171893AF:
    eax = MEM32(ebp + (-0x24)); /* 0x171893AF: mov eax, dword ptr [ebp - 0x24] */
    MEM32(eax + 0x18) = 1; /* 0x171893B2: mov dword ptr [eax + 0x18], 1 */
    goto L_171893C8; /* 0x171893B9: jmp 0x171893c8 */
L_171893BB:
    /* cmp edi, MEM32(ebp + (-0x8)) */ /* 0x171893BB: cmp edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x24)); /* 0x171893BE: mov ecx, dword ptr [ebp - 0x24] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171893C1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171893C3: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = esi; /* 0x171893C4: mov dword ptr [ecx + eax*4 + 0x10], esi */
L_171893C8:
    edi = MEM32(ebp + (-0x18)); /* 0x171893C8: mov edi, dword ptr [ebp - 0x18] */
    PUSH32(esp, 0); /* 0x171893CB: push 0 */
    PUSH32(esp, edi); /* 0x171893CD: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171893CE: push dword ptr [ebp - 8] */
    ecx = ebp + (-0x98); /* 0x171893D1: lea ecx, [ebp - 0x98] */
    RECOMP_CALL(sub_17186D57); /* 0x171893D7: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x171893DC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x171893DF: push eax */
    eax = ebp + (-0x98); /* 0x171893E0: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x171893E6: push eax */
    ecx = ebx; /* 0x171893E7: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x171893E9: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x171893EE: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10)); /* 0x171893F1: mov ecx, dword ptr [ebp - 0x10] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171893F4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171893F6: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = esi; /* 0x171893F7: mov dword ptr [ecx + eax*4 + 0x10], esi */
    goto L_17189588; /* 0x171893FB: jmp 0x17189588 */
L_17189400:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17189400: push dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x17189403: push esi */
    PUSH32(esp, edi); /* 0x17189404: push edi */
    RECOMP_CALL(sub_17188401); /* 0x17189405: call 0x17188401 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718940A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x1718940C: jl 0x17189850 */
L_17189412:
    eax = ebp + (-0x34); /* 0x17189412: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x17189415: push eax */
    PUSH32(esp, 3); /* 0x17189416: push 3 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x17189418: push dword ptr [ebp - 0xc] */
    ecx = ebx; /* 0x1718941B: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718941D: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17189420: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x17189423: push esi */
    RECOMP_CALL(sub_17188401); /* 0x17189424: call 0x17188401 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189429: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x1718942B: jl 0x17189850 */
L_17189431:
    /* cmp esi, MEM32(ebp + (-0x1C)) */ /* 0x17189431: cmp esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x34)); /* 0x17189434: mov edi, dword ptr [ebp - 0x34] */
    ecx = MEM32(ebp + (-0x4)); /* 0x17189437: mov ecx, dword ptr [ebp - 4] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1718943A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718943C: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edi; /* 0x1718943D: mov dword ptr [ecx + eax*4 + 0x10], edi */
    eax = ebp + (-0xB4); /* 0x17189441: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x17189447: push eax */
    PUSH32(esp, 1); /* 0x17189448: push 1 */
    PUSH32(esp, edi); /* 0x1718944A: push edi */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1718944B: push dword ptr [ebp - 0x38] */
    ecx = ebx; /* 0x1718944E: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17189450: push dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x17189453: push esi */
    RECOMP_CALL(sub_17188379); /* 0x17189454: call 0x17188379 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189459: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x1718945B: jl 0x17189850 */
L_17189461:
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x17189461: push dword ptr [ebp - 0x38] */
    ecx = ebp + (-0x98); /* 0x17189464: lea ecx, [ebp - 0x98] */
    PUSH32(esp, esi); /* 0x1718946A: push esi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1718946B: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_17186D57); /* 0x1718946E: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x17189473: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x17189476: push eax */
    eax = ebp + (-0x98); /* 0x17189477: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x1718947D: push eax */
    ecx = ebx; /* 0x1718947E: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x17189480: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189485: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171894CC; /* 0x17189487: jne 0x171894cc */
L_17189489:
    PUSH32(esp, 0x20u); /* 0x17189489: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x1718948B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189490: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17189492: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171894AA; /* 0x17189493: je 0x171894aa */
L_17189495:
    PUSH32(esp, 8); /* 0x17189495: push 8 */
    ecx = POP32_VAL(esp); /* 0x17189497: pop ecx */
    esi = ebp + (-0x98); /* 0x17189498: lea esi, [ebp - 0x98] */
    edi = eax; /* 0x1718949E: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171894A0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x34)); /* 0x171894A2: mov edi, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x30)) = eax; /* 0x171894A5: mov dword ptr [ebp - 0x30], eax */
    goto L_171894AE; /* 0x171894A8: jmp 0x171894ae */
L_171894AA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x171894AA: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171894AE:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x171894AE: push dword ptr [ebp - 0x30] */
    ecx = ebx; /* 0x171894B1: mov ecx, ebx */
    RECOMP_CALL(sub_17187D3C); /* 0x171894B3: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171894B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x171894BA: jl 0x17189850 */
L_171894C0:
    eax = MEM32(ebp + (-0x30)); /* 0x171894C0: mov eax, dword ptr [ebp - 0x30] */
    MEM32(eax + 0x18) = 1; /* 0x171894C3: mov dword ptr [eax + 0x18], 1 */
    goto L_171894DC; /* 0x171894CA: jmp 0x171894dc */
L_171894CC:
    /* cmp MEM32(ebp + (-0x18)), esi */ /* 0x171894CC: cmp dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x30)); /* 0x171894CF: mov ecx, dword ptr [ebp - 0x30] */
    edx = MEM32(ebp + (-0x38)); /* 0x171894D2: mov edx, dword ptr [ebp - 0x38] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171894D5: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171894D7: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edx; /* 0x171894D8: mov dword ptr [ecx + eax*4 + 0x10], edx */
L_171894DC:
    esi = MEM32(ebp + (-0x1C)); /* 0x171894DC: mov esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x171894DF: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171894E0: push dword ptr [ebp - 8] */
    ecx = ebp + (-0x98); /* 0x171894E3: lea ecx, [ebp - 0x98] */
    PUSH32(esp, esi); /* 0x171894E9: push esi */
    RECOMP_CALL(sub_17186D57); /* 0x171894EA: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x171894EF: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171894F2: push eax */
    eax = ebp + (-0x98); /* 0x171894F3: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x171894F9: push eax */
    ecx = ebx; /* 0x171894FA: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x171894FC: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189501: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17189545; /* 0x17189503: jne 0x17189545 */
L_17189505:
    PUSH32(esp, 0x20u); /* 0x17189505: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x17189507: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718950C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718950E: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17189523; /* 0x1718950F: je 0x17189523 */
L_17189511:
    PUSH32(esp, 8); /* 0x17189511: push 8 */
    ecx = POP32_VAL(esp); /* 0x17189513: pop ecx */
    esi = ebp + (-0x98); /* 0x17189514: lea esi, [ebp - 0x98] */
    edi = eax; /* 0x1718951A: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718951C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1718951E: mov dword ptr [ebp - 0x24], eax */
    goto L_17189527; /* 0x17189521: jmp 0x17189527 */
L_17189523:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x17189523: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17189527:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x17189527: push dword ptr [ebp - 0x24] */
    ecx = ebx; /* 0x1718952A: mov ecx, ebx */
    RECOMP_CALL(sub_17187D3C); /* 0x1718952C: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189531: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17189533: jl 0x17189850 */
L_17189539:
    eax = MEM32(ebp + (-0x24)); /* 0x17189539: mov eax, dword ptr [ebp - 0x24] */
    MEM32(eax + 0x18) = 1; /* 0x1718953C: mov dword ptr [eax + 0x18], 1 */
    goto L_17189552; /* 0x17189543: jmp 0x17189552 */
L_17189545:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x17189545: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x24)); /* 0x17189548: mov ecx, dword ptr [ebp - 0x24] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1718954B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718954D: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edi; /* 0x1718954E: mov dword ptr [ecx + eax*4 + 0x10], edi */
L_17189552:
    esi = MEM32(ebp + (-0x18)); /* 0x17189552: mov esi, dword ptr [ebp - 0x18] */
    PUSH32(esp, 0); /* 0x17189555: push 0 */
    PUSH32(esp, esi); /* 0x17189557: push esi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17189558: push dword ptr [ebp - 8] */
    ecx = ebp + (-0x98); /* 0x1718955B: lea ecx, [ebp - 0x98] */
    RECOMP_CALL(sub_17186D57); /* 0x17189561: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x17189566: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x17189569: push eax */
    eax = ebp + (-0x98); /* 0x1718956A: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x17189570: push eax */
    ecx = ebx; /* 0x17189571: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x17189573: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x17189578: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10)); /* 0x1718957B: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x38)); /* 0x1718957E: mov edx, dword ptr [ebp - 0x38] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17189581: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17189583: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edx; /* 0x17189584: mov dword ptr [ecx + eax*4 + 0x10], edx */
L_17189588:
    eax = MEM32(ebp + (-0xB4)); /* 0x17189588: mov eax, dword ptr [ebp - 0xb4] */
    _flag_a = (uint32_t)((MEM32(eax + 0x18) | 2)); _flag_b = (uint32_t)((MEM32(eax + 0x18) | 2));
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 2; /* 0x1718958E: or dword ptr [eax + 0x18], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1718983B; /* 0x17189592: jmp 0x1718983b */
L_17189597:
    /* cmp ecx, 3 */ /* 0x17189597: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718983B; /* 0x1718959A: jne 0x1718983b */
L_171895A0:
    _flag_a = (uint32_t)((MEM32(ebp + (-0xF4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xF4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xF4)) = MEM32(ebp + (-0xF4)) | 0xFFFFFFFFu; /* 0x171895A0: or dword ptr [ebp - 0xf4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xF8)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xF8)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xF8)) = MEM32(ebp + (-0xF8)) | 0xFFFFFFFFu; /* 0x171895A7: or dword ptr [ebp - 0xf8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171895AE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xEC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xEC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xEC)) = MEM32(ebp + (-0xEC)) | 0xFFFFFFFFu; /* 0x171895B0: or dword ptr [ebp - 0xec], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFEu); /* 0x171895B7: push -2 */
    eax = POP32_VAL(esp); /* 0x171895B9: pop eax */
    MEM32(ebp + (-0x104)) = esi; /* 0x171895BA: mov dword ptr [ebp - 0x104], esi */
    MEM32(ebp + (-0xF0)) = esi; /* 0x171895C0: mov dword ptr [ebp - 0xf0], esi */
    MEM32(ebp + (-0x54)) = eax; /* 0x171895C6: mov dword ptr [ebp - 0x54], eax */
    MEM32(ebp + (-0x50)) = eax; /* 0x171895C9: mov dword ptr [ebp - 0x50], eax */
    MEM32(ebp + (-0x4C)) = eax; /* 0x171895CC: mov dword ptr [ebp - 0x4c], eax */
L_171895CF:
    ecx = MEM32(ebp + esi + (-0xA4)); /* 0x171895CF: mov ecx, dword ptr [ebp + esi - 0xa4] */
    ecx = MEM32(ecx + 0x1C); /* 0x171895D6: mov ecx, dword ptr [ecx + 0x1c] */
    /* cmp ecx, eax */ /* 0x171895D9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ebp + esi + (-0x54); /* 0x171895DB: lea edi, [ebp + esi - 0x54] */
    MEM32(edi) = ecx; /* 0x171895DF: mov dword ptr [edi], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17189616; /* 0x171895E1: jne 0x17189616 */
L_171895E3:
    eax = MEM32(ebp + esi + (-0x74)); /* 0x171895E3: mov eax, dword ptr [ebp + esi - 0x74] */
    PUSH32(esp, edi); /* 0x171895E7: push edi */
    PUSH32(esp, MEM32(ebp + eax * 4 + (-0x48))); /* 0x171895E8: push dword ptr [ebp + eax*4 - 0x48] */
    eax = MEM32(ebp + esi + (-0x78)); /* 0x171895EC: mov eax, dword ptr [ebp + esi - 0x78] */
    PUSH32(esp, MEM32(ebp + eax * 4 + (-0x48))); /* 0x171895F0: push dword ptr [ebp + eax*4 - 0x48] */
    ecx = ebx; /* 0x171895F4: mov ecx, ebx */
    RECOMP_CALL(sub_17188AD1); /* 0x171895F6: call 0x17188ad1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171895FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x171895FD: jl 0x17189850 */
L_17189603:
    eax = MEM32(ebp + esi + (-0xA4)); /* 0x17189603: mov eax, dword ptr [ebp + esi - 0xa4] */
    ecx = MEM32(edi); /* 0x1718960A: mov ecx, dword ptr [edi] */
    MEM32(eax + 0x1C) = ecx; /* 0x1718960C: mov dword ptr [eax + 0x1c], ecx */
    _flag_a = (uint32_t)((MEM32(eax + 0x18) | 0x10u)); _flag_b = (uint32_t)((MEM32(eax + 0x18) | 0x10u));
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 0x10u; /* 0x1718960F: or dword ptr [eax + 0x18], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFEu); /* 0x17189613: push -2 */
    eax = POP32_VAL(esp); /* 0x17189615: pop eax */
L_17189616:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17189616: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0xCu */ /* 0x17189619: cmp esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171895CF; /* 0x1718961C: jb 0x171895cf */
L_1718961E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718961E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17189620:
    eax = ebp + esi * 4 + (-0xE8); /* 0x17189620: lea eax, [ebp + esi*4 - 0xe8] */
    PUSH32(esp, eax); /* 0x17189627: push eax */
    PUSH32(esp, 1); /* 0x17189628: push 1 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718962A: push dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718962D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1718962F: push 3 */
    ecx = POP32_VAL(esp); /* 0x17189631: pop ecx */
    eax = esi + 0x2; /* 0x17189632: lea eax, [esi + 2] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x17189635: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + esi * 4 + (-0x78)); /* 0x17189637: mov eax, dword ptr [ebp + esi*4 - 0x78] */
    ecx = ebx; /* 0x1718963B: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + edx * 4 + (-0x54))); /* 0x1718963D: push dword ptr [ebp + edx*4 - 0x54] */
    PUSH32(esp, MEM32(ebp + esi * 4 + (-0x54))); /* 0x17189641: push dword ptr [ebp + esi*4 - 0x54] */
    PUSH32(esp, MEM32(ebp + eax * 4 + (-0x48))); /* 0x17189645: push dword ptr [ebp + eax*4 - 0x48] */
    RECOMP_CALL(sub_17188401); /* 0x17189649: call 0x17188401 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718964E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x17189650: jl 0x17189850 */
L_17189656:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17189656: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 3 */ /* 0x17189657: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17189620; /* 0x1718965A: jb 0x17189620 */
L_1718965C:
    eax = ebp + (-0xDC); /* 0x1718965C: lea eax, [ebp - 0xdc] */
    PUSH32(esp, eax); /* 0x17189662: push eax */
    PUSH32(esp, 1); /* 0x17189663: push 1 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x17189665: push dword ptr [ebp - 0xc] */
    ecx = ebx; /* 0x17189668: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1718966A: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x1718966D: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x17189670: push dword ptr [ebp - 0x54] */
    RECOMP_CALL(sub_17188401); /* 0x17189673: call 0x17188401 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189678: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x1718967A: jl 0x17189850 */
L_17189680:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17189680: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17189682: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17189683: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17189685:
    PUSH32(esp, 3); /* 0x17189685: push 3 */
    ecx = POP32_VAL(esp); /* 0x17189687: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17189688: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1718968A: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1718968C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = ebp + esi + (-0x114); /* 0x1718968E: lea eax, [ebp + esi - 0x114] */
    PUSH32(esp, eax); /* 0x17189695: push eax */
    PUSH32(esp, 1); /* 0x17189696: push 1 */
    ecx = ebx; /* 0x17189698: mov ecx, ebx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1718969A: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1718969A: shl edx, 2 */
    PUSH32(esp, MEM32(ebp + edx + (-0xE8))); /* 0x1718969D: push dword ptr [ebp + edx - 0xe8] */
    PUSH32(esp, MEM32(ebp + (-0xDC))); /* 0x171896A4: push dword ptr [ebp - 0xdc] */
    PUSH32(esp, MEM32(ebp + edx + (-0x54))); /* 0x171896AA: push dword ptr [ebp + edx - 0x54] */
    PUSH32(esp, MEM32(ebp + esi + (-0x54))); /* 0x171896AE: push dword ptr [ebp + esi - 0x54] */
    RECOMP_CALL(sub_17188379); /* 0x171896B2: call 0x17188379 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171896B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x171896B9: jl 0x17189850 */
L_171896BF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171896BF: inc edi */
    _flag_k = FK_INC;
    eax = edi + (-0x1); /* 0x171896C0: lea eax, [edi - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171896C3: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x171896C6: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17189685; /* 0x171896C9: jb 0x17189685 */
L_171896CB:
    edi = ebp + (-0x128); /* 0x171896CB: lea edi, [ebp - 0x128] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171896D1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = 1; /* 0x171896D3: mov dword ptr [ebp - 0xc], 1 */
    MEM32(ebp + (-0x14)) = edi; /* 0x171896DA: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x10)) = esi; /* 0x171896DD: mov dword ptr [ebp - 0x10], esi */
    goto L_171896E8; /* 0x171896E0: jmp 0x171896e8 */
L_171896E2:
    esi = MEM32(ebp + (-0x10)); /* 0x171896E2: mov esi, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x14)); /* 0x171896E5: mov edi, dword ptr [ebp - 0x14] */
L_171896E8:
    eax = MEM32(ebp + esi + (-0xE8)); /* 0x171896E8: mov eax, dword ptr [ebp + esi - 0xe8] */
    ecx = MEM32(ebp + esi + (-0x54)); /* 0x171896EF: mov ecx, dword ptr [ebp + esi - 0x54] */
    edx = MEM32(ebp + esi + (-0x78)); /* 0x171896F3: mov edx, dword ptr [ebp + esi - 0x78] */
    edx = MEM32(ebp + edx * 4 + (-0x48)); /* 0x171896F7: mov edx, dword ptr [ebp + edx*4 - 0x48] */
    PUSH32(esp, eax); /* 0x171896FB: push eax */
    PUSH32(esp, ecx); /* 0x171896FC: push ecx */
    PUSH32(esp, edx); /* 0x171896FD: push edx */
    ecx = ebp + (-0x108); /* 0x171896FE: lea ecx, [ebp - 0x108] */
    MEM32(ebp + (-0x3C)) = edx; /* 0x17189704: mov dword ptr [ebp - 0x3c], edx */
    RECOMP_CALL(sub_17186D57); /* 0x17189707: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = edi + (-0x4); /* 0x1718970C: lea eax, [edi - 4] */
    PUSH32(esp, eax); /* 0x1718970F: push eax */
    eax = ebp + (-0x108); /* 0x17189710: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x17189716: push eax */
    ecx = ebx; /* 0x17189717: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x17189719: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718971E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718976C; /* 0x17189720: jne 0x1718976c */
L_17189722:
    PUSH32(esp, 0x20u); /* 0x17189722: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x17189724: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189729: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718972B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17189746; /* 0x1718972C: je 0x17189746 */
L_1718972E:
    PUSH32(esp, 8); /* 0x1718972E: push 8 */
    ecx = POP32_VAL(esp); /* 0x17189730: pop ecx */
    esi = ebp + (-0x108); /* 0x17189731: lea esi, [ebp - 0x108] */
    edi = eax; /* 0x17189737: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17189739: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x10)); /* 0x1718973B: mov esi, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x14)); /* 0x1718973E: mov edi, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17189741: mov dword ptr [ebp - 4], eax */
    goto L_1718974A; /* 0x17189744: jmp 0x1718974a */
L_17189746:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17189746: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718974A:
    eax = MEM32(ebp + (-0x4)); /* 0x1718974A: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1718974D: push eax */
    ecx = ebx; /* 0x1718974E: mov ecx, ebx */
    MEM32(edi + (-0x4)) = eax; /* 0x17189750: mov dword ptr [edi - 4], eax */
    RECOMP_CALL(sub_17187D3C); /* 0x17189753: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189758: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x1718975A: jl 0x17189850 */
L_17189760:
    eax = MEM32(ebp + (-0x4)); /* 0x17189760: mov eax, dword ptr [ebp - 4] */
    MEM32(eax + 0x18) = 1; /* 0x17189763: mov dword ptr [eax + 0x18], 1 */
    goto L_17189784; /* 0x1718976A: jmp 0x17189784 */
L_1718976C:
    eax = MEM32(ebp + esi + (-0x54)); /* 0x1718976C: mov eax, dword ptr [ebp + esi - 0x54] */
    /* cmp MEM32(ebp + (-0x3C)), eax */ /* 0x17189770: cmp dword ptr [ebp - 0x3c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(edi + (-0x4)); /* 0x17189773: mov edx, dword ptr [edi - 4] */
    ecx = MEM32(ebp + esi + (-0xE8)); /* 0x17189776: mov ecx, dword ptr [ebp + esi - 0xe8] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1718977D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718977F: inc eax */
    _flag_k = FK_INC;
    MEM32(edx + eax * 4 + 0x10) = ecx; /* 0x17189780: mov dword ptr [edx + eax*4 + 0x10], ecx */
L_17189784:
    eax = MEM32(ebp + (-0xC)); /* 0x17189784: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 3); /* 0x17189787: push 3 */
    ecx = POP32_VAL(esp); /* 0x17189789: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718978A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1718978C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + esi + (-0x74)); /* 0x1718978E: mov eax, dword ptr [ebp + esi - 0x74] */
    eax = MEM32(ebp + eax * 4 + (-0x48)); /* 0x17189792: mov eax, dword ptr [ebp + eax*4 - 0x48] */
    ecx = ebp + (-0x108); /* 0x17189796: lea ecx, [ebp - 0x108] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1718979C: mov dword ptr [ebp - 0x3c], eax */
    edx = MEM32(ebp + edx * 4 + (-0xE8)); /* 0x1718979F: mov edx, dword ptr [ebp + edx*4 - 0xe8] */
    PUSH32(esp, edx); /* 0x171897A6: push edx */
    PUSH32(esp, eax); /* 0x171897A7: push eax */
    PUSH32(esp, MEM32(ebp + esi + (-0x54))); /* 0x171897A8: push dword ptr [ebp + esi - 0x54] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171897AC: mov dword ptr [ebp - 4], edx */
    RECOMP_CALL(sub_17186D57); /* 0x171897AF: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171897B4: push edi */
    eax = ebp + (-0x108); /* 0x171897B5: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171897BB: push eax */
    ecx = ebx; /* 0x171897BC: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x171897BE: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171897C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718980C; /* 0x171897C5: jne 0x1718980c */
L_171897C7:
    PUSH32(esp, 0x20u); /* 0x171897C7: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x171897C9: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171897CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171897D0: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171897EB; /* 0x171897D1: je 0x171897eb */
L_171897D3:
    PUSH32(esp, 8); /* 0x171897D3: push 8 */
    ecx = POP32_VAL(esp); /* 0x171897D5: pop ecx */
    esi = ebp + (-0x108); /* 0x171897D6: lea esi, [ebp - 0x108] */
    edi = eax; /* 0x171897DC: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171897DE: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x10)); /* 0x171897E0: mov esi, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x14)); /* 0x171897E3: mov edi, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171897E6: mov dword ptr [ebp - 4], eax */
    goto L_171897EF; /* 0x171897E9: jmp 0x171897ef */
L_171897EB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171897EB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171897EF:
    eax = MEM32(ebp + (-0x4)); /* 0x171897EF: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x171897F2: push eax */
    ecx = ebx; /* 0x171897F3: mov ecx, ebx */
    MEM32(edi) = eax; /* 0x171897F5: mov dword ptr [edi], eax */
    RECOMP_CALL(sub_17187D3C); /* 0x171897F7: call 0x17187d3c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171897FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189850; /* 0x171897FE: jl 0x17189850 */
L_17189800:
    eax = MEM32(ebp + (-0x4)); /* 0x17189800: mov eax, dword ptr [ebp - 4] */
    MEM32(eax + 0x18) = 1; /* 0x17189803: mov dword ptr [eax + 0x18], 1 */
    goto L_1718981F; /* 0x1718980A: jmp 0x1718981f */
L_1718980C:
    eax = MEM32(ebp + esi + (-0x54)); /* 0x1718980C: mov eax, dword ptr [ebp + esi - 0x54] */
    /* cmp eax, MEM32(ebp + (-0x3C)) */ /* 0x17189810: cmp eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(edi); /* 0x17189813: mov ecx, dword ptr [edi] */
    edx = MEM32(ebp + (-0x4)); /* 0x17189815: mov edx, dword ptr [ebp - 4] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17189818: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718981A: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + eax * 4 + 0x10) = edx; /* 0x1718981B: mov dword ptr [ecx + eax*4 + 0x10], edx */
L_1718981F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1718981F: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x17189822: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x17189825: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x17189828: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1718982B: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 3 */ /* 0x1718982C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = esi; /* 0x1718982F: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x14)) = edi; /* 0x17189832: mov dword ptr [ebp - 0x14], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171896E2; /* 0x17189835: jb 0x171896e2 */
L_1718983B:
    eax = MEM32(ebp + (-0x60)); /* 0x1718983B: mov eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718983E: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0xB8)) */ /* 0x1718983F: cmp eax, dword ptr [ebp - 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xB8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_17189845:
    MEM32(ebp + (-0x60)) = eax; /* 0x17189845: mov dword ptr [ebp - 0x60], eax */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_17188D9F; /* 0x17189848: jb 0x17188d9f */
L_1718984E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718984E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17189850:
    edi = POP32_VAL(esp); /* 0x17189850: pop edi */
    esi = POP32_VAL(esp); /* 0x17189851: pop esi */
    ebx = POP32_VAL(esp); /* 0x17189852: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17189853: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17189854: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718985A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718985Au);

L_1718985A:
    edi = edi; /* 0x1718985A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718985C: push ebp */
    ebp = esp; /* 0x1718985D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1718985F: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17189862: push ebx */
    PUSH32(esp, esi); /* 0x17189863: push esi */
    esi = ecx; /* 0x17189864: mov esi, ecx */
    PUSH32(esp, edi); /* 0x17189866: push edi */
    edi = MEM32(ebp + 0xC); /* 0x17189867: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1718986A: push dword ptr [edi + 4] */
    ebx = esi + 0x30; /* 0x1718986D: lea ebx, [esi + 0x30] */
    ecx = ebx; /* 0x17189870: mov ecx, ebx */
    MEM32(ebp + (-0x1C)) = esi; /* 0x17189872: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_17187CFF); /* 0x17189875: call 0x17187cff */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1718987A: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x1718987E: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171899D5; /* 0x17189882: jbe 0x171899d5 */
L_17189888:
    goto L_1718988D; /* 0x17189888: jmp 0x1718988d */
L_1718988A:
    edi = MEM32(ebp + 0xC); /* 0x1718988A: mov edi, dword ptr [ebp + 0xc] */
L_1718988D:
    eax = MEM32(edi); /* 0x1718988D: mov eax, dword ptr [edi] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1718988F: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(eax + ecx * 4); /* 0x17189892: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + 0x8); /* 0x17189895: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x17189898: mov ecx, dword ptr [ecx] */
    edi = MEM32(ecx + eax * 8); /* 0x1718989A: mov edi, dword ptr [ecx + eax*8] */
    eax = MEM32(ecx + eax * 8 + 0x4); /* 0x1718989D: mov eax, dword ptr [ecx + eax*8 + 4] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x30)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x30)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) | 0xFFFFFFFFu; /* 0x171898A1: or dword ptr [ebp - 0x30], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x34)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x34)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) | 0xFFFFFFFFu; /* 0x171898A5: or dword ptr [ebp - 0x34], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x28)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x28)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) | 0xFFFFFFFFu; /* 0x171898A9: or dword ptr [ebp - 0x28], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171898AD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x171898AF: push ecx */
    PUSH32(esp, eax); /* 0x171898B0: push eax */
    MEM32(ebp + (-0x40)) = ecx; /* 0x171898B1: mov dword ptr [ebp - 0x40], ecx */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x171898B4: mov dword ptr [ebp - 0x2c], ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171898B7: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, edi); /* 0x171898BA: push edi */
    ecx = ebp + (-0x44); /* 0x171898BB: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x24)) = edi; /* 0x171898BE: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0x20)) = eax; /* 0x171898C1: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_17186D57); /* 0x171898C4: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4); /* 0x171898C9: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171898CC: push eax */
    eax = ebp + (-0x44); /* 0x171898CD: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x171898D0: push eax */
    ecx = esi; /* 0x171898D1: mov ecx, esi */
    RECOMP_CALL(sub_17187DA9); /* 0x171898D3: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x171898D8: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx + 0x1C); /* 0x171898DB: mov eax, dword ptr [ecx + 0x1c] */
    edx = MEM32(ebx); /* 0x171898DE: mov edx, dword ptr [ebx] */
    MEM32(edx + eax * 4) = eax; /* 0x171898E0: mov dword ptr [edx + eax*4], eax */
    eax = MEM32(ebx); /* 0x171898E3: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + edi * 4), edi */ /* 0x171898E5: cmp dword ptr [eax + edi*4], edi */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171898F8; /* 0x171898E8: jne 0x171898f8 */
L_171898EA:
    edx = eax; /* 0x171898EA: mov edx, eax */
    eax = MEM32(ebp + (-0x20)); /* 0x171898EC: mov eax, dword ptr [ebp - 0x20] */
    /* cmp MEM32(edx + eax * 4), eax */ /* 0x171898EF: cmp dword ptr [edx + eax*4], eax */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171899C3; /* 0x171898F2: je 0x171899c3 */
L_171898F8:
    eax = MEM32(ecx + 0x1C); /* 0x171898F8: mov eax, dword ptr [ecx + 0x1c] */
    MEM32(ebp + (-0x10)) = edi; /* 0x171898FB: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x14)) = eax; /* 0x171898FE: mov dword ptr [ebp - 0x14], eax */
L_17189901:
    eax = MEM32(ebp + (-0x20)); /* 0x17189901: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17189904: mov dword ptr [ebp - 0xc], eax */
L_17189907:
    PUSH32(esp, 0); /* 0x17189907: push 0 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x17189909: push dword ptr [ebp - 0xc] */
    ecx = ebp + (-0x44); /* 0x1718990C: lea ecx, [ebp - 0x44] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718990F: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_17186D57); /* 0x17189912: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4); /* 0x17189917: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1718991A: push eax */
    eax = ebp + (-0x44); /* 0x1718991B: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1718991E: push eax */
    ecx = esi; /* 0x1718991F: mov ecx, esi */
    RECOMP_CALL(sub_17187DA9); /* 0x17189921: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189926: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718999C; /* 0x17189928: je 0x1718999c */
L_1718992A:
    eax = MEM32(ebp + (-0x4)); /* 0x1718992A: mov eax, dword ptr [ebp - 4] */
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x1718992D: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718999C; /* 0x17189931: jge 0x1718999c */
L_17189933:
    ecx = ebp + (-0x18); /* 0x17189933: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x17189936: push ecx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x17189937: push dword ptr [eax + 0xc] */
    ecx = esi; /* 0x1718993A: mov ecx, esi */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1718993C: push dword ptr [eax + 8] */
    RECOMP_CALL(sub_17188AD1); /* 0x1718993F: call 0x17188ad1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189944: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171899D7; /* 0x17189946: jl 0x171899d7 */
L_1718994C:
    edi = MEM32(ebp + (-0x18)); /* 0x1718994C: mov edi, dword ptr [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x1718994F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17189950: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x17189953: mov ecx, esi */
    RECOMP_CALL(sub_17186F26); /* 0x17189955: call 0x17186f26 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1718995A: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1718995C: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4)); /* 0x1718995F: push dword ptr [eax + ecx*4] */
    ecx = ebx; /* 0x17189962: mov ecx, ebx */
    RECOMP_CALL(sub_17175CCD); /* 0x17189964: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189969: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171899D7; /* 0x1718996B: jl 0x171899d7 */
L_1718996D:
    eax = MEM32(ebx); /* 0x1718996D: mov eax, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x14)); /* 0x1718996F: mov edx, dword ptr [ebp - 0x14] */
    MEM32(eax + edx * 4) = edi; /* 0x17189972: mov dword ptr [eax + edx*4], edi */
    eax = MEM32(esi + 0x84); /* 0x17189975: mov eax, dword ptr [esi + 0x84] */
    ecx = MEM32(esi + 0xA4); /* 0x1718997B: mov ecx, dword ptr [esi + 0xa4] */
    ecx = MEM32(ecx); /* 0x17189981: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x17189983: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x17189985: add eax, edi */
    _flag_k = FK_ADD;
    edx = edx + edx * 2; /* 0x17189987: lea edx, [edx + edx*2] */
    eax = eax + eax * 2; /* 0x1718998A: lea eax, [eax + eax*2] */
    esi = ecx + edx * 4; /* 0x1718998D: lea esi, [ecx + edx*4] */
    edi = ecx + eax * 4; /* 0x17189990: lea edi, [ecx + eax*4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189993: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189994: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189995: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x1C)); /* 0x17189996: mov esi, dword ptr [ebp - 0x1c] */
    edi = MEM32(ebp + (-0x24)); /* 0x17189999: mov edi, dword ptr [ebp - 0x24] */
L_1718999C:
    ecx = MEM32(ebp + (-0xC)); /* 0x1718999C: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebx); /* 0x1718999F: mov eax, dword ptr [ebx] */
    eax = MEM32(eax + ecx * 4); /* 0x171899A1: mov eax, dword ptr [eax + ecx*4] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x171899A4: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x171899A7: mov dword ptr [ebp - 0xc], eax */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17189907; /* 0x171899AA: jne 0x17189907 */
L_171899B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x171899B0: mov ecx, dword ptr [ebp - 0x10] */
    eax = MEM32(ebx); /* 0x171899B3: mov eax, dword ptr [ebx] */
    eax = MEM32(eax + ecx * 4); /* 0x171899B5: mov eax, dword ptr [eax + ecx*4] */
    /* cmp eax, edi */ /* 0x171899B8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x171899BA: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17189901; /* 0x171899BD: jne 0x17189901 */
L_171899C3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x171899C3: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x171899C6: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171899C9: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x171899CC: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718988A; /* 0x171899CF: jb 0x1718988a */
L_171899D5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171899D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171899D7:
    edi = POP32_VAL(esp); /* 0x171899D7: pop edi */
    esi = POP32_VAL(esp); /* 0x171899D8: pop esi */
    ebx = POP32_VAL(esp); /* 0x171899D9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171899DA: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171899DB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171899E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171899E3u);

L_171899E3:
    edi = edi; /* 0x171899E3: mov edi, edi */
    PUSH32(esp, esi); /* 0x171899E5: push esi */
    esi = ecx; /* 0x171899E6: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171899E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x171899EA: push 8 */
    MEM32(esi) = eax; /* 0x171899EC: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x171899EE: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x171899F1: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_17188920); /* 0x171899F4: call 0x17188920 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x171899F9: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x171899FC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171899FE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171899FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_17189A05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17189A05u);

L_17189A05:
    edi = edi; /* 0x17189A05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17189A07: push ebp */
    ebp = esp; /* 0x17189A08: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17189A0A: push esi */
    PUSH32(esp, edi); /* 0x17189A0B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17189A0C: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x17189A0F: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x17189A11: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17189A1A; /* 0x17189A14: jne 0x17189a1a */
L_17189A16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17189A16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17189A26; /* 0x17189A18: jmp 0x17189a26 */
L_17189A1A:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x17189A1A: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17189A1E: push edi */
    ecx = esi; /* 0x17189A1F: mov ecx, esi */
    RECOMP_CALL(sub_17188920); /* 0x17189A21: call 0x17188920 */
    RECOMP_FLAGS_IN();
L_17189A26:
    MEM32(esi + 0x4) = edi; /* 0x17189A26: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x17189A29: pop edi */
    esi = POP32_VAL(esp); /* 0x17189A2A: pop esi */
    ebp = POP32_VAL(esp); /* 0x17189A2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17189A2C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17189A34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17189A34u);

L_17189A34:
    eax = 0x1721C464u; /* 0x17189A34: mov eax, 0x1721c464 */
    RECOMP_CALL(sub_1721B168); /* 0x17189A39: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x17189A3E: push ecx */
    PUSH32(esp, ebx); /* 0x17189A3F: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17189A40: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17189A42: push esi */
    esi = ecx; /* 0x17189A43: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x17189A45: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi + 0x4) = ebx; /* 0x17189A48: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x17189A4B: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0xC) = ebx; /* 0x17189A4E: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi) = ebx; /* 0x17189A51: mov dword ptr [esi], ebx */
    ecx = esi + 0x10; /* 0x17189A53: lea ecx, [esi + 0x10] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x17189A56: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_17195352); /* 0x17189A59: call 0x17195352 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x20; /* 0x17189A5E: lea ecx, [esi + 0x20] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x17189A61: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_17195352); /* 0x17189A65: call 0x17195352 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x30; /* 0x17189A6A: lea ecx, [esi + 0x30] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x17189A6D: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_17195352); /* 0x17189A71: call 0x17195352 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x40; /* 0x17189A76: lea ecx, [esi + 0x40] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x17189A79: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_17187DF6); /* 0x17189A7D: call 0x17187df6 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x50; /* 0x17189A82: lea ecx, [esi + 0x50] */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x17189A85: mov byte ptr [ebp - 4], 4 */
    RECOMP_CALL(sub_17187ECE); /* 0x17189A89: call 0x17187ece */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x60; /* 0x17189A8E: lea ecx, [esi + 0x60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x17189A91: mov byte ptr [ebp - 4], 5 */
    RECOMP_CALL(sub_17187ECE); /* 0x17189A95: call 0x17187ece */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x70; /* 0x17189A9A: lea ecx, [esi + 0x70] */
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x17189A9D: mov byte ptr [ebp - 4], 6 */
    RECOMP_CALL(sub_171899E3); /* 0x17189AA1: call 0x171899e3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0x90) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x90) | 0xFFFFFFFFu));
    MEM32(esi + 0x90) = MEM32(esi + 0x90) | 0xFFFFFFFFu; /* 0x17189AA6: or dword ptr [esi + 0x90], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0x94) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x94) | 0xFFFFFFFFu));
    MEM32(esi + 0x94) = MEM32(esi + 0x94) | 0xFFFFFFFFu; /* 0x17189AAD: or dword ptr [esi + 0x94], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0x98) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x98) | 0xFFFFFFFFu));
    MEM32(esi + 0x98) = MEM32(esi + 0x98) | 0xFFFFFFFFu; /* 0x17189AB4: or dword ptr [esi + 0x98], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x17189ABB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x80) = ebx; /* 0x17189ABE: mov dword ptr [esi + 0x80], ebx */
    MEM32(esi + 0x84) = ebx; /* 0x17189AC4: mov dword ptr [esi + 0x84], ebx */
    MEM32(esi + 0x88) = ebx; /* 0x17189ACA: mov dword ptr [esi + 0x88], ebx */
    MEM32(esi + 0x8C) = ebx; /* 0x17189AD0: mov dword ptr [esi + 0x8c], ebx */
    MEM32(esi + 0x9C) = ebx; /* 0x17189AD6: mov dword ptr [esi + 0x9c], ebx */
    MEM32(esi + 0xA0) = ebx; /* 0x17189ADC: mov dword ptr [esi + 0xa0], ebx */
    MEM32(esi + 0xA4) = ebx; /* 0x17189AE2: mov dword ptr [esi + 0xa4], ebx */
    MEM32(esi + 0xA8) = ebx; /* 0x17189AE8: mov dword ptr [esi + 0xa8], ebx */
    MEM8(esi + 0xAC) = (uint8_t)(LO8(ebx)); /* 0x17189AEE: mov byte ptr [esi + 0xac], bl */
    MEM8(esi + 0xAD) = (uint8_t)(LO8(ebx)); /* 0x17189AF4: mov byte ptr [esi + 0xad], bl */
    eax = esi; /* 0x17189AFA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17189AFC: pop esi */
    ebx = POP32_VAL(esp); /* 0x17189AFD: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x17189AFE: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17189B05: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17189B06: ret  */
    RECOMP_REGS_OUT();
}

void sub_17189B0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17189B0Cu);

L_17189B0C:
    edi = edi; /* 0x17189B0C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17189B0E: push ebp */
    ebp = esp; /* 0x17189B0F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x17189B11: sub esp, 0x68 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17189B14: push ebx */
    ebx = ecx; /* 0x17189B15: mov ebx, ecx */
    eax = MEM32(ebx + 0x80); /* 0x17189B17: mov eax, dword ptr [ebx + 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x17189B1D: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x9C); /* 0x17189B20: mov ecx, dword ptr [ebx + 0x9c] */
    ecx = MEM32(ecx); /* 0x17189B26: mov ecx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x17189B28: push esi */
    eax = eax + eax * 2; /* 0x17189B29: lea eax, [eax + eax*2] */
    esi = ecx + eax * 4; /* 0x17189B2C: lea esi, [ecx + eax*4] */
    PUSH32(esp, edi); /* 0x17189B2F: push edi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x17189B30: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0xC)) = 1; /* 0x17189B33: mov dword ptr [ebp - 0xc], 1 */
    MEM32(ebp + (-0x8)) = esi; /* 0x17189B3A: mov dword ptr [ebp - 8], esi */
    goto L_17189B42; /* 0x17189B3D: jmp 0x17189b42 */
L_17189B3F:
    esi = MEM32(ebp + (-0x1C)); /* 0x17189B3F: mov esi, dword ptr [ebp - 0x1c] */
L_17189B42:
    eax = MEM32(ebp + (-0xC)); /* 0x17189B42: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 3); /* 0x17189B45: push 3 */
    ecx = POP32_VAL(esp); /* 0x17189B47: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17189B48: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x17189B4A: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17189B4C: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x17189B4F: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x34)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x34)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) | 0xFFFFFFFFu; /* 0x17189B52: or dword ptr [ebp - 0x34], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x38)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x38)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) | 0xFFFFFFFFu; /* 0x17189B56: or dword ptr [ebp - 0x38], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x2C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x2C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) | 0xFFFFFFFFu; /* 0x17189B5A: or dword ptr [ebp - 0x2c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17189B5E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x48); /* 0x17189B60: lea ecx, [ebp - 0x48] */
    MEM32(ebp + (-0x44)) = edi; /* 0x17189B63: mov dword ptr [ebp - 0x44], edi */
    MEM32(ebp + (-0x30)) = edi; /* 0x17189B66: mov dword ptr [ebp - 0x30], edi */
    esi = esi + edx * 4; /* 0x17189B69: lea esi, [esi + edx*4] */
    PUSH32(esp, MEM32(esi)); /* 0x17189B6C: push dword ptr [esi] */
    MEM32(ebp + (-0x28)) = esi; /* 0x17189B6E: mov dword ptr [ebp - 0x28], esi */
    PUSH32(esp, MEM32(eax)); /* 0x17189B71: push dword ptr [eax] */
    RECOMP_CALL(sub_17186D57); /* 0x17189B73: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4); /* 0x17189B78: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17189B7B: push eax */
    eax = ebp + (-0x48); /* 0x17189B7C: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x17189B7F: push eax */
    ecx = ebx; /* 0x17189B80: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = edi; /* 0x17189B82: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_17187DA9); /* 0x17189B85: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x17189B8A: mov eax, dword ptr [ebp - 4] */
    edi = eax + 0x1C; /* 0x17189B8D: lea edi, [eax + 0x1c] */
    /* cmp MEM32(edi), 0 */ /* 0x17189B90: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_17189CC4; /* 0x17189B93: jge 0x17189cc4 */
L_17189B99:
    PUSH32(esp, edi); /* 0x17189B99: push edi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x17189B9A: push dword ptr [eax + 0xc] */
    ecx = ebx; /* 0x17189B9D: mov ecx, ebx */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x17189B9F: push dword ptr [eax + 8] */
    MEM32(ebp + (-0x24)) = eax; /* 0x17189BA2: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_17188AD1); /* 0x17189BA5: call 0x17188ad1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189BAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189CFF; /* 0x17189BAC: jl 0x17189cff */
L_17189BB2:
    PUSH32(esp, MEM32(edi)); /* 0x17189BB2: push dword ptr [edi] */
    esi = ebx + 0x30; /* 0x17189BB4: lea esi, [ebx + 0x30] */
    ecx = esi; /* 0x17189BB7: mov ecx, esi */
    RECOMP_CALL(sub_17175CCD); /* 0x17189BB9: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189BBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189CFF; /* 0x17189BC0: jl 0x17189cff */
L_17189BC6:
    eax = MEM32(esi); /* 0x17189BC6: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x40)); /* 0x17189BC8: mov ecx, dword ptr [ebp - 0x40] */
    /* cmp MEM32(eax + ecx * 4), ecx */ /* 0x17189BCB: cmp dword ptr [eax + ecx*4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17189BDC; /* 0x17189BCE: jne 0x17189bdc */
L_17189BD0:
    edx = MEM32(ebp + (-0x3C)); /* 0x17189BD0: mov edx, dword ptr [ebp - 0x3c] */
    /* cmp MEM32(eax + edx * 4), edx */ /* 0x17189BD3: cmp dword ptr [eax + edx*4], edx */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17189CBE; /* 0x17189BD6: je 0x17189cbe */
L_17189BDC:
    edi = MEM32(edi); /* 0x17189BDC: mov edi, dword ptr [edi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x54)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x54)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x54)) = MEM32(ebp + (-0x54)) | 0xFFFFFFFFu; /* 0x17189BDE: or dword ptr [ebp - 0x54], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x58)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x58)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x58)) = MEM32(ebp + (-0x58)) | 0xFFFFFFFFu; /* 0x17189BE2: or dword ptr [ebp - 0x58], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x64)) = MEM32(ebp + (-0x64)) & 0; /* 0x17189BE6: and dword ptr [ebp - 0x64], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) & 0; /* 0x17189BEA: and dword ptr [ebp - 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4C)) = MEM32(ebp + (-0x4C)) | 0xFFFFFFFFu; /* 0x17189BEE: or dword ptr [ebp - 0x4c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x17189BF2: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x20)) = edi; /* 0x17189BF5: mov dword ptr [ebp - 0x20], edi */
L_17189BF8:
    eax = MEM32(ebp + (-0x3C)); /* 0x17189BF8: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x10)) = eax; /* 0x17189BFB: mov dword ptr [ebp - 0x10], eax */
L_17189BFE:
    PUSH32(esp, 0); /* 0x17189BFE: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x17189C00: push dword ptr [ebp - 0x10] */
    ecx = ebp + (-0x68); /* 0x17189C03: lea ecx, [ebp - 0x68] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x17189C06: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_17186D57); /* 0x17189C09: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4); /* 0x17189C0E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17189C11: push eax */
    eax = ebp + (-0x68); /* 0x17189C12: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x17189C15: push eax */
    ecx = ebx; /* 0x17189C16: mov ecx, ebx */
    RECOMP_CALL(sub_17187DA9); /* 0x17189C18: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189C1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17189C93; /* 0x17189C1F: je 0x17189c93 */
L_17189C21:
    eax = MEM32(ebp + (-0x4)); /* 0x17189C21: mov eax, dword ptr [ebp - 4] */
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x17189C24: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_17189C93; /* 0x17189C28: jge 0x17189c93 */
L_17189C2A:
    ecx = ebp + (-0x18); /* 0x17189C2A: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x17189C2D: push ecx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x17189C2E: push dword ptr [eax + 0xc] */
    ecx = ebx; /* 0x17189C31: mov ecx, ebx */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x17189C33: push dword ptr [eax + 8] */
    RECOMP_CALL(sub_17188AD1); /* 0x17189C36: call 0x17188ad1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189C3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189CFF; /* 0x17189C3D: jl 0x17189cff */
L_17189C43:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x17189C43: push dword ptr [ebp - 0x18] */
    ecx = ebx; /* 0x17189C46: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17189C48: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_17186F26); /* 0x17189C4B: call 0x17186f26 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x17189C50: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x17189C52: push dword ptr [eax + edi*4] */
    ecx = esi; /* 0x17189C55: mov ecx, esi */
    RECOMP_CALL(sub_17175CCD); /* 0x17189C57: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189C5C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189CFF; /* 0x17189C5E: jl 0x17189cff */
L_17189C64:
    eax = MEM32(esi); /* 0x17189C64: mov eax, dword ptr [esi] */
    esi = MEM32(ebp + (-0x18)); /* 0x17189C66: mov esi, dword ptr [ebp - 0x18] */
    MEM32(eax + edi * 4) = esi; /* 0x17189C69: mov dword ptr [eax + edi*4], esi */
    eax = MEM32(ebx + 0x84); /* 0x17189C6C: mov eax, dword ptr [ebx + 0x84] */
    ecx = MEM32(ebx + 0xA4); /* 0x17189C72: mov ecx, dword ptr [ebx + 0xa4] */
    ecx = MEM32(ecx); /* 0x17189C78: mov ecx, dword ptr [ecx] */
    edx = eax + edi; /* 0x17189C7A: lea edx, [eax + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17189C7D: add eax, esi */
    _flag_k = FK_ADD;
    edx = edx + edx * 2; /* 0x17189C7F: lea edx, [edx + edx*2] */
    edx = ecx + edx * 4; /* 0x17189C82: lea edx, [ecx + edx*4] */
    eax = eax + eax * 2; /* 0x17189C85: lea eax, [eax + eax*2] */
    edi = ecx + eax * 4; /* 0x17189C88: lea edi, [ecx + eax*4] */
    esi = edx; /* 0x17189C8B: mov esi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189C8D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189C8E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189C8F: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x20)); /* 0x17189C90: mov edi, dword ptr [ebp - 0x20] */
L_17189C93:
    ecx = MEM32(ebp + (-0x10)); /* 0x17189C93: mov ecx, dword ptr [ebp - 0x10] */
    esi = ebx + 0x30; /* 0x17189C96: lea esi, [ebx + 0x30] */
    eax = MEM32(esi); /* 0x17189C99: mov eax, dword ptr [esi] */
    eax = MEM32(eax + ecx * 4); /* 0x17189C9B: mov eax, dword ptr [eax + ecx*4] */
    /* cmp eax, MEM32(ebp + (-0x3C)) */ /* 0x17189C9E: cmp eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x17189CA1: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17189BFE; /* 0x17189CA4: jne 0x17189bfe */
L_17189CAA:
    ecx = MEM32(ebp + (-0x14)); /* 0x17189CAA: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(esi); /* 0x17189CAD: mov eax, dword ptr [esi] */
    eax = MEM32(eax + ecx * 4); /* 0x17189CAF: mov eax, dword ptr [eax + ecx*4] */
    /* cmp eax, MEM32(ebp + (-0x40)) */ /* 0x17189CB2: cmp eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x17189CB5: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17189BF8; /* 0x17189CB8: jne 0x17189bf8 */
L_17189CBE:
    eax = MEM32(ebp + (-0x24)); /* 0x17189CBE: mov eax, dword ptr [ebp - 0x24] */
    esi = MEM32(ebp + (-0x28)); /* 0x17189CC1: mov esi, dword ptr [ebp - 0x28] */
L_17189CC4:
    ecx = MEM32(esi); /* 0x17189CC4: mov ecx, dword ptr [esi] */
    edx = MEM32(ebp + (-0x8)); /* 0x17189CC6: mov edx, dword ptr [ebp - 8] */
    /* cmp ecx, MEM32(edx) */ /* 0x17189CC9: cmp ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17189CCB: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(eax + ecx * 4 + 0x14); /* 0x17189CCD: mov eax, dword ptr [eax + ecx*4 + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17189CD1: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x17189CD2: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17189CE0; /* 0x17189CD5: je 0x17189ce0 */
L_17189CD7:
    ecx = MEM32(ebx + 0x10); /* 0x17189CD7: mov ecx, dword ptr [ebx + 0x10] */
    eax = ecx + eax * 4; /* 0x17189CDA: lea eax, [ecx + eax*4] */
    _flag_a = (uint32_t)((MEM32(eax) | 4)); _flag_b = (uint32_t)((MEM32(eax) | 4));
    MEM32(eax) = MEM32(eax) | 4; /* 0x17189CDD: or dword ptr [eax], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17189CE0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x17189CE0: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 4; /* 0x17189CE3: add dword ptr [ebp - 8], 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0xC)), 4 */ /* 0x17189CE7: cmp dword ptr [ebp - 0xc], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17189B3F; /* 0x17189CEB: jb 0x17189b3f */
L_17189CF1:
    eax = MEM32(ebx + 0x10); /* 0x17189CF1: mov eax, dword ptr [ebx + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x17189CF4: mov ecx, dword ptr [ebp + 8] */
    eax = eax + ecx * 4; /* 0x17189CF7: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)((MEM32(eax) | 4)); _flag_b = (uint32_t)((MEM32(eax) | 4));
    MEM32(eax) = MEM32(eax) | 4; /* 0x17189CFA: or dword ptr [eax], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17189CFD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17189CFF:
    edi = POP32_VAL(esp); /* 0x17189CFF: pop edi */
    esi = POP32_VAL(esp); /* 0x17189D00: pop esi */
    ebx = POP32_VAL(esp); /* 0x17189D01: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17189D02: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17189D03: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17189D0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17189D0Bu);

L_17189D0B:
    eax = 0x1721C47Bu; /* 0x17189D0B: mov eax, 0x1721c47b */
    RECOMP_CALL(sub_1721B168); /* 0x17189D10: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x17189D15: sub esp, 0x3c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17189D18: push ebx */
    PUSH32(esp, esi); /* 0x17189D19: push esi */
    esi = ecx; /* 0x17189D1A: mov esi, ecx */
    PUSH32(esp, edi); /* 0x17189D1C: push edi */
    ecx = ebp + (-0x38); /* 0x17189D1D: lea ecx, [ebp - 0x38] */
    MEM32(ebp + (-0x24)) = esi; /* 0x17189D20: mov dword ptr [ebp - 0x24], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17189D23: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_17195352); /* 0x17189D25: call 0x17195352 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x14); /* 0x17189D2A: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x88));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x88); /* 0x17189D2D: sub eax, dword ptr [esi + 0x88] */
    _flag_k = FK_CMP;
    ebx = esi + 0x70; /* 0x17189D33: lea ebx, [esi + 0x70] */
    PUSH32(esp, eax); /* 0x17189D36: push eax */
    ecx = ebx; /* 0x17189D37: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = edi; /* 0x17189D39: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_17189A05); /* 0x17189D3C: call 0x17189a05 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189D41: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x17189D43: mov dword ptr [ebp - 0x1c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189E9B; /* 0x17189D46: jl 0x17189e9b */
L_17189D4C:
    PUSH32(esp, MEM32(esi + 0x88)); /* 0x17189D4C: push dword ptr [esi + 0x88] */
    ecx = esi + 0x60; /* 0x17189D52: lea ecx, [esi + 0x60] */
    RECOMP_CALL(sub_1718BF46); /* 0x17189D55: call 0x1718bf46 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189D5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x17189D5C: mov dword ptr [ebp - 0x1c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189E9B; /* 0x17189D5F: jl 0x17189e9b */
L_17189D65:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & edi; /* 0x17189D65: and dword ptr [ebp - 0x18], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x88), edi */ /* 0x17189D68: cmp dword ptr [esi + 0x88], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x88)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17189E9B; /* 0x17189D6E: jbe 0x17189e9b */
L_17189D74:
    ecx = MEM32(esi + 0x60); /* 0x17189D74: mov ecx, dword ptr [esi + 0x60] */
    eax = MEM32(ebp + (-0x18)); /* 0x17189D77: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x17189D7A: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + eax * 8) = edi; /* 0x17189D7E: mov dword ptr [ecx + eax*8], edi */
    ecx = ebp + (-0x14); /* 0x17189D81: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x17189D84: push ecx */
    ecx = ebp + (-0x48); /* 0x17189D85: lea ecx, [ebp - 0x48] */
    PUSH32(esp, ecx); /* 0x17189D88: push ecx */
    PUSH32(esp, eax); /* 0x17189D89: push eax */
    ecx = esi; /* 0x17189D8A: mov ecx, esi */
    RECOMP_CALL(sub_17188626); /* 0x17189D8C: call 0x17188626 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17189D91: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x17189D95: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17189DD8; /* 0x17189D99: jbe 0x17189dd8 */
L_17189D9B:
    eax = edi + edi * 8; /* 0x17189D9B: lea eax, [edi + edi*8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17189D9E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17189D9E: shl eax, 2 */
    MEM32(ebp + (-0x20)) = eax; /* 0x17189DA1: mov dword ptr [ebp - 0x20], eax */
L_17189DA4:
    PUSH32(esp, edi); /* 0x17189DA4: push edi */
    ecx = ebp + (-0x38); /* 0x17189DA5: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_17175CCD); /* 0x17189DA8: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189DAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x17189DAF: mov dword ptr [ebp - 0x1c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189E9B; /* 0x17189DB2: jl 0x17189e9b */
L_17189DB8:
    ecx = MEM32(ebp + (-0x10)); /* 0x17189DB8: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x20)); /* 0x17189DBB: mov edx, dword ptr [ebp - 0x20] */
    eax = MEM32(ebx); /* 0x17189DBE: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + 0x24u; /* 0x17189DC0: add dword ptr [ebp - 0x20], 0x24 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + ecx * 4 + (-0x48)); /* 0x17189DC4: mov ecx, dword ptr [ebp + ecx*4 - 0x48] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17189DC8: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x17189DC9: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    MEM32(eax + edx + 0x8) = ecx; /* 0x17189DCC: mov dword ptr [eax + edx + 8], ecx */
    eax = MEM32(ebp + (-0x10)); /* 0x17189DD0: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x17189DD3: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17189DA4; /* 0x17189DD6: jb 0x17189da4 */
L_17189DD8:
    eax = MEM32(esi + 0x60); /* 0x17189DD8: mov eax, dword ptr [esi + 0x60] */
    ecx = MEM32(ebp + (-0x18)); /* 0x17189DDB: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(eax + ecx * 8 + 0x4) = edi; /* 0x17189DDE: mov dword ptr [eax + ecx*8 + 4], edi */
    eax = ebp + (-0x28); /* 0x17189DE2: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x17189DE5: push eax */
    ecx = ebp + (-0x38); /* 0x17189DE6: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_17186A8C); /* 0x17189DE9: call 0x17186a8c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x17189DEE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17189E89; /* 0x17189DF0: je 0x17189e89 */
L_17189DF6:
    esi = MEM32(ebp + (-0x28)); /* 0x17189DF6: mov esi, dword ptr [ebp - 0x28] */
    eax = MEM32(ebx); /* 0x17189DF9: mov eax, dword ptr [ebx] */
    esi = esi + esi * 8; /* 0x17189DFB: lea esi, [esi + esi*8] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x17189DFE: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x17189DFE: shl esi, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17189E01: add eax, esi */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x8); /* 0x17189E03: mov ecx, dword ptr [eax + 8] */
    MEM32(eax) = edi; /* 0x17189E06: mov dword ptr [eax], edi */
    eax = ebp + (-0x14); /* 0x17189E08: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x17189E0B: push eax */
    eax = ebp + (-0x48); /* 0x17189E0C: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x17189E0F: push eax */
    PUSH32(esp, ecx); /* 0x17189E10: push ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x17189E11: mov ecx, dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_17188626); /* 0x17189E14: call 0x17188626 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x17189E19: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + (-0x24)); /* 0x17189E1B: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17189E1E: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17189E20: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x17189E21: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_17186FBC); /* 0x17189E24: call 0x17186fbc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17189E29: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x17189E2D: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17189E6C; /* 0x17189E31: jbe 0x17189e6c */
L_17189E33:
    eax = edi + edi * 8; /* 0x17189E33: lea eax, [edi + edi*8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17189E36: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17189E36: shl eax, 2 */
    MEM32(ebp + (-0x20)) = eax; /* 0x17189E39: mov dword ptr [ebp - 0x20], eax */
L_17189E3C:
    PUSH32(esp, edi); /* 0x17189E3C: push edi */
    ecx = ebp + (-0x38); /* 0x17189E3D: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_17175CCD); /* 0x17189E40: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189E45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x17189E47: mov dword ptr [ebp - 0x1c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17189E9B; /* 0x17189E4A: jl 0x17189e9b */
L_17189E4C:
    ecx = MEM32(ebp + (-0x10)); /* 0x17189E4C: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x20)); /* 0x17189E4F: mov edx, dword ptr [ebp - 0x20] */
    eax = MEM32(ebx); /* 0x17189E52: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + 0x24u; /* 0x17189E54: add dword ptr [ebp - 0x20], 0x24 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + ecx * 4 + (-0x48)); /* 0x17189E58: mov ecx, dword ptr [ebp + ecx*4 - 0x48] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17189E5C: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x17189E5D: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    MEM32(eax + edx + 0x8) = ecx; /* 0x17189E60: mov dword ptr [eax + edx + 8], ecx */
    eax = MEM32(ebp + (-0x10)); /* 0x17189E64: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x17189E67: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17189E3C; /* 0x17189E6A: jb 0x17189e3c */
L_17189E6C:
    eax = MEM32(ebx); /* 0x17189E6C: mov eax, dword ptr [ebx] */
    MEM32(eax + esi + 0x4) = edi; /* 0x17189E6E: mov dword ptr [eax + esi + 4], edi */
    eax = ebp + (-0x28); /* 0x17189E72: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x17189E75: push eax */
    ecx = ebp + (-0x38); /* 0x17189E76: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_17186A8C); /* 0x17189E79: call 0x17186a8c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x17189E7E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17189DF6; /* 0x17189E80: jne 0x17189df6 */
L_17189E86:
    esi = MEM32(ebp + (-0x24)); /* 0x17189E86: mov esi, dword ptr [ebp - 0x24] */
L_17189E89:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 1; /* 0x17189E89: inc dword ptr [ebp - 0x18] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x18)); /* 0x17189E8C: mov eax, dword ptr [ebp - 0x18] */
    /* cmp eax, MEM32(esi + 0x88) */ /* 0x17189E8F: cmp eax, dword ptr [esi + 0x88] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x88));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17189D74; /* 0x17189E95: jb 0x17189d74 */
L_17189E9B:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x17189E9B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x38); /* 0x17189E9F: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1717AF06); /* 0x17189EA2: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x17189EA7: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x1C)); /* 0x17189EAA: mov eax, dword ptr [ebp - 0x1c] */
    edi = POP32_VAL(esp); /* 0x17189EAD: pop edi */
    esi = POP32_VAL(esp); /* 0x17189EAE: pop esi */
    ebx = POP32_VAL(esp); /* 0x17189EAF: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x17189EB0: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17189EB7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17189EB8: ret  */
    RECOMP_REGS_OUT();
}

void sub_17189EBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17189EBEu);

L_17189EBE:
    edi = edi; /* 0x17189EBE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17189EC0: push ebp */
    ebp = esp; /* 0x17189EC1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x17189EC3: sub esp, 0x4c */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x17189EC6: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17189ECA: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17189ECB: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17189ECE: push esi */
    PUSH32(esp, edi); /* 0x17189ECF: push edi */
    ecx = ebx; /* 0x17189ED0: mov ecx, ebx */
    MEM32(ebp + (-0x8)) = 5; /* 0x17189ED2: mov dword ptr [ebp - 8], 5 */
    MEM32(ebp + (-0x4)) = 0x3727C5ACu; /* 0x17189ED9: mov dword ptr [ebp - 4], 0x3727c5ac */
    RECOMP_CALL(sub_17174E5D); /* 0x17189EE0: call 0x17174e5d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17189EE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A112; /* 0x17189EE7: jl 0x1718a112 */
L_17189EED:
    eax = MEM32(ebp + 0x10); /* 0x17189EED: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x17189EF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17189EF7; /* 0x17189EF2: je 0x17189ef7 */
L_17189EF4:
    MEM32(ebp + (-0x8)) = eax; /* 0x17189EF4: mov dword ptr [ebp - 8], eax */
L_17189EF7:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17189EF7: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x17189EFA: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17189F00: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17189F02: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17189F2F; /* 0x17189F05: jne 0x17189f2f */
L_17189F07:
    eax = MEM32(ebx + 0x4); /* 0x17189F07: mov eax, dword ptr [ebx + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17189F0A: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x90); /* 0x17189F0D: fmul dword ptr [eax + 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17189F13: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(0x17005DA4)); /* 0x17189F16: fld dword ptr [0x17005da4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17189F1C: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17189F1F: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17189F21: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17189F23: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17189F2D; /* 0x17189F26: jp 0x17189f2d */
L_17189F28:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17189F28: fstp dword ptr [ebp - 4] */
    goto L_17189F2F; /* 0x17189F2B: jmp 0x17189f2f */
L_17189F2D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17189F2D: fstp st(0) */
L_17189F2F:
    eax = MEM32(ebx + 0x4); /* 0x17189F2F: mov eax, dword ptr [ebx + 4] */
    esi = MEM32(eax + 0x40); /* 0x17189F32: mov esi, dword ptr [eax + 0x40] */
    PUSH32(esp, 0x10u); /* 0x17189F35: push 0x10 */
    edi = ebx + 0x74; /* 0x17189F37: lea edi, [ebx + 0x74] */
    PUSH32(esp, 0xFFFFFFEFu); /* 0x17189F3A: push -0x11 */
    ecx = edi; /* 0x17189F3C: mov ecx, edi */
    MEM32(ebp + (-0x18)) = esi; /* 0x17189F3E: mov dword ptr [ebp - 0x18], esi */
    RECOMP_CALL(sub_17187F55); /* 0x17189F41: call 0x17187f55 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x17189F46: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718A0E9; /* 0x17189F4A: jbe 0x1718a0e9 */
L_17189F50:
    eax = MEM32(ebx + 0x4); /* 0x17189F50: mov eax, dword ptr [ebx + 4] */
    edi = MEM32(eax + 0x28); /* 0x17189F53: mov edi, dword ptr [eax + 0x28] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(eax + 0x40); /* 0x17189F56: sub edi, dword ptr [eax + 0x40] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17189F59: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(eax + 0x28) */ /* 0x17189F5B: cmp esi, dword ptr [eax + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x17189F5E: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x17189F61: mov dword ptr [ebp - 0x14], edi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1718A07B; /* 0x17189F64: jae 0x1718a07b */
L_17189F6A:
    eax = esi + esi * 2; /* 0x17189F6A: lea eax, [esi + esi*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17189F6D: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17189F6D: shl eax, 2 */
    MEM32(ebp + 0x10) = eax; /* 0x17189F70: mov dword ptr [ebp + 0x10], eax */
    MEM32(ebp + 0xC) = ecx; /* 0x17189F73: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + 0x8) = ecx; /* 0x17189F76: mov dword ptr [ebp + 8], ecx */
L_17189F79:
    eax = MEM32(ebx + 0x84); /* 0x17189F79: mov eax, dword ptr [ebx + 0x84] */
    /* test MEM32(ecx + eax), 0x10u */ /* 0x17189F7F: test dword ptr [ecx + eax], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0x10u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718A05A; /* 0x17189F86: je 0x1718a05a */
L_17189F8C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17189F8C: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFEFu; /* 0x17189F8E: and dword ptr [eax], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x84); /* 0x17189F91: mov eax, dword ptr [ebx + 0x84] */
    eax = MEM32(ecx + eax); /* 0x17189F97: mov eax, dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x17189F9A: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), 8 */ /* 0x17189F9D: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718A05A; /* 0x17189F9F: je 0x1718a05a */
L_17189FA5:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17189FA5: push dword ptr [ebp + 0xc] */
    ecx = ebx + 0x74; /* 0x17189FA8: lea ecx, [ebx + 0x74] */
    RECOMP_CALL(sub_17186F65); /* 0x17189FAB: call 0x17186f65 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17189FB0: fld dword ptr [ebp - 4] */
    ecx = MEM32(ebx + 0x4); /* 0x17189FB3: mov ecx, dword ptr [ebx + 4] */
    edx = MEM32(ecx + 0x24); /* 0x17189FB6: mov edx, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17189FB9: add eax, esi */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x17189FBB: lea eax, [eax + eax*2] */
    esi = edx + eax * 4; /* 0x17189FBE: lea esi, [edx + eax*4] */
    eax = MEM32(ebp + 0x10); /* 0x17189FC1: mov eax, dword ptr [ebp + 0x10] */
    edi = ebp + (-0x28); /* 0x17189FC4: lea edi, [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189FC7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189FC8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189FC9: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax + edx; /* 0x17189FCA: lea esi, [eax + edx] */
    eax = MEM32(ecx + 0x3C); /* 0x17189FCD: mov eax, dword ptr [ecx + 0x3c] */
    edx = ebp + (-0x1C); /* 0x17189FD0: lea edx, [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x17189FD3: push edx */
    edx = ebp + (-0x40); /* 0x17189FD4: lea edx, [ebp - 0x40] */
    PUSH32(esp, edx); /* 0x17189FD7: push edx */
    edx = ebp + (-0x4C); /* 0x17189FD8: lea edx, [ebp - 0x4c] */
    PUSH32(esp, edx); /* 0x17189FDB: push edx */
    PUSH32(esp, ecx); /* 0x17189FDC: push ecx */
    ecx = MEM32(ecx + 0x14); /* 0x17189FDD: mov ecx, dword ptr [ecx + 0x14] */
    edi = ebp + (-0x34); /* 0x17189FE0: lea edi, [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189FE3: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17189FE4: fstp dword ptr [esp] */
    eax = eax + eax * 2; /* 0x17189FE7: lea eax, [eax + eax*2] */
    eax = ecx + eax * 8; /* 0x17189FEA: lea eax, [ecx + eax*8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189FED: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, eax); /* 0x17189FEE: push eax */
    eax = ebp + (-0x34); /* 0x17189FEF: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x17189FF2: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17189FF3: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17187423); /* 0x17189FF4: call 0x17187423 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x17189FF9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718A054; /* 0x17189FFB: je 0x1718a054 */
L_17189FFD:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x17189FFD: push dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1718A000: fld dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebx + 0x4); /* 0x1718A003: mov ecx, dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1718A006: push dword ptr [ebp - 0x24] */
    eax = MEM32(ecx); /* 0x1718A009: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1718A00B: push dword ptr [ebp - 0x28] */
    esi = ebp + (-0x40); /* 0x1718A00E: lea esi, [ebp - 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1718A011: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0xC) = _v; } /* 0x1718A014: fstp dword ptr [esp + 0xc] */
    edi = esp; /* 0x1718A018: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A01A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A01B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A01C: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1718A01D: sub esp, 0xc */
    _flag_k = FK_CMP;
    edi = esp; /* 0x1718A020: mov edi, esp */
    esi = ebp + (-0x4C); /* 0x1718A022: lea esi, [ebp - 0x4c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A025: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A026: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A027: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1718A028: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x1718A02B: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718A054; /* 0x1718A02E: jne 0x1718a054 */
L_1718A030:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718A030: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1718A033: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    ecx = ebx + 0x74; /* 0x1718A036: lea ecx, [ebx + 0x74] */
    RECOMP_CALL(sub_17189B0C); /* 0x1718A039: call 0x17189b0c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718A03E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A112; /* 0x1718A040: jl 0x1718a112 */
L_1718A046:
    eax = MEM32(ebx + 0x84); /* 0x1718A046: mov eax, dword ptr [ebx + 0x84] */
    ecx = MEM32(ebp + 0x8); /* 0x1718A04C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1718A04F: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(eax) | 0x14u)); _flag_b = (uint32_t)((MEM32(eax) | 0x14u));
    MEM32(eax) = MEM32(eax) | 0x14u; /* 0x1718A051: or dword ptr [eax], 0x14 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718A054:
    edi = MEM32(ebp + (-0x14)); /* 0x1718A054: mov edi, dword ptr [ebp - 0x14] */
    esi = MEM32(ebp + (-0x18)); /* 0x1718A057: mov esi, dword ptr [ebp - 0x18] */
L_1718A05A:
    ecx = MEM32(ebp + 0x8); /* 0x1718A05A: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebx + 0x4); /* 0x1718A05D: mov edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0xCu; /* 0x1718A060: add dword ptr [ebp + 0x10], 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1718A064: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1718A067: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x1718A06A: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1718A06D: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edx + 0x28) */ /* 0x1718A06F: cmp eax, dword ptr [edx + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x1718A072: mov dword ptr [ebp + 8], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17189F79; /* 0x1718A075: jb 0x17189f79 */
L_1718A07B:
    ecx = ebx + 0x74; /* 0x1718A07B: lea ecx, [ebx + 0x74] */
    RECOMP_CALL(sub_17188D73); /* 0x1718A07E: call 0x17188d73 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718A083: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A112; /* 0x1718A085: jl 0x1718a112 */
L_1718A08B:
    eax = MEM32(ebx + 0x4); /* 0x1718A08B: mov eax, dword ptr [ebx + 4] */
    edx = MEM32(eax + 0x28); /* 0x1718A08E: mov edx, dword ptr [eax + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax + 0x40); /* 0x1718A091: sub edx, dword ptr [eax + 0x40] */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x1718A094: mov ecx, edi */
    /* cmp edi, edx */ /* 0x1718A096: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1718A0B4; /* 0x1718A098: jae 0x1718a0b4 */
L_1718A09A:
    eax = MEM32(ebx + 0x84); /* 0x1718A09A: mov eax, dword ptr [ebx + 0x84] */
    eax = eax + ecx * 4; /* 0x1718A0A0: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)((MEM32(eax) | 0x10u)); _flag_b = (uint32_t)((MEM32(eax) | 0x10u));
    MEM32(eax) = MEM32(eax) | 0x10u; /* 0x1718A0A3: or dword ptr [eax], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x4); /* 0x1718A0A6: mov eax, dword ptr [ebx + 4] */
    edx = MEM32(eax + 0x28); /* 0x1718A0A9: mov edx, dword ptr [eax + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax + 0x40); /* 0x1718A0AC: sub edx, dword ptr [eax + 0x40] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718A0AF: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x1718A0B0: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718A09A; /* 0x1718A0B2: jb 0x1718a09a */
L_1718A0B4:
    PUSH32(esp, 0); /* 0x1718A0B4: push 0 */
    PUSH32(esp, 0xFFFFFFEFu); /* 0x1718A0B6: push -0x11 */
    PUSH32(esp, edi); /* 0x1718A0B8: push edi */
    edi = ebx + 0x74; /* 0x1718A0B9: lea edi, [ebx + 0x74] */
    PUSH32(esp, 0); /* 0x1718A0BC: push 0 */
    ecx = edi; /* 0x1718A0BE: mov ecx, edi */
    RECOMP_CALL(sub_17187F82); /* 0x1718A0C0: call 0x17187f82 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x1718A0C5: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(ecx); /* 0x1718A0C8: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1718A0CA: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1718A0CB: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1718A0CE: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1718A0D1: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718A0DD; /* 0x1718A0D5: jne 0x1718a0dd */
L_1718A0D7:
    eax = MEM32(ebp + (-0x8)); /* 0x1718A0D7: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718A0DA: mov dword ptr [ebp - 0xc], eax */
L_1718A0DD:
    eax = MEM32(ebp + (-0x8)); /* 0x1718A0DD: mov eax, dword ptr [ebp - 8] */
    /* cmp MEM32(ebp + (-0xC)), eax */ /* 0x1718A0E0: cmp dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17189F50; /* 0x1718A0E3: jb 0x17189f50 */
L_1718A0E9:
    ecx = edi; /* 0x1718A0E9: mov ecx, edi */
    RECOMP_CALL(sub_17189D0B); /* 0x1718A0EB: call 0x17189d0b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718A0F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A112; /* 0x1718A0F2: jl 0x1718a112 */
L_1718A0F4:
    ecx = edi; /* 0x1718A0F4: mov ecx, edi */
    RECOMP_CALL(sub_171873F9); /* 0x1718A0F6: call 0x171873f9 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x1718A0FB: mov ecx, ebx */
    RECOMP_CALL(sub_1718780B); /* 0x1718A0FD: call 0x1718780b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718A102: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A112; /* 0x1718A104: jl 0x1718a112 */
L_1718A106:
    eax = MEM32(ebx); /* 0x1718A106: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1718A108: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1718A109: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718A10C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A112; /* 0x1718A10E: jl 0x1718a112 */
L_1718A110:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718A110: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718A112:
    edi = POP32_VAL(esp); /* 0x1718A112: pop edi */
    esi = POP32_VAL(esp); /* 0x1718A113: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718A114: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718A115: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718A116: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1718A11E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718A11Eu);

L_1718A11E:
    eax = 0x1721C4B0u; /* 0x1718A11E: mov eax, 0x1721c4b0 */
    RECOMP_CALL(sub_1721B168); /* 0x1718A123: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xE4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xE4u; /* 0x1718A128: sub esp, 0xe4 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(0x17005A98)); /* 0x1718A12E: fld dword ptr [0x17005a98] */
    PUSH32(esp, esi); /* 0x1718A134: push esi */
    PUSH32(esp, edi); /* 0x1718A135: push edi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1718A136: fst dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718A139: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1718A13B: fstp dword ptr [ebp - 0x40] */
    ecx = ebp + (-0x84); /* 0x1718A13E: lea ecx, [ebp - 0x84] */
    MEM32(ebp + (-0x10)) = edi; /* 0x1718A144: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x18)) = 4; /* 0x1718A147: mov dword ptr [ebp - 0x18], 4 */
    MEM32(ebp + (-0x14)) = edi; /* 0x1718A14E: mov dword ptr [ebp - 0x14], edi */
    RECOMP_CALL(sub_1717B92D); /* 0x1718A151: call 0x1717b92d */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x30); /* 0x1718A156: lea ecx, [ebp - 0x30] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1718A159: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_17187ECE); /* 0x1718A15C: call 0x17187ece */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x74); /* 0x1718A161: lea ecx, [ebp - 0x74] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1718A164: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_17195352); /* 0x1718A168: call 0x17195352 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x94); /* 0x1718A16D: lea ecx, [ebp - 0x94] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1718A173: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_17177C1E); /* 0x1718A177: call 0x17177c1e */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1718A17C: fld dword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005A98)); /* 0x1718A17F: fcomp dword ptr [0x17005a98] */
    fp_pop();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1718A185: mov byte ptr [ebp - 4], 3 */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718A189: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1718A18B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718A196; /* 0x1718A18E: jne 0x1718a196 */
L_1718A190:
    eax = MEM32(ebp + 0x10); /* 0x1718A190: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1718A193: mov dword ptr [ebp - 0x40], eax */
L_1718A196:
    eax = MEM32(ebp + 0x18); /* 0x1718A196: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, edi */ /* 0x1718A199: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718A1A0; /* 0x1718A19B: jbe 0x1718a1a0 */
L_1718A19D:
    MEM32(ebp + (-0x18)) = eax; /* 0x1718A19D: mov dword ptr [ebp - 0x18], eax */
L_1718A1A0:
    esi = MEM32(ebp + 0x8); /* 0x1718A1A0: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x1718A1A3: mov eax, dword ptr [esi + 4] */
    /* cmp eax, edi */ /* 0x1718A1A6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718A1B4; /* 0x1718A1A8: jne 0x1718a1b4 */
L_1718A1AA:
    edi = 0x8876086Cu; /* 0x1718A1AA: mov edi, 0x8876086c */
    goto L_1718A80E; /* 0x1718A1AF: jmp 0x1718a80e */
L_1718A1B4:
    /* cmp MEM32(esi + 0x8), edi */ /* 0x1718A1B4: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718A1AA; /* 0x1718A1B7: je 0x1718a1aa */
L_1718A1B9:
    ecx = eax + 0x90; /* 0x1718A1B9: lea ecx, [eax + 0x90] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718A1BF: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1718A1C1: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[1]; /* 0x1718A1C4: fmul st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005A98)); /* 0x1718A1C6: fcomp dword ptr [0x17005a98] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718A1CC: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718A1CE: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x1718A1D0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718A1DD; /* 0x1718A1D3: jne 0x1718a1dd */
L_1718A1D5:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718A1D5: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x1718A1D7: fmul dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1718A1DA: fstp dword ptr [ebp - 0x34] */
L_1718A1DD:
    PUSH32(esp, ebx); /* 0x1718A1DD: push ebx */
    ebx = MEM32(ebp + 0x1C); /* 0x1718A1DE: mov ebx, dword ptr [ebp + 0x1c] */
    /* cmp ebx, edi */ /* 0x1718A1E1: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718A229; /* 0x1718A1E3: je 0x1718a229 */
L_1718A1E5:
    ecx = esi; /* 0x1718A1E5: mov ecx, esi */
    RECOMP_CALL(sub_17174E5D); /* 0x1718A1E7: call 0x17174e5d */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A1EC: mov edi, eax */
    /* test edi, edi */ /* 0x1718A1EE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A801; /* 0x1718A1F0: jl 0x1718a801 */
L_1718A1F6:
    eax = MEM32(ebx); /* 0x1718A1F6: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1718A1F8: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1718A1F9: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718A1FC: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebx); /* 0x1718A1FF: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1718A201: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1718A202: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A205: mov edi, eax */
    eax = MEM32(ebx); /* 0x1718A207: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1718A209: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1718A20A: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x3C)) = eax; /* 0x1718A20D: mov dword ptr [ebp - 0x3c], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1718A210: imul eax, edi */
    MEM32(ebp + 0x10) = eax; /* 0x1718A213: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(esi + 0xF8); /* 0x1718A216: mov eax, dword ptr [esi + 0xf8] */
    MEM32(ebp + (-0x64)) = eax; /* 0x1718A21C: mov dword ptr [ebp - 0x64], eax */
    eax = MEM32(ebp + 0xC); /* 0x1718A21F: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)eax); /* 0x1718A222: imul eax, eax */
    /* cmp eax, edi */ /* 0x1718A225: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718A233; /* 0x1718A227: je 0x1718a233 */
L_1718A229:
    edi = 0x8876086Cu; /* 0x1718A229: mov edi, 0x8876086c */
    goto L_1718A801; /* 0x1718A22E: jmp 0x1718a801 */
L_1718A233:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718A233: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x18)), eax */ /* 0x1718A235: cmp dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718A7D4; /* 0x1718A238: jbe 0x1718a7d4 */
L_1718A23E:
    goto L_1718A242; /* 0x1718A23E: jmp 0x1718a242 */
L_1718A240:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718A240: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718A242:
    MEM32(ebp + (-0x80)) = eax; /* 0x1718A242: mov dword ptr [ebp - 0x80], eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1718A245: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x70)) = eax; /* 0x1718A248: mov dword ptr [ebp - 0x70], eax */
    MEM32(ebp + (-0x90)) = eax; /* 0x1718A24B: mov dword ptr [ebp - 0x90], eax */
    eax = MEM32(esi + 0x4); /* 0x1718A251: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x3C); /* 0x1718A254: mov ecx, dword ptr [eax + 0x3c] */
    eax = MEM32(eax + 0x14); /* 0x1718A257: mov eax, dword ptr [eax + 0x14] */
    ecx = ecx + ecx * 2; /* 0x1718A25A: lea ecx, [ecx + ecx*2] */
    ebx = eax + ecx * 8; /* 0x1718A25D: lea ebx, [eax + ecx*8] */
    eax = esi + 0x74; /* 0x1718A260: lea eax, [esi + 0x74] */
    MEM32(ebp + (-0x58)) = eax; /* 0x1718A263: mov dword ptr [ebp - 0x58], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718A266: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x1718A268: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x54)) = eax; /* 0x1718A26B: mov dword ptr [ebp - 0x54], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718A316; /* 0x1718A26E: jne 0x1718a316 */
L_1718A274:
    PUSH32(esp, eax); /* 0x1718A274: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718A275: push dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x1718A278: mov ecx, esi */
    RECOMP_CALL(sub_1717E213); /* 0x1718A27A: call 0x1717e213 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A27F: mov edi, eax */
    /* test edi, edi */ /* 0x1718A281: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A283: jl 0x1718a7fe */
L_1718A289:
    edi = MEM32(ebp + 0x1C); /* 0x1718A289: mov edi, dword ptr [ebp + 0x1c] */
    eax = MEM32(edi); /* 0x1718A28C: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718A28E: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1718A28F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1718A292: mov ecx, dword ptr [edi] */
    edx = ebp + (-0x10); /* 0x1718A294: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1718A297: push edx */
    PUSH32(esp, eax); /* 0x1718A298: push eax */
    PUSH32(esp, 0); /* 0x1718A299: push 0 */
    PUSH32(esp, edi); /* 0x1718A29B: push edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718A29C: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718A29F: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A2A2: mov edi, eax */
    /* test edi, edi */ /* 0x1718A2A4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A2A6: jl 0x1718a7fe */
L_1718A2AC:
    eax = MEM32(ebp + (-0x18)); /* 0x1718A2AC: mov eax, dword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x1718A2AF: fldz  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718A2B1: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1718A2B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1718A2B4: push ecx */
    PUSH32(esp, ecx); /* 0x1718A2B5: push ecx */
    MEM32(ebp + 0x14) = eax; /* 0x1718A2B6: mov dword ptr [ebp + 0x14], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1718A2B9: fstp dword ptr [esp + 4] */
    fp_push((double)(int32_t)MEM32(ebp + 0x14)); /* 0x1718A2BD: fild dword ptr [ebp + 0x14] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718A2C8; /* 0x1718A2C0: jge 0x1718a2c8 */
L_1718A2C2:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718A2C2: fadd dword ptr [0x1700142c] */
L_1718A2C8:
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1718A2C8: fdivr dword ptr [0x17001424] */
    ecx = esi; /* 0x1718A2CE: mov ecx, esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718A2D0: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x1718A2D3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1718A2D4: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_17186DB4); /* 0x1718A2D7: call 0x17186db4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x1718A2DC: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x3C); /* 0x1718A2DF: mov ecx, dword ptr [eax + 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718A2E2: push dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0x14); /* 0x1718A2E5: mov eax, dword ptr [eax + 0x14] */
    ecx = ecx + ecx * 2; /* 0x1718A2E8: lea ecx, [ecx + ecx*2] */
    eax = eax + ecx * 8; /* 0x1718A2EB: lea eax, [eax + ecx*8] */
    PUSH32(esp, eax); /* 0x1718A2EE: push eax */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x1718A2EF: push dword ptr [ebp - 0x3c] */
    ecx = esi; /* 0x1718A2F2: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718A2F4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1718A2F7: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1717B4D8); /* 0x1718A2FA: call 0x1717b4d8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A2FF: mov edi, eax */
    /* test edi, edi */ /* 0x1718A301: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A303: jl 0x1718a7fe */
L_1718A309:
    eax = MEM32(ebp + 0x1C); /* 0x1718A309: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718A30C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718A30E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718A30F: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718A312: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718A316:
    ecx = ebp + (-0x58); /* 0x1718A316: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_17186AE5); /* 0x1718A319: call 0x17186ae5 */
    RECOMP_FLAGS_IN();
    goto L_1718A3EE; /* 0x1718A31E: jmp 0x1718a3ee */
L_1718A323:
    edi = MEM32(ebp + (-0x54)); /* 0x1718A323: mov edi, dword ptr [ebp - 0x54] */
    ecx = ebp + (-0x58); /* 0x1718A326: lea ecx, [ebp - 0x58] */
    MEM32(ebp + 0x14) = edi; /* 0x1718A329: mov dword ptr [ebp + 0x14], edi */
    RECOMP_CALL(sub_17186B23); /* 0x1718A32C: call 0x17186b23 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x1718A331: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718A3EE; /* 0x1718A335: jge 0x1718a3ee */
L_1718A33B:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1718A33B: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718A34B; /* 0x1718A33F: je 0x1718a34b */
L_1718A341:
    /* test MEM8(edi + 0x18), 4 */ /* 0x1718A341: test byte ptr [edi + 0x18], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x18)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718A3EE; /* 0x1718A345: jne 0x1718a3ee */
L_1718A34B:
    eax = MEM32(esi + 0x118); /* 0x1718A34B: mov eax, dword ptr [esi + 0x118] */
    edx = MEM32(edi + 0xC); /* 0x1718A351: mov edx, dword ptr [edi + 0xc] */
    edi = MEM32(edi + 0x8); /* 0x1718A354: mov edi, dword ptr [edi + 8] */
    ecx = MEM32(eax); /* 0x1718A357: mov ecx, dword ptr [eax] */
    esi = MEM32(ebp + (-0x64)); /* 0x1718A359: mov esi, dword ptr [ebp - 0x64] */
    eax = edx + esi; /* 0x1718A35C: lea eax, [edx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1718A35F: add esi, edi */
    _flag_k = FK_ADD;
    esi = esi + esi * 2; /* 0x1718A361: lea esi, [esi + esi*2] */
    eax = eax + eax * 2; /* 0x1718A364: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x1718A367: lea eax, [ecx + eax*4] */
    ecx = ecx + esi * 4; /* 0x1718A36A: lea ecx, [ecx + esi*4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1718A36D: fld dword ptr [ecx + 8] */
    MEM32(ebp + 0x18) = edi; /* 0x1718A370: mov dword ptr [ebp + 0x18], edi */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1718A373: fsub dword ptr [eax + 8] */
    esi = ebp + (-0xA0); /* 0x1718A376: lea esi, [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1718A37C: fld dword ptr [ecx + 4] */
    edi = ebp + (-0x4C); /* 0x1718A37F: lea edi, [ebp - 0x4c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1718A382: fsub dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718A385: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1718A387: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x1718A389: fstp dword ptr [ebp - 0xa0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x1718A38F: fstp dword ptr [ebp - 0x9c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x1718A395: fstp dword ptr [ebp - 0x98] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A39B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A39C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A39D: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x1718A39E: fld dword ptr [ebp - 0x4c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x1718A3A1: fmul dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1718A3A4: fld dword ptr [ebp - 0x44] */
    esi = MEM32(ebp + 0x14); /* 0x1718A3A7: mov esi, dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x1718A3AA: fmul dword ptr [ebp - 0x44] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718A3AD: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x1718A3AF: fld dword ptr [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x1718A3B2: fmul dword ptr [ebp - 0x48] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718A3B5: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1718A3B7: fsqrt  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x34))); /* 0x1718A3B9: fcom dword ptr [ebp - 0x34] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718A3BC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718A3BE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1718A3C7; /* 0x1718A3C1: jp 0x1718a3c7 */
L_1718A3C3:
    _flag_a = (uint32_t)((MEM32(esi + 0x18) | 4)); _flag_b = (uint32_t)((MEM32(esi + 0x18) | 4));
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | 4; /* 0x1718A3C3: or dword ptr [esi + 0x18], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718A3C7:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x34))); /* 0x1718A3C7: fcomp dword ptr [ebp - 0x34] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718A3CA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718A3CC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1718A3EB; /* 0x1718A3CF: jnp 0x1718a3eb */
L_1718A3D1:
    PUSH32(esp, edx); /* 0x1718A3D1: push edx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718A3D2: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x30); /* 0x1718A3D5: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_17187EF0); /* 0x1718A3D8: call 0x17187ef0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A3DD: mov edi, eax */
    /* test edi, edi */ /* 0x1718A3DF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A3E1: jl 0x1718a7fe */
L_1718A3E7:
    _flag_a = (uint32_t)((MEM32(esi + 0x18) | 4)); _flag_b = (uint32_t)((MEM32(esi + 0x18) | 4));
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | 4; /* 0x1718A3E7: or dword ptr [esi + 0x18], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718A3EB:
    esi = MEM32(ebp + 0x8); /* 0x1718A3EB: mov esi, dword ptr [ebp + 8] */
L_1718A3EE:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x1718A3EE: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718A323; /* 0x1718A3F2: jne 0x1718a323 */
L_1718A3F8:
    eax = MEM32(ebp + (-0x2C)); /* 0x1718A3F8: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1718A3FB: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1718A3FD: push eax */
    ecx = ebp + (-0x94); /* 0x1718A3FE: lea ecx, [ebp - 0x94] */
    RECOMP_CALL(sub_17177C6F); /* 0x1718A404: call 0x17177c6f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A409: mov edi, eax */
    /* test edi, edi */ /* 0x1718A40B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A40D: jl 0x1718a7fe */
L_1718A413:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x1718A413: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x1718A417: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718A524; /* 0x1718A41B: jbe 0x1718a524 */
L_1718A421:
    eax = MEM32(ebp + (-0x94)); /* 0x1718A421: mov eax, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1718A427: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x18) = eax; /* 0x1718A42A: mov dword ptr [ebp + 0x18], eax */
L_1718A42D:
    ecx = MEM32(ebp + 0x14); /* 0x1718A42D: mov ecx, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + (-0x30)); /* 0x1718A430: mov esi, dword ptr [ebp - 0x30] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718A433: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718A433: shl ecx, 3 */
    edx = ecx + esi + 0x4; /* 0x1718A436: lea edx, [ecx + esi + 4] */
    eax = MEM32(edx); /* 0x1718A43A: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1718A43C: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x38)) = ecx; /* 0x1718A43E: mov dword ptr [ebp - 0x38], ecx */
    ecx = MEM32(ecx); /* 0x1718A441: mov ecx, dword ptr [ecx] */
    eax = eax + eax * 2; /* 0x1718A443: lea eax, [eax + eax*2] */
    eax = ebx + eax * 8; /* 0x1718A446: lea eax, [ebx + eax*8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1718A449: fld dword ptr [eax + 8] */
    ecx = ecx + ecx * 2; /* 0x1718A44C: lea ecx, [ecx + ecx*2] */
    ecx = ebx + ecx * 8; /* 0x1718A44F: lea ecx, [ebx + ecx*8] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x1718A452: fadd dword ptr [ecx + 8] */
    edi = MEM32(ebp + 0x18); /* 0x1718A455: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFF4u; /* 0x1718A458: add edi, -0xc */
    _flag_k = FK_ADD;
    esi = ebp + (-0xAC); /* 0x1718A45B: lea esi, [ebp - 0xac] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1718A461: fstp dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718A464: push dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718A467: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x1718A46A: fadd dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718A46D: push dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x1718A470: fstp dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1718A473: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1718A475: fadd dword ptr [ecx] */
    ecx = MEM32(ebp + (-0x38)); /* 0x1718A477: mov ecx, dword ptr [ebp - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF0)) = _v; } /* 0x1718A47A: fstp dword ptr [ebp - 0xf0] */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x1718A480: fld dword ptr [0x1700141c] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1718A486: fld dword ptr [ebp - 0x20] */
    _st[0] *= _st[1]; /* 0x1718A489: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x1718A48B: fld dword ptr [ebp - 0x60] */
    _st[0] *= _st[2]; /* 0x1718A48E: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xF0))); /* 0x1718A490: fld dword ptr [ebp - 0xf0] */
    _st[0] *= _st[3]; /* 0x1718A496: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x1718A498: fstp dword ptr [ebp - 0xac] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x1718A49E: fstp dword ptr [ebp - 0xa8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x1718A4A4: fstp dword ptr [ebp - 0xa4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A4AA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A4AB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A4AC: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = MEM32(edx); /* 0x1718A4AD: mov edx, dword ptr [edx] */
    ecx = MEM32(ecx); /* 0x1718A4AF: mov ecx, dword ptr [ecx] */
    eax = edx + edx * 2; /* 0x1718A4B1: lea eax, [edx + edx*2] */
    eax = ebx + eax * 8 + 0xC; /* 0x1718A4B4: lea eax, [ebx + eax*8 + 0xc] */
    ecx = ecx + ecx * 2; /* 0x1718A4B8: lea ecx, [ecx + ecx*2] */
    ecx = ebx + ecx * 8 + 0xC; /* 0x1718A4BB: lea ecx, [ebx + ecx*8 + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1718A4BF: fld dword ptr [eax + 8] */
    edi = MEM32(ebp + 0x18); /* 0x1718A4C2: mov edi, dword ptr [ebp + 0x18] */
    esi = ebp + (-0xB8); /* 0x1718A4C5: lea esi, [ebp - 0xb8] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x1718A4CB: fadd dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718A4CE: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x1718A4D1: fadd dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1718A4D4: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718A4D7: fld dword ptr [ecx] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718A4D9: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE4)) = _v; } /* 0x1718A4DB: fstp dword ptr [ebp - 0xe4] */
    _st[0] *= _st[1]; /* 0x1718A4E1: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1718A4E3: fld dword ptr [ebp - 0x38] */
    _st[0] *= _st[2]; /* 0x1718A4E6: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xE4))); /* 0x1718A4E8: fld dword ptr [ebp - 0xe4] */
    _st[0] *= _st[3]; /* 0x1718A4EE: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x1718A4F0: fstp dword ptr [ebp - 0xb8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x1718A4F6: fstp dword ptr [ebp - 0xb4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x1718A4FC: fst dword ptr [ebp - 0xb0] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A502: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718A503: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A505: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718A506: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718A508: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17040B68); /* 0x1718A509: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1; /* 0x1718A50E: inc dword ptr [ebp + 0x14] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x14); /* 0x1718A511: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 0x18u; /* 0x1718A514: add dword ptr [ebp + 0x18], 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x2C)) */ /* 0x1718A518: cmp eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718A42D; /* 0x1718A51B: jb 0x1718a42d */
L_1718A521:
    esi = MEM32(ebp + 0x8); /* 0x1718A521: mov esi, dword ptr [ebp + 8] */
L_1718A524:
    eax = MEM32(ebp + (-0x2C)); /* 0x1718A524: mov eax, dword ptr [ebp - 0x2c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x1718A527: imul eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1718A52B: push eax */
    ecx = ebp + (-0x84); /* 0x1718A52C: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_1717B97E); /* 0x1718A532: call 0x1717b97e */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A537: mov edi, eax */
    /* test edi, edi */ /* 0x1718A539: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A53B: jl 0x1718a7fe */
L_1718A541:
    eax = MEM32(ebp + (-0x18)); /* 0x1718A541: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718A544: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1718A545: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = eax; /* 0x1718A547: mov dword ptr [ebp + 0x14], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x14)); /* 0x1718A54A: fild dword ptr [ebp + 0x14] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718A555; /* 0x1718A54D: jge 0x1718a555 */
L_1718A54F:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718A54F: fadd dword ptr [0x1700142c] */
L_1718A555:
    ecx = MEM32(ebp + (-0x14)); /* 0x1718A555: mov ecx, dword ptr [ebp - 0x14] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x14))); /* 0x1718A558: fild dword ptr [ebp - 0x14] */
    /* test ecx, ecx */ /* 0x1718A55B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718A565; /* 0x1718A55D: jge 0x1718a565 */
L_1718A55F:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718A55F: fadd dword ptr [0x1700142c] */
L_1718A565:
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x1718A565: fadd dword ptr [0x17001424] */
    PUSH32(esp, ecx); /* 0x1718A56B: push ecx */
    PUSH32(esp, ecx); /* 0x1718A56C: push ecx */
    ecx = esi; /* 0x1718A56D: mov ecx, esi */
    _st[0] /= _st[1]; /* 0x1718A56F: fdiv st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1718A571: fstp dword ptr [esp + 4] */
    fp_push(1.0); /* 0x1718A575: fld1  */
    _st[0] /= _st[1]; /* 0x1718A577: fdiv st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718A579: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x1718A57C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1718A57D: push dword ptr [ebp - 0x2c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718A580: fstp st(0) */
    RECOMP_CALL(sub_17186DB4); /* 0x1718A582: call 0x17186db4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x1718A587: push dword ptr [ebp - 0x84] */
    ecx = esi; /* 0x1718A58D: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x94))); /* 0x1718A58F: push dword ptr [ebp - 0x94] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x1718A595: push dword ptr [ebp - 0x3c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718A598: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1718A59B: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1717B4D8); /* 0x1718A59E: call 0x1717b4d8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A5A3: mov edi, eax */
    /* test edi, edi */ /* 0x1718A5A5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A5A7: jl 0x1718a7fe */
L_1718A5AD:
    eax = MEM32(ebp + 0x1C); /* 0x1718A5AD: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718A5B0: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x10); /* 0x1718A5B2: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1718A5B5: push edx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1718A5B6: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0); /* 0x1718A5B9: push 0 */
    PUSH32(esp, eax); /* 0x1718A5BB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718A5BC: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A5BF: mov edi, eax */
    /* test edi, edi */ /* 0x1718A5C1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A5C3: jl 0x1718a7fe */
L_1718A5C9:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x1718A5C9: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x1718A5CD: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718A68B; /* 0x1718A5D1: jbe 0x1718a68b */
L_1718A5D7:
    eax = MEM32(ebp + (-0x84)); /* 0x1718A5D7: mov eax, dword ptr [ebp - 0x84] */
    ebx = MEM32(ebp + (-0x30)); /* 0x1718A5DD: mov ebx, dword ptr [ebp - 0x30] */
    MEM32(ebp + 0x18) = eax; /* 0x1718A5E0: mov dword ptr [ebp + 0x18], eax */
L_1718A5E3:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1718A5E3: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x1718A5E7: fldz  */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718A62A; /* 0x1718A5E9: jbe 0x1718a62a */
L_1718A5EB:
    eax = MEM32(ebx); /* 0x1718A5EB: mov eax, dword ptr [ebx] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x1718A5ED: imul eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1718A5F1: mov ecx, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x10)); /* 0x1718A5F4: mov edi, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + 0x18); /* 0x1718A5F7: mov edx, dword ptr [ebp + 0x18] */
    ecx = ecx + eax * 4; /* 0x1718A5FA: lea ecx, [ecx + eax*4] */
    eax = MEM32(ebx + 0x4); /* 0x1718A5FD: mov eax, dword ptr [ebx + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x1718A600: imul eax, dword ptr [ebp + 0x10] */
    eax = edi + eax * 4; /* 0x1718A604: lea eax, [edi + eax*4] */
    edi = MEM32(ebp + 0x10); /* 0x1718A607: mov edi, dword ptr [ebp + 0x10] */
L_1718A60A:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718A60A: fld dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1718A60C: add ecx, 4 */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718A60F: fadd dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718A611: add eax, 4 */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x1718A614: fmul dword ptr [0x1700141c] */
    _st[0] -= (double)*(float*)ADDR(edx); /* 0x1718A61A: fsub dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1718A61C: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1718A61F: dec edi */
    _flag_k = FK_DEC;
    fp_push(_st[0]); /* 0x1718A620: fld st(0) */
    _st[0] *= _st[1]; /* 0x1718A622: fmul st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1718A624: faddp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718A626: fstp st(0) */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718A60A; /* 0x1718A628: jne 0x1718a60a */
L_1718A62A:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x40))); /* 0x1718A62A: fcomp dword ptr [ebp - 0x40] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718A62D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718A62F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1718A670; /* 0x1718A632: jnp 0x1718a670 */
L_1718A634:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1718A634: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x74); /* 0x1718A637: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_17175CCD); /* 0x1718A63A: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A63F: mov edi, eax */
    /* test edi, edi */ /* 0x1718A641: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A643: jl 0x1718a7fe */
L_1718A649:
    eax = ebp + (-0x5C); /* 0x1718A649: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1718A64C: push eax */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x1718A64D: push dword ptr [ebx + 4] */
    ecx = esi + 0x74; /* 0x1718A650: lea ecx, [esi + 0x74] */
    PUSH32(esp, MEM32(ebx)); /* 0x1718A653: push dword ptr [ebx] */
    RECOMP_CALL(sub_17188AD1); /* 0x1718A655: call 0x17188ad1 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A65A: mov edi, eax */
    /* test edi, edi */ /* 0x1718A65C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A65E: jl 0x1718a7fe */
L_1718A664:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x1718A664: push dword ptr [ebp - 0x5c] */
    ecx = esi + 0x74; /* 0x1718A667: lea ecx, [esi + 0x74] */
    PUSH32(esp, ebx); /* 0x1718A66A: push ebx */
    RECOMP_CALL(sub_171882FE); /* 0x1718A66B: call 0x171882fe */
    RECOMP_FLAGS_IN();
L_1718A670:
    eax = MEM32(ebp + 0x10); /* 0x1718A670: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1; /* 0x1718A673: inc dword ptr [ebp + 0x14] */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718A676: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718A676: shl eax, 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + eax; /* 0x1718A679: add dword ptr [ebp + 0x18], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x14); /* 0x1718A67C: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1718A67F: add ebx, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x2C)) */ /* 0x1718A682: cmp eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718A5E3; /* 0x1718A685: jb 0x1718a5e3 */
L_1718A68B:
    eax = MEM32(ebp + 0x1C); /* 0x1718A68B: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718A68E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718A690: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718A691: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718A694: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x70)), 0 */ /* 0x1718A698: cmp dword ptr [ebp - 0x70], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718A6A9; /* 0x1718A69C: jne 0x1718a6a9 */
L_1718A69E:
    eax = MEM32(ebp + (-0x18)); /* 0x1718A69E: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1718A6A1: mov dword ptr [ebp - 0x14], eax */
    goto L_1718A7C2; /* 0x1718A6A4: jmp 0x1718a7c2 */
L_1718A6A9:
    eax = ebp + (-0x74); /* 0x1718A6A9: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1718A6AC: push eax */
    eax = ebp + (-0x30); /* 0x1718A6AD: lea eax, [ebp - 0x30] */
    ebx = esi + 0x74; /* 0x1718A6B0: lea ebx, [esi + 0x74] */
    PUSH32(esp, eax); /* 0x1718A6B3: push eax */
    ecx = ebx; /* 0x1718A6B4: mov ecx, ebx */
    RECOMP_CALL(sub_1718985A); /* 0x1718A6B6: call 0x1718985a */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A6BB: mov edi, eax */
    /* test edi, edi */ /* 0x1718A6BD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A6BF: jl 0x1718a7fe */
L_1718A6C5:
    ecx = ebx; /* 0x1718A6C5: mov ecx, ebx */
    RECOMP_CALL(sub_17188D73); /* 0x1718A6C7: call 0x17188d73 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A6CC: mov edi, eax */
    /* test edi, edi */ /* 0x1718A6CE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A6D0: jl 0x1718a7fe */
L_1718A6D6:
    PUSH32(esp, 1); /* 0x1718A6D6: push 1 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718A6D8: push dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x1718A6DB: mov ecx, esi */
    RECOMP_CALL(sub_1717E213); /* 0x1718A6DD: call 0x1717e213 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A6E2: mov edi, eax */
    /* test edi, edi */ /* 0x1718A6E4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A6E6: jl 0x1718a7fe */
L_1718A6EC:
    edi = MEM32(ebp + 0x1C); /* 0x1718A6EC: mov edi, dword ptr [ebp + 0x1c] */
    eax = MEM32(edi); /* 0x1718A6EF: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718A6F1: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1718A6F2: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1718A6F5: mov ecx, dword ptr [edi] */
    edx = ebp + (-0x10); /* 0x1718A6F7: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1718A6FA: push edx */
    PUSH32(esp, eax); /* 0x1718A6FB: push eax */
    PUSH32(esp, 0); /* 0x1718A6FC: push 0 */
    PUSH32(esp, edi); /* 0x1718A6FE: push edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718A6FF: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718A702: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A705: mov edi, eax */
    /* test edi, edi */ /* 0x1718A707: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A7FE; /* 0x1718A709: jl 0x1718a7fe */
L_1718A70F:
    eax = MEM32(ebp + (-0x70)); /* 0x1718A70F: mov eax, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718A712: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1718A714: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718A7B6; /* 0x1718A716: jbe 0x1718a7b6 */
L_1718A71C:
    edi = MEM32(ebp + (-0x74)); /* 0x1718A71C: mov edi, dword ptr [ebp - 0x74] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718A71F: mov dword ptr [ebp - 0x20], eax */
L_1718A722:
    ecx = MEM32(ebp + (-0x30)); /* 0x1718A722: mov ecx, dword ptr [ebp - 0x30] */
    eax = MEM32(edi); /* 0x1718A725: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC4)) = MEM32(ebp + (-0xC4)) | 0xFFFFFFFFu; /* 0x1718A727: or dword ptr [ebp - 0xc4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC8)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC8)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC8)) = MEM32(ebp + (-0xC8)) | 0xFFFFFFFFu; /* 0x1718A72E: or dword ptr [ebp - 0xc8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xBC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xBC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xBC)) = MEM32(ebp + (-0xBC)) | 0xFFFFFFFFu; /* 0x1718A735: or dword ptr [ebp - 0xbc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + eax * 8; /* 0x1718A73C: lea eax, [ecx + eax*8] */
    PUSH32(esp, ebx); /* 0x1718A73F: push ebx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1718A740: push dword ptr [eax + 4] */
    ecx = ebp + (-0xD8); /* 0x1718A743: lea ecx, [ebp - 0xd8] */
    PUSH32(esp, MEM32(eax)); /* 0x1718A749: push dword ptr [eax] */
    MEM32(ebp + (-0xD4)) = ebx; /* 0x1718A74B: mov dword ptr [ebp - 0xd4], ebx */
    MEM32(ebp + (-0xC0)) = ebx; /* 0x1718A751: mov dword ptr [ebp - 0xc0], ebx */
    MEM32(ebp + 0x18) = ebx; /* 0x1718A757: mov dword ptr [ebp + 0x18], ebx */
    RECOMP_CALL(sub_17186D57); /* 0x1718A75A: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x18; /* 0x1718A75F: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x1718A762: push eax */
    eax = ebp + (-0xD8); /* 0x1718A763: lea eax, [ebp - 0xd8] */
    PUSH32(esp, eax); /* 0x1718A769: push eax */
    ecx = esi + 0x74; /* 0x1718A76A: lea ecx, [esi + 0x74] */
    RECOMP_CALL(sub_17187DA9); /* 0x1718A76D: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1718A772: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = ebx; /* 0x1718A775: mov dword ptr [ebp + 0x14], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718A7AA; /* 0x1718A778: jbe 0x1718a7aa */
L_1718A77A:
    eax = MEM32(edi); /* 0x1718A77A: mov eax, dword ptr [edi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x1718A77C: imul eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x18); /* 0x1718A780: mov ecx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ecx + 0x1C); /* 0x1718A783: mov ecx, dword ptr [ecx + 0x1c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x10)); /* 0x1718A786: imul ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x1718A78A: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x14); /* 0x1718A78D: add ecx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x84)); /* 0x1718A790: mov edx, dword ptr [ebp - 0x84] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1; /* 0x1718A796: inc dword ptr [ebp + 0x14] */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(edx + eax * 4)); /* 0x1718A799: fld dword ptr [edx + eax*4] */
    eax = MEM32(ebp + (-0x10)); /* 0x1718A79C: mov eax, dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx * 4) = _v; } /* 0x1718A79F: fstp dword ptr [eax + ecx*4] */
    eax = MEM32(ebp + 0x14); /* 0x1718A7A2: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1718A7A5: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718A77A; /* 0x1718A7A8: jb 0x1718a77a */
L_1718A7AA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1718A7AA: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) - 1; /* 0x1718A7AD: dec dword ptr [ebp - 0x20] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718A722; /* 0x1718A7B0: jne 0x1718a722 */
L_1718A7B6:
    eax = MEM32(ebp + 0x1C); /* 0x1718A7B6: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718A7B9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718A7BB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718A7BC: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = ebx; /* 0x1718A7BF: mov dword ptr [ebp - 0x10], ebx */
L_1718A7C2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x1718A7C2: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x14)); /* 0x1718A7C5: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(ebp + (-0x18)) */ /* 0x1718A7C8: cmp eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718A240; /* 0x1718A7CB: jb 0x1718a240 */
L_1718A7D1:
    ebx = MEM32(ebp + 0x1C); /* 0x1718A7D1: mov ebx, dword ptr [ebp + 0x1c] */
L_1718A7D4:
    ecx = esi + 0x74; /* 0x1718A7D4: lea ecx, [esi + 0x74] */
    RECOMP_CALL(sub_171873F9); /* 0x1718A7D7: call 0x171873f9 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_17189D0B); /* 0x1718A7DC: call 0x17189d0b */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A7E1: mov edi, eax */
    /* test edi, edi */ /* 0x1718A7E3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A801; /* 0x1718A7E5: jl 0x1718a801 */
L_1718A7E7:
    ecx = esi; /* 0x1718A7E7: mov ecx, esi */
    RECOMP_CALL(sub_1718780B); /* 0x1718A7E9: call 0x1718780b */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A7EE: mov edi, eax */
    /* test edi, edi */ /* 0x1718A7F0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718A801; /* 0x1718A7F2: jl 0x1718a801 */
L_1718A7F4:
    eax = MEM32(esi); /* 0x1718A7F4: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1718A7F6: push esi */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1718A7F7: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718A7FA: mov edi, eax */
    goto L_1718A801; /* 0x1718A7FC: jmp 0x1718a801 */
L_1718A7FE:
    ebx = MEM32(ebp + 0x1C); /* 0x1718A7FE: mov ebx, dword ptr [ebp + 0x1c] */
L_1718A801:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1718A801: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718A80D; /* 0x1718A805: je 0x1718a80d */
L_1718A807:
    eax = MEM32(ebx); /* 0x1718A807: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1718A809: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1718A80A: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
L_1718A80D:
    ebx = POP32_VAL(esp); /* 0x1718A80D: pop ebx */
L_1718A80E:
    ecx = ebp + (-0x94); /* 0x1718A80E: lea ecx, [ebp - 0x94] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1718A814: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718A818: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x74); /* 0x1718A81D: lea ecx, [ebp - 0x74] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1718A820: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718A824: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x30); /* 0x1718A829: lea ecx, [ebp - 0x30] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1718A82C: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718A830: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1718A835: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x84); /* 0x1718A839: lea ecx, [ebp - 0x84] */
    RECOMP_CALL(sub_1717AF06); /* 0x1718A83F: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1718A844: mov ecx, dword ptr [ebp - 0xc] */
    eax = edi; /* 0x1718A847: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1718A849: pop edi */
    esi = POP32_VAL(esp); /* 0x1718A84A: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718A84B: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718A852: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1718A853: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1718A85B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718A85Bu);

L_1718A85B:
    eax = 0x1721C4E8u; /* 0x1718A85B: mov eax, 0x1721c4e8 */
    RECOMP_CALL(sub_1721B168); /* 0x1718A860: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF8u; /* 0x1718A865: sub esp, 0xf8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718A86B: push ebx */
    PUSH32(esp, esi); /* 0x1718A86C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718A86D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1718A86F: push edi */
    ecx = ebp + (-0x98); /* 0x1718A870: lea ecx, [ebp - 0x98] */
    MEM32(ebp + (-0x10)) = esi; /* 0x1718A876: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x34)) = esi; /* 0x1718A879: mov dword ptr [ebp - 0x34], esi */
    MEM32(ebp + (-0x38)) = 0x358637BDu; /* 0x1718A87C: mov dword ptr [ebp - 0x38], 0x358637bd */
    MEM32(ebp + (-0x18)) = 4; /* 0x1718A883: mov dword ptr [ebp - 0x18], 4 */
    MEM32(ebp + (-0x4C)) = 0x3727C5ACu; /* 0x1718A88A: mov dword ptr [ebp - 0x4c], 0x3727c5ac */
    MEM32(ebp + (-0x14)) = esi; /* 0x1718A891: mov dword ptr [ebp - 0x14], esi */
    RECOMP_CALL(sub_1717B92D); /* 0x1718A894: call 0x1717b92d */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x48); /* 0x1718A899: lea ecx, [ebp - 0x48] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1718A89C: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_17187ECE); /* 0x1718A89F: call 0x17187ece */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x88); /* 0x1718A8A4: lea ecx, [ebp - 0x88] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1718A8AA: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_17195352); /* 0x1718A8AE: call 0x17195352 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xA8); /* 0x1718A8B3: lea ecx, [ebp - 0xa8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1718A8B9: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_17177C1E); /* 0x1718A8BD: call 0x17177c1e */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1718A8C2: fld dword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005DA4)); /* 0x1718A8C5: fcomp dword ptr [0x17005da4] */
    fp_pop();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1718A8CB: mov byte ptr [ebp - 4], 3 */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718A8CF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1718A8D1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718A8DC; /* 0x1718A8D4: jne 0x1718a8dc */
L_1718A8D6:
    eax = MEM32(ebp + 0x10); /* 0x1718A8D6: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1718A8D9: mov dword ptr [ebp - 0x4c], eax */
L_1718A8DC:
    eax = MEM32(ebp + 0x18); /* 0x1718A8DC: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, esi */ /* 0x1718A8DF: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718A8E6; /* 0x1718A8E1: jbe 0x1718a8e6 */
L_1718A8E3:
    MEM32(ebp + (-0x18)) = eax; /* 0x1718A8E3: mov dword ptr [ebp - 0x18], eax */
L_1718A8E6:
    edi = MEM32(ebp + 0xC); /* 0x1718A8E6: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x28)) = esi; /* 0x1718A8E9: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x30)) = esi; /* 0x1718A8EC: mov dword ptr [ebp - 0x30], esi */
    esi = MEM32(ebp + 0x1C); /* 0x1718A8EF: mov esi, dword ptr [ebp + 0x1c] */
    /* cmp edi, esi */ /* 0x1718A8F2: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718B102; /* 0x1718A8F4: je 0x1718b102 */
L_1718A8FA:
    ebx = MEM32(ebp + 0x20); /* 0x1718A8FA: mov ebx, dword ptr [ebp + 0x20] */
    /* cmp edi, ebx */ /* 0x1718A8FD: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718B102; /* 0x1718A8FF: je 0x1718b102 */
L_1718A905:
    /* cmp esi, ebx */ /* 0x1718A905: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718B102; /* 0x1718A907: je 0x1718b102 */
L_1718A90D:
    /* test edi, edi */ /* 0x1718A90D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718B102; /* 0x1718A90F: je 0x1718b102 */
L_1718A915:
    /* test esi, esi */ /* 0x1718A915: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718B102; /* 0x1718A917: je 0x1718b102 */
L_1718A91D:
    eax = MEM32(esi); /* 0x1718A91D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1718A91F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1718A920: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718A923: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718B102; /* 0x1718A925: jne 0x1718b102 */
L_1718A92B:
    /* test ebx, ebx */ /* 0x1718A92B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718A93D; /* 0x1718A92D: je 0x1718a93d */
L_1718A92F:
    eax = MEM32(ebx); /* 0x1718A92F: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1718A931: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1718A932: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718A935: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718B102; /* 0x1718A937: jne 0x1718b102 */
L_1718A93D:
    eax = MEM32(edi); /* 0x1718A93D: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718A93F: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1718A940: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1718A943: mov edi, dword ptr [ebp + 8] */
    ebx = eax; /* 0x1718A946: mov ebx, eax */
    eax = MEM32(edi); /* 0x1718A948: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718A94A: push edi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1718A94B: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* cmp ebx, eax */ /* 0x1718A94E: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718B102; /* 0x1718A950: jne 0x1718b102 */
L_1718A956:
    eax = MEM32(edi + 0x4); /* 0x1718A956: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x1718A959: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718B102; /* 0x1718A95B: je 0x1718b102 */
L_1718A961:
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x1718A961: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718B102; /* 0x1718A965: je 0x1718b102 */
L_1718A96B:
    ecx = eax + 0x90; /* 0x1718A96B: lea ecx, [eax + 0x90] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718A971: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1718A973: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[1]; /* 0x1718A976: fmul st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005A98)); /* 0x1718A978: fcomp dword ptr [0x17005a98] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718A97E: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718A980: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x1718A982: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718A98F; /* 0x1718A985: jne 0x1718a98f */
L_1718A987:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718A987: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x1718A989: fmul dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1718A98C: fstp dword ptr [ebp - 0x38] */
L_1718A98F:
    eax = MEM32(esi); /* 0x1718A98F: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1718A991: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1718A992: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718A995: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(esi); /* 0x1718A998: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1718A99A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1718A99B: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = eax; /* 0x1718A99E: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(esi); /* 0x1718A9A1: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1718A9A3: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1718A9A4: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xF8); /* 0x1718A9A7: mov ecx, dword ptr [edi + 0xf8] */
    MEM32(ebp + (-0x50)) = eax; /* 0x1718A9AD: mov dword ptr [ebp - 0x50], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x2C))); /* 0x1718A9B0: imul eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + 0x14) = eax; /* 0x1718A9B4: mov dword ptr [ebp + 0x14], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1718A9B7: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1718A9B7: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1718A9BA: push eax */
    MEM32(ebp + (-0x70)) = ecx; /* 0x1718A9BB: mov dword ptr [ebp - 0x70], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1718A9BE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718A9C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718A9C5: pop ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x1718A9C6: mov dword ptr [ebp - 0x24], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718A9D5; /* 0x1718A9C9: jne 0x1718a9d5 */
L_1718A9CB:
    esi = 0x8007000Eu; /* 0x1718A9CB: mov esi, 0x8007000e */
    goto L_1718B107; /* 0x1718A9D0: jmp 0x1718b107 */
L_1718A9D5:
    ecx = edi; /* 0x1718A9D5: mov ecx, edi */
    RECOMP_CALL(sub_17174E5D); /* 0x1718A9D7: call 0x17174e5d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718A9DC: mov esi, eax */
    /* test esi, esi */ /* 0x1718A9DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718A9E0: jl 0x1718b0bf */
L_1718A9E6:
    eax = MEM32(ebp + 0xC); /* 0x1718A9E6: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1718A9E9: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x34); /* 0x1718A9EB: lea edx, [ebp - 0x34] */
    PUSH32(esp, edx); /* 0x1718A9EE: push edx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1718A9EF: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0); /* 0x1718A9F2: push 0 */
    PUSH32(esp, eax); /* 0x1718A9F4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718A9F5: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718A9F8: mov esi, eax */
    /* test esi, esi */ /* 0x1718A9FA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718A9FC: jl 0x1718b0bf */
L_1718AA02:
    eax = MEM32(ebp + 0xC); /* 0x1718AA02: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1718AA05: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718AA07: push eax */
    esi = 0x8876086Cu; /* 0x1718AA08: mov esi, 0x8876086c */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1718AA0D: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1718AA10: mov ebx, eax */
    eax = MEM32(ebp + 0x1C); /* 0x1718AA12: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718AA15: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1718AA17: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x1718AA18: neg ebx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1718AA1A: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x1718AA1C: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1718AA1D: inc ebx */
    _flag_k = FK_INC;
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1718AA1E: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x30); /* 0x1718AA21: mov ecx, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1718AA24: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1718AA25: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1718AA27: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718AA29: inc eax */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x1718AA2A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718AA46; /* 0x1718AA2C: jne 0x1718aa46 */
L_1718AA2E:
    /* test ebx, ebx */ /* 0x1718AA2E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718B0BF; /* 0x1718AA30: je 0x1718b0bf */
L_1718AA36:
    /* test ecx, ecx */ /* 0x1718AA36: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718AA46; /* 0x1718AA38: jne 0x1718aa46 */
L_1718AA3A:
    /* test eax, eax */ /* 0x1718AA3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718B0BF; /* 0x1718AA3C: je 0x1718b0bf */
L_1718AA42:
    /* test ecx, ecx */ /* 0x1718AA42: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718AA4E; /* 0x1718AA44: je 0x1718aa4e */
L_1718AA46:
    /* test eax, eax */ /* 0x1718AA46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718B0BF; /* 0x1718AA48: jne 0x1718b0bf */
L_1718AA4E:
    PUSH32(esp, 0); /* 0x1718AA4E: push 0 */
    eax = ebp + (-0x30); /* 0x1718AA50: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1718AA53: push eax */
    ecx = edi; /* 0x1718AA54: mov ecx, edi */
    RECOMP_CALL(sub_171904D4); /* 0x1718AA56: call 0x171904d4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AA5B: mov esi, eax */
    /* test esi, esi */ /* 0x1718AA5D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AA5F: jl 0x1718b0bf */
L_1718AA65:
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1718AA65: push dword ptr [ebp - 0x34] */
    eax = ebp + (-0x28); /* 0x1718AA68: lea eax, [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1718AA6B: push dword ptr [ebp - 0x24] */
    ecx = edi; /* 0x1718AA6E: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1718AA70: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718AA73: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1718AA76: push eax */
    RECOMP_CALL(sub_1719063B); /* 0x1718AA77: call 0x1719063b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AA7C: mov esi, eax */
    /* test esi, esi */ /* 0x1718AA7E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AA80: jl 0x1718b0bf */
L_1718AA86:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x1718AA86: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718B057; /* 0x1718AA8A: jbe 0x1718b057 */
L_1718AA90:
    eax = MEM32(edi + 0x4); /* 0x1718AA90: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax + 0x3C); /* 0x1718AA93: mov ecx, dword ptr [eax + 0x3c] */
    eax = MEM32(eax + 0x14); /* 0x1718AA96: mov eax, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718AA99: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x1718AA9B: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ecx + ecx * 2; /* 0x1718AA9E: lea ecx, [ecx + ecx*2] */
    ebx = eax + ecx * 8; /* 0x1718AAA1: lea ebx, [eax + ecx*8] */
    eax = edi + 0x74; /* 0x1718AAA4: lea eax, [edi + 0x74] */
    MEM32(ebp + (-0x94)) = esi; /* 0x1718AAA7: mov dword ptr [ebp - 0x94], esi */
    MEM32(ebp + (-0x44)) = esi; /* 0x1718AAAD: mov dword ptr [ebp - 0x44], esi */
    MEM32(ebp + (-0x84)) = esi; /* 0x1718AAB0: mov dword ptr [ebp - 0x84], esi */
    MEM32(ebp + (-0xA4)) = esi; /* 0x1718AAB6: mov dword ptr [ebp - 0xa4], esi */
    MEM32(ebp + (-0x68)) = eax; /* 0x1718AABC: mov dword ptr [ebp - 0x68], eax */
    MEM32(ebp + (-0x64)) = esi; /* 0x1718AABF: mov dword ptr [ebp - 0x64], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718AB72; /* 0x1718AAC2: jne 0x1718ab72 */
L_1718AAC8:
    PUSH32(esp, esi); /* 0x1718AAC8: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718AAC9: push dword ptr [ebp + 0x1c] */
    ecx = edi; /* 0x1718AACC: mov ecx, edi */
    RECOMP_CALL(sub_1717E213); /* 0x1718AACE: call 0x1717e213 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AAD3: mov esi, eax */
    /* test esi, esi */ /* 0x1718AAD5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AAD7: jl 0x1718b0bf */
L_1718AADD:
    esi = MEM32(ebp + 0x1C); /* 0x1718AADD: mov esi, dword ptr [ebp + 0x1c] */
    eax = MEM32(esi); /* 0x1718AAE0: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1718AAE2: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1718AAE3: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1718AAE6: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x10); /* 0x1718AAE8: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1718AAEB: push edx */
    PUSH32(esp, eax); /* 0x1718AAEC: push eax */
    PUSH32(esp, 0); /* 0x1718AAED: push 0 */
    PUSH32(esp, esi); /* 0x1718AAEF: push esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718AAF0: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718AAF3: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AAF6: mov esi, eax */
    /* test esi, esi */ /* 0x1718AAF8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AAFA: jl 0x1718b0bf */
L_1718AB00:
    eax = MEM32(ebp + (-0x18)); /* 0x1718AB00: mov eax, dword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x1718AB03: fldz  */
    PUSH32(esp, ecx); /* 0x1718AB05: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718AB06: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1718AB07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1718AB09: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1718AB0A: fstp dword ptr [esp + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x1718AB0E: mov dword ptr [ebp + 0x10], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x1718AB11: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718AB1C; /* 0x1718AB14: jge 0x1718ab1c */
L_1718AB16:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718AB16: fadd dword ptr [0x1700142c] */
L_1718AB1C:
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1718AB1C: fdivr dword ptr [0x17001424] */
    ecx = edi; /* 0x1718AB22: mov ecx, edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718AB24: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x1718AB27: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1718AB28: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_17186DB4); /* 0x1718AB2B: call 0x17186db4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1718AB30: push dword ptr [ebp - 0x24] */
    eax = MEM32(edi + 0x4); /* 0x1718AB33: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1718AB36: push dword ptr [ebp - 0x28] */
    ecx = MEM32(eax + 0x3C); /* 0x1718AB39: mov ecx, dword ptr [eax + 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718AB3C: push dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0x14); /* 0x1718AB3F: mov eax, dword ptr [eax + 0x14] */
    ecx = ecx + ecx * 2; /* 0x1718AB42: lea ecx, [ecx + ecx*2] */
    eax = eax + ecx * 8; /* 0x1718AB45: lea eax, [eax + ecx*8] */
    PUSH32(esp, eax); /* 0x1718AB48: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x1718AB49: push dword ptr [ebp - 0x50] */
    ecx = edi; /* 0x1718AB4C: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1718AB4E: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1718AB51: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1717B70D); /* 0x1718AB54: call 0x1717b70d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AB59: mov esi, eax */
    /* test esi, esi */ /* 0x1718AB5B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AB5D: jl 0x1718b0bf */
L_1718AB63:
    eax = MEM32(ebp + 0x1C); /* 0x1718AB63: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718AB66: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718AB68: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718AB69: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718AB6C: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718AB70: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718AB72:
    ecx = ebp + (-0x68); /* 0x1718AB72: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_17186AE5); /* 0x1718AB75: call 0x17186ae5 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x64)), esi */ /* 0x1718AB7A: cmp dword ptr [ebp - 0x64], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718AC5E; /* 0x1718AB7D: je 0x1718ac5e */
L_1718AB83:
    esi = MEM32(ebp + (-0x64)); /* 0x1718AB83: mov esi, dword ptr [ebp - 0x64] */
    ecx = ebp + (-0x68); /* 0x1718AB86: lea ecx, [ebp - 0x68] */
    MEM32(ebp + 0x10) = esi; /* 0x1718AB89: mov dword ptr [ebp + 0x10], esi */
    RECOMP_CALL(sub_17186B23); /* 0x1718AB8C: call 0x17186b23 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x1718AB91: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718AC54; /* 0x1718AB95: jge 0x1718ac54 */
L_1718AB9B:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1718AB9B: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718ABAB; /* 0x1718AB9F: je 0x1718abab */
L_1718ABA1:
    /* test MEM8(esi + 0x18), 4 */ /* 0x1718ABA1: test byte ptr [esi + 0x18], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x18)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718AC54; /* 0x1718ABA5: jne 0x1718ac54 */
L_1718ABAB:
    esi = MEM32(ebp + 0x10); /* 0x1718ABAB: mov esi, dword ptr [ebp + 0x10] */
    edx = MEM32(esi + 0xC); /* 0x1718ABAE: mov edx, dword ptr [esi + 0xc] */
    esi = MEM32(esi + 0x8); /* 0x1718ABB1: mov esi, dword ptr [esi + 8] */
    eax = MEM32(ebp + 0x8); /* 0x1718ABB4: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x118); /* 0x1718ABB7: mov eax, dword ptr [eax + 0x118] */
    ecx = MEM32(eax); /* 0x1718ABBD: mov ecx, dword ptr [eax] */
    edi = MEM32(ebp + (-0x70)); /* 0x1718ABBF: mov edi, dword ptr [ebp - 0x70] */
    MEM32(ebp + 0x18) = esi; /* 0x1718ABC2: mov dword ptr [ebp + 0x18], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1718ABC5: add esi, edi */
    _flag_k = FK_ADD;
    eax = edx + edi; /* 0x1718ABC7: lea eax, [edx + edi] */
    esi = esi + esi * 2; /* 0x1718ABCA: lea esi, [esi + esi*2] */
    eax = eax + eax * 2; /* 0x1718ABCD: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x1718ABD0: lea eax, [ecx + eax*4] */
    ecx = ecx + esi * 4; /* 0x1718ABD3: lea ecx, [ecx + esi*4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1718ABD6: fld dword ptr [ecx + 8] */
    esi = ebp + (-0xC0); /* 0x1718ABD9: lea esi, [ebp - 0xc0] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1718ABDF: fsub dword ptr [eax + 8] */
    edi = ebp + (-0x5C); /* 0x1718ABE2: lea edi, [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1718ABE5: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1718ABE8: fsub dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718ABEB: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1718ABED: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x1718ABEF: fstp dword ptr [ebp - 0xc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x1718ABF5: fstp dword ptr [ebp - 0xbc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x1718ABFB: fstp dword ptr [ebp - 0xb8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718AC01: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718AC02: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718AC03: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x1718AC04: fld dword ptr [ebp - 0x5c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x5C)); /* 0x1718AC07: fmul dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x1718AC0A: fld dword ptr [ebp - 0x54] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x1718AC0D: fmul dword ptr [ebp - 0x54] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718AC10: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x1718AC12: fld dword ptr [ebp - 0x58] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x58)); /* 0x1718AC15: fmul dword ptr [ebp - 0x58] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718AC18: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1718AC1A: fsqrt  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x38))); /* 0x1718AC1C: fcom dword ptr [ebp - 0x38] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718AC1F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718AC21: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1718AC2D; /* 0x1718AC24: jp 0x1718ac2d */
L_1718AC26:
    eax = MEM32(ebp + 0x10); /* 0x1718AC26: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((MEM32(eax + 0x18) | 4)); _flag_b = (uint32_t)((MEM32(eax + 0x18) | 4));
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 4; /* 0x1718AC29: or dword ptr [eax + 0x18], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718AC2D:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x38))); /* 0x1718AC2D: fcomp dword ptr [ebp - 0x38] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718AC30: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718AC32: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1718AC54; /* 0x1718AC35: jnp 0x1718ac54 */
L_1718AC37:
    PUSH32(esp, edx); /* 0x1718AC37: push edx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718AC38: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x48); /* 0x1718AC3B: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_17187EF0); /* 0x1718AC3E: call 0x17187ef0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AC43: mov esi, eax */
    /* test esi, esi */ /* 0x1718AC45: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AC47: jl 0x1718b0bf */
L_1718AC4D:
    eax = MEM32(ebp + 0x10); /* 0x1718AC4D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((MEM32(eax + 0x18) | 4)); _flag_b = (uint32_t)((MEM32(eax + 0x18) | 4));
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 4; /* 0x1718AC50: or dword ptr [eax + 0x18], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718AC54:
    /* cmp MEM32(ebp + (-0x64)), 0 */ /* 0x1718AC54: cmp dword ptr [ebp - 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718AB83; /* 0x1718AC58: jne 0x1718ab83 */
L_1718AC5E:
    edi = MEM32(ebp + (-0x44)); /* 0x1718AC5E: mov edi, dword ptr [ebp - 0x44] */
    eax = edi + edi; /* 0x1718AC61: lea eax, [edi + edi] */
    PUSH32(esp, eax); /* 0x1718AC64: push eax */
    ecx = ebp + (-0xA8); /* 0x1718AC65: lea ecx, [ebp - 0xa8] */
    RECOMP_CALL(sub_17177C6F); /* 0x1718AC6B: call 0x17177c6f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AC70: mov esi, eax */
    /* test esi, esi */ /* 0x1718AC72: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AC74: jl 0x1718b0bf */
L_1718AC7A:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x1718AC7A: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1718AC7E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718AD86; /* 0x1718AC80: jbe 0x1718ad86 */
L_1718AC86:
    eax = MEM32(ebp + (-0xA8)); /* 0x1718AC86: mov eax, dword ptr [ebp - 0xa8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1718AC8C: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x18) = eax; /* 0x1718AC8F: mov dword ptr [ebp + 0x18], eax */
L_1718AC92:
    ecx = MEM32(ebp + 0x10); /* 0x1718AC92: mov ecx, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + (-0x48)); /* 0x1718AC95: mov esi, dword ptr [ebp - 0x48] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718AC98: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718AC98: shl ecx, 3 */
    edx = ecx + esi + 0x4; /* 0x1718AC9B: lea edx, [ecx + esi + 4] */
    eax = MEM32(edx); /* 0x1718AC9F: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1718ACA1: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = ecx; /* 0x1718ACA3: mov dword ptr [ebp - 0x20], ecx */
    ecx = MEM32(ecx); /* 0x1718ACA6: mov ecx, dword ptr [ecx] */
    eax = eax + eax * 2; /* 0x1718ACA8: lea eax, [eax + eax*2] */
    eax = ebx + eax * 8; /* 0x1718ACAB: lea eax, [ebx + eax*8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1718ACAE: fld dword ptr [eax + 8] */
    ecx = ecx + ecx * 2; /* 0x1718ACB1: lea ecx, [ecx + ecx*2] */
    ecx = ebx + ecx * 8; /* 0x1718ACB4: lea ecx, [ebx + ecx*8] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x1718ACB7: fadd dword ptr [ecx + 8] */
    edi = MEM32(ebp + 0x18); /* 0x1718ACBA: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFF4u; /* 0x1718ACBD: add edi, -0xc */
    _flag_k = FK_ADD;
    esi = ebp + (-0xCC); /* 0x1718ACC0: lea esi, [ebp - 0xcc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x1718ACC6: fstp dword ptr [ebp - 0x78] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718ACC9: push dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718ACCC: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x1718ACCF: fadd dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718ACD2: push dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x1718ACD5: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1718ACD8: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1718ACDA: fadd dword ptr [ecx] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1718ACDC: mov ecx, dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF8)) = _v; } /* 0x1718ACDF: fstp dword ptr [ebp - 0xf8] */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x1718ACE5: fld dword ptr [0x1700141c] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x1718ACEB: fld dword ptr [ebp - 0x78] */
    _st[0] *= _st[1]; /* 0x1718ACEE: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x1718ACF0: fld dword ptr [ebp - 0x6c] */
    _st[0] *= _st[2]; /* 0x1718ACF3: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xF8))); /* 0x1718ACF5: fld dword ptr [ebp - 0xf8] */
    _st[0] *= _st[3]; /* 0x1718ACFB: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xCC)) = _v; } /* 0x1718ACFD: fstp dword ptr [ebp - 0xcc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC8)) = _v; } /* 0x1718AD03: fstp dword ptr [ebp - 0xc8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC4)) = _v; } /* 0x1718AD09: fstp dword ptr [ebp - 0xc4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718AD0F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718AD10: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718AD11: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = MEM32(edx); /* 0x1718AD12: mov edx, dword ptr [edx] */
    ecx = MEM32(ecx); /* 0x1718AD14: mov ecx, dword ptr [ecx] */
    eax = edx + edx * 2; /* 0x1718AD16: lea eax, [edx + edx*2] */
    eax = ebx + eax * 8 + 0xC; /* 0x1718AD19: lea eax, [ebx + eax*8 + 0xc] */
    ecx = ecx + ecx * 2; /* 0x1718AD1D: lea ecx, [ecx + ecx*2] */
    ecx = ebx + ecx * 8 + 0xC; /* 0x1718AD20: lea ecx, [ebx + ecx*8 + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1718AD24: fld dword ptr [eax + 8] */
    edi = MEM32(ebp + 0x18); /* 0x1718AD27: mov edi, dword ptr [ebp + 0x18] */
    esi = ebp + (-0xB4); /* 0x1718AD2A: lea esi, [ebp - 0xb4] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x1718AD30: fadd dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718AD33: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x1718AD36: fadd dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1718AD39: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1718AD3C: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1718AD3E: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x104)) = _v; } /* 0x1718AD40: fstp dword ptr [ebp - 0x104] */
    _st[0] *= _st[1]; /* 0x1718AD46: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1718AD48: fld dword ptr [ebp - 0x20] */
    _st[0] *= _st[2]; /* 0x1718AD4B: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x104))); /* 0x1718AD4D: fld dword ptr [ebp - 0x104] */
    _st[0] *= _st[3]; /* 0x1718AD53: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x1718AD55: fstp dword ptr [ebp - 0xb4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x1718AD5B: fstp dword ptr [ebp - 0xb0] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x1718AD61: fst dword ptr [ebp - 0xac] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718AD67: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718AD68: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718AD6A: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718AD6B: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718AD6D: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17040B68); /* 0x1718AD6E: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1718AD73: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x10); /* 0x1718AD76: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 0x18u; /* 0x1718AD79: add dword ptr [ebp + 0x18], 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x44)) */ /* 0x1718AD7D: cmp eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x44)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718AC92; /* 0x1718AD80: jb 0x1718ac92 */
L_1718AD86:
    eax = MEM32(ebp + (-0x44)); /* 0x1718AD86: mov eax, dword ptr [ebp - 0x44] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x14)); /* 0x1718AD89: imul eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1718AD8D: push eax */
    ecx = ebp + (-0x98); /* 0x1718AD8E: lea ecx, [ebp - 0x98] */
    RECOMP_CALL(sub_1717B97E); /* 0x1718AD94: call 0x1717b97e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AD99: mov esi, eax */
    /* test esi, esi */ /* 0x1718AD9B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AD9D: jl 0x1718b0bf */
L_1718ADA3:
    eax = MEM32(ebp + (-0x18)); /* 0x1718ADA3: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718ADA6: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1718ADA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x1718ADA9: mov dword ptr [ebp + 0x10], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x1718ADAC: fild dword ptr [ebp + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718ADB7; /* 0x1718ADAF: jge 0x1718adb7 */
L_1718ADB1:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718ADB1: fadd dword ptr [0x1700142c] */
L_1718ADB7:
    ecx = MEM32(ebp + (-0x14)); /* 0x1718ADB7: mov ecx, dword ptr [ebp - 0x14] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x14))); /* 0x1718ADBA: fild dword ptr [ebp - 0x14] */
    /* test ecx, ecx */ /* 0x1718ADBD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718ADC7; /* 0x1718ADBF: jge 0x1718adc7 */
L_1718ADC1:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718ADC1: fadd dword ptr [0x1700142c] */
L_1718ADC7:
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x1718ADC7: fadd dword ptr [0x17001424] */
    PUSH32(esp, ecx); /* 0x1718ADCD: push ecx */
    PUSH32(esp, ecx); /* 0x1718ADCE: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1718ADCF: mov ecx, dword ptr [ebp + 8] */
    _st[0] /= _st[1]; /* 0x1718ADD2: fdiv st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1718ADD4: fstp dword ptr [esp + 4] */
    fp_push(1.0); /* 0x1718ADD8: fld1  */
    _st[0] /= _st[1]; /* 0x1718ADDA: fdiv st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718ADDC: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x1718ADDF: push eax */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1718ADE0: push dword ptr [ebp - 0x44] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718ADE3: fstp st(0) */
    RECOMP_CALL(sub_17186DB4); /* 0x1718ADE5: call 0x17186db4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1718ADEA: push dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + 0x8); /* 0x1718ADED: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1718ADF0: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x1718ADF3: push dword ptr [ebp - 0x98] */
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x1718ADF9: push dword ptr [ebp - 0xa8] */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x1718ADFF: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1718AE02: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1718AE05: push dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_1717B70D); /* 0x1718AE08: call 0x1717b70d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AE0D: mov esi, eax */
    /* test esi, esi */ /* 0x1718AE0F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AE11: jl 0x1718b0bf */
L_1718AE17:
    eax = MEM32(ebp + 0x1C); /* 0x1718AE17: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718AE1A: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x10); /* 0x1718AE1C: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1718AE1F: push edx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1718AE20: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0); /* 0x1718AE23: push 0 */
    PUSH32(esp, eax); /* 0x1718AE25: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718AE26: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AE29: mov esi, eax */
    /* test esi, esi */ /* 0x1718AE2B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AE2D: jl 0x1718b0bf */
L_1718AE33:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x1718AE33: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x1718AE37: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718AF01; /* 0x1718AE3B: jbe 0x1718af01 */
L_1718AE41:
    esi = MEM32(ebp + 0x14); /* 0x1718AE41: mov esi, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + (-0x98)); /* 0x1718AE44: mov edx, dword ptr [ebp - 0x98] */
    edi = MEM32(ebp + (-0x48)); /* 0x1718AE4A: mov edi, dword ptr [ebp - 0x48] */
    eax = esi; /* 0x1718AE4D: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718AE4F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718AE4F: shl eax, 2 */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718AE52: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + 0x18) = edx; /* 0x1718AE55: mov dword ptr [ebp + 0x18], edx */
L_1718AE58:
    /* test esi, esi */ /* 0x1718AE58: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x1718AE5A: fldz  */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718AE94; /* 0x1718AE5C: jbe 0x1718ae94 */
L_1718AE5E:
    ecx = MEM32(edi); /* 0x1718AE5E: mov ecx, dword ptr [edi] */
    ebx = MEM32(edi + 0x4); /* 0x1718AE60: mov ebx, dword ptr [edi + 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x1718AE63: imul ecx, esi */
    eax = MEM32(ebp + (-0x10)); /* 0x1718AE66: mov eax, dword ptr [ebp - 0x10] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)esi); /* 0x1718AE69: imul ebx, esi */
    ecx = eax + ecx * 4; /* 0x1718AE6C: lea ecx, [eax + ecx*4] */
    eax = eax + ebx * 4; /* 0x1718AE6F: lea eax, [eax + ebx*4] */
    ebx = esi; /* 0x1718AE72: mov ebx, esi */
L_1718AE74:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718AE74: fld dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1718AE76: add ecx, 4 */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718AE79: fadd dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718AE7B: add eax, 4 */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x1718AE7E: fmul dword ptr [0x1700141c] */
    _st[0] -= (double)*(float*)ADDR(edx); /* 0x1718AE84: fsub dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1718AE86: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1718AE89: dec ebx */
    _flag_k = FK_DEC;
    fp_push(_st[0]); /* 0x1718AE8A: fld st(0) */
    _st[0] *= _st[1]; /* 0x1718AE8C: fmul st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1718AE8E: faddp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718AE90: fstp st(0) */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718AE74; /* 0x1718AE92: jne 0x1718ae74 */
L_1718AE94:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4C))); /* 0x1718AE94: fcomp dword ptr [ebp - 0x4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718AE97: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718AE99: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1718AEE6; /* 0x1718AE9C: jnp 0x1718aee6 */
L_1718AE9E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718AE9E: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x88); /* 0x1718AEA1: lea ecx, [ebp - 0x88] */
    RECOMP_CALL(sub_17175CCD); /* 0x1718AEA7: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AEAC: mov esi, eax */
    /* test esi, esi */ /* 0x1718AEAE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AEB0: jl 0x1718b0bf */
L_1718AEB6:
    ecx = MEM32(ebp + 0x8); /* 0x1718AEB6: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x74); /* 0x1718AEB9: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1718AEBC: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1718AEBD: push dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x74u; /* 0x1718AEC0: add ecx, 0x74 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi)); /* 0x1718AEC3: push dword ptr [edi] */
    RECOMP_CALL(sub_17188AD1); /* 0x1718AEC5: call 0x17188ad1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AECA: mov esi, eax */
    /* test esi, esi */ /* 0x1718AECC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AECE: jl 0x1718b0bf */
L_1718AED4:
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x1718AED4: push dword ptr [ebp - 0x74] */
    ecx = MEM32(ebp + 0x8); /* 0x1718AED7: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1718AEDA: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x74u; /* 0x1718AEDB: add ecx, 0x74 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171882FE); /* 0x1718AEDE: call 0x171882fe */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x14); /* 0x1718AEE3: mov esi, dword ptr [ebp + 0x14] */
L_1718AEE6:
    edx = MEM32(ebp + 0x18); /* 0x1718AEE6: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1718AEE9: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x20)); /* 0x1718AEEC: add edx, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x1718AEEF: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1718AEF2: add edi, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x44)) */ /* 0x1718AEF5: cmp eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x44)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = edx; /* 0x1718AEF8: mov dword ptr [ebp + 0x18], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718AE58; /* 0x1718AEFB: jb 0x1718ae58 */
L_1718AF01:
    eax = MEM32(ebp + 0x1C); /* 0x1718AF01: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718AF04: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718AF06: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718AF07: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718AF0A: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x84)), 0 */ /* 0x1718AF0E: cmp dword ptr [ebp - 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x84))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718AF22; /* 0x1718AF15: jne 0x1718af22 */
L_1718AF17:
    eax = MEM32(ebp + (-0x18)); /* 0x1718AF17: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1718AF1A: mov dword ptr [ebp - 0x14], eax */
    goto L_1718B045; /* 0x1718AF1D: jmp 0x1718b045 */
L_1718AF22:
    ecx = MEM32(ebp + 0x8); /* 0x1718AF22: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x88); /* 0x1718AF25: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1718AF2B: push eax */
    eax = ebp + (-0x48); /* 0x1718AF2C: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1718AF2F: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x74u; /* 0x1718AF30: add ecx, 0x74 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718985A); /* 0x1718AF33: call 0x1718985a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AF38: mov esi, eax */
    /* test esi, esi */ /* 0x1718AF3A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AF3C: jl 0x1718b0bf */
L_1718AF42:
    ecx = MEM32(ebp + 0x8); /* 0x1718AF42: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x74u; /* 0x1718AF45: add ecx, 0x74 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_17188D73); /* 0x1718AF48: call 0x17188d73 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AF4D: mov esi, eax */
    /* test esi, esi */ /* 0x1718AF4F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AF51: jl 0x1718b0bf */
L_1718AF57:
    ecx = MEM32(ebp + 0x8); /* 0x1718AF57: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1718AF5A: push 1 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718AF5C: push dword ptr [ebp + 0x1c] */
    RECOMP_CALL(sub_1717E213); /* 0x1718AF5F: call 0x1717e213 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AF64: mov esi, eax */
    /* test esi, esi */ /* 0x1718AF66: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AF68: jl 0x1718b0bf */
L_1718AF6E:
    esi = MEM32(ebp + 0x1C); /* 0x1718AF6E: mov esi, dword ptr [ebp + 0x1c] */
    eax = MEM32(esi); /* 0x1718AF71: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1718AF73: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1718AF74: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1718AF77: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x10); /* 0x1718AF79: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1718AF7C: push edx */
    PUSH32(esp, eax); /* 0x1718AF7D: push eax */
    PUSH32(esp, 0); /* 0x1718AF7E: push 0 */
    PUSH32(esp, esi); /* 0x1718AF80: push esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718AF81: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718AF84: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718AF87: mov esi, eax */
    /* test esi, esi */ /* 0x1718AF89: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718AF8B: jl 0x1718b0bf */
L_1718AF91:
    eax = MEM32(ebp + (-0x84)); /* 0x1718AF91: mov eax, dword ptr [ebp - 0x84] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718AF97: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1718AF99: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718B039; /* 0x1718AF9B: jbe 0x1718b039 */
L_1718AFA1:
    esi = MEM32(ebp + (-0x88)); /* 0x1718AFA1: mov esi, dword ptr [ebp - 0x88] */
    MEM32(ebp + 0x18) = eax; /* 0x1718AFA7: mov dword ptr [ebp + 0x18], eax */
L_1718AFAA:
    ecx = MEM32(ebp + (-0x48)); /* 0x1718AFAA: mov ecx, dword ptr [ebp - 0x48] */
    eax = MEM32(esi); /* 0x1718AFAD: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0xD8)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xD8)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xD8)) = MEM32(ebp + (-0xD8)) | 0xFFFFFFFFu; /* 0x1718AFAF: or dword ptr [ebp - 0xd8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xDC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xDC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xDC)) = MEM32(ebp + (-0xDC)) | 0xFFFFFFFFu; /* 0x1718AFB6: or dword ptr [ebp - 0xdc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xD0)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xD0)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xD0)) = MEM32(ebp + (-0xD0)) | 0xFFFFFFFFu; /* 0x1718AFBD: or dword ptr [ebp - 0xd0], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + eax * 8; /* 0x1718AFC4: lea eax, [ecx + eax*8] */
    PUSH32(esp, edi); /* 0x1718AFC7: push edi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1718AFC8: push dword ptr [eax + 4] */
    ecx = ebp + (-0xEC); /* 0x1718AFCB: lea ecx, [ebp - 0xec] */
    PUSH32(esp, MEM32(eax)); /* 0x1718AFD1: push dword ptr [eax] */
    MEM32(ebp + (-0xE8)) = edi; /* 0x1718AFD3: mov dword ptr [ebp - 0xe8], edi */
    MEM32(ebp + (-0xD4)) = edi; /* 0x1718AFD9: mov dword ptr [ebp - 0xd4], edi */
    MEM32(ebp + 0x10) = edi; /* 0x1718AFDF: mov dword ptr [ebp + 0x10], edi */
    RECOMP_CALL(sub_17186D57); /* 0x1718AFE2: call 0x17186d57 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1718AFE7: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + 0x10; /* 0x1718AFEA: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1718AFED: push eax */
    eax = ebp + (-0xEC); /* 0x1718AFEE: lea eax, [ebp - 0xec] */
    PUSH32(esp, eax); /* 0x1718AFF4: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x74u; /* 0x1718AFF5: add ecx, 0x74 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_17187DA9); /* 0x1718AFF8: call 0x17187da9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718AFFD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x1718AFFF: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718B02D; /* 0x1718B002: jbe 0x1718b02d */
L_1718B004:
    ecx = MEM32(esi); /* 0x1718B004: mov ecx, dword ptr [esi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x14)); /* 0x1718B006: imul ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x10); /* 0x1718B00A: mov edx, dword ptr [ebp + 0x10] */
    edx = MEM32(edx + 0x1C); /* 0x1718B00D: mov edx, dword ptr [edx + 0x1c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x14)); /* 0x1718B010: imul edx, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + (-0x98)); /* 0x1718B014: mov ebx, dword ptr [ebp - 0x98] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1718B01A: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1718B01C: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718B01E: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1718B01F: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebx + ecx * 4)); /* 0x1718B022: fld dword ptr [ebx + ecx*4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1718B025: mov ecx, dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edx * 4) = _v; } /* 0x1718B028: fstp dword ptr [ecx + edx*4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718B004; /* 0x1718B02B: jb 0x1718b004 */
L_1718B02D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1718B02D: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1; /* 0x1718B030: dec dword ptr [ebp + 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718AFAA; /* 0x1718B033: jne 0x1718afaa */
L_1718B039:
    eax = MEM32(ebp + 0x1C); /* 0x1718B039: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718B03C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718B03E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718B03F: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = edi; /* 0x1718B042: mov dword ptr [ebp - 0x10], edi */
L_1718B045:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x1718B045: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x14)); /* 0x1718B048: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(ebp + (-0x18)) */ /* 0x1718B04B: cmp eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x8); /* 0x1718B04E: mov edi, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718AA90; /* 0x1718B051: jb 0x1718aa90 */
L_1718B057:
    ebx = edi + 0x74; /* 0x1718B057: lea ebx, [edi + 0x74] */
    ecx = ebx; /* 0x1718B05A: mov ecx, ebx */
    RECOMP_CALL(sub_171873F9); /* 0x1718B05C: call 0x171873f9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1718B061: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718B063: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x1718B066: mov ecx, edi */
    RECOMP_CALL(sub_1717E213); /* 0x1718B068: call 0x1717e213 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B06D: mov esi, eax */
    /* test esi, esi */ /* 0x1718B06F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718B071: jl 0x1718b0bf */
L_1718B073:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1718B073: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718B09D; /* 0x1718B077: je 0x1718b09d */
L_1718B079:
    PUSH32(esp, 1); /* 0x1718B079: push 1 */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1718B07B: push dword ptr [ebp + 0x20] */
    ecx = edi; /* 0x1718B07E: mov ecx, edi */
    RECOMP_CALL(sub_1717E213); /* 0x1718B080: call 0x1717e213 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B085: mov esi, eax */
    /* test esi, esi */ /* 0x1718B087: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718B089: jl 0x1718b0bf */
L_1718B08B:
    eax = MEM32(ebp + 0x20); /* 0x1718B08B: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718B08E: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718B091: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718B093: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x1718B094: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B097: mov esi, eax */
    /* test esi, esi */ /* 0x1718B099: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718B09B: jl 0x1718b0bf */
L_1718B09D:
    ecx = ebx; /* 0x1718B09D: mov ecx, ebx */
    RECOMP_CALL(sub_17189D0B); /* 0x1718B09F: call 0x17189d0b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B0A4: mov esi, eax */
    /* test esi, esi */ /* 0x1718B0A6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718B0A8: jl 0x1718b0bf */
L_1718B0AA:
    ecx = edi; /* 0x1718B0AA: mov ecx, edi */
    RECOMP_CALL(sub_1718780B); /* 0x1718B0AC: call 0x1718780b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B0B1: mov esi, eax */
    /* test esi, esi */ /* 0x1718B0B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718B0BF; /* 0x1718B0B5: jl 0x1718b0bf */
L_1718B0B7:
    eax = MEM32(edi); /* 0x1718B0B7: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718B0B9: push edi */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1718B0BA: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B0BD: mov esi, eax */
L_1718B0BF:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1718B0BF: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1721B010); /* 0x1718B0C2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1718B0C7: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1718B0CB: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718B0D7; /* 0x1718B0CC: je 0x1718b0d7 */
L_1718B0CE:
    eax = MEM32(ebp + 0x1C); /* 0x1718B0CE: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718B0D1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718B0D3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718B0D4: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
L_1718B0D7:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x1718B0D7: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718B0E6; /* 0x1718B0DB: je 0x1718b0e6 */
L_1718B0DD:
    eax = MEM32(ebp + 0xC); /* 0x1718B0DD: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1718B0E0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718B0E2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718B0E3: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
L_1718B0E6:
    ecx = MEM32(ebp + (-0x30)); /* 0x1718B0E6: mov ecx, dword ptr [ebp - 0x30] */
    /* test ecx, ecx */ /* 0x1718B0E9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718B0F3; /* 0x1718B0EB: je 0x1718b0f3 */
L_1718B0ED:
    eax = MEM32(ecx); /* 0x1718B0ED: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1718B0EF: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1718B0F1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1718B0F3:
    ecx = MEM32(ebp + (-0x28)); /* 0x1718B0F3: mov ecx, dword ptr [ebp - 0x28] */
    /* test ecx, ecx */ /* 0x1718B0F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718B107; /* 0x1718B0F8: je 0x1718b107 */
L_1718B0FA:
    eax = MEM32(ecx); /* 0x1718B0FA: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1718B0FC: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1718B0FE: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_1718B107; /* 0x1718B100: jmp 0x1718b107 */
L_1718B102:
    esi = 0x8876086Cu; /* 0x1718B102: mov esi, 0x8876086c */
L_1718B107:
    ecx = ebp + (-0xA8); /* 0x1718B107: lea ecx, [ebp - 0xa8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1718B10D: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718B111: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x88); /* 0x1718B116: lea ecx, [ebp - 0x88] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1718B11C: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718B120: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x48); /* 0x1718B125: lea ecx, [ebp - 0x48] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1718B128: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718B12C: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1718B131: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x98); /* 0x1718B135: lea ecx, [ebp - 0x98] */
    RECOMP_CALL(sub_1717AF06); /* 0x1718B13B: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1718B140: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1718B143: pop edi */
    eax = esi; /* 0x1718B144: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718B146: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718B147: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718B148: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718B14F: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1718B150: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1718B158(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718B158u);

L_1718B158:
    eax = 0x1721C520u; /* 0x1718B158: mov eax, 0x1721c520 */
    RECOMP_CALL(sub_1721B168); /* 0x1718B15D: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xDCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xDCu; /* 0x1718B162: sub esp, 0xdc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718B168: push ebx */
    PUSH32(esp, esi); /* 0x1718B169: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718B16A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1718B16C: push edi */
    ecx = ebp + (-0x8C); /* 0x1718B16D: lea ecx, [ebp - 0x8c] */
    MEM32(ebp + (-0x10)) = esi; /* 0x1718B173: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x14)) = esi; /* 0x1718B176: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x3C)) = 0x358637BDu; /* 0x1718B179: mov dword ptr [ebp - 0x3c], 0x358637bd */
    MEM32(ebp + (-0x20)) = 4; /* 0x1718B180: mov dword ptr [ebp - 0x20], 4 */
    MEM32(ebp + (-0x54)) = 0x3727C5ACu; /* 0x1718B187: mov dword ptr [ebp - 0x54], 0x3727c5ac */
    MEM32(ebp + (-0x18)) = esi; /* 0x1718B18E: mov dword ptr [ebp - 0x18], esi */
    RECOMP_CALL(sub_1717B92D); /* 0x1718B191: call 0x1717b92d */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x50); /* 0x1718B196: lea ecx, [ebp - 0x50] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1718B199: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_17187ECE); /* 0x1718B19C: call 0x17187ece */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xAC); /* 0x1718B1A1: lea ecx, [ebp - 0xac] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1718B1A7: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_17195352); /* 0x1718B1AB: call 0x17195352 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x9C); /* 0x1718B1B0: lea ecx, [ebp - 0x9c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1718B1B6: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_17177C1E); /* 0x1718B1BA: call 0x17177c1e */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1718B1BF: fld dword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005DA4)); /* 0x1718B1C2: fcomp dword ptr [0x17005da4] */
    fp_pop();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1718B1C8: mov byte ptr [ebp - 4], 3 */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718B1CC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1718B1CE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718B1D9; /* 0x1718B1D1: jne 0x1718b1d9 */
L_1718B1D3:
    eax = MEM32(ebp + 0x10); /* 0x1718B1D3: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x54)) = eax; /* 0x1718B1D6: mov dword ptr [ebp - 0x54], eax */
L_1718B1D9:
    eax = MEM32(ebp + 0x18); /* 0x1718B1D9: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, esi */ /* 0x1718B1DC: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718B1E3; /* 0x1718B1DE: jbe 0x1718b1e3 */
L_1718B1E0:
    MEM32(ebp + (-0x20)) = eax; /* 0x1718B1E0: mov dword ptr [ebp - 0x20], eax */
L_1718B1E3:
    esi = MEM32(ebp + 0xC); /* 0x1718B1E3: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x1C); /* 0x1718B1E6: mov edi, dword ptr [ebp + 0x1c] */
    /* cmp esi, edi */ /* 0x1718B1E9: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718BA5D; /* 0x1718B1EB: je 0x1718ba5d */
L_1718B1F1:
    ebx = MEM32(ebp + 0x20); /* 0x1718B1F1: mov ebx, dword ptr [ebp + 0x20] */
    /* cmp esi, ebx */ /* 0x1718B1F4: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718BA5D; /* 0x1718B1F6: je 0x1718ba5d */
L_1718B1FC:
    /* cmp edi, ebx */ /* 0x1718B1FC: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718BA5D; /* 0x1718B1FE: je 0x1718ba5d */
L_1718B204:
    /* test esi, esi */ /* 0x1718B204: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718BA5D; /* 0x1718B206: je 0x1718ba5d */
L_1718B20C:
    /* test edi, edi */ /* 0x1718B20C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718BA5D; /* 0x1718B20E: je 0x1718ba5d */
L_1718B214:
    eax = MEM32(edi); /* 0x1718B214: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718B216: push edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1718B217: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718B21A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718BA5D; /* 0x1718B21C: jne 0x1718ba5d */
L_1718B222:
    /* test ebx, ebx */ /* 0x1718B222: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718B234; /* 0x1718B224: je 0x1718b234 */
L_1718B226:
    eax = MEM32(ebx); /* 0x1718B226: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1718B228: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1718B229: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718B22C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718BA5D; /* 0x1718B22E: jne 0x1718ba5d */
L_1718B234:
    eax = MEM32(esi); /* 0x1718B234: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1718B236: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1718B237: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1718B23A: mov ebx, dword ptr [ebp + 8] */
    esi = eax; /* 0x1718B23D: mov esi, eax */
    eax = MEM32(ebx); /* 0x1718B23F: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1718B241: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1718B242: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x1718B245: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718BA5D; /* 0x1718B247: jne 0x1718ba5d */
L_1718B24D:
    eax = MEM32(ebx + 0x4); /* 0x1718B24D: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718B250: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1718B252: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718BA5D; /* 0x1718B254: je 0x1718ba5d */
L_1718B25A:
    /* cmp MEM32(ebx + 0x8), ecx */ /* 0x1718B25A: cmp dword ptr [ebx + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718BA5D; /* 0x1718B25D: je 0x1718ba5d */
L_1718B263:
    /* cmp MEM32(ebx + 0x34), ecx */ /* 0x1718B263: cmp dword ptr [ebx + 0x34], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x34)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718B271; /* 0x1718B266: jne 0x1718b271 */
L_1718B268:
    /* cmp MEM32(ebx + 0x2C), ecx */ /* 0x1718B268: cmp dword ptr [ebx + 0x2c], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718BA5D; /* 0x1718B26B: je 0x1718ba5d */
L_1718B271:
    ecx = eax + 0x90; /* 0x1718B271: lea ecx, [eax + 0x90] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718B277: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1718B279: fld dword ptr [ebp + 0x14] */
    _st[0] *= _st[1]; /* 0x1718B27C: fmul st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005A98)); /* 0x1718B27E: fcomp dword ptr [0x17005a98] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718B284: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718B286: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x1718B288: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718B295; /* 0x1718B28B: jne 0x1718b295 */
L_1718B28D:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718B28D: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x1718B28F: fmul dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1718B292: fstp dword ptr [ebp - 0x3c] */
L_1718B295:
    eax = MEM32(edi); /* 0x1718B295: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718B297: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1718B298: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x1718B29B: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(edi); /* 0x1718B29E: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718B2A0: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1718B2A1: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x18) = eax; /* 0x1718B2A4: mov dword ptr [ebp + 0x18], eax */
    eax = MEM32(edi); /* 0x1718B2A7: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718B2A9: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1718B2AA: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B2AD: mov esi, eax */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x18)); /* 0x1718B2AF: imul esi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1718B2B3: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(edi); /* 0x1718B2B6: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718B2B8: push edi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1718B2B9: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1718B2BC: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x40)) = eax; /* 0x1718B2BF: mov dword ptr [ebp - 0x40], eax */
    eax = MEM32(ebx + 0xF8); /* 0x1718B2C2: mov eax, dword ptr [ebx + 0xf8] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1718B2C8: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1718B2C8: shl esi, 4 */
    PUSH32(esp, esi); /* 0x1718B2CB: push esi */
    MEM32(ebp + (-0x7C)) = eax; /* 0x1718B2CC: mov dword ptr [ebp - 0x7c], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718B2CF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718B2D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718B2D6: pop ecx */
    MEM32(ebp + (-0x70)) = eax; /* 0x1718B2D7: mov dword ptr [ebp - 0x70], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718B2E6; /* 0x1718B2DA: jne 0x1718b2e6 */
L_1718B2DC:
    esi = 0x8007000Eu; /* 0x1718B2DC: mov esi, 0x8007000e */
    goto L_1718BA62; /* 0x1718B2E1: jmp 0x1718ba62 */
L_1718B2E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718B2E6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1718B2E8: push esi */
    PUSH32(esp, esi); /* 0x1718B2E9: push esi */
    RECOMP_CALL(sub_1721B200); /* 0x1718B2EA: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0008001Fu); /* 0x1718B2EF: push 0x8001f */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1718B2F4: push -1 */
    MEM32(ebp + (-0x74)) = eax; /* 0x1718B2F6: mov dword ptr [ebp - 0x74], eax */
    RECOMP_CALL(sub_1721B200); /* 0x1718B2F9: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00030000u); /* 0x1718B2FE: push 0x30000 */
    PUSH32(esp, esi); /* 0x1718B303: push esi */
    RECOMP_CALL(sub_1721B200); /* 0x1718B304: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1718B309: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x1718B30C: mov ecx, ebx */
    RECOMP_CALL(sub_17174E5D); /* 0x1718B30E: call 0x17174e5d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B313: mov esi, eax */
    /* test esi, esi */ /* 0x1718B315: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B317: jl 0x1718ba20 */
L_1718B31D:
    eax = MEM32(ebp + 0xC); /* 0x1718B31D: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1718B320: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x14); /* 0x1718B322: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1718B325: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718B326: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1718B329: push 0 */
    PUSH32(esp, eax); /* 0x1718B32B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718B32C: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B32F: mov esi, eax */
    /* test esi, esi */ /* 0x1718B331: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B333: jl 0x1718ba20 */
L_1718B339:
    eax = MEM32(ebp + 0xC); /* 0x1718B339: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1718B33C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718B33E: push eax */
    esi = 0x8876086Cu; /* 0x1718B33F: mov esi, 0x8876086c */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1718B344: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1718B347: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1718B348: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1718B34A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718B34C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = eax; /* 0x1718B34D: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(edi); /* 0x1718B350: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718B352: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1718B353: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x30); /* 0x1718B356: mov ecx, dword ptr [ebx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1718B359: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1718B35A: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1718B35C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718B35E: inc eax */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x1718B35F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718B37C; /* 0x1718B361: jne 0x1718b37c */
L_1718B363:
    /* cmp MEM32(ebp + 0x14), ecx */ /* 0x1718B363: cmp dword ptr [ebp + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718BA20; /* 0x1718B366: je 0x1718ba20 */
L_1718B36C:
    /* test ecx, ecx */ /* 0x1718B36C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718B37C; /* 0x1718B36E: jne 0x1718b37c */
L_1718B370:
    /* test eax, eax */ /* 0x1718B370: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718BA20; /* 0x1718B372: je 0x1718ba20 */
L_1718B378:
    /* test ecx, ecx */ /* 0x1718B378: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718B384; /* 0x1718B37A: je 0x1718b384 */
L_1718B37C:
    /* test eax, eax */ /* 0x1718B37C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718BA20; /* 0x1718B37E: jne 0x1718ba20 */
L_1718B384:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x1718B384: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718B9E5; /* 0x1718B388: jbe 0x1718b9e5 */
L_1718B38E:
    eax = MEM32(ebx + 0x4); /* 0x1718B38E: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(eax + 0x3C); /* 0x1718B391: mov ecx, dword ptr [eax + 0x3c] */
    eax = MEM32(eax + 0x14); /* 0x1718B394: mov eax, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718B397: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x18)), esi */ /* 0x1718B399: cmp dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ecx + ecx * 2; /* 0x1718B39C: lea ecx, [ecx + ecx*2] */
    eax = eax + ecx * 8; /* 0x1718B39F: lea eax, [eax + ecx*8] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1718B3A2: mov dword ptr [ebp - 0x30], eax */
    eax = ebx + 0x74; /* 0x1718B3A5: lea eax, [ebx + 0x74] */
    MEM32(ebp + (-0x88)) = esi; /* 0x1718B3A8: mov dword ptr [ebp - 0x88], esi */
    MEM32(ebp + (-0x4C)) = esi; /* 0x1718B3AE: mov dword ptr [ebp - 0x4c], esi */
    MEM32(ebp + (-0xA8)) = esi; /* 0x1718B3B1: mov dword ptr [ebp - 0xa8], esi */
    MEM32(ebp + (-0x98)) = esi; /* 0x1718B3B7: mov dword ptr [ebp - 0x98], esi */
    MEM32(ebp + (-0x6C)) = eax; /* 0x1718B3BD: mov dword ptr [ebp - 0x6c], eax */
    MEM32(ebp + (-0x68)) = esi; /* 0x1718B3C0: mov dword ptr [ebp - 0x68], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718B483; /* 0x1718B3C3: jne 0x1718b483 */
L_1718B3C9:
    PUSH32(esp, esi); /* 0x1718B3C9: push esi */
    PUSH32(esp, edi); /* 0x1718B3CA: push edi */
    ecx = ebx; /* 0x1718B3CB: mov ecx, ebx */
    RECOMP_CALL(sub_1717E213); /* 0x1718B3CD: call 0x1717e213 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B3D2: mov esi, eax */
    /* test esi, esi */ /* 0x1718B3D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B3D6: jl 0x1718ba20 */
L_1718B3DC:
    eax = MEM32(edi); /* 0x1718B3DC: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718B3DE: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1718B3DF: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1718B3E2: mov ecx, dword ptr [edi] */
    edx = ebp + (-0x10); /* 0x1718B3E4: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1718B3E7: push edx */
    PUSH32(esp, eax); /* 0x1718B3E8: push eax */
    PUSH32(esp, 0); /* 0x1718B3E9: push 0 */
    PUSH32(esp, edi); /* 0x1718B3EB: push edi */
    MEM32(ebp + 0x10) = eax; /* 0x1718B3EC: mov dword ptr [ebp + 0x10], eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718B3EF: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B3F2: mov esi, eax */
    /* test esi, esi */ /* 0x1718B3F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B3F6: jl 0x1718ba20 */
L_1718B3FC:
    eax = MEM32(ebp + (-0x20)); /* 0x1718B3FC: mov eax, dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x1718B3FF: fldz  */
    PUSH32(esp, ecx); /* 0x1718B401: push ecx */
    PUSH32(esp, ecx); /* 0x1718B402: push ecx */
    ecx = eax + 0x1; /* 0x1718B403: lea ecx, [eax + 1] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1718B406: fstp dword ptr [esp + 4] */
    /* test ecx, ecx */ /* 0x1718B40A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = ecx; /* 0x1718B40C: mov dword ptr [ebp + 0x14], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x14)); /* 0x1718B40F: fild dword ptr [ebp + 0x14] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718B41A; /* 0x1718B412: jge 0x1718b41a */
L_1718B414:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718B414: fadd dword ptr [0x1700142c] */
L_1718B41A:
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1718B41A: fdivr dword ptr [0x17001424] */
    eax = eax + eax + 0x1; /* 0x1718B420: lea eax, [eax + eax + 1] */
    ecx = ebx; /* 0x1718B424: mov ecx, ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718B426: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x1718B429: push eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1718B42A: mov eax, dword ptr [ebp - 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x1718B42D: imul eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1718B431: push eax */
    RECOMP_CALL(sub_17186DB4); /* 0x1718B432: call 0x17186db4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0x24), 0 */ /* 0x1718B437: cmp dword ptr [ebx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718B454; /* 0x1718B43B: jne 0x1718b454 */
L_1718B43D:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718B43D: push dword ptr [ebp + 0x18] */
    ecx = ebx; /* 0x1718B440: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718B442: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_17181066); /* 0x1718B445: call 0x17181066 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B44A: mov esi, eax */
    /* test esi, esi */ /* 0x1718B44C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B44E: jl 0x1718ba20 */
L_1718B454:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718B454: push dword ptr [ebp - 0x10] */
    ecx = ebx; /* 0x1718B457: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1718B459: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x1718B45C: push dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1718B45F: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718B462: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718B465: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1717CD44); /* 0x1718B468: call 0x1717cd44 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B46D: mov esi, eax */
    /* test esi, esi */ /* 0x1718B46F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B471: jl 0x1718ba20 */
L_1718B477:
    eax = MEM32(edi); /* 0x1718B477: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1718B479: push edi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1718B47A: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718B47D: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718B481: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718B483:
    ecx = ebp + (-0x6C); /* 0x1718B483: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_17186AE5); /* 0x1718B486: call 0x17186ae5 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x68)), esi */ /* 0x1718B48B: cmp dword ptr [ebp - 0x68], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718B56D; /* 0x1718B48E: je 0x1718b56d */
L_1718B494:
    esi = MEM32(ebp + (-0x68)); /* 0x1718B494: mov esi, dword ptr [ebp - 0x68] */
    ecx = ebp + (-0x6C); /* 0x1718B497: lea ecx, [ebp - 0x6c] */
    MEM32(ebp + 0x14) = esi; /* 0x1718B49A: mov dword ptr [ebp + 0x14], esi */
    RECOMP_CALL(sub_17186B23); /* 0x1718B49D: call 0x17186b23 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x1718B4A2: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718B563; /* 0x1718B4A6: jge 0x1718b563 */
L_1718B4AC:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x1718B4AC: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718B4BC; /* 0x1718B4B0: je 0x1718b4bc */
L_1718B4B2:
    /* test MEM8(esi + 0x18), 4 */ /* 0x1718B4B2: test byte ptr [esi + 0x18], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x18)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718B563; /* 0x1718B4B6: jne 0x1718b563 */
L_1718B4BC:
    edx = MEM32(ebp + 0x14); /* 0x1718B4BC: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(edx + 0xC); /* 0x1718B4BF: mov eax, dword ptr [edx + 0xc] */
    edi = MEM32(ebp + (-0x7C)); /* 0x1718B4C2: mov edi, dword ptr [ebp - 0x7c] */
    esi = MEM32(edx + 0x8); /* 0x1718B4C5: mov esi, dword ptr [edx + 8] */
    ecx = MEM32(ebx + 0x118); /* 0x1718B4C8: mov ecx, dword ptr [ebx + 0x118] */
    ecx = MEM32(ecx); /* 0x1718B4CE: mov ecx, dword ptr [ecx] */
    MEM32(ebp + (-0x28)) = esi; /* 0x1718B4D0: mov dword ptr [ebp - 0x28], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1718B4D3: add esi, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1718B4D5: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1718B4D8: add eax, edi */
    _flag_k = FK_ADD;
    esi = esi + esi * 2; /* 0x1718B4DA: lea esi, [esi + esi*2] */
    eax = eax + eax * 2; /* 0x1718B4DD: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x1718B4E0: lea eax, [ecx + eax*4] */
    ecx = ecx + esi * 4; /* 0x1718B4E3: lea ecx, [ecx + esi*4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1718B4E6: fld dword ptr [ecx + 8] */
    esi = ebp + (-0xC4); /* 0x1718B4E9: lea esi, [ebp - 0xc4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1718B4EF: fsub dword ptr [eax + 8] */
    edi = ebp + (-0x60); /* 0x1718B4F2: lea edi, [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1718B4F5: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1718B4F8: fsub dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718B4FB: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1718B4FD: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC4)) = _v; } /* 0x1718B4FF: fstp dword ptr [ebp - 0xc4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x1718B505: fstp dword ptr [ebp - 0xc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x1718B50B: fstp dword ptr [ebp - 0xbc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718B511: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718B512: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718B513: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x1718B514: fld dword ptr [ebp - 0x60] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x60)); /* 0x1718B517: fmul dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x1718B51A: fld dword ptr [ebp - 0x58] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x58)); /* 0x1718B51D: fmul dword ptr [ebp - 0x58] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718B520: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x1718B522: fld dword ptr [ebp - 0x5c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x5C)); /* 0x1718B525: fmul dword ptr [ebp - 0x5c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718B528: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1718B52A: fsqrt  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x3C))); /* 0x1718B52C: fcom dword ptr [ebp - 0x3c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718B52F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718B531: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1718B53A; /* 0x1718B534: jp 0x1718b53a */
L_1718B536:
    _flag_a = (uint32_t)((MEM32(edx + 0x18) | 4)); _flag_b = (uint32_t)((MEM32(edx + 0x18) | 4));
    MEM32(edx + 0x18) = MEM32(edx + 0x18) | 4; /* 0x1718B536: or dword ptr [edx + 0x18], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718B53A:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x3C))); /* 0x1718B53A: fcomp dword ptr [ebp - 0x3c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718B53D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718B53F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1718B563; /* 0x1718B542: jnp 0x1718b563 */
L_1718B544:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718B544: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x50); /* 0x1718B547: lea ecx, [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1718B54A: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_17187EF0); /* 0x1718B54D: call 0x17187ef0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B552: mov esi, eax */
    /* test esi, esi */ /* 0x1718B554: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B556: jl 0x1718ba20 */
L_1718B55C:
    eax = MEM32(ebp + 0x14); /* 0x1718B55C: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((MEM32(eax + 0x18) | 4)); _flag_b = (uint32_t)((MEM32(eax + 0x18) | 4));
    MEM32(eax + 0x18) = MEM32(eax + 0x18) | 4; /* 0x1718B55F: or dword ptr [eax + 0x18], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718B563:
    /* cmp MEM32(ebp + (-0x68)), 0 */ /* 0x1718B563: cmp dword ptr [ebp - 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718B494; /* 0x1718B567: jne 0x1718b494 */
L_1718B56D:
    edi = MEM32(ebp + (-0x4C)); /* 0x1718B56D: mov edi, dword ptr [ebp - 0x4c] */
    eax = edi + edi; /* 0x1718B570: lea eax, [edi + edi] */
    PUSH32(esp, eax); /* 0x1718B573: push eax */
    ecx = ebp + (-0x9C); /* 0x1718B574: lea ecx, [ebp - 0x9c] */
    RECOMP_CALL(sub_17177C6F); /* 0x1718B57A: call 0x17177c6f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B57F: mov esi, eax */
    /* test esi, esi */ /* 0x1718B581: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B583: jl 0x1718ba20 */
L_1718B589:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x1718B589: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1718B58D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718B69E; /* 0x1718B58F: jbe 0x1718b69e */
L_1718B595:
    eax = MEM32(ebp + (-0x9C)); /* 0x1718B595: mov eax, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1718B59B: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1718B59E: mov dword ptr [ebp + 8], eax */
L_1718B5A1:
    ecx = MEM32(ebp + 0x14); /* 0x1718B5A1: mov ecx, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + (-0x50)); /* 0x1718B5A4: mov esi, dword ptr [ebp - 0x50] */
    edx = MEM32(ebp + (-0x30)); /* 0x1718B5A7: mov edx, dword ptr [ebp - 0x30] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718B5AA: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718B5AA: shl ecx, 3 */
    eax = ecx + esi + 0x4; /* 0x1718B5AD: lea eax, [ecx + esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1718B5B1: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x38)) = eax; /* 0x1718B5B3: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(eax); /* 0x1718B5B6: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1718B5B8: mov dword ptr [ebp - 0x2c], ecx */
    ecx = MEM32(ecx); /* 0x1718B5BB: mov ecx, dword ptr [ecx] */
    eax = eax + eax * 2; /* 0x1718B5BD: lea eax, [eax + eax*2] */
    eax = edx + eax * 8; /* 0x1718B5C0: lea eax, [edx + eax*8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1718B5C3: fld dword ptr [eax + 8] */
    ecx = ecx + ecx * 2; /* 0x1718B5C6: lea ecx, [ecx + ecx*2] */
    ecx = edx + ecx * 8; /* 0x1718B5C9: lea ecx, [edx + ecx*8] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x1718B5CC: fadd dword ptr [ecx + 8] */
    edi = MEM32(ebp + 0x8); /* 0x1718B5CF: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFF4u; /* 0x1718B5D2: add edi, -0xc */
    _flag_k = FK_ADD;
    esi = ebp + (-0xD0); /* 0x1718B5D5: lea esi, [ebp - 0xd0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1718B5DB: fstp dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718B5DE: push dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718B5E1: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x1718B5E4: fadd dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718B5E7: push dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1718B5EA: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1718B5ED: fld dword ptr [eax] */
    eax = MEM32(ebp + (-0x38)); /* 0x1718B5EF: mov eax, dword ptr [ebp - 0x38] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1718B5F2: fadd dword ptr [ecx] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1718B5F4: mov ecx, dword ptr [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xDC)) = _v; } /* 0x1718B5F7: fstp dword ptr [ebp - 0xdc] */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x1718B5FD: fld dword ptr [0x1700141c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1718B603: fld dword ptr [ebp - 0x28] */
    _st[0] *= _st[1]; /* 0x1718B606: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1718B608: fld dword ptr [ebp - 0x34] */
    _st[0] *= _st[2]; /* 0x1718B60B: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xDC))); /* 0x1718B60D: fld dword ptr [ebp - 0xdc] */
    _st[0] *= _st[3]; /* 0x1718B613: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD0)) = _v; } /* 0x1718B615: fstp dword ptr [ebp - 0xd0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xCC)) = _v; } /* 0x1718B61B: fstp dword ptr [ebp - 0xcc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC8)) = _v; } /* 0x1718B621: fstp dword ptr [ebp - 0xc8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718B627: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718B628: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718B629: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(eax); /* 0x1718B62A: mov eax, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x1718B62C: mov ecx, dword ptr [ecx] */
    eax = eax + eax * 2; /* 0x1718B62E: lea eax, [eax + eax*2] */
    eax = edx + eax * 8 + 0xC; /* 0x1718B631: lea eax, [edx + eax*8 + 0xc] */
    ecx = ecx + ecx * 2; /* 0x1718B635: lea ecx, [ecx + ecx*2] */
    ecx = edx + ecx * 8 + 0xC; /* 0x1718B638: lea ecx, [edx + ecx*8 + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1718B63C: fld dword ptr [eax + 8] */
    edi = MEM32(ebp + 0x8); /* 0x1718B63F: mov edi, dword ptr [ebp + 8] */
    esi = ebp + (-0xB8); /* 0x1718B642: lea esi, [ebp - 0xb8] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x1718B648: fadd dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718B64B: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x1718B64E: fadd dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1718B651: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718B654: fld dword ptr [ecx] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718B656: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE8)) = _v; } /* 0x1718B658: fstp dword ptr [ebp - 0xe8] */
    _st[0] *= _st[1]; /* 0x1718B65E: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1718B660: fld dword ptr [ebp - 0x2c] */
    _st[0] *= _st[2]; /* 0x1718B663: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xE8))); /* 0x1718B665: fld dword ptr [ebp - 0xe8] */
    _st[0] *= _st[3]; /* 0x1718B66B: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x1718B66D: fstp dword ptr [ebp - 0xb8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x1718B673: fstp dword ptr [ebp - 0xb4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x1718B679: fst dword ptr [ebp - 0xb0] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718B67F: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718B680: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718B682: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718B683: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718B685: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17040B68); /* 0x1718B686: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1; /* 0x1718B68B: inc dword ptr [ebp + 0x14] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x14); /* 0x1718B68E: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x18u; /* 0x1718B691: add dword ptr [ebp + 8], 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x4C)) */ /* 0x1718B695: cmp eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718B5A1; /* 0x1718B698: jb 0x1718b5a1 */
L_1718B69E:
    eax = MEM32(ebp + (-0x4C)); /* 0x1718B69E: mov eax, dword ptr [ebp - 0x4c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x1C))); /* 0x1718B6A1: imul eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1718B6A5: push eax */
    ecx = ebp + (-0x8C); /* 0x1718B6A6: lea ecx, [ebp - 0x8c] */
    RECOMP_CALL(sub_1717B97E); /* 0x1718B6AC: call 0x1717b97e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B6B1: mov esi, eax */
    /* test esi, esi */ /* 0x1718B6B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B6B5: jl 0x1718ba20 */
L_1718B6BB:
    eax = MEM32(ebp + (-0x18)); /* 0x1718B6BB: mov eax, dword ptr [ebp - 0x18] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x18))); /* 0x1718B6BE: fild dword ptr [ebp - 0x18] */
    /* test eax, eax */ /* 0x1718B6C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718B6CB; /* 0x1718B6C3: jge 0x1718b6cb */
L_1718B6C5:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718B6C5: fadd dword ptr [0x1700142c] */
L_1718B6CB:
    eax = MEM32(ebp + (-0x20)); /* 0x1718B6CB: mov eax, dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1718B6CE: fstp dword ptr [ebp - 0x30] */
    ecx = eax + 0x1; /* 0x1718B6D1: lea ecx, [eax + 1] */
    /* test ecx, ecx */ /* 0x1718B6D4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = ecx; /* 0x1718B6D6: mov dword ptr [ebp + 0x14], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x14)); /* 0x1718B6D9: fild dword ptr [ebp + 0x14] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718B6E4; /* 0x1718B6DC: jge 0x1718b6e4 */
L_1718B6DE:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718B6DE: fadd dword ptr [0x1700142c] */
L_1718B6E4:
    /* test eax, eax */ /* 0x1718B6E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1718B6E6: fst dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x1718B6E9: fld dword ptr [0x1700141c] */
    ecx = eax + eax + 0x1; /* 0x1718B6EF: lea ecx, [eax + eax + 1] */
    _st[0] /= _st[1]; /* 0x1718B6F3: fdiv st(1) */
    MEM32(ebp + 0x14) = eax; /* 0x1718B6F5: mov dword ptr [ebp + 0x14], eax */
    MEM32(ebp + (-0x34)) = ecx; /* 0x1718B6F8: mov dword ptr [ebp - 0x34], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1718B6FB: fstp dword ptr [ebp - 0x28] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718B6FE: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1718B700: fld dword ptr [ebp - 0x30] */
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x1718B703: fadd dword ptr [0x17001424] */
    fp_push((double)(int32_t)MEM32(ebp + 0x14)); /* 0x1718B709: fild dword ptr [ebp + 0x14] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718B714; /* 0x1718B70C: jge 0x1718b714 */
L_1718B70E:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718B70E: fadd dword ptr [0x1700142c] */
L_1718B714:
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x1718B714: fadd dword ptr [0x17001424] */
    eax = MEM32(ebp + (-0x4C)); /* 0x1718B71A: mov eax, dword ptr [ebp - 0x4c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x24))); /* 0x1718B71D: imul eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1718B721: push ecx */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1718B722: fdivp st(1) */
    PUSH32(esp, ecx); /* 0x1718B724: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1718B725: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1718B729: fld dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718B72C: fstp dword ptr [esp] */
    PUSH32(esp, ecx); /* 0x1718B72F: push ecx */
    PUSH32(esp, eax); /* 0x1718B730: push eax */
    ecx = ebx; /* 0x1718B731: mov ecx, ebx */
    RECOMP_CALL(sub_17186DB4); /* 0x1718B733: call 0x17186db4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0x24), 0 */ /* 0x1718B738: cmp dword ptr [ebx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718B755; /* 0x1718B73C: jne 0x1718b755 */
L_1718B73E:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718B73E: push dword ptr [ebp + 0x18] */
    ecx = ebx; /* 0x1718B741: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718B743: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_17181066); /* 0x1718B746: call 0x17181066 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B74B: mov esi, eax */
    /* test esi, esi */ /* 0x1718B74D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B74F: jl 0x1718ba20 */
L_1718B755:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x1718B755: push dword ptr [ebp - 0x8c] */
    ecx = ebx; /* 0x1718B75B: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1718B75D: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x1718B760: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x1718B763: push dword ptr [ebp - 0x9c] */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x1718B769: push dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1718B76C: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718B76F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1718B772: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718B775: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1717D1FA); /* 0x1718B778: call 0x1717d1fa */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B77D: mov esi, eax */
    /* test esi, esi */ /* 0x1718B77F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B781: jl 0x1718ba20 */
L_1718B787:
    eax = MEM32(ebp + 0x1C); /* 0x1718B787: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718B78A: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x10); /* 0x1718B78C: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1718B78F: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718B790: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1718B793: push 0 */
    PUSH32(esp, eax); /* 0x1718B795: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718B796: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B799: mov esi, eax */
    /* test esi, esi */ /* 0x1718B79B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B79D: jl 0x1718ba20 */
L_1718B7A3:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x1718B7A3: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x1718B7A7: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718B86E; /* 0x1718B7AB: jbe 0x1718b86e */
L_1718B7B1:
    eax = MEM32(ebp + (-0x1C)); /* 0x1718B7B1: mov eax, dword ptr [ebp - 0x1c] */
    edi = MEM32(ebp + (-0x50)); /* 0x1718B7B4: mov edi, dword ptr [ebp - 0x50] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718B7B7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718B7B7: shl eax, 2 */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1718B7BA: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + (-0x8C)); /* 0x1718B7BD: mov eax, dword ptr [ebp - 0x8c] */
    MEM32(ebp + 0x8) = eax; /* 0x1718B7C3: mov dword ptr [ebp + 8], eax */
L_1718B7C6:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x1718B7C6: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x1718B7CA: fldz  */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718B80D; /* 0x1718B7CC: jbe 0x1718b80d */
L_1718B7CE:
    eax = MEM32(edi); /* 0x1718B7CE: mov eax, dword ptr [edi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x1C))); /* 0x1718B7D0: imul eax, dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1718B7D4: mov ecx, dword ptr [ebp - 0x10] */
    esi = MEM32(ebp + (-0x10)); /* 0x1718B7D7: mov esi, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x1718B7DA: mov edx, dword ptr [ebp + 8] */
    ecx = ecx + eax * 4; /* 0x1718B7DD: lea ecx, [ecx + eax*4] */
    eax = MEM32(edi + 0x4); /* 0x1718B7E0: mov eax, dword ptr [edi + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x1C))); /* 0x1718B7E3: imul eax, dword ptr [ebp - 0x1c] */
    eax = esi + eax * 4; /* 0x1718B7E7: lea eax, [esi + eax*4] */
    esi = MEM32(ebp + (-0x1C)); /* 0x1718B7EA: mov esi, dword ptr [ebp - 0x1c] */
L_1718B7ED:
    fp_push(*(float*)&MEM32(eax)); /* 0x1718B7ED: fld dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718B7EF: add eax, 4 */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1718B7F2: fadd dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1718B7F4: add ecx, 4 */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x1718B7F7: fmul dword ptr [0x1700141c] */
    _st[0] -= (double)*(float*)ADDR(edx); /* 0x1718B7FD: fsub dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1718B7FF: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1718B802: dec esi */
    _flag_k = FK_DEC;
    fp_push(_st[0]); /* 0x1718B803: fld st(0) */
    _st[0] *= _st[1]; /* 0x1718B805: fmul st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1718B807: faddp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718B809: fstp st(0) */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718B7ED; /* 0x1718B80B: jne 0x1718b7ed */
L_1718B80D:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x54))); /* 0x1718B80D: fcomp dword ptr [ebp - 0x54] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718B810: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718B812: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1718B856; /* 0x1718B815: jnp 0x1718b856 */
L_1718B817:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1718B817: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0xAC); /* 0x1718B81A: lea ecx, [ebp - 0xac] */
    RECOMP_CALL(sub_17175CCD); /* 0x1718B820: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B825: mov esi, eax */
    /* test esi, esi */ /* 0x1718B827: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B829: jl 0x1718ba20 */
L_1718B82F:
    eax = ebp + (-0x78); /* 0x1718B82F: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x1718B832: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1718B833: push dword ptr [edi + 4] */
    ecx = ebx + 0x74; /* 0x1718B836: lea ecx, [ebx + 0x74] */
    PUSH32(esp, MEM32(edi)); /* 0x1718B839: push dword ptr [edi] */
    RECOMP_CALL(sub_17188AD1); /* 0x1718B83B: call 0x17188ad1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B840: mov esi, eax */
    /* test esi, esi */ /* 0x1718B842: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B844: jl 0x1718ba20 */
L_1718B84A:
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x1718B84A: push dword ptr [ebp - 0x78] */
    ecx = ebx + 0x74; /* 0x1718B84D: lea ecx, [ebx + 0x74] */
    PUSH32(esp, edi); /* 0x1718B850: push edi */
    RECOMP_CALL(sub_171882FE); /* 0x1718B851: call 0x171882fe */
    RECOMP_FLAGS_IN();
L_1718B856:
    eax = MEM32(ebp + (-0x2C)); /* 0x1718B856: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1; /* 0x1718B859: inc dword ptr [ebp + 0x14] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x1718B85C: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x14); /* 0x1718B85F: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1718B862: add edi, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x4C)) */ /* 0x1718B865: cmp eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718B7C6; /* 0x1718B868: jb 0x1718b7c6 */
L_1718B86E:
    eax = MEM32(ebp + 0x1C); /* 0x1718B86E: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718B871: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718B873: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718B874: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718B877: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0xA8)), 0 */ /* 0x1718B87B: cmp dword ptr [ebp - 0xa8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718B88F; /* 0x1718B882: jne 0x1718b88f */
L_1718B884:
    eax = MEM32(ebp + (-0x20)); /* 0x1718B884: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1718B887: mov dword ptr [ebp - 0x18], eax */
    goto L_1718B9D3; /* 0x1718B88A: jmp 0x1718b9d3 */
L_1718B88F:
    eax = ebp + (-0xAC); /* 0x1718B88F: lea eax, [ebp - 0xac] */
    PUSH32(esp, eax); /* 0x1718B895: push eax */
    eax = ebp + (-0x50); /* 0x1718B896: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1718B899: push eax */
    ecx = ebx + 0x74; /* 0x1718B89A: lea ecx, [ebx + 0x74] */
    RECOMP_CALL(sub_1718985A); /* 0x1718B89D: call 0x1718985a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B8A2: mov esi, eax */
    /* test esi, esi */ /* 0x1718B8A4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B8A6: jl 0x1718ba20 */
L_1718B8AC:
    ecx = ebx + 0x74; /* 0x1718B8AC: lea ecx, [ebx + 0x74] */
    RECOMP_CALL(sub_17188D73); /* 0x1718B8AF: call 0x17188d73 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B8B4: mov esi, eax */
    /* test esi, esi */ /* 0x1718B8B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B8B8: jl 0x1718ba20 */
L_1718B8BE:
    ecx = ebx + 0x74; /* 0x1718B8BE: lea ecx, [ebx + 0x74] */
    RECOMP_CALL(sub_171873F9); /* 0x1718B8C1: call 0x171873f9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1718B8C6: push 1 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718B8C8: push dword ptr [ebp + 0x1c] */
    ecx = ebx; /* 0x1718B8CB: mov ecx, ebx */
    RECOMP_CALL(sub_1717E213); /* 0x1718B8CD: call 0x1717e213 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B8D2: mov esi, eax */
    /* test esi, esi */ /* 0x1718B8D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B8D6: jl 0x1718ba20 */
L_1718B8DC:
    eax = MEM32(ebp + 0x1C); /* 0x1718B8DC: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718B8DF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718B8E1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1718B8E2: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1718B8E5: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = eax; /* 0x1718B8E9: mov dword ptr [ebp + 0x10], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718B8F7; /* 0x1718B8EC: je 0x1718b8f7 */
L_1718B8EE:
    eax = MEM32(ebp + 0xC); /* 0x1718B8EE: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1718B8F1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718B8F3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718B8F4: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
L_1718B8F7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x1718B8F7: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x1718B8FB: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718B8FD: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x1718B900: mov ecx, ebx */
    RECOMP_CALL(sub_1717E213); /* 0x1718B902: call 0x1717e213 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B907: mov esi, eax */
    /* test esi, esi */ /* 0x1718B909: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B90B: jl 0x1718ba20 */
L_1718B911:
    eax = MEM32(ebp + 0xC); /* 0x1718B911: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1718B914: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x14); /* 0x1718B916: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1718B919: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718B91A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1718B91D: push 0 */
    PUSH32(esp, eax); /* 0x1718B91F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718B920: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B923: mov esi, eax */
    /* test esi, esi */ /* 0x1718B925: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B927: jl 0x1718ba20 */
L_1718B92D:
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1718B92D: fld dword ptr [ebp - 0x30] */
    eax = MEM32(ebp + (-0x24)); /* 0x1718B930: mov eax, dword ptr [ebp - 0x24] */
    _st[0] += (double)*(float*)ADDR(0x1700531C); /* 0x1718B933: fadd dword ptr [0x1700531c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x1718B939: imul eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1718B93D: push ecx */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x1718B93E: fdiv dword ptr [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x1718B941: push ecx */
    ecx = ebx; /* 0x1718B942: mov ecx, ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1718B944: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1718B948: fld dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718B94B: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1718B94E: push dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1718B951: push eax */
    RECOMP_CALL(sub_17186DB4); /* 0x1718B952: call 0x17186db4 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x1718B957: mov ecx, ebx */
    RECOMP_CALL(sub_1718780B); /* 0x1718B959: call 0x1718780b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B95E: mov esi, eax */
    /* test esi, esi */ /* 0x1718B960: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B962: jl 0x1718ba20 */
L_1718B968:
    eax = MEM32(ebx); /* 0x1718B968: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1718B96A: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x6C)); /* 0x1718B96B: call dword ptr [eax + 0x6c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B96E: mov esi, eax */
    /* test esi, esi */ /* 0x1718B970: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B972: jl 0x1718ba20 */
L_1718B978:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718B978: push dword ptr [ebp + 0x18] */
    ecx = ebx; /* 0x1718B97B: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718B97D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_17181066); /* 0x1718B980: call 0x17181066 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B985: mov esi, eax */
    /* test esi, esi */ /* 0x1718B987: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B989: jl 0x1718ba20 */
L_1718B98F:
    eax = MEM32(ebp + 0x1C); /* 0x1718B98F: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718B992: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x10); /* 0x1718B994: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1718B997: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718B998: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1718B99B: push 0 */
    PUSH32(esp, eax); /* 0x1718B99D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1718B99E: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B9A1: mov esi, eax */
    /* test esi, esi */ /* 0x1718B9A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B9A5: jl 0x1718ba20 */
L_1718B9A7:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718B9A7: push dword ptr [ebp - 0x10] */
    ecx = ebx; /* 0x1718B9AA: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1718B9AC: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x1718B9AF: push dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1718B9B2: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718B9B5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718B9B8: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1717CD44); /* 0x1718B9BB: call 0x1717cd44 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B9C0: mov esi, eax */
    /* test esi, esi */ /* 0x1718B9C2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718B9C4: jl 0x1718ba20 */
L_1718B9C6:
    eax = MEM32(ebp + 0x1C); /* 0x1718B9C6: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718B9C9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718B9CB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718B9CC: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718B9CF: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718B9D3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 1; /* 0x1718B9D3: inc dword ptr [ebp - 0x18] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x18)); /* 0x1718B9D6: mov eax, dword ptr [ebp - 0x18] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1718B9D9: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x1C); /* 0x1718B9DC: mov edi, dword ptr [ebp + 0x1c] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718B38E; /* 0x1718B9DF: jb 0x1718b38e */
L_1718B9E5:
    ecx = ebx + 0x74; /* 0x1718B9E5: lea ecx, [ebx + 0x74] */
    MEM32(ebp + 0x10) = ecx; /* 0x1718B9E8: mov dword ptr [ebp + 0x10], ecx */
    RECOMP_CALL(sub_171873F9); /* 0x1718B9EB: call 0x171873f9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1718B9F0: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718B9F2: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x1718B9F5: mov ecx, ebx */
    RECOMP_CALL(sub_1717E213); /* 0x1718B9F7: call 0x1717e213 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718B9FC: mov esi, eax */
    /* test esi, esi */ /* 0x1718B9FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718BA00: jl 0x1718ba20 */
L_1718BA02:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1718BA02: push dword ptr [ebp + 0x20] */
    ecx = ebx; /* 0x1718BA05: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x1718BA07: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718BA08: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1717F577); /* 0x1718BA0B: call 0x1717f577 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718BA10: mov esi, eax */
    /* test esi, esi */ /* 0x1718BA12: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718BA20; /* 0x1718BA14: jl 0x1718ba20 */
L_1718BA16:
    ecx = MEM32(ebp + 0x10); /* 0x1718BA16: mov ecx, dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_17189D0B); /* 0x1718BA19: call 0x17189d0b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718BA1E: mov esi, eax */
L_1718BA20:
    PUSH32(esp, MEM32(ebp + (-0x70))); /* 0x1718BA20: push dword ptr [ebp - 0x70] */
    RECOMP_CALL(sub_1721B010); /* 0x1718BA23: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1718BA28: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1718BA2C: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718BA38; /* 0x1718BA2D: je 0x1718ba38 */
L_1718BA2F:
    eax = MEM32(ebp + 0x1C); /* 0x1718BA2F: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1718BA32: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718BA34: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718BA35: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
L_1718BA38:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1718BA38: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718BA47; /* 0x1718BA3C: je 0x1718ba47 */
L_1718BA3E:
    eax = MEM32(ebp + 0xC); /* 0x1718BA3E: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1718BA41: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1718BA43: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1718BA44: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
L_1718BA47:
    RECOMP_CALL(sub_1721B218); /* 0x1718BA47: call 0x1721b218 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x000B001Fu); /* 0x1718BA4C: push 0xb001f */
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x1718BA51: push dword ptr [ebp - 0x74] */
    RECOMP_CALL(sub_1721B200); /* 0x1718BA54: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718BA59: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718BA5A: pop ecx */
    goto L_1718BA62; /* 0x1718BA5B: jmp 0x1718ba62 */
L_1718BA5D:
    esi = 0x8876086Cu; /* 0x1718BA5D: mov esi, 0x8876086c */
L_1718BA62:
    ecx = ebp + (-0x9C); /* 0x1718BA62: lea ecx, [ebp - 0x9c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1718BA68: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718BA6C: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xAC); /* 0x1718BA71: lea ecx, [ebp - 0xac] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1718BA77: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718BA7B: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x50); /* 0x1718BA80: lea ecx, [ebp - 0x50] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1718BA83: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718BA87: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1718BA8C: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x8C); /* 0x1718BA90: lea ecx, [ebp - 0x8c] */
    RECOMP_CALL(sub_1717AF06); /* 0x1718BA96: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1718BA9B: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1718BA9E: pop edi */
    eax = esi; /* 0x1718BA9F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718BAA1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718BAA2: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718BAA3: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718BAAA: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1718BAAB: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1718BAB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BAB3u);

L_1718BAB3:
    edi = edi; /* 0x1718BAB3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718BAB5: push ebp */
    ebp = esp; /* 0x1718BAB6: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718BAB8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x1718BABA: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718BAD3; /* 0x1718BABD: jbe 0x1718bad3 */
L_1718BABF:
    PUSH32(esp, ebx); /* 0x1718BABF: push ebx */
    PUSH32(esp, esi); /* 0x1718BAC0: push esi */
L_1718BAC1:
    esi = MEM32(ebp + 0x8); /* 0x1718BAC1: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x1718BAC4: mov edx, dword ptr [ecx] */
    SET_LO8(ebx, MEM8(esi)); /* 0x1718BAC6: mov bl, byte ptr [esi] */
    MEM8(eax + edx) = (uint8_t)(LO8(ebx)); /* 0x1718BAC8: mov byte ptr [eax + edx], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718BACB: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x1718BACC: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718BAC1; /* 0x1718BACF: jb 0x1718bac1 */
L_1718BAD1:
    esi = POP32_VAL(esp); /* 0x1718BAD1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718BAD2: pop ebx */
L_1718BAD3:
    ebp = POP32_VAL(esp); /* 0x1718BAD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718BAD4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718BADC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BADCu);

L_1718BADC:
    edi = edi; /* 0x1718BADC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718BADE: push ebp */
    ebp = esp; /* 0x1718BADF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718BAE1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1718BAE2: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1718BAE5: push edi */
    edi = ecx; /* 0x1718BAE6: mov edi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BAE8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BAE9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BAEA: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0xC); /* 0x1718BAEB: mov esi, dword ptr [ebp + 0xc] */
    edi = ecx + 0xC; /* 0x1718BAEE: lea edi, [ecx + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BAF1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BAF2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BAF3: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x10); /* 0x1718BAF4: mov esi, dword ptr [ebp + 0x10] */
    edi = ecx + 0x18; /* 0x1718BAF7: lea edi, [ecx + 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BAFA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BAFB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BAFC: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1718BAFD: pop edi */
    esi = POP32_VAL(esp); /* 0x1718BAFE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718BAFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718BB00: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1718BB08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BB08u);

L_1718BB08:
    eax = 0x1721C539u; /* 0x1718BB08: mov eax, 0x1721c539 */
    RECOMP_CALL(sub_1721B168); /* 0x1718BB0D: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1718BB12: push ecx */
    PUSH32(esp, ecx); /* 0x1718BB13: push ecx */
    PUSH32(esp, esi); /* 0x1718BB14: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1718BB15: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1718BB18: push edi */
    edi = ecx; /* 0x1718BB19: mov edi, ecx */
    /* cmp esi, MEM32(edi) */ /* 0x1718BB1B: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718BBE1; /* 0x1718BB1D: je 0x1718bbe1 */
L_1718BB23:
    eax = MEM32(edi + 0x4); /* 0x1718BB23: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x1718BB26: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718BB31; /* 0x1718BB28: je 0x1718bb31 */
L_1718BB2A:
    PUSH32(esp, eax); /* 0x1718BB2A: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1718BB2B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718BB30: pop ecx */
L_1718BB31:
    eax = esi; /* 0x1718BB31: mov eax, esi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718BB33: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718BB33: shl eax, 3 */
    PUSH32(esp, ebx); /* 0x1718BB36: push ebx */
    PUSH32(esp, eax); /* 0x1718BB37: push eax */
    MEM32(edi) = esi; /* 0x1718BB38: mov dword ptr [edi], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1718BB3A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1718BB3F: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1718BB41: pop ecx */
    MEM32(ebp + 0x8) = ebx; /* 0x1718BB42: mov dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718BB45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, eax */ /* 0x1718BB47: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1718BB49: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718BB5E; /* 0x1718BB4C: je 0x1718bb5e */
L_1718BB4E:
    PUSH32(esp, 0x1706E47Eu); /* 0x1718BB4E: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x1718BB53: push esi */
    PUSH32(esp, 8); /* 0x1718BB54: push 8 */
    PUSH32(esp, ebx); /* 0x1718BB56: push ebx */
    RECOMP_CALL(sub_1702C116); /* 0x1718BB57: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1718BB5C: mov eax, ebx */
L_1718BB5E:
    /* test eax, eax */ /* 0x1718BB5E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x1718BB60: mov dword ptr [edi + 4], eax */
    ebx = POP32_VAL(esp); /* 0x1718BB63: pop ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718BB6D; /* 0x1718BB64: jne 0x1718bb6d */
L_1718BB66:
    eax = 0x8007000Eu; /* 0x1718BB66: mov eax, 0x8007000e */
    goto L_1718BBE3; /* 0x1718BB6B: jmp 0x1718bbe3 */
L_1718BB6D:
    /* test esi, esi */ /* 0x1718BB6D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = esi; /* 0x1718BB6F: mov dword ptr [ebp + 8], esi */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1718BB72: fild dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718BB7D; /* 0x1718BB75: jge 0x1718bb7d */
L_1718BB77:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718BB77: fadd dword ptr [0x1700142c] */
L_1718BB7D:
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1718BB7D: fdivr dword ptr [0x17001424] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718BB83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1718BB85: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718BBDF; /* 0x1718BB87: jbe 0x1718bbdf */
L_1718BB89:
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x1718BB89: fld dword ptr [0x1700141c] */
L_1718BB8F:
    /* test eax, eax */ /* 0x1718BB8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x1718BB91: fldz  */
    fp_push(_st[1]); /* 0x1718BB93: fld st(1) */
    ecx = eax; /* 0x1718BB95: mov ecx, eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718BBAC; /* 0x1718BB97: je 0x1718bbac */
L_1718BB99:
    /* test LO8(ecx), 1 */ /* 0x1718BB99: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718BBA2; /* 0x1718BB9C: je 0x1718bba2 */
L_1718BB9E:
    fp_push(_st[0]); /* 0x1718BB9E: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1718BBA0: faddp st(2) */
L_1718BBA2:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1718BBA2: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1718BBA2: shr ecx, 1 */
    fp_push(_st[0]); /* 0x1718BBA4: fld st(0) */
    _st[0] *= _st[3]; /* 0x1718BBA6: fmul st(3) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1718BBA8: fstp st(1) */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1718BB99; /* 0x1718BBAA: jne 0x1718bb99 */
L_1718BBAC:
    /* test eax, eax */ /* 0x1718BBAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718BBAE: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1718BBB0: fstp dword ptr [ebp - 0x14] */
    MEM32(ebp + 0x8) = eax; /* 0x1718BBB3: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1718BBB6: fild dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718BBC1; /* 0x1718BBB9: jge 0x1718bbc1 */
L_1718BBBB:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1718BBBB: fadd dword ptr [0x1700142c] */
L_1718BBC1:
    ecx = MEM32(edi + 0x4); /* 0x1718BBC1: mov ecx, dword ptr [edi + 4] */
    _st[0] += _st[1]; /* 0x1718BBC4: fadd st(1) */
    edx = MEM32(ebp + (-0x14)); /* 0x1718BBC6: mov edx, dword ptr [ebp - 0x14] */
    MEM32(ecx + eax * 8) = edx; /* 0x1718BBC9: mov dword ptr [ecx + eax*8], edx */
    _st[0] *= _st[2]; /* 0x1718BBCC: fmul st(2) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718BBCE: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x1718BBCF: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1718BBD1: fstp dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x10)); /* 0x1718BBD4: mov edx, dword ptr [ebp - 0x10] */
    MEM32(ecx + eax * 8 + (-0x4)) = edx; /* 0x1718BBD7: mov dword ptr [ecx + eax*8 - 4], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718BB8F; /* 0x1718BBDB: jb 0x1718bb8f */
L_1718BBDD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718BBDD: fstp st(0) */
L_1718BBDF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718BBDF: fstp st(0) */
L_1718BBE1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718BBE1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718BBE3:
    ecx = MEM32(ebp + (-0xC)); /* 0x1718BBE3: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1718BBE6: pop edi */
    esi = POP32_VAL(esp); /* 0x1718BBE7: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718BBE8: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718BBEF: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718BBF0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718BBF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BBF8u);

L_1718BBF8:
    edi = edi; /* 0x1718BBF8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718BBFA: push ebp */
    ebp = esp; /* 0x1718BBFB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1718BBFD: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718BC00: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718BC01: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1718BC03: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718BC8F; /* 0x1718BC06: jbe 0x1718bc8f */
L_1718BC0C:
    eax = ebp + 0x8; /* 0x1718BC0C: lea eax, [ebp + 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1718BC0F: mov dword ptr [ebp - 0x10], eax */
    eax = ebp + (-0x4); /* 0x1718BC12: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1718BC15: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x8); /* 0x1718BC18: lea eax, [ebp - 8] */
    PUSH32(esp, esi); /* 0x1718BC1B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1718BC1C: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718BC1F: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + 0xC; /* 0x1718BC22: lea eax, [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1718BC25: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718BC26: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718BC29: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1718BC2C: add esi, 8 */
    _flag_k = FK_ADD;
L_1718BC2F:
    fp_push(*(float*)&MEM32(edi + ebx * 8)); /* 0x1718BC2F: fld dword ptr [edi + ebx*8] */
    _st[0] *= (double)*(float*)ADDR(0x1700608C); /* 0x1718BC32: fmul dword ptr [0x1700608c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718BC38: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edi + ebx * 8 + 0x4)); /* 0x1718BC3B: fld dword ptr [edi + ebx*8 + 4] */
    _st[0] += _st[0]; /* 0x1718BC3F: fadd st(0), st(0) */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x1718BC41: fsubr dword ptr [0x17001424] */
    RECOMP_CALL(sub_1721B142); /* 0x1718BC47: call 0x1721b142 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1718BC4C: fstp dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x14)); /* 0x1718BC4F: mov eax, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0x10)); /* 0x1718BC52: mov edx, dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1718BC55: fld dword ptr [ebp - 0xc] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1718BC58: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1718BC5A: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718BC5C: fstp dword ptr [eax] */
    eax = MEM32(ebp + (-0x20)); /* 0x1718BC5E: mov eax, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1718BC61: mov edx, dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1718BC64: fld dword ptr [ebp - 0x18] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1718BC67: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1718BC69: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718BC6B: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1718BC6D: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1718BC70: fmul dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x1718BC73: mov eax, dword ptr [ebp - 8] */
    MEM32(esi) = eax; /* 0x1718BC76: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1718BC78: inc ebx */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x1718BC79: fstp dword ptr [esi - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1718BC7C: add esi, 0xc */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ebp + 0x10) */ /* 0x1718BC7F: cmp ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1718BC82: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1718BC85: fmul dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x10)) = _v; } /* 0x1718BC88: fstp dword ptr [esi - 0x10] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718BC2F; /* 0x1718BC8B: jb 0x1718bc2f */
L_1718BC8D:
    edi = POP32_VAL(esp); /* 0x1718BC8D: pop edi */
    esi = POP32_VAL(esp); /* 0x1718BC8E: pop esi */
L_1718BC8F:
    ebx = POP32_VAL(esp); /* 0x1718BC8F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718BC90: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718BC91: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1718BC99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BC99u);

L_1718BC99:
    edi = edi; /* 0x1718BC99: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718BC9B: push ebp */
    ebp = esp; /* 0x1718BC9C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1718BC9E: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718BCA1: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718BCA2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1718BCA4: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718BD34; /* 0x1718BCA7: jbe 0x1718bd34 */
L_1718BCAD:
    eax = ebp + 0x8; /* 0x1718BCAD: lea eax, [ebp + 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1718BCB0: mov dword ptr [ebp - 0x10], eax */
    eax = ebp + (-0x4); /* 0x1718BCB3: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1718BCB6: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x8); /* 0x1718BCB9: lea eax, [ebp - 8] */
    PUSH32(esp, esi); /* 0x1718BCBC: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1718BCBD: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718BCC0: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + 0xC; /* 0x1718BCC3: lea eax, [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1718BCC6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718BCC7: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718BCCA: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1718BCCD: add esi, 8 */
    _flag_k = FK_ADD;
L_1718BCD0:
    fp_push(*(float*)&MEM32(edi + ebx * 8)); /* 0x1718BCD0: fld dword ptr [edi + ebx*8] */
    _st[0] *= (double)*(float*)ADDR(0x1700608C); /* 0x1718BCD3: fmul dword ptr [0x1700608c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718BCD9: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edi + ebx * 8 + 0x4)); /* 0x1718BCDC: fld dword ptr [edi + ebx*8 + 4] */
    _st[0] *= (double)*(float*)ADDR(0x17001424); /* 0x1718BCE0: fmul dword ptr [0x17001424] */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x1718BCE6: fsubr dword ptr [0x17001424] */
    RECOMP_CALL(sub_1721B142); /* 0x1718BCEC: call 0x1721b142 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1718BCF1: fstp dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x14)); /* 0x1718BCF4: mov eax, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0x10)); /* 0x1718BCF7: mov edx, dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1718BCFA: fld dword ptr [ebp - 0xc] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1718BCFD: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1718BCFF: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718BD01: fstp dword ptr [eax] */
    eax = MEM32(ebp + (-0x20)); /* 0x1718BD03: mov eax, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1718BD06: mov edx, dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1718BD09: fld dword ptr [ebp - 0x18] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1718BD0C: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1718BD0E: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718BD10: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1718BD12: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1718BD15: fmul dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x1718BD18: mov eax, dword ptr [ebp - 8] */
    MEM32(esi) = eax; /* 0x1718BD1B: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1718BD1D: inc ebx */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x1718BD1E: fstp dword ptr [esi - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1718BD21: add esi, 0xc */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ebp + 0x10) */ /* 0x1718BD24: cmp ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1718BD27: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1718BD2A: fmul dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x10)) = _v; } /* 0x1718BD2D: fstp dword ptr [esi - 0x10] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718BCD0; /* 0x1718BD30: jb 0x1718bcd0 */
L_1718BD32:
    edi = POP32_VAL(esp); /* 0x1718BD32: pop edi */
    esi = POP32_VAL(esp); /* 0x1718BD33: pop esi */
L_1718BD34:
    ebx = POP32_VAL(esp); /* 0x1718BD34: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718BD35: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718BD36: ret 0xc */
    RECOMP_REGS_OUT();
}
