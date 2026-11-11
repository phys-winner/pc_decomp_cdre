package org.crashday.port;

import android.view.InputDevice;
import android.view.KeyEvent;
import android.view.MotionEvent;

final class GamepadInput {
    private int deviceId = Integer.MIN_VALUE, keys, hat;
    private boolean leftButton, rightButton, leftAnalog, rightAnalog;
    private float lx, ly, rx, ry, lt, rt;

    static boolean externalInputAttached() {
        for (int id : InputDevice.getDeviceIds()) {
            InputDevice device = InputDevice.getDevice(id);
            if (device == null || device.isVirtual()) continue;
            String name = device.getName();
            name = name == null ? "" : name.toLowerCase(java.util.Locale.ROOT);
            if (name.contains("fingerprint") || name.startsWith("uinput-fpc") || name.startsWith("uinput-goodix")) continue;
            if (device.supportsSource(InputDevice.SOURCE_GAMEPAD) || device.supportsSource(InputDevice.SOURCE_JOYSTICK) ||
                device.getKeyboardType() == InputDevice.KEYBOARD_TYPE_ALPHABETIC) return true;
        }
        return false;
    }

    static boolean isController(KeyEvent event) {
        InputDevice device = event.getDevice();
        return event.isFromSource(InputDevice.SOURCE_GAMEPAD) || event.isFromSource(InputDevice.SOURCE_JOYSTICK) ||
            KeyEvent.isGamepadButton(event.getKeyCode()) || device != null &&
            (device.supportsSource(InputDevice.SOURCE_GAMEPAD) || device.supportsSource(InputDevice.SOURCE_JOYSTICK));
    }

    static int button(int key) {
        switch (key) {
            case KeyEvent.KEYCODE_DPAD_UP: return 0x0001;
            case KeyEvent.KEYCODE_DPAD_DOWN: return 0x0002;
            case KeyEvent.KEYCODE_DPAD_LEFT: return 0x0004;
            case KeyEvent.KEYCODE_DPAD_RIGHT: return 0x0008;
            case KeyEvent.KEYCODE_BUTTON_START: case KeyEvent.KEYCODE_MENU: return 0x0010;
            case KeyEvent.KEYCODE_BUTTON_SELECT: return 0x0020;
            case KeyEvent.KEYCODE_BUTTON_THUMBL: return 0x0040;
            case KeyEvent.KEYCODE_BUTTON_THUMBR: return 0x0080;
            case KeyEvent.KEYCODE_BUTTON_L1: return 0x0100;
            case KeyEvent.KEYCODE_BUTTON_R1: return 0x0200;
            case KeyEvent.KEYCODE_BUTTON_A: case KeyEvent.KEYCODE_DPAD_CENTER: return 0x1000;
            case KeyEvent.KEYCODE_BUTTON_B: case KeyEvent.KEYCODE_BACK: return 0x2000;
            case KeyEvent.KEYCODE_BUTTON_X: return 0x4000;
            case KeyEvent.KEYCODE_BUTTON_Y: return 0x8000;
            default: return 0;
        }
    }

    boolean key(KeyEvent event) {
        if (!isController(event)) return false;
        int code = event.getKeyCode(), mask = button(code);
        if (mask == 0 && code != KeyEvent.KEYCODE_BUTTON_L2 && code != KeyEvent.KEYCODE_BUTTON_R2) return false;
        if (event.getAction() != KeyEvent.ACTION_DOWN && event.getAction() != KeyEvent.ACTION_UP) return false;
        select(event.getDeviceId());
        InputDevice device = event.getDevice();
        if (device != null) {
            leftAnalog |= device.getMotionRange(MotionEvent.AXIS_LTRIGGER) != null || device.getMotionRange(MotionEvent.AXIS_BRAKE) != null;
            rightAnalog |= device.getMotionRange(MotionEvent.AXIS_RTRIGGER) != null || device.getMotionRange(MotionEvent.AXIS_GAS) != null;
        }
        boolean down = event.getAction() == KeyEvent.ACTION_DOWN && !event.isCanceled();
        if (code == KeyEvent.KEYCODE_BUTTON_L2) leftButton = down;
        else if (code == KeyEvent.KEYCODE_BUTTON_R2) rightButton = down;
        else keys = down ? keys | mask : keys & ~mask;
        send();
        return true;
    }

