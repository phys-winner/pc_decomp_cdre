/* Additional VC8 imports over the host's existing drive and code-page model. */
#include "host.h"
#include <errno.h>
#include <zlib.h>

/* The VC12 memcpy also accepts overlap. Keep the guest ABI and invalid-range
 * fallback, while large model/texture copies use the platform implementation. */
int void_crt_memcpy_fast(void)
{
    if (!void_vm_readable(g_esp, 16)) return 0;
    uint32_t dst = MEM32(g_esp + 4), src = MEM32(g_esp + 8), count = MEM32(g_esp + 12);
    if (count && (!void_vm_readable(src, count) || !void_vm_writable(dst, count))) return 0;
    if (count) memmove(GPTR(dst), GPTR(src), count);
    g_eax = dst;
    g_esp += 4;
    return 1;
}

int crashday_inflate_buffer_fast(void)
{
    if (!void_vm_readable(g_esp, 12)) return 0;
    uint32_t src = g_ecx, size = g_edx, dst = MEM32(g_esp + 4), capacity = MEM32(g_esp + 8);
    if (!src || !dst || (size && !void_vm_readable(src, size)) || (capacity && !void_vm_writable(dst, capacity))) return 0;
    int saved_errno = errno;
    uLongf written = capacity;
    int result = uncompress(GPTR(dst), &written, GPTR(src), size);
    errno = saved_errno;
    g_eax = result == Z_OK ? (uint32_t)written : UINT32_MAX;
    g_esp += 4;
    return 1;
}

CDECL_EXPORT("msvcrt.dll", _getdrives) { return 1u << 2; }

WINAPI_EXPORT("kernel32.dll", IsDBCSLeadByteEx, 2)
{
    /* The code pages supported by GetCPInfo contain no DBCS lead bytes. */
    switch (ARG(0)) {
    case 0: case 1: case 3: case 437: case 1251: case 1252:
    case 20127: case 28591: case 65001: return 0;
    default: void_set_last_error(ERROR_INVALID_PARAMETER_); return 0;
    }
}
