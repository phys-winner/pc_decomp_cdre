/* FSR1 runs on display-referred scene color before the full-resolution game UI. */
#define A_CPU 1
#include "../../reference/fsr1/ffx_a.h"
#include "../../reference/fsr1/ffx_fsr1.h"
#undef A_CPU

static int fsr1_enabled;
static _Atomic int fsr1_status;
int d3d_gl_upscaler_status(void) { return atomic_load_explicit(&fsr1_status, memory_order_acquire); }
static GLuint fsr1_programs[2], fsr1_vao, fsr1_fbo, fsr1_sampler;
static d3d_surface *fsr1_intermediate;

static GLuint fsr1_shader(GLenum type, const char *const *parts, int count)
{
    GLuint shader = glCreateShader(type);
    glShaderSource(shader, count, parts, NULL);
    glCompileShader(shader);
    GLint ok = 0; glGetShaderiv(shader, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[4096]; glGetShaderInfoLog(shader, sizeof log, NULL, log);
        void_log("[fsr1] shader compilation failed: %s", log);
        glDeleteShader(shader); return 0;
    }
    return shader;
}

static int fsr1_init(void)
{
    const char *mode = getenv("CRASHDAY_UPSCALER");
    fsr1_enabled = mode && !strcmp(mode, "fsr1");
    atomic_store_explicit(&fsr1_status, fsr1_enabled ? -1 : 0, memory_order_release);
    if (!fsr1_enabled || fsr1_programs[0]) {
        if (fsr1_enabled) atomic_store_explicit(&fsr1_status, 1, memory_order_release);
        return fsr1_enabled;
    }
    const char *vertex = "#version 310 es\nprecision highp float;"
        "void main(){vec2 p=vec2(float(gl_VertexID&1),float(gl_VertexID>>1));gl_Position=vec4(p*2.-1.,0.,1.);}";
    const char *prefix = "#version 310 es\nprecision highp float;precision highp int;precision highp sampler2D;\n"
        "#define A_GPU 1\n#define A_GLSL 1\n"
        "uniform sampler2D image;uniform uvec4 con0,con1,con2,con3;layout(location=0) out vec4 color;\n";
    const char *easu = "AF4 FsrEasuRF(AF2 p){return textureGather(image,p,0);}\n"
        "AF4 FsrEasuGF(AF2 p){return textureGather(image,p,1);}\n"
        "AF4 FsrEasuBF(AF2 p){return textureGather(image,p,2);}\n"
        "void main(){vec3 c;FsrEasuF(c,uvec2(gl_FragCoord.xy),con0,con1,con2,con3);color=vec4(c,1.);}\n";
    const char *rcas = "AF4 FsrRcasLoadF(ASU2 p){return texelFetch(image,clamp(p,ivec2(0),textureSize(image,0)-1),0);}\n"
        "void FsrRcasInputF(inout AF1 r,inout AF1 g,inout AF1 b){}\n"
        "void main(){vec3 c;FsrRcasF(c.r,c.g,c.b,uvec2(gl_FragCoord.xy),con0);color=vec4(c,1.);}\n";
    GLuint vs = fsr1_shader(GL_VERTEX_SHADER, &vertex, 1);
    if (!vs) { fsr1_enabled = 0; return 0; }
    for (int i = 0; i < 2; ++i) {
        const char *parts[] = {prefix, i ? "#define FSR_RCAS_F 1\n" : "#define FSR_EASU_F 1\n",
            fsr1_types_source, fsr1_filter_source, i ? rcas : easu};
        GLuint ps = fsr1_shader(GL_FRAGMENT_SHADER, parts, 5);
        if (!ps) { fsr1_enabled = 0; break; }
        fsr1_programs[i] = glCreateProgram();
        glAttachShader(fsr1_programs[i], vs); glAttachShader(fsr1_programs[i], ps);
        glLinkProgram(fsr1_programs[i]); glDeleteShader(ps);
        GLint ok = 0; glGetProgramiv(fsr1_programs[i], GL_LINK_STATUS, &ok);
        if (!ok) { void_log("[fsr1] shader link failed"); fsr1_enabled = 0; break; }
    }
    glDeleteShader(vs);
    if (!fsr1_enabled) {
        for (int i = 0; i < 2; ++i) { if (fsr1_programs[i]) glDeleteProgram(fsr1_programs[i]); fsr1_programs[i] = 0; }
        return 0;
    }
    glGenVertexArrays(1, &fsr1_vao); glGenFramebuffers(1, &fsr1_fbo); glGenSamplers(1, &fsr1_sampler);
    glSamplerParameteri(fsr1_sampler, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glSamplerParameteri(fsr1_sampler, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glSamplerParameteri(fsr1_sampler, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glSamplerParameteri(fsr1_sampler, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    void_log("[fsr1] EASU + RCAS ready (FP32 GLES)");
    atomic_store_explicit(&fsr1_status, 1, memory_order_release);
    return 1;
}

static int fsr1_upscale(d3d_surface *source, d3d_surface *target)
{
    if (!fsr1_enabled || !fsr1_programs[0]) return 0;
    source = multisample_resolve(source, 0);
    if (!fsr1_intermediate || fsr1_intermediate->width != target->width || fsr1_intermediate->height != target->height) {
        d3d_surface_free_gpu(fsr1_intermediate);
        fsr1_intermediate = d3d_surface_create_gpu(RDEV, target->width, target->height, target->format,
            D3DUSAGE_RENDERTARGET, D3DPOOL_DEFAULT, 0);
        if (!fsr1_intermediate) return 0;
    }
    GLint program, vertex_array, active, texture, sampler, viewport[4];
    glGetIntegerv(GL_CURRENT_PROGRAM, &program); glGetIntegerv(GL_VERTEX_ARRAY_BINDING, &vertex_array);
    glGetIntegerv(GL_ACTIVE_TEXTURE, &active); glGetIntegerv(GL_VIEWPORT, viewport);
    glActiveTexture(GL_TEXTURE0 + upload_unit); glGetIntegerv(GL_TEXTURE_BINDING_2D, &texture);
    glGetIntegerv(GL_SAMPLER_BINDING, &sampler); glBindSampler(upload_unit, fsr1_sampler);
    glDisable(GL_BLEND); glDisable(GL_DEPTH_TEST); glDisable(GL_STENCIL_TEST); glDisable(GL_CULL_FACE);
    glDisable(GL_SCISSOR_TEST); glDisable(GL_POLYGON_OFFSET_FILL);
    glDisable(GL_SAMPLE_ALPHA_TO_COVERAGE); glDisable(GL_SAMPLE_COVERAGE);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE); glDepthMask(GL_FALSE);
    glViewport(0, 0, target->width, target->height); glBindVertexArray(fsr1_vao);
    uint32_t constants[4][4];
    FsrEasuCon(constants[0], constants[1], constants[2], constants[3], source->width, source->height,
        source->width, source->height, target->width, target->height);
    for (int i = 0; i < 2; ++i) {
        glUseProgram(fsr1_programs[i]);
        glUniform1i(glGetUniformLocation(fsr1_programs[i], "image"), upload_unit);
        if (i) FsrRcasCon(constants[0], 0.2f);
        for (int c = 0; c < (i ? 1 : 4); ++c) {
            const char *names[] = {"con0", "con1", "con2", "con3"};
            glUniform4uiv(glGetUniformLocation(fsr1_programs[i], names[c]), 1, constants[c]);
        }
        glBindTexture(GL_TEXTURE_2D, i ? fsr1_intermediate->gl : source->gl);
        glBindFramebuffer(GL_FRAMEBUFFER, i ? fbo : fsr1_fbo);
        attach(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, i ? target : fsr1_intermediate);
        if (i) { fb_depth = (fb_attachment){0}; fb_depth_point = 0; fb_buf_count = -1; }
        if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) void_fatal("Incomplete FSR1 framebuffer");
        glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    }
    GLenum error = glGetError();
    glBindTexture(GL_TEXTURE_2D, (GLuint)texture); glBindSampler(upload_unit, (GLuint)sampler);
    glActiveTexture((GLenum)active); glUseProgram((GLuint)program); glBindVertexArray((GLuint)vertex_array);
    glViewport(viewport[0], viewport[1], viewport[2], viewport[3]); glBindFramebuffer(GL_FRAMEBUFFER, fbo);
    raster_state_valid = 0; RDEV->fbo_dirty = 1;
    if (error) void_fatal("FSR1 failed: GL error %04X", error);
    return 1;
}

static void fsr1_destroy(void)
{
    d3d_surface_free_gpu(fsr1_intermediate); fsr1_intermediate = NULL;
    for (int i = 0; i < 2; ++i) { if (fsr1_programs[i]) glDeleteProgram(fsr1_programs[i]); fsr1_programs[i] = 0; }
    if (fsr1_vao) glDeleteVertexArrays(1, &fsr1_vao);
    if (fsr1_fbo) glDeleteFramebuffers(1, &fsr1_fbo);
    if (fsr1_sampler) glDeleteSamplers(1, &fsr1_sampler);
    fsr1_vao = fsr1_fbo = fsr1_sampler = 0;
}
