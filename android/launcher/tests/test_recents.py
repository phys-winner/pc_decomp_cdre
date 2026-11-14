"""Execute task cleanup and clean game exit without removing the shared task."""
import os
from pathlib import Path
import re
import subprocess
import tempfile


def method(source, declaration):
    match = re.search(r"^    " + re.escape(declaration) + r"[^\n]*\{.*?^    }", source, re.M | re.S)
    assert match, declaration
    return match.group()


def check(root, folder):
    source = (root / "android/src/port/launcher/Launch.java").read_text(encoding="utf-8")
    methods = "\n".join(method(source, name) for name in (
        "private static void keepCurrentTask(", "static synchronized void migrate(",
        "public void exited(", "public static void openLauncher(Activity activity, String distribution, boolean play)"))
    program = r'''
import java.util.*;
class Context {
    static final String ACTIVITY_SERVICE="activity";
    Object getSystemService(String name){throw new AssertionError("not an activity");}
}
class Activity extends Context {
    ActivityManager manager=new ActivityManager();boolean finishing,destroyed,finished;Intent launched;
    boolean isFinishing(){return finishing;}boolean isDestroyed(){return destroyed;}
    int getTaskId(){return 7;}Object getSystemService(String name){return manager;}
    void startActivity(Intent intent){launched=intent;}
    void finish(){assert launched!=null;finished=true;}
    void finishAndRemoveTask(){throw new AssertionError("the launcher shares this task");}
}
class ActivityManager {
    List<AppTask> tasks=new ArrayList<>();List<AppTask> getAppTasks(){return tasks;}
    static class RecentTaskInfo {int persistentId,id=-1;RecentTaskInfo(int id){persistentId=id;}}
    static class AppTask {
        final int id;boolean gone,removeFails,removed;
        AppTask(int id){this.id=id;}
        RecentTaskInfo getTaskInfo(){if(gone)throw new IllegalArgumentException();return new RecentTaskInfo(id);}
        void finishAndRemoveTask(){assert id!=7;if(removeFails)throw new IllegalArgumentException();removed=true;}
    }
}
class Spec {boolean allFilesAccess=true;static Spec get(Context c){return new Spec();}}
class Storage {static boolean allowed;static boolean allFiles(Context c){return allowed;}}
class PortHooks {int calls;void migrate(Context c){calls++;}}
class State {static String exit;static String launch(String id){return id;}static void put(Context c,String f,String k,String v){exit=v;}}
class Distribution {String id="game";}
class LauncherActivity {static final String EXTRA_SHOW="show";}
class Intent {
    static final int FLAG_ACTIVITY_NEW_TASK=0x10000000,FLAG_ACTIVITY_CLEAR_TASK=0x8000;
    final Map<String,Object> values=new HashMap<>();int flags;
    Intent(Context context,Class<?> target){assert target==LauncherActivity.class;}
    Intent putExtra(String key,Object value){values.put(key,value);return this;}
    Intent addFlags(int value){flags|=value;return this;}
}
class android {
    static class util {static class Log {static void w(String tag,String text,Throwable error){}}}
    static class os {static class Process {
        static int killed;static int myPid(){return 123;}
        static void killProcess(int pid){assert pid==123;killed++;}
    }}
}
public class RecentsCheck {
    static final String EXTRA_DISTRIBUTION="distribution",EXTRA_PLAY="play";
    static boolean migrated;
    Activity activity=new Activity();Distribution distribution=new Distribution();
    static void openLauncher(Activity a,String d){openLauncher(a,d,false);}
/* ACTUAL */
    public static void main(String[] args){
        Activity current=new Activity();
        ActivityManager.AppTask old=new ActivityManager.AppTask(3),same=new ActivityManager.AppTask(7),
            gone=new ActivityManager.AppTask(9),raced=new ActivityManager.AppTask(10),other=new ActivityManager.AppTask(11);
        gone.gone=true;raced.removeFails=true;current.manager.tasks.addAll(Arrays.asList(old,same,gone,raced,other));
        PortHooks hooks=new PortHooks();
        migrate(current,hooks);
        assert old.removed&&other.removed&&!same.removed;
        boolean permissionGuard=/* STORAGE_GUARD */;
        assert hooks.calls==(permissionGuard?0:1)&&migrated!=permissionGuard : "cleanup must not wait for storage access";
        old.removed=false;current.finishing=true;keepCurrentTask(current);assert !old.removed;
        current.finishing=false;current.destroyed=true;keepCurrentTask(current);assert !old.removed;
        keepCurrentTask(new Context());
        current.destroyed=false;Storage.allowed=true;migrate(current,hooks);
        assert hooks.calls==1&&migrated&&old.removed;
        old.removed=false;migrate(current,hooks);
        assert hooks.calls==1&&old.removed : "task cleanup runs even after preference migration";
        RecentsCheck game=new RecentsCheck();game.exited(1);
        assert "1".equals(State.exit)&&game.activity.launched==null&&android.os.Process.killed==0;
        game.exited(0);
        assert "0".equals(State.exit)&&game.activity.finished&&android.os.Process.killed==1;
        Intent intent=game.activity.launched;
        assert intent.flags==(Intent.FLAG_ACTIVITY_NEW_TASK|Intent.FLAG_ACTIVITY_CLEAR_TASK);
        assert "game".equals(intent.values.get(EXTRA_DISTRIBUTION));
        assert Boolean.TRUE.equals(intent.values.get(LauncherActivity.EXTRA_SHOW));
        assert Boolean.FALSE.equals(intent.values.get(EXTRA_PLAY));
        System.out.println("PASS recents: preserve current task, remove stale tasks despite races, obsolete owners, permission/migration independence, clean exit keeps launcher task");
    }
}
'''.replace("/* ACTUAL */", methods).replace("/* STORAGE_GUARD */", str("!Storage.allFiles(context)" in methods).lower())
    with tempfile.TemporaryDirectory(prefix="launcher-recents-", dir=folder) as temporary:
        work = Path(temporary)
        path = work / "RecentsCheck.java"
        path.write_text(program, encoding="utf-8")
        java = Path(os.environ["JAVA_HOME"]) / "bin"
        subprocess.run([str(java / "javac.exe"), "--release", "8", "-Xlint:-options", "-d", str(work), str(path)], check=True)
        subprocess.run([str(java / "java.exe"), "-ea", "-cp", str(work), "RecentsCheck"], check=True)
    return True


if __name__ == "__main__":
    with tempfile.TemporaryDirectory(prefix="launcher-recents-tests-") as temporary:
        check(Path(__file__).resolve().parents[1], Path(temporary))
