#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <limits.h>
#ifdef _WIN32
#define PATH_MAX 4096
#define strcasecmp _stricmp
#define strncasecmp _strnicmp
#define stat _stat64
#define S_ISREG(m) (((m) & _S_IFMT) == _S_IFREG)
static char *realpath(const char *input, char *output)
{
    char *result = _fullpath(output, input, PATH_MAX);
    struct stat st;
    if (!result || stat(result, &st)) return NULL;
    for (char *p = result; *p; ++p) if (*p == '\\') *p = '/';
    return result;
}
#endif

static unsigned char memory[65536];
typedef struct { uint32_t eax, ecx, edx, esp; } void_regs;
static void_regs registers = {11, 22, 33, 60000};
static unsigned calls;
static char loaded[4][256];
#define GPTR(p) (memory + (p))
#define MEM32(p) (*(uint32_t *)GPTR(p))
#define void_log(...) ((void)0)
static int void_vm_writable(uint32_t address, uint32_t length) { return address && (uint64_t)address + length <= sizeof memory; }
static uint32_t void_galloc(uint32_t length) { assert(length < 2048); return 1024; }
static void void_gfree(uint32_t address) { assert(address == 1024); }
static void void_regs_save(void_regs *out) { *out = registers; }
static void void_regs_load(const void_regs *in) { registers = *in; }
static uint32_t void_call_guest(uint32_t address, int count, const uint32_t *args, int pops)
{
    assert(pops == 1 && args[0] == 1024);
    uint32_t value = args[0];
    const char *path = (const char *)GPTR(MEM32(value));
    assert(MEM32(value + 16) == strlen(path) && MEM32(value + 20) >= strlen(path));
    if (!(calls & 1)) {
        assert(address == 0x00662290 && count == 2 && args[1] == 0);
        snprintf(loaded[calls / 2], sizeof loaded[0], "%s", path);
    } else assert(address == 0x00662580 && count == 1);
    ++calls;
    registers.eax = registers.ecx = registers.edx = 99;
    registers.esp -= 32;
    return 1;
}

#include "../../android/host/steam_workshop.inc"

typedef struct { char *name; struct stat st; } found_t;
typedef struct { found_t *found; int count, next; } find_t;
#include "workshop_find.inc"

static void activate(const char *text)
{
    const char *root = getenv("PORT_WORKSHOP_ROOT");
    char path[4096];
    snprintf(path, sizeof path, "%s/active.tsv", root);
    FILE *file = fopen(path, "wb"); assert(file);
    assert(fwrite(text, 1, strlen(text), file) == strlen(text)); assert(!fclose(file));
    workshop_snapshot();
}

static void release_found(find_t *found)
{
    for (int i = 0; i < found->count; ++i) free(found->found[i].name);
    free(found->found); memset(found, 0, sizeof *found);
}

