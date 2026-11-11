/* Core GLES MSAA: resolve before reads, scaling and the window's vertical flip. */
static uint32_t multisample_masks[256];
static d3d_surface *multisample_resolved[2];
static GLuint multisample_read_fbo, multisample_draw_fbo;
static GLuint multisample_copy_program, multisample_copy_vao, multisample_copy_samplers[2];

static void find_multisample_modes(void)
{
    memset(multisample_masks, 0, sizeof multisample_masks);
    for (uint32_t format = 0; format < 256; ++format) {
        const d3d_format *f = d3d_format_find(format);
        if (!f || !f->internal || (!f->render_target && !f->depth) || f->block_bytes || (f->stencil && format != 77)) continue;
        GLint count = 0, samples[32];
        glGetInternalformativ(GL_RENDERBUFFER, f->internal, GL_NUM_SAMPLE_COUNTS, 1, &count);
        if (glGetError() || count < 1) continue;
        if (count > 32) count = 32;
        glGetInternalformativ(GL_RENDERBUFFER, f->internal, GL_SAMPLES, count, samples);
        if (glGetError()) continue;
        for (int i = 0; i < count; ++i)
            if (samples[i] >= 2 && samples[i] <= 16) multisample_masks[format] |= 1u << samples[i];
    }
    void_log("[msaa] sample masks: color X8R8G8B8=%08X, depth D24X8=%08X, D16=%08X",
        multisample_masks[22], multisample_masks[77], multisample_masks[80]);
}

int d3d_gl_supports_samples(uint32_t format, uint32_t samples)
{
    if (!samples) return d3d_format_find(format) != NULL;
    /* shortcut: stencil copies need stencil export; D24X8's packed backing has no D3D stencil data to copy. */
    return format < 256 && samples >= 2 && samples <= 16 && (multisample_masks[format] & (1u << samples)) != 0;
}

static void multisample_framebuffers(void)
{
    if (!multisample_read_fbo) {
        glGenFramebuffers(1, &multisample_read_fbo);
        glGenFramebuffers(1, &multisample_draw_fbo);
    }
}

static d3d_surface *multisample_resolve(d3d_surface *source, int texture_required)
{
    if (!source || (!source->multisample && !(texture_required && source->container))) return source;
    int depth = source->fmt->depth;
    d3d_surface **slot = &multisample_resolved[depth != 0];
    if (!*slot || (*slot)->width != source->width || (*slot)->height != source->height || (*slot)->format != source->format) {
        d3d_surface_free_gpu(*slot);
        *slot = d3d_surface_create_gpu(source->dev, source->width, source->height, source->format,
            depth ? D3DUSAGE_DEPTHSTENCIL : D3DUSAGE_RENDERTARGET, D3DPOOL_DEFAULT, 0);
        if (!*slot) void_fatal("Cannot allocate an MSAA resolve surface");
    }
    multisample_framebuffers();
    GLenum point = depth ? depth_attachment(source) : GL_COLOR_ATTACHMENT0;
    glBindFramebuffer(GL_READ_FRAMEBUFFER, multisample_read_fbo);
    attach(GL_READ_FRAMEBUFFER, point, source);
    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, multisample_draw_fbo);
    attach(GL_DRAW_FRAMEBUFFER, point, *slot);
    if (glCheckFramebufferStatus(GL_READ_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE ||
        glCheckFramebufferStatus(GL_DRAW_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE)
        void_fatal("Incomplete MSAA resolve framebuffer");
    glDisable(GL_SCISSOR_TEST);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
    glDepthMask(GL_TRUE);
    glBlitFramebuffer(0, 0, (GLint)source->width, (GLint)source->height, 0, 0, (GLint)source->width, (GLint)source->height,
        depth ? GL_DEPTH_BUFFER_BIT : GL_COLOR_BUFFER_BIT, GL_NEAREST);
    GLenum error = glGetError();
    if (error) void_fatal("MSAA resolve failed: GL error %04X", error);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);
    raster_state_valid = 0;
    if (RDEV) RDEV->fbo_dirty = 1;
    return *slot;
}

