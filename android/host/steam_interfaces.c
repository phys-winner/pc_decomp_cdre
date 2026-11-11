#include "host.h"
#include "com.h"
#include "steam_interfaces.h"
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/statvfs.h>
#include <time.h>
#include <unistd.h>

static void_com_object steam_remote;
typedef struct { char *name; uint32_t size; } remote_entry;
static remote_entry remote_entries[4096];
static uint32_t remote_guest_names[4096];
static uint32_t remote_count;
static int remote_dirty = 1;
static pthread_mutex_t remote_lock = PTHREAD_MUTEX_INITIALIZER;

static char *remote_path(const char *name)
{
    if (!name || !*name || *name == '/' || *name == '\\' || strchr(name, ':')) return NULL;
    const char *part = name;
    for (const char *p = name; ; ++p) {
        unsigned char c = (unsigned char)*p;
        if (c < 32 && c) return NULL;
        if (c == '/' || c == '\\' || !c) {
            size_t length = (size_t)(p - part);
            if (!length || (length == 1 && part[0] == '.') ||
                (length == 2 && part[0] == '.' && part[1] == '.')) return NULL;
            if (!c) break;
            part = p + 1;
        }
    }
    char windows[1024];
    if (snprintf(windows, sizeof windows,
                 "C:\\Users\\Player\\AppData\\Local\\Crashday\\SteamCloud\\%s", name) >= (int)sizeof windows)
        return NULL;
    return void_path_to_host(windows);
}

static int remote_stat(const char *name, struct stat *st)
{
    char *path = remote_path(name);
    if (!path) return -1;
    void_blocking_begin();
    int result = stat(path, st);
    void_blocking_end();
    free(path);
    return result;
}

static void remote_clear(void)
{
    for (uint32_t i = 0; i < remote_count; ++i) free(remote_entries[i].name);
    remote_count = 0;
}

static int remote_name_compare(const void *a, const void *b)
{
    return strcmp(((const remote_entry *)a)->name, ((const remote_entry *)b)->name);
}

static void remote_scan(const char *root, const char *relative)
{
    char directory[2048];
    if (snprintf(directory, sizeof directory, "%s%s%s", root, *relative ? "/" : "", relative) >= (int)sizeof directory)
        return;
    DIR *dir = opendir(directory);
    if (!dir) return;
    struct dirent *entry;
    while ((entry = readdir(dir))) {
        if (!strcmp(entry->d_name, ".") || !strcmp(entry->d_name, "..")) continue;
        char path[2048], name[1024];
        if (snprintf(path, sizeof path, "%s/%s", directory, entry->d_name) >= (int)sizeof path ||
            snprintf(name, sizeof name, "%s%s%s", relative, *relative ? "/" : "", entry->d_name) >= (int)sizeof name)
            continue;
        struct stat st;
        if (lstat(path, &st)) continue;
        if (S_ISDIR(st.st_mode)) remote_scan(root, name);
        else if (S_ISREG(st.st_mode) && st.st_size >= 0 && st.st_size <= INT32_MAX && remote_count < 4096) {
            for (char *p = name; *p; ++p) if (*p >= 'A' && *p <= 'Z') *p += 'a' - 'A';
            remote_entries[remote_count].name = strdup(name);
            remote_entries[remote_count].size = (uint32_t)st.st_size;
            ++remote_count;
        }
    }
    closedir(dir);
}

static void remote_refresh_locked(void)
{
    if (!remote_dirty) return;
    remote_clear();
    char *root = remote_path("index");
    if (root) {
        char *slash = strrchr(root, '/');
        if (slash) *slash = 0;
        void_blocking_begin();
        remote_scan(root, "");
        void_blocking_end();
        qsort(remote_entries, remote_count, sizeof *remote_entries, remote_name_compare);
        free(root);
    }
    remote_dirty = 0;
}

static uint32_t remote_write(const char *name, uint32_t data, uint32_t size)
{
    if (size > 128u * 1024u * 1024u || (size && (!data || !void_vm_readable(data, size)))) return 0;
    char *path = remote_path(name);
    if (!path) return 0;
    char *slash = strrchr(path, '/');
    if (!slash) { free(path); return 0; }
    *slash = 0;
    for (char *p = path + 1; *p; ++p) {
        if (*p == '/') { *p = 0; mkdir(path, 0775); *p = '/'; }
    }
    mkdir(path, 0775);
    *slash = '/';
    void_blocking_begin();
    FILE *file = fopen(path, "wb");
    size_t written = file ? fwrite(GPTR(data), 1, size, file) : 0;
    int ok = file && written == size;
    if (file && fclose(file)) ok = 0;
    void_blocking_end();
    free(path);
    if (ok) remote_dirty = 1;
    return ok;
}

