/* Win32 Steam ABI boundary. CSteamID returns use an explicit result pointer;
 * SteamAPICall_t returns use EDX:EAX. MSVC puts Run(call-result) in slot 0
 * and Run(callback) in slot 1 (original vtable at 007EEA14). */
static uint64_t steam_arg64(int n) { return ARG(n) | (uint64_t)ARG(n+1)<<32; }
static uint32_t steam_return64(uint64_t n) { g_edx=(uint32_t)(n>>32);return (uint32_t)n; }
static uint64_t steam_identity(void)
{
    if(!steam_lan.started) {
        char path[2048]; int persisted = 0;
        snprintf(path, sizeof path, "%s/lan-identity", void_data_dir());
        uint32_t identity = lan_persistent_identity(path, &persisted);
        if (!persisted) void_log("[lan] cannot persist local identity in userdata");
        int ok=lan_init(&steam_lan,0,identity);
        void_log("[lan] local lobby transport %s",ok?"ready":"unavailable (socket bind/permission)");
    }
    return steam_lan.id;
}
static const char *steam_text(uint32_t va, size_t limit)
{
    if(!va)return NULL;
    for(size_t i=0;i<limit;++i) if(!void_vm_readable(va+(uint32_t)i,1))return NULL;else if(!MEM8(va+i))return (const char*)GPTR(va);
    return NULL;
}
static uint32_t steam_result_text(const char *text)
{
    static uint32_t slots[16];static unsigned slot;
    uint32_t *p=&slots[slot++%16];if(!*p)*p=void_galloc(1024);
    if(*p)snprintf(GPTR(*p),1024,"%s",text?text:"");return *p;
}
static uint32_t steam_copy_id(uint32_t dst,uint64_t id)
{
    if(!void_vm_writable(dst,8))return 0;MEM32(dst)=(uint32_t)id;MEM32(dst+4)=(uint32_t)(id>>32);return dst;
}
typedef struct { uint32_t object,type;uint64_t call; } steam_callback;
static steam_callback steam_callbacks[256];
static lan_event steam_results[32];
static unsigned steam_result_next;
static void steam_unregister(uint32_t object,uint64_t call,int result)
{
    for(int i=0;i<256;++i) if(steam_callbacks[i].object==object && (result?steam_callbacks[i].call==call:!steam_callbacks[i].call)) memset(&steam_callbacks[i],0,sizeof steam_callbacks[i]);
    if(!result && void_vm_writable(object+4,1))MEM8(object+4)&=(uint8_t)~1u;
}
static void steam_register(uint32_t object,uint32_t type,uint64_t call)
{
    static unsigned diagnostic_count;
    if(!void_vm_readable(object,12)||!void_vm_readable(MEM32(object),12))return;
    steam_unregister(object,call,call!=0);
    for(int i=0;i<256;++i)if(!steam_callbacks[i].object){
        steam_callbacks[i]=(steam_callback){object,type,call};
        if(!call && void_vm_writable(object+4,8)){MEM8(object+4)|=1;MEM32(object+8)=type;}
        if((type==101 || type==143 || type==1202) && diagnostic_count++<64)void_log("[lan] callback registered type=%u server=%d",type,(MEM8(object+4)&2)!=0);
        return;
    }
    void_log("[lan] callback registry full");
}
static void steam_callbacks_run(void)
{
    static unsigned diagnostic_count;
    static int running;if(running)return;running=1;lan_pump(&steam_lan);lan_pump(&steam_server_lan);
    for(int server=0;server<2;++server){
    lan_context *c=server?&steam_server_lan:&steam_lan;
    unsigned end=c->event_write;
    while(c->event_read!=end){
        lan_event event=c->events[c->event_read++%256];
        if(event.call)steam_results[steam_result_next++%32]=event;
        uint32_t data=void_galloc(event.size);if(!data)continue;memcpy(GPTR(data),event.data,event.size);
        unsigned delivered=0;
        for(int i=0;i<256;++i){
            steam_callback cb=steam_callbacks[i];
            if(!cb.object || cb.type!=event.type || (cb.call && cb.call!=event.call))continue;
            if(!void_vm_readable(cb.object,12)||!void_vm_readable(MEM32(cb.object),12))continue;
            if(((MEM8(cb.object+4)&2)!=0)!=server)continue;
            uint32_t fn=MEM32(MEM32(cb.object)+(cb.call?0:4));
            uint32_t args[4]={data,0,(uint32_t)event.call,(uint32_t)(event.call>>32)};
            if(cb.call)memset(&steam_callbacks[i],0,sizeof steam_callbacks[i]);
            ++delivered;
            void_call_guest_this(fn,cb.object,cb.call?4:1,args);
        }
        if((event.type==101 || event.type==115 || event.type==143 || event.type==1202) && diagnostic_count++<64)void_log("[lan] callback dispatch type=%u server=%d delivered=%u",event.type,server,delivered);
        void_gfree(data);
    }
    }
    running=0;
}
static lan_event *steam_api_result(uint64_t call)
{
    for(unsigned n=steam_lan.event_read;n!=steam_lan.event_write;++n)if(steam_lan.events[n%256].call==call)return &steam_lan.events[n%256];
    for(int i=0;i<32;++i)if(steam_results[i].call==call)return &steam_results[i];
    return NULL;
}
static lan_lobby *steam_lobby(int arg) { return lan_lobby_find(&steam_lan,steam_arg64(arg)); }
static void steam_lobby_changed(lan_lobby *l)
{
    lan_event_data(&steam_lan,l->id,l->id);lan_publish(&steam_lan,l,0,0);
}
static void steam_close_packets(lan_context *c,uint64_t id,int channel)
{
    lan_packet **link=&c->packets;
    while(*link){lan_packet *p=*link;if(p->sender==id && (channel<0 || p->channel==(uint32_t)channel)){*link=p->next;c->packet_bytes-=p->size+sizeof *p;free(p);}else link=&p->next;}
    c->packet_tail=NULL;for(lan_packet *p=c->packets;p;p=p->next)c->packet_tail=p;
}
