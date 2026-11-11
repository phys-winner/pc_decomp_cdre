"""Exercise the production Android adapters with SDK constants and calibrated devices."""
import os
from pathlib import Path
import re
import subprocess
import unittest

from test_menu_gestures import method

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "build/tests/hardware-input"
JAVA = Path(os.environ.get("JAVA_HOME", "C:/Portable/jdk-24.0.1")) / "bin"
SDK = Path(os.environ.get("ANDROID_SDK_ROOT", Path.home() / "AppData/Local/Android/Sdk"))

HARNESS = r'''
import java.util.*;
class HardwareInputBase {
    public boolean dispatchKeyEvent(HardwareInputProbe.KeyEvent event){return false;}
    public boolean dispatchGenericMotionEvent(HardwareInputProbe.MotionEvent event){return false;}
    public boolean dispatchTouchEvent(HardwareInputProbe.MotionEvent event){return false;}
}
public final class HardwareInputProbe extends HardwareInputBase {
    static class InputDevice {
        /* INPUT_CONSTANTS */
        static Map<Integer,InputDevice> devices=new HashMap<>();
        static int[] getDeviceIds(){return devices.keySet().stream().mapToInt(Integer::intValue).toArray();}
        static InputDevice getDevice(int id){return devices.get(id);}
        boolean virtual;String name="Fixture controller";int keyboardType;
        boolean isVirtual(){return virtual;}String getName(){return name;}int getKeyboardType(){return keyboardType;}
        int sources=SOURCE_GAMEPAD|SOURCE_JOYSTICK;
        Map<Integer,MotionRange> ranges=new HashMap<>();
        boolean supportsSource(int source){return (sources&source)==source;}
        MotionRange getMotionRange(int axis,int source){return ranges.get(axis);}
        MotionRange getMotionRange(int axis){return ranges.get(axis);}
        void range(int axis,float min,float max,float flat){ranges.put(axis,new MotionRange(min,max,flat));}
        static class MotionRange {
            float min,max,flat;MotionRange(float a,float b,float c){min=a;max=b;flat=c;}
            float getMin(){return min;}float getMax(){return max;}float getFlat(){return flat;}float getRange(){return max-min;}
        }
    }
    static class KeyEvent {
        /* KEY_CONSTANTS */
        int code,action,source=InputDevice.SOURCE_GAMEPAD,id=4;boolean cancelled;
        InputDevice device;
        int unicode;String characters;boolean ctrl,alt;
        KeyEvent(int c,int a){code=c;action=a;}
        int getKeyCode(){return code;}int getAction(){return action;}int getDeviceId(){return id;}
        InputDevice getDevice(){return device;}boolean isCanceled(){return cancelled;}
        int getUnicodeChar(){return unicode;}String getCharacters(){return characters;}
        boolean isCtrlPressed(){return ctrl;}boolean isAltPressed(){return alt;}
        boolean isFromSource(int s){return (source&s)==s;}
        static boolean isGamepadButton(int k){return k>=KEYCODE_BUTTON_A&&k<=KEYCODE_BUTTON_MODE;}
    }
    static class MotionEvent {
        /* MOTION_CONSTANTS */
        int action=ACTION_MOVE,source=InputDevice.SOURCE_JOYSTICK,id=4,buttons;float x,y;
        InputDevice device;Map<Integer,Float> values=new HashMap<>();
        float getAxisValue(int axis){return values.getOrDefault(axis,0f);}
        int getActionMasked(){return action;}int getSource(){return source;}int getDeviceId(){return id;}
        InputDevice getDevice(){return device;}boolean isFromSource(int s){return (source&s)==s;}
        float getRawX(){return x;}float getRawY(){return y;}int getButtonState(){return buttons;}
    }
    static class GameActivity {
        static int buttons,resets;static float lx,ly,rx,ry,lt,rt;
        static void nativeController(int b,float x,float y,float z,float w,float l,float r){buttons=b;lx=x;ly=y;rx=z;ry=w;lt=l;rt=r;}
        static void nativeDriving(boolean active){if(!active)++resets;}
    }
    /* GAMEPAD */
    /* KEYBOARD */
    static class View {}
    static class Settings {
        boolean full;int key;boolean down;
        boolean isFull(){return full;}void onKey(int k,boolean d){key=k;down=d;}boolean onTouch(MotionEvent e){return true;}
    }
    static class Driving {void release(){}void setHardwareInput(boolean value){}boolean handleMotion(MotionEvent e){return true;}}
    static class Menu {boolean paused;boolean isPaused(){return paused;}void onNativeKey(int k,boolean down){}}
    final Settings portSettings=new Settings();final Driving drivingControls=new Driving();final Menu touchMenu=new Menu();
    final GamepadInput gamepad=new GamepadInput();final View surface=new View();
    Object nameDialog,inputDialog;boolean touchEditor,hardwareInput,textWanted;int keys,nativeKeyValue,backs;String text="";
    void syncMenu(){}void back(){++backs;}void nativeTouchMode(boolean touch){}
    boolean nativeTextEditorWanted(){return textWanted;}void nativeText(String value){text+=value;}
    void nativeKey(int vk,boolean down){++keys;nativeKeyValue=vk;}
    int mouseButtons,settingsDirections,nativeButtons,wheel,names,cancels,raceHits;boolean profileClick,hit,raceHit;float pointerX,pointerY;
    float pointerX(float x){return x/1000;}float pointerY(float y){return y/500;}
    boolean nativeProfileHit(float x,float y){return hit;}
    boolean nativeRaceMenuSelect(float x,float y){++raceHits;return raceHit;}
    void editPlayerName(){++names;}void cancelInput(){++cancels;mouseButtons=nativeButtons=0;profileClick=false;}
    void nativePointer(float x,float y,boolean relative){pointerX=x;pointerY=y;}
    void nativeMouseButton(int button,boolean down){int mask=1<<button;nativeButtons=down?nativeButtons|mask:nativeButtons&~mask;}
    void nativeWheel(int delta){wheel+=delta;}
    /* MOUSE */
    /* HARDWARE_SWITCH */
    /* SETTINGS_MOTION */
    /* DISPATCH_KEY */
    /* DISPATCH_MOTION */
    /* DISPATCH_TOUCH */
    static int checks;
    static void check(boolean condition,String label){++checks;if(!condition)throw new AssertionError(label);}
    static void near(float a,float b){check(Math.abs(a-b)<.00001f,"axis: "+a+" != "+b);}
    public static void main(String[] args){
        check(!GamepadInput.externalInputAttached(),"no hardware devices");
        InputDevice d=new InputDevice();InputDevice.devices.put(7,d);
        check(GamepadInput.externalInputAttached(),"physical gamepad detection");
        d.virtual=true;check(!GamepadInput.externalInputAttached(),"virtual Android pad is not attached hardware");
        d.virtual=false;d.name="uinput-fpc joystick";check(!GamepadInput.externalInputAttached(),"fingerprint false positive filtered");
        d.name="USB keyboard";d.sources=InputDevice.SOURCE_KEYBOARD;d.keyboardType=InputDevice.KEYBOARD_TYPE_ALPHABETIC;
        check(GamepadInput.externalInputAttached(),"physical keyboard alone is sufficient");
        d.virtual=true;check(!GamepadInput.externalInputAttached(),"IME/virtual keyboard excluded");
        d.virtual=false;d.keyboardType=InputDevice.KEYBOARD_TYPE_NON_ALPHABETIC;
        check(!GamepadInput.externalInputAttached(),"volume/power button device is not a keyboard");
        d.sources=InputDevice.SOURCE_MOUSE;check(!GamepadInput.externalInputAttached(),"mouse alone is not a driving controller");
        InputDevice.devices.clear();
        GamepadInput p=new GamepadInput();
        int[][] pairs={{96,0x1000},{97,0x2000},{99,0x4000},{100,0x8000},{102,0x100},{103,0x200},
            {106,0x40},{107,0x80},{108,0x10},{109,0x20},{19,1},{20,2},{21,4},{22,8},{23,0x1000},{4,0x2000}};
        for(int[] pair:pairs){
            check(p.key(new KeyEvent(pair[0],0)),"pad press consumed");
            check(GameActivity.buttons==(0x10000|pair[1]),"original XInput button mask "+pair[0]);
            p.key(new KeyEvent(pair[0],0));check(GameActivity.buttons==(0x10000|pair[1]),"repeat preserves mask");
            p.key(new KeyEvent(pair[0],1));check(GameActivity.buttons==0x10000,"release");
        }
        KeyEvent keyboard=new KeyEvent(21,0);keyboard.source=InputDevice.SOURCE_KEYBOARD;
        check(!p.key(keyboard),"keyboard arrows stay keyboard arrows");
        KeyEvent keyboardX=new KeyEvent(52,0);keyboardX.source=InputDevice.SOURCE_KEYBOARD;
        check(!GamepadInput.isController(keyboardX),"keyboard X is not a gamepad button");
        keyboard.device=new InputDevice();check(p.key(keyboard),"pad keys reported as keyboard recognized by device");p.release();
        MotionEvent m=new MotionEvent();
        m.values.put(0,.75f);m.values.put(1,-.5f);m.values.put(11,-.25f);m.values.put(14,.6f);
        m.values.put(17,.3f);m.values.put(18,.8f);
        check(p.motion(m),"joystick consumed");near(GameActivity.lx,.75f);near(GameActivity.ly,-.5f);
        near(GameActivity.rx,-.25f);near(GameActivity.ry,.6f);near(GameActivity.lt,.3f);near(GameActivity.rt,.8f);
        p.key(new KeyEvent(99,0));m.values.put(0,.2f);p.motion(m);
        check((GameActivity.buttons&0x4000)!=0,"axis event preserves held X");
        m.values.put(15,-1f);m.values.put(16,1f);p.motion(m);
        check((GameActivity.buttons&15)==6,"HAT diagonal");
        p.key(new KeyEvent(21,0));m.values.put(15,0f);m.values.put(16,0f);p.motion(m);
        check((GameActivity.buttons&15)==4,"hat release preserves key dpad");p.key(new KeyEvent(21,1));
        p.key(new KeyEvent(104,0));near(GameActivity.lt,.3f);p.key(new KeyEvent(104,1));near(GameActivity.lt,.3f);
        m.values.put(17,0f);m.values.put(23,.4f);m.values.put(18,0f);m.values.put(22,.9f);p.motion(m);
        near(GameActivity.lt,.4f);near(GameActivity.rt,.9f);
        p.key(new KeyEvent(105,0));near(GameActivity.rt,.9f);p.key(new KeyEvent(105,1));near(GameActivity.rt,.9f);
        m.device=new InputDevice();m.device.range(0,-2,2,.2f);m.device.range(1,-1,1,.1f);
        m.values.put(0,.15f);m.values.put(1,Float.NaN);p.motion(m);near(GameActivity.lx,0);near(GameActivity.ly,0);
        m.values.put(0,-2f);p.motion(m);near(GameActivity.lx,-1);
        m.device.range(12,-1,1,.05f);m.device.range(13,-1,1,.05f);
        m.device.range(11,-1,1,.05f);m.device.range(14,-1,1,.05f);
        m.values.put(12,.8f);m.values.put(13,-.7f);m.values.put(11,-1f);m.values.put(14,0f);
        m.values.remove(22);m.values.remove(23);p.motion(m);
        near(GameActivity.rx,.8f);near(GameActivity.ry,-.7f);near(GameActivity.lt,0);near(GameActivity.rt,.5f);
        p.removed(999);near(GameActivity.rt,.5f);p.removed(4);
        check(GameActivity.buttons==0x10000,"disconnect clears buttons");near(GameActivity.rt,0);near(GameActivity.rx,0);
        p.key(new KeyEvent(104,0));near(GameActivity.lt,1);p.key(new KeyEvent(104,1));near(GameActivity.lt,0);
        p.key(new KeyEvent(105,0));near(GameActivity.rt,1);p.key(new KeyEvent(105,1));near(GameActivity.rt,0);
        p.key(new KeyEvent(103,0));p.release();check(GameActivity.buttons==0x10000,"focus loss clears pad");
        KeyEvent cancelled=new KeyEvent(103,0);cancelled.cancelled=true;p.key(cancelled);
        check(GameActivity.buttons==0x10000,"cancelled down cannot stick");
        m=new MotionEvent();m.source=InputDevice.SOURCE_MOUSE;
        check(!p.motion(m),"mouse source cannot become joystick through shared source bits");
        int[][] keys={{29,65},{54,90},{7,48},{16,57},{131,0x70},{142,0x7B},{144,0x60},{153,0x69},
            {59,0xA0},{60,0xA1},{113,0xA2},{114,0xA3},{57,0xA4},{58,0xA5},{111,27},{112,0x2E},
            {122,0x24},{123,0x23},{92,0x21},{93,0x22},{124,0x2D},{69,0xBD},{76,0xBF},{160,0x0C}};
        for(int[] pair:keys)check(virtualKey(pair[0])==pair[1],"keyboard VK "+pair[0]);
        check(virtualKey(24)==0,"volume key left to Android");
        HardwareInputProbe h=new HardwareInputProbe();m=new MotionEvent();m.action=7;m.x=400;m.y=200;
        check(h.mouseMotion(null,m),"mouse hover consumed");near(h.pointerX,.4f);near(h.pointerY,.4f);
        m.action=0;m.buttons=1;h.mouseMotion(null,m);check(h.nativeButtons==1,"primary mouse down");
        m.action=11;m.buttons=3;h.mouseMotion(null,m);check(h.nativeButtons==3,"secondary press preserves primary");
        m.action=12;m.buttons=2;h.mouseMotion(null,m);check(h.nativeButtons==2,"primary release preserves secondary");
        m.action=1;m.buttons=0;h.mouseMotion(null,m);check(h.nativeButtons==0,"all mouse buttons release");
        m.action=0;h.mouseMotion(null,m);check(h.nativeButtons==1,"legacy mouse down without button-state metadata");
        m.action=1;h.mouseMotion(null,m);check(h.nativeButtons==0,"legacy mouse up releases");
        for(int bit:new int[]{4,8,16}){m.action=11;m.buttons=bit;h.mouseMotion(null,m);check(h.nativeButtons==bit,"middle/side mouse button");}
        m.action=8;m.buttons=0;m.values.put(9,-2f);h.mouseMotion(null,m);check(h.wheel==-240,"wheel distance and sign");
        m.action=0;m.buttons=1;h.hit=true;h.mouseMotion(null,m);m.action=1;m.buttons=0;h.mouseMotion(null,m);
        check(h.names==1&&h.nativeButtons==0,"avatar click opens dialog without clicking through");
        m.action=3;h.mouseMotion(null,m);check(h.cancels==1,"mouse cancel clears state");
        h=new HardwareInputProbe();h.touchMenu.paused=true;h.raceHit=true;
        m=new MotionEvent();m.action=0;m.buttons=1;h.mouseMotion(null,m);
        check(h.nativeButtons==0&&h.raceHits==0,"pause primary press does not enter the offscreen CUI queue");
        m.action=1;m.buttons=0;h.mouseMotion(null,m);
        check(h.raceHits==1&&h.keys==2&&h.nativeKeyValue==13,"pause click selects the drawn HUD button and presses Enter once");
        h.raceHit=false;m.action=0;m.buttons=1;h.mouseMotion(null,m);m.action=1;m.buttons=0;h.mouseMotion(null,m);
        check(h.raceHits==2&&h.keys==2,"click outside pause buttons cannot activate");
        m.action=0;m.buttons=2;h.mouseMotion(null,m);
        check(h.nativeButtons==2,"pause secondary press stays a secondary press");
        m.action=1;m.buttons=0;h.mouseMotion(null,m);
        check(h.nativeButtons==0&&h.raceHits==2,"pause secondary release cannot activate a primary click");
        m.action=0;m.buttons=1;h.mouseMotion(null,m);m.action=3;h.mouseMotion(null,m);m.action=1;m.buttons=0;h.mouseMotion(null,m);
        check(h.raceHits==2,"cancelled pause press cannot activate on a late release");
        h=new HardwareInputProbe();KeyEvent padX=new KeyEvent(99,0);
        check(h.dispatchKeyEvent(padX)&&h.hardwareInput,"activity routes pad keys before keyboard translation");
        check((GameActivity.buttons&0x4000)!=0&&h.keys==0,"X reaches XInput without a keyboard alias");
        h.cancels=0;
        KeyEvent arrow=new KeyEvent(21,0);arrow.source=InputDevice.SOURCE_KEYBOARD;
        check(h.dispatchKeyEvent(arrow)&&h.nativeKeyValue==37,"activity preserves keyboard arrows");
        h.portSettings.full=true;h.dispatchKeyEvent(new KeyEvent(97,0));
        check(h.portSettings.key==27&&h.portSettings.down,"B returns from port settings");
        m=new MotionEvent();m.values.put(16,1f);h.dispatchGenericMotionEvent(m);
        check(h.portSettings.key==40&&h.portSettings.down,"HAT navigates port settings");
        m.values.put(16,0f);h.dispatchGenericMotionEvent(m);check(!h.portSettings.down,"settings HAT releases");
        h.portSettings.full=false;h.textWanted=true;KeyEvent letter=new KeyEvent(29,0);letter.source=InputDevice.SOURCE_KEYBOARD;letter.unicode=0x42F;
        int previousKeys=h.keys;h.dispatchKeyEvent(letter);
        check(h.text.equals("Я")&&h.keys==previousKeys,"Unicode hardware typing does not also synthesize ASCII");
        letter.action=1;h.dispatchKeyEvent(letter);check(h.text.equals("Я"),"key up cannot duplicate text");
        KeyEvent multiple=new KeyEvent(0,2);multiple.source=InputDevice.SOURCE_KEYBOARD;multiple.characters="Test";
        check(h.dispatchKeyEvent(multiple)&&h.text.equals("ЯTest"),"ACTION_MULTIPLE text");
        h.nameDialog=new Object();check(!h.dispatchKeyEvent(new KeyEvent(99,0)),"native name dialog retains key focus");h.nameDialog=null;
        h.textWanted=false;m=new MotionEvent();m.values.put(18,.7f);
        check(h.dispatchGenericMotionEvent(m),"activity routes joystick axes");near(GameActivity.rt,.7f);
        m.source=InputDevice.SOURCE_MOUSE;m.action=7;m.x=500;m.y=250;
        check(h.dispatchGenericMotionEvent(m),"activity routes mouse hover before views");near(h.pointerX,.5f);
        m.action=0;m.buttons=2;check(h.dispatchTouchEvent(m)&&h.nativeButtons==2,"physical right click bypasses touch driving overlay");
        m.action=1;m.buttons=0;h.dispatchTouchEvent(m);check(h.nativeButtons==0,"right click release through activity");
        m.source=InputDevice.SOURCE_TOUCHSCREEN;m.action=0;h.dispatchTouchEvent(m);
        check(!h.hardwareInput&&h.cancels==1,"touch ownership returns before the driving view sees DOWN");
        System.out.println("PASS: "+checks+" hardware input checks");
    }
}
'''


