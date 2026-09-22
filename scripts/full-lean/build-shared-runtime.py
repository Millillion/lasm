#!/usr/bin/env python3
# Build an experimental shared application runtime from immutable compiler inputs.
from pathlib import Path
import datetime, hashlib, json, os, re, shlex, subprocess, sys

assert os.environ.get('LASM_RESOURCE_UNIT'), 'Run through scripts/full-lean/run-bounded.mjs'
os.environ.update(BINARYEN_CORES='1', EMCC_CORES='1', CMAKE_BUILD_PARALLEL_LEVEL='1')
root = Path(__file__).resolve().parents[2]
if len(sys.argv) != 3:
    raise SystemExit('Usage: build-shared-runtime.py FROZEN_NATIVE64_COMPILER NEW_OUTPUT')
source = Path(sys.argv[1]).resolve()
out = Path(sys.argv[2]).resolve()
pool_size = 1
if out.exists():
    raise RuntimeError('Fresh output required')

def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()

meta = json.loads((source / 'snapshot.json').read_text())
assert meta['leanCommit'] == '8c9756b28d64dab099da31a4c09229a9e6a2ef35', 'Pinned Lean revision required'
assert re.search(r'^LASM_MEMORY64:STRING=1$', (source / 'CMakeCache.txt').read_text(), re.M), 'Use a native-memory64 base'
base_provenance = json.loads((source / 'build-provenance.json').read_text())
assert not (base_provenance.get('sharedProgramEntry') or base_provenance.get('sharedProgramEntryPrototype')), 'Use an ordinary compiler base'
for name, expected in meta['files'].items():
    assert digest(source / name) == expected, name
(out / 'bin').mkdir(parents=True)
generated = {'bin', 'snapshot.json', 'build-provenance.json', 'CMakeCache.txt',
             'leanc.sh', 'function-table-index.json', 'relink.json', 'relink.log',
             'entry-build.json', 'entry-build.log', 'shared-program-main.cpp', 'shared-program-main.o'}
for path in source.iterdir():
    if path.name not in generated:
        (out / path.name).symlink_to(path)
for path in (source / 'bin').iterdir():
    if path.name not in ['lean.js', 'lean.cjs', 'lean.wasm']:
        (out / 'bin' / path.name).symlink_to(path)
provenance = json.loads((source / 'build-provenance.json').read_text())
sdk = Path(meta['sdk'])
recipe = next(line.strip() for line in (source / 'stdlib.make').read_text().splitlines()
              if line.startswith('\t$(LEANC_SH) ../../wasm64/lib/temp/libleanmain.a'))
args = shlex.split(recipe)[1:]
flags = re.search(r'^ldflags=\((.*)\)$', (source / 'leanc.sh').read_text(), re.M)[1].replace('$root', str(source))
args += shlex.split(flags)

def convert(arg):
    if arg.startswith('../../wasm64/'):
        arg = str(source / arg.removeprefix('../../wasm64/'))
    arg = arg.replace(str(root / '.work/lean-full/wasm64'), str(source))
    arg = arg.replace(str(root / '.cache/gmp-wasm64/lib/libgmp.a'), str(source / 'lib/lean/libgmp.a'))
    if arg.endswith('/src/lasm/host-pre.js'):
        arg = str(source / 'runtime-support/host-pre.js')
    if arg.endswith('/src/lasm/host-library.js'):
        arg = str(source / 'runtime-support/host-library.js')
    if arg.endswith('/src/lasm-emscripten-pre.js'):
        arg = str(source / 'runtime-support/emscripten-pre.js')
    arg = arg.replace('-sMEMORY64=2', '-sMEMORY64=1').replace('LASM_MEMORY64:STRING=2', 'LASM_MEMORY64:STRING=1')
    arg = re.sub(r'-sMAXIMUM_MEMORY=\d+', '-sMAXIMUM_MEMORY=8589934592', arg)
    arg = re.sub(r'-sPTHREAD_POOL_SIZE=\d+', '-sPTHREAD_POOL_SIZE=' + str(pool_size), arg)
    return str(out / 'bin/lean.js') if arg == '$@' else arg

args = [convert(arg) for arg in args]
args.append('-sPTHREAD_POOL_SIZE=' + str(pool_size))
args.append('-sMAIN_MODULE=1')
entry = root / 'scripts/full-lean/shared-program-main.cpp'
(out / entry.name).write_bytes(entry.read_bytes())
flags_text = (source / 'shell/CMakeFiles/leanmain.dir/flags.make').read_text()
entry_flags = []
for key in ['CXX_DEFINES', 'CXX_FLAGS']:
    match = re.search(r'^' + key + r' = (.*)$', flags_text, re.M)
    assert match, key
    entry_flags.extend(convert(arg) for arg in shlex.split(match[1]))
