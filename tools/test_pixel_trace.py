"""QA pixel probe parsing, present-space mapping, and GL read-state preservation."""
import subprocess
import unittest
from pathlib import Path

from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
typedef unsigned GLenum,GLuint;
typedef int GLint;
enum {GL_READ_FRAMEBUFFER_BINDING,GL_DRAW_FRAMEBUFFER_BINDING,GL_READ_BUFFER,
      GL_READ_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_RGBA,GL_UNSIGNED_BYTE,GL_NO_ERROR=0};
typedef struct {int depth,is_float;} fmt;
typedef struct {uint32_t width,height;fmt *fmt;uint32_t multisample;} d3d_surface;
typedef struct {uint32_t frame;d3d_surface *backbuffer,*rt[1];} d3d_device;
static uint32_t trace_pixel[4],trace_pixel_frame;
static unsigned trace_pixel_draws;
static d3d_surface *scaled;
static GLint read_fb=7,draw_fb=9,read_buffers[16];
static unsigned reads;static GLint read_x,read_y;
static d3d_surface *ui_surface(d3d_device*d,d3d_surface*s){(void)d;return scaled?scaled:s;}
static void glGetIntegerv(GLenum e,GLint*v){*v=e==GL_READ_FRAMEBUFFER_BINDING?read_fb:e==GL_DRAW_FRAMEBUFFER_BINDING?draw_fb:read_buffers[read_fb];}
static void glBindFramebuffer(GLenum e,GLuint v){assert(e==GL_READ_FRAMEBUFFER);read_fb=(GLint)v;}
static void glReadBuffer(GLenum e){read_buffers[read_fb]=(GLint)e;}
static void glReadPixels(GLint x,GLint y,int w,int h,GLenum f,GLenum t,void*out){
 assert(w==1&&h==1&&f==GL_RGBA&&t==GL_UNSIGNED_BYTE&&read_fb==draw_fb);
 read_x=x;read_y=y;++reads;memcpy(out,"ABCD",4);
}
static GLenum glGetError(void){return GL_NO_ERROR;}
static int d3d_gl_read_rgba(d3d_surface*s,const uint32_t*r,float*out){
 assert(s->multisample&&r[2]==r[0]+1&&r[3]==r[1]+1);++reads;
 out[0]=0;out[1]=.5f;out[2]=out[3]=1;return 1;
}
#define void_log(...) ((void)0)
/* ACTUAL */
int main(void){
 uint32_t p[4]={99,99,99,99},xy[2];
 assert(trace_pixel_parse(" 1200 540 2400 1080\n",p));
 assert(p[0]==1200&&p[1]==540&&p[2]==2400&&p[3]==1080);
 const char*bad[]={"-1 2 2400 1080","1 2 0 1080","2400 2 2400 1080","1 1080 2400 1080",
 "1 2 2400","1 2 2400 1080 trailing","1 2 2400 1080 5","1 2 2147483648 1080","1x 2 3 4","","+1 2 3 4"};
 for(unsigned i=0;i<sizeof(bad)/sizeof(*bad);++i){uint32_t old[4];memcpy(old,p,sizeof p);assert(!trace_pixel_parse(bad[i],p));assert(!memcmp(old,p,sizeof p));}
 assert(trace_pixel_map(p,2400,1080,1200,540,xy)&&xy[0]==600&&xy[1]==270);
 p[0]=0;p[1]=0;assert(trace_pixel_map(p,2400,1080,2400,1080,xy)&&!xy[0]&&!xy[1]);
 p[0]=2399;p[1]=1079;assert(trace_pixel_map(p,2400,1080,1200,540,xy)&&xy[0]==1199&&xy[1]==539);
 /* 4:3 image on a wide screen: black left/right bars are not image pixels. */
 uint32_t wide[4]={0,0,2400,1080};assert(!trace_pixel_map(wide,800,600,800,600,xy));
 wide[0]=480;assert(trace_pixel_map(wide,800,600,800,600,xy)&&!xy[0]&&!xy[1]);
 wide[0]=1919;wide[1]=1079;assert(trace_pixel_map(wide,800,600,800,600,xy)&&xy[0]==799&&xy[1]==599);
 /* Odd vertical padding: present's bottom=0, top=1, not the reverse. */
 uint32_t odd[4]={0,0,10,11};assert(!trace_pixel_map(odd,10,10,10,10,xy));
 odd[1]=1;assert(trace_pixel_map(odd,10,10,10,10,xy)&&!xy[1]);
 assert(!trace_pixel_map(odd,0,10,10,10,xy));
 fmt format={0,0};d3d_surface bb={2400,1080,&format},small={1200,540,&format},other=bb;
 d3d_device d={42,&bb,{&bb}};uint8_t rgba[4];
 trace_pixel_frame=42;trace_pixel[0]=0;trace_pixel[1]=0;trace_pixel[2]=2400;trace_pixel[3]=1080;
 read_buffers[7]=71;read_buffers[9]=91;scaled=&small;
 assert(trace_pixel_read(&d,rgba,xy));assert(reads==1&&read_x==0&&read_y==0&&!memcmp(rgba,"ABCD",4));
 assert(read_fb==7&&draw_fb==9&&read_buffers[7]==71&&read_buffers[9]==91);
 trace_pixel[1]=1079;assert(trace_pixel_read(&d,rgba,xy)&&read_y==539);
 small.multisample=4;assert(trace_pixel_read(&d,rgba,xy)&&rgba[0]==0&&rgba[1]==128&&rgba[2]==255&&rgba[3]==255);
 assert(read_fb==7&&draw_fb==9&&read_buffers[7]==71&&read_buffers[9]==91);small.multisample=0;
 d.rt[0]=&other;assert(!trace_pixel_read(&d,rgba,xy));d.rt[0]=&bb;
 d.frame=43;assert(!trace_pixel_read(&d,rgba,xy));d.frame=42;
 format.depth=1;assert(!trace_pixel_read(&d,rgba,xy));format.depth=0;
 format.is_float=1;assert(!trace_pixel_read(&d,rgba,xy));format.is_float=0;
 trace_pixel_draws=4096;assert(!trace_pixel_read(&d,rgba,xy));assert(reads==3);
 puts("PASS pixel trace: strict marker, scaling/letterbox/origin, one-pixel read, bindings, target/frame/cap guards");
}
'''


class PixelTraceTest(unittest.TestCase):
    def test_production_helpers(self):
        source = (ROOT / "android/host/d3d9_gl.c").read_text(encoding="utf-8")
        parse = source[source.index("static int trace_pixel_parse("):source.index("static void run_request_pixel_trace(")]
        read = source[source.index("static int trace_pixel_read("):source.index("static void ui_scissor(")]
        out = ROOT / "build/tests/pixel-trace"
        out.mkdir(parents=True, exist_ok=True)
        (out / "probe.c").write_text(HARNESS.replace("/* ACTUAL */", parse + read), encoding="utf-8")
        env, linker = environment("x64")
        for command in ([str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc", "/c", "probe.c", "/Foprobe.obj"],
                        [str(linker), "/nologo", "probe.obj", "/OUT:probe.exe"], [str(out / "probe.exe")]):
            p = subprocess.run(command, cwd=out, env=env, capture_output=True, text=True)
            self.assertEqual(p.returncode, 0, p.stdout + p.stderr)
        print(p.stdout.strip())


if __name__ == "__main__":
    unittest.main()
