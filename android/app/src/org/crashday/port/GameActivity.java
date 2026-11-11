package org.crashday.port;

import android.app.Activity;
import android.content.Intent;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.os.Handler;
import android.provider.Settings;
import android.view.Display;
import android.view.InputDevice;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.View;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.widget.TextView;
import java.io.File;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Locale;
import org.crashday.port.launcher.Launch;

public final class GameActivity extends Activity implements SurfaceHolder.Callback, View.OnTouchListener {
    static { System.loadLibrary("crashday"); }
    static native void nativeSurface(Surface surface);
    static native int nativeStart(String game, String images, String userdata, android.content.res.AssetManager assets, boolean crashTest, int renderScale);
    static native int nativeStatus();
    static native void nativePause(boolean paused);
    static native void nativeKey(int vk, boolean down);
    static native void nativeText(String text);
    static native void nativeDelete();
    static native void nativeButton(boolean down);
    static native void nativeRightButton(boolean down);
    static native void nativeWheel(int delta);
    static native boolean nativeMenuScroll(int steps);
    static native void nativeUiScale(int percent);
    static native void nativeLanguage(String language);
    static native boolean nativeRaceMenuSelect(float x, float y);
    static native float[] nativeSettingsEntry();
    static native int nativeMenuControl(float x, float y);
    static native boolean nativeMenuOption(int direction);
    static native void nativeMenuOverlay(boolean shown);
    static native boolean nativePointer(float x, float y, boolean relative);
    static native int nativeConfigure(float fps);
    static native void nativeDisplayRates(float[] rates, float selected);
    static native int nativeRefreshRequest();
    static native boolean nativeLauncherClick();
    static native void nativeDrive(float steer, float throttle, float brake);
    static native void nativeHorizon(float degrees);
    static native void nativeDriving(boolean active);
    static native void nativeGamepad(int mask, boolean down);
    static native void nativeController(int buttons, float leftX, float leftY, float rightX, float rightY,
        float leftTrigger, float rightTrigger);
    static native void nativeTouchMode(boolean touch);
    static native int nativeUiScene();
    static native boolean nativeRaceCountdown();
    static native void nativeTouchHud(boolean active);
    static native void nativeWeaponHud(int mask, float[] anchors);
    static native int nativeHudHit(float x, float y);
    static native int nativeRaceWeapons();
    static native int nativeReplayState();
    static native boolean nativeReplaySelect(int item);
    static native int nativeReplayPoint(float x, float y);
    static native boolean nativeEditorTransform(float dx, float dy, float scale, float x, float y);
    static native boolean nativeTextEditorWanted();
    static native long nativeUiFrame();
    static native void nativeTextEditorClose();

    private final Handler handler = new Handler();
    private FrameLayout root;
    private SurfaceView surface;
    private TextView status, driveButton, continueButton;
    DrivingControls drivingControls;
    private SceneControls sceneControls;
    private TouchMenuController touchMenu;
    private PortSettingsView portSettings;
    private Launch launch;
    private Object backCallback;
    private SharedPreferences preferences;
    private boolean qaPreferences;
    private android.net.wifi.WifiManager.MulticastLock lanLock;
    private android.net.wifi.WifiManager.WifiLock lanWifiLock;
    private boolean surfaceReady, started, launcherVisible, gameReady, activityResumed;
    private int mousePointer = -1;
    int steeringMode, controlLayout, steeringSensitivity, uiScale = 100, renderScale = 100;
    private int runningRenderScale;
    private String language, runningLanguage;
    private int settingsRenderScale;
    private String settingsLanguage;
    private static final String[] LANGUAGES = GameLanguage.VALUES;
    private static final String[] LANGUAGE_NAMES = GameLanguage.NAMES;
    float fpsLimit;
    private float displayRate;
    private boolean touchEditor, editorFromSettings;
    private float[] fpsRates = new float[0];
    private TextInputView textInput;
    private boolean textEditorActive, imeVisible, fpsQaOverride;
    private int textGeneration;

    private final Runnable progress = new Runnable() {
        @Override public void run() {
            if (!started) return;
            pollRefreshRate();
            int result = nativeStatus();
            if (result == Integer.MAX_VALUE - 1) {
                launcherVisible = true;
                driveButton.setVisibility(View.GONE);
                if (nativeLauncherClick()) {
                    launcherVisible = false;
                    status.setVisibility(View.GONE);
                } else {
                    handler.postDelayed(this, 100);
                    return;
                }
            } else if (result == Integer.MAX_VALUE) {
                launcherVisible = false;
                gameReady = true;
                status.setVisibility(View.GONE);
                syncMenu();
                launch.firstFrame(root);
            } else if (result != Integer.MIN_VALUE) {
                if (result == 0) {
                    launch.exited(0);
                    return;
                }
                status.setText("Игра остановилась: код " + result + ". Журнал: userdata/crashday.log");
                status.setVisibility(View.VISIBLE);
                return;
            }
            handler.postDelayed(this, 100);
        }
    };

