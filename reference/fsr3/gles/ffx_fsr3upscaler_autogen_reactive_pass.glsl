#version 320 es
layout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;

layout(binding = 1, std140) uniform cbGenerateReactive_t
{
    float gen_reactive_scale;
    float gen_reactive_threshold;
    float gen_reactive_binaryValue;
    uint gen_reactive_flags;
} cbGenerateReactive;

uniform highp sampler2D r_input_color_jittered;
uniform highp sampler2D r_input_opaque_only;
layout(binding=0, r32f) uniform writeonly highp image2D rw_output_autoreactive;

void main()
{
    ivec2 _163 = ivec2((gl_WorkGroupID.xy * uvec2(8u)) + gl_LocalInvocationID.xy);
    vec4 _270 = texelFetch(r_input_opaque_only, _163, 0);
    vec3 _271 = _270.xyz;
    vec4 _277 = texelFetch(r_input_color_jittered, _163, 0);
    vec3 _278 = _277.xyz;
    vec3 _467;
    vec3 _468;
    if ((cbGenerateReactive.gen_reactive_flags & 1u) != 0u)
    {
        _468 = _278 / vec3(max(max(0.0, _277.x), max(_277.y, _277.z)) + 1.0);
        _467 = _271 / vec3(max(max(0.0, _270.x), max(_270.y, _270.z)) + 1.0);
    }
    else
    {
        _468 = _278;
        _467 = _271;
    }
    vec3 _469;
    vec3 _470;
    if ((cbGenerateReactive.gen_reactive_flags & 2u) != 0u)
    {
        _470 = _467 / vec3(max(6.099999882280826568603515625e-05, 1.0 - max(_467.x, max(_467.y, _467.z))));
        _469 = _468 / vec3(max(6.099999882280826568603515625e-05, 1.0 - max(_468.x, max(_468.y, _468.z))));
    }
    else
    {
        _470 = _467;
        _469 = _468;
    }
    vec3 _199 = abs(_469 - _470);
    float _471;
    if ((cbGenerateReactive.gen_reactive_flags & 8u) != 0u)
    {
        _471 = max(_199.x, max(_199.y, _199.z));
    }
    else
    {
        _471 = length(_199);
    }
    float _220 = _471 * cbGenerateReactive.gen_reactive_scale;
    float _473;
    if ((cbGenerateReactive.gen_reactive_flags & 4u) != 0u)
    {
        float _472;
        if (_220 < cbGenerateReactive.gen_reactive_threshold)
        {
            _472 = 0.0;
        }
        else
        {
            _472 = cbGenerateReactive.gen_reactive_binaryValue;
        }
        _473 = _472;
    }
    else
    {
        _473 = _220;
    }
    imageStore(rw_output_autoreactive, _163, vec4(_473, 0.0, 0.0, 0.0));
}

