/* Input state: what Android touch controls (or a test script) produce, kept
 * as Win32 virtual keys, DirectInput scan codes, a relative mouse and an
 * absolute cursor. Host threads record events; guest message APIs and
 * DirectInput read them under the machine lock. */
#include "host.h"
#include "input.h"
#include "d3d9_internal.h"
#include <math.h>
#ifdef UT3_ANDROID_APP
#include <jni.h>
#endif

static pthread_mutex_t input_lock = PTHREAD_MUTEX_INITIALIZER;
static int screen_w = 1280, screen_h = 720;
static int cursor_x = 640, cursor_y = 360;
static int cursor_clip_active;
static int32_t cursor_clip[4];
static int pointer_seen;
static uint64_t pointer_moved_ns;
static uint8_t vk_down[256], vk_toggle[256];
static uint8_t dik_down[256];
static uint8_t physical_keys[256], touch_keys[256], touch_key_ledger[256];
static uint8_t physical_buttons[8], touch_buttons[8], touch_button_ledger[8];
static uint8_t touch_key_latched[256], touch_mouse_latched[8];
static int touch_dispatch;
static float touch_remainder_x, touch_remainder_y;
static int32_t touch_mouse_dx, touch_mouse_dy;
static int16_t touch_stick_x, touch_stick_y;
/* Held action bits from Java; bit 27 is the virtual pad's left shoulder, the
 * original GBA_WeaponPicker, whose quick-pick direction is the right stick. */
#define TOUCH_ACTION_BITS 28u
#define TOUCH_PICKER (1u << 27)
static uint16_t touch_pad_buttons;
static int16_t touch_right_x, touch_right_y;
/* The stick as Java sent it, before the axis dead-zone compensation, and the
 * left stick the pad last reported (look steering recomputes it per read). */
static float touch_move_x, touch_move_y;
static int16_t touch_pad_x, touch_pad_y;
/* Script details which never reset input: weapon bar slots, vehicle flags. */
static uint32_t touch_weapon_slots, touch_vehicle_flags;
/* Weapon mailbox request waiting for the VM-owned pump; a preview is shown. */
static uint32_t weapon_pending;
static int weapon_previewing;
extern int void_touch_game_details(uint32_t out[2]) __attribute__((weak));
extern int void_touch_weapon_request(uint32_t request) __attribute__((weak));
extern int void_touch_steer(float out[3], uint32_t *flags) __attribute__((weak));
static uint32_t touch_packet, touch_held;
/* WM_KEYDOWN delivered to the guest queue without a later WM_KEYUP, by the
 * posted wParam. Original WndProc 00A1139C sends InputKey(IE_Released) for
 * every WM_KEYUP, so a release ledger UP for a key the guest already saw
 * released reaches whichever original scene opened in between: the
 * MidGameMenu opened by Escape's own release closes on that second release. */
static uint8_t guest_key_down[256];
static int touch_connected;
static uint32_t touch_epoch = 1;
static int touch_blocked;
static int32_t touch_wheel;
static uint64_t touch_cursor_context;
static int touch_game_active, touch_game_seen, touch_game_logged;
static int touch_vehicle = -1;
static uint32_t touch_game_snapshot[4];
extern int void_touch_game_read(uint32_t out[4]) __attribute__((weak));
extern int void_touch_ui_mouse(uint32_t out[2]) __attribute__((weak));
extern int void_touch_ui_control(void) __attribute__((weak));
extern int void_touch_ui_scroll(int steps) __attribute__((weak));
extern int void_machine_is_owned(void) __attribute__((weak));
static void touch_observe_game(void);
static void touch_reset_locked(void);
static int touch_releasing;
static int ui_logical_x, ui_logical_y, ui_waiting, ui_wait_x, ui_wait_y;
static uint32_t ui_wait_epoch;
static uint64_t ui_logical_context, ui_wait_context, ui_wait_started;
static int ui_probe_status=-1,ui_scroll_pending;
static uint64_t ui_probe_context;
static uint32_t ui_probe_epoch;
static int ui_target_clear;
#define UI_PROBE UINT32_C(0x40000000)
#define UI_SCROLL UINT32_C(0x40000001)
#define UI_SCROLL_ACK UINT32_C(0x40000002)
#define UI_END UINT32_C(0x40000003)
/* Pressed since the last snapshot: a tap shorter than a frame (a touch
 * button, a slow map frame) is still seen once by a game that polls with
 * GetDeviceState, as GetAsyncKeyState's "pressed since" bit does on Windows. */
static uint8_t dik_latched[256], mouse_latched[8];
static int32_t mouse_dx, mouse_dy, mouse_dz;
static uint8_t mouse_buttons[8];
static uint32_t sequence;
static int32_t raw_x = 640, raw_y = 360;
static void_raw_mouse_event raw_queue[256];
static int raw_head, raw_count;
static uint32_t sdl_warp_serial;
static int sdl_warp_x, sdl_warp_y, sdl_warp_dx, sdl_warp_dy;
#ifdef CRASHDAY_ANDROID_APP
typedef struct { uint32_t serial, x, y; } crashday_motion_event;
typedef struct { uint32_t serial, epoch; uint8_t button, down; } crashday_button_event;
typedef struct { uint32_t serial, epoch; int delta; } crashday_wheel_event;
static crashday_motion_event motion_queue[256];
static crashday_button_event button_queue[256];
static crashday_wheel_event wheel_queue[256];
static int wheel_head, wheel_count;
static uint32_t android_input_epoch = 1;
typedef struct { uint8_t vk, down; } crashday_key_event;
static crashday_key_event key_queue[256];
static int key_head, key_count;
static uint32_t key_down_frame[256];
static void key_locked(uint32_t vk, int down);
static void crashday_key_pump(void);
static void mouse_wheel_locked(int delta, int windows_message);

static int motion_head, motion_count, button_head, button_count;
static uint32_t motion_inflight, motion_ack;

void void_input_cancel(void)
{
    pthread_mutex_lock(&input_lock);
    __atomic_add_fetch(&android_input_epoch, 1, __ATOMIC_RELEASE);
    key_head = key_count = 0;
    for (unsigned vk = 0; vk < 256; ++vk) if (vk_down[vk]) key_locked(vk, 0);
    memset(key_down_frame, 0, sizeof key_down_frame);
    extern void crashday_text_editor_request(uint32_t);
    crashday_text_editor_request(0);
    motion_head = motion_count = button_head = button_count = wheel_head = wheel_count = 0;
    motion_inflight = 0;
    motion_ack = __atomic_load_n(&sdl_warp_serial, __ATOMIC_RELAXED);
    pthread_mutex_unlock(&input_lock);
    void_input_mouse_warp(0, 0);
    pthread_mutex_lock(&input_lock);
    for (int button = 0; button < 8; ++button) if (mouse_buttons[button]) {
        button_queue[(button_head + button_count) & 255] =
            (crashday_button_event){__atomic_load_n(&sdl_warp_serial, __ATOMIC_RELAXED),
                __atomic_load_n(&android_input_epoch, __ATOMIC_ACQUIRE), (uint8_t)button, 0};
        ++button_count;
    }
    pthread_mutex_unlock(&input_lock);
}
static int pointer_focus_requested;
static uint32_t observed_buttons;
#endif

void void_input_mouse_observed(uint32_t buttons)
{
#ifdef CRASHDAY_ANDROID_APP
    pthread_mutex_lock(&input_lock);
    observed_buttons |= buttons & 3u;
    pthread_mutex_unlock(&input_lock);
#else
    (void)buttons;
#endif
}

static void raw_push(int dx, int dy, uint32_t flags, uint32_t data)
{
    if (raw_count == 256) return;
    uint32_t buttons = 0;
    for (int i = 0; i < 5; ++i) if (mouse_buttons[i]) buttons |= 1u << i;
    raw_queue[(raw_head + raw_count) & 255] = (void_raw_mouse_event){dx, dy, flags, data, buttons};
    ++raw_count;
}

int void_input_raw_mouse(void_raw_mouse_event *out, int max)
{
    pthread_mutex_lock(&input_lock);
    if (max < 0) max = 0;
    int count = raw_count < max ? raw_count : max;
    for (int i = 0; i < count; ++i) out[i] = raw_queue[(raw_head + i) & 255];
    raw_head = (raw_head + count) & 255;
    raw_count -= count;
    pthread_mutex_unlock(&input_lock);
    return count;
}

void void_input_raw_reset(void)
{
    pthread_mutex_lock(&input_lock);
    raw_head = raw_count = 0;
    pthread_mutex_unlock(&input_lock);
}

#define RING 256
typedef struct { void_input_event e[RING]; uint8_t touch[RING]; int head, count, overflow; } ring_t;
static ring_t key_ring, mouse_ring;

typedef struct { uint32_t msg, wparam, lparam; int touch; uint64_t context; } pending_t;
static pending_t pending[512];
static int pending_count;
static int ui_message(uint32_t message)
{ return (message>=UI_PROBE && message<=UI_END) || (message>=0x200u && message<=0x208u); }

static void clip_bounds_locked(int32_t rect[4])
{
    rect[0] = rect[1] = 0; rect[2] = screen_w; rect[3] = screen_h;
    if (!cursor_clip_active) return;
    if (cursor_clip[0] > rect[0]) rect[0] = cursor_clip[0];
    if (cursor_clip[1] > rect[1]) rect[1] = cursor_clip[1];
    if (cursor_clip[2] < rect[2]) rect[2] = cursor_clip[2];
    if (cursor_clip[3] < rect[3]) rect[3] = cursor_clip[3];
    if (rect[0] > rect[2] || rect[1] > rect[3]) {
        rect[0] = rect[1] = 0; rect[2] = screen_w; rect[3] = screen_h;
    }
}

static void clamp_point_locked(int64_t x, int64_t y, int *out_x, int *out_y)
{
    int32_t rect[4]; clip_bounds_locked(rect);
    /* Ordered branches reproduce Win32's zero-width rectangle behavior:
     * below left maps to left; at/above right maps to right-1. */
    if (x < rect[0]) x = rect[0]; else if (x >= rect[2]) x = (int64_t)rect[2] - 1;
    if (y < rect[1]) y = rect[1]; else if (y >= rect[3]) y = (int64_t)rect[3] - 1;
    *out_x = x < 0 ? 0 : x >= screen_w ? screen_w - 1 : (int)x;
    *out_y = y < 0 ? 0 : y >= screen_h ? screen_h - 1 : (int)y;
}

