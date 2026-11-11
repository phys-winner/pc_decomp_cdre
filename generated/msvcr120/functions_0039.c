#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_100DB420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB420u);

L_100DB420:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DB420: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB426: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _df = 1; /* 0x100DB428: cld  */
    SET_LO8(ebx, 0xDu); /* 0x100DB429: mov bl, 0xd */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DB42B: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB42D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB42F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB431: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB433: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB435: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB437: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB439: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB43B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB43D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB43F: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB441: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x38160FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x38160FB3)) = (uint8_t)(MEM8(ebp + (-0x38160FB3)) + LO8(ecx)); /* 0x100DB443: add byte ptr [ebp - 0x38160fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100DB449: inc ebx */
    _flag_k = FK_INC;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DB44A: stc  */
    RECOMP_ITAIL(0x100DB44Bu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DB460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB460u);

    goto L_100DB460;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB460:
    edx = MEM32(esp + 0x8); /* 0x100DB460: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB464: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x100DB467: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB46A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB46C: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB47Cu; /* 0x100DB471: mov eax, 0x100db47c */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB476: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB47C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB47Cu);

L_100DB47C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x31993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x31993)); /* 0x100DB47C: and al, byte ptr [0x31993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB482: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x100DB484: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DB486: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB48B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB48D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB48F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB491: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB493: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB495: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB497: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB499: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB49B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB49D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x3E7C13B3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x3E7C13B3)) = (uint8_t)(MEM8(ebx + (-0x3E7C13B3)) + LO8(ecx)); /* 0x100DB49F: add byte ptr [ebx - 0x3e7c13b3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE9u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0xE9u); /* 0x100DB4A5: sub al, 0xe9 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _seg_es = POP32_VAL(esp); /* 0x100DB4A7: pop es */
    /* cmp edi, ecx */ /* 0x100DB4A8: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebx + (-0x3E7C0FB3))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x3E7C0FB3)) = MEM32(ebx + (-0x3E7C0FB3)) - 1; /* 0x100DB4AA: dec dword ptr [ebx - 0x3e7c0fb3] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((LO8(eax) | 0xE9u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xE9u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xE9u); /* 0x100DB4B0: or al, 0xe9 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _df = 1; /* 0x100DB4B2: cld  */
    /* cmp HI8(ebx), LO8(ecx) */ /* 0x100DB4B3: cmp bh, cl */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(ebx + (-0x3E7C13B3))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x3E7C13B3)) = MEM32(ebx + (-0x3E7C13B3)) - 1; /* 0x100DB4B5: dec dword ptr [ebx - 0x3e7c13b3] */
    _flag_k = FK_DEC;
    PUSH32(esp, 0xF9E902E9u); /* 0x100DB4BB: push 0xf9e902e9 */
    _flag_a = (uint32_t)(MEM32(ebx + (-0x72F7DBAC))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x72F7DBAC)) = MEM32(ebx + (-0x72F7DBAC)) - 1; /* 0x100DB4C0: dec dword ptr [ebx - 0x72f7dbac] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100DB4C6: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(eax) | 0x8Bu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x8Bu)) << 24;
    SET_LO8(eax, LO8(eax) | 0x8Bu); /* 0x100DB4C7: or al, 0x8b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100DB4C9: dec edx */
    _flag_k = FK_DEC;
    _st[0] /= *(double*)ADDR(ebx); /* 0x100DB4CA: fdiv qword ptr [ebx] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFF4E8u; /* 0x100DB4CC: enter -0xb18, 0x42 */
    RECOMP_ITAIL(0x100DB4D0u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DB4C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB4C1u);

    goto L_100DB4C1;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB4C1:
    edx = MEM32(esp + 0x8); /* 0x100DB4C1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB4C5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x100DB4C8: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB4CB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB4CD: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB4DCu; /* 0x100DB4D2: mov eax, 0x100db4dc */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB4D7: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB4DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB4DCu);

L_100DB4DC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x31993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x31993)); /* 0x100DB4DC: and al, byte ptr [0x31993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB4E2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100DB4E4: dec eax */
    _flag_k = FK_DEC;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x100DB4E5: leave  */
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DB4E6: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB4EB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB4ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB4EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB4F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB4F3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB4F5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB4F7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB4F9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB4FB: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB4FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + 0xBE9C44D)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0xBE9C44D) = (uint8_t)(MEM8(ebp + 0xBE9C44D) + LO8(ecx)); /* 0x100DB4FF: add byte ptr [ebp + 0xbe9c44d], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100DB505: inc ebx */
    _flag_k = FK_INC;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DB506: stc  */
    RECOMP_ITAIL(0x100DB507u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DB510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB510u);

    goto L_100DB510;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB510:
    edx = MEM32(esp + 0x8); /* 0x100DB510: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB514: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x100DB517: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB51A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB51C: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x100DB521: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB524: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB526: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB538u; /* 0x100DB52B: mov eax, 0x100db538 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB530: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB538(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB538u);

    goto L_100DB538;
L_1006F813:
    eax = MEM32(ecx); /* 0x1006F813: mov eax, dword ptr [ecx] */
    MEM32(eax) = 0; /* 0x1006F815: mov dword ptr [eax], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F81B: ret  */
L_100DB538:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DB538: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB53E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ebp + 0x100D) | HI8(edx))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x100D) | HI8(edx))) << 24;
    MEM8(ebp + 0x100D) = (uint8_t)(MEM8(ebp + 0x100D) | HI8(edx)); /* 0x100DB540: or byte ptr [ebp + 0x100d], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB546: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB548: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB54A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB54C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB54E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB550: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB552: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB554: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB556: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x100DB558: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB55A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = ebp + (-0xA8); /* 0x100DB55C: lea ecx, [ebp - 0xa8] */
    RECOMP_BACKEDGE();
    goto L_1006F813; /* 0x100DB562: jmp 0x1006f813 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB570u);

    goto L_100DB570;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB570:
    edx = MEM32(esp + 0x8); /* 0x100DB570: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB574: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB8)); /* 0x100DB577: mov ecx, dword ptr [edx - 0xb8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB57D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB57F: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB590u; /* 0x100DB584: mov eax, 0x100db590 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB589: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB590u);

L_100DB590:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DB590: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB596: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100DB598; /* falls through past a gap */
L_100DB597:
    _flag_a = (uint32_t)(MEM8(eax + (-0x4B))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x4B)) = (uint8_t)(MEM8(eax + (-0x4B)) + HI8(ecx)); /* 0x100DB597: add byte ptr [eax - 0x4b], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100DB59A; /* falls through past a gap */
L_100DB598:
    PUSH32(esp, 0x00100DB5u); /* 0x100DB598: push 0x100db5 */
    goto L_100DB59D; /* falls through past a gap */
