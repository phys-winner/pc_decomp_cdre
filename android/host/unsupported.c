/* Explicit, ABI-safe answers for optional Win32 APIs with no Android backend. */
#include "host.h"
#include <stdio.h>
#include <string.h>

#define K32 "kernel32.dll"
#define U32 "user32.dll"
#define G32 "gdi32.dll"

static uint32_t unsupported(void)
{
    void_set_last_error(ERROR_NOT_SUPPORTED_);
    return 0;
}

static uint32_t unsupported_handle(void)
{
    void_set_last_error(ERROR_NOT_SUPPORTED_);
    return WIN_INVALID_HANDLE;
}

#define UNSUPPORTED(dll, name, nargs) WINAPI_EXPORT(dll, name, nargs) { return unsupported(); }
#define UNSUPPORTED_HANDLE(dll, name, nargs) WINAPI_EXPORT(dll, name, nargs) { return unsupported_handle(); }

/* No voice-capture device is exposed. */
#define WAVEIN_UNSUPPORTED(name, nargs) WINAPI_EXPORT("winmm.dll", name, nargs) { return 8; }
WAVEIN_UNSUPPORTED(waveInOpen, 6)
WAVEIN_UNSUPPORTED(waveInPrepareHeader, 3)
WAVEIN_UNSUPPORTED(waveInAddBuffer, 3)
WAVEIN_UNSUPPORTED(waveInReset, 1)
WAVEIN_UNSUPPORTED(waveInUnprepareHeader, 3)
WAVEIN_UNSUPPORTED(waveInStart, 1)
WAVEIN_UNSUPPORTED(waveInGetDevCapsW, 3)
WAVEIN_UNSUPPORTED(waveInClose, 1)

/* No Windows IME/composition backend; these are empty results, not successful text input. */
WINAPI_EXPORT("imm32.dll", ImmNotifyIME, 4) { return 0; }
WINAPI_EXPORT("imm32.dll", ImmGetCandidateListW, 4) { return 0; }
WINAPI_EXPORT("imm32.dll", ImmSetCompositionStringW, 6) { return 0; }
WINAPI_EXPORT("imm32.dll", ImmSetCompositionWindow, 2) { return 0; }
WINAPI_EXPORT("imm32.dll", ImmGetIMEFileNameA, 4) { return 0; }
WINAPI_EXPORT("imm32.dll", ImmGetCompositionStringW, 4) { return 0; }

WINAPI_EXPORT(K32, OpenProcess, 3) { void_set_last_error(ERROR_ACCESS_DENIED_); return 0; }
UNSUPPORTED(K32, DisconnectNamedPipe, 1)
UNSUPPORTED_HANDLE(K32, CreateNamedPipeA, 8)
UNSUPPORTED(K32, Beep, 2)
UNSUPPORTED(K32, MoveFileExW, 3)
UNSUPPORTED(K32, SetLocalTime, 1)
UNSUPPORTED_HANDLE(K32, CreateTimerQueue, 0)
UNSUPPORTED(K32, UnregisterWait, 1)
UNSUPPORTED(K32, SignalObjectAndWait, 4)
UNSUPPORTED(K32, ChangeTimerQueueTimer, 4)
UNSUPPORTED(K32, CreateTimerQueueTimer, 7)
WINAPI_EXPORT(K32, GetNumaHighestNodeNumber, 1)
{
    if (!void_vm_writable(ARG(0), 4)) { void_set_last_error(ERROR_INVALID_PARAMETER_); return 0; }
    MEM32(ARG(0)) = 0;
    return 1;
}
UNSUPPORTED(K32, RegisterWaitForSingleObject, 6)
UNSUPPORTED(K32, GetLogicalProcessorInformation, 2)
WINAPI_EXPORT(K32, RtlCaptureStackBackTrace, 4) { return 0; }
UNSUPPORTED(K32, DeleteTimerQueueTimer, 3)
UNSUPPORTED(K32, UnregisterWaitEx, 2)
UNSUPPORTED(K32, HeapQueryInformation, 5)
UNSUPPORTED(K32, HeapWalk, 3)
UNSUPPORTED(K32, PeekNamedPipe, 6)
UNSUPPORTED(K32, ReadConsoleW, 5)
UNSUPPORTED(K32, GetNumberOfConsoleInputEvents, 2)
UNSUPPORTED(K32, PeekConsoleInputA, 4)
UNSUPPORTED(K32, ReadConsoleInputA, 4)
UNSUPPORTED(K32, SetConsoleMode, 2)
UNSUPPORTED(K32, ReadConsoleInputW, 4)
UNSUPPORTED(K32, UnlockFileEx, 5)
UNSUPPORTED(K32, GetDateFormatW, 6)
UNSUPPORTED(K32, GetTimeFormatW, 6)
WINAPI_EXPORT(K32, EnumSystemLocalesW, 2) { return 0; }
UNSUPPORTED(K32, CreateHardLinkW, 3)
UNSUPPORTED(K32, FreeResource, 1)