static void clamp_cursor_locked(int64_t x, int64_t y)
{
    clamp_point_locked(x,y,&cursor_x,&cursor_y);
}

/* Private user32/input interface: host pointers, no new shared header. */
int void_input_clip_cursor(const int32_t *rect)
{
    if (rect && (rect[0] > rect[2] || rect[1] > rect[3])) return 0;
    pthread_mutex_lock(&input_lock);
    cursor_clip_active = rect != NULL;
    if (rect) memcpy(cursor_clip, rect, sizeof cursor_clip);
    clamp_cursor_locked(cursor_x, cursor_y);
    pthread_mutex_unlock(&input_lock);
    return 1;
}

void void_input_clip_bounds(int32_t rect[4])
{
    pthread_mutex_lock(&input_lock); clip_bounds_locked(rect); pthread_mutex_unlock(&input_lock);
}

void void_input_screen_size(int *w, int *h)
{
    pthread_mutex_lock(&input_lock);
    *w = screen_w; *h = screen_h;
    pthread_mutex_unlock(&input_lock);
}
void void_input_set_screen_size(int w, int h)
{
    if (w <= 0 || h <= 0) return;
    pthread_mutex_lock(&input_lock);
    screen_w = w; screen_h = h;
    clamp_cursor_locked(cursor_x, cursor_y);
    pthread_mutex_unlock(&input_lock);
}

void void_input_cursor(uint32_t *x, uint32_t *y)
{
    pthread_mutex_lock(&input_lock);
    *x = (uint32_t)cursor_x; *y = (uint32_t)cursor_y;
    pthread_mutex_unlock(&input_lock);
}

int void_input_pointer(uint32_t *x, uint32_t *y, uint64_t *moved_ns)
{
    pthread_mutex_lock(&input_lock);
    *x = (uint32_t)cursor_x; *y = (uint32_t)cursor_y; *moved_ns = pointer_moved_ns;
    int seen = pointer_seen;
    pthread_mutex_unlock(&input_lock);
    return seen;
}

void void_input_set_cursor(int x, int y)
{
    pthread_mutex_lock(&input_lock);
    clamp_cursor_locked(x, y);
    pthread_mutex_unlock(&input_lock);
}

int16_t void_input_key_state(uint32_t vk)
{
    pthread_mutex_lock(&input_lock);
    int16_t s = (int16_t)((vk_down[vk & 0xFF] ? 0x8000 : 0) | (vk_toggle[vk & 0xFF] & 1));
    pthread_mutex_unlock(&input_lock);
    return s;
}

uint32_t void_input_vk_char(uint32_t vk)
{
    int shift = vk_down[0x10] != 0;
    if (vk >= 'A' && vk <= 'Z') return shift ? vk : vk + 32;
    if (vk >= '0' && vk <= '9') return vk;
    switch (vk) {
    case 0x20: return ' ';
    case 0x0D: return '\r';
    case 0x08: return 8;
    case 0x1B: return 27;
    case 0x09: return '\t';
    case 0xBD: return shift ? '_' : '-';
    case 0xBB: return shift ? '+' : '=';
    case 0xBE: return shift ? '>' : '.';
    case 0xBC: return shift ? '<' : ',';
    case 0xBF: return shift ? '?' : '/';
    case 0xBA: return shift ? ':' : ';';
    case 0xDE: return shift ? '"' : '\'';
    case 0xC0: return shift ? '~' : '`';
    default: return 0;
    }
}

/* Virtual key -> DirectInput scan code (DIK_*). */
uint32_t void_vk_to_dik(uint32_t vk)
{
    static const uint8_t letters[26] = {
        0x1E,0x30,0x2E,0x20,0x12,0x21,0x22,0x23,0x17,0x24,0x25,0x26,0x32,
        0x31,0x18,0x19,0x10,0x13,0x1F,0x14,0x16,0x2F,0x11,0x2D,0x15,0x2C };
    static const uint8_t digits[10] = { 0x0B,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A };
    if (vk >= 'A' && vk <= 'Z') return letters[vk - 'A'];
    if (vk >= '0' && vk <= '9') return digits[vk - '0'];
    if (vk >= 0x70 && vk <= 0x79) return 0x3B + (vk - 0x70);   /* F1..F10 */
    static const uint8_t numpad[10] = {0x52,0x4F,0x50,0x51,0x4B,0x4C,0x4D,0x47,0x48,0x49};
    if (vk >= 0x60 && vk <= 0x69) return numpad[vk - 0x60];
    switch (vk) {
    case 0x90: return 0x45;   /* NUMLOCK */
    case 0x91: return 0x46;   /* SCROLL */
    case 0x14: return 0x3A;   /* CAPSLOCK */
    case 0x2C: return 0xB7;   /* SYSRQ */
    case 0x6A: return 0x37;   /* MULTIPLY */
    case 0x6B: return 0x4E;   /* ADD */
    case 0x6D: return 0x4A;   /* SUBTRACT */
    case 0x6E: return 0x53;   /* DECIMAL */
    case 0x6F: return 0xB5;   /* DIVIDE */
    case 0x0C: return 0x9C;   /* NUM_ENTER (private VK, distinct from RETURN) */
    case 0x7A: return 0x57;   /* F11 */
    case 0x7B: return 0x58;   /* F12 */
    case 0x1B: return 0x01;   /* ESCAPE */
    case 0x0D: return 0x1C;   /* RETURN */
    case 0x20: return 0x39;   /* SPACE */
    case 0x09: return 0x0F;   /* TAB */
    case 0x08: return 0x0E;   /* BACK */
    case 0x10: case 0xA0: return 0x2A;   /* LSHIFT */
    case 0xA1: return 0x36;   /* RSHIFT */
    case 0x11: case 0xA2: return 0x1D;   /* LCONTROL */
    case 0xA3: return 0x9D;   /* RCONTROL */
    case 0x12: case 0xA4: return 0x38;   /* LMENU */
    case 0xA5: return 0xB8;   /* RMENU */
    case 0x25: return 0xCB;   /* LEFT */
    case 0x26: return 0xC8;   /* UP */
    case 0x27: return 0xCD;   /* RIGHT */
    case 0x28: return 0xD0;   /* DOWN */
    case 0x21: return 0xC9;   /* PRIOR (Page Up) */
    case 0x22: return 0xD1;   /* NEXT (Page Down) */
    case 0x24: return 0xC7;   /* HOME */
    case 0x23: return 0xCF;   /* END */
    case 0x2D: return 0xD2;   /* INSERT */
    case 0x2E: return 0xD3;   /* DELETE */
    case 0xBD: return 0x0C;   /* MINUS */
    case 0xBB: return 0x0D;   /* EQUALS */
    case 0xC0: return 0x29;   /* GRAVE */
    case 0xBA: return 0x27;   /* SEMICOLON */
    case 0xDE: return 0x28;   /* APOSTROPHE */
    case 0xBC: return 0x33;   /* COMMA */
    case 0xBE: return 0x34;   /* PERIOD */
    case 0xBF: return 0x35;   /* SLASH */
    case 0xDB: return 0x1A;   /* LBRACKET */
    case 0xDD: return 0x1B;   /* RBRACKET */
    case 0xDC: return 0x2B;   /* BACKSLASH */
    case 0x13: return 0xC5;   /* PAUSE */
    default: return 0;
    }
}

uint32_t void_vk_to_scan(uint32_t vk)
{
    uint32_t scan = void_vk_to_dik(vk), extended = 0;
    switch (vk) {
    case 0x25: case 0x26: case 0x27: case 0x28:
    case 0x21: case 0x22: case 0x23: case 0x24: case 0x2D: case 0x2E:
        scan &= 0x7Fu;
        extended = 0x100u;
        break;
    case 0x0C: case 0xA3: case 0xA5: case 0x6F:
        extended = 0x100u;
        break;
    case 0x5B: scan = 0xDB; extended = 0x100u; break;
    case 0x5C: scan = 0xDC; extended = 0x100u; break;
    case 0x5D: scan = 0xDD; extended = 0x100u; break;
    default: break;
    }
    return scan | extended;
}

static void ring_push(ring_t *r, uint32_t ofs, uint32_t data)
{
    /* Buffered DI history never blocks messages or immediate device state.
     * Preserve the unread prefix and report any omitted newer history. */
    if (r->count == RING) { r->overflow = 1; return; }
    void_input_event *e = &r->e[(r->head + r->count) % RING];
    r->touch[(r->head + r->count) % RING] = (uint8_t)(touch_dispatch != 0);
    e->ofs = ofs; e->data = data; e->time = void_tick_ms(); e->seq = ++sequence;
    ++r->count;
}

static int ring_take(ring_t *r, void_input_event *out, int max, int peek, int *overflow)
{
    pthread_mutex_lock(&input_lock);
    if (max < 0) max = 0;
    int n = r->count < max ? r->count : max;
    if (out) for (int i = 0; i < n; ++i) out[i] = r->e[(r->head + i) % RING];
    if (overflow) *overflow = r->overflow;
    if (!peek) { r->head = (r->head + n) % RING; r->count -= n; r->overflow = 0; }
    pthread_mutex_unlock(&input_lock);
    return n;
}

static void pend(uint32_t msg, uint32_t wparam, uint32_t lparam)
{
    if (pending_count < 512) {
        uint64_t context=0;
        if (touch_dispatch && !touch_releasing && touch_game_active &&
            (touch_cursor_context&3u)==3u && msg>=0x200u && msg<=0x208u)
            context=touch_cursor_context;
        pending[pending_count]=(pending_t){msg,wparam,lparam,touch_dispatch,context};++pending_count;
    }
}

static uint32_t ui_point_locked(void)
{
    if (ui_logical_context!=touch_cursor_context) {
        ui_logical_context=touch_cursor_context;
        ui_logical_x=cursor_x;ui_logical_y=cursor_y;
    }
    return ((uint32_t)(ui_logical_y&0xFFFF)<<16)|(uint32_t)(ui_logical_x&0xFFFF);
}

/* WM_MOUSE* low-word flags describe the state after this event. */
static uint32_t mouse_wparam_locked(void)
{
    return (mouse_buttons[0] ? 0x0001u : 0) | (mouse_buttons[1] ? 0x0002u : 0) |
           (vk_down[0x10] ? 0x0004u : 0) | (vk_down[0x11] ? 0x0008u : 0) |
           (mouse_buttons[2] ? 0x0010u : 0) | (mouse_buttons[3] ? 0x0020u : 0) |
           (mouse_buttons[4] ? 0x0040u : 0);
}

