#!/usr/bin/env python3
"""Inventory unchanged upstream tests without executing or changing them.

CTest remains the authority for registrations. Source hashes come directly from
the pinned archive, not from a possibly modified extracted test tree. Categories
identify work for the AOT application pipeline; they are not pass/skip verdicts.
"""
from pathlib import Path, PurePosixPath
import argparse
import collections
import datetime
import hashlib
import json
import os
import subprocess
import tarfile


def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def write_json(path, value):
    path.write_text(json.dumps(value, indent=2, ensure_ascii=False) + '\n')


parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--runtime', type=Path, required=True)
parser.add_argument('--archive', type=Path, required=True)
parser.add_argument('--output', type=Path, required=True)
args = parser.parse_args()
inputs = json.loads((args.runtime / 'build-inputs.json').read_text())
source, build = Path(inputs['source']), Path(inputs['build'])
if args.output.exists():
    raise SystemExit('Use a new output directory to preserve inventory evidence')
assert digest(args.archive) == inputs['sourceArchiveSha256'], 'Source archive checksum mismatch'
args.output.mkdir(parents=True)

# Check every original test, expected output, sidecar, doc example and upstream
# helper against the archive. CMake-generated environment wrappers are additions
# and are recorded separately. Symlinks are checked as links, not followed.
originals = {}
with tarfile.open(args.archive, 'r|gz') as archive:
    for entry in archive:
        parts = PurePosixPath(entry.name).parts
        if len(parts) < 2:
            continue
        name = '/'.join(parts[1:])
        if not name.startswith(('tests/', 'doc/examples/', 'script/')):
            continue
        path = source / name
        if entry.isfile():
            stream = archive.extractfile(entry)
            expected = hashlib.file_digest(stream, 'sha256').hexdigest()
            assert not path.is_symlink() and path.is_file() and digest(path) == expected, name
            originals[name] = {'sha256': expected, 'bytes': entry.size}
        elif entry.issym():
            assert path.is_symlink() and str(path.readlink()) == entry.linkname, name
            originals[name] = {'symlink': entry.linkname}
        elif not entry.isdir():
            raise AssertionError(f'Unexpected archive entry type: {name}')
write_json(args.output / 'source-files.json', originals)

inventory = json.loads(subprocess.check_output(
    ['ctest', '--show-only=json-v1', '--test-dir', str(build)], text=True))
write_json(args.output / 'ctest-registrations.json', inventory)


def sidecars(name):
    prefix = name + '.'
    return sorted(path for path in originals if path.startswith(prefix))


def enabled(name, action):
    # Exact upstream compile/run_test.sh precedence, including test-specific
    # overrides. Bench-only overrides do not affect CTest's test registrations.
    for suffix, value in [(f'do_{action}_test', True), (f'no_{action}_test', False),
                          (f'do_{action}', True), (f'no_{action}', False)]:
        if name + '.' + suffix in originals:
            return value
    return True


def classification(name):
    if name.startswith(('compile/', 'compile_bench/')):
        return 'compiled-application'
    if name.startswith('docparse/'):
        return 'compiled-test-driver'
    if name.startswith(('server/', 'server_interactive/')) or name == 'misc_dir/server_project':
        return 'compiled-driver-and-native-compiler'
    if name.startswith(('elab/', 'elab_fail/', 'elab_bench/')) or name.startswith('../doc/examples/') and name.endswith('.lean'):
        return 'native-build-time'
    if name == 'lint.py':
        return 'source-lint'
    # Lake/package/shell scripts mix compilation, application runs, interpreter
    # runs and plugin loading. Keep these open for per-driver review.
    return 'mixed-driver-review-required'