UNSUPPORTED(U32, SetWindowRgn, 3)
WINAPI_EXPORT(U32, WindowFromPoint, 2) { return 0; }
WINAPI_EXPORT(U32, GetUpdateRect, 3) { return 0; }
UNSUPPORTED_HANDLE(U32, CreateIconIndirect, 1)
UNSUPPORTED(U32, CloseClipboard, 0)
WINAPI_EXPORT(U32, IsClipboardFormatAvailable, 1) { return 0; }
UNSUPPORTED_HANDLE(U32, GetClipboardData, 1)
UNSUPPORTED(U32, EmptyClipboard, 0)
UNSUPPORTED(U32, OpenClipboard, 1)
WINAPI_EXPORT(U32, GetClipboardSequenceNumber, 0) { return 0; }
UNSUPPORTED_HANDLE(U32, SetClipboardData, 2)
UNSUPPORTED_HANDLE(U32, CreateIconFromResource, 5)
UNSUPPORTED(U32, SetLayeredWindowAttributes, 4)
WINAPI_EXPORT(U32, DialogBoxIndirectParamW, 5) { return unsupported_handle(); }
WINAPI_EXPORT(U32, DialogBoxParamW, 5) { return unsupported_handle(); }
UNSUPPORTED(U32, CheckRadioButton, 3)
UNSUPPORTED(U32, GetIconInfo, 2)
UNSUPPORTED(U32, TranslateAcceleratorW, 3)
UNSUPPORTED(U32, DestroyAcceleratorTable, 1)
UNSUPPORTED_HANDLE(U32, LoadAcceleratorsW, 2)
UNSUPPORTED(U32, EnableWindow, 2)
UNSUPPORTED(U32, FillRect, 3)
WINAPI_EXPORT(U32, DrawTextW, 5) { return 0; }

WINAPI_EXPORT(G32, GetGlyphOutlineA, 7) { return unsupported_handle(); }
WINAPI_EXPORT(G32, GetCharacterPlacementW, 6) { return 0; }
WINAPI_EXPORT(G32, GetCharacterPlacementA, 6) { return 0; }
WINAPI_EXPORT(G32, GetFontLanguageInfo, 1) { return 0; }
UNSUPPORTED(G32, MoveToEx, 3)
UNSUPPORTED(G32, TranslateCharsetInfo, 3)
UNSUPPORTED_HANDLE(G32, GetCurrentObject, 2)
WINAPI_EXPORT(G32, GetOutlineTextMetricsA, 3) { return 0; }
WINAPI_EXPORT(G32, GetGlyphOutlineW, 7) { return unsupported_handle(); }