static void attach_read(GLenum point, d3d_surface *source)
{
    source = multisample_resolve(source, 0);
    glBindFramebuffer(GL_READ_FRAMEBUFFER, read_fbo);
    attach(GL_READ_FRAMEBUFFER, point, source);
}

static GLuint multisample_shader(GLenum type, const char *source)
{
    GLuint shader = glCreateShader(type);
    glShaderSource(shader, 1, &source, NULL);
    glCompileShader(shader);
    GLint ok = 0;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[1024];
        glGetShaderInfoLog(shader, sizeof log, NULL, log);
        void_fatal("MSAA copy shader failed: %s", log);
    }
    return shader;
}

static void multisample_copy_init(void)
{
    if (multisample_copy_program) return;
    const char *vertex = "#version 300 es\nprecision highp float;uniform vec4 rect;out vec2 uv;"
        "void main(){vec2 p=vec2(float(gl_VertexID&1),float(gl_VertexID>>1));"
        "gl_Position=vec4(p*2.-1.,0.,1.);uv=mix(rect.xy,rect.zw,p);}";
    const char *fragment = "#version 300 es\nprecision highp float;uniform sampler2D image;uniform bool depth;"
        "in vec2 uv;out vec4 color;void main(){vec4 p=texture(image,uv);color=p;gl_FragDepth=depth?p.r:0.;}";
    GLuint vs = multisample_shader(GL_VERTEX_SHADER, vertex), ps = multisample_shader(GL_FRAGMENT_SHADER, fragment);
    multisample_copy_program = glCreateProgram();
    glAttachShader(multisample_copy_program, vs);
    glAttachShader(multisample_copy_program, ps);
    glLinkProgram(multisample_copy_program);
    glDeleteShader(vs); glDeleteShader(ps);
    GLint ok = 0;
    glGetProgramiv(multisample_copy_program, GL_LINK_STATUS, &ok);
    if (!ok) void_fatal("MSAA copy program link failed");
    glGenVertexArrays(1, &multisample_copy_vao);
    glGenSamplers(2, multisample_copy_samplers);
    for (int i = 0; i < 2; ++i) {
        glSamplerParameteri(multisample_copy_samplers[i], GL_TEXTURE_MIN_FILTER, i ? GL_LINEAR : GL_NEAREST);
        glSamplerParameteri(multisample_copy_samplers[i], GL_TEXTURE_MAG_FILTER, i ? GL_LINEAR : GL_NEAREST);
        glSamplerParameteri(multisample_copy_samplers[i], GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glSamplerParameteri(multisample_copy_samplers[i], GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    }
}

/* GLES cannot blit into a multisampled framebuffer; copy into all samples with a quad. */
static void multisample_copy(d3d_surface *source, const uint32_t *sr, d3d_surface *target, const uint32_t *dr, uint32_t filter)
{
    source = multisample_resolve(source, 1);
    multisample_copy_init();
    multisample_framebuffers();
    int depth = target->fmt->depth;
    GLint program, vertex_array, active, texture, sampler, viewport[4];
    glGetIntegerv(GL_CURRENT_PROGRAM, &program);
    glGetIntegerv(GL_VERTEX_ARRAY_BINDING, &vertex_array);
    glGetIntegerv(GL_ACTIVE_TEXTURE, &active);
    glGetIntegerv(GL_VIEWPORT, viewport);
    glActiveTexture(GL_TEXTURE0 + upload_unit);
    glGetIntegerv(GL_TEXTURE_BINDING_2D, &texture);
    glGetIntegerv(GL_SAMPLER_BINDING, &sampler);
    glBindTexture(GL_TEXTURE_2D, source->gl);
    glBindSampler(upload_unit, multisample_copy_samplers[!depth && filter >= 2]);
    int slot = -1;
    if (RDEV) {
        if (depth) slot = ui_surface(RDEV, RDEV->ds) == target ? 4 : -1;
        else for (int i = 0; i < 4; ++i) if (ui_surface(RDEV, RDEV->rt[i]) == target) slot = i;
    }
    if (slot >= 0) {
        d3d_gl_bind_targets(RDEV);
        glBindFramebuffer(GL_FRAMEBUFFER, fbo);
        GLenum buffer = depth ? GL_NONE : GL_COLOR_ATTACHMENT0 + (GLenum)slot;
        glDrawBuffers(1, &buffer);
        fb_buf_count = -1;
    } else {
        glBindFramebuffer(GL_FRAMEBUFFER, multisample_draw_fbo);
        attach(GL_FRAMEBUFFER, depth ? depth_attachment(target) : GL_COLOR_ATTACHMENT0, target);
    }
    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) void_fatal("Incomplete MSAA copy framebuffer");
    glDisable(GL_BLEND); glDisable(GL_STENCIL_TEST); glDisable(GL_CULL_FACE); glDisable(GL_SCISSOR_TEST);
    glDisable(GL_POLYGON_OFFSET_FILL); glDisable(GL_SAMPLE_ALPHA_TO_COVERAGE); glDisable(GL_SAMPLE_COVERAGE);
    if (depth) { glEnable(GL_DEPTH_TEST); glDepthFunc(GL_ALWAYS); }
    else glDisable(GL_DEPTH_TEST);
    glDepthMask(depth ? GL_TRUE : GL_FALSE);
    glColorMask(!depth, !depth, !depth, !depth);
    GLint x0 = (GLint)dr[0], y0 = (GLint)dr[1], x1 = (GLint)dr[2], y1 = (GLint)dr[3];
    GLfloat u0 = (GLfloat)(int32_t)sr[0] / source->width, v0 = (GLfloat)(int32_t)sr[1] / source->height;
    GLfloat u1 = (GLfloat)(int32_t)sr[2] / source->width, v1 = (GLfloat)(int32_t)sr[3] / source->height;
    if (x1 < x0) { GLfloat t = u0; u0 = u1; u1 = t; }
    if (y1 < y0) { GLfloat t = v0; v0 = v1; v1 = t; }
    glViewport(x0 < x1 ? x0 : x1, y0 < y1 ? y0 : y1, abs(x1 - x0), abs(y1 - y0));
    glUseProgram(multisample_copy_program);
    glUniform1i(glGetUniformLocation(multisample_copy_program, "image"), (GLint)upload_unit);
    glUniform1i(glGetUniformLocation(multisample_copy_program, "depth"), depth);
    glUniform4f(glGetUniformLocation(multisample_copy_program, "rect"), u0, v0, u1, v1);
    glBindVertexArray(multisample_copy_vao);
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
    GLenum error = glGetError();
    if (error) void_fatal("MSAA copy failed: GL error %04X", error);
    glBindTexture(GL_TEXTURE_2D, (GLuint)texture);
    glBindSampler(upload_unit, (GLuint)sampler);
    glActiveTexture((GLenum)active);
    glUseProgram((GLuint)program);
    glBindVertexArray((GLuint)vertex_array);
    glViewport(viewport[0], viewport[1], viewport[2], viewport[3]);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);
    raster_state_valid = 0;
    if (RDEV) RDEV->fbo_dirty = 1;
}

static void multisample_destroy(void)
{
    for (int i = 0; i < 2; ++i) { d3d_surface_free_gpu(multisample_resolved[i]); multisample_resolved[i] = NULL; }
    if (multisample_read_fbo) glDeleteFramebuffers(1, &multisample_read_fbo);
    if (multisample_draw_fbo) glDeleteFramebuffers(1, &multisample_draw_fbo);
    if (multisample_copy_program) glDeleteProgram(multisample_copy_program);
    if (multisample_copy_vao) glDeleteVertexArrays(1, &multisample_copy_vao);
    if (multisample_copy_samplers[0]) glDeleteSamplers(2, multisample_copy_samplers);
    multisample_read_fbo = multisample_draw_fbo = multisample_copy_program = multisample_copy_vao = 0;
    memset(multisample_copy_samplers, 0, sizeof multisample_copy_samplers);
}
