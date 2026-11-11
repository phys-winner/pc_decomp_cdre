package org.crashday.port;

/*
 * Touch layouts, controls and editor adapted from NFSMW-Recompiled-Mobile's
 * TouchControllerView.java, revision 0b3b3be1f700e2227c03b557dc33e9e50a56c6cc.
 * https://github.com/victorgbd/NFSMW-Recompiled-Mobile
 * The donor is GPLv3-licensed; this file is a modified version for Crashday.
 */

import android.content.Context;
import android.content.SharedPreferences;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.DashPathEffect;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.util.SparseArray;
import android.view.Display;
import android.view.MotionEvent;
import android.view.Surface;
import android.view.View;
import java.util.ArrayList;
import java.util.List;

final class DrivingControls extends View implements SensorEventListener {
    static final int STEERING_STICK = 0, STEERING_ARROWS = 1, STEERING_TILT = 2;
    static final int LAYOUT_AUTO = -1, NORMAL = 0, DRAG = 1, DRIVING = 2;

    private static final int DPAD_UP = 0x0001, DPAD_DOWN = 0x0002, DPAD_LEFT = 0x0004, DPAD_RIGHT = 0x0008;
    private static final int START = 0x0010, BACK = 0x0020, L3 = 0x0040, R3 = 0x0080;
    private static final int LB = 0x0100, RB = 0x0200;
    private static final int A = 0x1000, B = 0x2000, X = 0x4000, Y = 0x8000;
    private static final int EN_NORMAL = 1 << NORMAL, EN_DRAG = 1 << DRAG, EN_DRIVING = 1 << DRIVING;
    private static final int EN_ALL = EN_NORMAL | EN_DRAG | EN_DRIVING;
    private static final String[] PREFIXES = {"", "a_", "c_"};
    private static final String[] LAYOUT_NAMES = {"NORMAL", "ARROWS", "DRIVING"};
    private static final String PREFS = "nfsmw_touch_controller";
    private static final int PRESSED = Color.argb(190, 0xE8, 0x32, 0x28);
    private static final int PRESSED_DPAD = Color.argb(180, 0xE8, 0x32, 0x28);
    private static final int TOGGLE_BORDER = Color.argb(220, 0xE8, 0x32, 0x28);
    private static final int ACCENT = Color.rgb(0xE8, 0x32, 0x28);
    private static final int FILL = Color.argb(105, 12, 12, 15);
    private static final int BORDER = Color.argb(205, 255, 255, 255);
    private static final int BUTTON_BACKGROUND = Color.argb(175, 15, 15, 18);

    private final Paint fill = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Paint stroke = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Paint label = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Paint frame = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Paint pauseFrame = new Paint(Paint.ANTI_ALIAS_FLAG);
    private final Path actionPath = new Path();
    private final Paint.FontMetrics metrics = new Paint.FontMetrics();
    private final RectF selectedBounds = new RectF(), pressedBounds = new RectF(), traceBounds = new RectF();
    private final List<Control> controls = new ArrayList<>();
    private final SparseArray<Control> pointers = new SparseArray<>();
    private final SharedPreferences preferences;
    private final float density;
    private final SensorManager sensors;
    private final Sensor gravity;
    private final boolean accelerometer;
    private final float[] filtered = new float[2];
    private boolean enabled, controlsVisible = true;
    private boolean inGame, editing, listening, floatingSteering, legacyLayout, pauseHint;
    private int weaponsEnabled = LB | RB;
    private int steeringMode = STEERING_ARROWS, layout = LAYOUT_AUTO, editedLayout = NORMAL;
    private int width, height, builtWidth, builtHeight;
    private int safeLeft, safeTop, safeRight, safeBottom;
    private float opacity, fullLockSine = (float) Math.sin(Math.toRadians(17));
    private boolean drawingPressed;

    void setSafeInsets(int left, int top, int right, int bottom) {
        safeLeft = left;
        safeTop = top;
        safeRight = right;
        safeBottom = bottom;
        release();
        rebuild();
    }
    private float rawTilt, tiltBaseline, tilt;
    private Control selected;
    private int editorPointer = -1;
    private float grabX, grabY;
    private float lastLeftX, lastLeftY, lastRightX, lastRightY, lastLeftTrigger, lastRightTrigger;
    private int lastButtons;
    private boolean sent;
    private List<Control> modernDraft, classicDraft;

    private Stick leftStick, rightStick;
    private Arrow leftArrow, rightArrow;
    private Trigger leftTrigger, rightTrigger;
    private HudControl tachometer, radar;

    private final RectF sizeMinus = new RectF(), sizePlus = new RectF();
    private final RectF widthMinus = new RectF(), widthPlus = new RectF(), heightMinus = new RectF(), heightPlus = new RectF();
    private final RectF opacityMinus = new RectF(), opacityPlus = new RectF();
    private final RectF reset = new RectF(), cancel = new RectF(), done = new RectF(), layoutButton = new RectF();
    private final RectF helpBackground = new RectF(), hideSelected = new RectF(), floatingButton = new RectF();
    private final RectF legacyButton = new RectF();
    private float sizeTextX, opacityTextX, helpSize;

    DrivingControls(Context context, String preferencesSuffix) {
        super(context);
        density = getResources().getDisplayMetrics().density;
        preferences = context.getSharedPreferences(PREFS + preferencesSuffix, Context.MODE_PRIVATE);
        opacity = clamp(preferences.getFloat("opacity", .6f), .2f, 1f);
        floatingSteering = preferences.getBoolean("floatingSteering", true);
        legacyLayout = preferences.getBoolean("legacyLayout", false);
        sensors = (SensorManager) context.getSystemService(Context.SENSOR_SERVICE);
        Sensor sensor = sensors == null ? null : sensors.getDefaultSensor(Sensor.TYPE_GRAVITY);
        accelerometer = sensor == null && sensors != null;
        gravity = sensor != null ? sensor : sensors == null ? null : sensors.getDefaultSensor(Sensor.TYPE_ACCELEROMETER);
        fill.setStyle(Paint.Style.FILL);
        stroke.setStyle(Paint.Style.STROKE);
        stroke.setStrokeWidth(dp(2));
        frame.setStyle(Paint.Style.STROKE);
        frame.setStrokeWidth(dp(3));
        frame.setColor(ACCENT);
        pauseFrame.setStyle(Paint.Style.STROKE);
        pauseFrame.setStrokeWidth(dp(1));
        pauseFrame.setColor(Color.argb(191, 255, 255, 255));
        pauseFrame.setPathEffect(new DashPathEffect(new float[] {dp(6), dp(4)}, 0));
        label.setColor(Color.WHITE);
        label.setTextAlign(Paint.Align.CENTER);
        label.setTypeface(android.graphics.Typeface.DEFAULT_BOLD);
        setWillNotDraw(false);
        setFocusable(false);
        updateAccessibility();
    }

    void setSteeringMode(int value) {
        steeringMode = value >= STEERING_STICK && value <= STEERING_TILT ? value : STEERING_STICK;
        release();
        rebuild();
        updateSensor();
    }

    void setLayout(int value) {
        if (value < LAYOUT_AUTO || value > DRIVING) value = LAYOUT_AUTO;
        layout = value;
        release();
        rebuild();
        updateSensor();
    }

    void setInGame(boolean value) {
        if (inGame == value) return;
        inGame = value;
        release();
        rebuild();
        updateSensor();
    }

    void setSensitivity(int value) {
        int clamped = Math.max(1, Math.min(20, value));
        double angle = 45.0 * Math.pow(6.0 / 45.0, (clamped - 1) / 19.0);
        fullLockSine = (float) Math.sin(Math.toRadians(angle));
    }

    void setPauseHint(boolean value) {
        if (pauseHint == value) return;
        pauseHint = value;
        invalidate();
    }

    static int fullLockDegrees(int value) {
        int clamped = Math.max(1, Math.min(20, value));
        return Math.round((float) (45.0 * Math.pow(6.0 / 45.0, (clamped - 1) / 19.0)));
    }

    boolean usesTilt() { return steeringMode == STEERING_TILT; }
    boolean hasTiltSensor() { return gravity != null; }
    boolean isEditing() { return editing; }
    boolean isLegacyLayout() { return legacyLayout; }
    void setWeaponsEnabled(int value) {
        value &= LB | RB;
        if (weaponsEnabled == value) return;
        weaponsEnabled = value;
        release();
    }
    int currentLayout() { return editing ? editedLayout : layout == LAYOUT_AUTO ? (inGame ? DRIVING : NORMAL) : layout; }
    void publishWeaponHud(boolean active) {
        float[] anchors = new float[6];
        int mask = 0;
        if (active && width > 0 && height > 0) for (Control control : controls) {
            int index = control.id.equals("lb") ? 0 : control.id.equals("rb") ? 1 : -1;
            if (index < 0 || control.hidden()) continue;
            control.bounds(traceBounds);
            float sx = (width - safeLeft - safeRight) / (float) width;
            float sy = (height - safeTop - safeBottom) / (float) height;
            float side = Math.min(traceBounds.width() * sx, traceBounds.height() * sy) * .82f;
            anchors[index * 3] = (safeLeft + control.cx * sx) / width;
            anchors[index * 3 + 1] = (safeTop + Math.max(side * .5f, traceBounds.top * sy - dp(8) - side * .5f)) / height;
            anchors[index * 3 + 2] = side / height;
            mask |= 1 << index;
        }
        GameActivity.nativeWeaponHud(active ? mask : -1, anchors);
    }
    float steerValue() { return lastLeftX; }
    float throttleValue() { return lastRightTrigger; }
    float brakeValue() { return lastLeftTrigger; }

