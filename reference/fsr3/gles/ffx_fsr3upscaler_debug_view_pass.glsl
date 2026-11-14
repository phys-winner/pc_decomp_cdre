#version 320 es
layout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;

struct FfxDebugViewport
{
    ivec2 offset;
    ivec2 size;
};

layout(binding = 0, std140) uniform cbFSR3UPSCALER_t
{
    ivec2 iRenderSize;
    ivec2 iPreviousFrameRenderSize;
    ivec2 iUpscaleSize;
    ivec2 iPreviousFrameUpscaleSize;
    ivec2 iMaxRenderSize;
    ivec2 iMaxUpscaleSize;
    vec4 fDeviceToViewDepth;
    vec2 fJitter;
    vec2 fPreviousFrameJitter;
    vec2 fMotionVectorScale;
    vec2 fDownscaleFactor;
    vec2 fMotionVectorJitterCancellation;
    float fTanHalfFOV;
    float fJitterSequenceLength;
    float fDeltaTime;
    float fDeltaPreExposure;
    float fViewSpaceToMetersFactor;
    float fFrameIndex;
    float fVelocityFactor;
    float fReactivenessScale;
    float fShadingChangeScale;
    float fAccumulationAddedPerFrame;
    float fMinDisocclusionAccumulation;
} cbFSR3Upscaler;

uniform highp sampler2D r_internal_upscaled_color_linear;
layout(binding=0, rgba16f) uniform writeonly highp image2D rw_upscaled_output;
uniform highp sampler2D r_dilated_motion_vectors_linear;
uniform highp sampler2D r_dilated_depth_linear;
uniform highp sampler2D r_dilated_reactive_masks_linear;

vec4 fsrLinear32(highp sampler2D image, vec2 uv, float lod) {
    int level = max(0, int(lod));
    ivec2 size = textureSize(image, level), maximum = size - 1;
    vec2 position = uv * vec2(size) - .5, weight = fract(position);
    ivec2 p = ivec2(floor(position));
    vec4 a = texelFetch(image, clamp(p, ivec2(0), maximum), level);
    vec4 b = texelFetch(image, clamp(p + ivec2(1, 0), ivec2(0), maximum), level);
    vec4 c = texelFetch(image, clamp(p + ivec2(0, 1), ivec2(0), maximum), level);
    vec4 d = texelFetch(image, clamp(p + ivec2(1, 1), ivec2(0), maximum), level);
    return mix(mix(a, b, weight.x), mix(c, d, weight.x), weight.y);
}

