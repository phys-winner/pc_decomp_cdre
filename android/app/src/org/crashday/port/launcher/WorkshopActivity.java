package org.crashday.port.launcher;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.drawable.GradientDrawable;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.text.InputType;
import android.text.TextUtils;
import android.util.LruCache;
import android.view.Gravity;
import android.view.View;
import android.view.inputmethod.EditorInfo;
import android.view.inputmethod.InputMethodManager;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.HorizontalScrollView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.Toast;
import java.io.IOException;
import java.text.DateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import org.crashday.port.PortText;

/** Native Workshop browsing and the installed mod order share the launcher's theme and process. */
public final class WorkshopActivity extends Activity {
    private final Handler handler = new Handler(Looper.getMainLooper());
    private final ExecutorService remote = Executors.newFixedThreadPool(3);
    private final ExecutorService changes = Executors.newSingleThreadExecutor();
    private final ThreadPoolExecutor thumbnails = new ThreadPoolExecutor(2, 2, 0L, TimeUnit.MILLISECONDS,
        new ArrayBlockingQueue<>(48), new ThreadPoolExecutor.DiscardOldestPolicy());
    private final Map<String, TextView> catalogActions = new HashMap<>();
    private final LruCache<String, Bitmap> images = new LruCache<String, Bitmap>(8 * 1024 * 1024) {
        @Override protected int sizeOf(String key, Bitmap bitmap) { return bitmap.getAllocationByteCount(); }
    };
    private Ui ui;
    private WorkshopStore store;
    private LinearLayout body, tabs;
    private ScrollView scroll;
    private TextView health, summary;
    private EditText search;
    private WorkshopApi.Page catalog;
    private List<WorkshopStore.Entry> entries = new ArrayList<>();
    private String query = "", category = "", sort = "trend", catalogError = "", snapshot = "", tabsSnapshot = "";
    private int tab, page = 1;
    private final int[] tabScroll = new int[3];
    private int bodyGeneration;
    private int cardColumns = 1;
    private volatile int generation;
    private boolean loading, visible, probing, available;
    private volatile boolean dead;
    private long lastProbe;
    private Object backCallback;
    private AlertDialog shownDialog;
    private String detailId = "";
    private String language;

    @Override protected void onCreate(Bundle state) {
        super.onCreate(state);
        language = GameOptions.language(this);
        ui = new Ui(this);
        if (state != null) {
            query = state.getString("query", ""); category = state.getString("category", "");
            sort = state.getString("sort", "trend"); page = state.getInt("page", 1); tab = state.getInt("tab", 0);
            tab = Math.max(0, Math.min(2, tab));
            int[] positions = state.getIntArray("tabScroll");
            if (positions != null && positions.length == tabScroll.length)
                System.arraycopy(positions, 0, tabScroll, 0, tabScroll.length);
        }
        try { store = WorkshopStore.get(this); }
        catch (Exception error) {
            show(ui.dialog().setTitle(word("Cannot open mods", "Не удалось открыть моды"))
                .setMessage(message(error)).setPositiveButton("OK", (dialog, which) -> finish())
                .setOnCancelListener(dialog -> finish()));
            return;
        }
        int restoredScroll = tabScroll[tab];
        build();
        tabScroll[tab] = restoredScroll;
        renderBodyAt(restoredScroll);
        if (Build.VERSION.SDK_INT >= 33) {
            android.window.OnBackInvokedCallback callback = this::finish;
            backCallback = callback;
            getOnBackInvokedDispatcher().registerOnBackInvokedCallback(0, callback);
        }
        loadCatalog(false);
        probe();
        String restoredDetails = state == null ? "" : state.getString("details", "");
        if (!restoredDetails.isEmpty()) resolveLink(restoredDetails);
    }

    @Override protected void onResume() {
        super.onResume();
        visible = true;
        if (store == null || body == null) return;
        try { store.kick(); } catch (Exception error) { toast(message(error)); }
        if (System.currentTimeMillis() - lastProbe > 60_000) probe();
        handler.removeCallbacks(watch);
        handler.post(watch);
    }

    @Override protected void onPause() {
        visible = false;
        handler.removeCallbacks(watch);
        super.onPause();
    }

    @Override protected void onSaveInstanceState(Bundle state) {
        super.onSaveInstanceState(state);
        state.putString("query", search != null ? search.getText().toString() : query);
        state.putString("category", category); state.putString("sort", sort);
        state.putInt("page", page); state.putInt("tab", tab);
        if (scroll != null) tabScroll[tab] = scroll.getScrollY();
        state.putIntArray("tabScroll", tabScroll);
        if (shownDialog != null && shownDialog.isShowing()) state.putString("details", detailId);
    }

    @Override protected void onDestroy() {
        dead = true;
        if (shownDialog != null) shownDialog.dismiss();
        handler.removeCallbacksAndMessages(null);
        remote.shutdownNow(); changes.shutdown(); thumbnails.shutdownNow(); images.evictAll();
        if (Build.VERSION.SDK_INT >= 33 && backCallback != null)
            getOnBackInvokedDispatcher().unregisterOnBackInvokedCallback((android.window.OnBackInvokedCallback) backCallback);
        super.onDestroy();
    }

    private String word(String english, String russian) { return PortText.get(language, english, russian); }

