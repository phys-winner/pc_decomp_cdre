#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <GLES3/gl31.h>
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* FF_ENUMS */
/* FF_KEY */
/* APPEND */

static GLuint compile_ff(GLenum type, const char *source)
{
    char shader[18000];
    const char *main = strstr(source, "void main()");
    assert(main);
    snprintf(shader, sizeof shader, "%.*sout highp vec4 clip_result;\n%s", (int)(main - source), source, main);
    char *end = strrchr(shader, '}');
    assert(end);
    strcpy(end, "clip_result = gl_Position;\n}\n");
    GLuint result = glCreateShader(type);
    const char *text = shader;
    glShaderSource(result, 1, &text, NULL);
    glCompileShader(result);
    GLint ok = 0;
    glGetShaderiv(result, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[4096];
        glGetShaderInfoLog(result, sizeof log, NULL, log);
        fprintf(stderr, "Production vertex shader failed: %s\n%s\n", log, shader);
        exit(1);
    }
    return result;
}

/* GENERATOR */

int main(void)
{
    EGLDisplay display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    EGLint major, minor;
    assert(eglInitialize(display, &major, &minor));
    EGLint attributes[] = {EGL_SURFACE_TYPE, EGL_PBUFFER_BIT, EGL_RENDERABLE_TYPE,
        EGL_OPENGL_ES3_BIT_KHR, EGL_RED_SIZE, 8, EGL_GREEN_SIZE, 8, EGL_BLUE_SIZE, 8, EGL_NONE};
    EGLConfig config;
    EGLint count;
    assert(eglChooseConfig(display, attributes, &config, 1, &count) && count);
    EGLint size[] = {EGL_WIDTH, 16, EGL_HEIGHT, 16, EGL_NONE};
    EGLSurface surface = eglCreatePbufferSurface(display, config, size);
    EGLint version[] = {EGL_CONTEXT_CLIENT_VERSION, 3, EGL_NONE};
    EGLContext context = eglCreateContext(display, config, EGL_NO_CONTEXT, version);
    assert(context != EGL_NO_CONTEXT && surface != EGL_NO_SURFACE);
    assert(eglMakeCurrent(display, surface, surface, context));
    printf("GPU: %s / %s\n", glGetString(GL_RENDERER), glGetString(GL_VERSION));

    ff_vkey key = {0};
    key.inputs = IN_POST;
    GLuint vertex = vertex_shader(&key), program = glCreateProgram();
    GLuint fragment = glCreateShader(GL_FRAGMENT_SHADER);
    const char *pixel = "#version 310 es\nprecision highp float;\nlayout(location=0) out vec4 color;\nvoid main(){color=vec4(1.0);}\n";
    glShaderSource(fragment, 1, &pixel, NULL);
    glCompileShader(fragment);
    const char *varying = "clip_result";
    glAttachShader(program, vertex);
    glAttachShader(program, fragment);
    glTransformFeedbackVaryings(program, 1, &varying, GL_INTERLEAVED_ATTRIBS);
    glLinkProgram(program);
    GLint linked = 0;
    glGetProgramiv(program, GL_LINK_STATUS, &linked);
    if (!linked) {
        char log[4096];
        glGetProgramInfoLog(program, sizeof log, NULL, log);
        fprintf(stderr, "Transform feedback link failed: %s\n", log);
        return 1;
    }
    glUseProgram(program);
    GLuint vao, buffer;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);
    glGenBuffers(1, &buffer);
    glBindBuffer(GL_TRANSFORM_FEEDBACK_BUFFER, buffer);
    glBufferData(GL_TRANSFORM_FEEDBACK_BUFFER, 16, NULL, GL_STREAM_READ);
    glBindBufferBase(GL_TRANSFORM_FEEDBACK_BUFFER, 0, buffer);
    glEnable(GL_RASTERIZER_DISCARD);

    unsigned cases = 0;
    const int scales[] = {25, 50, 75, 100, 125, 150, 175, 200};
    const float rhw[] = {0.125f, 1.0f, 2.5f};
    const float points[][2] = {{0, 0}, {0.23f, 0.71f}, {0.9f, 0.8f}};
    for (unsigned s = 0; s < sizeof scales / sizeof scales[0]; ++s) for (int ui = 0; ui < 2; ++ui) {
        float ratio = ui ? 1.0f : 100.0f / scales[s];
        glUniform4f(glGetUniformLocation(program, "ff_vp"), 120, 80, 1600, 800);
        glUniform2f(glGetUniformLocation(program, "ff_ui_scale"), ratio, ratio);
        glUniform2f(glGetUniformLocation(program, "ff_half"), ratio / 1600, ratio / 800);
        for (unsigned r = 0; r < 3; ++r) for (unsigned p = 0; p < 3; ++p) {
            glVertexAttrib4f(0, 120 + 1600 * points[p][0], 80 + 800 * points[p][1], 0.5f, rhw[r]);
            glBeginTransformFeedback(GL_POINTS);
            glDrawArrays(GL_POINTS, 0, 1);
            glEndTransformFeedback();
            glFinish();
            assert(glGetError() == GL_NO_ERROR);
            float *mapped = glMapBufferRange(GL_TRANSFORM_FEEDBACK_BUFFER, 0, 16, GL_MAP_READ_BIT);
            assert(mapped);
            float clip[4];
            memcpy(clip, mapped, sizeof clip);
            assert(glUnmapBuffer(GL_TRANSFORM_FEEDBACK_BUFFER));
            float x = 2 * points[p][0] - 1 + ratio / 1600;
            float y = 2 * points[p][1] - 1 + ratio / 800;
            if (fabsf(clip[0] / clip[3] - x) > 0.000002f || fabsf(clip[1] / clip[3] - y) > 0.000002f) {
                fprintf(stderr, "POSITIONT mismatch: scale=%d ui=%d rhw=%g point=%u got=(%g,%g) expected=(%g,%g)\n",
                    scales[s], ui, rhw[r], p, clip[0] / clip[3], clip[1] / clip[3], x, y);
                return 1;
            }
            ++cases;
        }
    }
    printf("PASS %u production POSITIONT projections: 25-200%% scene, full-resolution UI, viewport origin and RHW\n", cases);
    glDeleteBuffers(1, &buffer);
    glDeleteVertexArrays(1, &vao);
    glDeleteProgram(program);
    glDeleteShader(vertex);
    glDeleteShader(fragment);
    eglMakeCurrent(display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    eglDestroyContext(display, context);
    eglDestroySurface(display, surface);
    eglTerminate(display);
    return 0;
}
