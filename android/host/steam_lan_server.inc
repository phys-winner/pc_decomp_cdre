/* SteamGameServer012: the original race has a server and a local client in
 * one process. Their identities, sockets, P2P queues and callbacks are separate. */
static void_com_object steam_game_server;
static struct {
    int logged_on, dedicated, max_players, bots, password, heartbeats, interval;
    uint32_t app;
    uint16_t game_port, query_port, spectator_port;
    char product[128], description[128], directory[128], name[128], map[128];
    char spectator[128], tags[128], data[1024], region[32];
    lan_kv keys[LAN_KEYS];
    uint64_t authenticated[LAN_PEERS];
} steam_server;
static int steam_server_start(uint32_t game_port,uint32_t query_port)
{
    steam_identity();
    lan_lobby *l=lan_lobby_find(&steam_lan,steam_lan.joined);
    if(!l || l->owner!=steam_lan.id || !game_port || game_port>65535 || query_port>65535)return 0;
    if(steam_server_lan.started<0)lan_shutdown(&steam_server_lan);
    int ok=lan_init_endpoint(&steam_server_lan,steam_lan.bind_ip,(uint32_t)steam_lan.id,1);
    if(ok){steam_server_lan.lobby_source=&steam_lan;steam_server_lan.joined=steam_lan.joined;
        steam_server.game_port=(uint16_t)game_port;steam_server.query_port=(uint16_t)query_port;}
    void_log("[lan] race server endpoint %s",ok?"ready":"unavailable");return ok;
}
static void steam_server_stop(void)
{
    lan_shutdown(&steam_server_lan);memset(&steam_server,0,sizeof steam_server);
}
static void steam_server_text(char *out,size_t cap,uint32_t va)
{
    const char *text=steam_text(va,cap);if(text)snprintf(out,cap,"%s",text);
}
COM_METHOD(gs, InitGameServer, 6) { steam_server.app=ARG(4);return steam_server_start(ARG(1),ARG(2)); }
#define GS_TEXT(method,field) COM_METHOD(gs,method,1){steam_server_text(steam_server.field,sizeof steam_server.field,ARG(0));return 0;}
GS_TEXT(SetProduct,product)
GS_TEXT(SetGameDescription,description)
GS_TEXT(SetModDir,directory)
GS_TEXT(SetServerName,name)
GS_TEXT(SetMapName,map)
GS_TEXT(SetSpectatorServerName,spectator)
GS_TEXT(SetGameTags,tags)
GS_TEXT(SetGameData,data)
GS_TEXT(SetRegion,region)
#undef GS_TEXT
COM_METHOD(gs, SetDedicatedServer, 1) { steam_server.dedicated=ARG(0)!=0;return 0; }
static uint32_t steam_server_logon(void)
{
    if(steam_server_lan.started!=1 || steam_server.logged_on)return 0;
    steam_server.logged_on=1;unsigned char policy=0;
    lan_event_add(&steam_server_lan,101,0,&policy,1);
    lan_event_add(&steam_server_lan,115,0,&policy,1);
    void_log("[lan] race server logged on locally");return 0;
}
COM_METHOD(gs, LogOn, 1) { return steam_server_logon(); }
COM_METHOD(gs, LogOnAnonymous, 0) { return steam_server_logon(); }
COM_METHOD(gs, LogOff, 0) { steam_server.logged_on=0;memset(steam_server.authenticated,0,sizeof steam_server.authenticated);return 0; }
COM_METHOD(gs, BLoggedOn, 0) { return steam_server.logged_on; }
COM_METHOD(gs, BSecure, 0) { return 0; }
COM_METHOD(gs, GetSteamID, 1) { return steam_copy_id(ARG(0),steam_server_lan.started==1?steam_server_lan.id:0); }
COM_METHOD(gs, WasRestartRequested, 0) { return 0; }
COM_METHOD(gs, SetMaxPlayerCount, 1) { if(ARG(0)<=LAN_PEERS)steam_server.max_players=ARG(0);return 0; }
COM_METHOD(gs, SetBotPlayerCount, 1) { if(ARG(0)<=LAN_PEERS)steam_server.bots=ARG(0);return 0; }
COM_METHOD(gs, SetPasswordProtected, 1) { steam_server.password=ARG(0)!=0;return 0; }
COM_METHOD(gs, SetSpectatorPort, 1) { steam_server.spectator_port=(uint16_t)ARG(0);return 0; }
COM_METHOD(gs, ClearAllKeyValues, 0) { memset(steam_server.keys,0,sizeof steam_server.keys);return 0; }
COM_METHOD(gs, SetKeyValue, 2) { lan_set_key(steam_server.keys,LAN_KEYS,steam_text(ARG(0),128),steam_text(ARG(1),1024));return 0; }
COM_METHOD(gs, SendUserConnectAndAuthenticate, 4) { if(void_vm_writable(ARG(3),8))steam_copy_id(ARG(3),0);return 0; }
COM_METHOD(gs, CreateUnauthenticatedUserConnection, 1) { return steam_copy_id(ARG(0),0); }
static void steam_server_end_auth(uint64_t id)
{
    for(int i=0;i<LAN_PEERS;++i)if(steam_server.authenticated[i]==id)steam_server.authenticated[i]=0;
}
COM_METHOD(gs, SendUserDisconnect, 2) { steam_server_end_auth(steam_arg64(0));return 0; }
COM_METHOD(gs, BUpdateUserData, 4) { return steam_server.logged_on && lan_member_find(lan_lobby_find(&steam_lan,steam_lan.joined),steam_arg64(0))!=NULL; }
COM_METHOD(gs, GetAuthSessionTicket, 3)
{
    if(!void_vm_writable(ARG(2),4))return 0;MEM32(ARG(2))=0;
    if(!steam_server.logged_on || ARG(1)<16 || !void_vm_writable(ARG(0),16))return 0;
    unsigned char *p=GPTR(ARG(0));memcpy(p,"CDLAN001",8);lan_put64(p+8,steam_server_lan.id);MEM32(ARG(2))=16;return 1;
}
COM_METHOD(gs, BeginAuthSession, 4)
{
    uint64_t id=steam_arg64(2);lan_lobby *l=lan_lobby_find(&steam_lan,steam_lan.joined);
    if(!steam_server.logged_on || ARG(1)!=16 || !void_vm_readable(ARG(0),16) ||
       memcmp(GPTR(ARG(0)),"CDLAN001",8) || lan_get64((unsigned char*)GPTR(ARG(0))+8)!=id || !lan_member_find(l,id))return 1;
    int free_slot=-1;
    for(int i=0;i<LAN_PEERS;++i){if(steam_server.authenticated[i]==id)return 2;if(!steam_server.authenticated[i])free_slot=i;}
    if(free_slot<0)return 1;steam_server.authenticated[free_slot]=id;
    /* This executable uses Steam's pack(4) callback layout: owner is at +12. */
    unsigned char p[20]={0};lan_put64(p,id);lan_put64(p+12,id);lan_event_add(&steam_server_lan,143,0,p,sizeof p);
    void_log("[lan] race server accepted local lobby ticket");return 0;
}
COM_METHOD(gs, EndAuthSession, 2) { steam_server_end_auth(steam_arg64(0));return 0; }
COM_METHOD(gs, CancelAuthTicket, 1) { return 0; }
COM_METHOD(gs, UserHasLicenseForApp, 3) { return lan_member_find(lan_lobby_find(&steam_lan,steam_lan.joined),steam_arg64(0))?0:1; }
COM_METHOD(gs, RequestUserGroupStatus, 4) { return 0; }
COM_METHOD(gs, GetGameplayStats, 0) { return 0; }
COM_METHOD(gs, GetServerReputation, 0) { return steam_return64(0); }
COM_METHOD(gs, GetPublicIP, 0) { return 0; }
COM_METHOD(gs, HandleIncomingPacket, 4) { return 0; }
COM_METHOD(gs, GetNextOutgoingPacket, 4) { return 0; }
COM_METHOD(gs, EnableHeartbeats, 1) { steam_server.heartbeats=ARG(0)!=0;return 0; }
COM_METHOD(gs, SetHeartbeatInterval, 1) { steam_server.interval=(int32_t)ARG(0);return 0; }
COM_METHOD(gs, ForceHeartbeat, 0) { lan_pump(&steam_server_lan);return 0; }
COM_METHOD(gs, AssociateWithClan, 2) { return steam_return64(0); }
COM_METHOD(gs, ComputeNewPlayerCompatibility, 2) { return steam_return64(0); }
static const void_fn game_server_methods[]={
    gs_InitGameServer,gs_SetProduct,gs_SetGameDescription,gs_SetModDir,gs_SetDedicatedServer,
    gs_LogOn,gs_LogOnAnonymous,gs_LogOff,gs_BLoggedOn,gs_BSecure,gs_GetSteamID,gs_WasRestartRequested,
    gs_SetMaxPlayerCount,gs_SetBotPlayerCount,gs_SetServerName,gs_SetMapName,gs_SetPasswordProtected,
    gs_SetSpectatorPort,gs_SetSpectatorServerName,gs_ClearAllKeyValues,gs_SetKeyValue,gs_SetGameTags,
    gs_SetGameData,gs_SetRegion,gs_SendUserConnectAndAuthenticate,gs_CreateUnauthenticatedUserConnection,
    gs_SendUserDisconnect,gs_BUpdateUserData,gs_GetAuthSessionTicket,gs_BeginAuthSession,gs_EndAuthSession,
    gs_CancelAuthTicket,gs_UserHasLicenseForApp,gs_RequestUserGroupStatus,gs_GetGameplayStats,
    gs_GetServerReputation,gs_GetPublicIP,gs_HandleIncomingPacket,gs_GetNextOutgoingPacket,
    gs_EnableHeartbeats,gs_SetHeartbeatInterval,gs_ForceHeartbeat,gs_AssociateWithClan,gs_ComputeNewPlayerCompatibility
};
static void_com_class game_server_class={"ISteamGameServer012",44,game_server_methods,0};
