package org.crashday.port.launcher;

import android.app.Activity;
import android.content.Intent;
import android.widget.LinearLayout;
import android.widget.TextView;

/** The Workshop entry uses the same theme and process as the launcher. */
public final class WorkshopLauncher {
    private WorkshopLauncher() { }

    public static void add(Activity activity, LinearLayout parent) {
        Ui ui = new Ui(activity);
        boolean ru = "ru".equals(Texts.language(activity));
        LinearLayout card = ui.card(parent);
        card.addView(ui.heading("Steam Workshop"));
        TextView title = ui.label(ru ? "Больше машин. Больше трасс." : "More cars. More tracks.", 21, ui.text);
        title.setTypeface(ui.bold);
        card.addView(title);
        card.addView(ui.label(ru
            ? "Находите новые моды, скачивайте и собирайте свой набор для следующей гонки."
            : "Discover mods, download them and build your own collection for the next race.", 14, ui.muted));
        card.addView(ui.buttons(ui.button(ru ? "Открыть мастерскую" : "Open Workshop", Ui.SECONDARY,
            () -> activity.startActivity(new Intent(activity, WorkshopActivity.class)))));
    }
}
