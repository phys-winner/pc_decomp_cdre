# Crashday Redline Edition for Android

An unofficial ARM64 Android port of **Crashday Redline Edition**, made through
static recompilation of the original 32-bit Windows program and its runtime
dependencies. The translated code runs natively on ARM64; the port supplies the
Windows interfaces, Direct3D 9 renderer, audio, storage and Android integration.

**Port version: `0.3-dev` · Android package: `org.crashday.port` · version code: `6`.**

Project: [phys-winner/pc_decomp_cdre](https://github.com/phys-winner/pc_decomp_cdre).
APK releases belong on the project's
[Releases page](https://github.com/phys-winner/pc_decomp_cdre/releases).
This is a development build, with the limitations described below.

## Compatible game version

This project is compatible with **Crashday Redline Edition 1.5.44, Steam build
[10385445](https://steamdb.info/patchnotes/10385445/), released on 23 January 2023**.
The Steam application ID is `508980`. The original 2006 release and other builds
are not supported by the pinned recompilation inputs.

The expected SHA-256 of the original Steam `crashday.exe` is:

```text
812e92bfc56fa6db052d125822b4c69b80743857d62610031aad9c842da01259
```

The recovered executable used for recompilation has SHA-256:

```text
8d1cfcda173be0765d851adea881efc6d6b5521ca911f9665c2632f6b700c966
```

Use your own copy of the compatible game. The source repository excludes game
executables, DLLs, CPK archives, player profiles and saves. The APK bundles the
eight prepared program images needed by the recompiled code; the game's resource
archives and tracks must be supplied separately. A separate `images` folder is
not needed on the phone.

## Requirements and installation

- Android 8.0 (API 26) or later, with an ARM64 CPU and `arm64-v8a` support.
- OpenGL ES 3.2. The supported renderer is the port's native OpenGL ES backend.
- The compatible PC game's `data/` and `user/` directories.
- Space for the APK, approximately 531 MiB of original game files, saves and
  additional texture-conversion output. Conversion needs temporary free space.

The API 26 minimum applies to `0.3-dev` and later builds from this source tree.
The existing public `0.2-dev` APK retains its original Android 11/API 30 minimum.

1. Install the APK. This build uses version code `6` and can update public `0.1-dev`
   (code `1`), `0.1.1-dev` (code `4`), `0.2-dev` (code `5`) and earlier local builds (codes `2` or `3`).
   Updates must retain the signing certificate to preserve the installed app's data.
2. Open Crashday. If game files are missing, press **Import from a ZIP…** on the
   main game card, select the archive, review the destination and free space,
   then press **Unpack**. The ZIP may contain `data/` and `user/` directly or
   inside a wrapping game folder. The default destination is
   `/sdcard/Crashday/game/`. The same ZIP action is available by expanding
   **Game files → ZIP archive…**; **Folder…** selects an already unpacked game.
3. Allow storage access when requested for the selected location. The launcher
   also explains the local-network permission on Android versions that require it.
4. If the GPU needs converted textures, use the launcher's texture conversion.
   ASTC is the conversion path exercised in gameplay. Keep the original files
   until conversion has completed successfully.
5. Press **Play**. Choose the game language in the launcher; language changes
   take effect on the next game start.

The selected game directory should look like this:

```text
game/
  data/
    dat000.cpk
    dat001.cpk
    ...
    dat003.cpk
    ...
  user/
    amateurs2.trk
    ...
```

Keep the complete original `data/` and `user/` directories. The launcher's marker
checks identify an installation; they are not a list of every file the game needs.
ZIP import extracts only those two directories, leaving PC executables and
archived `userdata/` outside the installation. It checks CRCs and free space,
shows progress, supports cancellation and keeps the previous installation if
extraction fails. Existing destination files are replaced only after confirmation
and successful extraction. The player's external `userdata/` is separate.
English, German, Italian, Russian, Turkish, Hungarian, Brazilian Portuguese,
Spanish and Polish use the original language resources. System language falls
back to English when no matching bank exists.

## Controls and settings

Original menus support touch selection, scrolling, text entry and the Android
keyboard. Swipe horizontally across the car preview to change cars, or tap the
arrows' enlarged touch areas. Tap the bottom-right corner to leave credits.
Driving controls support simultaneous fingers and manual pedals.

- Choose steering arrows, an analog stick, a steering wheel or tilt steering in **Options →
  Additional settings**. Tilt steering requires a suitable sensor.
- Steering sensitivity applies to the touch wheel, virtual stick and physical
  left stick together, from 10% to 200%; 100% preserves the previous response.
  Tilt sensitivity has its own setting.
- Hold the pedals to accelerate or brake. Sliding from the accelerator to a
  weapon or nitro keeps acceleration held.
- Tap the tachometer to recover the car. Tap the radar to change camera; hold it
  for 120 ms to look back. The separate look-back button responds on press.
- Tap the upper-left pause region during a race. Its dashed guide appears during
  the pre-race countdown and disappears when racing starts.
- Edit button positions, width, height and transparency across the full display,
  including the strip beside a camera cutout. The modern layout is always used;
  the on-screen controls can be hidden.
- Optional minigun cruise control latches fire on a double tap or a slide from
  the accelerator followed by a 300 ms hold over the minigun. Leaving the button
  or releasing the accelerator before the delay cancels the pending latch.
  An AUTO badge and gold border show when cruise is active. Pressing the minigun
  or sliding back onto it cancels immediately, suppressing fire from that gesture
  until release or leaving the button;
  pause and lifecycle cancellation release it too.
- **Controls → Advanced Controller Settings** restores the original scrollable
  sensitivity, deadzone, saturation, multiplier and force-feedback controls.
  Controller and device vibration have independent switches, also available in
  Additional settings. Tap their rows or use LB/RB on the controller page.
  The port forwards the game's XInput motor commands to Android; physical
  vibration requires the OS to expose a supported vibrator.
- Track editing has touch placement, pan/zoom and keyboard naming. Replay controls
  include playback commands and free-flight camera movement when that mode is active.

Additional settings include UI scale, 3D scale from 25% to 200%, optional instant digital steering and
original/corrected world proportions. Instant steering defaults off and affects
only the local player's arrows, leaving analog steering unchanged. The original
camera makes world geometry 17/15 as wide; the correction restores equal pixel
scales without stretching the HUD. Corrected proportions are the default;
an explicitly saved choice of original proportions is retained. Boolean options
in Additional settings use On/Off labels. Its menu entry uses the game's original font.
Graphics settings expose the display refresh rates and MSAA sample counts
supported by the device; the FPS limit stays in Graphics. Refresh rate and FPS limit are independent. Lowering the
3D scale preserves the full-resolution race HUD. Controls are released when the
app loses focus; returning through the launcher resumes a running game process.

Above 100%, 3D scale uses supersampling and bypasses FSR while retaining its saved
choice; at 200%, the 3D scene has four times as many pixels. Changing scale requires
a restart and leaves the UI at full display resolution.

Upscaling is off by default and sits beside 3D scale. **FSR 1 + MSAA** applies
geometry antialiasing before AMD's EASU/RCAS spatial reconstruction. **FSR 3.1**
uses the pinned AMD 3.1.4 temporal upscaler in races/replays with depth, camera jitter, rigid-object
motion and reactive masks, without frame generation. Both preserve the
full-resolution UI and require a restart. FSR 3.1 requires GLES 3.2 and sufficient
compute/image limits; unsupported initialization is reported in settings and
falls back to ordinary scaling. Its FP32 GLES path is expensive on older GPUs.
Programmable animated surfaces reject temporal history until previous vertex
positions are available, avoiding reuse of incorrect motion. Menu previews and
loading screens bypass temporal reconstruction and jitter.

## Steam Workshop mods

Open **Steam Workshop** in the launcher to browse Crashday's public catalogue.
Search by name, select a category, change sorting or paste a Workshop item URL/ID.
Cards include previews, tags, size and a details view with the description and
Steam page. The API badge checks Steam's metadata service separately from the
catalogue; tap it to check again.

**Downloads** shows the persistent queue, progress, cancellation, errors and retry.
Starting an installation keeps the current tab and animates Downloads; each tab
retains its own scroll position. The launcher shows enabled/downloaded mod counts.
Downloads continue through the launcher's foreground work service. Reopening the
Workshop resumes queued work after an interrupted process. Files are streamed,
checked against their expected sizes and validated before installation; a failed
update preserves the installed version.

**Installed** controls enabled mods and their order, with enable/disable-all,
per-item removal, **Disable Workshop mods** and **Mod development mode**. The latter
retains the original game's loading of local development mods. Mods load from top
to bottom through the original content loader. Changes take effect at the next
complete game start; returning to an already running game keeps its current mods.
Old files needed by that game remain until the next fresh start.
**Delete all** removes installed mods after confirmation; other queued downloads
remain. The manager follows all nine game languages.

The native interface adapts to phones and tablets in both orientations. The tablet
catalogue uses two or three columns, larger previews, wider details and separate
columns for installed mods and downloads when space permits.

Public CPK mods and TRK tracks with Steam-provided download URLs are supported,
up to 2 GiB per file. This does not sign in to Steam or synchronize an account's
subscriptions. Collections and content that requires Steam depot authentication
are not downloaded. The catalogue uses Valve's structured page data and can need
an update if Valve changes that format.

Downloaded mods are held in the app's private storage, separately from the original
game files and player profiles. APK updates preserve them; uninstalling the app
removes them. Base game archives are not replaced. Compatibility, dependencies and
conflicts remain specific to each mod.

## Saves and diagnostics

Player files are stored in **`/sdcard/Crashday/userdata/`**, outside Android's
app-specific directory. The migration from older app-specific storage copies only
missing files, keeps existing destination files and retains the source. Test
profiles use separate `userdata-*` directories.

Back up `userdata/` before switching builds. App preferences and edited touch
layouts are app data and can be removed by uninstalling the APK, even though the
external player directory remains. Do not delete it when replacing game data.

The launcher reports missing files, launch failures, version information and
texture-conversion progress. For development diagnostics, capture the `Crashday`
logcat tag. Remove device identifiers, personal paths and player data before
sharing a report.

## Building from source

The current build scripts target **Windows with PowerShell**. They use Python and
the Android command-line tools directly; Gradle is not required.

| Tool | Version / requirement |
| --- | --- |
| Python | 3.11 or later; 3.13 used locally |
| Python packages | Pinned in [requirements.txt](requirements.txt) |
| Android NDK | `27.2.12479018` |
| Android platform | API 37; scripts expect `platforms/android-37.0/android.jar` |
| Android build-tools | `37.0.0`, or an explicit compatible directory |
| JDK | 17 or later; `java` and `javac` on `PATH` for tests |
| Host regression tests | Visual Studio C++ build tools and Windows SDK |
| APK signing | Existing PKCS#8 private key, PEM certificate and `apksigner.jar` |

Set `ANDROID_SDK_ROOT` and, if needed, `ANDROID_NDK_HOME`. The scripts otherwise
use the usual Windows Android SDK location. APK packaging accepts `--build-tools`
when the build-tools are installed elsewhere.

```powershell
git clone https://github.com/phys-winner/pc_decomp_cdre.git
cd pc_decomp_cdre
python -m pip install -r requirements.txt
```

### Prepare external inputs

Edit `config/inputs.json` locally so `source_root` points to your compatible Steam
installation, then make and verify the local input copy:

```powershell
python -X utf8 -B tools/prepare_inputs.py
python -X utf8 -B tools/extract_steam_wrapper.py
New-Item -ItemType Directory -Force original/recovered
Copy-Item generated/input/crashday.exe original/recovered/crashday.exe
```

Supply the exact original runtime DLLs at the locations in
[config/modules.json](config/modules.json). That file pins all eight originals
by SHA-256 and records the required load bases and jump-table checks. Different
versions of a DLL are not interchangeable. The two legacy DirectX inputs default
to `C:/Windows/SysWOW64/`; change their `source` paths locally if necessary.

Restore the prepared images without regenerating the translated C:

```powershell
python -X utf8 -B tools/lift_crashday.py --prepare-only
```

The repository includes the canonical generated C, headers, dispatch and reports
used by this port. **Keep them when building.** A full historical regeneration is
not yet reproducible for every module; in particular, the `msvcp120` full-module
catalog includes an exported data address. `--prepare-only` verifies the originals,
applies the existing rebasing checks and matches the resulting images against
the canonical reports. It leaves the generated code and dispatch unchanged.
Targeted function regeneration is available for development through `--module`
and `--function`; it is not part of an ordinary APK build.

### Compile and sign

Copy [signing.example.json](signing.example.json) to `signing.local.json` and set
the JDK executable, signer directory, certificate, private key and expected
SHA-256 of the certificate's DER encoding. The local configuration and all key
material are ignored by Git. Packaging requires the existing key and validates
the certificate; it never generates a replacement signing identity.

```powershell
python -X utf8 -B tools/build_android.py --shared --jobs 4 --output build/android/libcrashday.so
python -X utf8 -B tools/build_apk.py --library build/android/libcrashday.so --output build/apk/Crashday.apk
```

Packaging also builds the on-device texture converter, prepares the shared
launcher, checks the adaptive icons, validates the native library receipt and
bundled program-image hashes, signs the APK and checks its signature and 16 KiB
ZIP alignment. Both native libraries must have ELF LOAD segments compatible with
16 KiB pages. Only the external game-data distribution is supported.

The launcher snapshot is included in `android/launcher/`. Required compiler,
renderer and texture-codec sources and their original licenses are under
`reference/`. DXVK and Turnip research/build helpers are retained for developers;
the standard APK offers OpenGL ES only.

### Checks

With the original/prepared inputs and Windows host toolchain available:

```powershell
python -X utf8 -B -m unittest discover -s tools -p "test_*.py"
python -X utf8 -B tools/test_game_language.py
python -X utf8 -B android/launcher/tools/launcher.py check --spec android/port.json
python -X utf8 -B android/launcher/tools/icons.py check android/app/res
python -X utf8 -B android/launcher/tests/run_tests.py
```

The unittest suite exercises the host runtime, translated-code integration,
renderer boundaries, controls, menus, lifecycle and packaging. Original-code
oracles require the pinned game/DLL inputs. The separate CPK compatibility tool
requires converted game archives and a derived executable; see its `--help` for
fixture paths. None of these host checks proves a complete game playthrough.

To exercise Workshop parsing and persistence with Android's real JSON and storage
APIs on a selected connected device:

```powershell
python -X utf8 -B tools/test_workshop_backend.py --android-serial DEVICE_SERIAL
```

The check uses a temporary directory and does not install an APK or change player
profiles.

## Local release files

`pub/` is ignored by Git. Local release APKs follow the Heroes V convention:
`crashday-0.3-dev-<first-eight-SHA256-characters>.apk`, accompanied by a `.sha256`
file containing the full checksum and APK basename. For example, after packaging:

```powershell
New-Item -ItemType Directory -Force pub
$apkSource = "build/apk/Crashday.apk"
$apkHash = (Get-FileHash -Algorithm SHA256 -LiteralPath $apkSource).Hash.ToLowerInvariant()
$releaseName = "crashday-0.3-dev-$($apkHash.Substring(0, 8)).apk"
Copy-Item -LiteralPath $apkSource -Destination (Join-Path pub $releaseName)
"$apkHash  $releaseName" | Set-Content -Encoding ascii -LiteralPath (Join-Path pub ($releaseName -replace '\.apk$', '.sha256'))
```

The version is stored in `android/app/AndroidManifest.xml`. This build uses
`0.3-dev` / code `6`, above public `0.1-dev` / code `1`, `0.1.1-dev` / code `4`, `0.2-dev` / code `5`
and earlier local codes `2` and `3`. Increase `versionCode` for each later
release and retain the same APK signing key.
Preparing these local files does not publish a GitHub release or create a tag.

## Launcher updates

The launcher checks the project's GitHub releases automatically at most once every
six hours. **About → Check for updates** requests a check immediately. A newer
compatible version offers the release notes and an APK download through the
browser; Android handles installation. The channel compares Android version
codes, checks the minimum Android version and warns about a different signing
certificate. It does not install APKs silently.

The update feed is
[`update.json`](https://github.com/phys-winner/pc_decomp_cdre/releases/latest/download/update.json).
[The update workflow](.github/workflows/update-manifest.yml) reads the APKs attached
to published releases and maintains `update.json` and its `versions.json` cache.
It runs on release changes, every six hours and through manual workflow dispatch.
The version, package, ABI, minimum SDK, certificate and SHA-256 come from the APK.
Publish player-facing releases without GitHub's pre-release flag so the permanent
`releases/latest` link works, even while the version name contains `-dev`.
For future updates, increase `versionCode` above `6` and retain the signing key.

## Reproducible performance benchmark

The local `heavy-v1` fixture records a Wrecking Match on `redline_cube.trk` with
seven Hard opponents, double missiles/miniguns, nitro, pickups and medium damage.
The runner selects Chase Cam (near), the first AI opponent and real-time playback.
It uses 100% render/UI scale, a 60 FPS cap and the fixture's graphics/audio settings.

With the current APK installed and the matching game data available, run:

```powershell
python tools/benchmark.py --serial SERIAL
```

By default this runs three 90-second samples after replay time 20 seconds.
`--runs`, `--seconds`, `--warmup` and `--output` change the sampling parameters.
The device must be unlocked. The script addresses only the supplied adb serial.
It uses the reserved `userdata-BENCHMARK` profile and refuses to replace unowned
files already present there. It stops the app at the end and retains its shader
cache for subsequent measurements.

The private fixture lives in `work/benchmarks/heavy-v1/`: `heavy-v1.rpl`,
`graphics.config`, `audio.config` and `manifest.json`. Its manifest pins the replay,
settings, original track and exact ASTC game archives by SHA-256. Keep these files
unchanged between builds. The replay contains game data and stays outside Git.

Results go to `work/benchmarks/results/<UTC timestamp>/results.json`, with the
installed APK hash, actual resolution and replay time range. Per-frame CSVs use
SurfaceFlinger's actual presentation timestamps; average FPS, the slowest 1%
average FPS and p50/p95/p99 frame times are computed from those intervals.
Loading, screenshots and memory/thermal snapshots are outside the measured interval.
Each run also records startup-to-menu and replay-loading times in
`run-N-loading.json` and `results.json`. Every run starts a new game process;
Android's filesystem cache and the retained shader cache are not cleared.
The runner rejects missing frame history, playback end and camera/speed/car changes.
It also retains engine logs, screenshots, memory and battery/thermal snapshots.
These outputs contain device details and stay outside Git.

Replay playback measures rendering and recorded effects. It does not reproduce
the cost of live AI decisions; compare live gameplay separately when changing AI
or physics. Different resolutions, FPS caps, texture formats, drivers, charging
conditions and temperatures must be accounted for when comparing devices.

## Status and known limitations

Development testing has exercised menus, races, weapons, track editing, replay,
settings, texture conversion and app resume on specific Android devices. Later
graphics work was exercised on a Pixel 10 with Android 17 and a PowerVR GPU;
earlier gameplay work used a Redmi Note 8 Pro with Android 11 and Mali-G76.
These are scoped development results, not a compatibility guarantee for every
device or every game mode.

- A full career, every track/car/material and long endurance sessions have not
  been exhaustively tested.
- Steam online matchmaking, account Workshop subscription synchronization and voice
  capture are unavailable. Public Workshop CPK/TRK downloads use the launcher.
  The port has a local Steam interface and LAN networking code;
  complete multiplayer interoperability is not established by host tests.
- Physical controllers, Bluetooth input, accessibility with TalkBack and
  subjective audio quality have not received comprehensive acceptance testing.
- ASTC conversion has gameplay evidence; full ETC2 conversion has not received
  equivalent device coverage.
- Packaging checks 16 KiB alignment. Historical runtime tests on 16 KiB devices
  apply to their exact earlier APKs; the publication APK needs its own runtime
  acceptance on such a device.
- The newest countdown pause-region guide still needs a physical edge-tap check.
- This is a debuggable development APK. A newly packaged APK still needs its own
  device smoke test; earlier installed APKs do not establish its acceptance.

## License and credits

Port integration code is distributed under [GNU GPL version 3](LICENSE).
Third-party components retain their respective licenses and notices; see
[THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md). In particular, the driving touch
controls are adapted from
[NFSMW-Recompiled-Mobile](https://github.com/victorgbd/NFSMW-Recompiled-Mobile).

Crashday Redline Edition, its original program code, generated translations of
that code, resources, names and trademarks remain the property of their respective
owners. The port's license does not grant rights to the original game or Microsoft
runtime binaries. This project is an independent, unofficial port.
