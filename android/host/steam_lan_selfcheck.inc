static unsigned steam_check_plain,steam_check_result;
static uint32_t steam_check_object;
static uint64_t steam_check_call;
static uint32_t steam_check_server_object;
static unsigned steam_check_server_events,steam_check_client_events,steam_check_auth_layout;
static void steam_check_server_callback(void)
{
    if(g_ecx==steam_check_server_object)++steam_check_server_events;else ++steam_check_client_events;
    if(MEM32(g_ecx+8)==143 && MEM32(ARG(0)+8)==0 && lan_get64((unsigned char*)GPTR(ARG(0))+12)==steam_lan.id)++steam_check_auth_layout;
    g_esp+=8;
}
static void steam_check_callback(void)
{
    if(g_ecx==steam_check_object && MEM32(ARG(0)+16)==1)++steam_check_plain;
    g_esp+=8;
}
static void steam_check_callresult(void)
{
    if(g_ecx==steam_check_object && !ARG(1) && steam_arg64(2)==steam_check_call && MEM32(ARG(0))==1)++steam_check_result;
    g_esp+=20;
}
static int steam_server_selfcheck(uint32_t object,uint32_t table,uint32_t memory)
{
    int failed=!steam_server_start(20000,20001);
    if(failed)return 1;
    uint32_t server_object=void_galloc(20),version=void_gstrdup("SteamGameServer012");
    if(!server_object || !version){steam_server_stop();return 1;}
    memset(GPTR(server_object),0,20);MEM32(server_object)=table;MEM8(server_object+4)=2;
    MEM32(table+4)=void_thunk(steam_check_server_callback,"LAN server callback test");
    steam_check_server_object=server_object;steam_check_server_events=steam_check_client_events=steam_check_auth_layout=0;
    if(!steam_client.guest)void_com_wrap(&steam_client,&client_class,0);
    uint32_t args[4]={2,2,version,0};
    uint32_t server_api=void_call_guest_this(MEM32(MEM32(steam_client.guest)+6*4),steam_client.guest,3,args);
    failed|=!server_api;
    uint32_t server_net=void_call_guest_this(MEM32(MEM32(steam_client.guest)+16*4),steam_client.guest,3,args);
    failed|=!server_net || server_net==steam_networking.guest;
    if(!server_api){steam_server_stop();void_gfree(server_object);void_gfree(version);return 1;}
    steam_callbacks_run(); /* Drain earlier client-only auth before registering the probes. */
    steam_register(object,101,0);steam_register(server_object,101,0);
    void_call_guest_this(MEM32(MEM32(server_api)+6*4),server_api,0,NULL);steam_callbacks_run();
    failed|=steam_check_server_events!=1 || steam_check_client_events!=0;
    failed|=void_call_guest_this(MEM32(MEM32(server_api)+8*4),server_api,0,NULL)!=1;
    failed|=void_call_guest_this(MEM32(MEM32(server_api)+9*4),server_api,0,NULL)!=0;
    args[0]=memory;
    failed|=void_call_guest_this(MEM32(MEM32(server_api)+10*4),server_api,1,args)!=memory || lan_get64(GPTR(memory))!=lan_server_id(steam_lan.id);
    args[0]=memory;args[1]=16;args[2]=memory+32;
    failed|=void_call_guest_this(MEM32(MEM32(steam_user.guest)+13*4),steam_user.guest,3,args)!=1;
    steam_register(object,143,0);steam_register(server_object,143,0);
    args[2]=(uint32_t)steam_lan.id;args[3]=(uint32_t)(steam_lan.id>>32);
    failed|=void_call_guest_this(MEM32(MEM32(server_api)+29*4),server_api,4,args)!=0;
    failed|=void_call_guest_this(MEM32(MEM32(server_api)+29*4),server_api,4,args)!=2;
    steam_callbacks_run();
    failed|=steam_check_server_events!=2 || steam_check_client_events!=0 || steam_check_auth_layout!=1;
    MEM8(memory)=0;
    failed|=void_call_guest_this(MEM32(MEM32(server_api)+29*4),server_api,4,args)!=1;
    args[0]=(uint32_t)steam_lan.id;args[1]=(uint32_t)(steam_lan.id>>32);
    void_call_guest_this(MEM32(MEM32(server_api)+30*4),server_api,2,args);
    void_call_guest_this(MEM32(MEM32(server_api)+7*4),server_api,0,NULL);
    failed|=void_call_guest_this(MEM32(MEM32(server_api)+8*4),server_api,0,NULL)!=0;
    steam_unregister(object,0,0);steam_unregister(server_object,0,0);
    steam_server_stop();failed|=steam_lan.started!=1 || !steam_lan.joined;
    void_gfree(server_object);void_gfree(version);steam_check_server_object=0;
    void_log("[selftest] LAN game server012 lifecycle/identity/auth/callback isolation %s",failed?"FAIL":"PASS");return failed;
}
static int steam_lan_selfcheck(void)
{
    uint32_t object=void_galloc(32),table=void_galloc(12),memory=void_galloc(64);
    if(!object||!table||!memory)return 1;
    memset(GPTR(object),0,32);MEM32(object)=table;MEM32(table)=void_thunk(steam_check_callresult,"LAN call result test");
    MEM32(table+4)=void_thunk(steam_check_callback,"LAN callback test");MEM32(table+8)=0;
    steam_check_object=object;steam_check_plain=steam_check_result=0;
    steam_register(object,504,0);
    uint32_t create[2]={2,8};
    steam_check_call=void_call_guest_this(MEM32(MEM32(steam_matchmaking.guest)+13*4),steam_matchmaking.guest,2,create);
    steam_register(object,513,steam_check_call);steam_callbacks_run();
    int failed=steam_check_plain!=1 || steam_check_result!=1 || !steam_lan.joined;
    /* Exact SteamClient017 explicit argument counts (ECX holds this). */
    const unsigned client_slots[8]={1,2,3,4,7,31,32,33};
    const unsigned client_counts[8]={1,1,2,2,2,1,1,1};
    uint32_t client_args[2]={memory,1};MEM32(memory)=0;MEM32(memory+4)=0x12345678;
    for(unsigned i=0;i<8;++i)
        void_call_guest_this(MEM32(MEM32(steam_client.guest)+client_slots[i]*4),steam_client.guest,client_counts[i],client_args);
    failed|=MEM32(memory)!=1 || MEM32(memory+4)!=0x12345678;
    client_args[0]=0;
    failed|=void_call_guest_this(MEM32(MEM32(steam_client.guest)+3*4),steam_client.guest,2,client_args)!=0;
    steam_callbacks_run();failed|=steam_check_plain!=1 || steam_check_result!=1;
    steam_unregister(object,0,0);lan_event_enter(&steam_lan,steam_lan.joined,0,1);steam_callbacks_run();failed|=steam_check_plain!=1;
    /* The original lobby command reader leaves the optional type output NULL. */
    MEM32(memory)=400;MEM32(memory+4)=123;MEM32(memory+8)=0x01300000;
    uint32_t entry=steam_lan.chat_count;
    uint32_t chat[7]={(uint32_t)steam_lan.joined,(uint32_t)(steam_lan.joined>>32),memory,12,0,0,0};
    failed|=void_call_guest_this(MEM32(MEM32(steam_matchmaking.guest)+26*4),steam_matchmaking.guest,4,chat)!=1;
    chat[2]=entry;chat[3]=memory+40;chat[4]=memory+16;chat[5]=16;
    failed|=void_call_guest_this(MEM32(MEM32(steam_matchmaking.guest)+27*4),steam_matchmaking.guest,7,chat)!=12;
    failed|=memcmp(GPTR(memory),GPTR(memory+16),12)!=0 || lan_get64(GPTR(memory+40))!=steam_lan.id;
    chat[3]=0;chat[6]=memory+48;MEM32(memory+48)=0;
    failed|=void_call_guest_this(MEM32(MEM32(steam_matchmaking.guest)+27*4),steam_matchmaking.guest,7,chat)!=12 || MEM32(memory+48)!=1;
    chat[6]=0;
    failed|=void_call_guest_this(MEM32(MEM32(steam_matchmaking.guest)+27*4),steam_matchmaking.guest,7,chat)!=12;
    if(!steam_networking.guest)void_com_wrap(&steam_networking,&networking_class,0);
    uint32_t args[6]={0,0,memory,1,2,0};MEM8(memory)=0;
    failed|=void_call_guest_this(MEM32(MEM32(steam_networking.guest)),steam_networking.guest,6,args)!=0;
    args[0]=memory;args[1]=0;
    failed|=void_call_guest_this(MEM32(MEM32(steam_networking.guest)+4),steam_networking.guest,2,args)!=0;
    args[0]=memory;args[1]=16;args[2]=memory+32;
    uint32_t ticket=void_call_guest_this(MEM32(MEM32(steam_user.guest)+13*4),steam_user.guest,3,args);
    failed|=ticket!=1 || MEM32(memory+32)!=16;
    args[2]=(uint32_t)steam_lan.id;args[3]=(uint32_t)(steam_lan.id>>32);
    failed|=void_call_guest_this(MEM32(MEM32(steam_user.guest)+14*4),steam_user.guest,4,args)!=0;
    MEM8(memory)=0;
    failed|=void_call_guest_this(MEM32(MEM32(steam_user.guest)+14*4),steam_user.guest,4,args)==0;
    failed|=steam_server_selfcheck(object,table,memory);
    lan_leave(&steam_lan);steam_callbacks_run();
    void_gfree(object);void_gfree(table);void_gfree(memory);steam_check_object=0;
    void_log("[selftest] LAN callbacks (MSVC slots/one-shot/unregister), optional chat outputs, P2P stack and local handshake %s",failed?"FAIL":"PASS");return failed;
}
