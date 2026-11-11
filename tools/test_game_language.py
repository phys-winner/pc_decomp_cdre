"""Run the production locale resolver on every shipped bank and fallback case."""
import json
from pathlib import Path
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]


def main():
    source = ROOT / "android/app/src/org/crashday/port/GameLanguage.java"
    with tempfile.TemporaryDirectory() as folder:
        harness = Path(folder) / "LanguageCheck.java"
        harness.write_text('''package org.crashday.port;
import java.util.Locale;
public final class LanguageCheck {
    public static void main(String[] args) {
        String[] codes = {"en", "de", "it", "ru", "tr", "hu", "pt", "es", "pl"};
        for (int i = 0; i < codes.length; ++i) {
            assert GameLanguage.resolve("system", new Locale(codes[i])).equals(GameLanguage.VALUES[i + 1]);
            assert GameLanguage.resolve(GameLanguage.VALUES[i + 1], Locale.JAPAN).equals(GameLanguage.VALUES[i + 1]);
        }
        assert GameLanguage.resolve("system", Locale.JAPAN).equals("english");
        assert GameLanguage.resolve(null, new Locale("ru")).equals("russian");
        assert GameLanguage.resolve("invalid", Locale.FRENCH).equals("english");
        assert GameLanguage.resolve("system", Locale.forLanguageTag("pt-PT")).equals("brazilian");
        assert GameLanguage.resolve("system", Locale.forLanguageTag("es-MX")).equals("spanish");
        System.out.println("PASS: 9 system languages, 9 explicit overrides, unknown/null and regional fallback");
    }
}''', encoding="utf-8")
        subprocess.run(["javac", "-encoding", "UTF-8", "-d", folder, str(source), str(harness)], check=True)
        subprocess.run(["java", "-ea", "-cp", folder, "org.crashday.port.LanguageCheck"], check=True)
    spec = json.loads((ROOT / "android/port.json").read_text(encoding="utf-8"))
    language = next(o for o in spec["options"] if o["key"] == "game_language")
    assert language["default"] == "system" and len(language["choices"]) == 10
    assert spec["app"]["localNetwork"]


if __name__ == "__main__":
    main()