L_100DB59A:
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DB59A: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100DB59F; /* falls through past a gap */
L_100DB59D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB59D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100DB59F:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB59F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB5A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB5A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB5A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB5A7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB5A9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB5AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB5AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB5AF: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB5B1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100DB5B3: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100DB597; /* 0x100DB5B5: jne 0x100db597 */
L_100DB5B7:
    RECOMP_CALL(sub_1000ECE0); /* 0x100DB5B7: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100DB5BC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100DB5BD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100DB5C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB5C8u);

    goto L_100DB5C8;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB5C8:
    edx = MEM32(esp + 0x8); /* 0x100DB5C8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB5CC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x100DB5CF: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB5D2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB5D4: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x100DB5D9: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB5DC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB5DE: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB5F0u; /* 0x100DB5E3: mov eax, 0x100db5f0 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB5E8: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB5F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB5F0u);

L_100DB5F0:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DB5F0: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB5F6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (0u) _cf = _cf; /* 0x100DB5F8: sal byte ptr [ebp + 0x100d], 0 */
    if (0u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(ebp + 0x100D) << 0u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(ebp + 0x100D) = (uint8_t)(MEM8(ebp + 0x100D) << 0u); /* 0x100DB5F8: sal byte ptr [ebp + 0x100d], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB5FF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB601: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB603: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB605: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB607: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB609: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB60B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB60D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB60F: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB611: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x111617B3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x111617B3)) = (uint8_t)(MEM8(ebp + (-0x111617B3)) + LO8(ecx)); /* 0x100DB613: add byte ptr [ebp - 0x111617b3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100DB619: inc ecx */
    _flag_k = FK_INC;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DB61A: stc  */
    RECOMP_ITAIL(0x100DB61Bu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DB624(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB624u);

    goto L_100DB624;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB624:
    edx = MEM32(esp + 0x8); /* 0x100DB624: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB628: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x100DB62B: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB62E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB630: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB640u; /* 0x100DB635: mov eax, 0x100db640 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB63A: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB640u);

L_100DB640:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DB640: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB646: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = LO8(eax), _sb = 0xB6u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DB648: sbb al, 0xb6 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DB64A: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB64F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB651: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB653: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB655: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB657: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB659: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB65B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB65D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB65F: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB661: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x611613B3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x611613B3)) = (uint8_t)(MEM8(ebp + (-0x611613B3)) + LO8(ecx)); /* 0x100DB663: add byte ptr [ebp - 0x611613b3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100DB669: inc ecx */
    _flag_k = FK_INC;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DB66A: stc  */
    RECOMP_ITAIL(0x100DB66Bu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DB674(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB674u);

    goto L_100DB674;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB674:
    edx = MEM32(esp + 0x8); /* 0x100DB674: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB678: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x100DB67B: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB67E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB680: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB690u; /* 0x100DB685: mov eax, 0x100db690 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB68A: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB690u);

L_100DB690:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DB690: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB696: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100DB698u, "insb byte ptr es:[edi], dx");
    SET_HI8(edx, 0xDu); /* 0x100DB699: mov dh, 0xd */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DB69B: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB69D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB69F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6A7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6A9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB6AF: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6B1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x3116F7B3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x3116F7B3)) = (uint8_t)(MEM8(ebp + (-0x3116F7B3)) + LO8(ecx)); /* 0x100DB6B3: add byte ptr [ebp - 0x3116f7b3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100DB6B9: pushfd  */
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DB6BA: stc  */
    RECOMP_ITAIL(0x100DB6BBu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DB6C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB6C6u);

    goto L_100DB6C6;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB6C6:
    edx = MEM32(esp + 0x8); /* 0x100DB6C6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB6CA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DB6CD: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB6D0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB6D2: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB6E4u; /* 0x100DB6D7: mov eax, 0x100db6e4 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB6DC: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB6E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB6E4u);

L_100DB6E4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DB6E4: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6EA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSHAD(); /* 0x100DB6EC: pushal  */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x100DB6ED: leave  */
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DB6EE: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6F3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6F5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6F7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6F9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6FB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB6FF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB701: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB703: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB705: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5161BB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x5161BB3)) = (uint8_t)(MEM8(ebp + (-0x5161BB3)) + LO8(ecx)); /* 0x100DB707: add byte ptr [ebp - 0x5161bb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100DB70D: inc eax */
    _flag_k = FK_INC;
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DB70E: stc  */
    RECOMP_ITAIL(0x100DB70Fu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DB718(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB718u);

    goto L_100DB718;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB718:
    edx = MEM32(esp + 0x8); /* 0x100DB718: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x100DB71C: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x100DB71F: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB722: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB724: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB734u; /* 0x100DB729: mov eax, 0x100db734 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB72E: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB734(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB734u);

    goto L_100DB734;
L_1006EFB2:
    PUSH32(esp, ecx); /* 0x1006EFB2: push ecx */
    RECOMP_ICALL(MEM32(0x100E5040)); /* 0x1006EFB3: call dword ptr [0x100e5040] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EFB9: ret  */
L_100DB734:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DB734: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB73A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(edi + 0x100D), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DB73C: adc byte ptr [edi + 0x100d], dh */
      MEM8(edi + 0x100D) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB742: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB744: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB746: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB748: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB74A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB74C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB74E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB750: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB752: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x100DB754: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB756: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = MEM32(ebp + (-0x14)); /* 0x100DB758: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2Cu; /* 0x100DB75B: add ecx, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1006EFB2; /* 0x100DB75E: jmp 0x1006efb2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB76E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB76Eu);

    goto L_100DB76E;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB76E:
    edx = MEM32(esp + 0x8); /* 0x100DB76E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB772: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x100DB775: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB778: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB77A: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB78Cu; /* 0x100DB77F: mov eax, 0x100db78c */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB784: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB78C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB78Cu);

    goto L_100DB78C;
L_100DB75F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100DB75F: dec edi */
    _flag_k = FK_DEC;
    /* cmp LO8(ecx), HI8(ebx) */ /* 0x100DB760: cmp cl, bh */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(ebx + (-0x3E7C13B3))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x3E7C13B3)) = MEM32(ebx + (-0x3E7C13B3)) - 1; /* 0x100DB762: dec dword ptr [ebx - 0x3e7c13b3] */
    _flag_k = FK_DEC;
    PUSH32(esp, 0xF9E655E9u); /* 0x100DB768: push 0xf9e655e9 */
    _flag_a = (uint32_t)(MEM32(ebx + (-0x72F7DBAC))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x72F7DBAC)) = MEM32(ebx + (-0x72F7DBAC)) - 1; /* 0x100DB76D: dec dword ptr [ebx - 0x72f7dbac] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100DB773: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(eax) | 0x8Bu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x8Bu)) << 24;
    SET_LO8(eax, LO8(eax) | 0x8Bu); /* 0x100DB774: or al, 0x8b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100DB776: dec edx */
    _flag_k = FK_DEC;
    RECOMP_ICALL(0x57F67FAFu); /* 0x100DB777: call 0x57f67faf */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100DB77C: inc eax */
    _flag_k = FK_INC;
    RECOMP_ITAIL(0x100DB77Du); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_100DB78C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DB78C: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB792: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100DB75F; /* 0x100DB794: jo 0x100db75f */
