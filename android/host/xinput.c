#include "host.h"

static pthread_mutex_t rumble_lock = PTHREAD_MUTEX_INITIALIZER;
static uint32_t rumble_state, rumble_pending;

uint32_t void_input_rumble(int clear)
{
    pthread_mutex_lock(&rumble_lock);
    uint32_t result = rumble_pending;
    rumble_pending = clear ? 0 : rumble_state;
    if (clear) rumble_state = 0;
    pthread_mutex_unlock(&rumble_lock);
    return clear ? 0 : result;
}

extern int void_input_touch_pad(uint32_t index, uint8_t out[16]);
extern int void_input_touch_pad_snapshot(uint32_t index, uint8_t out[16], int consume);

static uint32_t xinput_get_state(uint32_t index, uint32_t out)
{
    if (index > 3 || !out) return 160;
    uint8_t state[16];
    if (!void_input_touch_pad(index, state)) {
        void_set_last_error(0);
        return 1167;
    }
    if (!void_vm_writable(out, 16)) return 998;
    memcpy(GPTR(out), state, 16);
    void_set_last_error(0);
    return 0;
}

static uint32_t xinput_set_state(uint32_t index, uint32_t vibration)
{
    if (index > 3 || !vibration) return 160;
    uint8_t state[16];
    if (!void_input_touch_pad_snapshot(index, state, 0)) {
        void_set_last_error(0);
        return 1167;
    }
    if (!void_vm_readable(vibration, 4)) return 998;
    uint32_t low = (uint16_t)MEM16(vibration), high = (uint16_t)MEM16(vibration + 2);
    pthread_mutex_lock(&rumble_lock);
    rumble_state = low | (high << 16);
    low = low > (rumble_pending & 0xFFFFu) ? low : rumble_pending & 0xFFFFu;
    high = high > (rumble_pending >> 16) ? high : rumble_pending >> 16;
    rumble_pending = low | (high << 16);
    pthread_mutex_unlock(&rumble_lock);
    void_set_last_error(0);
    return 0;
}

static uint32_t xinput_capabilities(uint32_t index, uint32_t flags, uint32_t out)
{
    if (index > 3 || flags > 1 || !out) return 160;
    uint8_t state[16];
    if (!void_input_touch_pad_snapshot(index, state, 0)) {
        void_set_last_error(0);
        return 1167;
    }
    if (!void_vm_writable(out, 20)) return 998;
    memset(GPTR(out), 0, 20);
    MEM8(out) = 1;
    MEM8(out + 1) = 1;
    MEM16(out + 2) = 1; /* XINPUT_CAPS_FFB_SUPPORTED */
    MEM16(out + 4) = 0xF3FFu;
    MEM8(out + 6) = MEM8(out + 7) = 255;
    for (uint32_t axis = 8; axis < 16; axis += 2) MEM16(out + axis) = 32767;
    MEM16(out + 16) = MEM16(out + 18) = 65535;
    void_set_last_error(0);
    return 0;
}

static uint32_t xinput_battery(uint32_t index, uint32_t device, uint32_t out)
{
    if (index > 3 || device > 1 || !out) return 160;
    uint8_t state[16];
    if (!void_input_touch_pad_snapshot(index, state, 0)) {
        void_set_last_error(0);
        return 1167;
    }
    if (!void_vm_writable(out, 4)) return 998;
    MEM8(out) = 0;
    MEM8(out + 1) = 3;
    MEM16(out + 2) = 0;
    void_set_last_error(0);
    return 0;
}

WINAPI_ORDINAL("xinput1_3.dll", XInputGetState, 2, 2) { return xinput_get_state(ARG(0), ARG(1)); }
WINAPI_ORDINAL("xinput1_3.dll", XInputSetState, 3, 2) { return xinput_set_state(ARG(0), ARG(1)); }
WINAPI_EXPORT("xinput1_3.dll", XInputGetCapabilities, 3) { return xinput_capabilities(ARG(0), ARG(1), ARG(2)); }
WINAPI_EXPORT("xinput1_3.dll", XInputGetBatteryInformation, 3) { return xinput_battery(ARG(0), ARG(1), ARG(2)); }
WINAPI_EXPORT_AS("xinput1_4.dll", XInput14GetState, "XInputGetState", 0, 2) { return xinput_get_state(ARG(0), ARG(1)); }
WINAPI_EXPORT_AS("xinput1_4.dll", XInput14SetState, "XInputSetState", 0, 2) { return xinput_set_state(ARG(0), ARG(1)); }
WINAPI_EXPORT_AS("xinput1_4.dll", XInput14GetCapabilities, "XInputGetCapabilities", 0, 3) { return xinput_capabilities(ARG(0), ARG(1), ARG(2)); }
WINAPI_EXPORT_AS("xinput1_4.dll", XInput14GetBatteryInformation, "XInputGetBatteryInformation", 0, 3) { return xinput_battery(ARG(0), ARG(1), ARG(2)); }
