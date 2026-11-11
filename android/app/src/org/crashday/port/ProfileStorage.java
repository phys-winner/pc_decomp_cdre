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
