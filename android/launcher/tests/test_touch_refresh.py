"""Execute real launcher refresh callbacks across a JVM model of Android touch dispatch."""
import os
from pathlib import Path
import re
import subprocess
import tempfile

from test_group_ui import method


def check(root, folder, candidate=None):
    source = (Path(candidate) if candidate else root / "android/src/port/launcher/LauncherActivity.java").read_text(encoding="utf-8")
    methods = "\n".join(method(source, declaration) for declaration in (
        "@Override public boolean dispatchTouchEvent(", "@Override protected void onPause(",
        "private void refresh()", "private void refresh(int... sections)", "private void checkUpdates("))
    watch = re.search(r"    private final Runnable probeWatch =.*?^    };", source, re.M | re.S).group()
    assert "refresh(Texts.RENDERER, Texts.TEXTURES, Texts.PLAY);" in watch
    assert "refreshAbout();" not in method(source, "private void checkUpdates(")
    program = r'''
import java.util.*;
import java.util.concurrent.Callable;
class MotionEvent {
 static final int ACTION_DOWN=0,ACTION_UP=1,ACTION_MOVE=2,ACTION_CANCEL=3,ACTION_POINTER_DOWN=5,ACTION_POINTER_UP=6;
 final int action;MotionEvent(int action){this.action=action;}int getActionMasked(){return action;}
}
class View {Object getTag(){return null;}void requestFocus(){throw new AssertionError();}}
class LinearLayout {View findFocus(){return null;}View findViewWithTag(Object tag){return null;}}
class Texts {
 static final int PERM_FILES=0,PLAY=1,GAME_FILES=2,RENDERER=3,OPTIONS=4,TEXTURES=5,SPACE=6,UPDATE_AVAILABLE=7,ABOUT=8;
 static final int UP_TO_DATE=9,UPDATE_FAILED=10;
 static String t(Object context,int key){return "notice";}static String fmt(Object context,int key,Object... args){return "error";}
}
class Spec {boolean updates=true;}
class Probe {static boolean checking;static boolean running(Object context){return checking;}}
class Updates {static Object check(Object context){return null;}static Object available(Object context){return null;}}
class Handler {int delayed;void postDelayed(Runnable callback,long delay){assert delay==400;delayed++;}}
class Target {boolean attached=true;}
class Activity {
 boolean finishing,destroyed,dispatchResult=true,throwDispatch;int clicks,moves;Runnable click;
 Target current=new Target(),pressed;
 public boolean dispatchTouchEvent(MotionEvent event){
  if(event.action==MotionEvent.ACTION_DOWN)pressed=current;
  if(event.action==MotionEvent.ACTION_MOVE){assert pressed!=null&&pressed.attached : "scroll target detached during MOVE";moves++;}
  if(event.action==MotionEvent.ACTION_UP){assert pressed==null||pressed.attached : "button detached before UP";if(pressed!=null){clicks++;if(click!=null)click.run();}pressed=null;}
  if(event.action==MotionEvent.ACTION_CANCEL)pressed=null;
  if(throwDispatch)throw new IllegalStateException("dispatch");return dispatchResult;
 }
 protected void onPause(){}boolean isFinishing(){return finishing;}boolean isDestroyed(){return destroyed;}
}
public class LauncherActivity extends Activity {
 Object ui=new Object();boolean checking,touching,finishAfterLaunch,visible=true;
 final Set<Integer> refreshPending=new LinkedHashSet<>();
 Spec spec=new Spec();Handler handler=new Handler();static final long PROBE_POLL_MS=400;
 final int[] rendered=new int[9];int total;Runnable pendingBackground;
 LinearLayout group(int section){return new LinearLayout();}boolean idle(){return true;}
 String installationConflict(){return null;}void note(String text,boolean error){}void note(int section,String text,boolean error){}
 void record(int section){rendered[section]++;total++;if(section==Texts.PLAY){current.attached=false;current=new Target();}}
 void refreshPermissions(){record(Texts.PERM_FILES);}void refreshDistributions(boolean idle){record(Texts.PLAY);}
 void refreshFiles(boolean idle){record(Texts.GAME_FILES);}void refreshRenderer(){record(Texts.RENDERER);}
 void refreshOptions(){record(Texts.OPTIONS);}void refreshTextures(boolean idle){record(Texts.TEXTURES);}
 void refreshSpace(boolean idle){record(Texts.SPACE);}void refreshUpdate(){record(Texts.UPDATE_AVAILABLE);}void refreshAbout(){record(Texts.ABOUT);}
 interface Done<T>{void accept(T value);}
 <T>void background(Callable<T> work,Done<T> done,Done<Throwable> failed){pendingBackground=()->{try{done.accept(work.call());}catch(Exception e){failed.accept(e);}};}
 /* METHODS */
 /* WATCH */
 boolean event(int action){return dispatchTouchEvent(new MotionEvent(action));}
 public static void main(String[] args){
  Probe.checking=true;LauncherActivity probing=new LauncherActivity();
  probing.event(MotionEvent.ACTION_DOWN);
  for(int i=0;i<100;i++){probing.probeWatch.run();probing.event(MotionEvent.ACTION_MOVE);}
  assert probing.total==0&&probing.refreshPending.isEmpty()&&probing.handler.delayed==100;
  probing.event(MotionEvent.ACTION_UP);assert probing.clicks==1&&probing.moves==100&&probing.total==0;
  Probe.checking=false;probing.probeWatch.run();assert probing.total==3;
  LauncherActivity tap=new LauncherActivity();tap.event(MotionEvent.ACTION_DOWN);Target original=tap.current;
  tap.refresh(Texts.PLAY);tap.probeWatch.run();tap.checkUpdates(false);tap.pendingBackground.run();
  assert original==tap.current&&original.attached&&tap.total==0&&tap.refreshPending.size()==5;
  assert tap.event(MotionEvent.ACTION_UP)&&tap.clicks==1&&!tap.touching&&tap.refreshPending.isEmpty();
  assert tap.total==5&&!original.attached : "refresh only requested sections once after native UP dispatch";
  for(int section:new int[]{Texts.PLAY,Texts.RENDERER,Texts.TEXTURES,Texts.ABOUT,Texts.UPDATE_AVAILABLE})assert tap.rendered[section]==1;
  for(int section:new int[]{Texts.PERM_FILES,Texts.GAME_FILES,Texts.OPTIONS,Texts.SPACE})assert tap.rendered[section]==0;
  LauncherActivity scroll=new LauncherActivity();scroll.event(MotionEvent.ACTION_DOWN);
  scroll.probeWatch.run();scroll.event(MotionEvent.ACTION_MOVE);scroll.refresh(Texts.GAME_FILES);
  scroll.event(MotionEvent.ACTION_POINTER_DOWN);scroll.probeWatch.run();scroll.event(MotionEvent.ACTION_POINTER_UP);
  assert scroll.touching&&scroll.total==0;scroll.event(MotionEvent.ACTION_MOVE);
  scroll.event(MotionEvent.ACTION_CANCEL);assert scroll.moves==2&&scroll.clicks==0&&scroll.total==4&&!scroll.touching;
  LauncherActivity ordinary=new LauncherActivity();ordinary.event(MotionEvent.ACTION_DOWN);ordinary.event(MotionEvent.ACTION_UP);
  assert ordinary.clicks==1&&ordinary.total==0;
  LauncherActivity clickRefresh=new LauncherActivity();clickRefresh.click=()->clickRefresh.refresh(Texts.OPTIONS);
  clickRefresh.event(MotionEvent.ACTION_DOWN);clickRefresh.event(MotionEvent.ACTION_UP);
  assert clickRefresh.clicks==1&&clickRefresh.total==1&&clickRefresh.rendered[Texts.OPTIONS]==1;
  LauncherActivity handoff=new LauncherActivity();handoff.click=()->{handoff.refresh(Texts.PLAY);handoff.finishAfterLaunch=true;handoff.finishing=true;};
  handoff.event(MotionEvent.ACTION_DOWN);handoff.event(MotionEvent.ACTION_UP);
  assert handoff.clicks==1&&handoff.total==0&&handoff.refreshPending.isEmpty() : "launch keeps its source window intact";
  for(int stopped=0;stopped<2;stopped++){
   LauncherActivity closed=new LauncherActivity();closed.event(MotionEvent.ACTION_DOWN);closed.refresh(Texts.PLAY);
   closed.finishing=stopped==0;closed.destroyed=stopped==1;closed.event(MotionEvent.ACTION_CANCEL);assert closed.total==0;
  }
  LauncherActivity paused=new LauncherActivity();paused.event(MotionEvent.ACTION_DOWN);paused.refresh(Texts.PLAY);paused.onPause();
  assert !paused.touching&&paused.refreshPending.isEmpty();paused.refresh(Texts.PLAY);assert paused.total==1;
  LauncherActivity result=new LauncherActivity();result.dispatchResult=false;assert !result.event(MotionEvent.ACTION_DOWN);
  result.refresh(Texts.PLAY);assert !result.event(MotionEvent.ACTION_CANCEL)&&result.total==1;
  LauncherActivity failed=new LauncherActivity();failed.event(MotionEvent.ACTION_DOWN);failed.refresh(Texts.PLAY);failed.throwDispatch=true;
  try{failed.event(MotionEvent.ACTION_CANCEL);throw new AssertionError();}catch(IllegalStateException expected){}
  assert !failed.touching&&failed.refreshPending.isEmpty()&&failed.total==1;
  System.out.println("PASS launcher touch refresh: input during 100 probe polls, one completion redraw, stable DOWN/UP target, scrolling and secondary pointers, selective async refresh, cancel/pause cleanup, dispatch result/exception, launch/finish guards");
 }
}
'''
    java = Path(os.environ["JAVA_HOME"]) / "bin"
    with tempfile.TemporaryDirectory(prefix="launcher-touch-refresh-", dir=folder) as temporary:
        work = Path(temporary)
        path = work / "LauncherActivity.java"
        path.write_text(program.replace("/* METHODS */", methods).replace("/* WATCH */", watch), encoding="utf-8")
        subprocess.run([str(java / "javac.exe"), "--release", "8", "-Xlint:-options", "-d", str(work), str(path)], check=True)
        result = subprocess.run([str(java / "java.exe"), "-ea", "-cp", str(work), "LauncherActivity"], capture_output=True, text=True)
        assert result.returncode == 0, result.stdout + result.stderr
        print(result.stdout, end="")
    return True


if __name__ == "__main__":
    with tempfile.TemporaryDirectory(prefix="launcher-touch-refresh-tests-") as temporary:
        check(Path(__file__).resolve().parents[1], Path(temporary))
