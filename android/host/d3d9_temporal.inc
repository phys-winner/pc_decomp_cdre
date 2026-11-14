/* Optional temporal inputs; the normal renderer allocates none of these. */
void *crashday_fsr3_create(unsigned, unsigned, unsigned, unsigned);
int crashday_fsr3_supported(void);
void crashday_fsr3_destroy(void *);
void crashday_fsr3_jitter(unsigned, unsigned, unsigned, float *, float *);
int crashday_fsr3_dispatch(void *, unsigned, unsigned, unsigned, unsigned, unsigned,
    const float *, float, float, float, float, int);
static int temporal_requested, temporal_failed, temporal_clear = 1, temporal_reset = 1;
static int temporal_scene_allowed;
static void *temporal_context;
static d3d_surface *temporal_motion, *temporal_reactive, *temporal_linear, *temporal_output;
static d3d_surface *temporal_resolved_motion, *temporal_resolved_reactive;
static GLuint temporal_copy[2], temporal_vao;
static float temporal_jitter[2], temporal_projection[16];
static uint32_t temporal_jitter_frame = UINT32_MAX;
static uint32_t temporal_world_frame = UINT32_MAX;
static uint64_t temporal_time;

int d3d_gl_temporal_enabled(void) { return temporal_requested && !temporal_failed; }

static void temporal_destroy(void)
{
    crashday_fsr3_destroy(temporal_context); temporal_context = NULL;
    d3d_surface_free_gpu(temporal_motion); d3d_surface_free_gpu(temporal_reactive);
    d3d_surface_free_gpu(temporal_linear); d3d_surface_free_gpu(temporal_output);
    d3d_surface_free_gpu(temporal_resolved_motion); d3d_surface_free_gpu(temporal_resolved_reactive);
    temporal_resolved_motion = temporal_resolved_reactive = NULL;
    temporal_motion = temporal_reactive = temporal_linear = temporal_output = NULL;
    temporal_clear = temporal_reset = 1; temporal_time = 0; temporal_jitter_frame = UINT32_MAX;
    temporal_scene_allowed = 0;
}