static uint32_t remote_read(const char *name, uint32_t data, uint32_t size)
{
    if (size > 128u * 1024u * 1024u || (size && (!data || !void_vm_writable(data, size)))) return 0;
    char *path = remote_path(name);
    if (!path) return 0;
    void_blocking_begin();
    FILE *file = fopen(path, "rb");
    size_t count = file ? fread(GPTR(data), 1, size, file) : 0;
    if (file && ferror(file)) count = 0;
    if (file) fclose(file);
    void_blocking_end();
    free(path);
    return (uint32_t)count;
}

COM_METHOD(rs, FileWrite, 4)
{
    char *name = void_astr_utf8(ARG(1));
    if (!name) return 0;
    pthread_mutex_lock(&remote_lock);
    uint32_t result = remote_write(name, ARG(2), ARG(3));
    pthread_mutex_unlock(&remote_lock);
    free(name);
    return result;
}
COM_METHOD(rs, FileRead, 4)
{
    char *name = void_astr_utf8(ARG(1));
    if (!name) return 0;
    pthread_mutex_lock(&remote_lock);
    uint32_t result = remote_read(name, ARG(2), ARG(3));
    pthread_mutex_unlock(&remote_lock);
    free(name);
    return result;
}
#define RS0(name, nargs) COM_METHOD(rs, name, nargs) { g_edx = 0; return 0; }
RS0(FileWriteAsync, 4)
RS0(FileReadAsync, 4)
RS0(FileReadAsyncComplete, 5)
COM_METHOD(rs, FileForget, 2) { return 0; }
COM_METHOD(rs, FileDelete, 2)
{
    char *name = void_astr_utf8(ARG(1));
    char *path = name ? remote_path(name) : NULL;
    free(name);
    if (!path) return 0;
    pthread_mutex_lock(&remote_lock);
    void_blocking_begin();
    int ok = !unlink(path);
    void_blocking_end();
    if (ok) remote_dirty = 1;
    pthread_mutex_unlock(&remote_lock);
    free(path);
    return ok;
}
RS0(FileShare, 2)
COM_METHOD(rs, SetSyncPlatforms, 3) { struct stat st; char *name = void_astr_utf8(ARG(1)); int ok = name && !remote_stat(name, &st); free(name); return ok; }
RS0(FileWriteStreamOpen, 2)
RS0(FileWriteStreamWriteChunk, 5)
RS0(FileWriteStreamClose, 3)
RS0(FileWriteStreamCancel, 3)
COM_METHOD(rs, FileExists, 2) { struct stat st; char *name = void_astr_utf8(ARG(1)); int ok = name && !remote_stat(name, &st) && S_ISREG(st.st_mode); free(name); return ok; }
COM_METHOD(rs, FilePersisted, 2) { struct stat st; char *name = void_astr_utf8(ARG(1)); int ok = name && !remote_stat(name, &st) && S_ISREG(st.st_mode); free(name); return ok; }
COM_METHOD(rs, GetFileSize, 2) { struct stat st; char *name = void_astr_utf8(ARG(1)); int ok = name && !remote_stat(name, &st); free(name); return ok && st.st_size <= INT32_MAX ? (uint32_t)st.st_size : 0; }
COM_METHOD(rs, GetFileTimestamp, 2)
{
    struct stat st;
    char *name = void_astr_utf8(ARG(1));
    int ok = name && !remote_stat(name, &st);
    free(name);
    uint64_t timestamp = ok ? (uint64_t)st.st_mtime : 0;
    g_edx = (uint32_t)(timestamp >> 32);
    return (uint32_t)timestamp;
}
COM_METHOD(rs, GetSyncPlatforms, 2) { return 1; }
COM_METHOD(rs, GetFileCount, 0)
{
    pthread_mutex_lock(&remote_lock);
    remote_refresh_locked();
    uint32_t result = remote_count;
    pthread_mutex_unlock(&remote_lock);
    return result;
}
COM_METHOD(rs, GetFileNameAndSize, 3)
{
    if (ARG(2)) MEM32(ARG(2)) = 0;
    pthread_mutex_lock(&remote_lock);
    remote_refresh_locked();
    uint32_t index = ARG(1), result = 0;
    if (index < remote_count) {
        if (!remote_guest_names[index]) remote_guest_names[index] = void_gstrdup(remote_entries[index].name);
        result = remote_guest_names[index];
        if (ARG(2)) MEM32(ARG(2)) = remote_entries[index].size;
    }
    pthread_mutex_unlock(&remote_lock);
    return result;
}
COM_METHOD(rs, GetQuota, 3)
{
    struct statvfs info;
    uint64_t total = 64u * 1024u * 1024u, available = total;
    void_blocking_begin();
    int ok = !statvfs(void_data_dir(), &info);
    void_blocking_end();
    if (ok) {
        total = (uint64_t)info.f_blocks * info.f_frsize;
        available = (uint64_t)info.f_bavail * info.f_frsize;
    }
    if (ARG(1)) MEM32(ARG(1)) = (uint32_t)(total > INT32_MAX ? INT32_MAX : total);
    if (ARG(2)) MEM32(ARG(2)) = (uint32_t)(available > INT32_MAX ? INT32_MAX : available);
    return 1;
}
COM_METHOD(rs, IsCloudEnabledForAccount, 0) { return 0; }
COM_METHOD(rs, IsCloudEnabledForApp, 0) { return 0; }
COM_METHOD(rs, SetCloudEnabledForApp, 2) { return 0; }
RS0(UGCDownload, 4)
RS0(GetUGCDownloadProgress, 5)
RS0(GetUGCDetails, 7)
RS0(UGCRead, 7)
RS0(GetCachedUGCCount, 0)
RS0(GetCachedUGCHandle, 2)
RS0(PublishWorkshopFile, 9)
RS0(CreatePublishedFileUpdateRequest, 3)
RS0(UpdatePublishedFileFile, 4)
RS0(UpdatePublishedFilePreviewFile, 4)
RS0(UpdatePublishedFileTitle, 4)
RS0(UpdatePublishedFileDescription, 4)
RS0(UpdatePublishedFileVisibility, 4)
RS0(UpdatePublishedFileTags, 4)
RS0(CommitPublishedFileUpdate, 3)
RS0(GetPublishedFileDetails, 4)
RS0(DeletePublishedFile, 3)
RS0(EnumerateUserPublishedFiles, 2)
RS0(SubscribePublishedFile, 3)
RS0(EnumerateUserSubscribedFiles, 2)
RS0(UnsubscribePublishedFile, 3)
RS0(UpdatePublishedFileSetChangeDescription, 4)
RS0(GetPublishedItemVoteDetails, 3)
RS0(UpdateUserPublishedItemVote, 4)
RS0(GetUserPublishedItemVoteDetails, 3)
RS0(EnumerateUserSharedWorkshopFiles, 6)
RS0(PublishVideo, 10)
RS0(SetUserPublishedFileAction, 4)
RS0(EnumeratePublishedFilesByUserAction, 3)
RS0(EnumeratePublishedWorkshopFiles, 7)
RS0(UGCDownloadToLocation, 5)
#undef RS0

