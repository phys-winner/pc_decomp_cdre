#include "host.h"

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
    MEM16(out + 4) = 0xF3FFu;
    MEM8(out + 6) = MEM8(out + 7) = 255;
    for (uint32_t axis = 8; axis < 16; axis += 2) MEM16(out + axis) = 32767;
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
