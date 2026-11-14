"""Execute the real scale settings, startup bounds and scene sizing through 200%."""
from pathlib import Path
import subprocess
import unittest

from test_menu_gestures import method
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'build/tests/render-scale'


class RenderScaleTest(unittest.TestCase):
    def test_choices_persistence_and_startup(self):
        activity = (ROOT / 'android/app/src/org/crashday/port/GameActivity.java').read_text(encoding='utf-8')
        initialize = '\n'.join(line for line in activity.splitlines()
                               if 'renderScale = getIntent().getIntExtra' in line or 'if (renderScale <' in line)
        self.assertEqual(len(initialize.splitlines()), 2)
        methods = '\n'.join(method(activity, signature) for signature in
                            ('void changeRenderScale(int direction)', 'String renderScaleLabel()', 'String upscalerName()'))
        fixture = r'''
public class RenderScaleProbe {
 int renderScale=100,upscaler,runningUpscaler;Integer override;
 static class Prefs {int value=100;int getInt(String key,int fallback){return value;}
  Prefs edit(){return this;}Prefs putInt(String key,int v){assert key.equals("renderScale");value=v;return this;}void apply(){}
 }
 Prefs preferences=new Prefs();
 RenderScaleProbe getIntent(){return this;}int getIntExtra(String key,int fallback){return override==null?fallback:override;}
 int nativeUpscalerStatus(){return 1;}String tr(String e,String r){return e;}
 void load(){ /* INITIALIZE */ }
 /* METHODS */
 public static void main(String[]args){
  RenderScaleProbe p=new RenderScaleProbe();int[] values={25,50,75,100,125,150,175,200};
  p.renderScale=25;
  for(int i=0;i<values.length;++i){assert p.renderScale==values[i];p.changeRenderScale(1);assert p.preferences.value==p.renderScale;}
  assert p.renderScale==25;p.changeRenderScale(-1);assert p.renderScale==200;
  for(int i=values.length-1;i>=0;--i){assert p.renderScale==values[i];p.changeRenderScale(-1);}
  for(int v:values){p.preferences.value=v;p.load();assert p.renderScale==v;assert p.renderScaleLabel().equals(v+"%");}
  p.renderScale=200;p.changeRenderScale(0);RenderScaleProbe restarted=new RenderScaleProbe();
  restarted.preferences=p.preferences;restarted.load();assert restarted.renderScale==200;
  for(int v:new int[]{Integer.MIN_VALUE,0,24,26,99,201,225,Integer.MAX_VALUE}){p.preferences.value=v;p.load();assert p.renderScale==100;}
  p.override=200;p.load();assert p.renderScale==200;p.override=201;p.load();assert p.renderScale==100;
  for(int mode=1;mode<=2;++mode){p.upscaler=mode;p.renderScale=200;assert p.upscalerName().contains("inactive");p.renderScale=100;assert !p.upscalerName().contains("inactive");}
  System.out.println("PASS production 25-200% choices, wrap both ways, saved 200% across restart, intent/bounds, supersampling label");
 }
}'''.replace('/* INITIALIZE */', initialize).replace('/* METHODS */', methods)
        OUT.mkdir(parents=True, exist_ok=True)
        source = OUT / 'RenderScaleProbe.java'
        source.write_text(fixture, encoding='utf-8')
        java = Path('C:/Portable/jdk-24.0.1/bin')
        for command in ([java / 'javac.exe', '-encoding', 'UTF-8', '-d', OUT, source],
                        [java / 'java.exe', '-ea', '-cp', OUT, 'RenderScaleProbe']):
            result = subprocess.run([str(v) for v in command], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)

    def test_native_targets_and_boundaries(self):
        gl = (ROOT / 'android/host/d3d9_gl.c').read_text()
        main = (ROOT / 'android/host/android_main.c').read_text()
        guard = [line for line in main.splitlines() if 'if (render_scale <' in line]
        self.assertEqual(len(guard), 1)
        functions = '\n'.join(method(gl, signature) for signature in
                              ('static void gl_resize_scene(uint32_t percent)', 'static void run_resize_scene(void *args)',
                               'void d3d_gl_resize_scene(d3d_device *d)'))
        fixture = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#define _Atomic
