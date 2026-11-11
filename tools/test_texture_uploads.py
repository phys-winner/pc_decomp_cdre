"""Run production ATC selection/uploads and UpdateSurface with deterministic GL/queue boundaries."""
import os
from pathlib import Path
import re
import subprocess
import unittest

from test_cube_surface_lifetime import function
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/texture-uploads"
HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
typedef unsigned GLenum,GLuint;typedef int GLint,GLsizei;
#define GL_TEXTURE_2D 0xDE1
#define GL_TEXTURE_CUBE_MAP 0x8513
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#define GL_TEXTURE_3D 0x806F
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 1
#define GL_COMPRESSED_TEXTURE_FORMATS 2
#define GL_TEXTURE_MAX_LEVEL 3
#define GL_UNPACK_ALIGNMENT 4
#define D3DUSAGE_RENDERTARGET 1
#define D3DUSAGE_DEPTHSTENCIL 2
#define D3DUSAGE_AUTOGENMIPMAP 4
#define D3DPOOL_SYSTEMMEM 2
#define D3DPOOL_DEFAULT 0
#define D3DRTYPE_CUBETEXTURE 5
#define D3DERR_INVALIDCALL 0x8876086Cu
#define D3D_OK 0
#define VOID_PERF_TEXTURE 0
#define CONV_DXT1 1
#define CONV_DXT3 2
#define CONV_DXT5 3
#define FOURCC(a,b,c,d) ((uint32_t)(a)|((uint32_t)(b)<<8)|((uint32_t)(c)<<16)|((uint32_t)(d)<<24))
typedef int pthread_once_t;
#define PTHREAD_ONCE_INIT 0
static void pthread_once(pthread_once_t*p,void(*fn)(void)){if(!*p){fn();*p=1;}}
#define F_OK 0
static int access(const char*p,int f){(void)p;(void)f;return -1;}
typedef struct {uint32_t d3d,bits,block_bytes;GLenum internal,format,type;int conv,depth;} d3d_format;
typedef struct {uint32_t fourcc;GLenum internal;uint32_t block_w,block_h,block_bytes;int astc;} d3d_native_format;
typedef struct {const d3d_format*fmt;uint32_t width,height,depth,levels,usage,format,target,rtype,gl;int mips_dirty,has_gl,native_lock_logged;uint32_t*sysmem;const d3d_native_format*native,*rt_native;} d3d_texture;
typedef struct {const d3d_format*fmt;uint32_t width,height,format,pool,multisample,locked,sysmem,face,level,pitch,usage,lock_mem,gl;int has_gl;d3d_texture*container;} d3d_surface;
#define TEX_RT(t) (t)
#define SURF_RT(s) (s)
static uint8_t guest[4096];
#define GPTR(a) (guest+(a))
#define MEM32(a) (*(uint32_t*)(guest+(a)))
static GLuint next_gl=1,bound;static GLenum internals[256],gl_error;
static int caps=3,probe_failure,compressed_calls,linear_calls,conversions,uploads;
static uint32_t seen_x,seen_y,seen_w,seen_h,seen_pitch,seen_level;static GLenum seen_target;
static uint8_t uploaded[2048],converted[2048];static size_t uploaded_size;
static const char*void_data_dir(void){return "nonexistent-test-profile";}
static void void_log(const char*f,...){(void)f;}
static void void_fatal(const char*f,...){(void)f;abort();}
static uint64_t void_perf_now_ns(void){return 1;}
static void void_perf_add(int a,uint64_t b,uint64_t c){(void)a;(void)b;(void)c;}
static void d3d_gl_upload_unit(void){}
static void d3d_gl_forget_texture(GLuint t){(void)t;}
static void glGetIntegerv(GLenum name,GLint*p){if(name==GL_NUM_COMPRESSED_TEXTURE_FORMATS)*p=caps==3?2:0;else{p[0]=0x8C93;p[1]=0x87EE;}}
static void glGenTextures(int n,GLuint*p){assert(n==1&&next_gl<256);*p=next_gl++;}
static void glBindTexture(GLenum target,GLuint t){(void)target;bound=t;}
static void glDeleteTextures(int n,const GLuint*p){assert(n==1);internals[*p]=0;}
static void glTexStorage2D(GLenum target,int levels,GLenum internal,int w,int h){(void)target;(void)levels;(void)w;(void)h;internals[bound]=internal;if(probe_failure&&(internal==0x8C93||internal==0x87EE))gl_error=0x502;}
static void glTexStorage3D(GLenum t,int l,GLenum f,int w,int h,int d){(void)d;glTexStorage2D(t,l,f,w,h);}
static void glTexParameteri(GLenum t,GLenum p,int v){(void)t;(void)p;(void)v;}
static void glPixelStorei(GLenum p,int v){(void)p;(void)v;}
static GLenum glGetError(void){GLenum result=gl_error;gl_error=0;return result;}
static void apply_swizzle(GLenum t,const d3d_format*f,uint32_t u){(void)t;(void)f;(void)u;}
static uint32_t d3d_format_pitch(const d3d_format*f,uint32_t w){return f->block_bytes?((w+3)/4)*f->block_bytes:w*(f->bits/8);}
static uint32_t d3d_format_rows(const d3d_format*f,uint32_t h){return f->block_bytes?(h+3)/4:h;}
static GLenum face_target(d3d_texture*t,uint32_t face){return t->target==GL_TEXTURE_CUBE_MAP?GL_TEXTURE_CUBE_MAP_POSITIVE_X+face:t->target;}
static void capture(GLenum target,int level,int x,int y,int w,int h,const void*data,size_t bytes){assert(bytes<=sizeof uploaded);seen_target=target;seen_level=level;seen_x=x;seen_y=y;seen_w=w;seen_h=h;uploaded_size=bytes;memcpy(uploaded,data,bytes);++uploads;}
static void glCompressedTexSubImage2D(GLenum target,int level,int x,int y,int w,int h,GLenum format,int size,const void*data){assert(internals[bound]==format&&size==((w+3)/4)*((h+3)/4)*16);++compressed_calls;capture(target,level,x,y,w,h,data,(size_t)size);}
static const void*d3d_format_convert(const d3d_format*f,const uint8_t*src,uint32_t w,uint32_t h,uint32_t pitch,void**owned,size_t*bytes,int rt){(void)rt;*owned=NULL;seen_pitch=pitch;++conversions;uint32_t row=d3d_format_pitch(f,w),rows=d3d_format_rows(f,h);*bytes=(size_t)row*rows;assert(*bytes<=sizeof converted);for(uint32_t y=0;y<rows;++y)memcpy(converted+y*row,src+y*pitch,row);return converted;}
static void glTexSubImage2D(GLenum target,int level,int x,int y,int w,int h,GLenum format,GLenum type,const void*data){(void)format;(void)type;++linear_calls;capture(target,level,x,y,w,h,data,(size_t)w*h*4);}
static void glTexSubImage3D(GLenum t,int l,int x,int y,int z,int w,int h,int d,GLenum f,GLenum ty,const void*p){(void)z;(void)d;glTexSubImage2D(t,l,x,y,w,h,f,ty,p);}
static uint8_t queue[4096];static void(*queued)(void*);static int queue_records;
static void*d3d_rt_begin(void(*fn)(void*),uint32_t size){assert(size<=sizeof queue);++queue_records;queued=fn;return queue;}
static void d3d_rt_commit(void){queued(queue);}
/* ATC */
/* UPLOADS */
/* SURFACES */
static void d3d_surface_upload(d3d_surface*s){surface_upload_data(s,0,0,s->width,s->height,GPTR(s->lock_mem),s->pitch);}
/* UPDATE */
static const d3d_format bc1={0,4,8,0x8058,0,0,CONV_DXT1,0},bc2={0,8,16,0x8058,0,0,CONV_DXT3,0},bc3={0,8,16,0x8058,0,0,CONV_DXT5,0},rgba={21,32,0,0x8058,0,0,0,0};
static d3d_texture texture(const d3d_format*f,GLenum target){d3d_texture t={0};t.fmt=f;t.width=t.height=8;t.depth=1;t.levels=4;t.target=target;t.has_gl=1;return t;}
static void create(d3d_texture*t){run_texture_create(&t);}
int main(void){
 d3d_texture t=texture(&bc2,GL_TEXTURE_2D);caps=0;create(&t);assert(!t.rt_native&&internals[t.gl]==0x8058);
 caps=3;atc_state=0;probe_failure=1;t=texture(&bc2,GL_TEXTURE_2D);create(&t);assert(!t.rt_native);
 probe_failure=0;atc_state=0;t=texture(&bc2,GL_TEXTURE_2D);create(&t);assert(t.rt_native==&atc_formats[0]&&!t.native&&internals[t.gl]==0x8C93);
 for(int kind=0;kind<2;++kind)for(int cube=0;cube<2;++cube){
  t=texture(kind?&bc3:&bc2,cube?GL_TEXTURE_CUBE_MAP:GL_TEXTURE_2D);create(&t);
  uint8_t source[96];for(unsigned i=0;i<sizeof source;++i)source[i]=(uint8_t)(i*13);int before=conversions;
  d3d_texture_upload_rect(&t,cube?5:0,0,0,0,5,5,source,48);assert(conversions==before&&uploaded_size==64);
  for(unsigned y=0;y<2;++y)for(unsigned x=0;x<2;++x)assert(!memcmp(uploaded+(y*2+x)*16,source+y*48+x*16,8));
  assert(seen_target==(cube?GL_TEXTURE_CUBE_MAP_POSITIVE_X+5:GL_TEXTURE_2D));
  d3d_texture_upload_rect(&t,cube?2:0,3,0,0,1,1,source,16);assert(uploaded_size==16&&seen_level==3&&!memcmp(uploaded,source,8));
  d3d_texture_upload_rect(&t,0,0,4,4,4,4,source,48);assert(seen_x==4&&seen_y==4&&uploaded_size==16);
 }
 t=texture(&bc1,GL_TEXTURE_2D);create(&t);assert(!t.rt_native&&internals[t.gl]==0x8058);
 for(unsigned usage=1;usage<=4;usage*=2){t=texture(&bc2,GL_TEXTURE_2D);t.usage=usage;create(&t);assert(!t.rt_native);}
 t=texture(&bc3,GL_TEXTURE_3D);create(&t);assert(!t.rt_native);
 const d3d_native_format prepared={0,0x93B0,4,4,16,1};t=texture(&bc3,GL_TEXTURE_2D);t.native=t.rt_native=&prepared;create(&t);assert(t.rt_native==&prepared&&internals[t.gl]==0x93B0);
 storage_args storage={&t,NULL};run_set_storage(&storage);assert(t.rt_native==&atc_formats[1]&&internals[t.gl]==0x87EE);
 uint8_t rejected[16]={0};assert(d3d_atc_transcode(CONV_DXT1,rejected,4,4,8,rejected)==0);
 /* Different pitches and subrect offsets: source rows have sentinel padding. */
 d3d_surface src={0},dst={0};src.fmt=dst.fmt=&rgba;src.format=dst.format=21;src.pool=D3DPOOL_SYSTEMMEM;src.width=4;src.height=3;src.pitch=24;src.sysmem=256;
 dst.pool=D3DPOOL_DEFAULT;dst.width=8;dst.height=8;dst.pitch=32;dst.has_gl=1;
 for(unsigned i=0;i<72;++i)guest[256+i]=(uint8_t)(i+1);
 MEM32(16)=1;MEM32(20)=1;MEM32(24)=3;MEM32(28)=3;MEM32(32)=4;MEM32(36)=2;
 (void)d3d_update_surface(&src,16,&dst,32);
 assert(seen_x==4&&seen_y==2&&seen_w==2&&seen_h==2&&seen_pitch==24&&uploaded_size==16);
 assert(!memcmp(uploaded,guest+256+28,8)&&!memcmp(uploaded+8,guest+256+52,8));
 int previous=uploads;MEM32(16)=UINT32_MAX;(void)d3d_update_surface(&src,16,&dst,32);assert(uploads==previous);MEM32(16)=1;
 MEM32(32)=7;(void)d3d_update_surface(&src,16,&dst,32);assert(uploads==previous);MEM32(32)=4;
 dst.format=22;(void)d3d_update_surface(&src,16,&dst,32);assert(uploads==previous);dst.format=21;
 src.locked=1;(void)d3d_update_surface(&src,16,&dst,32);assert(uploads==previous);src.locked=0;
 src.pool=D3DPOOL_DEFAULT;(void)d3d_update_surface(&src,16,&dst,32);assert(uploads==previous);src.pool=D3DPOOL_SYSTEMMEM;
 /* A system texture face uses its original DXT shadow and padded source pitch. */
 uint32_t shadow[8]={0};shadow[5]=256;d3d_texture system=texture(&bc2,GL_TEXTURE_CUBE_MAP);system.sysmem=shadow;system.levels=2;
 src.fmt=dst.fmt=&bc2;src.format=dst.format=FOURCC('D','X','T','3');src.width=src.height=8;src.pitch=48;src.sysmem=0;src.container=&system;src.face=2;src.level=1;
 t=texture(&bc2,GL_TEXTURE_CUBE_MAP);create(&t);dst.container=&t;dst.face=3;dst.level=0;
 MEM32(16)=4;MEM32(20)=4;MEM32(24)=8;MEM32(28)=8;MEM32(32)=0;MEM32(36)=4;
 (void)d3d_update_surface(&src,16,&dst,32);assert(seen_x==0&&seen_y==4&&seen_target==GL_TEXTURE_CUBE_MAP_POSITIVE_X+3&&!memcmp(uploaded,guest+256+64,8));
 previous=uploads;MEM32(16)=1;(void)d3d_update_surface(&src,16,&dst,32);assert(uploads==previous);
 /* Prepared blocks have no editable DXT backing: reject both partial and full writes,
    through the actual public upload/record path, before any queue or GL mutation. */
 const d3d_native_format native_formats[]={{0,0x93B0,4,4,16,1},{0,0x9278,4,4,16,0}};
 for(int kind=0;kind<2;++kind)for(int format=0;format<2;++format)for(int cube=0;cube<2;++cube){
  const d3d_format*f=kind?&bc3:&bc2;
  t=texture(f,cube?GL_TEXTURE_CUBE_MAP:GL_TEXTURE_2D);t.native=t.rt_native=&native_formats[format];create(&t);
  src=(d3d_surface){0};dst=(d3d_surface){0};src.fmt=dst.fmt=f;src.format=dst.format=kind?FOURCC('D','X','T','5'):FOURCC('D','X','T','3');
  src.pool=D3DPOOL_SYSTEMMEM;src.width=src.height=8;src.pitch=32;src.sysmem=256;
  dst.pool=D3DPOOL_DEFAULT;dst.width=dst.height=8;dst.pitch=32;dst.container=&t;dst.face=cube?4:0;
  /* A prepared upload itself remains functional; only UpdateSurface's DXT write is rejected. */
  int native_before=uploads;d3d_texture_upload_rect(&t,dst.face,0,0,0,8,8,guest+512,32);
  assert(uploads==native_before+1&&uploaded_size==64&&!memcmp(uploaded,guest+512,64));
  int before_uploads=uploads,before_records=queue_records;GLuint before_gl=t.gl;
  MEM32(16)=0;MEM32(20)=0;MEM32(24)=4;MEM32(28)=4;MEM32(32)=4;MEM32(36)=4;
  uint32_t partial=UPDATE_RESULT(&src,16,&dst,32),full=UPDATE_RESULT(&src,0,&dst,0);
  if(partial!=D3DERR_INVALIDCALL||full!=D3DERR_INVALIDCALL)fprintf(stderr,"prepared writes: partial=%08x full=%08x queued=%d uploaded=%d\n",partial,full,queue_records-before_records,uploads-before_uploads);
  assert(partial==D3DERR_INVALIDCALL&&full==D3DERR_INVALIDCALL);
  assert(uploads==before_uploads&&queue_records==before_records&&t.native==&native_formats[format]&&t.rt_native==t.native&&t.gl==before_gl);
 }
 puts("PASS production texture uploads: ATC gates/formats/probe, BC1 exclusion, prepared precedence/write rejection, padded rows/cube/tail mips, UpdateSurface rectangles/pitch/bounds");
 return 0;
}
'''


class TextureUploadsTest(unittest.TestCase):
    def test_production_uploads(self):
        source = Path(os.environ.get("CRASHDAY_RESOURCE_SOURCE", ROOT / "android/host/d3d9_resource.c")).read_text(encoding="utf-8")
        atc = (ROOT / "android/host/d3d9_atc.inc").read_text(encoding="utf-8")
        atc = re.sub(r"(?m)^#include.*\n", "", atc)
        uploads = ["typedef struct { d3d_texture *t; const d3d_native_format *native; } storage_args;",
                   "typedef struct { d3d_texture *t; uint32_t face, level, x, y, w, h, pitch; } texture_upload_args;",
                   "typedef struct { d3d_texture *t; uint32_t face, level, w, h, size; GLenum internal; } native_upload_args;"]
        uploads += [function((ROOT / "android/host/d3d9_format.c").read_text(encoding="utf-8"), "uint32_t d3d_native_size(")]
        uploads += [function(source, s) for s in ["static void level_dims(", "static void run_set_storage(", "static void run_texture_create(", "static void run_native_upload(", "static void record_native_upload(", "static void run_texture_upload(", "void d3d_texture_upload_rect("]]
        surfaces = ["typedef struct { d3d_surface *s; uint32_t x,y,w,h,pitch; } surface_upload_args;"]
        surfaces += [function(source, s) for s in ["static void run_surface_upload(", "static void surface_upload_data("]]
        # Optional preimage is only the old buggy UpdateSurface, against the same queue boundary.
        old = os.environ.get("CRASHDAY_UPDATE_SOURCE")
        update_source = Path(old).read_text(encoding="utf-8") if old else source
        signature = "uint32_t d3d_update_surface(" if "uint32_t d3d_update_surface(" in update_source else "void d3d_update_surface("
        result_macro = "#define UPDATE_RESULT(...) " + ("d3d_update_surface(__VA_ARGS__)" if signature.startswith("uint32_t") else "(d3d_update_surface(__VA_ARGS__), D3D_OK)")
        text = HARNESS.replace("/* ATC */", atc).replace("/* UPLOADS */", "\n".join(uploads)).replace("/* SURFACES */", "\n".join(surfaces)).replace("/* UPDATE */", function(update_source, signature) + "\n" + result_macro)
        OUT.mkdir(parents=True, exist_ok=True)
        (OUT / "probe.c").write_text(text, encoding="utf-8")
        env, linker = environment("x64")
        for cmd in [[str(CLANG), "/nologo", "/std:c11", "/O2", "/c", "probe.c", "/Foprobe.obj"],
                    [str(linker), "/nologo", "probe.obj", "/OUT:probe.exe"], [str(OUT / "probe.exe")]]:
            result = subprocess.run(cmd, cwd=OUT, env=env, capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())


if __name__ == "__main__":
    unittest.main()
