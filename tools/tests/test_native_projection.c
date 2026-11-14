#include "recomp_types.h"
#include <assert.h>
#include <sys/mman.h>

uint32_t g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_esp,g_ebp,g_flag_k,g_flag_a,g_flag_b,g_flag_cf;
uint32_t g_backedges,g_cur_func,g_mxcsr;
uint64_t g_mm[8],g_fp_round_mask=~0ull,g_fp_store_mask=~0ull;
double g_st_win[256];int64_t g_st_i64_win[256];int g_fp_top,g_fp_sp;uint16_t g_fpu_cw=0x37f;
xmm_t g_xmm[8];void (*recomp_yield_hook)(void);
__asm__(".global g_guest_mem\n.hidden g_guest_mem\n.set g_guest_mem, 0x2000000000");
void oracle_original(void),oracle_candidate(void);
uint32_t prefix_probe(uint32_t,uint32_t,uint32_t,uint32_t);

static uint32_t seed=12344321;
static uint32_t random_word(void){seed^=seed<<13;seed^=seed>>17;seed^=seed<<5;return seed;}
typedef struct {uint32_t r[13];xmm_t x[8];} state;
static state capture(void){
    state s={{g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_esp,g_ebp,g_flag_k,g_flag_a,g_flag_b,g_flag_cf,g_backedges}};
    memcpy(s.x,g_xmm,sizeof s.x);return s;
}
static void restore(const state *s){
    g_eax=s->r[0];g_ebx=s->r[1];g_ecx=s->r[2];g_edx=s->r[3];g_esi=s->r[4];g_edi=s->r[5];g_esp=s->r[6];
    g_ebp=s->r[7];g_flag_k=s->r[8];g_flag_a=s->r[9];g_flag_b=s->r[10];g_flag_cf=s->r[11];g_backedges=s->r[12];
    memcpy(g_xmm,s->x,sizeof s->x);
}
static unsigned char initial_data[0x61000],expected_data[0x61000],initial_scratch[1024],expected_scratch[1024];
static uint64_t yield_hash;
static unsigned nan_changes;
static void yield_check(void){
    state s=capture();
    for(unsigned i=0;i<13;++i)yield_hash=yield_hash*131+s.r[i];
    for(unsigned i=0;i<32;++i)yield_hash=yield_hash*131+((uint32_t*)s.x)[i];
}
static void equal_words(const void *aa,const void *bb,size_t size,unsigned test){
    const uint32_t *a=aa,*b=bb;
    for(unsigned i=0;i<size/4;++i)if(a[i]!=b[i]){
        if((a[i]&0x7fffffff)>0x7f800000&&(b[i]&0x7fffffff)>0x7f800000){++nan_changes;continue;}
        fprintf(stderr,"case %u word %u: %08x != %08x\n",test,i,a[i],b[i]);abort();
    }
}
static void setup(unsigned test){
    for(unsigned i=0;i<sizeof initial_data/4;++i)MEMF(0x10000+i*4)=((int)(random_word()%2001)-1000)*.03125f;
    for(unsigned i=0;i<256;++i)MEM32(0x870200+i*4)=random_word();
    const uint32_t special[]={0,0x80000000,1,0x80000001,0x7fc01234,0x7f800001,0x7f800000,0xff800000,
        0x7f7fffff,0x34000000,0xb4000000,0x33800000,0xb3800000,0x34800000,0xb4800000};
    if(test%5==0)for(unsigned i=0;i<16;++i)MEM32(0x60000+i*4)=special[(i+test/5)%15];
    MEMF(0x808CB0)=1;MEMF(0x808B30)=1.1920928955078125e-7f;
    g_eax=random_word();g_ebx=random_word();g_ecx=0x10000;g_edx=random_word();g_esi=random_word();g_edi=random_word();
    g_esp=0x70000;g_ebp=random_word();g_flag_k=FK_TEST;g_flag_a=random_word();g_flag_b=random_word();g_flag_cf=0;
    const uint32_t backedges[]={0,4095,4094,4080,4096};g_backedges=backedges[test%5];
    for(unsigned i=0;i<32;++i)((uint32_t*)g_xmm)[i]=random_word();
    MEM32(g_esp)=0x12345678;MEM32(g_esp+4)=test%29==0?1000:test%65;
    MEM32(g_esp+8)=0x40000;MEM32(g_esp+12)=test%7==0?0x40000:0x50000;MEM32(g_esp+16)=test%2?0x60000:0;
    if(test%4==0){
        uint32_t m=0x10000+0xDE10;MEMF(m+12)=0;MEMF(m+28)=0;MEMF(m+44)=0;MEM32(m+60)=special[(test/4)%15];
    }
    if(test%13==0)MEM32(g_esp+12)=0x10000+(test%2?0xDDCC:0xDE10);
    if(test%17==0&&MEM32(g_esp+4)<65)MEM32(g_esp+12)=0x70080;
}

int main(void){
    assert(mmap((void*)VOID_GUEST_BASE,0x1000000,PROT_READ|PROT_WRITE,
        MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED_NOREPLACE,-1,0)==(void*)VOID_GUEST_BASE);
    recomp_yield_hook=yield_check;
    for(unsigned test=0;test<4096;++test){
        setup(test);state initial=capture();
        memcpy(initial_data,GPTR(0x10000),sizeof initial_data);memcpy(initial_scratch,GPTR(0x870200),sizeof initial_scratch);
        yield_hash=0;oracle_original();uint64_t expected_yields=yield_hash;state expected=capture();
        memcpy(expected_data,GPTR(0x10000),sizeof expected_data);memcpy(expected_scratch,GPTR(0x870200),sizeof expected_scratch);
        restore(&initial);memcpy(GPTR(0x10000),initial_data,sizeof initial_data);memcpy(GPTR(0x870200),initial_scratch,sizeof initial_scratch);
        yield_hash=0;oracle_candidate();state actual=capture();
        if(memcmp(expected.r,actual.r,sizeof expected.r)||expected_yields!=yield_hash){
            fprintf(stderr,"case %u register/flag/handover mismatch\n",test);return 1;
        }
        equal_words(expected_data,GPTR(0x10000),sizeof expected_data,test);
        equal_words(expected_scratch,GPTR(0x870200),sizeof expected_scratch,test);
        equal_words(expected.x,actual.x,sizeof expected.x,test);
    }
    g_backedges=0;
    assert(!prefix_probe(0xFFFFFFF0,0x50000,2,0x10000));
    assert(!prefix_probe(0x40000,0xFFFFFFF0,2,0x10000));
    assert(!prefix_probe(0x40000,0x50000,2,0xFFFFFFF0));
    assert(!prefix_probe(0x40000,0x40001,2,0x10000));
    assert(!prefix_probe(0x40000,0x50000,2,0x50004));
    assert(!prefix_probe(0x40000,0x808B20,2,0x10000));
    assert(!g_backedges);
    g_backedges=4095;assert(!prefix_probe(0x40000,0x50000,2,0x10000));assert(g_backedges==4095);
    printf("PASS 4096 CPU projections: GPR/flags/SSE/data/stack/scratch/yield state, alias/wrap guards, "
        "zero/subnormal/epsilon/NaN/Inf W; %u NaN payload changes, finite values bit exact\n",nan_changes);
    return 0;
}