    private void build() {
        LinearLayout root = column();
        root.setPadding(ui.dp(16), ui.dp(8), ui.dp(16), ui.dp(8));
        cardColumns = columnsFor(Math.min(1280, getResources().getConfiguration().screenWidthDp) - 32);
        root.addOnLayoutChangeListener((view, left, top, right, bottom, oldLeft, oldTop, oldRight, oldBottom) -> {
            int next = columnsFor(Math.round((right - left) / getResources().getDisplayMetrics().density) - 32);
            if (next != cardColumns && body != null) { cardColumns = next; renderBody(false); }
        });
        LinearLayout heading = row();
        TextView back = button("‹", Ui.QUIET, this::finish);
        back.setTextSize(32);
        back.setContentDescription(word("Back to launcher", "Назад в лаунчер"));
        heading.addView(back, new LinearLayout.LayoutParams(ui.dp(48), ui.dp(52)));
        LinearLayout title = column();
        TextView name = ui.label("Workshop", 25, ui.text); name.setTypeface(ui.titleFont);
        title.addView(name);
        summary = ui.label(word("CRASHDAY COMMUNITY", "СООБЩЕСТВО CRASHDAY"), 11, ui.muted);
        summary.setLetterSpacing(.05f); summary.setMaxLines(1); summary.setEllipsize(TextUtils.TruncateAt.END); title.addView(summary);
        heading.addView(title, new LinearLayout.LayoutParams(0, -2, 1));
        health = ui.label(word("● Checking API", "● Проверка API"), 12, ui.muted);
        health.setGravity(Gravity.CENTER); health.setPadding(ui.dp(10), ui.dp(6), ui.dp(10), ui.dp(6));
        health.setMinimumHeight(ui.dp(48)); health.setFocusable(true);
        health.setOnClickListener(view -> probe());
        heading.addView(health, new LinearLayout.LayoutParams(-2, -2));
        root.addView(heading);
        tabs = row();
        LinearLayout.LayoutParams tabParams = new LinearLayout.LayoutParams(-1, -2); tabParams.topMargin = ui.dp(8);
        root.addView(tabs, tabParams);
        scroll = new ScrollView(this); scroll.setFillViewport(true); scroll.setClipToPadding(false);
        body = column(); body.setPadding(0, 0, 0, ui.dp(12)); scroll.addView(body);
        root.addView(scroll, new LinearLayout.LayoutParams(-1, 0, 1));
        FrameLayout surface = new FrameLayout(this); surface.setBackground(ui.backdrop());
        int maximum = ui.dp(1280);
        int width = getResources().getDisplayMetrics().widthPixels > maximum ? maximum : -1;
        surface.addView(root, new FrameLayout.LayoutParams(width, -1, Gravity.TOP | Gravity.CENTER_HORIZONTAL));
        setContentView(surface); ui.edgeToEdge(surface);
        refreshEntries(true);
    }

    private int columnsFor(int widthDp) { return Math.max(1, Math.min(3, widthDp / 360)); }
    private boolean tablet() { return getResources().getConfiguration().smallestScreenWidthDp >= 600; }

    private void addCards(List<View> cards, int columns) {
        if (columns == 1) { for (View card : cards) body.addView(card); return; }
        for (int start = 0; start < cards.size(); start += columns) {
            LinearLayout line = row(); line.setGravity(Gravity.TOP); body.addView(line);
            for (int column = 0; column < columns; ++column) {
                LinearLayout.LayoutParams params = new LinearLayout.LayoutParams(0, -2, 1);
                params.topMargin = ui.dp(12); if (column > 0) params.leftMargin = ui.dp(12);
                line.addView(start + column < cards.size() ? cards.get(start + column) : new View(this), params);
            }
        }
    }

    private LinearLayout column() { LinearLayout view = new LinearLayout(this); view.setOrientation(LinearLayout.VERTICAL); return view; }
    private LinearLayout row() { LinearLayout view = new LinearLayout(this); view.setOrientation(LinearLayout.HORIZONTAL); view.setGravity(Gravity.CENTER_VERTICAL); return view; }

    private TextView button(String title, int kind, Runnable action) {
        TextView view = ui.button(title, kind, action); view.setMinHeight(ui.dp(48)); return view;
    }

    private TextView smallButton(String title, String description, Runnable action) {
        TextView view = button(title, Ui.SECONDARY, action); view.setTextSize(15); view.setContentDescription(description); return view;
    }

    private final Runnable watch = new Runnable() {
        @Override public void run() {
            if (!visible || dead) return;
            try { store.kick(); } catch (Exception error) { toast(message(error)); }
            refreshEntries(false);
            if (System.currentTimeMillis() - lastProbe > 60_000) probe();
            handler.postDelayed(this, 650);
        }
    };

    private void refreshEntries(boolean force) {
        try {
            List<WorkshopStore.Entry> fresh = store.entries();
            StringBuilder key = new StringBuilder().append(store.disabled()).append(store.development());
            for (WorkshopStore.Entry entry : fresh) key.append('|').append(entry.item.id).append(':').append(entry.enabled)
                .append(':').append(entry.installed).append(':').append(entry.status).append(':').append(entry.done)
                .append(':').append(entry.total).append(':').append(entry.error).append(':').append(entry.item.updated);
            if (!force && snapshot.equals(key.toString())) return;
            snapshot = key.toString(); entries = fresh;
            int installed = 0, enabled = 0;
            for (WorkshopStore.Entry entry : entries) if (entry.installed) { ++installed; if (entry.enabled && !store.disabled()) ++enabled; }
            summary.setText(word("CRASHDAY  ·  ", "CRASHDAY  ·  ") + enabled + "/" + installed
                + word(" mods active", " модов включено"));
            renderTabs();
            if (force || tab != 0) renderBody(false);
            else updateCatalogActions();
        } catch (Exception error) { toast(message(error)); }
    }