    void calibrate() {
        tiltBaseline = rawTilt;
        tilt = 0;
        sendState();
        updateHorizon();
    }

    @Override public void setEnabled(boolean value) {
        super.setEnabled(value);
        enabled = value;
        GameActivity.nativeDriving(true);
        release();
        updateSensor();
        invalidate();
    }

    @Override public boolean isEnabled() { return enabled; }

    private void updateAccessibility() {
        GameActivity activity = (GameActivity) getContext();
        setContentDescription(editing ? activity.tr(
            "Touch layout editor. Drag a control to move it; adjust size, opacity or visibility, then save or cancel.",
            "Редактор сенсорных кнопок. Перетащите кнопку, измените размер, прозрачность или видимость, затем сохраните или отмените.") : activity.tr(
            "Race touch controls. Hold a pedal to accelerate or brake; steer with your selected control mode. Slide from gas to a weapon or nitro to keep accelerating.",
            "Сенсорное управление гонкой. Удерживайте педаль для газа или торможения; управляйте выбранным способом. Переместите палец с газа на оружие или нитро, чтобы продолжать разгон."));
    }

    private boolean hardwareInput;

    void setHardwareInput(boolean value) {
        if (hardwareInput == value) return;
        hardwareInput = value;
        release();
        updateSensor();
    }

    private void updateSensor() {
        boolean wanted = !hardwareInput && enabled && controlsVisible && getVisibility() == VISIBLE && !editing &&
            steeringMode == STEERING_TILT && currentLayout() == DRIVING && gravity != null;
        if (wanted == listening) return;
        if (wanted) sensors.registerListener(this, gravity, SensorManager.SENSOR_DELAY_GAME);
        else sensors.unregisterListener(this);
        listening = wanted;
        if (!wanted) {
            tilt = 0;
            sendState();
            updateHorizon();
        }
    }

    @Override public void onSensorChanged(SensorEvent event) {
        if (hardwareInput) return;
        float gx = event.values[0], gy = event.values[1];
        if (accelerometer) {
            filtered[0] += (gx - filtered[0]) * .2f;
            filtered[1] += (gy - filtered[1]) * .2f;
            gx = filtered[0];
            gy = filtered[1];
        }
        Display display = getDisplay();
        int rotation = display == null ? Surface.ROTATION_90 : display.getRotation();
        float screen;
        switch (rotation) {
            case Surface.ROTATION_90: screen = gy; break;
            case Surface.ROTATION_180: screen = -gx; break;
            case Surface.ROTATION_270: screen = -gy; break;
            default: screen = gx; break;
        }
        rawTilt = screen;
        float value = clamp((screen - tiltBaseline) / (SensorManager.GRAVITY_EARTH * fullLockSine), -1, 1);
        value = Math.abs(value) < .03f ? 0 : Math.signum(value) * (Math.abs(value) - .03f) / .97f;
        if (Math.abs(value - tilt) > .005f) {
            tilt = value;
            sendState();
            updateHorizon();
        }
    }

    @Override public void onAccuracyChanged(Sensor sensor, int accuracy) { }

    private void updateHorizon() {
        GameActivity.nativeHorizon(0);
    }

    void release() {
        for (Control control : controls) control.release();
        if (tachometer != null) tachometer.release();
        if (radar != null) radar.release();
        pointers.clear();
        editorPointer = -1;
        fallbackButtons(0, lastButtons);
        lastButtons = 0;
        lastLeftX = lastLeftY = lastRightX = lastRightY = lastLeftTrigger = lastRightTrigger = 0;
        sent = true;
        if (!hardwareInput) {
            GameActivity.nativeDriving(false); // Clear pending button edges on cancel/lifecycle reset.
            GameActivity.nativeController(0, 0, 0, 0, 0, 0, 0);
        }
        GameActivity.nativeHorizon(0);
        invalidate();
    }

    private void fallbackButtons(int next, int previous) {
        fallbackButton(X, 'C', next, previous);
        fallbackButton(A, 'V', next, previous);
        fallbackButton(B, 32, next, previous);
        fallbackButton(Y, 'R', next, previous);
    }

    private void fallbackButton(int mask, int key, int next, int previous) {
        if ((next & mask) != (previous & mask)) GameActivity.nativeKey(key, (next & mask) != 0);
    }

    private void sendState() {
        if (editing || hardwareInput) return;
        if ((!enabled && !inGame) || !controlsVisible || getVisibility() != VISIBLE) {
            if (sent && (lastButtons != 0 || lastLeftX != 0 || lastLeftY != 0 || lastRightX != 0 ||
                lastRightY != 0 || lastLeftTrigger != 0 || lastRightTrigger != 0)) release();
            return;
        }
        int buttons = 0;
        for (Control control : controls) buttons |= control.buttons();
        if (radar != null) buttons |= radar.buttons();
        float lx = leftStick == null ? 0 : leftStick.xValue;
        float ly = leftStick == null ? 0 : leftStick.yValue;
        if (leftArrow != null && currentLayout() == DRAG) {
            lx = (rightArrow.inUse ? 1 : 0) - (leftArrow.inUse ? 1 : 0);
            ly = 0;
        } else if (leftArrow != null && currentLayout() == DRIVING && steeringMode == STEERING_ARROWS) {
            lx = (rightArrow.inUse ? 1 : 0) - (leftArrow.inUse ? 1 : 0);
            ly = 0;
        } else if (currentLayout() == DRIVING && steeringMode == STEERING_TILT) {
            lx = tilt;
            ly = 0;
        }
        float rx = rightStick == null ? 0 : rightStick.xValue;
        float ry = rightStick == null ? 0 : rightStick.yValue;
        float lt = leftTrigger != null && leftTrigger.inUse ? 1 : 0;
        float rt = rightTrigger != null && rightTrigger.inUse ? 1 : 0;
        if (!sent || buttons != lastButtons || lx != lastLeftX || ly != lastLeftY || rx != lastRightX ||
            ry != lastRightY || lt != lastLeftTrigger || rt != lastRightTrigger) {
            boolean pausePressed = inGame && (buttons & START) != 0 && (lastButtons & START) == 0;
            fallbackButtons(buttons, lastButtons);
            GameActivity.nativeController(buttons, lx, ly, rx, ry, lt, rt);
            lastButtons = buttons;
            lastLeftX = lx; lastLeftY = ly; lastRightX = rx; lastRightY = ry;
            lastLeftTrigger = lt; lastRightTrigger = rt;
            sent = true;
            if (pausePressed) {
                GameActivity.nativeGamepad(START, true);
                GameActivity.nativeKey(27, true);
                postDelayed(() -> {
                    GameActivity.nativeKey(27, false);
                    GameActivity.nativeGamepad(START, false);
                }, 140);
                ((GameActivity) getContext()).onDrivingPause();
            }
        }
    }

    boolean handleMotion(MotionEvent event) {
        if (safeLeft == 0 && safeTop == 0 && safeRight == 0 && safeBottom == 0) return handleTransformedMotion(event);
        MotionEvent transformed = MotionEvent.obtain(event);
        transformed.offsetLocation(-safeLeft, -safeTop);
        android.graphics.Matrix transform = new android.graphics.Matrix();
        transform.setScale(getWidth() / (float) Math.max(1, getWidth() - safeLeft - safeRight),
            getHeight() / (float) Math.max(1, getHeight() - safeTop - safeBottom));
        transformed.transform(transform);
        boolean handled = handleTransformedMotion(transformed);
        transformed.recycle();
        return handled;
    }

