"""Run the actual prepared-DDS loader, including single-level shadow textures."""
import os
from pathlib import Path
import subprocess
import unittest

from test_cube_surface_lifetime import function
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
typedef struct {unsigned fourcc;} d3d_native_format;
typedef struct {unsigned unused;} d3d_format;
typedef struct {uint32_t width,height,depth,mips,format,rtype,data_offset;const d3d_native_format *native;} dds_info;
typedef struct {uint32_t levels;} d3d_texture;
#define D3DX_DEFAULT_ 0xFFFFFFFFu
#define D3DX_DEFAULT_NONPOW2_ 0xFFFFFFFEu
#define D3DX_FROM_FILE_ 0xFFFFFFFDu
#define D3DPOOL_SYSTEMMEM 2
#define D3DPOOL_SCRATCH 3
#define D3DRTYPE_CUBETEXTURE 5
#define D3DRTYPE_TEXTURE 3
#define D3DXERR_INVALIDDATA 0x88760B59u
#define D3DERR_INVALIDCALL 0x8876086Cu
#define D3D_OK 0
#define D3DX_LOG(...) ((void)0)
#define VLOG(...) ((void)0)
static unsigned output[4],supported=1,fail_create,expected_levels,expected_skip,expected_faces,seen[6][7];
#define MEM32(a) output[(a)/4]
static int g_d3d_device;
static d3d_texture texture;
static d3d_format fmt;
static unsigned char data[40000];
static int d3d_native_supported(const d3d_native_format *n){return n&&supported;}
static const d3d_format *d3d_format_find(unsigned f){(void)f;return &fmt;}
static unsigned level_bytes(const d3d_format *f,unsigned w,unsigned h){(void)f;return ((w+3)/4)*((h+3)/4)*16;}
static unsigned d3d_native_size(const d3d_native_format *n,unsigned w,unsigned h){(void)n;return level_bytes(&fmt,w,h);}
static d3d_texture *d3d_texture_new_native(int dev,unsigned type,unsigned w,unsigned h,unsigned levels,unsigned usage,unsigned format,unsigned pool,const d3d_native_format*n){
 (void)dev;(void)usage;(void)format;(void)pool;(void)n;
 assert(type==(expected_faces==6?5u:3u)&&w==(64u>>expected_skip)&&h==w&&levels==expected_levels);
 texture.levels=levels;return fail_create?NULL:&texture;
}
static void d3d_texture_upload_native(d3d_texture*t,unsigned face,unsigned level,const void*p,unsigned size){
 assert(t==&texture&&face<expected_faces&&level<expected_levels);
 assert(*(const unsigned char*)p==face*16+level+expected_skip);
 assert(size==level_bytes(&fmt,64u>>(level+expected_skip),64u>>(level+expected_skip)));
 ++seen[face][level];
}
static unsigned d3d_wrap_texture(d3d_texture*t){assert(t==&texture);return 123;}
/* PRODUCTION */
int main(void){
 d3d_native_format native={1};dds_info info={64,64,1,7,1,3,128,&native};
 unsigned requests[]={1,2,7,20,0,D3DX_DEFAULT_,D3DX_FROM_FILE_};
 for(unsigned faces=1;faces<=6;faces+=5){
  unsigned offset=128;
  for(unsigned f=0;f<faces;++f)for(unsigned l=0;l<7;++l){
   unsigned dim=64u>>l;memset(data+offset,f*16+l,level_bytes(&fmt,dim,dim));offset+=level_bytes(&fmt,dim,dim);
  }
  for(unsigned skip=0;skip<3;++skip)for(unsigned resize=0;resize<2;++resize)for(unsigned r=0;r<sizeof requests/sizeof*requests;++r){
   expected_skip=skip+resize;expected_faces=faces;
   unsigned available=7-expected_skip,mips=requests[r];expected_levels=mips&&mips<available?mips:available;
   memset(seen,0,sizeof seen);output[0]=0;
   assert(load_native(data,offset,&info,64u>>expected_skip,64u>>expected_skip,mips,0,0,skip<<26,0,faces==6)==D3D_OK);
   assert(output[0]==123);
   for(unsigned f=0;f<6;++f)for(unsigned l=0;l<7;++l)assert(seen[f][l]==(f<faces&&l<expected_levels));
  }
 }
 expected_faces=1;expected_skip=0;expected_levels=1;fail_create=1;
 assert(load_native(data,sizeof data,&info,64,64,1,0,0,0,0,0)==D3DERR_INVALIDCALL);fail_create=0;
 for(unsigned pool=2;pool<=3;++pool)assert(load_native(data,sizeof data,&info,64,64,1,0,pool,0,0,0)==D3DXERR_INVALIDDATA);
 supported=0;assert(load_native(data,sizeof data,&info,64,64,1,0,0,0,0,0)==D3DXERR_INVALIDDATA);
 return 0;
}
'''


class NativeTextureMipTest(unittest.TestCase):
    def test_requested_chain_and_face_offsets(self):
        source = Path(os.environ.get("CRASHDAY_D3DX_SOURCE", ROOT / "android/host/d3dx9.c")).read_text(encoding="utf-8")
        actual = "\n".join(function(source, "static uint32_t " + name + "(") for name in ("resize_skip", "load_native"))
        out = ROOT / "build/tests/native-texture-mips" / str(os.getpid())
        out.mkdir(parents=True, exist_ok=True)
        (out / "probe.c").write_text(HARNESS.replace("/* PRODUCTION */", actual), encoding="utf-8")
        env, linker = environment("x64")
        for command in ([CLANG, "/nologo", "/O1", "/std:c11", "/c", "probe.c", "/Foprobe.obj"],
                        [linker, "/nologo", "probe.obj", "/OUT:probe.exe"], [out / "probe.exe"]):
            result = subprocess.run([str(x) for x in command], cwd=out, env=env, capture_output=True, timeout=60)
            self.assertEqual(result.returncode, 0, (result.stdout + result.stderr).decode(errors="replace"))


if __name__ == "__main__":
    unittest.main()
