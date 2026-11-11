/* Local implementation of the Steam lobby/P2P transport. All calls run under
 * the guest machine lock; sockets never block the game thread. */
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#ifndef LAN_LOG
#define LAN_LOG(...) ((void)0)
#endif
#ifdef _WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>
typedef SOCKET lan_socket;
#define LAN_INVALID INVALID_SOCKET
#define lan_close closesocket
#define LAN_NOSIGNAL 0
static int lan_again(void) { int e = WSAGetLastError(); return e == WSAEWOULDBLOCK || e == WSAEINPROGRESS; }
static void lan_nonblock(lan_socket s) { u_long one = 1; ioctlsocket(s, FIONBIO, &one); }
static uint64_t lan_now(void) { return GetTickCount64(); }
#else
#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <ifaddrs.h>
#include <net/if.h>
#include <netinet/tcp.h>
#include <sys/socket.h>
#include <unistd.h>
typedef int lan_socket;
#define LAN_INVALID (-1)
#define lan_close close
#define LAN_NOSIGNAL MSG_NOSIGNAL
static int lan_again(void) { return errno == EAGAIN || errno == EWOULDBLOCK || errno == EINPROGRESS || errno == EINTR; }
static void lan_nonblock(lan_socket s) { fcntl(s, F_SETFL, fcntl(s, F_GETFL, 0) | O_NONBLOCK); }
static uint64_t lan_now(void) { struct timespec t; clock_gettime(CLOCK_MONOTONIC, &t); return (uint64_t)t.tv_sec * 1000 + t.tv_nsec / 1000000; }
#endif

#define LAN_PORT 29544
#define LAN_PEERS 16
#define LAN_LOBBIES 32
#define LAN_KEYS 48
/* Wire bodies include the four-byte channel; Steam's limits exclude it. */
#define LAN_PACKET_MAX (1024u * 1024u + 4u)
#define LAN_UDP_MAX (1200u + 4u)
#define LAN_QUEUE_MAX (4u * 1024u * 1024u)
#define LAN_HEADER 28u
#define LAN_LOBBY_PREFIX UINT64_C(0x0184000000000000)
enum { LAN_QUERY = 1, LAN_ADVERT, LAN_GET, LAN_JOIN, LAN_STATE, LAN_LEAVE,
       LAN_MEMBER_DATA, LAN_CHAT, LAN_DATA, LAN_PING, LAN_REJECT };
typedef struct { char key[128], value[1024]; } lan_kv;
typedef struct { char key[128], value[1024]; int comparison, numeric; } lan_filter;
typedef struct { uint64_t id; int requested,accepted; } lan_session;
typedef struct { uint64_t id, heard; uint32_t ip; char name[64]; lan_kv data[8]; } lan_member;
typedef struct {
    uint64_t id, owner, heard, server;
    uint32_t ip, server_ip, server_port;
    int limit, joinable, type, count;
    unsigned data_requests; /* Local pending RequestLobbyData completions; not sent on the wire. */
    lan_member members[LAN_PEERS];
    lan_kv data[LAN_KEYS];
} lan_lobby;
typedef struct lan_packet {
    struct lan_packet *next;
    uint64_t sender;
    uint32_t channel, size;
    unsigned char data[];
} lan_packet;
typedef struct {
    lan_socket socket;
    uint64_t id, heard;
    uint32_t ip;
    unsigned char *rx, *tx;
    size_t rx_size, tx_size, tx_offset;
    int outgoing, connecting;
} lan_peer;
typedef struct {
    uint32_t type, size;
    uint64_t call;
    unsigned char data[32];
} lan_event;
typedef struct lan_context {
    lan_socket udp, listener;
    uint32_t bind_ip;
    uint64_t id, joined, next_call, search_call, search_until, join_call, join_until;
    uint64_t advertised, swept, heartbeat;
    int started, search_count, is_server;
    struct lan_context *lobby_source;
    lan_filter filters[16], search_filters[16];
    int filter_count, search_filter_count, filter_slots, search_slots, filter_limit, search_limit;
    uint64_t search_ids[LAN_LOBBIES];
    lan_lobby lobbies[LAN_LOBBIES];
    lan_peer peers[LAN_PEERS * 2];
    lan_session sessions[LAN_PEERS];
    lan_packet *packets, *packet_tail;
    size_t packet_bytes;
    lan_event events[256];
    unsigned event_read, event_write;
    unsigned query_tx, query_rx, advert_tx, advert_rx, udp_errors, udp_drops, get_rx, state_rx;
    unsigned packet_tx,packet_rx,packet_read,packet_accept,connect_errors;
    unsigned end_trace[3][2];
    struct { uint64_t from; uint32_t size; unsigned char data[4096]; } chats[32];
    uint32_t chat_count;
} lan_context;
static lan_context steam_lan;
static lan_context steam_server_lan;

static void lan_put32(void *p, uint32_t v) { unsigned char *b = p; for (int i = 0; i < 4; ++i) b[i] = (unsigned char)(v >> (i * 8)); }
static void lan_put64(void *p, uint64_t v) { lan_put32(p, (uint32_t)v); lan_put32((unsigned char *)p + 4, (uint32_t)(v >> 32)); }
static uint32_t lan_get32(const void *p) { const unsigned char *b = p; return b[0] | (uint32_t)b[1] << 8 | (uint32_t)b[2] << 16 | (uint32_t)b[3] << 24; }
static uint64_t lan_get64(const void *p) { return lan_get32(p) | (uint64_t)lan_get32((const unsigned char *)p + 4) << 32; }
/* End-race packets get a separate bounded budget: normal gameplay must not
 * exhaust the evidence needed to distinguish transport from snapshot timing. */
