#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static unsigned char memory[0xC00000], initial[0x90020], expected[0x90020];
#define VOID_GUEST_BASE ((uintptr_t)memory)
#define RECOMP_GENERATED_CODE
#include "recomp_types_host.h"
uint32_t g_eax,g_ebx,g_ecx,g_edx,g_esi,g_edi,g_esp,g_ebp;
uint32_t g_flag_k,g_flag_a,g_flag_b,g_flag_cf,g_backedges,g_cur_func,g_mxcsr;
uint64_t g_fp_round_mask=~0ull,g_fp_store_mask=~0ull;
double g_st[8]; int64_t g_st_i64[8]; int g_fp_top; uint16_t g_fpu_cw=0x37F;
xmm_t g_xmm[8];
void (*recomp_yield_hook)(void);
#undef RECOMP_ENTER
#define RECOMP_ENTER(a) ((void)0)
#undef RECOMP_CALL
#define RECOMP_CALL(f) do { PUSH32(esp,0xBADF00D); f(); } while(0)
static void sub_0077FC7C(void) { _xmm[0].f64[0]=sqrt(_xmm[0].f64[0]); esp+=4; }
void sub_0040BD20(void),sub_0040BDB0(void),sub_00465F20(void),sub_00466030(void);
void sub_00635110(void),sub_006351D0(void),sub_00682000(void),sub_0040A6C0(void);
static int denied;
int void_vm_readable(uint32_t a,uint32_t n) { return !denied && a>=0x1000 && a<sizeof memory && n<=sizeof memory-a; }
/* HELPERS */
/* PRODUCTION */
static uint32_t native_skipped;
uint32_t crashday_raycast_reject_run(uint32_t frame,uint32_t query,uint32_t object) {
    uint32_t n=crashday_raycast_reject_run_impl(frame,query,object);native_skipped+=n;return n;
}
/* ORIGINAL */
/* CANDIDATE */

