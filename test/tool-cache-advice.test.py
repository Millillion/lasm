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
    def test_only_receipted_native_comparisons_are_advised_with_bytes_and_metadata_unchanged(self):
        with tempfile.TemporaryDirectory(prefix='lasm-native-advice-') as directory:
            project = Path(directory)
            completed = project / '.native-control/Feature.lean-completed'
            completed.mkdir(parents=True)
            (completed / '.lasm-native-control.json').write_text('{"schema":1}\n')
            program = completed / 'program'
            program.write_bytes(b'Native comparison' * 1024)
            before = program.stat()
            digest = hashlib.sha256(program.read_bytes()).hexdigest()
            unfinished = completed.parent / 'unfinished'
            unfinished.mkdir()
            (unfinished / 'program').write_bytes(b'active compiler output')
            (completed.parent / 'linked').symlink_to(completed, target_is_directory=True)
            deployment = project / 'dist'
            deployment.mkdir()
            (deployment / '.lasm-native-control.json').write_text('{"schema":1}\n')
            evidence = {'trees': {}, 'adviceCalls': 0, 'advisedBytesIncludingRepeats': 0}
            control['advise_native_controls'](project, set(), evidence)
            self.assertEqual(set(evidence['trees']), {'native-controls/Feature.lean-completed'})
            self.assertEqual(evidence['adviceCalls'], 2)
            self.assertEqual(hashlib.sha256(program.read_bytes()).hexdigest(), digest)
            after = program.stat()
            self.assertEqual((before.st_size, before.st_mode, before.st_mtime_ns),
                             (after.st_size, after.st_mode, after.st_mtime_ns))
            self.assertEqual((unfinished / 'program').read_bytes(), b'active compiler output')

    def test_only_complete_application_caches_are_advised_not_deployments_or_staging(self):
        with tempfile.TemporaryDirectory(prefix='lasm-application-advice-') as directory:
            project = Path(directory) / 'project'
            def fixture(base, source='1' * 16, signature='2' * 64, complete=True):
                tree = base / '.lake/lasm/applications' / source / signature / 'dist'
                tree.mkdir(parents=True)
                (tree / 'program.wasm').write_bytes(b'\0asm immutable output')
                if complete:
                    (tree / '.lasm-application.json').write_text('{}\n')
                return tree
            completed = fixture(project)
            nested = fixture(project / 'Lake project λ')
            fixture(project, signature='3' * 64, complete=False)
            fixture(project, signature='.build-staging')
            fixture(project / 'node_modules/dependency')
            deployment = project / 'dist'
            deployment.mkdir()
            (deployment / '.lasm-application.json').write_text('{}\n')
            (deployment / 'program.wasm').write_bytes(b'\0asm deployment stays warm')
            (project / 'linked project').symlink_to(project / 'Lake project λ', target_is_directory=True)
            evidence = {'trees': {}, 'adviceCalls': 0, 'advisedBytesIncludingRepeats': 0}
            control['advise_applications'](project, set(), evidence)
            self.assertEqual(evidence['adviceCalls'], 4)
            self.assertEqual(set(evidence['trees']), {
                'applications/' + str(completed.relative_to(project)),
                'applications/' + str(nested.relative_to(project))})
            self.assertEqual((completed / 'program.wasm').read_bytes(), b'\0asm immutable output')
            self.assertEqual((deployment / 'program.wasm').read_bytes(), b'\0asm deployment stays warm')

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
                str(root / 'tools'), str(report), str(stop), str(root / 'project')], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
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
