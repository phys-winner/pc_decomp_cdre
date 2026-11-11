/* BC2/BC3 to ATC fallback, adapted from the_sims_2 d3d9_atc.c.
 * GPU oracle on Adreno 618/610: alpha exact (BC3 rounding <=1), RGB model exact.
 * BC1 stays on its existing path: high-contrast quality did not pass the oracle.
 * Included only by d3d9_resource.c; renderer-owned state, no public ABI changes. */
#include <pthread.h>
#include <unistd.h>

static int expand5(int v) { return (v << 3) | (v >> 2); }
static int expand6(int v) { return (v << 2) | (v >> 4); }

static void rgb565(uint16_t c, int out[3])
{
    out[0] = expand5((c >> 11) & 31); out[1] = expand6((c >> 5) & 63); out[2] = expand5(c & 31);
}

/* The DXT colour palette as d3d9_format.c decodes it. */
static void dxt_palette(const uint8_t *block, int four, int pal[4][3])
{
    uint16_t c0 = (uint16_t)(block[0] | block[1] << 8), c1 = (uint16_t)(block[2] | block[3] << 8);
    rgb565(c0, pal[0]);
    rgb565(c1, pal[1]);
    if (c0 > c1 || four) {
        for (int k = 0; k < 3; ++k) {
            pal[2][k] = (2 * pal[0][k] + pal[1][k] + 1) / 3;
            pal[3][k] = (pal[0][k] + 2 * pal[1][k] + 1) / 3;
        }
    } else {
        for (int k = 0; k < 3; ++k) { pal[2][k] = (pal[0][k] + pal[1][k]) / 2; pal[3][k] = 0; }
    }
}

/* What the GPU decodes from an ATC colour block of mode 0. */
static void atc_palette(uint16_t e0, uint16_t e1, int pal[4][3])
{
    pal[0][0] = expand5((e0 >> 10) & 31); pal[0][1] = expand5((e0 >> 5) & 31); pal[0][2] = expand5(e0 & 31);
    rgb565(e1, pal[3]);
    for (int k = 0; k < 3; ++k) {
        pal[1][k] = (5 * pal[0][k] + 3 * pal[3][k] + 4) >> 3;
        pal[2][k] = (3 * pal[0][k] + 5 * pal[3][k] + 4) >> 3;
    }
}

static int clamp255(float v) { return v <= 0 ? 0 : v >= 255 ? 255 : (int)(v + 0.5f); }
static int quant5(int v) { return (v * 31 + 127) / 255; }
static int quant6(int v) { return (v * 63 + 127) / 255; }
static uint16_t pack555(const int c[3]) { return (uint16_t)(quant5(c[0]) << 10 | quant5(c[1]) << 5 | quant5(c[2])); }
static uint16_t pack565(const int c[3]) { return (uint16_t)(quant5(c[0]) << 11 | quant6(c[1]) << 5 | quant5(c[2])); }

/* A DXT block reduced to what decides its fit: the colours of its palette
 * entries in use, how many texels use each, and each texel's entry. */
typedef struct {
    int colour[4][3];
    uint32_t count[4];
    uint32_t used;              /* mask of entries used by texels that show */
    uint32_t bits;              /* the DXT indices */
    uint32_t transparent;       /* texels of DXT1's transparent entry */
} dxt_view;

/* Score endpoints over the entries in use (a texel's colour is its entry's,
 * so 4 targets instead of 16); map[d] is the ATC index entry d takes. */
static uint32_t score(uint16_t e0, uint16_t e1, const dxt_view *v, uint8_t map[4])
{
    int pal[4][3];
    atc_palette(e0, e1, pal);
    uint32_t total = 0;
    for (int d = 0; d < 4; ++d) {
        map[d] = 0;
        if (!(v->used >> d & 1)) continue;
        uint32_t best = UINT32_MAX;
        for (int k = 0; k < 4; ++k) {
            int dr = v->colour[d][0] - pal[k][0], dg = v->colour[d][1] - pal[k][1], db = v->colour[d][2] - pal[k][2];
            uint32_t e = (uint32_t)(dr * dr + dg * dg + db * db);
            if (e < best) { best = e; map[d] = (uint8_t)k; }
        }
        total += best * v->count[d];
    }
    return total;
}