/* A modifier arrives as its generic VK (VK_CONTROL from a scan code or a
 * script) or a sided one; a keyboard's key is a sided key. Windows keeps the
 * sided and the generic state (GetAsyncKeyState answers both) and posts the
 * generic VK in WM_KEYDOWN/UP. */
static uint32_t key_message_vk(uint32_t vk)
{
    return vk >= 0xA0 && vk <= 0xA5 ? 0x10 + (vk - 0xA0) / 2 : vk == 0x0C ? 0x0D : vk;
}

static void key_locked(uint32_t vk, int down)
{
    int was = vk_down[vk];
    vk_down[vk] = (uint8_t)(down != 0);
    uint32_t message_vk = key_message_vk(vk);
    if (down && !was) vk_toggle[vk] ^= 1;
    uint32_t dik = void_vk_to_dik(vk);
    if (dik) {
        dik_down[dik] = down ? 0x80 : 0;
        if (down) (touch_dispatch ? touch_key_latched : dik_latched)[dik] = 0x80;
        ring_push(&key_ring, dik, down ? 0x80u : 0u);
    }
    if (vk == 0xA0 || vk == 0xA1) vk_down[0x10] = vk_down[0xA0] | vk_down[0xA1];
    if (vk == 0xA2 || vk == 0xA3) vk_down[0x11] = vk_down[0xA2] | vk_down[0xA3];
    if (vk == 0xA4 || vk == 0xA5) vk_down[0x12] = vk_down[0xA4] | vk_down[0xA5];
    uint32_t lparam = 1u | (void_vk_to_scan(vk) << 16) | (down ? 0u : 0xC0000000u) | (was && down ? 0x40000000u : 0u);
    pend(down ? 0x0100u : 0x0101u, message_vk, lparam);
}

void void_input_key(uint32_t vk, int down)
{
    vk &= 0xFF;
    if (vk >= 0x10 && vk <= 0x12) vk = 0xA0 + 2 * (vk - 0x10);
    pthread_mutex_lock(&input_lock);
    physical_keys[vk] = down != 0;
    uint32_t dik = void_vk_to_dik(vk);
    if (down && dik) dik_latched[dik] = 0x80;
    if (!touch_keys[vk]) {
#ifdef CRASHDAY_ANDROID_APP
        while (key_count >= 256) {
            crashday_key_event oldest = key_queue[key_head];
            key_locked(oldest.vk, oldest.down);
            key_head = (key_head + 1) & 255;
            --key_count;
        }
        key_queue[(key_head + key_count) & 255] = (crashday_key_event){(uint8_t)vk, (uint8_t)(down != 0)};
        ++key_count;
#else
        key_locked(vk, down);
#endif
    }
    pthread_mutex_unlock(&input_lock);
}

static void crashday_key_pump(void)
{
#ifdef CRASHDAY_ANDROID_APP
    pthread_mutex_lock(&input_lock);
    while (key_count) {
        crashday_key_event event = key_queue[key_head];
        if (!event.down && g_d3d_device && g_d3d_device->frame - key_down_frame[event.vk] < 2) break;
        key_locked(event.vk, event.down);
        if (event.down) key_down_frame[event.vk] = g_d3d_device ? g_d3d_device->frame : 0;
        key_head = (key_head + 1) & 255;
        --key_count;
    }
    pthread_mutex_unlock(&input_lock);
#endif
}

static void mouse_move_locked(int dx, int dy)
{
    int old_x = cursor_x, old_y = cursor_y;
    mouse_dx += dx; mouse_dy += dy;
    if (touch_dispatch) { touch_mouse_dx += dx; touch_mouse_dy += dy; }
    clamp_cursor_locked((int64_t)cursor_x + dx, (int64_t)cursor_y + dy);
    if (cursor_x != old_x || cursor_y != old_y) pointer_moved_ns = void_monotonic_ns();
    pointer_seen = 1;
    if (dx) ring_push(&mouse_ring, 0, (uint32_t)dx);
    if (dy) ring_push(&mouse_ring, 4, (uint32_t)dy);
    pend(0x0200u, mouse_wparam_locked(), ((uint32_t)(cursor_y & 0xFFFF) << 16) | (uint32_t)(cursor_x & 0xFFFF));
}

void void_input_mouse_move(int dx, int dy)
{
    pthread_mutex_lock(&input_lock);
    raw_x += dx; raw_y += dy;
    if (dx || dy) raw_push(dx, dy, 0, 0);
    mouse_move_locked(dx, dy);
    pthread_mutex_unlock(&input_lock);
}

void void_input_mouse_warp(int x, int y)
{
    pthread_mutex_lock(&input_lock);
#ifdef CRASHDAY_ANDROID_APP
    if (motion_count == 256) {
        pthread_mutex_unlock(&input_lock);
        void_input_cancel();
        void_log("[input] motion queue overflow: cancelled");
        return;
    }
#endif
    int raw_dx = x - raw_x, raw_dy = y - raw_y;
    raw_x = x; raw_y = y;
    __atomic_store_n(&sdl_warp_dx, raw_dx, __ATOMIC_RELAXED);
    __atomic_store_n(&sdl_warp_dy, raw_dy, __ATOMIC_RELAXED);
    __atomic_store_n(&sdl_warp_x, x, __ATOMIC_RELAXED);
    __atomic_store_n(&sdl_warp_y, y, __ATOMIC_RELAXED);
    uint32_t serial = __atomic_add_fetch(&sdl_warp_serial, 1, __ATOMIC_RELEASE);
#ifdef CRASHDAY_ANDROID_APP
    motion_queue[(motion_head + motion_count) & 255] = (crashday_motion_event){serial, (uint32_t)x, (uint32_t)y};
    ++motion_count;
#else
    if (raw_dx || raw_dy) raw_push(raw_dx, raw_dy, 0, 0);
#endif
    if (touch_game_active && (touch_cursor_context&3u)==3u) {
        clamp_point_locked(x,y,&ui_logical_x,&ui_logical_y);
        ui_logical_context=touch_cursor_context;
        pending_t event={0x200u,mouse_wparam_locked(),ui_point_locked(),(int)touch_epoch,touch_cursor_context};
        /* Only undelivered adjacent moves may collapse. A DOWN/UP between
         * points must retain both targets, even for a tap shorter than Tick. */
        pending_t *last=pending_count ? &pending[pending_count-1] : NULL;
        if (last && last->msg==event.msg && last->context==event.context &&
            last->touch==event.touch && last->wparam==event.wparam) *last=event;
        else if (pending_count<464) pending[pending_count++]=event;
        else { touch_reset_locked();touch_blocked=1; }
        pthread_mutex_unlock(&input_lock);return;
    }
    int old_x = cursor_x, old_y = cursor_y;
    cursor_x = x < 0 ? 0 : x >= screen_w ? screen_w - 1 : x;
    cursor_y = y < 0 ? 0 : y >= screen_h ? screen_h - 1 : y;
    int dx = cursor_x - old_x, dy = cursor_y - old_y;
    if (dx || dy) {
        mouse_dx += dx; mouse_dy += dy;
        if (touch_dispatch) { touch_mouse_dx += dx; touch_mouse_dy += dy; }
        ring_push(&mouse_ring, 0, (uint32_t)dx);
        ring_push(&mouse_ring, 4, (uint32_t)dy);
        pointer_moved_ns = void_monotonic_ns();
    }
    pointer_seen = 1;
#ifndef CRASHDAY_ANDROID_APP
    pend(0x0200u, mouse_wparam_locked(), ((uint32_t)(cursor_y & 0xFFFF) << 16) | (uint32_t)(cursor_x & 0xFFFF));
#endif
    pthread_mutex_unlock(&input_lock);
}

static void mouse_button_locked(int button, int down)
{
    mouse_buttons[button] = down ? 0x80 : 0;
    if (down) (touch_dispatch ? touch_mouse_latched : mouse_latched)[button] = 0x80;
    static const uint8_t vks[3] = { 0x01, 0x02, 0x04 };
    if (button < 3) vk_down[vks[button]] = (uint8_t)(down != 0);
    ring_push(&mouse_ring, 12u + (uint32_t)button, down ? 0x80u : 0u);
    if (button < 3) raw_push(0, 0, 1u << (2 * button + !down), 0);
    else if (button < 5) raw_push(0, 0, (button == 3 ? 0x40u : 0x100u) << !down, (uint32_t)(button - 2));
    static const uint32_t downs[3] = { 0x0201, 0x0204, 0x0207 }, ups[3] = { 0x0202, 0x0205, 0x0208 };
    uint32_t point=((uint32_t)(cursor_y&0xFFFF)<<16)|(uint32_t)(cursor_x&0xFFFF);
    if (touch_dispatch && !touch_releasing && touch_game_active && (touch_cursor_context&3u)==3u)
        point=ui_point_locked();
    if (button < 3) pend(down ? downs[button] : ups[button], mouse_wparam_locked(), point);
}

void void_input_mouse_button_immediate(int button, int down)
{
#ifdef CRASHDAY_ANDROID_APP
    pthread_mutex_lock(&input_lock);
    mouse_button_locked(button, down);
    pthread_mutex_unlock(&input_lock);
#else
    void_input_mouse_button(button, down);
#endif
}

void void_input_mouse_button(int button, int down)
{
    if (button < 0 || button > 7) return;
    pthread_mutex_lock(&input_lock);
    physical_buttons[button] = down != 0;
#ifdef CRASHDAY_ANDROID_APP
    if (!touch_buttons[button]) {
        if (button_count < 256) {
            button_queue[(button_head + button_count) & 255] =
                (crashday_button_event){__atomic_load_n(&sdl_warp_serial, __ATOMIC_RELAXED),
                    __atomic_load_n(&android_input_epoch, __ATOMIC_ACQUIRE), (uint8_t)button, (uint8_t)(down != 0)};
            ++button_count;
            if (down) pointer_focus_requested = 1;
        } else {
            pthread_mutex_unlock(&input_lock);
            void_input_cancel();
            void_log("[input] button queue overflow: cancelled");
            return;
        }
    }
#else
    if (down) mouse_latched[button] = 0x80;
    if (!touch_buttons[button]) mouse_button_locked(button, down);
#endif
    pthread_mutex_unlock(&input_lock);
}

uint32_t void_input_frame(void)
{
#ifdef CRASHDAY_ANDROID_APP
    return g_d3d_device ? g_d3d_device->frame : 0;
#else
    return 0;
#endif
}

