#include "host.h"
#include "com.h"
#include "steam_interfaces.h"
#include <time.h>
#define LAN_LOG(...) void_log(__VA_ARGS__)
#include "steam_lan.inc"
#include "steam_lan_guest.inc"
#include "steam_lan_stats.inc"
#include "steam_lan_results.inc"

static void_com_object steam_client, steam_user;

COM_METHOD(user, GetHSteamUser, 0) { return 1; }
COM_METHOD(user, BLoggedOn, 0) { return 1; }
COM_METHOD(user, GetSteamID, 1)
{
    uint32_t result = ARG(0);
    return steam_copy_id(result, steam_identity());
}
COM_METHOD(user, InitiateGameConnection, 7)
{
    if (ARG(1) && ARG(2)) MEM32(ARG(1)) = 0;
    return 0;
}
COM_METHOD(user, TerminateGameConnection, 3) { return 0; }
COM_METHOD(user, TrackAppUsageEvent, 3) { return 0; }
COM_METHOD(user, GetUserDataFolder, 2)
{
    const char *path = "C:\\Users\\Player\\AppData\\Local\\Crashday\\";
    if (!void_vm_writable(ARG(0), ARG(1)) || ARG(1) <= strlen(path)) return 0;
    strcpy(GPTR(ARG(0)), path); return 1;
}
COM_METHOD(user, StartVoiceRecording, 0)
{
    static int logged;
    if (!logged) {
        logged = 1;
        void_log("[steam] Voice recording unavailable: no Android capture backend");
    }
    return 0;
}
COM_METHOD(user, StopVoiceRecording, 0) { return 0; }
COM_METHOD(user, GetAvailableVoice, 3)
{
    if (ARG(0)) MEM32(ARG(0)) = 0;
    if (ARG(1)) MEM32(ARG(1)) = 0;
    return 2;
}
COM_METHOD(user, GetVoice, 9)
{
    if (ARG(3)) MEM32(ARG(3)) = 0;
    if (ARG(7)) MEM32(ARG(7)) = 0;
    return 2;
}
COM_METHOD(user, DecompressVoice, 6)
{
    if (ARG(4)) MEM32(ARG(4)) = 0;
    return 3;
}
COM_METHOD(user, GetVoiceOptimalSampleRate, 0) { return 0; }
COM_METHOD(user, GetAuthSessionTicket, 3)
{
    if (!void_vm_writable(ARG(2),4)) return 0;
    MEM32(ARG(2))=0;
    if (ARG(1)<16 || !void_vm_writable(ARG(0),16)) return 0;
    unsigned char *p=GPTR(ARG(0));memcpy(p,"CDLAN001",8);lan_put64(p+8,steam_identity());MEM32(ARG(2))=16;
    static unsigned issued;if(++issued<=8)void_log("[lan] user auth ticket issued");
    return 1;
}
COM_METHOD(user, BeginAuthSession, 4)
{
    uint64_t id=steam_arg64(2);lan_lobby *l=lan_lobby_find(&steam_lan,steam_lan.joined);
    if (ARG(1)!=16 || !void_vm_readable(ARG(0),16) || memcmp(GPTR(ARG(0)),"CDLAN001",8) ||
        lan_get64((unsigned char*)GPTR(ARG(0))+8)!=id || !lan_endpoint_member(l,id)) return 1;
    unsigned char p[20]={0};lan_put64(p,id);lan_put64(p+12,id);lan_event_add(&steam_lan,143,0,p,20);return 0;
}
COM_METHOD(user, EndAuthSession, 2) { return 0; }
COM_METHOD(user, CancelAuthTicket, 1) { return 0; }
COM_METHOD(user, UserHasLicenseForApp, 3) { return lan_member_find(lan_lobby_find(&steam_lan,steam_lan.joined),steam_arg64(0))?0:1; }
COM_METHOD(user, BIsBehindNAT, 0) { return 0; }
COM_METHOD(user, AdvertiseGame, 4) { return 0; }
COM_METHOD(user, RequestEncryptedAppTicket, 2) { return steam_return64(0); }
COM_METHOD(user, GetEncryptedAppTicket, 3) { if(void_vm_writable(ARG(2),4)) MEM32(ARG(2))=0;return 0; }
COM_METHOD(user, GetGameBadgeLevel, 2) { return 0; }
COM_METHOD(user, GetPlayerSteamLevel, 0) { return 0; }
COM_METHOD(user, RequestStoreAuthURL, 1) { return steam_return64(0); }
COM_METHOD(user, BIsPhoneVerified, 0) { return 0; }
COM_METHOD(user, BIsTwoFactorEnabled, 0) { return 0; }
COM_METHOD(user, BIsPhoneIdentifying, 0) { return 0; }
COM_METHOD(user, BIsPhoneRequiringVerification, 0) { return 0; }

static const void_fn user_methods[] = {
    user_GetHSteamUser, user_BLoggedOn, user_GetSteamID, user_InitiateGameConnection,
    user_TerminateGameConnection, user_TrackAppUsageEvent, user_GetUserDataFolder,
    user_StartVoiceRecording, user_StopVoiceRecording, user_GetAvailableVoice, user_GetVoice,
    user_DecompressVoice, user_GetVoiceOptimalSampleRate, user_GetAuthSessionTicket,
    user_BeginAuthSession, user_EndAuthSession, user_CancelAuthTicket, user_UserHasLicenseForApp,
    user_BIsBehindNAT, user_AdvertiseGame, user_RequestEncryptedAppTicket, user_GetEncryptedAppTicket,
    user_GetGameBadgeLevel, user_GetPlayerSteamLevel, user_RequestStoreAuthURL,
    user_BIsPhoneVerified, user_BIsTwoFactorEnabled, user_BIsPhoneIdentifying, user_BIsPhoneRequiringVerification,
};
static void_com_class user_class = { "ISteamUser", 29, user_methods, 0 };

static void_com_object steam_matchmaking;
#define MM0(name, nargs) COM_METHOD(mm, name, nargs) { return 0; }
#define MM64(name, nargs) COM_METHOD(mm, name, nargs) { g_edx = 0; return 0; }
static uint32_t mm_empty_text(void)
{
    static uint32_t text;
    if (!text) text = void_gstrdup("");
    return text;
}
static uint32_t mm_id_result(uint32_t result, uint32_t low, uint32_t high)
{
    if (result) { MEM32(result) = low; MEM32(result + 4) = high; }
    return result;
}
MM0(GetFavoriteGameCount, 0)
MM0(GetFavoriteGame, 7)
MM0(AddFavoriteGame, 6)
MM0(RemoveFavoriteGame, 5)
#include "steam_lan_matchmaking.inc"
MM0(AddRequestLobbyListNearValueFilter, 2)
MM0(AddRequestLobbyListDistanceFilter, 1)
MM0(AddRequestLobbyListCompatibleMembersFilter, 2)
MM0(InviteUserToLobby, 4)
MM0(SetLobbyOwner, 4)
MM0(SetLinkedLobby, 4)
#undef MM64
#undef MM0

