package org.crashday.port;

import android.view.MotionEvent;

final class TouchMenuController {
    private static final int MAIN = 0, EVENT = 1, SETUP = 2, TRACK = 3, CAR = 4,
        OPTIONS = 5, BROWSER = 6, PAUSE = 7, OTHER = 8, GAME = 9, CUSTOM = 10, ORIGINAL_CONTROLS = 11, GAME_OPTIONS = 12,
        LOADING = 13, READY = 14, INTRO_CONTROLLER = 15, CINEMATIC = 16, WRECKED = 17, FINISHED = 18,
        EDITOR = 19, REPLAY = 20;

    private final GameActivity activity;
    private int screen = MAIN, selection, raceConfirmations, pointer = -1;
    private float lastX, lastY, downX, downY, lastWheelY, wheelRemainder, lastOptionX, optionRemainder;
    private boolean swiping, awaitingRaceStart, emitting, intro = true, holding, dragging;
    private int introSteps, gestureControl;
    private Runnable holdRunnable;

    TouchMenuController(GameActivity activity) {
        this.activity = activity;
        introSteps = 1;
    }

    private int count() {
        switch (screen) {
            case MAIN: return 7;
            case EVENT: return 7;
            case SETUP: return 9;
            case TRACK: return 11;
            case CAR: return 16;
            case OPTIONS: return 6;
            case BROWSER: return 5;
            case PAUSE: return 4;
            case OTHER: return 7;
            case ORIGINAL_CONTROLS: return 3;
            case GAME_OPTIONS: return 16;
            default: return 0;
        }
    }

    private final java.util.ArrayDeque<Integer> pending = new java.util.ArrayDeque<>();
    private static final int PAD_ACCEPT = 0x11000, PAD_BACK = 0x12000, PAD_START = 0x10010, MOUSE_CLICK = 0x20000, RACE_CONTINUE = 0x30000, RIGHT_CLICK = 0x40000, REPLAY_CLOSE = 0x50000;
    private int active, generation;
    private boolean editorQueryPending;
    private long editorQueryFrame;

    private void pulse(int key) {
        pending.add(key);
        pending.add(-key);
        pump();
    }

    void onHudTap(int region) { pulse(0x10000 | (region == 1 ? 0x8000 : 0x4000)); }

    private void pad() {
        if (intro) {
            int key = introSteps++ == 0 ? PAD_START : MOUSE_CLICK;
            pending.add(key);
            pending.add(-key);
            if (introSteps >= 2) {
                intro = false;
                activity.markIntroSeen();
            }
            pump();
        } else {
            pulse(MOUSE_CLICK);
        }
    }

    private void pump() {
        if (emitting || pending.isEmpty()) return;
        int event = pending.remove();
        int code = Math.abs(event);
        boolean down = event > 0;
        active = event;
        emitting = true;
        if (code == REPLAY_CLOSE) GameActivity.nativeReplaySelect(9);
        else if (code == RIGHT_CLICK) GameActivity.nativeRightButton(down);
        else if (code == RACE_CONTINUE) {
            GameActivity.nativeKey(32, down);
            GameActivity.nativeGamepad(0x2000, down);
        } else if (code == MOUSE_CLICK) {
            GameActivity.nativePointer(lastX / activity.getWidth(), lastY / activity.getHeight(), false);
            GameActivity.nativeButton(down);
        } else if (code >= 0x10000) GameActivity.nativeGamepad(code & 0xFFFF, down);
        else GameActivity.nativeKey(code, down);
        int token = generation;
        activity.getWindow().getDecorView().postDelayed(() -> {
            if (token != generation) return;
            emitting = false;
            active = 0;
            pump();
        }, down ? 140 : 50);
    }

    private void cancelPending() {
        ++generation;
        pending.clear();
        if (active > 0 && active != REPLAY_CLOSE) {
            if (active == RIGHT_CLICK) GameActivity.nativeRightButton(false);
            else if (active == RACE_CONTINUE) { GameActivity.nativeKey(32, false); GameActivity.nativeGamepad(0x2000, false); }
            else if (active == MOUSE_CLICK) GameActivity.nativeButton(false);
            else if (active >= 0x10000) GameActivity.nativeGamepad(active & 0xFFFF, false);
            else GameActivity.nativeKey(active, false);
        }
        active = 0;
        emitting = false;
    }

