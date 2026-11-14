"""Exercise the Android rumble routing with two motors and independent switches."""
from pathlib import Path
import re
import subprocess
import unittest

from test_hardware_input import JAVA

ROOT = Path(__file__).resolve().parents[1]
HARNESS = r'''
import java.util.*;
public final class GameVibrationProbe {
 static class AudioAttributes {
  static final int USAGE_GAME=14,CONTENT_TYPE_SONIFICATION=4;
  static class Builder {Builder setUsage(int n){return this;}Builder setContentType(int n){return this;}AudioAttributes build(){return new AudioAttributes();}}
 }
 static class Build {static class VERSION {static int SDK_INT=31;}}
 static class VibrationAttributes {static final int USAGE_MEDIA=19,USAGE_PHYSICAL_EMULATION=34;static class Builder {Builder setUsage(int n){return this;}VibrationAttributes build(){return new VibrationAttributes();}}}
 static class Context {static final String VIBRATOR_SERVICE="vibrator";Vibrator phone=new Vibrator();Object getSystemService(String name){return phone;}}
 static class VibrationEffect {
  int amplitude;static VibrationEffect createOneShot(long ms,int amplitude){check(ms==150&&amplitude>=1&&amplitude<=255,"bounded vibration");VibrationEffect e=new VibrationEffect();e.amplitude=amplitude;return e;}
 }
 static class Vibrator {
  boolean available=true;int amplitude,cancels;boolean hasVibrator(){return available;}
  void vibrate(VibrationEffect e,AudioAttributes a){amplitude=e.amplitude;}void cancel(){amplitude=0;++cancels;}
 }
 static class CombinedVibration {
  Map<Integer,Integer> motors=new HashMap<>();static ParallelCombination startParallel(){return new ParallelCombination();}
  static class ParallelCombination {
   CombinedVibration v=new CombinedVibration();ParallelCombination addVibrator(int id,VibrationEffect e){v.motors.put(id,e.amplitude);return this;}
   CombinedVibration combine(){check(!v.motors.isEmpty(),"combined vibration needs a motor");return v;}
  }
 }
 static class VibratorManager {
  int[] ids={11,24};Map<Integer,Integer> last=new HashMap<>();int cancels;
  int[] getVibratorIds(){return ids;}void vibrate(CombinedVibration v,VibrationAttributes a){last=v.motors;}void cancel(){last=new HashMap<>();++cancels;}
 }
 static class InputDevice {
  static final int SOURCE_GAMEPAD=0x401,SOURCE_JOYSTICK=0x1000010;
  static Map<Integer,InputDevice> devices=new LinkedHashMap<>();int id;boolean virtual;Vibrator vibrator=new Vibrator();VibratorManager manager=new VibratorManager();
  InputDevice(int id){this.id=id;}int getId(){return id;}boolean isVirtual(){return virtual;}boolean supportsSource(int n){return true;}
  static InputDevice getDevice(int id){return devices.get(id);}static int[] getDeviceIds(){return devices.keySet().stream().mapToInt(Integer::intValue).toArray();}
  Vibrator getVibrator(){return vibrator;}VibratorManager getVibratorManager(){return manager;}
 }
 static class Log {static void w(String tag,String text,RuntimeException e){throw new AssertionError(text,e);}}
 /* PRODUCTION */
 static void check(boolean value,String label){if(!value)throw new AssertionError(label);}
 public static void main(String[] args){
  Context c=new Context();GameVibration v=new GameVibration(c);InputDevice a=new InputDevice(7),b=new InputDevice(9);
  InputDevice.devices.put(7,a);InputDevice.devices.put(9,b);v.refreshController(Integer.MIN_VALUE);
  v.update(65535,7,true,false);check(a.manager.last.get(11)==255&&!a.manager.last.containsKey(24)&&c.phone.amplitude==0,"low motor only, phone disabled");
  v.update(0x80000000,7,true,true);check(!a.manager.last.containsKey(11)&&a.manager.last.get(24)==128&&c.phone.amplitude==128,"high motor and phone preserve strength");
  v.update(-1,7,false,true);check(a.manager.last.isEmpty()&&c.phone.amplitude==255,"controller switch is independent");
  v.update(-1,9,true,false);check(b.manager.last.size()==2&&c.phone.amplitude==0,"active controller switch stops the previous target");
  v.update(0,9,true,true);check(b.manager.last.isEmpty()&&c.phone.amplitude==0,"zero cancels both targets");
  b.manager.ids=new int[]{24};v.update(65535,9,true,true);check(b.manager.last.get(24)==255,"single motor receives maximum channel");
  v.stop();check(b.manager.last.isEmpty()&&c.phone.amplitude==0,"pause cancels both targets");
  Build.VERSION.SDK_INT=26;v.update(0x80000000,9,true,true);check(b.vibrator.amplitude==128,"Android 26 controller fallback");
  v.stop();check(b.vibrator.amplitude==0,"legacy controller stops");
  b.vibrator.available=false;c.phone.available=false;v.update(-1,9,true,true);v.stop();
  InputDevice.devices.clear();v.refreshController(Integer.MIN_VALUE);v.update(-1,Integer.MIN_VALUE,true,true);v.stop();
  System.out.println("PASS rumble: separate channels, strength, device switches, active target, absent motors, Android 26/31 and lifecycle cancellation");
 }
}
'''


class GameVibrationTest(unittest.TestCase):
    def test_production_routing(self):
        source = (ROOT / "android/app/src/org/crashday/port/GameVibration.java").read_text(encoding="utf-8")
        source = re.sub(r"(?m)^(?:package|import) .*;\s*", "", source)
        source = source.replace("final class GameVibration", "static final class GameVibration", 1).replace("android.util.Log", "Log")
        out = ROOT / "build/tests/game-vibration"
        out.mkdir(parents=True, exist_ok=True)
        probe = out / "GameVibrationProbe.java"
        probe.write_text(HARNESS.replace("/* PRODUCTION */", source), encoding="utf-8")
        for command in ([JAVA / "javac.exe", "-encoding", "UTF-8", "-d", out, probe],
                        [JAVA / "java.exe", "-cp", out, "GameVibrationProbe"]):
            result = subprocess.run([str(x) for x in command], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == "__main__":
    unittest.main()