/* API-set aliases have independent shim names but the same explicit failure. */
#define CORE_CONSOLE "api-ms-win-core-console-l1-1-0.dll"
WINAPI_EXPORT_AS(CORE_CONSOLE, console_ReadConsoleW, "ReadConsoleW", 0, 5) { return unsupported(); }
WINAPI_EXPORT_AS(CORE_CONSOLE, console_GetNumberOfConsoleInputEvents, "GetNumberOfConsoleInputEvents", 0, 2) { return unsupported(); }
WINAPI_EXPORT_AS(CORE_CONSOLE, console_ReadConsoleInputA, "ReadConsoleInputA", 0, 4) { return unsupported(); }
WINAPI_EXPORT_AS(CORE_CONSOLE, console_ReadConsoleInputW, "ReadConsoleInputW", 0, 4) { return unsupported(); }
WINAPI_EXPORT_AS(CORE_CONSOLE, console_SetConsoleMode, "SetConsoleMode", 0, 2) { return unsupported(); }
WINAPI_EXPORT_AS("api-ms-win-core-console-l1-2-0.dll", console2_PeekConsoleInputA, "PeekConsoleInputA", 0, 4) { return unsupported(); }
WINAPI_EXPORT_AS("api-ms-win-core-datetime-l1-1-0.dll", datetime_GetDateFormatW, "GetDateFormatW", 0, 6) { return unsupported(); }
WINAPI_EXPORT_AS("api-ms-win-core-datetime-l1-1-0.dll", datetime_GetTimeFormatW, "GetTimeFormatW", 0, 6) { return unsupported(); }
WINAPI_EXPORT_AS("api-ms-win-core-file-l1-1-0.dll", file_SetFileInformationByHandle, "SetFileInformationByHandle", 0, 4) { return unsupported(); }
WINAPI_EXPORT_AS("api-ms-win-core-heap-l1-1-0.dll", heap_HeapQueryInformation, "HeapQueryInformation", 0, 5) { return unsupported(); }
WINAPI_EXPORT_AS("api-ms-win-core-heap-l1-1-0.dll", heap_HeapWalk, "HeapWalk", 0, 3) { return unsupported(); }
WINAPI_EXPORT_AS("api-ms-win-core-namedpipe-l1-1-0.dll", pipe_PeekNamedPipe, "PeekNamedPipe", 0, 6) { return unsupported(); }
WINAPI_EXPORT_AS("api-ms-win-core-processthreads-l1-1-0.dll", threads_SetThreadStackGuarantee, "SetThreadStackGuarantee", 0, 1) { return unsupported(); }
WINAPI_EXPORT_AS("api-ms-win-core-sysinfo-l1-1-0.dll", sysinfo_SetLocalTime, "SetLocalTime", 0, 1) { return unsupported(); }
WINAPI_EXPORT_AS("api-ms-win-core-util-l1-1-0.dll", util_Beep, "Beep", 0, 2) { return unsupported(); }

/* wsprintfW is cdecl: only the return address is popped here. The formatter
 * covers the ordinary string/integer conversions used by the Win32 UI. */
#define WS_CAP 1024
static int ws_unit(uint32_t out, int *used, uint32_t value)
{
    if (*used >= WS_CAP - 1 || !void_vm_writable(out + 2u * (uint32_t)*used, 2)) return 0;
    MEM16(out + 2u * (uint32_t)*used) = (uint16_t)value;
    ++*used;
    return 1;
}

static int ws_text(uint32_t out, int *used, const char *text)
{
    for (; *text; ++text) if (!ws_unit(out, used, (uint8_t)*text)) return 0;
    return 1;
}

static int ws_guest(uint32_t out, int *used, uint32_t text, int wide)
{
    for (uint32_t i = 0; i < WS_CAP; ++i) {
        uint32_t value = wide ? MEM16(text + 2 * i) : MEM8(text + i);
        if (!value) return 1;
        if (!ws_unit(out, used, value)) return 0;
    }
    return 0;
}

