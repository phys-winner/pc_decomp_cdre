package org.crashday.port;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Typeface;
import android.view.MotionEvent;
import android.view.View;

final class PortSettingsView extends View {
    private static final int ROWS = 16;
    private final GameActivity activity;
    private final Paint paint = new Paint(Paint.ANTI_ALIAS_FLAG);
    private boolean entry, entrySelected, controllerPage, full, help, swiping;
    private int selected, pointer = -1, safeLeft, safeTop, safeRight, safeBottom;
    private float downX, downY, lastY, scroll, lastOptionX, optionRemainder;
    private int gestureAxis, gestureRow;
    private float[] entryBounds = {.04f, .61f, .56f, .055f};
    private String entryCaption = "";

    PortSettingsView(GameActivity activity) { super(activity); this.activity = activity; setVisibility(GONE); }
    void setSafeInsets(int left, int top, int right, int bottom) {
        safeLeft = left; safeTop = top; safeRight = right; safeBottom = bottom; cancelGesture(); invalidate();
    }
    void cancelGesture() { pointer = -1; swiping = false; gestureAxis = 0; }
    void setControllerPage(boolean value) { controllerPage = value; }
    void setEntry(boolean visible, boolean selected) {
        entry = visible; entrySelected = selected;
        if (entry && !full) {
            String caption = activity.tr("ADDITIONAL SETTINGS", "ДОПОЛНИТЕЛЬНЫЕ НАСТРОЙКИ");
            if (!caption.equals(entryCaption)) { GameActivity.nativeSettingsCaption(caption); entryCaption = caption; }
            float[] bounds = GameActivity.nativeSettingsEntry();
            if (bounds != null && bounds.length == 4) entryBounds = bounds;
        }
        if (!full) setVisibility(entry || controllerPage ? VISIBLE : GONE);
        invalidate();
    }
    void open() { full = true; help = false; selected = 0; scroll = 0; cancelGesture(); setVisibility(VISIBLE); invalidate(); }
    void openHelp() { help = true; cancelGesture(); invalidate(); }
    void close() { full = help = false; cancelGesture(); setVisibility(GONE); invalidate(); }
    boolean isFull() { return full; }

