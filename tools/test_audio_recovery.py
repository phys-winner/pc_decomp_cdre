"""Exercise the production AAudio writer and mixer clock with a deterministic device."""
import subprocess
import unittest

from test_render_thread_cores import ROOT, function
from tests.host_environment import CLANG, environment

OUT = ROOT / "build/tests/audio-recovery"
HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
typedef int pthread_mutex_t, pthread_cond_t, AAudioStreamBuilder, aaudio_result_t;
typedef struct { int64_t written, read; } AAudioStream;
#define PTHREAD_MUTEX_INITIALIZER 0
#define PTHREAD_COND_INITIALIZER 0
#define AAUDIO_OK 0
#define AAUDIO_DIRECTION_OUTPUT 1
#define AAUDIO_SHARING_MODE_SHARED 1
#define AAUDIO_PERFORMANCE_MODE_NONE 0
#define AAUDIO_FORMAT_PCM_I16 1
static AAudioStream stream;
static int opened, closed, write_mode, writes, paused, open_error;
static unsigned pause_state;
static int64_t wall;
static const int16_t *pcm;
static void void_log(const char *s, ...) { (void)s; }
static void pthread_mutex_lock(int *p) {(void)p;}
static void pthread_mutex_unlock(int *p) {(void)p;}
static void pthread_cond_broadcast(int *p) {(void)p;}
static void pthread_cond_wait(int *a,int *b) {(void)a;(void)b;pause_state=0;}
static unsigned void_audio_pause_state(void) {return pause_state;}
static int AAudio_createStreamBuilder(AAudioStreamBuilder **p) {static int b;*p=&b;return 0;}
#define SETTER(name) static void name(AAudioStreamBuilder *b,int n){(void)b;(void)n;}
SETTER(AAudioStreamBuilder_setDirection)
SETTER(AAudioStreamBuilder_setSharingMode)
static void AAudioStreamBuilder_setPerformanceMode(AAudioStreamBuilder *b,int n){(void)b;assert(n==AAUDIO_PERFORMANCE_MODE_NONE);}
SETTER(AAudioStreamBuilder_setFormat)
SETTER(AAudioStreamBuilder_setChannelCount)
SETTER(AAudioStreamBuilder_setSampleRate)
SETTER(AAudioStreamBuilder_setBufferCapacityInFrames)
static int AAudioStreamBuilder_openStream(AAudioStreamBuilder *b,AAudioStream **s)
{(void)b;if(open_error)return -1;memset(&stream,0,sizeof stream);*s=&stream;++opened;return 0;}
static void AAudioStreamBuilder_delete(AAudioStreamBuilder *b) {(void)b;}
static void AAudioStream_close(AAudioStream *s) {assert(s);++closed;}
static int AAudioStream_getBufferCapacityInFrames(AAudioStream *s) {(void)s;return 4800;}
static int AAudioStream_getBufferSizeInFrames(AAudioStream *s) {(void)s;return 2880;}
static int AAudioStream_getFramesPerBurst(AAudioStream *s) {(void)s;return 96;}
static int AAudioStream_setBufferSizeInFrames(AAudioStream *s,int n) {(void)s;assert(n==2880);return n;}
static int AAudioStream_requestStart(AAudioStream *s) {(void)s;return 0;}
static int AAudioStream_requestPause(AAudioStream *s) {(void)s;++paused;return 0;}
static int AAudioStream_getXRunCount(AAudioStream *s) {(void)s;return 0;}
static int64_t AAudioStream_getFramesWritten(AAudioStream *s) {return s->written;}
static int64_t AAudioStream_getFramesRead(AAudioStream *s) {return s->read;}
static const char *AAudio_convertResultToText(int n) {(void)n;return "test";}
static int AAudioStream_write(AAudioStream *s,const int16_t *p,int n,int64_t timeout)
{
    assert(timeout==100000000LL);++writes;
    if(write_mode==1)return 0;
    if(write_mode==2)return -899;
    if(write_mode==3){assert(p==pcm+2*s->written);n=n>120?120:n;}
    s->written+=n;
    if(write_mode==4)s->read=s->written+4512;
    if(write_mode==5){
        /* Real blocking writer: after priming, the device advances the clock. */
        if(s->written-s->read>2880){s->read+=n;wall+=10000000;}
    }
    return n;
}
/* AUDIO */

