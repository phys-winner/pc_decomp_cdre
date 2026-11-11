#include "host.h"

#define MMSYSERR_NOERROR 0u
#define MMSYSERR_BADDEVICEID 2u
#define MMSYSERR_INVALHANDLE 5u
#define MMSYSERR_NOMEM 7u
#define MMSYSERR_NOTSUPPORTED 8u
#define MMSYSERR_INVALFLAG 10u
#define MMSYSERR_INVALPARAM 11u
#define MMSYSERR_HANDLEBUSY 12u
#define WAVERR_BADFORMAT 32u
#define WAVERR_STILLPLAYING 33u
#define WAVERR_UNPREPARED 34u
#define WHDR_DONE 1u
#define WHDR_PREPARED 2u
#define WHDR_BEGINLOOP 4u
#define WHDR_ENDLOOP 8u
#define WHDR_INQUEUE 16u
#define CALLBACK_WINDOW 0x10000u
#define CALLBACK_FUNCTION 0x30000u
#define CALLBACK_EVENT 0x50000u
#define WOM_OPEN 0x3BBu
#define WOM_CLOSE 0x3BCu
#define WOM_DONE 0x3BDu
#define WAVE_FORMAT_QUERY 9u
#define WAVE_MAPPER 0xFFFFFFFFu

void void_dsound_start_mixer(void);

typedef struct wave_header {
    uint32_t guest;
    double position;
    uint32_t loops;
    int queued;
    struct wave_header *next, *queue_next;
} wave_header;

typedef struct wave_device {
    uint32_t handle, callback, instance, open_flags;
    uint32_t channels, rate, bits, block;
    uint32_t volume_left, volume_right;
    uint64_t played_frames;
    int paused;
    wave_header *headers, *queue;
    struct wave_device *next;
} wave_device;

typedef struct {
    uint32_t handle, message, callback, instance, flags, header;
} wave_notification;

static pthread_mutex_t wave_lock = PTHREAD_MUTEX_INITIALIZER;
static wave_device *wave_devices;
static unsigned wave_header_total;
static int wave_in_selftest;

static wave_device *wave_device_get(uint32_t handle)
{
    void_object *object = void_handle_get(handle, VOID_OBJ_OTHER);
    wave_device *device = object ? (wave_device *)object->data : NULL;
    return device && device->handle == handle ? device : NULL;
}

static wave_notification wave_deferred[128];
static unsigned wave_deferred_count;
static pthread_cond_t wave_callback_ready = PTHREAD_COND_INITIALIZER;
static pthread_once_t wave_callback_once = PTHREAD_ONCE_INIT;
static int wave_callback_running;
static void wave_callback_start(void);

static void wave_notify(const wave_notification *notification)
{
    switch (notification->flags & 0x70000u) {
    case CALLBACK_FUNCTION:
        if (notification->message == WOM_DONE && !wave_in_selftest) {
            pthread_once(&wave_callback_once, wave_callback_start);
            pthread_mutex_lock(&wave_lock);
            int defer = wave_callback_running && wave_deferred_count < 128;
            if (defer) wave_deferred[wave_deferred_count++] = *notification;
            if (defer) pthread_cond_signal(&wave_callback_ready);
            pthread_mutex_unlock(&wave_lock);
            if (defer) break;
        }
        void_machine_enter();
        uint32_t args[5] = { notification->handle, notification->message, notification->instance, notification->header, 0 };
        void_call_guest(notification->callback, 5, args, 1);
        void_machine_leave();
        break;
    case CALLBACK_WINDOW:
        void_post_message(notification->callback, notification->message, notification->handle, notification->header);
        break;
    case CALLBACK_EVENT: {
        void_object *event = void_handle_get(notification->callback, VOID_OBJ_EVENT);
        if (event) void_object_signal(event);
        break;
    }
    default:
        break;
    }
}

static int wave_delivered(uint32_t handle, uint32_t header)
{
    wave_device *device = wave_device_get(handle);
    if (!device || (device->open_flags & 0x70000u) != CALLBACK_FUNCTION) return 0;
    uint32_t args[5] = { handle, WOM_DONE, device->instance, header, 0 };
    void_call_guest(device->callback, 5, args, 1);
    return 1;
}

