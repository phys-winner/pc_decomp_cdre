#include "host.h"
#include "input.h"

typedef struct {
    int kind, width, height, bpp, stride;
    uint32_t pixels;
} gdi_object;

static gdi_object objects[256];

static int gdi_new(int kind, int width, int height, int bpp)
{
    if (width < 0 || height < 0 || bpp < 0 || bpp > 64) return 0;
    int64_t stride = ((int64_t)width * bpp + 31) / 32 * 4;
    if (stride > INT32_MAX || (height && stride > 0x7FF00000u / (uint32_t)height)) return 0;
    for (int i = 1; i < 256; ++i) {
        if (objects[i].kind) continue;
        objects[i].kind = kind;
        objects[i].width = width;
        objects[i].height = height;
        objects[i].bpp = bpp;
        objects[i].stride = (int)stride;
        if (width > 0 && height > 0) {
            objects[i].pixels = void_galloc((uint32_t)stride * (uint32_t)height);
            if (!objects[i].pixels) { objects[i].kind = 0; return 0; }
        }
        VLOG("[gdi] new handle=%08X kind=%d %dx%d bpp=%d stride=%d pixels=%08X", i, kind, width, height, bpp, objects[i].stride, objects[i].pixels);
        return i;
    }
    return 0;
}

WINAPI_EXPORT("gdi32.dll", CreateDCW, 4) { return gdi_new(1, 0, 0, 0); }
WINAPI_EXPORT("gdi32.dll", CreateCompatibleDC, 1) { return gdi_new(1, 0, 0, 0); }
WINAPI_EXPORT("gdi32.dll", GetDC, 1) { return 1; }
WINAPI_EXPORT("gdi32.dll", ReleaseDC, 2) { return 1; }
WINAPI_EXPORT("gdi32.dll", DeleteDC, 1) { return 1; }

WINAPI_EXPORT("gdi32.dll", GetDeviceCaps, 2)
{
    int width, height;
    void_input_screen_size(&width, &height);
    switch (ARG(1)) {
    case 8: return (uint32_t)width;
    case 10: return (uint32_t)height;
    case 12: return 32;
    case 24: return 0xFFFFFFFFu;
    case 38: return 1 | 0x40 | 0x80 | 0x2000;
    case 88: case 90: return 96;
    case 2: return 2;
    default: return 0;
    }
}

WINAPI_EXPORT("gdi32.dll", CreateDIBSection, 6)
{
    uint32_t info = ARG(1);
    int width = (int32_t)MEM32(info), height = (int32_t)MEM32(info + 8);
    int bpp = MEM16(info + 14) ? MEM16(info + 14) : 32;
    void_log("[gdi] CreateDIBSection info=%08X width=%d height=%d bpp=%d", info, width, height, bpp);
    if (height == INT32_MIN) return 0;
    if (height < 0) height = -height;
    int object = gdi_new(2, width, height, bpp);
    if (ARG(3)) MEM32(ARG(3)) = objects[object].pixels;
    return object;
}

WINAPI_EXPORT("gdi32.dll", CreateCompatibleBitmap, 3) { return gdi_new(2, (int)ARG(1), (int)ARG(2), 32); }
WINAPI_EXPORT("gdi32.dll", CreateBitmap, 5) { return gdi_new(2, (int)ARG(0), (int)ARG(1), (int)ARG(3)); }

static uint32_t gdi_object_info(uint32_t handle, uint32_t bytes, uint32_t out)
{
    gdi_object *object = &objects[handle & 0xFF];
    if (object->kind != 2 || bytes < 24 || !out || !void_vm_writable(out, 24)) return 0;
    MEM32(out) = 0;
    MEM32(out + 4) = (uint32_t)object->width;
    MEM32(out + 8) = (uint32_t)object->height;
    MEM32(out + 12) = (uint32_t)object->stride;
    MEM16(out + 16) = 1;
    MEM16(out + 18) = (uint16_t)object->bpp;
    MEM32(out + 20) = object->pixels;
    return 24;
}
WINAPI_EXPORT("gdi32.dll", GetObjectW, 3) { return gdi_object_info(ARG(0), ARG(1), ARG(2)); }
WINAPI_EXPORT("gdi32.dll", GetObjectA, 3) { return gdi_object_info(ARG(0), ARG(1), ARG(2)); }

