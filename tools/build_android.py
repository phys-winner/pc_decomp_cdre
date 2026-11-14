import argparse
from concurrent.futures import ThreadPoolExecutor, as_completed
import hashlib
import json
import os
from pathlib import Path
import re
import subprocess
import sys

from game_optimizations import flag_independent_entries, omit_unused_call_flags
from native_math import native_math

ROOT = Path(__file__).resolve().parents[1]
SDK = Path(os.environ.get("ANDROID_SDK_ROOT", Path.home() / "AppData/Local/Android/Sdk"))
NDK = Path(os.environ.get("ANDROID_NDK_HOME", SDK / "ndk/27.2.12479018"))
CLANG = NDK / "toolchains/llvm/prebuilt/windows-x86_64/bin/clang.exe"
MOJO_SOURCES = [
    "mojoshader.c", "mojoshader_common.c", "mojoshader_assembler.c", "mojoshader_preprocessor.c",
    "mojoshader_lexer.c", "profiles/mojoshader_profile_common.c", "profiles/mojoshader_profile_glsl.c",
    "profiles/mojoshader_profile_d3d.c", "profiles/mojoshader_profile_bytecode.c", "mojoshader_effects.c",
]
HOST_SOURCES = [
    "main.c", "core.c", "memory.c", "guest_mem.c", "threads.c", "pe.c", "pe_resources.c",
    "files.c", "strings.c", "kernel32.c", "system.c", "system_parameters.c", "user32.c",
    "input.c", "dinput8.c", "com.c", "eh.c", "dsound.c", "waveout.c", "android_audio.c", "network.c", "imm32.c",
    "setupapi.c", "argv.c", "compat.c", "crt_compat.c", "crashday_raycast.c", "rpc.c", "bstr.c", "perf.c", "unsupported.c",
    "d3d9_device.c", "d3d9_resource.c", "d3d9_gl.c", "d3d9_shader.c", "d3d9_thread.c", "d3d9_texel.c",
    "d3d9_format.c", "d3d9_ff.c", "d3dx9.c", "d3dx_math.c", "steam.c", "steam_interfaces.c", "misc.c",
    "rawinput.c", "xinput.c", "display.c", "winstrings.c", "gdi.c", "android_main.c", "android_assets.c",
]


# `rep movsd` / `rep movsw` / `rep movsb` lift to one guest element per loop
# iteration, through volatile guest accesses and the global register file. With
# DF=0 and no replicating overlap the copy is memmove (recomp_movs_fast in
# recomp_types.h); the original loop stays as the fallback, so the result is
# identical. Adapted from Heroes V (homm5/tools/build_android.py). A 1,244-byte
# struct copy (sub_006D2620) alone was 17% of the game thread in a race
# (Pixel 10a, 2026-11-06).
REP_MOVS = ((b"while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; }", 4),
            (b"while (ecx) { MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; --ecx; }", 2),
            (b"while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; }", 1))

def fast_rep_movs(text):
    for loop, unit in REP_MOVS:
        if loop in text:
            text = text.replace(loop, b"{ if (_df > 0 && recomp_movs_fast(edi, esi, ecx, %du)) "
                                      b"{ esi += ecx * %du; edi += ecx * %du; ecx = 0; } else %s }" % (unit, unit, unit, loop))
    return text


def generated_flags(common, source, generated, separate, game_flags):
    flags = common + ["-w", "-DRECOMP_GENERATED_CODE"]
    if source != generated / "dispatch.c" and separate:
        flags += ["-DRECOMP_GUEST_PROVENANCE"]
    if source.parent == generated / "crashday":
        flags = [flag for flag in flags if flag not in {"-O2", "-w"}]
        flags += ["-O3", "-mtune=cortex-a73", "-Wno-everything", *game_flags]
    return flags


def sha(path):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


