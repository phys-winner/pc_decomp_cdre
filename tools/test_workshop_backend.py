"""Production Workshop URL, payload and transfer checks; --android-serial also runs JSON/state checks."""
import argparse
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest
import uuid
import zipfile

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "android/app/src/org/crashday/port/launcher"
SHARED = ROOT / "android/launcher/android/src/port/launcher"
SDK = Path(os.environ.get("ANDROID_SDK_ROOT", Path.home() / "AppData/Local/Android/Sdk"))
SERIAL = None

WORK = r"""package org.crashday.port.launcher;
import android.content.Context; import java.io.File;
final class Work {
    static volatile int starts;
    static volatile boolean blocked=true;
    abstract static class Job implements Runnable {
        volatile long done,total; volatile String file=""; volatile boolean cancelled,finished;
        Job(String title, File target){} abstract void work() throws Exception;
        public void run(){try{work();}catch(Exception e){throw new RuntimeException(e);}finally{finished=true;}}
    }
    static boolean busy(){return blocked;}
    static boolean start(Context context,Job job){++starts;return true;}
    static void warn(String text,Throwable error){System.err.println(text);}
}
"""

HARNESS = r"""package org.crashday.port.launcher;
import android.content.Context;
import android.content.ContextWrapper;
import java.io.*;
import java.lang.reflect.Field;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.*;
import org.json.*;

public final class WorkshopBackendSelfcheck {
    static int checks;
    interface Action {void run() throws Exception;}
    static void check(boolean value,String label){++checks;if(!value)throw new AssertionError(label);}
    static void reject(Action action,String label)throws Exception{
        try{action.run();throw new AssertionError("accepted "+label);}catch(IOException expected){++checks;}
    }
    static String read(File file)throws Exception{return new String(Files.readAllBytes(file.toPath()),StandardCharsets.UTF_8);}
    static void core(File root)throws Exception{
        check(WorkshopApi.MAX_FILE_SIZE==2147483647L,"Java/native signed archive-size boundary");
        WorkshopStore.Record attempt=new WorkshopStore.Record();attempt.status="downloading";attempt.generation=2;
        check(WorkshopStore.failureBelongsTo(attempt,attempt,2),"current download failure");
        attempt.generation=3;attempt.status="queued";
        check(!WorkshopStore.failureBelongsTo(attempt,attempt,2),"old cancellation cannot overwrite immediate retry");
        WorkshopStore.Record replacement=new WorkshopStore.Record();replacement.status="queued";
        check(!WorkshopStore.failureBelongsTo(replacement,attempt,2),"old cancellation cannot overwrite removed/re-added ID");
        WorkshopStore.Record rollback=new WorkshopStore.Record();rollback.status="downloading";
        check(WorkshopStore.failureBelongsTo(rollback,attempt,2),"failed save's reloaded active attempt is resolved");
        rollback.status="installed";
        check(!WorkshopStore.failureBelongsTo(rollback,attempt,2),"old failure preserves reloaded installed record");
        check(!WorkshopStore.failureBelongsTo(null,attempt,2),"old failure preserves removal");
        check(WorkshopApi.extractId("3355727524").equals("3355727524"),"decimal ID");
        check(WorkshopApi.extractId("https://steamcommunity.com/sharedfiles/filedetails/?id=3355727524&searchtext=x").equals("3355727524"),"Workshop URL");
        check(WorkshopApi.extractId("18446744073709551615").length()==20,"unsigned max ID");
        for(String value:new String[]{"0","-1","18446744073709551616","1\n2","https://evil.invalid/sharedfiles/filedetails/?id=5","https://steamcommunity.com@evil.invalid/sharedfiles/filedetails/?id=5","https://steamcommunity.com:443@evil.invalid/sharedfiles/filedetails/?id=5","https://steamcommunity.com/sharedfiles/filedetails/?id=5%26evil","http://steamcommunity.com/sharedfiles/filedetails/?id=5","https://steamcommunity.com:444/sharedfiles/filedetails/?id=5"})
            reject(()->WorkshopApi.extractId(value),"invalid item ID/URL");
        WorkshopApi.validCdn("https://cdn.steamusercontent.com/ugc/123/456/",false);
        WorkshopApi.validCdn("https://shared.fastly.steamstatic.com/img.png",true);checks+=2;
        for(String value:new String[]{"https://cdn.steamusercontent.com.evil.invalid/file","https://127.0.0.1/file","http://cdn.steamusercontent.com/file","https://cdn.steamusercontent.com:444/file","https://a@cdn.steamusercontent.com/file","file:///etc/passwd","https://steamstatic.com/file"})
            reject(()->WorkshopApi.validCdn(value,false),"CDN trust boundary");
        String query=WorkshopApi.catalogUrl("Aquila & test","Track Piece","mostrecent",2);
        check(query.contains("searchtext=Aquila+%26+test")&&query.contains("requiredtags%5B0%5D=Track+Piece")&&query.contains("&p=2"),"encoded catalogue query");
        reject(()->WorkshopApi.catalogUrl("","","bogus",1),"sort");
        reject(()->WorkshopApi.catalogUrl("","","trend",0),"page");
        check(WorkshopApi.readLimited(new ByteArrayInputStream(new byte[12]),12).length==12,"bounded metadata");
        reject(()->WorkshopApi.readLimited(new ByteArrayInputStream(new byte[13]),12),"oversized metadata");
        reject(()->WorkshopApi.readLimited(new InputStream(){public int read()throws IOException{throw new IOException("network down");}},12),"metadata transport failure");
        File payload=new File(root,"good.cpk");
        WorkshopStore.validatePayload(payload,"cpk",()->{});++checks;
        WorkshopStore.validatePayload(new File(root,"good.trk"),"trk",()->{});++checks;
        for(String name:new String[]{"traversal.cpk","duplicate.cpk","no-content.cpk","corrupt.cpk","truncated.cpk"})
            reject(()->WorkshopStore.validatePayload(new File(root,name),"cpk",()->{}),name);
        reject(()->WorkshopStore.validatePayload(new File(root,"bad.trk"),"trk",()->{}),"invalid track header");
        reject(()->WorkshopStore.validatePayload(payload,"dll",()->{}),"unsupported payload");
        reject(()->WorkshopStore.validatePayload(payload,"cpk",()->{throw new InterruptedIOException("cancelled");}),"validation cancellation");
        File owned=WorkshopStore.owned(root,"items/5/12345678-1234-1234-1234-123456789abc.cpk");
        check(owned.getCanonicalPath().startsWith(root.getCanonicalPath()+File.separator),"owned payload");
        for(String name:new String[]{"../outside.cpk","items/5/../../evil.cpk","active.tsv","items/5/a.cpk","items/5/12345678-1234-1234-1234-123456789abc.dll"})
            reject(()->WorkshopStore.owned(root,name),"owned path validation");
        File result=new File(root,"transfer.part");long[] progress={0};
        try(FileOutputStream out=new FileOutputStream(result)){
            check(WorkshopStore.transfer(new ByteArrayInputStream(new byte[100001]),out,100001,()->{},n->progress[0]=n)==100001,"stream length");
        }
        check(result.length()==100001&&progress[0]==100001,"stream progress");
        for(int length:new int[]{99999,100002}){
            try(FileOutputStream out=new FileOutputStream(result)){
                reject(()->WorkshopStore.transfer(new ByteArrayInputStream(new byte[length]),out,100001,()->{},n->{}),"short/long transfer");
            }
        }
        try(FileOutputStream out=new FileOutputStream(result)){
            reject(()->WorkshopStore.transfer(new ByteArrayInputStream(new byte[20]),out,20,()->{throw new InterruptedIOException("cancelled");},n->{}),"transfer cancellation");
        }
        try(FileOutputStream out=new FileOutputStream(result)){
            reject(()->WorkshopStore.transfer(new InputStream(){public int read()throws IOException{throw new IOException("network down");}},out,20,()->{},n->{}),"transfer network failure");
        }
        FileOutputStream closed=new FileOutputStream(result);closed.close();
        reject(()->WorkshopStore.transfer(new ByteArrayInputStream(new byte[20]),closed,20,()->{},n->{}),"transfer disk failure");
        check(payload.isFile(),"failed transfers preserve existing mod");
    }
    static void resetStore()throws Exception{
        Field field=WorkshopStore.class.getDeclaredField("instance");field.setAccessible(true);Object old=field.get(null);
        if(old!=null){synchronized(old){
            Field records=WorkshopStore.class.getDeclaredField("records");records.setAccessible(true);((List<?>)records.get(old)).clear();
            java.lang.reflect.Method cancel=WorkshopStore.class.getDeclaredMethod("cancelWake");cancel.setAccessible(true);cancel.invoke(old);
        }}
        field.set(null,null);
    }
    static JSONObject metadata(String id,long size)throws Exception{
        return new JSONObject().put("publishedfileid",id).put("consumer_app_id",508980).put("title","Test "+id)
            .put("filename","test.cpk").put("file_size",size).put("time_updated",100)
            .put("file_url","https://cdn.steamusercontent.com/ugc/123/456/").put("tags",new JSONArray().put(new JSONObject().put("tag","Car")));
    }
    static JSONObject installed(String id,String path,long size)throws Exception{
        return new JSONObject().put("item",metadata(id,size)).put("enabled",true).put("status","installed")
            .put("payload",path).put("installedSize",size).put("installedUpdated",100);
    }
    static void android(File fixtures)throws Exception{
        WorkshopApi.Page page=WorkshopApi.parseBrowse(read(new File(fixtures,"browse.html")));
        check(page.items.size()==2&&page.total==31&&page.hasMore()&&page.pages==2,"SSR paging");
        check(page.categories.equals(Arrays.asList("Car","Track Piece")),"Steam categories");
        check(page.items.get(0).id.equals("5")&&page.items.get(0).tags.contains("Car"),"SSR metadata");
        try{page.categories.add("x");throw new AssertionError("mutable categories");}catch(UnsupportedOperationException expected){++checks;}
        String html=read(new File(fixtures,"browse.html"));
        reject(()->WorkshopApi.parseBrowse("offline"),"changed SSR format");
        reject(()->WorkshopApi.parseBrowse(html.replace("/workshop/browse","/login")),"login redirect");
        reject(()->WorkshopApi.parseBrowse(html.replace("508980","99")),"foreign catalogue");
        JSONObject detail=metadata("5",100);String response=new JSONObject().put("response",new JSONObject().put("publishedfiledetails",new JSONArray().put(detail))).toString();
        check(WorkshopApi.parseDetails(response,"5").downloadable(),"API details semantic success");
        JSONObject max=metadata("8",2147483647L);check(new WorkshopItem(max).size==2147483647L,"maximum native file size accepted");
        max.put("file_size",2147483648L);reject(()->new WorkshopItem(max),"file exceeding native signed size rejected");
        reject(()->WorkshopApi.parseDetails(response,"6"),"wrong item API reply");
        reject(()->WorkshopApi.parseDetails(response.replace("508980","99"),"5"),"foreign game API reply");
        detail.put("banned",true);String banned=new JSONObject().put("response",new JSONObject().put("publishedfiledetails",new JSONArray().put(detail))).toString();
        reject(()->WorkshopApi.parseDetails(banned,"5"),"banned item");
        File files=new File(fixtures,"state-fixture");files.mkdirs();
        Context context=new ContextWrapper(null){@Override public File getFilesDir(){return files;}@Override public Context getApplicationContext(){return this;}};
        File root=WorkshopStore.root(context);root.mkdirs();
        String first="items/5/12345678-1234-1234-1234-123456789abc.cpk",second="items/6/12345678-1234-1234-1234-123456789abd.cpk",pending="items/5/12345678-1234-1234-1234-123456789abe.cpk";
        File p1=WorkshopStore.owned(root,first),p2=WorkshopStore.owned(root,second);p1.getParentFile().mkdirs();p2.getParentFile().mkdirs();
        Files.copy(new File(fixtures,"good.cpk").toPath(),p1.toPath());Files.copy(p1.toPath(),p2.toPath());
        long size=p1.length();JSONArray items=new JSONArray().put(installed("5",first,size))
            .put(new JSONObject().put("item",metadata("7",50)).put("enabled",true).put("status","queued"))
            .put(installed("6",second,size));
        JSONObject state=new JSONObject().put("items",items).put("disabled",false).put("development",false);
        check(State.put(context,"workshop","data",state.toString()),"state fixture saved");
        resetStore();WorkshopStore store=WorkshopStore.get(context);WorkshopStore.prepare(context);
        File manifest=new File(root,"active.tsv");String before=read(manifest);
        check(before.startsWith("CDWORKSHOP1\t0\t0\n")&&before.indexOf("5\t")<before.indexOf("6\t"),"initial ordered manifest");
        store.move("5",1);String moved=read(manifest);
        check(moved.indexOf("6\t")<moved.indexOf("5\t"),"move skips queued records");
        store.setDisabled(true);store.setDevelopment(true);
        check(read(manifest).startsWith("CDWORKSHOP1\t1\t1\n"),"global flags");
        File blocker=new File(root,"active.tsv.tmp");check(blocker.mkdir(),"manifest failure injected");
        reject(()->store.setDisabled(false),"manifest write failure");
        check(store.disabled(),"failed flag save rolls memory back");
        reject(()->store.remove("6"),"failed remove save");
        check(store.entries().size()==3&&p2.isFile(),"failed removal keeps entry and payload");
        reject(store::removeAllInstalled,"failed bulk removal save");
        check(store.entries().size()==3&&p1.isFile()&&p2.isFile(),"failed bulk removal preserves records and payloads");
        check(blocker.delete(),"manifest blocker removed");
        File stateBlocker=new File(State.folder(context),"workshop.tmp");check(stateBlocker.mkdir(),"state failure injected");
        reject(()->store.setDisabled(false),"state write failure");
        check(store.disabled(),"failed state save rolls memory back");check(stateBlocker.delete(),"state blocker removed");
        WorkshopStore.prepare(context);check(read(manifest).startsWith("CDWORKSHOP1\t1\t1\n"),"fresh prepare restores persisted projection");
        store.enqueue(new WorkshopItem(metadata("5",size+100)));
        check(store.entries().get(2).installed&&p1.isFile(),"queued update keeps installed payload");
        check(read(manifest).contains("5\t"+size+"\t100\t"+first),"queued update preserves installed size/version");
        store.cancel("5");check(p1.isFile(),"cancelled update keeps installed payload");
        store.remove("6");check(p2.isFile(),"remove retires active payload until fresh start");
        check(!read(manifest).contains("6\t"),"removed mod absent next-launch manifest");
        WorkshopStore.prepare(context);check(!p2.exists()&&p1.isFile(),"fresh start reclaims only retired payload");
        File staged=WorkshopStore.owned(root,pending);Files.copy(p1.toPath(),staged.toPath());
        File part=new File(staged.getPath()+".part");Files.copy(p1.toPath(),part.toPath());
        JSONObject recovered=new JSONObject(State.read(context,"workshop").getProperty("data"));JSONArray saved=recovered.getJSONArray("items");
        for(int i=0;i<saved.length();i++){JSONObject value=saved.getJSONObject(i);if(value.getJSONObject("item").getString("publishedfileid").equals("5")){value.put("status","downloading").put("pending",pending);}}
        State.put(context,"workshop","data",recovered.toString());resetStore();WorkshopStore again=WorkshopStore.get(context);
        check(!staged.exists()&&!part.exists()&&p1.isFile(),"crash recovery removes only tracked abandoned payload");
        check(again.entries().get(1).status.equals("queued"),"interrupted download recovered to queue");
        check(Work.starts==0,"projection/recovery never starts a downloader");
        again.cancel("7");again.cancel("5");again.kick();
        Work.blocked=false;Thread.sleep(1200);
        check(Work.starts==0,"cancelled queue does not wake a downloader");
        Work.blocked=true;again.retry("5");again.kick();again.kick();
        check(Work.starts==0,"other shared work blocks the queue");
        Work.blocked=false;
        long deadline=System.currentTimeMillis()+4000;
        while(Work.starts==0&&System.currentTimeMillis()<deadline)Thread.sleep(20);
        check(Work.starts==1,"queue starts after other work ends without an Activity poll");
        again.kick();Thread.sleep(1200);
        check(Work.starts==1,"deferred wake creates only one worker");
        again.removeAllInstalled();
        check(again.entries().size()==1&&again.entries().get(0).item.id.equals("7"),"bulk delete only removes downloaded mods, including updating mods");
        check(p1.isFile()&&!read(manifest).contains("5\t"),"bulk delete retires active payload until restart");
        WorkshopStore.prepare(context);check(!p1.exists(),"bulk retired payload reclaimed on fresh start");
    }
    public static void main(String[]args)throws Exception{
        File root=new File(args[1]);core(root);if(args[0].equals("android"))android(root);
        System.out.println("Workshop backend: "+checks+" checks passed");System.exit(0);
    }
}
"""


