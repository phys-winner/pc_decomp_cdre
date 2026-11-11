import hashlib
import json
from pathlib import Path
import struct

import pefile
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes

ROOT = Path(__file__).resolve().parents[1]
MASK = 0xFFFFFFFF


def digest(data):
    return hashlib.sha256(data).hexdigest()


def decode_header(raw):
    if len(raw) != 0xF0:
        raise ValueError("Unexpected wrapper header size")
    words = struct.unpack("<60I", raw)
    decoded = struct.pack("<60I", words[0], *(words[i] ^ words[i - 1] for i in range(1, 60)))
    if struct.unpack_from("<I", decoded, 4)[0] != 0xC0DEC0DF:
        raise ValueError("Wrapper header signature mismatch")
    return decoded


def decrypt_xtea_cbc(data, key):
    if len(data) % 8 or len(key) != 4:
        raise ValueError("Invalid XTEA block or key length")
    result = bytearray()
    previous = (0x55555555, 0x55555555)
    for at in range(0, len(data), 8):
        cipher = struct.unpack_from("<II", data, at)
        left, right = cipher
        total = 0xC6EF3720
        for _ in range(32):
            right = (right - ((((left << 4) ^ (left >> 5)) + left) ^
                              (total + key[(total >> 11) & 3]))) & MASK
            total = (total - 0x9E3779B9) & MASK
            left = (left - ((((right << 4) ^ (right >> 5)) + right) ^
                            (total + key[total & 3]))) & MASK
        result.extend(struct.pack("<II", left ^ previous[0], right ^ previous[1]))
        previous = cipher
    return bytes(result)


def main():
    config = json.loads((ROOT / "config/inputs.json").read_text(encoding="utf-8"))
    source = ROOT / config["original_copy"] / config["main_executable"]
    original = source.read_bytes()
    if digest(original) != config["main_executable_sha256"]:
        raise ValueError("Original executable hash changed")
    pe = pefile.PE(data=original, fast_load=True)
    base = pe.OPTIONAL_HEADER.ImageBase
    entry_rva = pe.OPTIONAL_HEADER.AddressOfEntryPoint
    entry = base + entry_rva
    if base != 0x400000 or entry_rva != 0x68D310:
        raise ValueError("Unexpected Crashday wrapper geometry")
    if pe.get_data(entry_rva, 16) != bytes.fromhex("e800000000505351525657558b44241c"):
        raise ValueError("Unexpected Crashday wrapper prologue")
    header = decode_header(pe.get_data(entry_rva - 0xF0, 0xF0))
    image_base = struct.unpack_from("<I", header, 8)[0]
    wrapper_rva, header_offset = struct.unpack_from("<II", header, 0x10)[0], struct.unpack_from("<I", header, 0x18)[0]
    original_rva = struct.unpack_from("<I", header, 0x20)[0]
    if image_base != base or wrapper_rva != entry_rva or header_offset != 0x310:
        raise ValueError("Wrapper fields disagree with PE headers")
    text = next(section for section in pe.sections if section.Name.rstrip(b"\0") == b".text")
    if not text.VirtualAddress <= original_rva < text.VirtualAddress + text.Misc_VirtualSize:
        raise ValueError("Original entry is outside .text")
    bind = pe.sections[-1]
    if bind.Name.rstrip(b"\0") != b".bind":
        raise ValueError("Last section is not .bind")
    payload_offset, payload_size, app_id = struct.unpack_from("<III", header, 0x30)
    if app_id != 508980 or payload_offset + payload_size > bind.SizeOfRawData:
        raise ValueError("Unexpected app ID or payload range")
    encrypted_payload = original[bind.PointerToRawData + payload_offset:
                                 bind.PointerToRawData + payload_offset + payload_size]
    payload = decrypt_xtea_cbc(encrypted_payload, struct.unpack_from("<4I", header, 0x98))
    payload_pe = pefile.PE(data=payload)
    exports = [(symbol.name, symbol.address) for symbol in payload_pe.DIRECTORY_ENTRY_EXPORT.symbols]
    if payload_pe.FILE_HEADER.Machine != 0x14C or exports != [(b"_steam@12", 0x3D90)]:
        raise ValueError("Decrypted payload identity changed")

    code_size = struct.unpack_from("<I", header, 0x50)[0]
    if code_size != text.SizeOfRawData:
        raise ValueError("Encrypted code range differs from .text")
    key = header[0x58:0x78]
    encrypted_prefix = header[0x78:0x98]
    encrypted_code = original[text.PointerToRawData:text.PointerToRawData + code_size]
    iv = Cipher(algorithms.AES(key), modes.ECB()).decryptor().update(encrypted_prefix[:16])
    plaintext = Cipher(algorithms.AES(key), modes.CBC(iv)).decryptor().update(encrypted_prefix[16:] + encrypted_code)
    padding = plaintext[-1]
    if not 1 <= padding <= 16 or plaintext[-padding:] != bytes([padding]) * padding:
        raise ValueError("Decrypted .text has invalid PKCS#7 padding")
    decoded_code = plaintext[:-padding]
    if len(decoded_code) != code_size:
        raise ValueError("Decrypted .text size mismatch")
    recovered = bytearray(original)
    recovered[text.PointerToRawData:text.PointerToRawData + code_size] = decoded_code
    optional = pe.OPTIONAL_HEADER.get_file_offset()
    struct.pack_into("<I", recovered, optional + 16, original_rva)
    struct.pack_into("<I", recovered, optional + 64, 0)
    bind_header = bind.get_file_offset()
    recovered[bind_header:bind_header + 40] = bytes(40)
    struct.pack_into("<H", recovered, pe.FILE_HEADER.get_file_offset() + 2, len(pe.sections) - 1)
    struct.pack_into("<I", recovered, optional + 56, bind.VirtualAddress)
    del recovered[bind.PointerToRawData:]
    recovered = bytes(recovered)
    recovered_pe = pefile.PE(data=recovered, fast_load=True)
    if recovered_pe.OPTIONAL_HEADER.AddressOfEntryPoint != original_rva:
        raise ValueError("Recovered entry point was not installed")
    if recovered_pe.get_data(original_rva, 10) != bytes.fromhex("e84e040000e900000000"):
        raise ValueError("Recovered entry bytes differ from the running original")
    if any(section.Name.rstrip(b"\0") == b".bind" for section in recovered_pe.sections):
        raise ValueError("Wrapper section remains in recovered image")

    output = ROOT / "generated/input/crashday.exe"
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_bytes(recovered)
    if digest(source.read_bytes()) != config["main_executable_sha256"]:
        raise ValueError("Original executable changed during extraction")
    report = {
        "original_sha256": config["main_executable_sha256"],
        "recovered_sha256": digest(recovered),
        "recovered_file": "generated/input/crashday.exe",
        "original_entry_va": hex(base + original_rva),
        "wrapper_entry_va": hex(entry),
        "app_id": app_id,
        "payload_sha256": digest(payload),
        "payload_export": "_steam@12",
        "code_bytes": code_size,
        "original_modified": False,
        "guest_cpu_executed": False,
        "layout": {
            "header": "entry-0xf0; XOR with previous encoded DWORD",
            "payload": "XTEA32-CBC; key header+0x98; offset/size header+0x30",
            "text": "AES-256-CBC; key header+0x58; two encrypted prefix blocks header+0x78",
        },
    }
    report_path = ROOT / "work/steam-extraction.json"
    temporary = report_path.with_suffix(".json.tmp")
    temporary.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    temporary.replace(report_path)
    print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
