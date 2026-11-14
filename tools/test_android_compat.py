"""Execute the production inset handling with APIs unavailable on older Androids."""
import os
from pathlib import Path
import subprocess
import unittest

from test_menu_gestures import method

ROOT = Path(__file__).resolve().parents[1]


class AndroidCompatTest(unittest.TestCase):
    def test_insets_cutout_and_keyboard_on_api_26_to_30(self):
        source = (ROOT / "android/app/src/org/crashday/port/GameActivity.java").read_text(encoding="utf-8")
        body = method(source, "private void applySafeInsets(")
        for qualified in ("android.view.WindowInsets", "android.view.DisplayCutout", "android.graphics.Insets"):
            body = body.replace(qualified, qualified.rsplit(".", 1)[1])
        harness = r'''
public class InsetsProbe {
 static class Build {static class VERSION {static int SDK_INT;}}
 static class Insets {int left=7,top=8,right=9,bottom=10;}
 static class DisplayCutout {
  int getSafeInsetLeft(){return 40;} int getSafeInsetTop(){return 0;}
  int getSafeInsetRight(){return 0;} int getSafeInsetBottom(){return 0;}
 }
 static class WindowInsets {
  boolean ime,notch; int bottom=12;
  static class Type {static int systemBars(){return 1;} static int displayCutout(){return 2;} static int ime(){return 4;}}
  Insets getInsets(int mask){check(Build.VERSION.SDK_INT>=30);return new Insets();}
  boolean isVisible(int mask){check(Build.VERSION.SDK_INT>=30);return ime;}
  int getSystemWindowInsetLeft(){return 1;} int getSystemWindowInsetTop(){return 2;}
  int getSystemWindowInsetRight(){return 3;} int getSystemWindowInsetBottom(){return bottom;}
  int getStableInsetBottom(){return 12;}
  DisplayCutout getDisplayCutout(){check(Build.VERSION.SDK_INT>=28);return notch?new DisplayCutout():null;}
 }
 static class FrameLayout {static class LayoutParams {int left,right,bottom;void setMargins(int l,int t,int r,int b){left=l;right=r;bottom=b;}}}
 static class View {
  FrameLayout.LayoutParams layout=new FrameLayout.LayoutParams();int[] safe;
  Object getLayoutParams(){return layout;} void setLayoutParams(FrameLayout.LayoutParams p){layout=p;}
  void setSafeInsets(int l,int t,int r,int b){safe=new int[]{l,t,r,b};}
 }
 static class Metrics {float density=2;}
 static class Resources {Metrics getDisplayMetrics(){return new Metrics();}}
 Resources getResources(){return new Resources();}
 View drivingControls=new View(),sceneControls=new View(),portSettings=new View(),driveButton=new View(),continueButton=new View(),status=new View();
 boolean imeVisible,textEditorActive;int closes,cancels;
 void cancelInput(){++cancels;} void closeTextEditor(){++closes;textEditorActive=false;}
 static void check(boolean b){if(!b)throw new AssertionError();}
 /* METHOD */
 public static void main(String[] args){
  for(int api:new int[]{26,27,28,29,30,37}){
   Build.VERSION.SDK_INT=api;InsetsProbe p=new InsetsProbe();WindowInsets i=new WindowInsets();i.notch=true;
   p.applySafeInsets(i);
   check(p.drivingControls.safe[0]==(api>=30?7:api>=28?40:1));
   check(p.drivingControls.safe[3]==(api>=30?10:12));
   check(java.util.Arrays.equals(p.drivingControls.safe,p.sceneControls.safe));
   check(java.util.Arrays.equals(p.drivingControls.safe,p.portSettings.safe));
   check(p.driveButton.layout.left==p.drivingControls.safe[0]);
   check(p.continueButton.layout.right==p.drivingControls.safe[2]+24);
   p.textEditorActive=true;i.ime=true;i.bottom=500;p.applySafeInsets(i);
   check(p.imeVisible&&p.closes==0&&p.drivingControls.safe[3]==(api>=30?10:12));
   i.ime=false;i.bottom=12;p.applySafeInsets(i);
   check(!p.imeVisible&&p.closes==1&&p.cancels==3);
  }
 }
}
'''.replace("/* METHOD */", body)
        out = ROOT / "build/tests/android-compat"
        out.mkdir(parents=True, exist_ok=True)
        probe = out / "InsetsProbe.java"
        probe.write_text(harness, encoding="utf-8")
        java = Path(os.environ.get("JAVA_HOME", "C:/Portable/jdk-24.0.1")) / "bin"
        for command in ([java / "javac.exe", "-encoding", "UTF-8", "-d", out, probe],
                        [java / "java.exe", "-cp", out, "InsetsProbe"]):
            result = subprocess.run([str(x) for x in command], capture_output=True, text=True, timeout=60)
            self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == "__main__":
    unittest.main()