static const void_fn matchmaking_methods[] = {
    mm_GetFavoriteGameCount, mm_GetFavoriteGame, mm_AddFavoriteGame, mm_RemoveFavoriteGame,
    mm_RequestLobbyList, mm_AddRequestLobbyListStringFilter, mm_AddRequestLobbyListNumericalFilter,
    mm_AddRequestLobbyListNearValueFilter, mm_AddRequestLobbyListFilterSlotsAvailable,
    mm_AddRequestLobbyListDistanceFilter, mm_AddRequestLobbyListResultCountFilter,
    mm_AddRequestLobbyListCompatibleMembersFilter, mm_GetLobbyGameByIndex, mm_CreateLobby,
    mm_JoinLobby, mm_LeaveLobby, mm_InviteUserToLobby, mm_GetNumLobbyMembers,
    mm_GetLobbyMemberByIndex, mm_GetLobbyData, mm_SetLobbyData, mm_GetLobbyDataCount,
    mm_GetLobbyDataByIndex, mm_DeleteLobbyData, mm_GetLobbyMemberData, mm_SetLobbyMemberData,
    mm_SendLobbyChatMsg, mm_GetLobbyChatEntry, mm_RequestLobbyData, mm_SetLobbyGameServer,
    mm_GetLobbyGameServer, mm_SetLobbyMemberLimit, mm_GetLobbyMemberLimit, mm_SetLobbyType,
    mm_SetLobbyJoinable, mm_GetLobbyOwner, mm_SetLobbyOwner, mm_SetLinkedLobby,
};
static void_com_class matchmaking_class = { "ISteamMatchmaking", 38, matchmaking_methods, 0 };

static void_com_object steam_matchmaking_servers;
#define MS0(name, nargs) COM_METHOD(ms, name, nargs) { return 0; }
MS0(RequestInternetServerList, 5)
MS0(RequestLANServerList, 3)
MS0(RequestFriendsServerList, 5)
MS0(RequestFavoritesServerList, 5)
MS0(RequestHistoryServerList, 5)
MS0(RequestSpectatorServerList, 5)
MS0(ReleaseRequest, 2)
MS0(GetServerDetails, 3)
MS0(CancelQuery, 2)
MS0(RefreshQuery, 2)
MS0(IsRefreshing, 2)
MS0(GetServerCount, 2)
MS0(RefreshServer, 3)
MS0(PingServer, 4)
MS0(PlayerDetails, 4)
MS0(ServerRules, 4)
MS0(CancelServerQuery, 2)
#undef MS0
static const void_fn matchmaking_servers_methods[] = {
    ms_RequestInternetServerList, ms_RequestLANServerList, ms_RequestFriendsServerList,
    ms_RequestFavoritesServerList, ms_RequestHistoryServerList, ms_RequestSpectatorServerList,
    ms_ReleaseRequest, ms_GetServerDetails, ms_CancelQuery, ms_RefreshQuery, ms_IsRefreshing,
    ms_GetServerCount, ms_RefreshServer, ms_PingServer, ms_PlayerDetails, ms_ServerRules,
    ms_CancelServerQuery,
};
static void_com_class matchmaking_servers_class = { "ISteamMatchmakingServers002", 17, matchmaking_servers_methods, 0 };

typedef struct { char *name; int floating; int32_t i; float f; } local_stat;
typedef struct { char *name; int unlocked; uint32_t time; } local_achievement;
static local_stat stats[64];
static local_achievement achievements[64];
static int stat_count, achievement_count;
static void_com_object steam_user_stats;

static int stat_find(uint32_t name, int create)
{
    char *text = void_astr_utf8(name);
    if (!text || !*text) { free(text); return -1; }
    int i;
    for (i = 0; i < stat_count; ++i) if (!strcmp(stats[i].name, text)) break;
    if (i == stat_count && create && stat_count < 64) stats[stat_count++].name = strdup(text);
    free(text);
    return i < stat_count ? i : -1;
}

static int achievement_find(uint32_t name, int create)
{
    char *text = void_astr_utf8(name);
    if (!text || !*text) { free(text); return -1; }
    int i;
    for (i = 0; i < achievement_count; ++i) if (!strcmp(achievements[i].name, text)) break;
    if (i == achievement_count && create && achievement_count < 64) achievements[achievement_count++].name = strdup(text);
    free(text);
    return i < achievement_count ? i : -1;
}

COM_METHOD(us, RequestCurrentStats, 0) { return 1; }
COM_METHOD(us, GetStatInt, 2)
{
    int i = stat_find(ARG(0), 0);
    if (ARG(1)) MEM32(ARG(1)) = i >= 0 && !stats[i].floating ? (uint32_t)stats[i].i : 0;
    return ARG(0) != 0;
}
COM_METHOD(us, GetStatFloat, 2)
{
    int i = stat_find(ARG(0), 0);
    float value = i >= 0 && stats[i].floating ? stats[i].f : 0.0f;
    if (ARG(1)) memcpy(GPTR(ARG(1)), &value, 4);
    return ARG(0) != 0;
}
COM_METHOD(us, SetStatInt, 2)
{
    int i = stat_find(ARG(0), 1);
    if (i < 0) return 0;
    stats[i].floating = 0; stats[i].i = (int32_t)ARG(1);
    return 1;
}
COM_METHOD(us, SetStatFloat, 2)
{
    int i = stat_find(ARG(0), 1);
    if (i < 0) return 0;
    stats[i].floating = 1; memcpy(&stats[i].f, GPTR(ARG(1)), 4);
    return 1;
}
COM_METHOD(us, UpdateAvgRateStat, 4) { return 1; }
COM_METHOD(us, GetAchievement, 2)
{
    int i = achievement_find(ARG(0), 0);
    if (ARG(1)) MEM8(ARG(1)) = i >= 0 && achievements[i].unlocked;
    return ARG(0) != 0;
}
COM_METHOD(us, SetAchievement, 1)
{
    int i = achievement_find(ARG(0), 1);
    if (i < 0) return 0;
    if (!achievements[i].unlocked) achievements[i].time = (uint32_t)time(NULL);
    achievements[i].unlocked = 1;
    return 1;
}
COM_METHOD(us, ClearAchievement, 1)
{
    int i = achievement_find(ARG(0), 0);
    if (i < 0) return 0;
    achievements[i].unlocked = 0; achievements[i].time = 0;
    return 1;
}
COM_METHOD(us, GetAchievementAndUnlockTime, 3)
{
    int i = achievement_find(ARG(0), 0);
    if (ARG(1)) MEM8(ARG(1)) = i >= 0 && achievements[i].unlocked;
    if (ARG(2)) MEM32(ARG(2)) = i >= 0 ? achievements[i].time : 0;
    return ARG(0) != 0;
}
COM_METHOD(us, StoreStats, 0) { return 1; }
COM_METHOD(us, GetAchievementIcon, 1) { return 0; }
COM_METHOD(us, GetAchievementDisplayAttribute, 2)
{
    static uint32_t empty;
    if (!empty) empty = void_gstrdup("");
    return empty;
}
COM_METHOD(us, IndicateAchievementProgress, 3)
{
    int i = achievement_find(ARG(0), 1);
    if (i < 0) return 0;
    if (ARG(1) >= ARG(2)) { achievements[i].unlocked = 1; achievements[i].time = (uint32_t)time(NULL); }
    return 1;
}
COM_METHOD(us, GetNumAchievements, 0) { return (uint32_t)achievement_count; }
COM_METHOD(us, GetAchievementName, 1)
{
    static uint32_t names[64];
    uint32_t index = ARG(0);
    if (index >= (uint32_t)achievement_count) return 0;
    if (!names[index]) names[index] = void_gstrdup(achievements[index].name);
    return names[index];
}
COM_METHOD(us, RequestUserStats, 2) { g_edx = 0; return 0; }
COM_METHOD(us, GetUserStatInt, 4) { return 0; }
COM_METHOD(us, GetUserStatFloat, 4) { return 0; }
COM_METHOD(us, GetUserAchievement, 4) { return 0; }
COM_METHOD(us, GetUserAchievementAndUnlockTime, 5) { return 0; }
COM_METHOD(us, ResetAllStats, 1)
{
    stat_count = 0;
    if (ARG(0)) achievement_count = 0;
    return 1;
}
COM_METHOD(us, FindOrCreateLeaderboard, 3) { g_edx = 0; return 0; }
COM_METHOD(us, FindLeaderboard, 1) { g_edx = 0; return 0; }
COM_METHOD(us, GetLeaderboardName, 2)
{
    static uint32_t empty;
    if (!empty) empty = void_gstrdup("");
    return empty;
}
COM_METHOD(us, GetLeaderboardEntryCount, 2) { return 0; }
COM_METHOD(us, GetLeaderboardSortMethod, 2) { return 0; }
COM_METHOD(us, GetLeaderboardDisplayType, 2) { return 0; }
COM_METHOD(us, DownloadLeaderboardEntries, 5) { g_edx = 0; return 0; }
COM_METHOD(us, DownloadLeaderboardEntriesForUsers, 4) { g_edx = 0; return 0; }
COM_METHOD(us, GetDownloadedLeaderboardEntry, 6) { return 0; }
COM_METHOD(us, UploadLeaderboardScore, 6) { g_edx = 0; return 0; }
COM_METHOD(us, AttachLeaderboardUGC, 4) { g_edx = 0; return 0; }
COM_METHOD(us, GetNumberOfCurrentPlayers, 0) { g_edx = 0; return 0; }
COM_METHOD(us, RequestGlobalAchievementPercentages, 0) { g_edx = 0; return 0; }
COM_METHOD(us, GetMostAchievedAchievementInfo, 4) { return (uint32_t)-1; }
COM_METHOD(us, GetNextMostAchievedAchievementInfo, 5) { return (uint32_t)-1; }
COM_METHOD(us, GetAchievementAchievedPercent, 2) { return 0; }
COM_METHOD(us, RequestGlobalStats, 1) { g_edx = 0; return 0; }
COM_METHOD(us, GetGlobalStatInt, 2) { return 0; }
COM_METHOD(us, GetGlobalStatFloat, 2) { return 0; }
COM_METHOD(us, GetGlobalStatHistoryInt, 3) { return 0; }
COM_METHOD(us, GetGlobalStatHistoryFloat, 3) { return 0; }

