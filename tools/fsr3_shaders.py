"""Build GLES FP32 variants of the pinned AMD FSR3.1.4 GLSL compute passes."""
import hashlib
import json
from pathlib import Path
import re
import subprocess

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "reference/fsr3"
GPU = SOURCE / "sdk/include/FidelityFX/gpu"
PASSES = SOURCE / "sdk/src/backends/vk/shaders/fsr3upscaler"
FORMATS = {"r8": "rgba8", "rg8": "rgba8", "r16f": "rgba16f", "rg16f": "rgba16f",
           "rg32f": "rgba32f", "r8ui": "r32ui", "r16ui": "r32ui"}
LINEAR32_NAMES = ("r_lanczos_lut", "r_dilated_depth", "r_input_depth")
LINEAR32 = """vec4 fsrLinear32(highp sampler2D image, vec2 uv, float lod) {
    int level = max(0, int(lod));
    ivec2 size = textureSize(image, level), maximum = size - 1;
    vec2 position = uv * vec2(size) - .5, weight = fract(position);
    ivec2 p = ivec2(floor(position));
    vec4 a = texelFetch(image, clamp(p, ivec2(0), maximum), level);
    vec4 b = texelFetch(image, clamp(p + ivec2(1, 0), ivec2(0), maximum), level);
    vec4 c = texelFetch(image, clamp(p + ivec2(0, 1), ivec2(0), maximum), level);
    vec4 d = texelFetch(image, clamp(p + ivec2(1, 1), ivec2(0), maximum), level);
    return mix(mix(a, b, weight.x), mix(c, d, weight.x), weight.y);
}
"""


def spd_array_access(text):
    pattern = r'image(Store|Load)\(\s*rw_spd_mip([0-5])\s*,\s*'
    for match in reversed(list(re.finditer(pattern, text))):
        depth, end = 0, match.end()
        while end < len(text):
            char = text[end]
            if depth == 0 and char in ',)':
                break
            if char in '([':
                depth += 1
            elif char in ')]':
                depth -= 1
            end += 1
        if end == len(text) or depth:
            raise ValueError("Unbalanced SPD image coordinate")
        coordinate = text[match.end():end].strip()
        name = "rw_spd_pyramid" + ("_read" if match[1] == "Load" else "")
        replacement = f"image{match[1]}({name}, ivec3({coordinate}, {match[2]}))"
        if match[1] == "Store":
            replacement = replacement[:-1]
        else:
            end += 1
        text = text[:match.start()] + replacement + text[end:]
    return text


def gles_images(text, logical):
    """Keep the SDK's resource names, mapping its six mip UAVs to two array views."""
    declaration = r'layout\s*\(([^)]*)\)\s*uniform\s+((?:(?:coherent|writeonly|readonly|highp|restrict)\s+)*)([ui]?image2D(?:Array)?)\s+(\w+)\s*;'
    if any(item["name"] == "rw_spd_mip0" for item in logical):
        text = re.sub(r'layout[^\n]+\brw_spd_mip[0-5]\s*;', '', text)
        text = spd_array_access(text)
        if re.search(r'\brw_spd_mip\d', text):
            raise ValueError("Unconverted SPD mip access")
        text = text.replace("#version 320 es", "#version 320 es\n"
            "layout(binding=0, rgba16f) uniform coherent writeonly highp image2DArray rw_spd_pyramid;\n"
            "layout(binding=0, rgba16f) uniform coherent readonly highp image2DArray rw_spd_pyramid_read;")
    def qualify(match):
        layout, flags, kind, name = match.groups()
        if "readonly" in flags or "writeonly" in flags or kind != "image2D":
            return match[0]
        reads = bool(re.search(r'imageLoad\(\s*' + name + r'\s*,', text))
        writes = bool(re.search(r'imageStore\(\s*' + name + r'\s*,', text))
        if reads and writes:
            text_read = re.sub(r'\b' + name + r'\b', name + "_read", match[0])
            return match[0].replace("uniform ", "uniform writeonly ") + "\n" + text_read.replace("uniform ", "uniform readonly ")
        return match[0].replace("uniform ", "uniform readonly " if reads else "uniform writeonly ")
    text = re.sub(declaration, qualify, text)
    for item in logical:
        if re.search(r'\b' + item["name"] + r'_read\b', text):
            text = re.sub(r'imageLoad\(\s*' + item["name"] + r'\s*,', "imageLoad(" + item["name"] + "_read,", text)
    physical = []
    def bind(match):
        layout, flags, kind, name = match.groups()
        format_name = next(word.strip() for word in layout.split(',') if '=' not in word)
        original = "rw_spd_mip0" if name.startswith("rw_spd_pyramid") else name.removesuffix("_read")
        resource = next(i for i, item in enumerate(logical) if item["name"] == original)
        binding = len(physical)
        physical.append({"name": name, "resource": resource, "binding": binding, "format": format_name,
                         "atlas": name.startswith("rw_spd_pyramid"),
                         "access": "read" if "readonly" in flags else "write" if "writeonly" in flags else "readwrite"})
        return f"layout(binding={binding}, {format_name}) uniform {flags}{kind} {name};"
    text = re.sub(declaration, bind, text)
    if len(physical) > 8:
        raise ValueError("FSR3 pass exceeds the GLES eight-image limit")
    return text, physical