static void lan_trace_end(lan_context *c, unsigned phase, const void *data, uint32_t size,
    uint32_t channel, int mode, int result)
{
    if (phase >= 3 || size < 4 || size > LAN_PACKET_MAX - 4 || !data) return;
    uint32_t command = lan_get32(data);
    if (command != 817 && command != 826) return;
    unsigned *count = &c->end_trace[phase][command == 826];
    if (*count >= 16) return;
    ++*count;
    const unsigned char *bytes = data;
    uint32_t hash = 2166136261u;
    for (uint32_t i = 0; i < size; ++i) hash = (hash ^ bytes[i]) * 16777619u;
    LAN_LOG("[lan-stats] %s server=%d command=%u size=%u channel=%u mode=%d result=%d hash=%08X n=%u",
        phase == 0 ? "send" : phase == 1 ? "receive" : "read",
        c->is_server, command, size, channel, mode, result, hash, *count);
}
static uint64_t lan_user_id(uint32_t low) { return UINT64_C(0x0110000100000000) | (low ? low : 1); }
static int lan_user_valid(uint64_t id) { return (id >> 32) == 0x01100001u && (uint32_t)id; }
static uint64_t lan_server_id(uint64_t user) { return UINT64_C(0x0130000000000000) | (uint32_t)user; }
static int lan_server_valid(uint64_t id) { return (id >> 32) == 0x01300000u && (uint32_t)id; }
static uint32_t lan_random_identity(void)
{
    uint32_t identity = 0;
#ifdef _WIN32
    FILETIME now; GetSystemTimeAsFileTime(&now);
    static unsigned sequence;
    identity = now.dwLowDateTime ^ now.dwHighDateTime ^ GetCurrentProcessId() ^ ++sequence;
#else
    FILE *r = fopen("/dev/urandom", "rb");
    if (r) { if (fread(&identity, sizeof identity, 1, r) != 1) identity = 0; fclose(r); }
    if (!identity) identity = (uint32_t)getpid() ^ (uint32_t)lan_now();
#endif
    return identity > 1 ? identity : 2;
}
/* The installation's LAN identity survives launches; it is not the save key. */
static uint32_t lan_persistent_identity(const char *path, int *persisted)
{
    unsigned char record[12]; *persisted = 0;
    FILE *f = fopen(path, "rb");
    if (f) {
        int valid = fread(record, 1, sizeof record, f) == sizeof record && fgetc(f) == EOF;
        fclose(f);
        uint32_t id = valid ? lan_get32(record + 4) : 0;
        if (valid && !memcmp(record, "CDLI", 4) && id > 1 && lan_get32(record + 8) == ~id) {
            *persisted = 1; return id;
        }
    }
    uint32_t id = lan_random_identity();
    char temp[2048];
    int length = snprintf(temp, sizeof temp, "%s.tmp", path);
    if (length < 0 || (size_t)length >= sizeof temp) return id;
    memcpy(record, "CDLI", 4); lan_put32(record + 4, id); lan_put32(record + 8, ~id);
    f = fopen(temp, "wb"); if (!f) return id;
    int ok = fwrite(record, 1, sizeof record, f) == sizeof record && !fflush(f);
#ifndef _WIN32
    if (ok) ok = fsync(fileno(f)) == 0;
#endif
    if (fclose(f)) ok = 0;
#ifdef _WIN32
    if (ok) ok = MoveFileExA(temp, path, MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH) != 0;
#else
    if (ok) ok = rename(temp, path) == 0;
#endif
    if (!ok) remove(temp);
    *persisted = ok; return id;
}
static void lan_event_add(lan_context *c, uint32_t type, uint64_t call, const void *data, uint32_t size)
{
    if(type==505 && size==24)for(unsigned i=c->event_read;i!=c->event_write;++i){
        lan_event *e=&c->events[i%256];if(e->type==type && !e->call && !memcmp(e->data,data,16)){memcpy(e->data,data,size);return;}
    }
    if (size > 32 || c->event_write - c->event_read == 256) return;
    lan_event *e = &c->events[c->event_write++ % 256];
    memset(e, 0, sizeof *e); e->type = type; e->call = call; e->size = size;
    memcpy(e->data, data, size);
}
static void lan_event_enter(lan_context *c, uint64_t lobby, uint64_t call, uint32_t response)
{
    unsigned char p[24] = {0}; lan_put64(p, lobby); lan_put32(p + 16, response);
    lan_event_add(c, 504, call, p, sizeof p);
}
static void lan_event_member(lan_context *c, uint64_t lobby, uint64_t member, uint32_t change)
{
    unsigned char p[32] = {0}; lan_put64(p, lobby); lan_put64(p + 8, member);
    lan_put64(p + 16, member); lan_put32(p + 24, change); lan_event_add(c, 506, 0, p, sizeof p);
}
static void lan_event_data(lan_context *c, uint64_t lobby, uint64_t member)
{
    unsigned char p[24] = {0}; lan_put64(p, lobby); lan_put64(p + 8, member); p[16] = 1;
    lan_event_add(c, 505, 0, p, sizeof p);
}
static lan_lobby *lan_lobby_find(lan_context *c, uint64_t id)
{
    if (c->lobby_source) return lan_lobby_find(c->lobby_source, id);
    if (!id) return NULL;
    for (int i = 0; i < LAN_LOBBIES; ++i) if (c->lobbies[i].id == id) return &c->lobbies[i];
    return NULL;
}
static lan_lobby *lan_lobby_slot(lan_context *c, uint64_t id)
{
    lan_lobby *l = lan_lobby_find(c, id); if (l) return l;
    for (int i = 0; i < LAN_LOBBIES; ++i)
        if (!c->lobbies[i].id || (c->lobbies[i].id != c->joined && lan_now() - c->lobbies[i].heard > 15000)) {
            memset(&c->lobbies[i], 0, sizeof c->lobbies[i]); c->lobbies[i].id = id; return &c->lobbies[i];
        }
    return NULL;
}
static lan_member *lan_member_find(lan_lobby *l, uint64_t id)
{
    if (l) for (int i = 0; i < l->count; ++i) if (l->members[i].id == id) return &l->members[i];
    return NULL;
}
static lan_member *lan_endpoint_member(lan_lobby *l, uint64_t id)
{
    return lan_member_find(l, l && id == lan_server_id(l->owner) ? l->owner : id);
}
static lan_session *lan_session_find(lan_context *c,uint64_t id,int create)
{
    for(int i=0;i<LAN_PEERS;++i)if(c->sessions[i].id==id)return &c->sessions[i];
    if(create && id)for(int i=0;i<LAN_PEERS;++i)if(!c->sessions[i].id){c->sessions[i].id=id;return &c->sessions[i];}
    return NULL;
}
static lan_kv *lan_key(lan_kv *v, int n, const char *key, int create)
{
    if (!key || !*key || strlen(key) >= sizeof v[0].key) return NULL;
    for (int i = 0; i < n; ++i) if (!strcmp(v[i].key, key)) return &v[i];
    if (create) for (int i = 0; i < n; ++i) if (!v[i].key[0]) { strcpy(v[i].key, key); return &v[i]; }
    return NULL;
}
static int lan_set_key(lan_kv *v, int n, const char *key, const char *value)
{
    if (!value || strlen(value) >= sizeof v[0].value) return 0;
    lan_kv *kv = lan_key(v, n, key, 1); if (!kv) return 0;
    strcpy(kv->value, value); return 1;
}
static int lan_search_match(lan_context *c,lan_lobby *l)
{
    if(l->limit-l->count<c->search_slots)return 0;
    for(int i=0;i<c->search_filter_count;++i){
        lan_filter *f=&c->search_filters[i];lan_kv *kv=lan_key(l->data,LAN_KEYS,f->key,0);if(!kv)return 0;
        int d;if(f->numeric){long long a=strtoll(kv->value,NULL,10),b=strtoll(f->value,NULL,10);d=(a>b)-(a<b);}else d=strcmp(kv->value,f->value);
        int pass=f->comparison==-2?d<=0:f->comparison==-1?d<0:f->comparison==0?d==0:f->comparison==1?d>0:f->comparison==2?d>=0:f->comparison==3?d!=0:0;
        if(!pass)return 0;
    }return 1;
}
static void lan_peer_close(lan_peer *p)
{
    if (p->socket != LAN_INVALID) lan_close(p->socket);
    free(p->rx); free(p->tx); memset(p, 0, sizeof *p); p->socket = LAN_INVALID;
}
static int lan_init_endpoint(lan_context *c, uint32_t bind_ip, uint32_t identity, int server)
{
    if (c->started) return c->started > 0;
    c->started = -1; c->udp = c->listener = LAN_INVALID;
    for (int i = 0; i < LAN_PEERS * 2; ++i) c->peers[i].socket = LAN_INVALID;
#ifdef _WIN32
    WSADATA w; if (WSAStartup(MAKEWORD(2,2), &w)) return 0;
#endif
    c->bind_ip = bind_ip;
    if (!identity) identity = lan_random_identity();
    c->id = server ? lan_server_id(identity) : lan_user_id(identity); c->next_call = 1; c->is_server = server;
    c->udp = socket(AF_INET, SOCK_DGRAM, 0); c->listener = socket(AF_INET, SOCK_STREAM, 0);
    if (c->udp == LAN_INVALID || c->listener == LAN_INVALID) goto fail;
    int one = 1; setsockopt(c->udp, SOL_SOCKET, SO_BROADCAST, (const char *)&one, sizeof one);
    setsockopt(c->listener, SOL_SOCKET, SO_REUSEADDR, (const char *)&one, sizeof one);
    struct sockaddr_in a = {0}; a.sin_family = AF_INET; a.sin_port = htons(LAN_PORT + server); a.sin_addr.s_addr = bind_ip;
    if (bind(c->udp, (struct sockaddr *)&a, sizeof a) || bind(c->listener, (struct sockaddr *)&a, sizeof a) || listen(c->listener, LAN_PEERS)) goto fail;
    lan_nonblock(c->udp); lan_nonblock(c->listener); c->started = 1; return 1;
fail:
    if (c->udp != LAN_INVALID) lan_close(c->udp);
    if (c->listener != LAN_INVALID) lan_close(c->listener);
    c->udp = c->listener = LAN_INVALID; return 0;
}
static int lan_init(lan_context *c, uint32_t bind_ip, uint32_t identity) { return lan_init_endpoint(c,bind_ip,identity,0); }
static void lan_shutdown(lan_context *c)
{
    if (!c->started) return;
    for (int i = 0; i < LAN_PEERS * 2; ++i) lan_peer_close(&c->peers[i]);
    if (c->udp != LAN_INVALID) lan_close(c->udp);
    if (c->listener != LAN_INVALID) lan_close(c->listener);
    while (c->packets) { lan_packet *p = c->packets; c->packets = p->next; free(p); }
    memset(c, 0, sizeof *c);
}
static void lan_header(unsigned char *p, int type, uint64_t id, uint64_t lobby, uint32_t size)
{
    memcpy(p, "CDL1", 4); lan_put32(p + 4, (uint32_t)type); lan_put64(p + 8, id);
    lan_put64(p + 16, lobby); lan_put32(p + 24, size);
}
static int lan_udp_port(lan_context *c, uint32_t ip, unsigned port, int type, uint64_t lobby, const void *data, uint32_t size)
{
    if (size > LAN_UDP_MAX || c->started != 1) return 0;
    unsigned char p[LAN_HEADER + LAN_UDP_MAX]; lan_header(p, type, c->id, lobby, size);
    if (size) memcpy(p + LAN_HEADER, data, size);
    struct sockaddr_in a = {0}; a.sin_family = AF_INET; a.sin_port = htons(port); a.sin_addr.s_addr = ip;
    int ok = sendto(c->udp, (const char *)p, LAN_HEADER + size, LAN_NOSIGNAL, (struct sockaddr *)&a, sizeof a) == (int)(LAN_HEADER + size);
    if (ok) { if (type == LAN_QUERY) ++c->query_tx; if (type == LAN_ADVERT) ++c->advert_tx; }
    else if (++c->udp_errors <= 4) {
#ifdef _WIN32
        LAN_LOG("[lan] UDP send failed type=%d error=%d", type, WSAGetLastError());
#else
        LAN_LOG("[lan] UDP send failed type=%d error=%d", type, errno);
#endif
    }
    return ok;
}
static int lan_udp(lan_context *c, uint32_t ip, int type, uint64_t lobby, const void *data, uint32_t size)
{ return lan_udp_port(c,ip,LAN_PORT,type,lobby,data,size); }
static void lan_discover(lan_context *c)
{
    lan_udp(c, INADDR_BROADCAST, LAN_QUERY, 0, NULL, 0);
#ifndef _WIN32
    if (lan_now() - c->swept < 3000) return;
    c->swept = lan_now();
    struct ifaddrs *all = NULL;
    if (getifaddrs(&all)) { LAN_LOG("[lan] discover interfaces failed errno=%d query_tx=%u", errno, c->query_tx); return; }
    unsigned interfaces = 0;
    for (struct ifaddrs *i = all; i; i = i->ifa_next) {
        if (!i->ifa_addr || i->ifa_addr->sa_family != AF_INET || !(i->ifa_flags & IFF_UP) || i->ifa_flags & IFF_LOOPBACK) continue;
        ++interfaces;
        uint32_t ip = ntohl(((struct sockaddr_in *)i->ifa_addr)->sin_addr.s_addr);
        if (i->ifa_broadaddr) lan_udp(c, ((struct sockaddr_in *)i->ifa_broadaddr)->sin_addr.s_addr, LAN_QUERY, 0, NULL, 0);
        for (unsigned host = 1; host < 255; ++host) if ((ip & 255u) != host)
            lan_udp(c, htonl((ip & 0xffffff00u) | host), LAN_QUERY, 0, NULL, 0);
    }
    freeifaddrs(all);
    LAN_LOG("[lan] discover interfaces=%u query_tx=%u send_errors=%u", interfaces, c->query_tx, c->udp_errors);
#endif
}
static uint32_t lan_peer_ip(lan_context *c, uint64_t id)
{
    if ((uint32_t)id == (uint32_t)c->id) return c->bind_ip ? c->bind_ip : htonl(INADDR_LOOPBACK);
    lan_context *directory = c->lobby_source ? c->lobby_source : c;
    for (int i = 0; i < LAN_LOBBIES; ++i) {
        lan_lobby *l = &directory->lobbies[i];
        if (l->owner == id || (l->owner && lan_server_id(l->owner) == id)) return l->ip;
        lan_member *m = lan_member_find(l, id); if (m && m->ip) return m->ip;
    }
    for (int i = 0; i < LAN_PEERS * 2; ++i) if (c->peers[i].id == id) return c->peers[i].ip;
    return 0;
}
static lan_peer *lan_connect(lan_context *c, uint64_t id, uint32_t ip)
{
    if (!ip || id == c->id || (!lan_user_valid(id) && !lan_server_valid(id))) return NULL;
    for (int i = 0; i < LAN_PEERS * 2; ++i) if (c->peers[i].socket != LAN_INVALID && c->peers[i].outgoing && c->peers[i].id == id) return &c->peers[i];
    for (int i = 0; i < LAN_PEERS * 2; ++i) if (c->peers[i].socket == LAN_INVALID) {
        lan_peer *p = &c->peers[i]; p->socket = socket(AF_INET, SOCK_STREAM, 0);
        if (p->socket == LAN_INVALID) return NULL;
        lan_nonblock(p->socket); int one = 1;
        setsockopt(p->socket, IPPROTO_TCP, TCP_NODELAY, (const char *)&one, sizeof one);
        if (c->bind_ip) { struct sockaddr_in local = {0}; local.sin_family = AF_INET; local.sin_addr.s_addr = c->bind_ip; bind(p->socket, (struct sockaddr *)&local, sizeof local); }
        struct sockaddr_in a = {0}; a.sin_family = AF_INET; a.sin_port = htons(LAN_PORT + lan_server_valid(id)); a.sin_addr.s_addr = ip;
        if (connect(p->socket, (struct sockaddr *)&a, sizeof a)) {
            if (!lan_again()) { if(++c->connect_errors<=4)LAN_LOG("[lan] P2P connect failed local_server=%d remote_server=%d",c->is_server,lan_server_valid(id));lan_peer_close(p); return NULL; }
            p->connecting=1;
        }
        p->id = id; p->ip = ip; p->heard = lan_now(); p->outgoing = 1; return p;
    }
    return NULL;
}
static int lan_send(lan_context *c, uint64_t id, uint32_t ip, int type, uint64_t lobby, const void *data, uint32_t size)
{
    if (size > LAN_PACKET_MAX) return 0;
    lan_peer *p = lan_connect(c, id, ip); if (!p) return 0;
    if (p->tx_size - p->tx_offset + size + LAN_HEADER > LAN_QUEUE_MAX) return 0;
    if (p->tx_offset) { memmove(p->tx, p->tx + p->tx_offset, p->tx_size - p->tx_offset); p->tx_size -= p->tx_offset; p->tx_offset = 0; }
    unsigned char *q = realloc(p->tx, p->tx_size + LAN_HEADER + size); if (!q) return 0;
    p->tx = q; lan_header(q + p->tx_size, type, c->id, lobby, size);
    if (size) memcpy(q + p->tx_size + LAN_HEADER, data, size);
    p->tx_size += LAN_HEADER + size; return 1;
}
/* Snapshots use explicit little-endian integers and length-prefixed strings;
 * no network-controlled size reaches an unchecked allocation or guest copy. */
