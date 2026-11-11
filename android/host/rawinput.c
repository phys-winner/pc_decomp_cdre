#include "host.h"
#include "input.h"

static pthread_mutex_t raw_lock = PTHREAD_MUTEX_INITIALIZER;
static uint32_t raw_target, raw_serial;
static void_raw_mouse_event raw_pending;

void void_rawinput_pump(void)
{
    void_raw_mouse_event event;
    while (void_input_raw_mouse(&event, 1) == 1) {
        if (!raw_target) continue;
        uint32_t serial;
        pthread_mutex_lock(&raw_lock);
        raw_pending = event;
        serial = ++raw_serial;
        if (!serial) serial = ++raw_serial;
        pthread_mutex_unlock(&raw_lock);
        void_post_message(raw_target, 0x00FFu, 0, 0x52490000u | (serial & 0xFFFFu));
    }
}

static uint32_t raw_input_data(uint32_t handle, uint32_t command, uint32_t out, uint32_t size, uint32_t header_size)
{
    if (!size || !void_vm_writable(size, 4) || header_size != 16) { void_set_last_error(ERROR_INVALID_PARAMETER_); return 0xFFFFFFFFu; }
    uint32_t needed = command == 0x10000002u ? 16 : 40;
    if (command != 0x10000002u && command != 0x10000003u) { void_set_last_error(ERROR_INVALID_PARAMETER_); return 0xFFFFFFFFu; }
    pthread_mutex_lock(&raw_lock);
    int valid = (handle & 0xFFFF0000u) == 0x52490000u && (handle & 0xFFFFu) == (raw_serial & 0xFFFFu);
    void_raw_mouse_event event = raw_pending;
    pthread_mutex_unlock(&raw_lock);
    if (!valid) { void_set_last_error(ERROR_INVALID_HANDLE_); return 0xFFFFFFFFu; }
    if (!out) { MEM32(size) = needed; return 0; }
    if (MEM32(size) < needed || !void_vm_writable(out, needed)) { void_set_last_error(ERROR_INSUFFICIENT_BUFFER_); return 0xFFFFFFFFu; }
    MEM32(out) = 0; MEM32(out + 4) = needed; MEM32(out + 8) = 1; MEM32(out + 12) = 0;
    if (command == 0x10000003u) {
        MEM16(out + 16) = 0;
        MEM32(out + 20) = event.flags;
        MEM16(out + 20) = (uint16_t)event.flags;
        MEM16(out + 22) = (uint16_t)event.data;
        MEM32(out + 24) = event.buttons;
        MEM32(out + 28) = (uint32_t)event.dx;
        MEM32(out + 32) = (uint32_t)event.dy;
        MEM32(out + 36) = 0;
    }
    return needed;
}

int void_rawinput_selftest(void)
{
    int failed = 0;
    uint32_t out = void_galloc(64), size = void_galloc(4);
    if (!out || !size) return 1;
    void_input_mouse_warp(640, 360);
    void_input_raw_reset();
    raw_target = 0xDEADBEEFu;
    void_input_mouse_move(17, -23);
    void_rawinput_pump();
    uint32_t handle = 0x52490000u | (raw_serial & 0xFFFFu);
    MEM32(size) = 64;
    failed |= raw_input_data(handle, 0x10000003u, out, size, 16) != 40;
    failed |= MEM32(out) != 0 || MEM32(out + 4) != 40 || MEM32(out + 28) != 17 || (int32_t)MEM32(out + 32) != -23;
    MEM32(size) = 16;
    failed |= raw_input_data(handle, 0x10000002u, out, size, 16) != 16 || MEM32(out + 4) != 16;
    extern void void_input_selftest_flush(void);
    void_input_mouse_button(0, 1);
    void_input_selftest_flush();
    void_rawinput_pump();
    handle = 0x52490000u | (raw_serial & 0xFFFFu);
    MEM32(size) = 64;
    failed |= raw_input_data(handle, 0x10000003u, out, size, 16) != 40;
    failed |= MEM16(out + 20) != 1 || MEM32(out + 24) != 1;
    MEM32(size) = 4;
    failed |= raw_input_data(handle, 0x10000003u, out, size, 16) != 0xFFFFFFFFu;
    failed |= raw_input_data(0, 0x10000003u, out, size, 16) != 0xFFFFFFFFu;
    void_input_mouse_button(0, 0);
    void_input_selftest_flush();
    void_input_raw_reset();
    raw_target = 0;
    raw_serial = 0;
    raw_pending = (void_raw_mouse_event){0};
    void_gfree(out); void_gfree(size);
    return failed;
}