void void_input_selftest_flush(void)
{
#ifdef CRASHDAY_ANDROID_APP
    pthread_mutex_lock(&input_lock);
    while (key_count) {
        crashday_key_event event = key_queue[key_head];
        key_locked(event.vk, event.down);
        key_head = (key_head + 1) & 255;
        --key_count;
    }
    motion_ack = __atomic_load_n(&sdl_warp_serial, __ATOMIC_RELAXED);
    while (button_count) {
        crashday_button_event event = button_queue[button_head];
        mouse_button_locked(event.button, event.down);
        button_head = (button_head + 1) & 255;
        --button_count;
    }
    while (wheel_count) {
        mouse_wheel_locked(wheel_queue[wheel_head].delta, 1);
        wheel_head = (wheel_head + 1) & 255;
        --wheel_count;
    }
    motion_head = motion_count = 0;
    motion_inflight = 0;
    pthread_mutex_unlock(&input_lock);
#endif
}

static void mouse_wheel_locked(int delta, int windows_message)
{
    mouse_dz += delta;
    ring_push(&mouse_ring, 8, (uint32_t)delta);
    raw_push(0, 0, 0x0400u, (uint16_t)delta);
    if (windows_message)
        pend(0x020Au, ((uint32_t)(delta & 0xFFFF) << 16) | mouse_wparam_locked(),
            ((uint32_t)(cursor_y & 0xFFFF) << 16) | (uint32_t)(cursor_x & 0xFFFF));
}

void void_input_mouse_wheel(int delta)
{
    pthread_mutex_lock(&input_lock);
#ifdef CRASHDAY_ANDROID_APP
    if (wheel_count < 256) {
        wheel_queue[(wheel_head + wheel_count) & 255] =
            (crashday_wheel_event){__atomic_load_n(&sdl_warp_serial, __ATOMIC_RELAXED),
                __atomic_load_n(&android_input_epoch, __ATOMIC_ACQUIRE), delta};
        ++wheel_count;
    } else {
        pthread_mutex_unlock(&input_lock);
        void_input_cancel();
        void_log("[input] wheel queue overflow: cancelled");
        return;
    }
#else
    mouse_wheel_locked(delta, 1);
#endif
    pthread_mutex_unlock(&input_lock);
}

void void_input_keyboard_snapshot(uint8_t keys[256])
{
    touch_observe_game();
    pthread_mutex_lock(&input_lock);
    for (int i = 0; i < 256; ++i) keys[i] = dik_down[i] | dik_latched[i] | touch_key_latched[i];
    memset(dik_latched, 0, sizeof dik_latched);
    memset(touch_key_latched, 0, sizeof touch_key_latched);
    pthread_mutex_unlock(&input_lock);
}

void void_input_mouse_snapshot(int32_t *dx, int32_t *dy, int32_t *dz, uint8_t buttons[8])
{
    touch_observe_game();
    pthread_mutex_lock(&input_lock);
    *dx = mouse_dx; *dy = mouse_dy; *dz = mouse_dz;
    mouse_dx = mouse_dy = mouse_dz = 0;
    touch_mouse_dx = touch_mouse_dy = touch_wheel = 0;
    for (int i = 0; i < 8; ++i) buttons[i] = mouse_buttons[i] | mouse_latched[i] | touch_mouse_latched[i];
    memset(mouse_latched, 0, sizeof mouse_latched);
    memset(touch_mouse_latched, 0, sizeof touch_mouse_latched);
    pthread_mutex_unlock(&input_lock);
}

int void_input_keyboard_events(void_input_event *out, int max, int peek) { return ring_take(&key_ring, out, max, peek, NULL); }
int void_input_mouse_events(void_input_event *out, int max, int peek) { return ring_take(&mouse_ring, out, max, peek, NULL); }
/* Private DirectInput reader: count, data and overflow acknowledgement are
 * one transaction. NULL output still obeys DIGDD_PEEK/count-query semantics. */
int void_input_buffered_events(int mouse, void_input_event *out, int max, int peek, int *overflow)
{ return ring_take(mouse ? &mouse_ring : &key_ring, out, max, peek, overflow); }

/* JNI records only intent. Original UI metadata is read by the VM-owned pump. */
static int ui_begin(uint64_t context)
{
    pthread_mutex_lock(&input_lock);
    int valid=context==touch_cursor_context && (context&3u)==3u && touch_game_active &&
        !touch_blocked && !touch_held && !physical_buttons[0] && pending_count<464;
    if (valid) {
        ui_probe_context=context;ui_probe_epoch=touch_epoch;ui_probe_status=0;
        pending[pending_count++]=(pending_t){UI_PROBE,mouse_wparam_locked(),ui_point_locked(),(int)touch_epoch,context};
    }
    pthread_mutex_unlock(&input_lock);return valid;
}

static int ui_control(uint64_t context)
{
    pthread_mutex_lock(&input_lock);
    int result=context==touch_cursor_context && context==ui_probe_context &&
        ui_probe_epoch==touch_epoch && !touch_blocked ? ui_probe_status : -1;
    pthread_mutex_unlock(&input_lock);return result;
}

/* Probe flags: 1 a tap clicks, 2 rows follow the finger (target claimed),
 * 4 a drag adjusts the widget, 8 a tap changes the option row. Requests for
 * the claimed list: -8..8 rows, 64 highlight the row under the cursor, 65 tap
 * the option row under the cursor; 0 retires the gesture. */
#define UI_HOVER 64
#define UI_OPTION_TAP 65
static int ui_scroll(int steps,uint64_t context)
{
    pthread_mutex_lock(&input_lock);
    int command=steps==UI_HOVER || steps==UI_OPTION_TAP;
    int cost=command ? 1 : abs(steps);
    int allowed=steps==UI_OPTION_TAP ? (ui_probe_status&10)==10 : steps ? (ui_probe_status&2)!=0 : ui_probe_status>0;
    /* One unread highlight request is enough: the script reads the live cursor. */
    if (steps==UI_HOVER)
        for (int i=0;i<pending_count;++i)
            if (pending[i].msg==UI_SCROLL && pending[i].wparam==UI_HOVER && pending[i].context==context)
                allowed=0;
    int valid=(command || (steps>=-8 && steps<=8)) && context==touch_cursor_context &&
        context==ui_probe_context && ui_probe_epoch==touch_epoch && ui_probe_status>0 && allowed &&
        !touch_blocked && !touch_held && !physical_buttons[0] && pending_count<464 &&
        ui_scroll_pending+cost<=64;
    if (valid) {
        pending[pending_count++]=(pending_t){steps ? UI_SCROLL : UI_END,(uint32_t)steps,ui_point_locked(),(int)touch_epoch,context};
        ui_scroll_pending+=cost;
    }
    pthread_mutex_unlock(&input_lock);
    /* A highlight request already queued is not a failure of the gesture. */
    return valid || (steps==UI_HOVER && context==touch_cursor_context && ui_probe_status>0 && (ui_probe_status&2));
}

static void touch_weapon_deliver(void);

