/* The guest address space: one 4 GiB reservation, a Win32-style page map
 * (64 KiB allocation granularity, reserve/commit, protection) and Win32 heaps
 * built on dlmalloc mspaces whose system memory comes from the same map.
 *
 * The guest's page stays 4 KiB on every kernel. With 16 KiB host pages
 * (Android 15+ devices) a host page holds four guest pages and gets the union
 * of their protections: guest accesses are checked against the guest map
 * (range_access) and a guest fault is fatal either way, so all that is lost
 * is the trap of a stray access next to a committed page. */
#define _GNU_SOURCE
#include "host.h"
#include <stdio.h>
#include <errno.h>
#include <stdatomic.h>
#include <time.h>
#include <unistd.h>
#include <sys/mman.h>

#define PAGES (1u << 20)               /* 4 GiB / 4 KiB */
#define GRANULES (1u << 16)            /* 4 GiB / 64 KiB */

enum { ST_FREE = 0, ST_RESERVE = 1, ST_COMMIT = 2 };
#define MEM_COMMIT_ 0x1000u
#define MEM_RESERVE_ 0x2000u
#define MEM_DECOMMIT_ 0x4000u
#define MEM_RELEASE_ 0x8000u
#define MEM_TOP_DOWN_ 0x100000u
#define MEM_PRIVATE_ 0x20000u
#define MEM_IMAGE_ 0x1000000u

#define PAGE_NOACCESS_ 0x01u
#define PAGE_READONLY_ 0x02u
#define PAGE_READWRITE_ 0x04u
#define PAGE_WRITECOPY_ 0x08u
#define PAGE_EXECUTE_ 0x10u
#define PAGE_EXECUTE_READ_ 0x20u
#define PAGE_EXECUTE_READWRITE_ 0x40u
#define PAGE_EXECUTE_WRITECOPY_ 0x80u
#define PAGE_GUARD_ 0x100u

static uint8_t page_state[PAGES];
static uint16_t page_protect[PAGES];   /* Win32 PAGE_* of committed pages */
static uint32_t page_alloc[PAGES];     /* allocation base (VA >> 12), 0 if free */
static uint16_t alloc_protect[PAGES];  /* initial protection, valid at the base */
static uint8_t granule_used[GRANULES];
/* Who reserved each allocation (at its base page), for the census: a
 * four-character origin the caller names through void_vm_origin, or 0. */
static uint32_t alloc_origin[PAGES];
static __thread uint32_t vm_origin;
uint32_t void_vm_origin(uint32_t origin) { uint32_t previous = vm_origin; vm_origin = origin; return previous; }
static pthread_mutex_t vm_lock = PTHREAD_MUTEX_INITIALIZER;
static uint32_t host_pages = 1;        /* guest pages per host page: 1 (4 KiB) or 4 (16 KiB) */

static uint32_t guest_user_top = GUEST_USER_TOP;
uint32_t void_vm_user_top(void) { return guest_user_top; }
uint32_t void_vm_available(void)
{
    uint32_t free_granules = 0;
    pthread_mutex_lock(&vm_lock);
    for (uint32_t g = 1; g < (guest_user_top >> 16); ++g) free_granules += !granule_used[g];
    pthread_mutex_unlock(&vm_lock);
    return free_granules << 16;
}