static void *wave_callback_main(void *unused)
{
    (void)unused;
    pthread_setname_np(pthread_self(), "crashday-wave");
    for (;;) {
        wave_notification pending[128];
        pthread_mutex_lock(&wave_lock);
        while (!wave_deferred_count) pthread_cond_wait(&wave_callback_ready, &wave_lock);
        unsigned count = wave_deferred_count;
        memcpy(pending, wave_deferred, sizeof(wave_notification) * count);
        wave_deferred_count = 0;
        pthread_mutex_unlock(&wave_lock);
        void_machine_enter();
        for (unsigned i = 0; i < count; ++i) (void)wave_delivered(pending[i].handle, pending[i].header);
        void_machine_leave();
    }
    return NULL;
}

static void wave_callback_start(void)
{
    pthread_t thread;
    int error = pthread_create(&thread, NULL, wave_callback_main, NULL);
    if (error) void_log("[audio] wave callback thread failed: %s", strerror(error));
    else { pthread_detach(thread); wave_callback_running = 1; }
}

static void wave_notification_for(wave_notification *notification, const wave_device *device, uint32_t message, uint32_t header)
{
    notification->handle = device->handle;
    notification->message = message;
    notification->callback = device->callback;
    notification->instance = device->instance;
    notification->flags = device->open_flags;
    notification->header = header;
}

static int wave_format(uint32_t address, wave_device *device)
{
    if (!void_vm_readable(address, 18)) return 0;
    uint32_t tag = MEM16(address), channels = MEM16(address + 2), rate = MEM32(address + 4);
    uint32_t bits = MEM16(address + 14), block = MEM16(address + 12);
    if (tag == 0xFFFEu) {
        if (MEM16(address + 16) < 22 || !void_vm_readable(address, 40) || MEM32(address + 24) != 1) return 0;
        tag = 1;
    }
    if (tag != 1 || (channels != 1 && channels != 2) || (bits != 8 && bits != 16) ||
        !rate || rate > 192000 || block != channels * (bits / 8)) return 0;
    device->channels = channels;
    device->rate = rate;
    device->bits = bits;
    device->block = block;
    return 1;
}

WINAPI_EXPORT("winmm.dll", waveOutGetNumDevs, 0) { return 1; }

WINAPI_EXPORT("winmm.dll", waveOutGetDevCapsW, 3)
{
    if ((ARG(0) && ARG(0) != WAVE_MAPPER) || !ARG(1) || ARG(2) < 84 || !void_vm_writable(ARG(1), 84))
        return ARG(0) && ARG(0) != WAVE_MAPPER ? MMSYSERR_BADDEVICEID : MMSYSERR_INVALPARAM;
    memset(GPTR(ARG(1)), 0, 84);
    MEM16(ARG(1)) = 1;
    MEM16(ARG(1) + 2) = 1;
    MEM32(ARG(1) + 4) = 0x100;
    void_utf8_to_gw("Android waveOut", ARG(1) + 8, 32);
    MEM32(ARG(1) + 72) = 0xFFFF;
    MEM16(ARG(1) + 76) = 2;
    MEM32(ARG(1) + 80) = 3;
    return MMSYSERR_NOERROR;
}

WINAPI_EXPORT("winmm.dll", waveOutGetErrorTextW, 3)
{
    void_utf8_to_gw("Android waveOut error", ARG(1), ARG(2));
    return MMSYSERR_NOERROR;
}
WINAPI_EXPORT("winmm.dll", waveOutGetErrorTextA, 3)
{
    void_utf8_to_ga("Android waveOut error", ARG(1), ARG(2));
    return MMSYSERR_NOERROR;
}