    private boolean handleTransformedMotion(MotionEvent event) {
        if (editing) return editorMotion(event);
        if ((!enabled && !inGame) || getVisibility() != VISIBLE) return false;
        int action = event.getActionMasked();
        int index = event.getActionIndex(), pointerId = event.getPointerId(index);
        float x = event.getX(index), y = event.getY(index);
        if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN) {
            if (!controlsVisible) return false;
            Control hit = controlAt(x, y);
            if (hit == null && inGame) {
                int region = GameActivity.nativeHudHit((safeLeft + x * (width - safeLeft - safeRight) / width) / width,
                    (safeTop + y * (height - safeTop - safeBottom) / height) / height);
                HudControl hud = region == 1 ? tachometer : region == 2 ? radar : null;
                if (hud != null && !hud.inUse) hit = hud;
            }
            if (hit == null && enabled && currentLayout() == DRIVING && steeringMode == STEERING_STICK && floatingSteering &&
                !leftStick.inUse && !leftStick.hidden() && x < width * .42f && y > height * .4f) hit = leftStick;
            if (hit == null) return false;
            pointers.put(pointerId, hit);
            hit.press(x, y);
            sendState();
            invalidate();
            return true;
        }
        if (action == MotionEvent.ACTION_MOVE) {
            boolean handled = false;
            for (int i = pointers.size() - 1; i >= 0; --i) if (event.findPointerIndex(pointers.keyAt(i)) < 0) {
                pointers.valueAt(i).release(); pointers.removeAt(i); handled = true;
            }
            for (int i = 0; i < event.getPointerCount(); ++i) {
                Control control = pointers.get(event.getPointerId(i));
                if (control != null) {
                    if (control instanceof Arrow || control instanceof Trigger) {
                        Control other = control instanceof Arrow ? (control == leftArrow ? rightArrow : leftArrow) :
                            (control == leftTrigger ? rightTrigger : leftTrigger);
                        if (!other.inUse && !other.hidden() && other.contains(event.getX(i), event.getY(i))) {
                            control.release();
                            other.press(event.getX(i), event.getY(i));
                            pointers.put(event.getPointerId(i), other);
                            control = other;
                        }
                    }
                    control.move(event.getX(i), event.getY(i));
                    handled = true;
                }
            }
            if (handled) {
                sendState();
                invalidate();
            }
            return handled;
        }
        if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP) {
            Control control = pointers.get(pointerId);
            if (control == null) return false;
            control.up();
            pointers.remove(pointerId);
            sendState();
            invalidate();
            return true;
        }
        if (action == MotionEvent.ACTION_CANCEL) {
            release();
            return true;
        }
        return false;
    }

    private Control controlAt(float x, float y) {
        Control hit = null;
        float nearest = Float.MAX_VALUE;
        for (Control control : controls) {
            // Disabling the overlay keeps only the pause hit region active.
            if (control.inUse || (enabled ? control.hidden() : !control.id.equals("start"))) continue;
            hitBounds(control, traceBounds);
            float dx = (x - control.cx) / (traceBounds.right - control.cx);
            float dy = (y - control.cy) / (traceBounds.bottom - control.cy);
            float distance = dx * dx + dy * dy;
            if (x >= traceBounds.left && x <= traceBounds.right && Math.abs(dy) <= 1 && distance < nearest) { nearest = distance; hit = control; }
        }
        return hit;
    }

    private void hitBounds(Control control, RectF bounds) {
        control.bounds(bounds);
        float halfX = Math.max(dp(24), bounds.width() * .5f + dp(5));
        float halfY = Math.max(dp(24), bounds.height() * .5f + dp(5));
        // The physical left edge has a negative x after the safe-area input transform.
        float left = inGame && control.id.equals("start") ?
            -safeLeft * (width / (float) Math.max(1, width - safeLeft - safeRight)) : control.cx - halfX;
        bounds.set(left, control.cy - halfY, control.cx + halfX, control.cy + halfY);
    }

    void beginEdit() {
        release();
        editedLayout = layout == LAYOUT_AUTO ? DRIVING : layout;
        editing = true;
        updateAccessibility();
        selected = null;
        editorPointer = -1;
        modernDraft = classicDraft = null;
        rebuild(false);
        updateSensor();
    }

    void endEdit(boolean save) {
        if (save) {
            for (Control control : controls) control.saveIn(editedLayout);
            SharedPreferences.Editor editor = preferences.edit();
            if (modernDraft != null && legacyLayout) saveDraft(editor, modernDraft, false);
            if (classicDraft != null && !legacyLayout) saveDraft(editor, classicDraft, true);
            saveDraft(editor, controls, legacyLayout);
            editor.putFloat("opacity", opacity).putBoolean("floatingSteering", floatingSteering).putBoolean("legacyLayout", legacyLayout).apply();
        } else {
            opacity = clamp(preferences.getFloat("opacity", .6f), .2f, 1f);
            floatingSteering = preferences.getBoolean("floatingSteering", true);
            legacyLayout = preferences.getBoolean("legacyLayout", false);
        }
        editing = false;
        updateAccessibility();
        selected = null;
        editorPointer = -1;
        rebuild();
        release();
        updateSensor();
    }

    private void saveDraft(SharedPreferences.Editor editor, List<Control> draft, boolean classic) {
            for (Control control : draft) {
                for (int d = 0; d < 3; ++d) {
                    String key = key(control, d, classic);
                    editor.putBoolean(key + "_hidden", control.hiddenLayout[d]);
                    if (control.custom[d]) {
                        editor.putFloat(key + "_x", control.px[d] / control.designWidth);
                        editor.putFloat(key + "_y", control.py[d] / control.designHeight);
                        editor.putFloat(key + "_s", control.ps[d]);
                        editor.putFloat(key + "_w", control.pw[d]);
                        editor.putFloat(key + "_h", control.ph[d]);
                    } else {
                        editor.remove(key + "_x").remove(key + "_y").remove(key + "_s").remove(key + "_w").remove(key + "_h");
                    }
                }
            }
    }

    private boolean editorMotion(MotionEvent event) {
        int action = event.getActionMasked(), index = event.getActionIndex();
        float x = event.getX(index), y = event.getY(index);
        switch (action) {
            case MotionEvent.ACTION_DOWN:
            case MotionEvent.ACTION_POINTER_DOWN:
                if (editorPointer != -1) return true;
                if (sizeMinus.contains(x, y)) changeScale(-.1f);
                else if (sizePlus.contains(x, y)) changeScale(.1f);
                else if (widthMinus.contains(x, y)) changeDimension(true, -.1f);
                else if (widthPlus.contains(x, y)) changeDimension(true, .1f);
                else if (heightMinus.contains(x, y)) changeDimension(false, -.1f);
                else if (heightPlus.contains(x, y)) changeDimension(false, .1f);
                else if (opacityMinus.contains(x, y)) changeOpacity(-.1f);
                else if (opacityPlus.contains(x, y)) changeOpacity(.1f);
                else if (layoutButton.contains(x, y)) nextEditedLayout();
                else if (hideSelected.contains(x, y) && selected != null) { selected.userHidden = !selected.userHidden; invalidate(); }
                else if (floatingButton.contains(x, y)) { floatingSteering = !floatingSteering; invalidate(); }
                else if (legacyButton.contains(x, y)) switchStyle();
                else if (reset.contains(x, y)) resetLayout();
                else if (cancel.contains(x, y)) ((GameActivity) getContext()).closeTouchEditor(false);
                else if (done.contains(x, y)) ((GameActivity) getContext()).closeTouchEditor(true);
                else {
                    selected = null;
                    for (int i = controls.size() - 1; i >= 0; --i) {
                        Control control = controls.get(i);
                        if (!control.hidden() && control.contains(x, y)) { selected = control; break; }
                    }
                    if (selected != null) {
                        editorPointer = event.getPointerId(index);
                        grabX = x - selected.cx;
                        grabY = y - selected.cy;
                    }
                    invalidate();
                }
                return true;
            case MotionEvent.ACTION_MOVE: {
                int i = editorPointer == -1 ? -1 : event.findPointerIndex(editorPointer);
                if (i < 0 || selected == null) return true;
                selected.moveTo(event.getX(i) - grabX, event.getY(i) - grabY);
                selected.personalized = true;
                invalidate();
                return true;
            }
            case MotionEvent.ACTION_UP:
            case MotionEvent.ACTION_POINTER_UP:
                if (event.getPointerId(index) == editorPointer) editorPointer = -1;
                return true;
            case MotionEvent.ACTION_CANCEL:
                editorPointer = -1;
                return true;
            default: return true;
        }
    }

    private void changeScale(float step) {
        if (selected != null) scale(selected, step);
        else for (Control control : controls) if (!control.hidden()) scale(control, step);
        invalidate();
    }

    private void scale(Control control, float step) {
        control.scale = clamp(Math.round((control.scale + step) * 10) / 10f, .5f, 2);
        control.personalized = true;
        control.fit();
    }

    private void changeDimension(boolean horizontal, float step) {
        for (Control control : controls) if (selected == control || (selected == null && !control.hidden())) {
            if (horizontal) control.stretchX = clamp(Math.round((control.stretchX + step) * 10) / 10f, .5f, 2);
            else control.stretchY = clamp(Math.round((control.stretchY + step) * 10) / 10f, .5f, 2);
            control.personalized = true;
            control.fit();
        }
        invalidate();
    }

    private void switchStyle() {
        for (Control control : controls) control.saveIn(editedLayout);
        if (legacyLayout) classicDraft = new ArrayList<>(controls);
        else modernDraft = new ArrayList<>(controls);
        legacyLayout = !legacyLayout;
        rebuild(false);
        List<Control> draft = legacyLayout ? classicDraft : modernDraft;
        if (draft != null) {
            copyDraft(draft);
            useLayout(editedLayout);
        }
    }

    private void changeOpacity(float step) {
        opacity = clamp(Math.round((opacity + step) * 10) / 10f, .2f, 1);
        invalidate();
    }

    private void nextEditedLayout() {
        for (Control control : controls) control.saveIn(editedLayout);
        editedLayout = editedLayout == NORMAL ? DRIVING : editedLayout == DRIVING ? DRAG : NORMAL;
        selected = null;
        editorPointer = -1;
        useLayout(editedLayout);
    }

    private void resetLayout() {
        for (Control control : controls) {
            control.custom[editedLayout] = false;
            control.hiddenLayout[editedLayout] = false;
            control.use(editedLayout);
        }
        opacity = .6f; floatingSteering = true;
        selected = null;
        invalidate();
    }

    @Override protected void onVisibilityChanged(View changedView, int visibility) {
        super.onVisibilityChanged(changedView, visibility);
        if (visibility == VISIBLE) {
            rebuild();
        } else release();
        updateSensor();
    }

    @Override protected void onSizeChanged(int w, int h, int oldw, int oldh) {
        release();
        width = w;
        height = h;
        rebuild();
    }

    @Override protected void onDetachedFromWindow() {
        if (listening) sensors.unregisterListener(this);
        listening = false;
        release();
        super.onDetachedFromWindow();
    }

    private void rebuild() { rebuild(true); }

    private void rebuild(boolean preserveDraft) {
        if (width <= 0 || height <= 0) return;
        List<Control> draft = editing && preserveDraft ? new ArrayList<>(controls) : null;
        if (draft != null) for (Control control : draft) control.saveIn(editedLayout);
        selected = null;
        editorPointer = -1;
        buildControls(width, height);
        if (draft != null && builtWidth > 0 && builtHeight > 0) {
            copyDraft(draft);
            useLayout(editedLayout);
        }
        builtWidth = width;
        builtHeight = height;
        sendState();
        invalidate();
    }

    private void copyDraft(List<Control> draft) {
        for (Control control : controls) for (Control previous : draft) if (control.id.equals(previous.id)) {
                for (int d = 0; d < 3; ++d) {
                    control.px[d] = previous.px[d] * width / previous.designWidth;
                    control.py[d] = previous.py[d] * height / previous.designHeight;
                    control.ps[d] = previous.ps[d];
                    control.pw[d] = previous.pw[d]; control.ph[d] = previous.ph[d];
                    control.custom[d] = previous.custom[d];
                    control.hiddenLayout[d] = previous.hiddenLayout[d];
                }
                break;
        }
    }

    private void buildControls(float w, float h) {
        controls.clear();
        if (tachometer != null) tachometer.release();
        if (radar != null) radar.release();
        tachometer = new HudControl(1);
        radar = new HudControl(2);
        float unit = Math.min(w / 16f, h / 9f);
        float stickRadius = unit * .78f, buttonRadius = unit * .38f;
        leftStick = new Stick("ls", "L", w * .16f, h * .73f, stickRadius);
        rightStick = new Stick("rs", "R", w * .67f, h * .77f, stickRadius);
        controls.add(leftStick);
        controls.add(rightStick);
        leftStick.visibleOn = steeringMode == STEERING_STICK ? EN_NORMAL | EN_DRIVING : EN_NORMAL;
        float arrowSide = unit * 1.15f;
        leftArrow = new Arrow("carril_izq", w * .16f, h * .73f, arrowSide, -1);
        rightArrow = new Arrow("carril_der", w * .16f, h * .73f, arrowSide, 1);
        if (steeringMode == STEERING_ARROWS) {
            leftArrow.visibleOn |= EN_DRIVING;
            rightArrow.visibleOn |= EN_DRIVING;
        }
        controls.add(leftArrow);
        controls.add(rightArrow);
        Dpad dpad = new Dpad("dpad", w * .32f, h * .72f, unit * .98f);
        dpad.visibleOn = EN_NORMAL | EN_DRIVING;
        controls.add(dpad);
        float lookSide = unit * .8f;
        RectButton look = new RectButton("look_back", "LOOK", w * .32f, h * .72f, lookSide, lookSide, DPAD_DOWN);
        look.drivingText = "LOOK";
        look.visibleOn = EN_DRAG;
        controls.add(look);

        float faceX = w * .85f, faceY = h * .68f;
        ButtonControl a = new ButtonControl("a", "A", faceX, faceY + unit * .68f, buttonRadius, A);
        ButtonControl b = new ButtonControl("b", "B", faceX + unit * .68f, faceY, buttonRadius, B);
        ButtonControl x = new ButtonControl("x", "X", faceX - unit * .68f, faceY, buttonRadius, X);
        ButtonControl y = new ButtonControl("y", "Y", faceX, faceY - unit * .68f, buttonRadius, Y);
        a.drivingText = "N2O"; b.drivingText = "P"; x.drivingText = "CAM"; y.drivingText = "RESET";
        controls.add(a); controls.add(b); controls.add(x); controls.add(y);

        float shoulderW = unit * 1.25f, shoulderH = unit * .55f;
        leftTrigger = new Trigger("lt", "LT", w * .07f, h * .10f, shoulderW, shoulderH, true);
        rightTrigger = new Trigger("rt", "RT", w * .93f, h * .10f, shoulderW, shoulderH, false);
        controls.add(leftTrigger);
        RectButton lb = new RectButton("lb", "LB", w * .20f, h * .10f, shoulderW, shoulderH, LB);
        RectButton rb = new RectButton("rb", "RB", w * .80f, h * .10f, shoulderW, shoulderH, RB);
        lb.drivingText = "MSL"; rb.drivingText = "MG";
        controls.add(lb); controls.add(rb); controls.add(rightTrigger);
        RectButton back = new RectButton("back", "BACK", w * .44f, h * .79f, unit * .82f, unit * .45f, BACK);
        RectButton start = new RectButton("start", "START", w * .55f, h * .79f, unit * .92f, unit * .45f, START);
        controls.add(back); controls.add(start);
        ButtonControl l3 = new ButtonControl("l3", "L3", w * .07f, h * .48f, buttonRadius * .82f, L3);
        ButtonControl r3 = new ButtonControl("r3", "R3", w * .73f, h * .48f, buttonRadius * .82f, R3);
        l3.visibleOn = EN_NORMAL; r3.visibleOn = EN_NORMAL;
        controls.add(l3); controls.add(r3);

        // Thumb clusters follow the safe corners, as in UT3; utilities keep the top row.
        float fit = Math.min(1, Math.min(w / dp(760), h / dp(360))), u = dp(1) * fit;
        for (int d : new int[] {DRIVING, DRAG}) {
            leftStick.defaultFor(d, 112 * u, h - 102 * u, 62 * u / stickRadius);
            leftArrow.defaultFor(d, 54 * u, h - 64 * u, 76 * u / arrowSide);
            rightArrow.defaultFor(d, 146 * u, h - 64 * u, 76 * u / arrowSide);
            rightTrigger.defaultFor(d, w - 54 * u, h - 82 * u, 120 * u / (shoulderW * 1.15f));
            leftTrigger.defaultFor(d, w - 144 * u, h - 66 * u, 84 * u / (shoulderW * .9f));
            a.defaultFor(d, w - 54 * u, h - 186 * u, 29 * u / buttonRadius);
            b.defaultFor(d, w - 234 * u, h - 66 * u, 29 * u / buttonRadius);
            rb.defaultFor(d, w - 144 * u, h - 198 * u, 68 * u / shoulderW);
            lb.defaultFor(d, w - 234 * u, h - 186 * u, 68 * u / shoulderW);
            x.defaultFor(d, w - 32 * u, 32 * u, 23 * u / buttonRadius);
            y.defaultFor(d, w - 96 * u, 32 * u, 23 * u / buttonRadius);
            look.defaultFor(d, w - 160 * u, 32 * u, 46 * u / lookSide);
            start.defaultFor(d, 32 * u, 32 * u, 46 * u / (unit * .92f));
            rightStick.defaultFor(d, w * .5f, h - 82 * u, 54 * u / stickRadius);
            if (legacyLayout) {
                leftArrow.defaultFor(d, 48 * u, h - 76 * u, 72 * u / arrowSide);
                rightArrow.defaultFor(d, 140 * u, h - 76 * u, 72 * u / arrowSide);
                rightTrigger.defaultFor(d, w - 62 * u, h - 94 * u, 118 * u / (shoulderW * 1.15f));
                leftTrigger.defaultFor(d, w - 158 * u, h - 67 * u, 84 * u / (shoulderW * .9f));
                a.defaultFor(d, w - 158 * u, h - 170 * u, 32 * u / buttonRadius);
                b.defaultFor(d, w - 252 * u, h - 67 * u, 32 * u / buttonRadius);
                rb.defaultFor(d, w - 62 * u, h - 224 * u, 64 * u / shoulderW);
                lb.defaultFor(d, w - 158 * u, h - 254 * u, 64 * u / shoulderW);
            }
        }
        dpad.visibleOn = EN_NORMAL;
        back.visibleOn = EN_NORMAL;
        rightStick.visibleOn = EN_NORMAL;
        look.visibleOn = EN_DRIVING | EN_DRAG;
        a.drivingText = "N2O"; b.drivingText = "HANDBRAKE";
        start.drivingText = "PAUSE";
        for (Control control : controls) load(control);
        useLayout(currentLayout());
        placeButtons(w, h, unit);
    }

    private String key(Control control, int d) { return key(control, d, legacyLayout); }

    private String key(Control control, int d, boolean classic) {
        return (classic || d == NORMAL ? "" : "v2_") + (steeringMode == STEERING_TILT && d == DRIVING ? "ci_" : PREFIXES[d]) + control.id;
    }

    private void load(Control control) {
        for (int d = 0; d < 3; ++d) {
            String key = key(control, d);
            control.hiddenLayout[d] = preferences.getBoolean(key + "_hidden", false);
            if (!preferences.contains(key + "_x")) continue;
            control.px[d] = clamp(preferences.getFloat(key + "_x", 0), 0, 1) * width;
            control.py[d] = clamp(preferences.getFloat(key + "_y", 0), 0, 1) * height;
            control.ps[d] = clamp(preferences.getFloat(key + "_s", 1), .5f, 2);
            control.pw[d] = clamp(preferences.getFloat(key + "_w", 1), .5f, 2);
            control.ph[d] = clamp(preferences.getFloat(key + "_h", 1), .5f, 2);
            control.custom[d] = true;
        }
    }

    private void useLayout(int d) {
        for (Control control : controls) control.use(d);
        invalidate();
    }

    private void placeButtons(float w, float h, float unit) {
        label.setTextSize(dp(12));
        float side = Math.max(dp(44), unit * .6f), gap = dp(8);
        float sizeWidth = label.measureText(tr("SIZE") + " 200 %") + dp(16);
        float opacityWidth = label.measureText(tr("OPACITY") + " 100 %") + dp(16);
        float rowWidth = side * 4 + sizeWidth + opacityWidth + gap * 7;
        float x = w * .5f - rowWidth * .5f, y = dp(8);
        sizeMinus.set(x, y, x + side, y + side); x += side + gap;
        sizeTextX = x + sizeWidth * .5f; x += sizeWidth + gap;
        sizePlus.set(x, y, x + side, y + side); x += side + gap * 3;
        opacityMinus.set(x, y, x + side, y + side); x += side + gap;
        opacityTextX = x + opacityWidth * .5f; x += opacityWidth + gap;
        opacityPlus.set(x, y, x + side, y + side);
        y += side + gap;
        float quarter = w * .25f;
        widthMinus.set(quarter - dp(105), y, quarter - dp(61), y + side);
        widthPlus.set(quarter + dp(61), y, quarter + dp(105), y + side);
        heightMinus.set(w - quarter - dp(105), y, w - quarter - dp(61), y + side);
        heightPlus.set(w - quarter + dp(61), y, w - quarter + dp(105), y + side);
        float layoutWidth = label.measureText(tr("CONTROLS: DRIVING")) + dp(28);
        float resetWidth = label.measureText(tr("RESET")) + dp(28);
        float cancelWidth = label.measureText(tr("CANCEL")) + dp(28);
        float doneWidth = label.measureText(tr("DONE")) + dp(28);
        rowWidth = layoutWidth + resetWidth + cancelWidth + doneWidth + gap * 3;
        x = w * .5f - rowWidth * .5f; y += side + gap;
        layoutButton.set(x, y, x + layoutWidth, y + side); x += layoutWidth + gap;
        reset.set(x, y, x + resetWidth, y + side); x += resetWidth + gap;
        cancel.set(x, y, x + cancelWidth, y + side); x += cancelWidth + gap;
        done.set(x, y, x + doneWidth, y + side);
        float optionsWidth = Math.min((w * .58f - gap * 2) / 3, dp(160)), optionsCenter = w * .35f;
        y += side + gap;
        hideSelected.set(optionsCenter - optionsWidth * 1.5f - gap, y, optionsCenter - optionsWidth * .5f - gap, y + side);
        floatingButton.set(optionsCenter - optionsWidth * .5f, y, optionsCenter + optionsWidth * .5f, y + side);
        legacyButton.set(optionsCenter + optionsWidth * .5f + gap, y, optionsCenter + optionsWidth * 1.5f + gap, y + side);
        String help = tr("Drag a control. Size, width and height affect the selection, or all. Red outlines mark overlaps.");
        helpSize = dp(12);
        label.setTextSize(helpSize);
        float helpWidth = label.measureText(help);
        if (helpWidth > w * .9f) {
            helpSize *= w * .9f / helpWidth;
            helpWidth = w * .9f;
        }
        y += side + gap;
        helpBackground.set(w * .5f - helpWidth * .5f - dp(10), y, w * .5f + helpWidth * .5f + dp(10), y + helpSize * 2);
    }

    @Override protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        int save = canvas.save();
        canvas.translate(safeLeft, safeTop);
        canvas.scale(Math.max(1, getWidth() - safeLeft - safeRight) / (float) getWidth(),
            Math.max(1, getHeight() - safeTop - safeBottom) / (float) getHeight());
        if (editing) {
            canvas.drawColor(0xDD08080A);
            for (Control control : controls) if (!control.hidden()) {
                drawControl(canvas, control);
                if (overlaps(control)) { control.bounds(traceBounds); canvas.drawRect(traceBounds, frame); }
                if (control.userHidden) {
                    control.bounds(traceBounds);
                    canvas.drawLine(traceBounds.left, traceBounds.top, traceBounds.right, traceBounds.bottom, frame);
                }
            }
            if (selected != null) {
                selected.bounds(selectedBounds);
                selectedBounds.inset(-dp(6), -dp(6));
                canvas.drawRect(selectedBounds, frame);
            }
            drawEditor(canvas);
            canvas.restoreToCount(save);
            return;
        }
        if (enabled && controlsVisible) for (Control control : controls) if (!control.hidden()) drawControl(canvas, control);
        canvas.restoreToCount(save);
        if (inGame && pauseHint && controlsVisible) drawPauseHint(canvas);
    }

    private void drawPauseHint(Canvas canvas) {
        for (Control control : controls) if (control.id.equals("start") && (!enabled || !control.hidden())) {
            hitBounds(control, traceBounds);
            float sx = Math.max(1, width - safeLeft - safeRight) / (float) width;
            float sy = Math.max(1, height - safeTop - safeBottom) / (float) height;
            traceBounds.set(0, Math.max(0, safeTop + traceBounds.top * sy),
                safeLeft + traceBounds.right * sx, Math.min(height, safeTop + traceBounds.bottom * sy));
            traceBounds.inset(dp(.5f), dp(.5f));
            canvas.drawRoundRect(traceBounds, dp(6), dp(6), pauseFrame);
            String text = ((GameActivity)getContext()).tr("PAUSE", "ПАУЗА");
            float left = Math.max(traceBounds.left, safeLeft), room = traceBounds.right - left - dp(8);
            float size = Math.min(dp(12), traceBounds.height() * .3f);
            label.setTextSize(size);
            if (room > 0) drawLabel(canvas, text, (left + traceBounds.right) * .5f, traceBounds.centerY(),
                size * Math.min(1, room / label.measureText(text)), .85f);
            return;
        }
    }

    private void drawControl(Canvas canvas, Control control) {
        int save = canvas.save();
        canvas.translate(control.cx, control.cy);
        canvas.scale(control.stretchX, control.stretchY);
        canvas.translate(-control.cx, -control.cy);
        int mask = control instanceof ButtonControl ? ((ButtonControl)control).mask : control instanceof RectButton ? ((RectButton)control).mask : 0;
        drawingPressed = control.inUse || (rightTrigger != null && rightTrigger.inUse && (rightTrigger.slideButtons & mask) != 0);
        control.draw(canvas);
        drawingPressed = false;
        canvas.restoreToCount(save);
    }

    private boolean overlaps(Control control) {
        control.bounds(selectedBounds);
        for (Control other : controls) if (other != control && !other.hidden() && !other.userHidden) {
            other.bounds(pressedBounds);
            if (selectedBounds.left < pressedBounds.right && pressedBounds.left < selectedBounds.right &&
                selectedBounds.top < pressedBounds.bottom && pressedBounds.top < selectedBounds.bottom) return true;
        }
        return false;
    }

    private void drawEditor(Canvas canvas) {
        float textSize = dp(12);
        drawButton(canvas, sizeMinus, "−", dp(18));
        drawButton(canvas, sizePlus, "+", dp(18));
        drawButton(canvas, widthMinus, "−", dp(18)); drawButton(canvas, widthPlus, "+", dp(18));
        drawButton(canvas, heightMinus, "−", dp(18)); drawButton(canvas, heightPlus, "+", dp(18));
        drawText(canvas, "WIDTH" + (selected == null ? "" : " " + Math.round(selected.stretchX * 100) + " %"), width * .25f, widthMinus.centerY(), textSize);
        drawText(canvas, "HEIGHT" + (selected == null ? "" : " " + Math.round(selected.stretchY * 100) + " %"), width * .75f, heightMinus.centerY(), textSize);
        drawButton(canvas, opacityMinus, "−", dp(18));
        drawButton(canvas, opacityPlus, "+", dp(18));
        drawText(canvas, selected == null ? "SIZE" : "SIZE " + Math.round(selected.scale * 100) + " %", sizeTextX, sizeMinus.centerY(), textSize);
        drawText(canvas, "OPACITY " + Math.round(opacity * 100) + " %", opacityTextX, opacityMinus.centerY(), textSize);
        drawButton(canvas, layoutButton, "CONTROLS: " + LAYOUT_NAMES[editedLayout], textSize);
        drawButton(canvas, reset, "RESET", textSize);
        drawButton(canvas, cancel, "CANCEL", textSize);
        drawButton(canvas, done, "DONE", textSize);
        drawButton(canvas, hideSelected, selected != null && selected.userHidden ? "SHOW BUTTON" : "HIDE BUTTON", textSize);
        drawButton(canvas, floatingButton, floatingSteering ? "FLOATING: ON" : "FLOATING: OFF", textSize);
        drawButton(canvas, legacyButton, legacyLayout ? "STYLE: CLASSIC" : "STYLE: NEW", textSize);
        fill.setColor(BUTTON_BACKGROUND);
        canvas.drawRoundRect(helpBackground, dp(8), dp(8), fill);
        drawLabel(canvas, tr("Drag a control. Size, width and height affect the selection, or all. Red outlines mark overlaps."),
            helpBackground.centerX(), helpBackground.centerY(), helpSize, 1);
    }

    private String tr(String text) {
        GameActivity activity = (GameActivity) getContext();
        if (text.startsWith("Drag a control")) return activity.tr(text,
            "Перетащите кнопку. Размер, ширина и высота: выбранная или все. Красная рамка — пересечение.");
        if (text.equals("STYLE: CLASSIC")) return activity.tr(text, "СТИЛЬ: ПРЕЖНИЙ");
        if (text.equals("STYLE: NEW")) return activity.tr(text, "СТИЛЬ: НОВЫЙ");
        if (text.equals("HIDE")) return activity.tr("HIDE", "СКРЫТЬ");
        if (text.equals("TOUCH")) return activity.tr("TOUCH", "СЕНСОР");
        if (text.equals("EDIT")) return activity.tr("EDIT", "ИЗМЕНИТЬ");
        if (text.equals("SIZE")) return activity.tr(text, "РАЗМЕР");
        if (text.equals("OPACITY")) return activity.tr(text, "ПРОЗРАЧНОСТЬ");
        if (text.equals("GAS")) return activity.tr(text, "ГАЗ");
        if (text.equals("BRAKE")) return activity.tr(text, "ТОРМОЗ");
        if (text.equals("RESET")) return activity.tr("RESET", "СБРОС");
        if (text.equals("CANCEL")) return activity.tr("CANCEL", "ОТМЕНА");
        if (text.equals("DONE")) return activity.tr("DONE", "ГОТОВО");
        if (text.equals("HIDE BUTTON")) return activity.tr(text, "СКРЫТЬ КНОПКУ");
        if (text.equals("SHOW BUTTON")) return activity.tr(text, "ПОКАЗАТЬ КНОПКУ");
        if (text.equals("FLOATING: ON")) return activity.tr(text, "ПЛАВАЮЩИЙ РУЛЬ: ВКЛ");
        if (text.equals("FLOATING: OFF")) return activity.tr(text, "ПЛАВАЮЩИЙ РУЛЬ: ВЫКЛ");
        if (text.startsWith("CONTROLS: ")) {
            String layout = text.substring("CONTROLS: ".length());
            String translated = activity.tr("CONTROLS: ", "КНОПКИ: ");
            if (layout.equals("Auto")) return translated + activity.tr("Auto", "Авто");
            if (layout.equals("NORMAL")) return translated + activity.tr("Normal", "Обычная");
            if (layout.equals("ARROWS")) return translated + activity.tr("Arrows", "Стрелки");
            if (layout.equals("DRIVING")) return translated + activity.tr("Driving", "Гонка");
        }
        return text;
    }

    private void drawButton(Canvas canvas, RectF bounds, String text, float size) {
        text = tr(text);
        fill.setColor(BUTTON_BACKGROUND);
        stroke.setColor(TOGGLE_BORDER);
        canvas.drawRoundRect(bounds, dp(9), dp(9), fill);
        canvas.drawRoundRect(bounds, dp(9), dp(9), stroke);
        label.setTextSize(size);
        float measured = label.measureText(text);
        if (measured > bounds.width() - dp(12)) size *= Math.max(1, bounds.width() - dp(12)) / measured;
        drawLabel(canvas, text, bounds.centerX(), bounds.centerY(), size, 1);
    }

    private void drawText(Canvas canvas, String text, float x, float y, float size) {
        GameActivity activity = (GameActivity) getContext();
        if (text.startsWith("SIZE")) text = activity.tr("SIZE", "РАЗМЕР") + text.substring("SIZE".length());
        else if (text.startsWith("OPACITY")) text = activity.tr("OPACITY", "ПРОЗРАЧНОСТЬ") + text.substring("OPACITY".length());
        else if (text.startsWith("WIDTH")) text = activity.tr("WIDTH", "ШИРИНА") + text.substring("WIDTH".length());
        else if (text.startsWith("HEIGHT")) text = activity.tr("HEIGHT", "ВЫСОТА") + text.substring("HEIGHT".length());
        label.setTextSize(size);
        float half = label.measureText(text) * .5f + dp(8);
        fill.setColor(BUTTON_BACKGROUND);
        canvas.drawRoundRect(x - half, y - size, x + half, y + size, dp(8), dp(8), fill);
        drawLabel(canvas, text, x, y, size, 1);
    }

    private abstract class Control {
        final String id;
        final int designWidth = width, designHeight = height;
        float cx, cy, scale = 1, stretchX = 1, stretchY = 1;
        final float[] px = new float[3], py = new float[3], ps = {1, 1, 1};
        final float[] pw = {1, 1, 1}, ph = {1, 1, 1};
        final boolean[] custom = new boolean[3], hiddenLayout = new boolean[3];
        final float[] fx = new float[3], fy = new float[3], fs = {1, 1, 1};
        boolean personalized, inUse, userHidden;
        int visibleOn = EN_ALL;

        Control(String id, float x, float y) {
            this.id = id;
            cx = x; cy = y;
            java.util.Arrays.fill(fx, x);
            java.util.Arrays.fill(fy, y);
        }
        void defaultFor(int d, float x, float y, float s) { fx[d] = x; fy[d] = y; fs[d] = s; }
        void use(int d) {
            if (custom[d]) { cx = px[d]; cy = py[d]; scale = ps[d]; }
            else { cx = fx[d]; cy = fy[d]; scale = fs[d]; }
            stretchX = custom[d] ? pw[d] : 1; stretchY = custom[d] ? ph[d] : 1;
            personalized = custom[d]; userHidden = hiddenLayout[d];
            fit();
        }
        void saveIn(int d) { px[d] = cx; py[d] = cy; ps[d] = scale; pw[d] = stretchX; ph[d] = stretchY; custom[d] = personalized; hiddenLayout[d] = userHidden; }
        abstract void place();
        void fit() {
            place(); bounds(traceBounds);
            float halfX = traceBounds.width() * .5f, halfY = traceBounds.height() * .5f;
            float hudRoom = id.equals("lb") || id.equals("rb") ? Math.min(traceBounds.width(), traceBounds.height()) * .82f + dp(8) : 0;
            cx = clamp(cx, Math.min(width * .5f, halfX + dp(4)), Math.max(width * .5f, width - halfX - dp(4)));
            cy = clamp(cy, Math.min(height * .5f, halfY + hudRoom + dp(4)), Math.max(height * .5f, height - halfY - dp(4)));
            place();
        }
        void moveTo(float x, float y) { cx = x; cy = y; fit(); }
        abstract void baseBounds(RectF out);
        final void bounds(RectF out) {
            baseBounds(out);
            out.set(cx + (out.left - cx) * stretchX, cy + (out.top - cy) * stretchY,
                cx + (out.right - cx) * stretchX, cy + (out.bottom - cy) * stretchY);
        }
        abstract boolean baseContains(float x, float y);
        final boolean contains(float x, float y) { return baseContains(cx + (x - cx) / stretchX, cy + (y - cy) / stretchY); }
        void press(float x, float y) { inUse = true; move(x, y); }
        void move(float x, float y) { }
        void release() { inUse = false; }
        void up() { release(); }
        int buttons() { return 0; }
        boolean hidden() { return (visibleOn & (1 << currentLayout())) == 0 || (userHidden && !editing) ||
            (!editing && currentLayout() != NORMAL &&
                ((id.equals("lb") && (weaponsEnabled & LB) == 0) || (id.equals("rb") && (weaponsEnabled & RB) == 0))); }
        abstract void draw(Canvas canvas);
    }

    private class HudControl extends Control {
        final int region;
        float downX, downY;
        boolean held, moved;
        final Runnable lookHold = () -> { if (inUse && !moved) { held = true; sendState(); } };
        HudControl(int region) { super(region == 1 ? "tachometer" : "radar", 0, 0); this.region = region; }
        void place() { }
        void baseBounds(RectF out) { out.set(0, 0, 0, 0); }
        boolean baseContains(float x, float y) { return false; }
        @Override void press(float x, float y) {
            inUse = true; held = moved = false; downX = x; downY = y;
            if (region == 2) postDelayed(lookHold, 500);
        }
        @Override void move(float x, float y) {
            if (Math.hypot(x - downX, y - downY) > dp(12)) { moved = true; held = false; removeCallbacks(lookHold); }
        }
        @Override void up() {
            boolean tap = inUse && !held && !moved;
            release();
            if (tap) ((GameActivity)getContext()).onHudTap(region);
        }
        @Override void release() { super.release(); removeCallbacks(lookHold); held = moved = false; }
        int buttons() { return inUse && held ? DPAD_DOWN : 0; }
        void draw(Canvas canvas) { }
    }

    private class ButtonControl extends Control {
        final String text;
        final float baseRadius;
        final int mask;
        float radius;
        String drivingText;
        boolean recoverReady;
        final Runnable recoverHold = () -> {
            if (inUse) { recoverReady = true; sendState(); invalidate(); }
        };
        ButtonControl(String id, String text, float x, float y, float radius, int mask) {
            super(id, x, y); this.text = text; baseRadius = radius; this.mask = mask; place();
        }
        void place() { radius = Math.max(dp(24), baseRadius * scale); }
        void baseBounds(RectF out) { out.set(cx - radius, cy - radius, cx + radius, cy + radius); }
        boolean baseContains(float x, float y) {
            float dx = x - cx, dy = y - cy;
            return dx * dx + dy * dy <= radius * radius * 1.35f;
        }
        @Override void press(float x, float y) {
            super.press(x, y);
            if (mask == Y && currentLayout() != NORMAL) postDelayed(recoverHold, 500);
        }
        @Override void release() {
            super.release(); removeCallbacks(recoverHold); recoverReady = false;
        }
        int buttons() { return inUse && (mask != Y || currentLayout() == NORMAL || recoverReady) ? mask : 0; }
        void draw(Canvas canvas) {
            if (currentLayout() == NORMAL) drawCircle(canvas, cx, cy, radius, inUse);
            else {
                fill.setColor(withOpacity(drawingPressed ? PRESSED : FILL)); stroke.setColor(withOpacity(BORDER));
                canvas.drawRoundRect(cx - radius, cy - radius, cx + radius, cy + radius, dp(10), dp(10), fill);
                canvas.drawRoundRect(cx - radius, cy - radius, cx + radius, cy + radius, dp(10), dp(10), stroke);
            }
            if (currentLayout() == NORMAL || drivingText == null || !drawAction(canvas, mask, cx, cy, radius * 1.15f))
                drawLabel(canvas, currentLayout() == NORMAL || drivingText == null ? text : drivingText,
                    cx, cy, radius * (drivingText != null && drivingText.length() > 2 ? .43f : .72f), opacity);
        }
    }

    private class RectButton extends Control {
        final String text;
        final float baseWidth, baseHeight;
        final int mask;
        final RectF bounds = new RectF();
        String drivingText;
        RectButton(String id, String text, float x, float y, float width, float height, int mask) {
            super(id, x, y); this.text = text; baseWidth = width; baseHeight = height; this.mask = mask; place();
        }
        void place() {
            float w = Math.max(dp(24), baseWidth * scale * .5f), h = Math.max(dp(24), baseHeight * scale * .5f);
            bounds.set(cx - w, cy - h, cx + w, cy + h);
        }
        void baseBounds(RectF out) { out.set(bounds); }
        boolean baseContains(float x, float y) { return bounds.contains(x, y); }
        int buttons() { return inUse ? mask : 0; }
        void draw(Canvas canvas) {
            if (mask == START && (inGame || currentLayout() != NORMAL)) {
                if (editing) drawPause(canvas, cx, cy, Math.min(bounds.width(), bounds.height()) * .62f);
                return;
            }
            float radius = Math.min(dp(10), bounds.height() * .5f);
            fill.setColor(withOpacity(drawingPressed ? PRESSED : FILL));
            stroke.setColor(withOpacity(BORDER));
            canvas.drawRoundRect(bounds, radius, radius, fill);
            canvas.drawRoundRect(bounds, radius, radius, stroke);
            if (currentLayout() == NORMAL || drivingText == null || !drawAction(canvas, mask, cx, cy, Math.min(bounds.width(), bounds.height()) * .6f))
                drawLabel(canvas, currentLayout() == NORMAL || drivingText == null ? text : drivingText,
                    bounds.centerX(), bounds.centerY(), dp(11) * scale, opacity);
        }
    }

    private final class Trigger extends RectButton {
        final boolean brake;
        int slideButtons;
        final RectF pedal = new RectF();
        Trigger(String id, String text, float x, float y, float width, float height, boolean brake) {
            super(id, text, x, y, width, height, 0); this.brake = brake; place();
        }
        @Override void place() {
            super.place();
            if (pedal == null) return;
            float w = baseWidth * scale * (brake ? .74f : .6f);
            float h = baseWidth * scale * (brake ? .9f : 1.15f);
            float x = clamp(cx, w * .5f + dp(4), width - w * .5f - dp(4));
            float y = clamp(cy, h * .5f + dp(4), height - h * .5f - dp(4));
            pedal.set(x - w * .5f, y - h * .5f, x + w * .5f, y + h * .5f);
        }
        @Override void move(float x, float y) {
            slideButtons = 0;
            if (brake || currentLayout() == NORMAL) return;
            for (Control control : controls) {
                int mask = control instanceof ButtonControl ? ((ButtonControl)control).mask :
                    control instanceof RectButton ? ((RectButton)control).mask : 0;
                if ((mask == A || mask == LB || mask == RB) && !control.hidden() && control.contains(x, y)) slideButtons |= mask;
            }
        }
        @Override int buttons() { return inUse ? slideButtons : 0; }
        @Override void release() { super.release(); slideButtons = 0; }
        @Override boolean baseContains(float x, float y) { return currentLayout() == NORMAL ? super.baseContains(x, y) : pedal.contains(x, y); }
        @Override void baseBounds(RectF out) { if (currentLayout() == NORMAL) super.baseBounds(out); else out.set(pedal); }
        @Override void draw(Canvas canvas) { if (currentLayout() == NORMAL) super.draw(canvas); else drawPedal(canvas, pedal, brake, inUse); }
    }

    private final class Stick extends Control {
        final String text;
        final float baseRadius;
        float radius, xValue, yValue, anchorX, anchorY;
        Stick(String id, String text, float x, float y, float radius) {
            super(id, x, y); this.text = text; baseRadius = radius; place();
        }
        void place() { radius = baseRadius * scale; }
        void baseBounds(RectF out) {
            out.set(cx - radius, cy - radius, cx + radius, cy + radius);
        }
        boolean baseContains(float x, float y) {
            float dx = x - cx, dy = y - cy;
            return dx * dx + dy * dy <= radius * radius * 1.55f;
        }
        @Override void press(float x, float y) {
            anchorX = currentLayout() == DRIVING && this == leftStick && floatingSteering ? x : cx;
            anchorY = currentLayout() == DRIVING && this == leftStick && floatingSteering ? y : cy;
            super.press(x, y);
        }
        void move(float x, float y) {
            float dx = (x - anchorX) / (radius * stretchX), dy = (y - anchorY) / (radius * stretchY);
            if (this == leftStick && currentLayout() == DRIVING) {
                xValue = Math.abs(dx) < .06f ? 0 : clamp((Math.abs(dx) - .06f) / .94f, 0, 1) * Math.signum(dx);
                yValue = 0;
                return;
            }
            float length = (float) Math.sqrt(dx * dx + dy * dy);
            if (length > 1) { dx /= length; dy /= length; }
            xValue = Math.abs(dx) < .08f ? 0 : dx;
            yValue = Math.abs(dy) < .08f ? 0 : dy;
        }
        void release() { super.release(); xValue = yValue = 0; }
        void draw(Canvas canvas) {
            float x = inUse ? anchorX : cx, y = inUse ? anchorY : cy;
            drawCircle(canvas, x, y, radius, false);
            float knobX = x + xValue * radius * .58f, knobY = y + yValue * radius * .58f;
            drawCircle(canvas, knobX, knobY, radius * .43f, inUse);
            drawLabel(canvas, text, knobX, knobY, radius * .34f, opacity);
        }
    }

    private final class Arrow extends Control {
        final float baseSide;
        final int side;
        final RectF box = new RectF();
        final Path path = new Path();
        Arrow(String id, float x, float y, float side, int direction) {
            super(id, x, y); baseSide = side; this.side = direction; visibleOn = EN_DRAG; place();
        }
        void place() {
            float m = baseSide * scale * .5f;
            box.set(cx - m, cy - m, cx + m, cy + m);
            float t = m * .42f;
            path.reset();
            path.moveTo(cx + side * t, cy);
            path.lineTo(cx - side * t * .75f, cy - t);
            path.lineTo(cx - side * t * .75f, cy + t);
            path.close();
        }
        void baseBounds(RectF out) { out.set(box); }
        boolean baseContains(float x, float y) { return box.contains(x, y); }
        void draw(Canvas canvas) {
            float radius = Math.min(dp(10), box.height() * .2f);
            fill.setColor(withOpacity(drawingPressed ? PRESSED : FILL)); stroke.setColor(withOpacity(BORDER));
            canvas.drawRoundRect(box, radius, radius, fill);
            canvas.drawRoundRect(box, radius, radius, stroke);
            fill.setColor(withOpacity(BORDER));
            canvas.drawPath(path, fill);
        }
    }

    private final class Dpad extends Control {
        final float baseRadius;
        float radius;
        final RectF vertical = new RectF(), horizontal = new RectF();
        int mask;
        Dpad(String id, float x, float y, float radius) { super(id, x, y); baseRadius = radius; place(); }
        void place() {
            radius = baseRadius * scale;
            float arm = radius * .36f;
            vertical.set(cx - arm, cy - radius, cx + arm, cy + radius);
            horizontal.set(cx - radius, cy - arm, cx + radius, cy + arm);
        }
        void baseBounds(RectF out) { out.set(cx - radius, cy - radius, cx + radius, cy + radius); }
        boolean baseContains(float x, float y) { return Math.abs(x - cx) <= radius && Math.abs(y - cy) <= radius; }
        void move(float x, float y) {
            float dx = x - cx, dy = y - cy, threshold = radius * .2f;
            mask = 0;
            if (dx < -threshold) mask |= DPAD_LEFT;
            if (dx > threshold) mask |= DPAD_RIGHT;
            if (dy < -threshold) mask |= DPAD_UP;
            if (dy > threshold) mask |= DPAD_DOWN;
        }
        void release() { super.release(); mask = 0; }
        int buttons() { return inUse ? mask : 0; }
        void draw(Canvas canvas) {
            fill.setColor(withOpacity(inUse ? PRESSED_DPAD : FILL)); stroke.setColor(withOpacity(BORDER));
            float r = dp(6);
            canvas.drawRoundRect(vertical, r, r, fill); canvas.drawRoundRect(horizontal, r, r, fill);
            canvas.drawRoundRect(vertical, r, r, stroke); canvas.drawRoundRect(horizontal, r, r, stroke);
        }
    }

    private void drawPedal(Canvas canvas, RectF bounds, boolean brake, boolean pressed) {
        pressedBounds.set(bounds);
        if (pressed) pressedBounds.inset(bounds.width() * .05f, bounds.height() * .05f);
        float radius = pressedBounds.width() * (brake ? .18f : .28f);
        fill.setColor(withOpacity(pressed || drawingPressed ? PRESSED : FILL)); stroke.setColor(withOpacity(BORDER));
        canvas.drawRoundRect(pressedBounds, radius, radius, fill);
        canvas.drawRoundRect(pressedBounds, radius, radius, stroke);
        float margin = pressedBounds.width() * .22f;
        canvas.drawLine(pressedBounds.left + margin, pressedBounds.top + margin, pressedBounds.right - margin, pressedBounds.top + margin, stroke);
        canvas.drawLine(pressedBounds.left + margin, pressedBounds.bottom - margin, pressedBounds.right - margin, pressedBounds.bottom - margin, stroke);
        drawLabel(canvas, tr(brake ? "BRAKE" : "GAS"), pressedBounds.centerX(), pressedBounds.centerY(), dp(12), opacity);
    }

    private void drawCircle(Canvas canvas, float x, float y, float radius, boolean pressed) {
        fill.setColor(withOpacity(pressed || drawingPressed ? PRESSED : FILL)); stroke.setColor(withOpacity(BORDER));
        canvas.drawCircle(x, y, radius, fill);
        canvas.drawCircle(x, y, radius, stroke);
    }

    private boolean drawAction(Canvas canvas, int mask, float x, float y, float size) {
        if (mask != START && mask != A && mask != B && mask != X && mask != Y && mask != LB && mask != RB && mask != DPAD_DOWN) return false;
        int saved = canvas.save();
        canvas.translate(x - size * .5f, y - size * .5f); canvas.scale(size / 24, size / 24);
        stroke.setColor(withOpacity(BORDER)); stroke.setStrokeWidth(1.8f);
        fill.setColor(withOpacity(BORDER));
        switch (mask) {
            case START:
                canvas.drawRect(5, 3, 9, 21, fill); canvas.drawRect(15, 3, 19, 21, fill); break;
            case A:
                canvas.drawRoundRect(6, 6, 18, 22, 3, 3, stroke); canvas.drawRect(9, 1, 15, 6, stroke);
                drawLabel(canvas, "N2O", 12, 14, 6, opacity); break;
            case B:
                canvas.drawCircle(12, 12, 9, stroke); drawLabel(canvas, "P", 12, 12, 13, opacity); break;
            case X:
                canvas.drawRoundRect(2, 6, 22, 20, 2, 2, stroke); canvas.drawRect(6, 3, 12, 6, stroke);
                canvas.drawCircle(12, 13, 4, stroke); break;
            case Y:
                canvas.drawArc(3, 3, 21, 21, 45, 285, false, stroke);
                actionPath.reset(); actionPath.moveTo(19, 1); actionPath.lineTo(22, 9); actionPath.lineTo(14, 7); actionPath.close();
                canvas.drawPath(actionPath, fill); break;
            case DPAD_DOWN:
                actionPath.reset(); actionPath.moveTo(1, 12); actionPath.quadTo(12, 1, 23, 12); actionPath.quadTo(12, 23, 1, 12);
                canvas.drawPath(actionPath, stroke); canvas.drawCircle(12, 12, 4, stroke); break;
            case LB:
                actionPath.reset(); actionPath.moveTo(12, 1); actionPath.lineTo(16, 8); actionPath.lineTo(16, 16);
                actionPath.lineTo(21, 21); actionPath.lineTo(12, 18); actionPath.lineTo(3, 21); actionPath.lineTo(8, 16);
                actionPath.lineTo(8, 8); actionPath.close(); canvas.drawPath(actionPath, stroke); break;
            case RB:
                for (int i = 0; i < 3; ++i) {
                    float left = 3 + i * 7;
                    canvas.drawRoundRect(left, 5, left + 4, 22, 2, 2, fill);
                    canvas.drawLine(left, 16, left + 4, 16, stroke);
                }
                break;
            default: break;
        }
        stroke.setStrokeWidth(dp(2)); canvas.restoreToCount(saved);
        return true;
    }

    private int withOpacity(int color) {
        return (color & 0x00FFFFFF) | (Math.round(Color.alpha(color) * (drawingPressed ? 1 : opacity)) << 24);
    }

    private void drawPause(Canvas canvas, float x, float y, float size) {
        float bar = size * .22f, gap = size * .22f;
        stroke.setColor(Color.argb(255, 0, 0, 0)); stroke.setStrokeWidth(dp(3));
        fill.setColor(Color.WHITE);
        for (int i = 0; i < 2; ++i) {
            float left = x - bar - gap * .5f + i * (bar + gap);
            pressedBounds.set(left, y - size * .5f, left + bar, y + size * .5f);
            canvas.drawRect(pressedBounds, stroke);
            canvas.drawRect(pressedBounds, fill);
        }
        stroke.setStrokeWidth(dp(2));
    }

    private void drawLabel(Canvas canvas, String text, float x, float y, float size, float alpha) {
        label.setTextSize(size);
        label.setAlpha(Math.round(255 * (drawingPressed ? 1 : alpha)));
        label.getFontMetrics(metrics);
        canvas.drawText(text, x, y - (metrics.ascent + metrics.descent) / 2, label);
    }

    private float dp(float value) { return value * density; }
    private static float clamp(float value, float min, float max) { return Float.isFinite(value) ? Math.max(min, Math.min(max, value)) : min; }
}