def expand(path, stack=()):
    path = path.resolve()
    if path in stack:
        raise ValueError("Recursive FSR3 shader include: " + str(path))
    text = path.read_text(encoding="utf-8")
    def include(match):
        name = match[1]
        target = next((p for p in (path.parent / name, GPU / name, SOURCE / "sdk/include" / name) if p.is_file()), None)
        if target is None:
            return match[0]  # System includes live only in the inactive CPU branch.
        return expand(target, (*stack, path))
    return re.sub(r'^\s*#\s*include\s*[<"]([^>"\r\n]+)[>"][^\n]*', include, text, flags=re.M)


def glsl_pass(path, compiler, directory, sharpen=False, cross=None):
    text = expand(path)
    text = re.sub(r'^\s*#\s*(?:version|extension|pragma)[^\n]*', '', text, flags=re.M)
    defines = {
        "FFX_GPU": 1, "FFX_GLSL": 1, "FFX_HALF": 0, "FFX_SKIP_EXT": 1,
        "FFX_SPD_NO_WAVE_OPERATIONS": 1,
        "FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT": 0,
        "FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS": 1,
        "FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS": 0,
        "FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH": 0,
        "FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING": int(sharpen),
        "FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE": 1,
        "FFX_FSR3UPSCALER_OPTION_UPSAMPLE_USE_LANCZOS_TYPE": 2,
    }
    input_path = Path(directory) / (path.stem + ("_sharp" if sharpen else "") + ".pre")
    input_path.write_text("\n".join(f"#define {k} {v}" for k, v in defines.items()) + "\n" + text, encoding="utf-8")
    result = subprocess.run([str(compiler), "-E", "-P", "-x", "c", str(input_path)], capture_output=True)
    if result.returncode:
        raise ValueError(result.stderr.decode(errors="replace"))
    text = result.stdout.decode("utf-8").replace("\r\n", "\n")
    text = re.sub(r'\bset\s*=\s*0\s*,\s*', '', text)
    text = re.sub(r'layout\s*\([^)]*\)\s*uniform\s+sampler\s+s_(?:Point|Linear)Clamp\s*;', '', text)
    srvs, images, buffers = [], [], []
    pattern = r'layout\s*\(([^)]*)\)\s*uniform\s+([ui]?texture2D)\s+(\w+)\s*;'
    def sampler(match):
        name, kind = match[3], match[2].replace("texture", "sampler")
        linear = bool(re.search(r'sampler2D\(\s*' + name + r'\s*,\s*s_LinearClamp\s*\)', text))
        srvs.append({"name": name, "type": kind, "linear": linear})
        return "uniform " + kind + " " + name + ";" + ("\nuniform " + kind + " " + name + "_linear;" if linear else "")
    text = re.sub(pattern, sampler, text)
    text = re.sub(r'sampler2D\(\s*(\w+)\s*,\s*s_LinearClamp\s*\)', r'\1_linear', text)
    text = re.sub(r'sampler2D\(\s*(\w+)\s*,\s*s_PointClamp\s*\)', r'\1', text)
    def image(match):
        layout, flags, kind, name = match.groups()
        format_name = next((word.strip() for word in layout.split(',') if '=' not in word), None)
        if not format_name and name == "rw_upscaled_output":
            format_name = "rgba16f"
        if not format_name:
            raise ValueError("Missing FSR3 image format: " + name)
        format_name = FORMATS.get(format_name, format_name)
        binding = len(images)
        images.append({"name": name, "format": format_name, "binding": binding})
        return f"layout(binding={binding}, {format_name}) {flags}uniform {kind} {name};"
    text = re.sub(r'layout\s*\(([^)]*)\)\s*((?:(?:coherent|writeonly|readonly|restrict)\s+)*)uniform\s+([ui]?image2D)\s+(\w+)\s*;', image, text)
    def buffer(match):
        layout, block, fields, name = match.groups()
        binding = len(buffers)
        buffers.append({"name": name, "block": block, "binding": binding})
        return f"layout(binding={binding}, std140) uniform {block} {{{fields}}} {name};"
    text = re.sub(r'layout\s*\(([^)]*std140[^)]*)\)\s*uniform\s+(\w+)\s*\{([^}]+)\}\s*(\w+)\s*;', buffer, text)
    prefix = "#version 450\n"
    text = prefix + text
    if "sampler2D(" in text or "uniform texture" in text:
        raise ValueError("Unconverted separate sampler in " + path.name)
    source = input_path.with_suffix(".comp")
    source.write_text(text, encoding="utf-8", newline="\n")
    shaderc = Path(compiler).parents[5] / "shader-tools/windows-x86_64/glslc.exe"
    binary = source.with_suffix(".spv")
    output = source.with_suffix(".gles")
    for command in ([shaderc, "-fshader-stage=compute", "-fauto-bind-uniforms", "-O", "-g", source, "-o", binary],
                    [cross or ROOT / "work/tools/spirv-cross/cross-gles.exe", binary, output]):
        converted = subprocess.run([str(v) for v in command], capture_output=True)
        if converted.returncode:
            raise ValueError((converted.stdout + converted.stderr).decode(errors="replace"))
    text = output.read_text(encoding="utf-8")
    text = re.sub(r'layout\s*\(binding\s*=\s*\d+\)\s*(uniform\s+(?:highp\s+)?[ui]?sampler2D)', r'\1', text)
    # Core GLES can imageStore R32F, but need not linearly filter it.
    pattern = r'\btextureLod\(\s*(' + '|'.join(LINEAR32_NAMES) + r')_linear\s*,'
    text, linear_calls = re.subn(pattern, r'fsrLinear32(\1_linear,', text)
    if linear_calls:
        text = text.replace("void main()", LINEAR32 + "\nvoid main()", 1)
    text, physical = gles_images(text, images)
    return text, {"srvs": srvs, "images": images, "physicalImages": physical, "buffers": buffers}