void main()
{
    ivec2 _617 = ivec2(gl_GlobalInvocationID.xy);
    ivec2 _672 = ivec2(vec2(cbFSR3Upscaler.iUpscaleSize) * vec2(0.3333333432674407958984375));
    int _1705;
    _1705 = 0;
    FfxDebugViewport _642[3][3];
    for (; _1705 < 3; _1705++)
    {
        for (int _1706 = 0; _1706 < 3; )
        {
            _642[_1705][_1706].offset = _672 * ivec2(_1706, _1705);
            _642[_1705][_1706].size = _672;
            _1706++;
            continue;
        }
    }
    ivec2 _775 = _642[0][0].offset + _642[0][0].size;
    int _777 = _617.x;
    bool _780 = _777 >= _642[0][0].offset.x;
    bool _788;
    if (_780)
    {
        _788 = _777 < _775.x;
    }
    else
    {
        _788 = _780;
    }
    bool _804;
    if (_788)
    {
        int _791 = _617.y;
        bool _794 = _791 >= _642[0][0].offset.y;
        bool _802;
        if (_794)
        {
            _802 = _791 < _775.y;
        }
        else
        {
            _802 = _794;
        }
        _804 = _802;
    }
    else
    {
        _804 = _788;
    }
    if (_804)
    {
        vec2 _865 = vec2(cbFSR3Upscaler.iRenderSize);
        imageStore(rw_upscaled_output, _617, vec4(vec2(0.5) + ((textureLod(r_dilated_motion_vectors_linear, max(vec2(0.5), min(((vec2(_617 - _642[0][0].offset) + vec2(0.5)) / vec2(_642[0][0].size)) * _865, _865 - vec2(0.5))) / vec2(cbFSR3Upscaler.iMaxRenderSize), 0.0).xy * _865) * 0.5), 0.5, 1.0));
    }
    ivec2 _925 = _642[0][1].offset + _642[0][1].size;
    bool _930 = _777 >= _642[0][1].offset.x;
    bool _938;
    if (_930)
    {
        _938 = _777 < _925.x;
    }
    else
    {
        _938 = _930;
    }
    bool _954;
    if (_938)
    {
        int _941 = _617.y;
        bool _944 = _941 >= _642[0][1].offset.y;
        bool _952;
        if (_944)
        {
            _952 = _941 < _925.y;
        }
        else
        {
            _952 = _944;
        }
        _954 = _952;
    }
    else
    {
        _954 = _938;
    }
    if (_954)
    {
        imageStore(rw_upscaled_output, _617, vec4(clamp(textureLod(r_internal_upscaled_color_linear, (vec2(_617 - _642[0][1].offset) + vec2(0.5)) / vec2(_642[0][1].size), 0.0).w - 1.0, 0.0, 1.0), 0.0, 0.0, 1.0));
    }
    ivec2 _1015 = _642[0][2].offset + _642[0][2].size;
    bool _1020 = _777 >= _642[0][2].offset.x;
    bool _1028;
    if (_1020)
    {
        _1028 = _777 < _1015.x;
    }
    else
    {
        _1028 = _1020;
    }
    bool _1044;
    if (_1028)
    {
        int _1031 = _617.y;
        bool _1034 = _1031 >= _642[0][2].offset.y;
        bool _1042;
        if (_1034)
        {
            _1042 = _1031 < _1015.y;
        }
        else
        {
            _1042 = _1034;
        }
        _1044 = _1042;
    }
    else
    {
        _1044 = _1028;
    }
    if (_1044)
    {
        vec2 _1111 = vec2(cbFSR3Upscaler.iRenderSize);
        imageStore(rw_upscaled_output, _617, vec4(clamp(((cbFSR3Upscaler.fDeviceToViewDepth.y / (fsrLinear32(r_dilated_depth_linear, max(vec2(0.5), min(((vec2(_617 - _642[0][2].offset) + vec2(0.5)) / vec2(_642[0][2].size)) * _1111, _1111 - vec2(0.5))) / vec2(cbFSR3Upscaler.iMaxRenderSize), 0.0).x - cbFSR3Upscaler.fDeviceToViewDepth.x)) * cbFSR3Upscaler.fViewSpaceToMetersFactor) * 0.039999999105930328369140625, 0.0, 1.0), 0.0, 0.0, 1.0));
    }
    ivec2 _1185 = _642[2][0].offset + _642[2][0].size;
    bool _1190 = _777 >= _642[2][0].offset.x;
    bool _1198;
    if (_1190)
    {
        _1198 = _777 < _1185.x;
    }
    else
    {
        _1198 = _1190;
    }
    bool _1214;
    if (_1198)
    {
        int _1201 = _617.y;
        bool _1204 = _1201 >= _642[2][0].offset.y;
        bool _1212;
        if (_1204)
        {
            _1212 = _1201 < _1185.y;
        }
        else
        {
            _1212 = _1204;
        }
        _1214 = _1212;
    }
    else
    {
        _1214 = _1198;
    }
    if (_1214)
    {
        vec2 _1277 = vec2(cbFSR3Upscaler.iRenderSize);
        imageStore(rw_upscaled_output, _617, vec4(0.0, clamp(textureLod(r_dilated_reactive_masks_linear, max(vec2(0.5), min(((vec2(_617 - _642[2][0].offset) + vec2(0.5)) / vec2(_642[2][0].size)) * _1277, _1277 - vec2(0.5))) / vec2(cbFSR3Upscaler.iMaxRenderSize), 0.0).y, 0.0, 1.0), 0.0, 1.0));
    }
    ivec2 _1324 = _642[2][1].offset + _642[2][1].size;
    bool _1329 = _777 >= _642[2][1].offset.x;
    bool _1337;
    if (_1329)
    {
        _1337 = _777 < _1324.x;
    }
    else
    {
        _1337 = _1329;
    }
    bool _1353;
    if (_1337)
    {
        int _1340 = _617.y;
        bool _1343 = _1340 >= _642[2][1].offset.y;
        bool _1351;
        if (_1343)
        {
            _1351 = _1340 < _1324.y;
        }
        else
        {
            _1351 = _1343;
        }
        _1353 = _1351;
    }
    else
    {
        _1353 = _1337;
    }
    if (_1353)
    {
        vec2 _1416 = vec2(cbFSR3Upscaler.iRenderSize);
        imageStore(rw_upscaled_output, _617, vec4(0.0, clamp(textureLod(r_dilated_reactive_masks_linear, max(vec2(0.5), min(((vec2(_617 - _642[2][1].offset) + vec2(0.5)) / vec2(_642[2][1].size)) * _1416, _1416 - vec2(0.5))) / vec2(cbFSR3Upscaler.iMaxRenderSize), 0.0).z, 0.0, 1.0), 0.0, 1.0));
    }
    ivec2 _1463 = _642[2][2].offset + _642[2][2].size;
    bool _1468 = _777 >= _642[2][2].offset.x;
    bool _1476;
    if (_1468)
    {
        _1476 = _777 < _1463.x;
    }
    else
    {
        _1476 = _1468;
    }
    bool _1492;
    if (_1476)
    {
        int _1479 = _617.y;
        bool _1482 = _1479 >= _642[2][2].offset.y;
        bool _1490;
        if (_1482)
        {
            _1490 = _1479 < _1463.y;
        }
        else
        {
            _1490 = _1482;
        }
        _1492 = _1490;
    }
    else
    {
        _1492 = _1476;
    }
    if (_1492)
    {
        vec2 _1555 = vec2(cbFSR3Upscaler.iRenderSize);
        imageStore(rw_upscaled_output, _617, vec4(0.0, clamp(textureLod(r_dilated_reactive_masks_linear, max(vec2(0.5), min(((vec2(_617 - _642[2][2].offset) + vec2(0.5)) / vec2(_642[2][2].size)) * _1555, _1555 - vec2(0.5))) / vec2(cbFSR3Upscaler.iMaxRenderSize), 0.0).x, 0.0, 1.0), 0.0, 1.0));
    }
}

