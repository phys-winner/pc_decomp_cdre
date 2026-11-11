/* Production listener ABI/mixer, memcpy against original x86 and track inflate.
 * tools/build_host_test.py tools/tests/test_gameplay_fixes.c --objects build/android/gameplay-fixes/obj --exclude android_main --output build/tests/gameplay-fixes
 */
#include "../../android/host/dsound.c"
#include <assert.h>
#include <unistd.h>
#include <zlib.h>

extern void sub_1000F594(void);
extern void sub_006601F0(void), sub_006601F0_lifted(void);
extern int void_waveout_selftest(void);
void void_process_exit(uint32_t code, int detach) { (void)detach; _exit((int)code); }

int main(void)
{
    assert(void_guest_reserve());
    void_threads_init(); void_dispatch_init(); void_machine_enter();
    uint32_t p = void_galloc(64), result = void_galloc(64);
    MEM32(p) = 64; MEM32(result) = 64;
    MEMF(p + 4) = 2; MEMF(p + 8) = 3; MEMF(p + 12) = 4;
    MEMF(p + 28) = 0; MEMF(p + 32) = 0; MEMF(p + 36) = 1;
    MEMF(p + 40) = 0; MEMF(p + 44) = 1; MEMF(p + 48) = 0;
    MEMF(p + 52) = 1; MEMF(p + 56) = 1; MEMF(p + 60) = 1;
    uint32_t set = void_thunk(lst_SetAllParameters, "listener set"), get = void_thunk(lst_GetAllParameters, "listener get");
    uint32_t args[] = {0, p, 0};
    assert(void_call_guest(set, 3, args, 1) == DS_OK);
    assert(distance_factor == 1 && rolloff == 1 && listener_front[2] == 1 && listener_top[1] == 1);
    args[1] = result; assert(void_call_guest(get, 2, args, 1) == DS_OK);
    assert(!memcmp(GPTR(p), GPTR(result), 64));
    MEM32(p) = 63; args[1] = p;
    assert(void_call_guest(set, 3, args, 1) == DSERR_INVALIDPARAM);
    assert(distance_factor == 1 && rolloff == 1);

    uint32_t samples = void_galloc(960);
    for (unsigned i = 0; i < 480; ++i) MEM16(samples + i * 2) = 16384;
    dsbuf_t sound = {.flags=DSBCAPS_CTRL3D, .data=samples, .size=960, .channels=1, .rate=48000,
        .bits=16, .block=2, .frequency=48000, .playing=1, .looping=1, .min_distance=1, .max_distance=1000};
    memcpy(sound.pos, listener_pos, 12); sound.pos[2] += 10;
    buffers = &sound;
    float mix[2]; mix_chunk(mix, 1);
    assert(fabsf(mix[0] - .05f) < .00001f && fabsf(mix[1] - .05f) < .00001f);
    sound.mode3d = 2; mix_chunk(mix, 1);
    assert(mix[0] == .5f && mix[1] == .5f);
    buffers = NULL;

    uint32_t fast = void_thunk(sub_1000F594, "native memcpy");
    uint32_t a = void_galloc(65536);
    FILE *oracle = fopen("/data/local/tmp/crashday-memcpy-oracle.bin", "rb");
    assert(oracle);
    uint32_t header[2]; assert(fread(header, sizeof header, 1, oracle) == 1 && header[0] == 0x5950434D && header[1] == 912);
    for (unsigned n = 0; n < header[1]; ++n) {
        uint32_t record[4]; assert(fread(record, sizeof record, 1, oracle) == 1);
        assert(record[0] <= 65536 && record[1] <= 65536 && record[2] <= 65536 - record[0] && record[2] <= 65536 - record[1]);
        for (unsigned i = 0; i < 65536; ++i) MEM8(a + i) = (uint8_t)(i * 29 + i / 97);
        uint32_t call_args[] = {a + record[1], a + record[0], record[2]};
        assert(void_call_guest(fast, 3, call_args, 0) == call_args[0]);
        assert((uint32_t)crc32(0, GPTR(a), 65536) == record[3]);
    }
    fclose(oracle);
    assert(void_files_init("/sdcard/Crashday/game", "/sdcard/Crashday/userdata-FIXES"));
    assert(void_modules_init("/sdcard/Crashday/images"));
    extern int void_modules_start(void);
    assert(void_modules_start());
    assert(!void_waveout_selftest());
    uint32_t compressed = void_galloc(131072), native_out = void_galloc(65536), original_out = void_galloc(65536);
    uint32_t inflate_fast = void_thunk(sub_006601F0, "native track inflate"), inflate_original = void_thunk(sub_006601F0_lifted, "original track inflate");
    unsigned inflate_cases = 0;
    for (unsigned mode = 0; mode < 4; ++mode) {
        uLongf compressed_size = 131072;
        assert(compress2(GPTR(compressed), &compressed_size, GPTR(a), 65536, 6) == Z_OK);
        if (mode == 1) MEM8(compressed + compressed_size - 1) ^= 1;
        if (mode == 2) compressed_size /= 2;
        uint32_t capacity = mode == 3 ? 4096 : 65536;
        memset(GPTR(native_out), 0xA5, 65536); memset(GPTR(original_out), 0xA5, 65536);
        uint32_t call_args[] = {native_out, capacity}; g_ecx = compressed; g_edx = compressed_size;
        uint32_t expected = void_call_guest(inflate_fast, 2, call_args, 0);
        call_args[0] = original_out; g_ecx = compressed; g_edx = compressed_size;
        assert(void_call_guest(inflate_original, 2, call_args, 0) == expected);
        assert(!memcmp(GPTR(native_out), GPTR(original_out), 65536)); ++inflate_cases;
    }
    printf("PASS listener ABI, 10:1 distance attenuation, waveOut, %u x86 memcpy and %u inflate oracle cases\n", header[1], inflate_cases);
    return 0;
}
