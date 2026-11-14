#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <GLES3/gl31.h>
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <stdatomic.h>

#define D3DUSAGE_RENDERTARGET 1
#define D3DPOOL_DEFAULT 0
typedef struct {uint32_t width,height,format,multisample;GLuint gl;} d3d_surface;
typedef struct {int fbo_dirty;} d3d_device;
static d3d_device device;
#define RDEV (&device)
static GLuint upload_unit=7,fbo;
static int raster_state_valid,fb_depth_point,fb_buf_count;
typedef struct {unsigned tex;} fb_attachment;
static fb_attachment fb_depth;
static void void_log(const char *format,...){va_list a;va_start(a,format);vprintf(format,a);puts("");fflush(stdout);va_end(a);}
static void void_fatal(const char *format,...){va_list a;va_start(a,format);vfprintf(stderr,format,a);va_end(a);abort();}
static d3d_surface *d3d_surface_create_gpu(d3d_device *dev,uint32_t w,uint32_t h,uint32_t format,uint32_t usage,uint32_t pool,uint32_t samples)
{
    (void)dev;(void)usage;(void)pool;
    d3d_surface *s=calloc(1,sizeof *s);assert(s);s->width=w;s->height=h;s->format=format;s->multisample=samples;
    if(samples){glGenRenderbuffers(1,&s->gl);glBindRenderbuffer(GL_RENDERBUFFER,s->gl);glRenderbufferStorageMultisample(GL_RENDERBUFFER,samples,GL_RGBA8,w,h);}
    else {glGenTextures(1,&s->gl);glBindTexture(GL_TEXTURE_2D,s->gl);glTexStorage2D(GL_TEXTURE_2D,1,GL_RGBA8,w,h);}
    assert(glGetError()==GL_NO_ERROR);return s;
}
static void d3d_surface_free_gpu(d3d_surface *s){if(!s)return;if(s->multisample)glDeleteRenderbuffers(1,&s->gl);else glDeleteTextures(1,&s->gl);free(s);}
static void attach(GLenum target,GLenum point,d3d_surface *s)
{
    glFramebufferTexture2D(target,GL_DEPTH_STENCIL_ATTACHMENT,GL_TEXTURE_2D,0,0);
    if(s->multisample)glFramebufferRenderbuffer(target,point,GL_RENDERBUFFER,s->gl);
    else glFramebufferTexture2D(target,point,GL_TEXTURE_2D,s->gl,0);
    GLenum buffer=GL_COLOR_ATTACHMENT0;glDrawBuffers(1,&buffer);
}
static d3d_surface *resolved;
static d3d_surface *multisample_resolve(d3d_surface *s,int texture_required)
{
    (void)texture_required;if(!s->multisample)return s;
    d3d_surface_free_gpu(resolved);resolved=d3d_surface_create_gpu(RDEV,s->width,s->height,s->format,1,0,0);
    GLuint frames[2];glGenFramebuffers(2,frames);glBindFramebuffer(GL_FRAMEBUFFER,frames[0]);attach(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,s);
    glBindFramebuffer(GL_FRAMEBUFFER,frames[1]);attach(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,resolved);
    glBindFramebuffer(GL_READ_FRAMEBUFFER,frames[0]);glDisable(GL_SCISSOR_TEST);
    glBlitFramebuffer(0,0,s->width,s->height,0,0,s->width,s->height,GL_COLOR_BUFFER_BIT,GL_NEAREST);
    glDeleteFramebuffers(2,frames);assert(glGetError()==GL_NO_ERROR);return resolved;
}
#include "fsr1_programs.inc"
#include "d3d9_fsr1.inc"