static const void_fn user_stats_methods[] = {
    us_RequestCurrentStats, us_GetStatInt, us_GetStatFloat, us_SetStatInt, us_SetStatFloat,
    us_UpdateAvgRateStat, us_GetAchievement, us_SetAchievement, us_ClearAchievement,
    us_GetAchievementAndUnlockTime, us_StoreStats, us_GetAchievementIcon,
    us_GetAchievementDisplayAttribute, us_IndicateAchievementProgress, us_GetNumAchievements,
    us_GetAchievementName, us_RequestUserStats, us_GetUserStatInt, us_GetUserStatFloat,
    us_GetUserAchievement, us_GetUserAchievementAndUnlockTime, us_ResetAllStats,
    us_FindOrCreateLeaderboard, us_FindLeaderboard, us_GetLeaderboardName,
    us_GetLeaderboardEntryCount, us_GetLeaderboardSortMethod, us_GetLeaderboardDisplayType,
    us_DownloadLeaderboardEntries, us_DownloadLeaderboardEntriesForUsers,
    us_GetDownloadedLeaderboardEntry, us_UploadLeaderboardScore, us_AttachLeaderboardUGC,
    us_GetNumberOfCurrentPlayers, us_RequestGlobalAchievementPercentages,
    us_GetMostAchievedAchievementInfo, us_GetNextMostAchievedAchievementInfo,
    us_GetAchievementAchievedPercent, us_RequestGlobalStats, us_GetGlobalStatInt,
    us_GetGlobalStatFloat, us_GetGlobalStatHistoryInt, us_GetGlobalStatHistoryFloat,
};
static void_com_class user_stats_class = { "ISteamUserStats011", 43, user_stats_methods, 0 };

static void_com_object steam_game_server_stats;
#define GS0(name, nargs) COM_METHOD(gs, name, nargs) { return 0; }
GS0(RequestPlayerCount, 0)
GS0(GetPlayerCount, 0)
GS0(GetPlayerName, 2)
GS0(GetPlayerScore, 2)
GS0(GetPlayerPing, 2)
GS0(GetPlayerIP, 2)
GS0(GetPlayerTeam, 2)
#undef GS0
static const void_fn game_server_stats_methods[] = {
    gs_RequestPlayerCount, gs_GetPlayerCount, gs_GetPlayerName, gs_GetPlayerScore,
    gs_GetPlayerPing, gs_GetPlayerIP, gs_GetPlayerTeam,
};
static void_com_class game_server_stats_class = { "ISteamGameServerStats", 7, game_server_stats_methods, 0 };

static void_com_object steam_apps;
static uint32_t apps_text(const char *text)
{
    static uint32_t english, empty;
    uint32_t *slot = !strcmp(text, "english") ? &english : &empty;
    if (!*slot) *slot = void_gstrdup(text);
    return *slot;
}
COM_METHOD(apps, BIsSubscribed, 0) { return 1; }
COM_METHOD(apps, BIsLowViolence, 0) { return 0; }
COM_METHOD(apps, BIsCybercafe, 0) { return 0; }
COM_METHOD(apps, BIsVACBanned, 0) { return 0; }
COM_METHOD(apps, GetCurrentGameLanguage, 0)
{
    static uint32_t language;
    if (!language) {
        const char *selected = getenv("CRASHDAY_LANGUAGE");
        language = void_gstrdup(selected && *selected ? selected : "english");
    }
    return language;
}
COM_METHOD(apps, GetAvailableGameLanguages, 0)
{
    static uint32_t languages;
    if (!languages) languages = void_gstrdup("english,german,italian,russian,turkish,hungarian,brazilian,spanish,polish");
    return languages;
}
COM_METHOD(apps, BIsSubscribedApp, 2) { return 0; }
COM_METHOD(apps, BIsDlcInstalled, 2) { return 0; }
COM_METHOD(apps, GetEarliestPurchaseUnixTime, 2) { return 0; }
COM_METHOD(apps, BIsSubscribedFromFamilySharing, 0) { return 0; }
COM_METHOD(apps, BIsSubscribedFromFreeWeekend, 0) { return 0; }
COM_METHOD(apps, GetDLCCount, 0) { return 0; }
COM_METHOD(apps, BGetDLCDataByIndex, 6) { return 0; }
COM_METHOD(apps, InstallDLC, 2) { return 0; }
COM_METHOD(apps, UninstallDLC, 2) { return 0; }
COM_METHOD(apps, RequestDLC, 2) { return 0; }
COM_METHOD(apps, GetAppInstallDir, 4)
{
    const char *path = "C:\\Games\\Crashday";
    if (ARG(3)) void_utf8_to_ga(path, ARG(2), ARG(3));
    return (uint32_t)strlen(path) + 1;
}
COM_METHOD(apps, BIsAppInstalled, 2) { return 0; }
COM_METHOD(apps, GetAppOwner, 0) { g_edx = 0x01100001u; return 1; }
COM_METHOD(apps, GetLaunchQueryParam, 2) { return apps_text(""); }
COM_METHOD(apps, GetDlcDownloadProgress, 3) { MEM32(ARG(2)) = 0; return 0; }
COM_METHOD(apps, GetAppBuildId, 0) { return 0; }
COM_METHOD(apps, RequestAllProofOfPurchaseKeys, 0) { return 0; }
COM_METHOD(apps, GetCurrentBetaName, 2) { if (ARG(1)) void_utf8_to_ga("", ARG(1), ARG(2)); return 0; }

