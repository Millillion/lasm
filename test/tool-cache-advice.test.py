"""Small, below-cap real-filesystem controls; never manufacture memory pressure."""
import hashlib
from pathlib import Path
import runpy
import subprocess
import sys
import tempfile
import time
import unittest
import json

control = runpy.run_path(str(Path(__file__).resolve().parents[1] / 'scripts/full-lean/advise-tool-cache.py'))
control['require_guard']()


class ToolCacheAdvice(unittest.TestCase):
    def test_monitor_reports_and_stops_inside_the_same_guard(self):
        with tempfile.TemporaryDirectory(prefix='lasm-advice-monitor-') as directory:
            root = Path(directory)
            tree = root / 'tools/artifacts' / ('e' * 64)
            tree.mkdir(parents=True)
            (tree / '.lasm-artifact.json').write_text('{}\n')
            (tree / 'data').write_bytes(b'Lean' * 1024)
            report, stop = root / 'report.json', root / 'stop'
            process = subprocess.Popen([sys.executable, '-I', '-B',
                str(Path(__file__).resolve().parents[1] / 'scripts/full-lean/advise-tool-cache.py'),
                str(root / 'tools'), str(report), str(stop)], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            try:
                deadline = time.monotonic() + 10
                while time.monotonic() < deadline:
                    if report.exists() and json.loads(report.read_text())['passes'] > 0:
                        break
                    time.sleep(0.02)
                else:
                    self.fail('Monitor did not complete its first pass')
            finally:
                stop.touch()
                try:
                    stdout, stderr = process.communicate(timeout=10)
                except subprocess.TimeoutExpired:
                    process.kill()
                    process.communicate()
                    raise
            self.assertEqual((process.returncode, stdout, stderr), (0, b'', b''))
            evidence = json.loads(report.read_text())
            self.assertEqual(evidence['status'], 'finished')
            self.assertEqual(evidence['adviceCalls'], 2)

    def test_preserves_bytes_and_metadata_and_ignores_unpublished_trees_and_links(self):
        with tempfile.TemporaryDirectory(prefix='lasm-advice-') as directory:
            root = Path(directory)
            cache = root / 'tools'
            complete = cache / 'artifacts' / ('a' * 64)
            complete.mkdir(parents=True)
            receipt = complete / '.lasm-artifact.json'
            receipt.write_text('{}\n')
            payload = complete / 'compiler bytes'
            with payload.open('wb') as stream:
                for _ in range(8):
                    stream.write(b'Lean cache control\n' * 65536)
            before = payload.stat()
            with payload.open('rb') as stream:
                digest = hashlib.file_digest(stream, 'sha256').hexdigest()
            outside = root / 'outside'
            outside.write_text('must stay outside the advice scope')
            (complete / 'linked-file').symlink_to(outside)
            (complete / 'linked-directory').symlink_to(root, target_is_directory=True)
            incomplete = cache / 'artifacts' / ('b' * 64)
            incomplete.mkdir()
            (incomplete / 'unfinished').write_text('pending')
            (cache / 'artifacts' / ('c' * 64)).symlink_to(complete, target_is_directory=True)
            derived = cache / 'derived' / ('d' * 64)
            derived.mkdir(parents=True)
            (derived / '.lasm-artifact.json').write_text('{}\n')
            (derived / 'driver.py').write_text('print(42)\n')
            evidence = {'trees': {}, 'adviceCalls': 0, 'advisedBytesIncludingRepeats': 0}
            seen = set()
            control['advise_completed'](cache, seen, evidence)
            self.assertEqual(evidence['adviceCalls'], 4)
            self.assertEqual(set(evidence['trees']), {'artifacts/' + 'a' * 64, 'derived/' + 'd' * 64})
            after = payload.stat()
            self.assertEqual((before.st_size, before.st_mtime_ns, before.st_mode),
                             (after.st_size, after.st_mtime_ns, after.st_mode))
            with payload.open('rb') as stream:
                self.assertEqual(hashlib.file_digest(stream, 'sha256').hexdigest(), digest)
            self.assertEqual(outside.read_text(), 'must stay outside the advice scope')
            control['advise_completed'](cache, seen, evidence)
            self.assertEqual(evidence['adviceCalls'], 8)


unittest.main()
