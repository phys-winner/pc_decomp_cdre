package org.ut3.port;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.BatteryManager;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.os.Handler;
import android.provider.Settings;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.View;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.widget.TextView;
import android.widget.Toast;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.ByteArrayOutputStream;
import java.nio.charset.StandardCharsets;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public final class GameActivity extends Activity implements SurfaceHolder.Callback {
    static { System.loadLibrary("ut3"); }
    static native void nativeSurface(Surface surface);
    static native int nativeStart(String userdata, String renderer, boolean fixedSeed, int renderWidth, int renderHeight);
    static native int nativeStatus();
    static native void nativePause(boolean paused);
    static native void nativeKey(int vk, boolean down);
    static native boolean nativePointer(float x, float y, boolean relative);
    static native boolean nativeUiBegin(long context);
    static native int nativeUiControl(long context);
    static native boolean nativeUiScroll(int steps, long context);
    static native void nativeButton(boolean down);
    static native void nativePower(int plugged, int present, int level, int scale, int status);
    static native boolean nativeTouch(float moveX, float moveY, float lookX, float lookY, int heldMask, long context);
    static native boolean nativeTouchStick(float x, float y, long context);
    /** Weapon bar swipe: 1 preview a slot, 2 switch to it, 3 cancel. */
    static native boolean nativeTouchWeapon(int phase, int slot, long context);
    /** Weapon bar slots (low word) and vehicle flags (high word) published by the game script. */
    static native long nativeTouchDetails();
    static native void nativeTouchReset();
    static native long nativeTouchContext();
    static native int nativeTouchVehicle();
    static native void nativeSettings();
    static native boolean nativeText(String text, long context);
    static native boolean nativeDelete(int count, long context);
    static native int nativeConfigure(int fps, int queryWaitUs, int precacheWaitUs, boolean benchmark);

    private final Handler handler = new Handler();
    private TextView status;
    private GameControls controls;
    private PortPreferences portPreferences;
    private final ExecutorService settingsIO = Executors.newSingleThreadExecutor();
    private boolean settingsRefreshPending;
    private boolean surfaceReady, started;
    private String renderer;
    private int powerTicks;
    private int displayWidth, displayHeight;

    PortPreferences portSettings() { return portPreferences; }

    private byte[] asset(String name) throws IOException {
        try (InputStream in = getAssets().open(name); ByteArrayOutputStream out = new ByteArrayOutputStream()) {
            byte[] buffer = new byte[8192];
            for (int count; (count = in.read(buffer)) != -1;) out.write(buffer, 0, count);
            return out.toByteArray();
        }
    }

    void savePortSettings(Runnable complete) {
        settingsIO.execute(() -> {
            try {
                portPreferences.save();
                handler.post(() -> { if (complete != null && !isFinishing()) complete.run(); });
            } catch (IOException error) {
                handler.post(() -> Toast.makeText(this, "Не удалось сохранить настройки: " + error.getMessage(), Toast.LENGTH_LONG).show());
            }
        });
    }

    void openPortSettings() {
        controls.release();
        if ((nativeTouchContext() & 3) == 2) {
            nativeKey(27, true);
            nativeKey(27, false);
        }
        nativeSettings();
    }

    private void refreshPortSettings() {
        if (settingsRefreshPending) return;
        settingsRefreshPending = true;
        settingsIO.execute(() -> {
            try {
                boolean changed = portPreferences.reloadIfChanged();
                int revision = portPreferences.getInt("layoutRevision", 0);
                boolean edit = revision != portPreferences.getInt("lastLayoutRevision", 0);
                if (edit) { portPreferences.put("lastLayoutRevision", revision); portPreferences.save(); }
                handler.post(() -> {
                    settingsRefreshPending = false;
                    if (!isFinishing() && controls != null) {
                        if (changed) controls.requestSettingsReload();
                        if (edit) controls.requestLayoutEditor();
                    }
                });
            } catch (IOException error) {
                handler.post(() -> { settingsRefreshPending = false; status.setText("Не удалось прочитать настройки управления: " + error.getMessage()); });
            }
        });
    }

    private int fpsLimit() {
        int fps = portPreferences.getInt("fpsLimit", 60);
        if (fps == 0) {
            float refresh = getWindowManager().getDefaultDisplay().getRefreshRate();
            for (android.view.Display.Mode mode : getWindowManager().getDefaultDisplay().getSupportedModes())
                if (mode.getPhysicalWidth() == getWindowManager().getDefaultDisplay().getMode().getPhysicalWidth() &&
                    mode.getPhysicalHeight() == getWindowManager().getDefaultDisplay().getMode().getPhysicalHeight())
                    refresh = Math.max(refresh, mode.getRefreshRate());
            return Math.max(1, Math.min(1000, Math.round(refresh)));
        }
        return fps == 30 || fps == 45 || fps == 60 ? fps : 60;
    }
    private final Runnable progress = new Runnable() {
        @Override public void run() {
            if (!started) return;
            refreshPortSettings();
            if (powerTicks++ % 60 == 0) updatePowerSnapshot();
            int result = nativeStatus();
            if (result == Integer.MAX_VALUE) status.setVisibility(View.GONE);
            else if (result != Integer.MIN_VALUE) {
                status.setText("Игра остановилась: код " + result + ". Журнал: userdata/ut3.log");
                status.setVisibility(View.VISIBLE);
                return;
            }
            handler.postDelayed(this, 500);
        }
    };

    private void updatePowerSnapshot() {
        Intent battery = registerReceiver(null, new IntentFilter(Intent.ACTION_BATTERY_CHANGED));
        if (battery == null) { nativePower(-1, -1, -1, -1, 1); return; }
        nativePower(battery.getIntExtra(BatteryManager.EXTRA_PLUGGED, -1),
            battery.hasExtra(BatteryManager.EXTRA_PRESENT) ?
                (battery.getBooleanExtra(BatteryManager.EXTRA_PRESENT, false) ? 1 : 0) : -1,
            battery.getIntExtra(BatteryManager.EXTRA_LEVEL, -1),
            battery.getIntExtra(BatteryManager.EXTRA_SCALE, -1),
            battery.getIntExtra(BatteryManager.EXTRA_STATUS, BatteryManager.BATTERY_STATUS_UNKNOWN));
    }

    private void immersive() {
        getWindow().getDecorView().setSystemUiVisibility(View.SYSTEM_UI_FLAG_FULLSCREEN |
            View.SYSTEM_UI_FLAG_HIDE_NAVIGATION | View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY |
            View.SYSTEM_UI_FLAG_LAYOUT_STABLE | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN |
            View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION);
    }

    @Override public void onWindowFocusChanged(boolean focused) {
        super.onWindowFocusChanged(focused);
        if (focused) immersive();
        else if (controls != null) controls.release();
    }

    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        try {
            PortCrypto.init(getExternalFilesDir(null));
            portPreferences = new PortPreferences(getExternalFilesDir(null));
        }
        catch (IOException error) {
            new AlertDialog.Builder(this).setTitle("Хранилище UT3").setMessage(error.getMessage())
                .setPositiveButton("Закрыть", (dialog, which) -> finish()).setCancelable(false).show();
            return;
        }
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        WindowManager.LayoutParams windowOptions = getWindow().getAttributes();
        windowOptions.preferredRefreshRate = fpsLimit();
        windowOptions.layoutInDisplayCutoutMode = WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
        getWindow().setAttributes(windowOptions);
        immersive();
        FrameLayout root = new FrameLayout(this);
        SurfaceView surface = new SurfaceView(this);
        surface.getHolder().addCallback(this);
        root.addView(surface);
        controls = new GameControls(this);
        controls.setSettingsAction(this::openPortSettings);
        root.addView(controls);
        status = new TextView(this);
        status.setTextColor(0xFFFFFFFF);
        status.setBackgroundColor(0xC0000000);
        status.setTextSize(18);
        status.setPadding(24, 16, 24, 16);
        status.setGravity(Gravity.CENTER);
        FrameLayout.LayoutParams label = new FrameLayout.LayoutParams(-1, -2, Gravity.BOTTOM);
        root.addView(status, label);
        status.setOnClickListener(v -> {
            if (Build.VERSION.SDK_INT >= 30 && !Environment.isExternalStorageManager()) {
                Intent intent = new Intent(Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION,
                                           Uri.parse("package:" + getPackageName()));
                startActivity(intent);
            }
        });
        setContentView(root);
        String requested = getIntent().getStringExtra("renderer");
        if ("gles".equals(requested) || "dxvk".equals(requested) || "dxvk-turnip".equals(requested)) {
            renderer = requested;
        } else {
            String saved = portPreferences.getString("renderer", "gles");
            renderer = "dxvk".equals(saved) || "dxvk-turnip".equals(saved) ? saved : "gles";
            startIfReady();
        }
    }

    private void startIfReady() {
        if (started || !surfaceReady || renderer == null || displayWidth <= 0 || displayHeight <= 0 || displayWidth < displayHeight) return;
        if (Build.VERSION.SDK_INT >= 30 && !Environment.isExternalStorageManager()) {
            status.setText("Нужен доступ к файлам UT3. Нажмите, чтобы разрешить доступ к /sdcard/UT3.");
            return;
        }
        if (Build.VERSION.SDK_INT == 29 && checkSelfPermission("android.permission.READ_EXTERNAL_STORAGE") != 0) {
            requestPermissions(new String[]{"android.permission.READ_EXTERNAL_STORAGE", "android.permission.WRITE_EXTERNAL_STORAGE"}, 1);
            return;
        }
        if (!new File("/sdcard/UT3/images/UT3.exe").isFile() || !new File("/sdcard/UT3/game/UTGame").isDirectory()) {
            status.setText("Не найдены данные игры: /sdcard/UT3/game и /sdcard/UT3/images.");
            return;
        }
        File external = getExternalFilesDir(null);
        if (external == null) { status.setText("Хранилище приложения недоступно."); return; }
        File userdata = new File(external, "userdata");
        if (!userdata.isDirectory() && !userdata.mkdirs()) { status.setText("Не удалось создать userdata."); return; }
        int renderWidth, renderHeight;
        try {
            if ("dxvk-turnip".equals(renderer)) {
                File debug = new File(userdata, "tu-debug.txt");
                if (!debug.exists() && !debug.createNewFile()) throw new IOException("Cannot create driver diagnostics file");
            }
            int requestedHeight = portPreferences.getInt("renderHeight", 0);
            renderHeight = requestedHeight == 480 || requestedHeight == 720 || requestedHeight == 1080 ? requestedHeight : displayHeight;
            renderWidth = GameSettings.renderWidth(displayWidth, displayHeight, renderHeight);
            File engine = new File(userdata, "Documents/My Games/Unreal Tournament 3/UTGame/Config/UTEngine.ini");
            GameSettings.prepare(engine, new File("/sdcard/UT3/game"), renderWidth, renderHeight, fpsLimit(), portPreferences.getString("language", "INT"), renderer);
            String options = "RUS".equals(portPreferences.getString("language", "INT")) ? "AndroidPortOptions-RUS.ini" : "AndroidPortOptions.ini";
            GameSettings.prepareNativeUi(engine, new File("/sdcard/UT3/game"), userdata,
                asset("AndroidPort.u"), new String(asset(options), StandardCharsets.UTF_8));
        } catch (IOException | IllegalArgumentException error) {
            status.setText("Не удалось подготовить графику: " + error.getMessage());
            return;
        }
        int error = nativeConfigure(fpsLimit(), getIntent().getIntExtra("queryWaitUs", 0),
            getIntent().getIntExtra("precacheWaitUs", 50), getIntent().getBooleanExtra("benchmark", false));
        if (error == 0) error = nativeStart(userdata.getAbsolutePath(), renderer, getIntent().getBooleanExtra("fixedSeed", false), renderWidth, renderHeight);
        if (error != 0) { status.setText("Не удалось запустить игровой поток: " + error); return; }
        started = true;
        status.setClickable(false);
        status.setText("Загрузка Unreal Tournament 3 — " + (renderer.startsWith("dxvk") ? "DXVK (Vulkan)" : "OpenGL ES") + "…");
        handler.post(progress);
    }

    @Override public void surfaceCreated(SurfaceHolder holder) {
        nativeSurface(holder.getSurface());
        surfaceReady = true;
        startIfReady();
    }
    @Override public void surfaceChanged(SurfaceHolder holder, int format, int width, int height) {
        displayWidth = width;
        displayHeight = height;
        nativeSurface(holder.getSurface());
        startIfReady();
    }
    @Override public void surfaceDestroyed(SurfaceHolder holder) {
        surfaceReady = false;
        controls.release();
        nativeSurface(null);
    }
    @Override protected void onResume() { super.onResume(); if (portPreferences != null) { updatePowerSnapshot(); nativePause(false); startIfReady(); } }
    @Override protected void onPause() { if (controls != null) controls.release(); nativePause(true); super.onPause(); }
    @Override protected void onDestroy() { handler.removeCallbacks(progress); settingsIO.shutdown(); super.onDestroy(); }
    @Override public void onRequestPermissionsResult(int request, String[] permissions, int[] results) {
        super.onRequestPermissionsResult(request, permissions, results);
        if (request == 1 && results.length > 0 && results[0] == 0) startIfReady();
    }
    @Override public void onBackPressed() {
        if (controls != null && controls.handleBack()) return;
        nativeKey(27, true);
        nativeKey(27, false);
    }
    private long backDownTime = -1;
    private boolean backConsumed;
    @Override public boolean dispatchKeyEvent(KeyEvent event) {
        int key = event.getKeyCode(), vk = 0;
        if (key == KeyEvent.KEYCODE_BACK) {
            if (event.getAction() == KeyEvent.ACTION_DOWN) {
                if (backDownTime != event.getDownTime()) {
                    backDownTime = event.getDownTime();
                    backConsumed = controls != null && controls.handleBack();
                }
                if (!backConsumed) nativeKey(27, true);
                return true;
            }
            if (event.getAction() == KeyEvent.ACTION_UP) {
                if (backDownTime == event.getDownTime()) {
                    if (!backConsumed) nativeKey(27, false);
                    backDownTime = -1;
                    backConsumed = false;
                }
                return true;
            }
        }
        if (key >= KeyEvent.KEYCODE_A && key <= KeyEvent.KEYCODE_Z) vk = 'A' + key - KeyEvent.KEYCODE_A;
        else if (key >= KeyEvent.KEYCODE_0 && key <= KeyEvent.KEYCODE_9) vk = '0' + key - KeyEvent.KEYCODE_0;
        else if (key >= KeyEvent.KEYCODE_F1 && key <= KeyEvent.KEYCODE_F12) vk = 0x70 + key - KeyEvent.KEYCODE_F1;
        else if (key == KeyEvent.KEYCODE_SPACE) vk = 32;
        else if (key == KeyEvent.KEYCODE_ENTER) vk = 13;
        else if (key == KeyEvent.KEYCODE_GRAVE) vk = 0xC0;
        else if (key == KeyEvent.KEYCODE_MINUS) vk = 0xBD;
        else if (key == KeyEvent.KEYCODE_PERIOD) vk = 0xBE;
        else if (key == KeyEvent.KEYCODE_DEL) vk = 8;
        else if (key == KeyEvent.KEYCODE_ESCAPE) vk = 27;
        if (vk != 0 && (event.getAction() == KeyEvent.ACTION_DOWN || event.getAction() == KeyEvent.ACTION_UP)) {
            nativeKey(vk, event.getAction() == KeyEvent.ACTION_DOWN);
            return true;
        }
        return super.dispatchKeyEvent(event);
    }
}