WINAPI_EXPORT("winmm.dll", waveOutOpen, 6)
{
    if (!ARG(2) || !wave_format(ARG(2), &(wave_device){0})) return WAVERR_BADFORMAT;
    if (ARG(5) & WAVE_FORMAT_QUERY) return MMSYSERR_NOERROR;
    if (!ARG(0) || !void_vm_writable(ARG(0), 4)) return MMSYSERR_INVALPARAM;
    MEM32(ARG(0)) = 0;
    if (ARG(1) && ARG(1) != WAVE_MAPPER) return MMSYSERR_BADDEVICEID;
    uint32_t kind = ARG(5) & 0x70000u;
    if (kind != 0 && kind != CALLBACK_WINDOW && kind != CALLBACK_FUNCTION && kind != CALLBACK_EVENT)
        return MMSYSERR_INVALFLAG;
    if (kind && !ARG(3)) return MMSYSERR_INVALPARAM;
    void_object *object = void_object_new(VOID_OBJ_OTHER, sizeof(wave_device));
    wave_device *device = (wave_device *)object->data;
    if (!wave_format(ARG(2), device)) return MMSYSERR_INVALPARAM;
    device->callback = ARG(3);
    device->instance = ARG(4);
    device->open_flags = ARG(5);
    device->volume_left = device->volume_right = 0xFFFF;
    device->handle = void_handle_new(object);
    pthread_mutex_lock(&wave_lock);
    device->next = wave_devices;
    wave_devices = device;
    pthread_mutex_unlock(&wave_lock);
    if (!wave_in_selftest) void_dsound_start_mixer();
    wave_notification notification;
    wave_notification_for(&notification, device, WOM_OPEN, 0);
    wave_notify(&notification);
    MEM32(ARG(0)) = device->handle;
    return MMSYSERR_NOERROR;
}

WINAPI_EXPORT("winmm.dll", waveOutPrepareHeader, 3)
{
    wave_device *device = wave_device_get(ARG(0));
    if (!device) return MMSYSERR_INVALHANDLE;
    if (!ARG(1) || ARG(2) < 32 || !void_vm_writable(ARG(1), 32)) return MMSYSERR_INVALPARAM;
    uint32_t address = ARG(1), data = MEM32(address), size = MEM32(address + 4);
    if (!size || size % device->block || !void_vm_readable(data, size)) return MMSYSERR_INVALPARAM;
    if ((MEM32(address + 16) & (WHDR_BEGINLOOP | WHDR_ENDLOOP)) == WHDR_BEGINLOOP ||
        (MEM32(address + 16) & (WHDR_BEGINLOOP | WHDR_ENDLOOP)) == WHDR_ENDLOOP) return MMSYSERR_INVALPARAM;
    pthread_mutex_lock(&wave_lock);
    for (wave_header *header = device->headers; header; header = header->next)
        if (header->guest == address) {
            pthread_mutex_unlock(&wave_lock);
            return MMSYSERR_HANDLEBUSY;
        }
    if (wave_header_total == 64) {
        pthread_mutex_unlock(&wave_lock);
        return MMSYSERR_NOMEM;
    }
    wave_header *header = (wave_header *)calloc(1, sizeof *header);
    if (!header) {
        pthread_mutex_unlock(&wave_lock);
        return MMSYSERR_NOMEM;
    }
    header->guest = address;
    header->loops = MEM32(address + 20) ? MEM32(address + 20) : 1;
    header->next = device->headers;
    device->headers = header;
    ++wave_header_total;
    MEM32(address + 16) = (MEM32(address + 16) & (WHDR_BEGINLOOP | WHDR_ENDLOOP)) | WHDR_PREPARED;
    pthread_mutex_unlock(&wave_lock);
    return MMSYSERR_NOERROR;
}

WINAPI_EXPORT("winmm.dll", waveOutWrite, 3)
{
    wave_device *device = wave_device_get(ARG(0));
    if (!device) return MMSYSERR_INVALHANDLE;
    if (!ARG(1) || ARG(2) < 32 || !void_vm_writable(ARG(1), 32)) return MMSYSERR_INVALPARAM;
    pthread_mutex_lock(&wave_lock);
    wave_header *header = NULL;
    for (wave_header *candidate = device->headers; candidate; candidate = candidate->next)
        if (candidate->guest == ARG(1)) { header = candidate; break; }
    if (!header) {
        pthread_mutex_unlock(&wave_lock);
        return WAVERR_UNPREPARED;
    }
    if (header->queued) {
        pthread_mutex_unlock(&wave_lock);
        return WAVERR_STILLPLAYING;
    }
    if (!MEM32(header->guest + 4) || MEM32(header->guest + 4) % device->block) {
        pthread_mutex_unlock(&wave_lock);
        return MMSYSERR_INVALPARAM;
    }
    header->position = 0;
    header->loops = MEM32(header->guest + 20) ? MEM32(header->guest + 20) : 1;
    header->queued = 1;
    header->queue_next = NULL;
    MEM32(header->guest + 16) = (MEM32(header->guest + 16) | WHDR_INQUEUE) & ~WHDR_DONE;
    if (!device->queue) device->queue = header;
    else {
        wave_header *last = device->queue;
        while (last->queue_next) last = last->queue_next;
        last->queue_next = header;
    }
    device->paused = 0;
    pthread_mutex_unlock(&wave_lock);
    return MMSYSERR_NOERROR;
}

