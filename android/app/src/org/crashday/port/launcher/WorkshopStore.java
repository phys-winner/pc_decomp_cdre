package org.crashday.port.launcher;

import android.content.Context;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InterruptedIOException;
import java.net.HttpURLConnection;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.StandardCopyOption;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Properties;
import java.util.Set;
import java.util.Timer;
import java.util.TimerTask;
import java.util.UUID;
import java.util.function.LongConsumer;
import java.util.zip.CRC32;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/** Owned Workshop files, a durable queue and the next launch's ordered native manifest. */
public final class WorkshopStore {
    private static final String STATE = "workshop";
    private static WorkshopStore instance;
    private final Context context;
    private final File root;
    private final List<Record> records = new ArrayList<>();
    private final List<String> retired = new ArrayList<>();
    private boolean disabled, development;
    private DownloadJob job;
    private Timer wake;
    private boolean wakePending;
    private volatile HttpURLConnection activeConnection;
    private volatile String activeId = "";

    public static final class Entry {
        public final WorkshopItem item;
        public final boolean enabled, installed;
        public final String status, error;
        public final long done, total, installedUpdated;

        Entry(Record record, File root) {
            item = record.item; enabled = record.enabled;
            installed = record.installed(root);
            status = record.status; error = record.error;
            done = record.done; total = record.item.size; installedUpdated = record.installedUpdated;
        }
    }

    static final class Record {
        WorkshopItem item;
        boolean enabled = true;
        String status = "queued", error = "", payload = "", pending = "";
        long done, installedSize, installedUpdated, generation;

        boolean installed(File root) {
            try {
                File file = owned(root, payload);
                return file.isFile() && installedSize > 0 && file.length() == installedSize;
            } catch (IOException absent) { return false; }
        }
    }

    public static synchronized WorkshopStore get(Context context) throws IOException {
        if (instance == null) instance = new WorkshopStore(context, State.read(context, STATE), true);
        return instance;
    }

    public static File root(Context context) { return new File(context.getFilesDir(), "workshop"); }

    private WorkshopStore(Context source, Properties state, boolean recoverQueue) throws IOException {
        context = source.getApplicationContext();
        root = root(context);
        load(state, recoverQueue);
    }

    private void load(Properties state, boolean recoverQueue) throws IOException {
        records.clear(); retired.clear(); disabled = false; development = false;
        String text = state.getProperty("data", "");
        if (text.isEmpty()) return;
        if (text.length() > 12 * 1024 * 1024) throw new IOException("Workshop settings are too large");
        try {
            JSONObject saved = new JSONObject(text);
            disabled = saved.optBoolean("disabled"); development = saved.optBoolean("development");
            JSONArray items = saved.getJSONArray("items");
            if (items.length() > 512) throw new IOException("Too many installed Workshop items");
            Set<String> ids = new HashSet<>();
            for (int i = 0; i < items.length(); ++i) {
                JSONObject item = items.getJSONObject(i);
                Record record = new Record(); record.item = new WorkshopItem(item.getJSONObject("item"));
                if (!ids.add(record.item.id)) throw new IOException("Duplicate Workshop settings entry");
                record.enabled = item.optBoolean("enabled", true);
                record.status = item.optString("status", "installed");
                if (!record.status.matches("queued|downloading|installed|failed|cancelled")) record.status = "failed";
                if (recoverQueue && record.status.equals("downloading")) record.status = "queued";
                record.error = item.optString("error"); record.payload = item.optString("payload");
                record.pending = item.optString("pending");
                record.installedSize = item.optLong("installedSize"); record.installedUpdated = item.optLong("installedUpdated");
                if (!record.payload.isEmpty()) owned(root, record.payload);
                if (!record.pending.isEmpty()) {
                    File pending = owned(root, record.pending);
                    if (recoverQueue && !record.pending.equals(record.payload)) {
                        Files.deleteIfExists(new File(pending.getPath() + ".part").toPath());
                        Files.deleteIfExists(pending.toPath()); record.pending = "";
                    }
                }
                if (record.status.equals("installed") && !record.installed(root)) {
                    record.status = "failed"; record.error = "Installed mod file is missing or changed; download it again";
                }
                records.add(record);
            }
            JSONArray old = saved.optJSONArray("retired");
            if (old != null && old.length() > 8192) throw new IOException("Too many retired Workshop files");
            for (int i = 0; old != null && i < old.length(); ++i) {
                String path = old.getString(i); owned(root, path);
                if (!retired.contains(path)) retired.add(path);
            }
        } catch (JSONException invalid) { throw new IOException("Cannot read Workshop settings", invalid); }
    }

