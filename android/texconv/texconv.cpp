#include "texconv.h"

#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

#include "../../reference/astcenc/astcenc.h"
#include "../../reference/etcpak/ProcessRGB.hpp"

namespace {

uint16_t le16(const uint8_t *p) { return static_cast<uint16_t>(p[0] | (p[1] << 8)); }
uint32_t le32(const uint8_t *p) { return static_cast<uint32_t>(p[0] | (p[1] << 8) | (p[2] << 16) | (static_cast<uint32_t>(p[3]) << 24)); }
void set32(uint8_t *p, uint32_t v) { p[0] = static_cast<uint8_t>(v); p[1] = static_cast<uint8_t>(v >> 8); p[2] = static_cast<uint8_t>(v >> 16); p[3] = static_cast<uint8_t>(v >> 24); }

constexpr uint32_t DXT1 = TEXCONV_FOURCC('D', 'X', 'T', '1'), DXT2 = TEXCONV_FOURCC('D', 'X', 'T', '2'),
                   DXT3 = TEXCONV_FOURCC('D', 'X', 'T', '3'), DXT4 = TEXCONV_FOURCC('D', 'X', 'T', '4'),
                   DXT5 = TEXCONV_FOURCC('D', 'X', 'T', '5');

struct Dds { uint32_t width = 0, height = 0, mips = 1, fourcc = 0, faces = 1; };

bool is_dxt(uint32_t fourcc) { return fourcc == DXT1 || fourcc == DXT2 || fourcc == DXT3 || fourcc == DXT4 || fourcc == DXT5; }

uint32_t levels_of(uint32_t w, uint32_t h)
{
    uint32_t n = 1;
    while (w > 1 || h > 1) { w = w > 1 ? w / 2 : 1; h = h > 1 ? h / 2 : 1; ++n; }
    return n;
}

void level_dims(const Dds &d, uint32_t level, uint32_t &w, uint32_t &h)
{
    w = d.width >> level; h = d.height >> level;
    if (!w) w = 1;
    if (!h) h = 1;
}

uint64_t dxt_size(uint32_t fourcc, uint32_t w, uint32_t h)
{
    return static_cast<uint64_t>((w + 3) / 4) * ((h + 3) / 4) * (fourcc == DXT1 ? 8u : 16u);
}

bool parse_dds(const uint8_t *data, uint64_t size, Dds &d)
{
    if (size < 128 || memcmp(data, "DDS ", 4) || le32(data + 4) != 124) return false;
    const uint8_t *h = data + 4;
    d.height = le32(h + 8);
    d.width = le32(h + 12);
    d.mips = le32(h + 24) ? le32(h + 24) : 1;
    if (!(le32(h + 76) & 4u)) return false;
    d.fourcc = le32(h + 80);
    uint32_t caps2 = le32(h + 108);
    if (caps2 & 0x200000u) return false;
    d.faces = (caps2 & 0x200u) ? 6 : 1;
    if (d.faces == 6 && (caps2 & 0xFC00u) != 0xFC00u) return false;
    if (!d.width || !d.height || d.width > 16384 || d.height > 16384 || d.mips > levels_of(d.width, d.height)) return false;
    return true;
}

uint64_t dxt_payload(const Dds &d)
{
    uint64_t total = 0;
    for (uint32_t l = 0; l < d.mips; ++l) {
        uint32_t w, h;
        level_dims(d, l, w, h);
        total += dxt_size(d.fourcc, w, h);
    }
    return total * d.faces;
}

void rgb565(uint32_t c, uint8_t *out)
{
    uint32_t r = (c >> 11) & 31, g = (c >> 5) & 63, b = c & 31;
    out[0] = static_cast<uint8_t>((r << 3) | (r >> 2));
    out[1] = static_cast<uint8_t>((g << 2) | (g >> 4));
    out[2] = static_cast<uint8_t>((b << 3) | (b >> 2));
}

void color_block(const uint8_t *block, uint8_t out[16][4], bool four)
{
    uint32_t c0 = le16(block), c1 = le16(block + 2), bits = le32(block + 4);
    uint8_t pal[4][4];
    rgb565(c0, pal[0]); rgb565(c1, pal[1]);
    pal[0][3] = pal[1][3] = 255;
    if (c0 > c1 || four) {
        for (int k = 0; k < 3; ++k) {
            pal[2][k] = static_cast<uint8_t>((2 * pal[0][k] + pal[1][k] + 1) / 3);
            pal[3][k] = static_cast<uint8_t>((pal[0][k] + 2 * pal[1][k] + 1) / 3);
        }
        pal[2][3] = pal[3][3] = 255;
    } else {
        for (int k = 0; k < 3; ++k) pal[2][k] = static_cast<uint8_t>((pal[0][k] + pal[1][k]) / 2);
        pal[2][3] = 255;
        pal[3][0] = pal[3][1] = pal[3][2] = pal[3][3] = 0;
    }
    for (int i = 0; i < 16; ++i) memcpy(out[i], pal[(bits >> (2 * i)) & 3], 4);
}

void alpha_block(const uint8_t *block, uint8_t out[16])
{
    uint32_t a0 = block[0], a1 = block[1];
    uint64_t bits = 0;
    for (int i = 0; i < 6; ++i) bits |= static_cast<uint64_t>(block[2 + i]) << (8 * i);
    uint8_t pal[8];
    pal[0] = static_cast<uint8_t>(a0); pal[1] = static_cast<uint8_t>(a1);
    if (a0 > a1) {
        for (uint32_t i = 1; i < 7; ++i) pal[1 + i] = static_cast<uint8_t>(((7 - i) * a0 + i * a1 + 3) / 7);
    } else {
        for (uint32_t i = 1; i < 5; ++i) pal[1 + i] = static_cast<uint8_t>(((5 - i) * a0 + i * a1 + 2) / 5);
        pal[6] = 0; pal[7] = 255;
    }
    for (int i = 0; i < 16; ++i) out[i] = pal[(bits >> (3 * i)) & 7];
}

void decode_dxt(uint32_t fourcc, const uint8_t *src, uint32_t width, uint32_t height, uint8_t *rgba)
{
    uint32_t bw = (width + 3) / 4, bh = (height + 3) / 4, step = fourcc == DXT1 ? 8 : 16;
    for (uint32_t by = 0; by < bh; ++by)
        for (uint32_t bx = 0; bx < bw; ++bx) {
            const uint8_t *block = src + (static_cast<size_t>(by) * bw + bx) * step;
            uint8_t texels[16][4], alpha[16];
            if (fourcc == DXT1) {
                color_block(block, texels, false);
            } else if (fourcc == DXT2 || fourcc == DXT3) {
                color_block(block + 8, texels, true);
                for (int i = 0; i < 16; ++i) texels[i][3] = static_cast<uint8_t>(((block[i / 2] >> (4 * (i & 1))) & 15) * 17);
            } else {
                color_block(block + 8, texels, true);
                alpha_block(block, alpha);
                for (int i = 0; i < 16; ++i) texels[i][3] = alpha[i];
            }
            for (uint32_t y = 0; y < 4 && by * 4 + y < height; ++y)
                for (uint32_t x = 0; x < 4 && bx * 4 + x < width; ++x)
                    memcpy(rgba + ((static_cast<size_t>(by) * 4 + y) * width + bx * 4 + x) * 4, texels[y * 4 + x], 4);
        }
}

struct AstcContext {
    astcenc_context *context = nullptr;
    ~AstcContext() { if (context) astcenc_context_free(context); }
    astcenc_context *get()
    {
        if (context) return context;
        astcenc_config config;
        unsigned flags = ASTCENC_FLG_USE_DECODE_UNORM8 | ASTCENC_FLG_USE_ALPHA_WEIGHT;
        if (astcenc_config_init(ASTCENC_PRF_LDR, 4, 4, 1, ASTCENC_PRE_FAST, flags, &config) != ASTCENC_SUCCESS) return nullptr;
        if (astcenc_context_alloc(&config, 1, &context, nullptr) != ASTCENC_SUCCESS) context = nullptr;
        return context;
    }
};

thread_local AstcContext astc_context;

uint64_t converted_size(uint32_t fourcc, uint32_t w, uint32_t h)
{
    if (fourcc == TEXCONV_ETC2_RGB) return static_cast<uint64_t>((w + 3) / 4) * ((h + 3) / 4) * 8;
    if (fourcc == TEXCONV_ETC2_RGBA) return static_cast<uint64_t>((w + 3) / 4) * ((h + 3) / 4) * 16;
    return static_cast<uint64_t>((w + 3) / 4) * ((h + 3) / 4) * 16;
}

bool encode_level(uint32_t fourcc, const std::vector<uint8_t> &rgba, uint32_t w, uint32_t h, bool opaque, uint8_t *out)
{
    if (fourcc == TEXCONV_ETC2_RGB || fourcc == TEXCONV_ETC2_RGBA) {
        uint32_t pw = (w + 3) & ~3u, ph = (h + 3) & ~3u;
        std::vector<uint32_t> bgra(static_cast<size_t>(pw) * ph);
        for (uint32_t y = 0; y < ph; ++y)
            for (uint32_t x = 0; x < pw; ++x) {
                const uint8_t *p = &rgba[(static_cast<size_t>(std::min(y, h - 1)) * w + std::min(x, w - 1)) * 4];
                bgra[static_cast<size_t>(y) * pw + x] = static_cast<uint32_t>(p[2]) | (static_cast<uint32_t>(p[1]) << 8) |
                                                      (static_cast<uint32_t>(p[0]) << 16) | (static_cast<uint32_t>(p[3]) << 24);
            }
        uint32_t blocks = (pw / 4) * (ph / 4);
        if (fourcc == TEXCONV_ETC2_RGB) CompressEtc2Rgb(bgra.data(), reinterpret_cast<uint64_t *>(out), blocks, pw, true);
        else CompressEtc2Rgba(bgra.data(), reinterpret_cast<uint64_t *>(out), blocks, pw, true);
        return true;
    }
    astcenc_context *context = astc_context.get();
    if (!context) return false;
    astcenc_image image{};
    image.dim_x = w; image.dim_y = h; image.dim_z = 1;
    image.data_type = ASTCENC_TYPE_U8;
    void *slices[] = {const_cast<uint8_t *>(rgba.data())};
    image.data = slices;
    const astcenc_swizzle swizzle{ASTCENC_SWZ_R, ASTCENC_SWZ_G, ASTCENC_SWZ_B, opaque ? ASTCENC_SWZ_1 : ASTCENC_SWZ_A};
    astcenc_error status = astcenc_compress_image(context, &image, &swizzle, out, converted_size(fourcc, w, h), 0);
    astcenc_compress_reset(context);
    return status == ASTCENC_SUCCESS;
}

int convert_dds(const uint8_t *data, uint64_t size, int format, std::vector<uint8_t> &out, std::string &why)
{
    Dds d;
    if (!parse_dds(data, size, d) || !is_dxt(d.fourcc)) { why = "not a DXT texture"; return -1; }
    uint64_t payload = dxt_payload(d);
    if (128 + payload > size) { why = "truncated texture"; return -1; }
    std::vector<std::vector<uint8_t>> levels(static_cast<size_t>(d.faces) * d.mips);
    bool opaque = true;
    const uint8_t *src = data + 128;
    for (uint32_t f = 0; f < d.faces; ++f)
        for (uint32_t l = 0; l < d.mips; ++l) {
            uint32_t w, h;
            level_dims(d, l, w, h);
            std::vector<uint8_t> &level = levels[f * d.mips + l];
            level.resize(static_cast<size_t>(w) * h * 4);
            decode_dxt(d.fourcc, src, w, h, level.data());
            src += dxt_size(d.fourcc, w, h);
            for (size_t i = 3; i < level.size() && opaque; i += 4) opaque = level[i] == 255;
        }
    bool small_slots = d.fourcc == DXT1;
    if (small_slots && !opaque) return 0;
    uint32_t fourcc = small_slots || (opaque && format == TEXCONV_ETC2) ? TEXCONV_ETC2_RGB
                    : format == TEXCONV_ETC2 ? TEXCONV_ETC2_RGBA : TEXCONV_ASTC_4x4;
    out.assign(static_cast<size_t>(128 + payload), 0);
    memcpy(out.data(), data, 128);
    set32(out.data() + 84, fourcc);
    set32(out.data() + 36, TEXCONV_MARKER);
    set32(out.data() + 40, TEXCONV_VERSION);
    set32(out.data() + 44, d.fourcc);
    set32(out.data() + 48, d.mips);
    set32(out.data() + 52, opaque ? 1u : 0u);
    uint8_t *dst = out.data() + 128;
    for (uint32_t f = 0; f < d.faces; ++f)
        for (uint32_t l = 0; l < d.mips; ++l) {
            uint32_t w, h;
            level_dims(d, l, w, h);
            uint64_t slot = dxt_size(d.fourcc, w, h);
            if (converted_size(fourcc, w, h) > slot) { why = "converted level exceeds its slot"; return -1; }
            if (!encode_level(fourcc, levels[f * d.mips + l], w, h, opaque, dst)) { why = "encoder failed"; return -1; }
            dst += slot;
        }
    return 1;
}

}  // namespace

extern "C" int texconv_convert_dds(const uint8_t *dds, uint64_t size, int format, uint8_t **out, uint64_t *out_size)
{
    if (!dds || !out || !out_size || (format != TEXCONV_ETC2 && format != TEXCONV_ASTC)) return -1;
    std::vector<uint8_t> converted;
    std::string why;
    int result = convert_dds(dds, size, format, converted, why);
    if (result <= 0) return result < 0 ? -1 : 1;
    *out = static_cast<uint8_t *>(malloc(converted.size()));
    if (!*out) return -1;
    memcpy(*out, converted.data(), converted.size());
    *out_size = converted.size();
    return 0;
}

extern "C" void texconv_free(void *pointer) { free(pointer); }
