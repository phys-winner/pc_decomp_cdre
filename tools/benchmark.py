"""Run the fixed heavy replay on one explicitly selected Android device.

python tools/benchmark.py --serial SERIAL
The private replay fixture is kept in work/benchmarks/heavy-v1, outside Git.
"""
import argparse
import csv
from datetime import datetime, timezone
import hashlib
import json
import math
from pathlib import Path
import re
import shlex
import statistics
import struct
import subprocess
import time

ROOT = Path(__file__).resolve().parents[1]
PACKAGE = "org.crashday.port"
PROFILE = "/sdcard/Crashday/userdata-BENCHMARK"
STORE = PROFILE + "/AppData/Local/Crashday"
MARKER = b"Crashday heavy replay benchmark v1\n"


def sha(path):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


def ui_scene(text):
    scenes = re.findall(r"\[ui\] scene=(\d+)\b", text)
    return int(scenes[-1]) if scenes else None


def intro_key(text, seen):
    scene = ui_scene(text)
    if scene in (8, 15) and scene not in seen:
        seen.add(scene)
        return 66
    return None


def latency(text):
    """SurfaceFlinger columns: desired, actual presentation, frame ready (ns)."""
    stamps = set()
    for line in text.splitlines()[1:]:
        fields = line.split()
        if len(fields) == 3 and all(field.isdecimal() for field in fields):
            stamp = int(fields[1])
            if 0 < stamp < (1 << 63) - 1:
                stamps.add(stamp)
    return sorted(stamps)


def surface_latency(shell, layer):
    for attempt in range(3):
        try:
            return shell("dumpsys", "SurfaceFlinger", "--latency", layer)
        except subprocess.CalledProcessError:
            if attempt == 2:
                raise
            time.sleep(.25)


def open_replay_popup(read_state, select, index):
    def opened(state):
        if state and state[0] & 0x10000:
            if (state[0] >> 20) & 15 != index:
                raise RuntimeError("A different replay option opened")
            return state
        return None

    for _ in range(3):
        if current := opened(read_state()):
            return current
        select(index)
        for _ in range(5):
            time.sleep(.2)
            if current := opened(read_state()):
                return current
    raise TimeoutError("Replay option did not open after three attempts")


def summarize(stamps):
    stamps = sorted(set(stamps))
    if len(stamps) < 3:
        raise ValueError("Not enough presented frames; no performance result was produced")
    times = [(b - a) / 1e6 for a, b in zip(stamps, stamps[1:])]
    ordered = sorted(times)

    def percentile(p):
        at = (len(ordered) - 1) * p
        lower = math.floor(at)
        return ordered[lower] + (ordered[math.ceil(at)] - ordered[lower]) * (at - lower)

    return {
        "frames": len(times), "seconds": sum(times) / 1000,
        "fps": 1000 / statistics.mean(times),
        "one_percent_low_fps": 1000 / statistics.mean(ordered[-math.ceil(len(times) * .01):]),
        "frame_ms_p50": percentile(.5), "frame_ms_p95": percentile(.95),
        "frame_ms_p99": percentile(.99), "frame_ms_max": max(times),
        "frames_over_50ms": sum(t > 50 for t in times),
        "frames_over_100ms": sum(t > 100 for t in times),
    }


