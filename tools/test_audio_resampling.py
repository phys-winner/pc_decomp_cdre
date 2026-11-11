"""Production sample/queue helpers: interpolation, exact-rate PCM and buffer boundaries."""
import subprocess
import unittest

from test_render_thread_cores import ROOT, function
from tests.host_environment import CLANG, environment

HARNESS = r'''
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
static unsigned char guest[4096];
#define MEM8(a) (*(uint8_t *)(guest+(a)))
#define MEM16(a) (*(uint16_t *)(guest+(a)))
#define MEM32(a) (*(uint32_t *)(guest+(a)))
#define WHDR_DONE 1u
#define WHDR_INQUEUE 16u
#define WOM_DONE 0x3BDu
typedef struct {uint32_t data,size,block,bits,channels;int looping;} dsbuf_t;
/* TYPES */
static void wave_notification_for(wave_notification *n,wave_device *d,uint32_t m,uint32_t h)
{(void)d;(void)m;n->header=h;}
/* ACTUAL */
static void close_to(float a,float b){assert(fabsf(a-b)<0.00001f);}
int main(void){
    dsbuf_t b={1024,12,4,16,2,0};
    int16_t samples[]={0,12000,12000,-12000,24000,0};
    memcpy(guest+b.data,samples,sizeof samples);
    close_to(sample_linear(&b,0,.5,0),6000/32768.f);
    close_to(sample_linear(&b,0,.5,1),0);
    close_to(sample_linear(&b,2,.5,0),24000/32768.f); /* one-shot holds last */
    b.looping=1;close_to(sample_linear(&b,2,.5,0),12000/32768.f);
    for(unsigned i=0;i<3;++i)for(unsigned c=0;c<2;++c)
        assert(sample_linear(&b,i,0,c)==sample_at(&b,i,c));
    b.bits=8;b.channels=1;b.block=1;b.size=2;MEM8(b.data)=0;MEM8(b.data+1)=255;
    close_to(sample_linear(&b,0,.5,0),-.00390625f);

    wave_device d={0};d.bits=16;d.channels=2;d.block=4;
    wave_header a={0},z={0};a.guest=64;z.guest=128;a.queued=z.queued=1;
    MEM32(a.guest)=1024;MEM32(a.guest+4)=8;MEM32(z.guest)=1032;MEM32(z.guest+4)=4;
    memcpy(guest+1024,samples,sizeof samples);d.queue=&z;
    a.position=1.5;assert(wave_sample_linear(&d,&a,1,0)==18000);
    assert(wave_sample_linear(&d,&a,1,1)==-6000); /* interpolate across queued headers */
    a.loops=2;assert(wave_sample_linear(&d,&a,1,0)==6000);
    a.loops=1;d.queue=NULL;assert(wave_sample_linear(&d,&a,1,0)==12000);
    d.queue=&z;a.position=2.375;
    wave_notification done[64];unsigned count=0;
    assert(wave_ready_header(&d,&a,done,&count)==&z);
    assert(count==1 && done[0].header==64 && z.position==.375 && !d.queue);
    assert(wave_sample_linear(&d,&z,0,0)==24000);
    /* A high source rate can cross several repetitions in one output frame. */
    a.position=5.25;a.loops=4;count=0;
    assert(wave_ready_header(&d,&a,done,&count)==&a && a.position==1.25 && a.loops==2);
    /* 44.1->48 kHz: independent ramp oracle, including the two-header boundary. */
    a.loops=1;d.queue=&z;z.position=0;
    for(unsigned i=0;i<3;++i){
        a.position=i*44100.0/48000.0;
        assert(wave_sample_linear(&d,&a,(uint32_t)a.position,0)==(int)(12000*a.position));
    }
    d.bits=8;d.channels=1;d.block=1;MEM32(a.guest+4)=2;
    MEM8(1024)=0;MEM8(1025)=255;a.position=.5;
    assert(wave_sample_linear(&d,&a,0,0)==-128);
    a.position=0;assert(wave_sample_linear(&d,&a,0,0)==-32768);
    puts("PASS linear resampling: mono/stereo 8/16-bit, exact rates, loops, queued boundaries, fractional phase");
}
'''


class ResamplingTest(unittest.TestCase):
    def test_samples_and_headers(self):
        ds = (ROOT / "android/host/dsound.c").read_text(encoding="utf-8")
        wave = (ROOT / "android/host/waveout.c").read_text(encoding="utf-8")
        types = wave[wave.index("typedef struct wave_header"):wave.index("static pthread_mutex_t wave_lock")]
        actual = "\n".join(function(source, signature) for source, signature in [
            (ds, "static float sample_at("), (ds, "static float sample_linear("),
            (wave, "static wave_header *wave_ready_header("),
            (wave, "static int wave_sample("), (wave, "static int wave_sample_linear(")])
        out = ROOT / "build/tests/audio-resampling"
        out.mkdir(parents=True, exist_ok=True)
        source = out / "resampling.c"
        source.write_text(HARNESS.replace("/* TYPES */", types).replace("/* ACTUAL */", actual), encoding="utf-8")
        env, linker = environment("x64")
        for cmd in ([str(CLANG), "/nologo", "/O2", "/std:c11", "/clang:--target=x86_64-pc-windows-msvc",
                     "/c", str(source), "/Fo" + str(out / "resampling.obj")],
                    [str(linker), "/nologo", str(out / "resampling.obj"), "/OUT:" + str(out / "resampling.exe")],
                    [str(out / "resampling.exe")]):
            result = subprocess.run(cmd, cwd=out, env=env, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())


if __name__ == "__main__":
    unittest.main()