    private void immersive() {
        getWindow().getDecorView().setSystemUiVisibility(View.SYSTEM_UI_FLAG_FULLSCREEN |
            View.SYSTEM_UI_FLAG_HIDE_NAVIGATION | View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY |
            View.SYSTEM_UI_FLAG_LAYOUT_STABLE | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN |
            View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION);
        if (Build.VERSION.SDK_INT >= 30) {
            android.view.WindowInsetsController controller = getWindow().getInsetsController();
            if (controller != null) {
                controller.hide(android.view.WindowInsets.Type.systemBars());
                controller.setSystemBarsBehavior(android.view.WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE);
            }
        }
    }

    float pointerX(float x) { return x / Math.max(1, getWidth()); }
    float pointerY(float y) { return y / Math.max(1, getHeight()); }

    private void cancelInput() {
        if (drivingControls != null) drivingControls.release();
        if (touchMenu != null) touchMenu.cancelGesture();
        if (sceneControls != null) sceneControls.cancelGesture();
        if (portSettings != null) portSettings.cancelGesture();
        if (mousePointer >= 0) nativeButton(false);
        mousePointer = -1;
        nativeCancelInput();
    }

    private void applySafeInsets(android.view.WindowInsets insets) {
        android.graphics.Insets safe = insets.getInsets(
            android.view.WindowInsets.Type.systemBars() | android.view.WindowInsets.Type.displayCutout());
        boolean shown = insets.isVisible(android.view.WindowInsets.Type.ime());
        if (shown) imeVisible = true;
        else if (imeVisible) {
            imeVisible = false;
            if (textEditorActive) closeTextEditor();
        }
        cancelInput();
        drivingControls.setSafeInsets(safe.left, safe.top, safe.right, safe.bottom);
        sceneControls.setSafeInsets(safe.left, safe.top, safe.right, safe.bottom);
        portSettings.setSafeInsets(safe.left, safe.top, safe.right, safe.bottom);
        FrameLayout.LayoutParams drive = (FrameLayout.LayoutParams) driveButton.getLayoutParams();
        drive.setMargins(safe.left, 0, safe.right, safe.bottom);
        driveButton.setLayoutParams(drive);
        FrameLayout.LayoutParams next = (FrameLayout.LayoutParams) continueButton.getLayoutParams();
        next.setMargins(0, 0, safe.right + Math.round(12 * getResources().getDisplayMetrics().density), safe.bottom);
        continueButton.setLayoutParams(next);
        FrameLayout.LayoutParams message = (FrameLayout.LayoutParams) status.getLayoutParams();
        message.setMargins(safe.left, 0, safe.right, safe.bottom);
        status.setLayoutParams(message);
    }

    @Override public void onWindowFocusChanged(boolean focused) {
        super.onWindowFocusChanged(focused);
        if (focused) {
            immersive();
            if (root != null) root.requestApplyInsets();
        } else {
            cancelInput();
        }
    }

    private static float maximum(float[] values) {
        return values.length == 0 ? 60 : values[values.length - 1];
    }

    private void refreshFpsRates() {
        Display display = getWindowManager().getDefaultDisplay();
        Display.Mode current = display.getMode();
        ArrayList<Float> values = new ArrayList<>();
        for (Display.Mode mode : display.getSupportedModes()) {
            float rate = mode.getRefreshRate();
            if (mode.getPhysicalWidth() == current.getPhysicalWidth() && mode.getPhysicalHeight() == current.getPhysicalHeight() &&
                rate > 0 && !values.contains(rate)) values.add(rate);
        }
        Collections.sort(values);
        fpsRates = new float[values.size()];
        for (int i = 0; i < values.size(); ++i) fpsRates[i] = values.get(i);
        float fallback = maximum(fpsRates);
        if (!fpsQaOverride && fpsLimit != 0 && !containsFps(fpsLimit)) fpsLimit = fallback;
    }

    private boolean containsFps(float rate) {
        for (float candidate : fpsRates) if (Math.abs(candidate - rate) < .01f) return true;
        return false;
    }

    private float fpsValue() {
        float active = displayRate > 0 ? displayRate : Math.max(.001f, getWindowManager().getDefaultDisplay().getRefreshRate());
        return fpsLimit == 0 ? active : Math.min(fpsLimit, active);
    }

    private static String rateLabel(float value) {
        return String.format(Locale.ROOT, "%.2f", value).replaceAll("0+$", "").replaceAll("\\.$", "");
    }

    String fpsLabel() { return fpsLimit == 0 ? tr("Display rate", "Частота экрана") : rateLabel(fpsLimit); }

    private void applyFps() {
        refreshFpsRates();
        WindowManager.LayoutParams options = getWindow().getAttributes();
        Display display = getWindowManager().getDefaultDisplay();
        Display.Mode current = display.getMode();
        if (displayRate != 0 && !containsFps(displayRate)) displayRate = 0;
        options.preferredRefreshRate = displayRate;
        options.preferredDisplayModeId = 0;
        for (Display.Mode mode : display.getSupportedModes()) {
            if (mode.getPhysicalWidth() == current.getPhysicalWidth() && mode.getPhysicalHeight() == current.getPhysicalHeight() &&
                Math.abs(mode.getRefreshRate() - displayRate) < .01f) {
                options.preferredDisplayModeId = mode.getModeId();
                break;
            }
        }
        getWindow().setAttributes(options);
        nativeDisplayRates(fpsRates, displayRate > 0 ? displayRate : display.getRefreshRate());
        nativeConfigure(fpsValue());
    }

