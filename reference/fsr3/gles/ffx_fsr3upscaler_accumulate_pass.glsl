#version 320 es
layout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;

float _6933;
vec3 _6936;

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

uniform highp sampler2D r_input_color_jittered;
uniform highp sampler2D r_internal_upscaled_color;
layout(binding=0, rgba16f) uniform writeonly highp image2D rw_internal_upscaled_color;
layout(binding=1, rgba16f) uniform writeonly highp image2D rw_upscaled_output;
uniform highp sampler2D r_farthest_depth_mip1;
uniform highp sampler2D r_farthest_depth_mip1_linear;
uniform highp sampler2D r_luma_instability_linear;
layout(binding=2, rgba8) uniform writeonly highp image2D rw_new_locks;
layout(binding=3, rgba8) uniform readonly highp image2D rw_new_locks_read;
uniform highp sampler2D r_dilated_motion_vectors;
uniform highp sampler2D r_input_exposure;
uniform highp sampler2D r_lanczos_lut_linear;
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
    ivec2 _2310 = ivec2(gl_GlobalInvocationID.xy);
    vec2 _2445 = vec2(_2310);
    vec2 _2447 = _2445 + vec2(0.5);
    vec2 _2450 = _2447 / vec2(cbFSR3Upscaler.iUpscaleSize);
    vec2 _2456 = vec2(cbFSR3Upscaler.iRenderSize);
    vec2 _2458 = _2450 + (cbFSR3Upscaler.fJitter / _2456);
    vec2 _2574 = _2456 - vec2(0.5);
    vec2 _2580 = vec2(cbFSR3Upscaler.iMaxRenderSize);
    vec2 _2600 = _2450 * _2456;
    vec2 _2614 = texelFetch(r_dilated_motion_vectors, ivec2(_2600), 0).xy;
    float _2619 = length(_2614 * vec2(3840.0, 2160.0));
    vec2 _2626 = _2450 + _2614;
    float _2635 = _2626.x;
    bool _2636 = _2635 >= 0.0;
    bool _2642;
    if (_2636)
    {
        _2642 = _2635 <= 1.0;
    }
    else
    {
        _2642 = _2636;
    }
    bool _2654;
    if (_2642)
    {
        float _2645 = _2626.y;
        bool _2646 = _2645 >= 0.0;
        bool _2652;
        if (_2646)
        {
            _2652 = _2645 <= 1.0;
        }
        else
        {
            _2652 = _2646;
        }
        _2654 = _2652;
    }
    else
    {
        _2654 = _2642;
    }
    vec2 _2723 = vec2(cbFSR3Upscaler.iRenderSize / ivec2(2));
    bool _2496 = _2654 == false;
    bool _2502;
    if (!_2496)
    {
        _2502 = 0.0 == cbFSR3Upscaler.fFrameIndex;
    }
    else
    {
        _2502 = _2496;
    }
    vec4 _2760 = textureLod(r_dilated_reactive_masks_linear, max(vec2(0.5), min(_2458 * _2456, _2574)) / _2580, 0.0);
    float _2764 = clamp(_2760.x, 0.0, 1.0);
    float _2768 = clamp(_2760.y, 0.0, 1.0);
    float _2772 = clamp(_2760.z, 0.0, 1.0);
    float _2776 = clamp(_2760.w, 0.0, 1.0);
    float _2528 = float(round(_2776 * 100.0) > 1.0);
    float _2531 = _2776 * _2528;
    bool _2364;
    if (_2654)
    {
        _2364 = !_2502;
    }
    else
    {
        _2364 = _2654;
    }
    float _6965;
    vec3 _6967;
    if (_2364)
    {
        vec2 _2832 = fma(_2626, vec2(cbFSR3Upscaler.iPreviousFrameUpscaleSize), vec2(-0.5));
        vec2 _2870 = fract(_2832);
        ivec2 _2855 = ivec2(floor(vec2(max(0.0, min(float(cbFSR3Upscaler.iPreviousFrameUpscaleSize.x - 1), _2832.x)), max(0.0, min(float(cbFSR3Upscaler.iPreviousFrameUpscaleSize.y - 1), _2832.y)))));
        ivec2 _3132 = _2855 + ivec2(-1);
        int _3135 = cbFSR3Upscaler.iPreviousFrameUpscaleSize.x - 2;
        int _3143 = cbFSR3Upscaler.iPreviousFrameUpscaleSize.y - 2;
        ivec2 _3194 = _2855 + ivec2(0, -1);
        ivec2 _3256 = _2855 + ivec2(1, -1);
        ivec2 _3318 = _2855 + ivec2(2, -1);
        ivec2 _3380 = _2855 + ivec2(-1, 0);
        vec4 _3490 = texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_2855.x, _3135)), max(1, min(_2855.y, _3143))), 0);
        ivec2 _3504 = _2855 + ivec2(1, 0);
        vec4 _3552 = texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3504.x, _3135)), max(1, min(_3504.y, _3143))), 0);
        ivec2 _3566 = _2855 + ivec2(2, 0);
        ivec2 _3628 = _2855 + ivec2(-1, 1);
        ivec2 _3690 = _2855 + ivec2(0, 1);
        vec4 _3738 = texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3690.x, _3135)), max(1, min(_3690.y, _3143))), 0);
        ivec2 _3752 = _2855 + ivec2(1);
        vec4 _3800 = texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3752.x, _3135)), max(1, min(_3752.y, _3143))), 0);
        ivec2 _3814 = _2855 + ivec2(2, 1);
        ivec2 _3876 = _2855 + ivec2(-1, 2);
        ivec2 _3938 = _2855 + ivec2(0, 2);
        ivec2 _4000 = _2855 + ivec2(1, 2);
        ivec2 _4062 = _2855 + ivec2(2);
        float _4160 = _2870.x;
        vec4 _4297 = fsrLinear32(r_lanczos_lut_linear, vec2(abs((-1.0) - _4160) * 0.5, 0.5), 0.0);
        float _4298 = _4297.x;
        vec4 _4311 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(-_4160) * 0.5, 0.5), 0.0);
        float _4312 = _4311.x;
        vec4 _4325 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(1.0 - _4160) * 0.5, 0.5), 0.0);
        float _4326 = _4325.x;
        vec4 _4339 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(2.0 - _4160) * 0.5, 0.5), 0.0);
        float _4340 = _4339.x;
        vec4 _4283 = vec4(((_4298 + _4312) + _4326) + _4340);
        float _4200 = _2870.y;
        vec4 _4705 = fsrLinear32(r_lanczos_lut_linear, vec2(abs((-1.0) - _4200) * 0.5, 0.5), 0.0);
        float _4706 = _4705.x;
        vec4 _4719 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(-_4200) * 0.5, 0.5), 0.0);
        float _4720 = _4719.x;
        vec4 _4733 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(1.0 - _4200) * 0.5, 0.5), 0.0);
        float _4734 = _4733.x;
        vec4 _4747 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(2.0 - _4200) * 0.5, 0.5), 0.0);
        float _4748 = _4747.x;
        vec4 _4679 = (((((((texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3132.x, _3135)), max(1, min(_3132.y, _3143))), 0) * _4298) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3194.x, _3135)), max(1, min(_3194.y, _3143))), 0) * _4312)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3256.x, _3135)), max(1, min(_3256.y, _3143))), 0) * _4326)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3318.x, _3135)), max(1, min(_3318.y, _3143))), 0) * _4340)) / _4283) * _4706) + ((((((texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3380.x, _3135)), max(1, min(_3380.y, _3143))), 0) * _4298) + (_3490 * _4312)) + (_3552 * _4326)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3566.x, _3135)), max(1, min(_3566.y, _3143))), 0) * _4340)) / _4283) * _4720)) + ((((((texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3628.x, _3135)), max(1, min(_3628.y, _3143))), 0) * _4298) + (_3738 * _4312)) + (_3800 * _4326)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3814.x, _3135)), max(1, min(_3814.y, _3143))), 0) * _4340)) / _4283) * _4734);
        vec4 _4141[4] = vec4[](_3490, _3552, _3738, _3800);
        vec4 _6960;
        vec4 _6961;
        _6961 = _4141[0];
        _6960 = _4141[0];
        for (int _6958 = 1; _6958 < 4; )
        {
            _6961 = max(_6961, _4141[_6958]);
            _6960 = min(_6960, _4141[_6958]);
            _6958++;
            continue;
        }
        vec4 _4237 = clamp((_4679 + ((((((texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3876.x, _3135)), max(1, min(_3876.y, _3143))), 0) * _4298) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3938.x, _3135)), max(1, min(_3938.y, _3143))), 0) * _4312)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_4000.x, _3135)), max(1, min(_4000.y, _3143))), 0) * _4326)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_4062.x, _3135)), max(1, min(_4062.y, _3143))), 0) * _4340)) / _4283) * _4748)) / vec4(((_4706 + _4720) + _4734) + _4748), _6960, _6961);
        vec4 _4768 = texelFetch(r_input_exposure, ivec2(0), 0);
        float _4769 = _4768.x;
        vec3 _2796 = (_4237.xyz * cbFSR3Upscaler.fDeltaPreExposure) * ((_4769 == 0.0) ? 1.0 : _4769);
        float _4783 = 0.5 * _2796.y;
        _6967 = vec3(fma(0.25, _2796.z, fma(0.25, _2796.x, _4783)), fma(0.5, _2796.x, _2796.z * (-0.5)), fma(-0.25, _2796.z, fma(-0.25, _2796.x, _4783)));
        _6965 = _4237.w;
    }
    else
    {
        _6967 = vec3(0.0);
        _6965 = 0.0;
    }
    float _4919 = max(clamp(_2772, 0.0, 1.0), max(_2764, _2768));
    float _4924 = max(0.0, fma(_6965, float(_2502 == false), _4919 * (-2.0)));
    vec2 _4897 = _2450 - _2614;
    float _4966 = _4897.x;
    bool _4967 = _4966 >= 0.0;
    bool _4973;
    if (_4967)
    {
        _4973 = _4966 <= 1.0;
    }
    else
    {
        _4973 = _4967;
    }
    bool _4985;
    if (_4973)
    {
        float _4976 = _4897.y;
        bool _4977 = _4976 >= 0.0;
        bool _4983;
        if (_4977)
        {
            _4983 = _4976 <= 1.0;
        }
        else
        {
            _4983 = _4977;
        }
        _4985 = _4983;
    }
    else
    {
        _4985 = _4973;
    }
    float _5032 = min(_2531, mix(_2531, 0.1500000059604644775390625, clamp(max(0.0, (_2619 * cbFSR3Upscaler.fVelocityFactor) * 2.0), 0.0, 1.0)));
    vec2 _5099 = _2447 * cbFSR3Upscaler.fDownscaleFactor;
    ivec2 _5102 = ivec2(floor(_5099));
    vec2 _5107 = (vec2(_5102) + vec2(0.5)) - cbFSR3Upscaler.fJitter;
    vec2 _5110 = fma(vec2(-0.5) - _2445, cbFSR3Upscaler.fDownscaleFactor, _5107);
    bool _5118 = _5107.x > _5099.x;
    bool _5125 = _5107.y > _5099.y;
    ivec2 _7164 = ivec2(_5118 ? (-2) : (-1), _5125 ? (-2) : (-1));
    vec2 _5139 = vec2(_7164);
    bool _5141 = _2531 == 0.0;
    vec3 _5054[9];
    int _7088;
    for (int _6989 = 0, _7089 = 0; _6989 < 3; _6989++, _7089 = _7088)
    {
        _7088 = _7089;
        int _5188;
        for (int _7081 = 0; _7081 < 3; _7088 = _5188, _7081++)
        {
            int _7083;
            if (_5118)
            {
                _7083 = 3 - _7081;
            }
            else
            {
                _7083 = _7081;
            }
            int _7085;
            if (_5125)
            {
                _7085 = 3 - _6989;
            }
            else
            {
                _7085 = _6989;
            }
            ivec2 _5176 = (_5102 + _7164) + ivec2(_7083, _7085);
            vec4 _5470 = texelFetch(r_input_exposure, ivec2(0), 0);
            float _5471 = _5470.x;
            vec3 _5449 = max(vec3(0.0), texelFetch(r_input_color_jittered, ivec2(max(0, min(_5176.x, (cbFSR3Upscaler.iRenderSize.x - 1))), max(0, min(_5176.y, (cbFSR3Upscaler.iRenderSize.y - 1)))), 0).xyz) * ((_5471 == 0.0) ? 1.0 : _5471);
            float _5481 = _5449.x;
            float _5485 = 0.5 * _5449.y;
            float _5488 = _5449.z;
            _5054[_7088] = vec3(fma(0.25, _5488, fma(0.25, _5481, _5485)), fma(0.5, _5481, _5488 * (-0.5)), fma(-0.25, _5488, fma(-0.25, _5481, _5485)));
            _5188 = _7088 + 1;
        }
    }
    float _5536 = min(1.9900000095367431640625, 1.0 + ((vec2(1.0) / cbFSR3Upscaler.fDownscaleFactor) - vec2(1.0)).x);
    float _5561 = mix(max(1.0, (1.0 + _5536) * 0.300000011920928955078125), _5536, min(fma(-_2768, 0.5, 1.0), min(1.0 - _2772, clamp(_5032 * 5.0, 0.0, 1.0))));
    float _6992;
    vec3 _6994;
    vec3 _6996;
    vec3 _6998;
    vec3 _7000;
    float _7006;
    vec3 _7009;
    _7009 = vec3(0.0);
    _7006 = 0.0;
    _7000 = _6936;
    _6998 = _6936;
    _6996 = _6936;
    _6994 = _6936;
    _6992 = _6933;
    int _7040;
    vec3 _7044;
    float _7047;
    float _7057;
    vec3 _7061;
    vec3 _7065;
    vec3 _7069;
    vec3 _7073;
    for (int _6991 = 0, _7041 = 0; _6991 < 3; _7009 = _7044, _7006 = _7047, _7000 = _7073, _6998 = _7069, _6996 = _7065, _6994 = _7061, _6992 = _7057, _6991++, _7041 = _7040)
    {
        _7073 = _7000;
        _7069 = _6998;
        _7065 = _6996;
        _7061 = _6994;
        _7057 = _6992;
        _7047 = _7006;
        _7044 = _7009;
        _7040 = _7041;
        int _5321;
        float _7074;
        vec3 _7075;
        vec3 _7076;
        vec3 _7077;
        vec3 _7078;
        vec3 _7134;
        float _7136;
        for (int _7033 = 0; _7033 < 3; _7073 = _7078, _7069 = _7077, _7065 = _7076, _7061 = _7075, _7057 = _7074, _7047 = _7136, _7044 = _7134, _7040 = _5321, _7033++)
        {
            int _7035;
            if (_5118)
            {
                _7035 = 3 - _7033;
            }
            else
            {
                _7035 = _7033;
            }
            int _7037;
            if (_5125)
            {
                _7037 = 3 - _6991;
            }
            else
            {
                _7037 = _6991;
            }
            ivec2 _5245 = ivec2(_7035, _7037);
            vec2 _5252 = _5110 + (_5139 + vec2(_5245));
            float _5273 = float(all(lessThan(uvec2((_5102 + _7164) + _5245), uvec2(cbFSR3Upscaler.iRenderSize))));
            if (!_5141)
            {
                vec2 _5582 = _5252 * vec2(_5561);
                float _5601 = min(dot(_5582, _5582), 4.0);
                float _5608 = fma(0.4000000059604644775390625, _5601, -1.0);
                float _5611 = fma(0.25, _5601, -1.0);
                float _5620 = fma(1.5625 * _5608, _5608, -0.5625) * (_5611 * _5611);
                _7136 = fma(_5273, _5620, _7047);
                _7134 = _7044 + (_5054[_7040] * (_5273 * _5620));
            }
            else
            {
                _7136 = _7047;
                _7134 = _7044;
            }
            float _5302 = exp((-2.2999999523162841796875) * dot(_5252, _5252));
            float _5304 = _5302 * _5273;
            if ((_6991 == 0) && (_7033 == 0))
            {
                vec3 _5663 = _5054[_7040] * _5304;
                _7078 = _5663;
                _7077 = _5054[_7040] * _5663;
                _7076 = _5054[_7040];
                _7075 = _5054[_7040];
                _7074 = _5304;
            }
            else
            {
                vec3 _5642 = _5054[_7040] * _5304;
                _7078 = _7073 + _5642;
                _7077 = fma(_5054[_7040], _5642, _7069);
                _7076 = min(_7065, _5054[_7040]);
                _7075 = max(_7061, _5054[_7040]);
                _7074 = fma(_5302, _5273, _7057);
            }
            _5321 = _7040 + 1;
        }
    }
    vec3 _5698 = vec3((abs(_6992) > 1.1754943508222875079687365372222e-38) ? _6992 : 1.0);
    vec3 _5699 = _7000 / _5698;
    float _5341 = _7006 * float(_7006 > 6.099999882280826568603515625e-05);
    float _7017;
    vec3 _7019;
    if (_5341 > 6.099999882280826568603515625e-05)
    {
        _7019 = clamp(_7009 / vec3(_5341), _6996, _6994);
        _7017 = _5341 * 0.04625000059604644775390625;
    }
    else
    {
        _7019 = _7009;
        _7017 = _5341;
    }
    float _7187 = _5141 ? 1.0 : _7017;
    float _7188 = _5141 ? 0.0 : _5032;
    vec3 _5791 = (sqrt(abs(fma(-_5699, _5699, _6998 / _5698))) * vec3(1.7000000476837158203125, 1.0, 1.0)) * mix(3.0, 1.0, max(clamp(_2619 * 0.0500000007450580596923828125, 0.0, 1.0), max(clamp(fma(-textureLod(r_farthest_depth_mip1_linear, max(vec2(0.5), min(_2458 * _2723, _2723 - vec2(0.5))) / vec2(textureSize(r_farthest_depth_mip1, 0)), 0.0).x, 0.0500000007450580596923828125, 0.75), 0.0, 1.0), max(fma(-_2776, _2528, 1.0), max(pow(_2764, 0.5), _2772)))));
    vec3 _5800 = (_6967 - _5699) / max(_5791, vec3(1.19299997436428384389728307724e-07));
    vec3 _7029;
    if (length(_5800) > 1.0)
    {
        _7029 = mix(fma(normalize(_5800), _5791, _5699), _6967, vec3(clamp((max(textureLod(r_luma_instability_linear, max(vec2(0.5), min(_2600, _2574)) / _2580, 0.0).x, clamp(clamp(_4924 - 1.0, 0.0, 1.0), 0.0, 1.0)) * _2531) * (1.0 - _2768), 0.0, 1.0)));
    }
    else
    {
        _7029 = _6967;
    }
    vec3 _5946 = mix(_7029, mix(_7019, _5699, bvec3(_5141)), vec3(clamp(_7187 / max(6.099999882280826568603515625e-05, fma(_7188, float(_7188 > 6.099999882280826568603515625e-05), _7187)), 0.0, 1.0)));
    float _5951 = _5946.x;
    float _5953 = _5946.y;
    float _5956 = _5946.z;
    vec4 _5978 = texelFetch(r_input_exposure, ivec2(0), 0);
    float _5979 = _5978.x;
    vec3 _5989 = max(vec3((_5951 + _5953) - _5956, _5951 + _5956, (_5951 - _5953) - _5956) / vec3((_5979 == 0.0) ? 1.0 : _5979), vec3(0.0));
    float _2405 = _5989.x;
    imageStore(rw_internal_upscaled_color, _2310, vec4(_2405, _5989.yz, max(0.0, fma((-0.100000001490116119384765625) / cbFSR3Upscaler.fJitterSequenceLength, 1.0 - _4919, max(0.0, min(fma(imageLoad(rw_new_locks_read, _2310).x, 1.0 - max(0.0, _2764), _4924), 2.0)))) * float(_4985 == true)));
    imageStore(rw_upscaled_output, _2310, vec4(_2405, _5989.yz, 1.0));
    imageStore(rw_new_locks, _2310, vec4(0.0));
}

