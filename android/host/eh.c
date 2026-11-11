/* Guest C++ exceptions: pcrecomp runtime/native32/eh32.c (MIT, revision
 * 904ac3129d0c9d05efbeec19a1dce6abbe7f5d26) ported to the guest window, plus
 * the project's RaiseException route for throws from the static MSVC CRT
 * (native/void_runtime.c void_raise_exception).
 *
 * The guest's fs:[0] chain describes its own frames; a C++ frame's handler is
 * `mov eax, FuncInfo; jmp __CxxFrameHandler`. A throw is matched against the
 * try blocks covering each frame's state, the frames above are unwound by
 * running their destructor funclets, the catch funclet runs as guest code,
 * and execution resumes in the lifted owner of the catching frame through its
 * RECOMP_EH_ENTER landing pad (_longjmp). Only C++ frames are considered,
 * exactly as on Windows. */
#include "host.h"
#include <setjmp.h>

#define EH_MAGIC_VC6 0x19930520u
#define EH_MAGIC_VC7 0x19930521u
#define EH_MAGIC_VC8 0x19930522u
#define CXX_EXCEPTION 0xE06D7363u

VOID_HIDDEN recomp_ehframe_t *g_eh_frames;
VOID_HIDDEN uint32_t g_eh_obj, g_eh_info;

void recomp_eh_push(recomp_ehframe_t *f) { f->prev = g_eh_frames; g_eh_frames = f; }

void recomp_eh_pop(recomp_ehframe_t *f)
{
    /* A longjmp past this frame already dropped it. */
    for (recomp_ehframe_t *p = g_eh_frames; p; p = p->prev)
        if (p == f) { g_eh_frames = f->prev; return; }
}

void void_eh_reset_thread(void) { g_eh_frames = NULL; g_eh_obj = g_eh_info = 0; }

static uint32_t frame_operand_end(uint32_t handler, uint32_t offset, uint8_t opcode, uint8_t reg)
{
    if (!offset || !void_vm_readable(handler, offset + 2) || MEM8(handler + offset) != opcode) return 0;
    uint8_t modrm = MEM8(handler + offset + 1);
    static const uint8_t sizes[] = {2, 3, 6, 0};
    uint32_t size = sizes[modrm >> 6];
    return (modrm & 0x3F) == reg && size && void_vm_readable(handler, offset + size) ? offset + size : 0;
}

/* The FuncInfo a C++ frame's handler stub names, or 0 if it is not one. */
static uint32_t funcinfo(uint32_t handler)
{
    static const uint8_t gs_prefix[] = {0x8B,0x54,0x24,0x08};
    if (handler < 0x10000u || !void_vm_readable(handler, 10)) return 0;
    if (MEM8(handler) != 0xB8) {
        /* VC8 emits one or two GS checks, with disp0/disp8/disp32 stack operands. */
        if (memcmp(GPTR(handler), gs_prefix, sizeof gs_prefix)) return 0;
        uint32_t offset = frame_operand_end(handler, 4, 0x8D, 0x02);
        for (unsigned index = 0; index < 2; ++index) {
            offset = frame_operand_end(handler, offset, 0x8B, 0x0A);
            if (!offset || !void_vm_readable(handler, offset + 8) ||
                MEM8(handler + offset) != 0x33 || MEM8(handler + offset + 1) != 0xC8 ||
                MEM8(handler + offset + 2) != 0xE8) return 0;
            uint32_t check = handler + offset + 7u + MEM32(handler + offset + 3);
            if (!void_vm_readable(check, 15) || MEM8(check) != 0x3B || MEM8(check + 1) != 0x0D ||
                MEM8(check + 6) != 0x75 || MEM8(check + 7) != 0x02 || MEM8(check + 8) != 0xF3 ||
                MEM8(check + 9) != 0xC3 || MEM8(check + 10) != 0xE9) return 0;
            offset += 7;
            if (MEM8(handler + offset) == 0xB8) { handler += offset; break; }
            if (index == 1 || !void_vm_readable(handler, offset + 3)) return 0;
            if (MEM8(handler + offset) == 0x83 && MEM8(handler + offset + 1) == 0xC0) {
                uint8_t add = MEM8(handler + offset + 2);
                if (add != 4 && add != 8 && add != 12 && add != 16) return 0;
                offset += 3;
            }
        }
    }
    if (!void_vm_readable(handler, 10) || MEM8(handler) != 0xB8) return 0;
    uint8_t op = MEM8(handler + 5), op2 = MEM8(handler + 6);
    if (op != 0xE9 && !(op == 0xFF && op2 == 0x25 && void_vm_readable(handler, 11))) return 0;
    uint32_t fi = MEM32(handler + 1);
    if (!void_vm_readable(fi, 20)) return 0;
    uint32_t magic = MEM32(fi);
    return magic == EH_MAGIC_VC6 || magic == EH_MAGIC_VC7 || magic == EH_MAGIC_VC8 ? fi : 0;
}

