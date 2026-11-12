package org.crashday.port;

import android.app.Activity;
import android.content.Context;
import android.widget.LinearLayout;
import java.util.HashMap;
import java.util.Map;
import org.crashday.port.launcher.Launch;
import org.crashday.port.launcher.PortHooks;
import org.crashday.port.launcher.WorkshopLauncher;

public final class LauncherHooks implements PortHooks {
    @Override public void addLauncherActions(Activity activity, LinearLayout parent) {
        WorkshopLauncher.add(activity, parent);
    }

    @Override public void migrate(Context context) {
        CrashdayTextureBackend.initialize(context.getApplicationContext());
        Map<String, String> previous = new HashMap<>();
        previous.put("part.crashday.game", "/sdcard/Crashday/game");
        String language = context.getSharedPreferences("port", Context.MODE_PRIVATE).getString("language", null);
        if (language != null) previous.put("option.game_language", GameLanguage.validate(language));
        Launch.adopt(context, previous);
    }
}