def generate_fsr3(folder, compiler, cross=None):
    folder = Path(folder)
    folder.mkdir(parents=True, exist_ok=True)
    manifest = json.loads((SOURCE / "source.json").read_text(encoding="utf-8"))
    for file, digest in manifest["files"].items():
        if hashlib.sha256((SOURCE / file).read_bytes()).hexdigest() != digest:
            raise ValueError("Pinned FSR3 source changed: " + file)
    metadata = {}
    parts = ["/* AMD FSR3.1.4, MIT; GLES FP32 source generated by tools/fsr3_shaders.py. */\n"]
    for path in sorted(PASSES.glob("*.glsl")):
        for sharpen in ([False, True] if "_accumulate_" in path.name else [False]):
            name = path.stem + ("_sharp" if sharpen else "")
            shader, bindings = glsl_pass(path, compiler, folder, sharpen, cross)
            (folder / (name + ".glsl")).write_text(shader, encoding="utf-8", newline="\n")
            metadata[name] = bindings
            parts.append("static const char " + name + "[] =\n")
            parts.extend(json.dumps(line) + "\n" for line in shader.splitlines(True))
            parts.append(";\n")
    target = folder / "fsr3_programs.inc"
    result = "".join(parts)
    if not target.is_file() or target.read_text(encoding="utf-8") != result:
        target.write_text(result, encoding="utf-8")
    (folder / "fsr3-bindings.json").write_text(json.dumps(metadata, indent=2), encoding="utf-8")
    return target, metadata


