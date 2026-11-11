"""Check production SDL mapping against the pinned original GUI projection."""
from pathlib import Path
import struct
import subprocess
import sys
import unittest

import pefile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from tests.host_environment import CLANG, environment

OUT = ROOT / "build/tests/input-geometry"

HARNESS = r'''
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
static uint8_t memory[0x900000];
#define MEM32(a) (*(uint32_t *)(memory+(a)))
#define MEMF(a) (*(float *)(memory+(a)))
static int void_vm_readable(uint32_t a,unsigned n){return a+n<sizeof memory;}
typedef union {float f32[4];uint32_t u32[4];uint64_t u64[2];} xmm_t;
static float sse_f32(uint32_t bits){union{uint32_t u;float f;}v={bits};return v.f;}
#define FK_EFLAGS 0
enum {CC_B,CC_BE,CC_AE};
static uint32_t SSE_COMI(float a,float b){return (a<b ? 1u:0u)|(a==b ? 64u:0u);}
static int recomp_cond(uint32_t k,uint32_t a,uint32_t b,int c){
    (void)k;(void)b;return c==CC_B ? !!(a&1):c==CC_BE ? !!(a&65):!(a&1);
}
typedef struct {uint32_t serial,x,y;} crashday_motion_event;
static crashday_motion_event motion_queue[1];static int motion_head;
static float original_x(uint32_t x,float aspect){
    uint32_t ecx=0x1000,esi=0x2000;xmm_t _xmm[1];
    MEMF(ecx+0xE4)=aspect;MEM32(esi)=0;
    MEMF(esi)=(float)x;
    /* ORIGINAL */
    return MEMF(esi);
}
static void original_clip(float *x,float *y,float upper_x,float upper_y){
    uint32_t esi=0x3000,_flag_a=0,_flag_b=0,_flag_k=0,_cf=0;
    xmm_t _xmm[6]={0};MEMF(esi)=*x;MEMF(esi+4)=*y;
    _xmm[1].f32[0]=upper_x;_xmm[2].f32[0]=upper_y;
    /* CLIP */
L_00491FE3:
L_00491FFF:
    *x=MEMF(esi);*y=MEMF(esi+4);
}
static unsigned cases;
static void check(int screen_w,int screen_h,int px,int py,float gui_aspect){
    motion_queue[0]=(crashday_motion_event){1,(uint32_t)px,(uint32_t)py};
    MEM32(0x870260)=0x1000;MEMF(0x10E4)=gui_aspect;
    /* ACTUAL */
    uint32_t point[]={0,(uint32_t)x,(uint32_t)y};
    float ui_x=original_x(point[1],gui_aspect),ui_y=(float)point[2];
    float scale_x=(float)screen_w/640.0f/gui_aspect,scale_y=(float)screen_h/480.0f;
    float upper_x=(float)screen_w/scale_x-14.0f,upper_y=(float)screen_h/scale_y-14.0f;
    double expected_x=fmin((double)px/screen_w*640.0*gui_aspect,upper_x);
    double expected_y=fmin((double)py/screen_h*480.0,upper_y);
    /* SDL stores integers; original multiplication adds at most one float ULP. */
    assert(fabs(ui_x-expected_x)<=gui_aspect+.001 && fabs(ui_y-expected_y)<1.001);
    assert(point[1]<640 && point[2]<480);
    float clipped_x=ui_x,clipped_y=ui_y;
    original_clip(&clipped_x,&clipped_y,upper_x,upper_y);
    assert(clipped_x==ui_x && clipped_y==ui_y);
    ++cases;
}
int main(void){
    const int sizes[][2]={{16,16},{32,24},{320,240},{640,480},{800,600},{1280,720},{1920,1080},{2340,1080},
        {2424,1080},{1170,540},{1212,540},{2560,1080}};
    for(unsigned i=0;i<sizeof sizes/sizeof *sizes;++i){
        int w=sizes[i][0],h=sizes[i][1];
        const float aspects[]={1,1.3333333f,(float)w/h/(4.0f/3.0f)};
        for(unsigned a=0;a<3;++a){
            check(w,h,0,0,aspects[a]);check(w,h,w/2,h/2,aspects[a]);
            check(w,h,w/4,h/4,aspects[a]);check(w,h,w*3/4,h*3/4,aspects[a]);
            check(w,h,w-1,0,aspects[a]);check(w,h,0,h-1,aspects[a]);
            check(w,h,w-1,h-1,aspects[a]);
        }
    }
    printf("PASS original GUI geometry: %u resolution/aspect/position cases\n",cases);
    return 0;
}
'''


class InputGeometryTest(unittest.TestCase):
    def test_production_inverse_projection(self):
        with pefile.PE(str(ROOT / "generated/input/crashday.exe"), fast_load=True) as pe:
            base = pe.OPTIONAL_HEADER.ImageBase
            for address, expected in ((0x8096DC, 640.0), (0x8096B4, 480.0)):
                self.assertEqual(struct.unpack("<f", pe.get_data(address-base, 4))[0], expected)
        projection = (ROOT / "generated/crashday/functions_0041.c").read_text(encoding="utf-8")
        self.assertIn("divss xmm0, dword ptr [0x8096dc]", projection)
        self.assertIn("divss xmm0, dword ptr [0x8096b4]", projection)
        original = (ROOT / "generated/crashday/functions_0010.c").read_text(encoding="utf-8")
        addresses = ("0x00491F24:", "0x00491F2C:", "0x00491F36:")
        lines = [next(line for line in original.splitlines() if marker in line) for marker in addresses]
        clip = original[original.index("L_00491F88:"):original.index("L_00491FE3:")]
        source = (ROOT / "android/host/input.c").read_text(encoding="utf-8")
        start = source.index("        crashday_motion_event event = motion_queue[motion_head];")
        end = source.index("        uint32_t point[]", start)
        actual = source[start:end]
        OUT.mkdir(parents=True, exist_ok=True)
        (OUT / "probe.c").write_text(HARNESS.replace("/* ACTUAL */", actual).replace("/* ORIGINAL */", "\n".join(lines)).replace("/* CLIP */", clip), encoding="utf-8")
        env, linker = environment("x64")
        for command in ([CLANG, "/nologo", "/O1", "/std:c11", "/c", "probe.c", "/Foprobe.obj"],
                        [linker, "/nologo", "probe.obj", "/OUT:probe.exe"], [OUT / "probe.exe"]):
            result = subprocess.run([str(x) for x in command], cwd=OUT, env=env, capture_output=True, timeout=60)
            self.assertEqual(result.returncode, 0, (result.stdout+result.stderr).decode(errors="replace"))


if __name__ == "__main__":
    unittest.main()
