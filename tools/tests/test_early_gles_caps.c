/* Actual guest IDirect3D9::GetDeviceCaps before CreateDevice must initialize
 * the GLES limits through the existing worker, without creating a D3D device. */
#include "d3d9_internal.h"
#include "d3d9_thread.inc"
#include <assert.h>
#include <unistd.h>

float d3d_gl_max_anisotropy(void);
void void_process_exit(uint32_t code, int detach) { (void)detach; _exit((int)code); }

int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);
    assert(void_guest_reserve());
    void_threads_init(); void_dispatch_init(); void_machine_enter();
    const void_shim *shim = void_shim_find("d3d9.dll", "Direct3DCreate9", 0);
    assert(shim);
    uint32_t create = void_thunk(shim->fn, shim->name), sdk = 32;
    uint32_t parent = void_call_guest(create, 1, &sdk, 1);
    assert(parent && !g_d3d_device);
    uint32_t out = void_galloc(304), args[4] = {parent, 0, 1, out};
    memset(GPTR(out), 0xA5, 304);
    assert(void_call_guest(MEM32(MEM32(parent) + 14 * 4), 4, args, 1) == D3D_OK);
    assert(!g_d3d_device && MEM32(out + 108) == (uint32_t)d3d_gl_max_anisotropy());
    assert(MEM32(out + 88) == d3d_gl_limits.max_texture);
    assert(!(MEM32(out + 16) & 0x80u) && !(MEM32(out + 32) & 0x00200000u));
    assert(!d3d_gl_error());
    printf("PASS early guest GetDeviceCaps: real anisotropy %u, texture limit %u, no D3D device, render thread %d\n",
        MEM32(out + 108), MEM32(out + 88), d3d_rt_threaded());
    return 0;
}
