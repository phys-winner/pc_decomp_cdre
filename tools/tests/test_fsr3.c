#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <GLES3/gl32.h>
#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
extern const char *crashday_fsr3_linear32_source(void);
extern void *crashday_fsr3_create(unsigned,unsigned,unsigned,unsigned);
extern void crashday_fsr3_destroy(void *);
extern void crashday_fsr3_jitter(unsigned,unsigned,unsigned,float *,float *);
extern int crashday_fsr3_dispatch(void *,unsigned,unsigned,unsigned,unsigned,unsigned,const float *,float,float,float,float,int);
static GLuint texture(GLenum format,unsigned w,unsigned h)
{
    GLuint t;glGenTextures(1,&t);glBindTexture(GL_TEXTURE_2D,t);glTexStorage2D(GL_TEXTURE_2D,1,format,w,h);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAX_LEVEL,0);assert(!glGetError());return t;
}
static void check_linear32(void)
{
    const char *vs="#version 320 es\nprecision highp float;out vec2 uv;void main(){uv=vec2(float(gl_VertexID&1),float(gl_VertexID>>1));gl_Position=vec4(uv*2.-1.,0.,1.);}";
    const char *prefix="#version 320 es\nprecision highp float;precision highp sampler2D;uniform sampler2D source;in vec2 uv;layout(location=0)out vec4 color;\n";
    const char *main="void main(){color=fsrLinear32(source,uv,0.);}";
    GLuint shaders[2]={glCreateShader(GL_VERTEX_SHADER),glCreateShader(GL_FRAGMENT_SHADER)};
    glShaderSource(shaders[0],1,&vs,NULL);const char *parts[]={prefix,crashday_fsr3_linear32_source(),main};glShaderSource(shaders[1],3,parts,NULL);
    for(int i=0;i<2;++i){glCompileShader(shaders[i]);GLint ok;glGetShaderiv(shaders[i],GL_COMPILE_STATUS,&ok);if(!ok){char log[4096];glGetShaderInfoLog(shaders[i],sizeof log,NULL,log);fprintf(stderr,"%s\n",log);}assert(ok);}
    GLuint program=glCreateProgram();glAttachShader(program,shaders[0]);glAttachShader(program,shaders[1]);glLinkProgram(program);GLint ok;glGetProgramiv(program,GL_LINK_STATUS,&ok);assert(ok);
    GLuint textures[2]={texture(GL_R32F,2,2),texture(GL_RGBA16F,4,4)},fbo,vao;glGenFramebuffers(1,&fbo);glBindFramebuffer(GL_FRAMEBUFFER,fbo);glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,textures[1],0);assert(glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE);
    glActiveTexture(GL_TEXTURE0);glBindTexture(GL_TEXTURE_2D,textures[0]);float values[]={0,.25f,.5f,1};glTexSubImage2D(GL_TEXTURE_2D,0,0,0,2,2,GL_RED,GL_FLOAT,values);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
    glGenVertexArrays(1,&vao);glBindVertexArray(vao);glUseProgram(program);glUniform1i(glGetUniformLocation(program,"source"),0);glViewport(0,0,4,4);glDrawArrays(GL_TRIANGLE_STRIP,0,4);
    float pixels[64];glReadPixels(0,0,4,4,GL_RGBA,GL_FLOAT,pixels);assert(!glGetError());
    for(int y=0;y<4;++y)for(int x=0;x<4;++x){float u=fmaxf(0,fminf(1,(x+.5f)*.5f-.5f)),v=fmaxf(0,fminf(1,(y+.5f)*.5f-.5f));float expected=(.25f*u)*(1-v)+(.5f+.5f*u)*v;assert(fabsf(pixels[(y*4+x)*4]-expected)<.001f);}
    glDeleteProgram(program);glDeleteShader(shaders[0]);glDeleteShader(shaders[1]);glDeleteTextures(2,textures);glDeleteFramebuffers(1,&fbo);glDeleteVertexArrays(1,&vao);
    printf("PASS manual R32F bilinear: all16 values including clamped borders; optional float-linear=%d\n",strstr((const char *)glGetString(GL_EXTENSIONS),"GL_OES_texture_float_linear")!=NULL);fflush(stdout);
}
int main(int argc,char **argv)
{
    EGLDisplay display=eglGetDisplay(EGL_DEFAULT_DISPLAY);EGLint major,minor;
    assert(eglInitialize(display,&major,&minor));
    EGLint attributes[]={EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES3_BIT_KHR,EGL_RED_SIZE,8,EGL_GREEN_SIZE,8,EGL_BLUE_SIZE,8,EGL_NONE};
    EGLConfig config;EGLint count;assert(eglChooseConfig(display,attributes,&config,1,&count)&&count);
    EGLint size[]={EGL_WIDTH,16,EGL_HEIGHT,16,EGL_NONE},version[]={EGL_CONTEXT_CLIENT_VERSION,3,EGL_NONE};
    EGLSurface surface=eglCreatePbufferSurface(display,config,size);EGLContext ctx=eglCreateContext(display,config,EGL_NO_CONTEXT,version);
    assert(surface!=EGL_NO_SURFACE&&ctx!=EGL_NO_CONTEXT&&eglMakeCurrent(display,surface,surface,ctx));
    printf("GPU: %s / %s\n",glGetString(GL_RENDERER),glGetString(GL_VERSION));fflush(stdout);
    check_linear32();
    unsigned cases=0,outW=argc==3?(unsigned)atoi(argv[1]):256,outH=argc==3?(unsigned)atoi(argv[2]):192;
    assert(outW>=128&&outW<=4096&&outH>=96&&outH<=2160);
    float *pixels=malloc((size_t)outW*outH*4*sizeof(float));assert(pixels);
    for(unsigned scale=50;scale<=100;scale+=25){
        unsigned w=outW*scale/100,h=outH*scale/100;
        void *context=crashday_fsr3_create(w,h,outW,outH);assert(context);
        GLuint color=texture(GL_RGBA16F,w,h),depth=texture(GL_R32F,w,h),motion=texture(GL_RGBA16F,w,h),reactive=texture(GL_RGBA8,w,h),output=texture(GL_RGBA16F,outW,outH);
        float *c=calloc(w*h*4,sizeof(float)),*d=calloc(w*h,sizeof(float)),*m=calloc(w*h*4,sizeof(float));
        uint8_t *r=calloc(w*h*4,1);assert(c&&d&&m&&r);
        GLuint fbo;glGenFramebuffers(1,&fbo);
        for(unsigned frame=0;frame<8;++frame){
            for(unsigned i=0;i<w*h;++i){c[i*4]=.2f;c[i*4+1]=.4f;c[i*4+2]=.6f;c[i*4+3]=1;d[i]=.5f;}
            if(frame>=4){
                unsigned start=w/4+(frame-4)*2;
                for(unsigned y=h/4;y<h*3/4;++y)for(unsigned x=start;x<start+w/4;++x){unsigned i=y*w+x;c[i*4]=.8f;c[i*4+1]=.1f;c[i*4+2]=.2f;d[i]=.3f;m[i*4]=-2;}
            }
            glBindTexture(GL_TEXTURE_2D,color);glTexSubImage2D(GL_TEXTURE_2D,0,0,0,w,h,GL_RGBA,GL_FLOAT,c);
            glBindTexture(GL_TEXTURE_2D,depth);glTexSubImage2D(GL_TEXTURE_2D,0,0,0,w,h,GL_RED,GL_FLOAT,d);
            glBindTexture(GL_TEXTURE_2D,motion);glTexSubImage2D(GL_TEXTURE_2D,0,0,0,w,h,GL_RGBA,GL_FLOAT,m);
            glBindTexture(GL_TEXTURE_2D,reactive);glTexSubImage2D(GL_TEXTURE_2D,0,0,0,w,h,GL_RGBA,GL_UNSIGNED_BYTE,r);
            assert(!glGetError());float jitter[2];crashday_fsr3_jitter(frame,w,outW,&jitter[0],&jitter[1]);
            struct timespec start,end;clock_gettime(CLOCK_MONOTONIC,&start);
            assert(crashday_fsr3_dispatch(context,color,depth,motion,reactive,output,jitter,16.6667f,.1f,1000,1,frame==0||frame==4));
            glFinish();clock_gettime(CLOCK_MONOTONIC,&end);double ms=(end.tv_sec-start.tv_sec)*1000.+(end.tv_nsec-start.tv_nsec)*1e-6;
            glBindFramebuffer(GL_FRAMEBUFFER,fbo);glFramebufferTexture2D(GL_FRAMEBUFFER,GL_COLOR_ATTACHMENT0,GL_TEXTURE_2D,output,0);
            assert(glCheckFramebufferStatus(GL_FRAMEBUFFER)==GL_FRAMEBUFFER_COMPLETE);
            glReadPixels(0,0,outW,outH,GL_RGBA,GL_FLOAT,pixels);assert(!glGetError());
            for(unsigned i=0;i<outW*outH;++i)for(unsigned channel=0;channel<3;++channel){float v=pixels[i*4+channel];assert(isfinite(v)&&v>=-.02f&&v<1.2f);if(frame<4&&fabsf(v-.2f*(channel+1))>.025f){fprintf(stderr,"uniform failure scale%u frame%u xy%u,%u c%u %g\n",scale,frame,i%outW,i/outW,channel,v);abort();}}
            if(frame>=4){unsigned x=(w/4+(frame-4)*2+w/8)*outW/w,y=outH/2;float red=pixels[(y*outW+x)*4];assert(red>.7f);}
            printf("FSR3 scale%u frame%u passed %.3f ms\n",scale,frame,ms);fflush(stdout);
        }
        crashday_fsr3_destroy(context);glDeleteFramebuffers(1,&fbo);GLuint textures[]={color,depth,motion,reactive,output};glDeleteTextures(5,textures);
        free(c);free(d);free(m);free(r);++cases;
    }
    printf("FSR3 real GPU graph: %u cases passed\n",cases);free(pixels);return 0;
}
