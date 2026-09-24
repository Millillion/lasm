// Native build-tool/data-layout control; installed Wasm acceptance is separate.
import assert from 'node:assert/strict';
import { mkdirSync, existsSync, writeFileSync, renameSync, readFileSync, statfsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { applicationSources, nativeLeanEnvironment } from '../src/application-sources.mjs';
import { applicationMetadata, copyApplicationMetadata } from '../src/application-metadata.mjs';
import { prepareApplicationMetadata } from '../src/application-metadata-runtime.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

await ensureResourceGuard();
assert.equal(process.platform, 'linux', 'This native control uses ELF executable symbol exports');
assert.equal(process.argv.length, 3, 'Supply a new output directory');
const output = resolve(process.argv[2]); assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const report = { scope: 'Native Lake helper and relocated module-data import control; no installed Wasm acceptance implied',
  platform: process.platform + '-' + process.arch, commands: [], passed: false, resourceReport: process.env.LASM_RESOURCE_REPORT };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function write(name, contents) { writeFileSync(join(output, name), contents); }
function execute(label, program, args, cwd, env, success = true) {
  report.phase = label; save();
  const child = spawnSync(program, args, { cwd, env, encoding: 'utf8', timeout: 180_000, killSignal: 'SIGKILL', maxBuffer: 1024 * 1024 });
  const observed = { code: child.status, signal: child.signal, stdout: child.stdout, stderr: child.stderr };
  report.commands.push({ label, ...observed, error: child.error?.message }); save();
  assert.ifError(child.error); if (success) assert.equal(child.status, 0, child.stderr);
  return observed;
}
save();
try {
  write('lean-toolchain', 'leanprover/lean4:v4.34.0\n');
  const lean = await provisionLean(output);
  report.toolchain = { version: lean.version, commit: lean.commit, identity: lean.identity };
  const project = join(output, 'project'), library = join(project, 'Example'), dependency = join(project, 'dependency');
  mkdirSync(library, { recursive: true }); mkdirSync(dependency);
  write('project/lean-toolchain', 'leanprover/lean4:v4.34.0\n');
  write('project/lakefile.toml', 'name = "module_data_control"\n[[require]]\nname = "local_data"\npath = "dependency"\n[[lean_lib]]\nname = "Example"\n[[lean_exe]]\nname = "demo"\nroot = "Main"\nsupportInterpreter = true\n');
  write('project/dependency/lakefile.toml', 'name = "local_data"\n[[lean_lib]]\nname = "Imported"\n');
  write('project/dependency/Imported.lean', 'import Lean\ndef importedAnswer : Nat := 42\n');
  write('project/Example/Data.lean', 'import Imported\ndef projectAnswer : Nat := importedAnswer\n');
  const main = 'import Example.Data\nopen Lean\nunsafe def main : IO Unit := do\n  initSearchPath (← findSysroot)\n  withImportModules #[{ module := `Example.Data : Import }] {} fun env => do\n    unless env.contains `projectAnswer && env.contains `importedAnswer && env.contains `Lean.Expr do\n      throw (IO.userError "relocated import lost declarations")\n    IO.println "project, dependency and standard module data imported"\n';
  write('project/Main.lean', main);
  const work = join(output, 'generated'); mkdirSync(work);
  const generated = applicationSources(join(project, 'Main.lean'), lean, work, { log: () => {} });
  report.generated = { modules: generated.inputs.map(input => input.module), metadataRoots: generated.metadataRoots };
  assert.equal(generated.metadataRoots.length, 2, 'Lake must expose both project and path-dependency module roots');
  const metadata = await applicationMetadata(generated, lean); assert.ok(metadata);
  assert.equal(metadata.manifest.roots.length, 2);
  for (const suffix of ['/Example/Data.olean', '/Imported.olean'])
    assert.ok(metadata.manifest.files.some(file => file.path.endsWith(suffix)));
  const free = statfsSync(output);
  assert.ok(free.bavail * free.bsize >= metadata.manifest.bytes + 4 * 1024 ** 3,
    'Preserve four GiB of free disk while copying module data');
  const native = join(output, 'native');
  execute('native AOT control build', join(lean.prefix, 'bin/leanc'), ['-O2', '-rdynamic', ...generated.sources, '-o', native], project, nativeLeanEnvironment(lean));
  const dist = join(output, 'dist'); await copyApplicationMetadata(metadata, dist);
  report.metadata = { identity: metadata.identity, bytes: metadata.manifest.bytes,
    files: metadata.manifest.files.length, roots: metadata.manifest.roots,
    manifestSha256: await hashFile(join(dist, 'lean/metadata.json')) };
  const relocated = join(output, 'deployment with spaces'); renameSync(dist, relocated); renameSync(project, project + '.hidden');
  const env = Object.fromEntries(Object.entries(process.env).filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
  env.PATH = ''; prepareApplicationMetadata(pathToFileURL(join(relocated, 'main.mjs')), env);
  report.deployment = { directory: relocated, path: '', sourceHidden: true, sysroot: env.LEAN_SYSROOT, searchPath: env.LEAN_PATH,
    scope: 'The native executable may retain native shared-library dependencies; all import data resolves inside this relocated deployment.' };
  report.actual = execute('native import from automatically deployed module data', native, [], relocated, env);
  assert.deepEqual(report.actual, { code: 0, signal: null, stdout: 'project, dependency and standard module data imported\n', stderr: '' });
  const std = join(relocated, 'lean/lib/lean'); renameSync(std, std + '.hidden');
  try {
    report.missingData = execute('missing deployed standard data is a real import failure', native, [], relocated, env, false);
    assert.notEqual(report.missingData.code, 0); assert.equal(report.missingData.signal, null);
    assert.match(report.missingData.stderr, /Init|unknown module|object file/);
  } finally { renameSync(std + '.hidden', std); }
  assert.equal(readFileSync(join(project + '.hidden', 'Main.lean'), 'utf8'), main);
  report.passed = true; report.phase = 'complete';
} catch (error) { report.error = { message: error.message, stack: error.stack }; throw error; }
finally { report.finishedAt = new Date().toISOString(); save(); }
