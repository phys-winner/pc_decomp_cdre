COM_METHOD(mm, RequestLobbyList, 0) { steam_identity();return steam_return64(lan_search(&steam_lan)); }
static void steam_filter(int numeric)
{
    const char *key=steam_text(ARG(0),128);const char *value=numeric?NULL:steam_text(ARG(1),1024);
    if(!key || (!numeric && !value) || steam_lan.filter_count==16)return;
    lan_filter *f=&steam_lan.filters[steam_lan.filter_count++];memset(f,0,sizeof *f);strcpy(f->key,key);
    if(numeric)snprintf(f->value,sizeof f->value,"%d",(int32_t)ARG(1));else strcpy(f->value,value);
    f->numeric=numeric;f->comparison=(int32_t)ARG(2);
}
COM_METHOD(mm, AddRequestLobbyListStringFilter, 3) { steam_filter(0);return 0; }
COM_METHOD(mm, AddRequestLobbyListNumericalFilter, 3) { steam_filter(1);return 0; }
COM_METHOD(mm, AddRequestLobbyListFilterSlotsAvailable, 1) { steam_lan.filter_slots=ARG(0)>LAN_PEERS?LAN_PEERS:(int)ARG(0);return 0; }
COM_METHOD(mm, AddRequestLobbyListResultCountFilter, 1) { steam_lan.filter_limit=ARG(0)>LAN_LOBBIES?LAN_LOBBIES:(int)ARG(0);return 0; }
COM_METHOD(mm, GetLobbyGameByIndex, 2)
{
    uint32_t i=ARG(1);return steam_copy_id(ARG(0),i<(uint32_t)steam_lan.search_count?steam_lan.search_ids[i]:0);
}
COM_METHOD(mm, CreateLobby, 2)
{
    steam_identity();uint64_t call=lan_create(&steam_lan,(int)ARG(0),(int)ARG(1));
    void_log("[lan] create lobby limit=%u result=%s",ARG(1),steam_lan.joined?"created":"failed");return steam_return64(call);
}
COM_METHOD(mm, JoinLobby, 2) { steam_identity();void_log("[lan] join requested");return steam_return64(lan_join(&steam_lan,steam_arg64(0))); }
COM_METHOD(mm, LeaveLobby, 2) { if(steam_lan.joined==steam_arg64(0))lan_leave(&steam_lan);return 0; }
COM_METHOD(mm, GetNumLobbyMembers, 2) { lan_lobby *l=steam_lobby(0);return l?l->count:0; }
COM_METHOD(mm, GetLobbyMemberByIndex, 4)
{
    lan_lobby *l=steam_lobby(1);return steam_copy_id(ARG(0),l && ARG(3)<(uint32_t)l->count?l->members[ARG(3)].id:0);
}
COM_METHOD(mm, GetLobbyData, 3)
{
    lan_lobby *l=steam_lobby(0);lan_kv *k=l?lan_key(l->data,LAN_KEYS,steam_text(ARG(2),128),0):NULL;
    return steam_result_text(k?k->value:"");
}
COM_METHOD(mm, SetLobbyData, 4)
{
    lan_lobby *l=steam_lobby(0);if(!l || l->owner!=steam_lan.id)return 0;
    if(!lan_set_key(l->data,LAN_KEYS,steam_text(ARG(2),128),steam_text(ARG(3),1024)))return 0;
    steam_lobby_changed(l);return 1;
}
COM_METHOD(mm, GetLobbyDataCount, 2)
{
    lan_lobby *l=steam_lobby(0);int n=0;if(l)for(int i=0;i<LAN_KEYS;++i)if(l->data[i].key[0])++n;return n;
}
COM_METHOD(mm, GetLobbyDataByIndex, 7)
{
    lan_lobby *l=steam_lobby(0);if(!l || !ARG(4) || !ARG(6) || !void_vm_writable(ARG(3),ARG(4)) || !void_vm_writable(ARG(5),ARG(6)))return 0;
    uint32_t n=ARG(2);for(int i=0;i<LAN_KEYS;++i)if(l->data[i].key[0] && !n--){
        snprintf(GPTR(ARG(3)),ARG(4),"%s",l->data[i].key);snprintf(GPTR(ARG(5)),ARG(6),"%s",l->data[i].value);return 1;
    }
    return 0;
}
COM_METHOD(mm, DeleteLobbyData, 3)
{
    lan_lobby *l=steam_lobby(0);if(!l || l->owner!=steam_lan.id)return 0;
    lan_kv *k=lan_key(l->data,LAN_KEYS,steam_text(ARG(2),128),0);if(!k)return 0;memset(k,0,sizeof *k);steam_lobby_changed(l);return 1;
}
COM_METHOD(mm, GetLobbyMemberData, 5)
{
    lan_member *m=lan_member_find(steam_lobby(0),steam_arg64(2));lan_kv *k=m?lan_key(m->data,8,steam_text(ARG(4),128),0):NULL;
    return steam_result_text(k?k->value:"");
}
COM_METHOD(mm, SetLobbyMemberData, 4)
{
    lan_lobby *l=steam_lobby(0);lan_member *m=lan_member_find(l,steam_lan.id);
    if(!m || !lan_set_key(m->data,8,steam_text(ARG(2),128),steam_text(ARG(3),1024)))return 0;
    if(l->owner==steam_lan.id){lan_event_data(&steam_lan,l->id,m->id);lan_publish(&steam_lan,l,0,0);}
    else {unsigned char p[10000];lan_cursor w={p,p+sizeof p,1};lan_write_keys(&w,m->data,8);if(w.ok)lan_send(&steam_lan,l->owner,l->ip,LAN_MEMBER_DATA,l->id,p,(uint32_t)(w.p-p));}
    return 0;
}
COM_METHOD(mm, SendLobbyChatMsg, 4)
{
    lan_lobby *l=steam_lobby(0);uint32_t size=ARG(3);
    if(!l || !lan_member_find(l,steam_lan.id) || size>4096 || !void_vm_readable(ARG(2),size))return 0;
    if(steam_lan.chat_count<32)void_log("[lan] lobby chat send size=%u command=%u",size,size>=4?MEM32(ARG(2)):0);
    int ok=1;for(int i=0;i<l->count;++i)if(l->members[i].id!=steam_lan.id)
        ok&=lan_send(&steam_lan,l->members[i].id,l->members[i].ip,LAN_CHAT,l->id,GPTR(ARG(2)),size);
    uint32_t entry=steam_lan.chat_count++;unsigned slot=entry%32;steam_lan.chats[slot].from=steam_lan.id;
    steam_lan.chats[slot].size=size;memcpy(steam_lan.chats[slot].data,GPTR(ARG(2)),size);
    unsigned char p[24]={0};lan_put64(p,l->id);lan_put64(p+8,steam_lan.id);p[16]=1;lan_put32(p+20,entry);lan_event_add(&steam_lan,507,0,p,24);return ok;
}
COM_METHOD(mm, GetLobbyChatEntry, 7)
{
    uint32_t entry=ARG(2),slot=entry%32;
    if(!steam_lobby(0) || entry>=steam_lan.chat_count || steam_lan.chat_count-entry>32 ||
       (ARG(3) && !void_vm_writable(ARG(3),8)) || !void_vm_writable(ARG(4),ARG(5)) ||
       (ARG(6) && !void_vm_writable(ARG(6),4)))return 0;
    uint32_t size=steam_lan.chats[slot].size;if(size>ARG(5))size=ARG(5);
    if(entry<32)void_log("[lan] lobby chat read size=%u command=%u",size,size>=4?lan_get32(steam_lan.chats[slot].data):0);
    /* Original 005E6BD0 passes NULL for the optional entry-type output. */
    if(ARG(3))steam_copy_id(ARG(3),steam_lan.chats[slot].from);
    if(ARG(6))MEM32(ARG(6))=1;
    memcpy(GPTR(ARG(4)),steam_lan.chats[slot].data,size);return size;
}
COM_METHOD(mm, RequestLobbyData, 2)
{
    lan_lobby *l=steam_lobby(0);if(!l)return 0;
    if(l->owner==steam_lan.id){lan_event_data(&steam_lan,l->id,l->id);return 1;}
    if(l->data_requests==UINT32_MAX)return 0;
    int sent=lan_send(&steam_lan,l->owner,l->ip,LAN_GET,l->id,NULL,0);
    if(sent)++l->data_requests;
    return sent;
}
COM_METHOD(mm, SetLobbyGameServer, 6)
{
    lan_lobby *l=steam_lobby(0);if(!l || l->owner!=steam_lan.id)return 0;
    l->server=steam_arg64(4);l->server_ip=ARG(2);l->server_port=(uint16_t)ARG(3);steam_lobby_changed(l);return 0;
}
COM_METHOD(mm, GetLobbyGameServer, 5)
{
    lan_lobby *l=steam_lobby(0);if(!l || (!l->server && !l->server_ip) || !void_vm_writable(ARG(2),4) || !void_vm_writable(ARG(3),2) || !void_vm_writable(ARG(4),8))return 0;
    MEM32(ARG(2))=l->server_ip;MEM16(ARG(3))=l->server_port;steam_copy_id(ARG(4),l->server);return 1;
}
COM_METHOD(mm, SetLobbyMemberLimit, 3)
{
    lan_lobby *l=steam_lobby(0);if(!l || l->owner!=steam_lan.id || ARG(2)<(uint32_t)l->count || ARG(2)>LAN_PEERS)return 0;l->limit=ARG(2);steam_lobby_changed(l);return 1;
}
COM_METHOD(mm, GetLobbyMemberLimit, 2) { lan_lobby *l=steam_lobby(0);return l?l->limit:0; }
COM_METHOD(mm, SetLobbyType, 3) { lan_lobby *l=steam_lobby(0);if(!l || l->owner!=steam_lan.id || ARG(2)>3)return 0;l->type=ARG(2);steam_lobby_changed(l);return 1; }
COM_METHOD(mm, SetLobbyJoinable, 3) { lan_lobby *l=steam_lobby(0);if(!l || l->owner!=steam_lan.id)return 0;l->joinable=ARG(2)!=0;steam_lobby_changed(l);return 1; }
COM_METHOD(mm, GetLobbyOwner, 3) { lan_lobby *l=steam_lobby(1);return steam_copy_id(ARG(0),l?l->owner:0); }