def fixtures(folder):
    for name, entries in {
        "good.cpk": [("content/cars/test.cca", b"car"), ("content/textures/test.dds", b"texture" * 50)],
        "traversal.cpk": [("../evil", b"bad"), ("content/a", b"good")],
        "duplicate.cpk": [("content/A", b"one"), ("content/a", b"two")],
        "no-content.cpk": [("other/file.txt", b"test")],
    }.items():
        with zipfile.ZipFile(folder / name, "w", compression=zipfile.ZIP_STORED) as archive:
            for path, value in entries:
                archive.writestr(path, value)
    data = bytearray((folder / "good.cpk").read_bytes())
    data[30 + len("content/cars/test.cca")] ^= 1
    (folder / "corrupt.cpk").write_bytes(data)
    (folder / "truncated.cpk").write_bytes(data[:40])
    (folder / "good.trk").write_bytes(b"CDTRK9" + bytes(64))
    (folder / "bad.trk").write_bytes(b"NOTTRK" + bytes(64))
    item = lambda identifier: {"publishedfileid": str(identifier), "consumer_appid": 508980, "title": "Fixture", "file_size": "100", "tags": [{"tag": "Car"}]}
    payload = {"route": "/workshop/browse", "loaderData": [json.dumps({"app": {"appid": 508980}, "declaredTags": {"readytouse_tags": [{"tags": [{"name": "Car"}, {"name": "Track Piece"}]}]}})], "renderContext": {"queryData": json.dumps({"queries": [{"state": {"data": {"eresult": 1, "current_page": 1, "total_pages": 2, "total_count": 31, "results": [item(5), item(6)]}}}]})}}
    (folder / "browse.html").write_text('<script type="application/json" id="valve-ssr-data">' + json.dumps(payload) + "</script>", encoding="utf-8")


