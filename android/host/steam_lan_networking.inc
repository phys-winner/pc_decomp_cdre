COM_METHOD(sn, SendP2PPacket, 6)
{
    lan_context *c=steam_network_context();
    uint32_t size=ARG(3);if(size>LAN_PACKET_MAX-4 || !void_vm_readable(ARG(2),size))return 0;
    int ok=lan_send_packet(c,steam_arg64(0),GPTR(ARG(2)),size,(int)ARG(4),ARG(5));
    lan_trace_end(c,0,GPTR(ARG(2)),size,ARG(5),(int)ARG(4),ok);
    if(++c->packet_tx<=24)void_log("[lan] P2P send server=%d to_server=%d size=%u command=%u mode=%u result=%d",c->is_server,lan_server_valid(steam_arg64(0)),size,size>=4?MEM32(ARG(2)):0,ARG(4),ok);
    return ok;
}
COM_METHOD(sn, IsP2PPacketAvailable, 2)
{
    lan_context *c=steam_network_context();lan_pump(c);if(!void_vm_writable(ARG(0),4))return 0;
    for(lan_packet *p=c->packets;p;p=p->next)if(p->channel==ARG(1)){
        lan_session *s=lan_session_find(c,p->sender,0);if(s && s->accepted){MEM32(ARG(0))=p->size;return 1;}
    }
    MEM32(ARG(0))=0;return 0;
}
COM_METHOD(sn, ReadP2PPacket, 5)
{
    lan_context *c=steam_network_context();
    if(!void_vm_writable(ARG(0),ARG(1)) || !void_vm_writable(ARG(2),4) || !void_vm_writable(ARG(3),8))return 0;
    lan_packet **link=&c->packets;
    while(*link){lan_packet *p=*link;lan_session *s=lan_session_find(c,p->sender,0);if(p->channel==ARG(4) && s && s->accepted){
        if(p->size>ARG(1))return 0;memcpy(GPTR(ARG(0)),p->data,p->size);MEM32(ARG(2))=p->size;steam_copy_id(ARG(3),p->sender);
        lan_trace_end(c,2,p->data,p->size,p->channel,-1,1);
        if(++c->packet_read<=24)void_log("[lan] P2P read server=%d from_server=%d size=%u command=%u",c->is_server,lan_server_valid(p->sender),p->size,p->size>=4?lan_get32(p->data):0);
        *link=p->next;c->packet_bytes-=p->size+sizeof *p;if(c->packet_tail==p){c->packet_tail=NULL;for(lan_packet *q=c->packets;q;q=q->next)c->packet_tail=q;}free(p);return 1;
    }link=&p->next;}MEM32(ARG(2))=0;return 0;
}
COM_METHOD(sn, AcceptP2PSessionWithUser, 2)
{
    lan_context *c=steam_network_context();uint64_t id=steam_arg64(0);
    if(c->lobby_source)c->joined=c->lobby_source->joined;
    if(!lan_endpoint_member(lan_lobby_find(c,c->joined),id))return 0;
    lan_session *s=lan_session_find(c,id,1);if(!s)return 0;s->accepted=1;
    if(++c->packet_accept<=16)void_log("[lan] P2P accepted server=%d remote_server=%d",c->is_server,lan_server_valid(id));return 1;
}
COM_METHOD(sn, CloseP2PSessionWithUser, 2)
{
    lan_context *c=steam_network_context();uint64_t id=steam_arg64(0);steam_close_packets(c,id,-1);
    lan_session *s=lan_session_find(c,id,0);if(s)memset(s,0,sizeof *s);
    for(int i=0;i<LAN_PEERS*2;++i)if(c->peers[i].id==id)lan_peer_close(&c->peers[i]);return 1;
}
COM_METHOD(sn, CloseP2PChannelWithUser, 3) { steam_close_packets(steam_network_context(),steam_arg64(0),(int)ARG(2));return 1; }
COM_METHOD(sn, GetP2PSessionState, 3)
{
    lan_context *c=steam_network_context();uint64_t id=steam_arg64(0);uint32_t out=ARG(2);if(!void_vm_writable(out,20))return 0;
    memset(GPTR(out),0,20);uint32_t ip=lan_peer_ip(c,id);if(!ip)return 0;
    MEM8(out)=1;MEM32(out+12)=ntohl(ip);MEM16(out+16)=LAN_PORT+lan_server_valid(id);
    for(int i=0;i<LAN_PEERS*2;++i)if(c->peers[i].id==id)MEM32(out+4)+=(uint32_t)(c->peers[i].tx_size-c->peers[i].tx_offset);
    return 1;
}
COM_METHOD(sn, AllowP2PPacketRelay, 1) { return 1; }
