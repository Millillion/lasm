from pathlib import Path
import datetime, hashlib, json, os, shutil, subprocess, sys, time

assert os.environ.get('LASM_RESOURCE_UNIT'), 'Run inside the existing resource guard'
if len(sys.argv) != 3:
    raise SystemExit('Usage: api-dependencies.py NEW_OUTPUT COMPILER_EXECUTABLE (from repository root)')
output = Path(sys.argv[1]).resolve()
output.mkdir(parents=True, exist_ok=False)
compiler = Path(sys.argv[2]).resolve()
fixture = Path(__file__).with_name('ApiDependencies.lean').resolve()
shutil.copyfile(fixture, output / fixture.name)
digest = lambda path: hashlib.sha256(path.read_bytes()).hexdigest()
inventory = Path('docs/compatibility/lean-4.32.0-api.json').resolve()
expected = json.loads(inventory.read_text())
record = {
    'startedAt': datetime.datetime.now(datetime.timezone.utc).isoformat(),
    'scope': 'Supplementary compiled dependency inventory, not behavioral coverage.',
    'fixture': str(fixture), 'fixtureSha256': digest(fixture),
    'compiler': str(compiler),
    'inventorySha256': digest(inventory), 'leanCommit': expected['commit'],
    'runnerSha256': digest(Path(__file__)),
    'command': [str(compiler), '-j1', '-s65536', str(fixture)],
    'resourceReport': os.environ.get('LASM_RESOURCE_REPORT'),
}
started = time.monotonic()
try:
    version = subprocess.run([str(compiler), '--githash'], capture_output=True,
                             encoding='utf8', timeout=30, check=False)
    record['compilerGitHash'] = {
        'returncode': version.returncode, 'stdout': version.stdout,
        'stderr': version.stderr,
    }
    assert version.returncode == 0 and version.stdout.strip() == expected['commit'], 'Compiler pin differs'
    with (output / 'stdout.log').open('wb') as stdout, (output / 'stderr.log').open('wb') as stderr:
        completed = subprocess.run(record['command'], stdout=stdout, stderr=stderr,
                                   timeout=180, check=False)
    record['returncode'] = completed.returncode
    if completed.returncode == 0:
        data = json.loads((output / 'stdout.log').read_text())
        assert set(data['roots']) == {d['name'] for d in expected['declarations']}
        nodes = {row['name']: row for row in data['nodes']}
        assert len(nodes) == len(data['nodes'])
        assert all(name in nodes for row in nodes.values() for name in row['dependencies'])
        def symbols_reached(root):
            pending, seen, symbols = [root], set(), set()
            while pending:
                name = pending.pop()
                if name in seen:
                    continue
                seen.add(name)
                row = nodes[name]
                symbols.update(ext['symbol'] for ext in row['standardExterns'])
                pending.extend(row['dependencies'])
            return symbols
        witnesses = {
            'IO.FS.readFile': ['lean_io_prim_handle_mk', 'lean_io_prim_handle_read'],
            'IO.FS.createDirAll': ['lean_io_create_dir'],
            'Std.Http.Server.serve': ['lean_uv_tcp_bind', 'lean_uv_tcp_listen'],
        }
        for name, symbols in witnesses.items():
            assert set(symbols) <= symbols_reached(name), f'Missing primitive path: {name}'
        record['primitivePathChecks'] = witnesses
        record['rootCount'] = len(data['roots'])
        record['nodeCount'] = len(nodes)
        resolutions = {}
        for row in nodes.values():
            resolutions[row['resolution']] = resolutions.get(row['resolution'], 0) + 1
        record['resolutions'] = resolutions
        record['uniqueStandardSymbols'] = len({ext['symbol'] for row in nodes.values()
                                               for ext in row['standardExterns']})
        roots = set(data['roots'])
        record['nonrootWithoutCompiledBody'] = [row['name'] for row in nodes.values()
            if row['resolution'] == 'no-compiled-body' and row['name'] not in roots]
        record['outputSha256'] = digest(output / 'stdout.log')
        record['inventoryChecksPassed'] = True
except Exception as error:
    record['error'] = str(error)
finally:
    record['seconds'] = time.monotonic() - started
    record['finishedAt'] = datetime.datetime.now(datetime.timezone.utc).isoformat()
    record['fixtureUnchanged'] = digest(fixture) == record['fixtureSha256']
    record['inventoryUnchanged'] = digest(inventory) == record['inventorySha256']
    (output / 'execution.json').write_text(json.dumps(record, indent=2) + '\n')
    print(json.dumps(record))
raise SystemExit(0 if record.get('inventoryChecksPassed') and record['fixtureUnchanged']
                and record['inventoryUnchanged'] else 1)
