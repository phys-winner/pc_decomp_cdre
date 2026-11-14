import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import ssl
import struct
import subprocess
import sys
import tempfile
import zipfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "android/launcher/tools"))
import launcher as port_launcher  # noqa: E402


def sha(path):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


def run(*args):
    subprocess.run([str(arg) for arg in args], cwd=ROOT, check=True)


def check_elf(data):
    if len(data) < 64 or data[:6] != b"\x7fELF\x02\x01" or struct.unpack_from("<HH", data, 16) != (3, 183):
        raise ValueError("The APK requires an AArch64 ELF shared library")
    offset = struct.unpack_from("<Q", data, 32)[0]
    entry_size, count = struct.unpack_from("<HH", data, 54)
    if entry_size < 56 or not count or offset + entry_size * count > len(data):
        raise ValueError("Invalid ELF program headers")
    loads = 0
    for index in range(count):
        kind, flags, file_offset, address, physical, file_size, memory_size, alignment = struct.unpack_from("<IIQQQQQQ", data, offset + index * entry_size)
        if kind == 1:
            loads += 1
            if alignment < 16384 or alignment & (alignment - 1) or (address - file_offset) % 16384:
                raise ValueError("ELF LOAD segments must support 16 KiB pages")
    if not loads:
        raise ValueError("ELF has no LOAD segments")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--library", type=Path, default=ROOT / "build/android/libcrashday.so")
    parser.add_argument("--output", type=Path, default=ROOT / "build/apk/Crashday.apk")
    parser.add_argument("--external", action="store_true", help="External-only distribution (the sole supported mode)")
    parser.add_argument("--build-tools", type=Path,
                        help="Android SDK build-tools directory (default: SDK/build-tools/37.0.0)")
    parser.add_argument("--signing-config", type=Path, default=ROOT / "signing.local.json",
                        help="Private JDK and signing configuration; see signing.example.json")
    args = parser.parse_args()
    args.external = True
    sdk = Path(os.environ.get("ANDROID_SDK_ROOT", Path.home() / "AppData/Local/Android/Sdk"))
    tools = args.build_tools or sdk / "build-tools/37.0.0"
    android = sdk / "platforms/android-37.0/android.jar"
    if not args.signing_config.is_file():
        parser.error("Signing configuration is missing; copy signing.example.json to signing.local.json and configure it")
    machine = json.loads(args.signing_config.read_text(encoding="utf-8"))
    java = Path(machine["java_exe"]).parent
    signing = machine["signer"]
    signer_dir = Path(signing["dir"])
    signer = signer_dir / signing["apksigner"]
    certificate = signer_dir / signing["cert"]
    key = signer_dir / signing["key"]
    for required in (tools / "aapt2.exe", tools / "zipalign.exe", tools / "lib/d8.jar", android, signer, certificate, key):
        if not required.is_file():
            parser.error(f"Required Android tool/input is missing: {required}")
    certificate_sha = hashlib.sha256(ssl.PEM_cert_to_DER_cert(certificate.read_text())).hexdigest()
    if certificate_sha != signing["expected_cert_sha256"]:
        parser.error("Configured signing certificate SHA256 mismatch")
    library = args.library.resolve()
    data = library.read_bytes()
    check_elf(data)
    receipt_path = library.with_suffix(".json")
    receipt = json.loads(receipt_path.read_text(encoding="utf-8"))
    if receipt.get("sha256") != hashlib.sha256(data).hexdigest() or not receipt.get("shared"):
        parser.error("Native library receipt is stale or is not an APK shared build")
    subprocess.run([sys.executable, str(ROOT / "tools/build_texconv.py")], cwd=ROOT, check=True)
    texconv = ROOT / "build/android/texconv/libcrashdaytex.so"
    check_elf(texconv.read_bytes())
    run(sys.executable, ROOT / "android/launcher/tools/icons.py", "check", ROOT / "android/app/res")
    out = args.output.resolve()
    out.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="crashday-apk-", dir=out.parent) as temporary:
        stage = Path(temporary)
        classes, dex, assets = stage / "classes", stage / "dex", stage / "assets"
        for directory in (classes, dex, assets):
            directory.mkdir()
        spec = json.loads((ROOT / "android/port.json").read_text(encoding="utf-8"))
        spec["app"]["allFilesAccess"] = args.external
        spec["distributions"][0]["embedded"] = not args.external
        spec_path = stage / "port.json"
        spec_path.write_text(json.dumps(spec, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
        prepared = port_launcher.prepare(spec_path, ROOT / "android/app/AndroidManifest.xml", stage / "launcher")
        shutil.copytree(Path(prepared["assets"]) / "launcher", assets / "launcher")
        for source, target in (
            (ROOT / "original/game/third-party-notices.txt", "crashday-third-party-notices.txt"),
            (ROOT / "reference/pcrecomp/LICENSE", "pcrecomp-LICENSE"),
            (ROOT / "reference/mojoshader/LICENSE.txt", "mojoshader-LICENSE.txt"),
            (ROOT / "reference/astcenc/LICENSE.txt", "astcenc-LICENSE.txt"),
            (ROOT / "reference/etcpak/LICENSE.txt", "etcpak-LICENSE.txt"),
            (ROOT / "reference/fsr1/license.txt", "AMD-FSR1-LICENSE.txt"),
            (ROOT / "reference/fsr3/LICENSE.txt", "AMD-FSR3-LICENSE.txt"),
            (ROOT / "licenses/NFSMW-Recompiled-Mobile.txt", "NFSMW-Recompiled-Mobile-LICENSE"),
        ):
            shutil.copy2(source, assets / target)
        (assets / "images").mkdir()
        for module in json.loads((ROOT / "config/modules.json").read_text(encoding="utf-8"))["modules"]:
            image = ROOT / "generated/input" / module["file"]
            report = json.loads((ROOT / "generated" / module["name"] / "report.json").read_text(encoding="utf-8"))
            if sha(image) != report["image_sha256"]:
                parser.error("Prepared image differs from its generated code: " + module["file"])
            shutil.copy2(image, assets / "images" / module["file"])
        shutil.copy2(ROOT / "config/prepared-cpk-integrity.json", assets / "images/prepared-cpk-integrity.json")
        if not args.external:
            for directory in ("data", "user"):
                shutil.copytree(ROOT / "original/game" / directory, assets / "game" / directory)
        run(tools / "aapt2.exe", "compile", "--dir", ROOT / "android/app/res", "-o", stage / "resources.zip")
        run(tools / "aapt2.exe", "link", "-I", android, "--manifest", prepared["manifest"],
            "-0", "cpk", "-0", "cdx", "-0", "trk", "-0", "bmp", "-0", "exe", "-0", "dll",
            "-A", assets, stage / "resources.zip", "-o", stage / "base.apk")
        sources = sorted((ROOT / "android/app/src/org/crashday").rglob("*.java")) + [Path(path) for path in prepared["sources"]]
        javac_args = stage / "javac.args"
        javac_args.write_text("\n".join(str(path) for path in sources), encoding="utf-8")
        run(java / "javac.exe", "--release", "8", "-encoding", "UTF-8", "-cp", android, "-d", classes, "@" + str(javac_args))
        d8_args = stage / "d8.args"
        d8_args.write_text("\n".join(str(path) for path in sorted(classes.rglob("*.class"))), encoding="utf-8")
        run(java / "java.exe", "-cp", tools / "lib/d8.jar", "com.android.tools.r8.D8",
            "--lib", android, "--min-api", "26", "--output", dex, "@" + str(d8_args))
        unsigned = stage / "unsigned.apk"
        shutil.copy2(stage / "base.apk", unsigned)
        with zipfile.ZipFile(unsigned, "a", zipfile.ZIP_DEFLATED) as apk:
            apk.write(dex / "classes.dex", "classes.dex")
            apk.write(library, "lib/arm64-v8a/libcrashday.so")
            apk.write(texconv, "lib/arm64-v8a/libcrashdaytex.so")
        run(tools / "zipalign.exe", "-f", "-P", "16", "4", unsigned, stage / "aligned.apk")
        run(java / "java.exe", "-jar", signer, "sign", "--key", key, "--cert", certificate,
            "--out", out, stage / "aligned.apk")
        verified = subprocess.run([str(java / "java.exe"), "-jar", str(signer), "verify", "--verbose", "--print-certs", str(out)],
                                  cwd=ROOT, check=True, text=True, capture_output=True)
        if signing["expected_cert_sha256"].lower() not in verified.stdout.lower():
            parser.error("APK signing certificate verification failed")
        run(tools / "zipalign.exe", "-c", "-P", "16", "4", out)
    result = {
        "apk": str(out), "sha256": sha(out), "size": out.stat().st_size,
        "library": str(library), "library_sha256": sha(library),
        "texture_converter": str(texconv), "texture_converter_sha256": sha(texconv),
        "launcher_spec_sha256": sha(ROOT / "android/port.json"),
        "package": "org.crashday.port", "renderer": "gles", "payload": "external" if args.external else "embedded", "gameplay": "NOT YET VERIFIED",
    }
    out.with_suffix(".json").write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(result, indent=2))


if __name__ == "__main__":
    main()