static const void_fn remote_methods[] = {
    rs_FileWrite, rs_FileRead, rs_FileWriteAsync, rs_FileReadAsync, rs_FileReadAsyncComplete,
    rs_FileForget, rs_FileDelete, rs_FileShare, rs_SetSyncPlatforms, rs_FileWriteStreamOpen,
    rs_FileWriteStreamWriteChunk, rs_FileWriteStreamClose, rs_FileWriteStreamCancel, rs_FileExists,
    rs_FilePersisted, rs_GetFileSize, rs_GetFileTimestamp, rs_GetSyncPlatforms, rs_GetFileCount,
    rs_GetFileNameAndSize, rs_GetQuota, rs_IsCloudEnabledForAccount, rs_IsCloudEnabledForApp,
    rs_SetCloudEnabledForApp, rs_UGCDownload, rs_GetUGCDownloadProgress, rs_GetUGCDetails,
    rs_UGCRead, rs_GetCachedUGCCount, rs_GetCachedUGCHandle, rs_PublishWorkshopFile,
    rs_CreatePublishedFileUpdateRequest, rs_UpdatePublishedFileFile, rs_UpdatePublishedFilePreviewFile,
    rs_UpdatePublishedFileTitle, rs_UpdatePublishedFileDescription, rs_UpdatePublishedFileVisibility,
    rs_UpdatePublishedFileTags, rs_CommitPublishedFileUpdate, rs_GetPublishedFileDetails,
    rs_DeletePublishedFile, rs_EnumerateUserPublishedFiles, rs_SubscribePublishedFile,
    rs_EnumerateUserSubscribedFiles, rs_UnsubscribePublishedFile, rs_UpdatePublishedFileSetChangeDescription,
    rs_GetPublishedItemVoteDetails, rs_UpdateUserPublishedItemVote, rs_GetUserPublishedItemVoteDetails,
    rs_EnumerateUserSharedWorkshopFiles, rs_PublishVideo, rs_SetUserPublishedFileAction,
    rs_EnumeratePublishedFilesByUserAction, rs_EnumeratePublishedWorkshopFiles, rs_UGCDownloadToLocation,
};
static void_com_class remote_class = { "ISteamRemoteStorage013", 55, remote_methods, 0 };