void void_input_pump(void)
{
#ifdef CRASHDAY_ANDROID_APP
    extern int void_android_touch_only(void);
    extern void crashday_text_editor_request(uint32_t);
    crashday_key_pump();
    if (void_android_touch_only() && void_vm_readable(0x869418u, 4)) {
        uint32_t mouse = MEM32(0x869418u);
        if (mouse && void_vm_writable(mouse + 0x27Cu, 1)) MEM8(mouse + 0x27Cu) = 0;
    }
    uint32_t sdl_window = MEM32(0x926A0Cu) ? MEM32(0x926A0Cu) : MEM32(0x925FD0u);
    if (!MEM32(0x926A0Cu) && sdl_window && void_dispatch_find(0x006F0A40u)) {
        g_ecx = sdl_window;
        void_call_guest(0x006F0A40u, 0, NULL, 1);
    }
    int editor_up = 0;
    uint32_t editor_epoch = 0;
    pthread_mutex_lock(&input_lock);
    if (pointer_focus_requested && void_window_main()) {
        uint32_t hwnd = void_window_main();
        pointer_focus_requested = 0;
        pthread_mutex_unlock(&input_lock);
        void_post_message(hwnd, 0x0021u, hwnd, 0x02010001u);
        pthread_mutex_lock(&input_lock);
    }
    uint32_t video = MEM32(0x870268u);
    if (motion_inflight && video && void_vm_readable(video + 0x18, 8) &&
        MEM32(video + 0x18) == motion_queue[motion_head].x && MEM32(video + 0x1C) == motion_queue[motion_head].y) {
        motion_ack = motion_inflight;
        motion_inflight = 0;
        motion_head = (motion_head + 1) & 255;
        --motion_count;
    }
    static uint32_t delivered_buttons, down_frame[8], down_epoch[8];
    while (button_count && button_queue[button_head].serial <= motion_ack) {
        crashday_button_event event = button_queue[button_head];
        if (event.epoch != __atomic_load_n(&android_input_epoch, __ATOMIC_ACQUIRE)) {
            button_head = (button_head + 1) & 255;
            --button_count;
            continue;
        }
        uint32_t bit = 1u << event.button;
        if (!event.down && (delivered_buttons & bit) && down_epoch[event.button] == event.epoch &&
            (!(MEM32(0x926A28u) & bit) || !(observed_buttons & bit) ||
             (g_d3d_device && g_d3d_device->frame - down_frame[event.button] < 2))) break;
        mouse_button_locked(event.button, event.down);
        if (!event.down && event.button == 0 && (delivered_buttons & bit) &&
            down_epoch[event.button] == event.epoch && event.epoch == __atomic_load_n(&android_input_epoch, __ATOMIC_ACQUIRE)) {
            editor_up = 1;
            editor_epoch = event.epoch;
        }
        if (event.down) {
            delivered_buttons |= bit;
            down_frame[event.button] = g_d3d_device ? g_d3d_device->frame : 0;
            down_epoch[event.button] = event.epoch;
        } else {
            down_epoch[event.button] = 0;
            delivered_buttons &= ~bit;
            observed_buttons &= ~bit;
        }
        button_head = (button_head + 1) & 255;
        --button_count;
        /* Publish delivery before guest code can yield to a cancelling producer. */
        if (sdl_window && void_dispatch_find(0x006F0EA0u)) {
            uint32_t args[] = {(uint32_t)event.down, (uint32_t)event.button + 1};
            g_ecx = sdl_window;
            g_edx = 0;
            pthread_mutex_unlock(&input_lock);
            void_call_guest(0x006F0EA0u, 2, args, 0);
            pthread_mutex_lock(&input_lock);
        }
    }
    while (wheel_count && wheel_queue[wheel_head].serial <= motion_ack) {
        crashday_wheel_event event = wheel_queue[wheel_head];
        wheel_head = (wheel_head + 1) & 255;
        --wheel_count;
        if (event.epoch == __atomic_load_n(&android_input_epoch, __ATOMIC_ACQUIRE)) {
            mouse_wheel_locked(event.delta, 0);
            if (sdl_window && void_dispatch_find(0x006F10D0u)) {
                uint32_t args[] = {0, event.delta > 0 ? 1u : event.delta < 0 ? UINT32_MAX : 0};
                g_ecx = sdl_window;
                g_edx = 0;
                pthread_mutex_unlock(&input_lock);
                void_call_guest(0x006F10D0u, 2, args, 0);
                pthread_mutex_lock(&input_lock);
            }
        }
    }
    if (editor_up && !button_count && editor_epoch == __atomic_load_n(&android_input_epoch, __ATOMIC_ACQUIRE)) {
        crashday_text_editor_request(editor_epoch);
    }
    extern int crashday_ui_scene_current(void);
    int pointing_menu = crashday_ui_scene_current() != 9;
    if (!motion_inflight && motion_count && sdl_window && (!MEM32(0x926A2C) || pointing_menu) && void_dispatch_find(0x006F0B80u)) {
        crashday_motion_event event = motion_queue[motion_head];
        /* Original UI projection is 640x480; 00491EF0 applies X aspect and
         * clamps 14 logical units from the edges. Preclamp so SDL ACK stays exact. */
        uint32_t renderer = MEM32(0x870260u);
        float aspect = renderer && void_vm_readable(renderer + 0xE4u, 4) ? MEMF(renderer + 0xE4u) : 1.0f;
        if (!isfinite(aspect) || aspect < .001f) aspect = 1.0f;
        float x = fminf(event.x * 640.0f / screen_w, fmaxf(0.0f, floorf(640.0f - 14.0f / aspect)));
        float y = fminf(event.y * 480.0f / screen_h, 466.0f);
        uint32_t point[] = {0, (uint32_t)x, (uint32_t)y};
        motion_queue[motion_head].x = point[1];
        motion_queue[motion_head].y = point[2];
        motion_inflight = event.serial;
        g_ecx = sdl_window;
        g_edx = 0;
        pthread_mutex_unlock(&input_lock);
        /* SDL relative mode and its warp fallback are flags, not window pointers. */
        uint32_t relative = MEM32(0x926A2Cu), warp = MEM32(0x926A30u);
        if (pointing_menu) MEM32(0x926A2Cu) = MEM32(0x926A30u) = 0;
        void_call_guest(0x006F0B80u, 3, point, 0);
        if (pointing_menu) { MEM32(0x926A2Cu) = relative; MEM32(0x926A30u) = warp; }
    } else pthread_mutex_unlock(&input_lock);
#endif
    touch_observe_game();
    touch_weapon_deliver();
    pending_t local[512];
    int n=0,ui_present=0;
    pthread_mutex_lock(&input_lock);
    if (ui_target_clear && void_touch_ui_scroll && void_machine_is_owned && void_machine_is_owned()) {
        (void)void_touch_ui_scroll(INT32_MIN);ui_target_clear=0;
    }
    if (touch_game_active && (touch_cursor_context&3u)==3u)
        for (int i=0;i<pending_count;++i)
            if (pending[i].touch && (pending[i].context&3u)==3u &&
                ui_message(pending[i].msg)) { ui_present=1;break; }
    if (!ui_present) {
        n=pending_count;
        memcpy(local,pending,sizeof(pending_t)*(size_t)n);
        pending_count=0;
        pthread_mutex_unlock(&input_lock);
        goto post_pending;
    }
    pthread_mutex_unlock(&input_lock);
    /* A render-thread Present can precede the next UI Tick. Read the original
     * SceneClient's consumed point instead of sleeping or counting presents. */
    uint32_t xy[2]={0,0};
    int owned=void_machine_is_owned && void_machine_is_owned();
    int ack=ui_present && owned && void_touch_ui_mouse ? void_touch_ui_mouse(xy) : -1;
    uint64_t now=ui_present && owned ? void_monotonic_ns() : 0;
    pthread_mutex_lock(&input_lock);
    if (ui_present && owned && (ack==0 || (ui_waiting && ack==1 &&
        (xy[0]!=(uint32_t)ui_wait_x || xy[1]!=(uint32_t)ui_wait_y) &&
        now-ui_wait_started>UINT64_C(2000000000)))) {
        /* A missing publisher, clipping mismatch or stalled UI must not leave
         * its previous pressed widget held forever. This is a cancel bound,
         * never a timer which permits an unacknowledged click. */
        touch_reset_locked();touch_blocked=1;
    }
    int kept=0,blocked=0,failed=0;
    for (int i=0;i<pending_count;++i) {
        pending_t event=pending[i];
        if (event.touch && (uint32_t)event.touch!=touch_epoch) continue;
        if (event.context && event.context!=touch_cursor_context) continue;
        int ui=event.touch && (event.context&3u)==3u && ui_message(event.msg);
        if (ui && failed)continue;
        if (ui) {
            if (ui_waiting && (ui_wait_epoch!=touch_epoch || ui_wait_context!=touch_cursor_context))
                ui_waiting=0;
            if (!owned || ack<0 || blocked || (ui_waiting && ack==1 &&
                (xy[0]!=(uint32_t)ui_wait_x || xy[1]!=(uint32_t)ui_wait_y))) {
                pending[kept++]=event;blocked=1;continue;
            }
            ui_waiting=0;
            int x=(uint16_t)event.lparam,y=(uint16_t)(event.lparam>>16);
            int moved=cursor_x!=x || cursor_y!=y;
            clamp_cursor_locked(x,y);
            if (moved) pointer_moved_ns=now;
            pointer_seen=1;
            int ready=ack==2 || (ack==1 && xy[0]==(uint32_t)x && xy[1]==(uint32_t)y);
            if (!ready) {
                ui_waiting=1;ui_wait_x=x;ui_wait_y=y;
                ui_wait_epoch=touch_epoch;ui_wait_context=touch_cursor_context;ui_wait_started=now;
            }
            if (event.msg==0x200u) {
                local[n++]=event;
                if (!ready) blocked=1;
                continue;
            }
            if (!ready || moved) {
                /* An edge without a preceding MOVE still exposes its target
                 * before waiting. Keep the edge and every later UI point. */
                pending_t move=event;move.msg=0x200u;
                if (event.msg>=UI_PROBE)move.wparam=mouse_wparam_locked();
                if (event.msg==0x201u) move.wparam&=~1u;
                local[n++]=move;
                pending[kept++]=event;blocked=1;continue;
            }
            if (event.msg==UI_PROBE) {
                int control=ack==2 ? 1 : void_touch_ui_control ? void_touch_ui_control() : 1;
                if (control==0) { pending[kept++]=event;blocked=1;continue; }
                if (ui_probe_context==event.context && ui_probe_epoch==(uint32_t)event.touch)
                    ui_probe_status=control;
                continue;
            }
            if (event.msg==UI_END) {
                if (void_touch_ui_scroll)(void)void_touch_ui_scroll(INT32_MIN);
                continue;
            }
            if (event.msg==UI_SCROLL || event.msg==UI_SCROLL_ACK) {
                /* A mailbox write and its script ACK precede every later UI
                 * point, including a new gesture. No guest widget is retained
                 * by the host. Reflection cannot call back into input here. */
                int steps=event.msg==UI_SCROLL ? (int32_t)event.wparam : 0;
                int result=!physical_buttons[0] && void_touch_ui_scroll ? void_touch_ui_scroll(steps) : -1;
                if (result<0) { failed=1;continue; }
                if (result>0 && event.msg==UI_SCROLL_ACK) {
                    ui_scroll_pending-=event.wparam==UI_HOVER || event.wparam==UI_OPTION_TAP ? 1 : abs((int32_t)event.wparam);continue;
                }
                if (result>0)event.msg=UI_SCROLL_ACK;
                pending[kept++]=event;blocked=1;continue;
            }
            local[n++]=event;
            /* Keep a later drag point out of the same pump as its DOWN/UP.
             * The normal message loop dispatches this edge before UI Tick. */
            if (ack==1) blocked=1;
        } else local[n++]=event;
    }
    pending_count=kept;
    if (failed) { touch_reset_locked();touch_blocked=1; }
    pthread_mutex_unlock(&input_lock);
post_pending:;
    uint32_t hwnd = void_window_main();
    if (!hwnd) return;
    for (int i = 0; i < n; ++i) {
        if (local[i].msg>=UI_PROBE && local[i].msg<=UI_END)continue;
        if (local[i].touch && (uint32_t)local[i].touch != __atomic_load_n(&touch_epoch, __ATOMIC_ACQUIRE)) continue;
        if (local[i].context && local[i].context != __atomic_load_n(&touch_cursor_context, __ATOMIC_ACQUIRE)) continue;
        if (local[i].msg == 0x0100u || local[i].msg == 0x0101u) {
            /* Decide and record under the lock a reset holds: a reset either
             * sees this DOWN as delivered or drops it as stale. A touch UP the
             * guest has no DOWN for is a repeated ledger release; drop it. */
            uint32_t vk = local[i].wparam & 0xFFu;
            pthread_mutex_lock(&input_lock);
            int deliver = (!local[i].touch || (uint32_t)local[i].touch == touch_epoch) &&
                          !(local[i].touch && local[i].msg == 0x0101u && !guest_key_down[vk]);
            if (deliver) guest_key_down[vk] = local[i].msg == 0x0100u;
            pthread_mutex_unlock(&input_lock);
            if (!deliver) continue;
        }
        void_post_message(hwnd, local[i].msg, local[i].wparam, local[i].lparam);
    }
}

static int text_queue(const uint16_t *text, int length, uint64_t context)
{
    pthread_mutex_lock(&input_lock);
    uint64_t current=__atomic_load_n(&touch_cursor_context, __ATOMIC_RELAXED);
    if (!touch_game_active || (current&3u)!=3u || context!=current || pending_count>512-length) {
        pthread_mutex_unlock(&input_lock);return 0;
    }
    /* Text belongs to the UI scene, independently of pointer-cancel epochs. */
    for (int i=0;i<length;++i)pending[pending_count++]=(pending_t){0x0102u,text[i],1,0,context};
    pthread_mutex_unlock(&input_lock);return 1;
}