class HardwareInputTest(unittest.TestCase):
    def test_production_adapters(self):
        OUT.mkdir(parents=True, exist_ok=True)
        source = (ROOT / "android/app/src/org/crashday/port/GamepadInput.java").read_text(encoding="utf-8")
        source = re.sub(r"(?m)^(package|import) .*;\s*", "", source)
        source = source.replace("final class GamepadInput", "static final class GamepadInput", 1)
        activity = (ROOT / "android/app/src/org/crashday/port/GameActivity.java").read_text(encoding="utf-8")
        code = HARNESS.replace("/* GAMEPAD */", source)
        code = code.replace("/* KEYBOARD */", method(activity, "private static int virtualKey("))
        code = code.replace("/* MOUSE */", method(activity, "private boolean mouseMotion("))
        for marker, signature in (("HARDWARE_SWITCH", "private void hardwareInput("),
                ("SETTINGS_MOTION", "private void settingsPadMotion("),
                ("DISPATCH_KEY", "@Override public boolean dispatchKeyEvent("),
                ("DISPATCH_MOTION", "@Override public boolean dispatchGenericMotionEvent("),
                ("DISPATCH_TOUCH", "@Override public boolean dispatchTouchEvent(")):
            code = code.replace("/* " + marker + " */", method(activity, signature))
        for kind, name in (("INPUT", "InputDevice"), ("KEY", "KeyEvent"), ("MOTION", "MotionEvent")):
            api = subprocess.check_output([str(JAVA / "javap.exe"), "-constants", "-classpath",
                str(SDK / "platforms/android-37.0/android.jar"), "android.view." + name], text=True)
            constants = re.findall(r"public static final int (\w+) = (-?\d+);", api)
            self.assertTrue(constants)
            code = code.replace("/* " + kind + "_CONSTANTS */", "\n".join(f"static final int {k}={v};" for k, v in constants))
        probe = OUT / "HardwareInputProbe.java"
        probe.write_text(code, encoding="utf-8")
        for command in ([JAVA / "javac.exe", "-encoding", "UTF-8", "-d", OUT, probe],
                        [JAVA / "java.exe", "-cp", OUT, "HardwareInputProbe"]):
            result = subprocess.run([str(x) for x in command], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        print(result.stdout.strip())


if __name__ == "__main__":
    unittest.main()