int void_guest_reserve(void)
{
    const char *large_address = getenv("PORT_OPTION_LARGE_ADDRESS_AWARE");
    guest_user_top = large_address && (!strcmp(large_address, "1") || !strcmp(large_address, "true"))
        ? 0xFFFE0000u : GUEST_USER_TOP;
    long size = sysconf(_SC_PAGESIZE);
    if (size > (long)GUEST_PAGE && size <= (long)GUEST_GRANULARITY && !(size & (size - 1)))
        host_pages = (uint32_t)size / GUEST_PAGE;
    else if (size != (long)GUEST_PAGE) {
        void_log("[void] unsupported host page size %ld", size);
        return 0;
    }
    void *want = (void *)(uintptr_t)VOID_GUEST_BASE;
    void *got = mmap(want, VOID_GUEST_SPAN, PROT_NONE,
        MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (got == MAP_FAILED) {
        void_log("[void] guest window reservation failed: %s", strerror(errno));
        return 0;
    }
    if (got != want) {
        void_log("[void] guest window landed at %p instead of %p", got, want);
        munmap(got, VOID_GUEST_SPAN);
        return 0;
    }
    /* Null guard: the first 64 KiB are never allocatable, as on Windows. */
    granule_used[0] = 1;
    /* Synthetic thunk VAs: reserved, never accessible. */
    for (uint32_t g = GUEST_THUNK_BASE >> 16; g < (GUEST_THUNK_LIMIT >> 16); ++g) granule_used[g] = 1;
    /* Everything above the user top stays unavailable. */
    for (uint32_t g = guest_user_top >> 16; g < GRANULES; ++g) granule_used[g] = 1;
    void_log("[void] guest window %p..%p reserved, host page %u KiB", want,
             (void *)((uintptr_t)want + VOID_GUEST_SPAN), host_pages * 4);
    return 1;
}

static int host_prot(uint32_t protect)
{
    if (protect & PAGE_GUARD_) return PROT_NONE;
    switch (protect & 0xFFu) {
    case PAGE_NOACCESS_: return PROT_NONE;
    case PAGE_READONLY_: case PAGE_EXECUTE_: case PAGE_EXECUTE_READ_: return PROT_READ;
    default: return PROT_READ | PROT_WRITE;
    }
}

static int valid_protect(uint32_t protect)
{
    switch (protect & ~PAGE_GUARD_ & 0xFFFu) {
    case PAGE_NOACCESS_: case PAGE_READONLY_: case PAGE_READWRITE_: case PAGE_WRITECOPY_:
    case PAGE_EXECUTE_: case PAGE_EXECUTE_READ_: case PAGE_EXECUTE_READWRITE_: case PAGE_EXECUTE_WRITECOPY_:
        return 1;
    default:
        return 0;
    }
}

static uint32_t find_free(uint32_t size, int top_down)
{
    uint32_t need = (uint32_t)(((uint64_t)size + GUEST_GRANULARITY - 1) / GUEST_GRANULARITY);
    if (!need) return 0;
    uint32_t limit = guest_user_top >> 16;
    if (top_down) {
        uint32_t run = 0;
        for (uint32_t g = limit; g-- > 1;) {
            run = granule_used[g] ? 0 : run + 1;
            if (run == need) return g << 16;
        }
    } else {
        uint32_t run = 0;
        for (uint32_t g = 1; g < limit; ++g) {
            run = granule_used[g] ? 0 : run + 1;
            if (run == need) return (g - need + 1) << 16;
        }
    }
    return 0;
}

static void set_pages(uint32_t first, uint32_t count, uint8_t state, uint16_t protect, uint32_t base_page)
{
    for (uint32_t p = first; p < first + count; ++p) {
        page_state[p] = state;
        page_protect[p] = protect;
        page_alloc[p] = base_page;
    }
}

/* The host protection of the host page holding guest page p: the union of its guest
 * pages', where the pages [first, last] are about to get the host protection prot
 * (0: decommitted). */
static int host_page_prot(uint32_t p, uint32_t first, uint32_t last, int prot)
{
    int out = 0;
    for (uint32_t q = p - p % host_pages, end = q + host_pages; q < end; ++q) {
        if (q >= first && q <= last) out |= prot;
        else if (page_state[q] == ST_COMMIT) out |= host_prot(page_protect[q]);
    }
    return out;
}

/* Gives the host pages over the guest pages [first, last] their protection as if those
 * pages had prot (0: not committed), in runs of equal protection. Caller holds vm_lock
 * and updates the guest map after a success. */
static int host_protect(uint32_t first, uint32_t last, int prot)
{
    uint32_t from = first - first % host_pages, to = last + host_pages - 1 - last % host_pages;
    for (uint32_t run = from; run <= to;) {
        int want = host_page_prot(run, first, last, prot);
        uint32_t end = run + host_pages;
        while (end <= to && host_page_prot(end, first, last, prot) == want) end += host_pages;
        if (mprotect(GPTR(run << 12), (size_t)(end - run) << 12, want)) {
            void_log("[void] mprotect %08X+%08X failed: %s", run << 12, (end - run) << 12, strerror(errno));
            return 0;
        }
        run = end;
    }
    return 1;
}

static int commit_range(uint32_t address, uint32_t size, uint32_t protect)
{
    return host_protect(address >> 12, (uint32_t)(((uint64_t)address + size - 1) >> 12), host_prot(protect));
}

/* Whether the host page holding guest page p has committed guest pages outside [first, last]. */
static int host_page_shared(uint32_t p, uint32_t first, uint32_t last)
{
    for (uint32_t q = p - p % host_pages, end = q + host_pages; q < end; ++q)
        if ((q < first || q > last) && page_state[q] == ST_COMMIT) return 1;
    return 0;
}

/* Decommits the guest pages [first, last]: committed again they read as zero, as on
 * Windows. Whole host pages are dropped; guest pages sharing a host page with
 * committed ones are cleared. Caller holds vm_lock and updates the guest map. */
static void decommit_range(uint32_t first, uint32_t last)
{
    uint32_t from = first - first % host_pages, to = last + host_pages - 1 - last % host_pages;
    for (uint32_t run = from; run <= to;) {
        uint32_t end = run + host_pages;
        if (host_page_shared(run, first, last)) {
            mprotect(GPTR(run << 12), (size_t)host_pages << 12, PROT_READ | PROT_WRITE);
            for (uint32_t q = run; q < end; ++q)
                if (q >= first && q <= last && page_state[q] == ST_COMMIT) memset(GPTR(q << 12), 0, GUEST_PAGE);
        } else {
            while (end <= to && !host_page_shared(end, first, last)) end += host_pages;
            madvise(GPTR(run << 12), (size_t)(end - run) << 12, MADV_DONTNEED);
        }
        run = end;
    }
    host_protect(first, last, PROT_NONE);
}

/* Reserve [address, address+size) as one allocation. Caller holds vm_lock. */
static int reserve_exact(uint32_t address, uint32_t size, uint32_t protect)
{
    if (!size || (uint64_t)address + size > guest_user_top) return 0;
    uint32_t g0 = address >> 16, g1 = (uint32_t)(((uint64_t)address + size + GUEST_GRANULARITY - 1) >> 16);
    if ((address & (GUEST_GRANULARITY - 1)) || g1 > (guest_user_top >> 16) || g1 <= g0) return 0;
    for (uint32_t g = g0; g < g1; ++g) if (granule_used[g]) return 0;
    for (uint32_t g = g0; g < g1; ++g) granule_used[g] = 1;
    uint32_t pages = (uint32_t)(((uint64_t)size + GUEST_PAGE - 1) / GUEST_PAGE);
    set_pages(address >> 12, pages, ST_RESERVE, 0, address >> 12);
    alloc_protect[address >> 12] = (uint16_t)protect;
    alloc_origin[address >> 12] = vm_origin;
    return 1;
}

uint32_t void_vm_alloc(uint32_t address, uint32_t size, uint32_t type, uint32_t protect)
{
    if (!size || !(type & (MEM_COMMIT_ | MEM_RESERVE_)) || !valid_protect(protect)) {
        void_set_last_error(ERROR_INVALID_PARAMETER_);
        return 0;
    }
    if ((uint64_t)address + size > guest_user_top) {
        void_set_last_error(address ? ERROR_INVALID_ADDRESS_ : ERROR_NOT_ENOUGH_MEMORY_);
        return 0;
    }
    pthread_mutex_lock(&vm_lock);
    uint32_t result = 0;
    /* Windows implicitly reserves when MEM_COMMIT chooses its own address. */
    if ((type & MEM_RESERVE_) || !address) {
        uint32_t base = address & ~(GUEST_GRANULARITY - 1);
        uint32_t span = (uint32_t)((((uint64_t)address + size + GUEST_PAGE - 1) & ~(uint64_t)(GUEST_PAGE - 1)) - base);
        if (!address) {
            span = (uint32_t)(((uint64_t)size + GUEST_PAGE - 1) & ~(uint64_t)(GUEST_PAGE - 1));
            base = find_free(span, (type & MEM_TOP_DOWN_) != 0);
            if (!base) { pthread_mutex_unlock(&vm_lock); void_set_last_error(ERROR_NOT_ENOUGH_MEMORY_); return 0; }
        }
        if (!reserve_exact(base, span, protect)) {
            pthread_mutex_unlock(&vm_lock);
            void_set_last_error(ERROR_INVALID_ADDRESS_);
            return 0;
        }
        if (type & MEM_COMMIT_) {
            if (!commit_range(base, span, protect)) {
                pthread_mutex_unlock(&vm_lock);
                void_vm_free(base, 0, MEM_RELEASE_);
                void_set_last_error(ERROR_NOT_ENOUGH_MEMORY_);
                return 0;
            }
            set_pages(base >> 12, span >> 12, ST_COMMIT, (uint16_t)protect, base >> 12);
        }
        result = base;
    } else {
        /* Commit inside an existing reservation. */
        uint32_t first = address >> 12;
        uint32_t last = (uint32_t)(((uint64_t)address + size - 1) >> 12);
        for (uint32_t p = first; p <= last; ++p) {
            if (page_state[p] == ST_FREE || page_alloc[p] != page_alloc[first]) {
                pthread_mutex_unlock(&vm_lock);
                void_set_last_error(ERROR_INVALID_ADDRESS_);
                return 0;
            }
        }
        uint32_t start = first << 12, span = (last - first + 1) << 12;
        if (!commit_range(start, span, protect)) { pthread_mutex_unlock(&vm_lock); return 0; }
        for (uint32_t p = first; p <= last; ++p) { page_state[p] = ST_COMMIT; page_protect[p] = (uint16_t)protect; }
        result = start;
    }
    pthread_mutex_unlock(&vm_lock);
    return result;
}

int void_vm_claim(uint32_t address, uint32_t size, uint32_t protect)
{
    if (!size || !valid_protect(protect) || (uint64_t)address + size > guest_user_top) return 0;
    pthread_mutex_lock(&vm_lock);
    uint32_t span = (uint32_t)(((uint64_t)size + GUEST_PAGE - 1) & ~(uint64_t)(GUEST_PAGE - 1));
    int reserved = reserve_exact(address, span, protect);
    int ok = reserved && commit_range(address, span, protect);
    if (ok) set_pages(address >> 12, span >> 12, ST_COMMIT, (uint16_t)protect, address >> 12);
    pthread_mutex_unlock(&vm_lock);
    if (reserved && !ok) void_vm_free(address, 0, MEM_RELEASE_);
    return ok;
}

/* Release the whole allocation based at `page`. Caller holds vm_lock.
 * Returns the number of pages it spanned. */
static uint32_t release_locked(uint32_t page)
{
    uint32_t p = page;
    while (p < PAGES && page_state[p] != ST_FREE && page_alloc[p] == page) ++p;
    uint32_t span = (p - page) << 12, address = page << 12;
    mmap(GPTR(address), span, PROT_NONE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED | MAP_NORESERVE, -1, 0);
    set_pages(page, p - page, ST_FREE, 0, 0);
    uint32_t g1 = (uint32_t)(((uint64_t)address + span + GUEST_GRANULARITY - 1) >> 16);
    for (uint32_t g = address >> 16; g < g1; ++g) granule_used[g] = 0;
    alloc_origin[page] = 0;
    return p - page;
}

int void_vm_free(uint32_t address, uint32_t size, uint32_t type)
{
    if (address >= guest_user_top || (size && (uint64_t)address + size > guest_user_top)) {
        void_set_last_error(ERROR_INVALID_ADDRESS_);
        return 0;
    }
    pthread_mutex_lock(&vm_lock);
    uint32_t page = address >> 12;
    if (type & MEM_RELEASE_) {
        if (size || (address & 0xFFFu) || page_state[page] == ST_FREE || page_alloc[page] != page) {
            pthread_mutex_unlock(&vm_lock);
            void_set_last_error(ERROR_INVALID_PARAMETER_);
            return 0;
        }
        release_locked(page);
    } else if (type & MEM_DECOMMIT_) {
        uint32_t first = page;
        uint32_t last = size ? (uint32_t)(((uint64_t)address + size - 1) >> 12) : first;
        if (!size) {
            uint32_t base = page_alloc[page];
            first = base;
            last = base;
            while (last + 1 < PAGES && page_state[last + 1] != ST_FREE && page_alloc[last + 1] == base) ++last;
        }
        for (uint32_t p = first; p <= last; ++p) {
            if (page_state[p] == ST_FREE) { pthread_mutex_unlock(&vm_lock); void_set_last_error(ERROR_INVALID_ADDRESS_); return 0; }
        }
        decommit_range(first, last);
        for (uint32_t p = first; p <= last; ++p) { page_state[p] = ST_RESERVE; page_protect[p] = 0; }
    } else {
        pthread_mutex_unlock(&vm_lock);
        void_set_last_error(ERROR_INVALID_PARAMETER_);
        return 0;
    }
    pthread_mutex_unlock(&vm_lock);
    return 1;
}

int void_vm_protect(uint32_t address, uint32_t size, uint32_t protect, uint32_t *old)
{
    if (!size || !valid_protect(protect)) { void_set_last_error(ERROR_INVALID_PARAMETER_); return 0; }
    if ((uint64_t)address + size > guest_user_top) { void_set_last_error(ERROR_INVALID_ADDRESS_); return 0; }
    pthread_mutex_lock(&vm_lock);
    uint32_t first = address >> 12, last = (uint32_t)(((uint64_t)address + size - 1) >> 12);
    for (uint32_t p = first; p <= last; ++p) {
        if (page_state[p] != ST_COMMIT) { pthread_mutex_unlock(&vm_lock); void_set_last_error(ERROR_INVALID_ADDRESS_); return 0; }
    }
    if (old) *old = page_protect[first];
    if (!host_protect(first, last, host_prot(protect))) {
        pthread_mutex_unlock(&vm_lock);
        void_set_last_error(ERROR_INVALID_PARAMETER_);
        return 0;
    }
    for (uint32_t p = first; p <= last; ++p) page_protect[p] = (uint16_t)protect;
    pthread_mutex_unlock(&vm_lock);
    return 1;
}

uint32_t void_vm_query(uint32_t address, uint32_t info)
{
    if (address >= guest_user_top || !void_vm_writable(info, 28)) {
        void_set_last_error(ERROR_INVALID_PARAMETER_);
        return 0;
    }
    pthread_mutex_lock(&vm_lock);
    uint32_t limit = guest_user_top >> 12;
    uint32_t page = address >> 12;
    uint8_t state = page_state[page];
    uint32_t base_page = page_alloc[page];
    uint16_t protect = page_protect[page];
    /* Thunks occupy allocator granules, but remain inaccessible in the page map. */
    int thunk = page >= (GUEST_THUNK_BASE >> 12) && page < (GUEST_THUNK_LIMIT >> 12);
    if (thunk) {
        state = ST_RESERVE;
        base_page = GUEST_THUNK_BASE >> 12;
        protect = 0;
        if (limit > (GUEST_THUNK_LIMIT >> 12)) limit = GUEST_THUNK_LIMIT >> 12;
    } else if (page < (GUEST_THUNK_BASE >> 12) && limit > (GUEST_THUNK_BASE >> 12)) {
        limit = GUEST_THUNK_BASE >> 12;
    }
    uint32_t p = thunk ? limit : page;
    while (p < limit && page_state[p] == state && page_alloc[p] == base_page && page_protect[p] == protect) ++p;
    uint32_t region = (p - page) << 12;
    if (state == ST_FREE) {
        /* A free region extends to the next allocated page. */
        p = page;
        while (p < limit && page_state[p] == ST_FREE) ++p;
        region = (p - page) << 12;
    }
    MEM32(info + 0) = page << 12;                                    /* BaseAddress */
    MEM32(info + 4) = state == ST_FREE ? 0 : base_page << 12;        /* AllocationBase */
    MEM32(info + 8) = state == ST_FREE ? 0 : thunk ? PAGE_NOACCESS_ : alloc_protect[base_page]; /* AllocationProtect */
    MEM32(info + 12) = region;                                       /* RegionSize */
    MEM32(info + 16) = state == ST_FREE ? 0x10000u : state == ST_RESERVE ? MEM_RESERVE_ : MEM_COMMIT_;
    MEM32(info + 20) = state == ST_COMMIT ? protect : 0;             /* Protect */
    MEM32(info + 24) = state == ST_FREE ? 0 : MEM_PRIVATE_;          /* Type */
    pthread_mutex_unlock(&vm_lock);
    return 28;
}

/* MapViewOfFile: a fresh reservation with the file mapped over it. */
uint32_t void_vm_map_file(int fd, uint64_t offset, uint32_t size, int writable, int shared)
{
    if (!size || size > guest_user_top) { void_set_last_error(ERROR_INVALID_PARAMETER_); return 0; }
    /* Win32 views start at a multiple of the 64 KiB granularity, so of any host page too. */
    if (offset % ((uint64_t)host_pages * GUEST_PAGE)) {
        void_log("[void] mmap view at unaligned offset %llX", (unsigned long long)offset);
        void_set_last_error(ERROR_INVALID_PARAMETER_);
        return 0;
    }
    pthread_mutex_lock(&vm_lock);
    uint32_t span = (uint32_t)(((uint64_t)size + GUEST_PAGE - 1) & ~(uint64_t)(GUEST_PAGE - 1));
    uint32_t base = find_free(span, 0);
    if (!base || !reserve_exact(base, span, writable ? PAGE_READWRITE_ : PAGE_READONLY_)) {
        pthread_mutex_unlock(&vm_lock);
        void_set_last_error(ERROR_NOT_ENOUGH_MEMORY_);
        return 0;
    }
    int prot = PROT_READ | (writable ? PROT_WRITE : 0);
    void *host = mmap(GPTR(base), span, prot, (shared ? MAP_SHARED : MAP_PRIVATE) | MAP_FIXED, fd, (off_t)offset);
    if (host == MAP_FAILED) {
        int e = errno;
        set_pages(base >> 12, span >> 12, ST_FREE, 0, 0);
        uint32_t g1 = (uint32_t)(((uint64_t)base + span + GUEST_GRANULARITY - 1) >> 16);
        for (uint32_t g = base >> 16; g < g1; ++g) granule_used[g] = 0;
        pthread_mutex_unlock(&vm_lock);
        void_log("[void] mmap view failed: %s", strerror(e));
        void_set_last_error(ERROR_ACCESS_DENIED_);
        return 0;
    }
    set_pages(base >> 12, span >> 12, ST_COMMIT, (uint16_t)(writable ? PAGE_READWRITE_ : PAGE_READONLY_), base >> 12);
    pthread_mutex_unlock(&vm_lock);
    return base;
}

int void_vm_unmap_file(uint32_t address)
{
    return void_vm_free(address & ~(GUEST_PAGE - 1), 0, MEM_RELEASE_);
}

static int range_access(uint32_t address, uint32_t size, int write)
{
    if (!size) return 1;
    uint64_t end = (uint64_t)address + size;
    if (end > guest_user_top) return 0;
    for (uint32_t p = address >> 12; p <= (uint32_t)((end - 1) >> 12); ++p) {
        if (page_state[p] != ST_COMMIT) return 0;
        int prot = host_prot(page_protect[p]);
        if (!(prot & PROT_READ) || (write && !(prot & PROT_WRITE))) return 0;
    }
    return 1;
}

int void_vm_readable(uint32_t address, uint32_t size) { return range_access(address, size, 0); }
int void_vm_writable(uint32_t address, uint32_t size) { return range_access(address, size, 1); }

/* Debugging (script "memfind"): every committed, readable guest address
 * holding the pattern, up to max hits. Patterns crossing a page into an
 * unreadable one are missed. */
int void_vm_find(const uint8_t *pattern, uint32_t length, uint32_t *hits, int max)
{
    int found = 0;
    if (!length) return 0;
    for (uint32_t page = 0; page < PAGES && found < max; ++page) {
        if (page_state[page] != ST_COMMIT || !(host_prot(page_protect[page]) & PROT_READ)) continue;
        uint32_t base = page << 12;
        const uint8_t *bytes = (const uint8_t *)GPTR(base);
        uint32_t span = 4096;
        if (page + 1 < PAGES && page_state[page + 1] == ST_COMMIT && (host_prot(page_protect[page + 1]) & PROT_READ))
            span += length - 1;
        for (uint32_t i = 0; i + length <= span && found < max; ++i)
            if (bytes[i] == pattern[0] && !memcmp(bytes + i, pattern, length)) hits[found++] = base + i;
    }
    return found;
}

/* Debugging: every committed writable guest page (the heaps, the images'
 * data) to a file, as records of {base, size, bytes}; the size in MiB. */
int void_vm_dump(const char *path)
{
    FILE *out = fopen(path, "wb");
    if (!out) return -1;
    uint64_t total = 0;
    pthread_mutex_lock(&vm_lock);
    for (uint32_t page = 0; page < PAGES;) {
        if (page_state[page] != ST_COMMIT || !(host_prot(page_protect[page]) & PROT_WRITE)) { ++page; continue; }
        uint32_t first = page;
        while (page < PAGES && page_state[page] == ST_COMMIT && (host_prot(page_protect[page]) & PROT_WRITE)) ++page;
        uint32_t record[2] = {first << 12, (page - first) << 12};
        fwrite(record, sizeof record, 1, out);
        fwrite(GPTR(record[0]), 1, record[1], out);
        total += record[1];
    }
    pthread_mutex_unlock(&vm_lock);
    fclose(out);
    return (int)(total >> 20);
}

/* ---------------------------------------------------------------- heaps */
#define ONLY_MSPACES 1
#define MSPACES 1
#define HAVE_MORECORE 0
#define HAVE_MMAP 1
#define HAVE_MREMAP 0
#define USE_LOCKS 1
#define DEFAULT_GRANULARITY (256u * 1024u)
#define DEFAULT_MMAP_THRESHOLD (1024u * 1024u)
#define MALLOC_INSPECT_ALL 1
#define NO_MALLINFO 1
#define NO_MALLOC_STATS 1
#define LACKS_SCHED_H 0
static void *guest_sys_alloc(size_t size);
static int guest_sys_free(void *p, size_t size);
#define MMAP(s) guest_sys_alloc(s)
#define DIRECT_MMAP(s) guest_sys_alloc(s)
#define MUNMAP(a, s) guest_sys_free((a), (s))
#define PROCEED_ON_ERROR 0
#define ABORT void_fatal("dlmalloc detected heap corruption")
#include "../../reference/dlmalloc/malloc.c"

static void *guest_sys_alloc(size_t size)
{
    if (size > 0x7FFF0000u) return (void *)MFAIL;
    uint32_t origin = void_vm_origin(0x48454150u);   /* 'HEAP' */
    uint32_t va = void_vm_alloc(0, (uint32_t)size, MEM_RESERVE_ | MEM_COMMIT_, PAGE_READWRITE_);
    void_vm_origin(origin);
    return va ? GPTR(va) : (void *)MFAIL;
}

/* dlmalloc can trim inside an allocation or unmap several joined allocations.
 * Decommit partial ranges, then release a reservation once its last live page goes. */
static int guest_sys_free(void *p, size_t size)
{
    uint32_t at = GVA(p);
    if (!size || (at & 0xFFFu) || size > 0x100000000ull - at) return -1;
    uint32_t first = at >> 12, end = (uint32_t)(((uint64_t)at + size + 0xFFFu) >> 12);
    pthread_mutex_lock(&vm_lock);
    for (uint32_t q = first; q < end; ++q) {
        if (page_state[q] == ST_FREE) { pthread_mutex_unlock(&vm_lock); return -1; }
    }
    for (uint32_t q = first; q < end;) {
        uint32_t base = page_alloc[q], limit = q;
        while (limit < PAGES && page_state[limit] != ST_FREE && page_alloc[limit] == base) ++limit;
        uint32_t stop = limit < end ? limit : end;
        int retained = 0;
        for (uint32_t i = base; i < limit && !retained; ++i)
            retained = (i < q || i >= stop) && page_state[i] == ST_COMMIT;
        if (!retained) {
            release_locked(base);
        } else {
            decommit_range(q, stop - 1);
            for (uint32_t i = q; i < stop; ++i) { page_state[i] = ST_RESERVE; page_protect[i] = 0; }
        }
        q = stop;
    }
    pthread_mutex_unlock(&vm_lock);
    return 0;
}

/* A heap handle is the guest VA of a small descriptor, so it looks like the
 * pointer-valued HANDLE Windows returns. */
#define MAX_HEAPS 256
#define BLOCK_MAGIC 0x48454150u      /* 'HEAP' */
typedef struct { uint32_t handle; mspace space; } heap_t;
static heap_t heaps[MAX_HEAPS];
static int heap_count;
static uint32_t process_heap;
static pthread_mutex_t heap_lock = PTHREAD_MUTEX_INITIALIZER;

static heap_t *heap_find(uint32_t handle)
{
    for (int i = 0; i < heap_count; ++i) if (heaps[i].handle == handle && heaps[i].space) return &heaps[i];
    return NULL;
}

uint32_t void_heap_create(uint32_t initial, uint32_t maximum)
{
    (void)initial; (void)maximum;
    pthread_mutex_lock(&heap_lock);
    if (heap_count >= MAX_HEAPS) { pthread_mutex_unlock(&heap_lock); return 0; }
    mspace space = create_mspace(0, 1);
    if (!space) { pthread_mutex_unlock(&heap_lock); return 0; }
    /* The descriptor lives in the new heap itself: a real, readable address. */
    void *descriptor = mspace_calloc(space, 1, 64);
    heap_t *h = &heaps[heap_count++];
    h->space = space;
    h->handle = GVA(descriptor);
    MEM32(h->handle) = 0xEEFFEEFFu;   /* the Windows heap signature field */
    pthread_mutex_unlock(&heap_lock);
    return h->handle;
}

int void_heap_destroy(uint32_t handle)
{
    pthread_mutex_lock(&heap_lock);
    heap_t *h = heap_find(handle);
    if (!h || handle == process_heap) { pthread_mutex_unlock(&heap_lock); return 0; }
    destroy_mspace(h->space);
    h->space = NULL;
    pthread_mutex_unlock(&heap_lock);
    return 1;
}

uint32_t void_process_heap(void)
{
    if (!process_heap) process_heap = void_heap_create(0, 0);
    return process_heap;
}

/* Live heap blocks and their requested bytes, for the periodic memory line;
 * host allocations (void_galloc) are counted again on their own. */
static _Atomic int64_t heap_live_bytes, heap_live_blocks, host_live_bytes, host_live_blocks;
/* Bytes freed since the last purge (void_heap_purge_if_due). */
static _Atomic uint64_t heap_freed_since_purge;
static _Atomic uint64_t heap_purged_total, heap_purges;

uint32_t void_heap_alloc(uint32_t handle, uint32_t size, int zero)
{
    heap_t *h = heap_find(handle);
    if (!h || size > 0x7FF00000u) return 0;
    uint8_t *p = (uint8_t *)(zero ? mspace_calloc(h->space, 1, (size_t)size + 8) : mspace_malloc(h->space, (size_t)size + 8));
    if (!p) return 0;
    uint32_t block = GVA(p) + 8;
    MEM32(block - 8) = size;
    MEM32(block - 4) = BLOCK_MAGIC ^ handle;
    atomic_fetch_add_explicit(&heap_live_bytes, size, memory_order_relaxed);
    atomic_fetch_add_explicit(&heap_live_blocks, 1, memory_order_relaxed);
    return block;
}

static int block_valid(uint32_t handle, uint32_t block)
{
    return block >= 0x10008u && (block & 7u) == 0 && void_vm_readable(block - 8, 8) &&
        MEM32(block - 4) == (BLOCK_MAGIC ^ handle);
}

int void_heap_free(uint32_t handle, uint32_t block)
{
    if (!block) return 1;
    heap_t *h = heap_find(handle);
    if (!h || !block_valid(handle, block)) {
        void_log("[void] HeapFree(%08X, %08X): not a block of this heap (caller %08X)", handle, block, g_cur_func);
        return 0;
    }
    MEM32(block - 4) = 0;
    atomic_fetch_sub_explicit(&heap_live_bytes, MEM32(block - 8), memory_order_relaxed);
    atomic_fetch_sub_explicit(&heap_live_blocks, 1, memory_order_relaxed);
    atomic_fetch_add_explicit(&heap_freed_since_purge, MEM32(block - 8), memory_order_relaxed);
    mspace_free(h->space, GPTR(block - 8));
    return 1;
}

uint32_t void_heap_size(uint32_t handle, uint32_t block)
{
    if (!heap_find(handle) || !block_valid(handle, block)) return 0xFFFFFFFFu;
    return MEM32(block - 8);
}

uint32_t void_heap_realloc(uint32_t handle, uint32_t block, uint32_t size, int zero, int in_place_only)
{
    heap_t *h = heap_find(handle);
    if (!h || !block_valid(handle, block) || size > 0x7FF00000u) return 0;
    uint32_t old = MEM32(block - 8);
    uint8_t *p;
    if (in_place_only) {
        p = (uint8_t *)mspace_realloc_in_place(h->space, GPTR(block - 8), (size_t)size + 8);
        if (!p) return 0;
    } else {
        p = (uint8_t *)mspace_realloc(h->space, GPTR(block - 8), (size_t)size + 8);
        if (!p) return 0;
    }
    uint32_t moved = GVA(p) + 8;
    MEM32(moved - 8) = size;
    MEM32(moved - 4) = BLOCK_MAGIC ^ handle;
    atomic_fetch_add_explicit(&heap_live_bytes, (int64_t)size - (int64_t)old, memory_order_relaxed);
    if (moved != block || size < old) atomic_fetch_add_explicit(&heap_freed_since_purge, old, memory_order_relaxed);
    if (zero && size > old) memset(GPTR(moved + old), 0, size - old);
    return moved;
}

uint32_t void_galloc(uint32_t size)
{
    uint32_t va = void_heap_alloc(void_process_heap(), size, 1);
    if (va) {
        atomic_fetch_add_explicit(&host_live_bytes, size, memory_order_relaxed);
        atomic_fetch_add_explicit(&host_live_blocks, 1, memory_order_relaxed);
    }
    return va;
}

void void_gfree(uint32_t va)
{
    if (!va) return;
    uint32_t size = block_valid(void_process_heap(), va) ? MEM32(va - 8) : 0;
    if (void_heap_free(void_process_heap(), va) && size) {
        atomic_fetch_sub_explicit(&host_live_bytes, size, memory_order_relaxed);
        atomic_fetch_sub_explicit(&host_live_blocks, 1, memory_order_relaxed);
    }
}

/* ------------------------------------------------------------ accounting */
/* The periodic memory line: live heap requests, host ones among them, the
 * footprint of every heap and the committed guest pages. */
void void_mem_summary(char *out, size_t cap)
{
    size_t footprint = 0;
    pthread_mutex_lock(&heap_lock);
    for (int i = 0; i < heap_count; ++i) if (heaps[i].space) footprint += mspace_footprint(heaps[i].space);
    pthread_mutex_unlock(&heap_lock);
    uint32_t committed = 0;
    for (uint32_t p = 0; p < PAGES; p += 64) {
        uint64_t a, b, c, d, e, f, g, h;
        memcpy(&a, &page_state[p], 8); memcpy(&b, &page_state[p + 8], 8); memcpy(&c, &page_state[p + 16], 8);
        memcpy(&d, &page_state[p + 24], 8); memcpy(&e, &page_state[p + 32], 8); memcpy(&f, &page_state[p + 40], 8);
        memcpy(&g, &page_state[p + 48], 8); memcpy(&h, &page_state[p + 56], 8);
        if (!(a | b | c | d | e | f | g | h)) continue;
        for (uint32_t q = p; q < p + 64; ++q) committed += page_state[q] == ST_COMMIT;
    }
    snprintf(out, cap, "heap live %.1f MiB in %lld blocks (host %.1f MiB in %lld), heaps %.1f MiB, committed %.1f MiB, "
        "purged %.1f MiB in %llu passes",
        (double)atomic_load(&heap_live_bytes) / 1048576.0, (long long)atomic_load(&heap_live_blocks),
        (double)atomic_load(&host_live_bytes) / 1048576.0, (long long)atomic_load(&host_live_blocks),
        (double)footprint / 1048576.0, (double)committed * 4096.0 / 1048576.0,
        (double)atomic_load(&heap_purged_total) / 1048576.0, (unsigned long long)atomic_load(&heap_purges));
}

/* Freed heap memory back to the system. dlmalloc keeps a free chunk's pages
 * resident until a later allocation reuses them, and the guest heap only grows
 * between races: in-segment free memory went from 101 to 137 MiB over two
 * races while live blocks stayed at 128 MiB (Pixel 10a, 2026-11-06). The
 * Windows heap the game was written for decommits free blocks of a page or
 * more; here the whole host pages inside each large free chunk are dropped
 * with MADV_DONTNEED. They stay committed and read as zeros when reused; the
 * chunk's bookkeeping (its first bytes, the next chunk's footer) is outside
 * the range. Runs under the heap's own lock (mspace_inspect_all), only after
 * enough has been freed since the last pass. */
#define PURGE_MIN_BYTES (64u * 1024u)
#define PURGE_DUE_BYTES (8ull << 20)
typedef struct { uintptr_t page; uint64_t bytes; uint32_t chunks; } purge_t;

static void purge_visit(void *start, void *end, size_t used, void *arg)
{
    purge_t *p = (purge_t *)arg;
    if (used) return;
    uintptr_t from = ((uintptr_t)start + p->page - 1) & ~(p->page - 1), to = (uintptr_t)end & ~(p->page - 1);
    if (to <= from || to - from < PURGE_MIN_BYTES) return;
    if (madvise((void *)from, to - from, MADV_DONTNEED) == 0) { p->bytes += to - from; ++p->chunks; }
}

int void_heap_purge_if_due(char *report, size_t cap)
{
    if (atomic_load_explicit(&heap_freed_since_purge, memory_order_relaxed) < PURGE_DUE_BYTES) return 0;
    atomic_store_explicit(&heap_freed_since_purge, 0, memory_order_relaxed);
    struct timespec t0, t1;
    clock_gettime(CLOCK_MONOTONIC, &t0);
    purge_t p = { (uintptr_t)host_pages * GUEST_PAGE, 0, 0 };
    pthread_mutex_lock(&heap_lock);
    for (int i = 0; i < heap_count; ++i) if (heaps[i].space) mspace_inspect_all(heaps[i].space, purge_visit, &p);
    pthread_mutex_unlock(&heap_lock);
    clock_gettime(CLOCK_MONOTONIC, &t1);
    atomic_fetch_add_explicit(&heap_purged_total, p.bytes, memory_order_relaxed);
    atomic_fetch_add_explicit(&heap_purges, 1, memory_order_relaxed);
    if (report) snprintf(report, cap, "heap purge: %.1f MiB in %u free chunks back to the system (%.1f ms)",
        (double)p.bytes / 1048576.0, p.chunks,
        (double)(t1.tv_sec - t0.tv_sec) * 1e3 + (double)(t1.tv_nsec - t0.tv_nsec) / 1e6);
    return 1;
}

/* Census (diagnostics): every in-use block of every heap by requested size
 * and first word (a C++ object's vtable, when it lies in a loaded image),
 * most bytes first, then the largest committed allocations of the page map. */
typedef struct { uint32_t size, tag, count; uint64_t bytes; } census_row;
typedef struct { census_row *rows; uint32_t cap, used; uint64_t bytes, blocks, free_bytes; } census_t;

static void census_visit(void *start, void *end, size_t used, void *arg)
{
    census_t *c = (census_t *)arg;
    if (!used) { c->free_bytes += (size_t)((uint8_t *)end - (uint8_t *)start); return; }
    if (used < 8) return;
    uint32_t va = GVA(start);
    uint32_t size = MEM32(va), tag = 0xFFFFFFFFu;
    if (size + 8u <= used + 64u && size >= 4) {
        uint32_t first = MEM32(va + 8);
        if ((first >= 0x00400000u && first < 0x00B00000u) || (first >= 0x10000000u && first < 0x18000000u)) tag = first;
    } else {
        size = (uint32_t)used;
    }
    uint32_t h = (size * 2654435761u ^ tag * 40503u) & (c->cap - 1);
    while (c->rows[h].count && (c->rows[h].size != size || c->rows[h].tag != tag)) h = (h + 1) & (c->cap - 1);
    if (!c->rows[h].count) {
        if (c->used + 1 >= c->cap / 2) return;   /* table full: the totals still count */
        c->rows[h].size = size; c->rows[h].tag = tag; ++c->used;
    }
    ++c->rows[h].count;
    c->rows[h].bytes += size;
    c->bytes += size;
    ++c->blocks;
}

static int census_order(const void *a, const void *b)
{
    const census_row *x = (const census_row *)a, *y = (const census_row *)b;
    return x->bytes < y->bytes ? 1 : x->bytes > y->bytes ? -1 : 0;
}

int void_mem_census(const char *path)
{
    FILE *out = fopen(path, "w");
    if (!out) return 0;
    census_t c = { (census_row *)calloc(1u << 17, sizeof(census_row)), 1u << 17, 0, 0, 0, 0 };
    if (!c.rows) { fclose(out); return 0; }
    char line[256];
    void_mem_summary(line, sizeof line);
    fprintf(out, "%s\n", line);
    pthread_mutex_lock(&heap_lock);
    for (int i = 0; i < heap_count; ++i) {
        if (!heaps[i].space) continue;
        uint64_t before = c.bytes, blocks = c.blocks, free_before = c.free_bytes;
        mspace_inspect_all(heaps[i].space, census_visit, &c);
        fprintf(out, "heap %08X%s: %.1f MiB in %llu blocks, %.1f MiB free, footprint %.1f MiB\n", heaps[i].handle,
            heaps[i].handle == process_heap ? " (process)" : "", (double)(c.bytes - before) / 1048576.0,
            (unsigned long long)(c.blocks - blocks), (double)(c.free_bytes - free_before) / 1048576.0,
            (double)mspace_footprint(heaps[i].space) / 1048576.0);
    }
    pthread_mutex_unlock(&heap_lock);
    census_row *rows = (census_row *)malloc(c.used * sizeof *rows + 1);
    uint32_t n = 0;
    for (uint32_t i = 0; rows && i < c.cap; ++i) if (c.rows[i].count) rows[n++] = c.rows[i];
    if (rows) qsort(rows, n, sizeof *rows, census_order);
    fprintf(out, "rows %u, %.1f MiB in %llu blocks\nbytes count size tag\n", n, (double)c.bytes / 1048576.0,
        (unsigned long long)c.blocks);
    for (uint32_t i = 0; rows && i < n; ++i)
        fprintf(out, "%llu %u %u %08X\n", (unsigned long long)rows[i].bytes, rows[i].count, rows[i].size, rows[i].tag);
    free(rows);
    free(c.rows);
    /* Allocations of the page map: base, committed bytes, reserved bytes. */
    fprintf(out, "allocations: base committed reserved protect origin\n");
    pthread_mutex_lock(&vm_lock);
    for (uint32_t p = 0; p < PAGES;) {
        if (page_state[p] == ST_FREE) { ++p; continue; }
        uint32_t base = page_alloc[p], committed = 0, total = 0;
        while (p < PAGES && page_state[p] != ST_FREE && page_alloc[p] == base) {
            committed += page_state[p] == ST_COMMIT;
            ++total; ++p;
        }
        uint32_t o = alloc_origin[base];
        char tag[5] = { (char)(o >> 24), (char)(o >> 16), (char)(o >> 8), (char)o, 0 };
        for (int k = 0; k < 4; ++k) if (tag[k] < 33 || tag[k] > 126) tag[k] = '-';
        if (committed >= 16) fprintf(out, "%08X %u %u %X %s\n", base << 12, committed * 4096u, total * 4096u,
            alloc_protect[base], tag);
    }
    pthread_mutex_unlock(&vm_lock);
    fclose(out);
    return 1;
}

uint32_t void_gstrdup(const char *s)
{
    size_t n = strlen(s) + 1;
    uint32_t va = void_galloc((uint32_t)n);
    if (va) memcpy(GPTR(va), s, n);
    return va;
}
