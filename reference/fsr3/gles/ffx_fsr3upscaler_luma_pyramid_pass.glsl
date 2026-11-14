#version 320 es
layout(binding=0, rgba16f) uniform coherent writeonly highp image2DArray rw_spd_pyramid;
layout(binding=1, rgba16f) uniform coherent readonly highp image2DArray rw_spd_pyramid_read;
layout(local_size_x = 256, local_size_y = 1, local_size_z = 1) in;

float _12123;

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

layout(binding = 1, std140) uniform cbSPD_t
{
    uint mips;
    uint numWorkGroups;
    uvec2 workGroupOffset;
    uvec2 renderSize;
} cbSPD;

uniform highp sampler2D r_farthest_depth;
layout(binding=2, rgba16f) uniform writeonly highp image2D rw_farthest_depth_mip1;
uniform highp sampler2D r_current_luma;
layout(binding=3, rgba32f) uniform writeonly highp image2D rw_frame_info;
layout(binding=4, rgba32f) uniform readonly highp image2D rw_frame_info_read;

layout(binding=5, r32ui) uniform coherent highp uimage2D rw_spd_global_atomic;

shared uint spdCounter;
shared float spdIntermediateR[16][16];
shared float spdIntermediateG[16][16];
shared float spdIntermediateB[16][16];
shared float spdIntermediateA[16][16];