WINAPI_EXPORT("gdi32.dll", GetDIBits, 7)
{
    gdi_object *object = &objects[ARG(1) & 0xFF];
    if (!object->pixels || ARG(3) > (uint32_t)object->height) return 0;
    uint32_t lines = ARG(4);
    if (lines > (uint32_t)object->height - ARG(3)) lines = (uint32_t)object->height - ARG(3);
    uint32_t bytes = lines * (uint32_t)object->stride;
    if (!bytes || !ARG(6) || !void_vm_writable(ARG(6), bytes)) return 0;
    memcpy(GPTR(ARG(6)), GPTR(object->pixels + ARG(3) * (uint32_t)object->stride), bytes);
    return lines;
}

WINAPI_EXPORT("gdi32.dll", BitBlt, 9)
{
    gdi_object *dst = &objects[ARG(0) & 0xFF], *src = &objects[ARG(4) & 0xFF];
    int width = (int)ARG(2), height = (int)ARG(3);
    if (!dst->pixels || !src->pixels || width <= 0 || height <= 0) return 1;
    for (int y = 0; y < height; ++y) {
        int dy = (int)ARG(2) + y, sy = (int)ARG(6) + y;
        if (dy < 0 || sy < 0 || dy >= dst->height || sy >= src->height) continue;
        for (int x = 0; x < width; ++x) {
            int dx = (int)ARG(1) + x, sx = (int)ARG(5) + x;
            if (dx < 0 || sx < 0 || dx >= dst->width || sx >= src->width) continue;
            memcpy(GPTR(dst->pixels + (uint32_t)(dy * dst->stride + dx * (dst->bpp / 8))),
                   GPTR(src->pixels + (uint32_t)(sy * src->stride + sx * (src->bpp / 8))),
                   (size_t)(dst->bpp / 8));
        }
    }
    return 1;
}

static void gdi_text_metrics(uint32_t out)
{
    memset(GPTR(out), 0, 56);
    MEM16(out) = 16;
    MEM16(out + 2) = 14;
    MEM16(out + 4) = 2;
    MEM16(out + 6) = 2;
    MEM16(out + 8) = 0;
    MEM16(out + 10) = 0;
    MEM16(out + 12) = 8;
    MEM16(out + 14) = 8;
    MEM16(out + 16) = 8;
}
WINAPI_EXPORT("gdi32.dll", GetTextMetricsW, 2) { gdi_text_metrics(ARG(1)); return 1; }
WINAPI_EXPORT("gdi32.dll", GetTextMetricsA, 2) { gdi_text_metrics(ARG(1)); return 1; }
WINAPI_EXPORT("gdi32.dll", GetTextExtentPoint32W, 4)
{
    uint32_t count = ARG(2);
    MEM32(ARG(3)) = count * 8;
    MEM32(ARG(3) + 4) = 16;
    return 1;
}
WINAPI_EXPORT("gdi32.dll", CreateFontIndirectW, 1) { return gdi_new(3, 0, 0, 0); }
WINAPI_EXPORT("gdi32.dll", CreateFontIndirectA, 1) { return gdi_new(3, 0, 0, 0); }
WINAPI_EXPORT("gdi32.dll", CreateFontW, 14) { return gdi_new(3, 0, 0, 0); }
WINAPI_EXPORT("gdi32.dll", SetTextAlign, 2) { return 0; }
WINAPI_EXPORT("gdi32.dll", SetMapMode, 2) { return 1; }
WINAPI_EXPORT("gdi32.dll", SetTextColor, 2) { return 0; }
WINAPI_EXPORT("gdi32.dll", SetBkColor, 2) { return 0xFFFFFF; }
WINAPI_EXPORT("gdi32.dll", ExtTextOutW, 8) { return 1; }
WINAPI_EXPORT("gdi32.dll", CreateRectRgn, 4) { return gdi_new(4, 0, 0, 0); }
WINAPI_EXPORT("gdi32.dll", CreateBrushIndirect, 1) { return gdi_new(5, 0, 0, 0); }
WINAPI_EXPORT("gdi32.dll", CreatePatternBrush, 2) { return gdi_new(5, 0, 0, 0); }
WINAPI_EXPORT("gdi32.dll", CreatePen, 5) { return gdi_new(6, 0, 0, 0); }
WINAPI_EXPORT("gdi32.dll", CreateSolidBrush, 1) { return gdi_new(5, 0, 0, 0); }
WINAPI_EXPORT("gdi32.dll", CombineRgn, 4) { return ARG(1); }
WINAPI_EXPORT("gdi32.dll", GetDeviceGammaRamp, 2) { return 1; }
WINAPI_EXPORT("gdi32.dll", SetDeviceGammaRamp, 2) { return 1; }