    private float rowHeight() { return Math.max(getResources().getDisplayMetrics().density * 44, getHeight() * .065f * activity.uiScale / 100); }
    private float top() { return getHeight() * .23f; }
    private float bottom() { return getHeight() * .85f; }
    private void scrollRows(float distance) {
        scroll = Math.max(0, Math.min(Math.max(0, ROWS * rowHeight() - (bottom() - top())), scroll + distance)); invalidate();
    }
    private int rowAt(float x, float y) {
        if (x < getWidth() * .03f || x > getWidth() * .97f || y < top() || y >= bottom()) return -1;
        int row = (int) ((y - top() + scroll) / rowHeight()); return row < ROWS ? row : -1;
    }
    private void select(int row) {
        selected = Math.max(0, Math.min(ROWS - 1, row));
        if (selected * rowHeight() < scroll) scroll = selected * rowHeight();
        if ((selected + 1) * rowHeight() > scroll + bottom() - top()) scroll = (selected + 1) * rowHeight() - bottom() + top();
        scrollRows(0);
    }
    private void change(int direction) {
        switch (selected) {
            case 0: activity.changeSteeringMode(direction); break;
            case 1: activity.toggleMinigunCruise(); break;
            case 2: activity.changeSensitivity(direction); break;
            case 5: activity.toggleInstantSteering(); break;
            case 6: activity.toggleDriving(); break;
            case 7: activity.changeUiScale(direction); select(selected); break;
            case 8: activity.changeRenderScale(direction); break;
            case 9: activity.changeUpscaler(direction); break;
            case 10: activity.toggleAspectCorrection(); break;
            case 11: activity.changeLanguage(direction); break;
            case 13: activity.changeTurnSensitivity(direction); break;
            case 14: activity.toggleControllerVibration(); break;
            case 15: activity.toggleDeviceVibration(); break;
            default: break;
        }
        invalidate();
    }
    private void activate(float x) {
        switch (selected) {
            case 3: activity.calibrateTilt(); break;
            case 4: activity.openTouchEditor(); break;
            case 12: activity.openGestureHelp(); break;
            default: change(x < getWidth() * .60f ? -1 : 1); break;
        }
        invalidate();
    }
    private boolean entryArea(float x, float y) {
        return entry && entryBounds[1] >= 100f / 480 && entryBounds[1] + entryBounds[3] <= 420f / 480
            && x >= entryBounds[0] * getWidth() && x < (entryBounds[0] + entryBounds[2]) * getWidth()
            && y >= entryBounds[1] * getHeight() && y < (entryBounds[1] + entryBounds[3]) * getHeight();
    }
    private boolean onEntryTouch(MotionEvent event) {
        int action = event.getActionMasked();
        if (action == MotionEvent.ACTION_CANCEL) { cancelGesture(); return true; }
        if (action == MotionEvent.ACTION_DOWN) {
            gestureRow = controllerPage ? controllerRowAt(event.getX(), event.getY()) : -1;
            if (gestureRow < 0 && !entryArea(event.getX(), event.getY())) return false;
            pointer = event.getPointerId(0); downX = event.getX(); downY = event.getY(); swiping = false; return true;
        }
        int index = event.findPointerIndex(pointer);
        if (index < 0) return false;
        if (Math.hypot(event.getX(index) - downX, event.getY(index) - downY) > getResources().getDisplayMetrics().density * 12) swiping = true;
        if (action == MotionEvent.ACTION_UP) {
            if (!swiping && controllerPage && gestureRow == controllerRowAt(event.getX(index), event.getY(index))) {
                if (gestureRow == 0) activity.toggleControllerVibration();
                else if (gestureRow == 1) activity.toggleDeviceVibration();
                invalidate();
            } else if (!swiping && entryArea(event.getX(index), event.getY(index))) activity.openPortSettings();
            cancelGesture();
        }
        return true;
    }
    private int controllerRowAt(float x, float y) {
        if (x < getWidth() * .04f || x > getWidth() * .96f) return -1;
        float row = (y / getHeight() * 480 - 118) / 29;
        return row >= 0 && row < 2 ? (int)row : -1;
    }
    boolean onTouch(MotionEvent event) {
        if (!full) return onEntryTouch(event);
        MotionEvent transformed = MotionEvent.obtain(event);
        transformed.offsetLocation(-safeLeft, -safeTop);
        android.graphics.Matrix transform = new android.graphics.Matrix();
        transform.setScale(getWidth() / (float) Math.max(1, getWidth() - safeLeft - safeRight),
            getHeight() / (float) Math.max(1, getHeight() - safeTop - safeBottom));
        transformed.transform(transform);
        boolean handled = onTransformedTouch(transformed); transformed.recycle(); return handled;
    }
    private boolean onTransformedTouch(MotionEvent event) {
        int action = event.getActionMasked();
        if (action == MotionEvent.ACTION_CANCEL) { cancelGesture(); return true; }
        if (action == MotionEvent.ACTION_DOWN) {
            pointer = event.getPointerId(0); downX = event.getX(); downY = lastY = event.getY(); swiping = false;
            gestureRow = rowAt(downX, downY);
            lastOptionX = downX; optionRemainder = 0; gestureAxis = 0;
            invalidate(); return true;
        }
        int index = event.findPointerIndex(pointer);
        if (index < 0) { cancelGesture(); return true; }
        float x = event.getX(index), y = event.getY(index);
        if (action == MotionEvent.ACTION_MOVE) {
            if (!swiping && Math.hypot(x - downX, y - downY) > getResources().getDisplayMetrics().density * 12) {
                swiping = true;
                gestureAxis = Math.abs(y - downY) >= Math.abs(x - downX) ? 2 : 1;
            }
            if (swiping && !help) {
                if (gestureAxis == 2) scrollRows(lastY - y);
                else stepOption(x);
            }
            lastY = y;
        } else if (action == MotionEvent.ACTION_UP || (action == MotionEvent.ACTION_POINTER_UP && event.getPointerId(event.getActionIndex()) == pointer)) {
            if (help) { if (!swiping && y > bottom()) { help = false; invalidate(); } }
            else if (!swiping) {
                if (downY > bottom() && y > bottom()) activity.closePortSettings();
                else if (gestureRow >= 0 && rowAt(x, y) == gestureRow) { selected = gestureRow; activate(x); }
            } else if (gestureAxis == 1 && !help) stepOption(x);
            cancelGesture();
        }
        return true;
    }
    private void stepOption(float x) {
        if (gestureRow < 0) return;
        float step = getResources().getDisplayMetrics().density * 32;
        optionRemainder += x - lastOptionX; lastOptionX = x;
        int count = Math.max(-16, Math.min(16, (int) (optionRemainder / step)));
        if (count != 0) selected = gestureRow;
        for (int i = 0; i < Math.abs(count); ++i) change(count > 0 ? 1 : -1);
        optionRemainder -= count * step;
    }