static int wsprintf_impl(uint32_t out, uint32_t format, const uint32_t *values)
{
    if (!out || !format) return -1;
    int used = 0;
    unsigned arg_index = 0;
    for (uint32_t i = 0; ; ++i) {
        uint32_t ch = MEM16(format + 2 * i);
        if (!ch) break;
        if (ch != '%') {
            if (!ws_unit(out, &used, ch)) return -1;
            continue;
        }
        char spec[32];
        size_t sn = 0;
        if (sn < sizeof spec - 1) spec[sn++] = '%';
        ch = MEM16(format + 2 * ++i);
        if (ch == '%') {
            if (!ws_unit(out, &used, ch)) return -1;
            continue;
        }
        while (ch && strchr("-+ #0123456789.", ch)) {
            if (sn < sizeof spec - 1) spec[sn++] = (char)ch;
            ch = MEM16(format + 2 * ++i);
        }
        int is64 = 0;
        if (ch == 'I' && MEM16(format + 2 * (i + 1)) == '6' && MEM16(format + 2 * (i + 2)) == '4') {
            is64 = 1;
            i += 2;
            ch = MEM16(format + 2 * (i + 1));
            if (sn + 2 < sizeof spec - 1) { spec[sn++] = 'l'; spec[sn++] = 'l'; }
        } else {
            while (ch == 'l' || ch == 'h' || ch == 'I') {
                if (sn < sizeof spec - 1) spec[sn++] = ch == 'I' ? 'l' : (char)ch;
                ch = MEM16(format + 2 * ++i);
            }
        }
        if (!ch) return -1;
        uint32_t arg = values[arg_index++];
        if (ch == 's' || ch == 'S') {
            if (!arg || !ws_guest(out, &used, arg, ch == 's')) return -1;
            continue;
        }
        if (ch == 'c' || ch == 'C') {
            if (!ws_unit(out, &used, ch == 'c' ? arg : arg & 0xFFu)) return -1;
            continue;
        }
        if (sn + 1 >= sizeof spec) return -1;
        spec[sn++] = (char)ch;
        spec[sn] = 0;
        char number[128];
        if (ch == 'd' || ch == 'i') {
            if (is64) {
                long long value = (long long)(arg | ((uint64_t)values[arg_index++] << 32));
                snprintf(number, sizeof number, spec, value);
            } else {
                snprintf(number, sizeof number, spec, (int32_t)arg);
            }
        } else if (ch == 'p') {
            snprintf(number, sizeof number, spec, (void *)(uintptr_t)arg);
        } else if (ch == 'u' || ch == 'x' || ch == 'X' || ch == 'o') {
            if (is64) {
                unsigned long long value = arg | ((uint64_t)values[arg_index++] << 32);
                snprintf(number, sizeof number, spec, value);
            } else {
                snprintf(number, sizeof number, spec, arg);
            }
        } else {
            return -1;
        }
        if (!ws_text(out, &used, number)) return -1;
    }
    if (!void_vm_writable(out + 2u * (uint32_t)used, 2)) return -1;
    MEM16(out + 2u * (uint32_t)used) = 0;
    return used;
}

RAW_EXPORT(U32, wsprintfW)
{
    uint32_t values[32];
    for (unsigned i = 0; i < 32; ++i) values[i] = ARG(2 + i);
    g_eax = (uint32_t)wsprintf_impl(ARG(0), ARG(1), values);
    g_esp += 4;
}

static uint32_t unsupported_test_proc(const char *dll, const char *name)
{
    uint32_t text = void_gstrdup(name);
    uint32_t result = void_module_proc(void_module_handle(dll), text);
    void_gfree(text);
    return result;
}

int unsupported_import_selftest(void)
{
    uint32_t proc = unsupported_test_proc("winmm.dll", "waveInOpen");
    uint32_t args[8] = {0};
    if (!proc || void_call_guest(proc, 6, args, 1) != 8) return 1;
    proc = unsupported_test_proc("kernel32.dll", "OpenProcess");
    if (!proc || void_call_guest(proc, 3, args, 1) != 0 || void_get_last_error() != ERROR_ACCESS_DENIED_) return 2;
    proc = unsupported_test_proc("user32.dll", "DialogBoxParamW");
    if (!proc || void_call_guest(proc, 5, args, 1) != WIN_INVALID_HANDLE || void_get_last_error() != ERROR_NOT_SUPPORTED_) return 3;
    proc = unsupported_test_proc("kernel32.dll", "CreateHardLinkW");
    if (!proc || void_call_guest(proc, 3, args, 1) != 0 || void_get_last_error() != ERROR_NOT_SUPPORTED_) return 4;
    proc = unsupported_test_proc("user32.dll", "wsprintfW");
    uint32_t out = void_galloc(64), format = void_galloc(64);
    if (!proc || !out || !format) { void_gfree(out); void_gfree(format); return 5; }
    void_utf8_to_gw("%c=%d/%u", format, 32);
    args[0] = out; args[1] = format; args[2] = 'x'; args[3] = 42; args[4] = 42;
    uint32_t esp = g_esp;
    uint32_t written = void_call_guest(proc, 5, args, 0);
    static const uint16_t expected[] = {'x','=','4','2','/','4','2',0};
    int failed = written != 7 || g_esp != esp;
    for (unsigned i = 0; i < sizeof expected / sizeof *expected; ++i) failed |= MEM16(out + 2 * i) != expected[i];
    void_gfree(out); void_gfree(format);
    if (failed) return 6;
    void_log("[selftest] optional import failures and cdecl wsprintfW PASS");
    return 0;
}