def generated_sources(folder):
    specs = json.loads((ROOT / "config/modules.json").read_text(encoding="utf-8"))["modules"]
    included = re.findall(r'^\s*\{\s*"([^"]+)"', (folder / "modules.inc").read_text(encoding="utf-8"), re.M)
    by_file = {row["file"]: row for row in specs}
    if not included or len(set(included)) != len(included) or set(included) - by_file.keys():
        raise ValueError("Generated module list is empty, duplicated or unknown")
    sources, pinned = [folder / "dispatch.c"], {}
    if (folder / "setjmp_continuations.c").is_file():
        sources.append(folder / "setjmp_continuations.c")
        pinned[folder / "setjmp_continuations.c"] = sha(folder / "setjmp_continuations.c")
    for name in included:
        spec = by_file[name]
        directory = folder / spec["name"]
        report_path = directory / "report.json"
        report = json.loads(report_path.read_text(encoding="utf-8"))
        if report.get("status") != "GENERATED":
            raise ValueError(f"Static generation is incomplete: {name}")
        image = folder / "input" / spec["file"]
        if sha(image) != report.get("image_sha256") or report.get("original_sha256") != spec["sha256"]:
            raise ValueError(f"Generated input hash differs from its report: {name}")
        pinned[image] = sha(image)
        pinned[report_path] = sha(report_path)
        continuations = directory / "setjmp_continuations.c"
        if continuations.is_file():
            sources.append(continuations)
            pinned[continuations] = sha(continuations)
        for relative in report["sources"]:
            source = (directory / relative).resolve()
            if source.parent != directory or source.suffix != ".c" or not source.is_file():
                raise ValueError(f"Invalid generated source: {relative}")
            sources.append(source)
    pinned[folder / "modules.inc"] = sha(folder / "modules.inc")
    pinned[folder / "dispatch.c"] = sha(folder / "dispatch.c")
    return sources, pinned


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--generated", type=Path, default=ROOT / "generated")
    parser.add_argument("--output", type=Path, default=ROOT / "build/android/crashday-arm64")
    parser.add_argument("--jobs", type=int, default=min(8, os.cpu_count() or 1))
    parser.add_argument("--diagnostics", action="store_true")
    parser.add_argument("--rt-check", action="store_true")
    parser.add_argument("--shared", action="store_true")
    profiles = parser.add_mutually_exclusive_group()
    profiles.add_argument("--pgo-use", type=Path, default=ROOT / "config/heavy-v1.profdata",
                          help="LLVM gameplay profile (default: the pinned heavy-v1 profile)")
    profiles.add_argument("--no-pgo", action="store_true", help="Build without the gameplay profile (A/B control)")
    parser.add_argument("--no-fast-rep-movs", action="store_true",
                        help="Compile the lifted rep movs loops as generated (A/B control)")
    parser.add_argument("--no-separate-storage", action="store_true",
                        help="Compile generated code without the guest/register separate-storage promise (A/B control)")
    args = parser.parse_args()
    if args.jobs < 1:
        parser.error("--jobs must be positive")
    if not CLANG.is_file():
        parser.error(f"NDK compiler not found: {CLANG}")
    generated = args.generated.resolve()
    from fsr_shaders import generate_fsr1
    generate_fsr1(generated)
    from fsr3_shaders import pack_fsr3
    pack_fsr3(generated)
    lifted, pinned = generated_sources(generated)
    profile = None if args.no_pgo else args.pgo_use.resolve()
    game_flags = ["-flto=thin"]
    if profile is not None:
        if not profile.is_file():
            parser.error("Gameplay profile is missing; supply --pgo-use or --no-pgo")
        pinned[profile] = sha(profile)
        if profile == ROOT / "config/heavy-v1.profdata":
            metadata = json.loads((ROOT / "config/heavy-v1-profile.json").read_text())
            if pinned[profile] != metadata["profile_sha256"]:
                parser.error("The pinned gameplay profile differs from its metadata")
        game_flags += ["-Werror=profile-instr-out-of-date", "-fprofile-instr-use=" + profile.as_posix(),
                       "-DCRASHDAY_PGO_PROFILE_" + pinned[profile]]
    out = args.output.resolve()
    if args.shared and out == ROOT / "build/android/crashday-arm64":
        out = ROOT / "build/android/libcrashday.so"
    out.parent.mkdir(parents=True, exist_ok=True)
    compiler = subprocess.check_output([str(CLANG), "--version"], text=True)
    common = [
        "--target=aarch64-linux-android26", "-O2", "-fno-strict-aliasing", "-fwrapv",
        "-fvisibility=hidden", "-fPIC", "-ffp-contract=off", "-fno-math-errno", "-g0",
        "-ffile-prefix-map=" + str(ROOT) + "=.",
        "-DRECOMP_X87_WINDOW", "-Iandroid/runtime", "-Iandroid/host", "-I" + str(generated),
        "-Ireference/mojoshader",
    ]
    if args.diagnostics:
        common += ["-DRECOMP_TRACE", "-DRECOMP_CALL_DIAG"]
    headers = sorted((ROOT / "android").rglob("*.h"))
    generated_headers = sorted(generated.rglob("*.h"))
    headers += [generated / "modules.inc", ROOT / "reference/dlmalloc/malloc.c"]
    headers += sorted((ROOT / "reference/mojoshader").rglob("*.h"))
    inputs = hashlib.sha256((str(CLANG) + compiler).encode())
    for path in headers:
        inputs.update(str(path).encode())
        inputs.update(path.read_bytes())
    base_digest = inputs.digest()
    # One reserved guest allocation cannot overlap native VM state. Guest
    # accesses stay volatile, and host calls still publish/reload that state.
    independent = flag_independent_entries(source.read_bytes() for source in lifted
                                            if source.parent == generated / "crashday")
    tasks = [(source, generated_flags(common, source, generated, not args.no_separate_storage, game_flags))
             for source in lifted]
    for name in HOST_SOURCES:
        source = ROOT / "android/host" / name
        flags = common + ["-std=gnu11", "-Wall", "-Wno-unused-function", "-Wno-unused-variable"]
        if args.shared and name in {"main.c", "input.c", "android_main.c", "android_assets.c"}:
            flags.append("-DCRASHDAY_ANDROID_APP")
        if args.rt_check and name.startswith("d3d9_"):
            flags.append("-DVOID_RT_CHECK")
        tasks.append((source, flags))
    tasks.append((ROOT / "android/host/fsr3.cpp", common + ["-std=c++17", "-DNDEBUG", "-fno-exceptions", "-fno-rtti",
                  "-Ireference/fsr3/sdk/include", "-Ireference/fsr3/sdk/src/shared"]))
    mojo_flags = common + [
        "-w", "-DMOJOSHADER_EFFECT_SUPPORT", "-DMOJOSHADER_FLIP_RENDERTARGET", "-DMOJOSHADER_DEPTH_CLIPPING",
        "-DSUPPORT_PROFILE_HLSL=0", "-DSUPPORT_PROFILE_ARB1=0", "-DSUPPORT_PROFILE_ARB1_NV=0",
        "-DSUPPORT_PROFILE_METAL=0", "-DSUPPORT_PROFILE_SPIRV=0", "-DSUPPORT_PROFILE_GLSPIRV=0",
        "-DSUPPORT_PROFILE_GLSL120=0",
    ]
    for name in MOJO_SOURCES:
        tasks.append((ROOT / "reference/mojoshader" / name, mojo_flags))

    def compile_one(task):
        source, flags = task
        relative = source.relative_to(ROOT)
        obj = out.parent / "obj" / relative.with_suffix(".o")
        obj.parent.mkdir(parents=True, exist_ok=True)
        stamp = obj.with_suffix(".json")
        extra = b""
        text = source.read_bytes()
        compile_source, compile_flags = source, flags
        if source.is_relative_to(generated) and source != generated / "dispatch.c":
            original_text = text
            if source.parent == generated / "crashday":
                from game_presentation import presentation
                text = presentation(text)
                text = omit_unused_call_flags(native_math(text), independent)
            transformed = text if args.no_fast_rep_movs else fast_rep_movs(text)
            if transformed != original_text:
                text = transformed
                compile_source = out.parent / "patched" / source.relative_to(generated)
                compile_source.parent.mkdir(parents=True, exist_ok=True)
                if not compile_source.is_file() or compile_source.read_bytes() != text:
                    compile_source.write_bytes(text)
                compile_flags = flags + ["-I" + str(source.parent)]
        if source == generated / "dispatch.c":
            extra = b"".join(path.read_bytes() for path in generated_headers)
        elif source.parent.parent == generated and (source.parent / "functions.h").is_file():
            extra = (source.parent / "functions.h").read_bytes()
        if source.parent == ROOT / "android/host" and source.suffix in {".c", ".cpp"}:
            includes = set(re.findall(r'^\s*#include\s+"([^"]+\.inc)"', source.read_text(encoding="utf-8"), re.M))
            if "d3d9_thread_check.inc" in includes or args.rt_check and source.name.startswith("d3d9_"):
                includes.add("d3d9_thread_check.inc")
            for include in sorted(includes):
                path = source.parent / include
                if not path.is_file():
                    path = generated / include
                extra += include.encode() + path.read_bytes()
            if source.name == "fsr3.cpp":
                extra += b"".join(p.read_bytes() for p in sorted((ROOT / "reference/fsr3").rglob("*")) if p.is_file())
        digest = hashlib.sha256(base_digest + text + json.dumps(compile_flags).encode() + extra).hexdigest()
        if stamp.exists() and obj.exists():
            cached = json.loads(stamp.read_text(encoding="utf-8"))
            if cached.get("input") == digest and cached.get("object") == sha(obj):
                return obj, True
        result = subprocess.run([str(CLANG), *compile_flags, "-c", str(compile_source), "-o", str(obj)],
                                cwd=ROOT, text=True, capture_output=True)
        if result.returncode:
            raise RuntimeError(f"compile failed: {relative}\n{result.stdout}{result.stderr}")
        if result.stderr:
            print(result.stderr.rstrip(), flush=True)
        stamp.write_text(json.dumps({"input": digest, "object": sha(obj)}), encoding="utf-8")
        return obj, False

    objects, cached = [], 0
    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        futures = [pool.submit(compile_one, task) for task in tasks]
        for index, future in enumerate(as_completed(futures), 1):
            try:
                obj, reused = future.result()
            except BaseException:
                for pending in futures:
                    pending.cancel()
                raise
            objects.append(obj)
            cached += reused
            if index % 25 == 0 or index == len(tasks):
                print(f"compiled {index}/{len(tasks)} ({cached} cached)", flush=True)
    if any(sha(path) != digest for path, digest in pinned.items()):
        raise ValueError("Generated module input or gameplay profile changed during compilation")
    response = out.parent / "link.rsp"
    response.write_text("\n".join('"' + path.as_posix() + '"' for path in sorted(objects)), encoding="utf-8")
    subprocess.run([
        str(CLANG), "--target=aarch64-linux-android26", "-flto=thin", "-Wl,--lto-O3",
        "-Wl,--thinlto-jobs=" + str(args.jobs),
        "-Wl,--thinlto-cache-dir=" + str(out.parent / "thinlto-cache"), "-Wl,-z,max-page-size=16384",
        "-Wl,-z,defs", "-Wl,--build-id=sha1", *(["-shared"] if args.shared else []), "@" + str(response),
        "-o", str(out), "-lm", "-ldl", "-llog", "-landroid", "-lEGL", "-lGLESv3", "-laaudio", "-lz",
    ], cwd=ROOT, check=True)
    receipt = {
        "output": str(out), "sha256": sha(out), "compiler": compiler,
        "target": "aarch64-linux-android26", "cflags": common, "sources": len(tasks),
        "cached": cached, "generated": str(generated), "shared": args.shared,
        "fast_rep_movs": not args.no_fast_rep_movs,
        "separate_storage": not args.no_separate_storage,
        "generated_storage": "guest-object" if not args.no_separate_storage else "unrestricted",
        "game_cflags": game_flags, "game_native_math": True, "flag_independent_entries": len(independent),
        "profile_sha256": pinned[profile] if profile is not None else None,
        "whole_game": "NOT YET VERIFIED",
    }
    out.with_suffix(".json").write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(receipt, indent=2))


if __name__ == "__main__":
    main()