    private void renderTabs() {
        int installed = 0, queued = 0;
        for (WorkshopStore.Entry entry : entries) { if (entry.installed) ++installed; if (pending(entry)) ++queued; }
        String nextSnapshot = tab + ":" + installed + ":" + queued;
        if (nextSnapshot.equals(tabsSnapshot)) return;
        tabsSnapshot = nextSnapshot; tabs.removeAllViews();
        String[] names = {word("Explore", "Каталог"), word("Installed", "Установлено") + " " + installed,
            word("Downloads", "Загрузки") + (queued == 0 ? "" : " " + queued)};
        for (int index = 0; index < names.length; ++index) {
            final int next = index;
            TextView choice = button(names[index], tab == index ? Ui.PRIMARY : Ui.QUIET, () -> {
                selectTab(next);
            });
            choice.setTextSize(13); choice.setPadding(ui.dp(6), ui.dp(8), ui.dp(6), ui.dp(8));
            choice.setSelected(tab == index);
            LinearLayout.LayoutParams params = new LinearLayout.LayoutParams(0, ui.dp(48), 1);
            if (index > 0) params.leftMargin = ui.dp(5);
            tabs.addView(choice, params);
        }
    }

    private void renderBody(boolean top) {
        int previousScroll = top ? 0 : scroll.getScrollY();
        tabScroll[tab] = previousScroll;
        renderBodyAt(previousScroll);
    }

    private void selectTab(int next) {
        if (next == tab) return;
        tabScroll[tab] = scroll.getScrollY();
        if (search != null) query = search.getText().toString().trim();
        hideKeyboard(); tab = next; renderTabs(); renderBodyAt(tabScroll[tab]);
    }

    private void renderBodyAt(int position) {
        int token = ++bodyGeneration;
        if (search != null) query = search.getText().toString().trim();
        body.removeAllViews(); catalogActions.clear(); search = null;
        if (tab == 0) renderCatalog(); else if (tab == 1) renderInstalled(); else renderDownloads();
        scroll.post(() -> { if (!dead && token == bodyGeneration) scroll.scrollTo(0, position); });
    }

    private void renderCatalog() {
        LinearLayout tools = ui.card(body);
        LinearLayout searchRow = row();
        search = input(word("Search cars, tracks, mods…", "Поиск машин, трасс, модов…"), query);
        search.setSingleLine(true); search.setImeOptions(EditorInfo.IME_ACTION_SEARCH);
        search.setOnEditorActionListener((view, action, event) -> { submitSearch(); return true; });
        searchRow.addView(search, new LinearLayout.LayoutParams(0, ui.dp(50), 1));
        TextView find = button(word("Search", "Найти"), Ui.SECONDARY, this::submitSearch);
        LinearLayout.LayoutParams findParams = new LinearLayout.LayoutParams(-2, ui.dp(50)); findParams.leftMargin = ui.dp(8);
        searchRow.addView(find, findParams); tools.addView(searchRow);
        HorizontalScrollView filters = new HorizontalScrollView(this); filters.setHorizontalScrollBarEnabled(false);
        LinearLayout chips = row(); chips.setPadding(0, ui.dp(6), 0, ui.dp(4));
        addCategory(chips, "", word("All", "Все"));
        if (catalog != null) for (String tag : catalog.categories) addCategory(chips, tag, categoryName(tag));
        filters.addView(chips); tools.addView(filters);
        LinearLayout options = row();
        TextView sorting = button(sortName() + "  ▾", Ui.QUIET, this::chooseSort); sorting.setTextSize(13);
        options.addView(sorting, new LinearLayout.LayoutParams(0, ui.dp(48), 1));
        TextView link = button(word("Add by link", "По ссылке"), Ui.QUIET, this::addByLink); link.setTextSize(13);
        options.addView(link, new LinearLayout.LayoutParams(0, ui.dp(48), 1)); tools.addView(options);

        if (loading) {
            LinearLayout waiting = ui.card(body);
            ProgressBar bar = ui.progress(); bar.setIndeterminate(true); waiting.addView(bar, new LinearLayout.LayoutParams(-1, ui.dp(5)));
            waiting.addView(ui.label(word("Finding your next favourite mod…", "Ищем моды для следующего заезда…"), 14, ui.muted));
        }
        if (!catalogError.isEmpty()) {
            LinearLayout failure = ui.card(body);
            failure.addView(ui.label(word("Workshop did not respond", "Workshop не ответил"), 17, ui.text));
            failure.addView(ui.label(catalogError, 13, ui.muted));
            failure.addView(ui.buttons(button(word("Try again", "Повторить"), Ui.SECONDARY, this::loadCatalog),
                button(word("Open Steam", "Открыть Steam"), Ui.QUIET, () -> open("https://steamcommunity.com/app/508980/workshop/"))));
        }
        if (catalog == null || loading) return;
        TextView count = ui.label(catalog.total + word(" community creations", " работ сообщества"), 13, ui.muted);
        count.setPadding(ui.dp(4), ui.dp(14), 0, 0); body.addView(count);
        if (catalog.items.isEmpty()) {
            empty(word("Nothing here yet", "Ничего не найдено"), word("Try a different category or a shorter search.", "Попробуй другую категорию или более короткий запрос."));
            return;
        }
        List<View> cards = new ArrayList<>();
        for (WorkshopItem item : catalog.items) cards.add(catalogCard(item));
        addCards(cards, cardColumns);
        LinearLayout navigation = row();
        TextView previous = button(word("Previous", "Назад"), Ui.SECONDARY, () -> { if (page > 1) { --page; loadCatalog(); } });
        Ui.enable(previous, page > 1);
        navigation.addView(previous, new LinearLayout.LayoutParams(0, ui.dp(48), 1));
        TextView number = ui.label(page + " / " + Math.max(page, catalog.pages), 13, ui.muted); number.setGravity(Gravity.CENTER);
        navigation.addView(number, new LinearLayout.LayoutParams(ui.dp(74), ui.dp(48)));
        TextView next = button(word("Next", "Далее"), Ui.SECONDARY, () -> { ++page; loadCatalog(); });
        Ui.enable(next, catalog.hasMore()); navigation.addView(next, new LinearLayout.LayoutParams(0, ui.dp(48), 1));
        LinearLayout.LayoutParams navigationParams = new LinearLayout.LayoutParams(-1, -2); navigationParams.topMargin = ui.dp(16);
        body.addView(navigation, navigationParams);
    }