def pack_fsr3(folder):
    """Normal builds verify and embed the pinned GLES conversion; no host tools."""
    folder = Path(folder)
    folder.mkdir(parents=True, exist_ok=True)
    for directory in (SOURCE, SOURCE / "gles"):
        manifest = json.loads((directory / "source.json").read_text(encoding="utf-8"))
        for name, digest in manifest["files"].items():
            if hashlib.sha256((directory / name).read_bytes()).hexdigest() != digest:
                raise ValueError("Pinned FSR3 source changed: " + name)
    metadata = json.loads((SOURCE / "gles/fsr3-bindings.json").read_text(encoding="utf-8"))
    order = ["prepare_inputs", "luma_pyramid", "shading_change_pyramid", "shading_change",
             "prepare_reactivity", "luma_instability", "accumulate", "accumulate_sharp",
             "rcas", "debug_view", "autogen_reactive"]
    parts = ["/* AMD FSR3.1.4, MIT; verified GLES FP32 conversion. */\n",
             "static const char fsr3_linear32[] =\n", *(json.dumps(line) + "\n" for line in LINEAR32.splitlines(True)), ";\n"]
    for index, short in enumerate(order):
        name = "ffx_fsr3upscaler_" + ("accumulate_pass_sharp" if short == "accumulate_sharp" else short + "_pass")
        shader = (SOURCE / "gles" / (name + ".glsl")).read_text(encoding="utf-8")
        parts += [f"static const char fsr3_source_{index}[] =\n",
                  *(json.dumps(line) + "\n" for line in shader.splitlines(True)), ";\n"]
    parts.append("static const PassMeta fsr3_meta[] = {\n")
    for index, short in enumerate(order):
        name = "ffx_fsr3upscaler_" + ("accumulate_pass_sharp" if short == "accumulate_sharp" else short + "_pass")
        data = metadata[name].copy()
        # GLSL source declarations removed by SPIRV-Cross must not enter SDK reflection.
        shader = (SOURCE / "gles" / (name + ".glsl")).read_text(encoding="utf-8")
        physical = [p for p in data["physicalImages"] if len(re.findall(r'\b' + p["name"] + r'\b', shader)) > 1]
        used = [i for i, item in enumerate(data["images"]) if any(p["resource"] == i for p in physical)]
        data["images"] = [data["images"][i] for i in used]
        data["physicalImages"] = [dict(p, resource=used.index(p["resource"])) for p in physical]
        srvs = ",".join("{" + json.dumps(s["name"]) + "," + str(int(s["linear"])) + "}" for s in data["srvs"])
        images = ",".join(json.dumps(s["name"]) for s in data["images"])
        physical = ",".join("{%d,%d,%s,%d,%s}" % (s["resource"], s["binding"],
            "GL_" + s["format"].upper(), int(s["atlas"]),
            {"read": "GL_READ_ONLY", "write": "GL_WRITE_ONLY", "readwrite": "GL_READ_WRITE"}[s["access"]])
            for s in data["physicalImages"])
        buffers = ",".join("{" + json.dumps(s["name"]) + "," + json.dumps(s["block"]) + "}" for s in data["buffers"])
        counts = ",".join(str(len(data[key])) for key in ("srvs", "images", "physicalImages", "buffers"))
        parts.append(f"{{fsr3_source_{index},{counts},{{{srvs}}},{{{images}}},{{{physical}}},{{{buffers}}}}},\n")
    parts.append("};\n")
    target = folder / "fsr3_programs.inc"
    content = "".join(parts)
    if not target.exists() or target.read_text(encoding="utf-8") != content:
        target.write_text(content, encoding="utf-8")
    return target