static const void_fn apps_methods[] = {
    apps_BIsSubscribed, apps_BIsLowViolence, apps_BIsCybercafe, apps_BIsVACBanned,
    apps_GetCurrentGameLanguage, apps_GetAvailableGameLanguages, apps_BIsSubscribedApp,
    apps_BIsDlcInstalled, apps_GetEarliestPurchaseUnixTime, apps_BIsSubscribedFromFamilySharing,
    apps_BIsSubscribedFromFreeWeekend, apps_GetDLCCount, apps_BGetDLCDataByIndex,
    apps_InstallDLC, apps_UninstallDLC, apps_RequestDLC, apps_GetAppInstallDir,
    apps_BIsAppInstalled, apps_GetAppOwner, apps_GetLaunchQueryParam,
    apps_GetDlcDownloadProgress, apps_RequestAllProofOfPurchaseKeys, apps_GetCurrentBetaName,
    apps_GetAppBuildId,
};
static void_com_class apps_class = { "ISteamApps008", 24, apps_methods, 0 };

static void_com_object steam_networking, steam_server_networking;
static lan_context *steam_network_context(void)
{
    return steam_server_networking.guest && g_ecx==steam_server_networking.guest ? &steam_server_lan : &steam_lan;
}
#include "steam_lan_server.inc"
#define SN0(name, nargs) COM_METHOD(sn, name, nargs) { return 0; }
#include "steam_lan_networking.inc"
SN0(CreateListenSocket, 5)
SN0(CreateP2PConnectionSocket, 5)
SN0(CreateConnectionSocket, 5)
SN0(DestroySocket, 2)
SN0(DestroyListenSocket, 2)
SN0(SendDataOnSocket, 4)
SN0(IsDataAvailableOnSocket, 3)
SN0(RetrieveDataOnSocket, 5)
SN0(IsDataAvailable, 4)
SN0(RetrieveData, 6)
SN0(GetSocketInfo, 4)
SN0(GetListenSocketInfo, 4)
SN0(GetSocketConnectionType, 2)
SN0(GetMaxPacketSize, 2)
#undef SN0
static const void_fn networking_methods[] = {
    sn_SendP2PPacket, sn_IsP2PPacketAvailable, sn_ReadP2PPacket, sn_AcceptP2PSessionWithUser,
    sn_CloseP2PSessionWithUser, sn_CloseP2PChannelWithUser, sn_GetP2PSessionState,
    sn_AllowP2PPacketRelay, sn_CreateListenSocket, sn_CreateP2PConnectionSocket,
    sn_CreateConnectionSocket, sn_DestroySocket, sn_DestroyListenSocket, sn_SendDataOnSocket,
    sn_IsDataAvailableOnSocket, sn_RetrieveDataOnSocket, sn_IsDataAvailable, sn_RetrieveData,
    sn_GetSocketInfo, sn_GetListenSocketInfo, sn_GetSocketConnectionType, sn_GetMaxPacketSize,
};
static void_com_class networking_class = { "ISteamNetworking005", 22, networking_methods, 0 };

static void_com_object steam_screenshots;
COM_METHOD(shots, WriteScreenshot, 4) { return 0; }
COM_METHOD(shots, AddScreenshotToLibrary, 5) { return 0; }
COM_METHOD(shots, TriggerScreenshot, 0) { return 0; }
COM_METHOD(shots, HookScreenshots, 2) { return 0; }
COM_METHOD(shots, SetLocation, 3) { return 0; }
COM_METHOD(shots, TagUser, 3) { return 0; }
COM_METHOD(shots, TagPublishedFile, 3) { return 0; }
COM_METHOD(shots, IsScreenshotsHooked, 0) { return 0; }
COM_METHOD(shots, AddVRScreenshotToLibrary, 4) { return 0; }
static const void_fn screenshots_methods[] = {
    shots_WriteScreenshot, shots_AddScreenshotToLibrary, shots_TriggerScreenshot,
    shots_HookScreenshots, shots_SetLocation, shots_TagUser, shots_TagPublishedFile,
    shots_IsScreenshotsHooked, shots_AddVRScreenshotToLibrary,
};
static void_com_class screenshots_class = { "ISteamScreenshots003", 9, screenshots_methods, 0 };

static void_com_object steam_game_search;
#define SEARCH0(name) COM_METHOD(search, name, 3) { return 0; }
SEARCH0(AddGameSearchParams)
SEARCH0(UpdateGameSearchParams)
SEARCH0(RemoveGameSearchParams)
SEARCH0(UpdatePlayerDetails)
SEARCH0(UpdateGameDetails)
SEARCH0(UpdateGameSessionDetails)
SEARCH0(UpdateHostDetails)
SEARCH0(UpdateGameServerDetails)
SEARCH0(UpdateGameServerPlayerDetails)
#undef SEARCH0
static const void_fn game_search_methods[] = {
    search_AddGameSearchParams, search_UpdateGameSearchParams, search_RemoveGameSearchParams,
    search_UpdatePlayerDetails, search_UpdateGameDetails, search_UpdateGameSessionDetails,
    search_UpdateHostDetails, search_UpdateGameServerDetails, search_UpdateGameServerPlayerDetails,
};
static void_com_class game_search_class = { "ISteamGameSearch001", 9, game_search_methods, 0 };

static void_com_object steam_friends;
static uint32_t friends_empty_text(void)
{
    static uint32_t text;
    if (!text) text = void_gstrdup("");
    return text;
}
const char *void_steam_player_name(void)
{
    static char fallback[64];
    if (*steam_lan.name) return steam_lan.name;
    snprintf(fallback, sizeof fallback, "LAN %04X", (unsigned)steam_identity() & 65535);
    return fallback;
}

void void_steam_player_name_set(const char *name)
{
    snprintf(steam_lan.name, sizeof steam_lan.name, "%s", name);
    if (steam_lan.started == 1) {
        unsigned char changed[12] = {0};
        lan_put64(changed, steam_lan.id);
        lan_put32(changed + 8, 1); /* k_EPersonaChangeName: original UTF-8 conversion and length limit. */
        lan_event_add(&steam_lan, 304, 0, changed, sizeof changed);
    }
}