L_100DB796:
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DB796: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB79B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB79D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB79F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB7A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB7A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB7A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB7A7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB7A9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB7AB: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB7AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x3E7C0FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x3E7C0FB3)) = (uint8_t)(MEM8(ebx + (-0x3E7C0FB3)) + LO8(ecx)); /* 0x100DB7AF: add byte ptr [ebx - 0x3e7c0fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = LO8(eax), _sb = 0xE9u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DB7B5: sbb al, 0xe9 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* out: no port I/O under Win32 */ /* 0x100DB7B7: out dx, al */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((eax) >> 31) & 1u)); /* 0x100DB7B8: sar eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31));
    _flag_a = (uint32_t)(MEM32(ebp + (-0x19161BB3))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x19161BB3)) = MEM32(ebp + (-0x19161BB3)) - 1; /* 0x100DB7BA: dec dword ptr [ebp - 0x19161bb3] */
    _flag_k = FK_DEC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((eax) >> 31) & 1u)); /* 0x100DB7C0: sar eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31));
    _flag_a = (uint32_t)(MEM32(ebx + (-0x3E7CF7B3))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x3E7CF7B3)) = MEM32(ebx + (-0x3E7CF7B3)) - 1; /* 0x100DB7C2: dec dword ptr [ebx - 0x3e7cf7b3] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE9u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xE9u); /* 0x100DB7C8: add al, 0xe9 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100DB7CAu, "fcmovnbe st(0), st(3)");
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DB7CC: clc  */
    RECOMP_ITAIL(0x100DB7CDu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DB7FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB7FCu);

    goto L_100DB7FC;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB7FC:
    edx = MEM32(esp + 0x8); /* 0x100DB7FC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB800: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x100DB803: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB806: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB808: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB818u; /* 0x100DB80D: mov eax, 0x100db818 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB812: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB818(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB818u);

    goto L_100DB818;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB818:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x81993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x81993)); /* 0x100DB818: and al, byte ptr [0x81993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB81E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0xDu)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0xDu)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0xDu); /* 0x100DB820: or cl, 0xd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DB823: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB825: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB827: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB829: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB82B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB82D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB82F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB831: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB833: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB835: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB837: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB839: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB83B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB83D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x3E7C0FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x3E7C0FB3)) = (uint8_t)(MEM8(ebx + (-0x3E7C0FB3)) + LO8(ecx)); /* 0x100DB83F: add byte ptr [ebx - 0x3e7c0fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = LO8(eax), _sb = 0xE9u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DB845: sbb al, 0xe9 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = POP32_VAL(esp); /* 0x100DB847: pop esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((eax) >> 31) & 1u)); /* 0x100DB848: sar eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31));
    RECOMP_ICALL(MEM32(eax + (-0x1))); /* 0x100DB84A: call dword ptr [eax - 1] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100DB850: inc eax */
    _flag_k = FK_INC;
    eax = 0x548B100Du; /* 0x100DB851: mov eax, 0x548b100d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    SET_LO8(eax, LO8(eax) & 8); /* 0x100DB856: and al, 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = edx + 0xC; /* 0x100DB858: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DB85B: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB85E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB860: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB870u; /* 0x100DB865: mov eax, 0x100db870 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB86A: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB854(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB854u);

    goto L_100DB854;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB854:
    edx = MEM32(esp + 0x8); /* 0x100DB854: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB858: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DB85B: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB85E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB860: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB870u; /* 0x100DB865: mov eax, 0x100db870 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB86A: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB870u);

L_100DB870:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DB870: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB876: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100DB878: dec esp */
    _flag_k = FK_DEC;
    eax = 0x100Du; /* 0x100DB879: mov eax, 0x100d */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB87E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB880: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB882: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB884: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB886: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB888: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB88A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB88C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB88E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x100DB890: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB892: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x100DB894: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100DB897: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100DB89C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100DB89D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100DB8A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB8A8u);

    goto L_100DB8A8;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB8A8:
    edx = MEM32(esp + 0x8); /* 0x100DB8A8: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x100DB8AC: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x100DB8AF: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB8B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB8B4: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB8C4u; /* 0x100DB8B9: mov eax, 0x100db8c4 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB8BE: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB8C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB8C4u);

    goto L_100DB8C4;
L_1007304D:
    MEM32(ecx) = 0x10067920u; /* 0x1007304D: mov dword ptr [ecx], 0x10067920 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10073053: ret  */
L_100DB8C4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DB8C4: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB8CA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(0x100DB8)); /* 0x100DB8CC: mov al, byte ptr [0x100db8] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB8D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB8D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB8D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB8D7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB8D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB8DB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB8DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB8DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB8E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB8E3: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB8E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + 0x5DE9EC4D)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x5DE9EC4D) = (uint8_t)(MEM8(ebx + 0x5DE9EC4D) + LO8(ecx)); /* 0x100DB8E7: add byte ptr [ebx + 0x5de9ec4d], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100DB8ED; /* falls through past a gap */
L_100DB8E8:
    ecx = MEM32(ebp + (-0x14)); /* 0x100DB8E8: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1007304D; /* 0x100DB8EB: jmp 0x1007304d */
L_100DB8ED:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_100DB8E8; /* 0x100DB8ED: ja 0x100db8e8 */
L_100DB8EF:
    _flag_a = (uint32_t)(MEM32(ebx + (-0x3E7C13B3))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x3E7C13B3)) = MEM32(ebx + (-0x3E7C13B3)) - 1; /* 0x100DB8EF: dec dword ptr [ebx - 0x3e7c13b3] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE9u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xE9u); /* 0x100DB8F5: add al, 0xe9 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x100DB8F7u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DB96A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB96Au);

    goto L_100DB96A;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DB96A:
    edx = MEM32(esp + 0x8); /* 0x100DB96A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DB96E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x100DB971: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DB974: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DB976: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DB988u; /* 0x100DB97B: mov eax, 0x100db988 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DB980: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DB988(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DB988u);

    goto L_100DB988;
L_1007304D:
    MEM32(ecx) = 0x10067920u; /* 0x1007304D: mov dword ptr [ecx], 0x10067920 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10073053: ret  */
L_100DB988:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0xB1993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0xB1993)); /* 0x100DB988: and al, byte ptr [0xb1993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB98E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _rv = (LO8(ecx)) & 255u, _rn = ((0xDu) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 7)) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO8(ecx, _rv); } /* 0x100DB990: ror cl, 0xd */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DB993: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB995: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB997: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB999: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB99B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB99D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB99F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB9A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB9A3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB9A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DB9A7: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB9A9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB9AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DB9AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x6A160FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x6A160FB3)) = (uint8_t)(MEM8(ebx + (-0x6A160FB3)) + LO8(ecx)); /* 0x100DB9AF: add byte ptr [ebx - 0x6a160fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100DB9B5; /* falls through past a gap */
L_100DB9B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x100DB9B0: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_1007304D; /* 0x100DB9B3: jmp 0x1007304d */
L_100DB9B5:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_100DB9B0; /* 0x100DB9B5: jbe 0x100db9b0 */
L_100DB9B7:
    _flag_a = (uint32_t)(MEM32(ebx + (-0x3E7C0FB3))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x3E7C0FB3)) = MEM32(ebx + (-0x3E7C0FB3)) - 1; /* 0x100DB9B7: dec dword ptr [ebx - 0x3e7c0fb3] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE9u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xE9u); /* 0x100DB9BD: add al, 0xe9 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x100DB9BFu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DBA32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBA32u);

    goto L_100DBA32;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBA32:
    edx = MEM32(esp + 0x8); /* 0x100DBA32: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBA36: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DBA39: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBA3C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBA3E: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBA50u; /* 0x100DBA43: mov eax, 0x100dba50 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBA48: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBA50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBA50u);

L_100DBA50:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0xB1993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0xB1993)); /* 0x100DBA50: and al, byte ptr [0xb1993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA56: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = LO8(edx), _sb = LO8(ecx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DBA58: sbb dl, cl */
      SET_LO8(edx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DBA5A: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA5F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA61: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA63: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA65: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA67: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA69: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA6B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA6D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DBA6F: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA71: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA73: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBA75: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x3E7C0FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x3E7C0FB3)) = (uint8_t)(MEM8(ebx + (-0x3E7C0FB3)) + LO8(ecx)); /* 0x100DBA77: add byte ptr [ebx - 0x3e7c0fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24; _flag_b = (uint32_t)((LO8(ecx) | HI8(ecx))) << 24;
    SET_LO8(ecx, LO8(ecx) | HI8(ecx)); /* 0x100DBA7D: or cl, ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100DBA7F: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(MEM32(ebx + (-0x3E7C0FB3))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x3E7C0FB3)) = MEM32(ebx + (-0x3E7C0FB3)) - 1; /* 0x100DBA82: dec dword ptr [ebx - 0x3e7c0fb3] */
    _flag_k = FK_DEC;
    { uint32_t _aa = LO8(ecx), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DBA88: adc cl, ch */
      SET_LO8(ecx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, esp); /* 0x100DBA8A: push esp */
    { uint32_t _tmp = ebp; /* 0x100DBA8B: xchg ebp, eax */
      ebp = eax;
      eax = _tmp; }
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DBA8C: stc  */
    _flag_a = (uint32_t)(MEM32(ebx + (-0x3E7C0FB3))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x3E7C0FB3)) = MEM32(ebx + (-0x3E7C0FB3)) - 1; /* 0x100DBA8D: dec dword ptr [ebx - 0x3e7c0fb3] */
    _flag_k = FK_DEC;
    { uint32_t _aa = LO8(ecx), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DBA93: adc cl, ch */
      SET_LO8(ecx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0x8DFFF9A8u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DBA95: sbb eax, 0x8dfff9a8 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100DBA9A: dec ebp */
    _flag_k = FK_DEC;
    RECOMP_ITAIL(0x100DBA9Bu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DBAA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBAA1u);

    goto L_100DBAA1;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBAA1:
    edx = MEM32(esp + 0x8); /* 0x100DBAA1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBAA5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DBAA8: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBAAB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBAAD: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBABCu; /* 0x100DBAB2: mov eax, 0x100dbabc */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBAB7: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBABC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBABCu);

L_100DBABC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x41993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x41993)); /* 0x100DBABC: and al, byte ptr [0x41993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBAC2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100DBA90; /* 0x100DBAC4: jo 0x100dba90 */
L_100DBAC6:
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DBAC6: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBACB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBACD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBACF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBAD1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBAD3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBAD5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBAD7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBAD9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DBADB: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBADD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + 0x2BE9EC4D)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x2BE9EC4D) = (uint8_t)(MEM8(ebp + 0x2BE9EC4D) + LO8(ecx)); /* 0x100DBADF: add byte ptr [ebp + 0x2be9ec4d], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, 0x75FFFFF9u */ /* 0x100DBAE5: cmp eax, 0x75fffff9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x75FFFFF9u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    /* in: no port I/O under Win32 */ /* 0x100DBAEA: in al, dx */
    RECOMP_CALL(sub_1000ECE0); /* 0x100DBAEB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100DBAF0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100DBAF1: ret  */
    L_100DBA90: RECOMP_ITAIL(0x100DBA90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_100DBAF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBAF2u);

    goto L_100DBAF2;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBAF2:
    edx = MEM32(esp + 0x8); /* 0x100DBAF2: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBAF6: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x100DBAF9: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBAFC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBAFE: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBB10u; /* 0x100DBB03: mov eax, 0x100dbb10 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBB08: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBB10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBB10u);

L_100DBB10:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DBB10: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBB16: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100DBB18: nop  */
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100DBB19: retf 0x100d */
    RECOMP_REGS_OUT();
}

