#version 320 es
layout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;

const ivec2 _494[9] = ivec2[](ivec2(0), ivec2(1, 0), ivec2(0, 1), ivec2(0, -1), ivec2(-1, 0), ivec2(-1, 1), ivec2(1), ivec2(-1), ivec2(1, -1));
const ivec2 _1231[4] = ivec2[](ivec2(0), ivec2(1, 0), ivec2(0, 1), ivec2(1));

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

uniform highp sampler2D r_input_depth;
uniform highp sampler2D r_input_color_jittered;
uniform highp sampler2D r_input_motion_vectors;
layout(binding=0, rgba16f) uniform writeonly highp image2D rw_farthest_depth;
layout(binding=1, rgba16f) uniform writeonly highp image2D rw_current_luma;
layout(binding=2, r32ui) uniform highp uimage2D rw_reconstructed_previous_nearest_depth;
layout(binding=3, r32f) uniform writeonly highp image2D rw_dilated_depth;
layout(binding=4, rgba16f) uniform writeonly highp image2D rw_dilated_motion_vectors;

void main()
{
    ivec2 _649 = ivec2(gl_GlobalInvocationID.xy);
    float _719[9];
    for (int _1213 = 0; _1213 < 9; )
    {
        _719[_1213] = texelFetch(r_input_depth, _649 + _494[_1213], 0).x;
        _1213++;
        continue;
    }
    float _1215;
    ivec2 _1216;
    float _1217;
    _1217 = _719[0];
    _1216 = _649;
    _1215 = _719[0];
    float _1223;
    ivec2 _1225;
    float _1227;
    for (int _1214 = 1; _1214 < 9; _1217 = _1227, _1216 = _1225, _1215 = _1223, _1214++)
    {
        ivec2 _766 = _649 + _494[_1214];
        if (all(lessThan(uvec2(_766), uvec2(cbFSR3Upscaler.iRenderSize))))
        {
            bool _777 = _719[_1214] < _1217;
            float _1224;
            if (_777)
            {
                _1224 = max(_1215, _719[_1214]);
            }
            else
            {
                _1224 = _1215;
            }
            _1227 = _777 ? _719[_1214] : _1217;
            _1225 = mix(_1216, _766, bvec2(_777));
            _1223 = _1224;
        }
        else
        {
            _1227 = _1217;
            _1225 = _1216;
            _1223 = _1215;
        }
    }
    vec2 _842 = texelFetch(r_input_motion_vectors, _1216, 0).xy * cbFSR3Upscaler.fMotionVectorScale;
    vec2 _886 = vec2(cbFSR3Upscaler.iRenderSize);
    vec2 _999 = fma(((vec2(_649) + vec2(0.5)) / _886) + (_842 * float(length(_842 * vec2(3840.0, 2160.0)) > mix(0.25, 0.75, clamp(min((cbFSR3Upscaler.fDeviceToViewDepth.y / (_1217 - cbFSR3Upscaler.fDeviceToViewDepth.x)) * cbFSR3Upscaler.fViewSpaceToMetersFactor, 65504.0) * 0.00999999977648258209228515625, 0.0, 1.0)))), _886, vec2(-0.5));
    ivec2 _1002 = ivec2(floor(_999));
    vec2 _1042 = fract(_999);
    float _1011 = _1042.x;
    float _1012 = 1.0 - _1011;
    float _1014 = _1042.y;
    float _1015 = 1.0 - _1014;
    float _1164[4] = float[](_1012 * _1015, _1011 * _1015, _1012 * _1014, _1011 * _1014);
    for (int _1218 = 0; _1218 < 4; _1218++)
    {
        if (_1164[_1218] > 0.0006099999882280826568603515625)
        {
            ivec2 _911 = _1002 + _1231[_1218];
            if (all(lessThan(uvec2(_911), uvec2(cbFSR3Upscaler.iRenderSize))))
            {
                uint _1062 = imageAtomicMin(rw_reconstructed_previous_nearest_depth, _911, floatBitsToUint(_1217));
            }
        }
    }
    imageStore(rw_dilated_motion_vectors, _649, vec4(_842, 0.0, 0.0));
    imageStore(rw_dilated_depth, _649, vec4(_1217, 0.0, 0.0, 0.0));
    imageStore(rw_farthest_depth, _649, vec4(min((cbFSR3Upscaler.fDeviceToViewDepth.y / (_1215 - cbFSR3Upscaler.fDeviceToViewDepth.x)) * cbFSR3Upscaler.fViewSpaceToMetersFactor, 65504.0), 0.0, 0.0, 0.0));
    imageStore(rw_current_luma, _649, vec4(dot(max(vec3(0.0), texelFetch(r_input_color_jittered, _649, 0).xyz), vec3(0.2125999927520751953125, 0.715200006961822509765625, 0.072200000286102294921875)), 0.0, 0.0, 0.0));
}

