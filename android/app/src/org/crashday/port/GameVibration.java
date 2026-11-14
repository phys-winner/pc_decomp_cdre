package org.crashday.port;

import android.content.Context;
import android.media.AudioAttributes;
import android.os.Build;
import android.os.CombinedVibration;
import android.os.VibrationEffect;
import android.os.VibrationAttributes;
import android.os.Vibrator;
import android.os.VibratorManager;
import android.view.InputDevice;

final class GameVibration {
    private static final AudioAttributes ATTRIBUTES = new AudioAttributes.Builder()
        .setUsage(AudioAttributes.USAGE_GAME).setContentType(AudioAttributes.CONTENT_TYPE_SONIFICATION).build();
    private final Vibrator device;
    private InputDevice controller;
    private boolean deviceRunning, controllerRunning;

    GameVibration(Context context) { device = (Vibrator)context.getSystemService(Context.VIBRATOR_SERVICE); }

    void refreshController(int preferred) {
        stopController();
        controller = InputDevice.getDevice(preferred);
        if (controller != null && !controller.isVirtual() &&
            (controller.supportsSource(InputDevice.SOURCE_GAMEPAD) || controller.supportsSource(InputDevice.SOURCE_JOYSTICK))) return;
        controller = null;
        for (int id : InputDevice.getDeviceIds()) {
            InputDevice candidate = InputDevice.getDevice(id);
            if (candidate != null && !candidate.isVirtual() &&
                (candidate.supportsSource(InputDevice.SOURCE_GAMEPAD) || candidate.supportsSource(InputDevice.SOURCE_JOYSTICK))) {
                controller = candidate; break;
            }
        }
    }

    private static VibrationEffect effect(int strength) {
        return VibrationEffect.createOneShot(150, Math.max(1, (strength * 255 + 32767) / 65535));
    }

    void update(int motors, int preferred, boolean padEnabled, boolean deviceEnabled) {
        if (preferred != Integer.MIN_VALUE && (controller == null || controller.getId() != preferred)) refreshController(preferred);
        int low = motors & 0xFFFF, high = motors >>> 16, strength = Math.max(low, high);
        if (deviceEnabled && strength != 0 && device != null && device.hasVibrator()) {
            try { device.vibrate(effect(strength), ATTRIBUTES); deviceRunning = true; }
            catch (RuntimeException e) { android.util.Log.w("Crashday", "Device vibration unavailable", e); }
        } else stopDevice();
        if (!padEnabled || strength == 0 || controller == null) { stopController(); return; }
        try {
            if (Build.VERSION.SDK_INT >= 31) {
                VibratorManager manager = controller.getVibratorManager();
                int[] ids = manager.getVibratorIds();
                if (ids.length == 0) return;
                CombinedVibration.ParallelCombination combined = CombinedVibration.startParallel();
                for (int i = 0; i < ids.length; ++i) {
                    int motor = ids.length == 1 || i > 1 ? strength : i == 0 ? low : high;
                    if (motor != 0) combined.addVibrator(ids[i], effect(motor));
                }
                manager.vibrate(combined.combine(), new VibrationAttributes.Builder().setUsage(Build.VERSION.SDK_INT >= 33
                    ? VibrationAttributes.USAGE_MEDIA : VibrationAttributes.USAGE_PHYSICAL_EMULATION).build());
            } else {
                Vibrator vibrator = controller.getVibrator();
                if (!vibrator.hasVibrator()) return;
                vibrator.vibrate(effect(strength), ATTRIBUTES);
            }
            controllerRunning = true;
        } catch (RuntimeException e) { android.util.Log.w("Crashday", "Controller vibration unavailable", e); }
    }

    private void stopDevice() {
        if (!deviceRunning) return;
        deviceRunning = false;
        try { device.cancel(); }
        catch (RuntimeException e) { android.util.Log.w("Crashday", "Cannot stop device vibration", e); }
    }

    private void stopController() {
        if (!controllerRunning || controller == null) return;
        controllerRunning = false;
        try {
            if (Build.VERSION.SDK_INT >= 31) controller.getVibratorManager().cancel();
            else controller.getVibrator().cancel();
        } catch (RuntimeException e) { android.util.Log.w("Crashday", "Cannot stop controller vibration", e); }
    }

    void stop() { stopDevice(); stopController(); }
}
