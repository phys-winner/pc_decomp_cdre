"""Lift pinned Crashday PE images to C; original files are read-only inputs."""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import sys
import tempfile

import pefile

from lift_game import (collect_functions, emit_dispatch, emit_functions, analyze_pe,
                       build_iat_map, BoundedDisassembler)
from pe_rebase import rebase_image

ROOT = Path(__file__).resolve().parents[1]


def digest(raw):
    return hashlib.sha256(raw).hexdigest()


INPUT_OBSERVATION = {0x00621120: (0x00621150, 1), 0x00621170: (0x006211A0, 2)}

# Save filenames and the original AES key use the previous port's Steam ID.
# Only these four GetSteamID calls use that ID; all lobby calls use the LAN ID.
SAVE_IDENTITY_CALLS = {
    0x004F3280: "RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x004F3314: call dword ptr [eax + 8] */",
    0x005A36E0: "RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x005A37B9: call dword ptr [eax + 8] */",
    0x00667680: "RECOMP_ICALL(eax); /* 0x006676E0: call eax */",
    0x00667AE0: "RECOMP_ICALL(eax); /* 0x00667B40: call eax */",
}
SAVE_IDENTITY_RESULT = "RECOMP_FLAGS_OUT(); eax = MEM32(esp); MEM32(eax) = 1; MEM32(eax + 4) = 0x01100001u; esp += 4; /* Original save identity */"

STATS_OBSERVATION = {
    0x004E7170: (("    MEM32(ebx + 0x7CC0) = eax; /* 0x004EC595: mov dword ptr [ebx + 0x7cc0], eax */", 2, "ebx", "eax"),
                 ("    MEM32(ebx + 0x7CC8) = eax; /* 0x004EC5B2: mov dword ptr [ebx + 0x7cc8], eax */", 4, "ebx", "eax")),
    0x004EB850: (("    MEM32(ebx + 0x7CC0) = eax; /* 0x004EC595: mov dword ptr [ebx + 0x7cc0], eax */", 2, "ebx", "eax"),
                 ("    MEM32(ebx + 0x7CC8) = eax; /* 0x004EC5B2: mov dword ptr [ebx + 0x7cc8], eax */", 4, "ebx", "eax")),
    0x005D8C20: (("    eax = MEM32(edi + 0x7CC0); /* 0x005D92E6: mov eax, dword ptr [edi + 0x7cc0] */", 0, "edi", "0"),),
    0x0068EC60: (("    eax = MEM32(0x8692E8); /* 0x0068F206: mov eax, dword ptr [0x8692e8] */", 1, "esi", "0"),),
    0x006939C0: (("    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x00693CE6: rep movsd dword ptr es:[edi], dword ptr [esi] */", 3, "esi - 0x7C9C", "0"),),
}

RESULTS_GUARDS = {
    0x004E3110: (("    MEM32(edi + 0x24) = 0; /* 0x004E3183: mov dword ptr [edi + 0x24], 0 */", "reset", "ebx"),),
    0x004E3920: (("    esi = ecx; /* 0x004E3947: mov esi, ecx */", "reset", "ecx"),),
    0x004E7170: (("    MEM32(ebx + 0x7CC0) = eax; /* 0x004EC595: mov dword ptr [ebx + 0x7cc0], eax */", "tick", "ebx"),
                 ("    MEM32(ebx + 0x7CC8) = eax; /* 0x004EC5B2: mov dword ptr [ebx + 0x7cc8], eax */", "tick", "ebx")),
    0x004EB850: (("    MEM32(ebx + 0x7CC0) = eax; /* 0x004EC595: mov dword ptr [ebx + 0x7cc0], eax */", "tick", "ebx"),
                 ("    MEM32(ebx + 0x7CC8) = eax; /* 0x004EC5B2: mov dword ptr [ebx + 0x7cc8], eax */", "tick", "ebx")),
    0x0068EC60: (("    eax = MEM32(0x8692E8); /* 0x0068F206: mov eax, dword ptr [0x8692e8] */", "received", "esi"),),
    0x006939C0: (("    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x00693CE6: rep movsd dword ptr es:[edi], dword ptr [esi] */", "snapshot", "esi - 0x7C9C"),),
}

LOBBY_CAPTION_OWNERS = (0x00554740, 0x00555555)


def apply_lobby_caption(address, text):
    signature = f"void sub_{address:08X}(void) {{"
    if text.count(signature) != 1:
        raise ValueError("Lobby caption owner changed")
    start = text.index(signature)
    end = text.find("\nvoid sub_", start + len(signature))
    if end < 0:
        end = len(text)
    body = text[start:end]
    for anchor in (
        "    if (TEST_Z(_flag_a, _flag_b)) goto L_005562AE; /* 0x0055592C: je 0x5562ae */",
        "    if (CMP_NE(_flag_a, _flag_b)) goto L_005562AE; /* 0x00555EB0: jne 0x5562ae */",
    ):
        if body.count(anchor) != 1:
            raise ValueError("Lobby caption branch changed")
        body = body.replace(anchor, anchor.replace("goto L_005562AE", "goto L_005562A9"), 1)
    call = "    RECOMP_CALL(sub_005493D0); /* 0x005562A9: call 0x5493d0 */"
    if body.count(call) != 1 or "L_005562A9:" in body:
        raise ValueError("Lobby caption refresh changed")
    # Nonowner setup exits skip host-only work but still need the original caption.
    body = body.replace(call, "L_005562A9:\n" + call, 1)
    return text[:start] + body + text[end:]