/* Single colours through an interpolant: for a channel with a 5- or 6-bit
 * colour1 and a value, the colour0 and colour1 fields that put palette index
 * 1 (which = 0) or 2 (which = 1) closest to it. */
typedef struct { uint8_t q0, q1, error; } single_fit;
static single_fit single_table[2][2][256];   /* [6-bit colour1][interpolant 1 or 2][value] */
static pthread_once_t single_once = PTHREAD_ONCE_INIT;

static void single_init(void)
{
    for (int six = 0; six < 2; ++six)
        for (int which = 0; which < 2; ++which)
            for (int v = 0; v < 256; ++v) {
                single_fit best = { 0, 0, 255 };
                for (int q0 = 0; q0 < 32; ++q0)
                    for (int q1 = 0; q1 < (six ? 64 : 32); ++q1) {
                        int x0 = expand5(q0), x1 = six ? expand6(q1) : expand5(q1);
                        int got = which ? (3 * x0 + 5 * x1 + 4) >> 3 : (5 * x0 + 3 * x1 + 4) >> 3;
                        int e = got > v ? got - v : v - got;
                        if (e < best.error) { best.q0 = (uint8_t)q0; best.q1 = (uint8_t)q1; best.error = (uint8_t)e; }
                    }
                single_table[six][which][v] = best;
            }
}

/* One ATC colour block (8 bytes) for a DXT block's view. */
static void fit_colour(const dxt_view *v, uint8_t *out)
{
    uint16_t best_e0 = 0, best_e1 = 0;
    uint32_t best_score = UINT32_MAX;
    uint8_t best_map[4] = { 0, 0, 0, 0 }, map[4];
    int entries = __builtin_popcount(v->used);
    if (entries == 0) { memset(out, 0, 8); return; }
    /* Distinct colours among the entries in use (DXT's c0 == c1 repeats one). */
    int distinct = 0, first = __builtin_ctz(v->used);
    for (int d = 0; d < 4; ++d)
        if (v->used >> d & 1) {
            int same = 0;
            for (int e = 0; e < d; ++e)
                if ((v->used >> e & 1) && !memcmp(v->colour[e], v->colour[d], sizeof v->colour[d])) same = 1;
            distinct += !same;
        }
#define TRY(e0, e1) do { uint32_t s_ = score((e0), (e1), v, map); \
        if (s_ < best_score) { best_score = s_; best_e0 = (e0); best_e1 = (e1); memcpy(best_map, map, 4); } } while (0)
    if (distinct == 1) {
        const int *c = v->colour[first];
        TRY(pack555(c), pack565(c));
        if (best_score) {
            pthread_once(&single_once, single_init);
            for (int which = 0; which < 2 && best_score; ++which) {
                const single_fit *r = &single_table[0][which][c[0]], *g = &single_table[1][which][c[1]],
                    *b = &single_table[0][which][c[2]];
                TRY((uint16_t)(r->q0 << 10 | g->q0 << 5 | b->q0), (uint16_t)(r->q1 << 11 | g->q1 << 5 | b->q1));
            }
        }
    } else {
        /* The DXT endpoints themselves, both ways round: exact when only they
         * are used and the 5-bit green of colour0 holds the value. */
        const int *a = v->colour[0], *bb = v->colour[1];
        TRY(pack555(a), pack565(bb));
        if (best_score) TRY(pack555(bb), pack565(a));
        if (best_score) {
            /* Least squares along the DXT line A->B: entry d sits at s_d; ATC
             * puts its colours at 0, 3/8, 5/8, 1 of E0->E1. Fit E0, E1 (as
             * positions on the line) to each s_d's nearest ATC position. */
            float A[3], D[3], len2 = 0;
            for (int k = 0; k < 3; ++k) { A[k] = (float)a[k]; D[k] = (float)(bb[k] - a[k]); len2 += D[k] * D[k]; }
            if (len2 > 0) {
                float sp[4], w[4];
                int ns = 0;
                for (int d = 0; d < 4; ++d) {
                    if (!(v->used >> d & 1)) continue;
                    float t = 0;
                    for (int k = 0; k < 3; ++k) t += ((float)v->colour[d][k] - A[k]) * D[k];
                    sp[ns] = t / len2;
                    w[ns] = (float)v->count[d];
                    ++ns;
                }
                float lo = sp[0], hi = sp[0];
                for (int i = 1; i < ns; ++i) { if (sp[i] < lo) lo = sp[i]; if (sp[i] > hi) hi = sp[i]; }
                float pa = lo, pb = hi;
                static const float u[4] = { 0.0f, 0.375f, 0.625f, 1.0f };
                for (int iter = 0; iter < 2; ++iter) {
                    float saa = 0, sab = 0, sbb = 0, sa = 0, sb = 0;
                    for (int i = 0; i < ns; ++i) {
                        int nearest = 0;
                        float best = 1e30f;
                        for (int k = 0; k < 4; ++k) {
                            float pos = pa + u[k] * (pb - pa), e = (sp[i] - pos) * (sp[i] - pos);
                            if (e < best) { best = e; nearest = k; }
                        }
                        float ca = 1.0f - u[nearest], cb = u[nearest];
                        saa += w[i] * ca * ca; sab += w[i] * ca * cb; sbb += w[i] * cb * cb;
                        sa += w[i] * ca * sp[i]; sb += w[i] * cb * sp[i];
                    }
                    float det = saa * sbb - sab * sab;
                    if (det < 1e-6f && det > -1e-6f) break;
                    pa = (sa * sbb - sb * sab) / det;
                    pb = (sb * saa - sa * sab) / det;
                }
                int e0[3], e1[3];
                for (int k = 0; k < 3; ++k) { e0[k] = clamp255(A[k] + pa * D[k]); e1[k] = clamp255(A[k] + pb * D[k]); }
                TRY(pack555(e0), pack565(e1));
                if (best_score) TRY(pack555(e1), pack565(e0));
            }
        }
    }