WINAPI_EXPORT("user32.dll", GetRawInputData, 5)
{
    return raw_input_data(ARG(0), ARG(1), ARG(2), ARG(3), ARG(4));
}

WINAPI_EXPORT("user32.dll", RegisterRawInputDevices, 3)
{
    if (ARG(1) > 64 || ARG(2) != 12) { void_set_last_error(ERROR_INVALID_PARAMETER_); return 0; }
    for (uint32_t i = 0; i < ARG(1); ++i) {
        uint32_t device = ARG(0) + 12 * i;
        if (MEM16(device) == 1 && MEM16(device + 2) == 2) {
            uint32_t flags = MEM32(device + 4);
            raw_target = flags & 1u ? 0 : MEM32(device + 8);
            if (!raw_target) raw_target = void_window_main();
        }
    }
    return 1;
}

WINAPI_EXPORT("user32.dll", GetRawInputDeviceList, 3)
{
    if (ARG(1)) MEM32(ARG(1)) = 0;
    return 0;
}

WINAPI_EXPORT("user32.dll", GetRawInputDeviceInfoA, 4)
{
    if (ARG(2) != 0x20000007u) { void_set_last_error(ERROR_INVALID_PARAMETER_); return 0xFFFFFFFFu; }
    const char *name = ARG(0) == 1 ? "\\\\?\\Mouse" : ARG(0) == 2 ? "\\\\?\\Keyboard" : NULL;
    if (!name) { void_set_last_error(ERROR_INVALID_HANDLE_); return 0xFFFFFFFFu; }
    uint32_t bytes = (uint32_t)strlen(name) + 1;
    if (ARG(3)) MEM32(ARG(3)) = bytes;
    if (ARG(1) && ARG(3) && MEM32(ARG(3)) >= bytes) memcpy(GPTR(ARG(1)), name, bytes);
    return bytes;
}

WINAPI_EXPORT("user32.dll", GetKeyboardState, 1)
{
    if (!ARG(0) || !void_vm_writable(ARG(0), 256)) { void_set_last_error(998); return 0; }
    for (unsigned i = 0; i < 256; ++i) {
        uint16_t state = (uint16_t)void_input_key_state(i);
        MEM8(ARG(0) + i) = (uint8_t)(((state >> 8) & 0x80u) | (state & 1u));
    }
    return 1;
}

WINAPI_EXPORT("user32.dll", GetKeyboardLayout, 1) { return 0x04090409u; }
WINAPI_EXPORT("user32.dll", MapVirtualKeyW, 2)
{
    uint32_t vk = ARG(0), type = ARG(1);
    if (type == 0) return void_vk_to_dik(vk);
    if (type == 2) return vk;
    if (type == 1 || type == 3) {
        if (vk >= 'A' && vk <= 'Z') return 0x1E + vk - 'A';
        if (vk >= '0' && vk <= '9') return vk == '0' ? 0x0B : 1 + vk - '1';
        if (vk == 0x20) return 0x39;
        if (vk == 0x0D) return 0x1C;
        if (vk == 0x1B) return 1;
        return 0;
    }
    return 0;
}

WINAPI_EXPORT("user32.dll", ToUnicode, 6)
{
    uint32_t character = void_input_vk_char(ARG(0));
    if (!character) return 0;
    MEM16(ARG(3)) = (uint16_t)character;
    if (ARG(4) > 1) MEM16(ARG(3) + 2) = 0;
    return 1;
}

WINAPI_EXPORT("user32.dll", GetDoubleClickTime, 0) { return 500; }