void sub_100DBB86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBB86u);

    goto L_100DBB86;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBB86:
    edx = MEM32(esp + 0x8); /* 0x100DBB86: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x7C); /* 0x100DBB8A: lea eax, [edx - 0x7c] */
    ecx = MEM32(edx + (-0x80)); /* 0x100DBB8D: mov ecx, dword ptr [edx - 0x80] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBB90: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBB92: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBBA8u; /* 0x100DBB97: mov eax, 0x100dbba8 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBB9C: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBBA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBBA8u);

L_100DBBA8:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x81993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x81993)); /* 0x100DBBA8: and al, byte ptr [0x81993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBAE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(0x100DCA)); /* 0x100DBBB0: mov al, byte ptr [0x100dca] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBB5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBB7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBB9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBBB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBBD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBBF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBC1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBC3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBC5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DBBC7: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBC9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBCB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBBCD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + 0x3BE9EC4D)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x3BE9EC4D) = (uint8_t)(MEM8(ebp + 0x3BE9EC4D) + LO8(ecx)); /* 0x100DBBCF: add byte ptr [ebp + 0x3be9ec4d], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), 0xF9u */ /* 0x100DBBD5: cmp al, 0xf9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xF9u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(ebp + (-0x55160FB3))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x55160FB3)) = MEM32(ebp + (-0x55160FB3)) - 1; /* 0x100DBBD7: dec dword ptr [ebp - 0x55160fb3] */
    _flag_k = FK_DEC;
    { uint32_t _tmp = edi; /* 0x100DBBDD: xchg edi, eax */
      edi = eax;
      eax = _tmp; }
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DBBDE: stc  */
    _flag_a = (uint32_t)(MEM32(ebx + (-0x72F7DBAC))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x72F7DBAC)) = MEM32(ebx + (-0x72F7DBAC)) - 1; /* 0x100DBBDF: dec dword ptr [ebx - 0x72f7dbac] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100DBBE5: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(eax) | 0x8Bu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x8Bu)) << 24;
    SET_LO8(eax, LO8(eax) | 0x8Bu); /* 0x100DBBE6: or al, 0x8b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100DBBE8: dec edx */
    _flag_k = FK_DEC;
    /* in: no port I/O under Win32 */ /* 0x100DBBE9: in al, 0x33 */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFD5E8u; /* 0x100DBBEB: enter -0x2a18, 0x3b */
    RECOMP_ITAIL(0x100DBBEFu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DBBE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBBE0u);

    goto L_100DBBE0;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBBE0:
    edx = MEM32(esp + 0x8); /* 0x100DBBE0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBBE4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x100DBBE7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBBEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBBEC: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBBFCu; /* 0x100DBBF1: mov eax, 0x100dbbfc */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBBF6: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBBFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBBFCu);

    goto L_100DBBFC;
L_1006F813:
    eax = MEM32(ecx); /* 0x1006F813: mov eax, dword ptr [ecx] */
    MEM32(eax) = 0; /* 0x1006F815: mov dword ptr [eax], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F81B: ret  */
L_100DBBD0:
    ecx = ebp + (-0x14); /* 0x100DBBD0: lea ecx, [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_1006F813; /* 0x100DBBD3: jmp 0x1006f813 */
L_100DBBFC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DBBFC: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC02: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100DBBD0; } /* 0x100DBC04: loopne 0x100dbbd0 */
L_100DBC06:
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DBC06: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC0B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC0D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC0F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC11: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC13: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC15: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC17: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC19: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DBC1B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC1D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14160FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x14160FB3)) = (uint8_t)(MEM8(ebp + (-0x14160FB3)) + LO8(ecx)); /* 0x100DBC1F: add byte ptr [ebp - 0x14160fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp edi, ecx */ /* 0x100DBC25: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_ITAIL(0x100DBC27u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DBC32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBC32u);

    goto L_100DBC32;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBC32:
    edx = MEM32(esp + 0x8); /* 0x100DBC32: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBC36: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x100DBC39: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBC3C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBC3E: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBC50u; /* 0x100DBC43: mov eax, 0x100dbc50 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBC48: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBC50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBC50u);

L_100DBC50:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DBC50: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC56: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x100DBC58u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DBC74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBC74u);

    goto L_100DBC74;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBC74:
    edx = MEM32(esp + 0x8); /* 0x100DBC74: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBC78: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x100DBC7B: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBC7E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBC80: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBC90u; /* 0x100DBC85: mov eax, 0x100dbc90 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBC8A: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBC90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBC90u);

L_100DBC90:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DBC90: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBC96: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + LO8(ecx)); /* 0x100DBC98: add bl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | 0x110u)); _flag_b = (uint32_t)((eax | 0x110u));
    eax = eax | 0x110u; /* 0x100DBC9A: or eax, 0x110 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100DBC9F: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100DBCA1: retf  */
    RECOMP_REGS_OUT();
}