    private void addCategory(LinearLayout parent, String tag, String title) {
        TextView chip = button(title, category.equals(tag) ? Ui.PRIMARY : Ui.QUIET, () -> {
            if (search != null) query = search.getText().toString().trim();
            category = tag; page = 1; hideKeyboard(); loadCatalog();
        });
        chip.setTextSize(13); chip.setSelected(category.equals(tag));
        LinearLayout.LayoutParams params = new LinearLayout.LayoutParams(-2, ui.dp(48)); params.rightMargin = ui.dp(5); parent.addView(chip, params);
    }

    private View catalogCard(WorkshopItem item) {
        LinearLayout card = ui.card(null); card.setPadding(ui.dp(12), ui.dp(12), ui.dp(12), ui.dp(12));
        LinearLayout content = row(); content.setGravity(Gravity.TOP);
        boolean large = tablet();
        if (large) content.setOrientation(LinearLayout.VERTICAL);
        FrameLayout preview = preview(item, ui.dp(large ? 180 : 96), false);
        preview.setOnClickListener(view -> details(item)); preview.setFocusable(true);
        preview.setContentDescription(word("Details: ", "Подробнее: ") + item.title);
        content.addView(preview, new LinearLayout.LayoutParams(large ? -1 : ui.dp(cardColumns > 1 ? 96 : 108), ui.dp(large ? 180 : 96)));
        LinearLayout words = column();
        TextView title = ui.label(item.title, 17, ui.text); title.setTypeface(ui.bold); title.setMaxLines(2); title.setEllipsize(TextUtils.TruncateAt.END);
        title.setFocusable(true); title.setOnClickListener(view -> details(item)); words.addView(title);
        TextView tags = ui.label(tags(item), 12, categoryColor(item)); tags.setMaxLines(2); words.addView(tags);
        words.addView(ui.label(item.size > 0 ? Texts.size(this, item.size) : "Workshop", 12, ui.muted));
        LinearLayout.LayoutParams wordsParams = large ? new LinearLayout.LayoutParams(-1, -2) : new LinearLayout.LayoutParams(0, -2, 1);
        if (large) wordsParams.topMargin = ui.dp(8); else wordsParams.leftMargin = ui.dp(12);
        content.addView(words, wordsParams); card.addView(content);
        TextView action = button(actionName(item), Ui.SECONDARY, () -> installOrShow(item)); action.setTextSize(14);
        catalogActions.put(item.id, action);
        card.addView(ui.buttons(button(word("Details", "Подробнее"), Ui.QUIET, () -> details(item)), action));
        return card;
    }

    private void updateCatalogActions() {
        if (catalog == null) return;
        for (WorkshopItem item : catalog.items) {
            TextView action = catalogActions.get(item.id); if (action != null) action.setText(actionName(item));
        }
    }

    private String actionName(WorkshopItem item) {
        WorkshopStore.Entry entry = entry(item.id);
        if (entry != null && pending(entry)) return word("In downloads", "В загрузках");
        if (entry != null && entry.installed) return item.updated > entry.installedUpdated ? word("Update", "Обновить") : word("Installed", "Установлен");
        if (entry != null && "failed".equals(entry.status)) return word("Retry", "Повторить");
        return word("Download", "Скачать");
    }

    private void submitSearch() {
        query = search == null ? query : search.getText().toString().trim(); hideKeyboard();
        if (query.matches("[0-9]{5,20}") || query.contains("steamcommunity.com/")) { resolveLink(query); return; }
        page = 1; loadCatalog();
    }

    private void loadCatalog() {
        loadCatalog(true);
    }

    private void loadCatalog(boolean resetPosition) {
        if (search != null) query = search.getText().toString().trim();
        final int request = ++generation, requestedPage = page;
        final String requestedQuery = query, requestedCategory = category, requestedSort = sort;
        thumbnails.getQueue().clear();
        loading = true; catalogError = "";
        if (resetPosition) tabScroll[0] = 0;
        if (body != null && tab == 0) renderBodyAt(tabScroll[0]);
        remote.execute(() -> {
            try {
                WorkshopApi.Page found = WorkshopApi.browse(requestedQuery, requestedCategory, requestedSort, requestedPage);
                handler.post(() -> {
                    if (dead || request != generation) return;
                    catalog = found; page = found.page; loading = false;
                    if (tab == 0) renderBodyAt(tabScroll[0]);
                });
            } catch (Exception error) {
                handler.post(() -> {
                    if (dead || request != generation) return;
                    loading = false; catalogError = message(error);
                    if (tab == 0) renderBodyAt(tabScroll[0]);
                });
            }
        });
    }

    private void chooseSort() {
        if (search != null) query = search.getText().toString().trim();
        String[] values = {"trend", "mostrecent", "totaluniquesubscribers"};
        String[] titles = {word("Trending", "Популярное сейчас"), word("Newest", "Сначала новые"), word("Most subscribed", "Больше всего подписок")};
        int selected = 0; for (int index = 0; index < values.length; ++index) if (values[index].equals(sort)) selected = index;
        show(ui.dialog().setTitle(word("Sort Workshop", "Сортировка Workshop")).setSingleChoiceItems(titles, selected, (dialog, which) -> {
            sort = values[which]; page = 1; dialog.dismiss(); hideKeyboard(); loadCatalog();
        }).setNegativeButton(word("Cancel", "Отмена"), null));
    }

    private String sortName() {
        if ("mostrecent".equals(sort)) return word("Newest", "Сначала новые");
        if ("totaluniquesubscribers".equals(sort)) return word("Most subscribed", "Больше подписок");
        return word("Trending", "Популярное сейчас");
    }