#define atomic_store(p,v) (*(p)=(v))
#define atomic_store_explicit(p,v,o) (*(p)=(v))
#define atomic_load(p) (*(p))
enum {D3DUSAGE_RENDERTARGET=1,D3DUSAGE_DEPTHSTENCIL=2,D3DPOOL_DEFAULT=0};
typedef struct {uint32_t width,height,format,multisample;} d3d_surface;
typedef struct {d3d_surface *backbuffer,*auto_depth;int fbo_dirty;} d3d_device;
static d3d_surface color={2400,1080,22,0},depth={2400,1080,75,0},*scene_color,*scene_depth;
static d3d_device device={&color,&depth,0};
#define RDEV (&device)
static int fsr1_enabled,temporal_requested,temporal_failed,raster_state_valid;
static _Atomic int fsr1_status;
static void scene_destroy(void){free(scene_color);free(scene_depth);scene_color=scene_depth=NULL;}
static void fsr1_init(void){const char *s=getenv("CRASHDAY_UPSCALER");fsr1_enabled=s&&!strcmp(s,"fsr1");atomic_store(&fsr1_status,fsr1_enabled);}
static void publish_ui_scale(d3d_device*d){assert(d->backbuffer->width==2400&&d->backbuffer->height==1080);}
static int d3d_gl_supports_samples(unsigned f,unsigned n){return n<=4;}
static d3d_surface *d3d_surface_create_gpu(d3d_device*d,unsigned w,unsigned h,unsigned f,unsigned u,unsigned p,unsigned samples){
 d3d_surface*s=malloc(sizeof *s);assert(s);*s=(d3d_surface){w,h,f,samples};return s;
}
static void temporal_create(d3d_device*d){if(temporal_requested)assert(scene_color->width<=d->backbuffer->width&&scene_color->height<=d->backbuffer->height);}
static void void_log(const char*f,...){(void)f;}
static void void_fatal(const char*f,...){assert(0);}
static void d3d_rt_sync_state(d3d_device*d){(void)d;}
static void d3d_rt_sync(void(*fn)(void*),void*args){fn(args);}
/* FUNCTIONS */
static int startup(int render_scale){ /* GUARD */ return 0; }
int main(void){
 assert(startup(24)==EINVAL&&startup(25)==0&&startup(100)==0&&startup(200)==0&&startup(201)==EINVAL);
 const char*modes[]={"off","fsr1","fsr3"};unsigned cases=0;
 for(unsigned mode=0;mode<3;++mode)for(unsigned ms=0;ms<=4;ms+=4)for(unsigned percent=25;percent<=200;percent+=25){
  char text[8];snprintf(text,sizeof text,"%u",percent);_putenv_s("CRASHDAY_RENDER_SCALE",text);_putenv_s("CRASHDAY_UPSCALER",modes[mode]);
  color.multisample=depth.multisample=ms;d3d_gl_resize_scene(&device);
  assert(fsr1_enabled==(mode==1&&percent<=100));assert(temporal_requested==(mode==2&&percent<=100));
  if(percent>100)assert(atomic_load(&fsr1_status)==0);
  if(scene_color){assert(scene_color->width==2400*percent/100&&scene_color->height==1080*percent/100);assert(scene_depth&&scene_depth->width==scene_color->width&&scene_depth->height==scene_color->height);}
  else assert(percent==100&&mode==0);
  if(percent==200)assert(scene_color->width==4800&&scene_color->height==2160);
  ++cases;
 }
 _putenv_s("CRASHDAY_UPSCALER","off");
 const char*invalid[]={"","0","24","201","-1","abc","200x"};
 for(unsigned i=0;i<sizeof invalid/sizeof invalid[0];++i){_putenv_s("CRASHDAY_RENDER_SCALE",invalid[i]);d3d_gl_resize_scene(&device);assert(!scene_color);}
 scene_destroy();printf("PASS %u production native scale/mode/MSAA combinations, 4800x2160 scene and 2400x1080 UI, 25/200 startup bounds and invalid scale fallback\n",cases);
 return 0;
}'''.replace('/* FUNCTIONS */', functions).replace('/* GUARD */', guard[0])
        OUT.mkdir(parents=True, exist_ok=True)
        (OUT / 'native.c').write_text(fixture)
        env, linker = environment('x64')
        for command in ([str(CLANG), '/nologo', '/O2', '/std:c11', '/w', '/c', 'native.c', '/Fonative.obj'],
                        [str(linker), '/nologo', 'native.obj', '/OUT:native.exe'], [str(OUT / 'native.exe')]):
            result = subprocess.run(command, cwd=OUT, env=env, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == '__main__':
    unittest.main()