void sub_100DBCC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBCC8u);

    goto L_100DBCC8;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBCC8:
    edx = MEM32(esp + 0x8); /* 0x100DBCC8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBCCC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x100DBCCF: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBCD2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBCD4: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBCE4u; /* 0x100DBCD9: mov eax, 0x100dbce4 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBCDE: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBCE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBCE4u);

    goto L_100DBCE4;
L_10068BA9:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x10068BA9: push dword ptr [ecx + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10068BAC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10068BB1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10068BB2: ret  */
L_100DBCE4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DBCE4: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBCEA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (0u) _cf = _cf; /* 0x100DBCEC: sar byte ptr [ebp + ecx + 0x10], 0 */
    if (0u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(ebp + ecx + 0x10)) >> 0u))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(ebp + ecx + 0x10) = (uint8_t)((uint32_t)((int32_t)(int32_t)(int8_t)(MEM8(ebp + ecx + 0x10)) >> 0u));
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBCF4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBCF6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBCF8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBCFA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBCFC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBCFE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD00: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD02: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x100DBD04: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = MEM32(ebp + (-0x10)); /* 0x100DBD08: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100DBD0B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100DBD1C; /* 0x100DBD0E: je 0x100dbd1c */
L_100DBD10:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x100DBD10: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100DBD14: mov ecx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_10068BA9; /* 0x100DBD17: jmp 0x10068ba9 */
L_100DBD1C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100DBD1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100DBD28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBD28u);

    goto L_100DBD28;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBD28:
    edx = MEM32(esp + 0x8); /* 0x100DBD28: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBD2C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DBD2F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBD32: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBD34: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBD44u; /* 0x100DBD39: mov eax, 0x100dbd44 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBD3E: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBD44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBD44u);

    goto L_100DBD44;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBD44:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DBD44: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD4A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + 0x100D)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    MEM8(ebp + 0x100D) = (uint8_t)(MEM8(ebp + 0x100D) & HI8(ebx)); /* 0x100DBD4C: and byte ptr [ebp + 0x100d], bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD52: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD54: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD56: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD58: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD5A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD5C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD5E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD60: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD62: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x100DBD64: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD66: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = MEM32(esp + 0x8); /* 0x100DBD68: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBD6C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x100DBD6F: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBD72: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBD74: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBD84u; /* 0x100DBD79: mov eax, 0x100dbd84 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBD7E: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBD68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBD68u);

    goto L_100DBD68;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBD68:
    edx = MEM32(esp + 0x8); /* 0x100DBD68: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBD6C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x100DBD6F: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBD72: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBD74: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBD84u; /* 0x100DBD79: mov eax, 0x100dbd84 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBD7E: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBD84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBD84u);

    goto L_100DBD84;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBD84:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DBD84: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD8A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ 0xCBu)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0xCBu)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0xCBu); /* 0x100DBD8C: xor al, 0xcb */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((eax | 0x110u)); _flag_b = (uint32_t)((eax | 0x110u));
    eax = eax | 0x110u; /* 0x100DBD8E: or eax, 0x110 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(ebx + ecx * 8 + 0xD)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + ecx * 8 + 0xD) = (uint8_t)(MEM8(ebx + ecx * 8 + 0xD) + LO8(eax)); /* 0x100DBD93: add byte ptr [ebx + ecx*8 + 0xd], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DBD97: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD99: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD9B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD9D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBD9F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDA1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DBDA3: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDA5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x3E7C0FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x3E7C0FB3)) = (uint8_t)(MEM8(ebx + (-0x3E7C0FB3)) + LO8(ecx)); /* 0x100DBDA7: add byte ptr [ebx - 0x3e7c0fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    SET_LO8(ecx, LO8(ecx) & HI8(ecx)); /* 0x100DBDAD: and cl, ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, MEM32(ecx)); /* 0x100DBDAF: push dword ptr [ecx] */
    { _cf = 1; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DBDB1: stc  */
    RECOMP_ICALL(MEM32(eax + (-0x1))); /* 0x100DBDB2: call dword ptr [eax - 1] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 0xBDu */ /* 0x100DBDB8: test al, 0xbd */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xBDu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((eax | 0x24548B10u)); _flag_b = (uint32_t)((eax | 0x24548B10u));
    eax = eax | 0x24548B10u; /* 0x100DBDBA: or eax, 0x24548b10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM8(ebp + 0x4A8B0C42) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x4A8B0C42) | LO8(ecx))) << 24;
    MEM8(ebp + 0x4A8B0C42) = (uint8_t)(MEM8(ebp + 0x4A8B0C42) | LO8(ecx)); /* 0x100DBDBF: or byte ptr [ebp + 0x4a8b0c42], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* in: no port I/O under Win32 */ /* 0x100DBDC5: in al, dx */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBDC6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBDC8: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBDD8u; /* 0x100DBDCD: mov eax, 0x100dbdd8 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBDD2: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBDBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBDBCu);

    goto L_100DBDBC;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBDBC:
    edx = MEM32(esp + 0x8); /* 0x100DBDBC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBDC0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DBDC3: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBDC6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBDC8: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBDD8u; /* 0x100DBDCD: mov eax, 0x100dbdd8 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBDD2: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBDD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBDD8u);

L_100DBDD8:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DBDD8: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDDE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_HI8(eax, 0xBDu); /* 0x100DBDE0: mov ah, 0xbd */
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DBDE2: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDE7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDE9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDEB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDEF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDF1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDF3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDF5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DBDF7: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBDF9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + 0x6E9F04D)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x6E9F04D) = (uint8_t)(MEM8(ebp + 0x6E9F04D) + LO8(ecx)); /* 0x100DBDFB: add byte ptr [ebp + 0x6e9f04d], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp HI8(ebx), LO8(ecx) */ /* 0x100DBE01: cmp bh, cl */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_ITAIL(0x100DBE03u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DBE0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBE0Cu);

    goto L_100DBE0C;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBE0C:
    edx = MEM32(esp + 0x8); /* 0x100DBE0C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBE10: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DBE13: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBE16: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBE18: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBE28u; /* 0x100DBE1D: mov eax, 0x100dbe28 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBE22: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBE28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBE28u);

L_100DBE28:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DBE28: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE2E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xBEu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xBEu); /* 0x100DBE30: add al, 0xbe */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DBE32: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE37: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE39: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE3B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE3D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE3F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE41: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE43: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE45: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DBE47: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE49: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x49160FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x49160FB3)) = (uint8_t)(MEM8(ebp + (-0x49160FB3)) + LO8(ecx)); /* 0x100DBE4B: add byte ptr [ebp - 0x49160fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp ecx, edi */ /* 0x100DBE51: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_ITAIL(0x100DBE53u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DBE5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBE5Cu);

    goto L_100DBE5C;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBE5C:
    edx = MEM32(esp + 0x8); /* 0x100DBE5C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBE60: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x100DBE63: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBE66: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBE68: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBE78u; /* 0x100DBE6D: mov eax, 0x100dbe78 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBE72: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBE78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBE78u);

    goto L_100DBE78;
L_1006F80A:
    PUSH32(esp, MEM32(ecx)); /* 0x1006F80A: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x1006F80C: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F812: ret  */
L_100DBE78:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DBE78: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE7E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x100DBE80: push esp */
    esi = 0x100Du; /* 0x100DBE81: mov esi, 0x100d */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE86: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE88: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE8A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE8C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE8E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE90: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE92: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE94: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE96: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x100DBE98: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBE9A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = ebp + (-0x3C); /* 0x100DBE9C: lea ecx, [ebp - 0x3c] */
    RECOMP_BACKEDGE();
    goto L_1006F80A; /* 0x100DBE9F: jmp 0x1006f80a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBEAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBEACu);

    goto L_100DBEAC;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBEAC:
    edx = MEM32(esp + 0x8); /* 0x100DBEAC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBEB0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x100DBEB3: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBEB6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBEB8: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x100DBEBD: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBEC0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBEC2: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBED4u; /* 0x100DBEC7: mov eax, 0x100dbed4 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBECC: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBED4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBED4u);

    goto L_100DBED4;
L_1006EFB2:
    PUSH32(esp, ecx); /* 0x1006EFB2: push ecx */
    RECOMP_ICALL(MEM32(0x100E5040)); /* 0x1006EFB3: call dword ptr [0x100e5040] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006EFB9: ret  */