    private void addByLink() {
        EditText link = input(word("Workshop link or item ID", "Ссылка Workshop или ID материала"), "");
        link.setInputType(InputType.TYPE_CLASS_TEXT | InputType.TYPE_TEXT_VARIATION_URI);
        LinearLayout content = column(); content.setPadding(ui.dp(20), ui.dp(8), ui.dp(20), 0); content.addView(link);
        AlertDialog dialog = show(ui.dialog().setTitle(word("Add from Steam", "Добавить из Steam")).setView(content)
            .setPositiveButton(word("Find", "Найти"), null).setNegativeButton(word("Cancel", "Отмена"), null));
        dialog.getButton(AlertDialog.BUTTON_POSITIVE).setOnClickListener(view -> {
            String value = link.getText().toString().trim();
            try { WorkshopApi.extractId(value); }
            catch (Exception error) { link.setError(word("Enter a Crashday Workshop link or numeric ID", "Введи ссылку Workshop или числовой ID")); return; }
            dialog.dismiss(); resolveLink(value);
        });
    }

    private void resolveLink(String value) {
        toast(word("Reading item details…", "Получаем информацию о моде…"));
        remote.execute(() -> {
            try {
                WorkshopItem found = WorkshopApi.details(WorkshopApi.extractId(value));
                handler.post(() -> { if (!dead) details(found); });
            } catch (Exception error) { handler.post(() -> { if (!dead) toast(message(error)); }); }
        });
    }

    private void renderInstalled() {
        LinearLayout controls = ui.card(body);
        controls.addView(ui.toggle(word("Workshop mods enabled", "Моды Workshop включены"),
            word("Changes apply after a complete restart of the game", "Изменения применятся после полного перезапуска игры"), !store.disabled(),
            enabled -> change(() -> store.setDisabled(!enabled))));
        controls.addView(ui.buttons(button(word("Enable all", "Включить все"), Ui.SECONDARY, () -> change(() -> store.setAllEnabled(true))),
            button(word("Disable all", "Выключить все"), Ui.QUIET, () -> change(() -> store.setAllEnabled(false)))));
        TextView deleteAll = button(word("Delete all", "Удалить всё"), Ui.QUIET, () ->
            show(ui.dialog().setTitle(word("Delete all downloaded mods?", "Удалить все скачанные моды?"))
                .setMessage(word("All downloaded mods will be removed. Their current updates will be cancelled.",
                    "Все скачанные моды будут удалены. Их текущие обновления будут отменены."))
                .setNegativeButton(word("Cancel", "Отмена"), null)
                .setPositiveButton(word("Delete all", "Удалить всё"), (dialog, which) -> change(store::removeAllInstalled))));
        boolean hasInstalled = false;
        for (WorkshopStore.Entry entry : entries) if (entry.installed) { hasInstalled = true; break; }
        Ui.enable(deleteAll, hasInstalled); controls.addView(deleteAll);
        TextView more = button(word("Local mod options  ▾", "Параметры локальных модов  ▾"), Ui.QUIET, this::localOptions);
        more.setTextSize(13); controls.addView(more);
        int count = 0;
        for (WorkshopStore.Entry entry : entries) if (entry.installed) ++count;
        if (count == 0) {
            empty(word("Your garage is waiting", "Гараж ждёт пополнения"),
                word("Download a car, track or mod from Explore. Installed items stay available offline.",
                    "Скачай машину, трассу или мод в каталоге. Установленные материалы доступны без интернета."));
            body.addView(button(word("Explore Workshop", "Открыть каталог"), Ui.PRIMARY, () -> selectTab(0)));
            return;
        }
        TextView hint = ui.label(word("LOAD ORDER  ·  Earlier items load first", "ПОРЯДОК  ·  Верхние материалы загружаются первыми"), 11, ui.muted);
        hint.setPadding(ui.dp(4), ui.dp(16), 0, 0); body.addView(hint);
        int index = 0;
        List<View> cards = new ArrayList<>();
        for (WorkshopStore.Entry entry : entries) if (entry.installed) {
            final WorkshopItem item = entry.item;
            LinearLayout card = ui.card(null);
            LinearLayout title = row();
            TextView order = ui.label(String.format(Locale.ROOT, "%02d", ++index), 20, ui.accent); order.setTypeface(ui.bold);
            title.addView(order, new LinearLayout.LayoutParams(ui.dp(42), -2));
            TextView name = ui.label(item.title, 17, ui.text); name.setTypeface(ui.bold); name.setMaxLines(2);
            title.addView(name, new LinearLayout.LayoutParams(0, -2, 1)); card.addView(title);
            card.addView(ui.label(tags(item) + "  ·  " + Texts.size(this, item.size), 12, categoryColor(item)));
            card.addView(ui.toggle(word("Enabled", "Включён"), store.disabled() ? word("All Workshop mods are currently disabled", "Все моды Workshop сейчас отключены") : null,
                entry.enabled, enabled -> change(() -> store.setEnabled(item.id, enabled))));
            LinearLayout actions = row();
            TextView info = button(word("Details", "Подробнее"), Ui.QUIET, () -> details(item));
            actions.addView(info, new LinearLayout.LayoutParams(0, ui.dp(48), 1));
            TextView up = smallButton("↑", word("Move up: ", "Поднять выше: ") + item.title, () -> change(() -> store.move(item.id, -1)));
            TextView down = smallButton("↓", word("Move down: ", "Опустить ниже: ") + item.title, () -> change(() -> store.move(item.id, 1)));
            Ui.enable(up, index > 1); Ui.enable(down, index < count);
            LinearLayout.LayoutParams arrow = new LinearLayout.LayoutParams(ui.dp(48), ui.dp(48)); arrow.leftMargin = ui.dp(6);
            actions.addView(up, arrow); actions.addView(down, new LinearLayout.LayoutParams(arrow));
            TextView remove = smallButton("×", word("Remove: ", "Удалить: ") + item.title, () -> remove(item));
            actions.addView(remove, new LinearLayout.LayoutParams(arrow)); card.addView(actions); cards.add(card);
        }
        addCards(cards, tablet() ? Math.min(2, cardColumns) : 1);
    }

