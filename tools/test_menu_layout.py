"""Execute the production menu layout on bounded guest widgets, including scale restoration."""
from pathlib import Path
import os
import subprocess
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from tests.host_environment import CLANG, environment

HARNESS = r'''
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
static unsigned char memory[0x900000];
#define GPTR(a) (memory+(a))
#define MEM32(a) (*(uint32_t *)GPTR(a))
#define MEM16(a) (*(uint16_t *)GPTR(a))
#define MEM8(a) (*GPTR(a))
#define MEMF(a) (*(float *)GPTR(a))
static int void_vm_readable(uint32_t a,unsigned n){return a<sizeof memory && n<=sizeof memory-a;}
static int void_vm_writable(uint32_t a,unsigned n){return void_vm_readable(a,n);}
static uint32_t g_esp=0x10000;
static struct {float f32[4];} g_xmm[8];
static int font_entry,font_calls;
static float font_y;
typedef int pthread_mutex_t;
#define PTHREAD_MUTEX_INITIALIZER 0
static void pthread_mutex_lock(int *p){assert(!*p);*p=1;}
static void pthread_mutex_unlock(int *p){assert(*p);*p=0;}
typedef struct {uint32_t esp;unsigned char xmm[sizeof g_xmm];} void_regs;
static void void_regs_save(void_regs *r){r->esp=g_esp;memcpy(r->xmm,g_xmm,sizeof g_xmm);}
static void void_regs_load(const void_regs *r){g_esp=r->esp;memcpy(g_xmm,r->xmm,sizeof g_xmm);}
static uint32_t void_galloc(unsigned n){assert(n==512);return 0x98000;}
static int void_dispatch_find(uint32_t fn){return fn==0x1234;}
static uint32_t void_call_guest_this(uint32_t fn,uint32_t w,unsigned n,const uint32_t *args){
 assert(fn==0x1234&&w==0x9000&&n==3&&!args[0]&&!args[1]&&!args[2]);
 assert(!strcmp((char *)GPTR(MEM32(w+0x180)),"ADDITIONAL SETTINGS"));
 assert(MEM32(w+0x190)==19&&MEM32(w+0x194)==511&&MEM8(w+0x75));
 assert(fabsf(MEMF(w+0x7C)-font_y)<.001f&&fabsf(MEMF(w+0xAC)-font_y)<.001f);
 ++font_calls;g_esp=123;g_xmm[0].f32[0]=123;return 0;
}
static const char *crashday_widget_text(uint32_t w){return w==0x9000 ? "frmTest":"lblTest";}
static int crashday_widget_name(uint32_t w,const char *name){return font_entry&&w==0x9000&&!strcmp(name,"btnCredits");}
static uint32_t crashday_ui_container(void){return 0x3000;}
static int crashday_ui_scene(void *out){(void)out;return font_entry?5:12;}
/* PRODUCTION */
int main(void){
    MEM32(0x869418)=0x1000;MEM32(0x870260)=0x2000;MEMF(0x20E4)=1.625f;
    MEMF(0x85502C)=30;
    for(unsigned font=0;font<2;++font){
        MEMF(0x2000+font*0x1434+0x1ABC)=8;MEMF(0x2000+font*0x1434+0x1AC0)=16;
        MEMF(0x2000+font*0x1434+0x1AC8)=2;MEMF(0x2000+font*0x1434+0x1ACC)=1;
    }
    MEM16(0x3030)=12;MEM32(0x3034)=0x4000;
    MEM32(0x4000+11*4)=0x9000;MEMF(0x907C)=100;MEMF(0x9080)=1040;MEMF(0x9084)=300;MEM8(0x9075)=1;
    for(unsigned i=0;i<11;++i){
        uint32_t w=0x5000+i*0x300;MEM32(0x4000+i*4)=w;
        MEMF(w+0x78)=i&1 ? 520:40;MEMF(w+0x7C)=i==10 ? 596:120+(i/2)*60;
        MEMF(w+0x80)=i&1 ? 480:400;MEMF(w+0x84)=28;MEMF(w+0x1A0)=1;
        memcpy(GPTR(w+0xA8),GPTR(w+0x78),16);MEMF(w+0xA8)=40;
        MEM8(w+0x75)=1;
    }
    unsigned char original[0x3000];memcpy(original,GPTR(0x5000),sizeof original);
    crashday_ui_prepare();assert(menu_layout.top==115 && menu_layout.bottom==375);
    assert(!memcmp(original,GPTR(0x5000),8*0x300));
    assert(!MEM8(0x5000+8*0x300+0x75) && !MEM8(0x5000+9*0x300+0x75));
    for(int scale=125;scale<=150;scale+=25){
        menu_scale=scale;crashday_ui_prepare();
        for(unsigned i=0;i<11;++i){uint32_t w=0x5000+i*0x300;
            assert(MEMF(w+0x78)>=0 && MEMF(w+0x78)+MEMF(w+0x80)<=1040);
            assert(MEMF(w+0xA8)==40 && MEMF(w+0xAC)==MEMF(w+0x7C));
            assert(MEMF(w+0x1A0)==1);
            assert(MEMF(0x3AC0)==16);
            if(MEM8(w+0x75))assert(MEMF(w+0x7C)>=115 && MEMF(w+0x7C)+MEMF(w+0x84)<=375);
        }
        assert(menu_scrollable);menu_scroll_steps=-16;crashday_ui_prepare();
        menu_scroll_steps=-16;crashday_ui_prepare();
        assert(MEM8(0x5000+10*0x300+0x75));
        assert(MEMF(0x5000+10*0x300+0x7C)+MEMF(0x5000+10*0x300+0x84)<=375);
        menu_scroll_steps=16;crashday_ui_prepare();menu_scroll_steps=16;crashday_ui_prepare();assert(menu_layout.scroll==0);
    }
    menu_scale=100;crashday_ui_prepare();
    for(unsigned i=0;i<11;++i){uint32_t w=0x5000+i*0x300;
        assert(MEMF(w+0x1A0)==1 && MEMF(w+0x7C)==(i==10 ? 596:120+(i/2)*60));
        assert(MEM8(w+0x75)==(i<8));
        assert(MEMF(w+0xA8)==40 && MEMF(w+0xAC)==MEMF(w+0x7C));
    }
    assert(menu_scrollable);menu_scroll_steps=-16;crashday_ui_prepare();
    assert(MEM8(0x5000+10*0x300+0x75));
    assert(MEMF(0x3AC0)==16);
    menu_scale=150;crashday_ui_prepare();crashday_ui_draw_begin(0x5000);
    MEM32(g_esp+8)=0;MEMF(g_esp+12)=10;
    float scale=crashday_ui_text_begin(0);assert(scale==1.5f && MEMF(g_esp+12)==15);
    assert(menu_draw_scale==1);crashday_ui_text_end(scale);
    g_xmm[3].f32[0]=0;scale=crashday_ui_text_begin(2);assert(g_xmm[3].f32[0]==24);
    crashday_ui_text_end(scale);crashday_ui_draw_end();assert(menu_draw_scale==1);
    crashday_ui_draw_begin(0x1234);assert(menu_draw_scale==1);
    font_entry=1;MEM32(0x9000)=0x99000;MEM32(0x9900C)=0x1234;
    for(int percent=100;percent<=150;percent+=25){
        float factor=percent/100.0f,height=24*factor,top=160+120*factor;
        MEMF(0x9078)=40;MEMF(0x907C)=top;MEMF(0x9080)=200;MEMF(0x9084)=height;
        memcpy(GPTR(0x90A8),GPTR(0x9078),16);MEM8(0x9075)=1;
        font_y=fminf(top+height*1.3f,420-height);
        assert(settings_entry_y(0x9000)==font_y&&font_y>=top+height&&font_y+height<=420);
        unsigned char widget[0x198];memcpy(widget,GPTR(0x9000),sizeof widget);
        void_regs regs;void_regs_save(&regs);
        crashday_ui_draw_begin(0x9000);crashday_ui_draw_end();
        assert(font_calls==(percent-100)/25+1&&!memcmp(widget,GPTR(0x9000),sizeof widget));
        assert(g_esp==regs.esp&&!memcmp(g_xmm,regs.xmm,sizeof g_xmm));
    }
    MEMF(0x907C)=400;assert(isnan(settings_entry_y(0x9000)));
    MEMF(0x907C)=NAN;assert(isnan(settings_entry_y(0x9000)));
    MEMF(0x907C)=260;MEMF(0x9084)=-1;assert(isnan(settings_entry_y(0x9000)));
    return 0;
}
'''


