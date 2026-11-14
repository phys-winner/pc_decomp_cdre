#include <stdint.h>
double crashday_world_aspect_numerator(void) { return .85; }
uint32_t crashday_steering_bits(uint32_t car, uint32_t previous) { (void)car; return previous; }
void void_android_request_refresh(uint32_t rate) { (void)rate; }
float crashday_hud_y(float y, float offset) { (void)offset; return y; }
float crashday_weapon_coord(unsigned weapon, unsigned axis, float value, float origin)
{ (void)weapon; (void)axis; (void)origin; return value; }
void crashday_cinematic_active(int active) { (void)active; }
int crashday_ui_list_detached(uint32_t widget) { (void)widget; return 0; }

uint64_t void_audio_pause_state(void) { return 0; }
void void_android_set_paused(int pause) { (void)pause; }
int void_android_touch_only(void) { return 0; }
void crashday_text_editor_request(uint32_t epoch) { (void)epoch; }
void crashday_text_editor_at_cursor(void) {}
void crashday_ui_prepare(void) {}
int void_android_menu_overlay(void) { return 0; }
int crashday_ui_scene_current(void) { return -1; }
void crashday_ui_draw_begin(uint32_t widget) { (void)widget; }
void crashday_ui_draw_end(void) {}
float crashday_ui_text_begin(unsigned kind) { (void)kind; return 1; }
void crashday_ui_text_end(float scale) { (void)scale; }
void crashday_race_menu_begin(uint32_t player) { (void)player; }
void crashday_race_menu_end(void) {}
void crashday_race_menu_button(void) {}
