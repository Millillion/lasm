#!/usr/bin/env python3
"""Read-only audit of campaign evidence; never rerun or rewrite an attempt."""
import argparse
from collections import Counter
from datetime import datetime, timezone
import hashlib
import json
from pathlib import Path
import sys
import xml.etree.ElementTree as ET


STATUSES = ('passed', 'failed', 'resource-aborted', 'harness-failed', 'pending')


def require(condition, message):
    if not condition:
        raise ValueError(message)


def digest(data):
    return hashlib.sha256(data).hexdigest()


def file_digest(path):
    # A full compiler Wasm file is large. Never read it all into the supervisor.
    value = hashlib.sha256()
    with Path(path).open('rb') as stream:
        for block in iter(lambda: stream.read(64 * 1024), b''):
            value.update(block)
    return value.hexdigest()


def read_json(path):
    return json.loads(Path(path).read_bytes())


def identity_json(value):
    # Campaign identities use JSON.stringify on metadata made of objects,
    # arrays, strings, booleans, null and integers (not floating-point data).
    if isinstance(value, float):
        raise ValueError('Floating-point campaign identity metadata is unsupported')
    if isinstance(value, dict):
        for child in value.values():
            identity_json(child)
    if isinstance(value, list):
        for child in value:
            identity_json(child)
    return json.dumps(value, ensure_ascii=False, separators=(',', ':')).encode()


def check_integrity(value, files, links, harness, label):
    for phase in ('before', 'after'):
        source = value['originalSources'][phase]
        require(source == {'checked': files, 'modified': [],
                           'symlinks': {'checked': links, 'modified': []}},
                f'{label}: incomplete or changed original sources ({phase})')
        require(value['harnessArtifacts'][phase] == {'checked': harness, 'modified': []},
                f'{label}: incomplete or changed harness artifacts ({phase})')


def junit_result(path, name):
    # Clear captured output during parsing instead of retaining test logs.
    cases = []
    active = None
    for event, element in ET.iterparse(path, events=('start', 'end')):
        if event == 'start' and element.tag == 'testcase':
            require(active is None, f'{name}: nested JUnit testcase')
            active = {**element.attrib, 'failures': 0, 'errors': 0, 'skipped': 0}
        elif event == 'end':
            if active is not None and element.tag in ('failure', 'error', 'skipped'):
                active[{'failure': 'failures', 'error': 'errors', 'skipped': 'skipped'}[element.tag]] += 1
            if element.tag == 'testcase':
                cases.append(active)
                active = None
            element.clear()
    require(len(cases) == 1 and cases[0]['name'] == name,
            f'{name}: expected exactly one matching JUnit testcase')
    return cases[0]