def compile_check(folder):
    source, classes = folder / "src", folder / "classes"
    source.mkdir(); classes.mkdir()
    for name in ("WorkshopApi.java", "WorkshopItem.java", "WorkshopStore.java"):
        shutil.copyfile(SOURCE / name, source / name)
    for name in ("State.java", "Zip.java", "Deflate64.java", "Failure.java"):
        (source / name).write_text((SHARED / name).read_text(encoding="utf-8").replace("package port.launcher;", "package org.crashday.port.launcher;"), encoding="utf-8")
    (source / "Work.java").write_text(WORK, encoding="utf-8")
    (source / "WorkshopBackendSelfcheck.java").write_text(HARNESS, encoding="utf-8")
    jar = SDK / "platforms/android-37.0/android.jar"
    subprocess.run(["javac", "--release", "8", "-Xlint:-options", "-encoding", "UTF-8", "-cp", str(jar), "-d", str(classes), *map(str, source.glob("*.java"))], check=True)
    return classes, jar


class WorkshopBackend(unittest.TestCase):
    def test_production_boundaries(self):
        with tempfile.TemporaryDirectory(prefix="workshop-backend-") as temporary:
            folder = Path(temporary); fixtures(folder)
            classes, jar = compile_check(folder)
            subprocess.run(["java", "-cp", os.pathsep.join([str(classes), str(jar)]), "org.crashday.port.launcher.WorkshopBackendSelfcheck", "host", str(folder)], check=True)
            if SERIAL:
                self.android(folder, classes, jar)

    def android(self, folder, classes, jar):
        tools = sorted((SDK / "build-tools").glob("*/lib/d8.jar"))[-1]
        archive = folder / "classes.jar"
        with zipfile.ZipFile(archive, "w") as output:
            for file in classes.rglob("*.class"):
                output.write(file, file.relative_to(classes).as_posix())
        dex = folder / "dex"; dex.mkdir()
        subprocess.run(["java", "-cp", str(tools), "com.android.tools.r8.D8", "--min-api", "30", "--lib", str(jar), "--output", str(dex), str(archive)], check=True)
        binary = folder / "selfcheck.jar"
        with zipfile.ZipFile(binary, "w") as output:
            for file in dex.glob("*.dex"):
                output.write(file, file.name)
        adb = str(SDK / "platform-tools/adb.exe") if os.name == "nt" else "adb"
        command = [adb, "-s", SERIAL]
        remote = "/data/local/tmp/crashday-workshop-selfcheck-" + uuid.uuid4().hex
        subprocess.run([*command, "shell", "mkdir", "-p", remote], check=True)
        try:
            for file in [binary, *folder.glob("*.cpk"), *folder.glob("*.trk"), folder / "browse.html"]:
                subprocess.run([*command, "push", str(file), remote + "/"], check=True, capture_output=True)
            subprocess.run([*command, "shell", "CLASSPATH=" + remote + "/selfcheck.jar app_process / org.crashday.port.launcher.WorkshopBackendSelfcheck android " + remote], check=True, timeout=90)
        finally:
            subprocess.run([*command, "shell", "rm", "-rf", remote], check=True)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(add_help=False)
    parser.add_argument("--android-serial")
    options, remaining = parser.parse_known_args()
    SERIAL = options.android_serial
    unittest.main(argv=[__file__, *remaining])
