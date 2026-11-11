package org.crashday.port;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Typeface;
import android.util.SparseArray;
import android.view.MotionEvent;
import android.view.View;
import java.util.ArrayList;

final class SceneControls extends View {
    private static final int EDITOR = 19, REPLAY = 20;
    private static final int CAMERA_INPUT = 0x10000;
    private static final int TOOL = 0, WORLD = 1, PALETTE = 2, MOVE = 3, LOOK = 4, CAMERA_SPEED = 5, REPLAY_UI = 6;
    private final GameActivity activity;
    private final TouchMenuController menu;
    private final Paint paint = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final ArrayList<Button> buttons = new ArrayList<>();
    private final SparseArray<Contact> contacts = new SparseArray<>();
    private int scene, replayState, safeLeft, safeTop, safeRight, safeBottom;
    private boolean visibleControls = true, multi, painting, padSent;
    private float unit, midX, midY, span, aimX = .6f, aimY = .5f;
    private int multiA = -1, multiB = -1;

    private static final class Button {
        final RectF bounds = new RectF();
        final int action;
        final String text;
        Button(int action, String text) { this.action = action; this.text = text; }
    }
    private static final class Contact {
        int role, action;
        float downX, downY, x, y, stepX, stepY;
        boolean moved;
        Contact(int role, int action, float x, float y) {
            this.role = role; this.action = action;
            this.x = downX = stepX = x; this.y = downY = stepY = y;
        }
    }

    SceneControls(GameActivity activity, TouchMenuController menu) {
        super(activity);
        this.activity = activity; this.menu = menu;
        setWillNotDraw(false); setFocusable(false);
        setContentDescription(activity.tr(
            "Track editor and replay controls. In the editor, tap or drag to build; use two fingers to pan and pinch. In free replay cameras, use the left stick to move and drag on the right to look.",
            "Управление редактором и повторами. В редакторе нажимайте или ведите палец для строительства; двумя пальцами перемещайте и масштабируйте карту. В свободной камере повтора левый круг перемещает камеру, правая часть поворачивает."));
    }

    void setSafeInsets(int left, int top, int right, int bottom) {
        safeLeft = left; safeTop = top; safeRight = right; safeBottom = bottom;
        cancelGesture(); rebuild();
    }

    void setScene(int value, int state, boolean controls) {
        if (scene != value || visibleControls != controls || ((replayState ^ state) & 0x0F0101FF) != 0) {
            cancelGesture();
            scene = value; replayState = state; visibleControls = controls;
            rebuild();
        } else replayState = state;
        setVisibility(scene == EDITOR || scene == REPLAY ? VISIBLE : GONE);
    }

    private boolean freeCamera() { return scene == REPLAY && ((replayState >>> 24) & 15) == 14; }
    private boolean listOpen() { return (replayState & 0x10000) != 0; }
    private float dp(float value) { return value * unit; }
    private float stickX() { return safeLeft + dp(76); }
    private float stickY() { return getHeight() - safeBottom - dp(118); }
    private static float clamp(float value) { return Math.max(-1, Math.min(1, value)); }

    @Override protected void onSizeChanged(int w, int h, int oldw, int oldh) { cancelGesture(); rebuild(); }
    @Override protected void onDetachedFromWindow() { cancelGesture(); super.onDetachedFromWindow(); }

