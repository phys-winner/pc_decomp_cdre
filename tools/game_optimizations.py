"""Conservative call simplifications for the unchanged lifted game bodies."""
import re


FUNCTION = re.compile(rb'^void (sub_[0-9A-F]{8})\(void\) \{\r?$', re.M)
END = re.compile(rb'\n\}\r?\n')
INSTRUCTION = re.compile(rb'/\* 0x[0-9A-F]{8}: (\w+)[^\r\n]*?\*/')
NEUTRAL = set(b'push pop mov movzx movsx lea nop movss movsd movaps movups movapd movupd movd movq movdqa movdqu pxor xorps xorpd'.split())
KILL = set(b'add sub cmp test and or xor comiss ucomiss comisd ucomisd'.split())
ENTRY_HELPERS = set(b'RECOMP_ENTER MEM8 MEM16 MEM32 MEM64 PUSH32 POP32_VAL CMP_B LO8 LO16 SET_LO8 SET_LO16 SET_HI8 SSE_COMI sse_f32 xmm_ld xmm_st'.split())
CALL_PREFIX = b'''#define CRASHDAY_CALL_NOFLAGS(func) do { \\
    RECOMP_DIAG_CALLER \\
    PUSH32(esp, RECOMP_RETADDR); \\
    RECOMP_REGS_OUT(); func(); RECOMP_REGS_IN(); \\
    RECOMP_DIAG_RESTORE(); \\
} while (0)
'''


def entry_kills_flags(body):
    """Prove a straight-line entry overwrites all status flags before using them."""
    for instruction in INSTRUCTION.finditer(body):
        prefix = body[:instruction.start()]
        calls = set(re.findall(rb'\b(\w+)\s*\(', prefix))
        if calls - ENTRY_HELPERS or re.search(rb'\b(?:extern|goto|return)\b|\bg_\w+', prefix):
            return False
        if instruction[1] in KILL:
            return True
        if instruction[1] not in NEUTRAL:
            return False
    return False


def flag_independent_entries(sources):
    result = set()
    for text in sources:
        for match in FUNCTION.finditer(text):
            end = END.search(text, match.end())
            if end is None:
                raise ValueError('Unterminated lifted body: ' + match[1].decode())
            if entry_kills_flags(text[match.end():end.end()]):
                result.add(match[1])
    return result


def omit_unused_call_flags(text, independent):
    """Keep return flags and every register transfer; omit only unused call inputs."""
    def call(match):
        if match[1] in independent:
            return b'CRASHDAY_CALL_NOFLAGS(' + match[1] + b');'
        return match[0]
    changed = re.sub(rb'RECOMP_CALL\((sub_[0-9A-F]{8})\);', call, text)
    return CALL_PREFIX + changed if changed != text else text
