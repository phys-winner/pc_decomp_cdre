#include "host.h"
#include "input.h"

extern uint32_t void_android_refresh_count(void) __attribute__((weak));
extern uint32_t void_android_refresh_rate(int index) __attribute__((weak));
extern void void_android_request_refresh(uint32_t rate) __attribute__((weak));

static void display_mode(uint32_t out, int width, int height, uint32_t rate)
{
    memset(GPTR(out), 0, 220);
    void_utf8_to_gw("Crashday Android display", out, 32);
    MEM16(out + 64) = 0x0401;
    MEM16(out + 68) = 220;
    MEM32(out + 72) = 0x00040000u | 0x00080000u | 0x00100000u | 0x00400000u | 0x20u;
    MEM32(out + 76 + 8) = 0;
    MEM32(out + 76 + 12) = 0;
    MEM16(out + 166) = 96;
    MEM32(out + 168) = 32;
    MEM32(out + 172) = (uint32_t)width;
    MEM32(out + 176) = (uint32_t)height;
    MEM32(out + 184) = rate;
}

WINAPI_EXPORT("user32.dll", EnumDisplaySettingsW, 3)
{
    uint32_t index = ARG(1);
    int current = index == 0xFFFFFFFFu || index == 0xFFFFFFFEu;
    uint32_t count = void_android_refresh_count ? void_android_refresh_count() : 1;
    if (!current && index >= count) return 0;
    uint32_t rate = void_android_refresh_rate ? void_android_refresh_rate(current ? -1 : (int)index) : 60;
    int width, height;
    void_input_screen_size(&width, &height);
    display_mode(ARG(2), width, height, rate);
    return 1;
}

WINAPI_EXPORT("user32.dll", EnumDisplayDevicesW, 4)
{
    if (ARG(1) != 0 || ARG(3) != 0) return 0;
    uint32_t out = ARG(2);
    memset(GPTR(out), 0, 836);
    void_utf8_to_gw("\\\\.\\DISPLAY1", out, 32);
    void_utf8_to_gw("Crashday Android display", out + 64, 128);
    MEM32(out + 320) = 1 | 4;
    void_utf8_to_gw("ANDROID", out + 324, 128);
    void_utf8_to_gw("Crashday", out + 580, 128);
    return 1;
}

WINAPI_EXPORT("user32.dll", ChangeDisplaySettingsExW, 5)
{
    uint32_t mode = ARG(1);
    if (mode && !(ARG(3) & 2u)) { /* CDS_TEST only validates the mode. */
        int width = (int)MEM32(mode + 172), height = (int)MEM32(mode + 176);
        if (width > 0 && height > 0) void_input_set_screen_size(width, height);
        if (void_android_request_refresh) void_android_request_refresh(MEM32(mode + 184));
    }
    return 0;
}

WINAPI_EXPORT("user32.dll", EnumDisplayMonitors, 4)
{
    int width, height;
    void_input_screen_size(&width, &height);
    uint32_t rect = void_galloc(16);
    MEM32(rect) = 0;
    MEM32(rect + 4) = 0;
    MEM32(rect + 8) = (uint32_t)width;
    MEM32(rect + 12) = (uint32_t)height;
    uint32_t args[4] = { 1, ARG(1), rect, ARG(3) };
    uint32_t result = void_call_guest(ARG(2), 4, args, 1);
    void_gfree(rect);
    return result;
}