COM_METHOD(friends, GetPersonaName, 0)
{
    return steam_result_text(void_steam_player_name());
}
static uint32_t friends_id_result(uint32_t result)
{
    if (result) { MEM32(result) = 0; MEM32(result + 4) = 0; }
    return result;
}
#define FR0(name, nargs) COM_METHOD(friends, name, nargs) { return 0; }
#define FR64(name, nargs) COM_METHOD(friends, name, nargs) { g_edx = 0; return 0; }
#define FRID(name, nargs) COM_METHOD(friends, name, nargs) { return friends_id_result(ARG(0)); }
FR64(SetPersonaName, 1)
FR0(GetPersonaState, 0)
FR0(GetFriendCount, 1)
FRID(GetFriendByIndex, 3)
FR0(GetFriendRelationship, 2)
FR0(GetFriendPersonaState, 2)
COM_METHOD(friends, GetFriendPersonaName, 2)
{
    uint64_t id=steam_arg64(0);
    if (id == steam_identity()) return steam_result_text(void_steam_player_name());
    lan_member *m=lan_member_find(lan_lobby_find(&steam_lan,steam_lan.joined),id);
    char name[64];snprintf(name,sizeof name,"LAN %04X",(unsigned)id&65535);return steam_result_text(m?m->name:name);
}
FR0(GetFriendGamePlayed, 3)
COM_METHOD(friends, GetFriendPersonaNameHistory, 3) { return friends_empty_text(); }
FR0(GetFriendSteamLevel, 2)
COM_METHOD(friends, GetPlayerNickname, 2) { return friends_empty_text(); }
FR0(GetFriendsGroupCount, 0)
FR0(GetFriendsGroupIDByIndex, 1)
COM_METHOD(friends, GetFriendsGroupName, 1) { return friends_empty_text(); }
FR0(GetFriendsGroupMembersCount, 1)
FR0(GetFriendsGroupMembersList, 3)
FR0(HasFriend, 3)
FR0(GetClanCount, 0)
FRID(GetClanByIndex, 2)
COM_METHOD(friends, GetClanName, 2) { return friends_empty_text(); }
COM_METHOD(friends, GetClanTag, 2) { return friends_empty_text(); }
FR0(GetClanActivityCounts, 5)
FR64(DownloadClanActivityCounts, 2)
FR0(GetFriendCountFromSource, 2)
FRID(GetFriendFromSourceByIndex, 4)
FR0(IsUserInSource, 4)
FR0(SetInGameVoiceSpeaking, 3)
FR0(ActivateGameOverlay, 1)
FR0(ActivateGameOverlayToUser, 3)
FR0(ActivateGameOverlayToWebPage, 1)
FR0(ActivateGameOverlayToStore, 2)
FR0(SetPlayedWith, 2)
FR0(ActivateGameOverlayInviteDialog, 2)
FR0(GetSmallFriendAvatar, 2)
FR0(GetMediumFriendAvatar, 2)
FR0(GetLargeFriendAvatar, 2)
FR0(RequestUserInformation, 3)
FR64(RequestClanOfficerList, 2)
FRID(GetClanOwner, 3)
FR0(GetClanOfficerCount, 2)
FRID(GetClanOfficerByIndex, 4)
FR0(GetUserRestrictions, 0)
FR0(SetRichPresence, 2)
FR0(ClearRichPresence, 0)
COM_METHOD(friends, GetFriendRichPresence, 3) { return friends_empty_text(); }
FR0(GetFriendRichPresenceKeyCount, 2)
COM_METHOD(friends, GetFriendRichPresenceKeyByIndex, 3) { return friends_empty_text(); }
FR0(RequestFriendRichPresence, 2)
FR0(InviteUserToGame, 3)
FR0(GetCoplayFriendCount, 0)
FRID(GetCoplayFriend, 2)
FR0(GetFriendCoplayTime, 2)
FR0(GetFriendCoplayGame, 2)
FR64(JoinClanChatRoom, 2)
FR0(LeaveClanChatRoom, 2)
FR0(GetClanChatMemberCount, 2)
FRID(GetChatMemberByIndex, 4)
FR0(SendClanChatMessage, 3)
FR0(GetClanChatMessage, 7)
FR0(IsClanChatAdmin, 4)
FR0(IsClanChatWindowOpenInSteam, 2)
FR0(OpenClanChatWindowInSteam, 2)
FR0(CloseClanChatWindowInSteam, 2)
FR0(SetListenForFriendsMessages, 1)
FR0(ReplyToFriendMessage, 3)
FR0(GetFriendMessage, 6)
FR64(GetFollowerCount, 2)
FR64(IsFollowing, 2)
FR64(EnumerateFollowingList, 1)
FR0(IsClanPublic, 2)
FR0(IsClanOfficialGameGroup, 2)
#undef FRID
#undef FR64
#undef FR0
static const void_fn friends_methods[] = {
    friends_GetPersonaName, friends_SetPersonaName, friends_GetPersonaState, friends_GetFriendCount,
    friends_GetFriendByIndex, friends_GetFriendRelationship, friends_GetFriendPersonaState,
    friends_GetFriendPersonaName, friends_GetFriendGamePlayed, friends_GetFriendPersonaNameHistory,
    friends_GetFriendSteamLevel, friends_GetPlayerNickname, friends_GetFriendsGroupCount,
    friends_GetFriendsGroupIDByIndex, friends_GetFriendsGroupName, friends_GetFriendsGroupMembersCount,
    friends_GetFriendsGroupMembersList, friends_HasFriend, friends_GetClanCount, friends_GetClanByIndex,
    friends_GetClanName, friends_GetClanTag, friends_GetClanActivityCounts, friends_DownloadClanActivityCounts,
    friends_GetFriendCountFromSource, friends_GetFriendFromSourceByIndex, friends_IsUserInSource,
    friends_SetInGameVoiceSpeaking, friends_ActivateGameOverlay, friends_ActivateGameOverlayToUser,
    friends_ActivateGameOverlayToWebPage, friends_ActivateGameOverlayToStore, friends_SetPlayedWith,
    friends_ActivateGameOverlayInviteDialog, friends_GetSmallFriendAvatar, friends_GetMediumFriendAvatar,
    friends_GetLargeFriendAvatar, friends_RequestUserInformation, friends_RequestClanOfficerList,
    friends_GetClanOwner, friends_GetClanOfficerCount, friends_GetClanOfficerByIndex,
    friends_GetUserRestrictions, friends_SetRichPresence, friends_ClearRichPresence,
    friends_GetFriendRichPresence, friends_GetFriendRichPresenceKeyCount, friends_GetFriendRichPresenceKeyByIndex,
    friends_RequestFriendRichPresence, friends_InviteUserToGame, friends_GetCoplayFriendCount,
    friends_GetCoplayFriend, friends_GetFriendCoplayTime, friends_GetFriendCoplayGame,
    friends_JoinClanChatRoom, friends_LeaveClanChatRoom, friends_GetClanChatMemberCount,
    friends_GetChatMemberByIndex, friends_SendClanChatMessage, friends_GetClanChatMessage,
    friends_IsClanChatAdmin, friends_IsClanChatWindowOpenInSteam, friends_OpenClanChatWindowInSteam,
    friends_CloseClanChatWindowInSteam, friends_SetListenForFriendsMessages, friends_ReplyToFriendMessage,
    friends_GetFriendMessage, friends_GetFollowerCount, friends_IsFollowing, friends_EnumerateFollowingList,
    friends_IsClanPublic, friends_IsClanOfficialGameGroup,
};
static void_com_class friends_class = { "ISteamFriends015", 72, friends_methods, 0 };

static void_com_object steam_utils;
COM_METHOD(utils, GetSecondsSinceAppActive, 0) { return 0; }
COM_METHOD(utils, GetSecondsSinceComputerActive, 0) { return 0; }
COM_METHOD(utils, GetConnectedUniverse, 0) { return 0; }
COM_METHOD(utils, GetServerRealTime, 0) { return (uint32_t)time(NULL); }
COM_METHOD(utils, GetIPCountry, 0) { return friends_empty_text(); }
COM_METHOD(utils, GetImageSize, 3) { return 0; }
COM_METHOD(utils, GetImageRGBA, 3) { return 0; }
COM_METHOD(utils, GetCSERIPPort, 3) { return 0; }
COM_METHOD(utils, GetCurrentBatteryPower, 0) { return 255; }
COM_METHOD(utils, GetAppID, 0) { return 508980; }
COM_METHOD(utils, SetOverlayNotificationPosition, 1) { return 0; }
COM_METHOD(utils, IsAPICallCompleted, 3) { lan_pump(&steam_lan);if(void_vm_writable(ARG(2),1))MEM8(ARG(2))=0;return steam_api_result(steam_arg64(0))!=NULL; }
COM_METHOD(utils, GetAPICallFailureReason, 2) { return steam_api_result(steam_arg64(0))?UINT32_MAX:2; }
COM_METHOD(utils, GetAPICallResult, 6)
{
    lan_event *e=steam_api_result(steam_arg64(0));if(void_vm_writable(ARG(5),1))MEM8(ARG(5))=0;
    if(!e || e->type!=ARG(4) || ARG(3)<e->size || !void_vm_writable(ARG(2),e->size))return 0;memcpy(GPTR(ARG(2)),e->data,e->size);return 1;
}
COM_METHOD(utils, RunFrame, 0) { return 0; }
COM_METHOD(utils, GetIPCCallCount, 0) { return 0; }
COM_METHOD(utils, SetWarningMessageHook, 1) { return 0; }
COM_METHOD(utils, IsOverlayEnabled, 0) { return 0; }
COM_METHOD(utils, BOverlayNeedsPresent, 0) { return 0; }
COM_METHOD(utils, CheckFileSignature, 2) { return 0; }
COM_METHOD(utils, ShowGamepadTextInput, 5) { return 0; }
COM_METHOD(utils, GetEnteredGamepadTextLength, 0) { return 0; }
COM_METHOD(utils, GetEnteredGamepadTextInput, 3) { if (ARG(2)) void_utf8_to_ga("", ARG(1), ARG(2)); return 0; }
COM_METHOD(utils, GetSteamUILanguage, 0)
{
    static uint32_t language;
    if (!language) language = void_gstrdup("english");
    return language;
}
COM_METHOD(utils, IsSteamRunningInVR, 0) { return 0; }
COM_METHOD(utils, SetOverlayNotificationInset, 3) { return 0; }
COM_METHOD(utils, IsVRHeadsetStreamingEnabled, 0) { return 0; }