static void_com_object steam_controller;
COM_METHOD(ctrl, Init, 0) { return 1; }
COM_METHOD(ctrl, Shutdown, 0) { return 1; }
#define CTRL0(name, nargs) COM_METHOD(ctrl, name, nargs) { return 0; }
CTRL0(RunFrame, 0)
CTRL0(GetConnectedControllers, 2)
CTRL0(ShowBindingPanel, 3)
CTRL0(GetActionSetHandle, 2)
CTRL0(ActivateActionSet, 5)
CTRL0(GetCurrentActionSet, 3)
CTRL0(GetDigitalActionHandle, 2)
CTRL0(GetDigitalActionData, 5)
CTRL0(GetDigitalActionOrigins, 8)
CTRL0(GetAnalogActionHandle, 2)
CTRL0(GetAnalogActionData, 5)
CTRL0(GetAnalogActionOrigins, 8)
CTRL0(StopAnalogActionMomentum, 5)
CTRL0(TriggerHapticPulse, 5)
CTRL0(TriggerRepeatedHapticPulse, 8)
#undef CTRL0
static const void_fn controller_methods[] = {
    ctrl_Init, ctrl_Shutdown, ctrl_RunFrame, ctrl_GetConnectedControllers, ctrl_ShowBindingPanel,
    ctrl_GetActionSetHandle, ctrl_ActivateActionSet, ctrl_GetCurrentActionSet, ctrl_GetDigitalActionHandle,
    ctrl_GetDigitalActionData, ctrl_GetDigitalActionOrigins, ctrl_GetAnalogActionHandle,
    ctrl_GetAnalogActionData, ctrl_GetAnalogActionOrigins, ctrl_StopAnalogActionMomentum,
    ctrl_TriggerHapticPulse, ctrl_TriggerRepeatedHapticPulse,
};
static void_com_class controller_class = { "ISteamController003", 17, controller_methods, 0 };

