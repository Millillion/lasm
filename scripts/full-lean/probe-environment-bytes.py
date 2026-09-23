from pathlib import Path
import datetime, hashlib, json, os, subprocess, sys, time

# Supplementary native/engine byte-environment comparison; original upstream tests are unchanged.
if not os.environ.get('LASM_RESOURCE_UNIT'):
    raise SystemExit('Run through run-bounded.mjs and base-pages.py; no overlap with the campaign')
if sys.platform != 'linux' or len(sys.argv) != 3:
    raise SystemExit('Linux only: probe-environment-bytes.py NEW_OUTPUT FROZEN_FACADE; one engine per guard')
root = Path.cwd()
output = Path(sys.argv[1]).resolve()
if output.exists():
    raise SystemExit('Use a fresh output directory')
output.mkdir(parents=True)

def sha(path):
    with Path(path).open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()

source = Path(__file__).resolve().parents[2] / 'test/fixtures/environment-bytes/Main.lean'
fixture = output / 'Main.lean'
fixture.write_bytes(source.read_bytes())
cases = [
    ('ascii', b'plain/value'),
    ('valid-unicode', 'λ/hello/😀'.encode()),
    ('invalid-lead-continuation', bytes.fromhex('ff80')),
    ('overlong-two', bytes.fromhex('c080')),
    ('surrogate', bytes.fromhex('eda080')),
    ('above-unicode-range', bytes.fromhex('f4908080')),
    ('truncated-three', bytes.fromhex('e282')),
    ('isolated-continuations', bytes.fromhex('808182')),
]
native = Path.home() / '.elan/toolchains/leanprover--lean4---v4.32.0/bin/lean'
if not native.is_file():
    raise SystemExit('Pinned native toolchain unavailable')
record = {
    'recordedAt': datetime.datetime.now(datetime.timezone.utc).isoformat(),
    'leanCommit': '8c9756b28d64dab099da31a4c09229a9e6a2ef35',
    'scope': 'Supplementary POSIX byte-environment comparison; not an upstream-suite registration.',
    'source': str(source.resolve()), 'sourceSha256': sha(source),
    'executedSource': str(fixture), 'scriptSha256': sha(__file__),
    'resourceReport': os.environ.get('LASM_RESOURCE_REPORT'),
    'cases': [{'name': name, 'valueHex': value.hex()} for name, value in cases],
    'results': [],
}

def save():
    (output / 'comparison.json').write_text(json.dumps(record, indent=2) + '\n')

def verify_snapshot(config):
    snapshot_path = Path(config['build']) / 'snapshot.json'
    snapshot = json.loads(snapshot_path.read_text())
    for name, expected in snapshot['files'].items():
        if sha(Path(config['build']) / name) != expected:
            raise RuntimeError('Frozen input changed: ' + name)
    return sha(snapshot_path)

def run(label, executable, config=None):
    entry = {'engine': label, 'executable': str(executable), 'cases': []}
    if config:
        entry['config'] = config
        entry['snapshotSha256'] = verify_snapshot(config)
    record['results'].append(entry)
    for name, value in cases:
        environment = dict(os.environb)
        environment[b'LASM_RAW_VALUE'] = value
        environment[b'LASM_RAW_EMPTY'] = b''
        environment.pop(b'LASM_RAW_UNSET', None)
        start = time.monotonic()
        try:
            result = subprocess.run([str(executable), '--run', str(fixture)],
                env=environment, stdout=subprocess.PIPE, stderr=subprocess.PIPE, timeout=120)
            item = {'name': name, 'returncode': result.returncode,
                    'stdoutHex': result.stdout.hex(), 'stderrHex': result.stderr.hex(),
                    'stdout': result.stdout.decode('utf-8', errors='backslashreplace'),
                    'stderr': result.stderr.decode('utf-8', errors='backslashreplace')}
            if label == 'native':
                item['passed'] = result.returncode == 0 and not result.stderr and result.stdout.endswith(b'raw-environment comparison completed\n')
            else:
                oracle = next(x for x in record['results'][0]['cases'] if x['name'] == name)
                item['passed'] = result.returncode == 0 and item['stdoutHex'] == oracle['stdoutHex'] and item['stderrHex'] == oracle['stderrHex']
        except subprocess.TimeoutExpired:
            item = {'name': name, 'passed': False, 'timeoutSeconds': 120}
        item['seconds'] = time.monotonic() - start
        entry['cases'].append(item)
        print(label, name, 'passed' if item['passed'] else 'different', flush=True)
        save()
        if 'timeoutSeconds' in item:
            # Abort the guarded workload so systemd reaps every descendant
            # before any later probe can start. Never advance past a timeout.
            raise RuntimeError('Comparison timed out; stop and let the guard reap the process tree')
        if label == 'native' and not item['passed']:
            raise RuntimeError('Native fixture failed; inspect before comparing engines')
    if config and entry['snapshotSha256'] != verify_snapshot(config):
        raise RuntimeError('Snapshot changed during comparison')
    entry['passed'] = all(x['passed'] for x in entry['cases'])
    save()

try:
    run('native', native)
    seen = set()
    for path in map(Path, sys.argv[2:]):
        facade = path.resolve()
        config = json.loads((facade / 'toolchain.json').read_text())
        if config['engine'] in seen or config['leanCommit'] != record['leanCommit']:
            raise RuntimeError('Repeated engine or unexpected Lean revision')
        seen.add(config['engine'])
        run(config['engine'], facade / 'bin/lean', config)
finally:
    record['sourceUnchanged'] = sha(fixture) == record['sourceSha256'] == sha(source)
    record['finishedAt'] = datetime.datetime.now(datetime.timezone.utc).isoformat()
    save()
raise SystemExit(0 if record['sourceUnchanged'] and all(x.get('passed') for x in record['results']) else 1)