    private void pollRefreshRate() {
        int refresh = nativeRefreshRequest();
        if (refresh <= 0) return;
        for (float rate : fpsRates) if (Math.round(rate) == refresh) {
            displayRate = rate;
            preferences.edit().putFloat("displayRate", rate).apply();
            applyFps();
            break;
        }
    }

    void cycleFps(int direction) {
        fpsQaOverride = false;
        int count = fpsRates.length + 1, index = fpsRates.length;
        for (int i = 0; i < fpsRates.length; ++i) if (Math.abs(fpsRates[i] - fpsLimit) < .01f) { index = i; break; }
        index = (index + direction + count) % count;
        fpsLimit = index == fpsRates.length ? 0 : fpsRates[index];
        preferences.edit().putFloat("fpsLimit", fpsLimit).apply();
        applyFps();
    }

    String uiScaleLabel() { return uiScale + "%"; }

    void changeUiScale(int direction) {
        int[] values = {100, 125, 150};
        int index = 0;
        for (int i = 0; i < values.length; ++i) if (values[i] == uiScale) index = i;
        uiScale = values[(index + direction + values.length) % values.length];
        preferences.edit().putInt("uiScale", uiScale).apply();
        nativeUiScale(uiScale);
    }

    String renderScaleLabel() { return renderScale + "%"; }

    void changeRenderScale(int direction) {
        int[] values = {25, 50, 75, 100};
        int index = values.length - 1;
        for (int i = 0; i < values.length; ++i) if (values[i] == renderScale) index = i;
        renderScale = values[(index + direction + values.length) % values.length];
        preferences.edit().putInt("renderScale", renderScale).apply();
    }

    String languageName() {
        if ("system".equals(language)) return tr("System", "Системный");
        for (int i = 0; i < LANGUAGES.length; ++i) if (LANGUAGES[i].equals(language)) return LANGUAGE_NAMES[i];
        return LANGUAGE_NAMES[0];
    }