static void_com_object steam_ugc;
#define UGC0(name, nargs) COM_METHOD(ugc, name, nargs) { g_edx = 0; return 0; }
UGC0(CreateQueryUserUGCRequest, 8)
UGC0(CreateQueryAllUGCRequest, 6)
UGC0(CreateQueryUGCDetailsRequest, 3)
UGC0(SendQueryUGCRequest, 3)
UGC0(GetQueryUGCResult_old, 5)
UGC0(GetQueryUGCPreviewURL, 6)
UGC0(GetQueryUGCMetadata, 6)
UGC0(GetQueryUGCChildren, 6)
UGC0(GetQueryUGCStatistic, 6)
UGC0(GetQueryUGCNumAdditionalPreviews, 4)
UGC0(GetQueryUGCAdditionalPreview, 10)
UGC0(GetQueryUGCNumKeyValueTags, 4)
UGC0(GetQueryUGCKeyValueTag, 9)
UGC0(ReleaseQueryUGCRequest, 3)
UGC0(AddRequiredTag, 4)
UGC0(AddExcludedTag, 4)
UGC0(SetReturnKeyValueTags, 4)
UGC0(SetReturnLongDescription, 4)
UGC0(SetReturnMetadata, 4)
UGC0(SetReturnChildren, 4)
UGC0(SetReturnAdditionalPreviews, 4)
UGC0(SetReturnTotalOnly, 4)
UGC0(SetLanguage, 4)
UGC0(SetAllowCachedResponse, 4)
UGC0(SetCloudFileNameFilter, 4)
UGC0(SetMatchAnyTag, 4)
UGC0(SetSearchText, 4)
UGC0(SetRankedByTrendDays, 4)
UGC0(AddRequiredKeyValueTag, 5)
UGC0(RequestUGCDetails_old, 4)
UGC0(CreateItem, 3)
UGC0(StartItemUpdate, 4)
UGC0(SetItemTitle, 4)
UGC0(SetItemDescription, 4)
UGC0(SetItemUpdateLanguage, 4)
UGC0(SetItemMetadata, 4)
UGC0(SetItemVisibility, 4)
UGC0(SetItemTags, 4)
UGC0(SetItemContent, 4)
UGC0(SetItemPreview, 4)
UGC0(RemoveItemKeyValueTags, 4)
UGC0(AddItemKeyValueTag, 5)
UGC0(AddItemPreviewFile, 5)
UGC0(AddItemPreviewVideo, 4)
UGC0(UpdateItemPreviewFile, 5)
UGC0(UpdateItemPreviewVideo, 5)
UGC0(RemoveItemPreview, 4)
UGC0(SubmitItemUpdate, 4)
UGC0(GetItemUpdateProgress, 5)
UGC0(SetUserItemVote, 4)
UGC0(GetUserItemVote, 3)
UGC0(AddItemToFavorites, 4)
UGC0(RemoveItemFromFavorites, 4)
UGC0(SubscribeItem, 3)
UGC0(UnsubscribeItem, 3)
UGC0(GetNumSubscribedItems, 0)
UGC0(GetSubscribedItems, 3)
UGC0(GetItemState, 3)
UGC0(GetItemInstallInfo, 7)
UGC0(GetItemDownloadInfo, 5)
UGC0(DownloadItem, 4)
UGC0(BInitWorkshopForGameServer, 3)
UGC0(SuspendDownloads, 2)
UGC0(StartPlaytimeTracking, 3)
UGC0(StopPlaytimeTracking, 3)
UGC0(StopPlaytimeTrackingForAllItems, 0)
#undef UGC0
static const void_fn ugc_methods[] = {
    ugc_CreateQueryUserUGCRequest, ugc_CreateQueryAllUGCRequest, ugc_CreateQueryUGCDetailsRequest,
    ugc_SendQueryUGCRequest, ugc_GetQueryUGCResult_old, ugc_GetQueryUGCPreviewURL,
    ugc_GetQueryUGCMetadata, ugc_GetQueryUGCChildren, ugc_GetQueryUGCStatistic,
    ugc_GetQueryUGCNumAdditionalPreviews, ugc_GetQueryUGCAdditionalPreview,
    ugc_GetQueryUGCNumKeyValueTags, ugc_GetQueryUGCKeyValueTag, ugc_ReleaseQueryUGCRequest,
    ugc_AddRequiredTag, ugc_AddExcludedTag, ugc_SetReturnKeyValueTags, ugc_SetReturnLongDescription,
    ugc_SetReturnMetadata, ugc_SetReturnChildren, ugc_SetReturnAdditionalPreviews,
    ugc_SetReturnTotalOnly, ugc_SetLanguage, ugc_SetAllowCachedResponse, ugc_SetCloudFileNameFilter,
    ugc_SetMatchAnyTag, ugc_SetSearchText, ugc_SetRankedByTrendDays, ugc_AddRequiredKeyValueTag,
    ugc_RequestUGCDetails_old, ugc_CreateItem, ugc_StartItemUpdate, ugc_SetItemTitle,
    ugc_SetItemDescription, ugc_SetItemUpdateLanguage, ugc_SetItemMetadata, ugc_SetItemVisibility,
    ugc_SetItemTags, ugc_SetItemContent, ugc_SetItemPreview, ugc_RemoveItemKeyValueTags,
    ugc_AddItemKeyValueTag, ugc_AddItemPreviewFile, ugc_AddItemPreviewVideo, ugc_UpdateItemPreviewFile,
    ugc_UpdateItemPreviewVideo, ugc_RemoveItemPreview, ugc_SubmitItemUpdate, ugc_GetItemUpdateProgress,
    ugc_SetUserItemVote, ugc_GetUserItemVote, ugc_AddItemToFavorites, ugc_RemoveItemFromFavorites,
    ugc_SubscribeItem, ugc_UnsubscribeItem, ugc_GetNumSubscribedItems, ugc_GetSubscribedItems,
    ugc_GetItemState, ugc_GetItemInstallInfo, ugc_GetItemDownloadInfo, ugc_DownloadItem,
    ugc_BInitWorkshopForGameServer, ugc_SuspendDownloads, ugc_StartPlaytimeTracking,
    ugc_StopPlaytimeTracking, ugc_StopPlaytimeTrackingForAllItems,
};
static void_com_class ugc_class = { "ISteamUGC008", 66, ugc_methods, 0 };

static void_com_object steam_app_list;
#define APPLIST0(name, nargs) COM_METHOD(app_list, name, nargs) { return 0; }
APPLIST0(GetNumInstalledApps, 0)
APPLIST0(GetInstalledApps, 3)
APPLIST0(GetAppName, 4)
APPLIST0(GetAppInstallDir, 4)
APPLIST0(GetAppBuildId, 2)
#undef APPLIST0
static const void_fn app_list_methods[] = {
    app_list_GetNumInstalledApps, app_list_GetInstalledApps, app_list_GetAppName,
    app_list_GetAppInstallDir, app_list_GetAppBuildId,
};
static void_com_class app_list_class = { "ISteamAppList001", 5, app_list_methods, 0 };

