from pathlib import Path
import argparse, datetime, hashlib, json, os, re, shutil, subprocess

assert os.environ.get('LASM_RESOURCE_UNIT')
root = Path(__file__).resolve().parents[2]
parser = argparse.ArgumentParser(description='Guarded synthetic full-runtime transfer ABI regression; no large buffers.')
parser.add_argument('output', type=Path)
parser.add_argument('--node', type=Path, default=shutil.which('node'))
parser.add_argument('--deno', type=Path, default=root / '.cache/js-runtimes/deno-2.9.7/deno')
parser.add_argument('--bun', type=Path, required=True, help='Explicit memory64-capable Bun executable')
parser.add_argument('--sdk', type=Path, default=os.environ.get('LASM_EMSDK', str(root / '.cache/emsdk-6.0.9-dev')))
parser.add_argument('--include', type=Path, default=root / '.work/lean-full/wasm64/include')
args = parser.parse_args()
base = root / 'scripts/full-lean/probes'
output = args.output.resolve()
assert not output.exists()
output.mkdir(parents=True)
engines = [('node', [str(args.node.resolve())]), ('deno', [str(args.deno.resolve()), 'run', '-A']),
           ('bun', [str(args.bun.resolve())])]
assert all(Path(command[0]).is_file() for _, command in engines)
def sha(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()
engine_hashes = {name: sha(Path(command[0])) for name, command in engines}
inputs = [base / 'transfer-width.cpp', base / 'transfer-width-library.js',
          root / 'runtime/node.hpp', root / 'runtime/node-async.cpp',
          root / 'scripts/full-lean/host-library.js', root / 'scripts/full-lean/emscripten-pre.js']
hashes = {str(path): hashlib.sha256(path.read_bytes()).hexdigest() for path in inputs}
snapshot = output / 'inputs'
snapshot.mkdir()
for path in inputs:
    shutil.copy2(path, snapshot / path.name)
declaration = re.search(r'extern "C" LASM_HOST_IMPORT\("node_start"\)\s*[^;]+;', inputs[3].read_text()).group(0)
(output / 'node-start-declaration.inc').write_text(declaration + '\n')
program = output / 'probe.cjs'
command = [str(args.sdk.resolve() / 'upstream/emscripten/em++'), str(inputs[0]),
           '-I', str(root / 'runtime'), '-I', str(output),
           '-I', str(args.include.resolve()),
           '-O1', '-pthread', '-fwasm-exceptions', '-sMEMORY64=1', '-sALLOW_MEMORY_GROWTH=1',
           '-sGROWABLE_ARRAYBUFFERS=1', '-sMAXIMUM_MEMORY=8589934592',
           '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=1', '-sEXIT_RUNTIME=1',
           '--pre-js', str(inputs[5]), '--js-library', str(inputs[4]), '--js-library', str(inputs[1]),
           '-o', str(program)]
env = {**os.environ, 'BINARYEN_CORES': '1', 'EMCC_CORES': '1', 'CMAKE_BUILD_PARALLEL_LEVEL': '1'}
record = {'startedAt': datetime.datetime.now(datetime.timezone.utc).isoformat(),
          'scope': 'Synthetic transfer counts through the actual C++ declarations and production JS import implementations. RPC payload is a length-only object; no large allocation or real filesystem IO.',
          'inputHashesBefore': hashes, 'engineHashesBefore': engine_hashes,
          'nodeStartDeclaration': declaration, 'buildCommand': command, 'runs': []}
summary = output / 'results.json'
def save():
    summary.write_text(json.dumps(record, indent=2) + '\n')
with (output / 'build.log').open('x') as stream:
    built = subprocess.run(command, env=env, stdout=stream, stderr=subprocess.STDOUT, timeout=180)
record['buildCode'] = built.returncode
save()
assert built.returncode == 0, 'Inspect retained build.log'
record['wasmSha256'] = hashlib.sha256(program.with_suffix('.wasm').read_bytes()).hexdigest()
for name, engine in engines:
    run_env = {**env, **({'BUN_JSC_useWasmMemory64': 'true'} if name == 'bun' else {})}
    result = subprocess.run(engine + [str(program)], env=run_env, capture_output=True, text=True, timeout=60)
    cases = [json.loads(line) for line in result.stdout.splitlines() if line.startswith('{')]
    record['runs'].append({'engine': name, 'command': engine + [str(program)], 'code': result.returncode,
                           'stdout': result.stdout, 'stderr': result.stderr, 'cases': cases})
    save()
    print(json.dumps({'engine': name, 'code': result.returncode, 'cases': len(cases),
                      'passed': sum(item['passed'] for item in cases)}), flush=True)
    assert len(cases) == 24 and all(item['passed'] for item in cases if item['length'] < 2**31)
record['inputHashesAfter'] = {str(path): hashlib.sha256(path.read_bytes()).hexdigest() for path in inputs}
record['engineHashesAfter'] = {name: sha(Path(command[0])) for name, command in engines}
record['inputsUnchanged'] = record['inputHashesBefore'] == record['inputHashesAfter'] and record['engineHashesBefore'] == record['engineHashesAfter']
record['passed'] = record['inputsUnchanged'] and all(run['code'] == 0 for run in record['runs'])
record['finishedAt'] = datetime.datetime.now(datetime.timezone.utc).isoformat()
save()
raise SystemExit(0 if record['passed'] else 1)
