"""Run the production startup method across Activity recreation and failed preparation."""
from pathlib import Path
import re
import subprocess
import tempfile
import unittest

from test_hardware_input import JAVA
from test_menu_gestures import method

ROOT = Path(__file__).resolve().parents[1]

HARNESS = r'''
import java.io.*;
import java.nio.file.*;
public final class WorkshopLaunchProbe {
    /* FIELD */
    boolean started, surfaceReady=true, activityResumed=true;
    int renderScale=100, refusals;
    SurfaceView surface=new SurfaceView(); Status status=new Status();
    Launch launch=new Launch(); Handler handler=new Handler(); Runnable progress=()->{};
    static File root; static int prepares, environments, nativeCalls, nativeStarts, nativeResult;
    static boolean prepareFailure, environmentFailure, nativeAlive;
    static File retired;
    static class Surface {boolean isValid(){return true;}}
    static class Holder {Surface getSurface(){return new Surface();}}
    static class SurfaceView {Holder getHolder(){return new Holder();}}
    static class Status {void setText(String value){} void setVisibility(int value){}}
    static class Handler {void post(Runnable value){}}
    static class Intent {boolean getBooleanExtra(String key,boolean fallback){return fallback;}}
    static class Build {static class VERSION {static int SDK_INT=30;}}
    static class Environment {static boolean isExternalStorageManager(){return true;}}
    static class CrashdayTextureBackend {
        static boolean isEmbedded(){return false;}
        static void applyOverrides(File game,File images,File userdata){}
    }
    static class ProfileStorage {
        static File profile(Object context){return new File(root,"userdata");}
        static void migrate(Object context){}
        static String playerName(Object context)throws IOException{return "Driver";}
        static String profileName(Object context){return "userdata";}
    }
    static class WorkshopStore {
        static void prepare(Object context)throws IOException {
            ++prepares;
            if(prepareFailure)throw new IOException("injected prepare failure");
            if(retired!=null)Files.deleteIfExists(retired.toPath());
        }
        static File root(Object context){return new File(root,"workshop");}
    }
    static class android {
        static class system {static class Os {
            static void setenv(String key,String value,boolean replace)throws IOException {
                ++environments;
                if(environmentFailure)throw new IOException("injected environment failure");
                if(!key.equals("PORT_WORKSHOP_ROOT"))throw new AssertionError(key);
            }
        }}
        static class util {static class Log {static void w(String tag,String message,Throwable error){}}}
    }
    static class Launch {
        File folder(String name){return new File(root,"game");}
        void starting(){}
    }
    Intent getIntent(){return new Intent();} Object getAssets(){return null;}
    void nativePlayerName(byte[] name){}
    String tr(String english,String russian){return english;}
    void refuse(String reason){++refusals;}
    static int nativeStart(String game,String images,String userdata,Object assets,boolean crashTest,int scale){
        ++nativeCalls;
        if(nativeAlive)return 0;
        if(nativeResult!=0)return nativeResult;
        nativeAlive=true;++nativeStarts;return 0;
    }
    /* START */
    static int checks;
    static void check(boolean condition,String label){++checks;if(!condition)throw new AssertionError(label);}
    void reset(){workshopPrepared=false;prepares=environments=nativeCalls=nativeStarts=nativeResult=0;
        prepareFailure=environmentFailure=nativeAlive=false;retired=null;}
    public static void main(String[]args)throws Exception {
        root=new File(args[0]);File data=new File(root,"game/data");check(data.mkdirs(),"fixture data");
        Files.write(new File(data,"dat000.cpk").toPath(),new byte[]{1});

        WorkshopLaunchProbe first=new WorkshopLaunchProbe();first.reset();first.startIfReady();
        check(first.started&&prepares==1&&environments==1&&nativeStarts==1,"cold start prepares once");
        first.startIfReady();check(prepares==1&&nativeCalls==1,"same Activity does not restart");
        retired=new File(root,"old-snapshot-track.trk");Files.write(retired.toPath(),new byte[]{1});
        WorkshopLaunchProbe recreated=new WorkshopLaunchProbe();recreated.startIfReady();
        check(recreated.started&&prepares==1&&environments==1&&nativeCalls==2&&nativeStarts==1,
              "new Activity in same process reuses preparation and native game");
        check(retired.isFile(),"recreation must not delete an old native snapshot's retired track");

        WorkshopLaunchProbe failure=new WorkshopLaunchProbe();failure.reset();prepareFailure=true;
        failure.startIfReady();
        check(!failure.started&&!failure.workshopPrepared&&nativeCalls==0&&environments==0&&failure.refusals==1,
              "prepare failure blocks native startup");
        prepareFailure=false;failure.startIfReady();
        check(failure.started&&prepares==2&&nativeStarts==1,"preparation failure can be retried");

        WorkshopLaunchProbe environment=new WorkshopLaunchProbe();environment.reset();environmentFailure=true;
        environment.startIfReady();
        check(!environment.started&&nativeCalls==0&&!environment.workshopPrepared,"environment failure blocks native startup");
        environmentFailure=false;environment.startIfReady();
        check(environment.started&&prepares==2&&nativeStarts==1,"environment failure can be retried");

        WorkshopLaunchProbe nativeFailure=new WorkshopLaunchProbe();nativeFailure.reset();nativeResult=22;
        nativeFailure.startIfReady();
        check(!nativeFailure.started&&!nativeFailure.workshopPrepared&&nativeCalls==1&&nativeStarts==0,
              "failed native startup does not latch process preparation");
        nativeResult=0;new WorkshopLaunchProbe().startIfReady();
        check(prepares==2&&nativeStarts==1,"new Activity retries a failed native startup");
        System.out.println("PASS: "+checks+" Workshop process-lifetime startup, retained track and failure-retry checks");
    }
}
'''


class WorkshopLaunchTest(unittest.TestCase):
    def test_process_snapshot_survives_activity_recreation_and_failures(self):
        source = (ROOT / 'android/app/src/org/crashday/port/GameActivity.java').read_text(encoding='utf-8')
        field = re.search(r'private\s+(?:static\s+)?boolean\s+workshopPrepared\s*;', source)
        self.assertIsNotNone(field)
        startup = method(source, 'private void startIfReady(')
        with tempfile.TemporaryDirectory(prefix='workshop-launch-') as temporary:
            out = Path(temporary)
            probe = out / 'WorkshopLaunchProbe.java'
            probe.write_text(HARNESS.replace('/* FIELD */', field.group(0)).replace('/* START */', startup), encoding='utf-8')
            fixture = out / 'fixture'; fixture.mkdir()
            for command in ([JAVA / 'javac.exe', '-encoding', 'UTF-8', '-d', out, probe],
                            [JAVA / 'java.exe', '-cp', out, 'WorkshopLaunchProbe', fixture]):
                result = subprocess.run([str(value) for value in command], capture_output=True, text=True, timeout=30)
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
            print(result.stdout.strip())


if __name__ == '__main__':
    unittest.main()
