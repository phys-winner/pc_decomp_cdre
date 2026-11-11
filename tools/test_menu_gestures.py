"""Run the production Java gesture methods with deterministic MotionEvents."""
from pathlib import Path
import os
import shutil
import subprocess
import unittest

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/menu-gestures" / str(os.getpid())


def method(source, signature):
    start = source.index(signature)
    end = source.index("{", start) + 1
    depth = 1
    while depth:
        depth += (source[end] == "{") - (source[end] == "}")
        end += 1
    return source[start:end]


HARNESS = r'''
public final class MenuGesturesProbe {
    static final class MotionEvent {
        static final int ACTION_DOWN=0, ACTION_UP=1, ACTION_MOVE=2, ACTION_CANCEL=3,
            ACTION_POINTER_DOWN=5, ACTION_POINTER_UP=6;
        final int action,index; final int[] ids; final float[] xs,ys;
        MotionEvent(int a,int i,int[] p,float[] x,float[] y) {action=a;index=i;ids=p;xs=x;ys=y;}
        int getActionMasked(){return action;} int getActionIndex(){return index;}
        int getPointerCount(){return ids.length;} int getPointerId(int i){return ids[i];}
        int findPointerIndex(int id){for(int i=0;i<ids.length;i++) if(ids[i]==id)return i;return -1;}
        float getRawX(int i){return xs[i];} float getRawY(int i){return ys[i];}
        float getX(){return xs[0];} float getY(){return ys[0];}
        float getX(int i){return xs[i];} float getY(int i){return ys[i];}
    }
    static MotionEvent event(int action,int index,int[] ids,float... xy) {
        float[] xs=new float[ids.length],ys=new float[ids.length];
        for(int i=0;i<ids.length;i++){xs[i]=xy[2*i];ys[i]=xy[2*i+1];}
        return new MotionEvent(action,index,ids,xs,ys);
    }
    static MotionEvent one(int action,float x,float y){return event(action,0,new int[]{7},x,y);}
    static final class Metrics {float density=1;}
    static final class Resources {Metrics getDisplayMetrics(){return new Metrics();}}
    static final class Decor {
        void removeCallbacks(Runnable r){} void postDelayed(Runnable r,int ms){}
        void performHapticFeedback(int kind){}
    }
    static final class Window {Decor getDecorView(){return new Decor();}}
    static final class Activity {
        Menu menu;
        Resources getResources(){return new Resources();} Window getWindow(){return new Window();}
        float pointerX(float x){return x/1000;} float pointerY(float y){return y/500;}
        void syncMenu(){if(menu!=null)menu.syncNativeScene();} void markIntroSeen(){} void closePortSettings(){}
        void openTextEditor(){} void closeTextEditor(){}
    }
    static final class GameActivity {
        static int downs,ups,wheel,cancels,deletes,options,scroll; static float x,y;
        static int scene=-1;static int nativeUiScene(){return scene;}static boolean nativeTextEditorWanted(){return false;}
        static boolean nativeMenuScroll(int steps){scroll+=steps;return control==3;}
        static int control=1;
        static int nativeMenuControl(float x,float y){return control;}
        static boolean nativeMenuOption(int direction){options+=direction;return true;}
        static boolean raceMenuHit=true;
        static boolean nativeRaceMenuSelect(float x,float y){return raceMenuHit;}
        static void nativePointer(float px,float py,boolean r){x=px;y=py;}
        static void nativeButton(boolean down){if(down)++downs;else ++ups;}
        static void nativeWheel(int delta){wheel+=delta;} static long nativeUiFrame(){return 0;}
        static void nativeCancelInput(){++cancels;}
        static void nativeDelete(){++deletes;}
        int textGeneration;
        interface ConnectionApi {boolean deleteSurroundingText(int before,int after);}
        final class Connection implements ConnectionApi {
            final int generation=textGeneration;
            /* DELETE */
        }

    }
    static final class Menu {
        final Activity activity=new Activity();
        static final int PAUSE=7,GAME=9,LOADING=13,READY=14,INTRO_CONTROLLER=15,CINEMATIC=16,WRECKED=17,FINISHED=18,PAD_START=0x10010,RACE_CONTINUE=0x30000;
        int screen,pointer=-1,accepts,starts,continues,gestureControl,selection; boolean awaitingRaceStart;
        Menu(){activity.menu=this;}boolean isCustom(){return false;}
        void pulse(int key){if(key==PAD_START)++starts;else if(key==RACE_CONTINUE)++continues;else{check(key==13,"objective uses Enter");++accepts;}}
        float lastX,lastY,downX,downY,lastWheelY,wheelRemainder,lastOptionX,optionRemainder;
        boolean swiping,dragging,holding,intro,editorQueryPending; long editorQueryFrame;
        Runnable holdRunnable;
        void cancelPending(){}
        /* MENU */
    }
    static final class Settings {
        final Activity activity=new Activity();
        boolean swiping,help; int pointer=-1,gestureAxis,gestureRow,selected=3,changes,activations;
        float downX,downY,lastY,lastOptionX,optionRemainder,scroll;
        Resources getResources(){return new Resources();}void invalidate(){}
        float bottom(){return 400;}int rowAt(float x,float y){return y<100||y>=400 ? -1:(int)((y-100)/50);}
        void scrollRows(float v){scroll+=v;}void change(int v){changes+=v;}void activate(float x){++activations;}
        void cancelGesture(){pointer=-1;swiping=false;gestureAxis=0;}
        /* SETTINGS */
    }
    static void check(boolean condition,String name){if(!condition)throw new AssertionError(name);}
    static void reset(){GameActivity.downs=GameActivity.ups=GameActivity.wheel=GameActivity.cancels=GameActivity.options=GameActivity.scroll=0;GameActivity.scene=-1;}
    public static void main(String[] args) {
        reset();Menu paused=new Menu();paused.screen=Menu.GAME;GameActivity.scene=Menu.GAME;
        paused.onPauseButton();
        check(GameActivity.cancels==0&&paused.screen==Menu.GAME,"pause request preserves input until original game acknowledges it");
        GameActivity.scene=Menu.PAUSE;paused.syncNativeScene();
        check(GameActivity.cancels==1&&paused.screen==Menu.PAUSE,"actual pause scene releases inputs after acknowledgement");
        reset(); Menu m=new Menu();m.handleMotion(one(0,100,100));m.handleMotion(one(1,100,100));
        check(GameActivity.downs==1 && GameActivity.ups==1,"tap exactly once");
        for(int screen:new int[]{Menu.WRECKED,Menu.FINISHED}){
            reset();m=new Menu();m.screen=screen;m.handleMotion(one(0,900,400));m.handleMotion(one(1,900,400));
            check(m.continues==1&&GameActivity.downs==0,"wrecked/finish taps issue one handbrake action without mouse clicks");
        }
        reset();m=new Menu();m.screen=Menu.CINEMATIC;m.skipCinematic();check(m.accepts==1,"story Continue uses original Enter");
        m.screen=Menu.GAME;m.skipCinematic();check(m.accepts==1,"story button cannot advance gameplay");
        for(boolean freshScene:new boolean[]{false,true}){
            reset();m=new Menu();if(freshScene)GameActivity.scene=15;else m.screen=15;
            m.handleMotion(one(0,100,100));m.handleMotion(one(1,100,100));
            check(m.starts==1 && m.accepts==0 && GameActivity.downs==0,"controller gate tap sends only virtual START, never keyboard or mouse");
        }
        reset();m=new Menu();m.handleMotion(one(0,100,100));m.handleMotion(one(2,180,100));m.handleMotion(one(1,200,100));
        check(GameActivity.downs==1 && GameActivity.ups==1,"drag must not add a click on UP");
        reset();GameActivity.control=0;m=new Menu();m.handleMotion(one(0,100,100));m.handleMotion(one(2,180,100));m.handleMotion(one(1,200,100));
        check(GameActivity.downs==0,"drag on ordinary text cannot press a menu button");GameActivity.control=1;
        reset();m=new Menu();m.handleMotion(one(0,100,100));m.handleMotion(one(2,100,20));m.handleMotion(one(1,100,20));
        check(GameActivity.downs==0 && GameActivity.scroll!=0 && GameActivity.wheel==0,"scroll must not click or select by wheel");
        check(GameActivity.scroll<0,"swipe up scrolls down");
        reset();GameActivity.control=2;m=new Menu();
        m.handleMotion(one(0,100,100));m.handleMotion(one(2,140,100));m.handleMotion(one(2,205,100));
        check(GameActivity.options==3,"continuous swipe advances each 32dp before release");
        m.handleMotion(one(2,140,100));check(GameActivity.options==2,"reverse swipe follows accumulated travel");
        m.handleMotion(one(1,140,100));check(GameActivity.options==2 && GameActivity.downs==0,"release adds no extra option");
        reset();GameActivity.control=3;m=new Menu();m.handleMotion(one(0,100,100));m.handleMotion(one(2,100,10));m.handleMotion(one(1,100,10));
        check(GameActivity.scroll<0 && GameActivity.wheel==0 && GameActivity.options==0 && GameActivity.downs==0,"list moves without selection events");GameActivity.control=1;
        reset();m=new Menu();m.screen=14;m.handleMotion(one(0,100,100));m.handleMotion(one(1,100,100));
        check(m.accepts==1 && GameActivity.downs==0,"objective tap sends Enter without mouse click");
        reset();m=new Menu();m.screen=7;m.handleMotion(one(0,500,180));m.handleMotion(one(1,500,180));
        check(m.accepts==1 && GameActivity.downs==0,"pause uses the drawn HUD row and Enter");
        GameActivity.raceMenuHit=false;m.handleMotion(one(0,100,100));m.handleMotion(one(1,100,100));
        check(m.accepts==1 && GameActivity.downs==0,"outside pause buttons does not activate");GameActivity.raceMenuHit=true;
        reset();m=new Menu();m.screen=13;m.handleMotion(one(0,100,100));m.handleMotion(one(1,100,100));
        check(m.accepts==0 && GameActivity.downs==1,"loading dialogs accept mouse taps without Enter");
        reset();m=new Menu();m.handleMotion(one(0,100,100));
        m.handleMotion(event(2,0,new int[]{9,7},900,900,180,100));
        check(Math.abs(GameActivity.x-.18f)<.00001f && GameActivity.downs==1,"MOVE finds captured pointer ID");
        m.handleMotion(one(3,180,100));check(GameActivity.cancels==1 && GameActivity.ups==1,"cancel releases drag");
        reset();m=new Menu();m.handleMotion(one(0,100,100));
        m.handleMotion(event(2,0,new int[]{9},900,900));
        check(m.pointer==-1 && GameActivity.cancels==1,"missing pointer aborts");
        GameActivity text=new GameActivity();GameActivity.Connection connection=text.new Connection();
        check(connection.deleteSurroundingText(0,0) && GameActivity.deletes==0,"zero-length delete does nothing");
        check(connection.deleteSurroundingText(1,0) && GameActivity.deletes==1,"supported Backspace deletes once");
        int[][] unsupported={{0,1},{1,1},{2,0},{-1,0},{0,-1},{Integer.MAX_VALUE,0},{0,Integer.MAX_VALUE},{Integer.MIN_VALUE,0}};
        for(int[] range:unsupported) {
            check(!connection.deleteSurroundingText(range[0],range[1]) && GameActivity.deletes==1,"unsupported deletion must not mutate");
        }
        ++text.textGeneration;
        check(connection.deleteSurroundingText(1,0) && GameActivity.deletes==1,"stale connection cannot delete");
        check(connection.deleteSurroundingText(0,1) && GameActivity.deletes==1,"stale unsupported request is ignored");
        Settings settings=new Settings();settings.onTransformedTouch(one(0,100,120));settings.onTransformedTouch(one(2,100,200));settings.onTransformedTouch(one(1,100,220));
        check(settings.selected==3 && settings.scroll!=0 && settings.changes==0 && settings.activations==0,"settings vertical scroll keeps selection");
        settings.onTransformedTouch(one(0,100,120));settings.onTransformedTouch(one(2,200,120));
        check(settings.changes==3 && settings.selected==0,"settings swipe repeats during MOVE");
        settings.onTransformedTouch(one(1,200,120));check(settings.changes==3 && settings.activations==0,"settings swipe UP adds nothing");
        settings.onTransformedTouch(one(0,100,170));settings.onTransformedTouch(one(1,100,170));check(settings.selected==1 && settings.activations==1,"settings tap activates on release");
        System.out.println("PASS menu gestures: tap, drag, scroll, pointer IDs, cancel, centroid and bounded IME deletion");
    }
}
'''


