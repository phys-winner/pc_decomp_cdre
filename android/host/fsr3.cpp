/* GLES backend for the pinned AMD FSR3.1.4 upscaler, without frame generation. */
#include <GLES3/gl32.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <stdio.h>
#include <math.h>
#define FFX_GCC
#define _countof(a) (sizeof(a) / sizeof((a)[0]))
template<size_t N> static int wcscpy_s(wchar_t (&dst)[N], const wchar_t *src)
{
    size_t size = wcslen(src);
    if (size >= N) { dst[0] = 0; return 1; }
    memcpy(dst, src, (size + 1) * sizeof(wchar_t)); return 0;
}
#include <FidelityFX/host/ffx_types.h>
/* Android wchar_t is four bytes; SDK's opaque context budget assumes Windows. */
#undef FFX_SDK_DEFAULT_CONTEXT_SIZE
#define FFX_SDK_DEFAULT_CONTEXT_SIZE (1024 * 256)
#include "../../reference/fsr3/sdk/src/components/fsr3upscaler/ffx_fsr3upscaler.cpp"
#include "../../reference/fsr3/sdk/src/shared/ffx_message.cpp"
#include "../../reference/fsr3/sdk/src/shared/ffx_assert.cpp"
#include "../../reference/fsr3/sdk/src/shared/ffx_object_management.cpp"

struct PassMeta {
    const char *source;
    unsigned srvs, uavs, images, buffers;
    struct { const char *name; bool linear; } srv[16];
    const char *uav[16];
    struct { unsigned resource, binding; GLenum format; bool atlas; GLenum access; } image[8];
    struct { const char *name, *block; } cb[2];
};
#include "fsr3_programs.inc"
#ifdef CRASHDAY_FSR3_TEST
extern "C" const char *crashday_fsr3_linear32_source(void) { return fsr3_linear32; }
#endif