    private void localOptions() {
        LinearLayout options = column(); options.setPadding(ui.dp(20), ui.dp(8), ui.dp(20), ui.dp(8));
        options.addView(ui.toggle(word("Mod development mode", "Режим разработки модов"),
            word("Also load your local testing mods", "Также загружать локальные тестовые моды"), store.development(),
            enabled -> change(() -> store.setDevelopment(enabled))));
        show(ui.dialog().setTitle(word("Local mods", "Локальные моды")).setView(options).setPositiveButton(word("Done", "Готово"), null));
    }

    private void renderDownloads() {
        LinearLayout introduction = ui.card(body);
        introduction.addView(ui.label(word("Ready for the next race", "Готовим следующий заезд"), 19, ui.text));
        introduction.addView(ui.label(word("Downloads continue when you return to the launcher. Failed downloads can be retried.",
            "Загрузки продолжаются при возврате в лаунчер. Неудавшуюся загрузку можно повторить."), 13, ui.muted));
        List<View> cards = new ArrayList<>();
        for (WorkshopStore.Entry entry : entries) if (!"installed".equals(entry.status)) {
            LinearLayout card = ui.card(null);
            TextView title = ui.label(entry.item.title, 17, ui.text); title.setTypeface(ui.bold); card.addView(title);
            boolean working = pending(entry);
            card.addView(ui.label(statusName(entry.status), 13, working ? ui.accent : "failed".equals(entry.status) ? ui.error : ui.muted));
            ProgressBar progress = ui.progress();
            progress.setIndeterminate("queued".equals(entry.status) || (working && entry.total <= 0));
            if (entry.total > 0) progress.setProgress((int) Math.min(1000, (double) entry.done * 1000 / entry.total));
            card.addView(progress, new LinearLayout.LayoutParams(-1, ui.dp(7)));
            if (entry.total > 0) card.addView(ui.label(Texts.size(this, entry.done) + " / " + Texts.size(this, entry.total), 12, ui.muted));
            if (entry.error != null && !entry.error.isEmpty()) card.addView(ui.label(entry.error, 12, ui.error));
            if (working) card.addView(ui.buttons(button(word("Cancel download", "Отменить загрузку"), Ui.QUIET,
                () -> change(() -> store.cancel(entry.item.id)))));
            else card.addView(ui.buttons(button(word("Retry", "Повторить"), Ui.SECONDARY,
                () -> change(() -> store.retry(entry.item.id))), button(word("Remove", "Убрать"), Ui.QUIET, () -> remove(entry.item))));
            cards.add(card);
        }
        addCards(cards, tablet() ? Math.min(2, cardColumns) : 1);
        if (cards.isEmpty()) empty(word("All clear", "Всё готово"), word("New downloads will appear here. Your installed mods are in the next tab.",
            "Здесь появятся новые загрузки. Скачанные моды находятся на вкладке «Установлено»."));
    }

    private boolean pending(WorkshopStore.Entry entry) { return "queued".equals(entry.status) || "downloading".equals(entry.status); }

    private String statusName(String status) {
        if ("queued".equals(status)) return word("Waiting in queue", "Ожидает в очереди");
        if ("downloading".equals(status)) return word("Downloading and verifying", "Скачивание и проверка");
        if ("failed".equals(status)) return word("Download failed", "Загрузка не удалась");
        if ("cancelled".equals(status)) return word("Cancelled", "Отменено");
        return word("Installed", "Установлен");
    }

    private void empty(String title, String explanation) {
        LinearLayout card = ui.card(body); card.setPadding(ui.dp(20), ui.dp(24), ui.dp(20), ui.dp(24));
        TextView name = ui.label(title, 21, ui.text); name.setTypeface(ui.titleFont); card.addView(name);
        card.addView(ui.label(explanation, 14, ui.muted));
    }

    private WorkshopStore.Entry entry(String id) { for (WorkshopStore.Entry entry : entries) if (entry.item.id.equals(id)) return entry; return null; }

    private void installOrShow(WorkshopItem item) {
        WorkshopStore.Entry installed = entry(item.id);
        if (installed != null && pending(installed)) { selectTab(2); return; }
        if (installed != null && installed.installed && item.updated <= installed.installedUpdated) { details(item); return; }
        change(() -> store.enqueue(item), () -> {
            View downloads = tabs.getChildAt(2);
            downloads.animate().cancel();
            downloads.setAlpha(.35f); downloads.setScaleX(.9f); downloads.setScaleY(.9f);
            downloads.animate().alpha(1).scaleX(1).scaleY(1).setDuration(450).start();
            downloads.announceForAccessibility(word("Download started", "Загрузка началась"));
        });
    }

