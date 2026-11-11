"""Exercise production cube-surface references without a GPU or a device."""
import os
from pathlib import Path
import subprocess
import unittest

from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/cube-surface-lifetime"
HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct object { uint32_t guest; int refs; void (*destroy)(struct object *); } void_com_object;
typedef struct d3d_texture d3d_texture;
typedef struct { void_com_object com; void *dev; uint32_t width,height,format,usage,pool,pitch,face,level; const void *fmt; d3d_texture *container; } d3d_surface;
typedef struct {d3d_surface s;} d3d_surface_rt;
struct d3d_texture {void_com_object com; void *dev; uint32_t width,height,format,usage,pool,levels,weak_refs; int faces; const void *fmt; d3d_surface **surfaces;};
static void_com_object *objects[512];
static uint32_t next_id=1,args[5],memory[8],surface_class;
static unsigned surfaces_freed,textures_freed;
static void *void_com_host(uint32_t id){assert(id<512&&objects[id]);return objects[id];}
static void void_com_wrap(void_com_object *o,void *cls,int ignored){(void)cls;(void)ignored;assert(next_id<512);o->guest=next_id;objects[next_id++]=o;o->refs=1;}
static uint32_t void_com_addref(void_com_object *o){return ++o->refs;}
static uint32_t void_com_release(void_com_object *o){assert(o->refs>0);uint32_t n=--o->refs;if(!n){objects[o->guest]=NULL;o->destroy(o);}return n;}
static uint32_t d3d_format_pitch(const void *fmt,uint32_t width){(void)fmt;return width*4;}
static void surface_destroy(void_com_object *o){++surfaces_freed;free(o);}
static void texture_destroy(void_com_object *o){d3d_texture*t=(d3d_texture*)o;for(int i=0;i<t->faces*(int)t->levels;++i)assert(!t->surfaces[i]);++textures_freed;free(t->surfaces);free(t);}
#define COM_METHOD(a,b,n) static uint32_t a##_##b(void)
#define THIS_ args[0]
#define ARG(n) args[n]
#define MEM32(a) memory[(a)/4]
#define TEX ((d3d_texture*)void_com_host(THIS_))
#define D3DERR_INVALIDCALL 0x8876086Cu
#define D3D_OK 0
/* PRODUCTION */
static d3d_texture *cube(void){d3d_texture*t=calloc(1,sizeof*t);t->width=t->height=64;t->faces=6;t->levels=3;t->surfaces=calloc(18,sizeof*t->surfaces);void_com_wrap(&t->com,NULL,0);t->com.destroy=texture_destroy;return t;}
static uint32_t get(d3d_texture*t,unsigned face,unsigned level){args[0]=t->com.guest;args[1]=face;args[2]=level;args[3]=4;assert(cube_GetCubeMapSurface()==0);return memory[1];}
int main(void){
 d3d_texture*t=cube();
 for(unsigned face=0;face<6;++face)for(unsigned level=0;level<3;++level){
  uint32_t id=get(t,face,level);d3d_surface*s=void_com_host(id);
  assert(t->com.refs==1&&s->com.refs==1);assert(s->container==t&&s->face==face&&s->level==level);
  assert(get(t,face,level)==id&&s->com.refs==2&&t->com.refs==1);
  assert(surface_release(s)==1&&t->surfaces[face*t->levels+level]==s);
  assert(surface_release(s)==0&&!t->surfaces[face*t->levels+level]&&!objects[id]);
 }
 assert(surfaces_freed==18&&textures_freed==0);
 args[0]=t->com.guest;args[1]=6;args[2]=0;assert(cube_GetCubeMapSurface()==D3DERR_INVALIDCALL);
 args[1]=0;args[2]=3;assert(cube_GetCubeMapSurface()==D3DERR_INVALIDCALL&&t->com.refs==1);
 uint32_t a=get(t,2,1),b=get(t,3,2),parent=t->com.guest;
 args[0]=parent;assert(tex_Release()==0&&objects[parent]);
 assert(surface_release(void_com_host(a))==0&&objects[parent]);
 assert(surface_release(void_com_host(b))==0&&!objects[parent]&&textures_freed==1);
 t=cube();a=get(t,0,0);parent=t->com.guest;t->weak_refs=1;args[0]=parent;
 assert(tex_Release()==0);assert(surface_release(void_com_host(a))==0&&objects[parent]);
 d3d_texture_weak_release(t);assert(!objects[parent]&&textures_freed==2&&surfaces_freed==21);
 for(unsigned i=1;i<next_id;++i)assert(!objects[i]);
 puts("PASS production cube references: all faces/levels, repeated queries, invalid bounds, parent-before-child and weak-owner lifetime; no leaked objects");
 return 0;
}
'''


def function(source, signature):
    begin = source.index(signature)
    brace = source.index("{", begin)
    depth = 1
    end = brace + 1
    while depth:
        depth += (source[end] == "{") - (source[end] == "}")
        end += 1
    return source[begin:end] + "\n"


class CubeLifetimeTest(unittest.TestCase):
    def test_production_lifetime(self):
        source = Path(os.environ.get("CRASHDAY_RESOURCE_SOURCE", ROOT / "android/host/d3d9_resource.c")).read_text(encoding="utf-8")
        signatures = ["static void level_dims(", "static int texture_has_live_surfaces(",
                      "static int texture_can_destroy(", "void d3d_texture_weak_release(",
                      "static uint32_t surface_release(", "uint32_t d3d_texture_surface(",
                      "COM_METHOD(tex, Release, 1)", "COM_METHOD(cube, GetCubeMapSurface, 4)"]
        OUT.mkdir(parents=True, exist_ok=True)
        (OUT / "probe.c").write_text(HARNESS.replace("/* PRODUCTION */", "\n".join(function(source, s) for s in signatures)), encoding="utf-8")
        env, linker = environment("x64")
        commands = [[str(CLANG), "/nologo", "/std:c11", "/O2", "/c", "probe.c", "/Foprobe.obj"],
                    [str(linker), "/nologo", "probe.obj", "/OUT:probe.exe"], [str(OUT / "probe.exe")]]
        for cmd in commands:
            result = subprocess.run(cmd, cwd=OUT, env=env, capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())


if __name__ == "__main__":
    unittest.main()