void main()
{
    uvec2 _2022 = uvec2(gl_WorkGroupID.xy) + cbSPD.workGroupOffset;
    do
    {
        uint _2255;
        int _2256;
        uint _2258;
        int _2259;
        ivec2 _2260;
        ivec2 _2270;
        uint _3050;
        uint _2064 = gl_LocalInvocationIndex % 64u;
        uint _2072 = bitfieldInsert(bitfieldExtract(_2064, 2, 3), _2064, 0, 1) + (8u * ((gl_LocalInvocationIndex >> uint(6)) % 2u));
        uint _2078 = bitfieldInsert(bitfieldExtract(_2064, 3, 3), bitfieldExtract(_2064, 1, 2), 0, 2) + (8u * (gl_LocalInvocationIndex >> uint(7)));
        do
        {
            ivec2 _2253 = ivec2(_2022 * uvec2(64u));
            _2255 = _2072 * 2u;
            _2256 = int(_2255);
            _2258 = _2078 * 2u;
            _2259 = int(_2258);
            _2260 = ivec2(_2256, _2259);
            ivec2 _2265 = ivec2(_2022 * uvec2(32u));
            int _2267 = int(_2072);
            int _2269 = int(_2078);
            _2270 = ivec2(_2267, _2269);
            ivec2 _2271 = _2265 + _2270;
            uvec2 _2273 = uvec2(_2253 + _2260);
            ivec2 _2585 = ivec2(vec2(ivec2(_2273)));
            int _2625 = cbFSR3Upscaler.iRenderSize.x - 1;
            int _2633 = cbFSR3Upscaler.iRenderSize.y - 1;
            ivec2 _12104 = ivec2(max(0, min(_2585.x, _2625)), max(0, min(_2585.y, _2633)));
            vec4 _2665 = texelFetch(r_current_luma, _12104, 0);
            float _2666 = _2665.x;
            vec4 _11497 = vec4(0.0);
            _11497.x = max(6.099999882280826568603515625e-05, log(_2666));
            _11497.y = _2666;
            _11497.z = texelFetch(r_farthest_depth, _12104, 0).x;
            ivec2 _2694 = ivec2(vec2(ivec2(_2273 + uvec2(0u, 1u))));
            ivec2 _12105 = ivec2(max(0, min(_2694.x, _2625)), max(0, min(_2694.y, _2633)));
            vec4 _2774 = texelFetch(r_current_luma, _12105, 0);
            float _2775 = _2774.x;
            vec4 _11511 = vec4(0.0);
            _11511.x = max(6.099999882280826568603515625e-05, log(_2775));
            _11511.y = _2775;
            _11511.z = texelFetch(r_farthest_depth, _12105, 0).x;
            ivec2 _2803 = ivec2(vec2(ivec2(_2273 + uvec2(1u, 0u))));
            ivec2 _12106 = ivec2(max(0, min(_2803.x, _2625)), max(0, min(_2803.y, _2633)));
            vec4 _2883 = texelFetch(r_current_luma, _12106, 0);
            float _2884 = _2883.x;
            vec4 _11525 = vec4(0.0);
            _11525.x = max(6.099999882280826568603515625e-05, log(_2884));
            _11525.y = _2884;
            _11525.z = texelFetch(r_farthest_depth, _12106, 0).x;
            ivec2 _2912 = ivec2(vec2(ivec2(_2273 + uvec2(1u))));
            ivec2 _12107 = ivec2(max(0, min(_2912.x, _2625)), max(0, min(_2912.y, _2633)));
            vec4 _2992 = texelFetch(r_current_luma, _12107, 0);
            float _2993 = _2992.x;
            vec4 _11539 = vec4(0.0);
            _11539.x = max(6.099999882280826568603515625e-05, log(_2993));
            _11539.y = _2993;
            _11539.z = texelFetch(r_farthest_depth, _12107, 0).x;
            vec4 _2199[4];
            _2199[0] = (((_11497 + _11511) + _11525) + _11539) * 0.25;
            imageStore(rw_farthest_depth_mip1, _2271, vec4(_2199[0].z, 0.0, 0.0, 0.0));
            _3050 = cbSPD.mips - 1u;
            bool _3051 = 0u == _3050;
            if (_3051)
            {
                if (all(equal(_2271, ivec2(0))))
                {
                    vec4 _3164 = imageLoad(rw_frame_info_read, ivec2(0));
                    float _3061 = _3164.y;
                    float _12012;
                    if (_3061 < 10000.0)
                    {
                        _12012 = max(0.0, fma(_2199[0].x - _3061, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _3061));
                    }
                    else
                    {
                        _12012 = _2199[0].x;
                    }
                    _3164.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12012) * 8.0));
                    _3164.y = _12012;
                    _3164.z = _2199[0].y;
                    imageStore(rw_frame_info, ivec2(0), _3164);
                }
            }
            int _2289 = int(_2255 + 32u);
            int _2301 = int(_2072 + 16u);
            ivec2 _2305 = _2265 + ivec2(_2301, _2269);
            uvec2 _2307 = uvec2(_2253 + ivec2(_2289, _2259));
            ivec2 _3286 = ivec2(vec2(ivec2(_2307)));
            ivec2 _12111 = ivec2(max(0, min(_3286.x, _2625)), max(0, min(_3286.y, _2633)));
            vec4 _3366 = texelFetch(r_current_luma, _12111, 0);
            float _3367 = _3366.x;
            vec4 _11563 = vec4(0.0);
            _11563.x = max(6.099999882280826568603515625e-05, log(_3367));
            _11563.y = _3367;
            _11563.z = texelFetch(r_farthest_depth, _12111, 0).x;
            ivec2 _3395 = ivec2(vec2(ivec2(_2307 + uvec2(0u, 1u))));
            ivec2 _12112 = ivec2(max(0, min(_3395.x, _2625)), max(0, min(_3395.y, _2633)));
            vec4 _3475 = texelFetch(r_current_luma, _12112, 0);
            float _3476 = _3475.x;
            vec4 _11577 = vec4(0.0);
            _11577.x = max(6.099999882280826568603515625e-05, log(_3476));
            _11577.y = _3476;
            _11577.z = texelFetch(r_farthest_depth, _12112, 0).x;
            ivec2 _3504 = ivec2(vec2(ivec2(_2307 + uvec2(1u, 0u))));
            ivec2 _12113 = ivec2(max(0, min(_3504.x, _2625)), max(0, min(_3504.y, _2633)));
            vec4 _3584 = texelFetch(r_current_luma, _12113, 0);
            float _3585 = _3584.x;
            vec4 _11591 = vec4(0.0);
            _11591.x = max(6.099999882280826568603515625e-05, log(_3585));
            _11591.y = _3585;
            _11591.z = texelFetch(r_farthest_depth, _12113, 0).x;
            ivec2 _3613 = ivec2(vec2(ivec2(_2307 + uvec2(1u))));
            ivec2 _12114 = ivec2(max(0, min(_3613.x, _2625)), max(0, min(_3613.y, _2633)));
            vec4 _3693 = texelFetch(r_current_luma, _12114, 0);
            float _3694 = _3693.x;
            vec4 _11605 = vec4(0.0);
            _11605.x = max(6.099999882280826568603515625e-05, log(_3694));
            _11605.y = _3694;
            _11605.z = texelFetch(r_farthest_depth, _12114, 0).x;
            _2199[1] = (((_11563 + _11577) + _11591) + _11605) * 0.25;
            imageStore(rw_farthest_depth_mip1, _2305, vec4(_2199[1].z, 0.0, 0.0, 0.0));
            if (_3051)
            {
                if (all(equal(_2305, ivec2(0))))
                {
                    vec4 _3865 = imageLoad(rw_frame_info_read, ivec2(0));
                    float _3762 = _3865.y;
                    float _12014;
                    if (_3762 < 10000.0)
                    {
                        _12014 = max(0.0, fma(_2199[1].x - _3762, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _3762));
                    }
                    else
                    {
                        _12014 = _2199[1].x;
                    }
                    _3865.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12014) * 8.0));
                    _3865.y = _12014;
                    _3865.z = _2199[1].y;
                    imageStore(rw_frame_info, ivec2(0), _3865);
                }
            }
            int _2326 = int(_2258 + 32u);
            int _2337 = int(_2078 + 16u);
            ivec2 _2339 = _2265 + ivec2(_2267, _2337);
            uvec2 _2341 = uvec2(_2253 + ivec2(_2256, _2326));
            ivec2 _3987 = ivec2(vec2(ivec2(_2341)));
            ivec2 _12115 = ivec2(max(0, min(_3987.x, _2625)), max(0, min(_3987.y, _2633)));
            vec4 _4067 = texelFetch(r_current_luma, _12115, 0);
            float _4068 = _4067.x;
            vec4 _11629 = vec4(0.0);
            _11629.x = max(6.099999882280826568603515625e-05, log(_4068));
            _11629.y = _4068;
            _11629.z = texelFetch(r_farthest_depth, _12115, 0).x;
            ivec2 _4096 = ivec2(vec2(ivec2(_2341 + uvec2(0u, 1u))));
            ivec2 _12116 = ivec2(max(0, min(_4096.x, _2625)), max(0, min(_4096.y, _2633)));
            vec4 _4176 = texelFetch(r_current_luma, _12116, 0);
            float _4177 = _4176.x;
            vec4 _11643 = vec4(0.0);
            _11643.x = max(6.099999882280826568603515625e-05, log(_4177));
            _11643.y = _4177;
            _11643.z = texelFetch(r_farthest_depth, _12116, 0).x;
            ivec2 _4205 = ivec2(vec2(ivec2(_2341 + uvec2(1u, 0u))));
            ivec2 _12117 = ivec2(max(0, min(_4205.x, _2625)), max(0, min(_4205.y, _2633)));
            vec4 _4285 = texelFetch(r_current_luma, _12117, 0);
            float _4286 = _4285.x;
            vec4 _11657 = vec4(0.0);
            _11657.x = max(6.099999882280826568603515625e-05, log(_4286));
            _11657.y = _4286;
            _11657.z = texelFetch(r_farthest_depth, _12117, 0).x;
            ivec2 _4314 = ivec2(vec2(ivec2(_2341 + uvec2(1u))));
            ivec2 _12118 = ivec2(max(0, min(_4314.x, _2625)), max(0, min(_4314.y, _2633)));
            vec4 _4394 = texelFetch(r_current_luma, _12118, 0);
            float _4395 = _4394.x;
            vec4 _11671 = vec4(0.0);
            _11671.x = max(6.099999882280826568603515625e-05, log(_4395));
            _11671.y = _4395;
            _11671.z = texelFetch(r_farthest_depth, _12118, 0).x;
            _2199[2] = (((_11629 + _11643) + _11657) + _11671) * 0.25;
            imageStore(rw_farthest_depth_mip1, _2339, vec4(_2199[2].z, 0.0, 0.0, 0.0));
            if (_3051)
            {
                if (all(equal(_2339, ivec2(0))))
                {
                    vec4 _4566 = imageLoad(rw_frame_info_read, ivec2(0));
                    float _4463 = _4566.y;
                    float _12016;
                    if (_4463 < 10000.0)
                    {
                        _12016 = max(0.0, fma(_2199[2].x - _4463, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _4463));
                    }
                    else
                    {
                        _12016 = _2199[2].x;
                    }
                    _4566.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12016) * 8.0));
                    _4566.y = _12016;
                    _4566.z = _2199[2].y;
                    imageStore(rw_frame_info, ivec2(0), _4566);
                }
            }
            ivec2 _2375 = _2265 + ivec2(_2301, _2337);
            uvec2 _2377 = uvec2(_2253 + ivec2(_2289, _2326));
            ivec2 _4688 = ivec2(vec2(ivec2(_2377)));
            ivec2 _12119 = ivec2(max(0, min(_4688.x, _2625)), max(0, min(_4688.y, _2633)));
            vec4 _4768 = texelFetch(r_current_luma, _12119, 0);
            float _4769 = _4768.x;
            vec4 _11695 = vec4(0.0);
            _11695.x = max(6.099999882280826568603515625e-05, log(_4769));
            _11695.y = _4769;
            _11695.z = texelFetch(r_farthest_depth, _12119, 0).x;
            ivec2 _4797 = ivec2(vec2(ivec2(_2377 + uvec2(0u, 1u))));
            ivec2 _12120 = ivec2(max(0, min(_4797.x, _2625)), max(0, min(_4797.y, _2633)));
            vec4 _4877 = texelFetch(r_current_luma, _12120, 0);
            float _4878 = _4877.x;
            vec4 _11709 = vec4(0.0);
            _11709.x = max(6.099999882280826568603515625e-05, log(_4878));
            _11709.y = _4878;
            _11709.z = texelFetch(r_farthest_depth, _12120, 0).x;
            ivec2 _4906 = ivec2(vec2(ivec2(_2377 + uvec2(1u, 0u))));
            ivec2 _12121 = ivec2(max(0, min(_4906.x, _2625)), max(0, min(_4906.y, _2633)));
            vec4 _4986 = texelFetch(r_current_luma, _12121, 0);
            float _4987 = _4986.x;
            vec4 _11723 = vec4(0.0);
            _11723.x = max(6.099999882280826568603515625e-05, log(_4987));
            _11723.y = _4987;
            _11723.z = texelFetch(r_farthest_depth, _12121, 0).x;
            ivec2 _5015 = ivec2(vec2(ivec2(_2377 + uvec2(1u))));
            ivec2 _12122 = ivec2(max(0, min(_5015.x, _2625)), max(0, min(_5015.y, _2633)));
            vec4 _5095 = texelFetch(r_current_luma, _12122, 0);
            float _5096 = _5095.x;
            vec4 _11737 = vec4(0.0);
            _11737.x = max(6.099999882280826568603515625e-05, log(_5096));
            _11737.y = _5096;
            _11737.z = texelFetch(r_farthest_depth, _12122, 0).x;
            _2199[3] = (((_11695 + _11709) + _11723) + _11737) * 0.25;
            imageStore(rw_farthest_depth_mip1, _2375, vec4(_2199[3].z, 0.0, 0.0, 0.0));
            if (_3051)
            {
                if (all(equal(_2375, ivec2(0))))
                {
                    vec4 _5267 = imageLoad(rw_frame_info_read, ivec2(0));
                    float _5164 = _5267.y;
                    float _12018;
                    if (_5164 < 10000.0)
                    {
                        _12018 = max(0.0, fma(_2199[3].x - _5164, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _5164));
                    }
                    else
                    {
                        _12018 = _2199[3].x;
                    }
                    _5267.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12018) * 8.0));
                    _5267.y = _12018;
                    _5267.z = _2199[3].y;
                    imageStore(rw_frame_info, ivec2(0), _5267);
                }
            }
            if (cbSPD.mips <= 1u)
            {
                break;
            }
            for (uint _12020 = 0u; _12020 < 4u; _12020++)
            {
                spdIntermediateR[_2072][_2078] = _2199[_12020].x;
                spdIntermediateG[_2072][_2078] = _2199[_12020].y;
                spdIntermediateB[_2072][_2078] = _2199[_12020].z;
                spdIntermediateA[_2072][_2078] = _2199[_12020].w;
                groupMemoryBarrier();
                barrier();
                if (gl_LocalInvocationIndex < 64u)
                {
                    uint _2415 = _2255 + 1u;
                    uint _2425 = _2258 + 1u;
                    _2199[_12020] = (((vec4(spdIntermediateR[_2255][_2258], spdIntermediateG[_2255][_2258], spdIntermediateB[_2255][_2258], spdIntermediateA[_2255][_2258]) + vec4(spdIntermediateR[_2415][_2258], spdIntermediateG[_2415][_2258], spdIntermediateB[_2415][_2258], spdIntermediateA[_2415][_2258])) + vec4(spdIntermediateR[_2255][_2425], spdIntermediateG[_2255][_2425], spdIntermediateB[_2255][_2425], spdIntermediateA[_2255][_2425])) + vec4(spdIntermediateR[_2415][_2425], spdIntermediateG[_2415][_2425], spdIntermediateB[_2415][_2425], spdIntermediateA[_2415][_2425])) * 0.25;
                    if (1u == _3050)
                    {
                        if (all(equal((ivec2(_2022 * uvec2(16u)) + ivec2(int(_2072 + ((_12020 % 2u) * 8u)), int(_2078 + ((_12020 / 2u) * 8u)))), ivec2(0))))
                        {
                            vec4 _5601 = imageLoad(rw_frame_info_read, ivec2(0));
                            float _5498 = _5601.y;
                            float _12021;
                            if (_5498 < 10000.0)
                            {
                                _12021 = max(0.0, fma(_2199[_12020].x - _5498, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _5498));
                            }
                            else
                            {
                                _12021 = _2199[_12020].x;
                            }
                            _5601.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12021) * 8.0));
                            _5601.y = _12021;
                            _5601.z = _2199[_12020].y;
                            imageStore(rw_frame_info, ivec2(0), _5601);
                        }
                    }
                }
                groupMemoryBarrier();
                barrier();
            }
            if (gl_LocalInvocationIndex < 64u)
            {
                spdIntermediateR[_2072][_2078] = _2199[0].x;
                spdIntermediateG[_2072][_2078] = _2199[0].y;
                spdIntermediateB[_2072][_2078] = _2199[0].z;
                spdIntermediateA[_2072][_2078] = _2199[0].w;
                uint _2476 = _2072 + 8u;
                spdIntermediateR[_2476][_2078] = _2199[1].x;
                spdIntermediateG[_2476][_2078] = _2199[1].y;
                spdIntermediateB[_2476][_2078] = _2199[1].z;
                spdIntermediateA[_2476][_2078] = _2199[1].w;
                uint _2485 = _2078 + 8u;
                spdIntermediateR[_2072][_2485] = _2199[2].x;
                spdIntermediateG[_2072][_2485] = _2199[2].y;
                spdIntermediateB[_2072][_2485] = _2199[2].z;
                spdIntermediateA[_2072][_2485] = _2199[2].w;
                spdIntermediateR[_2476][_2485] = _2199[3].x;
                spdIntermediateG[_2476][_2485] = _2199[3].y;
                spdIntermediateB[_2476][_2485] = _2199[3].z;
                spdIntermediateA[_2476][_2485] = _2199[3].w;
            }
            break;
        } while(false);
        do
        {
            if (cbSPD.mips <= 2u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 64u)
            {
                uint _5829 = _2255 + 1u;
                uint _5839 = _2258 + 1u;
                float _5921 = spdIntermediateR[_2255][_2258];
                float _5925 = spdIntermediateG[_2255][_2258];
                float _5929 = spdIntermediateB[_2255][_2258];
                float _5940 = spdIntermediateR[_5829][_2258];
                float _5944 = spdIntermediateG[_5829][_2258];
                float _5948 = spdIntermediateB[_5829][_2258];
                float _5959 = spdIntermediateR[_2255][_5839];
                float _5963 = spdIntermediateG[_2255][_5839];
                float _5967 = spdIntermediateB[_2255][_5839];
                float _5978 = spdIntermediateR[_5829][_5839];
                float _5982 = spdIntermediateG[_5829][_5839];
                float _5986 = spdIntermediateB[_5829][_5839];
                vec4 _6001 = (((vec4(_5921, _5925, _5929, spdIntermediateA[_2255][_2258]) + vec4(_5940, _5944, _5948, spdIntermediateA[_5829][_2258])) + vec4(_5959, _5963, _5967, spdIntermediateA[_2255][_5839])) + vec4(_5978, _5982, _5986, spdIntermediateA[_5829][_5839])) * 0.25;
                if (2u == _3050)
                {
                    if (all(equal((ivec2(_2022 * uvec2(8u)) + _2270), ivec2(0))))
                    {
                        vec4 _6150 = imageLoad(rw_frame_info_read, ivec2(0));
                        float _6047 = _6150.y;
                        float _6049 = _6001.x;
                        float _12035;
                        if (_6047 < 10000.0)
                        {
                            _12035 = max(0.0, fma(_6049 - _6047, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _6047));
                        }
                        else
                        {
                            _12035 = _6049;
                        }
                        _6150.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12035) * 8.0));
                        _6150.y = _12035;
                        _6150.z = _6001.y;
                        imageStore(rw_frame_info, ivec2(0), _6150);
                    }
                }
                uint _5867 = _2255 + (_2078 % 2u);
                spdIntermediateR[_5867][_2258] = _6001.x;
                spdIntermediateG[_5867][_2258] = _6001.y;
                spdIntermediateB[_5867][_2258] = _6001.z;
                spdIntermediateA[_5867][_2258] = _6001.w;
            }
            if (cbSPD.mips <= 3u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 16u)
            {
                uint _6224 = _2072 * 4u;
                uint _6228 = _2078 * 4u;
                uint _6233 = _6224 + 2u;
                uint _6242 = _6224 + 1u;
                uint _6245 = _6228 + 2u;
                uint _6250 = _6224 + 3u;
                float _6327 = spdIntermediateR[_6224][_6228];
                float _6331 = spdIntermediateG[_6224][_6228];
                float _6335 = spdIntermediateB[_6224][_6228];
                float _6346 = spdIntermediateR[_6233][_6228];
                float _6350 = spdIntermediateG[_6233][_6228];
                float _6354 = spdIntermediateB[_6233][_6228];
                float _6365 = spdIntermediateR[_6242][_6245];
                float _6369 = spdIntermediateG[_6242][_6245];
                float _6373 = spdIntermediateB[_6242][_6245];
                float _6384 = spdIntermediateR[_6250][_6245];
                float _6388 = spdIntermediateG[_6250][_6245];
                float _6392 = spdIntermediateB[_6250][_6245];
                vec4 _6407 = (((vec4(_6327, _6331, _6335, spdIntermediateA[_6224][_6228]) + vec4(_6346, _6350, _6354, spdIntermediateA[_6233][_6228])) + vec4(_6365, _6369, _6373, spdIntermediateA[_6242][_6245])) + vec4(_6384, _6388, _6392, spdIntermediateA[_6250][_6245])) * 0.25;
                if (3u == _3050)
                {
                    if (all(equal((ivec2(_2022 * uvec2(4u)) + _2270), ivec2(0))))
                    {
                        vec4 _6556 = imageLoad(rw_frame_info_read, ivec2(0));
                        float _6453 = _6556.y;
                        float _6455 = _6407.x;
                        float _12037;
                        if (_6453 < 10000.0)
                        {
                            _12037 = max(0.0, fma(_6455 - _6453, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _6453));
                        }
                        else
                        {
                            _12037 = _6455;
                        }
                        _6556.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12037) * 8.0));
                        _6556.y = _12037;
                        _6556.z = _6407.y;
                        imageStore(rw_frame_info, ivec2(0), _6556);
                    }
                }
                uint _6273 = _6224 + _2078;
                spdIntermediateR[_6273][_6228] = _6407.x;
                spdIntermediateG[_6273][_6228] = _6407.y;
                spdIntermediateB[_6273][_6228] = _6407.z;
                spdIntermediateA[_6273][_6228] = _6407.w;
            }
            if (cbSPD.mips <= 4u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 4u)
            {
                uint _6630 = _2072 * 8u;
                uint _6635 = _6630 + _2258;
                uint _6637 = _2078 * 8u;
                uint _6646 = (_6630 + 4u) + _2258;
                uint _6657 = (_6630 + 1u) + _2258;
                uint _6660 = _6637 + 4u;
                uint _6668 = (_6630 + 5u) + _2258;
                float _6743 = spdIntermediateR[_6635][_6637];
                float _6747 = spdIntermediateG[_6635][_6637];
                float _6751 = spdIntermediateB[_6635][_6637];
                float _6762 = spdIntermediateR[_6646][_6637];
                float _6766 = spdIntermediateG[_6646][_6637];
                float _6770 = spdIntermediateB[_6646][_6637];
                float _6781 = spdIntermediateR[_6657][_6660];
                float _6785 = spdIntermediateG[_6657][_6660];
                float _6789 = spdIntermediateB[_6657][_6660];
                float _6800 = spdIntermediateR[_6668][_6660];
                float _6804 = spdIntermediateG[_6668][_6660];
                float _6808 = spdIntermediateB[_6668][_6660];
                vec4 _6823 = (((vec4(_6743, _6747, _6751, spdIntermediateA[_6635][_6637]) + vec4(_6762, _6766, _6770, spdIntermediateA[_6646][_6637])) + vec4(_6781, _6785, _6789, spdIntermediateA[_6657][_6660])) + vec4(_6800, _6804, _6808, spdIntermediateA[_6668][_6660])) * 0.25;
                if (4u == _3050)
                {
                    if (all(equal((ivec2(_2022 * uvec2(2u)) + _2270), ivec2(0))))
                    {
                        vec4 _6972 = imageLoad(rw_frame_info_read, ivec2(0));
                        float _6869 = _6972.y;
                        float _12039;
                        if (_6869 < 10000.0)
                        {
                            _12039 = max(0.0, fma(_6823.x - _6869, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _6869));
                        }
                        else
                        {
                            _12039 = _6823.x;
                        }
                        _6972.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12039) * 8.0));
                        _6972.y = _12039;
                        _6972.z = _6823.y;
                        imageStore(rw_frame_info, ivec2(0), _6972);
                    }
                }
                uint _6691 = _2072 + _2258;
                spdIntermediateR[_6691][0u] = _6823.x;
                spdIntermediateG[_6691][0u] = _6823.y;
                spdIntermediateB[_6691][0u] = _6823.z;
                spdIntermediateA[_6691][0u] = _6823.w;
            }
            if (cbSPD.mips <= 5u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 1u)
            {
                vec4 _7178 = (((vec4(spdIntermediateR[0u][0u], spdIntermediateG[0u][0u], _12123, _12123) + vec4(spdIntermediateR[1u][0u], spdIntermediateG[1u][0u], _12123, _12123)) + vec4(spdIntermediateR[2u][0u], spdIntermediateG[2u][0u], _12123, _12123)) + vec4(spdIntermediateR[3u][0u], spdIntermediateG[3u][0u], _12123, _12123)) * 0.25;
                ivec2 _7044 = ivec2(_2022);
                float _7311 = _7178.x;
                imageStore(rw_spd_pyramid, ivec3(_7044, 5), vec4(_7311, _7178.y, 0.0, 0.0));
                if (5u == _3050)
                {
                    if (all(equal(_7044, ivec2(0))))
                    {
                        vec4 _7327 = imageLoad(rw_frame_info_read, ivec2(0));
                        float _7224 = _7327.y;
                        float _12041;
                        if (_7224 < 10000.0)
                        {
                            _12041 = max(0.0, fma(_7311 - _7224, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _7224));
                        }
                        else
                        {
                            _12041 = _7311;
                        }
                        _7327.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12041) * 8.0));
                        _7327.y = _12041;
                        _7327.z = _7178.y;
                        imageStore(rw_frame_info, ivec2(0), _7327);
                    }
                }
            }
            break;
        } while(false);
        if (cbSPD.mips <= 6u)
        {
            break;
        }
        if (gl_LocalInvocationIndex == 0u)
        {
            uint _7383 = imageAtomicAdd(rw_spd_global_atomic, ivec2(0), 1u);
            spdCounter = _7383;
        }
        groupMemoryBarrier();
        barrier();
        if (spdCounter != (cbSPD.numWorkGroups - 1u))
        {
            break;
        }
        uint _7438;
        uint _7442;
        uint _7465;
        uint _7474;
        uint _7495;
        uint _7504;
        imageStore(rw_spd_global_atomic, ivec2(0), uvec4(0u));
        do
        {
            _7438 = _2072 * 4u;
            int _7440 = int(_7438);
            _7442 = _2078 * 4u;
            int _7444 = int(_7442);
            uvec2 _7456 = uvec2(ivec2(_7440, _7444));
            vec4 _7690 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7456), 5));
            vec4 _7754 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7456 + uvec2(0u, 1u)), 5));
            vec4 _7818 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7456 + uvec2(1u, 0u)), 5));
            vec4 _7882 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7456 + uvec2(1u)), 5));
            vec4 _7896 = (((vec4(_7690.xy, 0.0, 0.0) + vec4(_7754.xy, 0.0, 0.0)) + vec4(_7818.xy, 0.0, 0.0)) + vec4(_7882.xy, 0.0, 0.0)) * 0.25;
            bool _7932 = 6u == _3050;
            if (_7932)
            {
                if (all(equal(_2260, ivec2(0))))
                {
                    vec4 _8045 = imageLoad(rw_frame_info_read, ivec2(0));
                    float _7942 = _8045.y;
                    float _7944 = _7896.x;
                    float _12051;
                    if (_7942 < 10000.0)
                    {
                        _12051 = max(0.0, fma(_7944 - _7942, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _7942));
                    }
                    else
                    {
                        _12051 = _7944;
                    }
                    _8045.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12051) * 8.0));
                    _8045.y = _12051;
                    _8045.z = _7896.y;
                    imageStore(rw_frame_info, ivec2(0), _8045);
                }
            }
            _7465 = _7438 + 2u;
            int _7466 = int(_7465);
            _7474 = _2255 + 1u;
            int _7475 = int(_7474);
            uvec2 _7482 = uvec2(ivec2(_7466, _7444));
            vec4 _8207 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7482), 5));
            vec4 _8271 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7482 + uvec2(0u, 1u)), 5));
            vec4 _8335 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7482 + uvec2(1u, 0u)), 5));
            vec4 _8399 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7482 + uvec2(1u)), 5));
            vec4 _8413 = (((vec4(_8207.xy, 0.0, 0.0) + vec4(_8271.xy, 0.0, 0.0)) + vec4(_8335.xy, 0.0, 0.0)) + vec4(_8399.xy, 0.0, 0.0)) * 0.25;
            if (_7932)
            {
                if (all(equal(ivec2(_7475, _2259), ivec2(0))))
                {
                    vec4 _8562 = imageLoad(rw_frame_info_read, ivec2(0));
                    float _8459 = _8562.y;
                    float _8461 = _8413.x;
                    float _12061;
                    if (_8459 < 10000.0)
                    {
                        _12061 = max(0.0, fma(_8461 - _8459, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _8459));
                    }
                    else
                    {
                        _12061 = _8461;
                    }
                    _8562.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12061) * 8.0));
                    _8562.y = _12061;
                    _8562.z = _8413.y;
                    imageStore(rw_frame_info, ivec2(0), _8562);
                }
            }
            _7495 = _7442 + 2u;
            int _7496 = int(_7495);
            _7504 = _2258 + 1u;
            int _7505 = int(_7504);
            uvec2 _7508 = uvec2(ivec2(_7440, _7496));
            vec4 _8724 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7508), 5));
            vec4 _8788 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7508 + uvec2(0u, 1u)), 5));
            vec4 _8852 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7508 + uvec2(1u, 0u)), 5));
            vec4 _8916 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7508 + uvec2(1u)), 5));
            vec4 _8930 = (((vec4(_8724.xy, 0.0, 0.0) + vec4(_8788.xy, 0.0, 0.0)) + vec4(_8852.xy, 0.0, 0.0)) + vec4(_8916.xy, 0.0, 0.0)) * 0.25;
            if (_7932)
            {
                if (all(equal(ivec2(_2256, _7505), ivec2(0))))
                {
                    vec4 _9079 = imageLoad(rw_frame_info_read, ivec2(0));
                    float _8976 = _9079.y;
                    float _8978 = _8930.x;
                    float _12071;
                    if (_8976 < 10000.0)
                    {
                        _12071 = max(0.0, fma(_8978 - _8976, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _8976));
                    }
                    else
                    {
                        _12071 = _8978;
                    }
                    _9079.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12071) * 8.0));
                    _9079.y = _12071;
                    _9079.z = _8930.y;
                    imageStore(rw_frame_info, ivec2(0), _9079);
                }
            }
            uvec2 _7534 = uvec2(ivec2(_7466, _7496));
            vec4 _9241 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7534), 5));
            vec4 _9305 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7534 + uvec2(0u, 1u)), 5));
            vec4 _9369 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7534 + uvec2(1u, 0u)), 5));
            vec4 _9433 = imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_7534 + uvec2(1u)), 5));
            vec4 _9447 = (((vec4(_9241.xy, 0.0, 0.0) + vec4(_9305.xy, 0.0, 0.0)) + vec4(_9369.xy, 0.0, 0.0)) + vec4(_9433.xy, 0.0, 0.0)) * 0.25;
            if (_7932)
            {
                if (all(equal(ivec2(_7475, _7505), ivec2(0))))
                {
                    vec4 _9596 = imageLoad(rw_frame_info_read, ivec2(0));
                    float _9493 = _9596.y;
                    float _9495 = _9447.x;
                    float _12081;
                    if (_9493 < 10000.0)
                    {
                        _12081 = max(0.0, fma(_9495 - _9493, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _9493));
                    }
                    else
                    {
                        _12081 = _9495;
                    }
                    _9596.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12081) * 8.0));
                    _9596.y = _12081;
                    _9596.z = _9447.y;
                    imageStore(rw_frame_info, ivec2(0), _9596);
                }
            }
            if (cbSPD.mips <= 7u)
            {
                break;
            }
            vec4 _9640 = (((_7896 + _8413) + _8930) + _9447) * 0.25;
            if (7u == _3050)
            {
                if (all(equal(_2270, ivec2(0))))
                {
                    vec4 _9789 = imageLoad(rw_frame_info_read, ivec2(0));
                    float _9686 = _9789.y;
                    float _9688 = _9640.x;
                    float _12083;
                    if (_9686 < 10000.0)
                    {
                        _12083 = max(0.0, fma(_9688 - _9686, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _9686));
                    }
                    else
                    {
                        _12083 = _9688;
                    }
                    _9789.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12083) * 8.0));
                    _9789.y = _12083;
                    _9789.z = _9640.y;
                    imageStore(rw_frame_info, ivec2(0), _9789);
                }
            }
            spdIntermediateR[_2072][_2078] = _9640.x;
            spdIntermediateG[_2072][_2078] = _9640.y;
            spdIntermediateB[_2072][_2078] = _9640.z;
            spdIntermediateA[_2072][_2078] = _9640.w;
            break;
        } while(false);
        do
        {
            if (cbSPD.mips <= 8u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 64u)
            {
                float _10045 = spdIntermediateR[_2255][_2258];
                float _10049 = spdIntermediateG[_2255][_2258];
                float _10053 = spdIntermediateB[_2255][_2258];
                float _10064 = spdIntermediateR[_7474][_2258];
                float _10068 = spdIntermediateG[_7474][_2258];
                float _10072 = spdIntermediateB[_7474][_2258];
                float _10083 = spdIntermediateR[_2255][_7504];
                float _10087 = spdIntermediateG[_2255][_7504];
                float _10091 = spdIntermediateB[_2255][_7504];
                float _10102 = spdIntermediateR[_7474][_7504];
                float _10106 = spdIntermediateG[_7474][_7504];
                float _10110 = spdIntermediateB[_7474][_7504];
                vec4 _10125 = (((vec4(_10045, _10049, _10053, spdIntermediateA[_2255][_2258]) + vec4(_10064, _10068, _10072, spdIntermediateA[_7474][_2258])) + vec4(_10083, _10087, _10091, spdIntermediateA[_2255][_7504])) + vec4(_10102, _10106, _10110, spdIntermediateA[_7474][_7504])) * 0.25;
                uvec2 _9975 = uvec2(0u) * uvec2(8u);
                if (8u == _3050)
                {
                    if (all(equal((ivec2(_9975) + _2270), ivec2(0))))
                    {
                        vec4 _10274 = imageLoad(rw_frame_info_read, ivec2(0));
                        float _10171 = _10274.y;
                        float _10173 = _10125.x;
                        float _12085;
                        if (_10171 < 10000.0)
                        {
                            _12085 = max(0.0, fma(_10173 - _10171, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _10171));
                        }
                        else
                        {
                            _12085 = _10173;
                        }
                        _10274.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12085) * 8.0));
                        _10274.y = _12085;
                        _10274.z = _10125.y;
                        imageStore(rw_frame_info, ivec2(0), _10274);
                    }
                }
                uint _9991 = _2255 + (_2078 % 2u);
                spdIntermediateR[_9991][_2258] = _10125.x;
                spdIntermediateG[_9991][_2258] = _10125.y;
                spdIntermediateB[_9991][_2258] = _10125.z;
                spdIntermediateA[_9991][_2258] = _10125.w;
            }
            if (cbSPD.mips <= 9u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 16u)
            {
                uint _10366 = _7438 + 1u;
                uint _10374 = _7438 + 3u;
                float _10451 = spdIntermediateR[_7438][_7442];
                float _10455 = spdIntermediateG[_7438][_7442];
                float _10459 = spdIntermediateB[_7438][_7442];
                float _10470 = spdIntermediateR[_7465][_7442];
                float _10474 = spdIntermediateG[_7465][_7442];
                float _10478 = spdIntermediateB[_7465][_7442];
                float _10489 = spdIntermediateR[_10366][_7495];
                float _10493 = spdIntermediateG[_10366][_7495];
                float _10497 = spdIntermediateB[_10366][_7495];
                float _10508 = spdIntermediateR[_10374][_7495];
                float _10512 = spdIntermediateG[_10374][_7495];
                float _10516 = spdIntermediateB[_10374][_7495];
                vec4 _10531 = (((vec4(_10451, _10455, _10459, spdIntermediateA[_7438][_7442]) + vec4(_10470, _10474, _10478, spdIntermediateA[_7465][_7442])) + vec4(_10489, _10493, _10497, spdIntermediateA[_10366][_7495])) + vec4(_10508, _10512, _10516, spdIntermediateA[_10374][_7495])) * 0.25;
                uvec2 _10382 = uvec2(0u) * uvec2(4u);
                if (9u == _3050)
                {
                    if (all(equal((ivec2(_10382) + _2270), ivec2(0))))
                    {
                        vec4 _10680 = imageLoad(rw_frame_info_read, ivec2(0));
                        float _10577 = _10680.y;
                        float _10579 = _10531.x;
                        float _12087;
                        if (_10577 < 10000.0)
                        {
                            _12087 = max(0.0, fma(_10579 - _10577, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _10577));
                        }
                        else
                        {
                            _12087 = _10579;
                        }
                        _10680.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12087) * 8.0));
                        _10680.y = _12087;
                        _10680.z = _10531.y;
                        imageStore(rw_frame_info, ivec2(0), _10680);
                    }
                }
                uint _10397 = _7438 + _2078;
                spdIntermediateR[_10397][_7442] = _10531.x;
                spdIntermediateG[_10397][_7442] = _10531.y;
                spdIntermediateB[_10397][_7442] = _10531.z;
                spdIntermediateA[_10397][_7442] = _10531.w;
            }
            if (cbSPD.mips <= 10u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 4u)
            {
                uint _10754 = _2072 * 8u;
                uint _10759 = _10754 + _2258;
                uint _10761 = _2078 * 8u;
                uint _10770 = (_10754 + 4u) + _2258;
                uint _10781 = (_10754 + 1u) + _2258;
                uint _10784 = _10761 + 4u;
                uint _10792 = (_10754 + 5u) + _2258;
                float _10867 = spdIntermediateR[_10759][_10761];
                float _10871 = spdIntermediateG[_10759][_10761];
                float _10875 = spdIntermediateB[_10759][_10761];
                float _10886 = spdIntermediateR[_10770][_10761];
                float _10890 = spdIntermediateG[_10770][_10761];
                float _10894 = spdIntermediateB[_10770][_10761];
                float _10905 = spdIntermediateR[_10781][_10784];
                float _10909 = spdIntermediateG[_10781][_10784];
                float _10913 = spdIntermediateB[_10781][_10784];
                float _10924 = spdIntermediateR[_10792][_10784];
                float _10928 = spdIntermediateG[_10792][_10784];
                float _10932 = spdIntermediateB[_10792][_10784];
                vec4 _10947 = (((vec4(_10867, _10871, _10875, spdIntermediateA[_10759][_10761]) + vec4(_10886, _10890, _10894, spdIntermediateA[_10770][_10761])) + vec4(_10905, _10909, _10913, spdIntermediateA[_10781][_10784])) + vec4(_10924, _10928, _10932, spdIntermediateA[_10792][_10784])) * 0.25;
                uvec2 _10800 = uvec2(0u) * uvec2(2u);
                if (10u == _3050)
                {
                    if (all(equal((ivec2(_10800) + _2270), ivec2(0))))
                    {
                        vec4 _11096 = imageLoad(rw_frame_info_read, ivec2(0));
                        float _10993 = _11096.y;
                        float _12089;
                        if (_10993 < 10000.0)
                        {
                            _12089 = max(0.0, fma(_10947.x - _10993, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _10993));
                        }
                        else
                        {
                            _12089 = _10947.x;
                        }
                        _11096.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12089) * 8.0));
                        _11096.y = _12089;
                        _11096.z = _10947.y;
                        imageStore(rw_frame_info, ivec2(0), _11096);
                    }
                }
                uint _10815 = _2072 + _2258;
                spdIntermediateR[_10815][0u] = _10947.x;
                spdIntermediateG[_10815][0u] = _10947.y;
                spdIntermediateB[_10815][0u] = _10947.z;
                spdIntermediateA[_10815][0u] = _10947.w;
            }
            if (cbSPD.mips <= 11u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 1u)
            {
                vec4 _11302 = (((vec4(spdIntermediateR[0u][0u], spdIntermediateG[0u][0u], _12123, _12123) + vec4(spdIntermediateR[1u][0u], spdIntermediateG[1u][0u], _12123, _12123)) + vec4(spdIntermediateR[2u][0u], spdIntermediateG[2u][0u], _12123, _12123)) + vec4(spdIntermediateR[3u][0u], spdIntermediateG[3u][0u], _12123, _12123)) * 0.25;
                if (11u == _3050)
                {
                    if (all(equal(ivec2(0), ivec2(0))))
                    {
                        vec4 _11451 = imageLoad(rw_frame_info_read, ivec2(0));
                        float _11348 = _11451.y;
                        float _11350 = _11302.x;
                        float _12091;
                        if (_11348 < 10000.0)
                        {
                            _12091 = max(0.0, fma(_11350 - _11348, 1.0 - exp(-cbFSR3Upscaler.fDeltaTime), _11348));
                        }
                        else
                        {
                            _12091 = _11350;
                        }
                        _11451.x = 0.833333313465118408203125 / pow(2.0, log2(exp(_12091) * 8.0));
                        _11451.y = _12091;
                        _11451.z = _11302.y;
                        imageStore(rw_frame_info, ivec2(0), _11451);
                    }
                }
            }
            break;
        } while(false);
        break;
    } while(false);
}

