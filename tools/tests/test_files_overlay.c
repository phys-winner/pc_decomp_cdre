/* A newly created overlay parent must invalidate an already cached miss. */
#include "../../android/host/files.c"
#include <assert.h>

int main(int argc, char **argv)
{
    assert(argc == 2);
    char game[1024], data[1024], overlay[1024];
    snprintf(game, sizeof game, "%s/game", argv[1]);
    snprintf(data, sizeof data, "%s/data", argv[1]);
    snprintf(overlay, sizeof overlay, "%s/data/overlay", argv[1]);
    mkdirs(overlay);
    void_files_set_overlay(overlay);
    assert(void_files_init(game, data));
    const char *path = "C:\\Games\\Crashday\\user\\nested\\__test.cpk";
    char *missing = to_host_ex(path, RESOLVE_OVERLAY, NULL, NULL, NULL);
    assert(missing && !under(missing, overlay));
    free(missing);
    uint32_t error;
    uint32_t handle = create_file(path, GENERIC_WRITE_, CREATE_ALWAYS_, 0, &error);
    assert(handle != WIN_INVALID_HANDLE && !error);
    assert(void_handle_close(handle));
    char *found = to_host_ex(path, RESOLVE_OVERLAY, NULL, NULL, NULL);
    struct stat st;
    assert(found && under(found, overlay) && !stat(found, &st) && S_ISREG(st.st_mode));
    free(found);
    puts("PASS overlay: cached missing parent resolves a newly created nested file without restart");
    return 0;
}
