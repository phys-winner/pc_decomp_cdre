"""Execute MSAA capability/ABI checks and build the production GLES GPU oracle."""
from pathlib import Path
import subprocess
import unittest

from test_menu_gestures import method
import test_menu_layout
from build_android import CLANG

ROOT = Path(__file__).resolve().parents[1]


class MultisampleTest(unittest.TestCase):
    run_probe = test_menu_layout.MenuLayoutTest.run_probe

    def test_sample_capabilities_and_presentation(self):
        source = (ROOT / "android/host/d3d9_msaa.inc").read_text(encoding="utf-8")
        device = (ROOT / "android/host/d3d9_device.c").read_text(encoding="utf-8")
        export = "COM_METHOD(d3d9, CheckDeviceMultiSampleType, 7)"
        functions = "\n".join(method(source, s) for s in ("static void find_multisample_modes(", "int d3d_gl_supports_samples("))
        functions += "\n" + method(device, export).replace(export, "static uint32_t check_samples(void)")
        functions += "\n" + method(device, "static int multisample_params_valid(")
        self.run_probe("multisample-capabilities", r'''
#include <stdint.h>
#include <string.h>
#include <assert.h>
#define GL_RENDERBUFFER 1
#define GL_NUM_SAMPLE_COUNTS 2
#define GL_SAMPLES 3
#define D3D_OK 0
#define D3DERR_NOTAVAILABLE 0x8876086au
typedef int GLint;typedef unsigned GLenum;
typedef struct {unsigned internal;int render_target,depth,stencil,block_bytes;} d3d_format;
static d3d_format color={1,1,0,0,0},depth={2,0,1,1,0},stencil={3,0,1,1,0};
static const d3d_format *d3d_format_find(uint32_t f){return f==22?&color:f==77?&depth:f==75?&stencil:0;}
static void void_log(const char *s,...){(void)s;}
static unsigned queries,errors,init;
static void glGetInternalformativ(GLenum target,unsigned format,GLenum name,int count,int *out){
 assert(target==GL_RENDERBUFFER);++queries;if(name==GL_NUM_SAMPLE_COUNTS)*out=format==1?3:1;
 else if(format==1){assert(count==3);out[0]=4;out[1]=2;out[2]=1;}else{assert(count==1);out[0]=4;}}
static unsigned glGetError(void){unsigned e=errors;errors=0;return e;}
static uint32_t multisample_masks[256],args[7],memory[64];
#define ARG(i) args[i]
#define MEM32(a) memory[(a)/4]
static struct {unsigned max_texture;} d3d_gl_limits;
static int d3d_gl_init(void){++init;d3d_gl_limits.max_texture=8192;return 1;}
/* FUNCTIONS */
int main(void){
 find_multisample_modes();assert(queries==4);
 assert(d3d_gl_supports_samples(22,0)&&d3d_gl_supports_samples(22,2)&&d3d_gl_supports_samples(22,4));
 assert(!d3d_gl_supports_samples(22,1)&&!d3d_gl_supports_samples(22,8)&&!d3d_gl_supports_samples(22,32));
 assert(!d3d_gl_supports_samples(77,2)&&d3d_gl_supports_samples(77,4));
 assert(!d3d_gl_supports_samples(75,4)&&!d3d_gl_supports_samples(UINT32_MAX,4));
 args[2]=1;args[3]=22;args[5]=4;args[6]=4;assert(!check_samples()&&memory[1]==1&&init==1);
 args[4]=1;assert(!check_samples());args[4]=0;assert(!check_samples());
 args[5]=8;assert(check_samples()==D3DERR_NOTAVAILABLE&&!memory[1]);
 args[5]=4;args[1]=1;assert(check_samples()==D3DERR_NOTAVAILABLE&&!memory[1]);args[1]=0;
 MEM32(40)=22;MEM32(48)=4;MEM32(68)=1;MEM32(72)=77;
 for(int windowed=0;windowed<2;++windowed){MEM32(64)=windowed;assert(multisample_params_valid(32));}
 MEM32(52)=1;assert(!multisample_params_valid(32));MEM32(52)=0;
 MEM32(72)=75;assert(!multisample_params_valid(32));MEM32(48)=0;assert(multisample_params_valid(32));
 return 0;
}
'''.replace("/* FUNCTIONS */", functions))

    def test_build_gpu_probe(self):
        resource = (ROOT / "android/host/d3d9_resource.c").read_text(encoding="utf-8")
        gl = (ROOT / "android/host/d3d9_gl.c").read_text(encoding="utf-8")
        functions = "\n".join(method(resource, s) for s in ("static void run_surface_create(", "static void run_surface_free(", "GLuint d3d_surface_gl_texture("))
        functions += "\n" + "\n".join(method(gl, s) for s in ("static void attach(", "static GLenum depth_attachment(", "static fb_attachment attachment_of(", "static void put_attachment("))
        fixture = (ROOT / "tools/tests/msaa_probe.c").read_text(encoding="utf-8").replace("/* PRODUCTION */", functions)
        out = ROOT / "build/tests/multisample"
        out.mkdir(parents=True, exist_ok=True)
        source = out / "probe.c"
        source.write_text(fixture, encoding="utf-8")
        result = subprocess.run([str(CLANG), "--target=aarch64-linux-android30", "-std=gnu11", "-O2", "-g0", "-Iandroid/host",
                                 str(source), "-o", str(out / "msaa-probe"), "-lEGL", "-lGLESv3", "-lm"],
                                cwd=ROOT, capture_output=True, text=True, timeout=60)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == "__main__":
    unittest.main()