    private void details(WorkshopItem initial) {
        LinearLayout content = column(); content.setPadding(ui.dp(20), ui.dp(4), ui.dp(20), ui.dp(12));
        ScrollView detailScroll = new ScrollView(this) {
            @Override protected void onMeasure(int widthSpec, int heightSpec) {
                int limit = Math.min(ui.dp(650), getResources().getDisplayMetrics().heightPixels - ui.dp(180));
                int offered = MeasureSpec.getMode(heightSpec) == MeasureSpec.UNSPECIFIED ? limit : Math.min(limit, MeasureSpec.getSize(heightSpec));
                super.onMeasure(widthSpec, MeasureSpec.makeMeasureSpec(Math.max(ui.dp(100), offered), MeasureSpec.AT_MOST));
            }
        };
        detailScroll.addView(content);
        AlertDialog dialog = show(ui.dialog().setTitle(initial.title).setView(detailScroll)
            .setNegativeButton(word("Close", "Закрыть"), null).setNeutralButton("Steam", (shown, which) -> open(itemUrl(initial.id)))
            .setPositiveButton(actionName(initial), null));
        detailId = initial.id;
        if (tablet() && dialog.getWindow() != null) dialog.getWindow().setLayout(
            Math.min(ui.dp(820), getResources().getDisplayMetrics().widthPixels - ui.dp(64)), -2);
        renderDetails(content, initial, dialog);
        remote.execute(() -> {
            try {
                WorkshopItem full = WorkshopApi.details(initial.id);
                handler.post(() -> { if (!dead && dialog.isShowing()) renderDetails(content, full, dialog); });
            } catch (Exception error) { handler.post(() -> { if (!dead && dialog.isShowing()) toast(word("Showing saved details. ", "Показана сохранённая информация. ") + message(error)); }); }
        });
    }

    private void renderDetails(LinearLayout parent, WorkshopItem item, AlertDialog dialog) {
        parent.removeAllViews();
        parent.addView(preview(item, ui.dp(180), true), new LinearLayout.LayoutParams(-1, ui.dp(180)));
        parent.addView(ui.label(tags(item), 13, categoryColor(item)));
        String facts = "ID " + item.id + (item.size > 0 ? "  ·  " + Texts.size(this, item.size) : "");
        if (item.updated > 0) facts += "  ·  " + DateFormat.getDateInstance(DateFormat.MEDIUM).format(new Date(item.updated * 1000));
        parent.addView(ui.label(facts, 12, ui.muted));
        if (!item.fileName.isEmpty()) { TextView filename = ui.label(item.fileName, 12, ui.muted); filename.setTextIsSelectable(true); parent.addView(filename); }
        TextView description = ui.label(item.description.isEmpty() ? word("No description provided.", "Автор не добавил описание.") : cleanDescription(item.description), 14, ui.text);
        description.setTextIsSelectable(true); parent.addView(description);
        WorkshopStore.Entry installed = entry(item.id);
        TextView action = dialog.getButton(AlertDialog.BUTTON_POSITIVE);
        boolean toggle = installed != null && installed.installed && item.updated <= installed.installedUpdated;
        action.setText(toggle ? installed.enabled ? word("Disable", "Выключить") : word("Enable", "Включить") : actionName(item));
        Ui.enable(action, toggle || item.downloadable() || (installed != null && pending(installed)));
        if (!item.downloadable() && !toggle) parent.addView(ui.label(word("Steam has not provided a public download for this item.", "Steam не предоставил публичную ссылку на скачивание этого материала."), 13, Ui.WARNING));
        action.setOnClickListener(view -> {
            dialog.dismiss();
            if (toggle) change(() -> store.setEnabled(item.id, !installed.enabled));
            else installOrShow(item);
        });
    }

    private String cleanDescription(String value) {
        String text = value.replaceAll("(?is)\\[(?:img|previewyoutube)(?:=[^\\]]*)?\\].*?\\[/(?:img|previewyoutube)\\]", "")
            .replaceAll("(?i)\\[/?(?:b|i|u|h[1-6]|list|olist|quote|code|spoiler|strike|table|tr|td|th|hr|previewyoutube)(?:=[^\\]]*)?\\]", "")
            .replace("[*]", "• ").replaceAll("(?i)\\[url=([^\\]]+)\\]([^\\[]*)\\[/url\\]", "$2 ($1)")
            .replaceAll("(?i)\\[/?(?:url|img)\\]", "");
        return text.length() > 24_000 ? text.substring(0, 24_000) + "…" : text;
    }

    private FrameLayout preview(WorkshopItem item, int height, boolean detail) {
        FrameLayout frame = new FrameLayout(this);
        GradientDrawable background = new GradientDrawable(GradientDrawable.Orientation.TL_BR, new int[] {ui.cell, ui.card});
        background.setCornerRadius(ui.dp(10)); frame.setBackground(background); frame.setClipToOutline(true);
        TextView placeholder = ui.label("CRASHDAY\nWORKSHOP", 11, ui.muted); placeholder.setGravity(Gravity.CENTER); placeholder.setLetterSpacing(.08f);
        frame.addView(placeholder, new FrameLayout.LayoutParams(-1, -1));
        ImageView image = new ImageView(this); image.setScaleType(detail ? ImageView.ScaleType.FIT_CENTER : ImageView.ScaleType.CENTER_CROP);
        image.setImportantForAccessibility(View.IMPORTANT_FOR_ACCESSIBILITY_NO); frame.addView(image, new FrameLayout.LayoutParams(-1, -1));
        frame.setMinimumHeight(height);
        if (item.previewUrl.isEmpty()) return frame;
        Bitmap cached = images.get(item.previewUrl);
        if (cached != null) { image.setImageBitmap(cached); placeholder.setVisibility(View.GONE); return frame; }
        final int request = generation;
        thumbnails.execute(() -> {
            if (dead || (!detail && request != generation)) return;
            try {
                byte[] bytes = WorkshopApi.preview(item.previewUrl);
                BitmapFactory.Options options = new BitmapFactory.Options(); options.inJustDecodeBounds = true;
                BitmapFactory.decodeByteArray(bytes, 0, bytes.length, options);
                if (options.outWidth <= 0 || options.outHeight <= 0) return;
                options.inSampleSize = 1;
                while (Math.max(options.outWidth, options.outHeight) / options.inSampleSize > 768) options.inSampleSize *= 2;
                options.inJustDecodeBounds = false; options.inPreferredConfig = Bitmap.Config.RGB_565;
                Bitmap bitmap = BitmapFactory.decodeByteArray(bytes, 0, bytes.length, options);
                if (bitmap == null) return;
                handler.post(() -> {
                    if (dead || (!detail && request != generation)) return;
                    images.put(item.previewUrl, bitmap); image.setImageBitmap(bitmap); placeholder.setVisibility(View.GONE);
                });
            } catch (IOException | RuntimeException ignored) { }
        });
        return frame;
    }