def widgets(log):
    log = log[log.rfind("[ui] page "):]
    pattern = r"\[ui\] [0-9A-F]+ [0-9A-F]+ ([\d.-]+) ([\d.-]+) ([\d.-]+) ([\d.-]+) (\d+)/(\d+) (\w+)$"
    return {m[7]: tuple(map(float, m.groups()[:4])) for line in log.splitlines()
            if (m := re.search(pattern, line)) and m[5] == m[6] == "1"}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--serial", required=True, help="Exact adb device serial; never selects another device")
    parser.add_argument("--fixture", type=Path, default=ROOT / "work/benchmarks/heavy-v1")
    parser.add_argument("--runs", type=int, default=3)
    parser.add_argument("--seconds", type=float, default=90)
    parser.add_argument("--warmup", type=float, default=20, help="Replay time at which measurement starts")
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    if args.runs < 1 or args.seconds < 5 or args.warmup < 0 or not math.isfinite(args.seconds + args.warmup):
        parser.error("runs >= 1, seconds >= 5 and warmup >= 0 are required")
    fixture = args.fixture.resolve()
    manifest = json.loads((fixture / "manifest.json").read_text(encoding="utf-8"))
    for name, expected in manifest["files"].items():
        if Path(name).name != name or sha(fixture / name) != expected:
            parser.error("Fixture hash mismatch: " + name)
    if args.seconds + args.warmup > manifest["max_window_end_seconds"]:
        parser.error("The requested window exceeds the fixture's measurement limit")
    output = args.output or ROOT / "work/benchmarks/results" / datetime.now(timezone.utc).strftime("%Y%m%dT%H%M%SZ")
    output.mkdir(parents=True, exist_ok=False)

    def adb(*command, timeout=40):
        return subprocess.run(["adb", "-s", args.serial, *map(str, command)],
                              check=True, capture_output=True, timeout=timeout).stdout

    def shell(*command):
        return adb("shell", " ".join(shlex.quote(str(part)) for part in command)).decode("utf-8", "replace")

    def log():
        return adb("shell", "cat", PROFILE + "/crashday.log").decode("utf-8", "replace")

    def wait(predicate, description, timeout=240):
        print("  Waiting for " + description, flush=True)
        deadline = time.monotonic() + timeout
        while time.monotonic() < deadline:
            text = log()
            if "[crashday] process exit" in text or "[fatal]" in text or "[trap]" in text:
                raise RuntimeError("Game stopped while waiting for " + description)
            value = predicate(text)
            if value:
                return value
            time.sleep(.5)
        raise TimeoutError("Timed out waiting for " + description)

    def tap(x, y):
        shell("input", "swipe", round(x), round(y), round(x), round(y), 100)

    def click(name):
        x, y, w, h = wait(lambda text: widgets(text).get(name), name)
        tap((x + w / 2) * height / 480, (y + h / 2) * height / 480)
        time.sleep(.4)

    def replay_state(text):
        matches = re.findall(r"\[replay\] state=([0-9A-F]+) camera=(\d+) speed=(\d+) car=(\d+) seconds=([\d.]+) ended=(\d+) mono_ns=(\d+)", text)
        return (int(matches[-1][0], 16), *map(int, matches[-1][1:4]), float(matches[-1][4]),
                int(matches[-1][5]), int(matches[-1][6])) if matches else None

    def action(index):
        left, right, gap = width * .06, width - 12 * unit, 5 * unit
        cell = (right - left - 8 * gap) / 9
        tap(left + index * (cell + gap) + cell / 2, 27 * unit)
        time.sleep(.35)

    def option(index, field, value):
        current = replay_state(log())
        if current and current[field] == value:
            return
        print(f"  Replay option {index}: setting index {value}", flush=True)
        current = open_replay_popup(lambda: replay_state(log()), action, index)
        difference = value - current[field]
        for _ in range(abs(difference)):
            # The touch controls hold a pulse until the guest consumes it.
            tap(width / 2 - (89 * unit if difference < 0 else 0), 72 * unit)
            time.sleep(.15)
        wait(lambda text: (s if (s := replay_state(text)) and s[field] == value else None), "replay option")
        tap(width / 2 + 89 * unit, 72 * unit)
        wait(lambda text: (s if (s := replay_state(text)) and not s[0] & 0x10000 else None), "popup close")

    if adb("get-state").strip() != b"device":
        raise RuntimeError("Device unavailable")
    if not shell("pm", "path", PACKAGE).startswith("package:"):
        raise RuntimeError("Install the current API-26 benchmark-capable APK first")
    ownership = subprocess.run(["adb", "-s", args.serial, "shell", "cat", PROFILE + "/.benchmark-owned"], capture_output=True)
    if ownership.returncode and shell("sh", "-c", f"if [ -d {PROFILE} ]; then find {PROFILE} -type f; fi").strip():
        raise RuntimeError("The benchmark profile already contains unowned data; preserve or move it first")
    if ownership.returncode == 0 and ownership.stdout.replace(b"\r\n", b"\n") != MARKER:
        raise RuntimeError("Unexpected benchmark profile ownership marker")
    shell("am", "force-stop", PACKAGE)
    shell("mkdir", "-p", STORE + "/config", STORE + "/replays")
    marker = output / ".benchmark-owned"
    marker.write_bytes(MARKER)
    adb("push", marker, PROFILE + "/.benchmark-owned")
    adb("push", fixture / "heavy-v1.rpl", STORE + "/replays/heavy-v1.rpl")
    adb("push", fixture / "graphics.config", STORE + "/config/graphics.config")
    adb("push", fixture / "audio.config", STORE + "/config/audio.config")
    shell("touch", PROFILE + "/menu-debug")
    shell("rm", "-f", PROFILE + "/verbose", PROFILE + "/count-thunks")
    preference = (b'<map><boolean name="gamepadIntroSeen" value="true"/><string name="language">english</string>'
                  b'<int name="upscaler" value="0"/><boolean name="aspectCorrection" value="false"/>'
                  b'<boolean name="instantSteering" value="false"/></map>\n')
    subprocess.run(["adb", "-s", args.serial, "shell", "run-as", PACKAGE, "sh", "-c",
                    shlex.quote("mkdir -p shared_prefs && cat > shared_prefs/port-userdata-BENCHMARK.xml")],
                   input=preference, check=True, capture_output=True, timeout=30)
    metadata = {"serial": args.serial, "fixture": manifest, "runs": args.runs,
                "presentation": {"upscaler": "off", "aspect_correction": False, "instant_steering": False},
                "warmup_seconds": args.warmup, "measurement_seconds": args.seconds,
                "started_utc": datetime.now(timezone.utc).isoformat()}
    for name, command in {"properties": ("getprop",), "display": ("wm", "size"),
                          "package": ("dumpsys", "package", PACKAGE)}.items():
        (output / (name + ".txt")).write_text(shell(*command), encoding="utf-8")
    apk = shell("pm", "path", PACKAGE).splitlines()[0].removeprefix("package:").strip()
    metadata["apk_sha256"] = shell("sha256sum", apk).split()[0]
    metadata["game_files"] = {}
    for name, expected in manifest["game_files"].items():
        if not re.fullmatch(r"(?:data|user)/[A-Za-z0-9_.-]+", name):
            raise ValueError("Invalid fixture game path: " + name)
        digest = shell("sha256sum", "/sdcard/Crashday/game/" + name).split()[0]
        if digest != expected:
            raise RuntimeError("Benchmark game data differs from the fixed fixture: " + name)
        metadata["game_files"][name] = digest
    results = []
    try:
        for run in range(1, args.runs + 1):
            print(f"Run {run}/{args.runs}: loading the fixed replay", flush=True)
            shell("am", "force-stop", PACKAGE)
            # Remove only this tool's log so a previous scene cannot satisfy startup waits.
            shell("rm", "-f", PROFILE + "/crashday.log")
            shell("input", "keyevent", "KEYCODE_WAKEUP")
            shell("wm", "dismiss-keyguard")
            launched_at = time.monotonic()
            shell("am", "start", "-W", "-n", PACKAGE + "/.GameActivity", "--es", "userdata", "userdata-BENCHMARK",
                  "--ei", "uiScale", 100, "--ei", "renderScale", 100, "--ef", "fpsLimit", 60,
                  "--ei", "upscaler", 0, "--ez", "aspectCorrection", "false")
            deadline = time.monotonic() + 240
            intro_seen = set()
            while True:
                try:
                    text = log()
                except subprocess.CalledProcessError:
                    text = ""
                if "btnReplays" in widgets(text):
                    if not re.search(r"\[workshop\] snapshot items=0\b", text):
                        raise RuntimeError("Disable Workshop mods before running the fixed benchmark")
                    break
                if time.monotonic() >= deadline or "[crashday] process exit" in text:
                    raise RuntimeError("Could not reach the main menu")
                if key := intro_key(text, intro_seen):
                    shell("input", "keyevent", key)
                time.sleep(1)
            main_menu_seconds = time.monotonic() - launched_at
            screenshot = adb("exec-out", "screencap", "-p")
            width, height = struct.unpack_from(">II", screenshot, 16)
            if width <= height:
                raise RuntimeError("Game must be visible in landscape")
            density = int(re.findall(r"(\d+)\s*$", shell("wm", "density"), re.M)[-1]) / 160
            unit = density * min(1, width / (density * 760), height / (density * 360))
            click("btnReplays")
            page = wait(lambda text: (w if "lstReplayList" in (w := widgets(text)) or "btnLoadReplay" in w else None), "replay menu")
            if "lstReplayList" not in page:
                click("btnLoadReplay")
            x, y, w, h = wait(lambda text: widgets(text).get("lstReplayList"), "replay list")
            tap((x + w / 2) * height / 480, (y + 24) * height / 480)
            time.sleep(.6)
            replay_load_started = time.monotonic()
            click("btnLoadReplayOK")
            state = wait(lambda text: replay_state(text), "replay HUD")
            loading = {"main_menu_seconds": main_menu_seconds,
                       "replay_load_seconds": time.monotonic() - replay_load_started,
                       "launch_to_replay_seconds": time.monotonic() - launched_at}
            (output / f"run-{run}-loading.json").write_text(json.dumps(loading, indent=2) + "\n", encoding="utf-8")
            print("  Loading: " + json.dumps(loading), flush=True)
            if not state[0] & 32:
                action(2)
            option(4, 1, manifest["camera_index"])
            option(5, 2, manifest["speed_index"])
            option(6, 3, manifest["car_index"])
            if replay_state(log())[4] >= args.warmup:
                raise RuntimeError("Replay setup exceeded the selected warmup; increase --warmup")
            print(f"Run {run}: waiting for replay time {args.warmup:g} seconds", flush=True)
            wait(lambda text: (s if (s := replay_state(text)) and s[4] >= args.warmup - 2 else None), "warmup")
            layers = shell("dumpsys", "SurfaceFlinger", "--list").splitlines()
            candidates = [s for s in layers if "SurfaceView" in s and PACKAGE in s and "Background" not in s]
            if len(candidates) != 1:
                raise RuntimeError("Expected one game SurfaceView: " + repr(candidates))
            layer = candidates[0]
            (output / f"run-{run}-start.png").write_bytes(adb("exec-out", "screencap", "-p"))
            (output / f"run-{run}-battery-before.txt").write_text(shell("dumpsys", "battery"), encoding="utf-8")
            wait(lambda text: (s if (s := replay_state(text)) and s[4] >= args.warmup else None), "measurement start")
            before = log()
            replay_begin = replay_state(before)
            stamps = latency(surface_latency(shell, layer))
            if not stamps:
                raise RuntimeError("SurfaceFlinger supplies no presented-frame timestamps")
            watermark = stamps[-1]
            collected = [watermark]
            start = time.monotonic()
            with (output / f"run-{run}-latency.txt").open("w", encoding="utf-8") as raw:
                while collected[-1] - watermark < args.seconds * 1e9:
                    if time.monotonic() - start > args.seconds + 15:
                        raise RuntimeError("Presented frames stopped advancing")
                    sample = surface_latency(shell, layer)
                    raw.write(sample + "\n")
                    values = latency(sample)
                    if len(values) >= 127 and values[0] > collected[-1]:
                        raise RuntimeError("SurfaceFlinger history overflow; frame statistics would be incomplete")
                    collected.extend(t for t in values if t > collected[-1])
                    state = replay_state(log())
                    if not state or not state[0] & 32 or state[5] or state[0] & 0x10000 or state[1:4] != (
                            manifest["camera_index"], manifest["speed_index"], manifest["car_index"]):
                        raise RuntimeError("Replay ended or its camera/speed/car changed during measurement")
                    if collected[-1] - watermark < args.seconds * 1e9:
                        time.sleep(.5)
            cutoff = watermark + round(args.seconds * 1e9)
            first_after = next(i for i, stamp in enumerate(collected) if stamp >= cutoff)
            collected = collected[:first_after + 1]
            after = log()
            (output / f"run-{run}.log").write_text(after, encoding="utf-8")
            (output / f"run-{run}-measured.log").write_text(after[len(before):], encoding="utf-8")
            (output / f"run-{run}-end.png").write_bytes(adb("exec-out", "screencap", "-p"))
            for name, command in {"battery-after": ("dumpsys", "battery"), "memory": ("dumpsys", "meminfo", PACKAGE),
                                  "thermal": ("dumpsys", "thermalservice")}.items():
                (output / f"run-{run}-{name}.txt").write_text(shell(*command), encoding="utf-8")
            with (output / f"run-{run}-frames.csv").open("w", newline="", encoding="utf-8") as stream:
                writer = csv.writer(stream)
                writer.writerow(["present_ns", "frame_ms"])
                writer.writerows((b, (b-a)/1e6) for a, b in zip(collected, collected[1:]))
            result = {"run": run, "resolution": [width, height], "replay_start_seconds": replay_begin[4],
                      "replay_end_seconds": replay_state(after)[4], "loading": loading, **summarize(collected)}
            results.append(result)
            print(json.dumps(result, indent=2), flush=True)
            (output / "results.json").write_text(json.dumps({**metadata, "results": results}, indent=2) + "\n", encoding="utf-8")
    except BaseException as error:
        detail = repr(error)
        if isinstance(error, subprocess.CalledProcessError):
            detail += "\nstdout: " + (error.stdout or b"").decode("utf-8", "replace")
            detail += "\nstderr: " + (error.stderr or b"").decode("utf-8", "replace")
        (output / "failure.txt").write_text(detail, encoding="utf-8")
        try:
            (output / "failure.log").write_text(log(), encoding="utf-8")
            (output / "failure.png").write_bytes(adb("exec-out", "screencap", "-p"))
        except subprocess.SubprocessError:
            pass
        raise
    finally:
        shell("am", "force-stop", PACKAGE)
    print("Results: " + str(output.resolve()), flush=True)


if __name__ == "__main__":
    main()