    public synchronized List<Entry> entries() {
        List<Entry> result = new ArrayList<>();
        for (Record record : records) result.add(new Entry(record, root));
        return result;
    }

    public synchronized boolean disabled() { return disabled; }
    public synchronized boolean development() { return development; }
    public synchronized void setDisabled(boolean value) throws IOException { disabled = value; save(); }
    public synchronized void setDevelopment(boolean value) throws IOException { development = value; save(); }

    public synchronized void enqueue(WorkshopItem item) throws IOException {
        Record record = find(item.id);
        if (record == null) {
            if (records.size() >= 512) throw new IOException("The Workshop list is full");
            record = new Record(); record.item = item; records.add(record);
        } else if (record.status.equals("queued") || record.status.equals("downloading")) return;
        else record.item = item;
        ++record.generation; record.status = "queued"; record.error = ""; record.done = 0;
        save(); kick();
    }

    public synchronized void retry(String id) throws IOException {
        Record record = require(id);
        if (record.status.equals("downloading")) return;
        ++record.generation; record.status = "queued"; record.error = ""; record.done = 0;
        save(); kick();
    }

    public synchronized void cancel(String id) throws IOException {
        Record record = require(id);
        if (!(record.status.equals("queued") || record.status.equals("downloading"))) return;
        record.status = "cancelled"; record.error = "";
        save();
        HttpURLConnection connection = activeConnection;
        if (id.equals(activeId) && connection != null) connection.disconnect();
    }

    public synchronized void setEnabled(String id, boolean enabled) throws IOException {
        require(id).enabled = enabled; save();
    }

    public synchronized void setAllEnabled(boolean enabled) throws IOException {
        for (Record record : records) record.enabled = enabled;
        save();
    }

    public synchronized void move(String id, int delta) throws IOException {
        Record record = require(id);
        int from = records.indexOf(record), to = from, direction = Integer.signum(delta);
        if (direction == 0) return;
        do { to += direction; } while (to >= 0 && to < records.size() && !records.get(to).installed(root));
        if (to < 0 || to >= records.size()) return;
        records.remove(from); records.add(to, record); save();
    }

    public synchronized void remove(String id) throws IOException {
        Record record = require(id);
        if (record.status.equals("downloading")) throw new IOException("Cancel this download before deleting the mod");
        if (!record.payload.isEmpty()) retired.add(record.payload);
        if (!record.pending.isEmpty()) retired.add(record.pending);
        records.remove(record); save();
    }

    public synchronized void kick() {
        boolean pending = false;
        for (Record record : records) if (record.status.equals("queued")) { pending = true; break; }
        if (!pending) { cancelWake(); return; }
        if (job != null && !job.finished) return;
        if (Work.busy()) { awaitWork(); return; }
        DownloadJob next = new DownloadJob();
        if (Work.start(context, next)) { job = next; cancelWake(); }
        else awaitWork();
    }

    private void awaitWork() {
        if (wakePending) return;
        if (wake == null) wake = new Timer("workshop-queue", true);
        wakePending = true;
        wake.schedule(new TimerTask() {
            @Override public void run() {
                synchronized (WorkshopStore.this) { wakePending = false; }
                kick();
            }
        }, 1000);
    }