static void_com_object steam_music;
#define MUSIC0(name) COM_METHOD(music, name, 0) { return 0; }
MUSIC0(BIsEnabled)
MUSIC0(BIsPlaying)
MUSIC0(GetPlaybackStatus)
MUSIC0(Play)
MUSIC0(Pause)
MUSIC0(PlayPrevious)
MUSIC0(PlayNext)
COM_METHOD(music, SetVolume, 1) { return 0; }
MUSIC0(GetVolume)
#undef MUSIC0
static const void_fn music_methods[] = {
    music_BIsEnabled, music_BIsPlaying, music_GetPlaybackStatus, music_Play, music_Pause,
    music_PlayPrevious, music_PlayNext, music_SetVolume, music_GetVolume,
};
static void_com_class music_class = { "ISteamMusic001", 9, music_methods, 0 };

static void_com_object steam_music_remote;
#define MR0(name, nargs) COM_METHOD(music_remote, name, nargs) { return 0; }
MR0(RegisterSteamMusicRemote, 2)
MR0(DeregisterSteamMusicRemote, 0)
MR0(BIsCurrentMusicRemote, 0)
MR0(BActivationSuccess, 2)
MR0(SetDisplayName, 2)
MR0(SetPNGIcon_64x64, 3)
MR0(EnablePlayPrevious, 2)
MR0(EnablePlayNext, 2)
MR0(EnableShuffled, 2)
MR0(EnableLooped, 2)
MR0(EnableQueue, 2)
MR0(EnablePlaylists, 2)
MR0(UpdatePlaybackStatus, 2)
MR0(UpdateShuffled, 2)
MR0(UpdateLooped, 2)
MR0(UpdateVolume, 2)
MR0(CurrentEntryWillChange, 0)
MR0(CurrentEntryIsAvailable, 2)
MR0(UpdateCurrentEntryText, 2)
MR0(UpdateCurrentEntryElapsedSeconds, 2)
MR0(UpdateCurrentEntryCoverArt, 3)
MR0(CurrentEntryDidChange, 0)
MR0(QueueWillChange, 0)
MR0(ResetQueueEntries, 0)
MR0(SetQueueEntry, 4)
MR0(SetCurrentQueueEntry, 2)
MR0(QueueDidChange, 0)
MR0(PlaylistWillChange, 0)
MR0(ResetPlaylistEntries, 0)
MR0(SetPlaylistEntry, 4)
MR0(SetCurrentPlaylistEntry, 2)
MR0(PlaylistDidChange, 0)
#undef MR0
static const void_fn music_remote_methods[] = {
    music_remote_RegisterSteamMusicRemote, music_remote_DeregisterSteamMusicRemote,
    music_remote_BIsCurrentMusicRemote, music_remote_BActivationSuccess, music_remote_SetDisplayName,
    music_remote_SetPNGIcon_64x64, music_remote_EnablePlayPrevious, music_remote_EnablePlayNext,
    music_remote_EnableShuffled, music_remote_EnableLooped, music_remote_EnableQueue,
    music_remote_EnablePlaylists, music_remote_UpdatePlaybackStatus, music_remote_UpdateShuffled,
    music_remote_UpdateLooped, music_remote_UpdateVolume, music_remote_CurrentEntryWillChange,
    music_remote_CurrentEntryIsAvailable, music_remote_UpdateCurrentEntryText,
    music_remote_UpdateCurrentEntryElapsedSeconds, music_remote_UpdateCurrentEntryCoverArt,
    music_remote_CurrentEntryDidChange, music_remote_QueueWillChange, music_remote_ResetQueueEntries,
    music_remote_SetQueueEntry, music_remote_SetCurrentQueueEntry, music_remote_QueueDidChange,
    music_remote_PlaylistWillChange, music_remote_ResetPlaylistEntries, music_remote_SetPlaylistEntry,
    music_remote_SetCurrentPlaylistEntry, music_remote_PlaylistDidChange,
};
static void_com_class music_remote_class = { "ISteamMusicRemote001", 32, music_remote_methods, 0 };

