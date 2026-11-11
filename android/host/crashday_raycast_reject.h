#ifndef CRASHDAY_RAYCAST_REJECT_H
#define CRASHDAY_RAYCAST_REJECT_H

#include <math.h>
#include <stdint.h>
#include <string.h>

static inline float crashday_ray_float(const unsigned char *p)
{
    float value;
    memcpy(&value, p, sizeof value);
    return value;
}

/* Only batch the original loop's certain misses. A possible hit, unusual float
 * or invalid index resumes the lifted code, including its exact tie ordering. */
static inline uint32_t crashday_ray_reject_prefix(const unsigned char *faces,
    const unsigned char *vertices, uint32_t vertex_count, uint32_t count,
    const float direction[3], const float lower[3], const float upper[3], int boxes)
{
    if (!isfinite(direction[0]) || !isfinite(direction[1]) || !isfinite(direction[2])) return 0;
    uint32_t skipped = 0;
    /* Run the final triangle through the original loop to retain return registers. */
    if (count) --count;
    if (count > 256) count = 256;
    while (skipped < count) {
        const unsigned char *face = faces + skipped * 72u;
        float nx = crashday_ray_float(face + 60), ny = crashday_ray_float(face + 64);
        float nz = crashday_ray_float(face + 68);
        if (!isfinite(nx) || !isfinite(ny) || !isfinite(nz)) break;
        float x = (float)(nx * direction[0]), y = (float)(ny * direction[1]);
        float xy = (float)(y + x), z = (float)(nz * direction[2]);
        float dot = (float)(xy + z);
        if (!isfinite(dot)) break;
        if (dot <= 0.0f) { ++skipped; continue; }
        if (!boxes) break;
        uint16_t indices[3];
        memcpy(indices, face, sizeof indices);
        if (indices[0] >= vertex_count || indices[1] >= vertex_count || indices[2] >= vertex_count) break;
        const unsigned char *a = vertices + indices[0] * 32u;
        const unsigned char *b = vertices + indices[1] * 32u;
        const unsigned char *c = vertices + indices[2] * 32u;
        int rejected = 0;
        const unsigned order[3] = {0, 2, 1};
        for (unsigned i = 0; i < 3; ++i) {
            unsigned axis = order[i];
            float av = crashday_ray_float(a + axis * 4), bv = crashday_ray_float(b + axis * 4);
            float cv = crashday_ray_float(c + axis * 4);
            if (!isfinite(av) || !isfinite(bv) || !isfinite(cv) ||
                !isfinite(lower[axis]) || !isfinite(upper[axis])) return skipped;
            if ((lower[axis] > av && lower[axis] > bv && lower[axis] > cv) ||
                (av > upper[axis] && bv > upper[axis] && cv > upper[axis])) { rejected = 1; break; }
        }
        if (!rejected) break;
        ++skipped;
    }
    return skipped;
}

#endif
