from pathlib import Path
import datetime, hashlib, json, os, subprocess, sys, time

def compare(output_arg, *, facade_arg=None, program=None, startup=False, packaged=False):
    root = Path.cwd()
    output = Path(output_arg).resolve()
    if output.exists():
        raise SystemExit('Use a fresh output directory')
    output.mkdir(parents=True)

    def sha(path):
        with Path(path).open('rb') as stream:
            return hashlib.file_digest(stream, 'sha256').hexdigest()

    source = Path(__file__).with_name('Startup.lean' if startup else 'Packaged.lean' if packaged else 'Main.lean')
    fixture = output / 'Main.lean'
    fixture.write_bytes(source.read_bytes())
    cases = [
        ('unset', {}),
        ('empty-first', {b'HOME': b'', b'TMPDIR': b'', b'TMP': b'/lower-tmp', b'TEMP': b'/lower-temp', b'TEMPDIR': b'/lower-tempdir'}),
        ('empty-second', {b'HOME': b'relative-home//', b'TMP': b'', b'TEMP': b'/lower-temp', b'TEMPDIR': b'/lower-tempdir'}),
        ('empty-third', {b'HOME': b'/', b'TEMP': b'', b'TEMPDIR': b'/lower-tempdir'}),
        ('tempdir-fallback', {b'TEMPDIR': b'relative-tempdir//'}),
        ('valid-unicode', {b'HOME': 'λ/home///'.encode(), b'TMPDIR': 'λ/tmp///'.encode()}),
        ('root', {b'HOME': b'/', b'TMPDIR': b'/'}),
        ('relative', {b'HOME': b'link/../home//', b'TMPDIR': b'link/../temp//'}),
        *[(name, {b'HOME': b'home-'+bytes.fromhex(value)+b'//', b'TMPDIR': b'tmp-'+bytes.fromhex(value)+b'//'})
          for name,value in [('invalid-lead','ff80'), ('surrogate','eda080'), ('truncated','e282'), ('continuations','808182')]],
        ('buffer-limit-minus-one', {b'HOME': b'h'*4095, b'TMPDIR': b't'*4095}),
        ('buffer-limit', {b'HOME': b'h'*4096, b'TMPDIR': b't'*4096}),
        ('buffer-limit-trailing-slash', {b'HOME': b'h'*4095+b'/', b'TMPDIR': b't'*4095+b'/'}),
    ]
    native = Path.home() / '.elan/toolchains/leanprover--lean4---v4.32.0/bin/lean'
    if not native.is_file():
        raise SystemExit('Pinned native toolchain unavailable')
    record = {
        'recordedAt': datetime.datetime.now(datetime.timezone.utc).isoformat(),
        'leanCommit': '8c9756b28d64dab099da31a4c09229a9e6a2ef35',
        'scope': 'Supplementary POSIX system-directory comparison; not an upstream-suite registration.',
        'output': 'compact byte length and full uniform-byte check for long ASCII values' if packaged else 'full byte-list repr',
        'boundaryTiming': 'before engine startup' if startup else 'ordinary Lean osSetenv after engine startup',
        'source': str(source.resolve()), 'sourceSha256': sha(source),
        'executedSource': str(fixture), 'childWorkingDirectory': str(output), 'scriptSha256': sha(__file__),
        'resourceReport': os.environ.get('LASM_RESOURCE_REPORT'),
        'cases': [{'name': name, 'environmentHex': {key.decode(): value.hex() for key,value in values.items()}} for name, values in cases],
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

    def run(label, command, config=None):
        entry = {'engine': label, 'command': list(map(str, command)), 'cases': []}
        if config:
            entry['config'] = config
            entry['snapshotSha256'] = verify_snapshot(config)
        record['results'].append(entry)
        for name, values in cases:
            environment = dict(os.environb)
            for key in [b'HOME', b'TMPDIR', b'TMP', b'TEMP', b'TEMPDIR']: environment.pop(key, None)
            arguments = []
            if not startup and name.startswith('buffer-limit'):
                value = values[b'HOME']; trailing = value.endswith(b'/')
                arguments = [str(len(value) - int(trailing)), 'slash' if trailing else 'plain']
            else:
                environment.update(values)
            start = time.monotonic()
            try:
                result = subprocess.run([*map(str, command), *arguments],
                    cwd=output, env=environment, stdout=subprocess.PIPE, stderr=subprocess.PIPE, timeout=120)
                item = {'name': name, 'arguments': arguments, 'returncode': result.returncode,
                        'stdoutHex': result.stdout.hex(), 'stderrHex': result.stderr.hex(),
                        'stdout': result.stdout.decode('utf-8', errors='backslashreplace'),
                        'stderr': result.stderr.decode('utf-8', errors='backslashreplace')}
                if label == 'native':
                    item['passed'] = result.returncode == 0 and not result.stderr and result.stdout.endswith(b'system-directory comparison completed\n')
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
        run('native', [native, '--run', fixture])
        if facade_arg is not None:
            facade = Path(facade_arg).resolve()
            config = json.loads((facade / 'toolchain.json').read_text())
            if config['leanCommit'] != record['leanCommit']:
                raise RuntimeError('Unexpected Lean revision')
            run(config['engine'], [facade / 'bin/lean', '--run', fixture], config)
        else:
            label, *command = program
            run(label, command)
    finally:
        record['sourceUnchanged'] = sha(fixture) == record['sourceSha256'] == sha(source)
        record['finishedAt'] = datetime.datetime.now(datetime.timezone.utc).isoformat()
        save()
    return 0 if record['sourceUnchanged'] and all(x.get('passed') for x in record['results']) else 1

if __name__ == '__main__':
    if sys.platform != 'linux' or len(sys.argv) < 4:
        raise SystemExit('Linux packaged test fixture: NEW_OUTPUT LABEL EXECUTABLE [ARGS...]')
    raise SystemExit(compare(sys.argv[1], program=sys.argv[2:], packaged=True))