    void onKey(int key, boolean down) {
        if (!full || !down) return;
        if (help) { if (key == 27 || key == 13) { help = false; invalidate(); } return; }
        if (key == 27) activity.closePortSettings();
        else if (key == 13) activate(getWidth());
        else if (key == 38) select(selected - 1);
        else if (key == 40) select(selected + 1);
        else if (key == 37) change(-1);
        else if (key == 39) change(1);
    }
    private void text(Canvas canvas, String value, float x, float y, float size, int color, boolean heading) {
        paint.setTypeface(Typeface.create("sans-serif", heading ? Typeface.BOLD_ITALIC : Typeface.NORMAL));
        paint.setTextSize(size); paint.setColor(color); paint.setStyle(Paint.Style.FILL);
        if (color != 0xFF161616) paint.setShadowLayer(2, 1, 2, 0xFF000000);
        canvas.drawText(value, x, y, paint); paint.clearShadowLayer();
    }
    private String fit(String value, float size, float width) {
        paint.setTypeface(Typeface.create("sans-serif", Typeface.NORMAL)); paint.setTextSize(size);
        return android.text.TextUtils.ellipsize(value, new android.text.TextPaint(paint), width, android.text.TextUtils.TruncateAt.END).toString();
    }
    private void row(Canvas canvas, int index, String name, String value) {
        float y = top() + index * rowHeight() - scroll, h = rowHeight(), w = getWidth(), size = h * .40f;
        if (y + h < top() || y > bottom()) return;
        if (selected == index) { paint.setColor(0x35FFFFFF); canvas.drawRect(0, y, w, y + h, paint); }
        text(canvas, fit(name, size, w * .42f), w * .045f, y + h * .64f, size, 0xFFFFFFFF, false);
        float left = w * .50f, right = w * .97f;
        Path path = new Path(); path.moveTo(left, y + h * .81f); path.quadTo(left + h * .25f, y + h * .12f, left + h, y + h * .12f);
        path.lineTo(right, y + h * .12f); path.quadTo(right - h * .25f, y + h * .81f, right - h, y + h * .81f); path.close();
        paint.setColor(selected == index ? 0xFFE8E8E8 : 0xC0101010); canvas.drawPath(path, paint);
        paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(2); paint.setColor(selected == index ? 0xFFFF4030 : 0xFFB0B0B0); canvas.drawPath(path, paint); paint.setStyle(Paint.Style.FILL);
        int color = selected == index ? 0xFF161616 : 0xFFD0D0D0;
        String shown = fit(value, size, right - left - h * 2);
        text(canvas, shown, (left + right - paint.measureText(shown)) / 2, y + h * .64f, size, color, false);
        if (index != 3 && index != 4 && index != 12) {
            text(canvas, "‹", left + h * .45f, y + h * .64f, size, color, false);
            text(canvas, "›", right - h * .65f, y + h * .64f, size, color, false);
        }
    }
    @Override protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        if (!full && controllerPage) {
            float w = getWidth(), h = getHeight();
            String[] captions = {"[LB] " + activity.tr("Controller vibration", "Вибрация геймпада"), "[RB] " + activity.tr("Device vibration", "Вибрация устройства")};
            boolean[] values = {activity.controllerVibration, activity.deviceVibration};
            for (int i = 0; i < captions.length; ++i) {
                float y = (130 + i * 29) * h / 480;
                paint.setColor(0x30FFFFFF); canvas.drawRect(w * .04f, y - h * .025f, w * .96f, y + h * .025f, paint);
                text(canvas, captions[i], w * .07f, y + h * .01f, h * .03f, 0xFFFFFFFF, false);
                text(canvas, values[i] ? "On" : "Off", w * .83f, y + h * .01f, h * .03f, 0xFFFFFFFF, false);
            }
        }
        if (!full) return;
        canvas.drawColor(0xA0080808);
        paint.setColor(0xFF080808);
        canvas.drawRect(0, 0, getWidth(), getHeight() * .215f + safeTop, paint);
        canvas.drawRect(0, getHeight() * .86f - safeBottom, getWidth(), getHeight(), paint);
        int save = canvas.save(); canvas.translate(safeLeft, safeTop);
        canvas.scale(Math.max(1, getWidth() - safeLeft - safeRight) / (float) getWidth(), Math.max(1, getHeight() - safeTop - safeBottom) / (float) getHeight());
        float w = getWidth(), h = getHeight();
        text(canvas, activity.tr("OPTIONS", "НАСТРОЙКИ"), w * .025f, h * .11f, h * .07f, 0xFFFFFFFF, true);
        paint.setColor(0xFFE82020); canvas.drawRect(0, h * .135f, w, h * .139f, paint);
        text(canvas, help ? activity.tr("GESTURES", "ЖЕСТЫ") : activity.tr("ADDITIONAL SETTINGS", "ДОПОЛНИТЕЛЬНЫЕ НАСТРОЙКИ"), w * .025f, h * .185f, h * .031f, 0xFFFF3840, true);
        if (help) {
            String[] lines = {activity.tr("Tap a menu item to select it", "Нажмите пункт меню для выбора"),
                activity.tr("Swipe vertically to scroll a list or page", "Свайп вверх или вниз прокручивает список или страницу"),
                activity.tr("Drag horizontally to adjust a slider", "Свайп влево или вправо изменяет ползунок"),
                activity.tr("Hold to read a tooltip without clicking", "Удерживайте для подсказки без нажатия"),
                activity.tr("Tap the race objective screen to continue", "Коснитесь экрана перед гонкой, чтобы продолжить"),
                activity.tr("Slide from gas to nitro or a weapon to keep accelerating", "Ведите палец с газа на нитро или оружие, чтобы сохранить газ"),
                activity.tr("Tap the tachometer to recover; radar: tap for camera, hold to look back", "Тахометр: сброс позиции; радар: смена камеры, удержание — вид назад"),
                activity.tr("Editor: drag to build; two fingers pan and pinch the map", "Редактор: ведите палец для строительства, два пальца перемещают и масштабируют карту"),
                activity.tr("Free replay cameras: left stick moves, right drag turns", "Свободная камера повтора: левый круг перемещает, правая часть поворачивает"),
                activity.tr("Back closes the keyboard, then returns", "Назад закрывает клавиатуру и возвращает в меню")};
            for (int i = 0; i < lines.length; ++i) text(canvas, fit(lines[i], h * .029f, w * .90f), w * .045f, h * (.28f + i * .057f), h * .029f, 0xFFFFFFFF, false);
        } else {
            int clip = canvas.save(); canvas.clipRect(0, top(), w, bottom());
            row(canvas, 0, activity.tr("Steering", "Руление"), activity.steeringName());
            row(canvas, 1, activity.tr("Minigun cruise control", "Круиз-контроль минигана"), activity.minigunCruise ? "On" : "Off");
            row(canvas, 2, activity.tr("Tilt sensitivity", "Чувствительность наклона"), activity.sensitivityName());
            row(canvas, 3, activity.tr("Calibrate tilt", "Калибровка наклона"), activity.tr("Apply", "Применить"));
            row(canvas, 4, activity.tr("Edit touch controls", "Изменить сенсорные кнопки"), activity.tr("Open", "Открыть"));
            row(canvas, 5, activity.tr("Instant digital steering", "Мгновенное руление стрелками"), activity.instantSteering ? "On" : "Off");
            row(canvas, 6, activity.tr("On-screen controls", "Наэкранное управление"), activity.drivingControls.isEnabled() ? "On" : "Off");
            row(canvas, 7, activity.tr("UI scale", "Масштаб интерфейса"), activity.uiScaleLabel());
            row(canvas, 8, activity.tr("3D scale *", "Масштаб 3D *"), activity.renderScaleLabel());
            row(canvas, 9, activity.tr("Upscaling / AA *", "Апскейлинг / сглаживание *"), activity.upscalerName());
            row(canvas, 10, activity.tr("World aspect ratio", "Пропорции мира"), activity.aspectCorrection ? activity.tr("Corrected", "Исправленные") : activity.tr("Original", "Оригинальные"));
            row(canvas, 11, activity.tr("Language *", "Язык *"), activity.languageName());
            row(canvas, 12, activity.tr("Gesture help", "Справка по жестам"), activity.tr("Open", "Открыть"));
            row(canvas, 13, activity.tr("Steering sensitivity", "Чувствительность поворота"), (activity.turnSensitivity * 10) + "%");
            row(canvas, 14, activity.tr("Controller vibration", "Вибрация геймпада"), activity.controllerVibration ? "On" : "Off");
            row(canvas, 15, activity.tr("Device vibration", "Вибрация устройства"), activity.deviceVibration ? "On" : "Off");
            canvas.restoreToCount(clip);
            float visible = bottom() - top(), content = ROWS * rowHeight();
            if (content > visible) {
                float thumb = visible * visible / content, y = top() + (visible - thumb) * scroll / (content - visible);
                paint.setColor(0x99FFFFFF); canvas.drawRoundRect(w * .986f, y, w * .993f, y + thumb, 4, 4, paint);
            }
        }
        paint.setColor(0xFFE82020); canvas.drawRect(0, h * .90f, w, h * .904f, paint);
        text(canvas, activity.tr("‹ Back", "‹ Назад"), w * .035f, h * .965f, h * .03f, 0xFFFFFFFF, false);
        text(canvas, activity.tr("* Requires restart", "* Требуется перезапуск"), w * .62f, h * .965f, h * .025f, 0xFFB0B0B0, false);
        canvas.restoreToCount(save);
    }
}
