/* The original 826 handler installs final counters, then one more car update
 * runs before the results copy. Keep those two authoritative fired counts
 * through that copy; never stop weapon simulation or alter packet contents. */
typedef struct {
    uint32_t car;
    uint64_t lobby, host, player;
} lan_final_counters;
static lan_final_counters lan_final_stats[LAN_PEERS * 2];

static lan_lobby *lan_results_client(void)
{
    if (steam_lan.started != 1 || !steam_lan.joined) return NULL;
    lan_lobby *l = lan_lobby_find(&steam_lan, steam_lan.joined);
    return l && l->owner && l->owner != steam_lan.id && lan_member_find(l, steam_lan.id) ? l : NULL;
}

void crashday_lan_results_reset(uint32_t car)
{
    for (unsigned i = 0; i < LAN_PEERS * 2; ++i)
        if (lan_final_stats[i].car == car) memset(&lan_final_stats[i], 0, sizeof lan_final_stats[i]);
}

void crashday_lan_results_received(uint32_t car)
{
    crashday_lan_results_reset(car);
    lan_lobby *l = lan_results_client();
    if (!l || !car || car > UINT32_MAX - 0x7CD8 || !void_vm_readable(car, 0x7CD8)) return;
    for (unsigned i = 0; i < LAN_PEERS * 2; ++i) {
        if (lan_final_stats[i].car) continue;
        lan_final_stats[i] = (lan_final_counters){car, l->id, l->owner,
            (uint64_t)MEM32(car + 0x6B70) | (uint64_t)MEM32(car + 0x6B74) << 32};
        return;
    }
}

int crashday_lan_results_tick_allowed(uint32_t car)
{
    for (unsigned i = 0; i < LAN_PEERS * 2; ++i) {
        lan_final_counters *p = &lan_final_stats[i];
        if (!p->car || p->car != car) continue;
        lan_lobby *l = lan_results_client();
        if (l && l->id == p->lobby && l->owner == p->host &&
            car <= UINT32_MAX - 0x6B78 && void_vm_readable(car + 0x6B70, 8) &&
            (((uint64_t)MEM32(car + 0x6B70) | (uint64_t)MEM32(car + 0x6B74) << 32) == p->player))
            return 0;
        memset(p, 0, sizeof *p);
        break;
    }
    return 1;
}
