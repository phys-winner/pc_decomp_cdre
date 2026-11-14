#include "recomp_types.h"
#include <assert.h>
#include <sys/mman.h>
uint32_t g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_esp,g_ebp,g_flag_k,g_flag_a,g_flag_b,g_flag_cf,g_backedges,g_cur_func,g_mxcsr;
uint64_t g_mm[8],g_fp_round_mask=~0ull,g_fp_store_mask=~0ull;
double g_st_win[256];int64_t g_st_i64_win[256];int g_fp_top,g_fp_sp;uint16_t g_fpu_cw=0x37f;
xmm_t g_xmm[8];void (*recomp_yield_hook)(void);
void oracle_original(void),oracle_candidate(void);
__asm__(".global g_guest_mem\n.hidden g_guest_mem\n.set g_guest_mem, 0x2000000000");
static uint32_t seed=12345191;
static uint32_t random_word(void){seed^=seed<<13;seed^=seed>>17;seed^=seed<<5;return seed;}
typedef struct{uint32_t r[12];xmm_t x[8];} state;
static state capture(void){state s={{g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_esp,g_ebp,g_flag_k,g_flag_a,g_flag_b,g_flag_cf}};memcpy(s.x,g_xmm,sizeof s.x);return s;}
static void restore(const state*s){g_eax=s->r[0];g_ebx=s->r[1];g_ecx=s->r[2];g_edx=s->r[3];g_esi=s->r[4];g_edi=s->r[5];g_esp=s->r[6];g_ebp=s->r[7];g_flag_k=s->r[8];g_flag_a=s->r[9];g_flag_b=s->r[10];g_flag_cf=s->r[11];memcpy(g_xmm,s->x,sizeof s->x);}
static unsigned char start_data[256],expect_data[256],start_stack[128],expect_stack[128],start_scratch[256],expect_scratch[256];

int main(void){
 unsigned nan_payload_differences=0;
 void*p=mmap((void*)VOID_GUEST_BASE,0x1000000,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED_NOREPLACE,-1,0);assert(p==(void*)VOID_GUEST_BASE);
 MEMF(0x808cb0)=1;
 const uint32_t special[]={0,0x80000000,1,0x80000001,0x7fc01234,0x7f800001,0x7f800000,0xff800000,0x7f7fffff};
 for(unsigned n=0;n<4000;++n){
  for(unsigned i=0;i<64;++i){MEM32(0x10000+i*4)=random_word();MEM32(0x8702d0+i*4)=random_word();}
  if(n%4<2)for(unsigned m=0;m<2;++m)for(unsigned i=0;i<16;++i)MEMF(0x10000+m*128+i*4)= n%4==0 ? (i%5==0?1:0) : (int)(random_word()%2001-1000)*.03125f;
  if(n%7==0)MEM32(0x10000+(n%16)*4)=special[(n/7)%9];
  g_eax=random_word();g_ebx=random_word();g_ecx=0x10000;g_edx=random_word();g_esi=random_word();g_edi=random_word();g_esp=0x20020;g_ebp=0x123456;
  g_flag_k=0;g_flag_a=random_word();g_flag_b=random_word();g_flag_cf=0;
  for(unsigned i=0;i<32;++i)((uint32_t*)g_xmm)[i]=random_word();
  MEM32(g_esp)=0xbadf00d;MEM32(g_esp+4)= n%3==0 ? 0x10000 : n%3==1 ? 0x10080 : 0x10010;
#if MATH_ADDRESS == 0x00633D80
  if(n%17==0)g_ecx=0x8702DC+(n%8)*4;
  if(n%17==1)MEM32(g_esp+4)=0x8702DC+(n%8)*4;
  if(n%17==2)g_ecx=0x20010;
#else
  MEM64(0x809c90)=n%17?0x7fffffffffffffffull:((uint64_t)random_word()<<32)|random_word();
  MEM64(0x809c98)=n%17?0x7fffffffffffffffull:((uint64_t)random_word()<<32)|random_word();
#endif
  state initial=capture();memcpy(start_data,GPTR(0x10000),256);memcpy(start_stack,GPTR(0x20000),128);memcpy(start_scratch,GPTR(0x8702d0),256);
  oracle_original();state original=capture();memcpy(expect_data,GPTR(0x10000),256);memcpy(expect_stack,GPTR(0x20000),128);memcpy(expect_scratch,GPTR(0x8702d0),256);
  restore(&initial);memcpy(GPTR(0x10000),start_data,256);memcpy(GPTR(0x20000),start_stack,128);memcpy(GPTR(0x8702d0),start_scratch,256);
  oracle_candidate();state candidate=capture();
  assert(!memcmp(original.r,candidate.r,sizeof original.r));
  for(unsigned region=0;region<4;++region){
   const uint32_t *a, *b; unsigned words;
   if(region==0){a=(const void*)expect_stack;b=GPTR(0x20000);words=32;}
   else if(region==1){a=(const void*)expect_scratch;b=GPTR(0x8702d0);words=64;}
   else if(region==2){a=(const void*)expect_data;b=GPTR(0x10000);words=64;}
   else{a=(const void*)original.x;b=(const void*)candidate.x;words=32;}
   /* LLVM may choose a different NaN payload for commutative arithmetic. */
   for(unsigned j=0;j<words;++j)if(a[j]!=b[j]){
    if(!((a[j]&0x7fffffff)>0x7f800000 && (b[j]&0x7fffffff)>0x7f800000)){
     fprintf(stderr,"case %u region %u word %u: %08x != %08x\n",n,region,j,a[j],b[j]);return 1;
    }
    ++nan_payload_differences;
   }
  }
 }
 printf("PASS 4000 ARM64 math cases at %08X: GPR/SSE/flags, guest data/stack/scratch, identity/random/NaN/Inf, identical/overlapping inputs; %u NaN payload changes, all finite results bit exact\n",MATH_ADDRESS,nan_payload_differences);
 return 0;
}