struct Resource {
    FfxResourceDescription desc;
    GLuint texture, atlas;
    GLenum format;
    bool owned;
};
struct Pipeline {
    GLuint program;
    const PassMeta *meta;
    int units[16][2];
};
struct Fsr3 {
    FfxFsr3UpscalerContext context;
    FfxInterface api;
    Resource resources[128];
    unsigned owned, registered;
    Pipeline pipelines[11];
    FfxGpuJobDescription jobs[48];
    unsigned jobCount, staged;
    uint32_t constants[32][256];
    GLuint samplers[2], ubos[2], fbo;
    FfxResource shared[3];
    unsigned width, height, outWidth, outHeight;
    bool created;
};
static Fsr3 *backend(FfxInterface *api) { return (Fsr3 *)api->scratchBuffer; }
static GLenum format_gl(FfxSurfaceFormat format)
{
    switch (format) {
    case FFX_SURFACE_FORMAT_R16_SNORM:
    case FFX_SURFACE_FORMAT_R32_FLOAT: return GL_R32F;
    case FFX_SURFACE_FORMAT_R16_FLOAT: case FFX_SURFACE_FORMAT_R16G16_FLOAT:
    case FFX_SURFACE_FORMAT_R16G16B16A16_FLOAT: return GL_RGBA16F;
    case FFX_SURFACE_FORMAT_R32G32_FLOAT: case FFX_SURFACE_FORMAT_R32G32B32A32_FLOAT: return GL_RGBA32F;
    case FFX_SURFACE_FORMAT_R8_UNORM: case FFX_SURFACE_FORMAT_R8G8_UNORM:
    case FFX_SURFACE_FORMAT_R8G8B8A8_UNORM: return GL_RGBA8;
    case FFX_SURFACE_FORMAT_R32_UINT: return GL_R32UI;
    default: return 0;
    }
}
static FfxResource external(GLuint texture, unsigned width, unsigned height, FfxSurfaceFormat format)
{
    FfxResource r = {};
    r.resource = (void *)(uintptr_t)texture;
    r.description = {FFX_RESOURCE_TYPE_TEXTURE2D, format, {width}, {height}, {1}, 1,
        FFX_RESOURCE_FLAGS_NONE, FFX_RESOURCE_USAGE_UAV};
    r.state = FFX_RESOURCE_STATE_COMPUTE_READ;
    return r;
}
static FfxVersionNumber sdk_version(FfxInterface *) { return FFX_SDK_MAKE_VERSION(1, 1, 4); }
static FfxErrorCode create_backend(FfxInterface *, FfxEffect, FfxEffectBindlessConfig *, FfxUInt32 *id)
{ *id = 0; return FFX_OK; }
static FfxErrorCode destroy_backend(FfxInterface *, FfxUInt32) { return FFX_OK; }
static FfxErrorCode capabilities(FfxInterface *, FfxDeviceCapabilities *caps)
{
    *caps = {}; caps->maximumSupportedShaderModel = FFX_SHADER_MODEL_6_0;
    caps->waveLaneCountMin = caps->waveLaneCountMax = 32;
    return FFX_OK;
}
static FfxErrorCode memory_usage(FfxInterface *, FfxUInt32, FfxEffectMemoryUsage *usage)
{ *usage = {}; return FFX_OK; }
static FfxErrorCode create_resource(FfxInterface *api, const FfxCreateResourceDescription *create,
                                  FfxUInt32, FfxResourceInternal *out)
{
    Fsr3 *b = backend(api);
    GLenum format = format_gl(create->resourceDescription.format);
    if (!format || b->owned + 1 >= 96 || create->resourceDescription.type != FFX_RESOURCE_TYPE_TEXTURE2D)
        return FFX_ERROR_INVALID_ARGUMENT;
    Resource *r = &b->resources[++b->owned];
    b->registered = b->owned;
    r->desc = create->resourceDescription; r->format = format; r->owned = true;
    if (!r->desc.mipCount) {
        unsigned size = r->desc.width > r->desc.height ? r->desc.width : r->desc.height;
        for (; size; size >>= 1) ++r->desc.mipCount;
    }
    glGenTextures(1, &r->texture); glBindTexture(GL_TEXTURE_2D, r->texture);
    glTexStorage2D(GL_TEXTURE_2D, r->desc.mipCount, format, r->desc.width, r->desc.height);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, r->desc.mipCount - 1);
    if (create->initData.type != FFX_RESOURCE_INIT_DATA_TYPE_UNINITIALIZED) {
        const unsigned count = r->desc.width * r->desc.height;
        unsigned components = format == GL_R32F || format == GL_R32UI ? 1 : 4;
        float *data = (float *)calloc(count * components, sizeof(float));
        if (!data) return FFX_ERROR_OUT_OF_MEMORY;
        if (create->initData.type == FFX_RESOURCE_INIT_DATA_TYPE_BUFFER) {
            const void *src = create->initData.buffer;
            switch (r->desc.format) {
            case FFX_SURFACE_FORMAT_R16_SNORM:
                for (unsigned i = 0; i < count; ++i) data[i] = fmaxf(-1, ((const int16_t *)src)[i] / 32767.0f);
                break;
            case FFX_SURFACE_FORMAT_R32G32_FLOAT:
                for (unsigned i = 0; i < count; ++i) memcpy(data + i * 4, (const float *)src + i * 2, 8);
                break;
            case FFX_SURFACE_FORMAT_R8_UNORM:
                for (unsigned i = 0; i < count; ++i) data[i * 4] = ((const uint8_t *)src)[i] / 255.0f;
                break;
            default:
                if (create->initData.size > count * components * sizeof(float)) { free(data); return FFX_ERROR_INVALID_ARGUMENT; }
                memcpy(data, src, create->initData.size);
                break;
            }
        } else memset(data, create->initData.value, count * components * sizeof(float));
        if (format == GL_RGBA8) {
            uint8_t *bytes = (uint8_t *)malloc(count * components);
            if (!bytes) { free(data); return FFX_ERROR_OUT_OF_MEMORY; }
            for (unsigned i = 0; i < count * components; ++i) bytes[i] = (uint8_t)lroundf(fmaxf(0, fminf(1, data[i])) * 255);
            glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, r->desc.width, r->desc.height, GL_RGBA, GL_UNSIGNED_BYTE, bytes);
            free(bytes);
        } else glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, r->desc.width, r->desc.height,
            format == GL_R32UI ? GL_RED_INTEGER : components == 1 ? GL_RED : GL_RGBA,
            format == GL_R32UI ? GL_UNSIGNED_INT : GL_FLOAT, data);
        free(data);
    }
    out->internalIndex = b->owned;
    GLenum error = glGetError();
    if (error) fprintf(stderr, "[fsr3] resource %ls %ux%u format%x error%x\n", create->name, r->desc.width, r->desc.height, format, error);
    return error ? FFX_ERROR_BACKEND_API_ERROR : FFX_OK;
}
static FfxErrorCode destroy_resource(FfxInterface *api, FfxResourceInternal id, FfxUInt32)
{
    if (id.internalIndex > 0) {
        Resource *r = &backend(api)->resources[id.internalIndex];
        if (r->owned) glDeleteTextures(1, &r->texture);
        if (r->atlas) glDeleteTextures(1, &r->atlas);
        *r = {};
    }
    return FFX_OK;
}
static FfxErrorCode register_resource(FfxInterface *api, const FfxResource *input, FfxUInt32, FfxResourceInternal *out)
{
    Fsr3 *b = backend(api);
    if (!input->resource) { out->internalIndex = 0; return FFX_OK; }
    if (b->registered + 1 >= 128) return FFX_ERROR_OUT_OF_MEMORY;
    out->internalIndex = ++b->registered;
    Resource *r = &b->resources[b->registered];
    *r = {}; r->texture = (GLuint)(uintptr_t)input->resource;
    r->desc = input->description; r->format = format_gl(r->desc.format);
    return r->format ? FFX_OK : FFX_ERROR_INVALID_ARGUMENT;
}
static FfxResource get_resource(FfxInterface *api, FfxResourceInternal id)
{
    Resource *r = &backend(api)->resources[id.internalIndex];
    FfxResource out = {}; out.resource = (void *)(uintptr_t)r->texture; out.description = r->desc;
    out.state = FFX_RESOURCE_STATE_COMPUTE_READ; return out;
}
static FfxResourceDescription resource_description(FfxInterface *api, FfxResourceInternal id)
{ return backend(api)->resources[id.internalIndex].desc; }
static FfxErrorCode unregister_resources(FfxInterface *api, FfxCommandList, FfxUInt32)
{ Fsr3 *b = backend(api); b->registered = b->owned; return FFX_OK; }
static FfxErrorCode stage_constants(FfxInterface *api, void *data, FfxUInt32 size, FfxConstantBuffer *out)
{
    Fsr3 *b = backend(api);
    if (b->staged >= 32 || size > sizeof b->constants[0] || size % 4) return FFX_ERROR_OUT_OF_MEMORY;
    out->data = b->constants[b->staged++]; out->num32BitEntries = size / 4;
    memcpy(out->data, data, size); return FFX_OK;
}
static void binding_name(FfxResourceBinding *binding, const char *name, unsigned index)
{
    binding->slotIndex = index;
    for (unsigned i = 0; name[i] && i + 1 < FFX_RESOURCE_NAME_SIZE; ++i) binding->name[i] = name[i];
}
static FfxErrorCode create_pipeline(FfxInterface *api, FfxEffect, FfxPass pass, uint32_t,
    const FfxPipelineDescription *description, FfxUInt32, FfxPipelineState *out)
{
    if (pass >= 11) return FFX_ERROR_INVALID_ARGUMENT;
    Pipeline *p = &backend(api)->pipelines[pass];
    const PassMeta *m = p->meta = &fsr3_meta[pass];
    GLuint shader = glCreateShader(GL_COMPUTE_SHADER);
    glShaderSource(shader, 1, &m->source, NULL); glCompileShader(shader);
    GLint ok; glGetShaderiv(shader, GL_COMPILE_STATUS, &ok);
    if (!ok) { char log[4096]; glGetShaderInfoLog(shader, sizeof log, NULL, log); fprintf(stderr, "[fsr3] shader %u: %s\n", pass, log); glDeleteShader(shader); return FFX_ERROR_BACKEND_API_ERROR; }
    p->program = glCreateProgram(); glAttachShader(p->program, shader); glLinkProgram(p->program); glDeleteShader(shader);
    glGetProgramiv(p->program, GL_LINK_STATUS, &ok);
    if (!ok) { char log[4096]; glGetProgramInfoLog(p->program, sizeof log, NULL, log); fprintf(stderr, "[fsr3] link %u: %s\n", pass, log); return FFX_ERROR_BACKEND_API_ERROR; }
    *out = {}; out->pipeline = p; out->passId = pass; wcscpy_s(out->name, description->name);
    out->srvTextureCount = m->srvs; out->uavTextureCount = m->uavs; out->constCount = m->buffers;
    glUseProgram(p->program);
    int unit = 0;
    for (unsigned i = 0; i < m->srvs; ++i) {
        binding_name(&out->srvTextureBindings[i], m->srv[i].name, i);
        for (int linear = 0; linear < 2; ++linear) {
            char name[160]; snprintf(name, sizeof name, "%s%s", m->srv[i].name, linear ? "_linear" : "");
            GLint location = glGetUniformLocation(p->program, name);
            p->units[i][linear] = location < 0 ? -1 : unit++;
            if (location >= 0) glUniform1i(location, p->units[i][linear]);
        }
    }
    if (unit > 16) return FFX_ERROR_BACKEND_API_ERROR;
    for (unsigned i = 0; i < m->uavs; ++i) binding_name(&out->uavTextureBindings[i], m->uav[i], i);
    for (unsigned i = 0; i < m->buffers; ++i) {
        binding_name(&out->constantBufferBindings[i], m->cb[i].name, i);
        GLuint block = glGetUniformBlockIndex(p->program, m->cb[i].block);
        if (block != GL_INVALID_INDEX) glUniformBlockBinding(p->program, block, i);
    }
    return FFX_OK;
}
static FfxErrorCode destroy_pipeline(FfxInterface *, FfxPipelineState *pipeline, FfxUInt32)
{
    Pipeline *p = (Pipeline *)pipeline->pipeline;
    if (p && p->program) { glDeleteProgram(p->program); p->program = 0; }
    return FFX_OK;
}
static FfxErrorCode schedule_job(FfxInterface *api, const FfxGpuJobDescription *job)
{
    Fsr3 *b = backend(api);
    if (b->jobCount >= _countof(b->jobs)) return FFX_ERROR_OUT_OF_MEMORY;
    b->jobs[b->jobCount++] = *job; return FFX_OK;
}
static FfxErrorCode execute_jobs(FfxInterface *api, FfxCommandList, FfxUInt32)
{
    Fsr3 *b = backend(api);
    glBindFramebuffer(GL_FRAMEBUFFER, b->fbo);
    glDisable(GL_SCISSOR_TEST); glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
    for (unsigned j = 0; j < b->jobCount; ++j) {
        FfxGpuJobDescription *job = &b->jobs[j];
        if (job->jobType == FFX_GPU_JOB_CLEAR_FLOAT) {
            Resource *r = &b->resources[job->clearJobDescriptor.target.internalIndex];
            for (unsigned mip = 0; mip < r->desc.mipCount; ++mip) {
                glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, r->texture, mip);
                if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) return FFX_ERROR_BACKEND_API_ERROR;
                if (r->format == GL_R32UI) glClearBufferuiv(GL_COLOR, 0, (const GLuint *)job->clearJobDescriptor.color);
                else glClearBufferfv(GL_COLOR, 0, job->clearJobDescriptor.color);
            }
        } else if (job->jobType == FFX_GPU_JOB_COMPUTE) {
            FfxComputeJobDescription *c = &job->computeJobDescriptor;
            Pipeline *p = (Pipeline *)c->pipeline.pipeline;
            const PassMeta *m = p->meta;
            glUseProgram(p->program);
            for (unsigned i = 0; i < m->srvs; ++i) for (int linear = 0; linear < 2; ++linear) {
                int unit = p->units[i][linear]; if (unit < 0) continue;
                glActiveTexture(GL_TEXTURE0 + unit);
                glBindTexture(GL_TEXTURE_2D, b->resources[c->srvTextures[i].resource.internalIndex].texture);
                bool manual = !strcmp(m->srv[i].name, "r_lanczos_lut") || !strcmp(m->srv[i].name, "r_dilated_depth") ||
                              !strcmp(m->srv[i].name, "r_input_depth");
                glBindSampler(unit, b->samplers[linear && !manual]);
            }
            Resource *atlasResource = NULL;
            for (unsigned i = 0; i < m->images; ++i) {
                auto image = m->image[i];
                FfxTextureUAV uav = c->uavTextures[image.resource];
                Resource *r = &b->resources[uav.resource.internalIndex];
                if (image.atlas) {
                    atlasResource = r;
                    if (!r->atlas) {
                        glGenTextures(1, &r->atlas); glBindTexture(GL_TEXTURE_2D_ARRAY, r->atlas);
                        glTexStorage3D(GL_TEXTURE_2D_ARRAY, 1, GL_RGBA16F, r->desc.width, r->desc.height, 6);
                    }
                }
                glBindImageTexture(image.binding, image.atlas ? r->atlas : r->texture,
                    image.atlas ? 0 : uav.mip, image.atlas, 0, image.access, image.format);
            }
            for (unsigned i = 0; i < m->buffers; ++i) {
                glBindBuffer(GL_UNIFORM_BUFFER, b->ubos[i]);
                glBufferData(GL_UNIFORM_BUFFER, c->cbs[i].num32BitEntries * 4, c->cbs[i].data, GL_STREAM_DRAW);
                glBindBufferBase(GL_UNIFORM_BUFFER, i, b->ubos[i]);
            }
            glDispatchCompute(c->dimensions[0], c->dimensions[1], c->dimensions[2]);
            glMemoryBarrier(GL_ALL_BARRIER_BITS);
            if (atlasResource) {
                Resource *r = atlasResource;
                for (unsigned mip = 0; mip < 6 && mip < r->desc.mipCount; ++mip)
                    glCopyImageSubData(r->atlas, GL_TEXTURE_2D_ARRAY, 0, 0, 0, mip, r->texture, GL_TEXTURE_2D, mip,
                        0, 0, 0, r->desc.width >> mip ? r->desc.width >> mip : 1, r->desc.height >> mip ? r->desc.height >> mip : 1, 1);
                glMemoryBarrier(GL_ALL_BARRIER_BITS);
            }
        } else if (job->jobType != FFX_GPU_JOB_DISCARD) return FFX_ERROR_INVALID_ARGUMENT;
        GLenum error = glGetError();
        if (error) { fprintf(stderr, "[fsr3] job %u type %u error %x\n", j, job->jobType, error); return FFX_ERROR_BACKEND_API_ERROR; }
    }
    b->jobCount = b->staged = 0;
    return FFX_OK;
}
extern "C" void crashday_fsr3_destroy(void *context)
{
    Fsr3 *b = (Fsr3 *)context; if (!b) return;
    if (b->created) ffxFsr3UpscalerContextDestroy(&b->context);
    for (unsigned i = 1; i <= b->owned; ++i) destroy_resource(&b->api, {(int)i}, 0);
    for (auto &p : b->pipelines) if (p.program) glDeleteProgram(p.program);
    glDeleteSamplers(2, b->samplers); glDeleteBuffers(2, b->ubos); glDeleteFramebuffers(1, &b->fbo);
    free(b);
}
extern "C" int crashday_fsr3_supported(void)
{
    GLint major, minor, images, threads, textures;
    glGetIntegerv(GL_MAJOR_VERSION, &major); glGetIntegerv(GL_MINOR_VERSION, &minor);
    glGetIntegerv(GL_MAX_COMPUTE_IMAGE_UNIFORMS, &images);
    glGetIntegerv(GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS, &threads);
    glGetIntegerv(GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS, &textures);
    if (major < 3 || (major == 3 && minor < 2) || images < 8 || threads < 256 || textures < 16) return 0;
    GLint count; glGetIntegerv(GL_NUM_EXTENSIONS, &count);
    bool renderFloat = false;
    for (GLint i = 0; i < count; ++i) {
        const char *extension = (const char *)glGetStringi(GL_EXTENSIONS, i);
        renderFloat |= !strcmp(extension, "GL_EXT_color_buffer_float");
    }
    return renderFloat;
}
extern "C" void *crashday_fsr3_create(unsigned width, unsigned height, unsigned outWidth, unsigned outHeight)
{
    if (!crashday_fsr3_supported() || !width || !height || !outWidth || !outHeight ||
        width > outWidth || height > outHeight) return NULL;
    Fsr3 *b = (Fsr3 *)calloc(1, sizeof(Fsr3)); if (!b) return NULL;
    b->width = width; b->height = height; b->outWidth = outWidth; b->outHeight = outHeight;
    FfxInterface *api = &b->api;
    api->scratchBuffer = b; api->scratchBufferSize = sizeof *b; api->device = b;
    api->fpGetSDKVersion = sdk_version; api->fpCreateBackendContext = create_backend;
    api->fpDestroyBackendContext = destroy_backend; api->fpGetDeviceCapabilities = capabilities;
    api->fpGetEffectGpuMemoryUsage = memory_usage;
    api->fpCreateResource = create_resource; api->fpDestroyResource = destroy_resource;
    api->fpRegisterResource = register_resource; api->fpGetResource = get_resource;
    api->fpGetResourceDescription = resource_description; api->fpUnregisterResources = unregister_resources;
    api->fpStageConstantBufferDataFunc = stage_constants;
    api->fpCreatePipeline = create_pipeline; api->fpDestroyPipeline = destroy_pipeline;
    api->fpScheduleGpuJob = schedule_job; api->fpExecuteGpuJobs = execute_jobs;
    glGenFramebuffers(1, &b->fbo); glGenBuffers(2, b->ubos); glGenSamplers(2, b->samplers);
    for (int i = 0; i < 2; ++i) {
        glSamplerParameteri(b->samplers[i], GL_TEXTURE_MIN_FILTER, i ? GL_LINEAR_MIPMAP_LINEAR : GL_NEAREST_MIPMAP_NEAREST);
        glSamplerParameteri(b->samplers[i], GL_TEXTURE_MAG_FILTER, i ? GL_LINEAR : GL_NEAREST);
        glSamplerParameteri(b->samplers[i], GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glSamplerParameteri(b->samplers[i], GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    }
    FfxFsr3UpscalerContextDescription desc = {};
    desc.flags = FFX_FSR3UPSCALER_ENABLE_AUTO_EXPOSURE;
    desc.maxRenderSize = {width, height}; desc.maxUpscaleSize = {outWidth, outHeight}; desc.backendInterface = *api;
    FfxErrorCode error = ffxFsr3UpscalerContextCreate(&b->context, &desc);
    if (error != FFX_OK) { fprintf(stderr, "[fsr3] create: %x\n", error); crashday_fsr3_destroy(b); return NULL; }
    b->created = true;
    FfxFsr3UpscalerSharedResourceDescriptions shared;
    ffxFsr3UpscalerGetSharedResourceDescriptions(&b->context, &shared);
    FfxCreateResourceDescription *descs[] = {&shared.reconstructedPrevNearestDepth, &shared.dilatedDepth, &shared.dilatedMotionVectors};
    for (int i = 0; i < 3; ++i) {
        FfxResourceInternal resource;
        if (create_resource(api, descs[i], 0, &resource) != FFX_OK) { crashday_fsr3_destroy(b); return NULL; }
        b->shared[i] = get_resource(api, resource);
    }
    return b;
}
extern "C" void crashday_fsr3_jitter(unsigned frame, unsigned width, unsigned outWidth, float *x, float *y)
{ ffxFsr3UpscalerGetJitterOffset(x, y, frame, ffxFsr3UpscalerGetJitterPhaseCount(width, outWidth)); }
extern "C" int crashday_fsr3_dispatch(void *context, unsigned color, unsigned depth, unsigned motion,
    unsigned reactive, unsigned output, const float jitter[2], float dt, float nearPlane, float farPlane, float fov, int reset)
{
    Fsr3 *b = (Fsr3 *)context;
    if (!b || !color || !depth || !motion || !reactive || !output) return 0;
    FfxFsr3UpscalerDispatchDescription d = {};
    d.color = external(color, b->width, b->height, FFX_SURFACE_FORMAT_R16G16B16A16_FLOAT);
    d.depth = external(depth, b->width, b->height, FFX_SURFACE_FORMAT_R32_FLOAT);
    d.motionVectors = external(motion, b->width, b->height, FFX_SURFACE_FORMAT_R16G16B16A16_FLOAT);
    d.reactive = external(reactive, b->width, b->height, FFX_SURFACE_FORMAT_R8G8B8A8_UNORM);
    d.transparencyAndComposition = d.reactive;
    d.output = external(output, b->outWidth, b->outHeight, FFX_SURFACE_FORMAT_R16G16B16A16_FLOAT);
    d.reconstructedPrevNearestDepth = b->shared[0]; d.dilatedDepth = b->shared[1]; d.dilatedMotionVectors = b->shared[2];
    d.jitterOffset = {jitter[0], jitter[1]}; d.motionVectorScale = {1, 1};
    d.renderSize = {b->width, b->height}; d.upscaleSize = {b->outWidth, b->outHeight};
    d.enableSharpening = true; d.sharpness = 0.2f;
    d.frameTimeDelta = dt; d.preExposure = 1; d.reset = reset;
    d.cameraNear = nearPlane; d.cameraFar = farPlane; d.cameraFovAngleVertical = fov; d.viewSpaceToMetersFactor = 1;
    FfxErrorCode error = ffxFsr3UpscalerContextDispatch(&b->context, &d);
    if (error) fprintf(stderr, "[fsr3] dispatch: %x\n", error);
    return error == FFX_OK;
}
