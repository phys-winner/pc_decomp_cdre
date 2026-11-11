/* Run on Android: the real page map, kernel decommit and dlmalloc, without a player profile. */
#define _GNU_SOURCE
#ifndef MEMORY_C
#define MEMORY_C "../host/memory.c"
#endif
#include MEMORY_C
#include <assert.h>

uint32_t g_cur_func;
void void_set_last_error(uint32_t e) { (void)e; }
void void_log(const char *fmt, ...) { va_list a; va_start(a,fmt); vprintf(fmt,a); va_end(a); puts(""); }
_Noreturn void void_fatal(const char *fmt, ...) { (void)fmt; abort(); }

static uint32_t held(void)
{
    uint32_t n=0;
    for(uint32_t p=16;p<PAGES;++p) n+=page_state[p]!=ST_FREE;
    return n;
}

int main(void)
{
    assert(void_guest_reserve());
    uint32_t baseline=held(), a[3];
    const uint32_t unit=256*1024;
    for(unsigned i=0;i<3;++i) {
        a[i]=void_vm_alloc(0,unit,MEM_RESERVE_|MEM_COMMIT_,PAGE_READWRITE_);
        assert(a[i] && (!i || a[i]==a[i-1]+unit));
        memset(GPTR(a[i]),0xA5,unit);
    }
    assert(!guest_sys_free(GPTR(a[0]+unit/2),unit*2+unit/2));
    for(unsigned i=0;i<unit/2;++i) assert(((uint8_t*)GPTR(a[0]))[i]==0xA5);
    assert(page_state[(a[0]+unit/2)>>12]==ST_RESERVE && page_state[a[1]>>12]==ST_FREE);
    assert(!guest_sys_free(GPTR(a[0]),unit/2) && held()==baseline);
    uint32_t heap=void_heap_create(0,0), spacer=void_vm_alloc(0,unit,MEM_RESERVE_|MEM_COMMIT_,PAGE_READWRITE_);
    uint32_t block[32];
    assert(heap && spacer);
    for(unsigned i=0;i<32;++i) {
        uint32_t size=(i==4?600:200)*1024;
        block[i]=void_heap_alloc(heap,size,0);assert(block[i]);memset(GPTR(block[i]),i+1,size);
    }
    for(unsigned i=32;i-->5;) assert(void_heap_free(heap,block[i]));
    mspace_trim(heap_find(heap)->space,0);
    int split=0;
    for(uint32_t p=16;p<PAGES;++p) if(page_state[p]==ST_RESERVE && page_state[page_alloc[p]]==ST_COMMIT) ++split;
    assert(split);
    for(unsigned i=0;i<5;++i) {
        uint32_t size=(i==4?600:200)*1024;
        for(unsigned j=0;j<size;++j) assert(((uint8_t*)GPTR(block[i]))[j]==i+1);
    }
    assert(void_heap_destroy(heap));assert(void_vm_free(spacer,0,MEM_RELEASE_));assert(held()==baseline);
    puts("PASS heap release: kernel partial trim preserved data, dlmalloc split trim, HeapDestroy returned every reservation");
    return 0;
}