    private void move(int target, boolean emit) {
        int count = count();
        if (intro || screen == CUSTOM || screen == GAME || count == 0) return;
        target = Math.max(0, Math.min(count - 1, target));
        if (target == selection) return;
        int key = screen == CAR ? target < selection ? 0x10004 : 0x10008 : target < selection ? 0x10001 : 0x10002;
        int distance = Math.abs(target - selection);
        if (emit) for (int i = 0; i < distance; ++i) pulse(key);
        selection = target;
        activity.syncMenu();
    }

    private void selectRow(int row, boolean emit) {
        move(row, emit);
    }

    private int rowAt(float x, float y) {
        if (screen == BROWSER) {
            if (y < activity.getHeight() * .72f) return -1;
            return Math.max(0, Math.min(4, (int) (x / activity.getWidth() * 5)));
        }
        if (screen == CAR || screen == GAME || screen == CUSTOM) return -1;
        if (screen == ORIGINAL_CONTROLS) {
            if (y < activity.getHeight() * .45f) return 0;
            if (y > activity.getHeight() * .62f && y < activity.getHeight() * .70f) return 1;
            if (y > activity.getHeight() * .70f && y < activity.getHeight() * .78f) return 2;
            return -1;
        }
        if (screen == PAUSE) {
            if (x < activity.getWidth() * .3f || x > activity.getWidth() * .7f) return -1;
            int row = (int) ((y / activity.getHeight() - .34f) / .055f);
            return row >= 0 && row < count() ? row : -1;
        }
        if (x > activity.getWidth() * .7f) return -1;
        float start = screen == TRACK ? .285f : screen == SETUP ? .31f : .275f;
        float step = screen == TRACK ? .048f : .064f;
        int row = (int) ((y / activity.getHeight() - start) / step);
        return row >= 0 && row < count() ? row : -1;
    }

    private void activate(int row, boolean emit) {
        if (screen == CUSTOM) return;
        if (intro) {
            selection = 0;
            if (emit) pad();
            return;
        }
        if (row >= 0) selectRow(row, false);
        if (screen == SETUP && row >= 0 && emit) {
            pulse(0x10008);
            return;
        }
        if (screen == OPTIONS && selection == 5) {
            screen = CUSTOM;
            activity.openPortSettings();
            return;
        }
        switch (screen) {
            case MAIN:
                if (selection == 0) screen = BROWSER;
                else if (selection == 1) screen = EVENT;
                else if (selection == 6) screen = OPTIONS;
                else screen = OTHER;
                selection = 0;
                break;
            case EVENT:
                screen = selection == 3 ? SETUP : OTHER;
                selection = 0;
                break;
            case OPTIONS: screen = selection == 3 ? ORIGINAL_CONTROLS : selection == 0 ? GAME_OPTIONS : OTHER; selection = 0; break;
            case SETUP: screen = TRACK; selection = 0; break;
            case TRACK: screen = CAR; selection = 0; break;
            case CAR:
                activity.prepareControllerForRace();
                screen = GAME;
                selection = 0;
                raceConfirmations = 0;
                awaitingRaceStart = true;
                break;
            case PAUSE:
                if (selection == 0) {
                    screen = GAME;
                    awaitingRaceStart = false;
                } else screen = OTHER;
                break;
            case GAME:
                if (!awaitingRaceStart) return;
                ++raceConfirmations;
                break;
            default: break;
        }
        activity.syncMenu();
        if (emit) pad();
        if (emit && screen == GAME_OPTIONS) {
            editorQueryPending = true;
            editorQueryFrame = GameActivity.nativeUiFrame();
            activity.syncMenu();
        }
    }

    private void back() {
        if (screen == CUSTOM) {
            activity.closePortSettings();
            return;
        }
        switch (screen) {
            case EVENT: screen = MAIN; selection = 0; break;
            case SETUP: screen = EVENT; selection = 3; break;
            case TRACK: screen = SETUP; selection = 0; break;
            case CAR: screen = TRACK; selection = 0; break;
            case ORIGINAL_CONTROLS: screen = OPTIONS; selection = 3; break;
            case GAME_OPTIONS: screen = OPTIONS; selection = 0; break;
            case OPTIONS: screen = MAIN; selection = 0; break;
            case BROWSER: screen = MAIN; selection = 0; break;
            case PAUSE: screen = GAME; selection = 0; break;
            case GAME:
                if (awaitingRaceStart && raceConfirmations == 0) screen = CAR;
                else screen = PAUSE;
                selection = 0;
                raceConfirmations = 0;
                awaitingRaceStart = false;
                break;
            case EDITOR:
            case REPLAY: pulse(27); return;
            default: screen = MAIN; selection = 0; break;
        }
        activity.syncMenu();
        pulse(27);
    }

