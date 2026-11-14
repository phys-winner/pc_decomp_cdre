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

uniform highp sampler2D r_spd_mips;
uniform highp sampler2D r_spd_mips_linear;
layout(binding=0, rgba8) uniform writeonly highp image2D rw_shading_change;

void main()
{
    ivec2 _300 = ivec2(gl_GlobalInvocationID.xy);
    vec2 _385 = vec2(cbFSR3Upscaler.iRenderSize);
    ivec2 _387 = ivec2(_385 * 0.5);
    if (all(lessThan(uvec2(_300), uvec2(_387))))
    {
        vec2 _344 = vec2(_387);
        vec2 _506 = max(vec2(0.5), min((((vec2(_300) + vec2(0.5)) / _344) + (cbFSR3Upscaler.fJitter / _385)) * _344, _344 - vec2(0.5))) / vec2(textureSize(r_spd_mips, 0));
        float _541[3];
        for (int _551 = 0; _551 < 3; )
        {
            vec4 _524 = textureLod(r_spd_mips_linear, _506, float(uint(_551)));
            _541[_551] = abs(_524.x * _524.y);
            _551++;
            continue;
        }
        float _545[3] = _541;
        float _553;
        _553 = 0.0;
        float _555;
        for (int _552 = 0; _552 < 3; _553 = _555, _552++)
        {
            if (_545[_552] > 0.0)
            {
                _555 = max(_553, _545[_552]);
            }
            else
            {
                _555 = _553;
            }
        }
        imageStore(rw_shading_change, _300, vec4(clamp(_553, 0.0, 1.0), 0.0, 0.0, 0.0));
    }
}