def audit(directory, *, require_all_passed=False, verify_inputs=False):
    directory = Path(directory).resolve()
    raw = (directory / 'campaign.json').read_bytes()
    state = json.loads(raw)
    require(state['status'] in ('running', 'paused', 'complete', 'interrupted', 'stopped'),
            'Unknown campaign status')
    manifest_path = Path(state['suite']) / 'parallel-suite.json'
    manifest_bytes = manifest_path.read_bytes()
    manifest = json.loads(manifest_bytes)
    config_path = Path(manifest['prefix']) / 'toolchain.json'
    config = read_json(config_path) if config_path.exists() else None
    snapshot = read_json(Path(config['build']) / 'snapshot.json') if config else None
    identity = {'manifest': digest(manifest_bytes), 'filter': state['filter'], 'config': config}
    if snapshot is not None:
        identity['snapshot'] = snapshot
    for key in ('prioritize', 'resourceAdjustments'):
        if key in state:
            identity[key] = state[key]
    require(digest(identity_json(identity)) == state['identity'], 'Campaign input identity changed')
    require(state['backend'] == manifest['backend'], 'Campaign backend differs from the manifest')
    registered = [test['name'] for test in manifest['tests']]
    names = [test['name'] for test in state['tests']]
    require(registered and len(set(registered)) == len(registered) == manifest['registered'] == state['registered'],
            'Registered test names or count are inconsistent')
    require(names and len(set(names)) == len(names) == state['selected'] and set(names) <= set(registered),
            'Selected test names or count are inconsistent')
    observed = Counter(test.get('status', 'pending') for test in state['tests'])
    counts = {status: observed[status] for status in STATUSES}
    require(set(observed) <= set(STATUSES) and counts == state['counts'], 'Campaign counts are inconsistent')
    if state['status'] == 'complete':
        require(not counts['pending'], 'Complete campaign still has pending tests')
        require(not state.get('stoppedBecause'), 'Complete campaign has an unresolved stop reason')
    source_hashes = read_json(manifest['testSourceHashes'])
    source_links = manifest.get('sourceLinks', {})
    harness = manifest.get('harnessArtifacts', {})
    rows = []
    peak = 0
    first_attempt_passes = 0
    for test in state['tests']:
        name, status, attempts = test['name'], test.get('status', 'pending'), test['attempts']
        require(all(a['status'] in (*STATUSES[:-1], 'interrupted', 'running') for a in attempts),
                f'{name}: unknown attempt status')
        if status == 'pending':
            require(all(a['status'] in ('interrupted', 'running') for a in attempts),
                    f'{name}: finalized attempt reported as pending')
            continue
        require(attempts and attempts[-1]['status'] == status, f'{name}: final attempt status differs')
        require(not any(a['status'] == 'running' for a in attempts), f'{name}: completed test has a running attempt')
        attempt = attempts[-1]
        path = Path(attempt['directory'])
        require(path.parent == directory, f'{name}: attempt belongs to a different campaign')
        resources = path / 'resources.json'
        resource = read_json(resources) if resources.exists() else None
        row = {'name': name, 'status': status, 'attempts': attempts,
               'resourceSha256': file_digest(resources) if resource else None}
        if status in ('passed', 'failed'):
            require(resource is not None and resource.get('unitReleased') is True,
                    f'{name}: resource unit was not released')
            require(resource.get('status') == 'finished' and resource.get('resourceLimited') is False
                    and resource.get('memoryThrottled') is False and not resource.get('monitorError')
                    and not resource.get('stoppedBecause'), f'{name}: unsafe or incomplete resource report')
            events = resource['service']['memoryEvents']
            require(all(events.get(key) == 0 for key in ('high', 'max', 'oom', 'oom_kill', 'oom_group_kill'))
                    and resource['service']['swapBytes'] == 0, f'{name}: memory event or swap occurred')
            require(attempt['peakMemoryBytes'] == resource['peakMemoryBytes'], f'{name}: peak memory differs')
            execution_path = path / 'results/execution.json'
            execution = read_json(execution_path)
            require(execution['backend'] == state['backend'] and execution['registered'] == state['registered'],
                    f'{name}: execution belongs to a different suite')
            require(Path(execution['resourceReport']) == resources and Path(attempt['resourceReport']) == resources,
                    f'{name}: resource report path differs')
            for value in (execution, attempt):
                check_integrity(value, len(source_hashes), len(source_links), len(harness), name)
            progress_path = path / 'results/progress.json'
            completed = read_json(progress_path)['completed']
            require(len(completed) == 1 and completed[0]['name'] == name,
                    f'{name}: execution has missing or extra results')
            xml_path = path / 'results/results.xml'
            junit = junit_result(xml_path, name)
            if status == 'passed':
                require(all(v.get('code') == 0 and not v.get('signal') and not v.get('error')
                            for v in (attempt['exit'], execution['result'], resource['result']))
                        and completed[0]['result'] == 'Passed', f'{name}: nonzero or incomplete passing execution')
                require(junit.get('status') == 'run' and not any(junit[k] for k in ('failures', 'errors', 'skipped')),
                        f'{name}: skipped, failed, or unexecuted JUnit result reported as passing')
                first_attempt_passes += len(attempts) == 1
            row.update(junit=junit, executionSha256=file_digest(execution_path),
                       progressSha256=file_digest(progress_path), junitSha256=file_digest(xml_path))
        elif status == 'resource-aborted':
            require(resource is not None and resource.get('resourceLimited') is True,
                    f'{name}: resource abort has no supporting resource report')
        peak = max(peak, attempt.get('peakMemoryBytes') or 0)
        rows.append(row)
    all_selected_passed = state['status'] == 'complete' and counts['passed'] == len(names)
    all_registered_passed = all_selected_passed and set(names) == set(registered)
    if require_all_passed:
        require(all_registered_passed and not state.get('stoppedBecause'),
                'Not all registered tests have completed and passed')
        require(not (directory / 'supervisor.lock').exists(), 'Campaign supervisor still owns its lock')
    inputs = None
    if verify_inputs:
        require(state['status'] == 'complete' and not (directory / 'supervisor.lock').exists(),
                'Live input verification requires a completed campaign with no supervisor lock')
        for name, expected in source_hashes.items():
            require(file_digest(Path(manifest['source']) / name) == expected, f'Original source changed: {name}')
        for name, expected in source_links.items():
            path = Path(manifest['source']) / name
            require(path.is_symlink() and str(path.readlink()) == expected, f'Original symlink changed: {name}')
        for name, expected in harness.items():
            require(file_digest(name) == expected, f'Harness artifact changed: {name}')
        for name, expected in (snapshot or {}).get('files', {}).items():
            require(file_digest(Path(config['build']) / name) == expected, f'Frozen runtime input changed: {name}')
        policy = state.get('resourceAdjustments', {}).get('pagePolicy')
        if policy:
            require(file_digest(policy['wrapper']) == policy['sha256'], 'Resource page-policy wrapper changed')
        inputs = {'originalFiles': len(source_hashes), 'originalSymlinks': len(source_links),
                  'harnessArtifacts': len(harness), 'frozenRuntimeFiles': len((snapshot or {}).get('files', {}))}
    return {'auditedAt': datetime.now(timezone.utc).isoformat(), 'campaign': str(directory),
            'checkpointSha256': digest(raw), 'identity': state['identity'], 'backend': state['backend'],
            'sourceHashesSha256': file_digest(manifest['testSourceHashes']),
            'status': state['status'], 'registered': len(registered), 'selected': len(names), 'counts': counts,
            'allSelectedPassed': all_selected_passed, 'allRegisteredPassed': all_registered_passed,
            'firstAttemptPasses': first_attempt_passes, 'maximumPeakBytes': peak,
            'liveInputVerification': inputs, 'tests': rows}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('campaign', type=Path)
    parser.add_argument('--require-all-passed', action='store_true')
    parser.add_argument('--verify-inputs', action='store_true')
    parser.add_argument('--output', type=Path, help='New audit file; existing evidence is never overwritten')
    args = parser.parse_args()
    try:
        result = audit(args.campaign, require_all_passed=args.require_all_passed, verify_inputs=args.verify_inputs)
        if args.output:
            with args.output.open('x') as stream:
                json.dump(result, stream, indent=2)
                stream.write('\n')
        print(json.dumps({k: v for k, v in result.items() if k != 'tests'}, indent=2))
    except (ValueError, KeyError, TypeError, OSError, ET.ParseError) as error:
        print(f'Campaign audit failed: {error}', file=sys.stderr)
        return 1
    return 0


if __name__ == '__main__':
    sys.exit(main())