def apply_results_guard(address, text):
    signature = f"void sub_{address:08X}(void) {{"
    if text.count(signature) != 1:
        raise ValueError("Final statistics guard owner changed")
    start = text.index(signature)
    end = text.find("\nvoid sub_", start + len(signature))
    if end < 0:
        end = len(text)
    body = text[start:end]
    for anchor, action, car in RESULTS_GUARDS[address]:
        if body.count(anchor) != 1:
            raise ValueError("Final statistics guard instruction changed")
        if action == "tick":
            replacement = ("    { extern int crashday_lan_results_tick_allowed(uint32_t);\n"
                           f"      if (crashday_lan_results_tick_allowed({car})) {{\n" + anchor + "\n    } } // LAN final counter guard")
        elif action == "snapshot":
            replacement = ("    { extern void crashday_lan_results_reset(uint32_t);\n"
                           f"      uint32_t _lan_results_car = {car};\n" + anchor +
                           "\n      crashday_lan_results_reset(_lan_results_car); } // LAN final counter copy complete")
        else:
            replacement = (f"    {{ extern void crashday_lan_results_{action}(uint32_t);\n"
                           f"      crashday_lan_results_{action}({car}); }} // LAN final counter {action}\n" + anchor)
        body = body.replace(anchor, replacement, 1)
    return text[:start] + body + text[end:]


def apply_stats_observation(address, text):
    """Scope exact anchors to their owner: two lifted owners share the tick tail."""
    signature = f"void sub_{address:08X}(void) {{"
    if text.count(signature) != 1:
        raise ValueError("Statistics observation owner changed")
    start = text.index(signature)
    end = text.find("\nvoid sub_", start + len(signature))
    if end < 0:
        end = len(text)
    body = text[start:end]
    for anchor, stage, car, replacement in STATS_OBSERVATION[address]:
        if body.count(anchor) != 1:
            raise ValueError("Statistics observation instruction changed")
        hook = ("    { extern void crashday_lan_stats_observe(unsigned, uint32_t, uint32_t);\n"
                f"      crashday_lan_stats_observe({stage}, {car}, {replacement}); }}\n")
        body = body.replace(anchor, hook + anchor, 1)
    return text[:start] + body + text[end:]


