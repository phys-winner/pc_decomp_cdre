/* One immutable activation snapshot per game process; downloads stay app-owned. */
#include <limits.h>

#define WORKSHOP_LIMIT 1024
typedef struct {
    uint64_t id, size, updated;
    char relative[192], host[2048];
    int track;
} workshop_entry;

static workshop_entry *workshop_entries;
static unsigned workshop_count;
static int workshop_valid, workshop_disabled, workshop_development, workshop_loaded;
static char workshop_root[2048];

static int workshop_number(const char *text, uint64_t *value)
{
    if (!text || !*text) return 0;
    uint64_t result = 0;
    for (const unsigned char *p = (const unsigned char *)text; *p; ++p) {
        if (*p < '0' || *p > '9' || result > (UINT64_MAX - (*p - '0')) / 10) return 0;
        result = result * 10 + (*p - '0');
    }
    *value = result;
    return 1;
}

static int workshop_relative(const char *path)
{
    if (!path || !*path || strlen(path) >= sizeof workshop_entries[0].relative) return 0;
    const char *part = path;
    for (const unsigned char *p = (const unsigned char *)path; ; ++p) {
        unsigned char c = *p;
        if (!c || c == '/') {
            size_t length = (size_t)((const char *)p - part);
            if (!length || (length == 1 && part[0] == '.') || (length == 2 && !memcmp(part, "..", 2))) return 0;
            if (!c) break;
            part = (const char *)p + 1;
        } else if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
                     (c >= '0' && c <= '9') || c == '.' || c == '-' || c == '_')) return 0;
    }
    size_t length = strlen(path);
    return length > 4 && (!strcmp(path + length - 4, ".cpk") || !strcmp(path + length - 4, ".trk"));
}

static int workshop_under(const char *path)
{
    size_t length = strlen(workshop_root);
    return length && !strncmp(path, workshop_root, length) && (path[length] == '/' || !path[length]);
}

static void workshop_clear(void)
{
    free(workshop_entries);
    workshop_entries = NULL;
    workshop_count = 0;
    workshop_valid = workshop_disabled = workshop_development = workshop_loaded = 0;
    workshop_root[0] = 0;
}

static int workshop_manifest(FILE *file)
{
    char line[512];
    if (!fgets(line, sizeof line, file) || strlen(line) != 16 ||
        memcmp(line, "CDWORKSHOP1\t", 12) || (line[12] != '0' && line[12] != '1') ||
        line[13] != '\t' || (line[14] != '0' && line[14] != '1') || line[15] != '\n') return 0;
    workshop_disabled = line[12] == '1';
    workshop_development = line[14] == '1';
    while (fgets(line, sizeof line, file)) {
        size_t length = strlen(line);
        if (!length || line[length - 1] != '\n' || workshop_count >= WORKSHOP_LIMIT) return 0;
        line[length - 1] = 0;
        char *fields[4] = {line};
        for (int i = 1; i < 4; ++i) {
            char *tab = strchr(fields[i - 1], '\t');
            if (!tab) return 0;
            *tab = 0;
            fields[i] = tab + 1;
        }
        workshop_entry entry = {0};
        if (!workshop_number(fields[0], &entry.id) || !entry.id ||
            !workshop_number(fields[1], &entry.size) || entry.size < 5 || entry.size > INT32_MAX ||
            !workshop_number(fields[2], &entry.updated) || !workshop_relative(fields[3])) return 0;
        for (unsigned i = 0; i < workshop_count; ++i) if (workshop_entries[i].id == entry.id) return 0;
        snprintf(entry.relative, sizeof entry.relative, "%s", fields[3]);
        entry.track = !strcmp(entry.relative + strlen(entry.relative) - 4, ".trk");
        char path[2048], canonical[PATH_MAX];
        if (snprintf(path, sizeof path, "%s/%s", workshop_root, entry.relative) >= (int)sizeof path ||
            !realpath(path, canonical) || !workshop_under(canonical)) {
            void_log("[workshop] missing or unsafe item %llu", (unsigned long long)entry.id);
            continue;
        }
        struct stat st;
        if (stat(canonical, &st) || !S_ISREG(st.st_mode) || st.st_size < 0 || (uint64_t)st.st_size != entry.size) {
            void_log("[workshop] size mismatch item %llu", (unsigned long long)entry.id);
            continue;
        }
        FILE *payload = fopen(canonical, "rb");
        unsigned char prefix[5] = {0};
        int valid = payload && fread(prefix, 1, sizeof prefix, payload) == sizeof prefix &&
            (entry.track ? !memcmp(prefix, "CDTRK", 5) : !memcmp(prefix, "PK\003\004", 4));
        if (payload) fclose(payload);
        if (!valid) { void_log("[workshop] invalid payload item %llu", (unsigned long long)entry.id); continue; }
        if (strlen(canonical) >= sizeof entry.host) return 0;
        strcpy(entry.host, canonical);
        workshop_entry *next = realloc(workshop_entries, (workshop_count + 1u) * sizeof *next);
        if (!next) return 0;
        workshop_entries = next;
        workshop_entries[workshop_count++] = entry;
    }
    return !ferror(file);
}