    private void cancelWake() {
        if (wake != null) { wake.cancel(); wake = null; }
        wakePending = false;
    }

    private Record find(String id) { for (Record record : records) if (record.item.id.equals(id)) return record; return null; }
    private Record require(String id) throws IOException {
        Record record = find(id);
        if (record == null) throw new IOException("This mod is no longer in your list");
        return record;
    }

    static boolean failureBelongsTo(Record stored, Record attempt, long generation) {
        if (stored == null) return false;
        if (stored == attempt) return stored.generation == generation;
        // A failed save reloads records; a replacement queued by the user has not started yet.
        return stored.status.equals("downloading");
    }

    private String json() throws IOException {
        try {
            for (int i = retired.size() - 1; i >= 0; --i) {
                File old = owned(root, retired.get(i));
                if (!old.exists() && !new File(old.getPath() + ".part").exists()) retired.remove(i);
            }
            JSONArray items = new JSONArray();
            for (Record record : records) {
                JSONObject metadata = record.item.json();
                if (record.item.description.length() > 16000) metadata.put("description", record.item.description.substring(0, 16000));
                items.put(new JSONObject().put("item", metadata).put("enabled", record.enabled).put("status", record.status)
                    .put("error", record.error).put("payload", record.payload).put("installedSize", record.installedSize)
                    .put("installedUpdated", record.installedUpdated).put("pending", record.pending));
            }
            JSONArray old = new JSONArray(); for (String path : retired) old.put(path);
            return new JSONObject().put("version", 1).put("disabled", disabled).put("development", development)
                .put("items", items).put("retired", old).toString();
        } catch (JSONException invalid) { throw new IOException("Cannot save Workshop settings", invalid); }
    }

    private static final class SaveFailure extends RuntimeException {
        final IOException error;
        SaveFailure(IOException error) { super(error); this.error = error; }
    }

    private void save() throws IOException {
        try {
            String text = json();
            boolean ok = State.update(context, STATE, values -> {
                try { manifest(); } catch (IOException failure) { throw new SaveFailure(failure); }
                values.setProperty("data", text);
            });
            if (!ok) throw new IOException("Cannot save the Workshop mod list");
        } catch (SaveFailure failure) { throw rollback(failure.error); }
        catch (IOException failure) { throw rollback(failure); }
    }

    private IOException rollback(IOException failure) {
        try { load(State.read(context, STATE), false); }
        catch (IOException invalid) { failure.addSuppressed(invalid); }
        return failure;
    }

    /** Called in the game's process before startup; never starts a download or loads game code. */
    public static void prepare(Context context) throws IOException {
        try {
            boolean ok = State.update(context, STATE, state -> {
                try {
                    WorkshopStore snapshot = new WorkshopStore(context, state, false);
                    snapshot.manifest();
                    Set<String> active = new HashSet<>();
                    for (Record record : snapshot.records) if (!record.payload.isEmpty()) active.add(record.payload);
                    List<String> retained = new ArrayList<>();
                    for (String path : snapshot.retired) {
                        if (active.contains(path)) { retained.add(path); continue; }
                        try {
                            File old = owned(snapshot.root, path);
                            Files.deleteIfExists(old.toPath()); Files.deleteIfExists(new File(old.getPath() + ".part").toPath());
                        } catch (IOException failure) { retained.add(path); Work.warn("Workshop retired file: " + failure, failure); }
                    }
                    snapshot.retired.clear(); snapshot.retired.addAll(retained);
                    state.setProperty("data", snapshot.json());
                }
                catch (IOException failure) { throw new SaveFailure(failure); }
            });
            if (!ok) throw new IOException("Cannot prepare the Workshop mod list");
        } catch (SaveFailure failure) { throw failure.error; }
    }