static void temporal_create(d3d_device *d)
{
    if (!temporal_requested || !scene_color || !scene_depth) return;
    if (!crashday_fsr3_supported()) {
        temporal_failed = 1; atomic_store_explicit(&fsr1_status, -1, memory_order_release);
        void_log("[fsr3] required GLES compute/float capabilities unavailable"); return;
    }
    unsigned w = scene_color->width, h = scene_color->height;
    temporal_motion = d3d_surface_create_gpu(d, w, h, 113, D3DUSAGE_RENDERTARGET, D3DPOOL_DEFAULT, scene_color->multisample);
    temporal_reactive = d3d_surface_create_gpu(d, w, h, 21, D3DUSAGE_RENDERTARGET, D3DPOOL_DEFAULT, scene_color->multisample);
    temporal_linear = d3d_surface_create_gpu(d, w, h, 113, D3DUSAGE_RENDERTARGET, D3DPOOL_DEFAULT, 0);
    temporal_output = d3d_surface_create_gpu(d, d->backbuffer->width, d->backbuffer->height, 113, D3DUSAGE_RENDERTARGET, D3DPOOL_DEFAULT, 0);
    temporal_failed = !temporal_motion || !temporal_reactive || !temporal_linear || !temporal_output;
    if (scene_color->multisample) {
        temporal_resolved_motion = d3d_surface_create_gpu(d, w, h, 113, D3DUSAGE_RENDERTARGET, D3DPOOL_DEFAULT, 0);
        temporal_resolved_reactive = d3d_surface_create_gpu(d, w, h, 21, D3DUSAGE_RENDERTARGET, D3DPOOL_DEFAULT, 0);
        temporal_failed |= !temporal_resolved_motion || !temporal_resolved_reactive;
    }
    if (!fsr1_fbo) glGenFramebuffers(1, &fsr1_fbo);
    if (!fsr1_sampler) {
        glGenSamplers(1, &fsr1_sampler);
        glSamplerParameteri(fsr1_sampler, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glSamplerParameteri(fsr1_sampler, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glSamplerParameteri(fsr1_sampler, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glSamplerParameteri(fsr1_sampler, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    }
    atomic_store_explicit(&fsr1_status, temporal_failed ? -1 : 2, memory_order_release);
}

void d3d_gl_temporal_parameters(d3d_device *d, float jitter[2], float resolution[2], int *scene)
{
    *scene = d3d_gl_temporal_enabled() && temporal_scene_allowed && scene_color && !scene_phase && !scene_promoted && d->rt[0] == d->backbuffer;
    resolution[0] = scene_color ? scene_color->width : 1; resolution[1] = scene_color ? scene_color->height : 1;
    if (*scene && temporal_jitter_frame != d->frame) {
        crashday_fsr3_jitter(d->frame, scene_color->width, d->backbuffer->width, &temporal_jitter[0], &temporal_jitter[1]);
        temporal_jitter_frame = d->frame;
    }
    jitter[0] = *scene ? temporal_jitter[0] * 2 / resolution[0] : 0;
    jitter[1] = *scene ? temporal_jitter[1] * 2 / resolution[1] : 0;
    if (*scene && d->st.transforms[3][15] == 0) memcpy(temporal_projection, d->st.transforms[3], sizeof temporal_projection);
    d3d_decl *decl = d->st.decl;
    if (*scene && d->st.transforms[3][15] == 0) for (int i = 0; decl && i < decl->count; ++i)
        if (decl->elements[i].usage == 0 && decl->elements[i].usage_index == 0) temporal_world_frame = d->frame;
}

static void temporal_targets(d3d_device *d, GLenum bufs[4], int *last)
{
    int enabled = d3d_gl_temporal_enabled() && temporal_scene_allowed && temporal_motion && !scene_phase && !scene_promoted &&
        d->rt[0] == d->backbuffer && !d->rt[1] && !d->rt[2];
    if (enabled && temporal_clear) {
        for (int i = 1; i <= 2; ++i) {
            d3d_surface *s = i == 1 ? temporal_motion : temporal_reactive;
            fb_attachment a = attachment_of(s); put_attachment(GL_COLOR_ATTACHMENT0 + i, a); fb_color[i] = a;
        }
        GLenum three[] = {GL_COLOR_ATTACHMENT0, GL_COLOR_ATTACHMENT1, GL_COLOR_ATTACHMENT2};
        glDrawBuffers(3, three);
        glDisable(GL_SCISSOR_TEST); glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        const float zero[] = {0, 0, 0, 1}, reactive[] = {1, 0, 0, 1};
        glClearBufferfv(GL_COLOR, 1, zero); glClearBufferfv(GL_COLOR, 2, reactive);
        temporal_clear = 0; fb_buf_count = -1; raster_state_valid = 0;
    }
    if (enabled) for (int i = 1; i <= 2; ++i) {
        fb_attachment a = attachment_of(i == 1 ? temporal_motion : temporal_reactive);
        if (!same_attachment(a, fb_color[i])) { put_attachment(GL_COLOR_ATTACHMENT0 + i, a); fb_color[i] = a; }
        bufs[i] = GL_COLOR_ATTACHMENT0 + i; *last = 3;
    }
}

static void temporal_copy_init(void)
{
    if (temporal_copy[0]) return;
    const char *vertex = "#version 310 es\nprecision highp float;out vec2 uv;void main(){"
        "uv=vec2(float(gl_VertexID&1),float(gl_VertexID>>1));gl_Position=vec4(uv*2.-1.,0.,1.);}";
    GLuint vs = fsr1_shader(GL_VERTEX_SHADER, &vertex, 1);
    for (int i = 0; i < 2; ++i) {
        const char *prefix = "#version 310 es\nprecision highp float;uniform highp sampler2D image;in vec2 uv;layout(location=0)out vec4 color;";
        const char *body = i ? "void main(){vec3 c=texture(image,uv).rgb;color=vec4(mix(c*12.92,1.055*pow(max(c,vec3(0.)),vec3(1./2.4))-.055,step(vec3(.0031308),c)),1.);}"
            : "void main(){vec3 c=texture(image,uv).rgb;color=vec4(mix(c/12.92,pow((c+.055)/1.055,vec3(2.4)),step(vec3(.04045),c)),1.);}";
        const char *parts[] = {prefix, body}; GLuint ps = fsr1_shader(GL_FRAGMENT_SHADER, parts, 2);
        if (!vs || !ps) { temporal_failed = 1; break; }
        temporal_copy[i] = glCreateProgram(); glAttachShader(temporal_copy[i], vs); glAttachShader(temporal_copy[i], ps);
        glLinkProgram(temporal_copy[i]); glDeleteShader(ps);
        GLint ok; glGetProgramiv(temporal_copy[i], GL_LINK_STATUS, &ok); if (!ok) { temporal_failed = 1; break; }
    }
    if (vs) glDeleteShader(vs);
    glGenVertexArrays(1, &temporal_vao);
}

static int temporal_upscale(d3d_surface *source, d3d_surface *target)
{
    if (!d3d_gl_temporal_enabled() || !temporal_motion) return 0;
    d3d_device *d = RDEV;
    if (!temporal_scene_allowed || temporal_world_frame != d->frame) { temporal_reset = 1; return 0; }
    source = multisample_resolve(source, 0);
    d3d_surface *depth = multisample_resolve(scene_depth, 0);
    /* Resolve uses one color slot, so consume each color before resolving the next. */
    if (source->multisample) return 0;
    GLint program, vao, active, viewport[4], texture[16], sampler[16], uniform_buffer, ubo[2];
    glGetIntegerv(GL_CURRENT_PROGRAM, &program); glGetIntegerv(GL_VERTEX_ARRAY_BINDING, &vao);
    glGetIntegerv(GL_ACTIVE_TEXTURE, &active); glGetIntegerv(GL_VIEWPORT, viewport);
    glGetIntegerv(GL_UNIFORM_BUFFER_BINDING, &uniform_buffer);
    for (int i = 0; i < 2; ++i) glGetIntegeri_v(GL_UNIFORM_BUFFER_BINDING, i, &ubo[i]);
    for (int i = 0; i < 16; ++i) { glActiveTexture(GL_TEXTURE0 + i); glGetIntegerv(GL_TEXTURE_BINDING_2D, &texture[i]); glGetIntegerv(GL_SAMPLER_BINDING, &sampler[i]); }
    temporal_copy_init();
    glDisable(GL_BLEND); glDisable(GL_DEPTH_TEST); glDisable(GL_STENCIL_TEST); glDisable(GL_CULL_FACE);
    glDisable(GL_SCISSOR_TEST); glDisable(GL_POLYGON_OFFSET_FILL); glDisable(GL_SAMPLE_ALPHA_TO_COVERAGE); glDisable(GL_SAMPLE_COVERAGE);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE); glDepthMask(GL_FALSE);
    glBindVertexArray(temporal_vao);
    for (int i = 0; i < 2 && !temporal_failed; ++i) {
        if (!i) {
            glBindFramebuffer(GL_FRAMEBUFFER, fsr1_fbo); attach(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, temporal_linear);
            glViewport(0, 0, source->width, source->height);
        } else {
            glBindFramebuffer(GL_FRAMEBUFFER, fbo);
            for (int slot = 1; slot < 4; ++slot) { put_attachment(GL_COLOR_ATTACHMENT0 + slot, (fb_attachment){0}); fb_color[slot] = (fb_attachment){0}; }
            attach(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, target);
            fb_depth = (fb_attachment){0}; fb_depth_point = 0; fb_buf_count = -1;
            glViewport(0, 0, target->width, target->height);
        }
        glUseProgram(temporal_copy[i]); glActiveTexture(GL_TEXTURE0); glBindSampler(0, fsr1_sampler);
        glBindTexture(GL_TEXTURE_2D, i ? temporal_output->gl : source->gl);
        glUniform1i(glGetUniformLocation(temporal_copy[i], "image"), 0); glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
        if (!i) {
            if (!temporal_context) temporal_context = crashday_fsr3_create(source->width, source->height, target->width, target->height);
            if (!temporal_context) { temporal_failed = 1; break; }
            float *p = temporal_projection;
            float near_plane = fabsf(p[14] / p[10]), far_plane = fabsf(p[14] / (p[10] - 1));
            if (!isfinite(near_plane) || near_plane <= 0) near_plane = .1f;
            if (!isfinite(far_plane) || far_plane <= near_plane) far_plane = 10000;
            struct timespec now; clock_gettime(CLOCK_MONOTONIC, &now);
            uint64_t ns = (uint64_t)now.tv_sec * 1000000000 + now.tv_nsec;
            float dt = temporal_time ? fminf(1000, (ns - temporal_time) * 1e-6f) : 16.6667f; temporal_time = ns;
            /* Motion and reactive surfaces have independent resolves below. */
            d3d_surface *motion = temporal_motion, *reactive = temporal_reactive;
            if (motion->multisample) {
                uint32_t rect[] = {0, 0, motion->width, motion->height};
                d3d_gl_blit(motion, rect, temporal_resolved_motion, rect, 1);
                d3d_gl_blit(reactive, rect, temporal_resolved_reactive, rect, 1);
                motion = temporal_resolved_motion; reactive = temporal_resolved_reactive;
            }
            if (!crashday_fsr3_dispatch(temporal_context, temporal_linear->gl, depth->gl, motion->gl, reactive->gl,
                temporal_output->gl, temporal_jitter, dt, near_plane, far_plane, 2 * atanf(1 / fabsf(p[5])), temporal_reset)) {
                temporal_failed = 1; break;
            }
            temporal_reset = 0;
            glDisable(GL_SCISSOR_TEST); glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        }
    }
    for (int i = 0; i < 16; ++i) { glActiveTexture(GL_TEXTURE0 + i); glBindTexture(GL_TEXTURE_2D, texture[i]); glBindSampler(i, sampler[i]); }
    for (int i = 0; i < 2; ++i) glBindBufferBase(GL_UNIFORM_BUFFER, i, ubo[i]);
    glBindBuffer(GL_UNIFORM_BUFFER, uniform_buffer);
    glActiveTexture(active); glUseProgram(program); glBindVertexArray(vao);
    glViewport(viewport[0], viewport[1], viewport[2], viewport[3]); glBindFramebuffer(GL_FRAMEBUFFER, fbo);
    raster_state_valid = 0; d->fbo_dirty = 1;
    if (temporal_failed) { atomic_store_explicit(&fsr1_status, -1, memory_order_release); void_log("[fsr3] unavailable; using ordinary scene scaling"); }
    return !temporal_failed;
}

static void temporal_shutdown(void)
{
    temporal_destroy();
    for (int i = 0; i < 2; ++i) { if (temporal_copy[i]) glDeleteProgram(temporal_copy[i]); temporal_copy[i] = 0; }
    if (temporal_vao) glDeleteVertexArrays(1, &temporal_vao); temporal_vao = 0;
}
