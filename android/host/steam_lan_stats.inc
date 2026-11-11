/* QA observations of the original statistics pipeline; never changes guest state. */
void crashday_lan_stats_observe(unsigned stage, uint32_t car, uint32_t replacement)
{
    static int enabled = -1;
    static unsigned count[5], sequence;
    static uint32_t cars[32];
    static const char *const names[] = {"serialize", "receive", "missile-tick", "snapshot", "minigun-tick"};
    if (enabled < 0) {
        const char *directory = void_data_dir(), *base = strrchr(directory, '/');
        enabled = 0;
        if (base && !strncmp(base + 1, "userdata-", 9)) {
            char path[1100];
            int n = snprintf(path, sizeof path, "%s/trace-lan-stats", directory);
            if (n > 0 && (size_t)n < sizeof path) {
                FILE *file = fopen(path, "rb");
                if (file) { fclose(file); enabled = 1; }
            }
        }
    }
    if (!enabled || stage >= 5 || count[stage] >= 128 ||
            car > UINT32_MAX - 0x7CD8 || !void_vm_readable(car, 0x7CD8)) return;
    uint32_t missile = MEM32(car + 0x7CC0), minigun = MEM32(car + 0x7CC8);
    if ((stage == 2 && missile == replacement) || (stage == 4 && minigun == replacement)) return;
    unsigned slot;
    for (slot = 0; slot < 32 && cars[slot] && cars[slot] != car; ++slot) {}
    if (slot == 32) return;
    cars[slot] = car;
    ++count[stage];
    extern uint32_t void_input_frame(void);
    void_log("[lan-stats] seq=%u frame=%u stage=%s car=%u missile=%u/%u minigun=%u/%u local_missiles=%u replacement=%u",
        ++sequence, void_input_frame(), names[stage], slot + 1,
        MEM32(car + 0x7CCC), missile, MEM32(car + 0x7CD4), minigun,
        (unsigned)MEM8(car + 0x75FD), replacement);
}
