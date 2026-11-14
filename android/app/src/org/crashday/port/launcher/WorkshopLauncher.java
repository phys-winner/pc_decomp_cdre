package org.crashday.port.launcher;

import android.app.Activity;
import android.content.Intent;
import android.widget.LinearLayout;
import android.widget.TextView;
import org.crashday.port.PortText;

/** The Workshop entry uses the same theme and process as the launcher. */
public final class WorkshopLauncher {
    private WorkshopLauncher() { }

    public static void add(Activity activity, LinearLayout parent) {
        Ui ui = new Ui(activity);
        String language = GameOptions.language(activity);
        LinearLayout card = ui.card(parent);
        card.addView(ui.heading("Steam Workshop"));
        TextView title = ui.label(PortText.get(language, "More cars. More tracks.", "Больше машин. Больше трасс."), 21, ui.text);
        title.setTypeface(ui.bold);
        card.addView(title);
        card.addView(ui.label(PortText.get(language, "Discover mods, download them and build your own collection for the next race.",
            "Находите новые моды, скачивайте и собирайте свой набор для следующей гонки."), 14, ui.muted));
        TextView counts = new TextView(activity) {
            private void refreshCounts() {
                try {
                    WorkshopStore store = WorkshopStore.get(activity);
                    int installed = 0, active = 0;
                    for (WorkshopStore.Entry entry : store.entries()) if (entry.installed) {
                        ++installed; if (entry.enabled && !store.disabled()) ++active;
                    }
                    setText(active + "/" + installed + PortText.get(GameOptions.language(activity), " mods active", " модов включено"));
                } catch (java.io.IOException error) { setText(error.getMessage()); }
            }
            @Override protected void onAttachedToWindow() { super.onAttachedToWindow(); refreshCounts(); }
            @Override public void onWindowFocusChanged(boolean focused) {
                super.onWindowFocusChanged(focused); if (focused) refreshCounts();
            }
        };
        counts.setTextColor(ui.muted); counts.setTextSize(14); card.addView(counts);
        card.addView(ui.buttons(ui.button(PortText.get(language, "Open Workshop", "Открыть мастерскую"), Ui.SECONDARY,
            () -> activity.startActivity(new Intent(activity, WorkshopActivity.class)))));
    }
}
