package org.crashday.port;

import android.content.Context;
import java.util.HashMap;
import java.util.Map;
import org.crashday.port.launcher.Launch;
import org.crashday.port.launcher.PortHooks;

public final class LauncherHooks implements PortHooks {
    @Override public void migrate(Context context) {
        CrashdayTextureBackend.initialize(context.getApplicationContext());
        Map<String, String> previous = new HashMap<>();
        previous.put("part.crashday.game", "/sdcard/Crashday/game");
        String language = context.getSharedPreferences("port", Context.MODE_PRIVATE).getString("language", null);
        if (language != null) previous.put("option.game_language", GameLanguage.validate(language));
        Launch.adopt(context, previous);
    }
}