WINAPI_EXPORT("winmm.dll", waveOutUnprepareHeader, 3)
{
    wave_device *device = wave_device_get(ARG(0));
    if (!device) return MMSYSERR_INVALHANDLE;
    pthread_mutex_lock(&wave_lock);
    wave_header **link = &device->headers;
    while (*link && (*link)->guest != ARG(1)) link = &(*link)->next;
    if (!*link) {
        pthread_mutex_unlock(&wave_lock);
        return WAVERR_UNPREPARED;
    }
    wave_header *header = *link;
    if (header->queued) {
        pthread_mutex_unlock(&wave_lock);
        return WAVERR_STILLPLAYING;
    }
    *link = header->next;
    MEM32(header->guest + 16) &= ~WHDR_PREPARED;
    --wave_header_total;
    free(header);
    pthread_mutex_unlock(&wave_lock);
    return MMSYSERR_NOERROR;
}

static wave_header *wave_ready_header(wave_device *device, wave_header *header,
    wave_notification completed[64], unsigned *complete_count)
{
    while (header) {
        uint32_t frames = MEM32(header->guest + 4) / device->block;
        if (header->position < frames) return header;
        if (header->loops > 1) {
            --header->loops;
            header->position -= frames;
            continue;
        }
        header->queued = 0;
        MEM32(header->guest + 16) = (MEM32(header->guest + 16) & ~WHDR_INQUEUE) | WHDR_DONE;
        wave_notification_for(&completed[(*complete_count)++], device, WOM_DONE, header->guest);
        double carry = header->position - frames;
        header = device->queue;
        if (header) {
            device->queue = header->queue_next;
            header->queue_next = NULL;
            header->position += carry;
        }
    }
    return NULL;
}

static int wave_sample(wave_device *device, wave_header *header, uint32_t frame, uint32_t channel)
{
    uint32_t offset = frame * device->block + (channel < device->channels ? channel : 0) * (device->bits / 8);
    uint32_t data = MEM32(header->guest) + offset;
    return device->bits == 16 ? (int16_t)MEM16(data) : ((int)MEM8(data) - 128) * 256;
}

static int wave_sample_linear(wave_device *device, wave_header *header, uint32_t frame, uint32_t channel)
{
    int first = wave_sample(device, header, frame, channel);
    double fraction = header->position - frame;
    if (fraction == 0.0) return first;
    uint32_t next_frame = frame + 1;
    wave_header *next = header;
    if (next_frame >= MEM32(header->guest + 4) / device->block) {
        next_frame = 0;
        if (header->loops <= 1) {
            next = device->queue;
            while (next && MEM32(next->guest + 4) < device->block) next = next->queue_next;
        }
    }
    if (!next) return first;
    return (int)(first + (wave_sample(device, next, next_frame, channel) - first) * fraction);
}

static uint64_t wave_clipped, wave_starved;

uint64_t void_wave_clipped_take(void) { return __atomic_exchange_n(&wave_clipped, 0, __ATOMIC_RELAXED); }
uint64_t void_wave_starved_take(void) { return __atomic_exchange_n(&wave_starved, 0, __ATOMIC_RELAXED); }