    private static InputDevice.MotionRange range(MotionEvent event, int axis) {
        InputDevice device = event.getDevice();
        if (device == null) return null;
        InputDevice.MotionRange range = device.getMotionRange(axis, event.getSource());
        return range != null ? range : device.getMotionRange(axis);
    }

    private static float axis(MotionEvent event, int axis, boolean trigger) {
        float value = event.getAxisValue(axis);
        if (!Float.isFinite(value)) return 0;
        InputDevice.MotionRange range = range(event, axis);
        float flat = trigger ? .02f : .05f;
        if (range != null) {
            float extent = trigger ? range.getRange() : value < 0 ? -range.getMin() : range.getMax();
            if (!(extent > 0)) return 0;
            value = (value - (trigger ? range.getMin() : 0)) / extent;
            flat = Math.max(flat, range.getFlat() / extent);
        }
        value = Math.max(trigger ? 0 : -1, Math.min(1, value));
        return Math.abs(value) <= flat ? 0 : value;
    }

    boolean motion(MotionEvent event) {
        if (!event.isFromSource(InputDevice.SOURCE_JOYSTICK)) return false;
        if (event.getActionMasked() == MotionEvent.ACTION_CANCEL) { release(); return true; }
        if (event.getActionMasked() != MotionEvent.ACTION_MOVE) return false;
        select(event.getDeviceId());
        lx = axis(event, MotionEvent.AXIS_X, false);
        ly = axis(event, MotionEvent.AXIS_Y, false);
        boolean alternate = range(event, MotionEvent.AXIS_RX) != null && range(event, MotionEvent.AXIS_RY) != null;
        rx = axis(event, alternate ? MotionEvent.AXIS_RX : MotionEvent.AXIS_Z, false);
        ry = axis(event, alternate ? MotionEvent.AXIS_RY : MotionEvent.AXIS_RZ, false);
        lt = Math.max(axis(event, MotionEvent.AXIS_LTRIGGER, true), axis(event, MotionEvent.AXIS_BRAKE, true));
        rt = Math.max(axis(event, MotionEvent.AXIS_RTRIGGER, true), axis(event, MotionEvent.AXIS_GAS, true));
        if (alternate && range(event, MotionEvent.AXIS_LTRIGGER) == null && range(event, MotionEvent.AXIS_BRAKE) == null)
            lt = axis(event, MotionEvent.AXIS_Z, true);
        if (alternate && range(event, MotionEvent.AXIS_RTRIGGER) == null && range(event, MotionEvent.AXIS_GAS) == null)
            rt = axis(event, MotionEvent.AXIS_RZ, true);
        leftAnalog |= lt > 0 || range(event, MotionEvent.AXIS_LTRIGGER) != null || range(event, MotionEvent.AXIS_BRAKE) != null;
        rightAnalog |= rt > 0 || range(event, MotionEvent.AXIS_RTRIGGER) != null || range(event, MotionEvent.AXIS_GAS) != null;
        float x = axis(event, MotionEvent.AXIS_HAT_X, false), y = axis(event, MotionEvent.AXIS_HAT_Y, false);
        hat = (x < -.5f ? 4 : x > .5f ? 8 : 0) | (y < -.5f ? 1 : y > .5f ? 2 : 0);
        send();
        return true;
    }

    private void select(int id) {
        if (deviceId == id) return;
        release();
        deviceId = id;
    }

    private void send() {
        // Physical pads use the original bindings; synthetic driving arrows would fire twice.
        GameActivity.nativeController(0x10000 | keys | hat, lx, ly, rx, ry,
            leftAnalog ? lt : leftButton ? 1 : 0, rightAnalog ? rt : rightButton ? 1 : 0);
    }

    void removed(int id) { if (deviceId == id) release(); }

    void release() {
        deviceId = Integer.MIN_VALUE;
        keys = hat = 0;
        leftButton = rightButton = leftAnalog = rightAnalog = false;
        lx = ly = rx = ry = lt = rt = 0;
        GameActivity.nativeDriving(false);
        send();
    }
}
