#include <assert.h>
#include "../../android/host/steam_lan.inc"
static lan_context host,client,server;
static void wait_pair(unsigned ms)
{
    uint64_t end=lan_now()+ms;
    while(lan_now()<end){lan_pump(&host);lan_pump(&client);lan_pump(&server);
#ifdef _WIN32
        Sleep(1);
#else
        usleep(1000);
#endif
    }
}
int main(int argc, char **argv)
{
    if (argc == 2) {
        int persisted = 0; uint32_t id = lan_persistent_identity(argv[1], &persisted);
        assert(persisted && id > 1); printf("%08X\n", id); return 0;
    }
    assert(lan_init(&host,htonl(0x7f000002u),123));assert(lan_init(&client,htonl(0x7f000003u),456));
    assert(host.id!=client.id);assert(lan_create(&host,2,8));uint64_t lobby=host.joined;
    /* The original browser rejects generic chat IDs without the lobby flag. */
    uint32_t high=(uint32_t)(lobby>>32);
    assert(((high>>20)&15)==8 && (high>>24)>0 && (high>>24)<5 && (high&0x40000));
    lan_lobby *h=lan_lobby_find(&host,lobby);assert(h && h->count==1);
    assert(lan_set_key(h->data,LAN_KEYS,"name","LAN transport fixture"));
    lan_search(&client);assert(lan_udp(&client,host.bind_ip,LAN_QUERY,0,NULL,0));wait_pair(250);
    lan_lobby *l=lan_lobby_find(&client,lobby);assert(l && l->owner==host.id);
    assert(!strcmp(lan_key(l->data,LAN_KEYS,"name",0)->value,"LAN transport fixture"));
    client.search_until=0;lan_pump(&client);assert(client.search_count==1 && client.search_ids[0]==lobby);
    assert(lan_join(&client,lobby));wait_pair(250);assert(client.join_call==0 && h->count==2 && l->count==2);
    for(int i=0;i<100;++i) {unsigned char p[1996];memset(p,i,sizeof p);lan_put32(p,i);assert(lan_send_packet(&host,client.id,p,sizeof p,2,3));}
    assert(lan_send_packet(&client,host.id,"reply",6,0,1));wait_pair(500);
    int count=0;for(lan_packet *p=client.packets;p;p=p->next){assert(p->sender==host.id && p->channel==3 && p->size==1996 && lan_get32(p->data)==(uint32_t)count++);}
    assert(count==100);assert(host.packets && host.packets->sender==client.id && !memcmp(host.packets->data,"reply",6));
    unsigned char *big=malloc(900000);memset(big,0xA5,900000);assert(lan_send_packet(&client,host.id,big,900000,2,7));wait_pair(1000);
    assert(host.packet_tail && host.packet_tail->size==900000 && !memcmp(host.packet_tail->data,big,900000));
    big=realloc(big,1024u*1024u);assert(big);memset(big,0xB6,1024u*1024u);
    assert(lan_send_packet(&client,host.id,big,1024u*1024u,3,8));
    assert(!lan_send_packet(&client,host.id,big,1024u*1024u+1,2,8));wait_pair(500);
    assert(host.packet_tail->size==1024u*1024u && !memcmp(host.packet_tail->data,big,1024u*1024u));free(big);
    /* A truncated/oversize or spoofed snapshot must not replace valid state. */
    unsigned char state[4096];int n=lan_snapshot(h,state,sizeof state);assert(n>0);
    for(int i=0;i<n;++i)assert(!lan_receive_state(&client,lobby,host.id,host.bind_ip,state,i));
    assert(!lan_receive_state(&client,lobby,client.id,host.bind_ip,state,n));
    unsigned char save[4];memcpy(save,state+20,4);lan_put32(state+20,UINT32_MAX);assert(!lan_receive_state(&client,lobby,host.id,host.bind_ip,state,n));memcpy(state+20,save,4);
    assert(l->count==2);lan_leave(&client);wait_pair(200);assert(h->count==1);
    /* A race server shares its host's lobby, but not its client packet queue. */
    /* Leave clears the cached lobby: refresh instead of relying on a late heartbeat. */
    lan_search(&client);lan_udp(&client,host.bind_ip,LAN_QUERY,0,NULL,0);wait_pair(250);
    assert(lan_lobby_find(&client,lobby));assert(lan_join(&client,lobby));wait_pair(200);
    assert(!client.join_call && client.joined==lobby && h->count==2);
    assert(lan_init_endpoint(&server,host.bind_ip,(uint32_t)host.id,1));
    server.lobby_source=&host;server.joined=host.joined;
    assert(lan_server_valid(server.id) && server.id!=host.id);
    /* A delayed packet from an earlier lobby cannot enter this race queue. */
    unsigned char stale_data[8]={0};lan_put32(stale_data,9);lan_put32(stale_data+4,123);
    lan_message(&server,host.id,host.bind_ip,LAN_DATA,lobby^1,stale_data,sizeof stale_data,1);
    assert(!server.packets && !server.packet_bytes);
    assert(lan_send_packet(&host,server.id,"local-client",13,2,9));
    assert(lan_send_packet(&client,server.id,"remote-client",14,2,9));wait_pair(250);
    assert(server.packets && server.packet_tail && server.packets!=server.packet_tail);
    assert(server.packets->sender==host.id && server.packet_tail->sender==client.id);
    assert(!memcmp(server.packets->data,"local-client",13) && !memcmp(server.packet_tail->data,"remote-client",14));
    assert(lan_send_packet(&server,host.id,"server-local",13,2,10));
    assert(lan_send_packet(&server,client.id,"server-remote",14,0,10));wait_pair(250);
    assert(host.packet_tail->sender==server.id && !memcmp(host.packet_tail->data,"server-local",13));
    assert(client.packet_tail->sender==server.id && !memcmp(client.packet_tail->data,"server-remote",14));
    unsigned char udp_limit[1201];memset(udp_limit,0xC7,sizeof udp_limit);
    assert(lan_send_packet(&server,client.id,udp_limit,1200,1,11));
    assert(!lan_send_packet(&server,client.id,udp_limit,1201,0,11));wait_pair(150);
    assert(client.packet_tail->size==1200 && !memcmp(client.packet_tail->data,udp_limit,1200));
    assert(!lan_send_packet(&host,lan_server_id(client.id),"wrong-owner",12,2,0));
    lan_shutdown(&server);assert(h->count==2 && host.joined==lobby);
    lan_leave(&client);wait_pair(200);assert(h->count==1);
    /* Reverse roles through the same production discovery/join paths. */
    lan_leave(&host);wait_pair(100);lan_create(&client,2,8);uint64_t second=client.joined;
    lan_search(&host);lan_udp(&host,client.bind_ip,LAN_QUERY,0,NULL,0);wait_pair(250);
    assert(lan_lobby_find(&host,second));lan_join(&host,second);wait_pair(250);assert(!host.join_call && lan_lobby_find(&client,second)->count==2);
    /* Closing a client without LeaveLobby must not leave a permanent member.
     * Advance just this member's timestamp instead of sleeping for 90 seconds. */
    uint64_t gone=host.id;lan_shutdown(&host);wait_pair(100);
    lan_lobby *owner=lan_lobby_find(&client,second);lan_member *stale=lan_member_find(owner,gone);assert(stale && stale->heard);
    for(int i=0;i<LAN_PEERS*2;++i)if(client.peers[i].id==gone)lan_peer_close(&client.peers[i]);
    stale->heard=lan_now()-90001;client.heartbeat=lan_now()-2001;client.event_read=client.event_write;lan_pump(&client);
    assert(owner->count==1 && !lan_member_find(owner,gone));
    assert(client.event_write-client.event_read==1);lan_event *removed=&client.events[client.event_read%256];
    assert(removed->type==506 && lan_get64(removed->data+8)==gone && lan_get32(removed->data+24)==4);
    lan_shutdown(&client);puts("PASS: discovery, create/join, metadata, ordered TCP, UDP, 900k framing, malformed state, independent race server/local+remote clients, leave, reversed host/client and abrupt disconnect expiry");
    return 0;
}