class MenuLayoutTest(unittest.TestCase):
    def test_car_hitboxes_and_swipes(self):
        from test_menu_gestures import method
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        code = method(source, "static void crashday_ui_snap_pointer(") + "\n" + method(source, "JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeMenuOption")
        probe = r'''
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
#define JNIEXPORT
#define JNICALL
#define JNI_TRUE 1
#define JNI_FALSE 0
typedef void JNIEnv;typedef void *jclass;typedef int jint;typedef int jboolean;
static unsigned char memory[0x900000];
#define GPTR(a) (memory+(a))
#define MEM32(a) (*(uint32_t *)GPTR(a))
#define MEM16(a) (*(uint16_t *)GPTR(a))
#define MEM8(a) memory[a]
#define MEMF(a) (*(float *)GPTR(a))
static int game_started=1,scene=4,downs,ups,mx,my;
static uint32_t gesture_widget,gesture_container=0x1000,gesture_callback=0x1234;
static int void_vm_readable(uint32_t a,unsigned n){return a<sizeof memory&&n<=sizeof memory-a;}
static uint32_t crashday_ui_container(void){return 0x1000;}
static uint32_t crashday_editor_view(void){return 0;}
static int crashday_ui_scene(void *p){return scene;}
static const char *crashday_widget_text(uint32_t w){return w==0x3000?"btnLastCar":w==0x4000?"btnNextCar":w==0x5000?"swtColor":0;}
static int crashday_widget_name(uint32_t w,const char *name){const char *text=crashday_widget_text(w);return text&&!strcmp(text,name);}
static void void_machine_enter(void){}static void void_machine_leave(void){}
static void void_input_screen_size(int *w,int *h){*w=1040;*h=480;}
static void void_input_mouse_warp(int x,int y){mx=x;my=y;}
static void void_input_mouse_button(int button,int down){assert(button==0);if(down)++downs;else ++ups;}
/* PRODUCTION */
int main(void){
 MEM32(0x869418)=0x6000;MEM32(0x6000)=0x1234;MEM32(0x870260)=0x7000;MEMF(0x70E4)=1.625f;
 MEM16(0x1030)=3;MEM32(0x1034)=0x2000;
 for(unsigned i=0;i<3;++i){uint32_t w=0x3000+i*0x1000;MEM32(0x2000+i*4)=w;MEM8(w+0x74)=MEM8(w+0x75)=1;MEMF(w+0x7C)=210;MEMF(w+0x80)=40;MEMF(w+0x84)=60;}
 MEMF(0x3078)=-5;MEMF(0x4078)=1005;MEMF(0x5078)=500;MEMF(0x507C)=350;
 float x=70.f/1040,y=180.f/480;crashday_ui_snap_pointer(&x,&y);assert(fabsf(x*1040-17.5f)<.001f&&y==.5f);
 x=970.f/1040;y=300.f/480;crashday_ui_snap_pointer(&x,&y);assert(fabsf(x*1040-1022.5f)<.001f&&y==.5f);
 assert((int)(x*640)*1.625f>1005); /* Cursor quantization must stay inside the right arrow. */
 x=.5f;y=.5f;crashday_ui_snap_pointer(&x,&y);assert(x==.5f&&y==.5f);
 assert(Java_org_crashday_port_GameActivity_nativeMenuOption(0,0,1)&&mx>1005&&downs==1&&ups==1);
 assert(Java_org_crashday_port_GameActivity_nativeMenuOption(0,0,-1)&&mx>0&&mx<35&&downs==2);
 gesture_widget=0x5000;assert(Java_org_crashday_port_GameActivity_nativeMenuOption(0,0,1)&&mx>500&&mx<540&&my==380);
 gesture_widget=0;gesture_callback=0x9999;assert(!Java_org_crashday_port_GameActivity_nativeMenuOption(0,0,1));
 gesture_callback=0x1234;MEM8(0x4075)=0;assert(!Java_org_crashday_port_GameActivity_nativeMenuOption(0,0,1));
 assert(!Java_org_crashday_port_GameActivity_nativeMenuOption(0,0,0));return 0;
}
'''
        self.run_probe("car-controls", probe.replace("/* PRODUCTION */", code))

    def test_controller_settings_are_visible_and_scrollable(self):
        from test_menu_gestures import method
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        start = source.index("static int menu_scale")
        code = source[start:source.index("JNIEXPORT", start)]
        code += method(source, "void crashday_ui_prepare(void)")
        prefix = HARNESS[:HARNESS.index("int main(void)")]
        prefix = prefix.replace('return w==0x9000 ? "frmTest":"lblTest";', 'return w==0x9000 ? "frmTest":"sldSteerSensitivity";')
        prefix = prefix.replace('return font_entry?5:12;', 'return 22;')
        probe = r'''
int main(void){
 MEM32(0x869418)=0x1000;MEM32(0x870260)=0x2000;MEMF(0x20E4)=1.625f;
 MEM16(0x3030)=4;MEM32(0x3034)=0x4000;
 for(unsigned i=0;i<4;++i){uint32_t w=0x5000+i*0x300;MEM32(0x4000+i*4)=w;
  MEMF(w+0x78)=533;MEMF(w+0x7C)=730+i*145;MEMF(w+0x80)=463;MEMF(w+0x84)=14;
  MEM8(w+0x74)=1;MEM8(w+0x75)=0;memcpy(GPTR(w+0xA8),GPTR(w+0x78),16);
 }
 crashday_ui_prepare();assert(MEM8(0x5075)&&MEMF(0x507C)==190&&MEMF(0x50AC)==190);
 assert(menu_scrollable&&menu_layout.top==182);menu_scroll_steps=-16;crashday_ui_prepare();
 assert(MEM8(0x5975)&&MEMF(0x597C)+14<=420);
 menu_scale=150;menu_scroll_steps=16;crashday_ui_prepare();assert(MEM8(0x5075)&&MEMF(0x507C)>=182);
 return 0;
}
'''
        self.run_probe("controller-settings", prefix.replace("/* PRODUCTION */", code) + probe)

    def test_generated_adapters_are_preserved(self):
        from lift_crashday import apply_host_adapter
        from test_menu_gestures import method
        owners = (("crashday", "0010", 0x00492010), ("crashday", "0026", 0x005BDCA0), ("crashday", "0035", 0x00604680),
                  ("crashday", "0036", 0x00617AA0), ("crashday", "0036", 0x0061A870),
                  ("crashday", "0043", 0x006601F0), ("msvcr120", "0000", 0x1000F594))
        for module, owner, address in owners:
            source = (ROOT / f"generated/{module}/functions_{owner}.c").read_text(encoding="utf-8")
            signature = f"void sub_{address:08X}_lifted(void)"
            lifted = method(source, signature + " {")
            plain = lifted.replace(signature, f"void sub_{address:08X}(void)", 1)
            if plain.startswith("static "): plain = plain[7:]
            emitted = apply_host_adapter({"name": module}, address, plain)
            self.assertIn(lifted, emitted)
            wrapper = method(source, f"void sub_{address:08X}(void)")
            wrapper = wrapper.replace(f"    extern void sub_{address:08X}_lifted(void);\n", "")
            for call in ("crashday_ui_prepare();", "crashday_text_editor_at_cursor();") if address == 0x00492010 else ():
                self.assertIn(call, wrapper)
                self.assertIn(call, emitted)
            if address != 0x00492010:
                self.assertIn(wrapper, emitted)
        source = (ROOT / "generated/crashday/functions_0010.c").read_text(encoding="utf-8")
        body = method(source, "void sub_00494200(void)")
        plain = body.replace("    extern int void_android_menu_overlay(void);\n    if (void_android_menu_overlay()) { g_esp += 4; return; }\n", "", 1)
        draw = "    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x004944B8: call dword ptr [eax + 0xc] */"
        plain = plain.replace("    { extern void crashday_ui_draw_begin(uint32_t), crashday_ui_draw_end(void);\n"
                              "      crashday_ui_draw_begin(ecx);\n  " + draw + "\n      crashday_ui_draw_end(); }", draw, 1)
        self.assertEqual(apply_host_adapter({"name": "crashday"}, 0x00494200, plain), body)
        source = (ROOT / "generated/crashday/functions_0011.c").read_text(encoding="utf-8")
        body = method(source, "void sub_00499E40(void)")
        plain = body.replace("    extern void crashday_race_menu_button(void);\n    crashday_race_menu_button();\n", "", 1)
        self.assertEqual(apply_host_adapter({"name": "crashday"}, 0x00499E40, plain), body)

    def test_race_and_loading_scenes(self):
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        start = source.index("static uint32_t crashday_race_car(void)")
        function = source[start:source.index("int crashday_ui_scene_current", start)]
        from test_menu_gestures import method
        function = function.replace(method(source, "static int crashday_hud_hit(float x, float y)"), "")
        function = function.replace(method(source, "JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeHudHit"), "")
        function = function.replace(method(source, "uint32_t crashday_steering_bits(uint32_t car, uint32_t previous)"), "")
        start = source.index("static uint32_t crashday_race_player(void)")
        function = source[start:source.index("JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeRaceMenuSelect", start)] + function
        probe = r'''
#include <assert.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
static unsigned char memory[0x900000];
#define MEM32(a) (*(uint32_t *)(memory+(a)))
#define MEM16(a) (*(uint16_t *)(memory+(a)))
#define MEM8(a) memory[a]
#define MEMF(a) (*(float *)(memory+(a)))
static const char *widget_name;
static uint32_t crashday_ui_container(void){return 0x1000;}
static int crashday_widget_name(uint32_t w,const char *s){(void)w;return !strcmp(widget_name,s);}
static int void_vm_readable(uint32_t a,unsigned n){return a<sizeof memory && n<=sizeof memory-a;}
static int void_vm_writable(uint32_t a,unsigned n){return void_vm_readable(a,n);}
static uint32_t g_esp=0x10000;
static struct {float f32[4];} g_xmm[8];
static int cinematic_playing;
/* FUNCTION */
int main(void){
    MEM32(0x869418)=0x400;MEM32(0x400)=0x005221F0;MEM8(0x8698E0)=5;
    assert(crashday_ui_scene(0)==15);
    MEM8(0x8698E0)=6;assert(crashday_ui_scene(0)!=15);
    MEM8(0x8698E0)=5;MEM32(0x400)=0x005A3D10;assert(crashday_ui_scene(0)!=15);
    MEM16(0x1030)=1;MEM32(0x1034)=0x2000;MEM32(0x2000)=0x3000;
    widget_name="lblGameObjective";
    MEM8(0x855096)=255;assert(crashday_ui_scene(0)==13);
    MEM8(0x855096)=100;assert(crashday_ui_scene(0)==13);
    MEM8(0x855096)=102;assert(crashday_ui_scene(0)==14);
    widget_name="btnContinueRace";
    MEM32(0x87C79C)=0x4000;MEM32(0x8692E8)=0x5000;MEM8(0x3075)=1;
    MEMF(0x3078)=MEMF(0x30A8)=1650;
    MEM8(0x50B0)=1;assert(crashday_ui_scene(0)==14);
    MEM8(0x50B0)=2;assert(crashday_ui_scene(0)==9);
    MEM8(0x50B0)=4;assert(crashday_ui_scene(0)==18);MEM8(0x50B0)=2;
    MEM32(0x87CBB4)=0xFFFFFFFF; /* CDUser is not the race player collection. */
    MEM32(0x868DB8)=0x20000;MEM32(0x20000)=0x20100;MEM32(0x20004)=0x20104;
    MEM32(0x20100)=0x30000;MEM32(0x30000+0xCAB0)=0x40000;
    MEMF(0x40000+0x7198)=1;assert(crashday_ui_scene(0)==9);
    assert(!crashday_race_weapons());
    MEM32(0x40000+0x7154)=0x90000;assert(crashday_race_weapons()==0x0200);
    MEM8(0x40000+0x6ACC)=1;assert(crashday_race_weapons()==0x0300);
    MEM32(0x40000+0x7154)=0;assert(crashday_race_weapons()==0x0100);
    MEM8(0x40000+0x6ACC)=2;assert(crashday_race_weapons()==0x0100);
    MEMF(0x40000+0x7198)=0;assert(crashday_ui_scene(0)==17);
    cinematic_playing=1;assert(crashday_ui_scene(0)==16);cinematic_playing=0;
    MEMF(0x40000+0x7198)=NAN;assert(crashday_ui_scene(0)==9);
    MEM8(0x4055)=1;assert(crashday_ui_scene(0)==9);
    MEM32(0x4064)=0x6000;MEM32(0x6004)=0x7000;
    for(unsigned state=1;state<=6;++state){MEM8(0x7654)=state;assert(crashday_ui_scene(0)==7);}
    MEM8(0x50B0)=1;assert(crashday_ui_scene(0)==14);
    MEM8(0x50B0)=3;MEM8(0x7654)=0;assert(crashday_ui_scene(0)==9);
    MEM32(0x6004)=0xFFFFFFFF;assert(crashday_ui_scene(0)==9);
    MEM32(0x6004)=0x7000;
    MEM32(0x870260)=0x8000;MEMF(0x80E4)=1.625f;MEM8(0x7654)=1;
    crashday_race_menu_begin(0x7000);
    g_xmm[2].f32[0]=520;g_xmm[3].f32[0]=180;MEMF(g_esp+4)=200;MEMF(g_esp+8)=24;
    crashday_race_menu_button();g_xmm[3].f32[0]=210;crashday_race_menu_button();crashday_race_menu_end();
    assert(crashday_race_menu_select(.5f,210.f/480) && MEM32(0x7658)==1);
    assert(crashday_race_menu_select(.5f,180.f/480) && MEM32(0x7658)==0);
    assert(!crashday_race_menu_select(.1f,180.f/480));assert(!crashday_race_menu_select(NAN,.5f));
    MEM8(0x7654)=3;crashday_race_menu_begin(0x7000);crashday_race_menu_end();
    MEM32(0x7658)=1;assert(crashday_race_menu_select(.1f,.1f)&&MEM32(0x7658)==0);
    MEM8(0x7654)=5;assert(!crashday_race_menu_select(.5f,180.f/480));
    crashday_race_menu_begin(0x7000);g_xmm[2].f32[0]=360;g_xmm[3].f32[0]=350;
    crashday_race_menu_button();g_xmm[2].f32[0]=680;crashday_race_menu_button();crashday_race_menu_end();
    assert(crashday_race_menu_select(680.f/1040,350.f/480) && MEM32(0x7658)==1);
    MEM8(0x7654)=0;
    MEMF(0x30A8)=450;assert(crashday_ui_scene(0)==7);
    MEM8(0x3075)=0;assert(crashday_ui_scene(0)==9);
    widget_name="btnContinueFromStats";assert(crashday_ui_scene(0)==8);
    return 0;
}
'''
        self.run_probe("scene", probe.replace("/* FUNCTION */", function))

    def run_probe(self, name, source):
        out = ROOT / "build/tests/menu-layout" / str(os.getpid()) / name
        out.mkdir(parents=True, exist_ok=True)
        (out / "probe.c").write_text(source, encoding="utf-8")
        env, linker = environment("x64")
        for command in ([CLANG, "/nologo", "/O1", "/std:c11", "/c", "probe.c", "/Foprobe.obj"],
                        [linker, "/nologo", "probe.obj", "/OUT:probe.exe"], [out / "probe.exe"]):
            result = subprocess.run([str(x) for x in command], cwd=out, env=env, capture_output=True, timeout=60)
            self.assertEqual(result.returncode, 0, (result.stdout + result.stderr).decode(errors="replace"))

    def test_list_scroll_keeps_selection(self):
        from test_menu_gestures import method
        from lift_crashday import apply_host_adapter
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        start = source.index("static uint32_t gesture_widget")
        code = source[start:source.index("static void crashday_ui_snap_pointer", start)]
        probe = r'''
#include <assert.h>
#include <stdint.h>
#include <string.h>
static unsigned char memory[0x900000];
#define MEM32(a) (*(uint32_t *)(memory+(a)))
#define MEM8(a) memory[a]
static int void_vm_readable(uint32_t a,unsigned n){return a<sizeof memory && n<=sizeof memory-a;}
static int void_vm_writable(uint32_t a,unsigned n){return void_vm_readable(a,n);}
static uint32_t container=0x2000;
static uint32_t crashday_ui_container(void){return container;}
static const char *crashday_widget_text(uint32_t w){return w==0x3000 ? "lstTracks":0;}
/* CODE */
int main(void){
    MEM32(0x869418)=0x1000;MEM32(0x1000)=0x55;
    gesture_widget=0x3000;gesture_container=container;gesture_callback=0x55;
    MEM8(0x3074)=MEM8(0x3075)=1;MEM32(0x31F4)=100;MEM32(0x321C)=8;MEM32(0x3208)=2;
    assert(crashday_ui_list_scroll(-10) && MEM32(0x3218)==10 && MEM32(0x3208)==2);
    assert(crashday_ui_list_detached(0x3000));
    for(int i=0;i<20;++i)crashday_ui_list_scroll(-16);
    assert(MEM32(0x3218)==92 && MEM32(0x3208)==2);
    for(int i=0;i<20;++i)crashday_ui_list_scroll(16);
    assert(MEM32(0x3218)==0 && MEM32(0x3208)==2);
    MEM32(0x3208)=3;assert(!crashday_ui_list_detached(0x3000));
    container=0x4000;assert(!crashday_ui_list_scroll(-1));
    container=0x2000;MEM32(0x31F4)=4;MEM32(0x3218)=0;
    assert(crashday_ui_list_scroll(-16) && MEM32(0x3218)==0 && MEM32(0x3208)==3);
    MEM32(0x321C)=0;assert(!crashday_ui_list_scroll(-1));
    return 0;
}
'''
        self.run_probe("list-scroll", probe.replace("/* CODE */", code))
        source = (ROOT / "generated/crashday/functions_0011.c").read_text(encoding="utf-8")
        body = method(source, "void sub_004A07E0(void)")
        hook = "    { extern int crashday_ui_list_detached(uint32_t);\n      if (crashday_ui_list_detached(esi)) goto L_004A087A; }\n"
        original = body.replace(hook, "", 1)
        if "touch viewport marker" in original:
            start = original.rfind("    { extern int crashday_ui_list_detached(uint32_t);")
            end = original.index("; touch viewport marker */", start) + len("; touch viewport marker */")
            original = original[:start] + "    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x004A0F97: divss xmm1, xmm0 */" + original[end:]
        self.assertEqual(apply_host_adapter({"name": "crashday"}, 0x004A07E0, original), body)

    def test_scrollbar_viewport_ratio(self):
        source = (ROOT / "generated/crashday/functions_0011.c").read_text(encoding="utf-8")
        end = source.index("; touch viewport marker */") + len("; touch viewport marker */")
        start = source.rfind("    { extern int crashday_ui_list_detached(uint32_t);", 0, end)
        marker = source[start:end]
        probe = r'''
#include <assert.h>
#include <stdint.h>
static uint32_t memory[0x230/4];
#define MEM32(a) memory[(a)/4]
static int detached;
int crashday_ui_list_detached(uint32_t widget){(void)widget;return detached;}
static float ratio(uint32_t count,uint32_t visible,uint32_t first,uint32_t selected){
 uint32_t esi=0;struct {float f32[4];} _xmm[2]={0};
 MEM32(0x1F4)=count;MEM32(0x21C)=visible;MEM32(0x218)=first;MEM32(0x208)=selected;
 _xmm[1].f32[0]=(float)selected;_xmm[0].f32[0]=(float)(count-1);
 /* MARKER */
 assert(MEM32(0x208)==selected);
 return _xmm[1].f32[0];
}
int main(void){
 detached=1;
 assert(ratio(100,8,0,4)==0);assert(ratio(100,8,46,4)==.5f);
 assert(ratio(100,8,92,4)==1);assert(ratio(100,8,200,4)==1);
 assert(ratio(4,8,0,2)==0);assert(ratio(8,8,0,2)==0);
 detached=0;assert(ratio(100,8,46,99)==1);
 return 0;
}
'''
        self.run_probe("list-marker", probe.replace("/* MARKER */", marker))

    def test_splash_preserves_initialization_and_controller_profile(self):
        from test_menu_gestures import method
        from lift_crashday import apply_host_adapter
        source = Path(os.environ.get("CRASHDAY_SPLASH_SOURCE", ROOT / "generated/crashday/functions_0018.c")).read_text(encoding="utf-8")
        body = method(source, "void sub_005221F0(void)")
        start = body.index("L_005222AA:\n") + len("L_005222AA:\n")
        end = body.index("    eax = MEM32(ebp + 0xC);", start)
        hook = body[start:end]
        original = body[:start] + body[end:]
        original = original.replace(
            "    { extern int crashday_skip_splash(void); if (crashday_skip_splash() || CMP_A(_flag_a, _flag_b)) goto L_0052281B; } /* 0x0052280C: ja 0x52281b */",
            "    if (CMP_A(_flag_a, _flag_b)) goto L_0052281B; /* 0x0052280C: ja 0x52281b */", 1)
        if "CRASHDAY_SPLASH_SOURCE" not in os.environ:
            self.assertEqual(apply_host_adapter({"name": "crashday"}, 0x005221F0, original), body)
        callback = method(source, "void sub_00522150(void)")
        probe = r'''
#include <assert.h>
#include <stdint.h>
#include <string.h>
static uint8_t memory[0x880000];
#define MEM8(a) memory[a]
#define MEM32(a) (*(uint32_t *)&memory[a])
#define FK_NONE 0
#define RECOMP_REGS_LOCALS
#define RECOMP_ENTER(a) ((void)(a))
#define RECOMP_REGS_OUT() ((void)0)
#define RECOMP_FLAGS_IN() ((void)0)
#define RECOMP_FLAGS_OUT() ((void)0)
#define PUSH32(s,v) do {uint32_t value=(v);(s)-=4;MEM32(s)=value;} while(0)
#define POP32_VAL(s) ((s)+=4,MEM32((s)-4))
#define RECOMP_CALL(fn) do {PUSH32(esp,0x12345678);fn();} while(0)
static uint32_t esp=0x9000,ebp,ecx;
static int skip,selected_calls,saved_calls,clicks;
static void sub_00620AA0(void){
 assert(ecx==0x1000);uint32_t index=MEM32(esp+4);
 assert(index<3 && MEM32(0x2000+index*0x1D4+0x34));
 MEM32(ecx+0x3D8)=index;++selected_calls;esp+=8;
}
static void sub_006208D0(void){assert(ecx==0x1000);assert(selected_calls==saved_calls+1);++saved_calls;esp+=4;}
static void sub_0062CD90(void){assert(MEM8(0x8698E0)==4);++clicks;esp+=24;}
/* CALLBACK */
int crashday_skip_splash(void){return skip;}
static unsigned phase(unsigned event,unsigned state){
 ebp=0x100;MEM8(ebp+0xC)=(uint8_t)event;MEM8(0x8698E0)=(uint8_t)state;MEM32(0x8698E8)=0x3F800000;
 /* HOOK */
 assert(MEM32(0x8698E8)==(skip?0:0x3F800000));
 assert(esp==0x9000 && ebp==0x100);
 return MEM8(0x8698E0);
}
int main(void){
 MEM32(0x870268)=0x1000;MEM32(0x1504)=0x2000;MEM32(0x1508)=0x2000+3*0x1D4;
 memset(memory+0x2000,0x5A,3*0x1D4);MEM32(0x2034)=0;
 uint8_t bindings[3*0x1D4];memcpy(bindings,memory+0x2000,sizeof bindings);
 for(skip=0;skip<=1;++skip)for(unsigned event=0;event<3;++event)for(unsigned state=0;state<7;++state){
  unsigned expected=state;int before=saved_calls;MEM32(0x13D8)=2;
  if(skip&&event==1){if(state==1)expected=2;else if(state==4)expected=6;else if(state==5)expected=4;}
  assert(phase(event,state)==expected);
  assert(MEM32(0x13D8)==2 && saved_calls-before==(skip&&event==1&&state==5));
  assert(!memcmp(bindings,memory+0x2000,sizeof bindings));
 }
 skip=1;
 MEM32(0x13D8)=0;assert(phase(1,5)==4 && MEM32(0x13D8)==1);
 int saved=saved_calls;assert(phase(1,4)==6 && saved_calls==saved);assert(phase(1,6)==6 && saved_calls==saved);
 MEM32(0x13D8)=0xFFFFFFFF;assert(phase(1,5)==4 && MEM32(0x13D8)==1);
 assert(!memcmp(bindings,memory+0x2000,sizeof bindings));
 MEM32(0x2000+2*0x1D4+0x34)=0;MEM32(0x13D8)=2;
 assert(phase(1,5)==4 && MEM32(0x13D8)==1);
 saved=saved_calls;MEM32(0x2000+0x1D4+0x34)=0;
 assert(phase(1,5)==5 && saved_calls==saved);
 MEM32(0x1508)=MEM32(0x1504);assert(phase(1,5)==5 && saved_calls==saved);
 assert(selected_calls==saved_calls && saved_calls==clicks);
 return 0;
}
'''
        self.run_probe("splash-phases", probe.replace("/* HOOK */", hook).replace("/* CALLBACK */", callback))
        activity = (ROOT / "android/app/src/org/crashday/port/GameActivity.java").read_text(encoding="utf-8")
        self.assertNotIn("ensureTouchController", activity)
        self.assertNotIn("controls.config", activity)

    def test_initial_menu_fade_skip(self):
        from lift_crashday import apply_host_adapter
        anchor = "    RECOMP_CALL(sub_0048B2D0); /* 0x005A3DCD: call 0x48b2d0 */\n    RECOMP_FLAGS_IN();\n"
        changed = apply_host_adapter({"name": "crashday"}, 0x005A3D10, anchor)
        hook = changed[len(anchor):]
        probe = r"""
#include <assert.h>
#include <stdint.h>
static uint32_t memory[0x900000 / 4];
#define MEM32(a) memory[(a)/4]
static int skip;
int crashday_skip_splash(void){return skip;}
int main(void){
 MEM32(0x869418)=0x1000;
 for(skip=0;skip<2;++skip){
  MEM32(0x12B0)=0;
  /* HOOK */
  assert(MEM32(0x12B0)==(skip?0x40800000u:0));
 }
 return 0;
}
"""
        self.run_probe("initial-menu-fade", probe.replace("/* HOOK */", hook))
        self.assertEqual(apply_host_adapter({"name":"crashday"}, 0x005A3D11, anchor), anchor)

    def test_result_blank_tap_preserves_actual_buttons(self):
        from test_menu_gestures import method
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        function = method(source, "static void crashday_ui_snap_pointer(float *x, float *y)")
        probe = r'''
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
static unsigned char memory[0x900000];
#define MEM32(a) (*(uint32_t *)(memory+(a)))
#define MEM16(a) (*(uint16_t *)(memory+(a)))
#define MEM8(a) memory[a]
#define MEMF(a) (*(float *)(memory+(a)))
static int void_vm_readable(uint32_t a,unsigned n){return a<sizeof memory && n<=sizeof memory-a;}
static uint32_t crashday_ui_container(void){return 0x1000;}
static const char *continue_name="btnContinueFromHighscore";
static uint32_t crashday_editor_view(void){return 0;}
static const char *crashday_widget_text(uint32_t w){return w==0x3000?continue_name:"btnShowReplay";}
/* FUNCTION */
static void tap(float x,float y,float ex,float ey){crashday_ui_snap_pointer(&x,&y);assert(fabsf(x-ex)<.00001f&&fabsf(y-ey)<.00001f);}
int main(void){
 MEM32(0x870260)=0x8000;MEMF(0x80E4)=1.625f;
 MEM16(0x1030)=2;MEM32(0x1034)=0x2000;MEM32(0x2000)=0x3000;MEM32(0x2004)=0x4000;
 for(unsigned w=0x3000;w<=0x4000;w+=0x1000){
  MEM8(w+0x74)=MEM8(w+0x75)=1;MEMF(w+0x78)=w==0x3000?40:450;
  MEMF(w+0x7C)=430;MEMF(w+0x80)=180;MEMF(w+0x84)=30;
 }
 tap(.2f,.2f,130.f/1040,445.f/480);
 continue_name="btnContinueFromStats";tap(.2f,.2f,130.f/1040,445.f/480);
 tap(500.f/1040,440.f/480,500.f/1040,440.f/480);
 tap(445.f/1040,440.f/480,451.f/1040,440.f/480);
 MEM8(0x3075)=0;tap(.2f,.2f,.2f,.2f);
 MEM8(0x3075)=1;MEMF(0x3080)=NAN;tap(.2f,.2f,.2f,.2f);
 return 0;
}
'''
        self.run_probe("result-taps", probe.replace("/* FUNCTION */", function))

    def test_touch_hud_coordinates_and_regeneration(self):
        from test_menu_gestures import method
        from lift_crashday import apply_host_adapter
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        function = method(source, "float crashday_hud_y(float y, float offset)")
        # clang-cl on Windows has no GCC atomics; retain the exact production arithmetic.
        function = function.replace("__atomic_load_n(&touch_hud, __ATOMIC_ACQUIRE)", "touch_hud")
        self.run_probe("touch-hud", "#include <assert.h>\nstatic int touch_hud;\n" + function + r'''
int main(void){
 assert(crashday_hud_y(416.4f,250)==416.4f);
 touch_hud=1;assert(crashday_hud_y(416.4f,250)==416.4f-250);
 assert(crashday_hud_y(392,230)==162);
 touch_hud=0;assert(crashday_hud_y(392,230)==392);return 0;
}
''')
        source = (ROOT / "generated/crashday/functions_0026.c").read_text(encoding="utf-8")
        import re
        for address in (0x005B2E60, 0x005C0060):
            body = method(source, f"void sub_{address:08X}(void)")
            plain = body.replace("    extern float crashday_hud_y(float, float);\n", "", 1)
            plain = re.sub(r"sse_u32\(crashday_hud_y\(sse_f32\((0x[0-9A-F]+u|MEM32\(0x[0-9A-F]+\))\), (230|250)\)\)", r"\1", plain)
            self.assertEqual(apply_host_adapter({"name":"crashday"}, address, plain), body)

    def test_production_layout(self):
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        start = source.index("static int menu_scale")
        from test_menu_gestures import method
        actual = source[start:source.index("JNIEXPORT", start)]
        actual += "\n".join(method(source, signature) for signature in (
            "void crashday_ui_draw_begin(uint32_t widget)", "void crashday_ui_draw_end(void)",
            "float crashday_ui_text_begin(unsigned kind)", "void crashday_ui_text_end(float scale)",
            "void crashday_ui_prepare(void)"))
        self.run_probe("layout", HARNESS.replace("/* PRODUCTION */", actual))


if __name__ == "__main__":
    unittest.main()
