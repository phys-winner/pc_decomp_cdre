"""Execute the production HUD transforms, display enumeration and Android handoff."""
from pathlib import Path
import re
import subprocess
import unittest

from test_menu_gestures import method
import test_menu_layout

ROOT = Path(__file__).resolve().parents[1]


class HudDisplayResumeTest(unittest.TestCase):
    run_probe = test_menu_layout.MenuLayoutTest.run_probe

    def test_race_hud_promotes_scaled_scene(self):
        from lift_crashday import apply_host_adapter
        source = (ROOT / "generated/crashday/functions_0025.c").read_text(encoding="utf-8")
        signature = "static void sub_005A97F0_lifted(void)"
        plain = method(source, signature + " {").replace(signature, "void sub_005A97F0(void)", 1)
        expected = apply_host_adapter({"name": "crashday"}, 0x005A97F0, plain)
        start = source.index(signature + ";")
        self.assertEqual(source[start:start + len(expected)], expected)
        fixture = "void sub_005A97F0(void) { assert(phase == 1); ++draws; if (early) return; ++draws; }"
        wrapper = apply_host_adapter({"name": "crashday"}, 0x005A97F0, fixture)
        self.run_probe("race-hud-promotion", r'''
#include <assert.h>
static int phase, draws, early, calls;
void d3d_gl_ui_pass(int enabled) { assert(enabled != phase); phase = enabled; ++calls; }
/* WRAPPER */
int main(void) {
 sub_005A97F0(); assert(phase == 0 && draws == 2 && calls == 2);
 early = 1; sub_005A97F0(); assert(phase == 0 && draws == 3 && calls == 4);
 return 0;
}
'''.replace("/* WRAPPER */", wrapper))

    def test_shader_upload_preserves_effect_constants(self):
        source = (ROOT / "android/host/d3d9_shader.c").read_text(encoding="utf-8")
        upload = method(source, "void d3d_shader_upload(")
        constants = upload[upload.index("    if (p->uploaded_generation"):upload.index("        if (p->loc_vs_f")]
        self.run_probe("effect-constants", r'''
#include <stdint.h>
#include <string.h>
#include <assert.h>
typedef struct {int preshader;} Parse;
typedef struct {Parse *parse;} Shader;
typedef struct {
 unsigned uploaded_generation;
 int vs_f_count,ps_f_count,vs_i_count,ps_i_count,vs_b_count,ps_b_count,vs_map_count,ps_map_count;
 void *vs_map,*ps_map;Shader *vs,*ps;
} program_t;
typedef struct {struct {float vs_f[256][4],ps_f[224][4];int32_t vs_i[16][4],ps_i[16][4],vs_b[16],ps_b[16];} st;} d3d_device;
static unsigned d3d_constant_generation=1,calls;
static float packed[2];
static void void_fatal(const char *text,...){assert(0);}
static void d3d_run_preshader(const Parse *p,float (*c)[4],unsigned limit){
 assert(p->preshader);++calls;c[12][0]*=.5f;c[limit-1][3]+=.25f;
}
static void pack(void *map,int count,const float (*c)[4],const int32_t (*i)[4],const int32_t *b,float *f,int32_t *out_i,int32_t *out_b){
 packed[map!=0]=c[12][0];
}
static void upload(program_t *p,d3d_device *dev){
/* CONSTANTS */
 }
}
int main(void){
 Parse preshader={1},plain={0};Shader shader={&preshader};
 program_t p={0};d3d_device dev={0},before;
 dev.st.vs_f[12][0]=1;dev.st.ps_f[12][0]=.8f;
 dev.st.vs_f[255][3]=3;dev.st.ps_f[223][3]=7;before=dev;
 p.vs=p.ps=&shader;p.ps_map=(void *)1;
 for(int i=0;i<100;++i){upload(&p,&dev);assert(packed[0]==1&&packed[1]==.8f);assert(!memcmp(&before,&dev,sizeof dev));}
 assert(!calls);shader.parse=&plain;upload(&p,&dev);
 assert(!calls&&packed[0]==1&&packed[1]==.8f&&!memcmp(&before,&dev,sizeof dev));return 0;
}
'''.replace("/* CONSTANTS */", constants))

    def test_pause_hint_uses_original_countdown(self):
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        function = method(source, "JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeRaceCountdown(")
        self.run_probe("pause-countdown", r'''
#include <stdint.h>
#include <assert.h>
#include <math.h>
#define JNIEXPORT
#define JNICALL
#define JNI_FALSE 0
#define JNI_TRUE 1
typedef int jboolean,jclass,JNIEnv;
static unsigned char memory[0x900000];
#define MEM32(a) (*(uint32_t *)(memory+(a)))
#define MEMF(a) (*(float *)(memory+(a)))
#define MEM8(a) memory[a]
static int game_started,entered,left;
static int void_vm_readable(uint32_t a,unsigned n){return a<sizeof memory&&n<=sizeof memory-a;}
static void void_machine_enter(void){++entered;}
static void void_machine_leave(void){++left;}
/* FUNCTION */
int main(void){
 assert(!Java_org_crashday_port_GameActivity_nativeRaceCountdown(0,0)&&!entered);
 game_started=1;assert(!Java_org_crashday_port_GameActivity_nativeRaceCountdown(0,0));
 MEM32(0x8692E8)=0x1000;MEM8(0x10B0)=2;
 float hidden[]={-100,-3,0,.001f,1,100,NAN,INFINITY,-INFINITY};
 for(unsigned i=0;i<sizeof hidden/sizeof *hidden;i++){
  MEMF(0x10B4)=hidden[i];assert(!Java_org_crashday_port_GameActivity_nativeRaceCountdown(0,0));
 }
 float visible[]={-2.999f,-2,-1,-.001f};
 for(unsigned i=0;i<sizeof visible/sizeof *visible;i++){
  MEMF(0x10B4)=visible[i];assert(Java_org_crashday_port_GameActivity_nativeRaceCountdown(0,0));
 }
 MEM8(0x10B0)=4;assert(!Java_org_crashday_port_GameActivity_nativeRaceCountdown(0,0));
 MEM32(0x8692E8)=sizeof memory-0xB7;assert(!Java_org_crashday_port_GameActivity_nativeRaceCountdown(0,0));
 assert(entered==left);return 0;
}
'''.replace("/* FUNCTION */", function))

    def test_weapon_hud_startup_and_validation(self):
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        function = method(source, "JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeWeaponHud(")
        self.run_probe("weapon-hud-startup", r'''
#include <assert.h>
#include <math.h>
#include <string.h>
#define JNIEXPORT
#define JNICALL
#define __atomic_load_n(p,order) (*(p))
typedef int jint,jsize,jclass;
typedef void *jfloatArray;
struct JNITable;
typedef struct JNITable *JNIEnv;
struct JNITable {int (*GetArrayLength)(JNIEnv *,void *);void (*GetFloatArrayRegion)(JNIEnv *,void *,int,int,float *);int (*ExceptionCheck)(JNIEnv *);};
static int game_started,frame_ready,entered,length=6,weapon_hud_mask=-1;
static float values[6]={.2f,.3f,.1f,.7f,.3f,.1f},weapon_hud_anchors[6];
static int len(JNIEnv *e,void *a){return length;}
static void read_values(JNIEnv *e,void *a,int b,int n,float *out){memcpy(out,values,n*sizeof(float));}
static int exception(JNIEnv *e){return 0;}
static void void_machine_enter(void){++entered;}
static void void_machine_leave(void){}
/* FUNCTION */
int main(void){
 struct JNITable table={len,read_values,exception};JNIEnv env=&table;
 Java_org_crashday_port_GameActivity_nativeWeaponHud(&env,0,3,(void *)1);assert(!entered);
 game_started=1;Java_org_crashday_port_GameActivity_nativeWeaponHud(&env,0,3,(void *)1);assert(!entered);
 frame_ready=1;Java_org_crashday_port_GameActivity_nativeWeaponHud(&env,0,3,(void *)1);
 assert(entered==1&&weapon_hud_mask==3&&!memcmp(values,weapon_hud_anchors,sizeof values));
 values[0]=NAN;Java_org_crashday_port_GameActivity_nativeWeaponHud(&env,0,3,(void *)1);assert(entered==1);
 values[0]=.2f;length=5;Java_org_crashday_port_GameActivity_nativeWeaponHud(&env,0,3,(void *)1);assert(entered==1);
 length=6;values[2]=0;Java_org_crashday_port_GameActivity_nativeWeaponHud(&env,0,1,(void *)1);assert(entered==1);
 Java_org_crashday_port_GameActivity_nativeWeaponHud(&env,0,-1,(void *)1);assert(entered==2&&weapon_hud_mask==-1);return 0;
}
'''.replace("/* FUNCTION */", function))

    def test_original_weapon_hud_and_hit_regions(self):
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        functions = "\n".join(method(source, signature) for signature in (
            "float crashday_weapon_coord(", "static int crashday_hud_hit("))
        self.run_probe("weapon-hud", r'''
#include <stdint.h>
#include <assert.h>
#include <math.h>
static unsigned char memory[0x900000];
#define MEM32(a) (*(uint32_t *)(memory+(a)))
#define MEMF(a) (*(float *)(memory+(a)))
#define MEM8(a) memory[a]
static int weapon_hud_mask=-1,raised,alive=1;
static float weapon_hud_anchors[6]={.3f,.2f,25.5999755859375f/480,.6f,.4f,51.199951171875f/480};
static int void_vm_readable(uint32_t a,unsigned n){return a<sizeof memory&&n<=sizeof memory-a;}
static uint32_t crashday_race_car(void){return alive;}
static uint32_t crashday_race_player(void){return 0x3000;}
static int crashday_racing_scene(void){return alive?9:17;}
static float crashday_hud_y(float y,float offset){return y-(raised?offset:0);}
/* FUNCTIONS */
int main(void){
 MEM32(0x870260)=0x1000;MEMF(0x10E4)=1.625f;
 MEM32(0x3014)=0x2000;MEM8(0x2005)=1;
 MEMF(0x808C54)=.799835205078125f;MEMF(0x809400)=24.900033950805664f;
 float center=100-MEMF(0x808C54)+MEMF(0x809400)*.5f;
 assert(crashday_weapon_coord(0,0,center,100)==center);
 weapon_hud_mask=3;
 assert(fabsf(crashday_weapon_coord(0,0,center,100)-312)<.001f);
 assert(fabsf(crashday_weapon_coord(0,1,442.39971923828125f,100)-96)<.001f);
 assert(fabsf(crashday_weapon_coord(0,2,6,100)-6)<.001f);
 assert(fabsf(crashday_weapon_coord(1,2,6,100)-12)<.001f);
 assert(fabsf(crashday_weapon_coord(1,0,center+41.2001648f,141.2001648f)-624)<.001f);
 weapon_hud_mask=2;assert(crashday_weapon_coord(0,0,center,100)==-1000);
 assert(crashday_hud_hit(88.f/1040,392.f/480)==2);
 assert(crashday_hud_hit(944.f/1040,416.f/480)==1);
 raised=1;assert(crashday_hud_hit(88.f/1040,162.f/480)==2);
 assert(crashday_hud_hit(944.f/1040,166.f/480)==1);
 assert(!crashday_hud_hit(88.f/1040,392.f/480));
 assert(!crashday_hud_hit(.5f,.5f)&&!crashday_hud_hit(NAN,.2f));
 MEM8(0x2005)=0;assert(!crashday_hud_hit(88.f/1040,162.f/480));
 alive=0;assert(!crashday_hud_hit(944.f/1040,166.f/480));return 0;
}
'''.replace("/* FUNCTIONS */", functions))

    def test_weapon_adapter_survives_regeneration(self):
        from lift_crashday import apply_host_adapter
        source = (ROOT / "generated/crashday/functions_0026.c").read_text(encoding="utf-8")
        body = method(source, "void sub_005B08F0(void)")
        plain = re.sub(r"(?m)^    (?:extern float crashday_weapon_coord.*|float weapon_origin;|weapon_origin = .*|_xmm\[3\].f32\[0\] = crashday_weapon_coord.*|MEM32\(esp \+ \d+\) = sse_u32\(crashday_weapon_coord.*)\n", "", body)
        self.assertNotEqual(plain, body)
        self.assertEqual(apply_host_adapter({"name": "crashday"}, 0x005B08F0, plain), body)

    def test_display_mode_rates(self):
        source = (ROOT / "android/host/d3d9_device.c").read_text(encoding="utf-8")
        functions = "\n".join(method(source, f"COM_METHOD(d3d9, {name}, {count})")
                              .replace(f"COM_METHOD(d3d9, {name}, {count})", f"static uint32_t {name}(void)")
                              for name, count in (("GetAdapterModeCount", 3), ("EnumAdapterModes", 5)))
        self.run_probe("display-modes", r'''
#include <stdint.h>
#include <assert.h>
static uint32_t memory[4],args[5],extra=1;
#define MEM32(a) memory[(a)/4]
#define ARG(i) args[i]
#define D3DERR_INVALIDCALL 0x8876086cu
#define D3D_OK 0
static const uint32_t modes[][2]={{640,480},{2340,1080}};
#define MODE_COUNT 2
static int mode_format_ok(uint32_t f){return f==22||f==23;}
static int extra_display_mode(uint32_t size[2]){size[0]=1920;size[1]=1080;return extra;}
static uint32_t adapter_refresh_rate(void){return 60;}
static uint32_t count(void){return 3;}
static uint32_t rate(int i){return (uint32_t[]){60,90,120}[i];}
static uint32_t (*void_android_refresh_count)(void)=count;
static uint32_t (*void_android_refresh_rate)(int)=rate;
/* FUNCTIONS */
int main(void){
 args[2]=22;assert(GetAdapterModeCount()==9);
 for(unsigned i=0;i<9;++i){args[3]=i;assert(!EnumAdapterModes());assert(memory[2]==rate(i%3));
  assert(memory[0]==(i<6?modes[i/3][0]:1920)&&memory[1]==(i<6?modes[i/3][1]:1080));}
 args[3]=9;assert(EnumAdapterModes()==D3DERR_INVALIDCALL);
 args[3]=UINT32_MAX;assert(EnumAdapterModes()==D3DERR_INVALIDCALL);
 extra=0;assert(GetAdapterModeCount()==6);args[3]=6;assert(EnumAdapterModes()==D3DERR_INVALIDCALL);
 args[1]=1;assert(!GetAdapterModeCount());args[1]=0;args[2]=99;assert(!GetAdapterModeCount());
 args[2]=23;args[3]=0;assert(!EnumAdapterModes()&&memory[3]==23);
 void_android_refresh_count=0;void_android_refresh_rate=0;assert(GetAdapterModeCount()==2);
 args[3]=1;assert(!EnumAdapterModes()&&memory[2]==60);return 0;
}
'''.replace("/* FUNCTIONS */", functions))

    def test_win32_display_mode_rates(self):
        source = (ROOT / "android/host/display.c").read_text(encoding="utf-8")
        export = 'WINAPI_EXPORT("user32.dll", EnumDisplaySettingsW, 3)'
        functions = method(source, "static void display_mode(") + "\n" + method(source, export).replace(export, "static uint32_t EnumDisplaySettingsW(void)")
        change = 'WINAPI_EXPORT("user32.dll", ChangeDisplaySettingsExW, 5)'
        functions += "\n" + method(source, change).replace(change, "static uint32_t ChangeDisplaySettingsExW(void)")
        self.run_probe("win32-display-modes", r'''
#include <stdint.h>
#include <string.h>
#include <assert.h>
static uint32_t memory[256],args[5],mode_count=3,selected=90,requested,changes;
#define GPTR(a) ((uint8_t *)memory+(a))
#define MEM16(a) (*(uint16_t *)GPTR(a))
#define MEM32(a) (*(uint32_t *)GPTR(a))
#define ARG(i) args[i]
static void void_utf8_to_gw(const char *text,uint32_t out,uint32_t count){MEM16(out)='C';}
static void void_input_screen_size(int *w,int *h){*w=2424;*h=1080;}
static void void_input_set_screen_size(int w,int h){assert(w==2424&&h==1080);++changes;}
static uint32_t count(void){return mode_count;}
static uint32_t rate(int i){return i<0?selected:(uint32_t[]){60,90,120}[i];}
static uint32_t (*void_android_refresh_count)(void)=count;
static uint32_t (*void_android_refresh_rate)(int)=rate;
static void request(uint32_t hz){requested=hz;}
static void (*void_android_request_refresh)(uint32_t)=request;
/* FUNCTIONS */
int main(void){
 args[2]=16;
 for(unsigned i=0;i<3;++i){args[1]=i;assert(EnumDisplaySettingsW());
  assert(MEM32(16+172)==2424&&MEM32(16+176)==1080&&MEM32(16+184)==rate(i));
  assert(MEM16(16+68)==220&&(MEM32(16+72)&0x400000));}
 uint32_t before[256];memcpy(before,memory,sizeof memory);
 for(unsigned i=0;i<2;++i){args[1]=i?UINT32_MAX-2:3;assert(!EnumDisplaySettingsW());assert(!memcmp(before,memory,sizeof memory));}
 args[1]=UINT32_MAX;assert(EnumDisplaySettingsW()&&MEM32(16+184)==90);
 selected=120;args[1]=UINT32_MAX-1;assert(EnumDisplaySettingsW()&&MEM32(16+184)==120);
 mode_count=1;selected=60;args[1]=0;assert(EnumDisplaySettingsW()&&MEM32(16+184)==60);
 args[1]=1;assert(!EnumDisplaySettingsW());
 void_android_refresh_count=0;void_android_refresh_rate=0;
 args[1]=0;assert(EnumDisplaySettingsW()&&MEM32(16+184)==60);
 args[1]=1;assert(!EnumDisplaySettingsW());
 args[1]=UINT32_MAX;assert(EnumDisplaySettingsW()&&MEM32(16+184)==60);
 args[0]=512;args[1]=16;MEM32(16+184)=120;args[3]=4;
 assert(!ChangeDisplaySettingsExW()&&changes==1&&requested==120);
 args[3]=2;requested=0;assert(!ChangeDisplaySettingsExW()&&changes==1&&!requested);
 args[3]=4;args[1]=0;assert(!ChangeDisplaySettingsExW()&&changes==1&&!requested);
 args[1]=16;void_android_request_refresh=0;assert(!ChangeDisplaySettingsExW()&&changes==2);return 0;
}
'''.replace("/* FUNCTIONS */", functions))

    def test_refresh_selection_survives_regeneration(self):
        from lift_crashday import apply_host_adapter
        source = (ROOT / "generated/crashday/functions_0018.c").read_text(encoding="utf-8")
        body = method(source, "void sub_00520C50(void)")
        hook = "\n    { extern void void_android_request_refresh(uint32_t); void_android_request_refresh(ecx); }"
        plain = body.replace(hook, "")
        self.assertNotEqual(plain, body)
        self.assertEqual(apply_host_adapter({"name": "crashday"}, 0x00520C50, plain), body)
        with self.assertRaises(ValueError):
            apply_host_adapter({"name": "crashday"}, 0x00520C50, "void sub_00520C50(void) {}")

    def test_native_refresh_handoff_is_immediately_readable(self):
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        signatures = ("uint32_t void_android_refresh_rate(", "uint32_t void_android_refresh_count(",
                      "void void_android_request_refresh(", "JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeRefreshRequest(")
        functions = "\n".join(method(source, s) for s in signatures)
        self.run_probe("native-refresh-handoff", r'''
#include <stdint.h>
#include <math.h>
#include <assert.h>
#define JNIEXPORT
#define JNICALL
typedef int JNIEnv,jclass,jint;
static int window_lock,locked;
static void pthread_mutex_lock(int *lock){assert(!locked);locked=1;}
static void pthread_mutex_unlock(int *lock){assert(locked);locked=0;}
static float selected_refresh=60;
static uint32_t display_rates[]={60,90,120},display_rate_count=3,refresh_request;
/* FUNCTIONS */
int main(void){
 assert(void_android_refresh_count()==3&&void_android_refresh_rate(-1)==60);
 for(int i=0;i<3;++i)assert(void_android_refresh_rate(i)==display_rates[i]);
 assert(!void_android_refresh_rate(3));
 void_android_request_refresh(120);assert(void_android_refresh_rate(-1)==120);
 assert(Java_org_crashday_port_GameActivity_nativeRefreshRequest(0,0)==120);
 assert(!Java_org_crashday_port_GameActivity_nativeRefreshRequest(0,0)&&void_android_refresh_rate(-1)==120);
 void_android_request_refresh(144);assert(void_android_refresh_rate(-1)==120&&!refresh_request);
 void_android_request_refresh(0);assert(void_android_refresh_rate(-1)==120&&!refresh_request);
 void_android_request_refresh(60);assert(void_android_refresh_rate(-1)==60&&refresh_request==60);
 assert(!locked);return 0;
}
'''.replace("/* FUNCTIONS */", functions))

    def test_android_rate_selection_and_resume(self):
        activity = (ROOT / "android/app/src/org/crashday/port/GameActivity.java").read_text(encoding="utf-8")
        signatures = ("private void refreshFpsRates(", "private boolean containsFps(",
                      "private float fpsValue(", "private void applyFps(", "private void pollRefreshRate(")
        functions = "\n".join(method(activity, s) for s in signatures)
        launch = (ROOT / "android/launcher/android/src/port/launcher/Launch.java").read_text(encoding="utf-8")
        functions += "\n" + method(launch, "static void resume(Activity launcher, Spec.Distribution d)")
        menu = (ROOT / "android/app/src/org/crashday/port/TouchMenuController.java").read_text(encoding="utf-8")
        functions += "\n" + method(menu, "void onHudTap(")
        harness = r'''
import java.util.*;
public class DisplayResumeProbe {
 static class Display {
  static class Mode {int w,h,id;float hz;Mode(int id,int w,int h,float hz){this.id=id;this.w=w;this.h=h;this.hz=hz;}
   int getPhysicalWidth(){return w;}int getPhysicalHeight(){return h;}float getRefreshRate(){return hz;}int getModeId(){return id;}}
  Mode[] modes={new Mode(1,1080,2400,60),new Mode(2,1080,2400,90),new Mode(3,1080,2400,120),new Mode(4,720,1600,144),new Mode(5,1080,2400,90)};
  Mode getMode(){return modes[0];}Mode[] getSupportedModes(){return modes;}float getRefreshRate(){return 60;}
 }
 static class WindowManager {Display display=new Display();Display getDefaultDisplay(){return display;}
  static class LayoutParams {float preferredRefreshRate;int preferredDisplayModeId;}}
 static class Window {WindowManager.LayoutParams p=new WindowManager.LayoutParams();WindowManager.LayoutParams getAttributes(){return p;}void setAttributes(WindowManager.LayoutParams p){this.p=p;}}
 static class Preferences {float value;Preferences edit(){return this;}Preferences putFloat(String k,float v){value=v;return this;}void apply(){}}
 WindowManager manager=new WindowManager();Window window=new Window();Preferences preferences=new Preferences();
 WindowManager getWindowManager(){return manager;}Window getWindow(){return window;}
 float[] fpsRates=new float[0];float fpsLimit=120,displayRate=120;boolean fpsQaOverride;
 static float paced,selected;static float[] published;static int request;
 static void nativeDisplayRates(float[] rates,float hz){published=rates;selected=hz;}
 static void nativeConfigure(float hz){paced=hz;}
 static int nativeRefreshRequest(){int r=request;request=0;return r;}
 int pulseKey;void pulse(int key){pulseKey=key;}
 static class Intent {static final int FLAG_ACTIVITY_REORDER_TO_FRONT=0x20000,FLAG_ACTIVITY_SINGLE_TOP=0x20000000;int flags;String name;
  Intent setClassName(String p,String n){name=n;return this;}Intent addFlags(int f){flags|=f;return this;}}
 static class Activity {Intent intent;String getPackageName(){return "game";}void startActivity(Intent i){intent=i;}}
 static class Spec {static class Distribution {String activity="GameActivity";}}
 /* FUNCTIONS */
 static void check(boolean b){if(!b)throw new AssertionError();}
 public static void main(String[] args){
  DisplayResumeProbe p=new DisplayResumeProbe();p.applyFps();
  check(Arrays.equals(published,new float[]{60,90,120}));
  check(p.window.p.preferredDisplayModeId==3&&p.window.p.preferredRefreshRate==120&&paced==120&&selected==120);
  request=90;p.pollRefreshRate();check(p.displayRate==90&&p.preferences.value==90&&paced==90&&p.window.p.preferredDisplayModeId==2);
  p.fpsLimit=60;p.applyFps();check(paced==90&&selected==90&&p.window.p.preferredRefreshRate==90);
  p.fpsQaOverride=true;p.applyFps();check(paced==60);
  p.fpsLimit=0;p.applyFps();check(paced==90);
  request=144;p.pollRefreshRate();check(p.displayRate==90);
  p.displayRate=144;p.applyFps();check(p.displayRate==0&&p.window.p.preferredDisplayModeId==0&&selected==60);
  Activity launcher=new Activity();resume(launcher,new Spec.Distribution());
  check(launcher.intent.name.equals("GameActivity"));
  check(launcher.intent.flags==(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT|Intent.FLAG_ACTIVITY_SINGLE_TOP));
  p.onHudTap(1);check(p.pulseKey==0x18000);p.onHudTap(2);check(p.pulseKey==0x14000);
  p.manager.display.modes=new Display.Mode[]{new Display.Mode(1,1080,2424,60.000004f),new Display.Mode(2,1080,2424,120.00001f)};
  p.displayRate=120;p.fpsLimit=60;p.applyFps();
  check(p.displayRate==120&&p.fpsLimit==60&&paced==60&&p.window.p.preferredDisplayModeId==2);
  request=60;p.pollRefreshRate();check(p.displayRate==60.000004f&&paced==60&&p.window.p.preferredDisplayModeId==1);
  request=120;p.pollRefreshRate();check(p.displayRate==120.00001f&&paced==60&&p.window.p.preferredDisplayModeId==2);
  p.fpsLimit=30;p.fpsQaOverride=false;p.applyFps();check(paced==120.00001f);
  p.fpsQaOverride=true;p.applyFps();check(paced==30);
 }
}
'''.replace("/* FUNCTIONS */", functions)
        out = ROOT / "build/tests/display-resume"
        out.mkdir(parents=True, exist_ok=True)
        java = Path("C:/Portable/jdk-24.0.1/bin")
        file = out / "DisplayResumeProbe.java"
        file.write_text(harness, encoding="utf-8")
        for command in ([java / "javac.exe", "-encoding", "UTF-8", "-d", out, file],
                        [java / "java.exe", "-cp", out, "DisplayResumeProbe"]):
            result = subprocess.run([str(x) for x in command], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)

    def test_prepared_archives_keep_integrity_checks(self):
        source = (ROOT / "android/app/src/org/crashday/port/CrashdayTextureBackend.java").read_text(encoding="utf-8")
        functions = method(source, "private static boolean bindPreparedArchives(") + "\n" + method(source, "private static int uniqueOffset(")
        harness = r'''
import java.util.*;import java.io.*;import java.security.*;
public class PreparedProbe {
 static class JSONException extends Exception {}
 static class Archive {String name="dat000.cpk";byte[] data={1,2,3};}
 static class JSONObject {Map<String,String> values=new HashMap<>();String getString(String k){return values.get(k);}}
 static JSONObject known=new JSONObject();
 static class JSONArray {JSONArray(String text){}int length(){return 1;}JSONObject getJSONObject(int i){return known;}}
 static class App {App getAssets(){return this;}InputStream open(String name){return new ByteArrayInputStream(new byte[0]);}}
 static App app=new App();static String readText(InputStream in){return "";}
 static String hex(byte[] bytes){StringBuilder s=new StringBuilder();for(byte b:bytes)s.append(String.format("%02x",b&255));return s.toString();}
 static byte[] hash(Archive a,String name){try{return MessageDigest.getInstance(name).digest(a.data);}catch(Exception e){throw new AssertionError(e);}}
 static String sha256(Archive a){return hex(hash(a,"SHA-256"));}static byte[] sha1(Archive a){return hash(a,"SHA-1");}
 /* FUNCTIONS */
 public static void main(String[] args)throws Exception {
  ArrayList<Archive> sources=new ArrayList<>();Archive a=new Archive();sources.add(a);
  byte[] original=new byte[20];for(int i=0;i<20;i++)original[i]=(byte)(i+20);
  known.values.put("name",a.name);known.values.put("sourceSha1",hex(original));known.values.put("preparedSha256",sha256(a));
  byte[] exe=new byte[80];System.arraycopy(original,0,exe,10,20);byte[] before=exe.clone();
  if(!bindPreparedArchives(exe,sources))throw new AssertionError("known prepared archive must bind");
  for(int i=0;i<80;i++)if(exe[i]!=(i>=10&&i<30?sha1(a)[i-10]:before[i]))throw new AssertionError("only the checksum record may change");
  a.data[0]^=1;exe=before.clone();
  if(bindPreparedArchives(exe,sources)||!Arrays.equals(exe,before))throw new AssertionError("corruption must not rewrite the expected signature");
  a.data[0]^=1;
  try{bindPreparedArchives(new byte[80],sources);throw new AssertionError("missing checksum");}catch(IOException expected){}
  exe=before.clone();System.arraycopy(original,0,exe,40,20);
  try{bindPreparedArchives(exe,sources);throw new AssertionError("ambiguous checksum");}catch(IOException expected){}
 }
}
'''.replace("/* FUNCTIONS */", functions)
        out = ROOT / "build/tests/prepared-archives"
        out.mkdir(parents=True, exist_ok=True)
        java = Path("C:/Portable/jdk-24.0.1/bin")
        file = out / "PreparedProbe.java"
        file.write_text(harness, encoding="utf-8")
        for command in ([java / "javac.exe", "-encoding", "UTF-8", "-d", out, file],
                        [java / "java.exe", "-cp", out, "PreparedProbe"]):
            result = subprocess.run([str(x) for x in command], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == "__main__":
    unittest.main()
