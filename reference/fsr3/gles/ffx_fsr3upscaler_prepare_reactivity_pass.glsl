#version 320 es
layout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;

const ivec2 _956[9] = ivec2[](ivec2(0), ivec2(-1), ivec2(0, -1), ivec2(1, -1), ivec2(-1, 0), ivec2(1, 0), ivec2(-1, 1), ivec2(0, 1), ivec2(1));
const uint _1084[4] = uint[](23u, 45u, 209u, 417u);
float _2936;
const ivec2 _2977[4] = ivec2[](ivec2(0), ivec2(1, 0), ivec2(0, 1), ivec2(1));

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

uniform highp sampler2D r_reactive_mask;
uniform highp sampler2D r_transparency_and_composition_mask;
uniform highp sampler2D r_transparency_and_composition_mask_linear;
uniform highp sampler2D r_accumulation_linear;
layout(binding=0, rgba8) uniform writeonly highp image2D rw_accumulation;
uniform highp sampler2D r_shading_change_linear;
uniform highp sampler2D r_current_luma;
layout(binding=1, rgba8) uniform writeonly highp image2D rw_new_locks;
uniform highp usampler2D r_reconstructed_previous_nearest_depth;
uniform highp sampler2D r_dilated_motion_vectors;
uniform highp sampler2D r_dilated_depth;
uniform highp sampler2D r_input_exposure;
layout(binding=2, rgba8) uniform writeonly highp image2D rw_dilated_reactive_masks;