    private void manifest() throws IOException {
        if (!root.isDirectory() && !root.mkdirs()) throw new IOException("Cannot create Workshop storage");
        StringBuilder text = new StringBuilder("CDWORKSHOP1\t").append(disabled ? 1 : 0).append('\t').append(development ? 1 : 0).append('\n');
        for (Record record : records) if (record.enabled && record.installed(root)) {
            text.append(record.item.id).append('\t').append(record.installedSize).append('\t')
                .append(record.installedUpdated).append('\t').append(record.payload).append('\n');
        }
        File temporary = new File(root, "active.tsv.tmp");
        try (FileOutputStream out = new FileOutputStream(temporary)) {
            out.write(text.toString().getBytes(StandardCharsets.UTF_8)); out.getFD().sync();
        }
        Files.move(temporary.toPath(), new File(root, "active.tsv").toPath(), StandardCopyOption.REPLACE_EXISTING, StandardCopyOption.ATOMIC_MOVE);
    }

    static File owned(File root, String relative) throws IOException {
        if (!relative.matches("items/[1-9][0-9]{0,19}/[a-f0-9-]{36}\\.(cpk|trk)")) throw new IOException("Invalid Workshop storage path");
        File file = new File(root, relative);
        if (!file.getCanonicalPath().startsWith(root.getCanonicalPath() + File.separator)) throw new IOException("Unsafe Workshop storage path");
        return file;
    }

    interface Check { void run() throws IOException; }

    static long transfer(InputStream in, FileOutputStream out, long expected, Check check, LongConsumer progress) throws IOException {
        if (expected <= 0 || expected > WorkshopApi.MAX_FILE_SIZE) throw new IOException("Invalid Steam download size");
        byte[] buffer = new byte[65536]; long done = 0; int n;
        while ((n = in.read(buffer)) >= 0) {
            check.run();
            if (n > expected - done) throw new IOException("Steam download is larger than expected");
            out.write(buffer, 0, n); done += n; progress.accept(done);
        }
        check.run();
        if (done != expected) throw new IOException("Steam download ended early; retry the mod");
        return done;
    }

    /** Read in place: the game's original archive loader receives exactly the validated CPK. */
    static void validatePayload(File file, String extension, Check check) throws IOException {
        if (extension.equals("trk")) {
            byte[] magic = new byte[5];
            try (InputStream in = new FileInputStream(file)) {
                if (in.read(magic) != 5 || !new String(magic, StandardCharsets.US_ASCII).equals("CDTRK") || file.length() < 16)
                    throw new IOException("This file is not a Crashday track");
            }
            check.run(); return;
        }
        if (!extension.equals("cpk")) throw new IOException("Only Crashday CPK mods and tracks are supported");
        try (FileInputStream source = new FileInputStream(file); Zip archive = new Zip(source.getChannel())) {
            if (archive.entries.isEmpty() || archive.entries.size() > 100000) throw new IOException("Invalid mod archive size");
            long total = 0; boolean content = false;
            Set<String> names = new HashSet<>(); byte[] buffer = new byte[65536];
            for (Zip.Entry entry : archive.entries) {
                check.run();
                String name = entry.name.toLowerCase(Locale.ROOT);
                if (name.startsWith("/") || name.indexOf(':') >= 0 || name.indexOf('\0') >= 0 || name.length() > 1024)
                    throw new IOException("Unsafe path in Workshop archive");
                for (String part : name.split("/")) if (part.equals("..") || part.equals(".")) throw new IOException("Unsafe path in Workshop archive");
                if (!names.add(name)) throw new IOException("Duplicate path in Workshop archive");
                if (entry.directory()) continue;
                if (entry.size > 4L * 1024 * 1024 * 1024 - total) throw new IOException("Mod expands beyond 4 GiB");
                total += entry.size; content |= name.startsWith("content/");
                CRC32 crc = new CRC32(); long count = 0;
                try (InputStream in = archive.open(entry)) {
                    int n;
                    while ((n = in.read(buffer)) >= 0) {
                        check.run();
                        if (n > entry.size - count) throw new IOException("Corrupt Workshop archive");
                        count += n; crc.update(buffer, 0, n);
                    }
                }
                if (count != entry.size || crc.getValue() != entry.crc) throw new IOException("Workshop archive checksum failed");
            }
            if (!content) throw new IOException("This CPK contains no Crashday content folder");
        }
    }