static uint32_t seed=0x91842B11;
static unsigned handovers;
static void handover(void) { ++handovers; }
static uint32_t next(void) { seed^=seed<<13;seed^=seed>>17;seed^=seed<<5;return seed; }
static float random_coord(void) { return (int)(next()%4001-2000)*0.03125f; }
enum { OBJECT=0x10000,MESH=0x11000,QUERY=0x12000,START=0x13000,END=0x13020,VERTICES=0x20000,FACES=0x40000,STACK=0x90000 };
typedef struct { uint32_t regs[8], flags[4]; xmm_t xmm[8]; double st[8]; int top; } state;
static state capture(void) {
    state s={{eax,ebx,ecx,edx,esi,edi,esp,ebp},{g_flag_k,g_flag_a,g_flag_b,g_flag_cf}};
    memcpy(s.xmm,g_xmm,sizeof s.xmm);memcpy(s.st,g_st,sizeof s.st);s.top=g_fp_top;return s;
}
static void registers(void) {
    eax=0xA111;ebx=0xB222;ecx=0xC333;edx=0xD444;esi=0xE555;edi=0xF666;ebp=0xABCD;esp=STACK;
    memset(g_xmm,0x59,sizeof g_xmm);memset(g_st,0,sizeof g_st);g_fp_top=0;
    g_flag_k=0;g_flag_a=0;g_flag_b=0;g_flag_cf=0;g_backedges=0;
}
static void identity(uint32_t p) { for(unsigned i=0;i<16;++i) MEMF(p+i*4)=i%5==0?1.0f:0.0f; }
static void scene(unsigned n) {
    memset(memory,0,0x90020);memset(memory+0x8702D0,0,0xA0);registers();denied=0;
    unsigned triangles=n<1024?n%8:4+next()%93;
    unsigned meshes=1+n%3;
    MEM16(OBJECT+0x118)=meshes;MEM32(OBJECT+0x11C)=MESH;
    MEM8(OBJECT+0x144)=n%5!=0;
    for(unsigned axis=0;axis<3;++axis) { MEMF(OBJECT+0x94+axis*4)=-1e30f;MEMF(OBJECT+0xB4+axis*4)=1e30f; }
    for(unsigned m=0;m<meshes;++m) {
        uint32_t mesh=MESH+m*796;
        MEM32(mesh+0x18)=(n%19==0?0x22:4);MEM16(mesh+0x24)=triangles*3;MEM16(mesh+0x26)=triangles;
        MEM32(mesh+0x28)=VERTICES;MEM32(mesh+0x2C)=FACES;
        identity(mesh+0x114);identity(mesh+0x158);identity(mesh+0x8C);identity(mesh+0xD0);
        if (n%5==0 && n%2) {MEMF(mesh+0x114+0x30)=1.25f;MEMF(mesh+0x8C+0x30)=-1.25f;}
    }
    for(unsigned i=0;i<triangles;++i) {
        uint32_t face=FACES+i*72;
        for(unsigned v=0;v<3;++v) {
            MEM16(face+v*2)=i*3+v;
            for(unsigned axis=0;axis<3;++axis) MEMF(VERTICES+(i*3+v)*32+axis*4)=random_coord();
        }
        for(unsigned axis=0;axis<3;++axis) MEMF(face+60+axis*4)=random_coord();
        if(n%7==0) { MEMF(face+60)=0;MEMF(face+64)=i%3?1.0f:-1.0f;MEMF(face+68)=0; }
        if(n%13==0) {
            const float tri[3][3]={{-10,0,-10},{10,0,-10},{0,0,10}};
            for(unsigned v=0;v<3;++v)for(unsigned axis=0;axis<3;++axis) MEMF(VERTICES+(i*3+v)*32+axis*4)=tri[v][axis];
            MEMF(face+60)=0;MEMF(face+64)=1;MEMF(face+68)=0;
            if(n%39==0) memcpy(GPTR(VERTICES+(i*3+2)*32),GPTR(VERTICES+(i*3+1)*32),12);
        }
    }
    for(unsigned axis=0;axis<3;++axis) {MEMF(START+axis*4)=random_coord();MEMF(END+axis*4)=random_coord();}
    if(n%7==0 || n%13==0) {MEMF(START)=0;MEMF(START+4)=-10;MEMF(START+8)=0;MEMF(END)=0;MEMF(END+4)=10;MEMF(END+8)=0;}
    if(n%13==0) {
        const float edges[6][2]={{0,0},{-10,-10},{10,-10},{0,10},{0,-10},{0,-10.000001f}};
        unsigned e=(n/13)%6;MEMF(START)=MEMF(END)=edges[e][0];MEMF(START+8)=MEMF(END+8)=edges[e][1];
    }
    MEM32(STACK)=0xBAD;MEM32(STACK+4)=START;MEM32(STACK+8)=END;MEM32(STACK+12)=n%2;
    MEM32(STACK+16)=n%17==0?2:4;MEM32(STACK+20)=0;MEM32(STACK+24)=QUERY;
    sub_00682000();
    /* Exceptional inputs reach the original path, with prefixes of ordinary misses. */
    if(triangles && n%11==0) {
        const uint32_t special[]={0x7FC01234,0x7F800001,0x7F800000,0xFF800000,0x80000000,1,0x7F7FFFFF};
        uint32_t bits=special[(n/11)%7];
        switch((n/77)%4) {
        case 0:MEM32(FACES+(triangles/2)*72+60+(n%3)*4)=bits;break;
        case 1:MEM32(VERTICES+(triangles/2)*32+(n%3)*4)=bits;break;
        case 2:MEM32(QUERY+0x1C+(n%3)*4)=bits;break;
        case 3:MEM32(QUERY+0x54+(n%3)*4)=bits;break;
        }
    }
    if(n%23==0 && triangles) MEM16(FACES)=triangles*3+1;
    if(n%29==0) MEM8(QUERY+0xA0)=1;
    denied=n%31==0;
    registers();MEM32(STACK)=0xBAD;MEM32(STACK+4)=OBJECT;MEM32(STACK+8)=QUERY;
    g_backedges=n%41==0?RECOMP_YIELD_EVERY-3:0;
}
int main(int argc,char**argv) {
    assert(argc==2);FILE*f=fopen(argv[1],"rb");assert(f);assert(fread(memory+0x808000,1,0x3000,f)==0x3000);fclose(f);
    unsigned hits=0;
    for(unsigned n=0;n<12000;++n) {
        scene(n);memcpy(initial,memory,sizeof initial);
        recomp_yield_hook=handover;handovers=0;
        raycast_original();state original=capture();uint32_t backedges=g_backedges, original_handovers=handovers;memcpy(expected,memory,sizeof expected);
        unsigned char scratch[0xA0];memcpy(scratch,memory+0x8702D0,sizeof scratch);
        memcpy(memory,initial,sizeof initial);memset(memory+0x8702D0,0,sizeof scratch);registers();
        g_backedges=n%41==0?RECOMP_YIELD_EVERY-3:0;handovers=0;
        raycast_candidate();state candidate=capture();
        assert(backedges==g_backedges && original_handovers==handovers);
        if(memcmp(&original,&candidate,sizeof original) || memcmp(expected,memory,STACK-0x1000) ||
            memcmp(expected+STACK,memory+STACK,sizeof expected-STACK) || memcmp(scratch,memory+0x8702D0,sizeof scratch)) {
            fprintf(stderr,"raycast mismatch case %u (seed %08X)\n",n,seed);return 1;
        }
        assert(esp==STACK+12 && ebx==0xB222 && esi==0xE555 && edi==0xF666 && ebp==0xABCD);
        hits+=MEM8(QUERY+0xA0)==1;
    }
    assert(hits>100);
    assert(native_skipped>100000);
    printf("PASS 12000 complete lifted raycasts: query/nonlocal bytes, GPR/SSE/flags/backedges, %u hits, %u batched misses, static/transformed/multimesh, edge/degenerate/NaN/Inf/invalid-index/readability fallback\n",hits,native_skipped);
    return 0;
}