int main(void)
{
    uint64_t value;
    assert(workshop_number("18446744073709551615", &value) && value == UINT64_MAX);
    assert(!workshop_number("18446744073709551616", &value));
    assert(!workshop_number("-1", &value) && !workshop_number("1x", &value));
    assert(workshop_relative("items/1/a.cpk"));
    assert(!workshop_relative("../a.cpk") && !workshop_relative("items/../a.cpk"));
    assert(!workshop_relative("items//a.cpk") && !workshop_relative("/a.cpk"));
    assert(!workshop_relative("items/1/a.dll") && !workshop_relative("C:/a.cpk"));

    activate("CDWORKSHOP1\t0\t1\n3\t9\t123\titems/3/c.cpk\n2\t8\t124\titems/2/b.trk\n1\t9\t125\titems/1/a.cpk\n");
    assert(workshop_valid && workshop_count == 3 && workshop_development && !workshop_disabled);
    const workshop_entry *track = workshop_track("C:\\Games\\Crashday\\user\\workshop-2.trk");
    assert(track && track->id == 2 && strstr(track->host, "/items/2/b.trk"));
    assert(!workshop_track("C:\\Games\\Crashday\\user\\workshop-1.trk"));
    assert(!workshop_track("C:\\Games\\Crashday\\user\\workshop-+2.trk"));
    assert(!workshop_track("C:\\Games\\Crashday\\user\\workshop-2.trk/../a"));
    assert(!workshop_track("C:\\Games\\Crashday\\user\\workshop-18446744073709551616.trk"));

    find_t found = {0};
    find_workshop(&found, "C:\\Games\\Crashday\\user", "*.trk", 0);
    assert(found.count == 1 && !strcmp(found.found[0].name, "workshop-2.trk"));
    find_workshop(&found, "C:\\Games\\Crashday\\user", "*.trk", 0);
    assert(found.count == 1);
    release_found(&found);
    found.found = calloc(1, sizeof *found.found); assert(found.found);
    found.count = 1; found.found[0].name = strdup("workshop-2.trk"); found.found[0].st.st_size = 777;
    find_workshop(&found, "C:\\Games\\Crashday\\user", "*.trk", 0);
    assert(found.count == 1 && found.found[0].st.st_size == 777); /* A player's real same-name track wins. */
    release_found(&found);
    find_workshop(&found, "C:\\Games\\Crashday\\user", "*.cpk", 0);
    assert(found.count == 0);
    find_workshop(&found, "C:\\Games\\Crashday\\other", "*.trk", 0);
    assert(found.count == 0);

    void_regs before = registers;
    crashday_workshop_load(256);
    assert(calls == 4 && MEM32(276) == 0x3F800000 && !memcmp(&before, &registers, sizeof before));
    assert(!strcmp(loaded[0], "C:\\Workshop\\items\\3\\c.cpk"));
    assert(!strcmp(loaded[1], "C:\\Workshop\\items\\1\\a.cpk"));
    crashday_workshop_load(256); assert(calls == 4);

    activate("CDWORKSHOP1\t1\t0\n1\t9\t0\titems/1/a.cpk\n2\t8\t0\titems/2/b.trk\n");
    assert(workshop_valid && workshop_disabled && !workshop_development);
    crashday_workshop_load(256); assert(calls == 4 && MEM32(276) == 0);
    assert(!workshop_track("C:\\Games\\Crashday\\user\\workshop-2.trk"));
    find_workshop(&found, "C:\\Games\\Crashday\\user", "*.trk", 0); assert(found.count == 0);

    activate("CDWORKSHOP1\t0\t0\n1\t100\t0\titems/1/a.cpk\n2\t8\t0\titems/2/b.trk\n4\t9\t0\titems/4/missing.cpk\n5\t9\t0\titems/5/bad.cpk\n");
    assert(workshop_valid && workshop_count == 1 && workshop_entries[0].id == 2);
    const char *invalid[] = {
        "CDWORKSHOP2\t0\t0\n", "CDWORKSHOP1\t2\t0\n", "CDWORKSHOP1\t0\t0",
        "CDWORKSHOP1\t0\t0\n1\t9\t0\t../outside.cpk\n",
        "CDWORKSHOP1\t0\t0\n1\t9\t0\titems/1/a.cpk\n1\t9\t0\titems/1/a.cpk\n",
        "CDWORKSHOP1\t0\t0\n18446744073709551616\t9\t0\titems/1/a.cpk\n",
        "CDWORKSHOP1\t0\t0\n1\t9\t0\titems/1/a.cpk",
        "CDWORKSHOP1\t0\t0\n1\t9\t0\titems/1/a.cpk\tbad\n",
    };
    for (unsigned i = 0; i < sizeof invalid / sizeof invalid[0]; ++i) {
        activate(invalid[i]); assert(!workshop_valid && !workshop_count && !workshop_root[0]);
    }
    activate("CDWORKSHOP1\t0\t0\n"); assert(workshop_valid && !workshop_count);
    workshop_clear();
    puts("PASS: native Workshop snapshot, safe paths, payload validation, original loader order/registers, dev/disable flags, tracks, malformed/partial state");
    return 0;
}