static const void_fn utils_methods[] = {
    utils_GetSecondsSinceAppActive, utils_GetSecondsSinceComputerActive, utils_GetConnectedUniverse,
    utils_GetServerRealTime, utils_GetIPCountry, utils_GetImageSize, utils_GetImageRGBA,
    utils_GetCSERIPPort, utils_GetCurrentBatteryPower, utils_GetAppID, utils_SetOverlayNotificationPosition,
    utils_IsAPICallCompleted, utils_GetAPICallFailureReason, utils_GetAPICallResult, utils_RunFrame,
    utils_GetIPCCallCount, utils_SetWarningMessageHook, utils_IsOverlayEnabled, utils_BOverlayNeedsPresent,
    utils_CheckFileSignature, utils_ShowGamepadTextInput, utils_GetEnteredGamepadTextLength,
    utils_GetEnteredGamepadTextInput, utils_GetSteamUILanguage, utils_IsSteamRunningInVR,
    utils_SetOverlayNotificationInset, utils_IsVRHeadsetStreamingEnabled,
};
static void_com_class utils_class = { "ISteamUtils008", 27, utils_methods, 0 };

static void_com_object steam_http;
#define HTTP0(name, nargs) COM_METHOD(http, name, nargs) { return 0; }
HTTP0(CreateHTTPRequest, 3)
HTTP0(SetHTTPRequestContextValue, 4)
HTTP0(SetHTTPRequestNetworkActivityTimeout, 3)
HTTP0(SetHTTPRequestHeaderValue, 4)
HTTP0(SetHTTPRequestGetOrPostParameter, 4)
HTTP0(SendHTTPRequest, 3)
HTTP0(SendHTTPRequestAndStreamResponse, 3)
HTTP0(DeferHTTPRequest, 2)
HTTP0(PrioritizeHTTPRequest, 2)
HTTP0(GetHTTPResponseHeaderSize, 4)
HTTP0(GetHTTPResponseHeaderValue, 5)
HTTP0(GetHTTPResponseBodySize, 3)
HTTP0(GetHTTPResponseBodyData, 4)
HTTP0(GetHTTPStreamingResponseBodyData, 5)
HTTP0(ReleaseHTTPRequest, 2)
HTTP0(GetHTTPDownloadProgressPct, 3)
HTTP0(SetHTTPRequestRawPostBody, 5)
#undef HTTP0
static const void_fn http_methods[] = {
    http_CreateHTTPRequest, http_SetHTTPRequestContextValue, http_SetHTTPRequestNetworkActivityTimeout,
    http_SetHTTPRequestHeaderValue, http_SetHTTPRequestGetOrPostParameter, http_SendHTTPRequest,
    http_SendHTTPRequestAndStreamResponse, http_DeferHTTPRequest, http_PrioritizeHTTPRequest,
    http_GetHTTPResponseHeaderSize, http_GetHTTPResponseHeaderValue, http_GetHTTPResponseBodySize,
    http_GetHTTPResponseBodyData, http_GetHTTPStreamingResponseBodyData, http_ReleaseHTTPRequest,
    http_GetHTTPDownloadProgressPct, http_SetHTTPRequestRawPostBody,
};
static void_com_class http_class = { "ISteamHTTP002", 17, http_methods, 0 };

static void_com_object steam_unified;
COM_METHOD(unified, SendMethod, 5) { return 0; }
COM_METHOD(unified, GetMethodResponseInfo, 4) { return 0; }
COM_METHOD(unified, GetMethodResponseData, 5) { return 0; }
COM_METHOD(unified, ReleaseMethod, 3) { return 0; }
COM_METHOD(unified, SendNotification, 4) { return 0; }
static const void_fn unified_methods[] = {
    unified_SendMethod, unified_GetMethodResponseInfo, unified_GetMethodResponseData,
    unified_ReleaseMethod, unified_SendNotification,
};
static void_com_class unified_class = { "ISteamUnifiedMessages001", 5, unified_methods, 0 };

