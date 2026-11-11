#ifndef CRASHDAY_TEXCONV_H
#define CRASHDAY_TEXCONV_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

enum { TEXCONV_ETC2 = 1, TEXCONV_ASTC = 2 };
#define TEXCONV_FOURCC(a, b, c, d) ((uint32_t)(a) | ((uint32_t)(b) << 8) | ((uint32_t)(c) << 16) | ((uint32_t)(d) << 24))
#define TEXCONV_MARKER TEXCONV_FOURCC('H', '5', 'T', 'C')
#define TEXCONV_ETC2_RGB TEXCONV_FOURCC('H', '5', 'E', '1')
#define TEXCONV_ETC2_RGBA TEXCONV_FOURCC('H', '5', 'E', '2')
#define TEXCONV_ASTC_4x4 TEXCONV_FOURCC('H', '5', 'A', '4')
#define TEXCONV_VERSION 2u

int texconv_convert_dds(const uint8_t *dds, uint64_t size, int format, uint8_t **out, uint64_t *out_size);
void texconv_free(void *pointer);

#ifdef __cplusplus
}
#endif
#endif
