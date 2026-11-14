
enum { WORLD=0x60000, SECTORS=0x70000, SUN=0x68000, COPIES=0x14000 };
static unsigned comparisons, shadow_hits, shaded_vertices;

static void world_scene(unsigned n) {
    scene(n);
    MEM32(0x87C620)=WORLD; MEM32(0x870260)=SUN; MEM32(0x87C7A8)=0;
    MEMF(SUN+0xF10)=0; MEMF(SUN+0xF14)=1; MEMF(SUN+0xF18)=0;
    MEM32(WORLD+0x824)=SECTORS; MEM16(WORLD+0x808)=13;
    if(n%19==0) MEM16(WORLD+0x808)=1;
    if(n%23==0) MEM16(WORLD+0x808)=0;
    memcpy(GPTR(WORLD+0x102C),GPTR(QUERY),0xC6);
    uint32_t query=WORLD+0x102C;
    MEM8(query)=n%11!=0; MEM8(query+0xA0)=0;
    MEM32(query+0x9C)=n%9==0?OBJECT:0;
    for(unsigned o=0;o<20;++o) {
        uint32_t object=COPIES+o*0x200;
        memcpy(GPTR(object),GPTR(OBJECT),0x148);
        if(o%4 || n%3==0) MEMF(object+0xB4)=-1e30f;
        if(n%41==0) MEM32(object+0xB4)=0x7FC01234;
        if(n%43==0) MEM32(object+0x94)=0x7F800001;
        if(n%47==0) {MEM32(object+0xBC)=0x7F800000;MEM32(object+0x9C)=0xFF800000;}
        if(n%53==0) {MEM32(object+0xB8)=0x80000000;MEM32(object+0x98)=1;}
    }
    for(unsigned i=0;i<13;++i) {
        uint32_t node=SECTORS+i*616;
        unsigned objects=(n+i)%5;
        MEM16(node+0x64)=objects;
        for(unsigned o=0;o<objects;++o) MEM32(node+0x68+o*4)=COPIES+((i*3+o)%20)*0x200;
        MEM8(node+0x5B)=i<3;
        for(unsigned c=0;c<4;++c) MEM16(node+0x5C+c*2)=i<3?1+i*4+c:0xFFFF;
        if(n%7==0) MEM16(node+0x5C+(n%4)*2)=0xFFFF;
    }
    if(n%17==0) {MEM16(SECTORS+0x64)=0;MEM8(SECTORS+0x5B)=0;}
    if(n%31==0) {
        MEM16(WORLD+0x808)=40;
        for(unsigned i=0;i<40;++i) {
            uint32_t node=SECTORS+i*616;
            MEM16(node+0x64)=0;MEM8(node+0x5B)=i<39;
            for(unsigned c=0;c<4;++c) MEM16(node+0x5C+c*2)=c==0 && i<39?i+1:0xFFFF;
        }
    }
    registers(); ecx=WORLD; MEM32(STACK)=RECOMP_RETADDR;
    MEM32(STACK+4)=0; MEM32(STACK+8)=query;
    g_backedges=n%3==0?RECOMP_YIELD_EVERY-2:0;
}

static void compare_memory(unsigned n, const char *what) {
    uint32_t metadata=WORLD+0x10D0;
    /* Any-hit clients consume only the hit bit; later hits replace unused metadata in the old walker. */
    int mismatch=MEM8(WORLD+0x102C)?
        (memcmp(expected,memory,metadata) || memcmp(expected+metadata+0x22,memory+metadata+0x22,STACK-0x1000-metadata-0x22)):
        memcmp(expected,memory,STACK-0x1000);
    if(mismatch ||
       memcmp(expected+STACK,memory+STACK,sizeof expected-STACK)) {
        unsigned shown=0;
        for(unsigned a=0;a<sizeof expected && shown<16;++a) {
            if(a>=STACK-0x1000 && a<STACK) continue;
            if(expected[a]!=memory[a]) {fprintf(stderr,"%06X: %02X != %02X\n",a,expected[a],memory[a]);++shown;}
        }
        fprintf(stderr,"%s memory mismatch case %u\n",what,n); assert(0);
    }
}

static void search_case(unsigned n) {
    world_scene(n); memcpy(initial,memory,sizeof initial);
    sub_00682D70(); memcpy(expected,memory,sizeof expected);
    state original=capture(); uint32_t original_backedges=g_backedges;
    shadow_hits+=MEM8(WORLD+0x10CC)!=0;
    memcpy(memory,initial,sizeof initial); registers(); ecx=WORLD;
    g_backedges=n%3==0?RECOMP_YIELD_EVERY-2:0;
    crashday_shadow_world();
    compare_memory(n,"search");
    assert(g_fp_top==original.top);
    if(!MEM8(WORLD+0x10CC) && MEM16(WORLD+0x808)==13) assert(g_backedges==original_backedges);
    assert(esp==STACK+12 && ebx==0xB222 && esi==0xE555 && edi==0xF666 && ebp==0xABCD);
    if(!MEM8(WORLD+0x102C)) {
        state candidate=capture();assert(!memcmp(&original,&candidate,sizeof original));
        assert(g_backedges==original_backedges);
    }
    ++comparisons;
}

static void bake_case(unsigned n) {
    world_scene(n);
    MEM32(OBJECT+0x9B8)=n%2?3:0;
    for(unsigned i=0;i<3;++i) {
        uint32_t light=0x6A000+i*0x200;
        MEM32(OBJECT+0x9BC+i*4)=light; MEM32(light+4)=0x6B000;
        MEM8(0x6B000+0x96C)=n%5!=0;
        MEMF(light+0x144)=random_coord();MEMF(light+0x148)=random_coord();MEMF(light+0x14C)=random_coord();
        MEM32(light+0x15C)=next();
    }
    MEM16(OBJECT+0x118)=1+n%3;
    MEM32(OBJECT+0x11C)=MESH;
    MEM32(STACK)=RECOMP_RETADDR; esp=STACK;ecx=OBJECT;
    memcpy(initial,memory,sizeof initial);
    bake_original();memcpy(expected,memory,sizeof expected);int original_top=g_fp_top;
    unsigned vertices=MEM16(MESH+0x24);
    for(unsigned i=0;i<vertices;++i) shaded_vertices+=(MEM32(VERTICES+i*32+0x18)&0x80)!=0;
    memcpy(memory,initial,sizeof initial);registers();ecx=OBJECT;
    g_backedges=n%3==0?RECOMP_YIELD_EVERY-2:0;
    bake_candidate();compare_memory(n,"complete shadow bake");
    assert(g_fp_top==original_top);
    assert(esp==STACK+4 && ebx==0xB222 && esi==0xE555 && edi==0xF666 && ebp==0xABCD);
}

int main(int argc,char**argv) {
    assert(argc==2);FILE*f=fopen(argv[1],"rb");assert(f);
    assert(fread(memory+0x808000,1,0x3000,f)==0x3000);fclose(f);
    recomp_yield_hook=handover;
    for(unsigned n=0;n<1800;++n) search_case(n);
    for(unsigned n=0;n<240;++n) bake_case(n);
    assert(shadow_hits>20 && shaded_vertices>20 && handovers>0);
    printf("PASS %u complete world queries (%u hits), 240 complete shadow bakes (%u shaded vertices): exact hit/input/scene bytes, callee-saved registers/FP depth, nearest-query fallback, empty/recursive/fourth-child sectors, exclusion, transformed/multimesh/NaN/Inf/subnormal, cooperative handovers\n",comparisons,shadow_hits,shaded_vertices);
    return 0;
}
