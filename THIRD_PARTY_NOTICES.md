# Third-party notices

The original notices in the following source directories are part of this
distribution. Their licenses apply to those components independently of the
port's GPLv3 integration code.

| Component | Use | License / notice |
| --- | --- | --- |
| [pcrecomp](reference/pcrecomp/LICENSE) | PE analysis, x86 decoding and lifting infrastructure | MIT |
| [MojoShader](reference/mojoshader/LICENSE.txt) | D3D shader translation and effects support | zlib-style license |
| [ASTC Encoder](reference/astcenc/LICENSE.txt) | On-device ASTC texture conversion | Apache 2.0 |
| [etcpak](reference/etcpak/LICENSE.txt) | ETC2 texture conversion | BSD 3-Clause; bundled `bcdec.h` retains its own notice |
| [dlmalloc](reference/dlmalloc/malloc.c) | Guest memory allocation | MIT-0 notice in source |
| [NFSMW-Recompiled-Mobile](licenses/NFSMW-Recompiled-Mobile.txt) | Adapted driving touch controls | GNU GPLv3 |
| [DXVK](reference/dxvk/LICENSE) | Experimental developer renderer sources | zlib; bundled headers retain their own licenses |

The touch-control reference is
[victorgbd/NFSMW-Recompiled-Mobile](https://github.com/victorgbd/NFSMW-Recompiled-Mobile),
revision `0b3b3be1f700e2227c03b557dc33e9e50a56c6cc`. The adapted implementation and
its attribution are in `android/app/src/org/crashday/port/DrivingControls.java`.
Only the reference license is vendored here; its independent game project is not
a dependency of the APK build.

The launcher is the shared local port-launcher snapshot in `android/launcher/`.
Texture and experimental renderer provenance is recorded in
`dependencies-textures.json`, `dependencies-dxvk.json` and
`dependencies-turnip.json`. These manifests are provenance records, not a claim
that every experimental backend is shipped or supported.

Python build-time dependencies and their licenses are provided by their own
distributions. They are not bundled in the APK. Experimental Turnip helpers fetch
separate upstream sources under their original licenses.

The compatible game installation supplies `third-party-notices.txt`; packaging
includes it as `crashday-third-party-notices.txt`, together with the runtime
component licenses exposed by the launcher. Original game files and proprietary
Microsoft program images are external build inputs and are not relicensed by
this repository. The canonical generated C preserves the port's current
recompilation state; it does not change ownership of the original program code.
