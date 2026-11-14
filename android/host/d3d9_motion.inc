extern int d3d_gl_temporal_enabled(void);
extern void d3d_gl_temporal_parameters(d3d_device *, float[2], float[2], int *);

typedef struct {
    uintptr_t buffer;
    uint32_t owner, offset, frame, collision;
    float current[16], previous[16], world[16];
} motion_object;
static motion_object motion_objects[4096];
static uint32_t motion_frame = UINT32_MAX;
static float motion_roll[2], motion_previous_roll[2];
static int motion_camera_valid;

static void motion_reset(void)
{
    memset(motion_objects, 0, sizeof motion_objects); motion_frame = UINT32_MAX; motion_camera_valid = 0;
}

static float motion_previous(d3d_device *d, float previous[16], float previous_roll[2])
{
    float view[16], wvp[16];
    mul(d->st.transforms[256], d->st.transforms[2], view); mul(view, d->st.transforms[3], wvp);
    extern void void_input_horizon(float *, float *);
    float roll[2]; void_input_horizon(&roll[0], &roll[1]);
    if (motion_frame != d->frame) {
        motion_camera_valid = motion_frame + 1 == d->frame;
        memcpy(motion_previous_roll, motion_roll, sizeof roll); memcpy(motion_roll, roll, sizeof roll);
        motion_frame = d->frame;
    }
    uintptr_t buffer = (uintptr_t)d->st.streams[0];
    uint32_t owner = d->st.world_identity, offset = d->st.stream_offset[0];
    unsigned hash = (unsigned)((buffer >> 4) ^ owner ^ (owner >> 12) ^ offset) & 4095u;
    motion_object *object = NULL;
    for (unsigned i = 0; i < 8; ++i) {
        motion_object *candidate = &motion_objects[(hash + i) & 4095u];
        if (!candidate->buffer || (candidate->buffer == buffer && candidate->owner == owner && candidate->offset == offset) ||
            d->frame - candidate->frame > 2) { object = candidate; break; }
    }
    float reactive = 1;
    if (object) {
        int match = object->buffer == buffer && object->owner == owner && object->offset == offset;
        if (match && object->frame == d->frame) {
            /* Reused temporary matrix owners are rejected instead of cross-matching cars. */
            if (memcmp(object->world, d->st.transforms[256], 64) || memcmp(object->current, wvp, 64)) object->collision = d->frame;
        } else {
            if (match && object->frame + 1 == d->frame) memcpy(object->previous, object->current, 64);
            else memcpy(object->previous, wvp, 64);
            if (!match || object->frame + 1 != d->frame) object->collision = d->frame;
            object->buffer = buffer; object->owner = owner; object->offset = offset; object->frame = d->frame;
            memcpy(object->current, wvp, 64); memcpy(object->world, d->st.transforms[256], 64);
        }
        if (motion_camera_valid && d->frame - object->collision > 1) reactive = 0;
        memcpy(previous, object->previous, 64);
    }
    if (!object || !motion_camera_valid) {
        memcpy(previous, wvp, 64);
    }
    memcpy(previous_roll, motion_camera_valid ? motion_previous_roll : roll, sizeof roll);
    return reactive;
}
