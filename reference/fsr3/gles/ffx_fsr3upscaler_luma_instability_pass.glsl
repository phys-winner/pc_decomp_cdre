#version 320 es
layout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;

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

layout(binding=0, rgba8) uniform writeonly highp image2D rw_luma_history;
uniform highp sampler2D r_luma_history_linear;
uniform highp sampler2D r_current_luma_linear;
layout(binding=1, rgba16f) uniform writeonly highp image2D rw_luma_instability;
uniform highp sampler2D r_dilated_motion_vectors;
uniform highp sampler2D r_input_exposure;
uniform highp sampler2D r_dilated_reactive_masks_linear;

void main()
{
    ivec2 _610 = ivec2(gl_GlobalInvocationID.xy);
    vec2 _801 = texelFetch(r_dilated_motion_vectors, _610, 0).xy;
    vec2 _692 = vec2(cbFSR3Upscaler.iRenderSize);
    vec2 _693 = (vec2(_610) + vec2(0.5)) / _692;
    vec2 _703 = vec2(cbFSR3Upscaler.iPreviousFrameRenderSize);
    vec2 _708 = (_693 + (cbFSR3Upscaler.fPreviousFrameJitter / _703)) + _801;
    float _825 = _708.x;
    bool _826 = _825 >= 0.0;
    bool _832;
    if (_826)
    {
        _832 = _825 <= 1.0;
    }
    else
    {
        _832 = _826;
    }
    bool _844;
    if (_832)
    {
        float _835 = _708.y;
        bool _836 = _835 >= 0.0;
        bool _842;
        if (_836)
        {
            _842 = _835 <= 1.0;
        }
        else
        {
            _842 = _836;
        }
        _844 = _842;
    }
    else
    {
        _844 = _832;
    }
    vec4 _1301;
    float _1306;
    if (_844)
    {
        vec2 _874 = vec2(cbFSR3Upscaler.iMaxRenderSize);
        vec2 _875 = max(vec2(0.5), min((_693 + (cbFSR3Upscaler.fJitter / _692)) * _692, _692 - vec2(0.5))) / _874;
        vec4 _891 = textureLod(r_dilated_reactive_masks_linear, _875, 0.0);
        vec4 _1305;
        float _1307;
        if (clamp(_891.w, 0.0, 1.0) > 0.89999997615814208984375)
        {
            vec4 _954 = textureLod(r_current_luma_linear, _875, 0.0);
            float _955 = _954.x;
            vec4 _961 = texelFetch(r_input_exposure, ivec2(0), 0);
            float _962 = _961.x;
            float _1318 = (_962 == 0.0) ? 1.0 : _962;
            float _742 = _955 * _1318;
            vec4 _1024 = texelFetch(r_input_exposure, ivec2(0), 0);
            float _1025 = _1024.x;
            vec4 _1260 = (textureLod(r_luma_history_linear, max(vec2(0.5), min(_708 * _703, _703 - vec2(0.5))) / _874, 0.0) * cbFSR3Upscaler.fDeltaPreExposure) * ((_1025 == 0.0) ? 1.0 : _1025);
            float _1094 = fma(_955, _1318, -_1260.x);
            float _1184 = max(_742, _1260.x);
            float _1294;
            if (_1184 != 0.0)
            {
                _1294 = min(_742, _1260.x) / _1184;
            }
            else
            {
                _1294 = 1.0;
            }
            float _1299;
            if (_1294 < 1.0)
            {
                float _1296;
                _1296 = _1294;
                float _1312;
                for (int _1295 = 1; _1295 <= 3; _1296 = _1312, _1295++)
                {
                    float _1212 = max(_742, _1260[_1295]);
                    float _1308;
                    if (_1212 != 0.0)
                    {
                        _1308 = min(_742, _1260[_1295]) / _1212;
                    }
                    else
                    {
                        _1308 = 0.0;
                    }
                    if (sign(_1094) == sign(fma(_955, _1318, -_1260[_1295])))
                    {
                        _1312 = max(_1296, _1308);
                    }
                    else
                    {
                        _1312 = _1296;
                    }
                }
                _1299 = float(_1296 > _1294);
            }
            else
            {
                _1299 = 0.0;
            }
            _1260.w = _1260.z;
            _1260.z = _1260.y;
            _1260.y = _1260.x;
            _1260.x = _742;
            vec4 _1228 = texelFetch(r_input_exposure, ivec2(0), 0);
            float _1229 = _1228.x;
            vec4 _1150 = _1260;
            vec4 _1152 = _1150 / vec4((_1229 == 0.0) ? 1.0 : _1229);
            _1260 = _1152;
            _1307 = (_1299 * float(_1260.w != 0.0)) * ((((1.0 - clamp(length(_801 * vec2(3840.0, 2160.0)) * 0.0500000007450580596923828125, 0.0, 1.0)) * (1.0 - clamp(_891.y, 0.0, 1.0))) * (1.0 - clamp(_891.x, 0.0, 1.0))) * (1.0 - clamp(_891.z, 0.0, 1.0)));
            _1305 = _1152;
        }
        else
        {
            _1307 = 0.0;
            _1305 = vec4(0.0);
        }
        _1306 = _1307;
        _1301 = _1305;
    }
    else
    {
        _1306 = 0.0;
        _1301 = vec4(0.0);
    }
    imageStore(rw_luma_history, _610, _1301);
    imageStore(rw_luma_instability, _610, vec4(_1306, 0.0, 0.0, 0.0));
}

