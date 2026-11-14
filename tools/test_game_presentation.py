"""Check pinned camera/steering seams and execute the native player-only steering policy."""
from pathlib import Path
import subprocess
import unittest

from game_presentation import presentation
from test_menu_gestures import method
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]


class PresentationTest(unittest.TestCase):
    def test_seams_reject_changed_owners(self):
        files = ("functions_0007.c", "functions_0046.c")
        for file in files:
            original = (ROOT / "generated/crashday" / file).read_bytes()
            changed = presentation(original)
            self.assertNotEqual(changed, original)
            with self.assertRaises(ValueError):
                presentation(changed)
            marker = b"0x0067CACD" if "0046" in file else b"0x00461E94"
            with self.assertRaises(ValueError):
                presentation(original.replace(marker, b"0x00000000", 1))

    def test_native_policy(self):
        source = (ROOT / "android/host/android_main.c").read_text(encoding="utf-8")
        functions = "\n".join(method(source, signature) for signature in (
            "double crashday_world_aspect_numerator(void)",
            "uint32_t crashday_steering_bits(uint32_t car, uint32_t previous)"))
        harness = r'''
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
static int aspect_correction,instant_steering,digital_steering;
static uint8_t memory[0x20000];
#define MEM32(a) (*(uint32_t *)(memory+(a)))
#define MEMF(a) (*(float *)(memory+(a)))
#define MEM8(a) (*(uint8_t *)(memory+(a)))
static uint32_t crashday_race_car(void){return 0x1000;}
static int void_vm_readable(uint32_t p,uint32_t n){return p>=0x1000&&p+n<sizeof memory;}
static int void_vm_writable(uint32_t p,uint32_t n){return void_vm_readable(p,n);}
/* FUNCTIONS */
int main(void){
    const uint32_t car=0x1000,previous=0x3e800000;
    MEMF(car+0x6858)=30;MEM8(car+0x7177)=50;
    assert(crashday_steering_bits(car,previous)==previous);
    instant_steering=1;assert(crashday_steering_bits(car,previous)==previous);
    digital_steering=1;uint32_t result=crashday_steering_bits(car,previous);
    assert(MEMF(car+0x6CB0)==-30&&MEMF(car+0x6E18)==-30&&result==MEM32(car+0x6CB0));
    MEM8(car+0x7177)=0;MEM8(car+0x7178)=100;crashday_steering_bits(car,previous);
    assert(MEMF(car+0x6CB0)==30);
    MEM8(car+0x7177)=100;crashday_steering_bits(car,previous);assert(MEMF(car+0x6CB0)==0);
    MEM8(car+0x7177)=MEM8(car+0x7178)=0;crashday_steering_bits(car,previous);assert(MEMF(car+0x6CB0)==0);
    assert(crashday_steering_bits(0x9000,previous)==previous);
    digital_steering=0;assert(crashday_steering_bits(car,previous)==previous);
    digital_steering=1;MEMF(car+0x6858)=NAN;assert(crashday_steering_bits(car,previous)==previous);
    assert(crashday_world_aspect_numerator()==.85);
    double aspects[]={4./3.,16./9.,16./10.,19.5/9.,20./9.};
    for(int i=0;i<5;++i){
        double ui_aspect=aspects[i]*.75;
        aspect_correction=1;double corrected=aspects[i]*crashday_world_aspect_numerator()/ui_aspect;
        aspect_correction=0;double original=aspects[i]*crashday_world_aspect_numerator()/ui_aspect;
        assert(fabs(corrected-1)<1e-12&&fabs(original-17./15.)<1e-12);
    }
    return 0;
}
'''.replace("/* FUNCTIONS */", functions)
        out = ROOT / "build/tests/presentation"
        out.mkdir(parents=True, exist_ok=True)
        (out / "probe.c").write_text(harness, encoding="utf-8")
        env, linker = environment("x64")
        for command in ([CLANG, "/nologo", "/O1", "/std:c11", "/c", "probe.c", "/Foprobe.obj"],
                        [linker, "/nologo", "probe.obj", "/OUT:probe.exe"], [out / "probe.exe"]):
            result = subprocess.run([str(v) for v in command], cwd=out, env=env, capture_output=True, timeout=60)
            self.assertEqual(result.returncode, 0, (result.stdout + result.stderr).decode(errors="replace"))


if __name__ == "__main__":
    unittest.main()
