/* Crashday's static-mesh raycast spends map loading scanning rejected triangles. */
#include "host.h"
#include "crashday_raycast_reject.h"

static int raycast_frame_overlap(uint32_t frame, uint32_t address, uint32_t size)
{
    return (uint64_t)address < (uint64_t)frame + 0xA8u &&
        (uint64_t)frame < (uint64_t)address + size;
}

uint32_t crashday_raycast_reject_run(uint32_t frame, uint32_t query, uint32_t object)
{
    if (!void_vm_readable(frame, 0xA8) || !void_vm_readable(query, 0x80) ||
        !void_vm_readable(object, 0x145)) return 0;
    uint32_t index = MEM32(frame + 0x10), count = MEM32(frame + 0x14);
    if (index >= count || count - index < 4) return 0;
    uint32_t mesh = MEM32(frame + 0xC), normal = MEM32(frame + 0x18);
    uint32_t vertices = MEM32(frame + 0x70);
    if (normal < 68 || !void_vm_readable(mesh, 0x30)) return 0;
    uint32_t vertex_count = MEM16(mesh + 0x24), remaining = count - index;
    uint32_t batch = remaining > 257 ? 257 : remaining;
    /* Keep every cooperative hand-over on an original iteration. */
    if (recomp_yield_hook) {
        if (g_backedges >= RECOMP_YIELD_EVERY - 1u) return 0;
        uint32_t quantum = RECOMP_YIELD_EVERY - g_backedges;
        if (batch > quantum) batch = quantum;
    }
    if (raycast_frame_overlap(frame, normal - 68, batch * 72u) ||
        raycast_frame_overlap(frame, vertices, vertex_count * 32u) ||
        raycast_frame_overlap(frame, query, 0x80) || raycast_frame_overlap(frame, object, 0x145) ||
        raycast_frame_overlap(frame, mesh, 0x30)) return 0;
    if (!void_vm_readable(normal - 68, batch * 72u) ||
        !vertex_count || !void_vm_readable(vertices, vertex_count * 32u)) return 0;
    float direction[3] = {MEMF(frame + 0x1C), MEMF(frame + 0x20), MEMF(frame + 0x24)};
    float lower[3] = {MEMF(query + 0x54), MEMF(query + 0x58), MEMF(query + 0x5C)};
    float upper[3] = {MEMF(query + 0x74), MEMF(query + 0x78), MEMF(query + 0x7C)};
    return crashday_ray_reject_prefix(GPTR(normal - 68), GPTR(vertices), vertex_count,
        batch, direction, lower, upper, MEM8(object + 0x144) != 0);
}