COM_METHOD(client, CreateSteamPipe, 0) { return 1; }
COM_METHOD(client, BReleaseSteamPipe, 1) { return 1; }
COM_METHOD(client, ConnectToGlobalUser, 1) { return 1; }
COM_METHOD(client, CreateLocalUser, 2)
{
    if (!void_vm_writable(ARG(0),4)) return 0;
    MEM32(ARG(0)) = 1;
    return 1;
}
COM_METHOD(client, ReleaseUser, 2) { return 0; }
COM_METHOD(client, GetISteamUser, 3)
{
    if (!steam_user.guest) void_com_wrap(&steam_user, &user_class, 0);
    return steam_user.guest;
}
COM_METHOD(client, GetISteamGameServer, 3)
{
    const char *version=steam_text(ARG(2),64);
    if(steam_server_lan.started!=1 || !version || strcmp(version,"SteamGameServer012"))return 0;
    if(!steam_game_server.guest)void_com_wrap(&steam_game_server,&game_server_class,0);
    return steam_game_server.guest;
}
COM_METHOD(client, SetLocalIPBinding, 2) { return 0; }
COM_METHOD(client, GetISteamFriends, 3)
{
    if (!steam_friends.guest) void_com_wrap(&steam_friends, &friends_class, 0);
    return steam_friends.guest;
}
COM_METHOD(client, GetISteamUtils, 2)
{
    if (!steam_utils.guest) void_com_wrap(&steam_utils, &utils_class, 0);
    return steam_utils.guest;
}
COM_METHOD(client, GetISteamMatchmaking, 3)
{
    if (!steam_matchmaking.guest) void_com_wrap(&steam_matchmaking, &matchmaking_class, 0);
    return steam_matchmaking.guest;
}
COM_METHOD(client, GetISteamMatchmakingServers, 3)
{
    if (!steam_matchmaking_servers.guest) void_com_wrap(&steam_matchmaking_servers, &matchmaking_servers_class, 0);
    return steam_matchmaking_servers.guest;
}
COM_TODO(client, GetISteamGenericInterface)
COM_METHOD(client, GetISteamUserStats, 3)
{
    if (!steam_user_stats.guest) void_com_wrap(&steam_user_stats, &user_stats_class, 0);
    return steam_user_stats.guest;
}
COM_METHOD(client, GetISteamGameServerStats, 3)
{
    if (!steam_game_server_stats.guest) void_com_wrap(&steam_game_server_stats, &game_server_stats_class, 0);
    return steam_game_server_stats.guest;
}
COM_METHOD(client, GetISteamApps, 3)
{
    if (!steam_apps.guest) void_com_wrap(&steam_apps, &apps_class, 0);
    VLOG("[steam] GetISteamApps -> %08X", steam_apps.guest);
    return steam_apps.guest;
}
COM_METHOD(client, GetISteamNetworking, 3)
{
    static unsigned requests;if(++requests<=8)void_log("[lan] networking interface pipe=%u server_ready=%d",ARG(1),steam_server_lan.started==1);
    if(ARG(1)==2){
        if(steam_server_lan.started!=1)return 0;
        if(!steam_server_networking.guest)void_com_wrap(&steam_server_networking,&networking_class,0);
        return steam_server_networking.guest;
    }
    if (!steam_networking.guest) void_com_wrap(&steam_networking, &networking_class, 0);
    return steam_networking.guest;
}
COM_METHOD(client, GetISteamRemoteStorage, 3) { return void_steam_interface(ARG(2)); }
COM_METHOD(client, GetISteamScreenshots, 3)
{
    if (!steam_screenshots.guest) void_com_wrap(&steam_screenshots, &screenshots_class, 0);
    VLOG("[steam] GetISteamScreenshots -> %08X", steam_screenshots.guest);
    return steam_screenshots.guest;
}
COM_METHOD(client, GetISteamGameSearch, 3)
{
    if (!steam_game_search.guest) void_com_wrap(&steam_game_search, &game_search_class, 0);
    VLOG("[steam] GetISteamGameSearch -> %08X", steam_game_search.guest);
    return steam_game_search.guest;
}
COM_METHOD(client, RunFrame, 0) { return 0; }
COM_METHOD(client, GetIPCCallCount, 0) { return 0; }
COM_METHOD(client, SetWarningMessageHook, 1) { return 0; }
COM_METHOD(client, ShutdownIfAllPipesClosed, 0) { return 0; }
COM_METHOD(client, GetISteamHTTP, 3)
{
    if (!steam_http.guest) void_com_wrap(&steam_http, &http_class, 0);
    return steam_http.guest;
}
COM_METHOD(client, GetISteamUnifiedMessages, 3)
{
    if (!steam_unified.guest) void_com_wrap(&steam_unified, &unified_class, 0);
    return steam_unified.guest;
}
COM_METHOD(client, GetISteamController, 3) { return void_steam_interface(ARG(2)); }
COM_METHOD(client, GetISteamUGC, 3) { return void_steam_interface(ARG(2)); }
COM_METHOD(client, GetISteamAppList, 3) { return void_steam_interface(ARG(2)); }
COM_METHOD(client, GetISteamMusic, 3) { return void_steam_interface(ARG(2)); }
COM_METHOD(client, GetISteamMusicRemote, 3) { return void_steam_interface(ARG(2)); }
COM_METHOD(client, GetISteamHTMLSurface, 3) { return void_steam_interface(ARG(2)); }
COM_METHOD(client, SetPostAPIResultInProcess, 1) { return 0; }
COM_METHOD(client, RemovePostAPIResultInProcess, 1) { return 0; }
COM_METHOD(client, SetCheckCallbackRegisteredInProcess, 1) { return 0; }
COM_METHOD(client, GetISteamInventory, 3) { return void_steam_interface(ARG(2)); }
COM_METHOD(client, GetISteamVideo, 3) { return void_steam_interface(ARG(2)); }
COM_TODO(client, GetISteamParentalSettings)

static const void_fn client_methods[] = {
    client_CreateSteamPipe, client_BReleaseSteamPipe, client_ConnectToGlobalUser,
    client_CreateLocalUser, client_ReleaseUser,
    client_GetISteamUser, client_GetISteamGameServer, client_SetLocalIPBinding,
    client_GetISteamFriends, client_GetISteamUtils, client_GetISteamMatchmaking,
    client_GetISteamMatchmakingServers, client_GetISteamGenericInterface,
    client_GetISteamUserStats, client_GetISteamGameServerStats, client_GetISteamApps,
    client_GetISteamNetworking, client_GetISteamRemoteStorage, client_GetISteamScreenshots,
    client_RunFrame, client_GetIPCCallCount,
    client_SetWarningMessageHook, client_ShutdownIfAllPipesClosed, client_GetISteamHTTP,
    client_GetISteamUnifiedMessages, client_GetISteamController, client_GetISteamUGC,
    client_GetISteamAppList, client_GetISteamMusic, client_GetISteamMusicRemote,
    client_GetISteamHTMLSurface, client_SetPostAPIResultInProcess,
    client_RemovePostAPIResultInProcess, client_SetCheckCallbackRegisteredInProcess,
    client_GetISteamInventory, client_GetISteamVideo,
};
static void_com_class client_class = { "ISteamClient017", 36, client_methods, 0 };

#include "steam_lan_selfcheck.inc"