typedef struct { unsigned char *p, *end; int ok; } lan_cursor;
static void lan_bytes(lan_cursor *w, const void *p, size_t n)
{
    if (!w->ok || n > (size_t)(w->end - w->p)) { w->ok = 0; return; } memcpy(w->p, p, n); w->p += n;
}
static void lan_write32(lan_cursor *w, uint32_t v) { unsigned char p[4]; lan_put32(p,v); lan_bytes(w,p,4); }
static void lan_write64(lan_cursor *w, uint64_t v) { unsigned char p[8]; lan_put64(p,v); lan_bytes(w,p,8); }
static uint32_t lan_read32(lan_cursor *r) { if (!r->ok || r->end-r->p < 4) { r->ok=0; return 0; } uint32_t v=lan_get32(r->p); r->p+=4; return v; }
static uint64_t lan_read64(lan_cursor *r) { uint64_t lo=lan_read32(r); return lo | (uint64_t)lan_read32(r)<<32; }
static void lan_write_text(lan_cursor *w, const char *s) { uint32_t n=(uint32_t)strlen(s); lan_write32(w,n); lan_bytes(w,s,n); }
static void lan_read_text(lan_cursor *r, char *s, size_t cap)
{
    uint32_t n=lan_read32(r); if (!r->ok || n>=cap || n>(size_t)(r->end-r->p) || memchr(r->p,0,n)) { r->ok=0; return; }
    memcpy(s,r->p,n); s[n]=0; r->p+=n;
}
static void lan_write_keys(lan_cursor *w, lan_kv *kv, int count)
{
    int n=0; for(int i=0;i<count;++i) if(kv[i].key[0]) ++n; lan_write32(w,n);
    for(int i=0;i<count;++i) if(kv[i].key[0]) { lan_write_text(w,kv[i].key); lan_write_text(w,kv[i].value); }
}
static void lan_read_keys(lan_cursor *r, lan_kv *kv, int count)
{
    uint32_t n=lan_read32(r); if(n>(uint32_t)count) {r->ok=0; return;}
    for(uint32_t i=0;i<n && r->ok;++i) {lan_read_text(r,kv[i].key,sizeof kv[i].key); lan_read_text(r,kv[i].value,sizeof kv[i].value); if(!kv[i].key[0]) r->ok=0;}
}
static int lan_snapshot(lan_lobby *l, unsigned char *data, size_t cap)
{
    lan_cursor w={data,data+cap,1}; lan_write64(&w,l->owner); lan_write32(&w,l->limit);
    lan_write32(&w,l->joinable); lan_write32(&w,l->type); lan_write32(&w,l->count);
    lan_write64(&w,l->server);lan_write32(&w,l->server_ip);lan_write32(&w,l->server_port);
    for(int i=0;i<l->count;++i) {lan_member *m=&l->members[i]; lan_write64(&w,m->id); lan_write32(&w,ntohl(m->ip)); lan_write_text(&w,m->name); lan_write_keys(&w,m->data,8);}
    lan_write_keys(&w,l->data,LAN_KEYS); return w.ok?(int)(w.p-data):0;
}
static void lan_publish(lan_context *c, lan_lobby *l, uint64_t only, uint32_t ip)
{
    unsigned char *data=malloc(262144); if(!data) return;
    int size=lan_snapshot(l,data,262144);
    if(size) {
        if(only) lan_send(c,only,ip,LAN_STATE,l->id,data,size);
        else for(int i=0;i<l->count;++i) if(l->members[i].id!=c->id)
            lan_send(c,l->members[i].id,l->members[i].ip,LAN_STATE,l->id,data,size);
    }
    free(data);
}
static int lan_receive_state(lan_context *c,uint64_t id,uint64_t from,uint32_t ip,const unsigned char *data,uint32_t size)
{
    if((id & UINT64_C(0xffffffff00000000))!=LAN_LOBBY_PREFIX) return 0;
    lan_lobby *next=calloc(1,sizeof *next); if(!next) return 0;
    lan_cursor r={(unsigned char *)data,(unsigned char *)data+size,1};
    next->id=id; next->owner=lan_read64(&r); next->limit=(int)lan_read32(&r);
    next->joinable=(int)lan_read32(&r); next->type=(int)lan_read32(&r); next->count=(int)lan_read32(&r);
    next->server=lan_read64(&r);next->server_ip=lan_read32(&r);next->server_port=lan_read32(&r);
    if(next->owner!=from || next->limit<1 || next->limit>LAN_PEERS || next->count<1 || next->count>next->limit || next->joinable>1 || next->joinable<0) r.ok=0;
    for(int i=0;i<next->count && r.ok;++i) {
        lan_member *m=&next->members[i]; m->id=lan_read64(&r); m->ip=htonl(lan_read32(&r));
        lan_read_text(&r,m->name,sizeof m->name); lan_read_keys(&r,m->data,8);
        if(!lan_user_valid(m->id)) r.ok=0;
        for(int j=0;j<i;++j) if(next->members[j].id==m->id) r.ok=0;
        if(m->id==from) m->ip=ip;
    }
    lan_read_keys(&r,next->data,LAN_KEYS);
    if(!r.ok || r.p!=r.end || !lan_member_find(next,from)) {free(next);return 0;}
    lan_lobby *old=lan_lobby_slot(c,id); if(!old || (old->owner && old->owner!=from)) {free(next);return 0;}
    int changed=memcmp(old->data,next->data,sizeof old->data)!=0;
    unsigned requested=old->data_requests;
    next->data_requests=requested?requested-1:0;
    int server_changed=old->server!=next->server || old->server_ip!=next->server_ip || old->server_port!=next->server_port;
    if(c->joined==id) {
        for(int i=0;i<next->count;++i) if(!lan_member_find(old,next->members[i].id)) lan_event_member(c,id,next->members[i].id,1);
        for(int i=0;i<old->count;++i) if(!lan_member_find(next,old->members[i].id)) lan_event_member(c,id,old->members[i].id,2);
        for(int i=0;i<next->count;++i){lan_member *m=lan_member_find(old,next->members[i].id);if(m && memcmp(m->data,next->members[i].data,sizeof m->data))lan_event_data(c,id,m->id);}
    }
    next->heard=lan_now();next->ip=ip; *old=*next;free(next);
    if(c->join_call && c->joined==id && lan_member_find(old,c->id)) {lan_event_enter(c,id,c->join_call,1);c->join_call=0;}
    if(changed || requested)lan_event_data(c,id,id);
    if(server_changed){unsigned char p[24]={0};lan_put64(p,id);lan_put64(p+8,old->server);lan_put32(p+16,old->server_ip);lan_put32(p+20,old->server_port);lan_event_add(c,509,0,p,24);}
    return 1;
}
static void lan_packet_queue(lan_context *c,uint64_t from,uint32_t channel,const unsigned char *data,uint32_t size)
{
    if(size>LAN_PACKET_MAX-4 || c->packet_bytes+size+sizeof(lan_packet)>LAN_QUEUE_MAX) return;
    lan_packet *p=malloc(sizeof *p+size);if(!p)return;
    p->next=NULL;p->sender=from;p->channel=channel;p->size=size;memcpy(p->data,data,size);
    if(c->packet_tail)c->packet_tail->next=p;else c->packets=p;c->packet_tail=p;c->packet_bytes+=size+sizeof(lan_packet);
}
static void lan_message(lan_context *c,uint64_t from,uint32_t ip,int type,uint64_t lobby,const unsigned char *data,uint32_t size,int reliable)
{
    if((!lan_user_valid(from) && !lan_server_valid(from))||from==c->id)return;
    lan_lobby *l=lan_lobby_find(c,lobby),*own=lan_lobby_find(c,c->joined);
    if (c->is_server && type != LAN_DATA && type != LAN_PING) return;
    if (lan_server_valid(from) && (!own || from != lan_server_id(own->owner) || (type != LAN_DATA && type != LAN_PING))) return;
    /* Membership survives reconnects, so its liveness must survive socket close. */
    lan_member *member=lan_member_find(l,from);
    if(reliable && member)member->heard=lan_now();
    switch(type) {
    case LAN_QUERY:
        if (++c->query_rx <= 8) LAN_LOG("[lan] query received #%u own=%d joinable=%d", c->query_rx, own && own->owner==c->id, own?own->joinable:0);
        if(!size && own && own->owner==c->id && own->joinable) lan_udp(c,ip,LAN_ADVERT,own->id,NULL,0);
        break;
    case LAN_ADVERT:
        ++c->advert_rx;
        if(!size && (lobby & UINT64_C(0xffffffff00000000))==LAN_LOBBY_PREFIX && c->search_call) lan_send(c,from,ip,LAN_GET,lobby,NULL,0);
        break;
    case LAN_GET:
        if (++c->get_rx <= 8) LAN_LOG("[lan] metadata requested #%u own=%d reliable=%d", c->get_rx, l && l->owner==c->id, reliable);
        if(reliable && !size && l && l->owner==c->id) lan_publish(c,l,from,ip);
        break;
    case LAN_JOIN:
        if(!reliable || !l || l->owner!=c->id || size>=64 || memchr(data,0,size)) break;
        if(!lan_member_find(l,from)) {
            if(!l->joinable || l->count>=l->limit) {unsigned char code[4];lan_put32(code,l->joinable?4:2);lan_send(c,from,ip,LAN_REJECT,lobby,code,4);break;}
            lan_member *m=&l->members[l->count++];memset(m,0,sizeof *m);m->id=from;m->heard=lan_now();m->ip=ip;memcpy(m->name,data,size);
            lan_event_member(c,lobby,from,1);
        }
        lan_publish(c,l,0,0); break;
    case LAN_STATE:
        if(reliable) {int ok=lan_receive_state(c,lobby,from,ip,data,size); if (++c->state_rx <= 8) LAN_LOG("[lan] metadata received #%u accepted=%d bytes=%u searching=%d", c->state_rx,ok,size,c->search_call!=0);}
        break;
    case LAN_REJECT:
        if(reliable && l && l->owner==from && c->joined==lobby && c->join_call && size==4) {lan_event_enter(c,lobby,c->join_call,lan_get32(data));c->join_call=0;c->joined=0;} break;
    case LAN_LEAVE:
        if(!reliable || size || !l || !lan_member_find(l,from)) break;
        if(l->owner==c->id) {
            for(int i=0;i<l->count;++i)if(l->members[i].id==from){memmove(&l->members[i],&l->members[i+1],(l->count-i-1)*sizeof l->members[0]);--l->count;break;}
            lan_event_member(c,lobby,from,2);lan_publish(c,l,0,0);
        } else if(l->owner==from) {lan_event_member(c,lobby,from,4); if(c->joined==lobby)c->joined=0;memset(l,0,sizeof *l);} break;
    case LAN_MEMBER_DATA:
        if(reliable && l && l->owner==c->id && lan_member_find(l,from)) {
            lan_member *m=lan_member_find(l,from);lan_kv kv[8]={0};lan_cursor r={(unsigned char*)data,(unsigned char*)data+size,1};lan_read_keys(&r,kv,8);
            if(r.ok && r.p==r.end){memcpy(m->data,kv,sizeof kv);lan_event_data(c,lobby,from);lan_publish(c,l,0,0);}
        } break;
    case LAN_CHAT:
        if(!reliable || !l || !lan_member_find(l,from) || size>4096)break;
        {
            uint32_t entry=c->chat_count++; unsigned slot=entry%32;
            c->chats[slot].from=from;c->chats[slot].size=size;memcpy(c->chats[slot].data,data,size);
            unsigned char event[24]={0};lan_put64(event,lobby);lan_put64(event+8,from);event[16]=1;lan_put32(event+20,entry);lan_event_add(c,507,0,event,24);
        } break;
    case LAN_DATA:
        if(size>=4 && own && lobby==c->joined && lan_endpoint_member(own,from)) {
            lan_session *s=lan_session_find(c,from,1);if(!s)break;
            if(++c->packet_rx<=24)LAN_LOG("[lan] P2P receive server=%d from_server=%d size=%u command=%u accepted=%d",c->is_server,lan_server_valid(from),size-4,size>=8?lan_get32(data+4):0,s->accepted);
            if(!s->accepted && !s->requested){unsigned char p[8];lan_put64(p,from);lan_event_add(c,1202,0,p,8);s->requested=1;}
            size_t previous_bytes=c->packet_bytes;
            lan_packet_queue(c,from,lan_get32(data),data+4,size-4);
            lan_trace_end(c,1,data+4,size-4,lan_get32(data),reliable?2:0,c->packet_bytes!=previous_bytes);
        } else if(size>=4) lan_trace_end(c,1,data+4,size-4,lan_get32(data),reliable?2:0,0);
        break;
    case LAN_PING: break;
    }
}
static void lan_leave(lan_context *c)
{
    lan_lobby *l=lan_lobby_find(c,c->joined);
    if(l) {
        if(l->owner==c->id) {for(int i=0;i<l->count;++i)if(l->members[i].id!=c->id)lan_send(c,l->members[i].id,l->members[i].ip,LAN_LEAVE,l->id,NULL,0);}
        else lan_send(c,l->owner,l->ip,LAN_LEAVE,l->id,NULL,0);
        memset(l,0,sizeof *l);
    }
    c->joined=0;c->join_call=0;
    memset(c->sessions,0,sizeof c->sessions);
    while(c->packets){lan_packet *p=c->packets;c->packets=p->next;free(p);}c->packet_tail=NULL;c->packet_bytes=0;
}
static uint64_t lan_create(lan_context *c,int type,int limit)
{
    uint64_t call=c->next_call++;unsigned char event[16]={0};
    if(c->started!=1 || limit<1 || limit>LAN_PEERS){lan_put32(event,2);lan_event_add(c,513,call,event,16);return call;}
    /* MPBrowser 005334D0 requires the lobby instance flag, not just chat type8. */
    lan_leave(c);uint64_t id=LAN_LOBBY_PREFIX|(uint32_t)c->id;
    lan_lobby *l=lan_lobby_slot(c,id);if(!l){lan_put32(event,2);lan_event_add(c,513,call,event,16);return call;}
    l->owner=c->id;l->heard=lan_now();l->ip=c->bind_ip;l->limit=limit;l->type=type;l->joinable=1;l->count=1;
    l->members[0].id=c->id;l->members[0].ip=c->bind_ip;snprintf(l->members[0].name,64,"LAN %04X",(unsigned)c->id&65535);
    c->joined=id;lan_put32(event,1);lan_put64(event+8,id);lan_event_add(c,513,call,event,16);lan_event_enter(c,id,0,1);return call;
}
static uint64_t lan_search(lan_context *c)
{
    c->search_call=c->next_call++;c->search_until=lan_now()+1500;c->search_count=0;
    memcpy(c->search_filters,c->filters,sizeof c->filters);c->search_filter_count=c->filter_count;c->filter_count=0;
    c->search_slots=c->filter_slots;c->filter_slots=0;c->search_limit=c->filter_limit>0?c->filter_limit:LAN_LOBBIES;c->filter_limit=0;
    LAN_LOG("[lan] search start filters=%d slots=%d limit=%d", c->search_filter_count,c->search_slots,c->search_limit);
    for(int i=0;i<c->search_filter_count;++i)LAN_LOG("[lan] search filter %s op=%d value=%s numeric=%d",c->search_filters[i].key,c->search_filters[i].comparison,c->search_filters[i].value,c->search_filters[i].numeric);
    lan_discover(c);return c->search_call;
}
static uint64_t lan_join(lan_context *c,uint64_t id)
{
    lan_leave(c);uint64_t call=c->next_call++;lan_lobby *l=lan_lobby_find(c,id);
    if(!l || !l->owner){lan_event_enter(c,id,call,2);return call;}
    char name[64];snprintf(name,sizeof name,"LAN %04X",(unsigned)c->id&65535);
    if(!lan_send(c,l->owner,l->ip,LAN_JOIN,id,name,(uint32_t)strlen(name))){lan_event_enter(c,id,call,2);return call;}
    c->joined=id;c->join_call=call;c->join_until=lan_now()+10000;return call;
}
static void lan_pump(lan_context *c)
{
    if(c->started!=1)return;
    if(c->lobby_source)c->joined=c->lobby_source->joined;
    for(int i=0;i<LAN_PEERS*2;++i) {
        struct sockaddr_in a;int n=sizeof a;
#ifndef _WIN32
        socklen_t sn=sizeof a;lan_socket s=accept(c->listener,(struct sockaddr *)&a,&sn);
#else
        lan_socket s=accept(c->listener,(struct sockaddr *)&a,&n);
#endif
        if(s==LAN_INVALID)break;
        lan_peer *p=NULL;for(int j=0;j<LAN_PEERS*2;++j)if(c->peers[j].socket==LAN_INVALID){p=&c->peers[j];break;}
        if(!p){lan_close(s);break;}
        p->socket=s;p->ip=a.sin_addr.s_addr;p->heard=lan_now();lan_nonblock(s);
    }
    for(int i=0;i<128;++i) {
        unsigned char data[LAN_HEADER+LAN_UDP_MAX];struct sockaddr_in a;
#ifdef _WIN32
        int alen=sizeof a;
#else
        socklen_t alen=sizeof a;
#endif
        int n=recvfrom(c->udp,(char*)data,sizeof data,0,(struct sockaddr *)&a,&alen);if(n<0)break;
        if(n<(int)LAN_HEADER || memcmp(data,"CDL1",4) || lan_get32(data+24)!=(uint32_t)n-LAN_HEADER){++c->udp_drops;continue;}
        int type=(int)lan_get32(data+4);if(type!=LAN_QUERY && type!=LAN_ADVERT && type!=LAN_DATA){++c->udp_drops;continue;}
        lan_message(c,lan_get64(data+8),a.sin_addr.s_addr,type,lan_get64(data+16),data+LAN_HEADER,n-LAN_HEADER,0);
    }
    for(int i=0;i<LAN_PEERS*2;++i) {
        lan_peer *p=&c->peers[i];if(p->socket==LAN_INVALID)continue;
        if(lan_now()-p->heard>30000 && !lan_endpoint_member(lan_lobby_find(c,c->joined),p->id)){lan_peer_close(p);continue;}
        if(p->connecting){
            fd_set ready,failed;FD_ZERO(&ready);FD_ZERO(&failed);FD_SET(p->socket,&ready);FD_SET(p->socket,&failed);struct timeval zero={0};
            int result=select((int)p->socket+1,NULL,&ready,&failed,&zero);
            if(result<0 || FD_ISSET(p->socket,&failed) || lan_now()-p->heard>10000){lan_peer_close(p);continue;}
            if(!FD_ISSET(p->socket,&ready))continue;
            int error=0;
#ifdef _WIN32
            int error_size=sizeof error;
#else
            socklen_t error_size=sizeof error;
#endif
            if(getsockopt(p->socket,SOL_SOCKET,SO_ERROR,(char*)&error,&error_size)||error){if(++c->connect_errors<=4)LAN_LOG("[lan] P2P connect completion failed server=%d error=%d",c->is_server,error);lan_peer_close(p);continue;}
            p->connecting=0;
        }
        if(p->tx_offset<p->tx_size) {
            int n=send(p->socket,(const char*)p->tx+p->tx_offset,(int)(p->tx_size-p->tx_offset),LAN_NOSIGNAL);
            if(n>0){p->tx_offset+=n;if(p->tx_offset==p->tx_size){free(p->tx);p->tx=NULL;p->tx_offset=p->tx_size=0;}}
            else if(n<0 && !lan_again()){lan_peer_close(p);continue;}
        }
        for(int pass=0;pass<32;++pass) {
            unsigned char chunk[16384];int n=recv(p->socket,(char*)chunk,sizeof chunk,0);
            if(n==0){lan_peer_close(p);break;}
            if(n<0){if(!lan_again())lan_peer_close(p);break;}
            if(p->rx_size+(size_t)n>LAN_PACKET_MAX+LAN_HEADER+sizeof chunk){lan_peer_close(p);break;}
            unsigned char *q=realloc(p->rx,p->rx_size+n);if(!q){lan_peer_close(p);break;}p->rx=q;memcpy(q+p->rx_size,chunk,n);p->rx_size+=n;
            while(p->rx_size>=LAN_HEADER) {
                uint32_t size=lan_get32(p->rx+24);uint64_t from=lan_get64(p->rx+8);
                if(memcmp(p->rx,"CDL1",4)||size>LAN_PACKET_MAX||(!lan_user_valid(from) && !lan_server_valid(from))||(p->id && p->id!=from)||from==c->id){lan_peer_close(p);break;}
                if(p->rx_size<LAN_HEADER+size)break;
                p->id=from;p->heard=lan_now();
                lan_message(c,from,p->ip,(int)lan_get32(p->rx+4),lan_get64(p->rx+16),p->rx+LAN_HEADER,size,1);
                memmove(p->rx,p->rx+LAN_HEADER+size,p->rx_size-LAN_HEADER-size);p->rx_size-=LAN_HEADER+size;
            }
            if(p->socket==LAN_INVALID)break;
        }
    }
    uint64_t now=lan_now();
    if(c->search_call && now>=c->search_until){
        int cached=0, rejected=0;
        for(int i=0;i<LAN_LOBBIES && c->search_count<c->search_limit;++i){lan_lobby *l=&c->lobbies[i];if(l->id && l->owner && l->joinable && now-l->heard<10000){++cached;if(lan_search_match(c,l))c->search_ids[c->search_count++]=l->id;else ++rejected;}}
        LAN_LOG("[lan] search end found=%d cached=%d filtered=%d query=%u/%u advert=%u/%u state=%u udp_errors=%u drops=%u", c->search_count,cached,rejected,c->query_tx,c->query_rx,c->advert_tx,c->advert_rx,c->state_rx,c->udp_errors,c->udp_drops);
        unsigned char p[4];lan_put32(p,c->search_count);lan_event_add(c,510,c->search_call,p,4);c->search_call=0;
    }
    if(c->join_call && now>=c->join_until){lan_event_enter(c,c->joined,c->join_call,2);c->join_call=0;c->joined=0;}
    lan_lobby *l=lan_lobby_find(c,c->joined);
    if(!c->is_server && l && now-c->heartbeat>=2000){c->heartbeat=now;
        if(l->owner==c->id){l->heard=now;
            for(int j=l->count-1;j>=0;--j)if(l->members[j].id!=c->id){
                if(now-l->members[j].heard>90000){lan_event_member(c,l->id,l->members[j].id,4);memmove(&l->members[j],&l->members[j+1],(l->count-j-1)*sizeof l->members[0]);--l->count;}
            }
            lan_publish(c,l,0,0);
        } else if(now-l->heard>90000){lan_event_member(c,l->id,l->owner,4);c->joined=0;}
        else lan_send(c,l->owner,l->ip,LAN_PING,l->id,NULL,0);
    }
}
static int lan_send_packet(lan_context *c,uint64_t to,const void *data,uint32_t size,int mode,uint32_t channel)
{
    if(c->lobby_source)c->joined=c->lobby_source->joined;
    lan_lobby *l=lan_lobby_find(c,c->joined);if(!l || !lan_endpoint_member(l,to) || size>LAN_PACKET_MAX-4 || mode<0 || mode>3)return 0;
    uint32_t ip=lan_peer_ip(c,to);if(!ip)return 0;
    lan_session *session=lan_session_find(c,to,1);if(!session)return 0;session->accepted=1;
    unsigned char *p=malloc(size+4);if(!p)return 0;lan_put32(p,channel);memcpy(p+4,data,size);
    int ok=mode<2?lan_udp_port(c,ip,LAN_PORT+lan_server_valid(to),LAN_DATA,l->id,p,size+4):lan_send(c,to,ip,LAN_DATA,l->id,p,size+4);free(p);return ok;
}
