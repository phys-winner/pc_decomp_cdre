"""Check the production nickname validation and atomic per-profile persistence."""
from pathlib import Path
import subprocess
import unittest

from test_hardware_input import JAVA
from test_menu_gestures import method

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/player-name"


class PlayerNameTest(unittest.TestCase):
    def test_validation_and_storage(self):
        source = (ROOT / "android/app/src/org/crashday/port/ProfileStorage.java").read_text(encoding="utf-8")
        actual = "\n".join(method(source, signature) for signature in (
            "static String validPlayerName(", "static String playerName(", "static void savePlayerName("))
        harness = r'''
import java.io.*;
import java.nio.file.*;
import java.nio.charset.*;
public final class PlayerNameProbe {
    static class Context {File root;Context(File f){root=f;}}
    static File profile(Context c){return c.root;}
    /* ACTUAL */
    static int checks;
    static void check(boolean condition){++checks;if(!condition)throw new AssertionError("check "+checks);}
    public static void main(String[] args)throws Exception {
        check(validPlayerName(" Driver ").equals("Driver"));
        check(validPlayerName("Гонщик").equals("Гонщик"));
        check(validPlayerName("a".repeat(32)).length()==32);
        check(validPlayerName("я".repeat(31)+"a").getBytes(StandardCharsets.UTF_8).length==63);
        for(String bad:new String[]{"", "  ","a".repeat(33),"я".repeat(32),"a\n","\0a","a\t b","a\u202Eb","a\u2028b","a\u2029b","\uD800","\uDC00"})
            check(validPlayerName(bad)==null);
        Path root=Files.createTempDirectory("crashday-player-name-");
        Context a=new Context(Files.createDirectory(root.resolve("a")).toFile());
        Context b=new Context(Files.createDirectory(root.resolve("b")).toFile());
        check(playerName(a).isEmpty());savePlayerName(a,"Driver");savePlayerName(b,"Other");
        check(playerName(a).equals("Driver")&&playerName(b).equals("Other"));
        savePlayerName(a,"Гонщик");check(playerName(a).equals("Гонщик"));
        try{savePlayerName(a,"bad\nname");throw new AssertionError("invalid write accepted");}catch(IOException expected){}
        check(playerName(a).equals("Гонщик"));
        check(a.root.list().length==1&&b.root.list().length==1);
        Files.delete(a.root.toPath().resolve("player-name"));Files.createDirectory(a.root.toPath().resolve("player-name"));
        try{savePlayerName(a,"Cannot replace a directory");throw new AssertionError("failed write accepted");}catch(IOException expected){}
        check(a.root.list().length==1);Files.delete(a.root.toPath().resolve("player-name"));
        Files.write(a.root.toPath().resolve("player-name"),new byte[]{(byte)0xC0,(byte)0xAF});
        try{playerName(a);throw new AssertionError("invalid UTF-8 accepted");}catch(IOException expected){}
        Files.writeString(a.root.toPath().resolve("player-name"),"x".repeat(64));
        try{playerName(a);throw new AssertionError("oversized name accepted");}catch(IOException expected){}
        Files.delete(a.root.toPath().resolve("player-name"));Files.delete(b.root.toPath().resolve("player-name"));
        Files.delete(a.root.toPath());Files.delete(b.root.toPath());Files.delete(root);
        System.out.println("PASS: "+checks+" nickname validation/storage checks, UTF-8, isolation, failed atomic replacement");
    }
}
'''
        OUT.mkdir(parents=True, exist_ok=True)
        probe = OUT / "PlayerNameProbe.java"
        probe.write_text(harness.replace("/* ACTUAL */", actual), encoding="utf-8")
        for command in ([JAVA / "javac.exe", "-encoding", "UTF-8", "-d", OUT, probe],
                        [JAVA / "java.exe", "-cp", OUT, "PlayerNameProbe"]):
            result = subprocess.run([str(x) for x in command], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())


if __name__ == "__main__":
    unittest.main()