rows = []
registered_drivers = set()
for test in inventory['tests']:
    name = test['name']
    path = (name[3:] if name.startswith('../') else name if name.startswith('tests/') else 'tests/' + name)
    category = classification(name)
    row = {'name': name, 'category': category, 'status': 'not-run-through-product-pipeline'}
    if path in originals:
        row['source'] = path
        row['sha256'] = originals[path].get('sha256')
        auxiliary = sidecars(path)
        if auxiliary:
            row['sidecars'] = auxiliary
    else:
        driver = path + '/run_test.sh'
        assert driver in originals, f'Unmapped CTest registration: {name}'
        row['source'] = driver
        row['sha256'] = originals[driver]['sha256']
    driver = next((part for part in test.get('command', []) if part.endswith('/run_test.sh')), None)
    if driver:
        # Keep a registered symlink's own name: compile_bench/run_test.sh points
        # to compile/run_test.sh, but both upstream driver paths are registered.
        row['driver'] = str(Path(os.path.abspath(driver)).relative_to(source.resolve()))
    elif row['source'].endswith('/test.sh'):
        row['driver'] = row['source']
    if 'driver' in row:
        assert row['driver'] in originals, f'Unverified driver: {row["driver"]}'
        registered_drivers.add(row['driver'])
    if category == 'compiled-application':
        row['upstreamCompileEnabled'] = enabled(path, 'compile')
        row['upstreamInterpretEnabled'] = enabled(path, 'interpret')
    if category == 'native-build-time' and path.endswith('.lean'):
        # Some negative parser tests intentionally contain invalid UTF-8.
        content = (source / path).read_bytes()
        if b'#eval' in content or b'run_elab' in content or b'run_cmd' in content:
            row['deployedRuntimeCoverageRequired'] = True
    rows.append(row)
names = [row['name'] for row in rows]
assert len(names) == len(set(names)), 'Duplicate CTest names'

excluded = []
for path in sorted(originals):
    if path.endswith('.no_test'):
        excluded.append({'source': path[:-8], 'reason': 'upstream .no_test marker', 'marker': path})
for name in ['elab/async_select_channel.lean', 'elab/sync_mutex.lean',
             'pkg/signal', 'pkg/test_extern', 'pkg/user_ext']:
    assert name not in names, f'Upstream exclusion changed: {name}'
    excluded.append({'source': 'tests/' + name, 'reason': 'upstream CMake flaky/nondeterministic exclusion'})
registered_sources = {row['source'] for row in rows}
for path in sorted(originals):
    if path.startswith('tests/lake/') and path.endswith('/test.sh') and path not in registered_sources:
        excluded.append({'source': path, 'reason': 'Lake driver not registered by upstream default CMake configuration'})

counts = dict(sorted(collections.Counter(row['category'] for row in rows).items()))
groups = dict(sorted(collections.Counter(row['name'].split('/')[0] for row in rows).items()))
unregistered_drivers = sorted(path for path in originals
    if (path.endswith('/run_test.sh') or path.startswith('tests/lake/') and path.endswith('/test.sh'))
    and path not in registered_drivers)
benchmark_only_drivers = sorted(path for path in originals if path.endswith('/run_bench.sh')
    and path.replace('/run_bench.sh', '/run_test.sh') not in originals)
report = {
    'schema': 1, 'lean': inputs['lean'], 'leanCommit': inputs['leanCommit'],
    'sourceArchiveSha256': inputs['sourceArchiveSha256'],
    'recordedAt': datetime.datetime.now(datetime.timezone.utc).isoformat(),
    'scope': 'Upstream default CTest registrations and explicit exclusions; inventory only, no test passes',
    'registrations': len(rows), 'verifiedOriginalFilesAndLinks': len(originals),
    'categories': counts, 'upstreamGroups': groups,
    'sourceInventorySha256': digest(args.output / 'source-files.json'),
    'ctestInventorySha256': digest(args.output / 'ctest-registrations.json'),
    'classificationNotes': [
        'Compiled-application cases retain upstream compile/interpreter enablement and sidecars.',
        'Native-build-time checks validate the managed native compiler and do not establish deployed API behavior.',
        'Compile-time evaluation involving runtime APIs requires separate deployed differential coverage.',
        'Compiled test drivers may launch native compiler subprocesses; report both phases.',
        'Mixed scripts require per-driver review before selecting application execution phases.',
        'Upstream exclusions remain explicit coverage obligations, not passes or Lasm limitations.',
        'No tests or expected outputs were edited. Compiler-in-Wasm results are not counted.',
    ],
    'excludedByUpstream': excluded,
    'unregisteredTestDriversForReview': unregistered_drivers,
    'benchmarkOnlyDriversForReview': benchmark_only_drivers,
    'tests': rows,
}
write_json(args.output / 'inventory.json', report)
print(json.dumps({key: report[key] for key in ['lean', 'registrations', 'verifiedOriginalFilesAndLinks', 'categories']}, indent=2))
