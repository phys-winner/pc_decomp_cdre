#include "host.h"
#include <aaudio/AAudio.h>
#include <unistd.h>

static pthread_mutex_t audio_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t audio_cond = PTHREAD_COND_INITIALIZER;
static AAudioStream *audio_stream;
static int audio_paused;
static unsigned audio_behind;

static void audio_close(void)
{
    if (!audio_stream) return;
    AAudioStream_close(audio_stream);
    audio_stream = NULL;
    audio_behind = 0;
    void_log("[audio] AAudio stream closed");
}

static void audio_open(void)
{
    AAudioStreamBuilder *builder = NULL;
    aaudio_result_t result = AAudio_createStreamBuilder(&builder);
    if (result == AAUDIO_OK) {
        AAudioStreamBuilder_setDirection(builder, AAUDIO_DIRECTION_OUTPUT);
        AAudioStreamBuilder_setSharingMode(builder, AAUDIO_SHARING_MODE_SHARED);
        /* A server-mixed stream tolerates game-thread stalls and route changes
         * better than the shared low-latency MMAP path on the measured devices. */
        AAudioStreamBuilder_setPerformanceMode(builder, AAUDIO_PERFORMANCE_MODE_NONE);
        AAudioStreamBuilder_setFormat(builder, AAUDIO_FORMAT_PCM_I16);
        AAudioStreamBuilder_setChannelCount(builder, 2);
        AAudioStreamBuilder_setSampleRate(builder, 48000);
        AAudioStreamBuilder_setBufferCapacityInFrames(builder, 4800);
        result = AAudioStreamBuilder_openStream(builder, &audio_stream);
        AAudioStreamBuilder_delete(builder);
    }
    if (result != AAUDIO_OK) {
        void_log("[audio] AAudio open failed: %s", AAudio_convertResultToText(result));
        audio_stream = NULL;
        return;
    }
    int32_t capacity = AAudioStream_getBufferCapacityInFrames(audio_stream);
    if (capacity > 0) AAudioStream_setBufferSizeInFrames(audio_stream, capacity < 2880 ? capacity : 2880);
    result = AAudioStream_requestStart(audio_stream);
    if (result != AAUDIO_OK) {
        void_log("[audio] AAudio start failed: %s", AAudio_convertResultToText(result));
        AAudioStream_close(audio_stream);
        audio_stream = NULL;
        return;
    }
    void_log("[audio] AAudio 48000 Hz stereo PCM16 started: buffer=%d capacity=%d burst=%d",
        AAudioStream_getBufferSizeInFrames(audio_stream), capacity, AAudioStream_getFramesPerBurst(audio_stream));
}

void void_audio_lifecycle_changed(void)
{
    pthread_mutex_lock(&audio_lock);
    if ((void_audio_pause_state() & 1u) && audio_stream && !audio_paused) {
        AAudioStream_requestPause(audio_stream);
        audio_paused = 1;
    }
    pthread_cond_broadcast(&audio_cond);
    pthread_mutex_unlock(&audio_lock);
}

int void_audio_output(const int16_t *frames, uint32_t count)
{
    pthread_mutex_lock(&audio_lock);
    while (void_audio_pause_state() & 1u) {
        if (audio_stream && !audio_paused) {
            AAudioStream_requestPause(audio_stream);
            audio_paused = 1;
        }
        pthread_cond_wait(&audio_cond, &audio_lock);
    }
    if (audio_paused) {
        audio_close();
        audio_paused = 0;
        audio_open();
    }
    if (!audio_stream) audio_open();
    if (!audio_stream) { pthread_mutex_unlock(&audio_lock); return 0; }
    static int pcm_logged;
    if (!pcm_logged) {
        int peak = 0;
        for (uint32_t i = 0; i < count * 2; ++i) {
            int sample = frames[i] < 0 ? -(int)frames[i] : (int)frames[i];
            if (sample > peak) peak = sample;
        }
        if (peak) {
            pcm_logged = 1;
            void_log("[audio] first non-silent PCM block: %u frames, peak=%d", count, peak);
        }
    }
    while (count) {
        aaudio_result_t written = AAudioStream_write(audio_stream, frames, count, 100000000LL);
        if (written <= 0) {
            void_log("[audio] AAudio write stalled: %s", AAudio_convertResultToText(written));
            audio_close();
            pthread_mutex_unlock(&audio_lock);
            return 0;
        }
        frames += written * 2;
        count -= (uint32_t)written;
    }
    int64_t queued = AAudioStream_getFramesWritten(audio_stream) - AAudioStream_getFramesRead(audio_stream);
    /* A shared MMAP reader can overtake its writer without returning a write error. */
    audio_behind = queued < -AAudioStream_getFramesPerBurst(audio_stream) ? audio_behind + 1 : 0;
    if (audio_behind >= 3) {
        void_log("[audio] AAudio reader overtook writer: queued=%lld; reopening", (long long)queued);
        audio_close();
        pthread_mutex_unlock(&audio_lock);
        return 0;
    }
    static unsigned blocks;
    if (++blocks == 500) {
        void_log("[audio] output 5s: xruns=%d queued=%lld", AAudioStream_getXRunCount(audio_stream), (long long)queued);
        blocks = 0;
    }
    pthread_mutex_unlock(&audio_lock);
    return 1;
}
