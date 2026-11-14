package org.crashday.port.launcher;

import android.content.Context;

/** Share the game's language with the launcher using its atomic cross-process storage. */
public final class GameOptions {
    private GameOptions() { }
    public static boolean setLanguage(Context context, String value) {
        return State.put(context, State.CHOICES, "option.game_language", value);
    }
    public static String language(Context context) {
        return State.read(context, State.CHOICES).getProperty("option.game_language", "system");
    }
}
