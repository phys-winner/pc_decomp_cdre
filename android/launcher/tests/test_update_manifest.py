"""The update feed must retain the APK certificate with old and current SDK tools."""
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch


def check(root, folder):
    import update_manifest

    certificate = "a" * 64
    for sdk in ("sdkVersion", "minSdkVersion"):
        badging = ("package: name='org.example.port' versionCode='1' versionName='0.1-dev'\n"
                   + sdk + ":'30'\nnative-code: 'arm64-v8a'\n")
        for heading in ("Signer #1", "V3.0 Signer:", "V3.1 Signer:"):
            for verified in (True, False):
                results = [SimpleNamespace(returncode=0, stdout=badging, stderr=""),
                           SimpleNamespace(returncode=0 if verified else 1,
                                           stdout=heading + " certificate SHA-256 digest: " + certificate + "\n",
                                           stderr="" if verified else "verification failed")]
                with patch.object(update_manifest, "run", side_effect=results), \
                        patch.object(update_manifest, "tool", return_value="sdk-tool"):
                    facts = update_manifest.apk_facts(Path(folder) / "fixture.apk", root)
                assert facts["package"] == "org.example.port" and facts["versionCode"] == 1
                assert facts["minSdk"] == 30 and facts["abis"] == ["arm64-v8a"]
                assert facts["signer"] == (certificate if verified else None)
    print("PASS update manifest: legacy/current SDK badging and certificate formats; failed verification is rejected")
    return True
