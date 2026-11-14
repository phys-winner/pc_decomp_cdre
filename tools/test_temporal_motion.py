"""Execute the production rigid-object history, including reused matrix owners."""
from pathlib import Path
import subprocess
import unittest
from test_menu_gestures import method
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]


class TemporalMotionTest(unittest.TestCase):
    def test_temporal_pass_routing(self):
        source = (ROOT / "android/host/d3d9_gl.c").read_text(encoding="utf-8")
        functions = "\n".join(method(source, signature) for signature in (
            "static void run_ui_pass(void *args)", "void d3d_gl_ui_pass(int enabled)"))
        harness = r'''
#include <assert.h>
#include <stddef.h>
typedef int d3d_device;
typedef struct {int enabled,temporal_scene;} ui_pass_args;
static int device,temporal_requested,temporal_scene_allowed,scene,executing,queries,calls,last;
static d3d_device *g_d3d_device=&device;
static int d3d_rt_executing(void){return executing;}
static int crashday_ui_scene_current(void){++queries;return scene;}
static void gl_ui_pass(int enabled){++calls;last=enabled;}
static void d3d_rt_sync_state(d3d_device *d){assert(d==&device);}
static void d3d_rt_call(void(*f)(void *),const void *a,size_t size){assert(size==sizeof(ui_pass_args));f((void *)a);}
/* FUNCTIONS */
int main(void){
 temporal_requested=1;
 int scenes[]={0,5,7,9,13,14,20};
 for(unsigned i=0;i<sizeof scenes/sizeof scenes[0];++i){scene=scenes[i];d3d_gl_ui_pass(0);assert(temporal_scene_allowed==(scene==9||scene==14||scene==20));assert(last==0);d3d_gl_ui_pass(1);assert(last==1);}
 int before=queries;temporal_requested=0;d3d_gl_ui_pass(1);assert(queries==before&&!temporal_scene_allowed);
 executing=1;temporal_requested=1;d3d_gl_ui_pass(0);assert(queries==before&&last==0);
 executing=0;g_d3d_device=NULL;before=calls;d3d_gl_ui_pass(1);assert(calls==before);
 return 0;
}
'''.replace("/* FUNCTIONS */", functions)
        self.compile_probe(harness, "routing")

    def compile_probe(self, harness, name):
        out = ROOT / "build/tests/temporal-motion" / name
        out.mkdir(parents=True, exist_ok=True)
        (out / "probe.c").write_text(harness, encoding="utf-8")
        env, linker = environment("x64")
        for command in ([CLANG, "/nologo", "/O1", "/std:c11", "/I" + str(ROOT / "android/host"), "/c", "probe.c", "/Foprobe.obj"],
                        [linker, "/nologo", "probe.obj", "/OUT:probe.exe"], [out / "probe.exe"]):
            result = subprocess.run([str(v) for v in command], cwd=out, env=env, capture_output=True, timeout=60)
            self.assertEqual(result.returncode, 0, (result.stdout + result.stderr).decode(errors="replace"))

    def test_object_history(self):
        production = (ROOT / "android/host/d3d9_ff.c").read_text(encoding="utf-8")
        harness = r'''
#include <assert.h>
#include <stdint.h>
#include <string.h>
typedef struct {struct {float transforms[512][16];void *streams[16];uint32_t world_identity,stream_offset[16];} st;uint32_t frame;} d3d_device;
static void void_input_horizon(float *x,float *y){*x=1;*y=0;}
/* MUL */
#include "d3d9_motion.inc"
int main(void){
 d3d_device d={0};float previous[16],roll[2];
 for(int i=0;i<4;++i)d.st.transforms[2][i*5]=d.st.transforms[3][i*5]=d.st.transforms[256][i*5]=1;
 d.st.streams[0]=(void *)0x1000;d.st.world_identity=0x2000;d.frame=10;
 motion_reset();assert(motion_previous(&d,previous,roll)==1);
 for(int i=11;i<14;++i){d.frame=i;d.st.transforms[256][12]=(float)(i-10);float r=motion_previous(&d,previous,roll);assert(previous[12]==i-11);if(i==13)assert(r==0);}
 /* A second car with the same geometry has a separate previous transform. */
 d.st.world_identity=0x3000;d.st.transforms[256][12]=100;assert(motion_previous(&d,previous,roll)==1);
 d.frame=14;d.st.world_identity=0x2000;d.st.transforms[256][12]=4;assert(motion_previous(&d,previous,roll)==0&&previous[12]==3);
 d.st.world_identity=0x3000;d.st.transforms[256][12]=102;motion_previous(&d,previous,roll);assert(previous[12]==100);
 /* A temporary matrix reused for a different object within a frame rejects history. */
 d.st.transforms[256][12]=200;assert(motion_previous(&d,previous,roll)==1);
 d.frame=15;assert(motion_previous(&d,previous,roll)==1);
 d.frame=20;assert(motion_previous(&d,previous,roll)==1&&previous[12]==200);
 motion_reset();assert(motion_previous(&d,previous,roll)==1);
 return 0;
}
'''.replace("/* MUL */", method(production, "static void mul(const float *a, const float *b, float *r)"))
        self.compile_probe(harness, "objects")


if __name__ == "__main__":
    unittest.main()