static void workshop_snapshot(void)
{
    workshop_clear();
    const char *root = getenv("PORT_WORKSHOP_ROOT");
    char canonical[PATH_MAX], path[2048];
    if (!root || !*root || !realpath(root, canonical) || strlen(canonical) >= sizeof workshop_root) return;
    strcpy(workshop_root, canonical);
    if (snprintf(path, sizeof path, "%s/active.tsv", workshop_root) >= (int)sizeof path) { workshop_clear(); return; }
    FILE *file = fopen(path, "rb");
    if (!file) { workshop_clear(); return; }
    struct stat manifest_stat;
    int valid = !stat(path, &manifest_stat) && S_ISREG(manifest_stat.st_mode) &&
        manifest_stat.st_size >= 0 && manifest_stat.st_size <= 512 * 1024 && workshop_manifest(file);
    fclose(file);
    if (!valid) { void_log("[workshop] rejected activation manifest"); workshop_clear(); return; }
    workshop_valid = 1;
    void_log("[workshop] snapshot items=%u disabled=%d development=%d", workshop_count, workshop_disabled, workshop_development);
}

static const workshop_entry *workshop_track(const char *windows)
{
    static const char prefix[] = "C:\\Games\\Crashday\\user\\workshop-";
    if (!workshop_valid || workshop_disabled || strncasecmp(windows, prefix, sizeof prefix - 1)) return NULL;
    char *end;
    const char *number = windows + sizeof prefix - 1;
    if (*number < '0' || *number > '9') return NULL;
    errno = 0;
    uint64_t id = strtoull(number, &end, 10);
    if (errno || end == number || strcasecmp(end, ".trk")) return NULL;
    for (unsigned i = 0; i < workshop_count; ++i)
        if (workshop_entries[i].track && workshop_entries[i].id == id) return &workshop_entries[i];
    return NULL;
}

void crashday_workshop_load(uint32_t content)
{
    if (!workshop_valid || workshop_loaded) return;
    workshop_loaded = 1;
    if (void_vm_writable(content + 0x14, 4)) MEM32(content + 0x14) = workshop_development ? 0x3F800000u : 0;
    if (workshop_disabled) return;
    void_regs saved;
    void_regs_save(&saved);
    for (unsigned i = 0; i < workshop_count; ++i) {
        const workshop_entry *entry = &workshop_entries[i];
        if (entry->track) continue;
        char windows[256];
        snprintf(windows, sizeof windows, "C:\\Workshop\\%s", entry->relative);
        for (char *p = windows; *p; ++p) if (*p == '/') *p = '\\';
        size_t length = strlen(windows);
        uint32_t value = void_galloc((uint32_t)length + 25);
        if (!value) { void_log("[workshop] allocation failed item %llu", (unsigned long long)entry->id); continue; }
        memset(GPTR(value), 0, 24);
        MEM32(value) = value + 24;
        MEM32(value + 16) = (uint32_t)length;
        MEM32(value + 20) = (uint32_t)length;
        memcpy(GPTR(value + 24), windows, length + 1);
        uint32_t args[2] = {value, 0};
        void_log("[workshop] load item=%llu order=%u bytes=%llu", (unsigned long long)entry->id, i, (unsigned long long)entry->size);
        void_call_guest(0x00662290u, 2, args, 1);
        void_call_guest(0x00662580u, 1, args, 1);
        void_gfree(value);
        void_log("[workshop] mounted item=%llu", (unsigned long long)entry->id);
    }
    void_regs_load(&saved);
}
