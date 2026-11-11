"""Exercise persisted launcher choices through the production game/native boundaries.

Android UI objects are small fixtures; State, GameOptions and GameLanguage are
compiled intact, and the launch/activity/JNI/Steam methods come from source.
"""
import json
from pathlib import Path
import subprocess
import tempfile
import unittest

from test_menu_gestures import method
from tests.host_environment import CLANG, environment

ROOT = Path(__file__).resolve().parents[1]
JAVA = ROOT / "android/app/src/org/crashday/port"
LAUNCHER = ROOT / "android/launcher/android/src/port/launcher"


class LanguageIntegration(unittest.TestCase):
    def test_persisted_choice_activity_resolution_and_native_environment(self):
        spec = json.loads((ROOT / "android/port.json").read_text(encoding="utf-8"))
        option = next(o for o in spec["options"] if o["key"] == "game_language")
        self.assertEqual(option["default"], "system")
        choices = [c["value"] for c in option["choices"]]
        activity = (JAVA / "GameActivity.java").read_text(encoding="utf-8")
        # Exact initial onCreate block, ending at the native language handoff.
        start = activity.index('        String qaProfile =', activity.index('public void onCreate('))
        end = activity.index('        nativeUiScale(uiScale);', start)
        initialization = activity[start:end]
        launch_option = method((LAUNCHER / "Launch.java").read_text(encoding="utf-8"), 'public String option(String key)')
        launch_option += '\n' + method((LAUNCHER / "Launch.java").read_text(encoding="utf-8"), 'static String option(Context context, Spec.Option option)')
        launch_option += '\n' + method((LAUNCHER / "Launch.java").read_text(encoding="utf-8"), 'static String memoryDefault(Spec.Option option, long totalMem)')
        ui = (LAUNCHER / "LauncherActivity.java").read_text(encoding="utf-8")
        key_line = next(line.strip() for line in ui.splitlines() if 'String key = "option." + o.key' in line)
        put_line = next(line.strip() for line in ui.splitlines() if 'State.put(this, State.CHOICES, key, choice);' in line)
        with tempfile.TemporaryDirectory() as temporary:
            folder = Path(temporary)
            files = {
                'Context.java': '''package android.content;
import java.io.File;
public class Context {
    final File files;
    public Context(File files) { this.files=files; }
    public File getFilesDir() { return files; }
    public static final String ACTIVITY_SERVICE="activity"; public Object getSystemService(String key){return null;}
}''',
                'Process.java': 'package android.os; public final class Process {public static boolean is64Bit(){return true;}}',
                'ActivityManager.java': 'package android.app; public class ActivityManager {public static class MemoryInfo {public long totalMem;} public void getMemoryInfo(MemoryInfo info){}}',
                'Work.java': '''package org.crashday.port.launcher;
final class Work { static void warn(String s, Exception e) {} }''',
                'State.java': (LAUNCHER / 'State.java').read_text(encoding='utf-8').replace('package port.launcher;', 'package org.crashday.port.launcher;'),
                'GameOptions.java': (JAVA / 'launcher/GameOptions.java').read_text(encoding='utf-8'),
                'GameLanguage.java': (JAVA / 'GameLanguage.java').read_text(encoding='utf-8'),
                'Launch.java': '''package org.crashday.port.launcher;
import android.content.Context;
import android.app.ActivityManager;
public final class Launch {
    final Context activity; final Spec spec=new Spec();
    public Launch(Context activity) { this.activity=activity; }
    OPTION_METHOD
}
final class Spec {
    static final class Option { boolean arm64Only; int defaultMinRamGiB; String key="game_language", value=DEFAULT; }
    final Option[] options={new Option()};
}'''.replace('OPTION_METHOD', launch_option).replace('DEFAULT', json.dumps(option['default'])),
                'LauncherChoice.java': '''package org.crashday.port.launcher;
import java.io.File;
public final class LauncherChoice extends android.content.Context {
    public LauncherChoice(File files) { super(files); }
    public void select(String choice) { Spec.Option o=new Spec.Option(); KEY_LINE PUT_LINE }
}'''.replace('KEY_LINE', key_line).replace('PUT_LINE', put_line),
                'LanguageIntegrationProbe.java': r'''package org.crashday.port;
import java.io.File;
import java.util.Locale;
import org.crashday.port.launcher.*;
public final class LanguageIntegrationProbe extends android.content.Context {
    static final int MODE_PRIVATE=0;
    Launch launch; boolean qaPreferences; Prefs preferences;
    String language,runningLanguage,delivered,suffix,profile,prefLanguage="german";
    int uiScale,renderScale,runningRenderScale;
    LanguageIntegrationProbe(File files) { super(files); launch=new Launch(this); }
    static final class Intent {
        final String profile; Intent(String profile) { this.profile=profile; }
        String getStringExtra(String key) { assert key.equals("userdata"); return profile; }
        int getIntExtra(String key,int fallback) { return fallback; }
    }
    static final class Prefs {
        final String language; Prefs(String value) { language=value; }
        String getString(String key,String fallback) { return language==null?fallback:language; }
        int getInt(String key,int fallback) { return fallback; }
    }
    Intent getIntent() { return new Intent(profile); }
    Prefs getSharedPreferences(String name,int mode) { suffix=name; return new Prefs(prefLanguage); }
    void nativeLanguage(String value) { delivered=value; }
    void initialize() { INITIALIZATION }
    void check(String expected,boolean qa) {
        initialize(); assert delivered.equals(expected):delivered;
        assert runningLanguage.equals(delivered); assert qaPreferences==qa;
        assert suffix.equals(qa?"port-"+profile:"port");
        System.out.println(delivered);
    }
    public static void main(String[] args) throws Exception {
        File files=new File(args[1]); files.mkdirs();
        LanguageIntegrationProbe p=new LanguageIntegrationProbe(files);
        Locale.setDefault(Locale.JAPAN);
        if (args[0].equals("write")) {
            p.check("english",false); // Fresh normal profile uses system, then English fallback.
            new LauncherChoice(files).select("russian");
            return;
        }
        p.check("russian",false); // A new process reads the previous launcher write.
        for(String choice:new String[]{CHOICES}) {
            new LauncherChoice(files).select(choice);
            p.check(choice.equals("system")?"english":choice,false);
        }
        new LauncherChoice(files).select("system");
        Locale.setDefault(Locale.forLanguageTag("pt-PT")); p.check("brazilian",false);
        Locale.setDefault(new Locale("ru")); p.check("russian",false);
        new LauncherChoice(files).select("invalid"); p.check("russian",false);
        assert GameOptions.setLanguage(p,"polish"); p.check("polish",false);
        p.profile="userdata-language_check"; p.prefLanguage="italian"; p.check("italian",true);
        p.prefLanguage=null; p.check("russian",true);
        assert new Launch(p).option("game_language").equals("polish");
        p.profile="userdata-../invalid"; p.check("polish",false);
        assert new Launch(p).option("unknown")==null;
        File unwritable=new File(files,"not-a-directory"); assert unwritable.createNewFile();
        assert !GameOptions.setLanguage(new android.content.Context(unwritable),"russian");
        assert new Launch(p).option("game_language").equals("polish");
    }
}'''.replace('INITIALIZATION', initialization).replace('CHOICES', ','.join(json.dumps(c) for c in choices)),
            }
            paths = []
            for name, source in files.items():
                path = folder / name
                path.write_text(source, encoding='utf-8')
                paths.append(path)
            subprocess.run(['javac', '-encoding', 'UTF-8', '-d', str(folder), *map(str, paths)], check=True, capture_output=True, text=True)
            command = ['java', '-ea', '-cp', str(folder), 'org.crashday.port.LanguageIntegrationProbe']
            state_dir = folder / 'state'
            subprocess.run(command + ['write', str(state_dir)], check=True, capture_output=True, text=True)
            result = subprocess.run(command + ['read', str(state_dir)], check=True, capture_output=True, text=True)
            resolved = result.stdout.splitlines()
            self.assertEqual(len(resolved), 18)
            # Complete the actual JNI -> process environment -> Steam language path.
            native = method((ROOT / 'android/host/android_main.c').read_text(encoding='utf-8'), 'JNIEXPORT void JNICALL Java_org_crashday_port_GameActivity_nativeLanguage(')
            steam = method((ROOT / 'android/host/steam.c').read_text(encoding='utf-8'), 'COM_METHOD(apps, GetCurrentGameLanguage, 0)')
            c_source = r'''
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef const char *jstring; typedef void *jclass;
typedef struct JNI *JNIEnv;
struct JNI { const char *(*GetStringUTFChars)(JNIEnv*,jstring,void*);
    void (*ReleaseStringUTFChars)(JNIEnv*,jstring,const char*); };
static int game_started,released,written;
static char selected[32],guest[32];
static const char *chars(JNIEnv*e,jstring s,void*z){(void)e;(void)z;return s;}
static void release(JNIEnv*e,jstring s,const char*v){(void)e;(void)s;(void)v;++released;}
static int test_setenv(const char*k,const char*v,int overwrite){
    if(strcmp(k,"CRASHDAY_LANGUAGE")||overwrite!=1)abort();
    strcpy(selected,v);++written;return 0;
}
static char *test_getenv(const char*k){if(strcmp(k,"CRASHDAY_LANGUAGE"))abort();return selected;}
static uint32_t void_gstrdup(const char*v){strcpy(guest,v);return 1;}
#define setenv test_setenv
#define getenv test_getenv
#define JNIEXPORT
#define JNICALL
#define COM_METHOD(a,b,c) static uint32_t a##_##b(void)
NATIVE_METHOD
STEAM_METHOD
int main(int argc,char**argv){
    struct JNI table={chars,release};JNIEnv env=&table;
    if(argc!=3)return 2;game_started=!strcmp(argv[1],"started");
    Java_org_crashday_port_GameActivity_nativeLanguage(&env,NULL,argv[2]);
    if(game_started){if(written||released)return 3;}
    else if(released!=1)return 4;
    if(!apps_GetCurrentGameLanguage())return 5;
    puts(guest);return 0;
}
'''.replace('NATIVE_METHOD', native).replace('STEAM_METHOD', steam)
            c_path = folder / 'language.c'
            c_path.write_text(c_source, encoding='utf-8')
            env, linker = environment('x64')
            exe = folder / 'language.exe'
            obj = folder / 'language.obj'
            subprocess.run([str(CLANG), '/nologo', '/c', '/TC', '/std:c11', '/D_CRT_SECURE_NO_WARNINGS', str(c_path), f'/Fo{obj}'], env=env, check=True)
            subprocess.run([str(linker), '/nologo', str(obj), f'/OUT:{exe}'], env=env, check=True)
            for value in resolved:
                actual = subprocess.check_output([str(exe), 'new', value], text=True).strip()
                self.assertEqual(actual, value)
            for mode, value in [('new', 'invalid'), ('new', 'system'), ('started', 'russian')]:
                self.assertEqual(subprocess.check_output([str(exe), mode, value], text=True).strip(), 'english')


if __name__ == '__main__':
    unittest.main()