L_100DBED4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DBED4: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBEDA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100DBEDC: movsb byte ptr es:[edi], byte ptr [esi] */
    esi = 0x100Du; /* 0x100DBEDD: mov esi, 0x100d */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBEE2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBEE4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBEE6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBEE8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBEEA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBEEC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBEEE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBEF0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBEF2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x100DBEF4: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBEF6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ecx = MEM32(ebp + (-0x14)); /* 0x100DBEF8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x100DBEFB: add ecx, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1006EFB2; /* 0x100DBEFE: jmp 0x1006efb2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBF0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBF0Cu);

    goto L_100DBF0C;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBF0C:
    edx = MEM32(esp + 0x8); /* 0x100DBF0C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBF10: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x100DBF13: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBF16: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBF18: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBF28u; /* 0x100DBF1D: mov eax, 0x100dbf28 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBF22: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBF28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBF28u);

L_100DBF28:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DBF28: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF2E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xBFu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xBFu); /* 0x100DBF30: add al, 0xbf */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DBF32: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF37: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF39: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF3B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF3D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF3F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF41: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF43: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF45: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DBF47: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF49: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + 0x48E9F04D)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x48E9F04D) = (uint8_t)(MEM8(ebp + 0x48E9F04D) + LO8(ecx)); /* 0x100DBF4B: add byte ptr [ebp + 0x48e9f04d], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100DBF51u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBF5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBF5Cu);

    goto L_100DBF5C;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBF5C:
    edx = MEM32(esp + 0x8); /* 0x100DBF5C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBF60: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DBF63: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBF66: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBF68: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBF78u; /* 0x100DBF6D: mov eax, 0x100dbf78 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBF72: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBF78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBF78u);

    goto L_100DBF78;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBF78:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DBF78: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF7E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x100DBF80: push esp */
    edi = 0x100Du; /* 0x100DBF81: mov edi, 0x100d */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF86: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF88: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF8A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF8C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF8E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF90: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF92: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF94: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF96: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x100DBF98: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBF9A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = MEM32(esp + 0x8); /* 0x100DBF9C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBFA0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x100DBFA3: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBFA6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBFA8: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBFB8u; /* 0x100DBFAD: mov eax, 0x100dbfb8 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBFB2: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBF9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBF9Cu);

    goto L_100DBF9C;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBF9C:
    edx = MEM32(esp + 0x8); /* 0x100DBF9C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBFA0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x100DBFA3: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBFA6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBFA8: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DBFB8u; /* 0x100DBFAD: mov eax, 0x100dbfb8 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DBFB2: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBFB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBFB8u);

    goto L_100DBFB8;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBFB8:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DBFB8: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBFBE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x01100DCBu); /* 0x100DBFC0: push 0x1100dcb */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBFC5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x35))) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x35)) = (uint8_t)(MEM8(eax + (-0x35)) + HI8(ebx)); /* 0x100DBFC7: add byte ptr [eax - 0x35], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DBFCA: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBFCF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBFD1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBFD3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBFD5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DBFD7: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DBFD9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x3E7C0FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x3E7C0FB3)) = (uint8_t)(MEM8(ebx + (-0x3E7C0FB3)) + LO8(ecx)); /* 0x100DBFDB: add byte ptr [ebx - 0x3e7c0fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), 0xE9u */ /* 0x100DBFE1: cmp al, 0xe9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE9u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = POP32_VAL(esp); /* 0x100DBFE3: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)eax; /* 0x100DBFE4: idiv eax */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    RECOMP_ICALL(MEM32(eax + (-0x1))); /* 0x100DBFE6: call dword ptr [eax - 1] */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(edi + 0x548B100D) / _st[0]; /* 0x100DBFEC: fdivr qword ptr [edi + 0x548b100d] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    SET_LO8(eax, LO8(eax) & 8); /* 0x100DBFF2: and al, 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = edx + 0xC; /* 0x100DBFF4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DBFF7: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBFFA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBFFC: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC00Cu; /* 0x100DC001: mov eax, 0x100dc00c */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC006: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DBFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DBFF0u);

    goto L_100DBFF0;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DBFF0:
    edx = MEM32(esp + 0x8); /* 0x100DBFF0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DBFF4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DBFF7: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DBFFA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DBFFC: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC00Cu; /* 0x100DC001: mov eax, 0x100dc00c */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC006: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC00C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC00Cu);

L_100DC00C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DC00C: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC012: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ICALL(0x101DCDD8u); /* 0x100DC014: call 0x101dcdd8 */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC019: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC01B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC01D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC01F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC021: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC023: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC025: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC027: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC029: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC02B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC02D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x3E7C0FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x3E7C0FB3)) = (uint8_t)(MEM8(ebx + (-0x3E7C0FB3)) + LO8(ecx)); /* 0x100DC02F: add byte ptr [ebx - 0x3e7c0fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), 0xE9u */ /* 0x100DC035: cmp al, 0xe9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xE9u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)((HI8(edx) | HI8(ebx))) << 24; _flag_b = (uint32_t)((HI8(edx) | HI8(ebx))) << 24;
    SET_HI8(edx, HI8(edx) | HI8(ebx)); /* 0x100DC037: or dh, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DC039: clc  */
    RECOMP_ICALL(MEM32(eax + (-0x1))); /* 0x100DC03A: call dword ptr [eax - 1] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x100DC040: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((eax | 0x24548B10u)); _flag_b = (uint32_t)((eax | 0x24548B10u));
    eax = eax | 0x24548B10u; /* 0x100DC042: or eax, 0x24548b10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM8(ebp + 0x4A8B0C42) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x4A8B0C42) | LO8(ecx))) << 24;
    MEM8(ebp + 0x4A8B0C42) = (uint8_t)(MEM8(ebp + 0x4A8B0C42) | LO8(ecx)); /* 0x100DC047: or byte ptr [ebp + 0x4a8b0c42], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _st[0] /= *(double*)ADDR(ebx); /* 0x100DC04D: fdiv qword ptr [ebx] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0x71E8u; /* 0x100DC04F: enter 0x71e8, 0x37 */
    RECOMP_ITAIL(0x100DC053u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DC044(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC044u);

    goto L_100DC044;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC044:
    edx = MEM32(esp + 0x8); /* 0x100DC044: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC048: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x100DC04B: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC04E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC050: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC060u; /* 0x100DC055: mov eax, 0x100dc060 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC05A: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC060u);

L_100DC060:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DC060: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC066: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), 0xC0u */ /* 0x100DC068: cmp al, 0xc0 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DC06A: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC06F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC071: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC073: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC075: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC077: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC079: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC07B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC07D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC07F: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC081: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x3D161FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x3D161FB3)) = (uint8_t)(MEM8(ebp + (-0x3D161FB3)) + LO8(ecx)); /* 0x100DC083: add byte ptr [ebp - 0x3d161fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100DC089u, "aad 0xf9");
    RECOMP_ITAIL(0x100DC08Bu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DC094(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC094u);

    goto L_100DC094;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC094:
    edx = MEM32(esp + 0x8); /* 0x100DC094: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC098: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x100DC09B: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC09E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC0A0: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x100DC0A5: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC0A8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC0AA: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC0BCu; /* 0x100DC0AF: mov eax, 0x100dc0bc */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC0B4: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC0BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC0BCu);

L_100DC0BC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DC0BC: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC0C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = _seg_es; /* 0x100DC0C4: mov eax, es */
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DC0C6: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC0CB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC0CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC0CF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC0D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC0D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC0D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC0D7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC0D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC0DB: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC0DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x72F7DBAC))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x72F7DBAC)) = (uint8_t)(MEM8(ebx + (-0x72F7DBAC)) + LO8(ecx)); /* 0x100DC0DF: add byte ptr [ebx - 0x72f7dbac], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100DC0E5: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(eax) | 0x8Bu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x8Bu)) << 24;
    SET_LO8(eax, LO8(eax) | 0x8Bu); /* 0x100DC0E6: or al, 0x8b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100DC0E8: dec edx */
    _flag_k = FK_DEC;
    _st[0] /= *(double*)ADDR(ebx); /* 0x100DC0E9: fdiv qword ptr [ebx] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFD5E8u; /* 0x100DC0EB: enter -0x2a18, 0x36 */
    RECOMP_ITAIL(0x100DC0EFu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DC0E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC0E0u);

    goto L_100DC0E0;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC0E0:
    edx = MEM32(esp + 0x8); /* 0x100DC0E0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC0E4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x100DC0E7: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC0EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC0EC: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC0FCu; /* 0x100DC0F1: mov eax, 0x100dc0fc */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC0F6: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC0FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC0FCu);

L_100DC0FC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DC0FC: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC102: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(esi)); esi += _df; /* 0x100DC104: lodsb al, byte ptr [esi] */
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100DC105: retf  */
    RECOMP_REGS_OUT();
}

void sub_100DC120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC120u);

    goto L_100DC120;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC120:
    edx = MEM32(esp + 0x8); /* 0x100DC120: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC124: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x100DC127: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC12A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC12C: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC13Cu; /* 0x100DC131: mov eax, 0x100dc13c */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC136: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC13C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC13Cu);

    goto L_100DC13C;