    private String tags(WorkshopItem item) {
        List<String> names = new ArrayList<>(); for (String tag : item.tags) names.add(categoryName(tag));
        return names.isEmpty() ? word("Community mod", "Мод сообщества") : TextUtils.join(" · ", names);
    }

    private String categoryName(String tag) {
        if ("Car".equalsIgnoreCase(tag) || "Cars".equalsIgnoreCase(tag)) return word("Cars", "Машины");
        if ("Track".equalsIgnoreCase(tag) || "Tracks".equalsIgnoreCase(tag)) return word("Tracks", "Трассы");
        if ("Track Piece".equalsIgnoreCase(tag) || "Track Pieces".equalsIgnoreCase(tag)) return word("Track Pieces", "Блоки трасс");
        if ("Ambience".equalsIgnoreCase(tag) || "Ambiences".equalsIgnoreCase(tag)) return word("Ambience", "Окружение");
        if ("Misc".equalsIgnoreCase(tag)) return word("Misc", "Разное");
        if ("Mixed".equalsIgnoreCase(tag)) return word("Mixed", "Смешанное");
        return tag;
    }

    private int categoryColor(WorkshopItem item) {
        for (String tag : item.tags) {
            if ("Car".equalsIgnoreCase(tag)) return 0xFFFFA38C;
            if ("Track Piece".equalsIgnoreCase(tag)) return 0xFFB0D799;
            if ("Ambience".equalsIgnoreCase(tag)) return 0xFF91D7ED;
            if ("Track".equalsIgnoreCase(tag)) return 0xFFFFD38D;
            if ("Misc".equalsIgnoreCase(tag)) return 0xFFD4B0EF;
        }
        return ui.accent;
    }

    private void remove(WorkshopItem item) {
        show(ui.dialog().setTitle(word("Remove mod?", "Удалить мод?"))
            .setMessage(item.title + "\n\n" + word("The downloaded copy will be removed. You can download it again from Workshop.", "Скачанная копия будет удалена. Её можно снова скачать из Workshop."))
            .setNegativeButton(word("Keep", "Оставить"), null)
            .setPositiveButton(word("Remove", "Удалить"), (dialog, which) -> change(() -> store.remove(item.id))));
    }

    private void probe() {
        if (probing || dead || health == null) return;
        probing = true; lastProbe = System.currentTimeMillis(); renderHealth();
        remote.execute(() -> {
            boolean ok;
            try { ok = WorkshopApi.probe(); } catch (Exception error) { ok = false; }
            final boolean result = ok;
            handler.post(() -> { if (!dead) { available = result; probing = false; renderHealth(); } });
        });
    }

    private void renderHealth() {
        if (health == null) return;
        health.setText("● Steam API\n" + (probing ? word("checking…", "проверка…") : available ? word("online", "доступен") : word("offline", "недоступен")));
        health.setTextColor(probing ? ui.muted : available ? ui.good : Ui.WARNING);
        health.setContentDescription(health.getText() + word(". Tap to check again", ". Нажми для повторной проверки"));
    }

    private EditText input(String hint, String value) {
        EditText view = new EditText(this); view.setTextColor(ui.text); view.setHintTextColor(ui.muted);
        view.setTextSize(15); view.setHint(hint); view.setText(value); view.setSelectAllOnFocus(false);
        view.setBackgroundTintList(ColorStateList.valueOf(ui.accent)); view.setPadding(ui.dp(4), ui.dp(4), ui.dp(4), ui.dp(4));
        return view;
    }

    private void hideKeyboard() {
        View focus = getCurrentFocus();
        InputMethodManager keyboard = (InputMethodManager) getSystemService(INPUT_METHOD_SERVICE);
        if (focus != null && keyboard != null) keyboard.hideSoftInputFromWindow(focus.getWindowToken(), 0);
        if (focus != null) focus.clearFocus();
    }

    private interface Change { void apply() throws Exception; }

    private void change(Change action) { change(action, null); }

    private void change(Change action, Runnable completed) {
        changes.execute(() -> {
            try {
                action.apply();
                handler.post(() -> { if (!dead) { refreshEntries(true); if (completed != null) completed.run(); } });
            } catch (Exception error) { handler.post(() -> { if (!dead) { toast(message(error)); refreshEntries(true); } }); }
        });
    }

    private String message(Throwable error) { String text = error.getMessage(); return text == null || text.isEmpty() ? error.getClass().getSimpleName() : text; }
    private AlertDialog show(AlertDialog.Builder builder) {
        AlertDialog dialog = ui.show(builder);
        shownDialog = dialog; detailId = "";
        dialog.setOnDismissListener(dismissed -> {
            if (shownDialog == dialog) { shownDialog = null; detailId = ""; }
        });
        if (tablet() && dialog.getWindow() != null) dialog.getWindow().setLayout(
            Math.min(ui.dp(640), getResources().getDisplayMetrics().widthPixels - ui.dp(64)), -2);
        return dialog;
    }
    private void toast(String value) { Toast.makeText(this, value, Toast.LENGTH_LONG).show(); }
    private String itemUrl(String id) { return "https://steamcommunity.com/sharedfiles/filedetails/?id=" + id; }

    private void open(String url) {
        try { startActivity(new Intent(Intent.ACTION_VIEW, Uri.parse(url))); }
        catch (ActivityNotFoundException error) { toast(word("No browser is available", "На устройстве нет браузера")); }
    }
}
