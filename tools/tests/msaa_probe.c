/* Compiled with the production surface/attachment functions and MSAA helpers. */
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <GLES3/gl32.h>
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

#define D3DUSAGE_RENDERTARGET 1
#define D3DUSAGE_DEPTHSTENCIL 2
#define D3DPOOL_DEFAULT 0
typedef struct {uint32_t d3d; GLenum internal; int render_target,depth,stencil,block_bytes;} d3d_format;
typedef struct {GLuint gl;} d3d_texture;
typedef struct d3d_device d3d_device;
typedef struct d3d_surface {
    d3d_device *dev; uint32_t width,height,format,usage,multisample,face,level;
    const d3d_format *fmt; d3d_texture *container; GLuint gl;
} d3d_surface;
struct d3d_device {d3d_surface *rt[4],*ds; int fbo_dirty;};
static d3d_device device;
#define RDEV (&device)
static GLuint fbo,read_fbo,upload_unit=7;
static int raster_state_valid,fb_buf_count;
typedef struct {GLuint tex; GLenum target; GLint level,layer;} fb_attachment;
static d3d_format formats[]={{21,GL_RGBA8,1,0,0,0},{22,GL_RGBA8,1,0,0,0},
    {77,GL_DEPTH24_STENCIL8,0,1,1,0},{80,GL_DEPTH_COMPONENT16,0,1,0,0}};
static const d3d_format *d3d_format_find(uint32_t f) {
    for(unsigned i=0;i<sizeof formats/sizeof *formats;++i)if(formats[i].d3d==f)return formats+i;
    return NULL;
}
static void void_log(const char *fmt,...) {va_list args;va_start(args,fmt);vprintf(fmt,args);puts("");va_end(args);}
static _Noreturn void void_fatal(const char *fmt,...) {va_list args;va_start(args,fmt);vfprintf(stderr,fmt,args);fputs("\n",stderr);va_end(args);abort();}
static void d3d_gl_forget_texture(GLuint tex) {(void)tex;}
static void d3d_gl_upload_unit(void) {glActiveTexture(GL_TEXTURE0+upload_unit);}
static void apply_swizzle(GLenum target,const d3d_format *fmt,uint32_t usage) {(void)target;(void)fmt;(void)usage;}
static GLenum face_target(d3d_texture *t,uint32_t face) {(void)t;(void)face;return GL_TEXTURE_2D;}
static d3d_surface *ui_surface(d3d_device *d,d3d_surface *s) {(void)d;return s;}
static d3d_surface *d3d_surface_create_gpu(d3d_device *,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t);
static void d3d_surface_free_gpu(d3d_surface *);
static void d3d_gl_bind_targets(d3d_device *);
/* PRODUCTION */
#include "d3d9_msaa.inc"

