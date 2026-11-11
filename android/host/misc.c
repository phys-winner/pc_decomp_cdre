#include "host.h"

WINAPI_ORDINAL("comctl32.dll", InitCommonControls, 17, 0) { return 1; }
WINAPI_EXPORT("advapi32.dll", OpenProcessToken, 3)
{
    return void_handle_new(void_object_new(VOID_OBJ_OTHER, sizeof(void_object)));
}
WINAPI_ORDINAL("advapi32.dll", RtlGenRandom, 36, 2)
{
    if (ARG(1) && (!ARG(0) || !void_vm_writable(ARG(0), ARG(1)))) {
        void_set_last_error(87u);
        return 0;
    }
    arc4random_buf(GPTR(ARG(0)), ARG(1));
    return 1;
}
WINAPI_EXPORT("kernel32.dll", SetConsoleCtrlHandler, 2) { return 1; }
WINAPI_EXPORT("winmm.dll", waveInGetNumDevs, 0) { return 0; }

WINAPI_EXPORT("version.dll", GetFileVersionInfoSizeA, 2) { return 0; }
WINAPI_EXPORT("version.dll", GetFileVersionInfoA, 4) { return 0; }
WINAPI_EXPORT("version.dll", VerQueryValueA, 4) { return 0; }
WINAPI_EXPORT("shell32.dll", DragAcceptFiles, 2) { return 0; }
WINAPI_EXPORT("shell32.dll", DragQueryFileW, 4) { return 0; }
WINAPI_EXPORT("shell32.dll", DragFinish, 1) { return 0; }
WINAPI_EXPORT("shell32.dll", ExtractIconExW, 5) { return 0; }

static uint32_t shell_execute_unavailable(const char *operation)
{
    void_log("[shell] %s is unavailable in the local Android port", operation);
    return 2;
}
WINAPI_EXPORT("shell32.dll", ShellExecuteA, 6) { return shell_execute_unavailable("ShellExecuteA"); }
WINAPI_EXPORT("shell32.dll", ShellExecuteW, 6) { return shell_execute_unavailable("ShellExecuteW"); }
