"""Pinned seams for original camera aspect and the player's optional digital steering."""
import hashlib
import re

SEAMS = {
    b"0067C320": (
        "d3f86d92d61b33c672023e8b74dcc804309e67bb7587e475fe8c8e9ed55dd812",
        b"    _xmm[1].u64[0] = MEM64(0x808F50); _xmm[1].u64[1] = 0; /* 0x0067CACD: movsd xmm1, qword ptr [0x808f50] */",
        b"    { extern double crashday_world_aspect_numerator(void);\n"
        b"      _xmm[1].f64[0] = crashday_world_aspect_numerator(); _xmm[1].u64[1] = 0; }"),
    b"00461E80": (
        "3095ffeaf776fbea001f4b75d471c12af163f34f5f6554c0e491435a9d2163b4",
        b"    _xmm[2].u64[0] = MEM32(edi + 0x6CB0); _xmm[2].u64[1] = 0; /* 0x00461E94: movss xmm2, dword ptr [edi + 0x6cb0] */",
        b"    { extern uint32_t crashday_steering_bits(uint32_t, uint32_t);\n"
        b"      _xmm[2].u64[0] = crashday_steering_bits(edi, MEM32(edi + 0x6CB0)); _xmm[2].u64[1] = 0; }")
}


def presentation(data):
    for address, (fingerprint, before, after) in SEAMS.items():
        start = re.search(rb"^void sub_" + address + rb"\(void\) \{\r?$", data, re.M)
        if start is None:
            continue
        end = re.search(rb"^\}\r?$", data[start.end():], re.M)
        if end is None:
            raise ValueError("Missing presentation function end: " + address.decode())
        stop = start.end() + end.end()
        body = data[start.start():stop]
        normalized = body.replace(b"\r\n", b"\n")
        if hashlib.sha256(normalized).hexdigest() != fingerprint or normalized.count(before) != 1:
            raise ValueError("Original presentation owner changed: " + address.decode())
        line = after.replace(b"\n", b"\r\n") if b"\r\n" in body else after
        data = data[:start.start()] + body.replace(before, line, 1) + data[stop:]
    return data