def apply_host_adapter(spec, address, text):
    if spec["name"] == "crashday" and address == 0x005A97F0:
        signature = "void sub_005A97F0(void) {"
        if text.count(signature) != 1:
            raise ValueError("Race HUD render owner changed")
        return text.replace(signature,
            "static void sub_005A97F0_lifted(void);\nvoid sub_005A97F0(void) {\n"
            "    extern void d3d_gl_ui_pass(int);\n"
            "    d3d_gl_ui_pass(1);\n    sub_005A97F0_lifted();\n"
            "    d3d_gl_ui_pass(0);\n}\n\nstatic void sub_005A97F0_lifted(void) {", 1)
    if spec["name"] == "crashday" and address == 0x00520C50:
        anchor = "    MEM32(eax + 0x78) = ecx; /* 0x00520D48: mov dword ptr [eax + 0x78], ecx */"
        if text.count(anchor) != 1:
            raise ValueError("Graphics refresh selection changed")
        return text.replace(anchor, anchor + "\n    { extern void void_android_request_refresh(uint32_t); void_android_request_refresh(ecx); }", 1)
    if spec["name"] == "crashday" and address == 0x005B08F0:
        start = text.index("void sub_005B08F0(void) {")
        end = text.find("\nvoid sub_", start + 1)
        if end < 0:
            end = len(text)
        body = text[start:end]
        body = body.replace("L_005B08F0:\n", "L_005B08F0:\n    extern float crashday_weapon_coord(unsigned, unsigned, float, float);\n    float weapon_origin;\n", 1)
        anchor = "    /* cmp MEM8(esi + 0x6ACC), 0 */"
        if body.count(anchor) != 1:
            raise ValueError("Weapon HUD origin changed")
        body = body.replace(anchor, "    weapon_origin = sse_f32(MEM32(ebp - 0x18));\n" + anchor, 1)
        sites = ((0x005B0AEA, 0, False), (0x005B0B5F, 0, False), (0x005B0BD4, 0, True),
                 (0x005B0C5E, 0, False), (0x005B0D6C, 1, False), (0x005B0DE8, 1, True), (0x005B0E68, 1, False))
        for site, weapon, label in sites:
            callee = "00618280" if label else "0064C630"
            anchor = f"    RECOMP_CALL(sub_{callee}); /* 0x{site:08X}: call 0x{int(callee, 16):x} */"
            if body.count(anchor) != 1:
                raise ValueError(f"Weapon HUD draw site {site:08X} changed")
            origin = "weapon_origin" + (" + sse_f32(MEM32(0x809478))" if weapon else "")
            locations = ((16, 0), (20, 1), (12, 2)) if label else ((8, 1), (12, 0), (16, 1))
            hook = ""
            if not label:
                hook += f"    _xmm[3].f32[0] = crashday_weapon_coord({weapon}, 0, _xmm[3].f32[0], {origin});\n"
            for offset, axis in locations:
                hook += f"    MEM32(esp + {offset}) = sse_u32(crashday_weapon_coord({weapon}, {axis}, sse_f32(MEM32(esp + {offset})), {origin}));\n"
            body = body.replace(anchor, hook + anchor, 1)
        return text[:start] + body + text[end:]
    if spec["name"] == "crashday" and address == 0x0055DCE0:
        anchor = "L_0055DCE0:\n"
        if text.count(anchor) != 1:
            raise ValueError("Directory iterator owner changed")
        return text.replace(anchor, anchor +
            "    if (!ecx) { eax = 0; RECOMP_FLAGS_OUT(); esp += 4; RECOMP_REGS_OUT(); return; } /* Opening a missing replay directory may return no iterator. */\n", 1)
    if spec["name"] == "crashday" and address == 0x005C0060:
        text = text.replace("L_005C0060:\n", "L_005C0060:\n    extern float crashday_hud_y(float, float);\n", 1)
        for value in ("43E78000", "43A18000"):
            anchor = f"= 0x{value}u;"
            if text.count(anchor) != 1:
                raise ValueError(f"Radar Y anchor {value} changed")
            text = text.replace(anchor, f"= sse_u32(crashday_hud_y(sse_f32(0x{value}u), 230));", 1)
        if text.count("MEM32(0x809654)") != 9:
            raise ValueError("Radar center Y constant changed")
        text = text.replace("MEM32(0x809654)", "sse_u32(crashday_hud_y(sse_f32(MEM32(0x809654)), 230))")
        return text
    if spec["name"] == "crashday" and address == 0x005B2E60:
        text = text.replace("L_005B2E60:\n", "L_005B2E60:\n    extern float crashday_hud_y(float, float);\n", 1)
        for value in ("43CC0D9D", "43D4B334", "43D0B334", "43D5599A", "43D0599A"):
            anchor = f"= 0x{value}u;"
            if text.count(anchor) != 1:
                raise ValueError(f"Speedometer Y anchor {value} changed")
            text = text.replace(anchor, f"= sse_u32(crashday_hud_y(sse_f32(0x{value}u), 250));", 1)
        for value, count in (("809678", 1), ("80968C", 1), ("80965C", 1), ("80961C", 2)):
            anchor = f"MEM32(0x{value})"
            if text.count(anchor) != count:
                raise ValueError(f"Speedometer Y constant {value} changed")
            text = text.replace(anchor, f"sse_u32(crashday_hud_y(sse_f32({anchor}), 250))")
        return text
    if spec["name"] == "crashday" and address == 0x005A3D10:
        anchor = "    RECOMP_CALL(sub_0048B2D0); /* 0x005A3DCD: call 0x48b2d0 */\n    RECOMP_FLAGS_IN();\n"
        if text.count(anchor) != 1:
            raise ValueError("Startup menu fade owner changed")
        return text.replace(anchor, anchor +
            "    { extern int crashday_skip_splash(void);\n"
            "      if (crashday_skip_splash()) MEM32(MEM32(0x869418) + 0x2B0) = 0x40800000u; } /* Complete the initial four-second CUI fade. */\n", 1)
    if spec["name"] == "crashday" and address == 0x00675190:
        signature = "void sub_00675190(void) {"
        if text.count(signature) != 1:
            raise ValueError("Story slideshow owner changed")
        return text.replace(signature,
            "static void sub_00675190_lifted(void);\nvoid sub_00675190(void) {\n"
            "    extern void crashday_cinematic_active(int);\n"
            "    crashday_cinematic_active(1);\n    sub_00675190_lifted();\n"
            "    crashday_cinematic_active(0);\n}\n\nstatic void sub_00675190_lifted(void) {", 1)
    if spec["name"] == "crashday" and address == 0x0046F1A0:
        # MINIGUN's original constructor omits its cumulative shots float.
        # Reused allocation bytes can be NaN; every later +1 then stays NaN.
        anchor = "    MEM32(esi + 0x48C4) = 0; /* 0x0046F6F7: mov dword ptr [esi + 0x48c4], 0 */"
        if text.count(anchor) != 1:
            raise ValueError("Minigun constructor initializer changed")
        return text.replace(anchor, anchor + "\n    MEM32(esi + 0x48C8) = 0; /* Initialize cumulative shots on every gun construction. */", 1)
    if spec["name"] == "crashday" and address in LOBBY_CAPTION_OWNERS:
        return apply_lobby_caption(address, text)
    if spec["name"] == "crashday" and (address in RESULTS_GUARDS or address in STATS_OBSERVATION):
        if address in RESULTS_GUARDS:
            text = apply_results_guard(address, text)
        if address in STATS_OBSERVATION:
            text = apply_stats_observation(address, text)
        return text
    if spec["name"] == "crashday" and address in SAVE_IDENTITY_CALLS:
        call = SAVE_IDENTITY_CALLS[address]
        if text.count(call) != 1:
            raise ValueError("Original save identity call changed")
        return text.replace(call, SAVE_IDENTITY_RESULT, 1)
    if spec["name"] == "crashday" and address == 0x005221F0:
        anchor = "    if (CMP_A(_flag_a, _flag_b)) goto L_0052281B; /* 0x0052280C: ja 0x52281b */"
        if text.count(anchor) != 1:
            raise ValueError("Splash wait owner changed")
        text = text.replace(anchor, "    { extern int crashday_skip_splash(void); if (crashday_skip_splash() || CMP_A(_flag_a, _flag_b)) goto L_0052281B; } /* 0x0052280C: ja 0x52281b */", 1)
        phase = "L_005222AA:\n"
        if text.count(phase) != 1:
            raise ValueError("Splash phase owner changed")
        return text.replace(phase, phase + '''    { extern int crashday_skip_splash(void);
      if (crashday_skip_splash()) {
          if (MEM8(ebp + 0xC) == 1) {
              if (MEM8(0x8698E0) == 1) MEM8(0x8698E0) = 2;
              else if (MEM8(0x8698E0) == 4) MEM8(0x8698E0) = 6;
              else if (MEM8(0x8698E0) == 5) {
                  /* The original controller prompt selects AND saves the input profile. */
                  uint32_t input = MEM32(0x870268), first = MEM32(input + 0x504);
                  uint32_t count = (MEM32(input + 0x508) - first) / 0x1D4;
                  uint32_t selected = MEM32(input + 0x3D8);
                  if (selected >= count || !MEM32(first + selected * 0x1D4 + 0x34)) {
                      for (selected = 0; selected < count; ++selected)
                          if (MEM32(first + selected * 0x1D4 + 0x34)) break;
                  }
                  if (selected < count) {
                      PUSH32(esp, 0); PUSH32(esp, selected);
                      RECOMP_CALL(sub_00522150);
                      RECOMP_FLAGS_IN();
                  }
              }
          }
          MEM32(0x8698E8) = 0;
      }
    } /* Skip artwork, fades, delay and controller gate; keep original initialization/help. */
''', 1)
    if spec["name"] == "crashday" and address == 0x004A07E0:
        anchor = "L_004A0843:\n"
        if text.count(anchor) != 1:
            raise ValueError("Listbox recenter owner changed")
        text = text.replace(anchor, anchor +
            "    { extern int crashday_ui_list_detached(uint32_t);\n"
            "      if (crashday_ui_list_detached(esi)) goto L_004A087A; }\n", 1)
        marker = '    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x004A0F97: divss xmm1, xmm0 */'
        if text.count(marker) != 1:
            raise ValueError("Listbox scrollbar owner changed")
        return text.replace(marker, '    { extern int crashday_ui_list_detached(uint32_t);\n      if (crashday_ui_list_detached(esi)) {\n          uint32_t count = MEM32(esi + 0x1F4), visible = MEM32(esi + 0x21C), first = MEM32(esi + 0x218);\n          uint32_t last = count > visible ? count - visible : 0;\n          _xmm[1].f32[0] = last ? (float)(first > last ? last : first) / (float)last : 0.0f;\n      } else { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); }\n    } /* 0x004A0F97: divss xmm1, xmm0; touch viewport marker */', 1)
    if spec["name"] == "crashday" and address == 0x005BDCA0:
        signature = "void sub_005BDCA0(void) {"
        replacement = ("void sub_005BDCA0_lifted(void);\n" + signature + "\n"
                       "    extern void crashday_race_menu_begin(uint32_t), crashday_race_menu_end(void);\n"
                       "    crashday_race_menu_begin(g_ecx);\n    sub_005BDCA0_lifted();\n"
                       "    crashday_race_menu_end();\n}\n\nvoid sub_005BDCA0_lifted(void) {")
        if text.count(signature) != 1:
            raise ValueError("Race HUD draw owner changed")
        return text.replace(signature, replacement, 1)
    if spec["name"] == "crashday" and address == 0x00499E40:
        signature = "void sub_00499E40(void) {"
        if text.count(signature) != 1:
            raise ValueError("Race HUD button owner changed")
        return text.replace(signature, signature + "\n    extern void crashday_race_menu_button(void);\n"
                            "    crashday_race_menu_button();", 1)
    text_adapters = {0x00604680: (0, 12), 0x00617AA0: (1, 20), 0x0061A870: (2, None)}
    if spec["name"] == "crashday" and address in text_adapters:
        kind, offset = text_adapters[address]
        signature = f"void sub_{address:08X}(void) {{"
        save = f"    uint32_t stack = g_esp, size = MEM32(stack + {offset});\n" if offset else ""
        restore = f"    if (scale != 1) MEM32(stack + {offset}) = size;\n" if offset else ""
        replacement = (f"void sub_{address:08X}_lifted(void);\n" + signature + "\n"
                       "    extern float crashday_ui_text_begin(unsigned);\n"
                       "    extern void crashday_ui_text_end(float);\n" + save +
                       f"    float scale = crashday_ui_text_begin({kind});\n"
                       f"    sub_{address:08X}_lifted();\n" + restore +
                       "    crashday_ui_text_end(scale);\n}\n\n"
                       f"void sub_{address:08X}_lifted(void) {{")
        if text.count(signature) != 1:
            raise ValueError("GUI text owner changed")
        return text.replace(signature, replacement, 1)
    if spec["name"] == "crashday" and address == 0x006601F0:
        signature = "void sub_006601F0(void) {"
        replacement = ("void sub_006601F0_lifted(void);\n" + signature + "\n"
                       "    extern int crashday_inflate_buffer_fast(void);\n"
                       "    if (!crashday_inflate_buffer_fast()) sub_006601F0_lifted();\n}\n\n"
                       "void sub_006601F0_lifted(void) {")
        if text.count(signature) != 1:
            raise ValueError("Track inflate buffer owner changed")
        return text.replace(signature, replacement, 1)
    if spec["name"] == "crashday" and address == 0x00494200:
        signature = "void sub_00494200(void) {"
        if text.count(signature) != 1:
            raise ValueError("GUI render owner changed")
        text = text.replace(signature, signature + "\n    extern int void_android_menu_overlay(void);\n"
                            "    if (void_android_menu_overlay()) { g_esp += 4; return; }", 1)
        anchor = "    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x004944B8: call dword ptr [eax + 0xc] */"
        if text.count(anchor) != 1:
            raise ValueError("GUI widget draw call changed")
        return text.replace(anchor, "    { extern void crashday_ui_draw_begin(uint32_t), crashday_ui_draw_end(void);\n"
                            "      crashday_ui_draw_begin(ecx);\n  " + anchor + "\n      crashday_ui_draw_end(); }", 1)
    if spec["name"] == "msvcr120" and address == 0x1000F594:
        signature = "void sub_1000F594(void) {"
        replacement = ("void sub_1000F594_lifted(void);\n" + signature + "\n"
                       "    extern int void_crt_memcpy_fast(void);\n"
                       "    if (!void_crt_memcpy_fast()) sub_1000F594_lifted();\n}\n\n"
                       "void sub_1000F594_lifted(void) {")
        if text.count(signature) != 1:
            raise ValueError("VC12 memcpy owner changed")
        return text.replace(signature, replacement, 1)
    if spec["name"] == "crashday" and address == 0x00492010:
        signature = "void sub_00492010(void) {"
        replacement = ("static void sub_00492010_lifted(void);\nvoid sub_00492010(void) {\n"
                       "    extern void crashday_ui_prepare(void), crashday_text_editor_at_cursor(void);\n"
                       "    crashday_ui_prepare();\n    sub_00492010_lifted();\n"
                       "    crashday_text_editor_at_cursor();\n}\n\nstatic void sub_00492010_lifted(void) {")
        if text.count(signature) != 1:
            raise ValueError("GUI tick owner changed")
        return text.replace(signature, replacement, 1)
    return text