    private final class DownloadJob extends Work.Job {
        DownloadJob() { super("Steam Workshop", root); }

        @Override void work() throws Exception {
            while (!cancelled) {
                Record current = null;
                synchronized (WorkshopStore.this) {
                    for (Record record : records) if (record.status.equals("queued")) { current = record; break; }
                    if (current == null) return;
                    current.status = "downloading"; current.done = 0; current.error = ""; save();
                }
                final Record record = current;
                final long generation = record.generation;
                Check check = () -> {
                    synchronized (WorkshopStore.this) {
                        if (cancelled || find(record.item.id) != record || record.generation != generation || !record.status.equals("downloading"))
                            throw new InterruptedIOException("Download cancelled");
                    }
                };
                File partial = null;
                try {
                    WorkshopItem details = WorkshopApi.details(record.item.id);
                    if (!details.downloadable()) throw new IOException("Steam does not provide a public download for this item");
                    String lower = details.fileName.toLowerCase(Locale.ROOT);
                    String extension = lower.endsWith(".cpk") ? "cpk" : lower.endsWith(".trk") ? "trk" : "";
                    if (extension.isEmpty()) throw new IOException("This Workshop item is not a CPK mod or Crashday track");
                    check.run();
                    synchronized (WorkshopStore.this) { record.item = details; save(); }
                    file = details.title; done = 0; total = details.size;
                    String relative = "items/" + details.id + "/" + UUID.randomUUID() + "." + extension;
                    File destination = owned(root, relative), parent = destination.getParentFile();
                    if (!parent.isDirectory() && !parent.mkdirs()) throw new IOException("Cannot create mod download folder");
                    if (parent.getUsableSpace() > 0 && parent.getUsableSpace() < details.size + 16 * 1024 * 1024)
                        throw new IOException("Not enough free space to download this mod");
                    partial = new File(parent, destination.getName() + ".part");
                    synchronized (WorkshopStore.this) { check.run(); record.pending = relative; save(); }
                    activeId = details.id;
                    HttpURLConnection connection = WorkshopApi.open(details.fileUrl, null, true, false);
                    activeConnection = connection;
                    try (InputStream in = connection.getInputStream(); FileOutputStream out = new FileOutputStream(partial)) {
                        long length = connection.getContentLengthLong();
                        if (length >= 0 && length != details.size) throw new IOException("Steam download size does not match its metadata");
                        transfer(in, out, details.size, check, value -> {
                            done = value;
                            synchronized (WorkshopStore.this) { record.done = value; }
                        });
                        out.getFD().sync();
                    } finally { activeConnection = null; activeId = ""; connection.disconnect(); }
                    validatePayload(partial, extension, check); check.run();
                    Files.move(partial.toPath(), destination.toPath(), StandardCopyOption.ATOMIC_MOVE);
                    partial = destination;
                    synchronized (WorkshopStore.this) {
                        check.run();
                        if (!record.payload.isEmpty()) retired.add(record.payload);
                        record.payload = relative; record.installedSize = details.size; record.installedUpdated = details.updated;
                        record.pending = ""; record.status = "installed"; record.error = ""; save();
                    }
                    partial = null;
                } catch (IOException failure) {
                    synchronized (WorkshopStore.this) {
                        Record stored = find(record.item.id);
                        if (failureBelongsTo(stored, record, generation)) {
                            stored.status = cancelled || stored.status.equals("cancelled") ? "cancelled" : "failed";
                            stored.error = stored.status.equals("cancelled") ? "" : failure.getMessage();
                            stored.pending = ""; save();
                        }
                    }
                } finally { if (partial != null) Files.deleteIfExists(partial.toPath()); }
            }
        }
    }
}