int void_steam_abi_selftest(void)
{
    uint32_t version = void_gstrdup("SteamClient017");
    if (!version) return 1;
    if (!steam_client.guest) void_com_wrap(&steam_client, &client_class, 0);
    uint32_t table = MEM32(steam_client.guest), args[3] = { 1, 1, version };
    g_ecx = steam_client.guest;
    uint32_t friends = void_call_guest(MEM32(table + 8 * 4), 3, args, 1);
    g_ecx = steam_client.guest;
    uint32_t utils = void_call_guest(MEM32(table + 9 * 4), 2, args, 1);
    void_gfree(version);
    uint32_t ugc_version = void_gstrdup("STEAMUGC_INTERFACE_VERSION008");
    uint32_t ugc = void_steam_interface(ugc_version);
    if (ugc_version) void_gfree(ugc_version);
    if (!ugc) return 1;
    g_ecx = ugc;
    uint32_t subscribed = void_call_guest(MEM32(MEM32(ugc) + 55 * 4), 0, NULL, 1);
    uint32_t apps_version = void_gstrdup("STEAMAPPS_INTERFACE_VERSION008");
    if (!apps_version) return 1;
    args[2] = apps_version;
    g_ecx = steam_client.guest;
    uint32_t apps = void_call_guest(MEM32(table + 15 * 4), 3, args, 1);
    void_gfree(apps_version);
    if (!apps) return 1;
    g_ecx = steam_client.guest;
    uint32_t client_hook = void_call_guest(MEM32(table + 21 * 4), 1, args, 1);
    g_ecx = utils;
    uint32_t notification = void_call_guest(MEM32(MEM32(utils) + 10 * 4), 1, args, 1);
    g_ecx = utils;
    uint32_t utils_hook = void_call_guest(MEM32(MEM32(utils) + 16 * 4), 1, args, 1);
    if (!steam_user_stats.guest) void_com_wrap(&steam_user_stats, &user_stats_class, 0);
    uint32_t score = void_gstrdup("selftest.score"), award = void_gstrdup("selftest.award"), stat_out = void_galloc(8);
    if (!score || !award || !stat_out) return 1;
    int stats_failed = 0;
    g_ecx = steam_user_stats.guest;
    args[0] = score; args[1] = 42;
    stats_failed |= void_call_guest(MEM32(MEM32(steam_user_stats.guest) + 3 * 4), 2, args, 1) != 1;
    g_ecx = steam_user_stats.guest;
    args[0] = score; args[1] = stat_out;
    stats_failed |= void_call_guest(MEM32(MEM32(steam_user_stats.guest) + 1 * 4), 2, args, 1) != 1 || MEM32(stat_out) != 42;
    g_ecx = steam_user_stats.guest;
    args[0] = award;
    stats_failed |= void_call_guest(MEM32(MEM32(steam_user_stats.guest) + 7 * 4), 1, args, 1) != 1;
    g_ecx = steam_user_stats.guest;
    args[0] = award; args[1] = stat_out;
    stats_failed |= void_call_guest(MEM32(MEM32(steam_user_stats.guest) + 6 * 4), 2, args, 1) != 1 || MEM8(stat_out) != 1;
    g_ecx = steam_user_stats.guest;
    MEM32(stat_out) = 0xA5A5A5A5u;
    args[0] = score; args[1] = stat_out;
    stats_failed |= void_call_guest(MEM32(MEM32(steam_user_stats.guest) + 40 * 4), 2, args, 1) != 0 ||
        MEM32(stat_out) != 0xA5A5A5A5u;
    g_ecx = steam_user_stats.guest;
    args[0] = score; args[1] = 2; args[2] = 1;
    g_edx = 0xFFFFFFFFu;
    stats_failed |= void_call_guest(MEM32(MEM32(steam_user_stats.guest) + 22 * 4), 3, args, 1) != 0 || g_edx != 0;
    void_gfree(score); void_gfree(award); void_gfree(stat_out);
    uint32_t beta = void_galloc(16), beta_args[2] = { beta, 16 };
    if (!beta) return 1;
    g_ecx = apps;
    uint32_t beta_result = void_call_guest(MEM32(MEM32(apps) + 22 * 4), 2, beta_args, 1);
    g_ecx = apps;
    uint32_t build = void_call_guest(MEM32(MEM32(apps) + 23 * 4), 0, NULL, 1);
    uint32_t voice_sizes = void_galloc(8);
    if (!voice_sizes) return 1;
    MEM32(voice_sizes) = MEM32(voice_sizes + 4) = 0xFFFFFFFFu;
    if (!steam_user.guest) void_com_wrap(&steam_user, &user_class, 0);
    g_ecx = steam_user.guest;
    args[0] = voice_sizes; args[1] = voice_sizes + 4; args[2] = 0;
    uint32_t voice = void_call_guest(MEM32(MEM32(steam_user.guest) + 9 * 4), 3, args, 1);
    void_log("[selftest] Steam voice result=%u sizes=%08X/%08X", voice, MEM32(voice_sizes), MEM32(voice_sizes + 4));
    uint32_t id_args[4] = { voice_sizes, 0, 0, 0 };
    g_ecx = steam_user.guest;
    uint32_t id_result = void_call_guest(MEM32(MEM32(steam_user.guest) + 2 * 4), 1, id_args, 1);
    int id_ok = id_result == voice_sizes && MEM32(voice_sizes) == (uint32_t)steam_identity() && MEM32(voice_sizes + 4) == 0x01100001u;
    if (!steam_matchmaking.guest) void_com_wrap(&steam_matchmaking, &matchmaking_class, 0);
    g_ecx = steam_matchmaking.guest;
    uint32_t owner_result = void_call_guest(MEM32(MEM32(steam_matchmaking.guest) + 35 * 4), 3, id_args, 1);
    int owner_ok = owner_result == voice_sizes && !MEM32(voice_sizes) && !MEM32(voice_sizes + 4);
    g_ecx = steam_matchmaking.guest;
    g_edx = 0xFFFFFFFFu;
    uint32_t lobby_list = void_call_guest(MEM32(MEM32(steam_matchmaking.guest) + 4 * 4), 0, NULL, 1);
    int matchmaking_failed = lobby_list == 0 || g_edx != 0;
    id_args[0] = id_args[1] = id_args[2] = 0;
    g_ecx = steam_matchmaking.guest;
    matchmaking_failed |= void_call_guest(MEM32(MEM32(steam_matchmaking.guest) + 5 * 4), 3, id_args, 1) != 0;
    id_args[0] = voice_sizes;
    g_ecx = steam_matchmaking.guest;
    uint32_t lobby_id = void_call_guest(MEM32(MEM32(steam_matchmaking.guest) + 12 * 4), 2, id_args, 1);
    matchmaking_failed |= lobby_id != voice_sizes || MEM32(voice_sizes) != 0 || MEM32(voice_sizes + 4) != 0;
    g_ecx = friends;
    args[0] = 0;
    stats_failed |= void_call_guest(MEM32(MEM32(friends) + 3 * 4), 1, args, 1) != 0;
    g_ecx = friends;
    args[0] = voice_sizes; args[1] = args[2] = 0;
    stats_failed |= void_call_guest(MEM32(MEM32(friends) + 4 * 4), 3, args, 1) != voice_sizes ||
        MEM32(voice_sizes) != 0 || MEM32(voice_sizes + 4) != 0;
    g_ecx = friends;
    args[0] = args[1] = args[2] = 0;
    stats_failed |= void_call_guest(MEM32(MEM32(friends) + 9 * 4), 3, args, 1) != friends_empty_text();
    uint32_t music_version = void_gstrdup("STEAMMUSIC_INTERFACE_VERSION001");
    uint32_t music = void_steam_interface(music_version);
    if (!music_version || !music) return 1;
    void_gfree(music_version);
    g_ecx = music;
    args[0] = 0x3F800000u;
    uint32_t volume = void_call_guest(MEM32(MEM32(music) + 7 * 4), 1, args, 1);
    int failed = beta_result || build || MEM32(beta) != 0 || voice != 2 || volume || stats_failed || matchmaking_failed ||
        client_hook || notification || utils_hook || !id_ok || !owner_ok || MEM32(voice_sizes) || MEM32(voice_sizes + 4);
    void_gfree(beta);
    void_gfree(voice_sizes);
    return friends && utils && !subscribed && !failed && !steam_lan_selfcheck() ? 0 : 1;
}

#define STEAM "steam_api.dll"

CDECL_EXPORT(STEAM, SteamAPI_Init) { return 1; }
CDECL_EXPORT(STEAM, SteamAPI_RestartAppIfNecessary) { return 0; }
CDECL_EXPORT(STEAM, SteamAPI_Shutdown) { steam_server_stop();lan_leave(&steam_lan);lan_pump(&steam_lan);lan_shutdown(&steam_lan);return 0; }
CDECL_EXPORT(STEAM, SteamAPI_RunCallbacks) { steam_callbacks_run();return 0; }
CDECL_EXPORT(STEAM, SteamAPI_RegisterCallback) { steam_register(ARG(0),ARG(1),0);return 0; }
CDECL_EXPORT(STEAM, SteamAPI_UnregisterCallback) { steam_unregister(ARG(0),0,0);return 0; }
CDECL_EXPORT(STEAM, SteamAPI_RegisterCallResult) { if(void_vm_readable(ARG(0),12))steam_register(ARG(0),MEM32(ARG(0)+8),steam_arg64(1));return 0; }
CDECL_EXPORT(STEAM, SteamAPI_UnregisterCallResult) { steam_unregister(ARG(0),steam_arg64(1),1);return 0; }
CDECL_EXPORT(STEAM, SteamAPI_GetHSteamUser) { return 1; }
CDECL_EXPORT(STEAM, SteamAPI_GetHSteamPipe) { return 1; }
CDECL_EXPORT(STEAM, SteamInternal_CreateInterface)
{
    char *version = void_astr_utf8(ARG(0));
    if (version && !strcmp(version, "SteamClient017")) {
        free(version);
        if (!steam_client.guest) void_com_wrap(&steam_client, &client_class, 0);
        VLOG("[steam] SteamClient017 -> %08X", steam_client.guest);
        return steam_client.guest;
    }
    void_log("[steam] local interface %s is unavailable", version ? version : "(null)");
    free(version);
    return 0;
}
CDECL_EXPORT(STEAM, SteamGameServer_GetHSteamUser) { return steam_server_lan.started==1?2:0; }
CDECL_EXPORT(STEAM, SteamGameServer_GetHSteamPipe) { return steam_server_lan.started==1?2:0; }
CDECL_EXPORT(STEAM, SteamGameServer_RunCallbacks) { steam_callbacks_run();return 0; }
CDECL_EXPORT(STEAM, SteamGameServer_Shutdown) { steam_server_stop();return 0; }
CDECL_EXPORT(STEAM, SteamInternal_GameServer_Init) { return steam_server_start(ARG(2),ARG(3)); }