#undef TRY
    uint32_t indices = 0;
    for (int i = 0; i < 16; ++i) indices |= (uint32_t)best_map[v->bits >> (2 * i) & 3] << (2 * i);
    out[0] = (uint8_t)best_e0; out[1] = (uint8_t)(best_e0 >> 8);   /* bit 15 clear: mode 0 */
    out[2] = (uint8_t)best_e1; out[3] = (uint8_t)(best_e1 >> 8);
    out[4] = (uint8_t)indices; out[5] = (uint8_t)(indices >> 8);
    out[6] = (uint8_t)(indices >> 16); out[7] = (uint8_t)(indices >> 24);
}

/* A DXT colour block's view: its palette as d3d9_format.c decodes it, the
 * entries texels use, and the transparent texels (DXT1 entry 3 in three-colour mode). */
static void dxt_view_of(const uint8_t *block, int four, dxt_view *v)
{
    dxt_palette(block, four, v->colour);
    uint16_t c0 = (uint16_t)(block[0] | block[1] << 8), c1 = (uint16_t)(block[2] | block[3] << 8);
    int punch = !four && c0 <= c1;
    v->bits = (uint32_t)block[4] | (uint32_t)block[5] << 8 | (uint32_t)block[6] << 16 | (uint32_t)block[7] << 24;
    v->count[0] = v->count[1] = v->count[2] = v->count[3] = 0;
    v->used = 0;
    v->transparent = 0;
    for (int i = 0; i < 16; ++i) {
        uint32_t k = v->bits >> (2 * i) & 3;
        if (punch && k == 3) { v->transparent |= 1u << i; continue; }
        ++v->count[k];
        v->used |= 1u << k;
    }
}

static void colour_block(const uint8_t *dxt, int four, uint8_t *out, uint32_t *transparent)
{
    dxt_view v;
    dxt_view_of(dxt, four, &v);
    fit_colour(&v, out);
    if (transparent) *transparent = v.transparent;
}