static int text_submit(const uint16_t *text, int length, uint64_t context)
{
    if (length<0 || length>256 || (length&&!text)) return 0;
    for (int i=0;i<length;++i) {
        uint16_t value=text[i];
        if (value<32 || (value>=0x7F && value<=0x9F) || value==0x2028 || value==0x2029) return 0;
        if (value>=0xD800 && value<=0xDBFF) {
            if (++i>=length || text[i]<0xDC00 || text[i]>0xDFFF) return 0;
        } else if (value>=0xDC00 && value<=0xDFFF) return 0;
    }
    return text_queue(text,length,context);
}

static int text_delete(int before, uint64_t context)
{
    if (before<0 || before>256) return 0;
    pthread_mutex_lock(&input_lock);
    uint64_t current=__atomic_load_n(&touch_cursor_context,__ATOMIC_RELAXED);
    if (!touch_game_active || (current&3u)!=3u || context!=current || pending_count>512-before*2) {
        pthread_mutex_unlock(&input_lock);return 0;
    }
    uint32_t parameter=1u|(void_vk_to_dik(8)<<16);
    for (int i=0;i<before;++i) {
        pending[pending_count++]=(pending_t){0x0100u,8,parameter,0,context};
        pending[pending_count++]=(pending_t){0x0101u,8,parameter|0xC0000000u,0,context};
    }
    pthread_mutex_unlock(&input_lock);return 1;
}

static void touch_key_locked(uint32_t vk, int down)
{
    touch_keys[vk] = down != 0;
    if (down) touch_key_ledger[vk] = 1;
    if (!physical_keys[vk]) key_locked(vk, down);
}

static void touch_button_locked(int button, int down)
{
    touch_buttons[button] = down != 0;
    if (down) touch_button_ledger[button] = 1;
    if (!physical_buttons[button]) mouse_button_locked(button, down);
}

static void touch_actions_locked(uint32_t mask)
{
    uint32_t changed = touch_held ^ mask;
    for (unsigned bit = 0; bit < TOUCH_ACTION_BITS; ++bit) {
        if (!(changed & (1u << bit))) continue;
        int down = (mask & (1u << bit)) != 0;
        if (bit < 2) touch_button_locked((int)bit, down);
        else if ((1u << bit) == TOUCH_PICKER) {
            /* XINPUT_GAMEPAD_LEFT_SHOULDER. Its release and a neutral right
             * stick share one packet, so the original quick pick keeps the
             * cell chosen while held and the stick never turns the camera. */
            touch_pad_buttons = down ? 0x0100u : 0;
            if (!down) touch_right_x = touch_right_y = 0;
            ++touch_packet;
        } else if (bit == 5 || bit == 6) {
            if (down) {
                int delta = bit == 5 ? 120 : -120;
                mouse_dz += delta; touch_wheel += delta;
                ring_push(&mouse_ring, 8, (uint32_t)delta);
                pend(0x020Au, ((uint32_t)(delta & 0xFFFF) << 16) | mouse_wparam_locked(),
                     ((uint32_t)(cursor_y & 0xFFFF) << 16) | (uint32_t)(cursor_x & 0xFFFF));
            }
        } else {
            static const uint8_t keys[13] = {0,0,32,'C','E',0,0,27,0x70,0x71,'Q','L','G'};
            uint32_t vk = bit < 13 ? keys[bit] : bit == 22 ? '0' : bit == 23 ? 'R' : bit == 24 ? 'F' :
                          bit == 25 ? 'V' : bit == 26 ? 'J' : '1' + bit - 13;
            touch_key_locked(vk, down);
        }
    }
    touch_held = mask;
}

static void touch_remove_events_locked(ring_t *ring)
{
    int count = 0;
    for (int i = 0; i < ring->count; ++i) {
        int src = (ring->head + i) % RING, dst = (ring->head + count) % RING;
        if (ring->touch[src]) continue;
        ring->e[dst] = ring->e[src]; ring->touch[dst] = 0; ++count;
    }
    ring->count = count;
}

static void touch_reset_locked(void)
{
    __atomic_add_fetch(&touch_epoch, 1, __ATOMIC_RELEASE);
    touch_dispatch = (int)touch_epoch;
    ui_waiting=0;ui_logical_context=0;
    ui_probe_status=-1;ui_probe_context=0;ui_probe_epoch=0;ui_scroll_pending=0;
    ui_target_clear=1;
    touch_releasing=1;
    touch_remove_events_locked(&key_ring); touch_remove_events_locked(&mouse_ring);
    int count = 0;
    for (int i = 0; i < pending_count; ++i) if (!pending[i].touch) pending[count++] = pending[i];
    pending_count = count;
    touch_actions_locked(0);
    /* Re-issue neutral for the release ledger even after repeated cancels:
     * a preceding generation's UP may already be in a consumer's local queue.
     * Window-message keys are re-released only while the guest's queue holds
     * their DOWN without an UP; the pump drops any remaining duplicate. */
    for (unsigned i = 0; i < 256; ++i)
        if (touch_key_ledger[i] && guest_key_down[key_message_vk(i)] && !physical_keys[i]) key_locked(i, 0);
    for (unsigned i = 0; i < 8; ++i)
        if (touch_button_ledger[i] && !physical_buttons[i]) mouse_button_locked((int)i, 0);
    memset(touch_key_latched, 0, sizeof touch_key_latched);
    memset(touch_mouse_latched, 0, sizeof touch_mouse_latched);
    mouse_dx -= touch_mouse_dx; mouse_dy -= touch_mouse_dy; mouse_dz -= touch_wheel;
    touch_mouse_dx = touch_mouse_dy = touch_wheel = 0;
    touch_remainder_x = touch_remainder_y = 0;
    if (touch_connected || touch_stick_x || touch_stick_y || touch_pad_buttons || touch_right_x || touch_right_y)
        ++touch_packet;
    touch_connected = 0; touch_stick_x = touch_stick_y = 0;
    touch_move_x = touch_move_y = 0;
    touch_pad_buttons = 0; touch_right_x = touch_right_y = 0;
    /* A cancelled swipe must not leave the original bar showing its preview. */
    if (weapon_previewing) { weapon_pending = 3u << 8; weapon_previewing = 0; }
    touch_blocked = 0; touch_dispatch = 0;touch_releasing=0;
}

void void_input_touch_reset(void)
{
    pthread_mutex_lock(&input_lock); touch_reset_locked(); pthread_mutex_unlock(&input_lock);
}

static void touch_observe_game(void)
{
    if (!void_touch_game_read) return;
    uint32_t snapshot[4], details[2] = {0, 0};
    int result=void_touch_game_read(snapshot);
    if (result < 0) return; /* Android lifecycle snapshots do not own the VM. */
    if (result > 0 && void_touch_game_details) (void)void_touch_game_details(details);
    __atomic_store_n(&touch_weapon_slots, details[0], __ATOMIC_RELEASE);
    __atomic_store_n(&touch_vehicle_flags, details[1], __ATOMIC_RELEASE);
    int log_context=0;
    pthread_mutex_lock(&input_lock);
    if (result > 0) {
        if (!touch_game_active || memcmp(snapshot, touch_game_snapshot, sizeof snapshot)) {
            touch_reset_locked();
            memcpy(touch_game_snapshot, snapshot, sizeof snapshot);
            touch_game_active=touch_game_seen=1;
            __atomic_store_n(&touch_vehicle, (int)snapshot[2], __ATOMIC_RELEASE);
            uint64_t before=__atomic_load_n(&touch_cursor_context, __ATOMIC_RELAXED);
            uint64_t flags=snapshot[0]==1 ? 2u : snapshot[0]==2 ? 3u : 1u;
            __atomic_store_n(&touch_cursor_context, (((before>>2)+1)<<2)|flags, __ATOMIC_RELEASE);
        }
        if (!touch_game_logged && snapshot[0]) { touch_game_logged=1;log_context=1; }
    } else if (touch_game_active) {
        touch_reset_locked();touch_game_active=0;
        __atomic_store_n(&touch_vehicle, -1, __ATOMIC_RELEASE);
        uint64_t before=__atomic_load_n(&touch_cursor_context, __ATOMIC_RELAXED);
        __atomic_store_n(&touch_cursor_context, (((before>>2)+1)<<2)|1u, __ATOMIC_RELEASE);
    }
    pthread_mutex_unlock(&input_lock);
    if (log_context)
        void_log("[touch] script context mode=%u epoch=%u vehicle=%u viewport=%08X",
                 snapshot[0], snapshot[1], snapshot[2], snapshot[3]);
}

/* Original ShowCursor is the engine's explicit viewport cursor request.
 * Unknown remains zero until the engine publishes its first request. */
void void_input_cursor_visible(int shown)
{
    pthread_mutex_lock(&input_lock);
    if (touch_game_active || touch_game_seen) { pthread_mutex_unlock(&input_lock);return; }
    uint64_t previous = __atomic_load_n(&touch_cursor_context, __ATOMIC_RELAXED);
    uint64_t flags = 2u | (shown ? 1u : 0u);
    if ((previous & 3u) != flags) {
        touch_reset_locked();
        __atomic_store_n(&touch_cursor_context, (((previous >> 2) + 1) << 2) | flags, __ATOMIC_RELEASE);
    }
    pthread_mutex_unlock(&input_lock);
}

