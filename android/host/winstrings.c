#include "host.h"

WINAPI_EXPORT("kernel32.dll", lstrcpyW, 2)
{
    uint32_t dst = ARG(0), src = ARG(1), i = 0;
    do { MEM16(dst + 2 * i) = MEM16(src + 2 * i); } while (MEM16(src + 2 * i++));
    return dst;
}

WINAPI_EXPORT("kernel32.dll", lstrcpynW, 3)
{
    uint32_t dst = ARG(0), src = ARG(1), count = ARG(2), i = 0;
    if (!count) return dst;
    for (; i + 1 < count && MEM16(src + 2 * i); ++i) MEM16(dst + 2 * i) = MEM16(src + 2 * i);
    MEM16(dst + 2 * i) = 0;
    return dst;
}

WINAPI_EXPORT("kernel32.dll", lstrcatW, 2)
{
    uint32_t dst = ARG(0), src = ARG(1), i = 0, j = 0;
    while (MEM16(dst + 2 * i)) ++i;
    do { MEM16(dst + 2 * (i + j)) = MEM16(src + 2 * j); } while (MEM16(src + 2 * j++));
    return dst;
}

WINAPI_EXPORT("kernel32.dll", FormatMessageW, 7)
{
    if (!ARG(4) || !ARG(5)) return 0;
    char message[96];
    snprintf(message, sizeof message, "Windows error %u", ARG(0));
    uint32_t length = (uint32_t)strlen(message);
    if (ARG(5) <= length) { void_set_last_error(ERROR_INSUFFICIENT_BUFFER_); return 0; }
    void_utf8_to_gw(message, ARG(4), ARG(5));
    return length;
}
