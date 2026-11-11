"""Execute editor/replay gestures and the production native camera/HUD helpers."""
from pathlib import Path
import re
import subprocess
import unittest

from test_driving_controls import HARNESS as ANDROID_FIXTURES
from test_menu_gestures import method
import test_menu_layout

ROOT = Path(__file__).resolve().parents[1]


class SceneControlsTest(unittest.TestCase):
    run_probe = test_menu_layout.MenuLayoutTest.run_probe

    def test_camera_controller_keeps_driving_arrows_neutral(self):
        source = (ROOT / "android/host/input.c").read_text(encoding="utf-8")
        body = method(source, "void void_input_controller(uint32_t buttons, float left_x, float left_y, float right_x, float right_y,")
        probe = r'''
#include <assert.h>
#include <stdint.h>
#include <math.h>
static int input_lock;
static void pthread_mutex_lock(int *p){assert(!*p);*p=1;}
static void pthread_mutex_unlock(int *p){assert(*p);*p=0;}
static float steer,gas,brake;
static void drive_fallback(float a,float b,float c){steer=a;gas=b;brake=c;}
static unsigned drive_packet;
static uint16_t drive_pulse_buttons,drive_pulse_seen,drive_overlay_buttons;
static float drive_steer,drive_left_y,drive_right_x,drive_right_y,drive_brake,drive_throttle;
/* FUNCTION */
int main(void){
 void_input_controller(0x200,.7f,.8f,-.4f,.2f,.3f,.9f);
 assert(steer==.7f&&gas==.9f&&brake==.3f&&drive_overlay_buttons==0x200);
 void_input_controller(0x10000,.7f,.8f,-.4f,.2f,.3f,.9f);
 assert(!steer&&!gas&&!brake&&!drive_overlay_buttons);
 assert(drive_steer==.7f&&drive_left_y==-.8f&&drive_right_x==-.4f&&drive_right_y==-.2f);
 assert(drive_brake==.3f&&drive_throttle==.9f);
 unsigned count=drive_packet;void_input_controller(0x10000,NAN,0,0,0,0,0);assert(drive_packet==count);
 return 0;
}
'''
        self.run_probe("replay-controller", probe.replace("/* FUNCTION */", body))

    def test_native_context_camera_and_replay_selection(self):
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        functions = "\n".join(method(source, signature) for signature in (
            "static uint32_t crashday_editor_view(void)", "static uint32_t crashday_replay_hud(void)",
            "static int crashday_replay_state(void)", "static int crashday_replay_select(unsigned item)",
            "static int crashday_replay_point(float x, float y)",
            "static int crashday_editor_transform(float dx, float dy, float scale, float x, float y)"))
        probe = r'''
#include <assert.h>
#include <stdint.h>
#include <math.h>
#include <string.h>
static unsigned char memory[0x900000];
#define MEM32(a) (*(uint32_t *)(memory+(a)))
#define MEM16(a) (*(uint16_t *)(memory+(a)))
#define MEM8(a) memory[a]
#define MEMF(a) (*(float *)(memory+(a)))
static int void_vm_readable(uint32_t a,unsigned n){return a<sizeof memory && n<=sizeof memory-a;}
static int void_vm_writable(uint32_t a,unsigned n){return void_vm_readable(a,n);}
static uint32_t crashday_ui_container(void){return 0x1000;}
static int crashday_widget_name(uint32_t w,const char *name){return w==0x3000&&!strcmp(name,"picClickArea");}
/* FUNCTIONS */
int main(void){
 assert(!crashday_editor_view()&&!crashday_replay_hud());
 MEM16(0x1030)=1;MEM32(0x1034)=0x2000;MEM32(0x2000)=0x3000;MEM8(0x3075)=1;
 MEM32(0x86942C)=0x10000;MEM32(0x10014)=0x11000;
 MEM32(0x870260)=0x8000;MEMF(0x80E4)=1.625f;
 uint32_t v=0x11000;MEMF(v+0x10)=600;MEMF(v+0x14)=244;
 MEMF(v+0x24)=MEMF(v+0x30)=100;MEMF(v+0x2C)=MEMF(v+0x38)=-100;
 MEMF(v+0x3C)=2;MEMF(v+0x40)=.05f;MEMF(v+0x44)=12;
 assert(crashday_editor_view()==v);
 assert(crashday_editor_transform(.1f,.1f,1,.5f,.5f));
 assert(fabsf(MEMF(v+0x24)-48)<.001f&&fabsf(MEMF(v+0x2C)+76)<.001f);
 assert(MEMF(v+0x24)==MEMF(v+0x30)&&MEMF(v+0x2C)==MEMF(v+0x38));
 float wx=MEMF(v+0x24)+(520-600)/MEMF(v+0x3C), wz=MEMF(v+0x2C)-(240-244)/MEMF(v+0x3C);
 assert(crashday_editor_transform(0,0,2,.5f,.5f));assert(MEMF(v+0x3C)==4);
 assert(fabsf(MEMF(v+0x24)+(520-600)/4-wx)<.001f);
 assert(fabsf(MEMF(v+0x2C)-(240-244)/4-wz)<.001f);
 assert(crashday_editor_transform(0,0,4,.5f,.5f));assert(MEMF(v+0x3C)==12);
 float before=MEMF(v+0x24);assert(!crashday_editor_transform(NAN,0,1,.5f,.5f));assert(MEMF(v+0x24)==before);
 assert(!crashday_editor_transform(0,0,0,.5f,.5f));
 MEM8(0x869C1A)=1;assert(!crashday_editor_view()&&!crashday_editor_transform(1,1,1,.5f,.5f));MEM8(0x869C1A)=0;
 MEM8(0x3075)=0;assert(!crashday_editor_view());MEM8(0x3075)=1;
 MEM32(0x87C79C)=0x4000;MEM32(0x4064)=0x6000;MEM32(0x6004)=0x7000;MEM32(0x600C)=0x80000;
 MEM32(0x8692E8)=0x5000;MEM8(0x501C)=1;MEM8(0x8000C)=0x11;MEM32(0x700C)=0x50000;
 uint32_t h=0x50000;MEM32(h)=0x007F43F0;assert(crashday_replay_hud()==h);
 for(unsigned i=0;i<9;++i){MEM8(h+0x10+i*0x48)=(i%2)==0;MEMF(h+0x4C+i*0x48)=80+55.f*i;}
 MEM16(h+0x168)=14;assert((crashday_replay_state()&0x1FF)==0x155);assert((crashday_replay_state()>>24)==14);
 assert(!crashday_replay_select(1)&&!crashday_replay_select(9));
 MEM8(h+4)=1;assert(crashday_replay_point(80.f/1040,430.f/480)==13&&MEM8(h+0x298)==0);
 assert(!crashday_replay_select(4));assert(MEM8(h+0x298)==4&&MEM8(h+4)&&MEMF(h+8)==4&&MEM8(h+0x299));
 assert(!crashday_replay_select(9)&&!MEM8(h+0x299));
 assert(!crashday_replay_point(300.f/1040,430.f/480));assert(MEM8(h+0x298)==4&&MEM8(h+0x299));
 MEM8(h+0x299)=1;MEM32(h+4*0x48+0x3C)=0x90000;MEM32(h+4*0x48+0x40)=0x90000+15*24;MEMF(h+4*0x48+0x50)=200;
 MEM8(h+4)=0;MEMF(h+8)=0;MEMF(h+0x2A4)=.01f;assert(crashday_replay_state()&0x10000);
 assert(MEM8(h+4)&&MEMF(h+8)==4&&MEMF(h+0x2A4)==1);
 assert(crashday_replay_point(300.f/1040,217.f/480)==40);assert(MEM16(h+0x168)==1&&MEM8(h+0x299));
 assert(!crashday_replay_point(0,0)&&!crashday_replay_point(NAN,0));
 MEM32(h+4*0x48+0x40)=0x90000+15*24+1;assert(!crashday_replay_point(300.f/1040,217.f/480));
 MEM8(h+0x299)=0;MEM8(h+4)=0;assert(!crashday_replay_point(.3f,.9f)&&MEM8(h+4));
 MEM8(0x8000C)=0x0E;assert(crashday_replay_hud()==h&&crashday_replay_state()&&!(crashday_replay_state()>>24));
 MEM8(0x8000C)=16;assert(!(crashday_replay_state()>>24));
 MEM32(h)=0x007F43F4;assert(!crashday_replay_hud()&&!crashday_replay_state()&&!crashday_replay_select(4));
 MEM32(h)=0x007F43F0;MEM8(0x501C)=0;assert(!crashday_replay_hud());
 MEM8(0x501C)=1;MEM8(0x4055)=1;assert(!crashday_replay_hud()&&!crashday_replay_select(4));
 return 0;
}
'''
        self.run_probe("editor-replay-native", probe.replace("/* FUNCTIONS */", functions))

    def test_original_text_focus_in_editor_dialogs(self):
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        functions = "\n".join(method(source, signature) for signature in (
            "void crashday_text_editor_at_cursor(void)",
            "JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeTextEditorWanted",
            "JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeTextEditorClose"))
        probe = r'''
#include <assert.h>
#include <stdint.h>
#include <math.h>
#define JNIEXPORT
#define JNICALL
#define JNI_TRUE 1
#define JNI_FALSE 0
typedef int jboolean; typedef void JNIEnv; typedef void *jclass;
static unsigned char memory[0x900000];
#define MEM32(a) (*(uint32_t *)(memory+(a)))
#define MEM16(a) (*(uint16_t *)(memory+(a)))
#define MEM8(a) memory[a]
#define MEMF(a) (*(float *)(memory+(a)))
static int game_started=1,paused,available=1,scene,calls;
static uint32_t editor_request_epoch,g_ecx,g_edx;
static int void_vm_readable(uint32_t a,unsigned n){return a<sizeof memory&&n<=sizeof memory-a;}
static int void_audio_pause_state(void){return paused;}
static void void_machine_enter(void){} static void void_machine_leave(void){}
static int crashday_ui_scene(uint32_t *out){*out=available?0x2000:0;return scene;}
static int void_dispatch_find(uint32_t fn){return fn==0x0049DE40;}
static void void_call_guest(uint32_t fn,unsigned n,const uint32_t *args,int conv){
 assert(fn==0x0049DE40&&n==1&&args[0]==3&&conv==1&&g_ecx==0x4000&&g_edx==0);
 MEM8(0x4000+0x76)^=1;++calls;
}
/* FUNCTIONS */
int main(void){
 MEM32(0x869418)=0x1000;MEM16(0x2030)=1;MEM32(0x2034)=0x3000;MEM32(0x3000)=0x4000;
 MEM32(0x4000)=0x007E5EF0;MEM8(0x4074)=MEM8(0x4075)=1;
 MEMF(0x4078)=100;MEMF(0x407C)=100;MEMF(0x4080)=160;MEMF(0x4084)=24;
 MEMF(0x126C)=120;MEMF(0x1270)=110;
 for(int i=0;i<3;++i){
  scene=i==0?12:i==1?8:19;
  assert(!Java_org_crashday_port_GameActivity_nativeTextEditorWanted(0,0));
  editor_request_epoch=1;crashday_text_editor_at_cursor();
  assert(calls==i*2+1&&Java_org_crashday_port_GameActivity_nativeTextEditorWanted(0,0));
  Java_org_crashday_port_GameActivity_nativeTextEditorClose(0,0);
  assert(calls==i*2+2&&!Java_org_crashday_port_GameActivity_nativeTextEditorWanted(0,0));
 }
 int before=calls;
 MEM8(0x4075)=0;editor_request_epoch=1;crashday_text_editor_at_cursor();assert(calls==before);
 MEM8(0x4075)=1;MEMF(0x126C)=NAN;editor_request_epoch=1;crashday_text_editor_at_cursor();assert(calls==before);
 MEMF(0x126C)=120;paused=1;editor_request_epoch=1;crashday_text_editor_at_cursor();assert(calls==before);
 paused=0;available=0;editor_request_epoch=1;crashday_text_editor_at_cursor();assert(calls==before);
 MEM8(0x4076)=1;assert(!Java_org_crashday_port_GameActivity_nativeTextEditorWanted(0,0));
 return 0;
}
'''
        self.run_probe("editor-text-dialogs", probe.replace("/* FUNCTIONS */", functions))

    def test_production_gestures_and_camera_owners(self):
        source = (ROOT / "android/app/src/org/crashday/port/SceneControls.java").read_text(encoding="utf-8")
        source = re.sub(r"(?m)^(?:package|import) .*;\s*", "", source)
        source = source.replace("final class SceneControls extends", "static final class SceneControls extends", 1)
        prefix = ANDROID_FIXTURES[:ANDROID_FIXTURES.index(" static class GameActivity extends")]
        prefix = prefix.replace("public class DrivingControlsProbe", "public class SceneControlsProbe")
        prefix = prefix.replace("float measureText(String s)", "float getTextSize(){return size;} float measureText(String s)")
        harness = prefix + r'''
 static class GameActivity extends Context {
  boolean russian=true;static int kind=4,wheel,down,up;static float lx,ly,rx,ry,lt,rt,panX,panY,zoom,px,py;static int transforms;
  static Set<Integer> keys=new HashSet<>();
  String tr(String en,String ru){return russian?ru:en;}float pointerX(float x){return x/2340;}float pointerY(float y){return y/1080;}
  static int nativeMenuControl(float x,float y){return kind;}static void nativePointer(float x,float y,boolean relative){px=x;py=y;}
  static void nativeButton(boolean b){if(b)++down;else ++up;}
  static void nativeWheel(int n){check(px<.2f,"palette wheel must follow its own pointer, not the previous world cursor");wheel+=n;}static void nativeKey(int k,boolean b){throw new AssertionError("replay camera must not invoke keyboard camera shortcuts");}
  static void nativeController(int buttons,float x,float y,float a,float b,float l,float r){check(buttons==0x10000,"camera pad must not synthesize driving arrows");lx=x;ly=y;rx=a;ry=b;lt=l;rt=r;}
  static void nativeEditorTransform(float x,float y,float s,float ax,float ay){panX=x;panY=y;zoom=s;++transforms;}
 }
 static class TouchMenuController {
  int key,rotations,selected=-1,points;
  void sceneKey(int key){this.key=key;}void editorRotate(){++rotations;}
  void replayAction(int item){selected=item;}void replayPoint(float x,float y){++points;}
 }
 /* PRODUCTION */
 static void check(boolean ok,String why){if(!ok)throw new AssertionError(why);}
 static MotionEvent event(int a,int index,int[] ids,float...xy){return new MotionEvent(a,index,ids,xy);}
 static void tap(SceneControls c,float x,float y){c.handleMotion(event(0,0,new int[]{73},x,y));c.handleMotion(event(1,0,new int[]{73},x,y));}
 static SceneControls create(GameActivity a,TouchMenuController menu,int scene,int state){
  a.resources.m.density=2.75f;SceneControls c=new SceneControls(a,menu);c.W=2340;c.H=1080;c.onSizeChanged(2340,1080,0,0);c.setScene(scene,state,true);return c;
 }
 public static void main(String[] args){
  GameActivity a=new GameActivity();TouchMenuController menu=new TouchMenuController();SceneControls c=create(a,menu,19,0);
  c.handleMotion(event(0,0,new int[]{7},1200,600));check(GameActivity.down==0,"editor tap waits for UP, allowing a second finger");
  c.handleMotion(event(1,0,new int[]{7},1200,600));check(GameActivity.down==1&&GameActivity.up==1,"tap places once");
  c.handleMotion(event(0,0,new int[]{7},1200,600));c.handleMotion(event(2,0,new int[]{7},1400,650));check(GameActivity.down==2,"drag starts original LMB rectangle");
  c.handleMotion(event(1,0,new int[]{7},1500,700));check(GameActivity.up==2,"drag releases original LMB");
  int down=GameActivity.down;
  c.handleMotion(event(0,0,new int[]{7},1200,600));c.handleMotion(event(5,1,new int[]{7,91},1200,600,1400,600));
  c.handleMotion(event(2,0,new int[]{91,7},1500,650,1200,650));
  check(GameActivity.transforms==1&&Math.abs(GameActivity.panX-50.f/2340)<.0001f&&Math.abs(GameActivity.panY-50.f/1080)<.0001f&&GameActivity.zoom==1.5f,"reordered pinch owns centroid, pan and zoom");
  c.handleMotion(event(6,0,new int[]{91,7},1500,650,1200,650));c.handleMotion(event(2,0,new int[]{7},1300,650));c.handleMotion(event(1,0,new int[]{7},1300,650));
  check(GameActivity.down==down,"pinch and remaining finger cannot place a tile");
  GameActivity.kind=5;c.handleMotion(event(0,0,new int[]{7},200,600));c.handleMotion(event(2,0,new int[]{7},200,450));c.handleMotion(event(1,0,new int[]{7},200,450));
  check(GameActivity.wheel<0&&GameActivity.down==down,"palette drag scrolls without selecting");GameActivity.kind=4;
  for(SceneControls.Button b:c.buttons){check(b.bounds.left>=0&&b.bounds.right<=2340&&b.bounds.top>=0,"toolbar fits");tap(c,b.bounds.centerX(),b.bounds.centerY());}
  check(menu.rotations==1&&menu.key=='D',"all editor shortcuts remain reachable");
  c.handleMotion(event(0,0,new int[]{7},1200,600));c.handleMotion(event(2,0,new int[]{7},1400,600));int ups=GameActivity.up;
  c.handleMotion(event(2,0,new int[]{99},1400,600));check(GameActivity.up==ups+1&&c.contacts.size()==0,"missing owner releases painting");
  c.setSafeInsets(80,10,35,5);check(c.buttons.get(0).bounds.left>=80,"safe toolbar");
  c.setScene(19,0,false);Canvas hidden=new Canvas();c.onDraw(hidden);check(hidden.draws==0,"setting hides contextual buttons");
  int available=(1<<0)|(1<<2)|(1<<4)|(1<<5)|(1<<6)|(1<<8);
  c.setScene(20,available,true);for(SceneControls.Button b:c.buttons)if(b.action==4)tap(c,b.bounds.centerX(),b.bounds.centerY());
  check(menu.selected==4,"camera toolbar selects original command");tap(c,1400,1000);check(menu.points==1,"original HUD receives touch hit testing");
  check(c.buttons.size()==9,"replay commands retain stable positions across pause and playback end");
  float cameraLeft=c.buttons.get(4).bounds.left;
  c.setScene(20,available&~(1<<5),true);check(c.buttons.get(4).bounds.left==cameraLeft,"pausing cannot move the camera button");
  tap(c,c.buttons.get(5).bounds.centerX(),c.buttons.get(5).bounds.centerY());check(menu.selected==4,"disabled commands do not activate");
  c.setScene(20,available|0x10000,true);for(SceneControls.Button b:c.buttons)if(b.action==201)tap(c,b.bounds.centerX(),b.bounds.centerY());
  check(menu.key==40,"popup value navigation uses original Down");
  for(SceneControls.Button b:c.buttons)if(b.action==202)tap(c,b.bounds.centerX(),b.bounds.centerY());
  check(menu.selected==9,"Done closes the popup without a held Enter reopening it");
  c.setScene(20,available|(14<<24),true);
  c.handleMotion(event(0,0,new int[]{7},c.stickX(),c.stickY()+c.dp(50)));
  check(c.contacts.get(7).role==3,"the whole visible movement circle accepts touch above the original HUD");c.cancelGesture();
  c.handleMotion(event(0,0,new int[]{7},230,700));c.handleMotion(event(5,1,new int[]{7,91},230,700,1400,500));
  c.handleMotion(event(2,0,new int[]{91,7},1500,450,330,650));
  check(GameActivity.lx>0&&GameActivity.ly>0&&GameActivity.rx>0&&GameActivity.ry>0,"simultaneous movement and look use independent pointer IDs");
  c.handleMotion(event(6,1,new int[]{91,7},1500,450,330,650));check(GameActivity.lx==0&&GameActivity.rx>0,"movement release retains look owner");
  c.handleMotion(event(3,0,new int[]{91},1500,450));check(GameActivity.rx==0&&GameActivity.keys.isEmpty(),"cancel releases pad and keyboard fallbacks");
  for(SceneControls.Button b:c.buttons)if(b.action==210){c.handleMotion(event(0,0,new int[]{7},b.bounds.centerX(),b.bounds.centerY()));check(GameActivity.rt==1,"free camera speeds up while held");c.handleMotion(event(1,0,new int[]{7},b.bounds.centerX(),b.bounds.centerY()));check(GameActivity.rt==0,"camera speed modifier release");}
  c.setScene(0,0,true);check(!c.handleMotion(event(0,0,new int[]{7},1200,600)),"context does not intercept menus");
  System.out.println("PASS editor/replay touch: placement, rectangle, palette, two-pointer pan/pinch, owner loss, shortcuts, original HUD, independent camera owners and lifecycle release");
 }
}
'''
        folder = ROOT / "build/tests/scene-controls"
        folder.mkdir(parents=True, exist_ok=True)
        probe = folder / "SceneControlsProbe.java"
        probe.write_text(harness.replace("/* PRODUCTION */", source), encoding="utf-8")
        java = Path("C:/Portable/jdk-24.0.1/bin")
        for command in ([java / "javac.exe", "-encoding", "UTF-8", "-d", folder, probe],
                        [java / "java.exe", "-cp", folder, "SceneControlsProbe"]):
            result = subprocess.run([str(x) for x in command], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == "__main__":
    unittest.main()