L_100DC111:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC111: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC113: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC115: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC117: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC119: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC11B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC11D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x72F7DBAC))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x72F7DBAC)) = (uint8_t)(MEM8(ebx + (-0x72F7DBAC)) + LO8(ecx)); /* 0x100DC11F: add byte ptr [ebx - 0x72f7dbac], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100DC125: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(eax) | 0x8Bu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x8Bu)) << 24;
    SET_LO8(eax, LO8(eax) | 0x8Bu); /* 0x100DC126: or al, 0x8b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100DC128: dec edx */
    _flag_k = FK_DEC;
    _st[0] /= *(double*)ADDR(ebx); /* 0x100DC129: fdiv qword ptr [ebx] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFF95E8u; /* 0x100DC12B: enter -0x6a18, 0x36 */
    RECOMP_ITAIL(0x100DC12Fu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_100DC13C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DC13C: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC142: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_100DC111; } /* 0x100DC144: loopne 0x100dc111 */
L_100DC146:
    _flag_a = (uint32_t)((eax | 0x110u)); _flag_b = (uint32_t)((eax | 0x110u));
    eax = eax | 0x110u; /* 0x100DC146: or eax, 0x110 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x100DC14B: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x100DC14D: retf  */
    RECOMP_REGS_OUT();
}

void sub_100DC160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC160u);

    goto L_100DC160;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC160:
    edx = MEM32(esp + 0x8); /* 0x100DC160: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC164: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x84)); /* 0x100DC167: mov ecx, dword ptr [edx - 0x84] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC16D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC16F: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC180u; /* 0x100DC174: mov eax, 0x100dc180 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC179: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC180u);

L_100DC180:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DC180: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC186: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = LO8(eax), _ab = 0xCCu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100DC188: adc al, 0xcc */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 0x110u)); _flag_b = (uint32_t)((eax | 0x110u));
    eax = eax | 0x110u; /* 0x100DC18A: or eax, 0x110 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(esp + ecx * 8)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esp + ecx * 8) = (uint8_t)(MEM8(esp + ecx * 8) + HI8(eax)); /* 0x100DC18F: add byte ptr [esp + ecx*8], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DC192: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC197: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC199: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC19B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC19D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC19F: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC1A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + 0x25E9EC4D)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x25E9EC4D) = (uint8_t)(MEM8(ebp + 0x25E9EC4D) + LO8(ecx)); /* 0x100DC1A3: add byte ptr [ebp + 0x25e9ec4d], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* out: no port I/O under Win32 */ /* 0x100DC1A9: out 0xf8, eax */
    RECOMP_ITAIL(0x100DC1ABu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DC1B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC1B4u);

    goto L_100DC1B4;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC1B4:
    edx = MEM32(esp + 0x8); /* 0x100DC1B4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC1B8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x100DC1BB: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC1BE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC1C0: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC1D0u; /* 0x100DC1C5: mov eax, 0x100dc1d0 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC1CA: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC1D0u);

L_100DC1D0:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DC1D0: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC1D6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(esi)); esi += _df; /* 0x100DC1D8: lodsb al, byte ptr [esi] */
    { uint32_t _rv = (MEM32(0x10)) & 0xFFFFFFFFu, _rn = ((0) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(0x10) = _rv; } /* 0x100DC1D9: ror dword ptr [0x10], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC1E0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC1E2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC1E4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC1E6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC1E8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC1EA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC1EC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC1EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x100DC1F0: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC1F2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x100DC1F4: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100DC1F7: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100DC1FC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100DC1FD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100DC206(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC206u);

    goto L_100DC206;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC206:
    edx = MEM32(esp + 0x8); /* 0x100DC206: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC20A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DC20D: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC210: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC212: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC224u; /* 0x100DC217: mov eax, 0x100dc224 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC21C: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC224(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC224u);

L_100DC224:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DC224: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC22A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = POP32_VAL(esp); /* 0x100DC22C: pop eax */
    void_lift_trap(0x100DC22Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC258(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC258u);

    goto L_100DC258;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC258:
    edx = MEM32(esp + 0x8); /* 0x100DC258: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC25C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DC25F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC262: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC264: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC274u; /* 0x100DC269: mov eax, 0x100dc274 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC26E: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC274(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC274u);

L_100DC274:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DC274: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC27A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x100DC27C: push eax */
    RECOMP_FLAGS_OUT(); esp += 4113; { RECOMP_REGS_OUT(); return; } /* 0x100DC27D: ret 0x100d */
    RECOMP_REGS_OUT();
}

void sub_100DC2B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC2B8u);

    goto L_100DC2B8;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC2B8:
    edx = MEM32(esp + 0x8); /* 0x100DC2B8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC2BC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x100DC2BF: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC2C2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC2C4: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC2D4u; /* 0x100DC2C9: mov eax, 0x100dc2d4 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC2CE: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC2D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC2D4u);

L_100DC2D4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DC2D4: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC2DA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, 0xC2u); /* 0x100DC2DC: mov al, 0xc2 */
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DC2DE: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC2E3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC2E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC2E7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC2E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC2EB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC2ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC2EF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC2F1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC2F3: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC2F5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + 0x18E9E04D)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x18E9E04D) = (uint8_t)(MEM8(ebp + 0x18E9E04D) + LO8(ecx)); /* 0x100DC2F7: add byte ptr [ebp + 0x18e9e04d], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = 0x4D8DFFF9u; /* 0x100DC2FD: mov eax, 0x4d8dfff9 */
    RECOMP_ICALL(0x09C5D3F0u); /* 0x100DC302: call 0x9c5d3f0 */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + (-0x72F7DBAC))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x72F7DBAC)) = MEM32(ebx + (-0x72F7DBAC)) - 1; /* 0x100DC307: dec dword ptr [ebx - 0x72f7dbac] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100DC30D: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(eax) | 0x8Bu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x8Bu)) << 24;
    SET_LO8(eax, LO8(eax) | 0x8Bu); /* 0x100DC30E: or al, 0x8b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100DC310: dec edx */
    _flag_k = FK_DEC;
    _st[0] /= *(double*)ADDR(ebx); /* 0x100DC311: fdiv qword ptr [ebx] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFFADE8u; /* 0x100DC313: enter -0x5218, 0x34 */
    RECOMP_ITAIL(0x100DC317u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DC308(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC308u);

    goto L_100DC308;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC308:
    edx = MEM32(esp + 0x8); /* 0x100DC308: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC30C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x100DC30F: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC312: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC314: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC324u; /* 0x100DC319: mov eax, 0x100dc324 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC31E: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC324(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC324u);

L_100DC324:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DC324: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC32A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x00100DCCu); /* 0x100DC32C: push 0x100dcc */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC331: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC333: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC335: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC337: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC339: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100DC33B:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC33B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC33D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC33F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC341: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC343: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC345: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100DC347: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100DC33B; /* 0x100DC349: jne 0x100dc33b */
L_100DC34B:
    RECOMP_CALL(sub_1000ECE0); /* 0x100DC34B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100DC350: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100DC351: ret  */
    RECOMP_REGS_OUT();
}

void sub_100DC35A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC35Au);

    goto L_100DC35A;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC35A:
    edx = MEM32(esp + 0x8); /* 0x100DC35A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC35E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DC361: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC364: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC366: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC378u; /* 0x100DC36B: mov eax, 0x100dc378 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC370: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC378(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC378u);

    goto L_100DC378;
L_1007A73D:
    PUSH32(esp, 4); /* 0x1007A73D: push 4 */
    eax = 0x100DC459u; /* 0x1007A73F: mov eax, 0x100dc459 */
    RECOMP_CALL(sub_100149A4); /* 0x1007A744: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1007A749: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1007A74B: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x1001E394u; /* 0x1007A74E: mov dword ptr [esi], 0x1001e394 */
    MEM32(ebp + (-0x4)) = 1; /* 0x1007A754: mov dword ptr [ebp - 4], 1 */
    ecx = MEM32(esi + 0x5C); /* 0x1007A75B: mov ecx, dword ptr [esi + 0x5c] */
    /* test ecx, ecx */ /* 0x1007A75E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007A76B; /* 0x1007A760: je 0x1007a76b */
