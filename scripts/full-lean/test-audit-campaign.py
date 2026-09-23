#!/usr/bin/env python3
"""Small evidence-only controls: no compiler, engine suite, or resource unit."""
import copy
import importlib.util
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest


SCRIPT = Path(__file__).with_name('audit-campaign.py')
spec = importlib.util.spec_from_file_location('audit_campaign', SCRIPT)
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class AuditTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory(prefix='lasm-audit-control-')
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        self.suite, self.campaign = self.root / 'suite', self.root / 'campaign'
        self.suite.mkdir()
        self.campaign.mkdir()
        self.source, self.frozen = self.suite / 'source', self.root / 'frozen'
        self.source.mkdir()
        self.frozen.mkdir()
        (self.source / 'original.lean').write_text('def original := 1\n')
        (self.source / 'linked.lean').symlink_to('original.lean')
        (self.suite / 'driver').write_text('unchanged driver\n')
        (self.frozen / 'compiler.wasm').write_bytes(b'fixture bytes, not an executable')
        self.snapshot = {'files': {'compiler.wasm': module.file_digest(self.frozen / 'compiler.wasm')}}
        self.config = {'build': str(self.frozen), 'engine': 'control'}
        self.write(self.suite / 'toolchain.json', self.config)
        self.write(self.frozen / 'snapshot.json', self.snapshot)
        self.write(self.suite / 'source-hashes.json',
                   {'original.lean': module.file_digest(self.source / 'original.lean')})
        self.manifest = {'prefix': str(self.suite), 'backend': 'control', 'source': str(self.source),
                         'testSourceHashes': str(self.suite / 'source-hashes.json'),
                         'sourceLinks': {'linked.lean': 'original.lean'},
                         'harnessArtifacts': {str(self.suite / 'driver'): module.file_digest(self.suite / 'driver')},
                         'registered': 2, 'tests': [{'name': 'one'}, {'name': 'two'}]}
        self.write(self.suite / 'parallel-suite.json', self.manifest)
        integrity = {'originalSources': {phase: {'checked': 1, 'modified': [],
                     'symlinks': {'checked': 1, 'modified': []}} for phase in ('before', 'after')},
                     'harnessArtifacts': {phase: {'checked': 1, 'modified': []} for phase in ('before', 'after')}}
        self.state = {'suite': str(self.suite), 'backend': 'control', 'filter': '.*', 'registered': 2,
                      'selected': 2, 'status': 'complete', 'tests': []}
        for name in ('one', 'two'):
            directory = self.campaign / name
            (directory / 'results').mkdir(parents=True)
            resources = directory / 'resources.json'
            self.write(resources, {'status': 'finished', 'unitReleased': True,
                'resourceLimited': False, 'memoryThrottled': False, 'peakMemoryBytes': 1024,
                'result': {'code': 0, 'signal': None},
                'service': {'memoryEvents': {k: 0 for k in ('high', 'max', 'oom', 'oom_kill', 'oom_group_kill')},
                            'swapBytes': 0}})
            attempt = {'directory': str(directory), 'status': 'passed', 'resourceReport': str(resources),
                       'exit': {'code': 0, 'signal': None}, 'peakMemoryBytes': 1024, **copy.deepcopy(integrity)}
            self.state['tests'].append({'name': name, 'status': 'passed', 'attempts': [attempt]})
            self.write(directory / 'results/execution.json', {'backend': 'control', 'registered': 2,
                       'resourceReport': str(resources), 'result': {'code': 0, 'signal': None}, **integrity})
            self.write(directory / 'results/progress.json', {'completed': [{'name': name, 'result': 'Passed'}]})
            (directory / 'results/results.xml').write_text(
                f'<testsuite><testcase name="{name}" status="run"><system-out>captured output</system-out></testcase></testsuite>')
        self.seal()

    def write(self, path, value):
        path.write_text(json.dumps(value) + '\n')

    def seal(self):
        self.state['counts'] = {status: sum(t.get('status', 'pending') == status for t in self.state['tests'])
                                for status in module.STATUSES}
        identity = {'manifest': module.file_digest(self.suite / 'parallel-suite.json'),
                    'filter': self.state['filter'], 'config': self.config, 'snapshot': self.snapshot}
        self.state['identity'] = module.digest(module.identity_json(identity))
        self.write(self.campaign / 'campaign.json', self.state)

    def mutate(self, relative, function):
        path = self.campaign / relative
        value = module.read_json(path)
        function(value)
        self.write(path, value)

    def rejected(self, text, **options):
        with self.assertRaisesRegex(ValueError, text):
            module.audit(self.campaign, **options)

    def test_complete_campaign_and_live_hashes(self):
        result = module.audit(self.campaign, require_all_passed=True, verify_inputs=True)
        self.assertTrue(result['allRegisteredPassed'])
        self.assertEqual(result['firstAttemptPasses'], 2)
        self.assertEqual(result['liveInputVerification'],
                         {'originalFiles': 1, 'originalSymlinks': 1, 'harnessArtifacts': 1, 'frozenRuntimeFiles': 1})

    def test_identity_matches_javascript(self):
        value = {'manifest': 'hash', 'filter': 'λ/.*', 'config': None,
                 'snapshot': {'files': {}, 'unicode': '😀'}, 'resourceAdjustments': {'buildJobs': 1}}
        actual = subprocess.run(['node', '--input-type=module', '-e',
            "import {readFileSync} from 'node:fs'; process.stdout.write(JSON.stringify(JSON.parse(readFileSync(0, 'utf8'))));"],
            input=json.dumps(value).encode(), capture_output=True, check=True, timeout=10).stdout
        self.assertEqual(module.identity_json(value), actual)

    def test_pending_attempt_is_excluded(self):
        self.state['status'] = 'running'
        self.state['tests'][1] = {'name': 'two', 'attempts': [{'status': 'running'}]}
        self.seal()
        result = module.audit(self.campaign)
        self.assertFalse(result['allRegisteredPassed'])
        self.assertEqual(len(result['tests']), 1)
        self.rejected('Not all registered', require_all_passed=True)
        self.rejected('completed campaign', verify_inputs=True)

    def test_passing_subset_does_not_pass_full_gate(self):
        self.state['selected'] = 1
        self.state['tests'].pop()
        self.seal()
        self.assertTrue(module.audit(self.campaign)['allSelectedPassed'])
        self.rejected('Not all registered', require_all_passed=True)

    def test_retry_is_not_a_first_attempt_pass(self):
        self.state['tests'][0]['attempts'].insert(0, {'status': 'interrupted'})
        self.seal()
        self.assertEqual(module.audit(self.campaign)['firstAttemptPasses'], 1)

    def test_skips_failures_errors_and_missing_run_are_rejected(self):
        path = self.campaign / 'one/results/results.xml'
        for content, status in [('<skipped/>', 'run'), ('<failure/>', 'run'), ('<error/>', 'run'), ('', 'notrun')]:
            with self.subTest(content=content, status=status):
                path.write_text(f'<testsuite><testcase name="one" status="{status}">{content}</testcase></testsuite>')
                self.rejected('skipped, failed, or unexecuted')

    def test_mismatched_junit_names_or_extra_results(self):
        path = self.campaign / 'one/results/results.xml'
        for body in ['<testcase name="other" status="run"/>',
                     '<testcase name="one" status="run"/><testcase name="two" status="run"/>']:
            with self.subTest(body=body):
                path.write_text('<testsuite>' + body + '</testsuite>')
                self.rejected('exactly one matching')

    def test_nonzero_exit_cannot_pass(self):
        self.mutate('one/results/execution.json', lambda v: v['result'].update(code=8))
        self.rejected('nonzero or incomplete')

    def test_memory_events_cannot_pass(self):
        for key in ('high', 'max', 'oom', 'oom_kill', 'oom_group_kill'):
            with self.subTest(event=key):
                self.mutate('one/resources.json', lambda v: v['service']['memoryEvents'].update({key: 1}))
                self.rejected('memory event')
                self.mutate('one/resources.json', lambda v: v['service']['memoryEvents'].update({key: 0}))

    def test_guard_abort_and_missing_monitoring_cannot_pass(self):
        for key, value in [('resourceLimited', True), ('memoryThrottled', True), ('monitorError', 'lost'),
                           ('stoppedBecause', 'host pressure'), ('status', 'running')]:
            path = self.campaign / 'one/resources.json'
            original = path.read_bytes()
            with self.subTest(key=key):
                self.mutate('one/resources.json', lambda v: v.update({key: value}))
                self.rejected('unsafe or incomplete')
            path.write_bytes(original)

    def test_resource_abort_stays_separate(self):
        self.state['tests'][0]['status'] = 'resource-aborted'
        self.state['tests'][0]['attempts'][-1]['status'] = 'resource-aborted'
        self.mutate('one/resources.json', lambda v: v.update(resourceLimited=True))
        self.seal()
        result = module.audit(self.campaign)
        self.assertEqual(result['counts']['resource-aborted'], 1)
        self.assertEqual(result['counts']['failed'], 0)
        self.rejected('Not all registered', require_all_passed=True)

    def test_source_and_driver_integrity_cannot_be_omitted(self):
        path = self.campaign / 'one/results/execution.json'
        original = path.read_bytes()
        for key in ('originalSources', 'harnessArtifacts'):
            with self.subTest(key=key):
                self.mutate('one/results/execution.json', lambda v: v[key]['after'].update(checked=0))
                self.rejected('incomplete or changed')
            path.write_bytes(original)

    def test_identity_and_count_drift(self):
        self.mutate('campaign.json', lambda v: v['counts'].update(passed=99))
        self.rejected('counts are inconsistent')
        self.seal()
        self.mutate('campaign.json', lambda v: v.update(filter='changed'))
        self.rejected('identity changed')

    def test_duplicate_test_name(self):
        self.state['tests'][1]['name'] = 'one'
        self.seal()
        self.rejected('Selected test names')

    def test_empty_selection_cannot_pass(self):
        self.state['selected'] = 0
        self.state['tests'] = []
        self.seal()
        self.rejected('Selected test names', require_all_passed=True)

    def test_unresolved_stop_cannot_be_complete(self):
        self.state['stoppedBecause'] = 'Resource, input-integrity, or harness validation failed'
        self.seal()
        self.rejected('unresolved stop reason', require_all_passed=True)

    def test_live_source_driver_and_runtime_changes(self):
        for path, description in [(self.source / 'original.lean', 'Original source'),
                                  (self.suite / 'driver', 'Harness artifact'),
                                  (self.frozen / 'compiler.wasm', 'Frozen runtime')]:
            original = path.read_bytes()
            with self.subTest(path=path):
                path.write_bytes(b'changed')
                self.rejected(description, verify_inputs=True)
            path.write_bytes(original)

    def test_replaced_symlink_and_live_lock(self):
        path = self.source / 'linked.lean'
        path.unlink()
        path.write_text('replacement regular file')
        self.rejected('Original symlink', verify_inputs=True)
        (self.campaign / 'supervisor.lock').write_text('locked')
        self.rejected('still owns its lock', require_all_passed=True)

    def test_cli_does_not_overwrite_evidence(self):
        output = self.root / 'audit.json'
        output.write_text('existing evidence')
        result = subprocess.run([sys.executable, '-B', str(SCRIPT), str(self.campaign), '--output', str(output)],
                                capture_output=True, text=True, timeout=10)
        self.assertEqual(result.returncode, 1)
        self.assertEqual(output.read_text(), 'existing evidence')


if __name__ == '__main__':
    unittest.main()
