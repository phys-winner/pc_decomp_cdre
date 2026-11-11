package org.crashday.port;

import android.content.Context;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.StandardCopyOption;
import java.util.UUID;

final class ProfileStorage {
    private static final File ROOT = new File("/sdcard/Crashday");

    static String profileName(Context context) {
        String profile = context instanceof android.app.Activity
            ? ((android.app.Activity) context).getIntent().getStringExtra("userdata") : null;
        return profile != null && profile.matches("userdata-[A-Za-z0-9_]+") ? profile : "userdata";
    }

    static File profile(Context context) {
        return new File(ROOT, profileName(context));
    }

    static String validPlayerName(String text) {
        for (int i = 0; i < text.length();) {
            int point = text.codePointAt(i);
            if (Character.isISOControl(point) || Character.getType(point) == Character.FORMAT ||
                Character.getType(point) == Character.LINE_SEPARATOR || Character.getType(point) == Character.PARAGRAPH_SEPARATOR ||
                point >= 0xD800 && point <= 0xDFFF) return null;
            i += Character.charCount(point);
        }
        String value = text.trim();
        if (value.isEmpty() || value.codePointCount(0, value.length()) > 32 ||
            value.getBytes(java.nio.charset.StandardCharsets.UTF_8).length > 63) return null;
        return value;
    }

    static String playerName(Context context) throws IOException {
        File file = new File(profile(context), "player-name");
        if (!file.exists()) return "";
        if (file.length() > 63) throw new IOException("Invalid player name size");
        String value = java.nio.charset.StandardCharsets.UTF_8.newDecoder()
            .decode(java.nio.ByteBuffer.wrap(Files.readAllBytes(file.toPath()))).toString();
        if (validPlayerName(value) == null) throw new IOException("Invalid player name");
        return value;
    }

    static void savePlayerName(Context context, String value) throws IOException {
        value = validPlayerName(value);
        if (value == null) throw new IOException("Invalid player name");
        File directory = profile(context);
        File temporary = File.createTempFile("player-name-", ".tmp", directory);
        try {
            try (FileOutputStream stream = new FileOutputStream(temporary)) {
                stream.write(value.getBytes(java.nio.charset.StandardCharsets.UTF_8));
                stream.getFD().sync();
            }
            Files.move(temporary.toPath(), new File(directory, "player-name").toPath(),
                StandardCopyOption.ATOMIC_MOVE, StandardCopyOption.REPLACE_EXISTING);
        } finally { temporary.delete(); }
    }

    static int migrate(Context context) throws IOException {
        String name = profileName(context);
        File destination = profile(context);
        if (!destination.isDirectory() && !destination.mkdirs())
            throw new IOException("Cannot create profile directory");
        File external = context.getExternalFilesDir(null);
        File source = external == null ? null : new File(external, name);
        if (source == null || !source.isDirectory()) return 0;
        int copied = copyMissing(source, source, destination);
        android.util.Log.i("Crashday", "Profile " + name + ": copied " + copied + " missing files; legacy data retained");
        return copied;
    }

    private static int copyMissing(File root, File source, File destination) throws IOException {
        File[] children = source.listFiles();
        if (children == null) throw new IOException("Cannot read legacy profile");
        int copied = 0;
        for (File child : children) {
            File target = new File(destination, child.getName());
            if (child.isDirectory()) {
                if (target.exists() && !target.isDirectory()) continue;
                if (!target.isDirectory() && !target.mkdirs()) throw new IOException("Cannot create migrated directory");
                copied += copyMissing(root, child, target);
                continue;
            }
            if (target.exists()) continue;
            File temporary = new File(destination, child.getName() + ".migrate-" + UUID.randomUUID());
            copyFile(child, temporary);
            Files.move(temporary.toPath(), target.toPath(), StandardCopyOption.ATOMIC_MOVE);
            ++copied;
        }
        return copied;
    }

    private static void copyFile(File source, File destination) throws IOException {
        byte[] buffer = new byte[65536];
        try (FileInputStream in = new FileInputStream(source);
             FileOutputStream out = new FileOutputStream(destination)) {
            for (int read; (read = in.read(buffer)) >= 0; ) out.write(buffer, 0, read);
            out.getFD().sync();
        }
    }
}
