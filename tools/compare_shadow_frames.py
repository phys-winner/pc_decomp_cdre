"""Compare controlled, same-position PNGs; differences are not a correctness verdict.

Example: python tools/compare_shadow_frames.py before.png after.png --roi ground:160:390:650:170 --out work/comparison
Coordinates are screenshot pixels, top-left origin. No resizing or registration.
Requires Pillow and NumPy. Inputs remain read-only; reports record names and hashes.
"""
import argparse
import hashlib
import json
from pathlib import Path

import numpy as np
from PIL import Image, ImageDraw


def region(value):
    try:
        name, *numbers = value.split(":")
        x, y, w, h = map(int, numbers)
        if not name or min(x, y) < 0 or min(w, h) <= 0:
            raise ValueError()
        return name, x, y, w, h
    except ValueError as error:
        raise argparse.ArgumentTypeError("ROI must be name:x:y:width:height with positive size") from error


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("before", type=Path)
    parser.add_argument("after", type=Path)
    parser.add_argument("--roi", type=region, action="append", required=True)
    parser.add_argument("--threshold", type=int, default=8, help="RGB/luma code-value difference (default 8)")
    parser.add_argument("--out", type=Path, required=True, help="Output prefix for .json and -delta.png")
    args = parser.parse_args()
    if not 0 <= args.threshold <= 255:
        parser.error("threshold must be 0..255")
    arrays, receipts = [], []
    for path in (args.before, args.after):
        with Image.open(path) as im:
            if im.format != "PNG":
                parser.error("use original PNG captures, not video/JPEG frames")
            arrays.append(np.asarray(im.convert("RGB"), dtype=np.int16))
        receipts.append({"name": path.name, "sha256": hashlib.sha256(path.read_bytes()).hexdigest()})
    before, after = arrays
    if before.shape != after.shape:
        parser.error("screenshots must have identical dimensions; no resampling is performed")
    height, width, _ = before.shape
    if len({r[0] for r in args.roi}) != len(args.roi):
        parser.error("ROI names must be unique")
    delta = after - before
    # Encoded RGB luma is only a diagnostic; this is not linear-light energy.
    luma = delta @ np.array([0.2126, 0.7152, 0.0722])
    mask = np.zeros((height, width), dtype=bool)
    results = []
    for name, x, y, w, h in args.roi:
        if x + w > width or y + h > height:
            parser.error(f"ROI {name} is outside {width}x{height}")
        d = np.abs(delta[y:y+h, x:x+w])
        signed = luma[y:y+h, x:x+w]
        mask[y:y+h, x:x+w] = True
        results.append({"name": name, "xywh": [x, y, w, h], "pixels": w*h,
                        "mean_abs_rgb": round(float(d.mean()), 6),
                        "p95_max_channel": float(np.percentile(d.max(axis=2), 95)),
                        "max_abs_rgb": int(d.max()),
                        "changed_pixels": int(np.count_nonzero(d.max(axis=2) > args.threshold)),
                        "mean_signed_luma": round(float(signed.mean()), 6),
                        "darker_pixels": int(np.count_nonzero(signed < -args.threshold)),
                        "brighter_pixels": int(np.count_nonzero(signed > args.threshold))})
    report = {"before": receipts[0], "after": receipts[1], "dimensions": [width, height],
              "threshold": args.threshold, "regions": results,
              "interpretation": "No automatic acceptance. Same camera, geometry, graphics settings and phase must be verified manually. Red=after darker; cyan=after brighter; intensity=4x luma delta. Only selected regions are shown."}
    # A standalone diagnostic map, not an altered capture or alignment operation.
    visual = np.zeros((height, width, 3), dtype=np.uint8)
    intensity = np.minimum(np.abs(luma)*4, 255).astype(np.uint8)
    visual[:, :, 0] = np.where(mask & (luma < 0), intensity, 0)
    visual[:, :, 1] = visual[:, :, 2] = np.where(mask & (luma > 0), intensity, 0)
    output = Image.fromarray(visual)
    draw = ImageDraw.Draw(output)
    for name, x, y, w, h in args.roi:
        draw.rectangle((x, y, x+w-1, y+h-1), outline=(128, 128, 128))
        draw.text((x+3, y+3), name, fill=(255, 255, 255))
    args.out.parent.mkdir(parents=True, exist_ok=True)
    json_path = Path(str(args.out) + ".json")
    image_path = Path(str(args.out) + "-delta.png")
    if any(out.resolve() == source.resolve() for out in (json_path, image_path) for source in (args.before, args.after)):
        parser.error("output must not overwrite either input capture")
    json_path.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    output.save(image_path)
    print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
