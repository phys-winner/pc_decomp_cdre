/* Real ARM64 input/XInput and persona notification boundary; no player files. */
#include "../../android/host/xinput.c"
#include "../../android/host/steam.c"
#include "../../android/host/input.c"
#include <assert.h>
#include <math.h>
#include <unistd.h>

extern void void_input_controller(uint32_t, float, float, float, float, float, float);
extern void void_input_drive_active(int);
void void_process_exit(uint32_t code, int detach) { (void)detach; _exit((int)code); }
void void_android_request_refresh(uint32_t rate) { (void)rate; }
void crashday_cinematic_active(int active) { (void)active; }
float crashday_weapon_coord(unsigned weapon, unsigned axis, float value, float origin)
{ (void)weapon; (void)axis; (void)origin; return value; }
float crashday_hud_y(float y, float offset) { (void)offset; return y; }
int crashday_ui_list_detached(uint32_t widget) { (void)widget; return 0; }

int main(void)
{
    assert(void_guest_reserve());
    void_threads_init(); void_dispatch_init(); void_machine_enter();
    uint32_t state = void_galloc(32), caps = void_galloc(32);
    assert(state && caps && !xinput_capabilities(0, 0, caps));
    assert(MEM16(caps + 4) == 0xF3FF && MEM8(caps + 6) == 255 && MEM8(caps + 7) == 255);
    for (unsigned bit = 0; bit < 16; ++bit) if ((1u << bit) & 0xF3FF) {
        void_input_drive_active(0);
        void_input_controller(0x10000u | (1u << bit), 0, 0, 0, 0, 0, 0);
        assert(!xinput_get_state(0, state) && MEM16(state + 4) == (1u << bit));
    }
    void_input_drive_active(0);
    void_input_controller(0x1F3FF, .75f, -.5f, -.25f, .5f, .25f, .75f);
    assert(!xinput_get_state(0, state));
    assert(MEM16(state + 4) == 0xF3FF && MEM8(state + 6) == 64 && MEM8(state + 7) == 191);
    assert((int16_t)MEM16(state + 8) == 24575 && (int16_t)MEM16(state + 10) == 16384);
    assert((int16_t)MEM16(state + 12) == -8192 && (int16_t)MEM16(state + 14) == -16384);
    void_input_drive_active(0);
    assert(!xinput_get_state(0, state));
    for (unsigned i = 4; i < 16; ++i) assert(!MEM8(state + i));
    assert(xinput_get_state(4, state) == 160);
    assert(xinput_capabilities(0, 2, caps) == 160);
    void_input_key('W', 1); void_input_mouse_button(0, 1);
    assert(physical_keys['W'] && physical_buttons[0]);
    void_input_cancel();
    assert(!physical_keys['W'] && !physical_buttons[0] && !key_count);
    void_steam_player_name_set("Driver");
    assert(!strcmp(void_steam_player_name(), "Driver") && !steam_lan.event_write);
    steam_lan.started = 1; steam_lan.id = UINT64_C(0x0110000100001234);
    void_steam_player_name_set("\xD0\x93\xD0\xBE\xD0\xBD\xD1\x89\xD0\xB8\xD0\xBA");
    assert(!strcmp(void_steam_player_name(), steam_lan.name));
    assert(steam_lan.event_write == 1);
    const lan_event *event = &steam_lan.events[0];
    assert(event->type == 304 && event->size == 12 && !event->call);
    assert(lan_get64(event->data) == steam_lan.id && lan_get32(event->data + 8) == 1);
    puts("PASS ARM64: all XInput buttons, four signed stick axes, analog triggers, neutral cancellation, capabilities and original persona notification");
    return 0;
}