    void changeLanguage(int direction) {
        int index = 0;
        for (int i = 0; i < LANGUAGES.length; ++i) if (LANGUAGES[i].equals(language)) index = i;
        String next = LANGUAGES[(index + direction + LANGUAGES.length) % LANGUAGES.length];
        if (!qaPreferences && !org.crashday.port.launcher.GameOptions.setLanguage(this, next)) {
            android.widget.Toast.makeText(this, tr("Could not save settings", "Не удалось сохранить настройки"), android.widget.Toast.LENGTH_LONG).show();
            return;
        }
        language = next;
        preferences.edit().putString("language", language).apply();
    }

    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        launch = Launch.attach(this);
        String qaProfile = getIntent() == null ? null : getIntent().getStringExtra("userdata");
        String preferencesSuffix = qaProfile != null && qaProfile.matches("userdata-[A-Za-z0-9_]+") ? "-" + qaProfile : "";
        qaPreferences = !preferencesSuffix.isEmpty();
        preferences = getSharedPreferences("port" + preferencesSuffix, MODE_PRIVATE);
        uiScale = getIntent().getIntExtra("uiScale", preferences.getInt("uiScale", 100));
        renderScale = getIntent().getIntExtra("renderScale", preferences.getInt("renderScale", 100));
        if (uiScale != 100 && uiScale != 125 && uiScale != 150) uiScale = 100;
        if (renderScale != 25 && renderScale != 50 && renderScale != 75 && renderScale != 100) renderScale = 100;
        language = GameLanguage.validate(qaPreferences ? preferences.getString("language", "system") : launch.option("game_language"));
        runningRenderScale = renderScale;
        runningLanguage = GameLanguage.resolve(language, Locale.getDefault());
        nativeLanguage(runningLanguage);
        nativeUiScale(uiScale);
        steeringMode = preferences.getInt("steeringMode", DrivingControls.STEERING_ARROWS);
        controlLayout = preferences.getInt("controlLayout", DrivingControls.LAYOUT_AUTO);
        steeringSensitivity = preferences.getInt("steeringSensitivity", 10);
        try {
            fpsLimit = preferences.getFloat("fpsLimit", 60);
        } catch (ClassCastException e) {
            fpsLimit = preferences.getInt("fpsLimit", 60);
        }
        fpsQaOverride = qaProfile != null && getIntent().hasExtra("fpsLimit");
        displayRate = preferences.getFloat("displayRate", 0);
        if (fpsQaOverride) fpsLimit = getIntent().getFloatExtra("fpsLimit", fpsLimit);
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        setVolumeControlStream(android.media.AudioManager.STREAM_MUSIC);
        WindowManager.LayoutParams options = getWindow().getAttributes();
        options.layoutInDisplayCutoutMode = Build.VERSION.SDK_INT >= 30
            ? WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_ALWAYS
            : WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
        getWindow().setAttributes(options);
        if (Build.VERSION.SDK_INT >= 30) getWindow().setDecorFitsSystemWindows(false);
        immersive();
        root = new FrameLayout(this);
        root.setBackgroundColor(android.graphics.Color.BLACK);
        root.setForceDarkAllowed(false);
        root.setOnApplyWindowInsetsListener((view, insets) -> {
            applySafeInsets(insets);
            return insets;
        });
        root.setPointerIcon(android.view.PointerIcon.getSystemIcon(this, android.view.PointerIcon.TYPE_NULL));
        surface = new SurfaceView(this);
        surface.setPivotX(0);
        surface.setPivotY(0);
        surface.setTranslationX(0);
        surface.setTranslationY(0);
        surface.setPointerIcon(root.getPointerIcon());
        surface.setOnTouchListener(this);
        surface.getHolder().addCallback(this);
        root.addView(surface);
        portSettings = new PortSettingsView(this);
        portSettings.setPointerIcon(root.getPointerIcon());
        portSettings.setOnTouchListener((view, event) -> portSettings.onTouch(event));
        root.addView(portSettings);
        textInput = new TextInputView(this);
        textInput.setPointerIcon(root.getPointerIcon());
        textInput.setOnTouchListener(this);
        textInput.setFocusable(true);
        textInput.setFocusableInTouchMode(true);
        textInput.setVisibility(View.GONE);
        root.addView(textInput);
        drivingControls = new DrivingControls(this, preferencesSuffix);
        drivingControls.setSteeringMode(steeringMode);
        drivingControls.setLayout(controlLayout);
        drivingControls.setSensitivity(steeringSensitivity);
        drivingControls.setEnabled(preferences.getBoolean("drivingEnabled", true));
        root.addView(drivingControls);
        touchMenu = new TouchMenuController(this);
        sceneControls = new SceneControls(this, touchMenu);
        root.addView(sceneControls);
        driveButton = new TextView(this);
        driveButton.setTextColor(0xFFFFFFFF);
        driveButton.setBackgroundColor(0x80000000);
        driveButton.setTextSize(14);
        driveButton.setGravity(Gravity.CENTER);
        driveButton.setPadding(24, 12, 24, 12);
        driveButton.setText(tr("Drive", "Руль"));
        driveButton.setOnClickListener(v -> toggleDriving());
        root.addView(driveButton, new FrameLayout.LayoutParams(-2, -2, Gravity.BOTTOM | Gravity.CENTER_HORIZONTAL));
        continueButton = new TextView(this);
        continueButton.setText(tr("Continue", "Продолжить"));
        continueButton.setTextColor(0xFFFFFFFF);
        continueButton.setBackgroundColor(0xA0000000);
        continueButton.setTextSize(16);
        continueButton.setGravity(Gravity.CENTER);
        int continuePadding = Math.round(16 * getResources().getDisplayMetrics().density);
        continueButton.setPadding(continuePadding, continuePadding, continuePadding, continuePadding);
        continueButton.setOnClickListener(v -> touchMenu.skipCinematic());
        continueButton.setVisibility(View.GONE);
        root.addView(continueButton, new FrameLayout.LayoutParams(-2, -2, Gravity.BOTTOM | Gravity.RIGHT));
        status = new TextView(this);
        status.setTextColor(0xFFFFFFFF);
        status.setBackgroundColor(0xC0000000);
        status.setTextSize(18);
        status.setPadding(24, 16, 24, 16);
        status.setGravity(Gravity.CENTER);
        status.setText("Загрузка Crashday…");
        root.addView(status, new FrameLayout.LayoutParams(-1, -2, Gravity.BOTTOM));
        status.setOnClickListener(v -> {
            if (Build.VERSION.SDK_INT >= 30 && !Environment.isExternalStorageManager() && !CrashdayTextureBackend.isEmbedded()) {
                startActivity(new Intent(Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION,
                    Uri.parse("package:" + getPackageName())));
            }
        });
        setContentView(root);
        refreshFpsRates();
        applyFps();
        nativeTouchMode(false);
        if (Build.VERSION.SDK_INT >= 33) {
            android.window.OnBackInvokedCallback callback = this::back;
            backCallback = callback;
            getOnBackInvokedDispatcher().registerOnBackInvokedCallback(0, callback);
        }
        syncMenu();
    }

    boolean introSeen() {
        return preferences.getBoolean("gamepadIntroSeen", "userdata".equals(ProfileStorage.profileName(this)));
    }

    void markIntroSeen() {
        preferences.edit().putBoolean("gamepadIntroSeen", true).apply();
    }

    int getWidth() { return root.getWidth(); }
    int getHeight() { return root.getHeight(); }

    void syncMenu() {
        if (portSettings == null) return;
        if (touchEditor) {
            sceneControls.setScene(0, 0, false);
            portSettings.setVisibility(View.GONE);
            driveButton.setVisibility(View.GONE);
            drivingControls.setVisibility(View.VISIBLE);
            return;
        }
        touchMenu.syncNativeScene();
        sceneControls.setScene(portSettings.isFull() ? 0 : touchMenu.scene(), touchMenu.isReplay() ? nativeReplayState() : 0, drivingControls.isEnabled());
        continueButton.setVisibility(gameReady && touchMenu.isCinematic() ? View.VISIBLE : View.GONE);
        portSettings.setEntry(touchMenu.isOptions(), touchMenu.selection() == 5);
        boolean activeRace = touchMenu.inGame() && !touchMenu.isPaused() && !touchMenu.awaitingRaceStart();
        drivingControls.setInGame(activeRace);
        drivingControls.setPauseHint(activeRace && !portSettings.isFull() && nativeRaceCountdown());
        drivingControls.setWeaponsEnabled(activeRace ? nativeRaceWeapons() : 0x0300);
        boolean showControls = drivingControls.isEnabled() && !portSettings.isFull() && activeRace;
        drivingControls.setVisibility(!portSettings.isFull() && activeRace ? View.VISIBLE : View.GONE);
        nativeTouchHud(showControls && !drivingControls.isLegacyLayout());
        drivingControls.publishWeaponHud(showControls);
        driveButton.setText(drivingControls.isEnabled() ? tr("Touch", "Сенсор") : tr("Drive", "Руль"));
        driveButton.setVisibility(View.GONE);
        if (touchMenu.inGame() || touchMenu.isReplay()) nativeDriving(true);
    }

    void openPortSettings() {
        settingsRenderScale = renderScale;
        settingsLanguage = language;
        touchMenu.onPortSettings();
        drivingControls.setVisibility(View.GONE);
        driveButton.setVisibility(View.GONE);
        portSettings.open();
        nativeMenuOverlay(true);
    }

    void openTextEditor() {
        if (textEditorActive) return;
        cancelInput();
        textEditorActive = true;
        int generation = ++textGeneration;
        textInput.setVisibility(View.VISIBLE);
        textInput.requestFocus();
        textInput.postDelayed(() -> {
            if (!textEditorActive || generation != textGeneration) return;
            android.view.inputmethod.InputMethodManager manager =
                (android.view.inputmethod.InputMethodManager) getSystemService(INPUT_METHOD_SERVICE);
            manager.restartInput(textInput);
            manager.showSoftInput(textInput, android.view.inputmethod.InputMethodManager.SHOW_IMPLICIT);
        }, 250);
    }

    void closeTextEditor() {
        if (!textEditorActive) return;
        nativeTextEditorClose();
        textEditorActive = false;
        ++textGeneration;
        ((android.view.inputmethod.InputMethodManager) getSystemService(INPUT_METHOD_SERVICE))
            .hideSoftInputFromWindow(textInput.getWindowToken(), 0);
        textInput.clearFocus();
        textInput.setVisibility(View.GONE);
    }

    void closePortSettings() {
        nativeMenuOverlay(false);
        portSettings.close();
        touchMenu.onSettingsClosed();
        driveButton.setText(drivingControls.isEnabled() ? tr("Touch", "Сенсор") : tr("Drive", "Руль"));
        syncMenu();
        boolean changed = settingsRenderScale != renderScale || !settingsLanguage.equals(language);
        if (changed && (runningRenderScale != renderScale || !runningLanguage.equals(GameLanguage.resolve(language, Locale.getDefault())))) {
            new android.app.AlertDialog.Builder(this)
                .setTitle(tr("Restart required", "Нужен перезапуск"))
                .setMessage(tr("Restart Crashday to apply the new graphics scale and language?", "Перезапустить Crashday, чтобы применить масштаб 3D и язык?"))
                .setPositiveButton(tr("Restart now", "Перезапустить сейчас"), (dialog, which) -> {
                    if (!preferences.edit().putInt("renderScale", renderScale).putString("language", language).commit()) {
                        android.widget.Toast.makeText(this, tr("Could not save settings", "Не удалось сохранить настройки"), android.widget.Toast.LENGTH_LONG).show();
                        return;
                    }
                    cancelInput();
                    nativePause(true);
                    Intent restart = new Intent(getIntent()).setClass(this, RestartActivity.class)
                        .putExtra("restartPid", android.os.Process.myPid());
                    restart.removeExtra("renderScale");
                    restart.removeExtra("uiScale");
                    startActivity(restart);
                    finish();
                })
                .setNegativeButton(tr("Later", "Позже"), null).show();
        }
    }

    void changeSteeringMode(int direction) {
        int next = (steeringMode + direction + 3) % 3;
        steeringMode = next;
        preferences.edit().putInt("steeringMode", next).apply();
        drivingControls.setSteeringMode(next);
        portSettings.invalidate();
    }

    String steeringName() {
        String[] english = {"Left stick", "Arrows", "Tilting the phone"};
        String[] russian = {"Левый стик", "Стрелки", "Наклон телефона"};
        return "russian".equals(GameLanguage.resolve(language, Locale.getDefault())) ? russian[steeringMode] : english[steeringMode];
    }

    void changeControlLayout(int direction) {
        int next = controlLayout + direction;
        if (next > DrivingControls.DRIVING) next = DrivingControls.LAYOUT_AUTO;
        if (next < DrivingControls.LAYOUT_AUTO) next = DrivingControls.DRIVING;
        controlLayout = next;
        preferences.edit().putInt("controlLayout", next).apply();
        drivingControls.setLayout(next);
        syncMenu();
    }

    String layoutName() {
        String[] english = {"Auto", "Normal", "Arrows", "Driving"};
        String[] russian = {"Авто", "Обычная", "Стрелки", "Гонка"};
        return "russian".equals(GameLanguage.resolve(language, Locale.getDefault())) ? russian[controlLayout + 1] : english[controlLayout + 1];
    }

    void changeSensitivity(int direction) {
        steeringSensitivity += direction;
        if (steeringSensitivity > 20) steeringSensitivity = 1;
        if (steeringSensitivity < 1) steeringSensitivity = 20;
        preferences.edit().putInt("steeringSensitivity", steeringSensitivity).apply();
        drivingControls.setSensitivity(steeringSensitivity);
    }

    String sensitivityName() {
        return steeringSensitivity + " · " + DrivingControls.fullLockDegrees(steeringSensitivity) + "°";
    }
    void calibrateTilt() { drivingControls.calibrate(); }

    String tr(String english, String russian) {
        return "russian".equals(GameLanguage.resolve(language, Locale.getDefault())) ? russian : english;
    }

    void openGestureHelp() { portSettings.openHelp(); }

    void openTouchEditor() {
        if (touchEditor) return;
        if (started) nativePause(true);
        editorFromSettings = portSettings.isFull();
        touchEditor = true;
        drivingControls.beginEdit();
        portSettings.setVisibility(View.GONE);
        driveButton.setVisibility(View.GONE);
        drivingControls.setVisibility(View.VISIBLE);
    }

    void closeTouchEditor(boolean save) {
        if (!touchEditor) return;
        drivingControls.endEdit(save);
        touchEditor = false;
        if (started && activityResumed && surfaceReady) nativePause(false);
        if (editorFromSettings) portSettings.setVisibility(View.VISIBLE);
        syncMenu();
    }

    void toggleDriving() {
        drivingControls.setEnabled(!drivingControls.isEnabled());
        preferences.edit().putBoolean("drivingEnabled", drivingControls.isEnabled()).apply();
        if (portSettings.isFull()) drivingControls.setVisibility(View.GONE);
        driveButton.setText(drivingControls.isEnabled() ? tr("Touch", "Сенсор") : tr("Drive", "Руль"));
        if (drivingControls.isEnabled() && touchMenu.inGame()) touchMenu.onDrivingEnabled();
        if (mousePointer >= 0) nativeButton(false);
        mousePointer = -1;
        portSettings.invalidate();
        syncMenu();
    }

    void onDrivingPause() { touchMenu.onPauseButton(); }
    void onHudTap(int region) { touchMenu.onHudTap(region); }

    private void startIfReady() {
        if (started || !surfaceReady || !activityResumed || surface == null ||
            !surface.getHolder().getSurface().isValid()) return;
        if (CrashdayTextureBackend.isEmbedded()) {
            refuse("Выберите внешние файлы игры в лаунчере.");
            return;
        }
        File game = launch.folder("game");
        File images = new File("/apk/Crashday/images");
        if (Build.VERSION.SDK_INT >= 30 && !Environment.isExternalStorageManager()) {
            refuse("Для внешней копии нужен доступ к файлам игры. Нажмите здесь и разрешите доступ.");
            return;
        }
        if (game == null || !new File(game, "data/dat000.cpk").isFile()) {
            refuse("Не найдены файлы Crashday. Выберите их в лаунчере.");
            return;
        }
        File userdata = ProfileStorage.profile(this);
        try {
            ProfileStorage.migrate(this);
        } catch (Exception e) {
            refuse("Не удалось перенести профиль: " + e.getMessage());
            return;
        }
        try {
            CrashdayTextureBackend.applyOverrides(game, images, userdata);
        } catch (Exception e) {
            refuse("Производные текстуры повреждены. Удалите их в лаунчере. " + e.getMessage());
            return;
        }
        launch.starting();
        boolean crashTest = getIntent().getBooleanExtra("crashTest", false) && ProfileStorage.profileName(this).startsWith("userdata-");
        int error = nativeStart(game.getAbsolutePath(), images.getAbsolutePath(), userdata.getAbsolutePath(), getAssets(), crashTest, renderScale);
        if (error != 0) { refuse("Ошибка запуска: " + error); return; }
        started = true;
        status.setText("Загрузка Crashday…");
        handler.post(progress);
    }

    private void refuse(String reason) {
        status.setText(reason);
        status.setVisibility(View.VISIBLE);
        launch.failed(reason);
    }

    void prepareControllerForRace() {
        nativeDriving(true);
    }

    static native void nativeCancelInput();

    @Override public void surfaceCreated(SurfaceHolder holder) {
        android.util.Log.i("CrashdayLifecycle", "surfaceCreated");
        surfaceReady = true;
        nativeSurface(holder.getSurface());
        startIfReady();
    }
    @Override public void surfaceChanged(SurfaceHolder holder, int format, int width, int height) {
        android.util.Log.i("CrashdayLifecycle", "surfaceChanged " + width + "x" + height);
        cancelInput();
        nativeSurface(holder.getSurface());
        startIfReady();
    }
    @Override public void surfaceDestroyed(SurfaceHolder holder) {
        android.util.Log.i("CrashdayLifecycle", "surfaceDestroyed started=" + started + " gameReady=" + gameReady);
        surfaceReady = false;
        cancelInput();
        nativeSurface(null);
    }
    @Override protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        android.util.Log.i("CrashdayLifecycle", "onNewIntent started=" + started);
        if (!started) {
            setIntent(intent);
        } else if (gameReady) {
            launch = Launch.attach(this);
            launch.firstFrame(root);
        }
    }

    @Override public void onResume() {
        super.onResume();
        try {
            if (lanLock == null) {
                android.net.wifi.WifiManager wifi = (android.net.wifi.WifiManager) getApplicationContext().getSystemService(WIFI_SERVICE);
                if (wifi != null) {
                    lanLock = wifi.createMulticastLock("Crashday LAN discovery");
                    lanLock.setReferenceCounted(false);
                    lanWifiLock = wifi.createWifiLock(android.net.wifi.WifiManager.WIFI_MODE_FULL_HIGH_PERF, "Crashday LAN session");
                    lanWifiLock.setReferenceCounted(false);
                }
            }
            if (lanLock != null && !lanLock.isHeld()) lanLock.acquire();
            if (lanWifiLock != null && !lanWifiLock.isHeld()) lanWifiLock.acquire();
        } catch (RuntimeException e) { android.util.Log.w("Crashday", "LAN discovery lock unavailable", e); }
        activityResumed = true;
        android.util.Log.i("CrashdayLifecycle", "onResume started=" + started);
        if (surface != null && surface.getHolder().getSurface().isValid()) {
            surfaceReady = true;
            nativeSurface(surface.getHolder().getSurface());
            startIfReady();
        }
        immersive();
        root.requestApplyInsets();
        refreshFpsRates();
        applyFps();
        drivingControls.setSteeringMode(steeringMode);
        drivingControls.setLayout(controlLayout);
        drivingControls.setSensitivity(steeringSensitivity);
        drivingControls.setEnabled(drivingControls.isEnabled());
        nativeDriving(touchMenu.inGame());
        nativePause(touchEditor);
        syncMenu();
    }
    @Override public void onPause() {
        activityResumed = false;
        if (lanLock != null && lanLock.isHeld()) lanLock.release();
        if (lanWifiLock != null && lanWifiLock.isHeld()) lanWifiLock.release();
        android.util.Log.i("CrashdayLifecycle", "onPause started=" + started);
        closeTextEditor();
        cancelInput();
        nativeDriving(false);
        nativePause(true);
        super.onPause();
    }
    @Override protected void onDestroy() {
        cancelInput();
        drivingControls.setEnabled(false);
        if (Build.VERSION.SDK_INT >= 33 && backCallback != null)
            getOnBackInvokedDispatcher().unregisterOnBackInvokedCallback((android.window.OnBackInvokedCallback) backCallback);
        super.onDestroy();
    }

    private boolean mouseMotion(View view, MotionEvent event) {
        int action = event.getActionMasked();
        if (action == MotionEvent.ACTION_CANCEL) {
            cancelInput();
            return true;
        }
        int index = event.getActionIndex(), id = event.getPointerId(index);
        if ((action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN) && mousePointer < 0) {
            mousePointer = id;
            nativePointer(pointerX(event.getRawX(index)), pointerY(event.getRawY(index)), false);
            nativeButton(true);
        } else if (action == MotionEvent.ACTION_MOVE && mousePointer >= 0) {
            index = event.findPointerIndex(mousePointer);
            if (index >= 0) nativePointer(pointerX(event.getRawX(index)), pointerY(event.getRawY(index)), false);
        } else if ((action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP) && id == mousePointer) {
            nativePointer(pointerX(event.getRawX(index)), pointerY(event.getRawY(index)), false);
            nativeButton(false);
            mousePointer = -1;
        }
        return true;
    }

    @Override public boolean onTouch(View view, MotionEvent event) {
        if (touchEditor) return drivingControls.handleMotion(event);
        if (portSettings.isFull()) return portSettings.onTouch(event);
        if ((event.getSource() & InputDevice.SOURCE_MOUSE) == InputDevice.SOURCE_MOUSE) {
            nativeTouchMode(false);
            return mouseMotion(view, event);
        }
        // Editor picture buttons require the original mouse-present state.
        nativeTouchMode(!touchMenu.isEditor());
        if (mousePointer >= 0) nativeButton(false);
        mousePointer = -1;
        if (sceneControls.getVisibility() == View.VISIBLE && sceneControls.handleMotion(event)) return true;
        if (drivingControls.getVisibility() == View.VISIBLE && drivingControls.handleMotion(event)) {
            if (touchMenu.awaitingRaceStart()) touchMenu.onDrivingInput();
            return true;
        }
        return touchMenu.handleMotion(event);
    }

    @Override public boolean onGenericMotionEvent(MotionEvent event) {
        if ((event.getSource() & (InputDevice.SOURCE_GAMEPAD | InputDevice.SOURCE_JOYSTICK)) != 0) {
            nativeTouchMode(false);
            drivingControls.setEnabled(false);
        }
        return super.onGenericMotionEvent(event);
    }

    private void back() {
        if (!started) {
            if (launch != null) {
                Launch.openLauncher(this, launch.distribution());
                finish();
            } else {
                super.onBackPressed();
            }
            return;
        }
        if (textEditorActive) closeTextEditor();
        else if (touchEditor) closeTouchEditor(false);
        else if (portSettings.isFull()) portSettings.onKey(27, true);
        else {
            touchMenu.syncNativeScene();
            touchMenu.onBack();
        }
    }

    @Override public void onBackPressed() { back(); }

    @Override public boolean dispatchKeyEvent(KeyEvent event) {
        if (event.getKeyCode() == KeyEvent.KEYCODE_BACK) {
            if (event.getAction() == KeyEvent.ACTION_UP) back();
            return true;
        }
        int vk = virtualKey(event.getKeyCode());
        if (vk == 0) return super.dispatchKeyEvent(event);
        if (vk == 27) {
            if (event.getAction() == KeyEvent.ACTION_UP) back();
            return true;
        }
        if (touchEditor) return true;
        if (portSettings.isFull()) portSettings.onKey(vk, event.getAction() == KeyEvent.ACTION_DOWN);
        else {
            touchMenu.onNativeKey(vk, event.getAction() == KeyEvent.ACTION_DOWN);
            if (!portSettings.isFull()) nativeKey(vk, event.getAction() == KeyEvent.ACTION_DOWN);
        }
        return true;
    }

    private final class TextInputView extends View {
        TextInputView(android.content.Context context) { super(context); }

        @Override public android.view.inputmethod.InputConnection onCreateInputConnection(android.view.inputmethod.EditorInfo info) {
            info.inputType = android.text.InputType.TYPE_CLASS_TEXT | android.text.InputType.TYPE_TEXT_FLAG_NO_SUGGESTIONS;
            info.imeOptions = android.view.inputmethod.EditorInfo.IME_ACTION_DONE |
                android.view.inputmethod.EditorInfo.IME_FLAG_NO_EXTRACT_UI | android.view.inputmethod.EditorInfo.IME_FLAG_NO_FULLSCREEN |
                android.view.inputmethod.EditorInfo.IME_FLAG_NO_PERSONALIZED_LEARNING;
            final int generation = textGeneration;
            return new android.view.inputmethod.BaseInputConnection(this, true) {
                @Override public boolean commitText(CharSequence text, int newCursorPosition) {
                    if (generation != textGeneration) return true;
                    nativeText(text.toString());
                    return true;
                }

                @Override public boolean deleteSurroundingText(int before, int after) {
                    if (generation != textGeneration) return true;
                    if (before == 0 && after == 0) return true;
                    // shortcut: only one Backspace, extend after native range deletion is verified.
                    if (before != 1 || after != 0) return false;
                    nativeDelete();
                    return true;
                }

                @Override public boolean sendKeyEvent(android.view.KeyEvent event) {
                    if (generation != textGeneration) return true;
                    int code = event.getKeyCode();
                    if (code == KeyEvent.KEYCODE_DEL) {
                        if (event.getAction() == KeyEvent.ACTION_DOWN) nativeDelete();
                        return true;
                    }
                    if (code == KeyEvent.KEYCODE_ENTER || code == KeyEvent.KEYCODE_DPAD_CENTER) {
                        nativeKey(13, event.getAction() == KeyEvent.ACTION_DOWN);
                        return true;
                    }
                    if (code == KeyEvent.KEYCODE_BACK) {
                        if (event.getAction() == KeyEvent.ACTION_UP) back();
                        return true;
                    }
                    return super.sendKeyEvent(event);
                }
            };
        }
    }

    private static int virtualKey(int code) {
        if (code == KeyEvent.KEYCODE_ESCAPE) return 27;
        if (code == KeyEvent.KEYCODE_DPAD_LEFT) return 37;
        if (code == KeyEvent.KEYCODE_DPAD_UP) return 38;
        if (code == KeyEvent.KEYCODE_DPAD_RIGHT) return 39;
        if (code == KeyEvent.KEYCODE_DPAD_DOWN) return 40;
        if (code == KeyEvent.KEYCODE_ENTER || code == KeyEvent.KEYCODE_DPAD_CENTER) return 13;
        if (code == KeyEvent.KEYCODE_SPACE) return 32;
        if (code == KeyEvent.KEYCODE_TAB) return 9;
        if (code == KeyEvent.KEYCODE_DEL) return 8;
        if (code >= KeyEvent.KEYCODE_A && code <= KeyEvent.KEYCODE_Z) return 'A' + code - KeyEvent.KEYCODE_A;
        if (code >= KeyEvent.KEYCODE_0 && code <= KeyEvent.KEYCODE_9) return '0' + code - KeyEvent.KEYCODE_0;
        return 0;
    }
}