void main()
{
    ivec2 _1316 = ivec2(gl_GlobalInvocationID.xy);
    vec2 _1390 = vec2(_1316) + vec2(0.5);
    vec2 _1392 = vec2(cbFSR3Upscaler.iRenderSize);
    vec2 _1393 = _1390 / _1392;
    vec2 _1466 = texelFetch(r_dilated_motion_vectors, _1316, 0).xy;
    float _1515 = cbFSR3Upscaler.fDeviceToViewDepth.y / (texelFetch(r_dilated_depth, _1316, 0).x - cbFSR3Upscaler.fDeviceToViewDepth.x);
    float _1558 = _1515 * cbFSR3Upscaler.fViewSpaceToMetersFactor;
    float _1691 = length(_1466 * vec2(3840.0, 2160.0));
    vec2 _1706 = fma(_1393 + (_1466 * float(_1691 > mix(0.25, 0.75, clamp(min(_1558, 65504.0) * 0.00999999977648258209228515625, 0.0, 1.0)))), _1392, vec2(-0.5));
    ivec2 _1709 = ivec2(floor(_1706));
    vec2 _1749 = fract(_1706);
    float _1718 = _1749.x;
    float _1719 = 1.0 - _1718;
    float _1721 = _1749.y;
    float _1722 = 1.0 - _1721;
    float _2802[4] = float[](_1719 * _1722, _1718 * _1722, _1719 * _1721, _1718 * _1721);
    bool _2880;
    float _2881;
    float _2882;
    _2882 = 0.0;
    _2881 = 0.0;
    _2880 = true;
    bool _2951;
    float _2954;
    float _2957;
    for (int _2879 = 0; (_2879 < 4) && _2880; _2882 = _2957, _2881 = _2954, _2880 = _2951, _2879++)
    {
        ivec2 _1767 = _1709 + _2977[_2879];
        ivec2 _2985 = ivec2(max(0, min(_1767.x, (cbFSR3Upscaler.iRenderSize.x - 1))), max(0, min(_1767.y, (cbFSR3Upscaler.iRenderSize.y - 1))));
        if (all(lessThan(uvec2(_2985), uvec2(cbFSR3Upscaler.iRenderSize))))
        {
            bool _2952;
            float _2955;
            float _2958;
            if (_2802[_2879] > 0.0006099999882280826568603515625)
            {
                float _1835 = cbFSR3Upscaler.fDeviceToViewDepth.y / (uintBitsToFloat(texelFetch(r_reconstructed_previous_nearest_depth, _2985, 0).x) - cbFSR3Upscaler.fDeviceToViewDepth.x);
                float _1608 = _1515 - _1835;
                bool _1612 = _2880 && (_1608 > 1.1754943508222875079687365372222e-38);
                float _2956;
                float _2959;
                if (_1612)
                {
                    _2959 = fma(clamp(((1.3699999726668465882539749145508e-05 * length(_1392 * 0.5)) * max(_1515, _1835)) / _1608, 0.0, 1.0), _2802[_2879], _2882);
                    _2956 = _2881 + _2802[_2879];
                }
                else
                {
                    _2959 = _2882;
                    _2956 = _2881;
                }
                _2958 = _2959;
                _2955 = _2956;
                _2952 = _1612;
            }
            else
            {
                _2958 = _2882;
                _2955 = _2881;
                _2952 = _2880;
            }
            _2957 = _2958;
            _2954 = _2955;
            _2951 = _2952;
        }
        else
        {
            _2957 = _2882;
            _2954 = _2881;
            _2951 = _2880;
        }
    }
    float _2883;
    if (_2880 && (_2881 > 0.0))
    {
        _2883 = clamp(1.0 - (_2882 / _2881), 0.0, 1.0);
    }
    else
    {
        _2883 = 0.0;
    }
    int _2884;
    float _2885;
    _2885 = 0.0;
    _2884 = -1;
    float _2947;
    for (; _2884 <= 1; _2885 = _2947, _2884++)
    {
        _2947 = _2885;
        for (int _2945 = -1; _2945 <= 1; )
        {
            ivec2 _1918 = _1316 + ivec2(_2945, _2884);
            _2947 = max(_2947, texelFetch(r_reactive_mask, ivec2(max(0, min(_1918.x, (cbFSR3Upscaler.iRenderSize.x - 1))), max(0, min(_1918.y, (cbFSR3Upscaler.iRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fReactivenessScale);
            _2945++;
            continue;
        }
    }
    vec2 _2017 = vec2(cbFSR3Upscaler.iMaxRenderSize);
    vec2 _2035 = vec2(ivec2(_1392 * 0.5));
    float _2075 = max(_2885, clamp(textureLod(r_shading_change_linear, max(vec2(0.5), min((_1393 - (cbFSR3Upscaler.fJitter / _1392)) * _2035, _2035 - vec2(0.5))) / vec2(ivec2(_2017 * 0.5)), 0.0).x * cbFSR3Upscaler.fShadingChangeScale, 0.0, 1.0));
    vec2 _2099 = _1393 + _1466;
    ivec2 _2103 = ivec2(_2099 * _1392);
    float _2171 = (cbFSR3Upscaler.fDeviceToViewDepth.y / (texelFetch(r_dilated_depth, _2103, 0).x - cbFSR3Upscaler.fDeviceToViewDepth.x)) * cbFSR3Upscaler.fViewSpaceToMetersFactor;
    float _2239 = max(_2171, _1558);
    float _2886;
    if (_2239 != 0.0)
    {
        _2886 = min(_2171, _1558) / _2239;
    }
    else
    {
        _2886 = 0.0;
    }
    float _2388 = _2099.x;
    bool _2389 = _2388 >= 0.0;
    bool _2395;
    if (_2389)
    {
        _2395 = _2388 <= 1.0;
    }
    else
    {
        _2395 = _2389;
    }
    bool _2407;
    if (_2395)
    {
        float _2398 = _2099.y;
        bool _2399 = _2398 >= 0.0;
        bool _2405;
        if (_2399)
        {
            _2405 = _2398 <= 1.0;
        }
        else
        {
            _2405 = _2399;
        }
        _2407 = _2405;
    }
    else
    {
        _2407 = _2395;
    }
    float _2887;
    if (_2407)
    {
        vec2 _2427 = vec2(cbFSR3Upscaler.iPreviousFrameRenderSize);
        _2887 = clamp(textureLod(r_accumulation_linear, max(vec2(0.5), min(_2099 * _2427, _2427 - vec2(0.5))) / _2017, 0.0).x, 0.0, 1.0);
    }
    else
    {
        _2887 = 0.0;
    }
    float _2469 = mix(_2887, 0.0, _2075);
    float _2484 = mix(_2469, min(cbFSR3Upscaler.fMinDisocclusionAccumulation, _2469), _2883);
    float _2374 = float(round(_2484 * 100.0) > 1.0);
    imageStore(rw_accumulation, _1316, vec4(clamp(fma(_2484, _2374, cbFSR3Upscaler.fAccumulationAddedPerFrame), 0.0, 1.0), 0.0, 0.0, 0.0));
    imageStore(rw_dilated_reactive_masks, _1316, vec4(max(((1.0 - clamp(length(texelFetch(r_dilated_motion_vectors, _2103, 0).xy * vec2(3840.0, 2160.0)) / _1691, 0.0, 1.0)) * _2886) * clamp(_1691 * 0.100000001490116119384765625, 0.0, 1.0), textureLod(r_transparency_and_composition_mask_linear, max(vec2(0.5), min(_1390, _1392 - vec2(0.5))) / vec2(textureSize(r_transparency_and_composition_mask, 0)), 0.0).x), _2883, _2075, _2484 * _2374));
    float _2923;
    do
    {
        float _2917;
        float _2922;
        _2922 = 1.1754943508222875079687365372222e-38;
        _2917 = 3.4028234663852885981170418348452e+38;
        float _2508[9];
        for (int _2900 = 0; _2900 < 9; )
        {
            ivec2 _2668 = _1316 + _956[_2900];
            vec4 _2718 = texelFetch(r_input_exposure, ivec2(0), 0);
            float _2719 = _2718.x;
            _2508[_2900] = texelFetch(r_current_luma, ivec2(max(0, min(_2668.x, (cbFSR3Upscaler.iRenderSize.x - 1))), max(0, min(_2668.y, (cbFSR3Upscaler.iRenderSize.y - 1)))), 0).x * ((_2719 == 0.0) ? 1.0 : _2719);
            _2922 = max(_2922, _2508[_2900]);
            _2917 = min(_2917, _2508[_2900]);
            _2900++;
            continue;
        }
        float _2902;
        float _2903;
        uint _2907;
        _2907 = 1u;
        _2903 = 3.4028234663852885981170418348452e+38;
        _2902 = 0.0;
        float _2964;
        float _2965;
        uint _2966;
        for (int _2901 = 1, _2938 = 1; _2901 < 9; _2938++, _2907 = _2966, _2903 = _2965, _2902 = _2964, _2901++)
        {
            if ((abs(_2508[_2901] - _2508[0]) / (_2922 - _2917)) < 0.89999997615814208984375)
            {
                _2966 = _2907 | (1u << uint(_2938));
                _2965 = _2903;
                _2964 = _2902;
            }
            else
            {
                _2966 = _2907;
                _2965 = min(_2903, _2508[_2901]);
                _2964 = max(_2902, _2508[_2901]);
            }
        }
        bool _2609 = _2508[0] > _2902;
        bool _2617;
        if (!_2609)
        {
            _2617 = _2508[0] < _2903;
        }
        else
        {
            _2617 = _2609;
        }
        if (false == _2617)
        {
            _2923 = 0.0;
            break;
        }
        bool _2908;
        float _2924;
        int _2904 = 0;
        for (;;)
        {
            if (uint(_2904) < 4u)
            {
                if ((_2907 & _1084[_2904]) == _1084[_2904])
                {
                    _2924 = 0.0;
                    _2908 = true;
                    break;
                }
                _2904++;
                continue;
            }
            else
            {
                _2924 = _2936;
                _2908 = false;
                break;
            }
        }
        if (_2908)
        {
            _2923 = _2924;
            break;
        }
        _2923 = 1.0 - (_2917 / _2922);
        break;
    } while(false);
    if (_2923 > 0.00999999977648258209228515625)
    {
        imageStore(rw_new_locks, ivec2(floor(((_1390 - cbFSR3Upscaler.fJitter) / _1392) * vec2(cbFSR3Upscaler.iUpscaleSize))), vec4(_2923, 0.0, 0.0, 0.0));
    }
}