    private void sendPointer() {
        if (screen == PAUSE) return;
        GameActivity.nativePointer(activity.pointerX(lastX), activity.pointerY(lastY), false);
    }

    private void cancelHold() {
        if (holdRunnable != null) activity.getWindow().getDecorView().removeCallbacks(holdRunnable);
    }

    private void armHold() {
        cancelHold();
        if (holdRunnable == null) {
            holdRunnable = () -> {
                if (pointer < 0 || swiping || dragging) return;
                holding = true;
                activity.getWindow().getDecorView().performHapticFeedback(
                    android.view.HapticFeedbackConstants.LONG_PRESS);
            };
        }
        activity.getWindow().getDecorView().postDelayed(holdRunnable, 500);
    }

    private void stepOption(float x) {
        float step = activity.getResources().getDisplayMetrics().density * 32;
        optionRemainder += x - lastOptionX;
        lastOptionX = x;
        int steps = Math.max(-16, Math.min(16, (int) (optionRemainder / step)));
        for (int i = 0; i < Math.abs(steps); ++i) GameActivity.nativeMenuOption(steps > 0 ? 1 : -1);
        optionRemainder -= steps * step;
    }

    boolean handleMotion(MotionEvent event) {
        int action = event.getActionMasked();
        if (action == MotionEvent.ACTION_CANCEL) {
            cancelGesture();
            return true;
        }
        if (screen == GAME && !awaitingRaceStart) return false;
        int index = event.getActionIndex(), id = event.getPointerId(index);
        if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_POINTER_DOWN) {
            if (pointer >= 0) return true;
            pointer = id;
            lastX = downX = event.getRawX(index);
            lastY = downY = lastWheelY = event.getRawY(index);
            wheelRemainder = optionRemainder = 0;
            lastOptionX = downX;
            swiping = dragging = holding = false;
            gestureControl = screen == PAUSE ? 0 : GameActivity.nativeMenuControl(activity.pointerX(lastX), activity.pointerY(lastY));
            sendPointer();
            armHold();
            return true;
        }
        if (action == MotionEvent.ACTION_MOVE) {
            index = event.findPointerIndex(pointer);
            if (index < 0) {
                cancelGesture();
                return true;
            }
        } else if (id != pointer) return true;
        if (action == MotionEvent.ACTION_MOVE) {
            float x = event.getRawX(index), y = event.getRawY(index);
            float dx = x - downX, dy = y - downY;
            float threshold = activity.getResources().getDisplayMetrics().density * 16;
            lastX = x;
            lastY = y;
            if (dragging) {
                if (gestureControl == 2) stepOption(x);
                else if (gestureControl == 1) sendPointer();
                return true;
            }
            if (!swiping && Math.abs(dy) >= threshold && Math.abs(dy) > Math.abs(dx)) {
                swiping = true;
                cancelHold();
            }
            if (swiping) {
                wheelRemainder += y - lastWheelY;
                lastWheelY = y;
                int steps = (int) (wheelRemainder / (activity.getResources().getDisplayMetrics().density * 24));
                if (steps != 0) {
                    steps = Math.max(-16, Math.min(16, steps));
                    GameActivity.nativeMenuScroll(steps);
                    wheelRemainder -= steps * activity.getResources().getDisplayMetrics().density * 24;
                }
                return true;
            }
            if (!dragging && Math.abs(dx) >= threshold && Math.abs(dx) > Math.abs(dy)) {
                dragging = true;
                cancelHold();
                if (gestureControl == 1) {
                    sendPointer();
                    GameActivity.nativeButton(true);
                } else if (gestureControl == 2) stepOption(x);
                return true;
            }
            sendPointer();
            if (Math.abs(dx) >= threshold || Math.abs(dy) >= threshold) cancelHold();
            return true;
        }
        if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP) {
            lastX = event.getRawX(index);
            lastY = event.getRawY(index);
            if (!swiping && (!dragging || gestureControl == 1)) sendPointer();
            cancelHold();
            if (dragging && gestureControl == 1) GameActivity.nativeButton(false);
            if (dragging && gestureControl == 2) stepOption(lastX);
            if (!swiping && !holding && !dragging) {
                if (GameActivity.nativeProfileHit(activity.pointerX(lastX), activity.pointerY(lastY))) {
                    pointer = -1;
                    activity.editPlayerName();
                    return true;
                } else if (screen == WRECKED || screen == FINISHED) {
                    pulse(RACE_CONTINUE);
                } else if (screen == INTRO_CONTROLLER || GameActivity.nativeUiScene() == INTRO_CONTROLLER) {
                    pulse(PAD_START);
                } else if (screen == READY || awaitingRaceStart) {
                    pulse(13);
                } else if (screen == PAUSE) {
                    if (GameActivity.nativeRaceMenuSelect(activity.pointerX(lastX), activity.pointerY(lastY))) pulse(13);
                } else {
                    GameActivity.nativeButton(true);
                    GameActivity.nativeButton(false);
                }
                editorQueryPending = true;
                editorQueryFrame = GameActivity.nativeUiFrame();
                activity.syncMenu();
                if (intro) {
                    intro = false;
                    activity.markIntroSeen();
                }
            }
            pointer = -1;
            swiping = dragging = holding = false;
            return true;
        }
        return true;
    }

    void syncNativeScene() {
        if (isCustom()) return;
        int actual = GameActivity.nativeUiScene();
        if (actual >= 0 && actual != screen) {
            cancelGesture();
            screen = actual;
            selection = 0;
            editorQueryPending = false;
        }
        if (actual >= 0) awaitingRaceStart = actual == READY;
        if (editorQueryPending && GameActivity.nativeUiFrame() >= editorQueryFrame + 2) {
            editorQueryPending = false;
            if (GameActivity.nativeTextEditorWanted()) activity.openTextEditor();
            else activity.closeTextEditor();
        }
    }

    void cancelGesture() {
        cancelHold();
        editorQueryPending = false;
        editorQueryFrame = 0;
        cancelPending();
        if (pointer >= 0) GameActivity.nativeButton(false);
        pointer = -1;
        swiping = dragging = holding = false;
        GameActivity.nativeCancelInput();
    }

    void onBack() {
        cancelGesture();
        back();
    }

    void onNativeKey(int key, boolean down) {
        if (!down) return;
        if (key == 27) {
            onBack();
            return;
        }
        if (emitting || !pending.isEmpty()) return;
        if (key == 13) {
            activate(selection, false);
            return;
        }
        if (screen == CUSTOM) return;
        if (key == 38) move(selection - 1, false);
        else if (key == 40) move(selection + 1, false);
        else if (key == 37) move(selection - 1, false);
        else if (key == 39) move(selection + 1, false);
    }

    void onPauseButton() {
        cancelPending();
        // Keep the START/Escape pulse until the original game reports its pause scene.
        // Predicting PAUSE here made syncNativeScene cancel it while still in GAME.
        selection = 0;
        awaitingRaceStart = false;
        activity.syncMenu();
    }

    void skipCinematic() {
        if (screen == CINEMATIC) pulse(13);
    }

    void sceneKey(int key) {
        if (screen == EDITOR || screen == REPLAY) pulse(key);
    }

    void editorRotate() {
        if (screen == EDITOR) pulse(RIGHT_CLICK);
    }

    void replayAction(int item) {
        if (screen != REPLAY) return;
        if (item == 9) { pending.add(REPLAY_CLOSE); pump(); }
        else if (GameActivity.nativeReplaySelect(item)) pulse(13);
    }

    void replayPoint(float x, float y) {
        if (screen == REPLAY) {
            int key = GameActivity.nativeReplayPoint(x, y);
            if (key != 0) pulse(key);
        }
    }

    void onDrivingEnabled() {
        cancelPending();
        screen = GAME;
        selection = 0;
        if (awaitingRaceStart) activate(-1, true);
        else activity.syncMenu();
    }

    void onDrivingInput() {
        cancelPending();
        awaitingRaceStart = false;
        activity.syncMenu();
    }

    void onPortSettings() {
        cancelGesture();
        screen = CUSTOM;
        selection = 0;
    }

    void onSettingsClosed() {
        screen = OPTIONS;
        selection = 5;
        activity.syncMenu();
    }

    boolean isCustom() { return screen == CUSTOM; }
    boolean isCinematic() { return screen == CINEMATIC; }
    int scene() { return screen; }
    boolean isEditor() { return screen == EDITOR; }
    boolean isReplay() { return screen == REPLAY; }
    boolean isOptions() { return screen == OPTIONS; }
    boolean inGame() { return screen == GAME || screen == PAUSE || screen == READY; }
    boolean isPaused() { return screen == PAUSE; }
    boolean awaitingRaceStart() { return awaitingRaceStart; }
    int raceConfirmations() { return raceConfirmations; }
    int selection() { return selection; }
}