def apply_input_observation(spec, address, text):
    if spec["name"] != "crashday" or address not in INPUT_OBSERVATION:
        return text
    pop, button = INPUT_OBSERVATION[address]
    anchor = f"    esi = POP32_VAL(esp); /* 0x{pop:08X}: pop esi */"
    if text.count(anchor) != 1 or text.count(f"void sub_{address:08X}(void) {{") != 1:
        raise ValueError("Input observation owner/anchor changed")
    # ESI now belongs to the caller; the original CMP operands remain captured.
    hook = ("    if (eax && _flag_a != _flag_b && MEM8(eax + 0xC)) { "
            "extern void void_input_mouse_observed(uint32_t); "
            f"void_input_mouse_observed({button}u); }}")
    if hook in text:
        raise ValueError("Input observation hook is already present")
    return text.replace(anchor, anchor + "\n" + hook, 1)


def write_json(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    temporary = path.with_suffix(path.suffix + ".tmp")
    temporary.write_text(json.dumps(value, indent=2) + "\n", encoding="utf-8")
    temporary.replace(path)


def code_address(pe, address):
    section = pe.get_section_by_rva(address - pe.OPTIONAL_HEADER.ImageBase)
    return section is not None and bool(section.Characteristics & 0x20000000)


def module_jump_tables(spec):
    tables = {}
    for row in spec.get("jump_tables", []):
        address = int(row["address"], 0)
        if address in tables:
            raise ValueError(f"Duplicate declared jump table {address:#x}")
        tables[address] = (row["first_index"], row["count"])
    return tables


def metadata_roots(pe):
    """Separate proven entry points from relocated pointers that may be data."""
    base = pe.OPTIONAL_HEADER.ImageBase
    roots = set()
    candidates = {base + e.address for e in getattr(
        getattr(pe, "DIRECTORY_ENTRY_EXPORT", None), "symbols", [])
        if not e.forwarder and code_address(pe, base + e.address)}
    for block in getattr(pe, "DIRECTORY_ENTRY_BASERELOC", []):
        for relocation in block.entries:
            if relocation.type != 3:
                continue
            section = pe.get_section_by_rva(relocation.rva)
            if section is None or section.Characteristics & 0x20000000:
                continue
            raw = pe.get_data(relocation.rva, 4)
            if len(raw) != 4:
                raise ValueError("Truncated relocation pointer")
            pointer = struct.unpack("<I", raw)[0]
            if code_address(pe, pointer):
                candidates.add(pointer)
    load_config = getattr(pe, "DIRECTORY_ENTRY_LOAD_CONFIG", None)
    if load_config:
        table = getattr(load_config.struct, "SEHandlerTable", 0)
        count = getattr(load_config.struct, "SEHandlerCount", 0)
        if count > 1000000:
            raise ValueError("Unreasonable SafeSEH table length")
        if count:
            raw = pe.get_data(table - base, count * 4)
            if len(raw) != count * 4:
                raise ValueError("Truncated SafeSEH table")
            for (rva,) in struct.iter_unpack("<I", raw):
                if not code_address(pe, base + rva):
                    raise ValueError(f"SafeSEH handler is not executable: {base + rva:#x}")
                roots.add(base + rva)
    tls = getattr(pe, "DIRECTORY_ENTRY_TLS", None)
    if tls and tls.struct.AddressOfCallBacks:
        table = tls.struct.AddressOfCallBacks - base
        for index in range(1024):
            raw = pe.get_data(table + index * 4, 4)
            if len(raw) != 4:
                raise ValueError("Truncated TLS callback table")
            address = struct.unpack("<I", raw)[0]
            if not address:
                break
            if not code_address(pe, address):
                raise ValueError("TLS callback outside code")
            roots.add(address)
        else:
            raise ValueError("Unterminated TLS callback table")
    return roots, candidates


def prepare(spec, source_root):
    source = Path(spec["source"]) if "source" in spec else source_root / spec["path"]
    raw = source.read_bytes()
    if digest(raw) != spec["sha256"]:
        raise ValueError(f"Original SHA-256 mismatch: {source}")
    pe = pefile.PE(data=raw, fast_load=True)
    if pe.FILE_HEADER.Machine != 0x14C or pe.OPTIONAL_HEADER.Magic != 0x10B:
        raise ValueError(f"Expected PE32 i386: {source}")
    base = int(spec["base"], 0)
    old_base = pe.OPTIONAL_HEADER.ImageBase
    if old_base != base:
        raw, relocation = rebase_image(raw, base)
        if rebase_image(raw, old_base)[0] != source.read_bytes():
            raise ValueError(f"Reverse relocation failed: {source}")
    if spec.get("jump_tables"):
        rebased = pefile.PE(data=raw, fast_load=True)
        try:
            for row in spec["jump_tables"]:
                rva = int(row["address"], 0) - base + 4 * row["first_index"]
                size = 4 * row["count"]
                section = rebased.get_section_by_rva(rva)
                if (size <= 0 or section is None or
                        rva + size > section.VirtualAddress + section.SizeOfRawData):
                    raise ValueError("Declared jump table is outside file-backed PE data")
                if digest(rebased.get_data(rva, size)) != row["sha256"]:
                    raise ValueError(f"Declared jump table SHA-256 mismatch: {row['address']}")
        finally:
            rebased.close()
    target = ROOT / "generated/input" / spec["file"]
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_bytes(raw)
    return target, digest(raw)


def setjmp_rows(spec, owner=None):
    path = ROOT / "config" / "setjmp_continuations.json"
    if not path.exists():
        return []
    rows = json.loads(path.read_text(encoding="utf-8"))["continuations"]
    return [row for row in rows if row["module"] == spec["name"] and (owner is None or row["owner"] == owner)]


def apply_setjmp_resume(spec, address, replacement):
    rows = setjmp_rows(spec, address)
    for row in rows:
        continuation = row["continuation"]
        call = f"RECOMP_SETJMP_CALL(sub_121BF618, 0x{continuation:08X}u);"
        changed = replacement.replace("RECOMP_CALL(sub_121BF618);", call, 1)
        if changed == replacement:
            changed = replacement.replace("RECOMP_ICALL(MEM32(0x12001260));", call, 1)
        if changed == replacement:
            raise ValueError(f"setjmp call site not found in {spec['name']} {address:#x}")
        label = f"L_{continuation:08X}:"
        instruction = f"/* 0x{continuation:08X}:"
        if label not in changed:
            position = changed.find(instruction)
            if position < 0:
                raise ValueError(f"setjmp continuation is not an instruction boundary: {continuation:#x}")
            line_start = changed.rfind("\n", 0, position) + 1
            changed = changed[:line_start] + label + "\n" + changed[line_start:]
        replacement = changed
    for row in rows:
        continuation, owner = row["continuation"], row["owner"]
        branch = (f"    if (g_setjmp_resume == 0x{continuation:08X}u) {{ "
                  f"g_setjmp_resume = 0; g_cur_func = 0x{owner:08X}u; goto L_{continuation:08X}; }}\n")
        replacement = replacement.replace("    RECOMP_REGS_LOCALS\n", "    RECOMP_REGS_LOCALS\n" + branch, 1)
    return replacement


def emit_setjmp_resume_stubs(spec):
    rows = setjmp_rows(spec)
    if not rows:
        return
    lines = ['#include "functions.h"', "extern __thread uint32_t g_setjmp_resume;", ""]
    for owner in sorted({row["owner"] for row in rows}):
        lines.append(f"void sub_{owner:08X}(void);")
    for row in rows:
        owner, continuation = row["owner"], row["continuation"]
        lines += ["", f"void sub_{continuation:08X}(void) {{",
                  f"    g_setjmp_resume = 0x{continuation:08X}u;", f"    sub_{owner:08X}();", "}"]
    output = ROOT / "generated" / spec["name"] / "setjmp_continuations.c"
    temporary = output.with_suffix(".c.tmp")
    temporary.write_text("\n".join(lines) + "\n", encoding="utf-8")
    temporary.replace(output)
    declarations = ["#pragma once", ""] + [f"void sub_{row['continuation']:08X}(void);" for row in rows]
    header = output.with_suffix(".h.tmp")
    header.write_text("\n".join(declarations) + "\n", encoding="utf-8")
    header.replace(output.with_suffix(".h"))


def merge_dispatch(specs):
    entries, headers, module_lines = [], [], []
    for spec in specs:
        directory = ROOT / "generated" / spec["name"]
        report_path = directory / "report.json"
        if not report_path.exists():
            continue
        report = json.loads(report_path.read_text())
        if report.get("status") != "GENERATED":
            continue
        if digest((ROOT / "generated/input" / spec["file"]).read_bytes()) != report["image_sha256"]:
            raise ValueError(f"Stale generated image: {spec['file']}")
        entries.extend(int(a, 0) for a in report["dispatch_entries"])
        entries.extend(row["continuation"] for row in setjmp_rows(spec))
        emit_setjmp_resume_stubs(spec)
        headers.append(f'{spec["name"]}/functions.h')
        if setjmp_rows(spec):
            headers.append(f'{spec["name"]}/setjmp_continuations.h')
        module_lines.append('{"%s", "%s", %su, %d, 0},' % (
            spec["file"], spec["file"], spec["base"], int(spec.get("exe", False))))
    if not entries:
        raise ValueError("No generated modules")
    emit_dispatch(ROOT / "generated/dispatch.c", entries, headers)
    (ROOT / "generated/modules.inc").write_text("\n".join(module_lines) + "\n")


def regenerate_function(spec, address, source_root):
    """Replace or add a verified body through the production emitter, preserving its VA."""
    from bisect import bisect_left

    directory = ROOT / "generated" / spec["name"]
    report_path = directory / "report.json"
    report = json.loads(report_path.read_text())
    if report.get("status") != "GENERATED":
        raise ValueError("A complete module is required for targeted regeneration")
    addresses = [int(a, 0) for a in report["dispatch_entries"]]
    new_entry = address not in addresses
    if new_entry:
        catalog = ROOT / "config" / f'{spec["name"]}.functions.json'
        rows = json.loads(catalog.read_text())["functions"] if catalog.exists() else []
        if address not in {row["address"] for row in rows}:
            raise ValueError(f"New entry {address:#x} is not pinned in the function catalog")
    binary, image_hash = prepare(spec, source_root)
    if image_hash != report["image_sha256"]:
        raise ValueError("Prepared PE differs from the generated module")
    parsed = analyze_pe(str(binary))
    imports = build_iat_map(parsed)
    pe = pefile.PE(str(binary))
    for module in getattr(pe, "DIRECTORY_ENTRY_DELAY_IMPORT", []):
        for symbol in module.imports:
            imports[symbol.address] = (module.dll.decode(),
                symbol.name.decode() if symbol.name else f"ordinal_{symbol.ordinal}")
    pe.close()
    decoder = BoundedDisassembler(binary.read_bytes(), parsed.image_base, parsed.sections,
                                  jump_tables=module_jump_tables(spec))
    function = decoder.disassemble_function(address, imports)
    if function is None or not function.blocks:
        raise ValueError(f"Cannot decode verified entry {address:#x}")
    symbol = f"void sub_{address:08X}(void) {{"
    if new_entry:
        source = directory / report["sources"][-1]
        text = source.read_text(encoding="utf-8")
        if symbol in text:
            raise ValueError("Generated body already exists outside the dispatch")
    else:
        matches = [directory / relative for relative in report["sources"]
                   if symbol in (directory / relative).read_text(encoding="utf-8")]
        if len(matches) != 1:
            raise ValueError("Generated body does not match the module sources")
        source = matches[0]
        text = source.read_text(encoding="utf-8")
    with tempfile.TemporaryDirectory(prefix="ut3-function-") as temporary:
        output = Path(temporary)
        emitted = emit_functions(output, imports, decoder, {address: function},
                                 additional_entries=addresses + [address])
        replacement = (output / emitted["sources"][0]).read_text(encoding="utf-8")
        replacement = replacement[replacement.index(symbol):].rstrip() + "\n"
        replacement = apply_setjmp_resume(spec, address, replacement)
        replacement = apply_input_observation(spec, address, replacement)
        replacement = apply_host_adapter(spec, address, replacement)
    if new_entry:
        updated = text.rstrip() + "\n\n" + replacement
    else:
        start = text.index(symbol)
        end = text.find("\nvoid sub_", start + len(symbol))
        if end < 0:
            end = len(text)
        updated = text[:start] + replacement + text[end:]
    temporary_source = source.with_suffix(".c.tmp")
    temporary_source.write_text(updated, encoding="utf-8")
    temporary_source.replace(source)
    if new_entry:
        header_path = directory / "functions.h"
        header = header_path.read_text(encoding="utf-8").rstrip()
        declaration = f"void sub_{address:08X}(void);"
        if declaration not in header.splitlines():
            header_path.write_text(header + "\n" + declaration + "\n", encoding="utf-8")
        addresses.insert(bisect_left(addresses, address), address)
        report["dispatch_entries"] = [hex(a) for a in addresses]
        report["functions"] = len(addresses)
        for field in ("emitted_instructions_with_overlap", "eh_owners", "cold_eh_added_instructions"):
            report[field] = report.get(field, 0) + emitted[field]
        report["rejected_entries"] = [entry for entry in report.get("rejected_entries", [])
                                      if int(entry, 0) != address]
    traps = set(report["functions_containing_traps"])
    traps.discard(hex(address))
    if "void_lift_trap(" in replacement:
        traps.add(hex(address))
    report["functions_containing_traps"] = sorted(traps, key=lambda a: int(a, 0))
    report.setdefault("targeted_regenerations", {})[hex(address)] = {
        "source": source.name, "source_sha256": digest(source.read_bytes()),
        "instructions_with_overlap": emitted["emitted_instructions_with_overlap"],
        "eh_owners": emitted["eh_owners"], "added": new_entry}
    write_json(report_path, report)
    if new_entry:
        specs = json.loads((ROOT / "config/modules.json").read_text())["modules"]
        merge_dispatch(specs)
    print(f"{'Added' if new_entry else 'Regenerated'} {spec['name']} {address:#x} in {source.name}", flush=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--module", action="append", help="Module name from config/modules.json")
    parser.add_argument("--function", action="append", type=lambda a: int(a, 0),
                        help="Regenerate a VA or add a catalog-pinned VA; requires exactly one --module")
    parser.add_argument("--prepare-only", action="store_true",
                        help="Restore pinned PE images without changing the canonical generated C or reports")
    args = parser.parse_args()
    if args.prepare_only and args.function:
        parser.error("--prepare-only cannot be combined with --function")
    specs = json.loads((ROOT / "config/modules.json").read_text())["modules"]
    known = {m["name"] for m in specs}
    if args.module and set(args.module) - known:
        parser.error("Unknown module: " + ", ".join(sorted(set(args.module) - known)))
    if args.function:
        if not args.module or len(args.module) != 1:
            parser.error("--function requires exactly one --module")
        spec = next(m for m in specs if m["name"] == args.module[0])
        for address in args.function:
            regenerate_function(spec, address, ROOT)
        return
    for spec in specs:
        if args.module and spec["name"] not in args.module:
            continue
        directory = ROOT / "generated" / spec["name"]
        if args.prepare_only:
            report = json.loads((directory / "report.json").read_text(encoding="utf-8"))
            if report.get("status") != "GENERATED" or report.get("original_sha256") != spec["sha256"]:
                raise ValueError("Canonical generation report does not match: " + spec["name"])
            binary, image_hash = prepare(spec, ROOT)
            if image_hash != report["image_sha256"]:
                raise ValueError("Prepared image does not match canonical generated code: " + spec["name"])
            print(f"Prepared {spec['file']}: {image_hash}", flush=True)
            continue
        directory.mkdir(parents=True, exist_ok=True)
        write_json(directory / "report.json", {"status": "GENERATING"})
        binary, image_hash = prepare(spec, ROOT)
        pe = pefile.PE(str(binary))
        roots, candidates = metadata_roots(pe)
        catalog = ROOT / "config" / f'{spec["name"]}.functions.json'
        rows = json.loads(catalog.read_text())["functions"] if catalog.exists() else []
        print(f'{spec["name"]}: {len(roots)} metadata roots, {len(candidates)} candidates, {len(rows)} catalog entries', flush=True)
        info, imports, decoder, functions, rejected = collect_functions(
            binary, rows, roots, label=spec["file"], compact=True, pointer_entries=(),
            jump_tables=module_jump_tables(spec), optional_entries=candidates)
        # Include delay-IAT names in generation; binding is performed by the host loader.
        for module in getattr(pe, "DIRECTORY_ENTRY_DELAY_IMPORT", []):
            for symbol in module.imports:
                imports[symbol.address] = (module.dll.decode(),
                    symbol.name.decode() if symbol.name else f"#{symbol.ordinal}")
        report = emit_functions(directory, imports, decoder, functions,
                                label=spec["file"], header_name="functions.h", chunk_prefix="functions")
        if spec["name"] in {"crashday", "msvcr120"}:
            updates = {}
            owners = {address: 0 for address in (list(INPUT_OBSERVATION) + list(STATS_OBSERVATION) + list(RESULTS_GUARDS) + list(LOBBY_CAPTION_OWNERS) + [0x005A97F0, 0x00520C50, 0x005B08F0, 0x0055DCE0, 0x005C0060, 0x005B2E60, 0x005A3D10, 0x00675190, 0x0046F1A0, 0x005221F0, 0x004A07E0, 0x00492010, 0x00494200, 0x00499E40, 0x005BDCA0, 0x00604680, 0x00617AA0, 0x0061A870, 0x006601F0] if spec["name"] == "crashday" else [0x1000F594])}
            for relative in report["sources"]:
                source = directory / relative
                text = source.read_text(encoding="utf-8")
                for address in owners:
                    if f"void sub_{address:08X}(void) {{" in text:
                        text = apply_input_observation(spec, address, text)
                        text = apply_host_adapter(spec, address, text)
                        owners[address] += 1
                updates[source] = text
            if any(count != 1 for count in owners.values()):
                raise ValueError("Input observation function owner is missing or duplicated")
            for source, text in updates.items():
                source.write_text(text, encoding="utf-8")
        report.update(status="GENERATED", module=spec["file"],
                      original_sha256=spec["sha256"], image_sha256=image_hash,
                      metadata_roots=len(roots), rejected_entries=rejected,
                      dispatch_entries=[hex(a) for a in sorted(functions)])
        write_json(directory / "report.json", report)
        pe.close()
    if not args.prepare_only:
        merge_dispatch(specs)


if __name__ == "__main__":
    main()
