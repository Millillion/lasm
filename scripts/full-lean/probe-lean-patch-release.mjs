// Check a new patch release's native regressions and the exact source inputs
// behind the existing IO error ABI before rebuilding application libraries.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync, copyFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { toolchainCatalog } from '../../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../../src/application-sources.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [provisioningArg, outputArg, ...extra] = process.argv.slice(2);
assert.ok(provisioningArg && outputArg && !extra.length, 'Supply VERIFIED_PROVISIONING_REPORT NEW_OUTPUT');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
assert.ok(!existsSync(output), 'Preserve previous release checks');
const provisioningFile = resolve(provisioningArg), provisioning = JSON.parse(readFileSync(provisioningFile));
assert.ok(provisioning.passed);
const resources = JSON.parse(readFileSync(provisioning.resourceReport));
assert.ok(resources.unitReleased && !resources.resourceLimited);
const lean = provisioning.native;
assert.equal(lean.version, '4.34.1'); assert.equal(lean.commit, toolchainCatalog.lean[lean.version].commit);
const sourceCatalog = JSON.parse(readFileSync(new URL('./lean-sources.json', import.meta.url)));
const sourceArchives = Object.fromEntries(['4.34.0', '4.34.1'].map(version =>
  [version, join(root, `.cache/downloads/lean4-v${version}.tar.gz`)]));
for (const [version, file] of Object.entries(sourceArchives))
  assert.equal(await hashFile(file), sourceCatalog[version].sha256);
const inputs = Object.fromEntries(await Promise.all([
  'scripts/full-lean/probe-lean-patch-release.mjs', 'scripts/full-lean/lean-sources.json',
  'src/toolchains.json', 'test/fixtures/application-main/Main.lean',
].map(async file => [file, await hashFile(join(root, file))])));
mkdirSync(output, { recursive: true });
const report = { scope: 'Native Lean 4.34.1 patch regressions and source ABI comparison; not Wasm or full API acceptance',
  provisioning: { path: provisioningFile, sha256: await hashFile(provisioningFile) }, native: lean,
  sourceArchives, sourceCatalog, inputs, resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
const env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '1' };
function run(label, program, args, { cwd = output, expectedCode = 0 } = {}) {
  const result = spawnSync(program, args, { cwd, env, encoding: 'utf8', timeout: 90_000,
    killSignal: 'SIGKILL', maxBuffer: 256 * 1024 });
  const row = { label, program, args, cwd, code: result.status, signal: result.signal,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr };
  report.commands.push(row); save();
  assert.ifError(result.error); assert.equal(result.signal, null); assert.equal(result.status, expectedCode, result.stderr);
  return { code: result.status, stdout: result.stdout, stderr: result.stderr };
}
save();
try {
  assert.equal(run('native release identity', lean.lean, ['--githash']).stdout.trim(), lean.commit);
  report.versions = { lean: run('native Lean version', lean.lean, ['--version']).stdout.trim(),
    lake: run('native Lake version', lean.lake, ['--version']).stdout.trim() };
  // Select only small, known files from the byte-verified archives. Leave every
  // upstream test unchanged and preserve its relative path in this new output.
  run('extract and compare exact upstream inputs', 'python3', ['-I', '-B', '-c', `
import pathlib,sys,tarfile,hashlib,json
out=pathlib.Path(sys.argv[3]); records={}
common=['src/runtime/io.cpp','src/Init/System/IO.lean']
tests=['tests/misc_dir/rc_sticky/rc_sticky.c','tests/misc_dir/rc_sticky/run_test.sh',
       'tests/elab/bitvec_ofNatClamp.lean','tests/elab/bv_decide_shift_symbolic.lean']
for version,archive in zip(['4.34.0','4.34.1'],sys.argv[1:3]):
 selected=set(common+(tests if version=='4.34.1' else [])); records[version]={}
 with tarfile.open(archive,'r|gz') as entries:
  for entry in entries:
   name='/'.join(pathlib.PurePosixPath(entry.name).parts[1:])
   if name not in selected:continue
   assert entry.isfile() and entry.size<1024*1024 and name not in records[version]
   data=entries.extractfile(entry).read(); assert len(data)==entry.size
   target=out/version/name;target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(data)
   records[version][name]={'bytes':len(data),'sha256':hashlib.sha256(data).hexdigest()}
 assert set(records[version])==selected
for name in common:assert records['4.34.0'][name]==records['4.34.1'][name],name
(out/'selected-inputs.json').write_text(json.dumps(records,indent=2)+'\\n')
`, sourceArchives['4.34.0'], sourceArchives['4.34.1'], output]);
  report.selectedInputs = JSON.parse(readFileSync(join(output, 'selected-inputs.json')));
  report.ioErrorSourceUnchanged = true;
  const rcDirectory = join(output, '4.34.1/tests/misc_dir/rc_sticky');
  run('compile unchanged upstream reference-count regression', join(lean.prefix, 'bin/leanc'),
    ['-o', 'rc_sticky.produced', 'rc_sticky.c'], { cwd: rcDirectory });
  const rc = run('unchanged upstream reference-count regression', join(rcDirectory, 'rc_sticky.produced'), []);
  assert.equal(rc.stdout, ''); assert.equal(rc.stderr, '');
  for (const name of ['bitvec_ofNatClamp', 'bv_decide_shift_symbolic'])
    run('unchanged upstream ' + name, lean.lean, [join(output, `4.34.1/tests/elab/${name}.lean`)]);
  const source = join(output, 'Main.lean'); copyFileSync(join(root, 'test/fixtures/application-main/Main.lean'), source);
  const c = join(output, 'main.c'), compiled = join(output, 'native-main');
  run('generate ordinary application', lean.lean, ['-j1', '-Dlinter.all=false', '-Dcompiler.postponeCompile=false', '-c', c, source]);
  run('compile ordinary application', join(lean.prefix, 'bin/leanc'), ['-O2', '-DNDEBUG', '-o', compiled, c]);
  report.application = [];
  for (const [index, args, expectedCode] of [[0, ['hello λ', '', 'space argument'], 7], [1, ['fail'], 1]]) {
    const interpretedCwd = join(output, 'interpreted-' + index), compiledCwd = join(output, 'compiled-' + index);
    mkdirSync(interpretedCwd); mkdirSync(compiledCwd);
    const interpreted = run('native interpreted application', lean.lean, ['-Dlinter.all=false', '--run', source, ...args],
      { cwd: interpretedCwd, expectedCode });
    const actual = run('native compiled application', compiled, args, { cwd: compiledCwd, expectedCode });
    assert.deepEqual(actual, interpreted); report.application.push({ args, interpreted, compiled: actual }); save();
  }
  for (const [version, files] of Object.entries(report.selectedInputs))
    for (const [name, record] of Object.entries(files))
      assert.equal(await hashFile(join(output, version, name)), record.sha256);
  report.upstreamTestsUnchanged = true; report.passed = true;
} catch (error) { report.error = error.stack; throw error; }
finally {
  report.inputsUnchanged = true;
  for (const [name, digest] of Object.entries(inputs)) if (await hashFile(join(root, name)) !== digest) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