static void_com_object steam_inventory;
COM_METHOD(inv, GetResultStatus, 2) { return 8; }
COM_METHOD(inv, GetResultItems, 4) { if (ARG(3)) MEM32(ARG(3)) = 0; return 0; }
COM_METHOD(inv, GetResultTimestamp, 2) { return 0; }
COM_METHOD(inv, CheckResultSteamID, 4) { return 0; }
COM_METHOD(inv, DestroyResult, 2) { return 0; }
#define INV0(name, nargs) COM_METHOD(inv, name, nargs) { if (ARG(1)) MEM32(ARG(1)) = (uint32_t)-1; return 0; }
INV0(GetAllItems, 2)
INV0(GetItemsByID, 4)
COM_METHOD(inv, SerializeResult, 4) { if (ARG(3)) MEM32(ARG(3)) = 0; return 0; }
INV0(DeserializeResult, 5)
INV0(GenerateItems, 5)
INV0(GrantPromoItems, 2)
INV0(AddPromoItem, 3)
INV0(AddPromoItems, 4)
INV0(ConsumeItem, 5)
INV0(ExchangeItems, 8)
INV0(TransferItemQuantity, 7)
COM_METHOD(inv, SendItemDropHeartbeat, 0) { return 0; }
INV0(TriggerItemDrop, 3)
INV0(TradeItems, 10)
#undef INV0
COM_METHOD(inv, LoadItemDefinitions, 0) { return 1; }
COM_METHOD(inv, GetItemDefinitionIDs, 3) { if (ARG(2)) MEM32(ARG(2)) = 0; return 1; }
COM_METHOD(inv, GetItemDefinitionProperty, 5) { if (ARG(4)) MEM32(ARG(4)) = 0; return 0; }
COM_METHOD(inv, RequestEligiblePromoItemDefinitionsIDs, 3) { return 0; }
COM_METHOD(inv, GetEligiblePromoItemDefinitionIDs, 5) { if (ARG(3)) MEM32(ARG(3)) = 0; return 0; }
static const void_fn inventory_methods[] = {
    inv_GetResultStatus, inv_GetResultItems, inv_GetResultTimestamp, inv_CheckResultSteamID,
    inv_DestroyResult, inv_GetAllItems, inv_GetItemsByID, inv_SerializeResult, inv_DeserializeResult,
    inv_GenerateItems, inv_GrantPromoItems, inv_AddPromoItem, inv_AddPromoItems, inv_ConsumeItem,
    inv_ExchangeItems, inv_TransferItemQuantity, inv_SendItemDropHeartbeat, inv_TriggerItemDrop,
    inv_TradeItems, inv_LoadItemDefinitions, inv_GetItemDefinitionIDs, inv_GetItemDefinitionProperty,
    inv_RequestEligiblePromoItemDefinitionsIDs, inv_GetEligiblePromoItemDefinitionIDs,
};
static void_com_class inventory_class = { "ISteamInventory001", 24, inventory_methods, 0 };

static void_com_object steam_html;
COM_METHOD(html, Destroy, 2) { return 0; }
COM_METHOD(html, Delete, 2) { return 0; }
COM_METHOD(html, Init, 0) { return 0; }
COM_METHOD(html, Shutdown, 0) { return 1; }
#define HTML0(name, nargs) COM_METHOD(html, name, nargs) { return 0; }
HTML0(CreateBrowser, 3)
HTML0(RemoveBrowser, 2)
HTML0(LoadURL, 4)
HTML0(SetSize, 4)
HTML0(StopLoad, 2)
HTML0(Reload, 2)
HTML0(GoBack, 2)
HTML0(GoForward, 2)
HTML0(AddHeader, 4)
HTML0(ExecuteJavascript, 3)
HTML0(MouseUp, 3)
HTML0(MouseDown, 3)
HTML0(MouseDoubleClick, 3)
HTML0(MouseMove, 4)
HTML0(MouseWheel, 3)
HTML0(KeyDown, 4)
HTML0(KeyUp, 4)
HTML0(KeyChar, 4)
HTML0(SetHorizontalScroll, 3)
HTML0(SetVerticalScroll, 3)
HTML0(SetKeyFocus, 3)
HTML0(ViewSource, 2)
HTML0(CopyToClipboard, 2)
HTML0(PasteFromClipboard, 2)
HTML0(Find, 5)
HTML0(StopFind, 2)
HTML0(GetLinkAtPosition, 4)
HTML0(SetCookie, 8)
HTML0(SetPageScaleFactor, 5)
HTML0(SetBackgroundMode, 3)
HTML0(AllowStartRequest, 3)
HTML0(JSDialogResponse, 3)
HTML0(FileLoadDialogResponse, 3)
#undef HTML0
static const void_fn html_methods[] = {
    html_Destroy, html_Delete, html_Init, html_Shutdown, html_CreateBrowser, html_RemoveBrowser,
    html_LoadURL, html_SetSize, html_StopLoad, html_Reload, html_GoBack, html_GoForward,
    html_AddHeader, html_ExecuteJavascript, html_MouseUp, html_MouseDown, html_MouseDoubleClick,
    html_MouseMove, html_MouseWheel, html_KeyDown, html_KeyUp, html_KeyChar,
    html_SetHorizontalScroll, html_SetVerticalScroll, html_SetKeyFocus, html_ViewSource,
    html_CopyToClipboard, html_PasteFromClipboard, html_Find, html_StopFind, html_GetLinkAtPosition,
    html_SetCookie, html_SetPageScaleFactor, html_SetBackgroundMode, html_AllowStartRequest,
    html_JSDialogResponse, html_FileLoadDialogResponse,
};
static void_com_class html_class = { "ISteamHTMLSurface003", 37, html_methods, 0 };