static void wave_mix_headers(int16_t *output, uint32_t count)
{
    wave_notification completed[64];
    unsigned complete_count = 0;
    pthread_mutex_lock(&wave_lock);
    for (wave_device *device = wave_devices; device; device = device->next) {
        if (device->paused) continue;
        wave_header *header = device->queue;
        if (header) device->queue = header->queue_next;
        if (header) header->queue_next = NULL;
        for (uint32_t i = 0; i < count; ++i) {
            header = wave_ready_header(device, header, completed, &complete_count);
            if (!header) {
                if (device->played_frames) __atomic_add_fetch(&wave_starved, count - i, __ATOMIC_RELAXED);
                break;
            }
            uint32_t frame = (uint32_t)header->position;
            int left = wave_sample_linear(device, header, frame, 0);
            int right = device->channels == 2 ? wave_sample_linear(device, header, frame, 1) : left;
            int mixed_left = output[2 * i] + (int)((int64_t)left * device->volume_left / 65535);
            int mixed_right = output[2 * i + 1] + (int)((int64_t)right * device->volume_right / 65535);
            if (mixed_left > 32767 || mixed_left < -32768) __atomic_add_fetch(&wave_clipped, 1, __ATOMIC_RELAXED);
            if (mixed_right > 32767 || mixed_right < -32768) __atomic_add_fetch(&wave_clipped, 1, __ATOMIC_RELAXED);
            output[2 * i] = (int16_t)(mixed_left > 32767 ? 32767 : mixed_left < -32768 ? -32768 : mixed_left);
            output[2 * i + 1] = (int16_t)(mixed_right > 32767 ? 32767 : mixed_right < -32768 ? -32768 : mixed_right);
            header->position += (double)device->rate / 48000.0;
            uint32_t next = (uint32_t)header->position;
            uint32_t frames = MEM32(header->guest + 4) / device->block;
            if (next > frames) next = frames;
            if (next > frame) device->played_frames += next - frame;
        }
        header = wave_ready_header(device, header, completed, &complete_count);
        if (header) {
            header->queue_next = device->queue;
            device->queue = header;
        }
    }
    pthread_mutex_unlock(&wave_lock);
    for (unsigned i = 0; i < complete_count; ++i) wave_notify(&completed[i]);
}

void void_wave_mix(int16_t *output, uint32_t count)
{
    if (count) wave_mix_headers(output, count);
}

WINAPI_EXPORT("winmm.dll", waveOutReset, 1)
{
    wave_device *device = wave_device_get(ARG(0));
    if (!device) return MMSYSERR_INVALHANDLE;
    wave_notification completed[64];
    unsigned count = 0;
    pthread_mutex_lock(&wave_lock);
    device->paused = 0;
    device->played_frames = 0;
    for (wave_header *header = device->headers; header; header = header->next) {
        if (!header->queued) continue;
        header->queued = 0;
        MEM32(header->guest + 16) = (MEM32(header->guest + 16) & ~WHDR_INQUEUE) | WHDR_DONE;
        wave_notification_for(&completed[count++], device, WOM_DONE, header->guest);
    }
    device->queue = NULL;
    pthread_mutex_unlock(&wave_lock);
    for (unsigned i = 0; i < count; ++i) wave_notify(&completed[i]);
    return MMSYSERR_NOERROR;
}

WINAPI_EXPORT("winmm.dll", waveOutClose, 1)
{
    wave_device *device = wave_device_get(ARG(0));
    if (!device) return MMSYSERR_INVALHANDLE;
    wave_notification notification;
    pthread_mutex_lock(&wave_lock);
    if (device->queue) {
        pthread_mutex_unlock(&wave_lock);
        return WAVERR_STILLPLAYING;
    }
    for (wave_device **link = &wave_devices; *link; link = &(*link)->next) {
        if (*link == device) {
            *link = device->next;
            break;
        }
    }
    while (device->headers) {
        wave_header *header = device->headers;
        device->headers = header->next;
        MEM32(header->guest + 16) &= ~WHDR_PREPARED;
        --wave_header_total;
        free(header);
    }
    wave_notification_for(&notification, device, WOM_CLOSE, 0);
    pthread_mutex_unlock(&wave_lock);
    wave_notify(&notification);
    void_handle_close(ARG(0));
    return MMSYSERR_NOERROR;
}

