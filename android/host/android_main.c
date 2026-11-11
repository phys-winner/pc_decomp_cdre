#ifdef CRASHDAY_ANDROID_APP
#define _GNU_SOURCE
#include "host.h"
#include "input.h"
#include <android/native_window.h>
#include <android/native_window_jni.h>
#include <dlfcn.h>
#include <errno.h>
#include <jni.h>
#include <limits.h>
#include <math.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

int crashday_game_main(const char *, const char *, const char *, int);
static ANativeWindow *window;
static pthread_mutex_t window_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t window_cond = PTHREAD_COND_INITIALIZER;
static uint32_t window_serial;
static uint32_t window_acked;
static pthread_cond_t window_ack_cond;
static pthread_once_t window_ack_once = PTHREAD_ONCE_INIT;
static void init_window_ack(void)
{
    pthread_condattr_t attr;
    pthread_condattr_init(&attr);
    pthread_condattr_setclock(&attr, CLOCK_MONOTONIC);
    pthread_cond_init(&window_ack_cond, &attr);
    pthread_condattr_destroy(&attr);
}
static int display_width, display_height, game_started, game_result = INT_MIN, frame_ready, launcher_ready;
static float selected_fps = 60;
static float selected_refresh = 60;
static uint32_t display_rates[32] = {60}, display_rate_count = 1;
static uint32_t refresh_request;

uint32_t void_android_refresh_rate(int index)
{
    pthread_mutex_lock(&window_lock);
    uint32_t rate = index < 0 ? (uint32_t)lroundf(selected_refresh) :
        (uint32_t)index < display_rate_count ? display_rates[index] : 0;
    pthread_mutex_unlock(&window_lock);
    return rate;
}

uint32_t void_android_refresh_count(void)
{
    pthread_mutex_lock(&window_lock);
    uint32_t count = display_rate_count;
    pthread_mutex_unlock(&window_lock);
    return count;
}

void void_android_request_refresh(uint32_t rate)
{
    pthread_mutex_lock(&window_lock);
    for (uint32_t i = 0; i < display_rate_count; ++i) if (display_rates[i] == rate) {
        selected_refresh = rate; /* SDL reads the new mode before the UI thread applies it. */
        __atomic_store_n(&refresh_request, rate, __ATOMIC_RELEASE);
    }
    pthread_mutex_unlock(&window_lock);
}

JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeRefreshRequest(JNIEnv *env, jclass type)
{
    (void)env; (void)type;
    return (jint)__atomic_exchange_n(&refresh_request, 0, __ATOMIC_ACQ_REL);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeDisplayRates(JNIEnv *env, jclass type, jfloatArray rates, jfloat selected)
{
    (void)type;
    if (!rates || !isfinite(selected) || selected < 1 || selected > 1000) return;
    jsize count = (*env)->GetArrayLength(env, rates);
    if (count < 1 || count > 32) return;
    jfloat values[32];
    (*env)->GetFloatArrayRegion(env, rates, 0, count, values);
    if ((*env)->ExceptionCheck(env)) return;
    uint32_t rounded[32], used = 0;
    for (jsize i = 0; i < count; ++i) {
        if (!isfinite(values[i]) || values[i] < 1 || values[i] > 1000) return;
        uint32_t rate = (uint32_t)lroundf(values[i]);
        if (!used || rounded[used - 1] != rate) rounded[used++] = rate;
    }
    pthread_mutex_lock(&window_lock);
    memcpy(display_rates, rounded, used * sizeof *rounded);
    display_rate_count = used;
    selected_refresh = selected;
    pthread_mutex_unlock(&window_lock);
}
static int touch_only;
static int menu_debug;
static int cinematic_playing;
static int touch_hud;

float crashday_hud_y(float y, float offset) { return y - (__atomic_load_n(&touch_hud, __ATOMIC_ACQUIRE) ? offset : 0.0f); }

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeTouchHud(JNIEnv *env, jclass type, jboolean active)
{
    (void)env; (void)type;
    __atomic_store_n(&touch_hud, active != 0, __ATOMIC_RELEASE);
}

static int weapon_hud_mask = -1;
static float weapon_hud_anchors[6];

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeWeaponHud(JNIEnv *env, jclass type, jint mask, jfloatArray anchors)
{
    (void)type;
    if (!game_started || !__atomic_load_n(&frame_ready, __ATOMIC_ACQUIRE)) return;
    if (mask < -1 || mask > 3 || !anchors || (*env)->GetArrayLength(env, anchors) != 6) return;
    float values[6];
    (*env)->GetFloatArrayRegion(env, anchors, 0, 6, values);
    if ((*env)->ExceptionCheck(env)) return;
    for (unsigned i = 0; i < 6; ++i) if (!isfinite(values[i]) || values[i] < 0 || values[i] > 1) return;
    for (unsigned i = 0; i < 2; ++i) if (mask >= 0 && (mask & (1 << i)) && values[i * 3 + 2] <= 0) return;
    void_machine_enter();
    memcpy(weapon_hud_anchors, values, sizeof values);
    weapon_hud_mask = mask;
    void_machine_leave();
}

float crashday_weapon_coord(unsigned weapon, unsigned axis, float value, float origin)
{
    if (weapon_hud_mask < 0 || weapon > 1 || axis > 2) return value;
    if (!(weapon_hud_mask & (1 << weapon))) return axis == 2 ? value : -1000;
    uint32_t renderer = MEM32(0x870260u);
    if (!renderer || !void_vm_readable(renderer + 0xE4, 4)) return value;
    float *anchor = weapon_hud_anchors + weapon * 3;
    float scale = anchor[2] * 480 / 25.5999755859375f;
    if (axis == 2) return value * scale;
    float center = axis ? 442.39971923828125f : origin - MEMF(0x808C54u) + MEMF(0x809400u) * .5f;
    float target = anchor[axis] * (axis ? 480 : 640 * MEMF(renderer + 0xE4));
    return (value - center) * scale + target;
}

void crashday_cinematic_active(int active) { cinematic_playing = active; }
static int menu_overlay;

int void_android_menu_overlay(void) { return __atomic_load_n(&menu_overlay, __ATOMIC_ACQUIRE); }

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeMenuOverlay(JNIEnv *env, jclass type, jboolean shown)
{
    (void)env; (void)type;
    __atomic_store_n(&menu_overlay, shown != 0, __ATOMIC_RELEASE);
}
static uint64_t pause_state;
static float pointer_remainder_x, pointer_remainder_y;
static char game_dir[1024], images_dir[1024], data_dir[1024];

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeLanguage(JNIEnv *env, jclass type, jstring language)
{
    (void)type;
    if (game_started || !language) return;
    const char *value = (*env)->GetStringUTFChars(env, language, NULL);
    if (!value) return;
    static const char *allowed[] = {"english", "german", "italian", "russian", "turkish", "hungarian", "brazilian", "spanish", "polish"};
    for (unsigned i = 0; i < sizeof allowed / sizeof *allowed; ++i)
        if (!strcmp(value, allowed[i])) { setenv("CRASHDAY_LANGUAGE", value, 1); break; }
    (*env)->ReleaseStringUTFChars(env, language, value);
}

uint64_t void_audio_pause_state(void)
{
    return __atomic_load_n(&pause_state, __ATOMIC_ACQUIRE);
}

void void_android_frame_presented(void)
{
    __atomic_store_n(&launcher_ready, 0, __ATOMIC_RELEASE);
    __atomic_store_n(&frame_ready, 1, __ATOMIC_RELEASE);
}

void void_android_launcher_ready(void)
{
    __atomic_store_n(&launcher_ready, 1, __ATOMIC_RELEASE);
}

void void_android_load_ready(void)
{
    void_android_frame_presented();
}

int void_android_display_size(int *w, int *h)
{
    pthread_mutex_lock(&window_lock);
    *w = display_width;
    *h = display_height;
    pthread_mutex_unlock(&window_lock);
    return *w > 0 && *h > 0;
}

int void_android_render_ready(void)
{
    pthread_mutex_lock(&window_lock);
    int ready = window != NULL && !(void_audio_pause_state() & 1u);
    pthread_mutex_unlock(&window_lock);
    return ready;
}

void *void_android_window_current(uint32_t *serial, int wait)
{
    pthread_mutex_lock(&window_lock);
    while (wait && !window) pthread_cond_wait(&window_cond, &window_lock);
    *serial = window_serial;
    ANativeWindow *result = window;
    pthread_mutex_unlock(&window_lock);
    return result;
}

void *void_android_window(void)
{
    uint32_t serial;
    return void_android_window_current(&serial, 1);
}

/* A retained snapshot protects EGL creation even after the UI's bounded wait expires. */
void *void_android_window_acquire(uint32_t *serial, int wait)
{
    pthread_mutex_lock(&window_lock);
    while (wait && !window) pthread_cond_wait(&window_cond, &window_lock);
    *serial = window_serial;
    ANativeWindow *result = window;
    if (result) ANativeWindow_acquire(result);
    pthread_mutex_unlock(&window_lock);
    return result;
}

void void_android_window_release(void *snapshot)
{
    if (snapshot) ANativeWindow_release((ANativeWindow *)snapshot);
}

void void_android_window_ack(uint32_t serial)
{
    pthread_once(&window_ack_once, init_window_ack);
    pthread_mutex_lock(&window_lock);
    if ((int32_t)(serial - window_acked) > 0) window_acked = serial;
    pthread_cond_broadcast(&window_ack_cond);
    pthread_mutex_unlock(&window_lock);
}

static int wait_window_ack(uint32_t serial)
{
    pthread_once(&window_ack_once, init_window_ack);
    struct timespec deadline;
    clock_gettime(CLOCK_MONOTONIC, &deadline);
    ++deadline.tv_sec;
    pthread_mutex_lock(&window_lock);
    while ((int32_t)(window_acked - serial) < 0) {
        int error = pthread_cond_timedwait(&window_ack_cond, &window_lock, &deadline);
        if (error) break;
    }
    int acknowledged = (int32_t)(window_acked - serial) >= 0;
    pthread_mutex_unlock(&window_lock);
    return acknowledged;
}

static void release_input(void)
{
    extern void void_input_cancel(void);
    void_input_cancel();
    void_input_raw_reset();
    pointer_remainder_x = pointer_remainder_y = 0;
    for (unsigned vk = 1; vk < 256; ++vk) if (void_input_key_state(vk) < 0) void_input_key(vk, 0);
    for (int i = 0; i < 8; ++i) void_input_mouse_button(i, 0);
    extern void void_input_gamepad_reset(void);
    void_input_gamepad_reset();
    extern void void_input_drive(float, float, float);
    extern void void_input_horizon_set(float);
    void_input_drive(0, 0, 0);
    void_input_horizon_set(0);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeSurface(JNIEnv *env, jclass type, jobject surface)
{
    (void)type;
    ANativeWindow *next = surface ? ANativeWindow_fromSurface(env, surface) : NULL;
    if (next) {
        typedef int32_t (*set_frame_rate_fn)(ANativeWindow *, float, int8_t);
        set_frame_rate_fn set_frame_rate = (set_frame_rate_fn)dlsym(RTLD_DEFAULT, "ANativeWindow_setFrameRate");
        if (set_frame_rate) set_frame_rate(next, selected_refresh, 0);
    }
    void_log("[gl] nativeSurface next=%p serial=%u", next, window_serial + 1);
    pthread_mutex_lock(&window_lock);
    ANativeWindow *old = window;
    window = next;
    if (window) {
        display_width = ANativeWindow_getWidth(window);
        display_height = ANativeWindow_getHeight(window);
        void_input_set_screen_size(display_width, display_height);
    }
    uint32_t serial = ++window_serial;
    pthread_cond_broadcast(&window_cond);
    pthread_mutex_unlock(&window_lock);
    if (!surface) release_input();
    if (!surface && old && game_started && !wait_window_ack(serial))
        void_log("[gl] surface detach acknowledgement timed out serial=%u", serial);
    if (old) ANativeWindow_release(old);
}

void void_android_set_paused(int pause)
{
    uint64_t state = void_audio_pause_state(), next;
    do {
        if ((state & 1u) == (pause ? 1u : 0u)) break;
        next = ((state & ~UINT64_C(1)) + 2u) | (pause ? 1u : 0u);
    } while (!__atomic_compare_exchange_n(&pause_state, &state, next, 0, __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE));
    if (pause) release_input();
    extern void void_audio_lifecycle_changed(void);
    void_audio_lifecycle_changed();
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativePause(JNIEnv *env, jclass type, jboolean pause)
{
    (void)env;
    (void)type;
    void_android_set_paused(pause);
}

int crash_test_requested;

static void *run_game(void *unused)
{
    (void)unused;
    char selftest_path[1100];
    int selftest = snprintf(selftest_path, sizeof selftest_path, "%s/selftest", data_dir) < (int)sizeof selftest_path &&
        access(selftest_path, F_OK) == 0;
    int result = crashday_game_main(game_dir, data_dir, images_dir, selftest);
    __atomic_store_n(&game_result, result, __ATOMIC_RELEASE);
    void_log("[crashday] Android game thread returned %d", result);
    return NULL;
}

JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeConfigure(JNIEnv *env, jclass type, jfloat fps)
{
    (void)env;
    (void)type;
    if (!isfinite(fps) || fps < .001f || fps > 1000.0f) return EINVAL;
    selected_fps = fps;
    char value[32];
    snprintf(value, sizeof value, "%.3f", fps);
    if (setenv("CRASHDAY_FPS_LIMIT", value, 1)) return errno;
    if (game_started) {
        extern void d3d_gl_set_frame_rate(float);
        d3d_gl_set_frame_rate(fps);
        typedef int32_t (*set_frame_rate_fn)(ANativeWindow *, float, int8_t);
        set_frame_rate_fn set_frame_rate = (set_frame_rate_fn)dlsym(RTLD_DEFAULT, "ANativeWindow_setFrameRate");
        pthread_mutex_lock(&window_lock);
        if (set_frame_rate && window) set_frame_rate(window, selected_refresh, 0);
        pthread_mutex_unlock(&window_lock);
    }
    return 0;
}

static int copy_path(JNIEnv *env, jstring text, char *out, size_t cap)
{
    if (!text) return EINVAL;
    const char *value = (*env)->GetStringUTFChars(env, text, NULL);
    if (!value) return ENOMEM;
    int size = snprintf(out, cap, "%s", value);
    (*env)->ReleaseStringUTFChars(env, text, value);
    return size < 0 || size >= (int)cap ? EOVERFLOW : 0;
}

JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeStart(JNIEnv *env, jclass type,
    jstring game, jstring images, jstring data, jobject assets, jboolean crash_test, jint render_scale)
{
    (void)type;
    if (render_scale < 25 || render_scale > 100) return EINVAL;
    extern void void_android_asset_init(JNIEnv *, jobject);
    void_android_asset_init(env, assets);
    if (game_started) return 0;
    int error = copy_path(env, game, game_dir, sizeof game_dir);
    if (error) return error;
    error = copy_path(env, images, images_dir, sizeof images_dir);
    if (error) return error;
    error = copy_path(env, data, data_dir, sizeof data_dir);
    if (error) return error;
    {
        /* GLES program binaries (d3d9_shader.c) need a cache folder; without one every start
         * compiled and linked each material's program again in the frame that first drew it. */
        char cache[1100];
        int count = snprintf(cache, sizeof cache, "%s/ShaderCache", data_dir);
        if (count > 0 && count < (int)sizeof cache && (mkdir(cache, 0775) == 0 || errno == EEXIST))
            void_files_set_cache(cache);
    }
    char verbose_path[1100];
    if (snprintf(verbose_path, sizeof verbose_path, "%s/verbose", data_dir) < (int)sizeof verbose_path)
        void_verbose = access(verbose_path, F_OK) == 0;
    if (void_verbose) setenv("VOID_TRACE_CALLS", "00405BA0,005CF620,006B7DA0,006B8FF0,006B87B0,00666D80", 1);
    char menu_debug_path[1100];
    if (snprintf(menu_debug_path, sizeof menu_debug_path, "%s/menu-debug", data_dir) < (int)sizeof menu_debug_path)
        menu_debug = access(menu_debug_path, F_OK) == 0;
    /* Diagnostics: <data>/count-thunks logs the busiest imports with the frame statistics. */
    char thunks_path[1100];
    if (snprintf(thunks_path, sizeof thunks_path, "%s/count-thunks", data_dir) < (int)sizeof thunks_path &&
        access(thunks_path, F_OK) == 0)
        setenv("VOID_COUNT_THUNKS", "1", 1);
    const char *renderer = getenv("PORT_RENDERER");
    if (setenv("CRASHDAY_RENDERER", renderer && *renderer ? renderer : "gles", 1)) return errno;
    char scale[16];
    snprintf(scale, sizeof scale, "%d", render_scale);
    if (setenv("CRASHDAY_RENDER_SCALE", scale, 1)) return errno;
    extern int crash_test_requested;
    crash_test_requested = crash_test;
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_setstacksize(&attr, 64u << 20);
    pthread_t thread;
    error = pthread_create(&thread, &attr, run_game, NULL);
    pthread_attr_destroy(&attr);
    if (error) return error;
    pthread_detach(thread);
    game_started = 1;
    return 0;
}

JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeStatus(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    int result = __atomic_load_n(&game_result, __ATOMIC_ACQUIRE);
    if (result != INT_MIN) return result;
    if (__atomic_load_n(&frame_ready, __ATOMIC_ACQUIRE)) return INT_MAX;
    return __atomic_load_n(&launcher_ready, __ATOMIC_ACQUIRE) ? INT_MAX - 1 : INT_MIN;
}

JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeLauncherClick(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    extern int void_window_launcher_click(void);
    return void_window_launcher_click() ? JNI_TRUE : JNI_FALSE;
}

static uint32_t crashday_ui_container(void)
{
    if (!void_vm_readable(0x869418u, 4)) return 0;
    uint32_t ui = MEM32(0x869418u);
    uint32_t widgets = ui && void_vm_readable(ui, 0x2A8) ? MEM32(ui + 0x264) : 0;
    if (!widgets || !void_vm_readable(widgets + 0x30, 12)) return 0;
    uint32_t count = (uint16_t)MEM16(widgets + 0x30);
    if (!count || count > 64 || !void_vm_readable(MEM32(widgets + 0x34), count * 4)) return 0;
    return widgets;
}

static const char *crashday_widget_text(uint32_t widget)
{
    if (!void_vm_readable(widget, 0x38)) return NULL;
    uint32_t length = MEM32(widget + 0x30);
    if (length > 127) return NULL;
    uint32_t address = length < 16 ? widget + 0x20 : MEM32(widget + 0x20);
    if (!address || !void_vm_readable(address, length + 1) || MEM8(address + length)) return NULL;
    return (const char *)GPTR(address);
}

static int crashday_widget_name(uint32_t widget, const char *expected)
{
    const char *name = crashday_widget_text(widget);
    return name && !strcmp(name, expected);
}

static int crashday_widget_caption(uint32_t widget, const char *expected)
{
    if (!void_vm_readable(widget, 0x1A0)) return 0;
    uint32_t length = MEM32(widget + 0x190);
    if (length > 128) return 0;
    uint32_t address = length < 16 ? widget + 0x180 : MEM32(widget + 0x180);
    if (!address || !void_vm_readable(address, length + 1)) return 0;
    char *caption = void_astr_utf8(address);
    int match = caption && !strcmp(caption, expected);
    free(caption);
    return match;
}

static uint32_t crashday_race_player(void)
{
    uint32_t race = MEM32(0x87C79Cu);
    uint32_t players = race && void_vm_readable(race + 0x64, 4) ? MEM32(race + 0x64) : 0;
    uint32_t player = players && void_vm_readable(players + 4, 4) ? MEM32(players + 4) : 0;
    return player && void_vm_readable(player + 0x654, 20) ? player : 0;
}

static struct {
    uint32_t player, state, count;
    int drawing;
    float bounds[8][4];
} race_menu;

void crashday_race_menu_begin(uint32_t player)
{
    race_menu.player = player;
    race_menu.state = player && void_vm_readable(player + 0x654, 1) ? MEM8(player + 0x654) : 0;
    race_menu.count = 0;
    race_menu.drawing = race_menu.state != 0;
}

void crashday_race_menu_end(void) { race_menu.drawing = 0; }

void crashday_race_menu_button(void)
{
    if (!race_menu.drawing || race_menu.count >= 8 || !void_vm_readable(g_esp + 4, 8)) return;
    float x = g_xmm[2].f32[0], y = g_xmm[3].f32[0], w = MEMF(g_esp + 4), h = MEMF(g_esp + 8);
    if (!isfinite(x) || !isfinite(y) || !isfinite(w) || !isfinite(h) || w <= 0 || h <= 0) return;
    float *b = race_menu.bounds[race_menu.count++];
    b[0] = x - w / 2; b[1] = y - h / 2; b[2] = w; b[3] = h;
}

static int crashday_race_menu_select(float x, float y)
{
    if (!isfinite(x) || !isfinite(y) || x < 0 || x > 1 || y < 0 || y > 1) return 0;
    uint32_t player = crashday_race_player(), renderer = MEM32(0x870260u);
    if (!player || player != race_menu.player || !race_menu.state || MEM8(player + 0x654) != race_menu.state ||
        !renderer || !void_vm_readable(renderer + 0xE4, 4)) return 0;
    x *= 640 * MEMF(renderer + 0xE4); y *= 480;
    int hit = -1;
    float nearest = 129;
    for (unsigned i = 0; i < race_menu.count; ++i) {
        const float *b = race_menu.bounds[i];
        float dx = fmaxf(0, fmaxf(b[0] - x, x - b[0] - b[2]));
        float dy = fmaxf(0, fmaxf(b[1] - y, y - b[1] - b[3]));
        float distance = dx * dx + dy * dy;
        if (dx <= 8 && dy <= 8 && distance < nearest) {
            hit = (int)i; nearest = distance;
        }
    }
    if (hit < 0 && race_menu.state == 3) hit = 0; /* A blank-area tap continues the original finish menu. */
    if (hit < 0 || !void_vm_writable(player + 0x658, 4)) return 0;
    /* HUD menus have no mouse handler: select the nearest drawn row, then use ordinary Enter. */
    MEM32(player + 0x658) = (uint32_t)hit;
    return 1;
}

JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeRaceMenuSelect(JNIEnv *env, jclass type, jfloat x, jfloat y)
{
    (void)env; (void)type;
    if (!game_started) return JNI_FALSE;
    void_machine_enter();
    int hit = crashday_race_menu_select(x, y);
    void_machine_leave();
    return hit ? JNI_TRUE : JNI_FALSE;
}

static uint32_t crashday_race_car(void)
{
    /* The race HUD uses 0040A630's player collection; 87CBB4 is CDUser. */
    uint32_t players = MEM32(0x868DB8u);
    uint32_t first = players && void_vm_readable(players, 8) ? MEM32(players) : 0;
    uint32_t end = players && void_vm_readable(players, 8) ? MEM32(players + 4) : 0;
    uint32_t player = first && end > first && void_vm_readable(first, 4) ? MEM32(first) : 0;
    return player && void_vm_readable(player + 0xCAB0, 4) ? MEM32(player + 0xCAB0) : 0;
}

static int crashday_race_weapons(void)
{
    uint32_t car = crashday_race_car();
    if (!car || !void_vm_readable(car + 0x6ACC, 1) || !void_vm_readable(car + 0x7154, 4)) return 0;
    /* Original HUD 005B09B5/005B0C63 tests the secondary weapon and minigun independently. */
    return (MEM8(car + 0x6ACC) ? 0x0100 : 0) | (MEM32(car + 0x7154) ? 0x0200 : 0);
}

static int crashday_racing_scene(void)
{
    uint32_t session = MEM32(0x8692E8u);
    if (session && void_vm_readable(session + 0xB0, 1) && MEM8(session + 0xB0) == 4) return 18;
    /* Original 0047A9D0: first local player's vehicle health determines wrecked state. */
    uint32_t car = crashday_race_car();
    if (car && void_vm_readable(car + 0x7198, 4) && MEMF(car + 0x7198) <= 0) return 17;
    return 9;
}

static int crashday_hud_hit(float x, float y)
{
    uint32_t renderer = MEM32(0x870260u);
    if (!isfinite(x) || !isfinite(y) || x < 0 || x > 1 || y < 0 || y > 1 ||
        !renderer || !void_vm_readable(renderer + 0xE4, 4) || !crashday_race_car() || crashday_racing_scene() != 9) return 0;
    float right = 640 * MEMF(renderer + 0xE4), px = x * right, py = y * 480;
    if (px >= right - 175 && px <= right - 15 && py >= crashday_hud_y(329, 250) && py <= crashday_hud_y(470, 250)) return 1;
    uint32_t hud = crashday_race_player();
    uint32_t settings = hud && void_vm_readable(hud + 0x14, 4) ? MEM32(hud + 0x14) : 0;
    if (settings && void_vm_readable(settings + 5, 1) && MEM8(settings + 5) &&
        px >= 13 && px <= 163 && py >= crashday_hud_y(323, 230) && py <= crashday_hud_y(463, 230)) return 2;
    return 0;
}

JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeHudHit(JNIEnv *env, jclass type, jfloat x, jfloat y)
{
    (void)env; (void)type;
    if (!game_started) return 0;
    void_machine_enter();
    int hit = crashday_hud_hit(x, y);
    void_machine_leave();
    return hit;
}

static uint32_t crashday_editor_view(void)
{
    uint32_t editor = MEM32(0x86942Cu), widgets = crashday_ui_container();
    if (!editor || !widgets || MEM8(0x869C1Au) || !void_vm_readable(editor + 0x14, 4)) return 0;
    unsigned count = (uint16_t)MEM16(widgets + 0x30);
    for (unsigned i = 0; i < count; ++i) {
        uint32_t w = MEM32(MEM32(widgets + 0x34) + i * 4);
        if (crashday_widget_name(w, "picClickArea") && void_vm_readable(w, 0x88) && MEM8(w + 0x75)) {
            uint32_t view = MEM32(editor + 0x14);
            return view && void_vm_readable(view, 0x5C) ? view : 0;
        }
    }
    return 0;
}

static uint32_t crashday_replay_hud(void)
{
    uint32_t session = MEM32(0x8692E8u), race = MEM32(0x87C79Cu);
    if (!session || !void_vm_readable(session + 0x1C, 1) || !MEM8(session + 0x1C) ||
        !race || !void_vm_readable(race + 0x64, 4) || MEM8(race + 0x55)) return 0;
    uint32_t players = MEM32(race + 0x64);
    if (!players || !void_vm_readable(players, 8)) return 0;
    uint32_t owner = MEM32(players + 4);
    if (!owner || !void_vm_readable(owner + 0xC, 4)) return 0;
    uint32_t hud = MEM32(owner + 0xC);
    /* The controller type changes with the camera; the replay HUD retains its own class. */
    return hud && void_vm_readable(hud, 0x2D4) && MEM32(hud) == 0x007F43F0u && MEM8(hud + 0x298) < 9 ? hud : 0;
}

static int crashday_replay_state(void)
{
    uint32_t hud = crashday_replay_hud();
    if (!hud) return 0;
    /* The mouse menu times out after one second; touch selection waits for confirmation. */
    if (MEM8(hud + 0x299) && void_vm_writable(hud, 0x2A8)) {
        MEM8(hud + 4) = 1; MEMF(hud + 8) = 4; MEMF(hud + 0x2A4) = 1;
    }
    unsigned state = 0;
    for (unsigned i = 0; i < 9; ++i) if (MEM8(hud + 0x10 + i * 0x48)) state |= 1u << i;
    state |= (MEM8(hud + 0x299) != 0) << 16;
    state |= (unsigned)MEM8(hud + 0x298) << 20;
    uint32_t players = MEM32(MEM32(0x87C79Cu) + 0x64);
    if (void_vm_readable(players + 0xC, 4)) {
        uint32_t controller = MEM32(players + 0xC);
        if (controller && void_vm_readable(controller + 0xC, 4)) {
            if (MEM32(controller + 0xC) == 17) state |= 14u << 24;
        }
    }
    return (int)state;
}

static int crashday_replay_select(unsigned item)
{
    uint32_t hud = crashday_replay_hud();
    if (hud && item == 9 && void_vm_writable(hud, 0x2D4)) {
        MEM8(hud + 0x299) = 0;
        return 0;
    }
    if (!hud || item >= 9 || !MEM8(hud + 0x10 + item * 0x48) || !void_vm_writable(hud, 0x2D4)) return 0;
    /* Popup choices are applied by the original replay update; other commands need Enter. */
    int popup = item >= 4 && item <= 7;
    MEM8(hud + 0x299) = (uint8_t)popup;
    if (popup) { MEMF(hud + 0x2A0) = 0; MEMF(hud + 0x2A4) = 1; }
    MEM8(hud + 0x298) = (uint8_t)item;
    MEM8(hud + 4) = 1;
    MEMF(hud + 8) = 4.0f;
    MEMF(hud + 0xC) = 0;
    return !popup;
}

static int crashday_replay_point(float x, float y)
{
    uint32_t hud = crashday_replay_hud(), renderer = MEM32(0x870260u);
    if (!hud || !renderer || !void_vm_readable(renderer + 0xE4, 4) ||
        !isfinite(x) || !isfinite(y) || x < 0 || x > 1 || y < 0 || y > 1 || !void_vm_writable(hud, 0x2D4)) return 0;
    if (!MEM8(hud + 4)) { MEM8(hud + 4) = 1; MEMF(hud + 8) = 4; MEMF(hud + 0xC) = 0; return 0; }
    float px = x * 640 * MEMF(renderer + 0xE4), py = y * 480;
    if (MEM8(hud + 0x299)) {
        uint32_t slot = hud + MEM8(hud + 0x298) * 0x48;
        uint32_t first = MEM32(slot + 0x3C), end = MEM32(slot + 0x40);
        if (!first || end < first || end - first > 24 * 256 || (end - first) % 24) return 0;
        unsigned count = (end - first) / 24;
        if (fabsf(px - MEMF(slot + 0x4C)) > MEMF(slot + 0x50) * .5f + 12) return 0;
        for (unsigned i = 0; i < count; ++i) if (fabsf(py - (397 - 15 * (float)(count - 1 - i))) <= 8) {
            /* Original Down sets ChangedValue and applies the selected camera/speed/player. */
            MEM16(slot + 0x48) = (uint16_t)((i + count - 1) % count);
            return 40;
        }
        return 0;
    }
    if (py < 410 || py > 466) return 0;
    int nearest = -1;
    float distance = 25;
    for (unsigned i = 0; i < 9; ++i) if (MEM8(hud + 0x10 + i * 0x48)) {
        float dx = fabsf(px - MEMF(hud + 0x4C + i * 0x48));
        if (dx < distance) { distance = dx; nearest = (int)i; }
    }
    return nearest >= 0 && crashday_replay_select((unsigned)nearest) ? 13 : 0;
}

static int crashday_editor_transform(float dx, float dy, float scale, float x, float y)
{
    if (!isfinite(dx) || !isfinite(dy) || !isfinite(scale) || !isfinite(x) || !isfinite(y) ||
        fabsf(dx) > 2 || fabsf(dy) > 2 || scale < .25f || scale > 4 || x < 0 || x > 1 || y < 0 || y > 1) return 0;
    uint32_t view = crashday_editor_view(), renderer = MEM32(0x870260u);
    if (!view || !void_vm_writable(view, 0x48) || !renderer || !void_vm_readable(renderer + 0xE4, 4)) return 0;
    float width = 640 * MEMF(renderer + 0xE4), zoom = MEMF(view + 0x3C);
    float minimum = MEMF(view + 0x40), maximum = MEMF(view + 0x44);
    if (!isfinite(width) || width <= 0 || !isfinite(zoom) || zoom <= 0 ||
        !isfinite(minimum) || !isfinite(maximum) || minimum <= 0 || maximum < minimum || maximum > 1000 ||
        !isfinite(MEMF(view + 0x24)) || !isfinite(MEMF(view + 0x2C)) ||
        !isfinite(MEMF(view + 0x10)) || !isfinite(MEMF(view + 0x14))) return 0;
    float next = fmaxf(minimum, fminf(maximum, zoom * scale));
    float px = x * width - MEMF(view + 0x10), py = y * 480 - MEMF(view + 0x14);
    float cx = MEMF(view + 0x24) + px / zoom - px / next - dx * width / next;
    float cz = MEMF(view + 0x2C) - py / zoom + py / next + dy * 480 / next;
    /* 004D1A80 applies the original map bounds on the next editor update. */
    MEMF(view + 0x24) = MEMF(view + 0x30) = cx;
    MEMF(view + 0x2C) = MEMF(view + 0x38) = cz;
    MEMF(view + 0x3C) = next;
    return 1;
}

static int crashday_ui_scene(uint32_t *out)
{
    if (cinematic_playing) return 16;
    uint32_t ui = MEM32(0x869418u);
    if (ui && void_vm_readable(ui, 4) && MEM32(ui) == 0x005221F0u && MEM8(0x8698E0u) == 5) return 15;
    uint32_t widgets = crashday_ui_container();
    if (out) *out = widgets;
    if (crashday_editor_view()) return 19;
    if (crashday_replay_hud()) return 20;
    if (!widgets) return MEM32(0x87C79Cu) ? crashday_racing_scene() : -1;
    uint32_t count = (uint16_t)MEM16(widgets + 0x30);
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t widget = MEM32(MEM32(widgets + 0x34) + i * 4);
        if (crashday_widget_name(widget, "btnContinueRace")) {
            uint32_t session = MEM32(0x8692E8u), renderer = MEM32(0x870260u);
            if (session && void_vm_readable(session + 0xB0, 1) && MEM8(session + 0xB0) == 1) return 14;
            uint32_t player = crashday_race_player();
            /* The race HUD owns pause/dialog state; these CUI buttons stay offscreen. */
            if (player && MEM8(player + 0x654)) return 7;
            float width = renderer && void_vm_readable(renderer + 0xE4, 4) ? 640 * MEMF(renderer + 0xE4) : 640;
            return void_vm_readable(widget, 0xB8) && MEM8(widget + 0x75) &&
                ((MEMF(widget + 0x78) >= 0 && MEMF(widget + 0x78) < width) ||
                 (MEMF(widget + 0xA8) >= 0 && MEMF(widget + 0xA8) < width)) ? 7 : crashday_racing_scene();
        }
        if (crashday_widget_name(widget, "lblGameObjective")) {
            return MEM8(0x855096u) == 0x66 ? 14 : 13;
        }
        if (crashday_widget_name(widget, "btnRestoreQuickChatDefaults")) return 12;
        if (crashday_widget_name(widget, "btnSingleplayerQuickRace")) return 0;
        if (crashday_widget_name(widget, "btnQuitOptions")) return 5;
    }
    return 8;
}

int crashday_ui_scene_current(void) { return crashday_ui_scene(NULL); }

JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeRaceWeapons(JNIEnv *env, jclass type)
{
    (void)env; (void)type;
    if (!game_started) return 0;
    void_machine_enter();
    int available = crashday_race_weapons();
    void_machine_leave();
    return available;
}

JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeReplayState(JNIEnv *env, jclass type)
{
    (void)env; (void)type;
    if (!game_started) return 0;
    void_machine_enter();
    int state = crashday_replay_state();
    void_machine_leave();
    return state;
}

JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeReplaySelect(JNIEnv *env, jclass type, jint item)
{
    (void)env; (void)type;
    if (!game_started) return JNI_FALSE;
    void_machine_enter();
    int selected = crashday_replay_select((unsigned)item);
    void_machine_leave();
    return selected ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeReplayPoint(JNIEnv *env, jclass type, jfloat x, jfloat y)
{
    (void)env; (void)type;
    if (!game_started) return 0;
    void_machine_enter();
    int selected = crashday_replay_point(x, y);
    void_machine_leave();
    return selected;
}

JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeEditorTransform(JNIEnv *env, jclass type,
    jfloat dx, jfloat dy, jfloat scale, jfloat x, jfloat y)
{
    (void)env; (void)type;
    if (!game_started) return JNI_FALSE;
    void_machine_enter();
    int changed = crashday_editor_transform(dx, dy, scale, x, y);
    void_machine_leave();
    return changed ? JNI_TRUE : JNI_FALSE;
}

static uint32_t gesture_widget, gesture_container, gesture_callback;
static struct { uint32_t widget, container, callback, selection; } scrolled_list;

int crashday_ui_list_detached(uint32_t widget)
{
    uint32_t ui = MEM32(0x869418u);
    return widget == scrolled_list.widget && ui && crashday_ui_container() == scrolled_list.container &&
        MEM32(ui) == scrolled_list.callback && void_vm_readable(widget, 0x220) &&
        MEM32(widget + 0x208) == scrolled_list.selection;
}

static int crashday_ui_list_scroll(int steps)
{
    uint32_t w = gesture_widget, ui = MEM32(0x869418u);
    if (!w || !ui || crashday_ui_container() != gesture_container || MEM32(ui) != gesture_callback ||
        !void_vm_writable(w, 0x220) || !crashday_widget_text(w) ||
        strncmp(crashday_widget_text(w), "lst", 3) || !MEM8(w + 0x74) || !MEM8(w + 0x75)) return 0;
    int count = (int)MEM32(w + 0x1F4), visible = (int)MEM32(w + 0x21C), first = (int)MEM32(w + 0x218);
    if (count < 0 || count > 100000 || visible <= 0 || visible > 100000 || first < 0 || first > count) return 0;
    int maximum = count > visible ? count - visible : 0;
    first -= steps;
    if (first < 0) first = 0;
    if (first > maximum) first = maximum;
    /* 004A07E0 draws from FirstVisible (+218); SelectedEntry (+208) stays untouched. */
    MEM32(w + 0x218) = (uint32_t)first;
    scrolled_list.widget = w; scrolled_list.container = gesture_container;
    scrolled_list.callback = gesture_callback; scrolled_list.selection = MEM32(w + 0x208);
    return 1;
}

static void crashday_ui_snap_pointer(float *x, float *y)
{
    uint32_t widgets = crashday_ui_container(), renderer = MEM32(0x870260u);
    if (!widgets || !renderer || !void_vm_readable(renderer + 0xE4, 4)) return;
    float width = 640 * MEMF(renderer + 0xE4);
    if (!isfinite(width) || width < 640) return;
    float px = *x * width, py = *y * 480, best = 201, tx = px, ty = py;
    uint32_t view = crashday_editor_view();
    if (view && px >= MEMF(view) && px < MEMF(view + 8) && py >= MEMF(view + 4) && py < MEMF(view + 12)) return;
    uint32_t result_continue = 0;
    unsigned count = (uint16_t)MEM16(widgets + 0x30);
    for (unsigned i = 0; i < count; ++i) {
        uint32_t w = MEM32(MEM32(widgets + 0x34) + i * 4);
        const char *name = crashday_widget_text(w);
        if (!name || (strncmp(name, "btn", 3) && strncmp(name, "chk", 3) && strncmp(name, "swt", 3)) ||
            !void_vm_readable(w, 0x88) || !MEM8(w + 0x74) || !MEM8(w + 0x75)) continue;
        float left = MEMF(w + 0x78), top = MEMF(w + 0x7C), rw = MEMF(w + 0x80), rh = MEMF(w + 0x84);
        if (!isfinite(left) || !isfinite(top) || !isfinite(rw) || !isfinite(rh) || rw < 2 || rh < 2 ||
            left < 0 || top < 0 || left + rw > width || top + rh > 480) continue;
        if (!strcmp(name, "btnContinueFromHighscore") || !strcmp(name, "btnContinueFromStats")) result_continue = w;
        float cx = fmaxf(left, fminf(left + rw, px)), cy = fmaxf(top, fminf(top + rh, py));
        float dx = cx - px, dy = cy - py, distance = dx * dx + dy * dy;
        if (fabsf(dx) <= 10 && fabsf(dy) <= 10 && distance < best) {
            best = distance;
            tx = fmaxf(left + 1, fminf(left + rw - 1, px));
            ty = fmaxf(top + 1, fminf(top + rh - 1, py));
        }
    }
    if (best == 201 && result_continue) {
        tx = MEMF(result_continue + 0x78) + MEMF(result_continue + 0x80) * .5f;
        ty = MEMF(result_continue + 0x7C) + MEMF(result_continue + 0x84) * .5f;
    }
    *x = tx / width; *y = ty / 480;
}

JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeMenuControl(JNIEnv *env, jclass type, jfloat x, jfloat y)
{
    (void)env; (void)type;
    if (!game_started || !isfinite(x) || !isfinite(y) || x < 0 || x > 1 || y < 0 || y > 1) return 0;
    void_machine_enter();
    gesture_widget = 0;
    crashday_ui_snap_pointer(&x, &y);
    uint32_t widgets = crashday_ui_container(), ui = MEM32(0x869418u), renderer = MEM32(0x870260u);
    int kind = 0;
    if (widgets && renderer && void_vm_readable(renderer + 0xE4, 4)) {
        float px = x * 640 * MEMF(renderer + 0xE4), py = y * 480;
        if (menu_debug) void_log("[ui] touch %.1f %.1f scene=%d cursor=%u,%u mode=%08X warp=%u focus=%08X/%08X page=%08X/%08X",
            px, py, crashday_ui_scene(NULL), MEM32(MEM32(0x870268u)+0x18), MEM32(MEM32(0x870268u)+0x1C),
            MEM32(0x926A2Cu), MEM32(0x926A30u), MEM32(0x926A0Cu), MEM32(0x925FD0u), MEM32(ui+0x54), MEM32(ui+0x58));
        unsigned count = (uint16_t)MEM16(widgets + 0x30);
        for (unsigned i = 0; i < count; ++i) {
            uint32_t w = MEM32(MEM32(widgets + 0x34) + i * 4);
            const char *name = crashday_widget_text(w);
            if (menu_debug && name && crashday_widget_name(w, "btnContinueRace"))
                void_log("[ui] pause tap %.1f %.1f control %.1f %.1f caption %.1f %.1f cursor %u %u relative=%u", px, py,
                    MEMF(w+0x78), MEMF(w+0x7C), MEMF(w+0xA8), MEMF(w+0xAC),
                    MEM32(MEM32(0x870268u)+0x18), MEM32(MEM32(0x870268u)+0x1C), MEM32(0x926A30u));
            if (!name || !void_vm_readable(w, 0x88) || !MEM8(w + 0x74) || !MEM8(w + 0x75) ||
                py < MEMF(w + 0x7C) || py >= MEMF(w + 0x7C) + MEMF(w + 0x84)) continue;
            int candidate = !strncmp(name, "sld", 3) ? 1 : !strncmp(name, "swt", 3) ? 2 : !strncmp(name, "lst", 3) ? 3 : 0;
            if (!candidate || (candidate != 2 && (px < MEMF(w + 0x78) || px >= MEMF(w + 0x78) + MEMF(w + 0x80)))) continue;
            gesture_widget = w; gesture_container = widgets; gesture_callback = MEM32(ui); kind = candidate;
            break;
        }
        uint32_t view = crashday_editor_view();
        if (view) {
            if (px >= MEMF(view) && px < MEMF(view + 8) && py >= MEMF(view + 4) && py < MEMF(view + 12)) kind = 4;
            else if (px < MEMF(view) && py >= 140 && py < 425) kind = 5;
        }
    }
    void_machine_leave();
    return kind;
}

JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeMenuOption(JNIEnv *env, jclass type, jint direction)
{
    (void)env; (void)type;
    if (!game_started || (direction != -1 && direction != 1)) return JNI_FALSE;
    void_machine_enter();
    uint32_t w = gesture_widget, ui = MEM32(0x869418u), widgets = crashday_ui_container(), renderer = MEM32(0x870260u);
    const char *name = crashday_widget_text(w);
    int ok = widgets && widgets == gesture_container && ui && MEM32(ui) == gesture_callback && name && !strncmp(name, "swt", 3) &&
        void_vm_readable(w, 0x88) && MEM8(w + 0x74) && MEM8(w + 0x75) && renderer && void_vm_readable(renderer + 0xE4, 4);
    if (ok) {
        int width, height; void_input_screen_size(&width, &height);
        float aspect = MEMF(renderer + 0xE4);
        float x = MEMF(w + 0x78) + MEMF(w + 0x80) * (direction > 0 ? .94f : .06f);
        float y = MEMF(w + 0x7C) + MEMF(w + 0x84) * .5f;
        ok = isfinite(x) && isfinite(y) && isfinite(aspect) && aspect >= 1;
        if (ok) {
            void_input_mouse_warp((int)(x * width / (640 * aspect)), (int)(y * height / 480));
            void_input_mouse_button(0, 1); void_input_mouse_button(0, 0);
        }
    }
    void_machine_leave();
    return ok ? JNI_TRUE : JNI_FALSE;
}

static int menu_scale = 100, menu_scroll_steps, menu_scrollable;
static struct {
    uint32_t ui, container, list, callback, count;
    int applied_scale;
    float scroll, maximum, top, bottom;
    struct { uint32_t widget; float bounds[4], caption[4]; uint8_t visible; } rows[256];
} menu_layout;

static _Thread_local float menu_draw_scale = 1;

void crashday_ui_draw_begin(uint32_t widget)
{
    menu_draw_scale = 1;
    for (unsigned i = 0; i < menu_layout.count; ++i) {
        const float *b = menu_layout.rows[i].bounds;
        if (menu_layout.rows[i].widget == widget && b[1] >= 100 && b[3] > 0 && b[3] <= 45) {
            menu_draw_scale = __atomic_load_n(&menu_scale, __ATOMIC_ACQUIRE) / 100.0f;
            break;
        }
    }
}

void crashday_ui_draw_end(void) { menu_draw_scale = 1; }

float crashday_ui_text_begin(unsigned kind)
{
    float scale = menu_draw_scale;
    menu_draw_scale = 1;
    if (scale == 1 || !void_vm_writable(g_esp, 24)) return scale;
    uint32_t font = MEM32(g_esp + (kind == 1 ? 4 : 8)) & 255u;
    uint32_t renderer = MEM32(0x870260u), metric = renderer + font * 0x1434u + 0x1AC0u;
    if (!renderer || font > 7 || !void_vm_readable(metric, 4)) return scale;
    float height = kind == 2 ? g_xmm[3].f32[0] : MEMF(g_esp + (kind == 0 ? 12 : 20));
    if (height == 0) height = MEMF(metric);
    if (isfinite(height) && height > 0 && height <= 256) {
        if (kind == 2) g_xmm[3].f32[0] = height * scale;
        else MEMF(g_esp + (kind == 0 ? 12 : 20)) = height * scale;
    }
    return scale;
}

void crashday_ui_text_end(float scale) { menu_draw_scale = scale; }

void crashday_ui_prepare(void)
{
    uint32_t widgets = crashday_ui_container(), ui = MEM32(0x869418u);
    int scene = crashday_ui_scene(NULL);
    float factor = __atomic_load_n(&menu_scale, __ATOMIC_ACQUIRE) / 100.0f;
    if (!widgets || scene == 7 || scene == 9 || scene == 13 || scene == 14) {
        menu_layout.count = 0;
        __atomic_store_n(&menu_scrollable, 0, __ATOMIC_RELEASE);
        return;
    }
    uint32_t count = (uint16_t)MEM16(widgets + 0x30), list = MEM32(widgets + 0x34);
    if (count > 256) return;
    if (menu_layout.ui != ui || menu_layout.container != widgets || menu_layout.list != list ||
        menu_layout.callback != MEM32(ui) || menu_layout.count != count) {
        memset(&menu_layout, 0, sizeof menu_layout);
        menu_layout.ui = ui; menu_layout.container = widgets; menu_layout.list = list;
        menu_layout.callback = MEM32(ui); menu_layout.count = count;
        __atomic_store_n(&menu_scroll_steps, 0, __ATOMIC_RELEASE);
        for (unsigned i = 0; i < count; ++i) {
            uint32_t w = MEM32(list + i * 4);
            if (!void_vm_readable(w, 0xB8)) continue;
            menu_layout.rows[i].widget = w;
            memcpy(menu_layout.rows[i].bounds, GPTR(w + 0x78), 16);
            memcpy(menu_layout.rows[i].caption, GPTR(w + 0xA8), 16);
            menu_layout.rows[i].visible = MEM8(w + 0x75);
        }
    }
    uint32_t renderer = MEM32(0x870260u);
    float width = renderer && void_vm_readable(renderer + 0xE4, 4) ? 640 * MEMF(renderer + 0xE4) : 640;
    if (!isfinite(width) || width < 640) width = 640;
    menu_layout.maximum = 0;
    menu_layout.top = 100;
    menu_layout.bottom = 420;
    float inset = void_vm_readable(0x85502Cu, 4) ? MEMF(0x85502Cu) * .5f : 0;
    if (!isfinite(inset) || inset < 0 || inset > 64) inset = 0;
    for (unsigned i = 0; i < count; ++i) {
        const float *b = menu_layout.rows[i].bounds;
        const char *name = crashday_widget_text(menu_layout.rows[i].widget);
        if (name && !strncmp(name, "frm", 3) && b[1] >= 90 && b[3] >= 200 && b[3] <= 330) {
            /* 00484AF0 clips at half the border and fades the next 10 units. */
            menu_layout.top = fmaxf(menu_layout.top, b[1] + inset);
            menu_layout.bottom = fminf(menu_layout.bottom, b[1] + b[3] - inset - 10);
        }
    }
    for (unsigned i = 0; i < count; ++i) {
        const float *b = menu_layout.rows[i].bounds;
        if (menu_layout.rows[i].visible && b[1] >= 100 && b[3] > 0 && b[3] <= 45)
            menu_layout.maximum = fmaxf(menu_layout.maximum, 100 + (b[1] - 100 + b[3]) * factor - menu_layout.bottom);
        if (scene == 5 && crashday_widget_name(menu_layout.rows[i].widget, "btnCredits"))
            menu_layout.maximum = fmaxf(menu_layout.maximum, 100 + (b[1] - 100 + b[3] * 2.3f) * factor - menu_layout.bottom);
    }
    if (factor == 1 && menu_layout.maximum == 0) {
        if (menu_layout.applied_scale > 100) for (unsigned i = 0; i < count; ++i) {
            uint32_t w = menu_layout.rows[i].widget;
            if (!w || !void_vm_writable(w, 0xB8)) continue;
            memcpy(GPTR(w + 0x78), menu_layout.rows[i].bounds, 16);
            memcpy(GPTR(w + 0xA8), menu_layout.rows[i].caption, 16);
            MEM8(w + 0x75) = menu_layout.rows[i].visible;
        }
        menu_layout.applied_scale = 100;
        menu_layout.scroll = 0;
        __atomic_store_n(&menu_scrollable, 0, __ATOMIC_RELEASE);
        return;
    }
    int steps = __atomic_exchange_n(&menu_scroll_steps, 0, __ATOMIC_ACQ_REL);
    menu_layout.scroll = fmaxf(0, fminf(menu_layout.maximum, menu_layout.scroll - steps * 24));
    __atomic_store_n(&menu_scrollable, menu_layout.maximum > 0, __ATOMIC_RELEASE);
    for (unsigned i = 0; i < count; ++i) {
        uint32_t w = menu_layout.rows[i].widget;
        const float *b = menu_layout.rows[i].bounds;
        if (!w || !void_vm_writable(w, 0xB8) || !isfinite(b[0]) || !isfinite(b[1]) ||
            !isfinite(b[2]) || !isfinite(b[3])) continue;
        if (b[1] < 100 || b[3] <= 0 || b[3] > 45) continue;
        float rect[4] = {b[0], 100 + (b[1] - 100) * factor - menu_layout.scroll,
            fminf(b[2], width - 32), b[3] * factor};
        const char *name = crashday_widget_text(w);
        if (name && !strncmp(name, "btn", 3)) {
            rect[2] = fminf(b[2] * factor, width - 32);
            if (b[0] > width * .25f) rect[0] += (b[2] - rect[2]) / 2;
        }
        rect[0] = fmaxf(16, fminf(width - rect[2] - 16, rect[0]));
        memcpy(GPTR(w + 0x78), rect, 16);
        /* The caption rectangle can be in the left column of a right-column control. */
        const float *c = menu_layout.rows[i].caption;
        float caption[4] = {c[0] + rect[0] - b[0], 100 + (c[1] - 100) * factor - menu_layout.scroll,
            c[2] + rect[2] - b[2], c[3] * factor};
        memcpy(GPTR(w + 0xA8), caption, 16);
        MEM8(w + 0x75) = menu_layout.rows[i].visible && rect[1] >= menu_layout.top && rect[1] + rect[3] <= menu_layout.bottom;
    }
    menu_layout.applied_scale = (int)lroundf(factor * 100);
}

JNIEXPORT jfloatArray JNICALL Java_org_crashday_port_GameActivity_nativeSettingsEntry(JNIEnv *env, jclass type)
{
    (void)type;
    if (!game_started) return NULL;
    float bounds[4] = {.04f, .61f, .56f, .055f};
    void_machine_enter();
    uint32_t widgets = crashday_ui_container(), renderer = MEM32(0x870260u);
    if (widgets && renderer && void_vm_readable(renderer + 0xE4, 4)) {
        float width = 640 * MEMF(renderer + 0xE4);
        uint32_t count = (uint16_t)MEM16(widgets + 0x30);
        for (unsigned i = 0; i < count; ++i) {
            uint32_t w = MEM32(MEM32(widgets + 0x34) + i * 4);
            if (!crashday_widget_name(w, "btnCredits") || !void_vm_readable(w, 0x88) || !isfinite(width) || width < 640) continue;
            bounds[0] = (MEMF(w + 0x78) + MEMF(w + 0x84) * .35f) / width;
            bounds[1] = (MEMF(w + 0x7C) + MEMF(w + 0x84) * 1.3f) / 480;
            bounds[2] = fmaxf(.56f, MEMF(w + 0x80) / width);
            bounds[3] = MEMF(w + 0x84) / 480;
            break;
        }
    }
    void_machine_leave();
    jfloatArray result = (*env)->NewFloatArray(env, 4);
    if (result) (*env)->SetFloatArrayRegion(env, result, 0, 4, bounds);
    return result;
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeUiScale(JNIEnv *env, jclass type, jint percent)
{
    (void)env; (void)type;
    if (percent == 100 || percent == 125 || percent == 150) __atomic_store_n(&menu_scale, percent, __ATOMIC_RELEASE);
}

JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeMenuScroll(JNIEnv *env, jclass type, jint steps)
{
    (void)env; (void)type;
    if (!game_started || !steps || steps < -16 || steps > 16) return JNI_FALSE;
    void_machine_enter();
    int list = crashday_ui_list_scroll(steps);
    void_machine_leave();
    if (list) return JNI_TRUE;
    if (!__atomic_load_n(&menu_scrollable, __ATOMIC_ACQUIRE)) return JNI_FALSE;
    __atomic_add_fetch(&menu_scroll_steps, steps, __ATOMIC_RELEASE);
    return JNI_TRUE;
}

static uint32_t editor_request_epoch;

void crashday_text_editor_request(uint32_t epoch)
{
    __atomic_store_n(&editor_request_epoch, epoch, __ATOMIC_RELEASE);
}

void crashday_text_editor_at_cursor(void)
{
    uint32_t epoch = __atomic_load_n(&editor_request_epoch, __ATOMIC_ACQUIRE);
    if (!epoch) return;
    __atomic_store_n(&editor_request_epoch, 0, __ATOMIC_RELEASE);
    if (!game_started || void_audio_pause_state() & 1u) return;
    uint32_t widgets = 0;
    crashday_ui_scene(&widgets);
    uint32_t ui = widgets ? MEM32(0x869418u) : 0;
    float x = ui && void_vm_readable(ui + 0x26Cu, 8) ? MEMF(ui + 0x26Cu) : -1.0f;
    float y = ui && void_vm_readable(ui + 0x270u, 4) ? MEMF(ui + 0x270u) : -1.0f;
    if (!ui || !void_vm_readable(ui + 0x26Cu, 8) || !isfinite(x) || !isfinite(y)) return;
    uint32_t count = (uint16_t)MEM16(widgets + 0x30);
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t widget = MEM32(MEM32(widgets + 0x34) + i * 4);
        if (!void_vm_readable(widget, 0x88) || MEM32(widget) != 0x007E5EF0u ||
            !MEM8(widget + 0x74) || !MEM8(widget + 0x75) || MEM8(widget + 0x76)) continue;
        float left = MEMF(widget + 0x78), top = MEMF(widget + 0x7C);
        float right = left + MEMF(widget + 0x80), bottom = top + MEMF(widget + 0x84);
        if (!isfinite(left) || !isfinite(top) || !isfinite(right) || !isfinite(bottom) ||
            x < left || x >= right || y < top || y >= bottom || !void_dispatch_find(0x0049DE40u)) continue;
        uint32_t kind = 3;
        g_ecx = widget;
        g_edx = 0;
        void_call_guest(0x0049DE40u, 1, &kind, 1);
        return;
    }
}

JNIEXPORT jint JNICALL Java_org_crashday_port_GameActivity_nativeUiScene(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    if (!game_started) return -1;
    void_machine_enter();
    int scene = crashday_ui_scene(NULL);
    static int previous_scene = -99;
    static uint64_t loading_started;
    if (scene != previous_scene) {
        if (scene == 13) loading_started = void_perf_now_ns();
        if (scene == 14 && loading_started) {
            void_log("[loading] race ready after %.3f seconds", (double)(void_perf_now_ns() - loading_started) / 1e9);
            loading_started = 0;
        }
        if (scene == 0 || scene == 5) loading_started = 0;
        if (menu_debug) {
            char cwd[1024]; void_cwd_get(cwd, sizeof cwd);
            void_log("[ui] scene=%d cwd=%s", scene, cwd);
        }
        previous_scene = scene;
    }
    static uint32_t logged_ui;
    uint32_t ui = MEM32(0x869418u), widgets = crashday_ui_container();
    uint32_t page = widgets ? MEM32(widgets + 0x34) ^ MEM32(ui) : 0;
    if (menu_debug && page != logged_ui && widgets) {
        logged_ui = page;
        void_log("[ui] page %08X scene=%d progress=%u relative=%u", ui, scene, MEM8(0x855096u), MEM32(0x926A30u));
        uint32_t count = (uint16_t)MEM16(widgets + 0x30);
        for (uint32_t i = 0; i < count; ++i) {
            uint32_t w = MEM32(MEM32(widgets + 0x34) + i * 4);
            if (!void_vm_readable(w, 0x1A4)) continue;
            uint32_t length = MEM32(w + 0x30), name = length < 16 ? w + 0x20 : MEM32(w + 0x20);
            if (length > 127 || !void_vm_readable(name, length + 1) || MEM8(name + length)) continue;
            void_log("[ui] %08X %08X %.1f %.1f %.1f %.1f %u/%u %s", w, MEM32(w),
                MEMF(w+0x78), MEMF(w+0x7C), MEMF(w+0x80), MEMF(w+0x84), MEM8(w+0x74), MEM8(w+0x75), (char *)GPTR(name));
        }
    }
    void_machine_leave();
    return scene;
}

JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeRaceCountdown(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    if (!game_started) return JNI_FALSE;
    void_machine_enter();
    uint32_t session = MEM32(0x8692E8u);
    int countdown = 0;
    if (session && void_vm_readable(session, 0xB8) && MEM8(session + 0xB0) != 4) {
        // Original countdown HUD at 0x005B03F2 uses the race clock's final three negative seconds.
        float clock = MEMF(session + 0xB4);
        countdown = isfinite(clock) && clock > -3.f && clock < 0.f;
    }
    void_machine_leave();
    return countdown ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT jlong JNICALL Java_org_crashday_port_GameActivity_nativeUiFrame(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    if (!game_started) return 0;
    void_machine_enter();
    extern uint32_t void_input_frame(void);
    jlong frame = void_input_frame();
    void_machine_leave();
    return frame;
}

JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativeTextEditorWanted(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    if (!game_started) return JNI_FALSE;
    void_machine_enter();
    uint32_t widgets = 0;
    crashday_ui_scene(&widgets);
    int wanted = 0;
    if (widgets) {
        uint32_t count = (uint16_t)MEM16(widgets + 0x30);
        for (uint32_t i = 0; i < count; ++i) {
            uint32_t widget = MEM32(MEM32(widgets + 0x34) + i * 4);
            if (!void_vm_readable(widget, 0x88)) continue;
            if (MEM32(widget) == 0x007E5EF0u && MEM8(widget + 0x74) && MEM8(widget + 0x75) && MEM8(widget + 0x76))
                wanted = 1;
        }
    }
    void_machine_leave();
    return wanted ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeTextEditorClose(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    if (!game_started || void_audio_pause_state() & 1u) return;
    void_machine_enter();
    uint32_t widgets = 0;
    crashday_ui_scene(&widgets);
    if (widgets) {
        uint32_t count = (uint16_t)MEM16(widgets + 0x30);
        for (uint32_t i = 0; i < count; ++i) {
            uint32_t widget = MEM32(MEM32(widgets + 0x34) + i * 4);
            if (!void_vm_readable(widget, 0x88) || MEM32(widget) != 0x007E5EF0u || !MEM8(widget + 0x76)) continue;
            uint32_t kind = 3;
            g_ecx = widget;
            g_edx = 0;
            void_call_guest(0x0049DE40u, 1, &kind, 1);
            break;
        }
    }
    void_machine_leave();
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeKey(JNIEnv *env, jclass type, jint vk, jboolean down)
{
    (void)env;
    (void)type;
    if (vk > 0 && vk < 256) void_input_key((uint32_t)vk, down);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeText(JNIEnv *env, jclass type, jstring text)
{
    (void)type;
    if (!text) return;
    jsize length = (*env)->GetStringLength(env, text);
    if (length < 0 || length > 256) return;
    uint16_t units[256];
    (*env)->GetStringRegion(env, text, 0, length, (jchar *)units);
    if ((*env)->ExceptionCheck(env)) return;
    for (jsize i = 0; i < length; ++i) void_post_message(void_window_main(), 0x0102u, units[i], 1);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeDelete(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    void_input_key(8, 1);
    void_input_key(8, 0);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeButton(JNIEnv *env, jclass type, jboolean down)
{
    (void)env;
    (void)type;
    void_input_mouse_button(0, down);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeRightButton(JNIEnv *env, jclass type, jboolean down)
{
    (void)env;
    (void)type;
    void_input_mouse_button(1, down);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeWheel(JNIEnv *env, jclass type, jint delta)
{
    (void)env;
    (void)type;
    if (delta) void_input_mouse_wheel(delta);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeCancelInput(JNIEnv *env, jclass type)
{
    (void)env;
    (void)type;
    void_input_cancel();
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeDrive(JNIEnv *env, jclass type,
    jfloat steer, jfloat throttle, jfloat brake)
{
    (void)env;
    (void)type;
    extern void void_input_drive(float, float, float);
    void_input_drive(steer, throttle, brake);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeDriving(JNIEnv *env, jclass type, jboolean active)
{
    (void)env;
    (void)type;
    extern void void_input_drive_active(int);
    void_input_drive_active(active);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeGamepad(JNIEnv *env, jclass type, jint mask, jboolean down)
{
    (void)env;
    (void)type;
    extern void void_input_pad_buttons(uint32_t, int);
    void_input_pad_buttons((uint32_t)mask, down);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeController(JNIEnv *env, jclass type,
    jint buttons, jfloat left_x, jfloat left_y, jfloat right_x, jfloat right_y,
    jfloat left_trigger, jfloat right_trigger)
{
    (void)env;
    (void)type;
    extern void void_input_controller(uint32_t, float, float, float, float, float, float);
    void_input_controller((uint32_t)buttons, left_x, left_y, right_x, right_y, left_trigger, right_trigger);
}

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeHorizon(JNIEnv *env, jclass type, jfloat degrees)
{
    (void)env;
    (void)type;
    extern void void_input_horizon_set(float);
    void_input_horizon_set(degrees);
}

int void_android_touch_only(void) { return touch_only; }

JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeTouchMode(JNIEnv *env, jclass type, jboolean touch)
{
    (void)env;
    (void)type;
    touch_only = touch != 0;
}

JNIEXPORT jboolean JNICALL Java_org_crashday_port_GameActivity_nativePointer(JNIEnv *env, jclass type,
    jfloat x, jfloat y, jboolean relative)
{
    (void)env;
    (void)type;
    if (!isfinite(x) || !isfinite(y) || fabsf(x) > 4 || fabsf(y) > 4) return JNI_FALSE;
    int w, h, sw, sh;
    void_input_screen_size(&w, &h);
    if (w <= 0 || h <= 0) return JNI_FALSE;
    if (relative) {
        float dx = x * w + pointer_remainder_x, dy = y * h + pointer_remainder_y;
        int ix = (int)dx, iy = (int)dy;
        pointer_remainder_x = dx - ix;
        pointer_remainder_y = dy - iy;
        void_input_mouse_move(ix, iy);
        return JNI_TRUE;
    }
    if (!void_android_display_size(&sw, &sh)) return JNI_FALSE;
    if (touch_only && game_started) {
        void_machine_enter();
        crashday_ui_snap_pointer(&x, &y);
        void_machine_leave();
    }
    float scale = fminf((float)sw / w, (float)sh / h);
    float px = (x * sw - (sw - w * scale) * 0.5f) / scale;
    float py = (y * sh - (sh - h * scale) * 0.5f) / scale;
    if (px < 0 || px >= w || py < 0 || py >= h) return JNI_FALSE;
    void_input_mouse_warp((int)px, (int)py);
    return JNI_TRUE;
}
#else
__attribute__((weak)) void void_android_request_refresh(uint32_t rate) { (void)rate; }
__attribute__((weak)) float crashday_hud_y(float y, float offset) { (void)offset; return y; }
__attribute__((weak)) float crashday_weapon_coord(unsigned weapon, unsigned axis, float value, float origin)
{ (void)weapon; (void)axis; (void)origin; return value; }
__attribute__((weak)) void crashday_cinematic_active(int active) { (void)active; }
__attribute__((weak)) int crash_test_requested;
__attribute__((weak)) void crashday_text_editor_at_cursor(void) {}
__attribute__((weak)) void crashday_race_menu_begin(uint32_t player) { (void)player; }
__attribute__((weak)) void crashday_race_menu_end(void) {}
__attribute__((weak)) void crashday_race_menu_button(void) {}
__attribute__((weak)) void crashday_ui_prepare(void) {}
__attribute__((weak)) int crashday_ui_list_detached(uint32_t widget) { (void)widget; return 0; }
__attribute__((weak)) int void_android_menu_overlay(void) { return 0; }
__attribute__((weak)) void crashday_ui_draw_begin(uint32_t widget) { (void)widget; }
__attribute__((weak)) void crashday_ui_draw_end(void) {}
__attribute__((weak)) float crashday_ui_text_begin(unsigned kind) { (void)kind; return 1; }
__attribute__((weak)) void crashday_ui_text_end(float scale) { (void)scale; }
#endif
