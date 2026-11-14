#version 320 es
layout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;

float _6901;
vec3 _6904;

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
uniform highp sampler2D r_farthest_depth_mip1;
uniform highp sampler2D r_farthest_depth_mip1_linear;
uniform highp sampler2D r_luma_instability_linear;
layout(binding=1, rgba8) uniform writeonly highp image2D rw_new_locks;
layout(binding=2, rgba8) uniform readonly highp image2D rw_new_locks_read;
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
    ivec2 _2291 = ivec2(gl_GlobalInvocationID.xy);
    vec2 _2421 = vec2(_2291);
    vec2 _2423 = _2421 + vec2(0.5);
    vec2 _2426 = _2423 / vec2(cbFSR3Upscaler.iUpscaleSize);
    vec2 _2432 = vec2(cbFSR3Upscaler.iRenderSize);
    vec2 _2434 = _2426 + (cbFSR3Upscaler.fJitter / _2432);
    vec2 _2550 = _2432 - vec2(0.5);
    vec2 _2556 = vec2(cbFSR3Upscaler.iMaxRenderSize);
    vec2 _2576 = _2426 * _2432;
    vec2 _2590 = texelFetch(r_dilated_motion_vectors, ivec2(_2576), 0).xy;
    float _2595 = length(_2590 * vec2(3840.0, 2160.0));
    vec2 _2602 = _2426 + _2590;
    float _2611 = _2602.x;
    bool _2612 = _2611 >= 0.0;
    bool _2618;
    if (_2612)
    {
        _2618 = _2611 <= 1.0;
    }
    else
    {
        _2618 = _2612;
    }
    bool _2630;
    if (_2618)
    {
        float _2621 = _2602.y;
        bool _2622 = _2621 >= 0.0;
        bool _2628;
        if (_2622)
        {
            _2628 = _2621 <= 1.0;
        }
        else
        {
            _2628 = _2622;
        }
        _2630 = _2628;
    }
    else
    {
        _2630 = _2618;
    }
    vec2 _2699 = vec2(cbFSR3Upscaler.iRenderSize / ivec2(2));
    bool _2472 = _2630 == false;
    bool _2478;
    if (!_2472)
    {
        _2478 = 0.0 == cbFSR3Upscaler.fFrameIndex;
    }
    else
    {
        _2478 = _2472;
    }
    vec4 _2736 = textureLod(r_dilated_reactive_masks_linear, max(vec2(0.5), min(_2434 * _2432, _2550)) / _2556, 0.0);
    float _2740 = clamp(_2736.x, 0.0, 1.0);
    float _2744 = clamp(_2736.y, 0.0, 1.0);
    float _2748 = clamp(_2736.z, 0.0, 1.0);
    float _2752 = clamp(_2736.w, 0.0, 1.0);
    float _2504 = float(round(_2752 * 100.0) > 1.0);
    float _2507 = _2752 * _2504;
    bool _2344;
    if (_2630)
    {
        _2344 = !_2478;
    }
    else
    {
        _2344 = _2630;
    }
    float _6933;
    vec3 _6935;
    if (_2344)
    {
        vec2 _2808 = fma(_2602, vec2(cbFSR3Upscaler.iPreviousFrameUpscaleSize), vec2(-0.5));
        vec2 _2846 = fract(_2808);
        ivec2 _2831 = ivec2(floor(vec2(max(0.0, min(float(cbFSR3Upscaler.iPreviousFrameUpscaleSize.x - 1), _2808.x)), max(0.0, min(float(cbFSR3Upscaler.iPreviousFrameUpscaleSize.y - 1), _2808.y)))));
        ivec2 _3108 = _2831 + ivec2(-1);
        int _3111 = cbFSR3Upscaler.iPreviousFrameUpscaleSize.x - 2;
        int _3119 = cbFSR3Upscaler.iPreviousFrameUpscaleSize.y - 2;
        ivec2 _3170 = _2831 + ivec2(0, -1);
        ivec2 _3232 = _2831 + ivec2(1, -1);
        ivec2 _3294 = _2831 + ivec2(2, -1);
        ivec2 _3356 = _2831 + ivec2(-1, 0);
        vec4 _3466 = texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_2831.x, _3111)), max(1, min(_2831.y, _3119))), 0);
        ivec2 _3480 = _2831 + ivec2(1, 0);
        vec4 _3528 = texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3480.x, _3111)), max(1, min(_3480.y, _3119))), 0);
        ivec2 _3542 = _2831 + ivec2(2, 0);
        ivec2 _3604 = _2831 + ivec2(-1, 1);
        ivec2 _3666 = _2831 + ivec2(0, 1);
        vec4 _3714 = texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3666.x, _3111)), max(1, min(_3666.y, _3119))), 0);
        ivec2 _3728 = _2831 + ivec2(1);
        vec4 _3776 = texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3728.x, _3111)), max(1, min(_3728.y, _3119))), 0);
        ivec2 _3790 = _2831 + ivec2(2, 1);
        ivec2 _3852 = _2831 + ivec2(-1, 2);
        ivec2 _3914 = _2831 + ivec2(0, 2);
        ivec2 _3976 = _2831 + ivec2(1, 2);
        ivec2 _4038 = _2831 + ivec2(2);
        float _4136 = _2846.x;
        vec4 _4273 = fsrLinear32(r_lanczos_lut_linear, vec2(abs((-1.0) - _4136) * 0.5, 0.5), 0.0);
        float _4274 = _4273.x;
        vec4 _4287 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(-_4136) * 0.5, 0.5), 0.0);
        float _4288 = _4287.x;
        vec4 _4301 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(1.0 - _4136) * 0.5, 0.5), 0.0);
        float _4302 = _4301.x;
        vec4 _4315 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(2.0 - _4136) * 0.5, 0.5), 0.0);
        float _4316 = _4315.x;
        vec4 _4259 = vec4(((_4274 + _4288) + _4302) + _4316);
        float _4176 = _2846.y;
        vec4 _4681 = fsrLinear32(r_lanczos_lut_linear, vec2(abs((-1.0) - _4176) * 0.5, 0.5), 0.0);
        float _4682 = _4681.x;
        vec4 _4695 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(-_4176) * 0.5, 0.5), 0.0);
        float _4696 = _4695.x;
        vec4 _4709 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(1.0 - _4176) * 0.5, 0.5), 0.0);
        float _4710 = _4709.x;
        vec4 _4723 = fsrLinear32(r_lanczos_lut_linear, vec2(abs(2.0 - _4176) * 0.5, 0.5), 0.0);
        float _4724 = _4723.x;
        vec4 _4655 = (((((((texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3108.x, _3111)), max(1, min(_3108.y, _3119))), 0) * _4274) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3170.x, _3111)), max(1, min(_3170.y, _3119))), 0) * _4288)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3232.x, _3111)), max(1, min(_3232.y, _3119))), 0) * _4302)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3294.x, _3111)), max(1, min(_3294.y, _3119))), 0) * _4316)) / _4259) * _4682) + ((((((texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3356.x, _3111)), max(1, min(_3356.y, _3119))), 0) * _4274) + (_3466 * _4288)) + (_3528 * _4302)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3542.x, _3111)), max(1, min(_3542.y, _3119))), 0) * _4316)) / _4259) * _4696)) + ((((((texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3604.x, _3111)), max(1, min(_3604.y, _3119))), 0) * _4274) + (_3714 * _4288)) + (_3776 * _4302)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3790.x, _3111)), max(1, min(_3790.y, _3119))), 0) * _4316)) / _4259) * _4710);
        vec4 _4117[4] = vec4[](_3466, _3528, _3714, _3776);
        vec4 _6928;
        vec4 _6929;
        _6929 = _4117[0];
        _6928 = _4117[0];
        for (int _6926 = 1; _6926 < 4; )
        {
            _6929 = max(_6929, _4117[_6926]);
            _6928 = min(_6928, _4117[_6926]);
            _6926++;
            continue;
        }
        vec4 _4213 = clamp((_4655 + ((((((texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3852.x, _3111)), max(1, min(_3852.y, _3119))), 0) * _4274) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3914.x, _3111)), max(1, min(_3914.y, _3119))), 0) * _4288)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_3976.x, _3111)), max(1, min(_3976.y, _3119))), 0) * _4302)) + (texelFetch(r_internal_upscaled_color, ivec2(max(1, min(_4038.x, _3111)), max(1, min(_4038.y, _3119))), 0) * _4316)) / _4259) * _4724)) / vec4(((_4682 + _4696) + _4710) + _4724), _6928, _6929);
        vec4 _4744 = texelFetch(r_input_exposure, ivec2(0), 0);
        float _4745 = _4744.x;
        vec3 _2772 = (_4213.xyz * cbFSR3Upscaler.fDeltaPreExposure) * ((_4745 == 0.0) ? 1.0 : _4745);
        float _4759 = 0.5 * _2772.y;
        _6935 = vec3(fma(0.25, _2772.z, fma(0.25, _2772.x, _4759)), fma(0.5, _2772.x, _2772.z * (-0.5)), fma(-0.25, _2772.z, fma(-0.25, _2772.x, _4759)));
        _6933 = _4213.w;
    }
    else
    {
        _6935 = vec3(0.0);
        _6933 = 0.0;
    }
    float _4895 = max(clamp(_2748, 0.0, 1.0), max(_2740, _2744));
    float _4900 = max(0.0, fma(_6933, float(_2478 == false), _4895 * (-2.0)));
    vec2 _4873 = _2426 - _2590;
    float _4942 = _4873.x;
    bool _4943 = _4942 >= 0.0;
    bool _4949;
    if (_4943)
    {
        _4949 = _4942 <= 1.0;
    }
    else
    {
        _4949 = _4943;
    }
    bool _4961;
    if (_4949)
    {
        float _4952 = _4873.y;
        bool _4953 = _4952 >= 0.0;
        bool _4959;
        if (_4953)
        {
            _4959 = _4952 <= 1.0;
        }
        else
        {
            _4959 = _4953;
        }
        _4961 = _4959;
    }
    else
    {
        _4961 = _4949;
    }
    float _5008 = min(_2507, mix(_2507, 0.1500000059604644775390625, clamp(max(0.0, (_2595 * cbFSR3Upscaler.fVelocityFactor) * 2.0), 0.0, 1.0)));
    vec2 _5075 = _2423 * cbFSR3Upscaler.fDownscaleFactor;
    ivec2 _5078 = ivec2(floor(_5075));
    vec2 _5083 = (vec2(_5078) + vec2(0.5)) - cbFSR3Upscaler.fJitter;
    vec2 _5086 = fma(vec2(-0.5) - _2421, cbFSR3Upscaler.fDownscaleFactor, _5083);
    bool _5094 = _5083.x > _5075.x;
    bool _5101 = _5083.y > _5075.y;
    ivec2 _7132 = ivec2(_5094 ? (-2) : (-1), _5101 ? (-2) : (-1));
    vec2 _5115 = vec2(_7132);
    bool _5117 = _2507 == 0.0;
    vec3 _5030[9];
    int _7056;
    for (int _6957 = 0, _7057 = 0; _6957 < 3; _6957++, _7057 = _7056)
    {
        _7056 = _7057;
        int _5164;
        for (int _7049 = 0; _7049 < 3; _7056 = _5164, _7049++)
        {
            int _7051;
            if (_5094)
            {
                _7051 = 3 - _7049;
            }
            else
            {
                _7051 = _7049;
            }
            int _7053;
            if (_5101)
            {
                _7053 = 3 - _6957;
            }
            else
            {
                _7053 = _6957;
            }
            ivec2 _5152 = (_5078 + _7132) + ivec2(_7051, _7053);
            vec4 _5446 = texelFetch(r_input_exposure, ivec2(0), 0);
            float _5447 = _5446.x;
            vec3 _5425 = max(vec3(0.0), texelFetch(r_input_color_jittered, ivec2(max(0, min(_5152.x, (cbFSR3Upscaler.iRenderSize.x - 1))), max(0, min(_5152.y, (cbFSR3Upscaler.iRenderSize.y - 1)))), 0).xyz) * ((_5447 == 0.0) ? 1.0 : _5447);
            float _5457 = _5425.x;
            float _5461 = 0.5 * _5425.y;
            float _5464 = _5425.z;
            _5030[_7056] = vec3(fma(0.25, _5464, fma(0.25, _5457, _5461)), fma(0.5, _5457, _5464 * (-0.5)), fma(-0.25, _5464, fma(-0.25, _5457, _5461)));
            _5164 = _7056 + 1;
        }
    }
    float _5512 = min(1.9900000095367431640625, 1.0 + ((vec2(1.0) / cbFSR3Upscaler.fDownscaleFactor) - vec2(1.0)).x);
    float _5537 = mix(max(1.0, (1.0 + _5512) * 0.300000011920928955078125), _5512, min(fma(-_2744, 0.5, 1.0), min(1.0 - _2748, clamp(_5008 * 5.0, 0.0, 1.0))));
    float _6960;
    vec3 _6962;
    vec3 _6964;
    vec3 _6966;
    vec3 _6968;
    float _6974;
    vec3 _6977;
    _6977 = vec3(0.0);
    _6974 = 0.0;
    _6968 = _6904;
    _6966 = _6904;
    _6964 = _6904;
    _6962 = _6904;
    _6960 = _6901;
    int _7008;
    vec3 _7012;
    float _7015;
    float _7025;
    vec3 _7029;
    vec3 _7033;
    vec3 _7037;
    vec3 _7041;
    for (int _6959 = 0, _7009 = 0; _6959 < 3; _6977 = _7012, _6974 = _7015, _6968 = _7041, _6966 = _7037, _6964 = _7033, _6962 = _7029, _6960 = _7025, _6959++, _7009 = _7008)
    {
        _7041 = _6968;
        _7037 = _6966;
        _7033 = _6964;
        _7029 = _6962;
        _7025 = _6960;
        _7015 = _6974;
        _7012 = _6977;
        _7008 = _7009;
        int _5297;
        float _7042;
        vec3 _7043;
        vec3 _7044;
        vec3 _7045;
        vec3 _7046;
        vec3 _7102;
        float _7104;
        for (int _7001 = 0; _7001 < 3; _7041 = _7046, _7037 = _7045, _7033 = _7044, _7029 = _7043, _7025 = _7042, _7015 = _7104, _7012 = _7102, _7008 = _5297, _7001++)
        {
            int _7003;
            if (_5094)
            {
                _7003 = 3 - _7001;
            }
            else
            {
                _7003 = _7001;
            }
            int _7005;
            if (_5101)
            {
                _7005 = 3 - _6959;
            }
            else
            {
                _7005 = _6959;
            }
            ivec2 _5221 = ivec2(_7003, _7005);
            vec2 _5228 = _5086 + (_5115 + vec2(_5221));
            float _5249 = float(all(lessThan(uvec2((_5078 + _7132) + _5221), uvec2(cbFSR3Upscaler.iRenderSize))));
            if (!_5117)
            {
                vec2 _5558 = _5228 * vec2(_5537);
                float _5577 = min(dot(_5558, _5558), 4.0);
                float _5584 = fma(0.4000000059604644775390625, _5577, -1.0);
                float _5587 = fma(0.25, _5577, -1.0);
                float _5596 = fma(1.5625 * _5584, _5584, -0.5625) * (_5587 * _5587);
                _7104 = fma(_5249, _5596, _7015);
                _7102 = _7012 + (_5030[_7008] * (_5249 * _5596));
            }
            else
            {
                _7104 = _7015;
                _7102 = _7012;
            }
            float _5278 = exp((-2.2999999523162841796875) * dot(_5228, _5228));
            float _5280 = _5278 * _5249;
            if ((_6959 == 0) && (_7001 == 0))
            {
                vec3 _5639 = _5030[_7008] * _5280;
                _7046 = _5639;
                _7045 = _5030[_7008] * _5639;
                _7044 = _5030[_7008];
                _7043 = _5030[_7008];
                _7042 = _5280;
            }
            else
            {
                vec3 _5618 = _5030[_7008] * _5280;
                _7046 = _7041 + _5618;
                _7045 = fma(_5030[_7008], _5618, _7037);
                _7044 = min(_7033, _5030[_7008]);
                _7043 = max(_7029, _5030[_7008]);
                _7042 = fma(_5278, _5249, _7025);
            }
            _5297 = _7008 + 1;
        }
    }
    vec3 _5674 = vec3((abs(_6960) > 1.1754943508222875079687365372222e-38) ? _6960 : 1.0);
    vec3 _5675 = _6968 / _5674;
    float _5317 = _6974 * float(_6974 > 6.099999882280826568603515625e-05);
    float _6985;
    vec3 _6987;
    if (_5317 > 6.099999882280826568603515625e-05)
    {
        _6987 = clamp(_6977 / vec3(_5317), _6964, _6962);
        _6985 = _5317 * 0.04625000059604644775390625;
    }
    else
    {
        _6987 = _6977;
        _6985 = _5317;
    }
    float _7155 = _5117 ? 1.0 : _6985;
    float _7156 = _5117 ? 0.0 : _5008;
    vec3 _5767 = (sqrt(abs(fma(-_5675, _5675, _6966 / _5674))) * vec3(1.7000000476837158203125, 1.0, 1.0)) * mix(3.0, 1.0, max(clamp(_2595 * 0.0500000007450580596923828125, 0.0, 1.0), max(clamp(fma(-textureLod(r_farthest_depth_mip1_linear, max(vec2(0.5), min(_2434 * _2699, _2699 - vec2(0.5))) / vec2(textureSize(r_farthest_depth_mip1, 0)), 0.0).x, 0.0500000007450580596923828125, 0.75), 0.0, 1.0), max(fma(-_2752, _2504, 1.0), max(pow(_2740, 0.5), _2748)))));
    vec3 _5776 = (_6935 - _5675) / max(_5767, vec3(1.19299997436428384389728307724e-07));
    vec3 _6997;
    if (length(_5776) > 1.0)
    {
        _6997 = mix(fma(normalize(_5776), _5767, _5675), _6935, vec3(clamp((max(textureLod(r_luma_instability_linear, max(vec2(0.5), min(_2576, _2550)) / _2556, 0.0).x, clamp(clamp(_4900 - 1.0, 0.0, 1.0), 0.0, 1.0)) * _2507) * (1.0 - _2744), 0.0, 1.0)));
    }
    else
    {
        _6997 = _6935;
    }
    vec3 _5922 = mix(_6997, mix(_6987, _5675, bvec3(_5117)), vec3(clamp(_7155 / max(6.099999882280826568603515625e-05, fma(_7156, float(_7156 > 6.099999882280826568603515625e-05), _7155)), 0.0, 1.0)));
    float _5927 = _5922.x;
    float _5929 = _5922.y;
    float _5932 = _5922.z;
    vec4 _5954 = texelFetch(r_input_exposure, ivec2(0), 0);
    float _5955 = _5954.x;
    imageStore(rw_internal_upscaled_color, _2291, vec4(max(vec3((_5927 + _5929) - _5932, _5927 + _5932, (_5927 - _5929) - _5932) / vec3((_5955 == 0.0) ? 1.0 : _5955), vec3(0.0)), max(0.0, fma((-0.100000001490116119384765625) / cbFSR3Upscaler.fJitterSequenceLength, 1.0 - _4895, max(0.0, min(fma(imageLoad(rw_new_locks_read, _2291).x, 1.0 - max(0.0, _2740), _4900), 2.0)))) * float(_4961 == true)));
    imageStore(rw_new_locks, _2291, vec4(0.0));
}

