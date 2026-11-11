#ifdef CRASHDAY_ANDROID_APP
#define _GNU_SOURCE
#include "host.h"
#include <android/asset_manager.h>
#include <android/asset_manager_jni.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <jni.h>
#include <strings.h>
#include <unistd.h>

static JavaVM *asset_vm;
static AAssetManager *asset_manager;
static jobject asset_java_manager;

static const char *asset_name(const char *path)
{
    static const char game[] = "/sdcard/Crashday/game";
    static const char images[] = "/apk/Crashday/images";
    if (!path) return NULL;
    const char *prefix = !strncmp(path, game, sizeof game - 1) ? game :
        !strncmp(path, images, sizeof images - 1) ? images : NULL;
    if (!prefix) return NULL;
    const char *name = path + strlen(prefix);
    if (*name && *name != '/') return NULL;
    if (*name == '/') ++name;
    if (strstr(name, "..") || strchr(name, '\\')) return NULL;
    return name;
}

static int asset_path(const char *path, char *out, size_t cap)
{
    static const char game[] = "/sdcard/Crashday/game";
    const char *name = asset_name(path);
    if (!name) return 0;
    int n = snprintf(out, cap, "%s%s%s", !strncmp(path, game, sizeof game - 1) ? "game" : "images", *name ? "/" : "", name);
    return n >= 0 && n < (int)cap;
}

static JNIEnv *asset_env(void)
{
    if (!asset_vm) return NULL;
    JNIEnv *env = NULL;
    jint status = (*asset_vm)->GetEnv(asset_vm, (void **)&env, JNI_VERSION_1_6);
    if (status == JNI_EDETACHED && (*asset_vm)->AttachCurrentThread(asset_vm, &env, NULL)) return NULL;
    return env;
}

int void_android_asset_open(const char *path, int64_t *offset, int64_t *size)
{
    char name[1024];
    if (!asset_manager || !asset_path(path, name, sizeof name)) {
        VLOG("[assets] no native manager or path mapping: %s", path ? path : "(null)");
        return -1;
    }
    AAsset *asset = AAssetManager_open(asset_manager, name, AASSET_MODE_RANDOM);
    if (!asset) {
        VLOG("[assets] AAssetManager_open failed: %s", name);
        errno = ENOENT;
        return -1;
    }
    off_t start = 0, length = 0;
    int fd = AAsset_openFileDescriptor64(asset, &start, &length);
    if (fd < 0) {
        VLOG("[assets] uncompressed FD unavailable: %s", name);
        AAsset_close(asset);
        errno = EIO;
        return -1;
    }
    AAsset_close(asset);
    *offset = start;
    *size = length;
    return fd;
}

uint8_t *void_android_asset_read(const char *path, size_t *size)
{
    int64_t offset, length;
    int fd = void_android_asset_open(path, &offset, &length);
    if (fd < 0 || length < 0 || length > SIZE_MAX) { if (fd >= 0) close(fd); return NULL; }
    uint8_t *data = malloc((size_t)length);
    size_t done = 0;
    while (data && done < (size_t)length) {
        ssize_t got = pread(fd, data + done, (size_t)length - done, (off_t)(offset + done));
        if (got < 0 && errno == EINTR) continue;
        if (got <= 0) break;
        done += (size_t)got;
    }
    close(fd);
    if (!data || done != (size_t)length) { free(data); return NULL; }
    *size = (size_t)length;
    return data;
}

int void_android_asset_list(const char *path, void (*add)(const char *, unsigned char, void *), void *opaque)
{
    char name[1024];
    if (!asset_manager || !asset_path(path, name, sizeof name)) return 0;
    JNIEnv *env = asset_env();
    if (!env) return 0;
    jclass cls = (*env)->FindClass(env, "android/content/res/AssetManager");
    jmethodID list = (*env)->GetMethodID(env, cls, "list", "(Ljava/lang/String;)[Ljava/lang/String;");
    jstring where = (*env)->NewStringUTF(env, name);
    jobjectArray entries = (*env)->CallObjectMethod(env, asset_java_manager, list, where);
    if (!entries) {
        (*env)->ExceptionClear(env);
        (*env)->DeleteLocalRef(env, where);
        (*env)->DeleteLocalRef(env, cls);
        return 0;
    }
    jsize count = (*env)->GetArrayLength(env, entries);
    for (jsize i = 0; i < count; ++i) {
        jstring item = (*env)->GetObjectArrayElement(env, entries, i);
        const char *text = (*env)->GetStringUTFChars(env, item, NULL);
        if (text) {
            char child[2048];
            snprintf(child, sizeof child, "%s%s%s", name, *name ? "/" : "", text);
            jstring child_name = (*env)->NewStringUTF(env, child);
            jobjectArray children = (*env)->CallObjectMethod(env, asset_java_manager, list, child_name);
            unsigned char kind = children && (*env)->GetArrayLength(env, children) ? DT_DIR : DT_REG;
            add(text, kind, opaque);
            if (children) (*env)->DeleteLocalRef(env, children);
            (*env)->DeleteLocalRef(env, child_name);
            (*env)->ReleaseStringUTFChars(env, item, text);
        }
        (*env)->DeleteLocalRef(env, item);
    }
    int ok = !(*env)->ExceptionCheck(env);
    if (!ok) (*env)->ExceptionClear(env);
    if (!strcmp(name, "game/data")) void_log("[assets] listed %s: %d entries (status=%d)", name, (int)count, ok);
    (*env)->DeleteLocalRef(env, entries);
    (*env)->DeleteLocalRef(env, where);
    (*env)->DeleteLocalRef(env, cls);
    return ok;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved)
{
    (void)reserved;
    asset_vm = vm;
    return JNI_VERSION_1_6;
}

void void_android_asset_init(JNIEnv *env, jobject manager)
{
    if (asset_java_manager) (*env)->DeleteGlobalRef(env, asset_java_manager);
    asset_java_manager = manager ? (*env)->NewGlobalRef(env, manager) : NULL;
    asset_manager = manager ? AAssetManager_fromJava(env, manager) : NULL;
}
#else
#include "host.h"
#include <errno.h>
int void_android_asset_open(const char *path, int64_t *offset, int64_t *size)
{
    (void)path; (void)offset; (void)size;
    errno = ENOENT;
    return -1;
}
uint8_t *void_android_asset_read(const char *path, size_t *size) { (void)path; (void)size; return NULL; }
int void_android_asset_list(const char *path, void (*add)(const char *, unsigned char, void *), void *opaque)
{
    (void)path; (void)add; (void)opaque; return 0;
}
#endif