/* Run guest code at va as MSVC's _CallSettingFrame does: ebp = the frame's,
 * on the current guest stack. Returns eax; every other register is kept. */
static uint32_t call_funclet(uint32_t va, uint32_t frame_ebp)
{
    void_fn fn = void_dispatch_find(va);
    if (!fn) {
        void_log("[eh] funclet %08X is not lifted", va);
        void_lift_trap(va, "C++ EH funclet is not lifted");
    }
    uint32_t esp = g_esp, ebp = g_ebp, ebx = g_ebx, esi = g_esi, edi = g_edi, cur = g_cur_func;
    g_ebp = frame_ebp;
    g_esp -= 4;
    MEM32(g_esp) = 0;                 /* return address: the funclet's ret pops it */
    fn();
    uint32_t eax = g_eax;
    g_esp = esp; g_ebp = ebp; g_ebx = ebx; g_esi = esi; g_edi = edi; g_cur_func = cur;
    return eax;
}

/* Destroy a C++ frame's locals from its current state down to `to`. */
static void unwind_to(uint32_t rec, uint32_t fi, int to)
{
    int s = (int)MEM32(rec + 8);
    uint32_t map = MEM32(fi + 8);
    int max = (int)MEM32(fi + 4);
    while (s != to && s >= 0 && s < max) {
        int next = (int)MEM32(map + 8 * (uint32_t)s);
        uint32_t action = MEM32(map + 8 * (uint32_t)s + 4);
        MEM32(rec + 8) = (uint32_t)next;
        if (action) call_funclet(action, rec + 12);
        s = next;
    }
}

/* The ThrowInfo's CatchableType that a catch of `type` takes, or 0. */
static uint32_t catchable(uint32_t info, uint32_t type)
{
    uint32_t arr = MEM32(info + 12);
    int n = (int)MEM32(arr);
    for (int i = 0; i < n; i++) {
        uint32_t ct = MEM32(arr + 4 + 4 * (uint32_t)i);
        uint32_t td = MEM32(ct + 4);
        if (td == type || !strcmp((const char *)GPTR(td + 8), (const char *)GPTR(type + 8))) return ct;
    }
    return 0;
}

/* Store the thrown object into the catch's variable. */
static void bind_catch_object(uint32_t handler, uint32_t ct, uint32_t obj, uint32_t frame_ebp)
{
    uint32_t adj = MEM32(handler), disp = MEM32(handler + 8);
    if (!MEM32(handler + 4) || !disp || !ct) return;       /* catch(...) or no variable */
    uint32_t dst = frame_ebp + disp;
    uint32_t src = obj + MEM32(ct + 8);                     /* this-displacement (mdisp) */
    uint32_t size = MEM32(ct + 20), copy = MEM32(ct + 24);
    if (adj & 8) MEM32(dst) = src;                          /* by reference */
    else if ((MEM32(ct) & 1) || !copy) memmove(GPTR(dst), GPTR(src), size);
    else {                                                  /* copy constructor, thiscall */
        uint32_t ecx = g_ecx;
        g_ecx = dst;
        g_esp -= 4;
        MEM32(g_esp) = src;
        call_funclet(copy, g_ebp);   /* ret 4 pops the argument */
        g_ecx = ecx;
    }
}

