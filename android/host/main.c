/* ARM64 command-line bring-up; the guest instructions are compiled ahead of time. */
#define _GNU_SOURCE
#include "host.h"
#include "input.h"
#include "steam_interfaces.h"
#include <errno.h>
#include <sys/stat.h>
#include <unistd.h>

int void_modules_start(void);
void void_files_std_init(void);

int crashday_skip_splash(void)
{
    const char *value = getenv("PORT_OPTION_SKIP_SPLASH");
    return value && !strcmp(value, "1");
}

#ifndef CRASHDAY_ANDROID_APP
uint64_t void_audio_pause_state(void) { return 0; }
#endif

static void selftest_asset_entry(const char *name, unsigned char kind, void *opaque)
{
    (void)name;
    (void)kind;
    ++*(int *)opaque;
}

void void_process_exit(uint32_t code, int run_detach)
{
    if (run_detach) void_modules_detach_all(1);
    void_log("[crashday] process exit %u", code);
    void_log_flush();
    _exit((int)code);
}

int crashday_game_main(const char *game, const char *data, const char *images, int selftest)
{
    setvbuf(stderr, NULL, _IONBF, 0);
    void_install_fault_handlers();
    if (mkdir(data, 0775) && errno != EEXIST) {
        fprintf(stderr, "cannot create userdata %s: %s\n", data, strerror(errno));
        return 66;
    }
    char log_path[1024], previous_log[1024], oldest_log[1024];
    if (snprintf(log_path, sizeof log_path, "%s/crashday.log", data) >= (int)sizeof log_path ||
        snprintf(previous_log, sizeof previous_log, "%s/crashday.1.log", data) >= (int)sizeof previous_log ||
        snprintf(oldest_log, sizeof oldest_log, "%s/crashday.2.log", data) >= (int)sizeof oldest_log) return 64;
    (void)rename(previous_log, oldest_log);
    (void)rename(log_path, previous_log);
    void_log_open(log_path);
    void_log("[crashday] ARM64 static host: game=%s data=%s images=%s", game, data, images);
    extern int crash_test_requested __attribute__((weak));
    if (crash_test_requested) *(volatile uint32_t *)0 = 0;
    if (!void_guest_reserve()) return 65;
    void_threads_init();
    void_dispatch_init();
#ifdef CRASHDAY_ANDROID_APP
    char overlay[1100];
    if (snprintf(overlay, sizeof overlay, "%s/overlay", data) >= (int)sizeof overlay) return 64;
    void_files_set_overlay(overlay);
#else
    char shell_overlay[1100];
    if (snprintf(shell_overlay, sizeof shell_overlay, "%s/overlay", data) >= (int)sizeof shell_overlay) return 64;
    void_files_set_overlay(shell_overlay);
#endif
    if (!void_files_init(game, data)) return 66;
    void_files_std_init();
    if (!void_modules_init(images)) return 67;
    void_machine_enter();
    if (!void_modules_start()) return 68;
    if (!void_process_args_init()) void_fatal("CRT argc/argv initialization failed");
    uint32_t base = void_module_exe_base();
    uint32_t entry = base + MEM32(base + MEM32(base + 0x3C) + 0x28);
    if (!void_dispatch_find(entry)) void_lift_trap(entry, "PE entry has no statically compiled function");
    if (selftest) {
#ifdef CRASHDAY_ANDROID_APP
        extern void void_android_set_paused(int);
        uint32_t clock_before = void_tick_ms();
        void_android_set_paused(1);
        uint32_t clock_frozen = void_tick_ms();
        usleep(30000);
        int clock_failed = clock_frozen < clock_before || void_tick_ms() != clock_frozen;
        void_android_set_paused(0);
        uint32_t clock_resumed = void_tick_ms();
        clock_failed |= clock_resumed < clock_frozen || clock_resumed - clock_frozen > 20;
        if (clock_failed) void_fatal("paused guest clock selftest failed");
        void_log("[selftest] paused GetTickCount/timeGetTime/QPC clock PASS");
#endif
        xmm_t d = {0}, s = {0};
        d.u8[0] = 'a'; s.u8[0] = 'b'; s.u8[1] = 'a';
        uint32_t index = 0, flags = recomp_pcmpistri(d, s, 0x40, &index);
        if (index != 1 || (flags & 0x8D5u) != 0xC1u) void_fatal("PCMPISTRI byte selftest failed");
        d.u16[0] = (uint16_t)-2; d.u16[1] = 2; s.u16[0] = 1; s.u16[1] = 0;
        flags = recomp_pcmpistri(d, s, 0x07, &index);
        void_log("[selftest] PCMPISTRI range index=%u flags=%08X", index, flags);
        if (index != 0 || (flags & 0x8D5u) != 0x8C1u) void_fatal("PCMPISTRI word-range selftest failed");
        d = (xmm_t){0}; s = (xmm_t){0};
        memcpy(d.u8, "zabc", 4); memcpy(s.u8, "abc", 3);
        flags = recomp_pcmpistri(d, s, 0x0C, &index);
        if (index != 1 || (flags & 0x8D5u) != 0xC1u) void_fatal("PCMPISTRI ordered selftest failed");
        d = (xmm_t){0}; s = (xmm_t){0}; d.u16[0] = 1; s.u16[0] = 2;
        flags = recomp_pcmpistri(d, s, 0x01, &index);
        if (index != 8 || (flags & 0x8D5u) != 0xC0u) void_fatal("PCMPISTRI no-match selftest failed");
        void_log("[selftest] PCMPISTRI byte, range, ordered and no-match PASS");
        xmm_t left = {0}, right = {0}, aligned;
        for (uint32_t i = 0; i < 16; ++i) { left.u8[i] = 0xA0u + i; right.u8[i] = i; }
        aligned = recomp_palignr(left, right, 12);
        for (uint32_t i = 0; i < 16; ++i) {
            uint8_t expected = i < 4 ? right.u8[i + 12] : left.u8[i - 4];
            if (aligned.u8[i] != expected) void_fatal("PALIGNR concatenation selftest failed");
        }
        aligned = recomp_palignr(left, right, 16);
        if (memcmp(&aligned, &left, sizeof left)) void_fatal("PALIGNR boundary selftest failed");
        aligned = recomp_palignr(left, right, 255);
        for (uint32_t i = 0; i < 16; ++i) if (aligned.u8[i]) void_fatal("PALIGNR saturation selftest failed");
        void_log("[selftest] PALIGNR concatenation and boundary PASS");
        aligned = recomp_punpckldq(left, right);
        if (aligned.u32[0] != left.u32[0] || aligned.u32[1] != right.u32[0] ||
            aligned.u32[2] != left.u32[1] || aligned.u32[3] != right.u32[1])
            void_fatal("PUNPCKLDQ selftest failed");
        aligned = recomp_punpckldq(left, left);
        if (aligned.u32[0] != left.u32[0] || aligned.u32[1] != left.u32[0] ||
            aligned.u32[2] != left.u32[1] || aligned.u32[3] != left.u32[1])
            void_fatal("PUNPCKLDQ alias selftest failed");
        void_log("[selftest] PUNPCKLDQ operands and aliasing PASS");
        uint32_t gdi = void_module_handle("gdi32.dll");
        uint32_t name = void_gstrdup("CreateDIBSection");
        uint32_t create_dib = void_module_proc(gdi, name);
        void_gfree(name);
        uint32_t dib_info = void_galloc(40), bits = void_galloc(4), bitmap_info = void_galloc(24);
        MEM32(dib_info) = 40; MEM32(dib_info + 4) = 40; MEM32(dib_info + 8) = 256;
        MEM16(dib_info + 12) = 1; MEM16(dib_info + 14) = 32;
        uint32_t dib_args[6] = { 0, dib_info, 0, bits, 0, 0 };
        void_log("[selftest] GDI input info=%08X size=%u width=%u height=%u planes=%u bpp=%u",
            dib_info, MEM32(dib_info), MEM32(dib_info + 4), MEM32(dib_info + 8),
            MEM16(dib_info + 12), MEM16(dib_info + 14));
        uint32_t bitmap = create_dib ? void_call_guest(create_dib, 6, dib_args, 1) : 0;
        if (!bitmap || !MEM32(bits)) void_fatal("CreateDIBSection selftest failed");
        name = void_gstrdup("GetObjectW");
        uint32_t get_object = void_module_proc(gdi, name);
        void_gfree(name);
        uint32_t object_args[3] = { bitmap, 24, bitmap_info };
        uint32_t object_size = void_call_guest(get_object, 3, object_args, 1);
        void_log("[selftest] GDI bitmap=%08X result=%u type=%u width=%u height=%u stride=%u bpp=%u pixels=%08X/%08X",
            bitmap, object_size, MEM32(bitmap_info), MEM32(bitmap_info + 4), MEM32(bitmap_info + 8),
            MEM32(bitmap_info + 12), MEM16(bitmap_info + 18), MEM32(bitmap_info + 20), MEM32(bits));
        if (object_size != 24 || MEM32(bitmap_info) != 0 ||
            MEM32(bitmap_info + 4) != 40 || MEM32(bitmap_info + 8) != 256 ||
            MEM32(bitmap_info + 12) != 160 || MEM16(bitmap_info + 18) != 32 ||
            MEM32(bitmap_info + 20) != MEM32(bits)) void_fatal("GDI BITMAP layout selftest failed");
        void_gfree(dib_info); void_gfree(bits); void_gfree(bitmap_info);
        void_log("[selftest] GDI DIBSection and BITMAP layout PASS");
        uint32_t fpu_frame = void_galloc(108);
        if (!fpu_frame) void_fatal("x87 state selftest allocation failed");
        g_st[0] = 1.5; g_st[1] = -2.0; g_fp_top = 2; g_fpu_cw = 0x027F; void_fpu_cmp = -1;
        int fpu_saved = void_fpu_save32(fpu_frame);
        void_log("[selftest] FNSAVE result=%d address=%08X writable=%d cw=%04X sw=%04X tag=%04X top=%d saved_cw=%04X",
            fpu_saved, fpu_frame, void_vm_writable(fpu_frame, 108), MEM16(fpu_frame), MEM16(fpu_frame + 4),
            MEM16(fpu_frame + 8), g_fp_top, g_fpu_cw);
        if (!fpu_saved || MEM16(fpu_frame) != 0x027F || MEM16(fpu_frame + 4) != 0x3100 ||
            MEM16(fpu_frame + 8) != 0xFFF0 || g_fp_top != 0 || g_fpu_cw != 0x037F)
            void_fatal("FNSAVE image selftest failed");
        uint8_t expected_fpu_frame[108];
        memcpy(expected_fpu_frame, GPTR(fpu_frame), sizeof expected_fpu_frame);
        if (!void_fpu_restore32(fpu_frame) || g_fp_top != 2 || g_st[0] != 1.5 || g_st[1] != -2.0 ||
            g_fpu_cw != 0x027F || void_fpu_cmp != -1 || !void_fpu_save32(fpu_frame) ||
            memcmp(expected_fpu_frame, GPTR(fpu_frame), sizeof expected_fpu_frame))
            void_fatal("FNSAVE/FRSTOR round-trip selftest failed");
        g_fp_top = 0; void_fpu_cmp = 1; g_st[0] = g_st[1] = 0;
        void_gfree(fpu_frame);
        void_log("[selftest] FNSAVE/FRSTOR 108-byte x87 image PASS");
        uint32_t env = void_galloc(0x28);
        name = void_gstrdup("_setjmp3");
        uint32_t set_jmp = void_module_proc(void_module_load("msvcrt.dll"), name);
        void_gfree(name);
        name = void_gstrdup("longjmp");
        uint32_t long_jump = void_module_proc(void_module_load("msvcrt.dll"), name);
        void_gfree(name);
        if (!env || !set_jmp || !long_jump) void_fatal("setjmp/longjmp lookup failed");
        uint32_t context[6] = { g_esp, g_ebp, g_ebx, g_esi, g_edi, g_fs_base };
        const void_shim *test_shim = void_shim_find("msvcrt.dll", "selftest_setjmp_continuation", 0);
        if (!test_shim) void_fatal("setjmp test continuation lookup failed");
        g_setjmp_resume = void_thunk(test_shim->fn, test_shim->name);
        uint32_t set_args[2] = { env, 0 };
        uint32_t resumed = void_call_guest(set_jmp, 2, set_args, 0);
        g_setjmp_resume = 0;
        if (resumed != 0x12345678 || g_esp != context[0] || g_ebp != context[1] ||
            g_ebx != context[2] || g_esi != context[3] || g_edi != context[4] || g_fs_base != context[5])
            void_fatal("setjmp/longjmp context restore failed");
        void_gfree(env);
        void_log("[selftest] setjmp/longjmp guest context PASS");
        extern int d3d_compile_selftest(void);
        if (d3d_compile_selftest()) void_fatal("D3DCompile HLSL selftest failed");
        void_log("[selftest] D3DCompile HLSL bytecode PASS");
        extern void d3d_device_lifecycle_selftest(void);
        d3d_device_lifecycle_selftest();
        name = void_gstrdup("D3DXCompileShader");
        uint32_t compile31 = void_module_proc(void_module_load("d3dx9_31.dll"), name);
        void_gfree(name);
        if (!compile31) void_fatal("d3dx9_31 delay-load alias selftest failed");
        void_log("[selftest] d3dx9_31 delay-load alias PASS");
        uint32_t block = void_galloc(32);
        if (!block || !void_vm_writable(block, 32)) void_fatal("guest heap selftest failed");
        MEM32(block) = 0x12345678u;
        if (MEM32(block) != 0x12345678u) void_fatal("guest memory selftest failed");
        void_gfree(block);
        extern int void_waveout_selftest(void);
        if (void_waveout_selftest()) void_fatal("winmm waveOut selftest failed");
        if (void_steam_abi_selftest()) void_fatal("Steam thiscall ABI selftest failed");
        if (void_steam_storage_selftest()) void_fatal("Steam local storage selftest failed");
        void_log("[selftest] Steam thiscall ABI and local storage PASS");
        uint32_t comctl = void_module_proc(void_module_handle("comctl32.dll"), 17);
        if (!comctl || void_call_guest(comctl, 0, NULL, 1) != 1) void_fatal("COMCTL ordinal 17 ABI selftest failed");
        void_log("[selftest] COMCTL ordinal 17 no-argument ABI PASS");
        const void_shim *keyboard_shim = void_shim_find("user32.dll", "GetKeyboardState", 0);
        uint32_t keyboard_buffer = void_galloc(256), keyboard_va = keyboard_shim ? void_thunk(keyboard_shim->fn, keyboard_shim->name) : 0;
        uint8_t scan_codes[256];
        extern void void_input_selftest_flush(void);
        void_input_key(0x28, 1);
        void_input_selftest_flush();
        void_input_keyboard_snapshot(scan_codes);
        uint32_t keyboard_arg[1] = { keyboard_buffer };
        uint32_t keyboard_result = keyboard_va ? void_call_guest(keyboard_va, 1, keyboard_arg, 1) : 0;
        if (!keyboard_va || !keyboard_buffer || keyboard_result != 1 ||
            !(MEM8(keyboard_buffer + 0x28) & 0x80u) || scan_codes[0xD0] != 0x80 || void_vk_to_scan(0x28) != 0x150u)
            void_fatal("Win32 virtual-key/DirectInput keyboard state selftest failed");
        void_input_key(0x28, 0);
        void_gfree(keyboard_buffer);
        void_log("[selftest] Win32 virtual-key and DirectInput scan-code state PASS");
        extern int void_rawinput_selftest(void);
        if (void_rawinput_selftest()) void_fatal("Raw Input event/layout selftest failed");
        void_log("[selftest] Raw Input ABI layout PASS");
        int asset_entries = 0;
        int asset_listed = void_android_asset_list("/sdcard/Crashday/game/data", selftest_asset_entry, &asset_entries);
        void_log("[selftest] direct asset data list result=%d entries=%d", asset_listed, asset_entries);
        const void_shim *find_shim = void_shim_find("kernel32.dll", "FindFirstFileExW", 0);
        const void_shim *close_shim = void_shim_find("kernel32.dll", "FindClose", 0);
        uint32_t find_pattern = void_galloc(80), find_data = void_galloc(592);
        if (!find_pattern || !find_data) void_fatal("FindFirstFileExW selftest allocation failed");
        void_utf8_to_gw("C:\\Games\\Crashday\\data\\*.cpk", find_pattern, 40);
        uint32_t find_va = find_shim ? void_thunk(find_shim->fn, find_shim->name) : 0;
        uint32_t find_args[6] = { find_pattern, 0, find_data, 0, 0, 0 };
        uint32_t find_handle = find_va ? void_call_guest(find_va, 6, find_args, 1) : 0xFFFFFFFFu;
        uint32_t close_va = close_shim ? void_thunk(close_shim->fn, close_shim->name) : 0;
        uint32_t close_result = close_va && find_handle != 0xFFFFFFFFu ? void_call_guest(close_va, 1, &find_handle, 1) : 0;
        void_log("[selftest] CPK find_handle=%08X close=%u", find_handle, close_result);
        if (find_handle == 0xFFFFFFFFu || close_result != 1)
            void_fatal("FindFirstFileExW CPK enumeration selftest failed");
        void_gfree(find_pattern); void_gfree(find_data);
        void_log("[selftest] FindFirstFileExW CPK enumeration PASS");
        const char *io_names[] = { "CreateFileW", "GetFileSizeEx", "SetFilePointerEx", "ReadFile", "CloseHandle", "WriteFile", "DeleteFileW",
            "CreateFileMappingA", "MapViewOfFile", "UnmapViewOfFile", "SetCurrentDirectoryW" };
        uint32_t io_va[11];
        for (unsigned i = 0; i < 11; ++i) {
            const void_shim *shim = void_shim_find("kernel32.dll", io_names[i], 0);
            if (!shim) void_fatal("file seek/read selftest import lookup failed");
            io_va[i] = void_thunk(shim->fn, shim->name);
        }
        uint32_t io_path = void_galloc(160), io_result = void_galloc(16), io_data = void_galloc(16);
        if (!io_path || !io_result || !io_data) void_fatal("file seek/read selftest allocation failed");
        void_utf8_to_gw("C:\\Games\\Crashday\\data\\dat000.cpk", io_path, 80);
        uint32_t io_args[7] = { io_path, 0x80000000u, 1, 0, 3, 0, 0 };
        uint32_t file = void_call_guest(io_va[0], 7, io_args, 1);
        int io_failed = file == 0xFFFFFFFFu;
        uint64_t file_size = 0;
        if (!io_failed) {
            io_args[0] = file; io_args[1] = io_result;
            io_failed = void_call_guest(io_va[1], 2, io_args, 1) != 1;
            file_size = MEM64(io_result);
            io_args[1] = 0; io_args[2] = 0; io_args[3] = io_result; io_args[4] = 2;
            io_failed |= void_call_guest(io_va[2], 5, io_args, 1) != 1 || MEM64(io_result) != file_size;
            io_args[4] = 0;
            io_failed |= void_call_guest(io_va[2], 5, io_args, 1) != 1 || MEM64(io_result) != 0;
            io_args[1] = io_data; io_args[2] = 4; io_args[3] = io_result + 8; io_args[4] = 0;
            io_failed |= void_call_guest(io_va[3], 5, io_args, 1) != 1 || MEM32(io_result + 8) != 4 || MEM32(io_data) != 0x04034B50u;
            io_args[0] = file;
            io_failed |= void_call_guest(io_va[4], 1, io_args, 1) != 1;
        }
        if (io_failed || file_size != 70938726u) void_fatal("asset-backed END seek, file size and PK header selftest failed");
        void_log("[selftest] asset-backed END seek, file size and PK header PASS");
        io_args[0] = io_path; io_args[1] = 0x80000000u; io_args[2] = 1; io_args[3] = 0; io_args[4] = 3; io_args[5] = 0; io_args[6] = 0;
        file = void_call_guest(io_va[0], 7, io_args, 1);
        io_args[0] = file; io_args[1] = 0; io_args[2] = 0x08; io_args[3] = 0; io_args[4] = 0; io_args[5] = 0;
        uint32_t mapping = file == 0xFFFFFFFFu ? 0 : void_call_guest(io_va[7], 6, io_args, 1);
        io_args[0] = mapping; io_args[1] = 1; io_args[2] = 0; io_args[3] = 0; io_args[4] = 4;
        uint32_t view = mapping ? void_call_guest(io_va[8], 5, io_args, 1) : 0;
        int mapping_failed = !view || MEM32(view) != 0x04034B50u;
        if (view) { io_args[0] = view; mapping_failed |= void_call_guest(io_va[9], 1, io_args, 1) != 1; }
        if (mapping) { io_args[0] = mapping; mapping_failed |= void_call_guest(io_va[4], 1, io_args, 1) != 1; }
        if (file != 0xFFFFFFFFu) { io_args[0] = file; mapping_failed |= void_call_guest(io_va[4], 1, io_args, 1) != 1; }
        if (mapping_failed) void_fatal("asset-backed FILE_MAP_COPY header selftest failed");
        void_log("[selftest] asset-backed FILE_MAP_COPY header PASS");
        void_utf8_to_gw("user", io_path, 80);
        io_args[0] = io_path;
        int track_failed = void_call_guest(io_va[10], 1, io_args, 1) != 1;
        void_utf8_to_gw("amateurs2.trk", io_path, 80);
        io_args[0] = io_path; io_args[1] = 0x80000000u; io_args[2] = 1; io_args[3] = 0; io_args[4] = 3; io_args[5] = 0; io_args[6] = 0;
        file = void_call_guest(io_va[0], 7, io_args, 1);
        track_failed |= file == 0xFFFFFFFFu;
        file_size = 0;
        if (!track_failed) {
            io_args[0] = file; io_args[1] = io_result;
            track_failed |= void_call_guest(io_va[1], 2, io_args, 1) != 1;
            file_size = MEM64(io_result);
            io_args[1] = io_data; io_args[2] = 4; io_args[3] = io_result + 8; io_args[4] = 0;
            track_failed |= void_call_guest(io_va[3], 5, io_args, 1) != 1 || MEM32(io_result + 8) != 4 || MEM32(io_data) != 0x52544443u;
            io_args[0] = file;
            track_failed |= void_call_guest(io_va[4], 1, io_args, 1) != 1;
        }
        void_utf8_to_gw("C:\\Games\\Crashday", io_path, 80);
        io_args[0] = io_path;
        track_failed |= void_call_guest(io_va[10], 1, io_args, 1) != 1 || file_size != 4302988u;
        if (track_failed) void_fatal("virtual user cwd and relative CDTRK read selftest failed");
        void_log("[selftest] virtual user cwd and relative CDTRK read PASS");
        char *replay_saved = void_path_to_host("C:\\Users\\Player\\AppData\\Local\\Crashday\\__port_replay.rpl");
        const char *replay_cwds[] = { "C:\\Games\\Crashday", "C:\\Users\\Player\\AppData\\Local\\Crashday" };
        for (unsigned i = 0; i < 2; ++i) {
            if (!void_cwd_set(replay_cwds[i])) void_fatal("replay cwd selftest failed");
            char *replay_catalog = void_path_to_host("../replays/__port_replay.rpl");
            if (!replay_catalog || !replay_saved || strcmp(replay_catalog, replay_saved))
                void_fatal("replay catalog and profile writer must resolve to the same store");
            free(replay_catalog);
        }
        free(replay_saved);
        if (!void_cwd_set("C:\\Games\\Crashday")) void_fatal("replay cwd restoration failed");
        void_log("[selftest] replay catalog/profile storage aliases from both working directories PASS");
        void_utf8_to_gw("C:\\Games\\Crashday\\user\\__port_selftest.tmp", io_path, 80);
        io_args[0] = io_path; io_args[1] = 0xC0000000u; io_args[2] = 0; io_args[3] = 0; io_args[4] = 2; io_args[5] = 0; io_args[6] = 0;
        file = void_call_guest(io_va[0], 7, io_args, 1);
        int overlay_failed = file == 0xFFFFFFFFu;
        if (!overlay_failed) {
            MEM32(io_data) = 0x54524150u;
            io_args[0] = file; io_args[1] = io_data; io_args[2] = 4; io_args[3] = io_result; io_args[4] = 0;
            overlay_failed |= void_call_guest(io_va[5], 5, io_args, 1) != 1 || MEM32(io_result) != 4;
            io_args[0] = file;
            overlay_failed |= void_call_guest(io_va[4], 1, io_args, 1) != 1;
        }
        io_args[0] = io_path;
        overlay_failed |= void_call_guest(io_va[6], 1, io_args, 1) != 1;
        void_gfree(io_path); void_gfree(io_result); void_gfree(io_data);
        if (overlay_failed) void_fatal("writable overlay create, write, close and delete selftest failed");
        void_log("[selftest] writable overlay create, write, close and delete PASS");
        const void_shim *tz_shim = void_shim_find("kernel32.dll", "SystemTimeToTzSpecificLocalTime", 0);
        uint32_t tz_input = void_galloc(16), tz_output = void_galloc(16), tz_custom = void_galloc(172);
        if (!tz_input || !tz_output || !tz_custom) void_fatal("time-zone selftest allocation failed");
        MEM16(tz_input) = 2000; MEM16(tz_input + 2) = 1; MEM16(tz_input + 6) = 1;
        uint32_t tz_va = tz_shim ? void_thunk(tz_shim->fn, tz_shim->name) : 0;
        uint32_t tz_args[3] = { 0, tz_input, tz_output };
        int tz_failed = !tz_va || void_call_guest(tz_va, 3, tz_args, 1) != 1;
        memset(GPTR(tz_custom), 0, 172);
        MEM32(tz_custom) = 60;
        tz_args[0] = tz_custom;
        tz_failed |= void_call_guest(tz_va, 3, tz_args, 1) != 1 || MEM16(tz_output + 8) != 1;
        if (tz_failed) void_fatal("SystemTimeToTzSpecificLocalTime selftest failed");
        void_gfree(tz_input); void_gfree(tz_output); void_gfree(tz_custom);
        void_log("[selftest] SystemTimeToTzSpecificLocalTime UTC and custom bias PASS");
        extern int unsupported_import_selftest(void);
        int unsupported_result = unsupported_import_selftest();
        if (unsupported_result) void_fatal("optional import selftest failed: %d", unsupported_result);
        void_log("[selftest] PE binding, DLL/TLS startup, guest heap and static entry lookup PASS; game entry not executed");
        void_machine_leave();
        return 0;
    }
    void_log("[crashday] starting lifted crashday.exe at %08X", entry);
    uint32_t result = void_call_guest(entry, 0, NULL, 1);
    void_log("[crashday] crashday.exe entry returned %08X", result);
    void_machine_leave();
    return (int)result;
}

#ifndef CRASHDAY_ANDROID_APP
int main(int argc, char **argv)
{
    const char *game = "/sdcard/Crashday/game", *data = "/sdcard/Crashday/userdata";
    const char *images = "/sdcard/Crashday/images";
    int selftest = 0;
    for (int i = 1; i < argc; ++i) {
        if (!strcmp(argv[i], "--game") && i + 1 < argc) game = argv[++i];
        else if (!strcmp(argv[i], "--data") && i + 1 < argc) data = argv[++i];
        else if (!strcmp(argv[i], "--images") && i + 1 < argc) images = argv[++i];
        else if (!strcmp(argv[i], "--selftest")) selftest = 1;
        else if (!strcmp(argv[i], "-v")) void_verbose = 1;
        else { fprintf(stderr, "unknown or incomplete option %s\n", argv[i]); return 64; }
    }
    int code = crashday_game_main(game, data, images, selftest);
    void_process_exit((uint32_t)code, 0);
}
#endif
