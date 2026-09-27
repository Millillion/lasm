// Native regression for an ordinary managed cache whose stdlib paths cross
// MAX_PATH. Exercise real Lean and Lake, not a mock of Windows path spelling.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import { provisionLean } from '../../src/managed-lean.mjs';
import { applicationSources, nativeLeanEnvironment } from '../../src/application-sources.mjs';
import { provisionGit } from '../../src/managed-git.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-x64');
const root = resolve('.work/windows-lean-path-controls');
assert.ok(!existsSync(root)); mkdirSync(root, { recursive: true });
const project = join(root, 'project 日本語'), work = join(root, 'generated');
mkdirSync(project); mkdirSync(work);
writeFileSync(join(project, 'lean-toolchain'), 'leanprover/lean4:v4.34.1\n');
const source = join(project, 'Main.lean');
writeFileSync(source, 'def main : IO Unit := IO.println "long cache path 42"\n');
const cache = join(root, 'managed cache λ ' + 'x'.repeat(72));
const result = { passed: false, scope: 'Native Lean/Lake long managed paths; installed Lasm acceptance remains separate',
  platform: process.platform + '-' + process.arch, node: process.version, checks: [] };
const save = () => writeFileSync(join(root, 'result.json'), JSON.stringify(result, null, 2) + '\n');
save();
try {
  const lean = await provisionLean(source, { cache });
  const longModule = join(lean.prefix, 'lib/lean/Init/Data/Iterators/Internal/LawfulMonadLiftFunction.olean.private');
  assert.ok(longModule.length >= 260 && statSync(longModule).size > 0);
  result.modulePath = longModule; result.modulePathLength = longModule.length;
  result.lean = { version: lean.version, commit: lean.commit, identity: lean.identity, nativePrograms: lean.nativePrograms };
  const env = nativeLeanEnvironment(lean), baseline = { ...env };
  delete baseline.LEAN_PATH; delete baseline.LEAN_SYSROOT;
  function run(label, environment) {
    const r = spawnSync(lean.lean, ['-j1', '-s8192', '--run', source],
      { cwd: project, env: environment, encoding: 'utf8', timeout: 120000, maxBuffer: 1024 ** 2 });
    assert.ifError(r.error); assert.equal(r.signal, null);
    result.checks.push({ label, code: r.status, stdout: r.stdout, stderr: r.stderr }); save();
    return r;
  }
  const original = run('unchanged upstream path handling', baseline);
  assert.notEqual(original.status, 0);
  assert.match(original.stdout + original.stderr, /failed to open file.*\.olean/);
  const extended = run('extended library paths', env);
  assert.equal(extended.status, 0, extended.stdout + extended.stderr);
  assert.equal(extended.stdout.trim(), 'long cache path 42');
  const standalone = applicationSources(source, lean, work);
  assert.ok(standalone.sources.length === 1 && statSync(standalone.sources[0]).size > 0);
  result.checks.push({ standaloneCGeneration: true }); save();
  writeFileSync(join(project, 'lakefile.lean'), 'import Lake\nopen Lake DSL\npackage longPaths\nlean_lib Greeting\n@[default_target]\nlean_exe hello where\n  root := `Main\n');
  writeFileSync(join(project, 'Greeting.lean'), 'def greeting : String := "Lake long cache path 42"\n');
  writeFileSync(source, 'import Greeting\ndef main : IO Unit := IO.println greeting\n');
  const git = await provisionGit({ cache });
  const lake = applicationSources(source, lean, work, { git });
  assert.ok(lake.sources.length >= 2 && lake.sources.every(file => statSync(file).size > 0));
  assert.ok(lake.sources.some(file => readFileSync(file, 'utf8').includes('Lake long cache path 42')));
  result.checks.push({ lakeLocalImportCGeneration: true, sources: lake.inputs });
  result.passed = true; save();
} catch (error) { result.error = error.stack; save(); throw error; }
console.log(JSON.stringify(result, null, 2));
