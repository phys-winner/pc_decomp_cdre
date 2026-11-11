#include <jni.h>
#include <vector>
#include "texconv.h"

extern "C" JNIEXPORT jbyteArray JNICALL Java_org_crashday_port_CrashdayTextureBackend_nativeConvert(
    JNIEnv *env, jclass, jbyteArray input, jint format)
{
    if (!input) return nullptr;
    jsize length = env->GetArrayLength(input);
    std::vector<uint8_t> source(static_cast<size_t>(length));
    if (length) env->GetByteArrayRegion(input, 0, length, reinterpret_cast<jbyte *>(source.data()));
    if (env->ExceptionCheck()) return nullptr;
    uint8_t *converted = nullptr;
    uint64_t converted_size = 0;
    int result = texconv_convert_dds(source.data(), source.size(), format, &converted, &converted_size);
    if (result < 0 || converted_size > static_cast<uint64_t>(INT32_MAX)) {
        texconv_free(converted);
        env->ThrowNew(env->FindClass("java/lang/IllegalArgumentException"), "Unsupported or invalid DXT DDS");
        return nullptr;
    }
    jbyteArray out = env->NewByteArray(result > 0 ? 0 : static_cast<jsize>(converted_size));
    if (out && converted_size) env->SetByteArrayRegion(out, 0, static_cast<jsize>(converted_size), reinterpret_cast<jbyte *>(converted));
    texconv_free(converted);
    return out;
}