    private void add(int action, String english, String russian) { buttons.add(new Button(action, activity.tr(english, russian))); }
    private void rebuild() {
        unit = getResources().getDisplayMetrics().density;
        unit *= Math.min(1, Math.min(getWidth() / (unit * 760), getHeight() / (unit * 360)));
        buttons.clear();
        if (scene == EDITOR) {
            add(100, "Rotate", "Повернуть"); add(101, "Mirror", "Отразить"); add(102, "Pick", "Взять");
            add(103, "Set ‹", "Набор ‹"); add(104, "Set ›", "Набор ›");
            add(105, "Item ‹", "Элемент ‹"); add(106, "Item ›", "Элемент ›");
        } else if (scene == REPLAY) {
            String[] en = {"Menu", "To start", "Play/pause", "Forward", "Camera", "Speed", "Car", "HUD", "Mark moment"};
            String[] ru = {"Меню", "В начало", "Пуск/пауза", "Вперёд", "Камера", "Скорость", "Авто", "Приборы", "Момент"};
            for (int i = 0; i < en.length; ++i) add(i, en[i], ru[i]);
        }
        float left = safeLeft + (getWidth() - safeLeft - safeRight) * (scene == EDITOR ? .25f : .06f);
        float right = getWidth() - safeRight - dp(scene == EDITOR ? 104 : 12);
        float gap = dp(5), height = dp(40), top = safeTop + dp(7);
        int count = buttons.size();
        float cell = (right - left - gap * Math.max(0, count - 1)) / Math.max(1, count);
        for (int i = 0; i < count; ++i) buttons.get(i).bounds.set(left + i * (cell + gap), top, left + i * (cell + gap) + cell, top + height);
        if (scene == REPLAY && listOpen()) {
            add(200, "↑", "↑"); add(201, "↓", "↓"); add(202, "Done", "Готово");
            float width = dp(84), start = getWidth() * .5f - (width * 3 + gap * 2) / 2;
            for (int i = 0; i < 3; ++i) buttons.get(count + i).bounds.set(start + i * (width + gap), top + height + gap,
                start + i * (width + gap) + width, top + height * 2 + gap);
        }
        if (freeCamera() && !listOpen()) {
            add(210, "Faster", "Быстрее"); add(211, "Slower", "Медленнее");
            for (int i = 0; i < 2; ++i) buttons.get(buttons.size() - 2 + i).bounds.set(getWidth() - safeRight - dp(86),
                getHeight() - safeBottom - dp(206 - i * 49), getWidth() - safeRight - dp(10), getHeight() - safeBottom - dp(162 - i * 49));
        }
        invalidate();
    }

    private Button buttonAt(float x, float y) {
        if (visibleControls) for (Button button : buttons) if (button.bounds.contains(x, y)) return button;
        return null;
    }

    private void point(float x, float y) { GameActivity.nativePointer(activity.pointerX(x), activity.pointerY(y), false); }
    private void click(float x, float y) { point(x, y); GameActivity.nativeButton(true); GameActivity.nativeButton(false); }

    private void activate(int action) {
        if (scene == REPLAY && action < 9 && (replayState & (1 << action)) == 0) return;
        if (action >= 100 && action < 200) {
            point(aimX * getWidth(), aimY * getHeight());
            if (action == 100) menu.editorRotate();
            else menu.sceneKey(new int[] {0, 17, 'S', 'Q', 'E', 'A', 'D'}[action - 100]);
        } else if (action == 202) menu.replayAction(9);
        else if (action >= 200) menu.sceneKey(action == 200 ? 38 : 40);
        else menu.replayAction(action);
    }

    private void startMulti() {
        multiA = multiB = -1;
        for (int i = 0; i < contacts.size(); ++i) if (contacts.valueAt(i).role == WORLD) {
            if (multiA < 0) multiA = contacts.keyAt(i); else { multiB = contacts.keyAt(i); break; }
        }
        if (multiB < 0) return;
        Contact a = contacts.get(multiA), b = contacts.get(multiB);
        multi = true; midX = (a.x + b.x) / 2; midY = (a.y + b.y) / 2;
        span = (float)Math.hypot(a.x - b.x, a.y - b.y);
        if (painting) { GameActivity.nativeButton(false); painting = false; }
    }