static size_t d3d_atc_transcode(int conv, const uint8_t *src, uint32_t width, uint32_t height,
    uint32_t pitch, uint8_t *dst)
{
    if (conv != CONV_DXT3 && conv != CONV_DXT5) return 0;
    uint32_t bw = (width + 3) / 4, bh = (height + 3) / 4;
    uint8_t *out = dst;
    for (uint32_t y = 0; y < bh; ++y) for (uint32_t x = 0; x < bw; ++x, out += 16) {
        const uint8_t *block = src + (size_t)y * pitch + x * 16u;
        memcpy(out, block, 8);                 /* explicit/interpolated alpha unchanged */
        colour_block(block + 8, 1, out + 8, NULL);
    }
    return (size_t)(out - dst);
}

/* All eligibility and capability decisions run on the GL context's thread. */
static const d3d_native_format atc_formats[] = {
    {FOURCC('A','T','C','2'), 0x8C93, 4, 4, 16, 0},
    {FOURCC('A','T','C','3'), 0x87EE, 4, 4, 16, 0},
};
static int atc_state;
static uint64_t atc_uploads, atc_uploaded_bytes, atc_rgba_bytes;

static int atc_available(void)
{
    if (atc_state) return atc_state > 0;
    atc_state = -1;
    const char *env = getenv("CRASHDAY_ATC");
    char path[1200];
    snprintf(path, sizeof path, "%s/noatc", void_data_dir());
    if ((env && !strcmp(env, "0")) || !access(path, F_OK)) {
        void_log("[texture] BC2/BC3 ATC fallback disabled");
        return 0;
    }
    GLint count = 0;
    glGetIntegerv(GL_NUM_COMPRESSED_TEXTURE_FORMATS, &count);
    if (count <= 0 || count > 4096) return 0;
    GLint *formats = (GLint *)malloc((size_t)count * sizeof *formats);
    if (!formats) return 0;
    glGetIntegerv(GL_COMPRESSED_TEXTURE_FORMATS, formats);
    unsigned found = 0;
    for (GLint i = 0; i < count; ++i) {
        if (formats[i] == 0x8C93) found |= 1;
        if (formats[i] == 0x87EE) found |= 2;
    }
    free(formats);
    if (found != 3) { void_log("[texture] BC2/BC3 ATC formats unavailable"); return 0; }
    /* ATC's original extension forbids subimages. Verify this driver's
     * immutable-storage extension behavior before relying on subimage uploads. */
    d3d_gl_upload_unit();
    uint8_t block[16] = {0};
    int supported = 1;
    for (unsigned i = 0; i < 2; ++i) {
        GLuint texture = 0;
        glGenTextures(1, &texture);
        glBindTexture(GL_TEXTURE_2D, texture);
        glTexStorage2D(GL_TEXTURE_2D, 1, atc_formats[i].internal, 4, 4);
        glCompressedTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, 4, 4, atc_formats[i].internal, 16, block);
        if (glGetError()) supported = 0;
        glDeleteTextures(1, &texture);
    }
    atc_state = supported ? 1 : -1;
    void_log("[texture] BC2/BC3 ATC fallback %s; BC1 retains original storage",
             supported ? "enabled (formats and upload verified)" : "unavailable (upload probe failed)");
    return supported;
}

static const d3d_native_format *atc_for_texture(const d3d_texture *t)
{
    if ((t->target != GL_TEXTURE_2D && t->target != GL_TEXTURE_CUBE_MAP) ||
        (t->usage & (D3DUSAGE_RENDERTARGET | D3DUSAGE_DEPTHSTENCIL | D3DUSAGE_AUTOGENMIPMAP))) return NULL;
    int which = t->fmt->conv == CONV_DXT3 ? 0 : t->fmt->conv == CONV_DXT5 ? 1 : -1;
    return which >= 0 && atc_available() ? &atc_formats[which] : NULL;
}

static int is_atc_storage(const d3d_native_format *native)
{
    return native == &atc_formats[0] || native == &atc_formats[1];
}