WINAPI_EXPORT("winmm.dll", waveOutPause, 1)
{
    wave_device *device = wave_device_get(ARG(0));
    if (!device) return MMSYSERR_INVALHANDLE;
    pthread_mutex_lock(&wave_lock);
    device->paused = 1;
    pthread_mutex_unlock(&wave_lock);
    return MMSYSERR_NOERROR;
}
WINAPI_EXPORT("winmm.dll", waveOutRestart, 1)
{
    wave_device *device = wave_device_get(ARG(0));
    if (!device) return MMSYSERR_INVALHANDLE;
    pthread_mutex_lock(&wave_lock);
    device->paused = 0;
    pthread_mutex_unlock(&wave_lock);
    return MMSYSERR_NOERROR;
}
WINAPI_EXPORT("winmm.dll", waveOutBreakLoop, 1)
{
    wave_device *device = wave_device_get(ARG(0));
    if (!device) return MMSYSERR_INVALHANDLE;
    pthread_mutex_lock(&wave_lock);
    for (wave_header *header = device->queue; header; header = header->queue_next) header->loops = 1;
    pthread_mutex_unlock(&wave_lock);
    return MMSYSERR_NOERROR;
}

WINAPI_EXPORT("winmm.dll", waveOutGetVolume, 2)
{
    if (!ARG(1) || !void_vm_writable(ARG(1), 4)) return MMSYSERR_INVALPARAM;
    wave_device *device = wave_device_get(ARG(0));
    if (!device) return MMSYSERR_INVALHANDLE;
    MEM32(ARG(1)) = device->volume_left | (device->volume_right << 16);
    return MMSYSERR_NOERROR;
}
WINAPI_EXPORT("winmm.dll", waveOutSetVolume, 2)
{
    wave_device *device = wave_device_get(ARG(0));
    if (!device) return MMSYSERR_INVALHANDLE;
    pthread_mutex_lock(&wave_lock);
    device->volume_left = ARG(1) & 0xFFFF;
    device->volume_right = ARG(1) >> 16;
    if (void_verbose) void_log("[waveout] volume %08X: left=%u right=%u", device->handle, device->volume_left, device->volume_right);
    pthread_mutex_unlock(&wave_lock);
    return MMSYSERR_NOERROR;
}
WINAPI_EXPORT("winmm.dll", waveOutGetPosition, 3)
{
    wave_device *device = wave_device_get(ARG(0));
    if (!device) return MMSYSERR_INVALHANDLE;
    if (!ARG(1) || ARG(2) < 12 || !void_vm_writable(ARG(1), 12)) return MMSYSERR_INVALPARAM;
    uint64_t value;
    switch (MEM16(ARG(1))) {
    case 1: value = device->played_frames * 1000 / device->rate; break;
    case 3: value = device->played_frames; break;
    case 8: value = device->played_frames * device->block; break;
    default: return MMSYSERR_NOTSUPPORTED;
    }
    MEM32(ARG(1) + 4) = (uint32_t)value;
    return MMSYSERR_NOERROR;
}

static uint32_t wave_test_done, wave_test_open, wave_test_close, wave_test_bad;
RAW_EXPORT("winmm.dll", selftest_wave_callback)
{
    if (ARG(1) == WOM_DONE) {
        ++wave_test_done;
        if (!ARG(3)) wave_test_bad = 1;
    } else if (ARG(1) == WOM_OPEN) ++wave_test_open;
    else if (ARG(1) == WOM_CLOSE) ++wave_test_close;
    else wave_test_bad = 1;
    g_eax = 0;
    g_esp += 24;
}

static uint32_t wave_test_call(void_fn function, int count, uint32_t *args)
{
    return void_call_guest(void_thunk(function, "waveOut selftest"), count, args, 1);
}

