#version 320 es
layout(binding=0, rgba16f) uniform coherent writeonly highp image2DArray rw_spd_pyramid;
layout(binding=1, rgba16f) uniform coherent readonly highp image2DArray rw_spd_pyramid_read;
layout(local_size_x = 256, local_size_y = 1, local_size_z = 1) in;

const ivec2 _1000[5] = ivec2[](ivec2(0), ivec2(-1, 0), ivec2(1, 0), ivec2(0, -1), ivec2(0, 1));
float _31244;

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

uniform highp sampler2D r_current_luma;
uniform highp sampler2D r_previous_luma;
uniform highp sampler2D r_dilated_motion_vectors;
uniform highp sampler2D r_input_exposure;






layout(binding=2, r32ui) uniform coherent highp uimage2D rw_spd_global_atomic;

shared uint spdCounter;
shared float spdIntermediateR[16][16];
shared float spdIntermediateG[16][16];
shared float spdIntermediateB[16][16];
shared float spdIntermediateA[16][16];

void main()
{
    uvec2 _2494 = uvec2(gl_WorkGroupID.xy) + cbSPD.workGroupOffset;
    do
    {
        uint _2727;
        uint _2730;
        ivec2 _2742;
        uint _2536 = gl_LocalInvocationIndex % 64u;
        uint _2544 = bitfieldInsert(bitfieldExtract(_2536, 2, 3), _2536, 0, 1) + (8u * ((gl_LocalInvocationIndex >> uint(6)) % 2u));
        uint _2550 = bitfieldInsert(bitfieldExtract(_2536, 3, 3), bitfieldExtract(_2536, 1, 2), 0, 2) + (8u * (gl_LocalInvocationIndex >> uint(7)));
        do
        {
            ivec2 _2725 = ivec2(_2494 * uvec2(64u));
            _2727 = _2544 * 2u;
            int _2728 = int(_2727);
            _2730 = _2550 * 2u;
            int _2731 = int(_2730);
            ivec2 _2737 = ivec2(_2494 * uvec2(32u));
            int _2739 = int(_2544);
            int _2741 = int(_2550);
            _2742 = ivec2(_2739, _2741);
            uvec2 _2745 = uvec2(_2725 + ivec2(_2728, _2731));
            ivec2 _3058 = ivec2(vec2(ivec2(_2745)));
            int _3110 = cbFSR3Upscaler.iRenderSize.x - 1;
            int _3118 = cbFSR3Upscaler.iRenderSize.y - 1;
            ivec2 _31196 = ivec2(max(0, min(_3058.x, _3110)), max(0, min(_3058.y, _3118)));
            vec2 _3071 = vec2(cbFSR3Upscaler.iRenderSize);
            vec2 _3072 = (vec2(_31196) + vec2(0.5)) / _3071;
            vec2 _3202 = cbFSR3Upscaler.fJitter / _3071;
            ivec2 _3209 = ivec2(floor((_3072 + _3202) * _3071));
            float _28771[5];
            for (int _30423 = 0; _30423 < 5; )
            {
                ivec2 _3273 = _3209 + _1000[_30423];
                vec4 _3323 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _3324 = _3323.x;
                _28771[_30423] = texelFetch(r_current_luma, ivec2(max(0, min(_3273.x, _3110)), max(0, min(_3273.y, _3118))), 0).x * ((_3324 == 0.0) ? 1.0 : _3324);
                _28771[_30423] = pow(_28771[_30423], 1.0);
                _28771[_30423] = max(_28771[_30423], 6.099999882280826568603515625e-05);
                _30423++;
                continue;
            }
            vec2 _3361 = vec2(cbFSR3Upscaler.iPreviousFrameRenderSize);
            vec2 _3362 = cbFSR3Upscaler.fPreviousFrameJitter / _3361;
            vec2 _3366 = (_3072 + _3362) + texelFetch(r_dilated_motion_vectors, _31196, 0).xy;
            float _3427 = _3366.x;
            bool _3428 = _3427 >= 0.0;
            bool _3434;
            if (_3428)
            {
                _3434 = _3427 <= 1.0;
            }
            else
            {
                _3434 = _3428;
            }
            bool _3446;
            if (_3434)
            {
                float _3437 = _3366.y;
                bool _3438 = _3437 >= 0.0;
                bool _3444;
                if (_3438)
                {
                    _3444 = _3437 <= 1.0;
                }
                else
                {
                    _3444 = _3438;
                }
                _3446 = _3444;
            }
            else
            {
                _3446 = _3434;
            }
            float _29489[5];
            if (_3446)
            {
                ivec2 _3378 = ivec2(floor(_3366 * _3361));
                for (int _30424 = 0; _30424 < 5; )
                {
                    ivec2 _3468 = _3378 + _1000[_30424];
                    vec4 _3522 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _3523 = _3522.x;
                    _29489[_30424] = (texelFetch(r_previous_luma, ivec2(max(0, min(_3468.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_3468.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_3523 == 0.0) ? 1.0 : _3523);
                    _29489[_30424] = pow(_29489[_30424], 1.0);
                    _29489[_30424] = max(_29489[_30424], 6.099999882280826568603515625e-05);
                    _30424++;
                    continue;
                }
            }
            float _30428;
            if (_3446)
            {
                float _3802 = min(_28771[0], _28771[3]);
                float _3807 = max(_28771[0], _28771[3]);
                float _3812 = min(_28771[1], _28771[4]);
                float _3817 = max(_28771[1], _28771[4]);
                float _3822 = min(_3802, _28771[2]);
                float _3827 = max(_3802, _28771[2]);
                float _3832 = min(_3812, _3807);
                float _3837 = max(_3812, _3807);
                float _3847 = max(_3822, _3832);
                float _3852 = min(_3827, _3817);
                float _3857 = max(_3827, _3817);
                float _3867 = max(_3847, _3852);
                float _3872 = min(_3837, _3857);
                float _28783[5] = float[](min(_3822, _3832), min(_3847, _3852), min(_3867, _3872), max(_3867, _3872), max(_3837, _3857));
                float _4055 = min(_29489[0], _29489[3]);
                float _4060 = max(_29489[0], _29489[3]);
                float _4065 = min(_29489[1], _29489[4]);
                float _4070 = max(_29489[1], _29489[4]);
                float _4075 = min(_4055, _29489[2]);
                float _4080 = max(_4055, _29489[2]);
                float _4085 = min(_4065, _4060);
                float _4090 = max(_4065, _4060);
                float _4100 = max(_4075, _4085);
                float _4105 = min(_4080, _4070);
                float _4110 = max(_4080, _4070);
                float _4120 = max(_4100, _4105);
                float _4125 = min(_4090, _4110);
                float _28790[5] = float[](min(_4075, _4085), min(_4100, _4105), min(_4120, _4125), max(_4120, _4125), max(_4090, _4110));
                float _30427;
                if (min(_28783[4], _28790[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30426;
                    _30426 = 65503.0;
                    float _31040;
                    int _31182;
                    int _31183;
                    for (int _30425 = 0, _31028 = 0, _31029 = 0; (_30425 < 5) && (_30426 < 65504.0); _31029 = _31183, _31028 = _31182, _30426 = _31040, _30425++)
                    {
                        float _3579 = _28783[_31028] - _28790[_31029];
                        if (abs(_3579) > 6.099999882280826568603515625e-05)
                        {
                            float _4168 = max(_28783[_31028], _28790[_31029]);
                            float _31030;
                            if (_4168 != 0.0)
                            {
                                _31030 = min(_28783[_31028], _28790[_31029]) / _4168;
                            }
                            else
                            {
                                _31030 = 0.0;
                            }
                            float _3594 = sign(_3579) * (1.0 - _31030);
                            int _3612 = _31028 + int(_28783[_31028] < _28790[_31029]);
                            _31183 = _31029 + int(_28783[_3612] >= _28790[_31029]);
                            _31182 = _3612;
                            _31040 = (abs(_3594) < abs(_30426)) ? _3594 : _30426;
                        }
                        else
                        {
                            _31183 = _31029;
                            _31182 = _31028;
                            _31040 = 65504.0;
                        }
                    }
                    _30427 = _30426;
                }
                else
                {
                    _30427 = 65503.0;
                }
                _30428 = _30427 * float(_30427 < 65503.0);
            }
            else
            {
                _30428 = 0.0;
            }
            vec4 _29788 = vec4(0.0);
            _29788.x = _30428;
            float _30435;
            if (_30428 != 0.0)
            {
                _30435 = sign(_30428);
            }
            else
            {
                _30435 = 0.0;
            }
            _29788.y = _30435;
            _29788.z = 1.0;
            ivec2 _4190 = ivec2(vec2(ivec2(_2745 + uvec2(0u, 1u))));
            ivec2 _31197 = ivec2(max(0, min(_4190.x, _3110)), max(0, min(_4190.y, _3118)));
            vec2 _4204 = (vec2(_31197) + vec2(0.5)) / _3071;
            ivec2 _4341 = ivec2(floor((_4204 + _3202) * _3071));
            float _28619[5];
            for (int _30437 = 0; _30437 < 5; )
            {
                ivec2 _4405 = _4341 + _1000[_30437];
                vec4 _4455 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _4456 = _4455.x;
                _28619[_30437] = texelFetch(r_current_luma, ivec2(max(0, min(_4405.x, _3110)), max(0, min(_4405.y, _3118))), 0).x * ((_4456 == 0.0) ? 1.0 : _4456);
                _28619[_30437] = pow(_28619[_30437], 1.0);
                _28619[_30437] = max(_28619[_30437], 6.099999882280826568603515625e-05);
                _30437++;
                continue;
            }
            vec2 _4498 = (_4204 + _3362) + texelFetch(r_dilated_motion_vectors, _31197, 0).xy;
            float _4559 = _4498.x;
            bool _4560 = _4559 >= 0.0;
            bool _4566;
            if (_4560)
            {
                _4566 = _4559 <= 1.0;
            }
            else
            {
                _4566 = _4560;
            }
            bool _4578;
            if (_4566)
            {
                float _4569 = _4498.y;
                bool _4570 = _4569 >= 0.0;
                bool _4576;
                if (_4570)
                {
                    _4576 = _4569 <= 1.0;
                }
                else
                {
                    _4576 = _4570;
                }
                _4578 = _4576;
            }
            else
            {
                _4578 = _4566;
            }
            float _29445[5];
            if (_4578)
            {
                ivec2 _4510 = ivec2(floor(_4498 * _3361));
                for (int _30438 = 0; _30438 < 5; )
                {
                    ivec2 _4600 = _4510 + _1000[_30438];
                    vec4 _4654 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _4655 = _4654.x;
                    _29445[_30438] = (texelFetch(r_previous_luma, ivec2(max(0, min(_4600.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_4600.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_4655 == 0.0) ? 1.0 : _4655);
                    _29445[_30438] = pow(_29445[_30438], 1.0);
                    _29445[_30438] = max(_29445[_30438], 6.099999882280826568603515625e-05);
                    _30438++;
                    continue;
                }
            }
            float _30442;
            if (_4578)
            {
                float _4934 = min(_28619[0], _28619[3]);
                float _4939 = max(_28619[0], _28619[3]);
                float _4944 = min(_28619[1], _28619[4]);
                float _4949 = max(_28619[1], _28619[4]);
                float _4954 = min(_4934, _28619[2]);
                float _4959 = max(_4934, _28619[2]);
                float _4964 = min(_4944, _4939);
                float _4969 = max(_4944, _4939);
                float _4979 = max(_4954, _4964);
                float _4984 = min(_4959, _4949);
                float _4989 = max(_4959, _4949);
                float _4999 = max(_4979, _4984);
                float _5004 = min(_4969, _4989);
                float _28631[5] = float[](min(_4954, _4964), min(_4979, _4984), min(_4999, _5004), max(_4999, _5004), max(_4969, _4989));
                float _5187 = min(_29445[0], _29445[3]);
                float _5192 = max(_29445[0], _29445[3]);
                float _5197 = min(_29445[1], _29445[4]);
                float _5202 = max(_29445[1], _29445[4]);
                float _5207 = min(_5187, _29445[2]);
                float _5212 = max(_5187, _29445[2]);
                float _5217 = min(_5197, _5192);
                float _5222 = max(_5197, _5192);
                float _5232 = max(_5207, _5217);
                float _5237 = min(_5212, _5202);
                float _5242 = max(_5212, _5202);
                float _5252 = max(_5232, _5237);
                float _5257 = min(_5222, _5242);
                float _28638[5] = float[](min(_5207, _5217), min(_5232, _5237), min(_5252, _5257), max(_5252, _5257), max(_5222, _5242));
                float _30441;
                if (min(_28631[4], _28638[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30440;
                    _30440 = 65503.0;
                    float _31043;
                    int _31180;
                    int _31181;
                    for (int _30439 = 0, _31016 = 0, _31017 = 0; (_30439 < 5) && (_30440 < 65504.0); _31017 = _31181, _31016 = _31180, _30440 = _31043, _30439++)
                    {
                        float _4711 = _28631[_31016] - _28638[_31017];
                        if (abs(_4711) > 6.099999882280826568603515625e-05)
                        {
                            float _5300 = max(_28631[_31016], _28638[_31017]);
                            float _31018;
                            if (_5300 != 0.0)
                            {
                                _31018 = min(_28631[_31016], _28638[_31017]) / _5300;
                            }
                            else
                            {
                                _31018 = 0.0;
                            }
                            float _4726 = sign(_4711) * (1.0 - _31018);
                            int _4744 = _31016 + int(_28631[_31016] < _28638[_31017]);
                            _31181 = _31017 + int(_28631[_4744] >= _28638[_31017]);
                            _31180 = _4744;
                            _31043 = (abs(_4726) < abs(_30440)) ? _4726 : _30440;
                        }
                        else
                        {
                            _31181 = _31017;
                            _31180 = _31016;
                            _31043 = 65504.0;
                        }
                    }
                    _30441 = _30440;
                }
                else
                {
                    _30441 = 65503.0;
                }
                _30442 = _30441 * float(_30441 < 65503.0);
            }
            else
            {
                _30442 = 0.0;
            }
            vec4 _29822 = vec4(0.0);
            _29822.x = _30442;
            float _30449;
            if (_30442 != 0.0)
            {
                _30449 = sign(_30442);
            }
            else
            {
                _30449 = 0.0;
            }
            _29822.y = _30449;
            _29822.z = 1.0;
            ivec2 _5322 = ivec2(vec2(ivec2(_2745 + uvec2(1u, 0u))));
            ivec2 _31198 = ivec2(max(0, min(_5322.x, _3110)), max(0, min(_5322.y, _3118)));
            vec2 _5336 = (vec2(_31198) + vec2(0.5)) / _3071;
            ivec2 _5473 = ivec2(floor((_5336 + _3202) * _3071));
            float _28467[5];
            for (int _30451 = 0; _30451 < 5; )
            {
                ivec2 _5537 = _5473 + _1000[_30451];
                vec4 _5587 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _5588 = _5587.x;
                _28467[_30451] = texelFetch(r_current_luma, ivec2(max(0, min(_5537.x, _3110)), max(0, min(_5537.y, _3118))), 0).x * ((_5588 == 0.0) ? 1.0 : _5588);
                _28467[_30451] = pow(_28467[_30451], 1.0);
                _28467[_30451] = max(_28467[_30451], 6.099999882280826568603515625e-05);
                _30451++;
                continue;
            }
            vec2 _5630 = (_5336 + _3362) + texelFetch(r_dilated_motion_vectors, _31198, 0).xy;
            float _5691 = _5630.x;
            bool _5692 = _5691 >= 0.0;
            bool _5698;
            if (_5692)
            {
                _5698 = _5691 <= 1.0;
            }
            else
            {
                _5698 = _5692;
            }
            bool _5710;
            if (_5698)
            {
                float _5701 = _5630.y;
                bool _5702 = _5701 >= 0.0;
                bool _5708;
                if (_5702)
                {
                    _5708 = _5701 <= 1.0;
                }
                else
                {
                    _5708 = _5702;
                }
                _5710 = _5708;
            }
            else
            {
                _5710 = _5698;
            }
            float _29401[5];
            if (_5710)
            {
                ivec2 _5642 = ivec2(floor(_5630 * _3361));
                for (int _30452 = 0; _30452 < 5; )
                {
                    ivec2 _5732 = _5642 + _1000[_30452];
                    vec4 _5786 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _5787 = _5786.x;
                    _29401[_30452] = (texelFetch(r_previous_luma, ivec2(max(0, min(_5732.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_5732.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_5787 == 0.0) ? 1.0 : _5787);
                    _29401[_30452] = pow(_29401[_30452], 1.0);
                    _29401[_30452] = max(_29401[_30452], 6.099999882280826568603515625e-05);
                    _30452++;
                    continue;
                }
            }
            float _30456;
            if (_5710)
            {
                float _6066 = min(_28467[0], _28467[3]);
                float _6071 = max(_28467[0], _28467[3]);
                float _6076 = min(_28467[1], _28467[4]);
                float _6081 = max(_28467[1], _28467[4]);
                float _6086 = min(_6066, _28467[2]);
                float _6091 = max(_6066, _28467[2]);
                float _6096 = min(_6076, _6071);
                float _6101 = max(_6076, _6071);
                float _6111 = max(_6086, _6096);
                float _6116 = min(_6091, _6081);
                float _6121 = max(_6091, _6081);
                float _6131 = max(_6111, _6116);
                float _6136 = min(_6101, _6121);
                float _28479[5] = float[](min(_6086, _6096), min(_6111, _6116), min(_6131, _6136), max(_6131, _6136), max(_6101, _6121));
                float _6319 = min(_29401[0], _29401[3]);
                float _6324 = max(_29401[0], _29401[3]);
                float _6329 = min(_29401[1], _29401[4]);
                float _6334 = max(_29401[1], _29401[4]);
                float _6339 = min(_6319, _29401[2]);
                float _6344 = max(_6319, _29401[2]);
                float _6349 = min(_6329, _6324);
                float _6354 = max(_6329, _6324);
                float _6364 = max(_6339, _6349);
                float _6369 = min(_6344, _6334);
                float _6374 = max(_6344, _6334);
                float _6384 = max(_6364, _6369);
                float _6389 = min(_6354, _6374);
                float _28486[5] = float[](min(_6339, _6349), min(_6364, _6369), min(_6384, _6389), max(_6384, _6389), max(_6354, _6374));
                float _30455;
                if (min(_28479[4], _28486[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30454;
                    _30454 = 65503.0;
                    float _31046;
                    int _31178;
                    int _31179;
                    for (int _30453 = 0, _31004 = 0, _31005 = 0; (_30453 < 5) && (_30454 < 65504.0); _31005 = _31179, _31004 = _31178, _30454 = _31046, _30453++)
                    {
                        float _5843 = _28479[_31004] - _28486[_31005];
                        if (abs(_5843) > 6.099999882280826568603515625e-05)
                        {
                            float _6432 = max(_28479[_31004], _28486[_31005]);
                            float _31006;
                            if (_6432 != 0.0)
                            {
                                _31006 = min(_28479[_31004], _28486[_31005]) / _6432;
                            }
                            else
                            {
                                _31006 = 0.0;
                            }
                            float _5858 = sign(_5843) * (1.0 - _31006);
                            int _5876 = _31004 + int(_28479[_31004] < _28486[_31005]);
                            _31179 = _31005 + int(_28479[_5876] >= _28486[_31005]);
                            _31178 = _5876;
                            _31046 = (abs(_5858) < abs(_30454)) ? _5858 : _30454;
                        }
                        else
                        {
                            _31179 = _31005;
                            _31178 = _31004;
                            _31046 = 65504.0;
                        }
                    }
                    _30455 = _30454;
                }
                else
                {
                    _30455 = 65503.0;
                }
                _30456 = _30455 * float(_30455 < 65503.0);
            }
            else
            {
                _30456 = 0.0;
            }
            vec4 _29856 = vec4(0.0);
            _29856.x = _30456;
            float _30463;
            if (_30456 != 0.0)
            {
                _30463 = sign(_30456);
            }
            else
            {
                _30463 = 0.0;
            }
            _29856.y = _30463;
            _29856.z = 1.0;
            ivec2 _6454 = ivec2(vec2(ivec2(_2745 + uvec2(1u))));
            ivec2 _31199 = ivec2(max(0, min(_6454.x, _3110)), max(0, min(_6454.y, _3118)));
            vec2 _6468 = (vec2(_31199) + vec2(0.5)) / _3071;
            ivec2 _6605 = ivec2(floor((_6468 + _3202) * _3071));
            float _28315[5];
            for (int _30465 = 0; _30465 < 5; )
            {
                ivec2 _6669 = _6605 + _1000[_30465];
                vec4 _6719 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _6720 = _6719.x;
                _28315[_30465] = texelFetch(r_current_luma, ivec2(max(0, min(_6669.x, _3110)), max(0, min(_6669.y, _3118))), 0).x * ((_6720 == 0.0) ? 1.0 : _6720);
                _28315[_30465] = pow(_28315[_30465], 1.0);
                _28315[_30465] = max(_28315[_30465], 6.099999882280826568603515625e-05);
                _30465++;
                continue;
            }
            vec2 _6762 = (_6468 + _3362) + texelFetch(r_dilated_motion_vectors, _31199, 0).xy;
            float _6823 = _6762.x;
            bool _6824 = _6823 >= 0.0;
            bool _6830;
            if (_6824)
            {
                _6830 = _6823 <= 1.0;
            }
            else
            {
                _6830 = _6824;
            }
            bool _6842;
            if (_6830)
            {
                float _6833 = _6762.y;
                bool _6834 = _6833 >= 0.0;
                bool _6840;
                if (_6834)
                {
                    _6840 = _6833 <= 1.0;
                }
                else
                {
                    _6840 = _6834;
                }
                _6842 = _6840;
            }
            else
            {
                _6842 = _6830;
            }
            float _29357[5];
            if (_6842)
            {
                ivec2 _6774 = ivec2(floor(_6762 * _3361));
                for (int _30466 = 0; _30466 < 5; )
                {
                    ivec2 _6864 = _6774 + _1000[_30466];
                    vec4 _6918 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _6919 = _6918.x;
                    _29357[_30466] = (texelFetch(r_previous_luma, ivec2(max(0, min(_6864.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_6864.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_6919 == 0.0) ? 1.0 : _6919);
                    _29357[_30466] = pow(_29357[_30466], 1.0);
                    _29357[_30466] = max(_29357[_30466], 6.099999882280826568603515625e-05);
                    _30466++;
                    continue;
                }
            }
            float _30470;
            if (_6842)
            {
                float _7198 = min(_28315[0], _28315[3]);
                float _7203 = max(_28315[0], _28315[3]);
                float _7208 = min(_28315[1], _28315[4]);
                float _7213 = max(_28315[1], _28315[4]);
                float _7218 = min(_7198, _28315[2]);
                float _7223 = max(_7198, _28315[2]);
                float _7228 = min(_7208, _7203);
                float _7233 = max(_7208, _7203);
                float _7243 = max(_7218, _7228);
                float _7248 = min(_7223, _7213);
                float _7253 = max(_7223, _7213);
                float _7263 = max(_7243, _7248);
                float _7268 = min(_7233, _7253);
                float _28327[5] = float[](min(_7218, _7228), min(_7243, _7248), min(_7263, _7268), max(_7263, _7268), max(_7233, _7253));
                float _7451 = min(_29357[0], _29357[3]);
                float _7456 = max(_29357[0], _29357[3]);
                float _7461 = min(_29357[1], _29357[4]);
                float _7466 = max(_29357[1], _29357[4]);
                float _7471 = min(_7451, _29357[2]);
                float _7476 = max(_7451, _29357[2]);
                float _7481 = min(_7461, _7456);
                float _7486 = max(_7461, _7456);
                float _7496 = max(_7471, _7481);
                float _7501 = min(_7476, _7466);
                float _7506 = max(_7476, _7466);
                float _7516 = max(_7496, _7501);
                float _7521 = min(_7486, _7506);
                float _28334[5] = float[](min(_7471, _7481), min(_7496, _7501), min(_7516, _7521), max(_7516, _7521), max(_7486, _7506));
                float _30469;
                if (min(_28327[4], _28334[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30468;
                    _30468 = 65503.0;
                    float _31049;
                    int _31176;
                    int _31177;
                    for (int _30467 = 0, _30992 = 0, _30993 = 0; (_30467 < 5) && (_30468 < 65504.0); _30993 = _31177, _30992 = _31176, _30468 = _31049, _30467++)
                    {
                        float _6975 = _28327[_30992] - _28334[_30993];
                        if (abs(_6975) > 6.099999882280826568603515625e-05)
                        {
                            float _7564 = max(_28327[_30992], _28334[_30993]);
                            float _30994;
                            if (_7564 != 0.0)
                            {
                                _30994 = min(_28327[_30992], _28334[_30993]) / _7564;
                            }
                            else
                            {
                                _30994 = 0.0;
                            }
                            float _6990 = sign(_6975) * (1.0 - _30994);
                            int _7008 = _30992 + int(_28327[_30992] < _28334[_30993]);
                            _31177 = _30993 + int(_28327[_7008] >= _28334[_30993]);
                            _31176 = _7008;
                            _31049 = (abs(_6990) < abs(_30468)) ? _6990 : _30468;
                        }
                        else
                        {
                            _31177 = _30993;
                            _31176 = _30992;
                            _31049 = 65504.0;
                        }
                    }
                    _30469 = _30468;
                }
                else
                {
                    _30469 = 65503.0;
                }
                _30470 = _30469 * float(_30469 < 65503.0);
            }
            else
            {
                _30470 = 0.0;
            }
            vec4 _29890 = vec4(0.0);
            _29890.x = _30470;
            float _30477;
            if (_30470 != 0.0)
            {
                _30477 = sign(_30470);
            }
            else
            {
                _30477 = 0.0;
            }
            _29890.y = _30477;
            _29890.z = 1.0;
            vec4 _2671[4];
            _2671[0] = (((_29788 + _29822) + _29856) + _29890) * 0.25;
            imageStore(rw_spd_pyramid, ivec3(_2737 + _2742, 0), vec4(_2671[0].xy, 0.0, 0.0));
            int _2761 = int(_2727 + 32u);
            int _2773 = int(_2544 + 16u);
            uvec2 _2779 = uvec2(_2725 + ivec2(_2761, _2731));
            ivec2 _7742 = ivec2(vec2(ivec2(_2779)));
            ivec2 _31200 = ivec2(max(0, min(_7742.x, _3110)), max(0, min(_7742.y, _3118)));
            vec2 _7756 = (vec2(_31200) + vec2(0.5)) / _3071;
            ivec2 _7893 = ivec2(floor((_7756 + _3202) * _3071));
            float _28163[5];
            for (int _30519 = 0; _30519 < 5; )
            {
                ivec2 _7957 = _7893 + _1000[_30519];
                vec4 _8007 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _8008 = _8007.x;
                _28163[_30519] = texelFetch(r_current_luma, ivec2(max(0, min(_7957.x, _3110)), max(0, min(_7957.y, _3118))), 0).x * ((_8008 == 0.0) ? 1.0 : _8008);
                _28163[_30519] = pow(_28163[_30519], 1.0);
                _28163[_30519] = max(_28163[_30519], 6.099999882280826568603515625e-05);
                _30519++;
                continue;
            }
            vec2 _8050 = (_7756 + _3362) + texelFetch(r_dilated_motion_vectors, _31200, 0).xy;
            float _8111 = _8050.x;
            bool _8112 = _8111 >= 0.0;
            bool _8118;
            if (_8112)
            {
                _8118 = _8111 <= 1.0;
            }
            else
            {
                _8118 = _8112;
            }
            bool _8130;
            if (_8118)
            {
                float _8121 = _8050.y;
                bool _8122 = _8121 >= 0.0;
                bool _8128;
                if (_8122)
                {
                    _8128 = _8121 <= 1.0;
                }
                else
                {
                    _8128 = _8122;
                }
                _8130 = _8128;
            }
            else
            {
                _8130 = _8118;
            }
            float _29313[5];
            if (_8130)
            {
                ivec2 _8062 = ivec2(floor(_8050 * _3361));
                for (int _30520 = 0; _30520 < 5; )
                {
                    ivec2 _8152 = _8062 + _1000[_30520];
                    vec4 _8206 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _8207 = _8206.x;
                    _29313[_30520] = (texelFetch(r_previous_luma, ivec2(max(0, min(_8152.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_8152.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_8207 == 0.0) ? 1.0 : _8207);
                    _29313[_30520] = pow(_29313[_30520], 1.0);
                    _29313[_30520] = max(_29313[_30520], 6.099999882280826568603515625e-05);
                    _30520++;
                    continue;
                }
            }
            float _30524;
            if (_8130)
            {
                float _8486 = min(_28163[0], _28163[3]);
                float _8491 = max(_28163[0], _28163[3]);
                float _8496 = min(_28163[1], _28163[4]);
                float _8501 = max(_28163[1], _28163[4]);
                float _8506 = min(_8486, _28163[2]);
                float _8511 = max(_8486, _28163[2]);
                float _8516 = min(_8496, _8491);
                float _8521 = max(_8496, _8491);
                float _8531 = max(_8506, _8516);
                float _8536 = min(_8511, _8501);
                float _8541 = max(_8511, _8501);
                float _8551 = max(_8531, _8536);
                float _8556 = min(_8521, _8541);
                float _28175[5] = float[](min(_8506, _8516), min(_8531, _8536), min(_8551, _8556), max(_8551, _8556), max(_8521, _8541));
                float _8739 = min(_29313[0], _29313[3]);
                float _8744 = max(_29313[0], _29313[3]);
                float _8749 = min(_29313[1], _29313[4]);
                float _8754 = max(_29313[1], _29313[4]);
                float _8759 = min(_8739, _29313[2]);
                float _8764 = max(_8739, _29313[2]);
                float _8769 = min(_8749, _8744);
                float _8774 = max(_8749, _8744);
                float _8784 = max(_8759, _8769);
                float _8789 = min(_8764, _8754);
                float _8794 = max(_8764, _8754);
                float _8804 = max(_8784, _8789);
                float _8809 = min(_8774, _8794);
                float _28182[5] = float[](min(_8759, _8769), min(_8784, _8789), min(_8804, _8809), max(_8804, _8809), max(_8774, _8794));
                float _30523;
                if (min(_28175[4], _28182[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30522;
                    _30522 = 65503.0;
                    float _31068;
                    int _31174;
                    int _31175;
                    for (int _30521 = 0, _30980 = 0, _30981 = 0; (_30521 < 5) && (_30522 < 65504.0); _30981 = _31175, _30980 = _31174, _30522 = _31068, _30521++)
                    {
                        float _8263 = _28175[_30980] - _28182[_30981];
                        if (abs(_8263) > 6.099999882280826568603515625e-05)
                        {
                            float _8852 = max(_28175[_30980], _28182[_30981]);
                            float _30982;
                            if (_8852 != 0.0)
                            {
                                _30982 = min(_28175[_30980], _28182[_30981]) / _8852;
                            }
                            else
                            {
                                _30982 = 0.0;
                            }
                            float _8278 = sign(_8263) * (1.0 - _30982);
                            int _8296 = _30980 + int(_28175[_30980] < _28182[_30981]);
                            _31175 = _30981 + int(_28175[_8296] >= _28182[_30981]);
                            _31174 = _8296;
                            _31068 = (abs(_8278) < abs(_30522)) ? _8278 : _30522;
                        }
                        else
                        {
                            _31175 = _30981;
                            _31174 = _30980;
                            _31068 = 65504.0;
                        }
                    }
                    _30523 = _30522;
                }
                else
                {
                    _30523 = 65503.0;
                }
                _30524 = _30523 * float(_30523 < 65503.0);
            }
            else
            {
                _30524 = 0.0;
            }
            vec4 _29924 = vec4(0.0);
            _29924.x = _30524;
            float _30531;
            if (_30524 != 0.0)
            {
                _30531 = sign(_30524);
            }
            else
            {
                _30531 = 0.0;
            }
            _29924.y = _30531;
            _29924.z = 1.0;
            ivec2 _8874 = ivec2(vec2(ivec2(_2779 + uvec2(0u, 1u))));
            ivec2 _31201 = ivec2(max(0, min(_8874.x, _3110)), max(0, min(_8874.y, _3118)));
            vec2 _8888 = (vec2(_31201) + vec2(0.5)) / _3071;
            ivec2 _9025 = ivec2(floor((_8888 + _3202) * _3071));
            float _28011[5];
            for (int _30533 = 0; _30533 < 5; )
            {
                ivec2 _9089 = _9025 + _1000[_30533];
                vec4 _9139 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _9140 = _9139.x;
                _28011[_30533] = texelFetch(r_current_luma, ivec2(max(0, min(_9089.x, _3110)), max(0, min(_9089.y, _3118))), 0).x * ((_9140 == 0.0) ? 1.0 : _9140);
                _28011[_30533] = pow(_28011[_30533], 1.0);
                _28011[_30533] = max(_28011[_30533], 6.099999882280826568603515625e-05);
                _30533++;
                continue;
            }
            vec2 _9182 = (_8888 + _3362) + texelFetch(r_dilated_motion_vectors, _31201, 0).xy;
            float _9243 = _9182.x;
            bool _9244 = _9243 >= 0.0;
            bool _9250;
            if (_9244)
            {
                _9250 = _9243 <= 1.0;
            }
            else
            {
                _9250 = _9244;
            }
            bool _9262;
            if (_9250)
            {
                float _9253 = _9182.y;
                bool _9254 = _9253 >= 0.0;
                bool _9260;
                if (_9254)
                {
                    _9260 = _9253 <= 1.0;
                }
                else
                {
                    _9260 = _9254;
                }
                _9262 = _9260;
            }
            else
            {
                _9262 = _9250;
            }
            float _29269[5];
            if (_9262)
            {
                ivec2 _9194 = ivec2(floor(_9182 * _3361));
                for (int _30534 = 0; _30534 < 5; )
                {
                    ivec2 _9284 = _9194 + _1000[_30534];
                    vec4 _9338 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _9339 = _9338.x;
                    _29269[_30534] = (texelFetch(r_previous_luma, ivec2(max(0, min(_9284.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_9284.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_9339 == 0.0) ? 1.0 : _9339);
                    _29269[_30534] = pow(_29269[_30534], 1.0);
                    _29269[_30534] = max(_29269[_30534], 6.099999882280826568603515625e-05);
                    _30534++;
                    continue;
                }
            }
            float _30538;
            if (_9262)
            {
                float _9618 = min(_28011[0], _28011[3]);
                float _9623 = max(_28011[0], _28011[3]);
                float _9628 = min(_28011[1], _28011[4]);
                float _9633 = max(_28011[1], _28011[4]);
                float _9638 = min(_9618, _28011[2]);
                float _9643 = max(_9618, _28011[2]);
                float _9648 = min(_9628, _9623);
                float _9653 = max(_9628, _9623);
                float _9663 = max(_9638, _9648);
                float _9668 = min(_9643, _9633);
                float _9673 = max(_9643, _9633);
                float _9683 = max(_9663, _9668);
                float _9688 = min(_9653, _9673);
                float _28023[5] = float[](min(_9638, _9648), min(_9663, _9668), min(_9683, _9688), max(_9683, _9688), max(_9653, _9673));
                float _9871 = min(_29269[0], _29269[3]);
                float _9876 = max(_29269[0], _29269[3]);
                float _9881 = min(_29269[1], _29269[4]);
                float _9886 = max(_29269[1], _29269[4]);
                float _9891 = min(_9871, _29269[2]);
                float _9896 = max(_9871, _29269[2]);
                float _9901 = min(_9881, _9876);
                float _9906 = max(_9881, _9876);
                float _9916 = max(_9891, _9901);
                float _9921 = min(_9896, _9886);
                float _9926 = max(_9896, _9886);
                float _9936 = max(_9916, _9921);
                float _9941 = min(_9906, _9926);
                float _28030[5] = float[](min(_9891, _9901), min(_9916, _9921), min(_9936, _9941), max(_9936, _9941), max(_9906, _9926));
                float _30537;
                if (min(_28023[4], _28030[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30536;
                    _30536 = 65503.0;
                    float _31071;
                    int _31172;
                    int _31173;
                    for (int _30535 = 0, _30968 = 0, _30969 = 0; (_30535 < 5) && (_30536 < 65504.0); _30969 = _31173, _30968 = _31172, _30536 = _31071, _30535++)
                    {
                        float _9395 = _28023[_30968] - _28030[_30969];
                        if (abs(_9395) > 6.099999882280826568603515625e-05)
                        {
                            float _9984 = max(_28023[_30968], _28030[_30969]);
                            float _30970;
                            if (_9984 != 0.0)
                            {
                                _30970 = min(_28023[_30968], _28030[_30969]) / _9984;
                            }
                            else
                            {
                                _30970 = 0.0;
                            }
                            float _9410 = sign(_9395) * (1.0 - _30970);
                            int _9428 = _30968 + int(_28023[_30968] < _28030[_30969]);
                            _31173 = _30969 + int(_28023[_9428] >= _28030[_30969]);
                            _31172 = _9428;
                            _31071 = (abs(_9410) < abs(_30536)) ? _9410 : _30536;
                        }
                        else
                        {
                            _31173 = _30969;
                            _31172 = _30968;
                            _31071 = 65504.0;
                        }
                    }
                    _30537 = _30536;
                }
                else
                {
                    _30537 = 65503.0;
                }
                _30538 = _30537 * float(_30537 < 65503.0);
            }
            else
            {
                _30538 = 0.0;
            }
            vec4 _29958 = vec4(0.0);
            _29958.x = _30538;
            float _30545;
            if (_30538 != 0.0)
            {
                _30545 = sign(_30538);
            }
            else
            {
                _30545 = 0.0;
            }
            _29958.y = _30545;
            _29958.z = 1.0;
            ivec2 _10006 = ivec2(vec2(ivec2(_2779 + uvec2(1u, 0u))));
            ivec2 _31202 = ivec2(max(0, min(_10006.x, _3110)), max(0, min(_10006.y, _3118)));
            vec2 _10020 = (vec2(_31202) + vec2(0.5)) / _3071;
            ivec2 _10157 = ivec2(floor((_10020 + _3202) * _3071));
            float _27859[5];
            for (int _30547 = 0; _30547 < 5; )
            {
                ivec2 _10221 = _10157 + _1000[_30547];
                vec4 _10271 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _10272 = _10271.x;
                _27859[_30547] = texelFetch(r_current_luma, ivec2(max(0, min(_10221.x, _3110)), max(0, min(_10221.y, _3118))), 0).x * ((_10272 == 0.0) ? 1.0 : _10272);
                _27859[_30547] = pow(_27859[_30547], 1.0);
                _27859[_30547] = max(_27859[_30547], 6.099999882280826568603515625e-05);
                _30547++;
                continue;
            }
            vec2 _10314 = (_10020 + _3362) + texelFetch(r_dilated_motion_vectors, _31202, 0).xy;
            float _10375 = _10314.x;
            bool _10376 = _10375 >= 0.0;
            bool _10382;
            if (_10376)
            {
                _10382 = _10375 <= 1.0;
            }
            else
            {
                _10382 = _10376;
            }
            bool _10394;
            if (_10382)
            {
                float _10385 = _10314.y;
                bool _10386 = _10385 >= 0.0;
                bool _10392;
                if (_10386)
                {
                    _10392 = _10385 <= 1.0;
                }
                else
                {
                    _10392 = _10386;
                }
                _10394 = _10392;
            }
            else
            {
                _10394 = _10382;
            }
            float _29225[5];
            if (_10394)
            {
                ivec2 _10326 = ivec2(floor(_10314 * _3361));
                for (int _30548 = 0; _30548 < 5; )
                {
                    ivec2 _10416 = _10326 + _1000[_30548];
                    vec4 _10470 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _10471 = _10470.x;
                    _29225[_30548] = (texelFetch(r_previous_luma, ivec2(max(0, min(_10416.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_10416.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_10471 == 0.0) ? 1.0 : _10471);
                    _29225[_30548] = pow(_29225[_30548], 1.0);
                    _29225[_30548] = max(_29225[_30548], 6.099999882280826568603515625e-05);
                    _30548++;
                    continue;
                }
            }
            float _30552;
            if (_10394)
            {
                float _10750 = min(_27859[0], _27859[3]);
                float _10755 = max(_27859[0], _27859[3]);
                float _10760 = min(_27859[1], _27859[4]);
                float _10765 = max(_27859[1], _27859[4]);
                float _10770 = min(_10750, _27859[2]);
                float _10775 = max(_10750, _27859[2]);
                float _10780 = min(_10760, _10755);
                float _10785 = max(_10760, _10755);
                float _10795 = max(_10770, _10780);
                float _10800 = min(_10775, _10765);
                float _10805 = max(_10775, _10765);
                float _10815 = max(_10795, _10800);
                float _10820 = min(_10785, _10805);
                float _27871[5] = float[](min(_10770, _10780), min(_10795, _10800), min(_10815, _10820), max(_10815, _10820), max(_10785, _10805));
                float _11003 = min(_29225[0], _29225[3]);
                float _11008 = max(_29225[0], _29225[3]);
                float _11013 = min(_29225[1], _29225[4]);
                float _11018 = max(_29225[1], _29225[4]);
                float _11023 = min(_11003, _29225[2]);
                float _11028 = max(_11003, _29225[2]);
                float _11033 = min(_11013, _11008);
                float _11038 = max(_11013, _11008);
                float _11048 = max(_11023, _11033);
                float _11053 = min(_11028, _11018);
                float _11058 = max(_11028, _11018);
                float _11068 = max(_11048, _11053);
                float _11073 = min(_11038, _11058);
                float _27878[5] = float[](min(_11023, _11033), min(_11048, _11053), min(_11068, _11073), max(_11068, _11073), max(_11038, _11058));
                float _30551;
                if (min(_27871[4], _27878[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30550;
                    _30550 = 65503.0;
                    float _31074;
                    int _31170;
                    int _31171;
                    for (int _30549 = 0, _30956 = 0, _30957 = 0; (_30549 < 5) && (_30550 < 65504.0); _30957 = _31171, _30956 = _31170, _30550 = _31074, _30549++)
                    {
                        float _10527 = _27871[_30956] - _27878[_30957];
                        if (abs(_10527) > 6.099999882280826568603515625e-05)
                        {
                            float _11116 = max(_27871[_30956], _27878[_30957]);
                            float _30958;
                            if (_11116 != 0.0)
                            {
                                _30958 = min(_27871[_30956], _27878[_30957]) / _11116;
                            }
                            else
                            {
                                _30958 = 0.0;
                            }
                            float _10542 = sign(_10527) * (1.0 - _30958);
                            int _10560 = _30956 + int(_27871[_30956] < _27878[_30957]);
                            _31171 = _30957 + int(_27871[_10560] >= _27878[_30957]);
                            _31170 = _10560;
                            _31074 = (abs(_10542) < abs(_30550)) ? _10542 : _30550;
                        }
                        else
                        {
                            _31171 = _30957;
                            _31170 = _30956;
                            _31074 = 65504.0;
                        }
                    }
                    _30551 = _30550;
                }
                else
                {
                    _30551 = 65503.0;
                }
                _30552 = _30551 * float(_30551 < 65503.0);
            }
            else
            {
                _30552 = 0.0;
            }
            vec4 _29992 = vec4(0.0);
            _29992.x = _30552;
            float _30559;
            if (_30552 != 0.0)
            {
                _30559 = sign(_30552);
            }
            else
            {
                _30559 = 0.0;
            }
            _29992.y = _30559;
            _29992.z = 1.0;
            ivec2 _11138 = ivec2(vec2(ivec2(_2779 + uvec2(1u))));
            ivec2 _31203 = ivec2(max(0, min(_11138.x, _3110)), max(0, min(_11138.y, _3118)));
            vec2 _11152 = (vec2(_31203) + vec2(0.5)) / _3071;
            ivec2 _11289 = ivec2(floor((_11152 + _3202) * _3071));
            float _27707[5];
            for (int _30561 = 0; _30561 < 5; )
            {
                ivec2 _11353 = _11289 + _1000[_30561];
                vec4 _11403 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _11404 = _11403.x;
                _27707[_30561] = texelFetch(r_current_luma, ivec2(max(0, min(_11353.x, _3110)), max(0, min(_11353.y, _3118))), 0).x * ((_11404 == 0.0) ? 1.0 : _11404);
                _27707[_30561] = pow(_27707[_30561], 1.0);
                _27707[_30561] = max(_27707[_30561], 6.099999882280826568603515625e-05);
                _30561++;
                continue;
            }
            vec2 _11446 = (_11152 + _3362) + texelFetch(r_dilated_motion_vectors, _31203, 0).xy;
            float _11507 = _11446.x;
            bool _11508 = _11507 >= 0.0;
            bool _11514;
            if (_11508)
            {
                _11514 = _11507 <= 1.0;
            }
            else
            {
                _11514 = _11508;
            }
            bool _11526;
            if (_11514)
            {
                float _11517 = _11446.y;
                bool _11518 = _11517 >= 0.0;
                bool _11524;
                if (_11518)
                {
                    _11524 = _11517 <= 1.0;
                }
                else
                {
                    _11524 = _11518;
                }
                _11526 = _11524;
            }
            else
            {
                _11526 = _11514;
            }
            float _29181[5];
            if (_11526)
            {
                ivec2 _11458 = ivec2(floor(_11446 * _3361));
                for (int _30562 = 0; _30562 < 5; )
                {
                    ivec2 _11548 = _11458 + _1000[_30562];
                    vec4 _11602 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _11603 = _11602.x;
                    _29181[_30562] = (texelFetch(r_previous_luma, ivec2(max(0, min(_11548.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_11548.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_11603 == 0.0) ? 1.0 : _11603);
                    _29181[_30562] = pow(_29181[_30562], 1.0);
                    _29181[_30562] = max(_29181[_30562], 6.099999882280826568603515625e-05);
                    _30562++;
                    continue;
                }
            }
            float _30566;
            if (_11526)
            {
                float _11882 = min(_27707[0], _27707[3]);
                float _11887 = max(_27707[0], _27707[3]);
                float _11892 = min(_27707[1], _27707[4]);
                float _11897 = max(_27707[1], _27707[4]);
                float _11902 = min(_11882, _27707[2]);
                float _11907 = max(_11882, _27707[2]);
                float _11912 = min(_11892, _11887);
                float _11917 = max(_11892, _11887);
                float _11927 = max(_11902, _11912);
                float _11932 = min(_11907, _11897);
                float _11937 = max(_11907, _11897);
                float _11947 = max(_11927, _11932);
                float _11952 = min(_11917, _11937);
                float _27719[5] = float[](min(_11902, _11912), min(_11927, _11932), min(_11947, _11952), max(_11947, _11952), max(_11917, _11937));
                float _12135 = min(_29181[0], _29181[3]);
                float _12140 = max(_29181[0], _29181[3]);
                float _12145 = min(_29181[1], _29181[4]);
                float _12150 = max(_29181[1], _29181[4]);
                float _12155 = min(_12135, _29181[2]);
                float _12160 = max(_12135, _29181[2]);
                float _12165 = min(_12145, _12140);
                float _12170 = max(_12145, _12140);
                float _12180 = max(_12155, _12165);
                float _12185 = min(_12160, _12150);
                float _12190 = max(_12160, _12150);
                float _12200 = max(_12180, _12185);
                float _12205 = min(_12170, _12190);
                float _27726[5] = float[](min(_12155, _12165), min(_12180, _12185), min(_12200, _12205), max(_12200, _12205), max(_12170, _12190));
                float _30565;
                if (min(_27719[4], _27726[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30564;
                    _30564 = 65503.0;
                    float _31077;
                    int _31168;
                    int _31169;
                    for (int _30563 = 0, _30944 = 0, _30945 = 0; (_30563 < 5) && (_30564 < 65504.0); _30945 = _31169, _30944 = _31168, _30564 = _31077, _30563++)
                    {
                        float _11659 = _27719[_30944] - _27726[_30945];
                        if (abs(_11659) > 6.099999882280826568603515625e-05)
                        {
                            float _12248 = max(_27719[_30944], _27726[_30945]);
                            float _30946;
                            if (_12248 != 0.0)
                            {
                                _30946 = min(_27719[_30944], _27726[_30945]) / _12248;
                            }
                            else
                            {
                                _30946 = 0.0;
                            }
                            float _11674 = sign(_11659) * (1.0 - _30946);
                            int _11692 = _30944 + int(_27719[_30944] < _27726[_30945]);
                            _31169 = _30945 + int(_27719[_11692] >= _27726[_30945]);
                            _31168 = _11692;
                            _31077 = (abs(_11674) < abs(_30564)) ? _11674 : _30564;
                        }
                        else
                        {
                            _31169 = _30945;
                            _31168 = _30944;
                            _31077 = 65504.0;
                        }
                    }
                    _30565 = _30564;
                }
                else
                {
                    _30565 = 65503.0;
                }
                _30566 = _30565 * float(_30565 < 65503.0);
            }
            else
            {
                _30566 = 0.0;
            }
            vec4 _30026 = vec4(0.0);
            _30026.x = _30566;
            float _30573;
            if (_30566 != 0.0)
            {
                _30573 = sign(_30566);
            }
            else
            {
                _30573 = 0.0;
            }
            _30026.y = _30573;
            _30026.z = 1.0;
            _2671[1] = (((_29924 + _29958) + _29992) + _30026) * 0.25;
            imageStore(rw_spd_pyramid, ivec3(_2737 + ivec2(_2773, _2741), 0), vec4(_2671[1].xy, 0.0, 0.0));
            int _2798 = int(_2730 + 32u);
            int _2809 = int(_2550 + 16u);
            uvec2 _2813 = uvec2(_2725 + ivec2(_2728, _2798));
            ivec2 _12426 = ivec2(vec2(ivec2(_2813)));
            ivec2 _31204 = ivec2(max(0, min(_12426.x, _3110)), max(0, min(_12426.y, _3118)));
            vec2 _12440 = (vec2(_31204) + vec2(0.5)) / _3071;
            ivec2 _12577 = ivec2(floor((_12440 + _3202) * _3071));
            float _27555[5];
            for (int _30615 = 0; _30615 < 5; )
            {
                ivec2 _12641 = _12577 + _1000[_30615];
                vec4 _12691 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _12692 = _12691.x;
                _27555[_30615] = texelFetch(r_current_luma, ivec2(max(0, min(_12641.x, _3110)), max(0, min(_12641.y, _3118))), 0).x * ((_12692 == 0.0) ? 1.0 : _12692);
                _27555[_30615] = pow(_27555[_30615], 1.0);
                _27555[_30615] = max(_27555[_30615], 6.099999882280826568603515625e-05);
                _30615++;
                continue;
            }
            vec2 _12734 = (_12440 + _3362) + texelFetch(r_dilated_motion_vectors, _31204, 0).xy;
            float _12795 = _12734.x;
            bool _12796 = _12795 >= 0.0;
            bool _12802;
            if (_12796)
            {
                _12802 = _12795 <= 1.0;
            }
            else
            {
                _12802 = _12796;
            }
            bool _12814;
            if (_12802)
            {
                float _12805 = _12734.y;
                bool _12806 = _12805 >= 0.0;
                bool _12812;
                if (_12806)
                {
                    _12812 = _12805 <= 1.0;
                }
                else
                {
                    _12812 = _12806;
                }
                _12814 = _12812;
            }
            else
            {
                _12814 = _12802;
            }
            float _29137[5];
            if (_12814)
            {
                ivec2 _12746 = ivec2(floor(_12734 * _3361));
                for (int _30616 = 0; _30616 < 5; )
                {
                    ivec2 _12836 = _12746 + _1000[_30616];
                    vec4 _12890 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _12891 = _12890.x;
                    _29137[_30616] = (texelFetch(r_previous_luma, ivec2(max(0, min(_12836.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_12836.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_12891 == 0.0) ? 1.0 : _12891);
                    _29137[_30616] = pow(_29137[_30616], 1.0);
                    _29137[_30616] = max(_29137[_30616], 6.099999882280826568603515625e-05);
                    _30616++;
                    continue;
                }
            }
            float _30620;
            if (_12814)
            {
                float _13170 = min(_27555[0], _27555[3]);
                float _13175 = max(_27555[0], _27555[3]);
                float _13180 = min(_27555[1], _27555[4]);
                float _13185 = max(_27555[1], _27555[4]);
                float _13190 = min(_13170, _27555[2]);
                float _13195 = max(_13170, _27555[2]);
                float _13200 = min(_13180, _13175);
                float _13205 = max(_13180, _13175);
                float _13215 = max(_13190, _13200);
                float _13220 = min(_13195, _13185);
                float _13225 = max(_13195, _13185);
                float _13235 = max(_13215, _13220);
                float _13240 = min(_13205, _13225);
                float _27567[5] = float[](min(_13190, _13200), min(_13215, _13220), min(_13235, _13240), max(_13235, _13240), max(_13205, _13225));
                float _13423 = min(_29137[0], _29137[3]);
                float _13428 = max(_29137[0], _29137[3]);
                float _13433 = min(_29137[1], _29137[4]);
                float _13438 = max(_29137[1], _29137[4]);
                float _13443 = min(_13423, _29137[2]);
                float _13448 = max(_13423, _29137[2]);
                float _13453 = min(_13433, _13428);
                float _13458 = max(_13433, _13428);
                float _13468 = max(_13443, _13453);
                float _13473 = min(_13448, _13438);
                float _13478 = max(_13448, _13438);
                float _13488 = max(_13468, _13473);
                float _13493 = min(_13458, _13478);
                float _27574[5] = float[](min(_13443, _13453), min(_13468, _13473), min(_13488, _13493), max(_13488, _13493), max(_13458, _13478));
                float _30619;
                if (min(_27567[4], _27574[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30618;
                    _30618 = 65503.0;
                    float _31096;
                    int _31166;
                    int _31167;
                    for (int _30617 = 0, _30932 = 0, _30933 = 0; (_30617 < 5) && (_30618 < 65504.0); _30933 = _31167, _30932 = _31166, _30618 = _31096, _30617++)
                    {
                        float _12947 = _27567[_30932] - _27574[_30933];
                        if (abs(_12947) > 6.099999882280826568603515625e-05)
                        {
                            float _13536 = max(_27567[_30932], _27574[_30933]);
                            float _30934;
                            if (_13536 != 0.0)
                            {
                                _30934 = min(_27567[_30932], _27574[_30933]) / _13536;
                            }
                            else
                            {
                                _30934 = 0.0;
                            }
                            float _12962 = sign(_12947) * (1.0 - _30934);
                            int _12980 = _30932 + int(_27567[_30932] < _27574[_30933]);
                            _31167 = _30933 + int(_27567[_12980] >= _27574[_30933]);
                            _31166 = _12980;
                            _31096 = (abs(_12962) < abs(_30618)) ? _12962 : _30618;
                        }
                        else
                        {
                            _31167 = _30933;
                            _31166 = _30932;
                            _31096 = 65504.0;
                        }
                    }
                    _30619 = _30618;
                }
                else
                {
                    _30619 = 65503.0;
                }
                _30620 = _30619 * float(_30619 < 65503.0);
            }
            else
            {
                _30620 = 0.0;
            }
            vec4 _30060 = vec4(0.0);
            _30060.x = _30620;
            float _30627;
            if (_30620 != 0.0)
            {
                _30627 = sign(_30620);
            }
            else
            {
                _30627 = 0.0;
            }
            _30060.y = _30627;
            _30060.z = 1.0;
            ivec2 _13558 = ivec2(vec2(ivec2(_2813 + uvec2(0u, 1u))));
            ivec2 _31205 = ivec2(max(0, min(_13558.x, _3110)), max(0, min(_13558.y, _3118)));
            vec2 _13572 = (vec2(_31205) + vec2(0.5)) / _3071;
            ivec2 _13709 = ivec2(floor((_13572 + _3202) * _3071));
            float _27403[5];
            for (int _30629 = 0; _30629 < 5; )
            {
                ivec2 _13773 = _13709 + _1000[_30629];
                vec4 _13823 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _13824 = _13823.x;
                _27403[_30629] = texelFetch(r_current_luma, ivec2(max(0, min(_13773.x, _3110)), max(0, min(_13773.y, _3118))), 0).x * ((_13824 == 0.0) ? 1.0 : _13824);
                _27403[_30629] = pow(_27403[_30629], 1.0);
                _27403[_30629] = max(_27403[_30629], 6.099999882280826568603515625e-05);
                _30629++;
                continue;
            }
            vec2 _13866 = (_13572 + _3362) + texelFetch(r_dilated_motion_vectors, _31205, 0).xy;
            float _13927 = _13866.x;
            bool _13928 = _13927 >= 0.0;
            bool _13934;
            if (_13928)
            {
                _13934 = _13927 <= 1.0;
            }
            else
            {
                _13934 = _13928;
            }
            bool _13946;
            if (_13934)
            {
                float _13937 = _13866.y;
                bool _13938 = _13937 >= 0.0;
                bool _13944;
                if (_13938)
                {
                    _13944 = _13937 <= 1.0;
                }
                else
                {
                    _13944 = _13938;
                }
                _13946 = _13944;
            }
            else
            {
                _13946 = _13934;
            }
            float _29093[5];
            if (_13946)
            {
                ivec2 _13878 = ivec2(floor(_13866 * _3361));
                for (int _30630 = 0; _30630 < 5; )
                {
                    ivec2 _13968 = _13878 + _1000[_30630];
                    vec4 _14022 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _14023 = _14022.x;
                    _29093[_30630] = (texelFetch(r_previous_luma, ivec2(max(0, min(_13968.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_13968.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_14023 == 0.0) ? 1.0 : _14023);
                    _29093[_30630] = pow(_29093[_30630], 1.0);
                    _29093[_30630] = max(_29093[_30630], 6.099999882280826568603515625e-05);
                    _30630++;
                    continue;
                }
            }
            float _30634;
            if (_13946)
            {
                float _14302 = min(_27403[0], _27403[3]);
                float _14307 = max(_27403[0], _27403[3]);
                float _14312 = min(_27403[1], _27403[4]);
                float _14317 = max(_27403[1], _27403[4]);
                float _14322 = min(_14302, _27403[2]);
                float _14327 = max(_14302, _27403[2]);
                float _14332 = min(_14312, _14307);
                float _14337 = max(_14312, _14307);
                float _14347 = max(_14322, _14332);
                float _14352 = min(_14327, _14317);
                float _14357 = max(_14327, _14317);
                float _14367 = max(_14347, _14352);
                float _14372 = min(_14337, _14357);
                float _27415[5] = float[](min(_14322, _14332), min(_14347, _14352), min(_14367, _14372), max(_14367, _14372), max(_14337, _14357));
                float _14555 = min(_29093[0], _29093[3]);
                float _14560 = max(_29093[0], _29093[3]);
                float _14565 = min(_29093[1], _29093[4]);
                float _14570 = max(_29093[1], _29093[4]);
                float _14575 = min(_14555, _29093[2]);
                float _14580 = max(_14555, _29093[2]);
                float _14585 = min(_14565, _14560);
                float _14590 = max(_14565, _14560);
                float _14600 = max(_14575, _14585);
                float _14605 = min(_14580, _14570);
                float _14610 = max(_14580, _14570);
                float _14620 = max(_14600, _14605);
                float _14625 = min(_14590, _14610);
                float _27422[5] = float[](min(_14575, _14585), min(_14600, _14605), min(_14620, _14625), max(_14620, _14625), max(_14590, _14610));
                float _30633;
                if (min(_27415[4], _27422[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30632;
                    _30632 = 65503.0;
                    float _31099;
                    int _31164;
                    int _31165;
                    for (int _30631 = 0, _30920 = 0, _30921 = 0; (_30631 < 5) && (_30632 < 65504.0); _30921 = _31165, _30920 = _31164, _30632 = _31099, _30631++)
                    {
                        float _14079 = _27415[_30920] - _27422[_30921];
                        if (abs(_14079) > 6.099999882280826568603515625e-05)
                        {
                            float _14668 = max(_27415[_30920], _27422[_30921]);
                            float _30922;
                            if (_14668 != 0.0)
                            {
                                _30922 = min(_27415[_30920], _27422[_30921]) / _14668;
                            }
                            else
                            {
                                _30922 = 0.0;
                            }
                            float _14094 = sign(_14079) * (1.0 - _30922);
                            int _14112 = _30920 + int(_27415[_30920] < _27422[_30921]);
                            _31165 = _30921 + int(_27415[_14112] >= _27422[_30921]);
                            _31164 = _14112;
                            _31099 = (abs(_14094) < abs(_30632)) ? _14094 : _30632;
                        }
                        else
                        {
                            _31165 = _30921;
                            _31164 = _30920;
                            _31099 = 65504.0;
                        }
                    }
                    _30633 = _30632;
                }
                else
                {
                    _30633 = 65503.0;
                }
                _30634 = _30633 * float(_30633 < 65503.0);
            }
            else
            {
                _30634 = 0.0;
            }
            vec4 _30094 = vec4(0.0);
            _30094.x = _30634;
            float _30641;
            if (_30634 != 0.0)
            {
                _30641 = sign(_30634);
            }
            else
            {
                _30641 = 0.0;
            }
            _30094.y = _30641;
            _30094.z = 1.0;
            ivec2 _14690 = ivec2(vec2(ivec2(_2813 + uvec2(1u, 0u))));
            ivec2 _31206 = ivec2(max(0, min(_14690.x, _3110)), max(0, min(_14690.y, _3118)));
            vec2 _14704 = (vec2(_31206) + vec2(0.5)) / _3071;
            ivec2 _14841 = ivec2(floor((_14704 + _3202) * _3071));
            float _27251[5];
            for (int _30643 = 0; _30643 < 5; )
            {
                ivec2 _14905 = _14841 + _1000[_30643];
                vec4 _14955 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _14956 = _14955.x;
                _27251[_30643] = texelFetch(r_current_luma, ivec2(max(0, min(_14905.x, _3110)), max(0, min(_14905.y, _3118))), 0).x * ((_14956 == 0.0) ? 1.0 : _14956);
                _27251[_30643] = pow(_27251[_30643], 1.0);
                _27251[_30643] = max(_27251[_30643], 6.099999882280826568603515625e-05);
                _30643++;
                continue;
            }
            vec2 _14998 = (_14704 + _3362) + texelFetch(r_dilated_motion_vectors, _31206, 0).xy;
            float _15059 = _14998.x;
            bool _15060 = _15059 >= 0.0;
            bool _15066;
            if (_15060)
            {
                _15066 = _15059 <= 1.0;
            }
            else
            {
                _15066 = _15060;
            }
            bool _15078;
            if (_15066)
            {
                float _15069 = _14998.y;
                bool _15070 = _15069 >= 0.0;
                bool _15076;
                if (_15070)
                {
                    _15076 = _15069 <= 1.0;
                }
                else
                {
                    _15076 = _15070;
                }
                _15078 = _15076;
            }
            else
            {
                _15078 = _15066;
            }
            float _29049[5];
            if (_15078)
            {
                ivec2 _15010 = ivec2(floor(_14998 * _3361));
                for (int _30644 = 0; _30644 < 5; )
                {
                    ivec2 _15100 = _15010 + _1000[_30644];
                    vec4 _15154 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _15155 = _15154.x;
                    _29049[_30644] = (texelFetch(r_previous_luma, ivec2(max(0, min(_15100.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_15100.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_15155 == 0.0) ? 1.0 : _15155);
                    _29049[_30644] = pow(_29049[_30644], 1.0);
                    _29049[_30644] = max(_29049[_30644], 6.099999882280826568603515625e-05);
                    _30644++;
                    continue;
                }
            }
            float _30648;
            if (_15078)
            {
                float _15434 = min(_27251[0], _27251[3]);
                float _15439 = max(_27251[0], _27251[3]);
                float _15444 = min(_27251[1], _27251[4]);
                float _15449 = max(_27251[1], _27251[4]);
                float _15454 = min(_15434, _27251[2]);
                float _15459 = max(_15434, _27251[2]);
                float _15464 = min(_15444, _15439);
                float _15469 = max(_15444, _15439);
                float _15479 = max(_15454, _15464);
                float _15484 = min(_15459, _15449);
                float _15489 = max(_15459, _15449);
                float _15499 = max(_15479, _15484);
                float _15504 = min(_15469, _15489);
                float _27263[5] = float[](min(_15454, _15464), min(_15479, _15484), min(_15499, _15504), max(_15499, _15504), max(_15469, _15489));
                float _15687 = min(_29049[0], _29049[3]);
                float _15692 = max(_29049[0], _29049[3]);
                float _15697 = min(_29049[1], _29049[4]);
                float _15702 = max(_29049[1], _29049[4]);
                float _15707 = min(_15687, _29049[2]);
                float _15712 = max(_15687, _29049[2]);
                float _15717 = min(_15697, _15692);
                float _15722 = max(_15697, _15692);
                float _15732 = max(_15707, _15717);
                float _15737 = min(_15712, _15702);
                float _15742 = max(_15712, _15702);
                float _15752 = max(_15732, _15737);
                float _15757 = min(_15722, _15742);
                float _27270[5] = float[](min(_15707, _15717), min(_15732, _15737), min(_15752, _15757), max(_15752, _15757), max(_15722, _15742));
                float _30647;
                if (min(_27263[4], _27270[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30646;
                    _30646 = 65503.0;
                    float _31102;
                    int _31162;
                    int _31163;
                    for (int _30645 = 0, _30908 = 0, _30909 = 0; (_30645 < 5) && (_30646 < 65504.0); _30909 = _31163, _30908 = _31162, _30646 = _31102, _30645++)
                    {
                        float _15211 = _27263[_30908] - _27270[_30909];
                        if (abs(_15211) > 6.099999882280826568603515625e-05)
                        {
                            float _15800 = max(_27263[_30908], _27270[_30909]);
                            float _30910;
                            if (_15800 != 0.0)
                            {
                                _30910 = min(_27263[_30908], _27270[_30909]) / _15800;
                            }
                            else
                            {
                                _30910 = 0.0;
                            }
                            float _15226 = sign(_15211) * (1.0 - _30910);
                            int _15244 = _30908 + int(_27263[_30908] < _27270[_30909]);
                            _31163 = _30909 + int(_27263[_15244] >= _27270[_30909]);
                            _31162 = _15244;
                            _31102 = (abs(_15226) < abs(_30646)) ? _15226 : _30646;
                        }
                        else
                        {
                            _31163 = _30909;
                            _31162 = _30908;
                            _31102 = 65504.0;
                        }
                    }
                    _30647 = _30646;
                }
                else
                {
                    _30647 = 65503.0;
                }
                _30648 = _30647 * float(_30647 < 65503.0);
            }
            else
            {
                _30648 = 0.0;
            }
            vec4 _30128 = vec4(0.0);
            _30128.x = _30648;
            float _30655;
            if (_30648 != 0.0)
            {
                _30655 = sign(_30648);
            }
            else
            {
                _30655 = 0.0;
            }
            _30128.y = _30655;
            _30128.z = 1.0;
            ivec2 _15822 = ivec2(vec2(ivec2(_2813 + uvec2(1u))));
            ivec2 _31207 = ivec2(max(0, min(_15822.x, _3110)), max(0, min(_15822.y, _3118)));
            vec2 _15836 = (vec2(_31207) + vec2(0.5)) / _3071;
            ivec2 _15973 = ivec2(floor((_15836 + _3202) * _3071));
            float _27099[5];
            for (int _30657 = 0; _30657 < 5; )
            {
                ivec2 _16037 = _15973 + _1000[_30657];
                vec4 _16087 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _16088 = _16087.x;
                _27099[_30657] = texelFetch(r_current_luma, ivec2(max(0, min(_16037.x, _3110)), max(0, min(_16037.y, _3118))), 0).x * ((_16088 == 0.0) ? 1.0 : _16088);
                _27099[_30657] = pow(_27099[_30657], 1.0);
                _27099[_30657] = max(_27099[_30657], 6.099999882280826568603515625e-05);
                _30657++;
                continue;
            }
            vec2 _16130 = (_15836 + _3362) + texelFetch(r_dilated_motion_vectors, _31207, 0).xy;
            float _16191 = _16130.x;
            bool _16192 = _16191 >= 0.0;
            bool _16198;
            if (_16192)
            {
                _16198 = _16191 <= 1.0;
            }
            else
            {
                _16198 = _16192;
            }
            bool _16210;
            if (_16198)
            {
                float _16201 = _16130.y;
                bool _16202 = _16201 >= 0.0;
                bool _16208;
                if (_16202)
                {
                    _16208 = _16201 <= 1.0;
                }
                else
                {
                    _16208 = _16202;
                }
                _16210 = _16208;
            }
            else
            {
                _16210 = _16198;
            }
            float _29005[5];
            if (_16210)
            {
                ivec2 _16142 = ivec2(floor(_16130 * _3361));
                for (int _30658 = 0; _30658 < 5; )
                {
                    ivec2 _16232 = _16142 + _1000[_30658];
                    vec4 _16286 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _16287 = _16286.x;
                    _29005[_30658] = (texelFetch(r_previous_luma, ivec2(max(0, min(_16232.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_16232.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_16287 == 0.0) ? 1.0 : _16287);
                    _29005[_30658] = pow(_29005[_30658], 1.0);
                    _29005[_30658] = max(_29005[_30658], 6.099999882280826568603515625e-05);
                    _30658++;
                    continue;
                }
            }
            float _30662;
            if (_16210)
            {
                float _16566 = min(_27099[0], _27099[3]);
                float _16571 = max(_27099[0], _27099[3]);
                float _16576 = min(_27099[1], _27099[4]);
                float _16581 = max(_27099[1], _27099[4]);
                float _16586 = min(_16566, _27099[2]);
                float _16591 = max(_16566, _27099[2]);
                float _16596 = min(_16576, _16571);
                float _16601 = max(_16576, _16571);
                float _16611 = max(_16586, _16596);
                float _16616 = min(_16591, _16581);
                float _16621 = max(_16591, _16581);
                float _16631 = max(_16611, _16616);
                float _16636 = min(_16601, _16621);
                float _27111[5] = float[](min(_16586, _16596), min(_16611, _16616), min(_16631, _16636), max(_16631, _16636), max(_16601, _16621));
                float _16819 = min(_29005[0], _29005[3]);
                float _16824 = max(_29005[0], _29005[3]);
                float _16829 = min(_29005[1], _29005[4]);
                float _16834 = max(_29005[1], _29005[4]);
                float _16839 = min(_16819, _29005[2]);
                float _16844 = max(_16819, _29005[2]);
                float _16849 = min(_16829, _16824);
                float _16854 = max(_16829, _16824);
                float _16864 = max(_16839, _16849);
                float _16869 = min(_16844, _16834);
                float _16874 = max(_16844, _16834);
                float _16884 = max(_16864, _16869);
                float _16889 = min(_16854, _16874);
                float _27118[5] = float[](min(_16839, _16849), min(_16864, _16869), min(_16884, _16889), max(_16884, _16889), max(_16854, _16874));
                float _30661;
                if (min(_27111[4], _27118[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30660;
                    _30660 = 65503.0;
                    float _31105;
                    int _31160;
                    int _31161;
                    for (int _30659 = 0, _30896 = 0, _30897 = 0; (_30659 < 5) && (_30660 < 65504.0); _30897 = _31161, _30896 = _31160, _30660 = _31105, _30659++)
                    {
                        float _16343 = _27111[_30896] - _27118[_30897];
                        if (abs(_16343) > 6.099999882280826568603515625e-05)
                        {
                            float _16932 = max(_27111[_30896], _27118[_30897]);
                            float _30898;
                            if (_16932 != 0.0)
                            {
                                _30898 = min(_27111[_30896], _27118[_30897]) / _16932;
                            }
                            else
                            {
                                _30898 = 0.0;
                            }
                            float _16358 = sign(_16343) * (1.0 - _30898);
                            int _16376 = _30896 + int(_27111[_30896] < _27118[_30897]);
                            _31161 = _30897 + int(_27111[_16376] >= _27118[_30897]);
                            _31160 = _16376;
                            _31105 = (abs(_16358) < abs(_30660)) ? _16358 : _30660;
                        }
                        else
                        {
                            _31161 = _30897;
                            _31160 = _30896;
                            _31105 = 65504.0;
                        }
                    }
                    _30661 = _30660;
                }
                else
                {
                    _30661 = 65503.0;
                }
                _30662 = _30661 * float(_30661 < 65503.0);
            }
            else
            {
                _30662 = 0.0;
            }
            vec4 _30162 = vec4(0.0);
            _30162.x = _30662;
            float _30669;
            if (_30662 != 0.0)
            {
                _30669 = sign(_30662);
            }
            else
            {
                _30669 = 0.0;
            }
            _30162.y = _30669;
            _30162.z = 1.0;
            _2671[2] = (((_30060 + _30094) + _30128) + _30162) * 0.25;
            imageStore(rw_spd_pyramid, ivec3(_2737 + ivec2(_2739, _2809), 0), vec4(_2671[2].xy, 0.0, 0.0));
            uvec2 _2849 = uvec2(_2725 + ivec2(_2761, _2798));
            ivec2 _17110 = ivec2(vec2(ivec2(_2849)));
            ivec2 _31208 = ivec2(max(0, min(_17110.x, _3110)), max(0, min(_17110.y, _3118)));
            vec2 _17124 = (vec2(_31208) + vec2(0.5)) / _3071;
            ivec2 _17261 = ivec2(floor((_17124 + _3202) * _3071));
            float _26947[5];
            for (int _30711 = 0; _30711 < 5; )
            {
                ivec2 _17325 = _17261 + _1000[_30711];
                vec4 _17375 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _17376 = _17375.x;
                _26947[_30711] = texelFetch(r_current_luma, ivec2(max(0, min(_17325.x, _3110)), max(0, min(_17325.y, _3118))), 0).x * ((_17376 == 0.0) ? 1.0 : _17376);
                _26947[_30711] = pow(_26947[_30711], 1.0);
                _26947[_30711] = max(_26947[_30711], 6.099999882280826568603515625e-05);
                _30711++;
                continue;
            }
            vec2 _17418 = (_17124 + _3362) + texelFetch(r_dilated_motion_vectors, _31208, 0).xy;
            float _17479 = _17418.x;
            bool _17480 = _17479 >= 0.0;
            bool _17486;
            if (_17480)
            {
                _17486 = _17479 <= 1.0;
            }
            else
            {
                _17486 = _17480;
            }
            bool _17498;
            if (_17486)
            {
                float _17489 = _17418.y;
                bool _17490 = _17489 >= 0.0;
                bool _17496;
                if (_17490)
                {
                    _17496 = _17489 <= 1.0;
                }
                else
                {
                    _17496 = _17490;
                }
                _17498 = _17496;
            }
            else
            {
                _17498 = _17486;
            }
            float _28961[5];
            if (_17498)
            {
                ivec2 _17430 = ivec2(floor(_17418 * _3361));
                for (int _30712 = 0; _30712 < 5; )
                {
                    ivec2 _17520 = _17430 + _1000[_30712];
                    vec4 _17574 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _17575 = _17574.x;
                    _28961[_30712] = (texelFetch(r_previous_luma, ivec2(max(0, min(_17520.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_17520.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_17575 == 0.0) ? 1.0 : _17575);
                    _28961[_30712] = pow(_28961[_30712], 1.0);
                    _28961[_30712] = max(_28961[_30712], 6.099999882280826568603515625e-05);
                    _30712++;
                    continue;
                }
            }
            float _30716;
            if (_17498)
            {
                float _17854 = min(_26947[0], _26947[3]);
                float _17859 = max(_26947[0], _26947[3]);
                float _17864 = min(_26947[1], _26947[4]);
                float _17869 = max(_26947[1], _26947[4]);
                float _17874 = min(_17854, _26947[2]);
                float _17879 = max(_17854, _26947[2]);
                float _17884 = min(_17864, _17859);
                float _17889 = max(_17864, _17859);
                float _17899 = max(_17874, _17884);
                float _17904 = min(_17879, _17869);
                float _17909 = max(_17879, _17869);
                float _17919 = max(_17899, _17904);
                float _17924 = min(_17889, _17909);
                float _26959[5] = float[](min(_17874, _17884), min(_17899, _17904), min(_17919, _17924), max(_17919, _17924), max(_17889, _17909));
                float _18107 = min(_28961[0], _28961[3]);
                float _18112 = max(_28961[0], _28961[3]);
                float _18117 = min(_28961[1], _28961[4]);
                float _18122 = max(_28961[1], _28961[4]);
                float _18127 = min(_18107, _28961[2]);
                float _18132 = max(_18107, _28961[2]);
                float _18137 = min(_18117, _18112);
                float _18142 = max(_18117, _18112);
                float _18152 = max(_18127, _18137);
                float _18157 = min(_18132, _18122);
                float _18162 = max(_18132, _18122);
                float _18172 = max(_18152, _18157);
                float _18177 = min(_18142, _18162);
                float _26966[5] = float[](min(_18127, _18137), min(_18152, _18157), min(_18172, _18177), max(_18172, _18177), max(_18142, _18162));
                float _30715;
                if (min(_26959[4], _26966[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30714;
                    _30714 = 65503.0;
                    float _31124;
                    int _31158;
                    int _31159;
                    for (int _30713 = 0, _30884 = 0, _30885 = 0; (_30713 < 5) && (_30714 < 65504.0); _30885 = _31159, _30884 = _31158, _30714 = _31124, _30713++)
                    {
                        float _17631 = _26959[_30884] - _26966[_30885];
                        if (abs(_17631) > 6.099999882280826568603515625e-05)
                        {
                            float _18220 = max(_26959[_30884], _26966[_30885]);
                            float _30886;
                            if (_18220 != 0.0)
                            {
                                _30886 = min(_26959[_30884], _26966[_30885]) / _18220;
                            }
                            else
                            {
                                _30886 = 0.0;
                            }
                            float _17646 = sign(_17631) * (1.0 - _30886);
                            int _17664 = _30884 + int(_26959[_30884] < _26966[_30885]);
                            _31159 = _30885 + int(_26959[_17664] >= _26966[_30885]);
                            _31158 = _17664;
                            _31124 = (abs(_17646) < abs(_30714)) ? _17646 : _30714;
                        }
                        else
                        {
                            _31159 = _30885;
                            _31158 = _30884;
                            _31124 = 65504.0;
                        }
                    }
                    _30715 = _30714;
                }
                else
                {
                    _30715 = 65503.0;
                }
                _30716 = _30715 * float(_30715 < 65503.0);
            }
            else
            {
                _30716 = 0.0;
            }
            vec4 _30196 = vec4(0.0);
            _30196.x = _30716;
            float _30723;
            if (_30716 != 0.0)
            {
                _30723 = sign(_30716);
            }
            else
            {
                _30723 = 0.0;
            }
            _30196.y = _30723;
            _30196.z = 1.0;
            ivec2 _18242 = ivec2(vec2(ivec2(_2849 + uvec2(0u, 1u))));
            ivec2 _31209 = ivec2(max(0, min(_18242.x, _3110)), max(0, min(_18242.y, _3118)));
            vec2 _18256 = (vec2(_31209) + vec2(0.5)) / _3071;
            ivec2 _18393 = ivec2(floor((_18256 + _3202) * _3071));
            float _26795[5];
            for (int _30725 = 0; _30725 < 5; )
            {
                ivec2 _18457 = _18393 + _1000[_30725];
                vec4 _18507 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _18508 = _18507.x;
                _26795[_30725] = texelFetch(r_current_luma, ivec2(max(0, min(_18457.x, _3110)), max(0, min(_18457.y, _3118))), 0).x * ((_18508 == 0.0) ? 1.0 : _18508);
                _26795[_30725] = pow(_26795[_30725], 1.0);
                _26795[_30725] = max(_26795[_30725], 6.099999882280826568603515625e-05);
                _30725++;
                continue;
            }
            vec2 _18550 = (_18256 + _3362) + texelFetch(r_dilated_motion_vectors, _31209, 0).xy;
            float _18611 = _18550.x;
            bool _18612 = _18611 >= 0.0;
            bool _18618;
            if (_18612)
            {
                _18618 = _18611 <= 1.0;
            }
            else
            {
                _18618 = _18612;
            }
            bool _18630;
            if (_18618)
            {
                float _18621 = _18550.y;
                bool _18622 = _18621 >= 0.0;
                bool _18628;
                if (_18622)
                {
                    _18628 = _18621 <= 1.0;
                }
                else
                {
                    _18628 = _18622;
                }
                _18630 = _18628;
            }
            else
            {
                _18630 = _18618;
            }
            float _28917[5];
            if (_18630)
            {
                ivec2 _18562 = ivec2(floor(_18550 * _3361));
                for (int _30726 = 0; _30726 < 5; )
                {
                    ivec2 _18652 = _18562 + _1000[_30726];
                    vec4 _18706 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _18707 = _18706.x;
                    _28917[_30726] = (texelFetch(r_previous_luma, ivec2(max(0, min(_18652.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_18652.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_18707 == 0.0) ? 1.0 : _18707);
                    _28917[_30726] = pow(_28917[_30726], 1.0);
                    _28917[_30726] = max(_28917[_30726], 6.099999882280826568603515625e-05);
                    _30726++;
                    continue;
                }
            }
            float _30730;
            if (_18630)
            {
                float _18986 = min(_26795[0], _26795[3]);
                float _18991 = max(_26795[0], _26795[3]);
                float _18996 = min(_26795[1], _26795[4]);
                float _19001 = max(_26795[1], _26795[4]);
                float _19006 = min(_18986, _26795[2]);
                float _19011 = max(_18986, _26795[2]);
                float _19016 = min(_18996, _18991);
                float _19021 = max(_18996, _18991);
                float _19031 = max(_19006, _19016);
                float _19036 = min(_19011, _19001);
                float _19041 = max(_19011, _19001);
                float _19051 = max(_19031, _19036);
                float _19056 = min(_19021, _19041);
                float _26807[5] = float[](min(_19006, _19016), min(_19031, _19036), min(_19051, _19056), max(_19051, _19056), max(_19021, _19041));
                float _19239 = min(_28917[0], _28917[3]);
                float _19244 = max(_28917[0], _28917[3]);
                float _19249 = min(_28917[1], _28917[4]);
                float _19254 = max(_28917[1], _28917[4]);
                float _19259 = min(_19239, _28917[2]);
                float _19264 = max(_19239, _28917[2]);
                float _19269 = min(_19249, _19244);
                float _19274 = max(_19249, _19244);
                float _19284 = max(_19259, _19269);
                float _19289 = min(_19264, _19254);
                float _19294 = max(_19264, _19254);
                float _19304 = max(_19284, _19289);
                float _19309 = min(_19274, _19294);
                float _26814[5] = float[](min(_19259, _19269), min(_19284, _19289), min(_19304, _19309), max(_19304, _19309), max(_19274, _19294));
                float _30729;
                if (min(_26807[4], _26814[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30728;
                    _30728 = 65503.0;
                    float _31127;
                    int _31156;
                    int _31157;
                    for (int _30727 = 0, _30872 = 0, _30873 = 0; (_30727 < 5) && (_30728 < 65504.0); _30873 = _31157, _30872 = _31156, _30728 = _31127, _30727++)
                    {
                        float _18763 = _26807[_30872] - _26814[_30873];
                        if (abs(_18763) > 6.099999882280826568603515625e-05)
                        {
                            float _19352 = max(_26807[_30872], _26814[_30873]);
                            float _30874;
                            if (_19352 != 0.0)
                            {
                                _30874 = min(_26807[_30872], _26814[_30873]) / _19352;
                            }
                            else
                            {
                                _30874 = 0.0;
                            }
                            float _18778 = sign(_18763) * (1.0 - _30874);
                            int _18796 = _30872 + int(_26807[_30872] < _26814[_30873]);
                            _31157 = _30873 + int(_26807[_18796] >= _26814[_30873]);
                            _31156 = _18796;
                            _31127 = (abs(_18778) < abs(_30728)) ? _18778 : _30728;
                        }
                        else
                        {
                            _31157 = _30873;
                            _31156 = _30872;
                            _31127 = 65504.0;
                        }
                    }
                    _30729 = _30728;
                }
                else
                {
                    _30729 = 65503.0;
                }
                _30730 = _30729 * float(_30729 < 65503.0);
            }
            else
            {
                _30730 = 0.0;
            }
            vec4 _30230 = vec4(0.0);
            _30230.x = _30730;
            float _30737;
            if (_30730 != 0.0)
            {
                _30737 = sign(_30730);
            }
            else
            {
                _30737 = 0.0;
            }
            _30230.y = _30737;
            _30230.z = 1.0;
            ivec2 _19374 = ivec2(vec2(ivec2(_2849 + uvec2(1u, 0u))));
            ivec2 _31210 = ivec2(max(0, min(_19374.x, _3110)), max(0, min(_19374.y, _3118)));
            vec2 _19388 = (vec2(_31210) + vec2(0.5)) / _3071;
            ivec2 _19525 = ivec2(floor((_19388 + _3202) * _3071));
            float _26643[5];
            for (int _30739 = 0; _30739 < 5; )
            {
                ivec2 _19589 = _19525 + _1000[_30739];
                vec4 _19639 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _19640 = _19639.x;
                _26643[_30739] = texelFetch(r_current_luma, ivec2(max(0, min(_19589.x, _3110)), max(0, min(_19589.y, _3118))), 0).x * ((_19640 == 0.0) ? 1.0 : _19640);
                _26643[_30739] = pow(_26643[_30739], 1.0);
                _26643[_30739] = max(_26643[_30739], 6.099999882280826568603515625e-05);
                _30739++;
                continue;
            }
            vec2 _19682 = (_19388 + _3362) + texelFetch(r_dilated_motion_vectors, _31210, 0).xy;
            float _19743 = _19682.x;
            bool _19744 = _19743 >= 0.0;
            bool _19750;
            if (_19744)
            {
                _19750 = _19743 <= 1.0;
            }
            else
            {
                _19750 = _19744;
            }
            bool _19762;
            if (_19750)
            {
                float _19753 = _19682.y;
                bool _19754 = _19753 >= 0.0;
                bool _19760;
                if (_19754)
                {
                    _19760 = _19753 <= 1.0;
                }
                else
                {
                    _19760 = _19754;
                }
                _19762 = _19760;
            }
            else
            {
                _19762 = _19750;
            }
            float _28873[5];
            if (_19762)
            {
                ivec2 _19694 = ivec2(floor(_19682 * _3361));
                for (int _30740 = 0; _30740 < 5; )
                {
                    ivec2 _19784 = _19694 + _1000[_30740];
                    vec4 _19838 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _19839 = _19838.x;
                    _28873[_30740] = (texelFetch(r_previous_luma, ivec2(max(0, min(_19784.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_19784.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_19839 == 0.0) ? 1.0 : _19839);
                    _28873[_30740] = pow(_28873[_30740], 1.0);
                    _28873[_30740] = max(_28873[_30740], 6.099999882280826568603515625e-05);
                    _30740++;
                    continue;
                }
            }
            float _30744;
            if (_19762)
            {
                float _20118 = min(_26643[0], _26643[3]);
                float _20123 = max(_26643[0], _26643[3]);
                float _20128 = min(_26643[1], _26643[4]);
                float _20133 = max(_26643[1], _26643[4]);
                float _20138 = min(_20118, _26643[2]);
                float _20143 = max(_20118, _26643[2]);
                float _20148 = min(_20128, _20123);
                float _20153 = max(_20128, _20123);
                float _20163 = max(_20138, _20148);
                float _20168 = min(_20143, _20133);
                float _20173 = max(_20143, _20133);
                float _20183 = max(_20163, _20168);
                float _20188 = min(_20153, _20173);
                float _26655[5] = float[](min(_20138, _20148), min(_20163, _20168), min(_20183, _20188), max(_20183, _20188), max(_20153, _20173));
                float _20371 = min(_28873[0], _28873[3]);
                float _20376 = max(_28873[0], _28873[3]);
                float _20381 = min(_28873[1], _28873[4]);
                float _20386 = max(_28873[1], _28873[4]);
                float _20391 = min(_20371, _28873[2]);
                float _20396 = max(_20371, _28873[2]);
                float _20401 = min(_20381, _20376);
                float _20406 = max(_20381, _20376);
                float _20416 = max(_20391, _20401);
                float _20421 = min(_20396, _20386);
                float _20426 = max(_20396, _20386);
                float _20436 = max(_20416, _20421);
                float _20441 = min(_20406, _20426);
                float _26662[5] = float[](min(_20391, _20401), min(_20416, _20421), min(_20436, _20441), max(_20436, _20441), max(_20406, _20426));
                float _30743;
                if (min(_26655[4], _26662[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30742;
                    _30742 = 65503.0;
                    float _31130;
                    int _31154;
                    int _31155;
                    for (int _30741 = 0, _30860 = 0, _30861 = 0; (_30741 < 5) && (_30742 < 65504.0); _30861 = _31155, _30860 = _31154, _30742 = _31130, _30741++)
                    {
                        float _19895 = _26655[_30860] - _26662[_30861];
                        if (abs(_19895) > 6.099999882280826568603515625e-05)
                        {
                            float _20484 = max(_26655[_30860], _26662[_30861]);
                            float _30862;
                            if (_20484 != 0.0)
                            {
                                _30862 = min(_26655[_30860], _26662[_30861]) / _20484;
                            }
                            else
                            {
                                _30862 = 0.0;
                            }
                            float _19910 = sign(_19895) * (1.0 - _30862);
                            int _19928 = _30860 + int(_26655[_30860] < _26662[_30861]);
                            _31155 = _30861 + int(_26655[_19928] >= _26662[_30861]);
                            _31154 = _19928;
                            _31130 = (abs(_19910) < abs(_30742)) ? _19910 : _30742;
                        }
                        else
                        {
                            _31155 = _30861;
                            _31154 = _30860;
                            _31130 = 65504.0;
                        }
                    }
                    _30743 = _30742;
                }
                else
                {
                    _30743 = 65503.0;
                }
                _30744 = _30743 * float(_30743 < 65503.0);
            }
            else
            {
                _30744 = 0.0;
            }
            vec4 _30264 = vec4(0.0);
            _30264.x = _30744;
            float _30751;
            if (_30744 != 0.0)
            {
                _30751 = sign(_30744);
            }
            else
            {
                _30751 = 0.0;
            }
            _30264.y = _30751;
            _30264.z = 1.0;
            ivec2 _20506 = ivec2(vec2(ivec2(_2849 + uvec2(1u))));
            ivec2 _31211 = ivec2(max(0, min(_20506.x, _3110)), max(0, min(_20506.y, _3118)));
            vec2 _20520 = (vec2(_31211) + vec2(0.5)) / _3071;
            ivec2 _20657 = ivec2(floor((_20520 + _3202) * _3071));
            float _26491[5];
            for (int _30753 = 0; _30753 < 5; )
            {
                ivec2 _20721 = _20657 + _1000[_30753];
                vec4 _20771 = texelFetch(r_input_exposure, ivec2(0), 0);
                float _20772 = _20771.x;
                _26491[_30753] = texelFetch(r_current_luma, ivec2(max(0, min(_20721.x, _3110)), max(0, min(_20721.y, _3118))), 0).x * ((_20772 == 0.0) ? 1.0 : _20772);
                _26491[_30753] = pow(_26491[_30753], 1.0);
                _26491[_30753] = max(_26491[_30753], 6.099999882280826568603515625e-05);
                _30753++;
                continue;
            }
            vec2 _20814 = (_20520 + _3362) + texelFetch(r_dilated_motion_vectors, _31211, 0).xy;
            float _20875 = _20814.x;
            bool _20876 = _20875 >= 0.0;
            bool _20882;
            if (_20876)
            {
                _20882 = _20875 <= 1.0;
            }
            else
            {
                _20882 = _20876;
            }
            bool _20894;
            if (_20882)
            {
                float _20885 = _20814.y;
                bool _20886 = _20885 >= 0.0;
                bool _20892;
                if (_20886)
                {
                    _20892 = _20885 <= 1.0;
                }
                else
                {
                    _20892 = _20886;
                }
                _20894 = _20892;
            }
            else
            {
                _20894 = _20882;
            }
            float _28829[5];
            if (_20894)
            {
                ivec2 _20826 = ivec2(floor(_20814 * _3361));
                for (int _30754 = 0; _30754 < 5; )
                {
                    ivec2 _20916 = _20826 + _1000[_30754];
                    vec4 _20970 = texelFetch(r_input_exposure, ivec2(0), 0);
                    float _20971 = _20970.x;
                    _28829[_30754] = (texelFetch(r_previous_luma, ivec2(max(0, min(_20916.x, (cbFSR3Upscaler.iPreviousFrameRenderSize.x - 1))), max(0, min(_20916.y, (cbFSR3Upscaler.iPreviousFrameRenderSize.y - 1)))), 0).x * cbFSR3Upscaler.fDeltaPreExposure) * ((_20971 == 0.0) ? 1.0 : _20971);
                    _28829[_30754] = pow(_28829[_30754], 1.0);
                    _28829[_30754] = max(_28829[_30754], 6.099999882280826568603515625e-05);
                    _30754++;
                    continue;
                }
            }
            float _30758;
            if (_20894)
            {
                float _21250 = min(_26491[0], _26491[3]);
                float _21255 = max(_26491[0], _26491[3]);
                float _21260 = min(_26491[1], _26491[4]);
                float _21265 = max(_26491[1], _26491[4]);
                float _21270 = min(_21250, _26491[2]);
                float _21275 = max(_21250, _26491[2]);
                float _21280 = min(_21260, _21255);
                float _21285 = max(_21260, _21255);
                float _21295 = max(_21270, _21280);
                float _21300 = min(_21275, _21265);
                float _21305 = max(_21275, _21265);
                float _21315 = max(_21295, _21300);
                float _21320 = min(_21285, _21305);
                float _26503[5] = float[](min(_21270, _21280), min(_21295, _21300), min(_21315, _21320), max(_21315, _21320), max(_21285, _21305));
                float _21503 = min(_28829[0], _28829[3]);
                float _21508 = max(_28829[0], _28829[3]);
                float _21513 = min(_28829[1], _28829[4]);
                float _21518 = max(_28829[1], _28829[4]);
                float _21523 = min(_21503, _28829[2]);
                float _21528 = max(_21503, _28829[2]);
                float _21533 = min(_21513, _21508);
                float _21538 = max(_21513, _21508);
                float _21548 = max(_21523, _21533);
                float _21553 = min(_21528, _21518);
                float _21558 = max(_21528, _21518);
                float _21568 = max(_21548, _21553);
                float _21573 = min(_21538, _21558);
                float _26510[5] = float[](min(_21523, _21533), min(_21548, _21553), min(_21568, _21573), max(_21568, _21573), max(_21538, _21558));
                float _30757;
                if (min(_26503[4], _26510[4]) > 1.1754943508222875079687365372222e-38)
                {
                    float _30756;
                    _30756 = 65503.0;
                    float _31133;
                    int _31152;
                    int _31153;
                    for (int _30755 = 0, _30848 = 0, _30849 = 0; (_30755 < 5) && (_30756 < 65504.0); _30849 = _31153, _30848 = _31152, _30756 = _31133, _30755++)
                    {
                        float _21027 = _26503[_30848] - _26510[_30849];
                        if (abs(_21027) > 6.099999882280826568603515625e-05)
                        {
                            float _21616 = max(_26503[_30848], _26510[_30849]);
                            float _30850;
                            if (_21616 != 0.0)
                            {
                                _30850 = min(_26503[_30848], _26510[_30849]) / _21616;
                            }
                            else
                            {
                                _30850 = 0.0;
                            }
                            float _21042 = sign(_21027) * (1.0 - _30850);
                            int _21060 = _30848 + int(_26503[_30848] < _26510[_30849]);
                            _31153 = _30849 + int(_26503[_21060] >= _26510[_30849]);
                            _31152 = _21060;
                            _31133 = (abs(_21042) < abs(_30756)) ? _21042 : _30756;
                        }
                        else
                        {
                            _31153 = _30849;
                            _31152 = _30848;
                            _31133 = 65504.0;
                        }
                    }
                    _30757 = _30756;
                }
                else
                {
                    _30757 = 65503.0;
                }
                _30758 = _30757 * float(_30757 < 65503.0);
            }
            else
            {
                _30758 = 0.0;
            }
            vec4 _30298 = vec4(0.0);
            _30298.x = _30758;
            float _30765;
            if (_30758 != 0.0)
            {
                _30765 = sign(_30758);
            }
            else
            {
                _30765 = 0.0;
            }
            _30298.y = _30765;
            _30298.z = 1.0;
            _2671[3] = (((_30196 + _30230) + _30264) + _30298) * 0.25;
            imageStore(rw_spd_pyramid, ivec3(_2737 + ivec2(_2773, _2809), 0), vec4(_2671[3].xy, 0.0, 0.0));
            if (cbSPD.mips <= 1u)
            {
                break;
            }
            for (uint _30807 = 0u; _30807 < 4u; _30807++)
            {
                spdIntermediateR[_2544][_2550] = _2671[_30807].x;
                spdIntermediateG[_2544][_2550] = _2671[_30807].y;
                spdIntermediateB[_2544][_2550] = _2671[_30807].z;
                spdIntermediateA[_2544][_2550] = _2671[_30807].w;
                groupMemoryBarrier();
                barrier();
                if (gl_LocalInvocationIndex < 64u)
                {
                    uint _2887 = _2727 + 1u;
                    uint _2897 = _2730 + 1u;
                    _2671[_30807] = (((vec4(spdIntermediateR[_2727][_2730], spdIntermediateG[_2727][_2730], spdIntermediateB[_2727][_2730], spdIntermediateA[_2727][_2730]) + vec4(spdIntermediateR[_2887][_2730], spdIntermediateG[_2887][_2730], spdIntermediateB[_2887][_2730], spdIntermediateA[_2887][_2730])) + vec4(spdIntermediateR[_2727][_2897], spdIntermediateG[_2727][_2897], spdIntermediateB[_2727][_2897], spdIntermediateA[_2727][_2897])) + vec4(spdIntermediateR[_2887][_2897], spdIntermediateG[_2887][_2897], spdIntermediateB[_2887][_2897], spdIntermediateA[_2887][_2897])) * 0.25;
                    imageStore(rw_spd_pyramid, ivec3(ivec2(_2494 * uvec2(16u)) + ivec2(int(_2544 + ((_30807 % 2u) * 8u)), int(_2550 + ((_30807 / 2u) * 8u))), 1), vec4(_2671[_30807].xy, 0.0, 0.0));
                }
                groupMemoryBarrier();
                barrier();
            }
            if (gl_LocalInvocationIndex < 64u)
            {
                spdIntermediateR[_2544][_2550] = _2671[0].x;
                spdIntermediateG[_2544][_2550] = _2671[0].y;
                spdIntermediateB[_2544][_2550] = _2671[0].z;
                spdIntermediateA[_2544][_2550] = _2671[0].w;
                uint _2948 = _2544 + 8u;
                spdIntermediateR[_2948][_2550] = _2671[1].x;
                spdIntermediateG[_2948][_2550] = _2671[1].y;
                spdIntermediateB[_2948][_2550] = _2671[1].z;
                spdIntermediateA[_2948][_2550] = _2671[1].w;
                uint _2957 = _2550 + 8u;
                spdIntermediateR[_2544][_2957] = _2671[2].x;
                spdIntermediateG[_2544][_2957] = _2671[2].y;
                spdIntermediateB[_2544][_2957] = _2671[2].z;
                spdIntermediateA[_2544][_2957] = _2671[2].w;
                spdIntermediateR[_2948][_2957] = _2671[3].x;
                spdIntermediateG[_2948][_2957] = _2671[3].y;
                spdIntermediateB[_2948][_2957] = _2671[3].z;
                spdIntermediateA[_2948][_2957] = _2671[3].w;
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
                uint _22124 = _2727 + 1u;
                uint _22134 = _2730 + 1u;
                float _22216 = spdIntermediateR[_2727][_2730];
                float _22220 = spdIntermediateG[_2727][_2730];
                float _22224 = spdIntermediateB[_2727][_2730];
                float _22235 = spdIntermediateR[_22124][_2730];
                float _22239 = spdIntermediateG[_22124][_2730];
                float _22243 = spdIntermediateB[_22124][_2730];
                float _22254 = spdIntermediateR[_2727][_22134];
                float _22258 = spdIntermediateG[_2727][_22134];
                float _22262 = spdIntermediateB[_2727][_22134];
                float _22273 = spdIntermediateR[_22124][_22134];
                float _22277 = spdIntermediateG[_22124][_22134];
                float _22281 = spdIntermediateB[_22124][_22134];
                vec4 _22296 = (((vec4(_22216, _22220, _22224, spdIntermediateA[_2727][_2730]) + vec4(_22235, _22239, _22243, spdIntermediateA[_22124][_2730])) + vec4(_22254, _22258, _22262, spdIntermediateA[_2727][_22134])) + vec4(_22273, _22277, _22281, spdIntermediateA[_22124][_22134])) * 0.25;
                float _22337 = _22296.x;
                imageStore(rw_spd_pyramid, ivec3(ivec2(_2494 * uvec2(8u)) + _2742, 2), vec4(_22337, _22296.y, 0.0, 0.0));
                uint _22162 = _2727 + (_2550 % 2u);
                spdIntermediateR[_22162][_2730] = _22337;
                spdIntermediateG[_22162][_2730] = _22296.y;
                spdIntermediateB[_22162][_2730] = _22296.z;
                spdIntermediateA[_22162][_2730] = _22296.w;
            }
            if (cbSPD.mips <= 3u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 16u)
            {
                uint _22410 = _2544 * 4u;
                uint _22414 = _2550 * 4u;
                uint _22419 = _22410 + 2u;
                uint _22428 = _22410 + 1u;
                uint _22431 = _22414 + 2u;
                uint _22436 = _22410 + 3u;
                float _22513 = spdIntermediateR[_22410][_22414];
                float _22517 = spdIntermediateG[_22410][_22414];
                float _22521 = spdIntermediateB[_22410][_22414];
                float _22532 = spdIntermediateR[_22419][_22414];
                float _22536 = spdIntermediateG[_22419][_22414];
                float _22540 = spdIntermediateB[_22419][_22414];
                float _22551 = spdIntermediateR[_22428][_22431];
                float _22555 = spdIntermediateG[_22428][_22431];
                float _22559 = spdIntermediateB[_22428][_22431];
                float _22570 = spdIntermediateR[_22436][_22431];
                float _22574 = spdIntermediateG[_22436][_22431];
                float _22578 = spdIntermediateB[_22436][_22431];
                vec4 _22593 = (((vec4(_22513, _22517, _22521, spdIntermediateA[_22410][_22414]) + vec4(_22532, _22536, _22540, spdIntermediateA[_22419][_22414])) + vec4(_22551, _22555, _22559, spdIntermediateA[_22428][_22431])) + vec4(_22570, _22574, _22578, spdIntermediateA[_22436][_22431])) * 0.25;
                float _22644 = _22593.x;
                imageStore(rw_spd_pyramid, ivec3(ivec2(_2494 * uvec2(4u)) + _2742, 3), vec4(_22644, _22593.y, 0.0, 0.0));
                uint _22459 = _22410 + _2550;
                spdIntermediateR[_22459][_22414] = _22644;
                spdIntermediateG[_22459][_22414] = _22593.y;
                spdIntermediateB[_22459][_22414] = _22593.z;
                spdIntermediateA[_22459][_22414] = _22593.w;
            }
            if (cbSPD.mips <= 4u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 4u)
            {
                uint _22707 = _2544 * 8u;
                uint _22712 = _22707 + _2730;
                uint _22714 = _2550 * 8u;
                uint _22723 = (_22707 + 4u) + _2730;
                uint _22734 = (_22707 + 1u) + _2730;
                uint _22737 = _22714 + 4u;
                uint _22745 = (_22707 + 5u) + _2730;
                float _22820 = spdIntermediateR[_22712][_22714];
                float _22824 = spdIntermediateG[_22712][_22714];
                float _22828 = spdIntermediateB[_22712][_22714];
                float _22839 = spdIntermediateR[_22723][_22714];
                float _22843 = spdIntermediateG[_22723][_22714];
                float _22847 = spdIntermediateB[_22723][_22714];
                float _22858 = spdIntermediateR[_22734][_22737];
                float _22862 = spdIntermediateG[_22734][_22737];
                float _22866 = spdIntermediateB[_22734][_22737];
                float _22877 = spdIntermediateR[_22745][_22737];
                float _22881 = spdIntermediateG[_22745][_22737];
                float _22885 = spdIntermediateB[_22745][_22737];
                vec4 _22900 = (((vec4(_22820, _22824, _22828, spdIntermediateA[_22712][_22714]) + vec4(_22839, _22843, _22847, spdIntermediateA[_22723][_22714])) + vec4(_22858, _22862, _22866, spdIntermediateA[_22734][_22737])) + vec4(_22877, _22881, _22885, spdIntermediateA[_22745][_22737])) * 0.25;
                imageStore(rw_spd_pyramid, ivec3(ivec2(_2494 * uvec2(2u)) + _2742, 4), vec4(_22900.xy, 0.0, 0.0));
                uint _22768 = _2544 + _2730;
                spdIntermediateR[_22768][0u] = _22900.x;
                spdIntermediateG[_22768][0u] = _22900.y;
                spdIntermediateB[_22768][0u] = _22900.z;
                spdIntermediateA[_22768][0u] = _22900.w;
            }
            if (cbSPD.mips <= 5u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 1u)
            {
                imageStore(rw_spd_pyramid, ivec3(ivec2(_2494), 5), vec4(((((vec4(spdIntermediateR[0u][0u], spdIntermediateG[0u][0u], _31244, _31244) + vec4(spdIntermediateR[1u][0u], spdIntermediateG[1u][0u], _31244, _31244)) + vec4(spdIntermediateR[2u][0u], spdIntermediateG[2u][0u], _31244, _31244)) + vec4(spdIntermediateR[3u][0u], spdIntermediateG[3u][0u], _31244, _31244)) * 0.25).xy, 0.0, 0.0));
            }
            break;
        } while(false);
        if (cbSPD.mips <= 6u)
        {
            break;
        }
        if (gl_LocalInvocationIndex == 0u)
        {
            uint _23242 = imageAtomicAdd(rw_spd_global_atomic, ivec2(0), 1u);
            spdCounter = _23242;
        }
        groupMemoryBarrier();
        barrier();
        if (spdCounter != (cbSPD.numWorkGroups - 1u))
        {
            break;
        }
        uint _23297;
        uint _23301;
        uint _23324;
        uint _23333;
        uint _23354;
        uint _23363;
        imageStore(rw_spd_global_atomic, ivec2(0), uvec4(0u));
        do
        {
            _23297 = _2544 * 4u;
            int _23299 = int(_23297);
            _23301 = _2550 * 4u;
            int _23303 = int(_23301);
            uvec2 _23315 = uvec2(ivec2(_23299, _23303));
            _23324 = _23297 + 2u;
            int _23325 = int(_23324);
            _23333 = _2727 + 1u;
            uvec2 _23341 = uvec2(ivec2(_23325, _23303));
            _23354 = _23301 + 2u;
            int _23355 = int(_23354);
            _23363 = _2730 + 1u;
            uvec2 _23367 = uvec2(ivec2(_23299, _23355));
            uvec2 _23393 = uvec2(ivec2(_23325, _23355));
            if (cbSPD.mips <= 7u)
            {
                break;
            }
            vec4 _25062 = ((((((vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23315), 5)).xy, 0.0, 0.0) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23315 + uvec2(0u, 1u)), 5)).xy, 0.0, 0.0)) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23315 + uvec2(1u, 0u)), 5)).xy, 0.0, 0.0)) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23315 + uvec2(1u)), 5)).xy, 0.0, 0.0)) * 0.25) + ((((vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23341), 5)).xy, 0.0, 0.0) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23341 + uvec2(0u, 1u)), 5)).xy, 0.0, 0.0)) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23341 + uvec2(1u, 0u)), 5)).xy, 0.0, 0.0)) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23341 + uvec2(1u)), 5)).xy, 0.0, 0.0)) * 0.25)) + ((((vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23367), 5)).xy, 0.0, 0.0) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23367 + uvec2(0u, 1u)), 5)).xy, 0.0, 0.0)) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23367 + uvec2(1u, 0u)), 5)).xy, 0.0, 0.0)) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23367 + uvec2(1u)), 5)).xy, 0.0, 0.0)) * 0.25)) + ((((vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23393), 5)).xy, 0.0, 0.0) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23393 + uvec2(0u, 1u)), 5)).xy, 0.0, 0.0)) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23393 + uvec2(1u, 0u)), 5)).xy, 0.0, 0.0)) + vec4(imageLoad(rw_spd_pyramid_read, ivec3(ivec2(_23393 + uvec2(1u)), 5)).xy, 0.0, 0.0)) * 0.25);
            vec4 _25063 = _25062 * 0.25;
            spdIntermediateR[_2544][_2550] = _25063.x;
            spdIntermediateG[_2544][_2550] = _25063.y;
            spdIntermediateB[_2544][_2550] = _25063.z;
            spdIntermediateA[_2544][_2550] = _25063.w;
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
                float _25359 = spdIntermediateR[_2727][_2730];
                float _25363 = spdIntermediateG[_2727][_2730];
                float _25367 = spdIntermediateB[_2727][_2730];
                float _25378 = spdIntermediateR[_23333][_2730];
                float _25382 = spdIntermediateG[_23333][_2730];
                float _25386 = spdIntermediateB[_23333][_2730];
                float _25397 = spdIntermediateR[_2727][_23363];
                float _25401 = spdIntermediateG[_2727][_23363];
                float _25405 = spdIntermediateB[_2727][_23363];
                float _25416 = spdIntermediateR[_23333][_23363];
                float _25420 = spdIntermediateG[_23333][_23363];
                float _25424 = spdIntermediateB[_23333][_23363];
                vec4 _25439 = (((vec4(_25359, _25363, _25367, spdIntermediateA[_2727][_2730]) + vec4(_25378, _25382, _25386, spdIntermediateA[_23333][_2730])) + vec4(_25397, _25401, _25405, spdIntermediateA[_2727][_23363])) + vec4(_25416, _25420, _25424, spdIntermediateA[_23333][_23363])) * 0.25;
                uint _25305 = _2727 + (_2550 % 2u);
                spdIntermediateR[_25305][_2730] = _25439.x;
                spdIntermediateG[_25305][_2730] = _25439.y;
                spdIntermediateB[_25305][_2730] = _25439.z;
                spdIntermediateA[_25305][_2730] = _25439.w;
            }
            if (cbSPD.mips <= 9u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 16u)
            {
                uint _25571 = _23297 + 1u;
                uint _25579 = _23297 + 3u;
                float _25656 = spdIntermediateR[_23297][_23301];
                float _25660 = spdIntermediateG[_23297][_23301];
                float _25664 = spdIntermediateB[_23297][_23301];
                float _25675 = spdIntermediateR[_23324][_23301];
                float _25679 = spdIntermediateG[_23324][_23301];
                float _25683 = spdIntermediateB[_23324][_23301];
                float _25694 = spdIntermediateR[_25571][_23354];
                float _25698 = spdIntermediateG[_25571][_23354];
                float _25702 = spdIntermediateB[_25571][_23354];
                float _25713 = spdIntermediateR[_25579][_23354];
                float _25717 = spdIntermediateG[_25579][_23354];
                float _25721 = spdIntermediateB[_25579][_23354];
                vec4 _25736 = (((vec4(_25656, _25660, _25664, spdIntermediateA[_23297][_23301]) + vec4(_25675, _25679, _25683, spdIntermediateA[_23324][_23301])) + vec4(_25694, _25698, _25702, spdIntermediateA[_25571][_23354])) + vec4(_25713, _25717, _25721, spdIntermediateA[_25579][_23354])) * 0.25;
                uint _25602 = _23297 + _2550;
                spdIntermediateR[_25602][_23301] = _25736.x;
                spdIntermediateG[_25602][_23301] = _25736.y;
                spdIntermediateB[_25602][_23301] = _25736.z;
                spdIntermediateA[_25602][_23301] = _25736.w;
            }
            if (cbSPD.mips <= 10u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            if (gl_LocalInvocationIndex < 4u)
            {
                uint _25850 = _2544 * 8u;
                uint _25855 = _25850 + _2730;
                uint _25857 = _2550 * 8u;
                uint _25866 = (_25850 + 4u) + _2730;
                uint _25877 = (_25850 + 1u) + _2730;
                uint _25880 = _25857 + 4u;
                uint _25888 = (_25850 + 5u) + _2730;
                float _25963 = spdIntermediateR[_25855][_25857];
                float _25967 = spdIntermediateG[_25855][_25857];
                float _25971 = spdIntermediateB[_25855][_25857];
                float _25982 = spdIntermediateR[_25866][_25857];
                float _25986 = spdIntermediateG[_25866][_25857];
                float _25990 = spdIntermediateB[_25866][_25857];
                float _26001 = spdIntermediateR[_25877][_25880];
                float _26005 = spdIntermediateG[_25877][_25880];
                float _26009 = spdIntermediateB[_25877][_25880];
                float _26020 = spdIntermediateR[_25888][_25880];
                float _26024 = spdIntermediateG[_25888][_25880];
                float _26028 = spdIntermediateB[_25888][_25880];
                vec4 _26043 = (((vec4(_25963, _25967, _25971, spdIntermediateA[_25855][_25857]) + vec4(_25982, _25986, _25990, spdIntermediateA[_25866][_25857])) + vec4(_26001, _26005, _26009, spdIntermediateA[_25877][_25880])) + vec4(_26020, _26024, _26028, spdIntermediateA[_25888][_25880])) * 0.25;
                uint _25911 = _2544 + _2730;
                spdIntermediateR[_25911][0u] = _26043.x;
                spdIntermediateG[_25911][0u] = _26043.y;
                spdIntermediateB[_25911][0u] = _26043.z;
                spdIntermediateA[_25911][0u] = _26043.w;
            }
            if (cbSPD.mips <= 11u)
            {
                break;
            }
            groupMemoryBarrier();
            barrier();
            break;
        } while(false);
        break;
    } while(false);
}