#define MIX_CHUNK 480
#define MIX_RATE 48000
#define CLOCK_MONOTONIC 1
#define TIMER_ABSTIME 1
struct timespec {int64_t tv_sec;long tv_nsec;};
static int mixer_running, mixed, sleeps, inject_late;
static int mix_lock;
static void void_native_worker_affinity_apply(void){}
static int pthread_self(void){return 1;}
static void pthread_setname_np(int t,const char *n){(void)t;(void)n;}
static int clock_gettime(int clock,struct timespec *t)
{(void)clock;t->tv_sec=wall/1000000000;t->tv_nsec=wall%1000000000;return 0;}
static int clock_nanosleep(int c,int flags,const struct timespec *t,void *r)
{(void)c;(void)flags;(void)r;wall=t->tv_sec*1000000000LL+t->tv_nsec;++sleeps;return 0;}
static void mix_chunk(float *p,unsigned n)
{
    memset(p,0,2*n*sizeof(float));
    if(++mixed==100 && inject_late){wall+=200000000;stream.read+=9600;}
    if(mixed==1000)mixer_running=0;
}
static void void_wave_mix(int16_t *p,unsigned n){(void)p;(void)n;}
static uint64_t void_wave_clipped_take(void){return 0;}
static uint64_t void_wave_starved_take(void){return 0;}
/* MIXER */
int main(void)
{
    int16_t samples[960]={1};pcm=samples;
    write_mode=3;assert(void_audio_output(samples,480));assert(writes==4 && stream.written==480);
    write_mode=1;assert(!void_audio_output(samples,480));assert(!audio_stream && closed==1);
    write_mode=0;assert(void_audio_output(samples,480));assert(opened==2);
    write_mode=2;assert(!void_audio_output(samples,480));assert(!audio_stream && closed==2);
    write_mode=4;assert(void_audio_output(samples,480));assert(void_audio_output(samples,480));
    assert(!void_audio_output(samples,480));assert(!audio_stream && closed==3 && !audio_behind);
    write_mode=0;assert(void_audio_output(samples,480));
    pause_state=1;void_audio_lifecycle_changed();assert(paused==1);
    assert(void_audio_output(samples,480));assert(!audio_paused && opened==5 && closed==4);
    audio_close();open_error=1;assert(!void_audio_output(samples,480));open_error=0;
    write_mode=5;wall=0;mixer_running=1;inject_late=1;mixer_main(NULL);
    assert(mixed==1000 && sleeps==2); /* Initial fallback and one underrun recovery. */
    assert(stream.written-stream.read>=0); /* Late service is caught by subsequent writes. */
    assert(wall>=10000000000LL && wall<=10100000000LL);
    audio_close();open_error=1;wall=0;mixed=sleeps=0;mixer_running=1;inject_late=0;mixer_main(NULL);
    assert(mixed==1000 && sleeps==1000 && wall==10000000000LL); /* No unavailable-backend spin. */
    puts("PASS audio: partial/zero/error writes, MMAP recovery, lifecycle, one clock, paced fallback");
}
'''


class AudioRecoveryTest(unittest.TestCase):
    def test_production_writer_and_mixer(self):
        audio = (ROOT / "android/host/android_audio.c").read_text(encoding="utf-8")
        audio = "\n".join(line for line in audio.splitlines() if not line.startswith("#include"))
        mixer = function((ROOT / "android/host/dsound.c").read_text(encoding="utf-8"),
                         "static void *mixer_main(")
        OUT.mkdir(parents=True, exist_ok=True)
        source = OUT / "audio.c"
        source.write_text(HARNESS.replace("/* AUDIO */", audio).replace("/* MIXER */", mixer), encoding="utf-8")
        env, linker = environment("x64")
        for cmd in ([str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc",
                     "/c", str(source), "/Fo" + str(OUT / "audio.obj")],
                    [str(linker), "/nologo", str(OUT / "audio.obj"), "/OUT:" + str(OUT / "audio.exe")],
                    [str(OUT / "audio.exe")]):
            result = subprocess.run(cmd, env=env, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())


if __name__ == "__main__":
    unittest.main()