static d3d_surface *d3d_surface_create_gpu(d3d_device *d,uint32_t w,uint32_t h,uint32_t fmt,uint32_t usage,uint32_t pool,uint32_t ms) {
    (void)pool;
    d3d_surface *s=calloc(1,sizeof *s);assert(s);
    s->dev=d;s->width=w;s->height=h;s->format=fmt;s->fmt=d3d_format_find(fmt);s->usage=usage;s->multisample=ms;
    assert(s->fmt);run_surface_create(&s);assert(s->gl&&glGetError()==GL_NO_ERROR);return s;
}
static void d3d_surface_free_gpu(d3d_surface *s) {if(s)run_surface_free(&s);}
static void d3d_gl_bind_targets(d3d_device *d) {
    glBindFramebuffer(GL_FRAMEBUFFER,fbo);
    put_attachment(GL_COLOR_ATTACHMENT0,attachment_of(d->rt[0]));
    put_attachment(depth_attachment(d->ds),attachment_of(d->ds));
    GLenum buffer=GL_COLOR_ATTACHMENT0;glDrawBuffers(1,&buffer);glReadBuffer(buffer);
    assert(glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE);
}
static unsigned read_color(d3d_surface *s,uint8_t *pixels) {
    glBindFramebuffer(GL_READ_FRAMEBUFFER,read_fbo);attach_read(GL_COLOR_ATTACHMENT0,s);
    glReadPixels(0,0,s->width,s->height,GL_RGBA,GL_UNSIGNED_BYTE,pixels);
    assert(glGetError()==GL_NO_ERROR);
    unsigned mixed=0;for(unsigned i=0;i<s->width*s->height;++i)if(pixels[i*4]>0&&pixels[i*4]<255)++mixed;
    glBindFramebuffer(GL_FRAMEBUFFER,fbo);return mixed;
}
static GLuint test_program(void) {
    const char *v="#version 300 es\nprecision highp float;uniform bool full;uniform float z;"
        "void main(){vec2 p;if(full)p=vec2(float(gl_VertexID&1),float(gl_VertexID>>1))*2.-1.;"
        "else p=gl_VertexID==0?vec2(-.81,-.73):(gl_VertexID==1?vec2(.91,-.57):vec2(-.37,.87));"
        "gl_Position=vec4(p,z,1.);}";
    const char *f="#version 300 es\nprecision highp float;uniform vec4 tint;out vec4 color;void main(){color=tint;}";
    GLuint vs=multisample_shader(GL_VERTEX_SHADER,v),fs=multisample_shader(GL_FRAGMENT_SHADER,f),p=glCreateProgram();
    glAttachShader(p,vs);glAttachShader(p,fs);glLinkProgram(p);GLint ok=0;glGetProgramiv(p,GL_LINK_STATUS,&ok);assert(ok);
    glDeleteShader(vs);glDeleteShader(fs);return p;
}
static void check_samples(unsigned samples,GLuint program,GLuint array) {
    d3d_surface *color=d3d_surface_create_gpu(RDEV,64,64,22,D3DUSAGE_RENDERTARGET,0,samples);
    d3d_surface *depth=d3d_surface_create_gpu(RDEV,64,64,77,D3DUSAGE_DEPTHSTENCIL,0,samples);
    device.rt[0]=color;device.ds=depth;d3d_gl_bind_targets(RDEV);
    glViewport(0,0,64,64);glColorMask(1,1,1,1);glDepthMask(1);glDisable(GL_SCISSOR_TEST);
    glClearColor(0,0,0,1);glClearDepthf(1);glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glDisable(GL_BLEND);glDisable(GL_STENCIL_TEST);glDisable(GL_CULL_FACE);glEnable(GL_DEPTH_TEST);glDepthFunc(GL_LESS);
    glUseProgram(program);glBindVertexArray(array);
    glUniform1i(glGetUniformLocation(program,"full"),0);glUniform1f(glGetUniformLocation(program,"z"),0);
    glUniform4f(glGetUniformLocation(program,"tint"),1,1,1,1);glDrawArrays(GL_TRIANGLES,0,3);
    uint8_t pixels[128*128*4];unsigned mixed=read_color(color,pixels);
    assert(samples?mixed>0:mixed==0);
    if(samples) {
        d3d_surface *large=d3d_surface_create_gpu(RDEV,128,128,22,D3DUSAGE_RENDERTARGET,0,samples);
        d3d_surface *large_depth=d3d_surface_create_gpu(RDEV,128,128,77,D3DUSAGE_DEPTHSTENCIL,0,samples);
        device.rt[0]=large;device.ds=large_depth;d3d_gl_bind_targets(RDEV);glViewport(0,0,128,128);
        uint32_t sr[4]={0,0,64,64},dr[4]={0,0,128,128};
        multisample_copy(color,sr,large,dr,2);multisample_copy(depth,sr,large_depth,dr,1);
        GLint active_program=0;glGetIntegerv(GL_CURRENT_PROGRAM,&active_program);assert(active_program==(GLint)program);
        unsigned scaled=read_color(large,pixels);assert(scaled>0);
        d3d_gl_bind_targets(RDEV);glViewport(0,0,128,128);glEnable(GL_DEPTH_TEST);glDepthMask(1);glDepthFunc(GL_LESS);
        glColorMask(1,1,1,1);glUniform1i(glGetUniformLocation(program,"full"),1);
        glUniform1f(glGetUniformLocation(program,"z"),.5f);glUniform4f(glGetUniformLocation(program,"tint"),1,0,0,1);
        glDrawArrays(GL_TRIANGLE_STRIP,0,4);read_color(large,pixels);
        const uint8_t *inside=pixels+4*(64*128+64),*outside=pixels+4*(120*128+120);
        assert(inside[0]>250&&inside[1]>250&&inside[2]>250);
        assert(outside[0]>250&&outside[1]<5&&outside[2]<5);
        printf("PASS samples=%u: %u coverage pixels, %u scaled coverage pixels, depth copy and program restoration\n",samples,mixed,scaled);
        device.rt[0]=NULL;device.ds=NULL;d3d_surface_free_gpu(large);d3d_surface_free_gpu(large_depth);
    } else printf("PASS samples=0: sharp single-sample control\n");
    device.rt[0]=NULL;device.ds=NULL;d3d_surface_free_gpu(color);d3d_surface_free_gpu(depth);
}
int main(void) {
    setvbuf(stdout,NULL,_IONBF,0);
    EGLDisplay display=eglGetDisplay(EGL_DEFAULT_DISPLAY);assert(eglInitialize(display,NULL,NULL));
    EGLint attributes[]={EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT_KHR,
        EGL_RED_SIZE,8,EGL_GREEN_SIZE,8,EGL_BLUE_SIZE,8,EGL_NONE},count=0;
    EGLConfig config;assert(eglChooseConfig(display,attributes,&config,1,&count)&&count);
    EGLint context_attributes[]={EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
    EGLContext context=eglCreateContext(display,config,EGL_NO_CONTEXT,context_attributes);assert(context!=EGL_NO_CONTEXT);
    EGLint surface_attributes[]={EGL_WIDTH,16,EGL_HEIGHT,16,EGL_NONE};
    EGLSurface surface=eglCreatePbufferSurface(display,config,surface_attributes);assert(surface!=EGL_NO_SURFACE);
    assert(eglMakeCurrent(display,surface,surface,context));
    printf("GPU %s / %s\n",glGetString(GL_VENDOR),glGetString(GL_RENDERER));find_multisample_modes();
    glGenFramebuffers(1,&fbo);glGenFramebuffers(1,&read_fbo);GLuint array;glGenVertexArrays(1,&array);
    GLuint program=test_program();unsigned tested=0;check_samples(0,program,array);
    for(unsigned n=2;n<=16;++n)if(d3d_gl_supports_samples(22,n)&&d3d_gl_supports_samples(77,n)) {check_samples(n,program,array);++tested;}
    assert(tested);multisample_destroy();puts("PASS production MSAA GPU probe");return 0;
}
