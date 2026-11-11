"""Run the production input-device prompts, including cancellation and hot unplug."""
from pathlib import Path
import subprocess
import unittest

from test_hardware_input import JAVA
from test_menu_gestures import method

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/input-prompts"

HARNESS = r'''
import java.util.*;
public final class InputPromptsProbe {
    interface Click {void run(AlertDialog dialog,int which);}
    interface Dismiss {void run(AlertDialog dialog);}
    static class CheckBox {
        boolean checked;CheckBox(Object context){}void setText(String text){}boolean isChecked(){return checked;}
    }
    static class AlertDialog {
        static int shown;String message,positive;CheckBox remember;Click click;Dismiss dismissed;boolean visible;
        void setOnDismissListener(Dismiss d){dismissed=d;}
        void show(){visible=true;++shown;}
        void dismiss(){if(!visible)return;visible=false;if(dismissed!=null)dismissed.run(this);}
        void accept(){click.run(this,1);dismiss();}
        static class Builder {
            AlertDialog dialog=new AlertDialog();Builder(Object context){}
            Builder setTitle(String text){return this;}Builder setMessage(String text){dialog.message=text;return this;}
            Builder setView(CheckBox view){dialog.remember=view;return this;}
            Builder setNegativeButton(String text,Click callback){return this;}
            Builder setPositiveButton(String text,Click callback){dialog.positive=text;dialog.click=callback;return this;}
            AlertDialog create(){return dialog;}
        }
    }
    static class Preferences {
        Map<String,Boolean> values=new HashMap<>();boolean getBoolean(String key,boolean fallback){return values.getOrDefault(key,fallback);}
        Preferences edit(){return this;}Preferences putBoolean(String key,boolean value){values.put(key,value);return this;}void apply(){}
    }
    static class Controls {boolean enabled=true;boolean isEnabled(){return enabled;}}
    static class Settings {boolean full;boolean isFull(){return full;}}
    static class GamepadInput {static boolean external;static boolean externalInputAttached(){return external;}}
    AlertDialog inputDialog,nameDialog;
    boolean inputPrompted,externalInputAttached,gameReady,activityResumed=true,touchEditor,textEditorActive,started=true,surfaceReady=true,paused;
    int releases,toggles;final Preferences preferences=new Preferences();final Controls drivingControls=new Controls();final Settings portSettings=new Settings();
    void cancelInput(){++releases;}void nativePause(boolean value){paused=value;}void immersive(){}
    void toggleDriving(){++toggles;drivingControls.enabled=!drivingControls.enabled;preferences.putBoolean("drivingEnabled",drivingControls.enabled);}
    String tr(String english,String russian){return english;}
    /* ACTUAL */
    static int checks;
    static void check(boolean value,String label){++checks;if(!value)throw new AssertionError(label);}
    static InputPromptsProbe fresh(boolean external,boolean touch){
        GamepadInput.external=external;InputPromptsProbe p=new InputPromptsProbe();p.drivingControls.enabled=touch;p.gameReady=true;return p;
    }
    public static void main(String[] args){
        for(boolean external:new boolean[]{false,true})for(boolean touch:new boolean[]{false,true}){
            InputPromptsProbe p=fresh(external,touch);int before=AlertDialog.shown;p.offerTouchVisibility();
            check((p.inputDialog!=null)==(external==touch),"all four device/touch combinations");
            if(p.inputDialog!=null){
                check(p.paused&&p.releases==1,"prompt releases input and pauses the game");
                check(p.inputDialog.positive.equals(external?"Hide":"Show"),"direction-specific action");
                p.inputDialog.dismiss();check(p.drivingControls.enabled==touch&&p.toggles==0,"cancel preserves explicit setting");
                check(!p.paused,"dismiss resumes active game");
            }
            int after=AlertDialog.shown;for(int i=0;i<100;++i)p.offerTouchVisibility();
            check(AlertDialog.shown==after,"progress cannot repeat a prompt");
        }
        InputPromptsProbe p=fresh(false,true);p.offerTouchVisibility();
        GamepadInput.external=true;p.inputDevicesChanged();check(p.inputDialog!=null,"hot plug offers hide");
        p.inputDialog.accept();check(!p.drivingControls.enabled&&p.toggles==1,"hide updates existing control setting");
        GamepadInput.external=false;p.inputDevicesChanged();check(p.inputDialog!=null,"hot unplug offers show");
        p.inputDialog.accept();check(p.drivingControls.enabled&&p.toggles==2,"show restores touch controls");
        p=fresh(true,true);p.offerTouchVisibility();p.inputDialog.remember.checked=true;p.inputDialog.dismiss();
        check(p.preferences.getBoolean("touchInputPromptDisabled",false),"remember choice is persisted on cancel");
        GamepadInput.external=false;p.inputDevicesChanged();GamepadInput.external=true;p.inputDevicesChanged();
        check(p.inputDialog==null,"opt out survives reconnect");
        p=fresh(true,true);p.offerTouchVisibility();GamepadInput.external=false;p.inputDevicesChanged();
        check(p.inputDialog==null&&p.drivingControls.enabled,"unplug dismisses stale hide prompt");
        for(int gate=0;gate<7;++gate){
            p=fresh(false,false);p.gameReady=gate!=0;p.activityResumed=gate!=1;p.touchEditor=gate==2;p.textEditorActive=gate==3;
            if(gate==4)p.nameDialog=new AlertDialog();if(gate==5)p.inputDialog=new AlertDialog();p.portSettings.full=gate==6;
            int before=AlertDialog.shown;p.offerTouchVisibility();
            check(AlertDialog.shown==before&&!p.inputPrompted,"busy/loading/background prompt is deferred");
            p.gameReady=p.activityResumed=true;p.touchEditor=p.textEditorActive=p.portSettings.full=false;p.nameDialog=p.inputDialog=null;
            p.offerTouchVisibility();check(p.inputDialog!=null,"deferred offer appears after gate closes");p.inputDialog.dismiss();
        }
        p=fresh(false,false);p.offerTouchVisibility();p.activityResumed=false;p.inputDialog.dismiss();
        check(p.paused,"background dismissal cannot resume the game");
        p=fresh(false,false);p.offerTouchVisibility();p.surfaceReady=false;p.inputDialog.dismiss();
        check(p.paused,"surface loss cannot resume the game");
        System.out.println("PASS: "+checks+" device/touch prompt checks");
    }
}
'''


class InputPromptsTest(unittest.TestCase):
    def test_production_prompts(self):
        source = (ROOT / "android/app/src/org/crashday/port/GameActivity.java").read_text(encoding="utf-8")
        actual = "\n".join(method(source, s) for s in (
            "private void inputDevicesChanged(", "private void offerTouchVisibility("))
        actual = actual.replace("android.app.AlertDialog", "AlertDialog").replace("android.widget.CheckBox", "CheckBox")
        OUT.mkdir(parents=True, exist_ok=True)
        probe = OUT / "InputPromptsProbe.java"
        probe.write_text(HARNESS.replace("/* ACTUAL */", actual), encoding="utf-8")
        for command in ([JAVA / "javac.exe", "-encoding", "UTF-8", "-d", OUT, probe],
                        [JAVA / "java.exe", "-cp", OUT, "InputPromptsProbe"]):
            result = subprocess.run([str(x) for x in command], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())


if __name__ == "__main__":
    unittest.main()