L_1007A762:
    RECOMP_CALL(sub_10074A30); /* 0x1007A762: call 0x10074a30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) & 0; /* 0x1007A767: and dword ptr [esi + 0x5c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007A76B:
    PUSH32(esp, MEM32(esi + 0xA8)); /* 0x1007A76B: push dword ptr [esi + 0xa8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007A771: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1007A776: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007A779: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x1007A77E: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007A781: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007A786: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_100149D7); /* 0x1007A789: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007A78E: ret  */
L_100DC34E:
    RECOMP_ICALL(MEM32(ecx + (-0x3D))); /* 0x100DC34E: call ptr [ecx - 0x3d] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x100DC352: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_1007A73D; /* 0x100DC355: jmp 0x1007a73d */
L_100DC378:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DC378: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC37E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_100DC34E; /* 0x100DC380: js 0x100dc34e */
L_100DC382:
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DC382: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC387: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC389: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC38B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC38D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC38F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC391: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC393: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC395: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC397: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC399: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x3E7C0FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x3E7C0FB3)) = (uint8_t)(MEM8(ebx + (-0x3E7C0FB3)) + LO8(ecx)); /* 0x100DC39B: add byte ptr [ebx - 0x3e7c0fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xE9u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xE9u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xE9u); /* 0x100DC3A1: or al, 0xe9 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((ebp | MEM32(ecx + edi * 8))); _flag_b = (uint32_t)((ebp | MEM32(ecx + edi * 8)));
    ebp = ebp | MEM32(ecx + edi * 8); /* 0x100DC3A3: or ebp, dword ptr [ecx + edi*8] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(eax + (-0x1))); /* 0x100DC3A6: call dword ptr [eax - 1] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100DC3AC: pushfd  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100DC3AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100DC3B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC3B0u);

    goto L_100DC3B0;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC3B0:
    edx = MEM32(esp + 0x8); /* 0x100DC3B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC3B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DC3B7: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC3BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC3BC: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC3CCu; /* 0x100DC3C1: mov eax, 0x100dc3cc */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC3C6: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC3CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC3CCu);

L_100DC3CC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DC3CC: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC3D2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* test LO8(eax), 0xC3u */ /* 0x100DC3D4: test al, 0xc3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xC3u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DC3D6: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC3DB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC3DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC3DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC3E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC3E3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC3E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC3E7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC3E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC3EB: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC3ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x65161FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x65161FB3)) = (uint8_t)(MEM8(ebp + (-0x65161FB3)) + LO8(ecx)); /* 0x100DC3EF: add byte ptr [ebp - 0x65161fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _st[1] /= _st[0]; /* 0x100DC3F5: fdiv st(1), st(0) */
    RECOMP_ITAIL(0x100DC3F7u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DC400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC400u);

    goto L_100DC400;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC400:
    edx = MEM32(esp + 0x8); /* 0x100DC400: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC404: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x100DC407: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC40A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC40C: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC41Cu; /* 0x100DC411: mov eax, 0x100dc41c */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC416: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC41C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC41Cu);

L_100DC41C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DC41C: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC422: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100DC424: clc  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100DC425: ret  */
    RECOMP_REGS_OUT();
}

void sub_100DC459(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC459u);

    goto L_100DC459;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC459:
    edx = MEM32(esp + 0x8); /* 0x100DC459: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC45D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DC460: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC463: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC465: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC474u; /* 0x100DC46A: mov eax, 0x100dc474 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC46F: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC474(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC474u);

L_100DC474:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x100DC474: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC47A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_HI8(eax, LO8(ecx)); /* 0x100DC47C: mov ah, cl */
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100DC47E: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC483: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC485: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC487: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC489: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC48B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC48D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC48F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC491: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC493: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC495: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100DC497:
    _flag_a = (uint32_t)(MEM8(ebx + 0x1E9F04D)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + 0x1E9F04D) = (uint8_t)(MEM8(ebx + 0x1E9F04D) + LO8(ecx)); /* 0x100DC497: add byte ptr [ebx + 0x1e9f04d], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    goto L_100DC497; /* 0x100DC49D: jmp 0x100dc497 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC4A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC4A8u);

    goto L_100DC4A8;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC4A8:
    edx = MEM32(esp + 0x8); /* 0x100DC4A8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC4AC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DC4AF: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC4B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC4B4: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC4C4u; /* 0x100DC4B9: mov eax, 0x100dc4c4 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC4BE: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC4C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC4C4u);

L_100DC4C4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DC4C4: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC4CA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(0x100DC4)); /* 0x100DC4CC: mov al, byte ptr [0x100dc4] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC4D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC4D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC4D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC4D7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC4D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC4DB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC4DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC4DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC4E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC4E3: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC4E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x53160FB3))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x53160FB3)) = (uint8_t)(MEM8(ebp + (-0x53160FB3)) + LO8(ecx)); /* 0x100DC4E7: add byte ptr [ebp - 0x53160fb3], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100DC4EDu, "xabort -1");
    RECOMP_ITAIL(0x100DC4F0u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DC4F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC4F8u);

    goto L_100DC4F8;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC4F8:
    edx = MEM32(esp + 0x8); /* 0x100DC4F8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC4FC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x100DC4FF: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC502: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC504: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC514u; /* 0x100DC509: mov eax, 0x100dc514 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC50E: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC514(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC514u);

L_100DC514:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DC514: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC51A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x100DC51Cu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100DC548(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC548u);

    goto L_100DC548;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC548:
    edx = MEM32(esp + 0x8); /* 0x100DC548: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC54C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x100DC54F: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC552: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC554: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC564u; /* 0x100DC559: mov eax, 0x100dc564 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC55E: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC564(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC564u);

    goto L_100DC564;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC564:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x100DC564: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC56A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100DC56C: inc eax */
    _flag_k = FK_INC;
    ecx = MEM32(0x10); _seg_ds = MEM16(0x10 + 4); /* 0x100DC56D: lds ecx, ptr [0x10] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC573: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC575: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC577: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC579: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC57B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC57D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC57F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC581: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100DC583: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100DC585: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + (-0x72F7DBAC))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x72F7DBAC)) = (uint8_t)(MEM8(ebx + (-0x72F7DBAC)) + LO8(ecx)); /* 0x100DC587: add byte ptr [ebx - 0x72f7dbac], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100DC58D: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(eax) | 0x8Bu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x8Bu)) << 24;
    SET_LO8(eax, LO8(eax) | 0x8Bu); /* 0x100DC58E: or al, 0x8b */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100DC590: dec edx */
    _flag_k = FK_DEC;
    /* in: no port I/O under Win32 */ /* 0x100DC591: in al, dx */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC592: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC594: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC5A4u; /* 0x100DC599: mov eax, 0x100dc5a4 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC59E: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100DC588(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100DC588u);

    goto L_100DC588;
L_10019694:
    PUSH32(esp, ebp); /* 0x10019694: push ebp */
    ebp = esp; /* 0x10019695: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x10019697: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001969A: push ebx */
    PUSH32(esp, esi); /* 0x1001969B: push esi */
    PUSH32(esp, edi); /* 0x1001969C: push edi */
    _df = 1; /* 0x1001969D: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x1001969E: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100196A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100196A3: push eax */
    PUSH32(esp, eax); /* 0x100196A4: push eax */
    PUSH32(esp, eax); /* 0x100196A5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100196A6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100196A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100196AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100196AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100196B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x100196B5: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100196BA: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100196BD: mov dword ptr [ebp - 8], eax */
    edi = POP32_VAL(esp); /* 0x100196C0: pop edi */
    esi = POP32_VAL(esp); /* 0x100196C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100196C2: pop ebx */
    eax = MEM32(ebp + (-0x8)); /* 0x100196C3: mov eax, dword ptr [ebp - 8] */
    esp = ebp; /* 0x100196C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100196C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100196C9: ret  */
L_100DC588:
    edx = MEM32(esp + 0x8); /* 0x100DC588: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x100DC58C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x100DC58F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100DC592: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x100DC594: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = 0x100DC5A4u; /* 0x100DC599: mov eax, 0x100dc5a4 */
    RECOMP_BACKEDGE();
    goto L_10019694; /* 0x100DC59E: jmp 0x10019694 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
