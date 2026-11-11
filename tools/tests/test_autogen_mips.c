/* Production GPU-write invalidation and lazy generation, with real level-1
 * pixels and a glGenerateMipmap spy. Run once with VOID_RENDER_THREAD=0 and 1.
 * Build: tools/build_host_test.py tools/tests/test_autogen_mips.c --objects
 * build/<task>/obj --exclude android_main --output build/<task>/tests/autogen */
#include "d3d9_internal.h"
#include <assert.h>
#include <unistd.h>

static unsigned mipmap_calls;
static void mipmap_spy(void) { ++mipmap_calls; }
#define glGenerateMipmap(target) (mipmap_spy(), glGenerateMipmap(target))
#include "../../android/host/d3d9_resource.c"
#include "../../android/host/d3d9_gl.c"

void void_process_exit(uint32_t code, int detach) { (void)detach; _exit((int)code); }

static uint32_t call(uint32_t object, unsigned slot, unsigned count, uint32_t *args)
{
    args[0] = object;
    return void_call_guest(MEM32(MEM32(object) + slot * 4), count, args, 1);
}

static void sample_target(void *unused)
{
    (void)unused;
    bind_texture(RDEV, 0, 0);
}

static void expect_level(d3d_device *dev, d3d_surface *level, const float color[3], unsigned calls)
{
    d3d_rt_sync_state(dev);
    d3d_rt_sync(sample_target, NULL);
    assert(mipmap_calls == calls);
    const uint32_t rect[4] = {0, 0, 4, 4};
    float rgba[64];
    assert(d3d_gl_read_rgba(level, rect, rgba));
    for (unsigned i = 0; i < 16; ++i)
        for (unsigned c = 0; c < 3; ++c) assert(fabsf(rgba[4 * i + c] - color[c]) < 0.01f);
    /* An unchanged target is not regenerated on the second bind. */
    d3d_rt_sync(sample_target, NULL);
    assert(mipmap_calls == calls && !d3d_gl_error());
}

int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);
    assert(void_guest_reserve());
    void_threads_init(); void_dispatch_init(); void_machine_enter();
    assert(d3d_gl_init());
    static d3d_device dev;
    dev.st.viewport[2] = dev.st.viewport[3] = 8;
    dev.st.viewport_z[1] = 1.0f;
    dev.st.rs[22] = 1; dev.st.rs[168] = 15;
    for (unsigned i = 0; i < 8; ++i) dev.st.tss[i][1] = 1;
    for (unsigned i = 0; i < 16; ++i) dev.st.stream_freq[i] = 1;
    g_d3d_device = &dev;
    d3d_rt_device_reset(&dev);
    d3d_texture *texture = d3d_texture_new(&dev, D3DRTYPE_TEXTURE, 8, 8, 1, 0,
        D3DUSAGE_RENDERTARGET | D3DUSAGE_AUTOGENMIPMAP, 21, D3DPOOL_DEFAULT);
    assert(texture && texture->levels == 4);
    d3d_wrap_texture(texture);
    d3d_surface *base = (d3d_surface *)void_com_host(d3d_texture_surface(texture, 0, 0));
    d3d_surface *mip = (d3d_surface *)void_com_host(d3d_texture_surface(texture, 0, 1));
    dev.rt[0] = base; dev.st.textures[0] = &texture->com; dev.fbo_dirty = 1;
    d3d_rt_device_reset(&dev);

    const uint32_t rect[4] = {0, 0, 8, 8};
    const float red[3] = {1, 0, 0}, green[3] = {0, 1, 0}, blue[3] = {0, 0, 1}, white[3] = {1, 1, 1};
    uint32_t pixels[64];
    for (unsigned i = 0; i < 64; ++i) pixels[i] = 0xFFFF0000u;
    d3d_texture_upload_level(texture, 0, 0, (const uint8_t *)pixels, 32);
    expect_level(&dev, mip, red, 1);

    d3d_gl_clear(&dev, 0, 0, 1, 0xFF00FF00u, 1, 0);
    expect_level(&dev, mip, green, 2);
    puts("PASS AUTOGEN Clear: base and level 1 green; one lazy generation");

    /* ColorFill writes the same attached target without an FBO-change promise. */
    d3d_gl_fill(base, rect, 0xFF0000FFu);
    expect_level(&dev, mip, blue, 3);
    puts("PASS AUTOGEN ColorFill: level 1 blue; one lazy generation");

    d3d_surface *source = d3d_surface_create_gpu(&dev, 8, 8, 21, D3DUSAGE_RENDERTARGET, D3DPOOL_DEFAULT, 0);
    assert(source);
    d3d_gl_fill(source, rect, 0xFFFF0000u);
    d3d_gl_blit(source, rect, base, rect, 1);
    expect_level(&dev, mip, red, 4);
    puts("PASS AUTOGEN StretchRect: level 1 red; one lazy generation");

    uint32_t declaration = d3d_decl_create(&dev, 0, 0x44);
    assert(declaration);
    dev.st.decl = void_com_host(declaration); dev.st.fvf = 0x44;
    dev.st.textures[0] = NULL;
    D3D_RT_DIRTY(&dev, dev.st.decl); D3D_RT_DIRTY(&dev, dev.st.fvf); D3D_RT_DIRTY(&dev, dev.st.textures[0]);
    struct vertex { float x, y, z, rhw; uint32_t color; } vertices[3] = {
        {-0.5f, -0.5f, 0, 1, 0xFFFFFFFFu}, {15.5f, -0.5f, 0, 1, 0xFFFFFFFFu},
        {-0.5f, 15.5f, 0, 1, 0xFFFFFFFFu}
    };
    assert(d3d_gl_draw(&dev, 4, 0, 3, 1, 0, 0, 0, 0, vertices, sizeof vertices[0], NULL, 0));
    dev.st.textures[0] = &texture->com; D3D_RT_DIRTY(&dev, dev.st.textures[0]);
    expect_level(&dev, mip, white, 5);
    puts("PASS AUTOGEN DrawPrimitiveUP: level 1 white; one lazy generation");

    d3d_rt_finish();
    printf("PASS AUTOGEN real GPU pixels, four write paths, unchanged-bind suppression; render thread %d\n", d3d_rt_threaded());
    return 0;
}
