package org.crashday.port;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;

/** The launcher process survives the native game's process-wide state. */
public final class RestartActivity extends Activity {
    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        Intent next = new Intent(getIntent()).setClass(this, GameActivity.class)
            .addFlags(Intent.FLAG_ACTIVITY_NEW_TASK | Intent.FLAG_ACTIVITY_CLEAR_TASK);
        int previous = next.getIntExtra("restartPid", 0);
        next.removeExtra("restartPid");
        if (previous > 0 && previous != android.os.Process.myPid()) android.os.Process.killProcess(previous);
        new Handler().postDelayed(() -> { startActivity(next); finish(); }, 250);
    }
}