    boolean handleMotion(MotionEvent event) {
        if (getVisibility() != VISIBLE || (scene != EDITOR && scene != REPLAY)) return false;
        int action = event.getActionMasked(), index = event.getActionIndex(), id = event.getPointerId(index);
        if (action == MotionEvent.ACTION_CANCEL) { boolean handled = contacts.size() > 0; cancelGesture(); return handled; }
        if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN) {
            if (action == MotionEvent.ACTION_DOWN) cancelGesture();
            float x = event.getX(index), y = event.getY(index);
            Button button = buttonAt(x, y);
            Contact contact;
            if (button != null) contact = new Contact(button.action >= 210 ? CAMERA_SPEED : TOOL, button.action, x, y);
            else if (scene == EDITOR) {
                int kind = GameActivity.nativeMenuControl(activity.pointerX(x), activity.pointerY(y));
                if (kind != 4 && kind != 5) return false;
                contact = new Contact(kind == 4 ? WORLD : PALETTE, 0, x, y);
            } else {
                int role = REPLAY_UI;
                if (freeCamera() && !listOpen()) {
                    boolean stick = x < getWidth() * .3f && y > getHeight() * .35f;
                    if (stick && (y < getHeight() * .8f || Math.hypot(x - stickX(), y - stickY()) <= dp(56))) role = MOVE;
                    else if (y < getHeight() * .8f) role = LOOK;
                }
                for (int i = 0; i < contacts.size(); ++i) if ((role == MOVE || role == LOOK) && contacts.valueAt(i).role == role) return true;
                contact = new Contact(role, 0, x, y);
            }
            contacts.put(id, contact);
            if (scene == EDITOR && contact.role == WORLD) startMulti();
            sendCamera(); invalidate(); return true;
        }
        if (contacts.size() == 0) return false;
        if (action == MotionEvent.ACTION_MOVE) {
            for (int i = contacts.size() - 1; i >= 0; --i) {
                Contact c = contacts.valueAt(i); int at = event.findPointerIndex(contacts.keyAt(i));
                if (at < 0) { cancelGesture(); return true; }
                c.x = event.getX(at); c.y = event.getY(at);
                c.moved |= Math.hypot(c.x - c.downX, c.y - c.downY) > dp(8);
            }
            if (multi) {
                Contact a = contacts.get(multiA), b = contacts.get(multiB);
                if (a != null && b != null) {
                    float x = (a.x + b.x) / 2, y = (a.y + b.y) / 2, distance = (float)Math.hypot(a.x - b.x, a.y - b.y);
                    float ratio = span > dp(12) && distance > dp(12) ? distance / span : 1;
                    GameActivity.nativeEditorTransform((x - midX) / getWidth(), (y - midY) / getHeight(), Math.max(.25f, Math.min(4, ratio)),
                        activity.pointerX(midX), activity.pointerY(midY));
                    midX = x; midY = y; span = distance;
                }
            } else for (int i = 0; i < contacts.size(); ++i) {
                Contact c = contacts.valueAt(i);
                if (c.role == WORLD && c.moved) {
                    if (!painting) { point(c.downX, c.downY); GameActivity.nativeButton(true); painting = true; }
                    point(c.x, c.y); aimX = activity.pointerX(c.x); aimY = activity.pointerY(c.y);
                } else if (c.role == PALETTE && c.moved) {
                    point(c.x, c.y);
                    if (Math.abs(c.y - c.downY) >= Math.abs(c.x - c.downX)) {
                        int steps = (int)((c.y - c.stepY) / dp(26));
                        if (steps != 0) { GameActivity.nativeWheel(steps * 120); c.stepY += steps * dp(26); }
                    } else {
                        int steps = (int)((c.x - c.stepX) / dp(48));
                        if (steps != 0) { menu.sceneKey(steps > 0 ? 'Q' : 'E'); c.stepX = c.x; }
                    }
                }
            }
            sendCamera(); invalidate(); return true;
        }
        if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP) {
            Contact c = contacts.get(id);
            if (c == null) return true;
            if (c.role == TOOL && !c.moved) {
                Button button = buttonAt(event.getX(index), event.getY(index));
                if (button != null && button.action == c.action) activate(c.action);
            } else if (c.role == WORLD && !multi) {
                aimX = activity.pointerX(event.getX(index)); aimY = activity.pointerY(event.getY(index));
                if (painting) { point(event.getX(index), event.getY(index)); GameActivity.nativeButton(false); painting = false; }
                else if (!c.moved) click(event.getX(index), event.getY(index));
            } else if (c.role == PALETTE && !c.moved) click(event.getX(index), event.getY(index));
            else if (c.role == REPLAY_UI && !c.moved) menu.replayPoint(activity.pointerX(event.getX(index)), activity.pointerY(event.getY(index)));
            contacts.remove(id);
            if (contacts.size() == 0) { multi = false; multiA = multiB = -1; }
            sendCamera(); invalidate(); return true;
        }
        return true;
    }

    private void sendCamera() {
        float lx = 0, ly = 0, rx = 0, ry = 0, lt = 0, rt = 0;
        if (freeCamera() && !listOpen()) for (int i = 0; i < contacts.size(); ++i) {
            Contact c = contacts.valueAt(i);
            if (c.role == MOVE) { lx = clamp((c.x - c.downX) / dp(55)); ly = clamp((c.downY - c.y) / dp(55)); }
            else if (c.role == LOOK) { rx = clamp((c.x - c.downX) / dp(65)); ry = clamp((c.downY - c.y) / dp(65)); }
            else if (c.role == CAMERA_SPEED) { if (c.action == 210) rt = 1; else lt = 1; }
        }
        int next = (lx < -.2f ? 1 : 0) | (lx > .2f ? 2 : 0) | (ly > .2f ? 4 : 0) | (ly < -.2f ? 8 : 0) |
            (rx < -.2f ? 16 : 0) | (rx > .2f ? 32 : 0) | (ry > .2f ? 64 : 0) | (ry < -.2f ? 128 : 0) |
            (rt > 0 ? 256 : 0) | (lt > 0 ? 512 : 0);
        // Keypad keys are replay camera shortcuts; use the original camera's virtual pad axes.
        if (next != 0 || padSent) {
            GameActivity.nativeController(CAMERA_INPUT, lx, ly, rx, ry, lt, rt);
            padSent = next != 0;
        }
    }

    void cancelGesture() {
        if (painting) GameActivity.nativeButton(false);
        painting = multi = false; multiA = multiB = -1;
        contacts.clear(); sendCamera(); invalidate();
    }

    @Override protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        if (!visibleControls) return;
        paint.setTypeface(Typeface.DEFAULT_BOLD); paint.setTextAlign(Paint.Align.CENTER);
        for (Button button : buttons) {
            boolean enabled = scene != REPLAY || button.action >= 9 || (replayState & (1 << button.action)) != 0;
            boolean down = false;
            for (int i = 0; i < contacts.size(); ++i) if ((contacts.valueAt(i).role == TOOL || contacts.valueAt(i).role == CAMERA_SPEED) && contacts.valueAt(i).action == button.action) down = true;
            paint.setStyle(Paint.Style.FILL); paint.setColor(down ? 0xD0D82B25 : 0xB0101217);
            canvas.drawRoundRect(button.bounds, dp(6), dp(6), paint);
            paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(dp(1)); paint.setColor(0xA0FFFFFF);
            canvas.drawRoundRect(button.bounds, dp(6), dp(6), paint);
            paint.setStyle(Paint.Style.FILL); paint.setColor(enabled ? 0xFFFFFFFF : 0x60FFFFFF); paint.setTextSize(dp(12));
            float textWidth = paint.measureText(button.text);
            if (textWidth > button.bounds.width() - dp(8)) paint.setTextSize(dp(12) * (button.bounds.width() - dp(8)) / textWidth);
            canvas.drawText(button.text, button.bounds.centerX(), button.bounds.centerY() + paint.getTextSize() * .35f, paint);
        }
        if (freeCamera() && !listOpen()) {
            paint.setStyle(Paint.Style.FILL); paint.setColor(0x60101217); canvas.drawCircle(stickX(), stickY(), dp(56), paint);
            paint.setStyle(Paint.Style.STROKE); paint.setStrokeWidth(dp(2)); paint.setColor(0xA0FFFFFF); canvas.drawCircle(stickX(), stickY(), dp(56), paint);
            float x = stickX(), y = stickY();
            for (int i = 0; i < contacts.size(); ++i) if (contacts.valueAt(i).role == MOVE) {
                Contact c = contacts.valueAt(i); x += clamp((c.x - c.downX) / dp(55)) * dp(32); y += clamp((c.y - c.downY) / dp(55)) * dp(32);
            }
            paint.setStyle(Paint.Style.FILL); paint.setColor(0xA0FFFFFF); canvas.drawCircle(x, y, dp(18), paint);
        }
    }
}
