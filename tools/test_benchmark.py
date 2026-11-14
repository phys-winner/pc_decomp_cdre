"""Check real-frame parsing, overlap removal and the benchmark's reported math."""
import unittest
import subprocess
from unittest.mock import Mock, patch

from benchmark import latency, summarize, widgets, surface_latency, open_replay_popup, ui_scene, intro_key


class BenchmarkTest(unittest.TestCase):
    def test_startup_uses_the_current_scene(self):
        self.assertIsNone(ui_scene(''))
        self.assertEqual(ui_scene('[ui] scene=8 cwd=x\n[ui] scene=15 cwd=x'), 15)
        self.assertEqual(ui_scene('[ui] scene=8 cwd=x\n[ui] scene=0 cwd=x'), 0)
        seen = set()
        keys = [intro_key(f'[ui] scene={scene}', seen) for scene in (8, 8, 15, 15, 8, 0)]
        self.assertEqual(keys, [66, None, 66, None, None, None])

    def test_popup_retries_lost_input_and_verifies_the_option(self):
        opened = ((4 << 20) | 0x10000, 0, 0, 0)
        select = Mock()
        read = Mock(side_effect=[(0,)] * 7 + [opened])
        with patch('benchmark.time.sleep'):
            self.assertEqual(open_replay_popup(read, select, 4), opened)
        self.assertEqual(select.call_count, 2)
        select.assert_called_with(4)
        with patch('benchmark.time.sleep'), self.assertRaises(TimeoutError):
            open_replay_popup(lambda: (0,), select, 4)
        with self.assertRaises(RuntimeError):
            open_replay_popup(lambda: opened, select, 6)

    def test_surface_query_recovers_and_does_not_hide_persistent_failure(self):
        error = subprocess.CalledProcessError(1, ['dumpsys'])
        shell = Mock(side_effect=[error, 'frames'])
        with patch('benchmark.time.sleep'):
            self.assertEqual(surface_latency(shell, 'game'), 'frames')
        shell.assert_called_with('dumpsys', 'SurfaceFlinger', '--latency', 'game')
        self.assertEqual(shell.call_count, 2)
        shell = Mock(side_effect=error)
        with patch('benchmark.time.sleep'), self.assertRaises(subprocess.CalledProcessError):
            surface_latency(shell, 'game')
        self.assertEqual(shell.call_count, 3)

    def test_latency_uses_actual_present_and_ignores_pending_frames(self):
        self.assertEqual(latency("16666666\n1 20000000 3\n4 40000000 6\n7 20000000 9\n0 0 0\n1 9223372036854775807 3\n"),
                         [20000000, 40000000])

    def test_statistics_and_overlapping_samples(self):
        result = summarize([0, 20000000, 40000000, 40000000, 100000000])
        self.assertEqual(result["frames"], 3)
        self.assertAlmostEqual(result["fps"], 30)
        self.assertAlmostEqual(result["one_percent_low_fps"], 1000 / 60)
        self.assertEqual(result["frame_ms_p50"], 20)
        self.assertAlmostEqual(result["frame_ms_p95"], 56)
        self.assertEqual(result["frames_over_50ms"], 1)
        with self.assertRaises(ValueError):
            summarize([1, 1])

    def test_widgets_are_from_the_current_page_and_visible(self):
        text = "[ui] page 001\n[ui] 01 02 1 2 3 4 1/1 old\n[ui] page 002\n"
        text += "[ui] 01 02 40.0 290.0 180.0 24.0 1/1 btnReplays\n[ui] 01 02 1 2 3 4 1/0 hidden\n"
        self.assertEqual(widgets(text), {"btnReplays": (40, 290, 180, 24)})


if __name__ == "__main__":
    unittest.main()