static int touch_submit(float x, float y, float dx, float dy, uint32_t held, uint64_t expected_context)
{
    if (!isfinite(x) || !isfinite(y) || !isfinite(dx) || !isfinite(dy) ||
        fabsf(x) > 1.001f || fabsf(y) > 1.001f || fabsf(dx) > 32767 || fabsf(dy) > 32767 ||
        (held >> TOUCH_ACTION_BITS)) {
        void_input_touch_reset(); return 0;
    }
    pthread_mutex_lock(&input_lock);
    if (expected_context != UINT64_MAX && expected_context != __atomic_load_n(&touch_cursor_context, __ATOMIC_RELAXED)) {
        touch_reset_locked(); pthread_mutex_unlock(&input_lock); return 0;
    }
    uint64_t context=__atomic_load_n(&touch_cursor_context, __ATOMIC_RELAXED);
    if ((context&3u)==1u || (touch_game_active && (context&3u)==3u &&
        (x!=0 || y!=0 || dx!=0 || dy!=0 || (held&~1u)))) {
        touch_reset_locked();pthread_mutex_unlock(&input_lock);return 0;
    }
    if (touch_blocked && held) { pthread_mutex_unlock(&input_lock); return 0; }
    touch_blocked = 0;
    /* DI consumers may poll only immediate state and leave history unread.
     * Only the ordered message queue owns touch packet backpressure. */
    if (pending_count > 464) {
        touch_reset_locked(); touch_blocked = held != 0;
        pthread_mutex_unlock(&input_lock); return 0;
    }
    touch_dispatch = (int)touch_epoch;
    float length = hypotf(x, y);
    if (length > 1) { x /= length; y /= length; }
    /* DefaultInput's per-axis 0.2 dead zone follows Java's radial dead zone. */
    float out_x = x == 0 ? 0 : copysignf(0.2f + 0.8f * fabsf(x), x);
    float out_y = y == 0 ? 0 : copysignf(0.2f + 0.8f * fabsf(y), y);
    int16_t sx = (int16_t)lrintf(out_x * 32767), sy = (int16_t)lrintf(out_y * 32767);
    /* A UI mouse click must not produce a controller: original WinDrv emits
     * gamepad-axis callbacks even for a connected all-zero XInput state. Keep
     * a gameplay pad connected at neutral; legacy unknown starts on movement. */
    int connected = (context & 3u) == 2u ||
                    ((context & 3u) == 0u && (touch_connected || sx || sy || (held & TOUCH_PICKER)));
    if (connected != touch_connected || sx != touch_stick_x || sy != touch_stick_y) ++touch_packet;
    touch_connected = connected; touch_stick_x = sx; touch_stick_y = sy;
    touch_move_x = x; touch_move_y = y;
    float rx = dx + touch_remainder_x, ry = dy + touch_remainder_y;
    int mx = (int)rx, my = (int)ry;
    touch_remainder_x = rx - mx; touch_remainder_y = ry - my;
    if (mx || my) mouse_move_locked(mx, my);
    touch_actions_locked(held);
    touch_dispatch = 0;
    pthread_mutex_unlock(&input_lock);
    return 1;
}

void void_input_touch(float x, float y, float dx, float dy, uint32_t held)
{
    (void)touch_submit(x, y, dx, dy, held, UINT64_MAX);
}

/* Quick-pick direction, up and right positive. Accepted only while the picker
 * shoulder is held in the same gameplay context: original UTPlayerInput then
 * consumes and zeroes aTurn/aLookup, so a stray stick cannot turn the camera.
 * Original 00A0FECE negates RightY; UTHUD cell 0 is drawn at the top. */
static int touch_stick(float x, float y, uint64_t expected_context)
{
    if (!isfinite(x) || !isfinite(y) || fabsf(x) > 1.001f || fabsf(y) > 1.001f) {
        void_input_touch_reset(); return 0;
    }
    pthread_mutex_lock(&input_lock);
    uint64_t context=__atomic_load_n(&touch_cursor_context, __ATOMIC_RELAXED);
    if (expected_context != context) { touch_reset_locked(); pthread_mutex_unlock(&input_lock); return 0; }
    if ((context&3u)==1u || (context&3u)==3u || !(touch_held & TOUCH_PICKER)) {
        pthread_mutex_unlock(&input_lock); return x == 0 && y == 0;
    }
    float length = hypotf(x, y);
    if (length > 1) { x /= length; y /= length; }
    /* The same per-axis 0.2 dead zone compensation as the left stick. */
    float out_x = x == 0 ? 0 : copysignf(0.2f + 0.8f * fabsf(x), x);
    float out_y = y == 0 ? 0 : copysignf(0.2f + 0.8f * fabsf(y), y);
    int16_t sx = (int16_t)lrintf(out_x * 32767), sy = (int16_t)lrintf(out_y * 32767);
    if (sx != touch_right_x || sy != touch_right_y) ++touch_packet;
    touch_right_x = sx; touch_right_y = sy;
    pthread_mutex_unlock(&input_lock);
    return 1;
}

/* One axis for DefaultInput's per-axis 0.2 dead zone, as the left stick sends it. */
static int16_t touch_axis(float value)
{
    if (!(fabsf(value) > 0)) return 0;
    value = fminf(1.0f, fabsf(value)) * (value < 0 ? -1.0f : 1.0f);
    return (int16_t)lrintf(copysignf(0.2f + 0.8f * fabsf(value), value) * 32767);
}

/* The console branch of UTVehicle.SetInputs for look-steered vehicles, which
 * the PC driving path skips: the stick's deflection is the throttle (pulled
 * into the reverse region it reverses) and the view steers. PlayerDriving's
 * ProcessDrive passes -aStrafe as steering, so the pad's X carries -steering.
 * Steering stays neutral while the stick rests: looking around never drives. */
static void touch_look_steer(float x, float y, const float steer[3], uint32_t flags,
                             int16_t *out_x, int16_t *out_y)
{
    float strafe = fmaxf(-1.0f, fminf(1.0f, -x * steer[2])), throttle = y;
    if (flags & 16u) {
        int reverse = y < steer[1] || (y < 0 && fabsf(strafe) < -y);
        throttle = fminf(1.0f, sqrtf(y * y + strafe * strafe));
        if (reverse) throttle = -throttle;
    }
    float steering = throttle < 0 && (flags & 32u) ? -steer[0] : steer[0];
    *out_x = touch_axis(-steering); *out_y = touch_axis(throttle);
}

#ifdef CRASHDAY_ANDROID_APP
static float drive_steer, drive_left_y, drive_right_x, drive_right_y, drive_throttle, drive_brake;
static uint32_t drive_packet = 1, drive_horizon_bits;
static int drive_connected;
static uint16_t drive_buttons, drive_pulse_buttons, drive_overlay_buttons;
static uint16_t drive_pulse_seen;
static uint32_t drive_pulse_frame[16];
static uint8_t drive_fallback_keys[256];

static void drive_fallback_key(uint32_t vk, int down)
{
    down = down != 0;
    if (drive_fallback_keys[vk] == down) return;
    drive_fallback_keys[vk] = down;
    void_input_key(vk, down);
}

static void drive_fallback(float steer, float throttle, float brake)
{
    drive_fallback_key(37, steer < -.15f);
    drive_fallback_key(39, steer > .15f);
    drive_fallback_key(38, throttle > .03f);
    drive_fallback_key(40, brake > .03f);
}

void void_input_drive_active(int active)
{
    if (!active) drive_fallback(0, 0, 0);
    pthread_mutex_lock(&input_lock);
    if (drive_connected != (active != 0)) ++drive_packet;
    drive_connected = active != 0;
    if (!active) {
        drive_buttons = drive_pulse_buttons = drive_overlay_buttons = 0;
        drive_pulse_seen = 0;
        drive_steer = drive_left_y = drive_right_x = drive_right_y = 0;
        drive_throttle = drive_brake = 0;
    }
    pthread_mutex_unlock(&input_lock);
}

void void_input_pad_buttons(uint32_t mask, int down)
{
    pthread_mutex_lock(&input_lock);
    if (down) {
        uint16_t rising = (uint16_t)mask & (uint16_t)~drive_buttons;
        drive_pulse_buttons |= rising;
        drive_pulse_seen &= (uint16_t)~rising;
    }
    uint16_t next = down ? (uint16_t)(drive_buttons | mask) : (uint16_t)(drive_buttons & ~mask);
    if (next != drive_buttons) ++drive_packet;
    drive_buttons = next;
    pthread_mutex_unlock(&input_lock);
}

void void_input_gamepad_reset(void)
{
    pthread_mutex_lock(&input_lock);
    if (drive_buttons || drive_pulse_buttons || drive_overlay_buttons) ++drive_packet;
    drive_buttons = drive_pulse_buttons = drive_overlay_buttons = 0;
    drive_pulse_seen = 0;
    pthread_mutex_unlock(&input_lock);
}

void void_input_drive(float steer, float throttle, float brake)
{
    if (!isfinite(steer) || !isfinite(throttle) || !isfinite(brake)) return;
    steer = fmaxf(-1, fminf(1, steer));
    throttle = fmaxf(0, fminf(1, throttle));
    brake = fmaxf(0, fminf(1, brake));
    drive_fallback(steer, throttle, brake);
    pthread_mutex_lock(&input_lock);
    if (steer != drive_steer || throttle != drive_throttle || brake != drive_brake ||
        drive_left_y != 0 || drive_right_x != 0 || drive_right_y != brake) ++drive_packet;
    drive_steer = steer;
    drive_left_y = drive_right_x = 0;
    drive_right_y = brake;
    drive_throttle = throttle;
    drive_brake = brake;
    pthread_mutex_unlock(&input_lock);
}

void void_input_controller(uint32_t buttons, float left_x, float left_y, float right_x, float right_y,
    float left_trigger, float right_trigger)
{
    if (!isfinite(left_x) || !isfinite(left_y) || !isfinite(right_x) || !isfinite(right_y) ||
        !isfinite(left_trigger) || !isfinite(right_trigger)) return;
    left_x = fmaxf(-1, fminf(1, left_x));
    left_y = fmaxf(-1, fminf(1, left_y));
    right_x = fmaxf(-1, fminf(1, right_x));
    right_y = fmaxf(-1, fminf(1, right_y));
    left_trigger = fmaxf(0, fminf(1, left_trigger));
    right_trigger = fmaxf(0, fminf(1, right_trigger));
    /* Camera input has its own keys; driving arrows would navigate the replay HUD. */
    if (buttons & 0x10000u) drive_fallback(0, 0, 0);
    else drive_fallback(left_x, right_trigger, left_trigger);
    pthread_mutex_lock(&input_lock);
    ++drive_packet;
    drive_pulse_buttons |= (uint16_t)buttons & (uint16_t)~drive_overlay_buttons;
    drive_pulse_seen &= (uint16_t)~((uint16_t)buttons & (uint16_t)~drive_overlay_buttons);
    drive_overlay_buttons = (uint16_t)buttons;
    drive_steer = left_x;
    drive_left_y = -left_y;
    drive_right_x = right_x;
    drive_right_y = -right_y;
    drive_brake = left_trigger;
    drive_throttle = right_trigger;
    pthread_mutex_unlock(&input_lock);
}