entry_object = out / 'shared-program-main.o'
entry_command = [str(sdk / 'upstream/emscripten/em++'), *entry_flags,
                 '-c', str(out / entry.name), '-o', str(entry_object)]
with (out / 'entry-build.log').open('w') as log:
    built = subprocess.run(entry_command, stdout=log, stderr=subprocess.STDOUT)
(out / 'entry-build.json').write_text(json.dumps({'command': entry_command, 'exitCode': built.returncode,
    'sourceSha256': digest(entry), 'copiedSourceSha256': digest(out / entry.name)}, indent=2) + '\n')
if built.returncode:
    raise SystemExit(built.returncode)
old_entry = str(source / 'lib/temp/libleanmain.a')
assert args.count(old_entry) == 1
args[args.index(old_entry)] = str(entry_object)
command = [str(sdk / 'upstream/emscripten/em++'), *args]
archives = set(Path(arg) for arg in args if arg.endswith('.a') and Path(arg).exists())
archives.update((source / 'lib/lean').glob('*.a'))
record = {'source': str(source), 'resourceReport': os.environ.get('LASM_RESOURCE_REPORT'), 'implementationSha256': digest(Path(__file__)), 'scope': 'Experimental shared C-main runtime: replacement dispatcher and full Emscripten exports, with unchanged Lean APIs, archives, and test sources.',
          'command': command, 'entryCommand': entry_command, 'entrySourceSha256': digest(entry), 'entryObjectSha256': digest(entry_object), 'archives': {str(path): digest(path) for path in sorted(archives)},
          'startedAt': datetime.datetime.now(datetime.timezone.utc).isoformat()}
(out / 'relink.json').write_text(json.dumps(record, indent=2) + '\n')
with (out / 'relink.log').open('w') as log:
    result = subprocess.run(command, stdout=log, stderr=subprocess.STDOUT, cwd=root)
record.update(exitCode=result.returncode, finishedAt=datetime.datetime.now(datetime.timezone.utc).isoformat())
(out / 'relink.json').write_text(json.dumps(record, indent=2) + '\n')
if result.returncode:
    raise SystemExit(result.returncode)
for name, expected in meta['files'].items():
    assert digest(source / name) == expected, 'Source input changed during relink: ' + name
subprocess.run(['node', '--input-type=module', '-e', '''
import { indexFunctionTable } from './scripts/full-lean/function-table-index.mjs';
import { preserveWebWorker } from './scripts/full-lean/preserve-web-worker.mjs';
import { optimizeMainTableGrowth } from './scripts/full-lean/table-growth.mjs';
import { readFileSync, writeFileSync, copyFileSync } from 'node:fs';
import { join } from 'node:path';
const out = process.argv[1];
const index = await indexFunctionTable(join(out, 'bin/lean.wasm'), join(out, 'bin/lean.js'));
writeFileSync(join(out, 'bin/lean.js'), optimizeMainTableGrowth(readFileSync(join(out, 'bin/lean.js'), 'utf8')));
preserveWebWorker(join(out, 'bin/lean.js'));
copyFileSync(join(out, 'bin/lean.js'), join(out, 'bin/lean.cjs'));
writeFileSync(join(out, 'function-table-index.json'), JSON.stringify(index, null, 2) + '\\n');
''', str(out)], check=True, cwd=root)
for name in ['CMakeCache.txt', 'leanc.sh']:
    (out / name).write_text(convert((source / name).read_text()))
index = json.loads((out / 'function-table-index.json').read_text())
provenance['sharedProgramEntry'] = {'protocol': 'emscripten-c-main-v1', 'sourceSha256': digest(entry), 'scope': 'Experimental opt-in C main loading through dlopen; cross-platform and broad-suite validation remain separate.'}
provenance.update(memoryMode=1, maximumMemoryBytes=8589934592, pthreadPoolSize=pool_size,
    functionTableIndex={'scope': 'Known function addresses from verified Wasm metadata; complete-scan fallback retained.',
        'wasmSha256': index['wasmSha256'], 'initialTableEntries': index['initialTableEntries'],
        'exportSeeds': len(index['exportSeeds']), 'importSeeds': len(index['importSeeds'])})
(out / 'build-provenance.json').write_text(json.dumps(provenance, indent=2) + '\n')
meta.update(derivedFrom=str(source), createdAt=record['finishedAt'], derivation=record)
for name in ['bin/lean.js', 'bin/lean.cjs', 'bin/lean.wasm', 'build-provenance.json', 'CMakeCache.txt', 'leanc.sh', 'function-table-index.json', 'relink.json', 'shared-program-main.cpp', 'shared-program-main.o', 'entry-build.json']:
    meta['files'][name] = digest(out / name)
(out / 'snapshot.json').write_text(json.dumps(meta, indent=2) + '\n')
print(json.dumps({'output': str(out), 'wasmSha256': digest(out / 'bin/lean.wasm')}))