int main(void)
{
    EGLDisplay display=eglGetDisplay(EGL_DEFAULT_DISPLAY);EGLint major,minor;
    assert(eglInitialize(display,&major,&minor));
    EGLint attributes[]={EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT_KHR,EGL_RED_SIZE,8,EGL_GREEN_SIZE,8,EGL_BLUE_SIZE,8,EGL_NONE};
    EGLConfig config;EGLint count;assert(eglChooseConfig(display,attributes,&config,1,&count)&&count);
    EGLint size[]={EGL_WIDTH,16,EGL_HEIGHT,16,EGL_NONE},version[]={EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
    EGLSurface surface=eglCreatePbufferSurface(display,config,size);EGLContext context=eglCreateContext(display,config,EGL_NO_CONTEXT,version);
    assert(surface!=EGL_NO_SURFACE&&context!=EGL_NO_CONTEXT&&eglMakeCurrent(display,surface,surface,context));
    printf("GPU: %s / %s\n",glGetString(GL_RENDERER),glGetString(GL_VERSION));
    setenv("CRASHDAY_UPSCALER","fsr1",1);assert(fsr1_init());
    glGenFramebuffers(1,&fbo);unsigned cases=0;
    for(unsigned scale=25;scale<=100;scale+=25)for(unsigned samples=0;samples<=4;samples+=4){
        d3d_surface *source=d3d_surface_create_gpu(RDEV,128*scale/100,96*scale/100,22,1,0,samples);
        d3d_surface *target=d3d_surface_create_gpu(RDEV,128,96,22,1,0,samples);
        glBindFramebuffer(GL_FRAMEBUFFER,fbo);attach(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,source);
        glDisable(GL_SCISSOR_TEST);glColorMask(1,1,1,1);glClearColor(.2f,.4f,.6f,1);glClear(GL_COLOR_BUFFER_BIT);
        glViewport(2,3,11,13);raster_state_valid=1;device.fbo_dirty=0;
        assert(fsr1_upscale(source,target));GLint viewport[4];glGetIntegerv(GL_VIEWPORT,viewport);
        assert(viewport[0]==2&&viewport[1]==3&&viewport[2]==11&&viewport[3]==13&&!raster_state_valid&&device.fbo_dirty);
        d3d_surface *read=multisample_resolve(target,0);glBindFramebuffer(GL_FRAMEBUFFER,fbo);attach(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,read);
        uint8_t pixels[128*96*4];glReadPixels(0,0,128,96,GL_RGBA,GL_UNSIGNED_BYTE,pixels);
        for(unsigned i=0;i<128*96;++i)for(unsigned c=0;c<4;++c){int expected=c==3?255:51*(c+1);assert(abs((int)pixels[i*4+c]-expected)<=2);}
        /* The subsequent UI stays at output resolution and bypasses both filters. */
        glEnable(GL_SCISSOR_TEST);glScissor(17,23,1,1);glClearColor(0,1,0,1);glClear(GL_COLOR_BUFFER_BIT);glDisable(GL_SCISSOR_TEST);
        uint8_t ui[8];glReadPixels(17,23,2,1,GL_RGBA,GL_UNSIGNED_BYTE,ui);
        assert(ui[0]==0&&ui[1]==255&&ui[2]==0&&ui[4]>45&&ui[4]<57);
        assert(glGetError()==GL_NO_ERROR);
        glBindFramebuffer(GL_FRAMEBUFFER,fbo);attach(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,source);
        glEnable(GL_SCISSOR_TEST);glScissor(0,0,source->width/2,source->height/2);glClearColor(.8f,.2f,.1f,1);glClear(GL_COLOR_BUFFER_BIT);
        glScissor(source->width/2,source->height/2,source->width,source->height);glClearColor(.1f,.8f,.2f,1);glClear(GL_COLOR_BUFFER_BIT);glDisable(GL_SCISSOR_TEST);
        assert(fsr1_upscale(source,target));read=multisample_resolve(target,0);
        glBindFramebuffer(GL_FRAMEBUFFER,fbo);attach(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,read);
        glReadPixels(0,0,128,96,GL_RGBA,GL_UNSIGNED_BYTE,pixels);
        const uint8_t expected[4][3]={{204,51,26},{51,102,153},{51,102,153},{26,204,51}};
        const unsigned locations[]={0,127,95*128,96*128-1};
        for(unsigned p=0;p<4;++p)for(unsigned c=0;c<3;++c)assert(abs((int)pixels[locations[p]*4+c]-expected[p][c])<=3);
        assert(glGetError()==GL_NO_ERROR);++cases;
        d3d_surface_free_gpu(source);d3d_surface_free_gpu(target);
    }
    fsr1_destroy();d3d_surface_free_gpu(resolved);resolved=NULL;glDeleteFramebuffers(1,&fbo);
    puts("PASS FSR1: 8 GPU cases, 25/50/75/100%, single/MSAA4, all pixels/edges, state restoration and full-resolution UI");
    eglMakeCurrent(display,EGL_NO_SURFACE,EGL_NO_SURFACE,EGL_NO_CONTEXT);eglDestroyContext(display,context);eglDestroySurface(display,surface);eglTerminate(display);
    return cases==8?0:1;
}