class MenuGesturesTest(unittest.TestCase):
    def test_menu_refresh_preserves_controller_pulse(self):
        java = Path(os.environ.get("JAVA_HOME", "C:/Portable/jdk-24.0.1")) / "bin"
        activity = Path(os.environ.get("CRASHDAY_ACTIVITY_SOURCE", ROOT / "android/app/src/org/crashday/port/GameActivity.java")).read_text(encoding="utf-8")
        sync = method(activity, "void syncMenu()")
        progress = method(activity, "private final Runnable progress = new Runnable()") + ";"
        harness = r'''
public final class MenuSyncProbe {
    static final class View {static final int VISIBLE=0,GONE=8;void setVisibility(int v){}void setText(String text){}}
    static final class Settings {boolean full;void setEntry(boolean b,boolean s){}boolean isFull(){return full;}void setVisibility(int v){}}
    static final class Menu {
        boolean race,paused,ready,replay;void syncNativeScene(){}boolean isOptions(){return false;}int selection(){return 0;}
        boolean inGame(){return race;}boolean isPaused(){return paused;}boolean awaitingRaceStart(){return ready;}boolean isCustom(){return false;}boolean isCinematic(){return false;}
        boolean isReplay(){return replay;}int scene(){return replay?20:race?9:0;}
    }
    static final class Scenes {void setScene(int scene,int state,boolean controls){}}
    static final class Driving {
        boolean inGame,enabled=true,legacy,pauseHint;int visibility;void setInGame(boolean v){if(inGame!=v){inGame=v;nativeDriving(false);}}
        void setPauseHint(boolean v){pauseHint=v;}
        void publishWeaponHud(boolean active){}void setWeaponsEnabled(int v){}boolean isLegacyLayout(){return legacy;}boolean isEnabled(){return enabled;}void setVisibility(int v){visibility=v;}
    }
    static final class Handler {void postDelayed(Runnable r,int delay){}}
    static final class Launch {void firstFrame(Object root){}void exited(int result){}}
    final Settings portSettings=new Settings();final View driveButton=new View(),status=new View(),continueButton=new View();final Driving drivingControls=new Driving();final Menu touchMenu=new Menu();final Scenes sceneControls=new Scenes();
    final Handler handler=new Handler();final Launch launch=new Launch();final Object root=new Object();
    boolean touchEditor,gameReady=true,started=true,launcherVisible;static int pending;static boolean touchHud,countdown;
    static int nativeStatus(){return Integer.MAX_VALUE;}static boolean nativeLauncherClick(){return false;}
    String tr(String en,String ru){return en;}
    static void nativeDriving(boolean active){if(!active)pending=0;}
    static void nativeTouchHud(boolean active){touchHud=active;}
    static int nativeRaceWeapons(){return 0x0300;}
    static boolean nativeRaceCountdown(){return countdown;}
    void pollRefreshRate(){}
    static int nativeReplayState(){return 0;}
    /* SYNC */
    /* PROGRESS */
    public static void main(String[] args){
        MenuSyncProbe p=new MenuSyncProbe();pending=0x10;
        p.syncMenu();p.syncMenu();p.syncMenu();
        if(pending!=0x10)throw new AssertionError("menu refresh consumed START before original controller poll");
        p.progress.run();p.progress.run();p.progress.run();
        if(pending!=0x10)throw new AssertionError("100ms progress consumed START before original controller poll");
        p.touchMenu.race=true;p.syncMenu();pending=0x100;
        p.syncMenu();if(pending!=0x100)throw new AssertionError("race refresh consumed pending weapon tap");
        countdown=true;p.syncMenu();if(!p.drivingControls.pauseHint||pending!=0x100)throw new AssertionError("countdown shows pause guide without consuming input");
        countdown=false;p.syncMenu();if(p.drivingControls.pauseHint)throw new AssertionError("start hides pause guide");countdown=true;
        p.touchMenu.race=false;p.syncMenu();if(pending!=0)throw new AssertionError("leaving race must release all controls");
        p.touchMenu.race=true;p.syncMenu();pending=0x10;p.touchMenu.paused=true;p.syncMenu();
        if(pending!=0)throw new AssertionError("acknowledged pause must release all controls");
        p.touchMenu.paused=false;p.drivingControls.enabled=false;p.syncMenu();
        if(!p.drivingControls.pauseHint)throw new AssertionError("disabled controls retain countdown guide");
        if(p.drivingControls.visibility!=View.VISIBLE||touchHud)throw new AssertionError("disabled overlay keeps pause hit region and original HUD");
        p.touchMenu.paused=true;p.syncMenu();
        if(p.drivingControls.pauseHint)throw new AssertionError("pause hides countdown guide");
        if(p.drivingControls.visibility!=View.GONE||touchHud)throw new AssertionError("paused race cannot intercept invisible pause");
        p.touchMenu.paused=false;p.touchMenu.ready=true;p.syncMenu();
        if(p.drivingControls.pauseHint)throw new AssertionError("ready screen hides countdown guide");
        if(p.drivingControls.visibility!=View.GONE||touchHud)throw new AssertionError("ready screen keeps native taps");
        p.touchMenu.ready=false;p.portSettings.full=true;p.syncMenu();
        if(p.drivingControls.pauseHint)throw new AssertionError("settings hide countdown guide");
        if(p.drivingControls.visibility!=View.GONE||touchHud)throw new AssertionError("settings cannot intercept invisible pause");
        p.portSettings.full=false;p.touchMenu.race=false;p.syncMenu();
        if(p.drivingControls.pauseHint)throw new AssertionError("menus hide countdown guide");
        if(p.drivingControls.visibility!=View.GONE||touchHud)throw new AssertionError("menu cannot intercept invisible pause");
        p.touchMenu.race=true;p.drivingControls.enabled=true;p.syncMenu();
        if(p.drivingControls.visibility!=View.VISIBLE||!touchHud)throw new AssertionError("reenabling restores touch HUD");
        p.drivingControls.legacy=true;p.syncMenu();
        if(p.drivingControls.visibility!=View.VISIBLE||touchHud)throw new AssertionError("classic layout keeps original HUD");
    }
}
'''
        OUT.mkdir(parents=True, exist_ok=True)
        probe = OUT / "MenuSyncProbe.java"
        probe.write_text(harness.replace("/* SYNC */", sync).replace("/* PROGRESS */", progress), encoding="utf-8")
        for command in ([java / "javac.exe", "-encoding", "UTF-8", "-d", str(OUT), str(probe)],
                        [java / "java.exe", "-cp", str(OUT), "MenuSyncProbe"]):
            result = subprocess.run([str(x) for x in command], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)

    def test_production_methods(self):
        java = Path(os.environ.get("JAVA_HOME", "C:/Portable/jdk-24.0.1")) / "bin"
        javac = shutil.which("javac") or str(java / "javac.exe")
        runner = shutil.which("java") or str(java / "java.exe")
        source = Path(os.environ.get("CRASHDAY_MENU_SOURCE", ROOT / "android/app/src/org/crashday/port/TouchMenuController.java")).read_text(encoding="utf-8")
        actual = "\n".join(method(source, signature) for signature in (
            "private void stepOption(float x)", "private void sendPointer()", "private void cancelHold()", "private void armHold()",
            "boolean handleMotion(MotionEvent event)", "void cancelGesture()", "void syncNativeScene()", "void onPauseButton()", "void skipCinematic()"))
        activity = (ROOT / "android/app/src/org/crashday/port/GameActivity.java").read_text(encoding="utf-8")
        delete = method(activity, "@Override public boolean deleteSurroundingText(int before, int after)")
        OUT.mkdir(parents=True, exist_ok=True)
        # The Android haptic constant has no bearing on the gesture decisions.
        actual = actual.replace("android.view.HapticFeedbackConstants.LONG_PRESS", "0")
        probe = OUT / "MenuGesturesProbe.java"
        settings = (ROOT / "android/app/src/org/crashday/port/PortSettingsView.java").read_text(encoding="utf-8")
        settings = "\n".join(method(settings, signature) for signature in ("private boolean onTransformedTouch(MotionEvent event)", "private void stepOption(float x)"))
        probe.write_text(HARNESS.replace("/* MENU */", actual).replace("/* DELETE */", delete).replace("/* SETTINGS */", settings), encoding="utf-8")
        for command in ([javac, "-encoding", "UTF-8", "-d", str(OUT), str(probe)],
                        [runner, "-cp", str(OUT), "MenuGesturesProbe"]):
            result = subprocess.run(command, capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == "__main__":
    unittest.main()