static int dispatch(uint32_t obj, uint32_t info)
{
    uint32_t top = MEM32(g_fs_base);
    for (uint32_t rec = top; rec && rec != 0xFFFFFFFFu; rec = MEM32(rec)) {
        uint32_t fi = funcinfo(MEM32(rec + 4));
        if (!fi) continue;
        int state = (int)MEM32(rec + 8);
        uint32_t tries = MEM32(fi + 16);
        int ntry = (int)MEM32(fi + 12);
        for (int t = 0; t < ntry; t++) {
            uint32_t tb = tries + 20 * (uint32_t)t;
            int lo = (int)MEM32(tb), hi = (int)MEM32(tb + 4), ncatch = (int)MEM32(tb + 12);
            if (state < lo || state > hi) continue;
            for (int c = 0; c < ncatch; c++) {
                uint32_t h = MEM32(tb + 16) + 16 * (uint32_t)c;
                uint32_t type = MEM32(h + 4);
                uint32_t ct = type ? catchable(info, type) : 0;
                if (type && !ct) continue;
                /* Caught: unwind everything above, then this frame to the try. */
                for (uint32_t r = top; r != rec; r = MEM32(r)) {
                    uint32_t f = funcinfo(MEM32(r + 4));
                    if (f) unwind_to(r, f, -1);
                }
                unwind_to(rec, fi, lo);
                MEM32(g_fs_base) = rec;
                MEM32(rec + 8) = (uint32_t)(hi + 1);
                uint32_t ebp = rec + 12;
                bind_catch_object(h, ct, obj, ebp);
                uint32_t prev_obj = g_eh_obj, prev_info = g_eh_info;
                g_eh_obj = obj; g_eh_info = info;
                uint32_t resume = call_funclet(MEM32(h + 12), ebp);
                g_eh_obj = prev_obj; g_eh_info = prev_info;
                /* The catch returned: continue in the frame's own function,
                 * on its stack as its prologue left it ([ebp-0x10]). */
                for (recomp_ehframe_t *f = g_eh_frames; f; f = f->prev) {
                    if (f->entry_esp != ebp + 4) continue;
                    g_eh_frames = f;
                    g_ebp = ebp;
                    g_esp = MEM32(ebp - 0x10);
                    g_eax = resume;
                    f->resume = resume;
                    _longjmp(f->jb, 1);
                }
                void_log("[eh] frame %08X caught, but no lifted body owns it (resume %08X)", ebp, resume);
                return 0;
            }
        }
    }
    return 0;
}

static void throw_cxx(uint32_t obj, uint32_t info, uint32_t magic)
{
    if (!info) { obj = g_eh_obj; info = g_eh_info; }   /* bare `throw;` */
    if (!info || !void_vm_readable(info, 16)) void_lift_trap(g_cur_func, "missing MSVC C++ throw metadata");
    if (void_verbose) {
        uint32_t arr = MEM32(info + 12), ct = MEM32(arr + 4), td = MEM32(ct + 4);
        void_log("[eh] throw object=%08X type=%s from %08X", obj, (const char *)GPTR(td + 8), g_cur_func);
    }
    dispatch(obj, info);
    uint32_t arr = MEM32(info + 12), ct = arr ? MEM32(arr + 4) : 0, td = ct ? MEM32(ct + 4) : 0;
    void_log("[eh] uncaught guest C++ exception object=%08X info=%08X magic=%08X type=%s",
        obj, info, magic, td ? (const char *)GPTR(td + 8) : "?");
    void_lift_trap(g_cur_func, "uncaught guest MSVC C++ exception");
}

/* RaiseException(code, flags, nargs, args): the static CRT's _CxxThrowException
 * raises 0xE06D7363 with {magic, object, ThrowInfo}. */
RAW_EXPORT("kernel32.dll", RaiseException)
{
    uint32_t code = ARG(0), flags = ARG(1), nargs = ARG(2), args = ARG(3);
    if (code == 0x406D1388u) {
        /* MSVC SetThreadName: only a debugger listens; the guest's empty
         * __except is exactly a return (native32 shim_RaiseException). */
        g_esp += 4 + 16;
        return;
    }
    if (code != CXX_EXCEPTION) {
        void_log("[eh] RaiseException code=%08X flags=%08X nargs=%u from %08X", code, flags, nargs, g_cur_func);
        void_lift_trap(g_cur_func, "non-C++ RaiseException is not supported");
    }
    if (flags != 1u || nargs != 3 || !args || !void_vm_readable(args, 12))
        void_lift_trap(g_cur_func, "unsupported MSVC C++ RaiseException record");
    uint32_t magic = MEM32(args), obj = MEM32(args + 4), info = MEM32(args + 8);
    if (magic != EH_MAGIC_VC6 && magic != EH_MAGIC_VC7 && magic != EH_MAGIC_VC8)
        void_lift_trap(g_cur_func, "unsupported MSVC C++ exception magic");
    g_esp += 4;   /* remove only the return word before dispatch */
    throw_cxx(obj, info, magic);
}

/* msvcrt.dll _CxxThrowException(object, ThrowInfo), for lifted libraries that
 * import the CRT instead of linking it statically. */
RAW_EXPORT("msvcrt.dll", _CxxThrowException)
{
    uint32_t obj = ARG(0), info = ARG(1);
    g_esp += 4;
    throw_cxx(obj, info, EH_MAGIC_VC8);
}

VOID_HIDDEN __thread uint32_t g_setjmp_resume;

