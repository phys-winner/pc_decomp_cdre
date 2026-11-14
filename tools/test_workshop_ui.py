"""Run production tab navigation and validate every Workshop UI translation."""
import json
from pathlib import Path
import re
import subprocess
import tempfile
import unittest

from test_menu_gestures import method
from test_hardware_input import JAVA

ROOT = Path(__file__).resolve().parents[1]
APP = ROOT / "android/app/src/org/crashday/port"


class WorkshopUiTest(unittest.TestCase):
    def test_tab_positions_and_stale_posts(self):
        source = (APP / "launcher/WorkshopActivity.java").read_text(encoding="utf-8")
        methods = "\n".join(method(source, signature) for signature in (
            "private void selectTab(int next)", "private void renderBody(boolean top)",
            "private void renderBodyAt(int position)"))
        harness = r'''
import java.util.*;
public class WorkshopUiProbe {
    int tab,bodyGeneration;final int[] tabScroll=new int[3];boolean dead;
    String query="";Search search;
    static class Search {String getText(){return "query";}}
    static class Body {void removeAllViews(){}}
    final Body body=new Body();final Map<String,Object> catalogActions=new HashMap<>();
    static class Scroll {
        int y;List<Runnable> posts=new ArrayList<>();int getScrollY(){return y;}
        void post(Runnable r){posts.add(r);}void scrollTo(int x,int value){y=value;}
        void flush(){List<Runnable> copy=new ArrayList<>(posts);posts.clear();copy.forEach(Runnable::run);}
    }
    final Scroll scroll=new Scroll();
    void hideKeyboard(){}void renderTabs(){}void renderCatalog(){}void renderInstalled(){}void renderDownloads(){}
    /* METHODS */
    static void check(boolean c){if(!c)throw new AssertionError();}
    public static void main(String[]args){
        WorkshopUiProbe p=new WorkshopUiProbe();p.search=new Search();p.scroll.y=900;
        p.selectTab(1);p.scroll.flush();check(p.tab==1&&p.scroll.y==0&&p.query.equals("query"));
        p.scroll.y=310;p.selectTab(2);p.scroll.flush();p.scroll.y=475;
        p.selectTab(0);p.scroll.flush();check(p.scroll.y==900);
        p.selectTab(1);p.scroll.flush();check(p.scroll.y==310);
        p.renderBody(false);p.scroll.flush();check(p.scroll.y==310);
        p.selectTab(2);p.scroll.flush();check(p.scroll.y==475);
        p.selectTab(0);p.selectTab(1);p.scroll.flush();check(p.scroll.y==310);
        p.selectTab(0);p.scroll.flush();p.renderBody(true);p.scroll.flush();check(p.scroll.y==0);
        p.selectTab(2);p.scroll.flush();check(p.scroll.y==475);
        p.selectTab(1);p.dead=true;p.scroll.y=777;p.scroll.flush();check(p.scroll.y==777);
    }
}
'''.replace("/* METHODS */", methods)
        with tempfile.TemporaryDirectory() as directory:
            file = Path(directory) / "WorkshopUiProbe.java"
            file.write_text(harness, encoding="utf-8")
            for command in ([JAVA / "javac.exe", "-encoding", "UTF-8", "-d", directory, file],
                            [JAVA / "java.exe", "-cp", directory, "WorkshopUiProbe"]):
                result = subprocess.run([str(v) for v in command], capture_output=True, text=True, timeout=60)
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)

    def test_workshop_translations(self):
        source = (APP / "PortText.java").read_text(encoding="utf-8")
        rows = [json.loads("[" + row + "]") for row in re.findall(r'^\s*\{(".*")\},?$', source, re.M)]
        self.assertEqual(len(rows), len({row[0] for row in rows}))
        for row in rows:
            self.assertEqual(len(row), 8, row[0])
            self.assertTrue(all(value.strip() for value in row), row[0])
        words = {row[0] for row in rows}
        workshop = (APP / "launcher/WorkshopActivity.java").read_text(encoding="utf-8")
        required = set(re.findall(r'word\(\s*"((?:[^"\\]|\\.)*)"\s*,', workshop))
        self.assertFalse(required - words, sorted(required - words))
        with tempfile.TemporaryDirectory() as directory:
            folder = Path(directory) / "org/crashday/port"
            folder.mkdir(parents=True)
            for name in ("PortText.java", "GameLanguage.java"):
                (folder / name).write_text((APP / name).read_text(encoding="utf-8"), encoding="utf-8")
            (folder / "LanguageProbe.java").write_text('''package org.crashday.port;
import java.util.Locale;
public class LanguageProbe {
 public static void main(String[]args){
  Locale.setDefault(Locale.ENGLISH);
  String[] languages={"english","german","italian","russian","turkish","hungarian","brazilian","spanish","polish"};
  String[] expected={"Delete all","Alle löschen","Elimina tutte","Удалить всё","Tümünü sil","Összes törlése","Excluir todos","Eliminar todos","Usuń wszystkie"};
  for(int i=0;i<languages.length;i++)if(!PortText.get(languages[i],"Delete all","Удалить всё").equals(expected[i]))throw new AssertionError(languages[i]);
  Locale.setDefault(new Locale("tr"));
  if(!PortText.get("system","Delete all","Удалить всё").equals("Tümünü sil"))throw new AssertionError("system");
 }
}''', encoding="utf-8")
            commands = ([JAVA / "javac.exe", "-encoding", "UTF-8", "-d", directory, *folder.glob("*.java")],
                        [JAVA / "java.exe", "-cp", directory, "org.crashday.port.LanguageProbe"])
            for command in commands:
                result = subprocess.run([str(v) for v in command], capture_output=True, text=True, timeout=60)
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == "__main__":
    unittest.main()
