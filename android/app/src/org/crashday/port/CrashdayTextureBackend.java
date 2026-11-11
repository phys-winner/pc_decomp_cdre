package org.crashday.port;

import android.content.Context;
import android.system.Os;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import java.util.zip.CRC32;
import java.util.zip.Deflater;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;
import org.crashday.port.launcher.TextureBackend;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class CrashdayTextureBackend implements TextureBackend {
    private static Context app;
    private static boolean embedded;
    private static Boolean loaded;

    private volatile boolean cancelled;
    private volatile long[] progress = new long[4];
    private volatile String message = "";

    public static synchronized void initialize(Context context) {
        app = context;
        embedded = false;
        try (InputStream in = app.getAssets().open("launcher/port.json")) {
            JSONObject spec = new JSONObject(readText(in));
            embedded = spec.getJSONArray("distributions").getJSONObject(0).optBoolean("embedded", false);
        } catch (IOException | JSONException e) {
            android.util.Log.w("Crashday", "launcher texture spec: " + e);
        }
    }

    public static boolean isEmbedded() { return embedded; }

    private static native byte[] nativeConvert(byte[] data, int format);

    private static synchronized boolean available() {
        if (loaded == null) {
            try {
                System.loadLibrary("crashdaytex");
                loaded = true;
            } catch (Throwable e) {
                android.util.Log.w("Crashday", "texture converter: " + e);
                loaded = false;
            }
        }
        return loaded;
    }

    private static final class Archive {
        String name;
        File file;
        String asset;
    }

    private static final class Candidate {
        String archive, path;
        long bytes;
    }

    private static final class Inventory {
        final Map<String, Candidate> unique = new HashMap<>();
        final Set<String> duplicated = new HashSet<>();
        final Set<String> archives = new HashSet<>();
        long bytes;

        Set<String> requiredArchives() {
            Set<String> out = new HashSet<>();
            for (Candidate candidate : unique.values()) out.add(candidate.archive);
            return out;
        }
    }

    private static final class ConvertedArchive {
        String name, sourceSha256, outputSha256;
        long textures, bytes, outputBytes;

        JSONObject json() throws JSONException {
            JSONObject out = new JSONObject();
            out.put("name", name);
            out.put("sourceSha256", sourceSha256);
            out.put("outputSha256", outputSha256);
            out.put("textures", textures);
            out.put("bytes", bytes);
            out.put("outputBytes", outputBytes);
            return out;
        }

        static ConvertedArchive read(JSONObject in) throws JSONException {
            ConvertedArchive out = new ConvertedArchive();
            out.name = in.getString("name");
            out.sourceSha256 = in.optString("sourceSha256", "");
            out.outputSha256 = in.optString("outputSha256", "");
            out.textures = in.getLong("textures");
            out.bytes = in.getLong("bytes");
            out.outputBytes = in.optLong("outputBytes", 0);
            if (!out.name.matches("[A-Za-z0-9_.-]+\\.cpk")) throw new JSONException("Unsafe archive name");
            return out;
        }
    }

    private static final class Conversion {
        int format;
        final ArrayList<ConvertedArchive> archives = new ArrayList<>();
    }

    @Override public Scan scan(File game) {
        cancelled = false;
        message = "";
        Scan scan = new Scan();
        try {
            requireContext();
            if (!available()) throw new IOException("libcrashdaytex.so");
            Inventory inventory = inventory(game);
            scan.textures = inventory.unique.size();
            scan.bytes = inventory.bytes;
            Conversion conversion = readConversion();
            if (conversion != null) {
                Set<String> required = inventory.requiredArchives();
                Set<String> present = new HashSet<>();
                for (ConvertedArchive archive : conversion.archives) {
                    present.add(archive.name);
                    scan.convertedTextures += archive.textures;
                    scan.convertedBytes += archive.outputBytes;
                    if (!new File(outputDirectory(), archive.name).isFile()) {
                        scan.failure = "Converted archive is missing: " + archive.name;
                        return scan;
                    }
                }
                if (present.equals(required) && conversion.format != 0) scan.converted = conversion.format;
            }
        } catch (Throwable e) {
            scan.failure = e.toString();
        }
        progress = new long[] {0, scan.textures, 0, scan.bytes};
        return scan;
    }

    @Override public int convert(File game, int format, int threads) {
        cancelled = false;
        message = "";
        try {
            requireContext();
            if (format != ETC2 && format != ASTC) throw new IOException("Unknown texture format");
            if (!available()) throw new IOException("libcrashdaytex.so");
            Inventory inventory = inventory(game);
            progress = new long[] {0, inventory.unique.size(), 0, inventory.bytes};
            Set<String> required = inventory.requiredArchives();
            Conversion conversion = new Conversion();
            conversion.format = format;
            for (Archive archive : archives(game)) {
                if (cancelled) return 2;
                if (!required.contains(archive.name)) continue;
                ConvertedArchive converted = convertArchive(archive, inventory, format);
                conversion.archives.add(converted);
                writeConversion(conversion);
            }
            removeStaleArchives(required);
            deleteTree(workDirectory());
            long total = progress[1], bytes = progress[3];
            progress = new long[] {total, total, bytes, bytes};
            return 0;
        } catch (Throwable e) {
            if (cancelled) return 2;
            message = e.toString();
            return 1;
        }
    }

    @Override public int undo(File game) {
        cancelled = false;
        message = "";
        try {
            requireContext();
            Conversion conversion = readConversion();
            if (conversion != null) {
                for (ConvertedArchive archive : conversion.archives) {
                    File output = new File(outputDirectory(), archive.name);
                    if (output.exists() && !output.delete()) throw new IOException("Cannot remove " + output);
                }
            }
            File manifest = manifestFile();
            if (manifest.exists() && !manifest.delete()) throw new IOException("Cannot remove " + manifest);
            File derived = new File(userdata(), "overlay/images/crashday.exe");
            if (derived.exists() && !derived.delete()) throw new IOException("Cannot remove " + derived);
            deleteTree(workDirectory());
            progress = new long[4];
            return 0;
        } catch (Throwable e) {
            message = e.toString();
            return 1;
        }
    }

    @Override public void cancel() { cancelled = true; }
    @Override public long[] progress() { return progress; }
    @Override public String message() { return message; }

    private static void requireContext() throws IOException {
        if (app == null) throw new IOException("The launcher is not initialized");
    }

    public static void applyOverrides(File game, File images, File profile) throws IOException, JSONException {
        requireContext();
        Conversion conversion = readConversion();
        if (conversion != null && conversion.format != ETC2 && conversion.format != ASTC) throw new IOException("Unknown converted texture format");
        ArrayList<Archive> sources = archives(game);
        byte[] executable;
        try (InputStream in = app.getAssets().open("images/crashday.exe")) {
            executable = readAll(in, -1);
        }
        boolean prepared = bindPreparedArchives(executable, sources);
        if (conversion == null && !prepared) return;
        if (conversion != null) for (ConvertedArchive archive : conversion.archives) {
            File output = new File(outputDirectory(), archive.name);
            if (!output.isFile() || output.length() != archive.outputBytes || !archive.outputSha256.equals(sha256(output)))
                throw new IOException("Converted archive is corrupted: " + archive.name);
            Archive source = null;
            for (Archive candidate : sources) if (candidate.name.equals(archive.name)) { source = candidate; break; }
            if (source == null) throw new IOException("Original archive is missing: " + archive.name);
            byte[] originalSha1 = sha1(source), convertedSha1 = sha1(output);
            int offset = uniqueOffset(executable, originalSha1);
            if (offset < 0) throw new IOException("Cannot bind the original CPK integrity signature: " + archive.name);
            System.arraycopy(convertedSha1, 0, executable, offset, convertedSha1.length);
        }
        File derived = new File(profile, "overlay/images/crashday.exe");
        if (!derived.getParentFile().isDirectory() && !derived.getParentFile().mkdirs())
            throw new IOException("Cannot create " + derived.getParent());
        File work = new File(profile, "texture-work/crashday.exe.tmp");
        if (!work.getParentFile().isDirectory() && !work.getParentFile().mkdirs())
            throw new IOException("Cannot create " + work.getParent());
        try (FileOutputStream out = new FileOutputStream(work)) {
            out.write(executable);
            out.getFD().sync();
        }
        rename(work, derived);
        try {
            Os.setenv("PORT_TEXTURE_EXE", derived.getAbsolutePath(), true);
        } catch (android.system.ErrnoException e) {
            throw new IOException("Cannot enable the converted CPK integrity data", e);
        }
    }

    private static boolean bindPreparedArchives(byte[] executable, ArrayList<Archive> sources) throws IOException, JSONException {
        JSONArray known;
        try (InputStream in = app.getAssets().open("images/prepared-cpk-integrity.json")) {
            known = new JSONArray(readText(in));
        }
        boolean changed = false;
        // Old standalone ASTC archives have no launcher manifest; accept only their exact known fingerprints.
        for (int i = 0; i < known.length(); ++i) {
            JSONObject entry = known.getJSONObject(i);
            for (Archive source : sources) if (source.name.equals(entry.getString("name")) &&
                sha256(source).equals(entry.getString("preparedSha256"))) {
                String text = entry.getString("sourceSha1");
                byte[] original = new byte[20];
                for (int j = 0; j < original.length; ++j) original[j] = (byte)Integer.parseInt(text.substring(j * 2, j * 2 + 2), 16);
                int offset = uniqueOffset(executable, original);
                if (offset < 0) throw new IOException("Cannot bind prepared CPK integrity signature: " + source.name);
                System.arraycopy(sha1(source), 0, executable, offset, original.length);
                changed = true;
            }
        }
        return changed;
    }

    private Inventory inventory(File game) throws IOException, JSONException {
        Inventory result = new Inventory();
        for (Archive archive : archives(game)) {
            result.archives.add(archive.name);
            try (InputStream raw = open(archive); ZipInputStream zip = new ZipInputStream(raw)) {
                ZipEntry entry;
                while ((entry = zip.getNextEntry()) != null) {
                    if (entry.isDirectory() || !entry.getName().toLowerCase(Locale.ROOT).endsWith(".dds")) continue;
                    byte[] header = readAtMost(zip, 128);
                    long payload = dxtPayload(header);
                    if (payload <= 0) continue;
                    String key = key(entry.getName());
                    Candidate candidate = new Candidate();
                    candidate.archive = archive.name;
                    candidate.path = entry.getName();
                    candidate.bytes = payload;
                    if (result.duplicated.contains(key)) continue;
                    Candidate previous = result.unique.put(key, candidate);
                    if (previous != null) {
                        result.unique.remove(key);
                        result.duplicated.add(key);
                        result.bytes -= previous.bytes;
                    } else {
                        result.bytes += payload;
                    }
                }
            }
        }
        return result;
    }

    private ConvertedArchive convertArchive(Archive archive, Inventory inventory, int format) throws IOException {
        File work = new File(workDirectory(), archive.name + ".tmp");
        if (!work.getParentFile().isDirectory() && !work.getParentFile().mkdirs()) throw new IOException("Cannot create " + work.getParent());
        File output = new File(outputDirectory(), archive.name);
        if (!output.getParentFile().isDirectory() && !output.getParentFile().mkdirs()) throw new IOException("Cannot create " + output.getParent());
        ConvertedArchive result = new ConvertedArchive();
        result.name = archive.name;
        result.sourceSha256 = sha256(archive);
        ArrayList<CentralEntry> central = centralEntries(archive);
        try (InputStream raw = open(archive);
             ZipInputStream zip = new ZipInputStream(raw);
             FileOutputStream file = new FileOutputStream(work);
             CpkOutputStream out = new CpkOutputStream(file)) {
            ZipEntry entry;
            int index = 0;
            while ((entry = zip.getNextEntry()) != null) {
                if (cancelled) throw new IOException("Cancelled");
                if (index >= central.size()) throw new IOException("CPK directory does not match its entries");
                CentralEntry metadata = central.get(index++);
                if (!metadata.name.equals(entry.getName()) || metadata.method != entry.getMethod())
                    throw new IOException("CPK directory does not match its entries");
                byte[] data = readAll(zip, entry.getSize());
                Candidate candidate = inventory.unique.get(key(entry.getName()));
                boolean converted = false;
                if (candidate != null && candidate.archive.equals(archive.name)) {
                    byte[] encoded = nativeConvert(data, format);
                    if (encoded == null) throw new IOException("Cannot convert " + entry.getName());
                    if (encoded.length > 0) {
                        data = encoded;
                        converted = true;
                        result.textures++;
                        result.bytes += candidate.bytes;
                    }
                }
                writeEntry(out, entry, metadata, data);
                if (converted) {
                    long[] p = progress;
                    progress = new long[] {p[0] + 1, p[1], p[2] + candidate.bytes, p[3]};
                }
            }
            if (index != central.size()) throw new IOException("CPK directory does not match its entries");
            out.finish();
            file.getFD().sync();
        }
        result.outputBytes = work.length();
        result.outputSha256 = sha256(work);
        rename(work, output);
        return result;
    }

    private static void writeEntry(CpkOutputStream out, ZipEntry source, CentralEntry metadata, byte[] data) throws IOException {
        out.putNextEntry(source, metadata, data);
        out.closeEntry();
    }

    private static ArrayList<Archive> archives(File game) throws IOException {
        requireContext();
        TreeMap<String, Archive> found = new TreeMap<>();
        if (embedded) {
            String[] names = app.getAssets().list("game/data");
            if (names != null) for (String name : names) {
                if (!name.toLowerCase(Locale.ROOT).endsWith(".cpk")) continue;
                Archive archive = new Archive();
                archive.name = name;
                archive.asset = "game/data/" + name;
                found.put(name.toLowerCase(Locale.ROOT), archive);
            }
        } else {
            File[] files = new File(game, "data").listFiles();
            if (files != null) for (File file : files) {
                if (!file.isFile() || !file.getName().toLowerCase(Locale.ROOT).endsWith(".cpk")) continue;
                Archive archive = new Archive();
                archive.name = file.getName();
                archive.file = file;
                found.put(file.getName().toLowerCase(Locale.ROOT), archive);
            }
        }
        if (found.isEmpty()) throw new IOException("No CPK archives in game/data");
        return new ArrayList<>(found.values());
    }

    private static InputStream open(Archive archive) throws IOException {
        return archive.asset != null ? app.getAssets().open(archive.asset) : new FileInputStream(archive.file);
    }

    private static byte[] sha1(Archive archive) throws IOException {
        try (InputStream in = open(archive)) { return hash(in, "SHA-1"); }
    }

    private static byte[] sha1(File file) throws IOException {
        try (InputStream in = new FileInputStream(file)) { return hash(in, "SHA-1"); }
    }

    private static byte[] hash(InputStream in, String algorithm) throws IOException {
        MessageDigest digest = digest(algorithm);
        byte[] buffer = new byte[65536];
        int got;
        while ((got = in.read(buffer)) >= 0) digest.update(buffer, 0, got);
        return digest.digest();
    }

    private static MessageDigest digest(String algorithm) {
        try { return MessageDigest.getInstance(algorithm); }
        catch (java.security.NoSuchAlgorithmException e) { throw new AssertionError(e); }
    }

    private static int uniqueOffset(byte[] data, byte[] value) {
        int found = -1;
        outer: for (int i = 0; i + value.length <= data.length; ++i) {
            for (int j = 0; j < value.length; ++j) if (data[i + j] != value[j]) continue outer;
            if (found >= 0) return -1;
            found = i;
        }
        return found;
    }

    private static String sha256(Archive archive) throws IOException {
        MessageDigest digest = digest();
        try (InputStream in = open(archive)) {
            byte[] buffer = new byte[65536];
            int got;
            while ((got = in.read(buffer)) >= 0) digest.update(buffer, 0, got);
        }
        return hex(digest);
    }

    private static Conversion readConversion() throws IOException, JSONException {
        File file = manifestFile();
        if (!file.isFile()) return null;
        try (InputStream in = new FileInputStream(file)) {
            JSONObject json = new JSONObject(readText(in));
            Conversion out = new Conversion();
            out.format = json.getInt("format");
            JSONArray archives = json.getJSONArray("archives");
            for (int i = 0; i < archives.length(); ++i) out.archives.add(ConvertedArchive.read(archives.getJSONObject(i)));
            return out;
        }
    }

    private void writeConversion(Conversion conversion) throws IOException, JSONException {
        JSONObject json = new JSONObject();
        json.put("version", 1);
        json.put("format", conversion.format);
        JSONArray archives = new JSONArray();
        for (ConvertedArchive archive : conversion.archives) archives.put(archive.json());
        json.put("archives", archives);
        File target = manifestFile();
        if (!target.getParentFile().isDirectory() && !target.getParentFile().mkdirs()) throw new IOException("Cannot create " + target.getParent());
        File temporary = new File(workDirectory(), "conversion.json.tmp");
        if (!temporary.getParentFile().isDirectory() && !temporary.getParentFile().mkdirs()) throw new IOException("Cannot create " + temporary.getParent());
        try (FileOutputStream out = new FileOutputStream(temporary)) {
            out.write(json.toString(2).getBytes(java.nio.charset.StandardCharsets.UTF_8));
            out.getFD().sync();
        }
        rename(temporary, target);
    }

    private void removeStaleArchives(Set<String> required) throws IOException, JSONException {
        Conversion previous = readConversion();
        if (previous == null) return;
        for (ConvertedArchive archive : previous.archives) {
            if (required.contains(archive.name)) continue;
            File stale = new File(outputDirectory(), archive.name);
            if (stale.exists() && !stale.delete()) throw new IOException("Cannot remove stale " + stale);
        }
    }

    private static String key(String path) { return path.replace('\\', '/').toLowerCase(Locale.ROOT); }

    private static long dxtPayload(byte[] h) {
        if (h.length < 128 || h[0] != 'D' || h[1] != 'D' || h[2] != 'S' || h[3] != ' ') return 0;
        long width = u32(h, 16), height = u32(h, 12), mips = u32(h, 28), fourcc = u32(h, 84), caps2 = u32(h, 112);
        if (width == 0 || height == 0 || width > 16384 || height > 16384 || (caps2 & 0x200000) != 0) return 0;
        long block = fourcc == 0x31545844 ? 8 : (fourcc == 0x33545844 || fourcc == 0x35545844 || fourcc == 0x32545844 || fourcc == 0x34545844) ? 16 : 0;
        if (block == 0) return 0;
        if (mips == 0) mips = 1;
        long total = 0;
        for (long level = 0; level < mips && level < 32; ++level) {
            long w = Math.max(1, width >> level), hgt = Math.max(1, height >> level);
            total += ((w + 3) / 4) * ((hgt + 3) / 4) * block;
        }
        long faces = (caps2 & 0x200) != 0 ? 6 : 1;
        return total * faces;
    }

    private static long u32(byte[] data, int offset) {
        return (data[offset] & 255L) | ((data[offset + 1] & 255L) << 8) | ((data[offset + 2] & 255L) << 16) | ((data[offset + 3] & 255L) << 24);
    }

    private static byte[] readAtMost(InputStream in, int count) throws IOException {
        ByteArrayOutputStream out = new ByteArrayOutputStream(count);
        byte[] buffer = new byte[count];
        while (out.size() < count) {
            int got = in.read(buffer, 0, count - out.size());
            if (got < 0) break;
            out.write(buffer, 0, got);
        }
        return out.toByteArray();
    }

    private static byte[] readAll(InputStream in, long expected) throws IOException {
        if (expected > 256L * 1024 * 1024) throw new IOException("CPK entry is too large");
        ByteArrayOutputStream out = new ByteArrayOutputStream(expected > 0 ? (int) expected : 8192);
        byte[] buffer = new byte[65536];
        int got;
        while ((got = in.read(buffer)) >= 0) {
            if (out.size() > 256 * 1024 * 1024) throw new IOException("CPK entry is too large");
            out.write(buffer, 0, got);
        }
        return out.toByteArray();
    }

    private static ArrayList<CentralEntry> centralEntries(Archive archive) throws IOException {
        byte[] bytes;
        try (InputStream in = open(archive)) { bytes = readAll(in, -1); }
        int eocd = -1;
        for (int pos = bytes.length - 22; pos >= Math.max(0, bytes.length - 22 - 65535); --pos) {
            if (u32(bytes, pos) == 0x06054b50) { eocd = pos; break; }
        }
        if (eocd < 0) throw new IOException("CPK central directory is missing");
        int count = u16(bytes, eocd + 10);
        long offset = u32(bytes, eocd + 16);
        if (count == 0xFFFF || offset == 0xFFFFFFFFL) throw new IOException("ZIP64 CPK is not supported");
        ArrayList<CentralEntry> result = new ArrayList<>(count);
        int pos = (int) offset;
        for (int i = 0; i < count; ++i) {
            if (pos < 0 || pos + 46 > bytes.length || u32(bytes, pos) != 0x02014b50)
                throw new IOException("Invalid CPK central directory");
            int nameLength = u16(bytes, pos + 28), extraLength = u16(bytes, pos + 30), commentLength = u16(bytes, pos + 32);
            int next = pos + 46 + nameLength + extraLength + commentLength;
            if (next > bytes.length) throw new IOException("Invalid CPK central directory entry");
            CentralEntry entry = new CentralEntry();
            entry.name = new String(bytes, pos + 46, nameLength, java.nio.charset.StandardCharsets.UTF_8);
            entry.extra = java.util.Arrays.copyOfRange(bytes, pos + 46 + nameLength, pos + 46 + nameLength + extraLength);
            entry.comment = java.util.Arrays.copyOfRange(bytes, pos + 46 + nameLength + extraLength, next);
            entry.madeBy = u16(bytes, pos + 4);
            entry.needed = u16(bytes, pos + 6);
            entry.method = u16(bytes, pos + 10);
            entry.time = (int) u32(bytes, pos + 12);
            entry.attributes = (int) u32(bytes, pos + 38);
            result.add(entry);
            pos = next;
        }
        return result;
    }

    private static int u16(byte[] data, int offset) {
        return (data[offset] & 255) | ((data[offset + 1] & 255) << 8);
    }

    private static String readText(InputStream in) throws IOException {
        return new String(readAll(in, -1), java.nio.charset.StandardCharsets.UTF_8);
    }

    private static MessageDigest digest() {
        try { return MessageDigest.getInstance("SHA-256"); }
        catch (java.security.NoSuchAlgorithmException e) { throw new AssertionError(e); }
    }

    private static String hex(MessageDigest digest) {
        StringBuilder out = new StringBuilder(64);
        for (byte b : digest.digest()) out.append(String.format(Locale.ROOT, "%02x", b & 255));
        return out.toString();
    }

    private static String sha256(File file) throws IOException {
        MessageDigest digest = digest();
        try (InputStream in = new FileInputStream(file)) {
            byte[] buffer = new byte[65536];
            int got;
            while ((got = in.read(buffer)) >= 0) digest.update(buffer, 0, got);
        }
        return hex(digest);
    }

    private static void rename(File source, File target) throws IOException {
        try { Os.rename(source.getAbsolutePath(), target.getAbsolutePath()); }
        catch (android.system.ErrnoException e) { throw new IOException("Cannot publish " + target, e); }
    }

    private static File userdata() throws IOException {
        return new File("/sdcard/Crashday/userdata");
    }

    private static File manifestFile() throws IOException { return new File(userdata(), "texture-conversion.json"); }
    private static File outputDirectory() throws IOException { return new File(userdata(), "overlay/data"); }
    private static File workDirectory() throws IOException { return new File(userdata(), "texture-work"); }

    private static void deleteTree(File file) {
        if (!file.exists()) return;
        File[] children = file.listFiles();
        if (children != null) for (File child : children) deleteTree(child);
        file.delete();
    }

    private static final class CentralEntry {
        String name;
        byte[] extra, comment;
        int madeBy, needed, method, time, attributes;
    }

    private static final class CpkEntry {
        final byte[] name, localExtra, extra, comment;
        final int madeBy, needed, method, time, crc, compressedSize, size, attributes, offset;

        CpkEntry(ZipEntry source, CentralEntry central, int offset, int crc, int compressedSize, int size) {
            this.name = central.name.getBytes(java.nio.charset.StandardCharsets.UTF_8);
            this.localExtra = source.getExtra() == null ? new byte[0] : source.getExtra();
            this.extra = central.extra;
            this.comment = central.comment;
            this.madeBy = central.madeBy;
            this.needed = central.needed;
            this.method = central.method;
            this.time = central.time;
            this.crc = crc;
            this.compressedSize = compressedSize;
            this.size = size;
            this.attributes = central.attributes;
            this.offset = offset;
        }
    }

    private static final class CpkOutputStream implements java.io.Closeable {
        private final DataOutputStream out;
        private final ArrayList<CpkEntry> entries = new ArrayList<>();
        private boolean finished;
        private int localOffset;

        CpkOutputStream(FileOutputStream file) { out = new DataOutputStream(file); }

        void putNextEntry(ZipEntry source, CentralEntry central, byte[] data) throws IOException {
            if (finished) throw new IOException("CPK is already finished");
            if (source.getMethod() != ZipEntry.STORED && source.getMethod() != ZipEntry.DEFLATED)
                throw new IOException("Unsupported CPK method: " + source.getMethod());
            byte[] encoded = source.getMethod() == ZipEntry.DEFLATED ? deflate(data) : data;
            CRC32 crc32 = new CRC32();
            crc32.update(data);
            CpkEntry entry = new CpkEntry(source, central, localOffset, (int) crc32.getValue(), encoded.length, data.length);
            writeIntLE(0x04034b50);
            writeShortLE(entry.needed);
            writeShortLE(0);
            writeShortLE(entry.method);
            writeIntLE(entry.time);
            writeIntLE(entry.crc);
            writeIntLE(entry.compressedSize);
            writeIntLE(entry.size);
            writeShortLE(entry.name.length);
            writeShortLE(entry.localExtra.length);
            out.write(entry.name);
            out.write(entry.localExtra);
            out.write(encoded);
            localOffset += 30 + entry.name.length + entry.localExtra.length + encoded.length;
            entries.add(entry);
        }

        void closeEntry() { }

        void finish() throws IOException {
            if (finished) return;
            finished = true;
            int centralOffset = localOffset, centralSize = 0;
            for (CpkEntry entry : entries) {
                writeIntLE(0x02014b50);
                writeShortLE(entry.madeBy);
                writeShortLE(entry.needed);
                writeShortLE(0);
                writeShortLE(entry.method);
                writeIntLE(entry.time);
                writeIntLE(entry.crc);
                writeIntLE(entry.compressedSize);
                writeIntLE(entry.size);
                writeShortLE(entry.name.length);
                writeShortLE(entry.extra.length);
                writeShortLE(entry.comment.length);
                writeShortLE(0);
                writeShortLE(0);
                writeIntLE(entry.attributes);
                writeIntLE(entry.offset);
                out.write(entry.name);
                out.write(entry.extra);
                out.write(entry.comment);
                centralSize += 46 + entry.name.length + entry.extra.length + entry.comment.length;
            }
            writeIntLE(0x06054b50);
            writeShortLE(0);
            writeShortLE(0);
            writeShortLE(entries.size());
            writeShortLE(entries.size());
            writeIntLE(centralSize);
            writeIntLE(centralOffset);
            writeShortLE(0);
        }

        @Override public void close() throws IOException {
            finish();
            out.close();
        }

        private void writeIntLE(int value) throws IOException {
            out.writeInt(Integer.reverseBytes(value));
        }

        private void writeShortLE(int value) throws IOException {
            out.writeShort(Short.reverseBytes((short) value));
        }

        private static byte[] deflate(byte[] data) {
            Deflater deflater = new Deflater(Deflater.DEFAULT_COMPRESSION, true);
            try {
                deflater.setInput(data);
                deflater.finish();
                ByteArrayOutputStream out = new ByteArrayOutputStream(Math.max(64, data.length / 2));
                byte[] buffer = new byte[65536];
                while (!deflater.finished()) out.write(buffer, 0, deflater.deflate(buffer));
                return out.toByteArray();
            } finally {
                deflater.end();
            }
        }
    }
}