static void_com_object steam_video;
COM_METHOD(video, GetVideoURL, 2) { return 0; }
COM_METHOD(video, IsBroadcasting, 2) { if (ARG(1)) MEM32(ARG(1)) = 0; return 0; }
static const void_fn video_methods[] = { video_GetVideoURL, video_IsBroadcasting };
static void_com_class video_class = { "ISteamVideo001", 2, video_methods, 0 };

uint32_t void_steam_interface(uint32_t version_va)
{
    char *version = void_astr_utf8(version_va);
    if (!version) return 0;
    struct { const char *version; void_com_object *object; void_com_class *class; } interfaces[] = {
        { "STEAMREMOTESTORAGE_INTERFACE_VERSION013", &steam_remote, &remote_class },
        { "SteamController003", &steam_controller, &controller_class },
        { "STEAMUGC_INTERFACE_VERSION008", &steam_ugc, &ugc_class },
        { "STEAMAPPLIST_INTERFACE_VERSION001", &steam_app_list, &app_list_class },
        { "STEAMMUSIC_INTERFACE_VERSION001", &steam_music, &music_class },
        { "STEAMMUSICREMOTE_INTERFACE_VERSION001", &steam_music_remote, &music_remote_class },
        { "STEAMINVENTORY_INTERFACE_V001", &steam_inventory, &inventory_class },
        { "STEAMHTMLSURFACE_INTERFACE_VERSION_003", &steam_html, &html_class },
        { "STEAMVIDEO_INTERFACE_V001", &steam_video, &video_class },
    };
    for (unsigned i = 0; i < sizeof interfaces / sizeof *interfaces; ++i) {
        if (!strcmp(version, interfaces[i].version)) {
            if (!interfaces[i].object->guest) void_com_wrap(interfaces[i].object, interfaces[i].class, 0);
            VLOG("[steam] %s -> %08X", interfaces[i].class->name, interfaces[i].object->guest);
            free(version);
            return interfaces[i].object->guest;
        }
    }
    void_log("[steam] unsupported interface %s", version);
    free(version);
    return 0;
}

int void_steam_storage_selftest(void)
{
    static const char payload[] = "Crashday ARM64 local storage\n";
    uint32_t version = void_gstrdup("STEAMREMOTESTORAGE_INTERFACE_VERSION013");
    uint32_t name = void_gstrdup("__arm64_selftest/save.bin");
    uint32_t input = void_galloc(sizeof payload), output = void_galloc(sizeof payload);
    uint32_t guest = void_steam_interface(version);
    int ok = 0;
    if (!version || !name || !input || !output || !guest) goto done;
    memcpy(GPTR(input), payload, sizeof payload);
    memset(GPTR(output), 0, sizeof payload);
    uint32_t table = MEM32(guest), args[4] = { name, input, sizeof payload, 0 };
    g_ecx = guest;
    if (!void_call_guest(MEM32(table), 4, args, 1)) goto done;
    args[1] = output;
    g_ecx = guest;
    if (void_call_guest(MEM32(table + 4), 4, args, 1) != sizeof payload ||
        memcmp(GPTR(output), payload, sizeof payload)) goto done;
    args[1] = 0;
    g_ecx = guest;
    if (void_call_guest(MEM32(table + 13 * 4), 2, args, 1) != 1) goto done;
    g_ecx = guest;
    if (void_call_guest(MEM32(table + 15 * 4), 2, args, 1) != sizeof payload) goto done;
    g_ecx = guest;
    if (void_call_guest(MEM32(table + 18 * 4), 1, args, 1) < 1) goto done;
    args[0] = 0;
    args[1] = output;
    g_ecx = guest;
    if (!void_call_guest(MEM32(table + 19 * 4), 3, args, 1)) goto done;
    uint32_t escape = void_gstrdup("../escape");
    if (!escape) goto done;
    args[0] = escape;
    g_ecx = guest;
    uint32_t rejected = void_call_guest(MEM32(table + 13 * 4), 2, args, 1);
    void_gfree(escape);
    if (rejected) goto done;
    args[0] = name;
    g_ecx = guest;
    if (void_call_guest(MEM32(table + 6 * 4), 2, args, 1) != 1) goto done;
    g_ecx = guest;
    if (void_call_guest(MEM32(table + 13 * 4), 2, args, 1) != 0) goto done;
    ok = 1;
done:
    if (name && guest) {
        uint32_t args[2] = { name, 0 };
        g_ecx = guest;
        void_call_guest(MEM32(MEM32(guest) + 6 * 4), 2, args, 1);
    }
    if (version) void_gfree(version);
    if (name) void_gfree(name);
    if (input) void_gfree(input);
    if (output) void_gfree(output);
    return ok;
}
