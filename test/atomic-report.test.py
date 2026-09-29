import ctypes
import json
from pathlib import Path
import runpy
import sys
import tempfile
import threading
import time
import unittest

AtomicReport = runpy.run_path(str(Path(__file__).resolve().parents[1] / 'scripts/full-lean/atomic-report.py'))['AtomicReport']


class ReportTests(unittest.TestCase):
    def test_periodic_contention_never_blocks_monitoring_or_replaces_good_json(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'report.json'
            path.write_text('{"sample": 0}\n')
            now = [0]

            def locked(*args):
                error = PermissionError('controlled sharing violation')
                error.winerror = 32
                raise error

            writer = AtomicReport(path, replace=locked, clock=lambda: now[0],
                                  sleep=lambda _: self.fail('Never sleep while monitoring'))
            for n in range(5):
                now[0] = n
                self.assertFalse(writer.save({'sample': n + 1}))
                self.assertEqual(json.loads(path.read_text()), {'sample': 0})
            now[0] = 5
            with self.assertRaises(PermissionError):
                writer.save({'sample': 6})
            self.assertEqual(writer.contentions, 6)

    def test_final_retry_preserves_latest_evidence_and_terminal_errors(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'report.json'
            actual = AtomicReport(path)
            calls = []

            def busy_then_replace(source, target):
                calls.append(1)
                if len(calls) < 3:
                    error = PermissionError('busy')
                    error.winerror = 5
                    raise error
                return source.replace(target)

            actual.replace = busy_then_replace
            actual.save({'status': 'passed'}, final=True)
            self.assertEqual(json.loads(path.read_text()), {'status': 'passed', 'reportWriteContentions': 2})
            actual.replace = lambda *_: (_ for _ in ()).throw(OSError('terminal storage error'))
            with self.assertRaisesRegex(OSError, 'terminal storage error'):
                actual.save({'status': 'failed'}, final=True)

    @unittest.skipUnless(sys.platform == 'win32', 'Windows share-delete semantics')
    def test_real_deny_delete_handle_recovers_and_persistent_lock_is_bounded(self):
        from ctypes import wintypes
        kernel = ctypes.WinDLL('kernel32', use_last_error=True)
        kernel.CreateFileW.argtypes = [wintypes.LPCWSTR, wintypes.DWORD, wintypes.DWORD,
                                      ctypes.c_void_p, wintypes.DWORD, wintypes.DWORD, wintypes.HANDLE]
        kernel.CreateFileW.restype = wintypes.HANDLE
        kernel.CloseHandle.argtypes = [wintypes.HANDLE]
        kernel.CloseHandle.restype = wintypes.BOOL
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'report.json'
            writer = AtomicReport(path, timeout=1)
            writer.save({'sample': 0})
            handle = kernel.CreateFileW(str(path), 0x80000000, 3, None, 3, 0, None)
            self.assertNotEqual(handle, wintypes.HANDLE(-1).value)
            try:
                started = time.monotonic()
                for n in range(3):
                    self.assertFalse(writer.save({'sample': n + 1}))
                self.assertLess(time.monotonic() - started, .8)
                self.assertEqual(json.loads(path.read_text())['sample'], 0)
                with self.assertRaises(OSError):
                    writer.save({'sample': 4}, final=True)
            finally:
                kernel.CloseHandle(handle)
            self.assertTrue(writer.save({'sample': 5}))
            self.assertEqual(json.loads(path.read_text())['sample'], 5)
            handle = kernel.CreateFileW(str(path), 0x80000000, 3, None, 3, 0, None)
            timer = threading.Timer(.08, lambda: kernel.CloseHandle(handle))
            timer.start()
            try:
                self.assertTrue(writer.save({'status': 'finished'}, final=True))
            finally:
                timer.join()
            self.assertEqual(json.loads(path.read_text())['status'], 'finished')


unittest.main()