void void_input_horizon_set(float degrees)
{
    if (!isfinite(degrees)) return;
    float clamped = fmaxf(-12, fminf(12, degrees));
    uint32_t bits;
    memcpy(&bits, &clamped, sizeof bits);
    __atomic_store_n(&drive_horizon_bits, bits, __ATOMIC_RELEASE);
}

void void_input_horizon(float *cosine, float *sine)
{
    uint32_t bits = __atomic_load_n(&drive_horizon_bits, __ATOMIC_ACQUIRE);
    float degrees;
    memcpy(&degrees, &bits, sizeof degrees);
    float radians = degrees * 0.01745329251994329577f;
    *cosine = cosf(radians);
    *sine = sinf(radians);
}

/* The angle as uploaded: draws compare it with what their program holds. */
uint32_t void_input_horizon_bits(void) { return __atomic_load_n(&drive_horizon_bits, __ATOMIC_ACQUIRE); }
#else
void void_input_horizon(float *cosine, float *sine) { *cosine = 1; *sine = 0; }
uint32_t void_input_horizon_bits(void) { return 0; }
#endif

/* XINPUT_STATE is exactly 16 little-endian bytes. Movement and the weapon
 * picker use the pad; mouse deltas and original PC action bindings keep the
 * game's own behavior. */
int void_input_touch_pad_snapshot(uint32_t index, uint8_t out[16], int consume)
{
#ifdef CRASHDAY_ANDROID_APP
    /* Original SDL enumerates controllers during startup, before entering a race.
     * Keep the virtual pad present; drive_active(false) clears it to neutral. */
    if (index == 0) {
        pthread_mutex_lock(&input_lock);
        if (consume && drive_pulse_buttons) {
            uint32_t frame = void_input_frame();
            uint16_t expired = 0;
            /* SDL may read twice before gameplay consumes its final state.
             * Match keyboard/mouse: retain each observed DOWN for two frames. */
            for (unsigned bit = 0; bit < 16; ++bit) {
                uint16_t mask = (uint16_t)(1u << bit);
                if (!(drive_pulse_buttons & mask)) continue;
                if (!(drive_pulse_seen & mask)) {
                    drive_pulse_seen |= mask;
                    drive_pulse_frame[bit] = frame;
                } else if (frame - drive_pulse_frame[bit] >= 2) expired |= mask;
            }
            if (expired) {
                drive_pulse_buttons &= (uint16_t)~expired;
                drive_pulse_seen &= (uint16_t)~expired;
                ++drive_packet;
            }
        }
        memset(out, 0, 16);
        int16_t x = (int16_t)lrintf(drive_steer * 32767);
        int16_t y = (int16_t)lrintf(drive_left_y * 32767);
        int16_t right_x = (int16_t)lrintf(drive_right_x * 32767);
        int16_t right_y = (int16_t)lrintf(drive_right_y * 32767);
        uint8_t throttle = (uint8_t)lrintf(drive_throttle * 255), brake = (uint8_t)lrintf(drive_brake * 255);
        uint16_t buttons = drive_buttons | drive_overlay_buttons | drive_pulse_buttons;
        memcpy(out, &drive_packet, 4);
        memcpy(out + 4, &buttons, 2);
        out[6] = brake;
        out[7] = throttle;
        memcpy(out + 8, &x, 2);
        memcpy(out + 10, &y, 2);
        memcpy(out + 12, &right_x, 2);
        memcpy(out + 14, &right_y, 2);
        pthread_mutex_unlock(&input_lock);
        return 1;
    }
#else
    (void)consume;
#endif
    float steer[3];
    uint32_t steer_flags = 0;
    /* Script values are read on this VM-owned XInput poll, before the lock. */
    int steering = index == 0 && void_touch_steer && void_touch_steer(steer, &steer_flags) == 1;
    pthread_mutex_lock(&input_lock);
    uint64_t context=__atomic_load_n(&touch_cursor_context,__ATOMIC_RELAXED);
    /* Let the original periodic reconnect discover neutral during gameplay,
     * before the first gesture; its UI must never receive zero-axis callbacks. */
    int connected = index == 0 && ((context&3u)==2u ? touch_game_active||touch_connected :
                                  (context&3u)==0u&&touch_connected);
    if (connected) {
        int16_t x = touch_stick_x, y = touch_stick_y;
        if (steering && (context&3u)==2u && (touch_move_x != 0 || touch_move_y != 0))
            touch_look_steer(touch_move_x, touch_move_y, steer, steer_flags, &x, &y);
        if (x != touch_pad_x || y != touch_pad_y) { ++touch_packet; touch_pad_x = x; touch_pad_y = y; }
        memset(out, 0, 16);
        memcpy(out, &touch_packet, 4);
        memcpy(out + 4, &touch_pad_buttons, 2);
        memcpy(out + 8, &x, 2); memcpy(out + 10, &y, 2);
        memcpy(out + 12, &touch_right_x, 2); memcpy(out + 14, &touch_right_y, 2);
    }
    pthread_mutex_unlock(&input_lock);
    return connected;
}

int void_input_touch_pad(uint32_t index, uint8_t out[16])
{
    return void_input_touch_pad_snapshot(index, out, 1);
}

/* A weapon bar swipe: 1 preview a slot, 2 switch to it, 3 cancel. Only intent
 * is recorded here; the VM-owned pump writes the script's mailbox. */
static int touch_weapon(int phase, int slot, uint64_t context)
{
    if (phase < 1 || phase > 3 || slot < 0 || slot > 9) return 0;
    pthread_mutex_lock(&input_lock);
    int valid = context == touch_cursor_context && (context&3u) == 2u && touch_game_active;
    if (valid) {
        /* A switch already waiting is never replaced by a later preview. */
        if (!((weapon_pending>>8) == 2 && phase == 1))
            weapon_pending = phase == 3 ? 3u << 8 : ((uint32_t)phase << 8) | (uint32_t)(slot + 1);
        weapon_previewing = phase == 1;
    }
    pthread_mutex_unlock(&input_lock);
    return valid;
}

static void touch_weapon_deliver(void)
{
    if (!void_touch_weapon_request || !void_machine_is_owned || !void_machine_is_owned()) return;
    pthread_mutex_lock(&input_lock);
    uint32_t request = weapon_pending;
    pthread_mutex_unlock(&input_lock);
    if (!request) return;
    int result = void_touch_weapon_request(request);
    if (result == 0) return; /* The script has not read the previous switch yet. */
    pthread_mutex_lock(&input_lock);
    if (weapon_pending == request) weapon_pending = 0;
    pthread_mutex_unlock(&input_lock);
}

#ifdef UT3_ANDROID_APP
JNIEXPORT jboolean JNICALL Java_org_ut3_port_GameActivity_nativeText(JNIEnv *env, jclass cls,
    jstring value, jlong context)
{
    (void)cls;
    if (!value) return JNI_FALSE;
    jsize length=(*env)->GetStringLength(env,value);
    if (length<0 || length>256) return JNI_FALSE;
    uint16_t text[256];
    (*env)->GetStringRegion(env,value,0,length,(jchar *)text);
    if ((*env)->ExceptionCheck(env)) return JNI_FALSE;
    return text_submit(text,length,(uint64_t)context) ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT jboolean JNICALL Java_org_ut3_port_GameActivity_nativeDelete(JNIEnv *env, jclass cls,
    jint before, jlong context)
{
    (void)env;(void)cls;
    return text_delete(before,(uint64_t)context) ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT jboolean JNICALL Java_org_ut3_port_GameActivity_nativeTouch(JNIEnv *env, jclass cls,
    jfloat x, jfloat y, jfloat dx, jfloat dy, jint held, jlong context)
{
    (void)env; (void)cls;
    return touch_submit(x, y, dx, dy, (uint32_t)held, (uint64_t)context) ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT jboolean JNICALL Java_org_ut3_port_GameActivity_nativeTouchStick(JNIEnv *env, jclass cls,
    jfloat x, jfloat y, jlong context)
{
    (void)env; (void)cls;
    return touch_stick(x, y, (uint64_t)context) ? JNI_TRUE : JNI_FALSE;
}
JNIEXPORT void JNICALL Java_org_ut3_port_GameActivity_nativeTouchReset(JNIEnv *env, jclass cls)
{
    (void)env; (void)cls; void_input_touch_reset();
}
JNIEXPORT jlong JNICALL Java_org_ut3_port_GameActivity_nativeTouchContext(JNIEnv *env, jclass cls)
{
    (void)env; (void)cls;
    return (jlong)__atomic_load_n(&touch_cursor_context, __ATOMIC_ACQUIRE);
}
JNIEXPORT jint JNICALL Java_org_ut3_port_GameActivity_nativeTouchVehicle(JNIEnv *env, jclass cls)
{
    (void)env; (void)cls;
    return __atomic_load_n(&touch_vehicle, __ATOMIC_ACQUIRE);
}
JNIEXPORT jboolean JNICALL Java_org_ut3_port_GameActivity_nativeTouchWeapon(JNIEnv *env, jclass cls,
    jint phase, jint slot, jlong context)
{
    (void)env; (void)cls;
    return touch_weapon(phase, slot, (uint64_t)context) ? JNI_TRUE : JNI_FALSE;
}
/* Weapon bar slots in the low word, vehicle flags in the high word. */
JNIEXPORT jlong JNICALL Java_org_ut3_port_GameActivity_nativeTouchDetails(JNIEnv *env, jclass cls)
{
    (void)env; (void)cls;
    return (jlong)(((uint64_t)__atomic_load_n(&touch_vehicle_flags, __ATOMIC_ACQUIRE) << 32) |
                   __atomic_load_n(&touch_weapon_slots, __ATOMIC_ACQUIRE));
}
JNIEXPORT jboolean JNICALL Java_org_ut3_port_GameActivity_nativeUiBegin(JNIEnv *env,jclass cls,jlong context)
{ (void)env;(void)cls;return ui_begin((uint64_t)context) ? JNI_TRUE : JNI_FALSE; }
JNIEXPORT jint JNICALL Java_org_ut3_port_GameActivity_nativeUiControl(JNIEnv *env,jclass cls,jlong context)
{ (void)env;(void)cls;return ui_control((uint64_t)context); }
JNIEXPORT jboolean JNICALL Java_org_ut3_port_GameActivity_nativeUiScroll(JNIEnv *env,jclass cls,jint steps,jlong context)
{ (void)env;(void)cls;return ui_scroll(steps,(uint64_t)context) ? JNI_TRUE : JNI_FALSE; }
#endif