typedef struct {
    uint32_t env, esp, ebp, ebx, esi, edi, fs, resume_eip;
    recomp_ehframe_t *eh_frames;
    jmp_buf host;
} guest_jmp_context;

static __thread guest_jmp_context guest_jmp_contexts[256];
static __thread unsigned guest_jmp_count;

static guest_jmp_context *guest_jmp_find(uint32_t env, int allocate)
{
    for (unsigned i = 0; i < guest_jmp_count; ++i)
        if (guest_jmp_contexts[i].env == env) return &guest_jmp_contexts[i];
    if (!allocate) return NULL;
    if (guest_jmp_count == 256) void_fatal("too many active guest setjmp buffers");
    guest_jmp_context *ctx = &guest_jmp_contexts[guest_jmp_count++];
    memset(ctx, 0, sizeof *ctx);
    ctx->env = env;
    return ctx;
}

RAW_EXPORT("msvcrt.dll", _setjmp3)
{
    static __thread unsigned trace;
    uint32_t env = ARG(0);
    if (trace++ < 16) void_log("[jmp] set entry env=%08X esp=%08X extended=%08X", env, g_esp, ARG(1));
    if (!env || !void_vm_writable(env, 0x28)) void_fatal("_setjmp3 with an invalid guest buffer");
    if (ARG(1)) void_fatal("extended _setjmp3 context is not implemented");
    guest_jmp_context *ctx = guest_jmp_find(env, 1);
    int second = setjmp(ctx->host);
    if (second) {
        if (trace < 16) void_log("[jmp] set second env=%08X esp=%08X saved=%08X", env, g_esp, ctx->esp);
        g_esp += 4;
        return;
    }
    if (trace < 16) void_log("[jmp] set first env=%08X esp=%08X ebp=%08X ebx=%08X esi=%08X edi=%08X fs=%08X resume=%08X",
        env, g_esp, g_ebp, g_ebx, g_esi, g_edi, g_fs_base, g_setjmp_resume);
    ctx->esp = g_esp; ctx->ebp = g_ebp; ctx->ebx = g_ebx; ctx->esi = g_esi; ctx->edi = g_edi;
    ctx->fs = g_fs_base; ctx->eh_frames = g_eh_frames;
    MEM32(env) = g_ebp; MEM32(env + 4) = g_ebx; MEM32(env + 8) = g_edi; MEM32(env + 12) = g_esi;
    MEM32(env + 0x10) = g_esp; MEM32(env + 0x14) = MEM32(g_esp);
    MEM32(env + 0x18) = g_fs_base; MEM32(env + 0x1C) = 0;
    MEM32(env + 0x20) = 0x56433230u; MEM32(env + 0x24) = 0;
    ctx->resume_eip = g_setjmp_resume;
    if (ctx->resume_eip) {
        g_eax = 0;
        void_call_guest(ctx->resume_eip, 0, NULL, 1);
    }
    if (trace < 16) void_log("[jmp] active return env=%08X esp=%08X ebp=%08X eax=%08X", env, g_esp, g_ebp, g_eax);
    g_eax = 0;
    g_esp += 4;
}

RAW_EXPORT("msvcrt.dll", longjmp)
{
    static __thread unsigned trace;
    guest_jmp_context *ctx = guest_jmp_find(ARG(0), 0);
    if (trace++ < 16) void_log("[jmp] long env=%08X saved_esp=%08X current_esp=%08X value=%u",
        ARG(0), ctx ? ctx->esp : 0, g_esp, ARG(1));
    if (!ctx) void_fatal("longjmp with an unknown guest buffer");
    g_eax = ARG(1) ? ARG(1) : 1;
    g_esp = ctx->esp; g_ebp = ctx->ebp; g_ebx = ctx->ebx; g_esi = ctx->esi; g_edi = ctx->edi;
    g_fs_base = ctx->fs; g_eh_frames = ctx->eh_frames;
    longjmp(ctx->host, 1);
}

RAW_EXPORT("msvcrt.dll", selftest_setjmp_continuation)
{
    if (g_eax) void_fatal("setjmp initial return is not zero");
    g_esp -= 12;
    MEM32(g_esp) = 0xDEAD0000u;
    MEM32(g_esp + 4) = guest_jmp_contexts[guest_jmp_count - 1].env;
    MEM32(g_esp + 8) = 0x12345678u;
    g_ebx = 0x11111111; g_esi = 0x22222222; g_edi = 0x33333333; g_ebp = 0x44444444;
    longjmp_entry();
}

void void_eh_init(void) {}