int void_waveout_selftest(void)
{
    wave_in_selftest = 1;
    wave_test_done = wave_test_open = wave_test_close = wave_test_bad = 0;
    uint32_t format = void_galloc(18), data = void_galloc(480 * 4);
    uint32_t first = void_galloc(32), second = void_galloc(32);
    uint32_t handle_address = void_galloc(4), position = void_galloc(12);
    if (!format || !data || !first || !second || !handle_address || !position) return 1;
    MEM16(format) = 1; MEM16(format + 2) = 2; MEM32(format + 4) = 48000;
    MEM32(format + 8) = 48000 * 4; MEM16(format + 12) = 4; MEM16(format + 14) = 16; MEM16(format + 16) = 0;
    for (uint32_t i = 0; i < 480; ++i) {
        MEM16(data + i * 4) = 4096;
        MEM16(data + i * 4 + 2) = (uint16_t)-4096;
    }
    memset(GPTR(first), 0, 32); memset(GPTR(second), 0, 32);
    MEM32(first) = MEM32(second) = data;
    MEM32(first + 4) = MEM32(second + 4) = 480 * 4;
    MEM32(first + 20) = MEM32(second + 20) = 1;
    MEM16(position) = 8;
    uint32_t args[6] = { handle_address, 0, format, void_thunk(selftest_wave_callback_entry, "waveOut test callback"), 0, CALLBACK_FUNCTION };
    int failed = wave_test_call(waveOutOpen_entry, 6, args) != 0;
    uint32_t handle = MEM32(handle_address);
    uint32_t first_args[3] = { handle, first, 32 }, second_args[3] = { handle, second, 32 };
    if (!failed) failed = wave_test_call(waveOutPrepareHeader_entry, 3, first_args) != 0;
    if (!failed) failed = wave_test_call(waveOutPrepareHeader_entry, 3, second_args) != 0;
    if (!failed) failed = wave_test_call(waveOutWrite_entry, 3, first_args) != 0;
    if (!failed) failed = wave_test_call(waveOutWrite_entry, 3, second_args) != 0;
    int16_t output[960] = {0};
    if (!failed) void_wave_mix(output, 480);
    if (!failed) failed = output[0] != 4096 || output[1] != -4096 || output[958] != 4096 || output[959] != -4096;
    if (!failed) failed = wave_test_done != 1 || wave_test_open != 1 || wave_test_bad ||
        !(MEM32(first + 16) & WHDR_DONE) || (MEM32(first + 16) & WHDR_INQUEUE) ||
        !(MEM32(second + 16) & WHDR_INQUEUE) || (MEM32(second + 16) & WHDR_DONE);
    if (!failed) failed = wave_test_call(waveOutUnprepareHeader_entry, 3, first_args) != 0;
    memset(output, 0, sizeof output);
    if (!failed) void_wave_mix(output, 480);
    if (!failed) failed = output[0] != 4096 || output[1] != -4096 || output[958] != 4096 || output[959] != -4096;
    if (!failed) failed = wave_test_call(waveOutGetPosition_entry, 3, (uint32_t[3]){handle, position, 12}) != 0 || MEM32(position + 4) != 960 * 4;
    if (!failed) failed = wave_test_done != 2 || wave_test_bad || !(MEM32(second + 16) & WHDR_DONE) || (MEM32(second + 16) & WHDR_INQUEUE);
    if (!failed) {
        wave_notification notification;
        wave_notification_for(&notification, wave_device_get(handle), WOM_DONE, second);
        wave_in_selftest = 0;
        wave_notify(&notification);
        for (unsigned i = 0; i < 100 && wave_test_done != 3; ++i) {
            void_blocking_begin();
            struct timespec delay = {0, 10000000}; nanosleep(&delay, NULL);
            void_blocking_end();
        }
        wave_in_selftest = 1;
        failed = wave_test_done != 3 || wave_test_bad;
    }
    if (!failed) failed = wave_test_call(waveOutUnprepareHeader_entry, 3, second_args) != 0;
    if (!failed) failed = wave_test_call(waveOutClose_entry, 1, first_args) != 0 || wave_test_close != 1 || wave_header_total != 0;
    memset(output, 0, sizeof output);
    void_wave_mix(output, 480);
    for (unsigned i = 0; i < 960; ++i) if (output[i]) failed = 1;
    void_log("[selftest] waveOut result=%d callbacks=%u/%u/%u bad=%u first=%08X second=%08X position=%u headers=%u samples=%d/%d",
        failed, wave_test_open, wave_test_done, wave_test_close, wave_test_bad, MEM32(first + 16), MEM32(second + 16),
        MEM32(position + 4), wave_header_total, output[0], output[1]);
    void_gfree(format); void_gfree(data); void_gfree(first); void_gfree(second); void_gfree(handle_address); void_gfree(position);
    wave_in_selftest = 0;
    void_log("[selftest] waveOut PCM/position, callbacks without message pump and silence after close %s", failed ? "FAIL" : "PASS");
    return failed;
}
