// Native regression for an ordinary managed cache whose stdlib paths cross
// MAX_PATH. Exercise real Lean and Lake, not a mock of Windows path spelling.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, statSync, symlinkSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { provisionLean } from '../../src/managed-lean.mjs';
import { applicationSources, nativeLeanEnvironment, canonicalApplicationPath } from '../../src/application-sources.mjs';
import { provisionGit } from '../../src/managed-git.mjs';
import { managedGitEnvironment } from '../../src/managed-git.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-x64');
const root = resolve(process.argv[2] ?? '.work/windows-lean-path-controls');
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
  assert.equal(canonicalApplicationPath(join(lean.executionPrefix, 'lib')), canonicalApplicationPath(join(lean.prefix, 'lib')));
  assert.notEqual(canonicalApplicationPath(join(lean.executionPrefix, 'bin')), canonicalApplicationPath(join(lean.prefix, 'bin')));
  result.executionPrefix = lean.executionPrefix;
  result.executedPrograms = { lean: lean.lean, lake: lean.lake };
  result.lean = { version: lean.version, commit: lean.commit, identity: lean.identity, nativePrograms: lean.nativePrograms };
  const env = nativeLeanEnvironment(lean), baseline = { ...env };
  delete baseline.LEAN_PATH; delete baseline.LEAN_SYSROOT;
  function run(label, environment, program = lean.lean) {
    result.activeCheck = label; save();
    const r = spawnSync(program, ['-j1', '-s8192', '--run', source],
      { cwd: project, env: environment, encoding: 'utf8', timeout: 120000, maxBuffer: 1024 ** 2 });
    assert.ifError(r.error); assert.equal(r.signal, null);
    result.checks.push({ label, code: r.status, stdout: r.stdout, stderr: r.stderr }); save();
    return r;
  }
  const original = run('unchanged upstream path handling', baseline, join(lean.prefix, 'bin/lean.exe'));
  assert.notEqual(original.status, 0);
  assert.match(original.stdout + original.stderr, /failed to open file.*\.olean/);
  const extended = run('extended library paths', env);
  assert.equal(extended.status, 0, extended.stdout + extended.stderr);
  assert.equal(extended.stdout.trim(), 'long cache path 42');
  result.activeCheck = 'standalone C generation'; save();
  const standalone = applicationSources(source, lean, work);
  assert.ok(standalone.sources.length === 1 && statSync(standalone.sources[0]).size > 0);
  result.checks.push({ standaloneCGeneration: true }); save();
  writeFileSync(join(project, 'lakefile.lean'), 'import Lake\nopen Lake DSL\npackage longPaths\nlean_lib Greeting\n@[default_target]\nlean_exe hello where\n  root := `Main\n');
  writeFileSync(join(project, 'Greeting.lean'), 'def greeting : String := "Lake long cache path 42"\n');
  writeFileSync(source, 'import Greeting\ndef main : IO Unit := IO.println greeting\n');
  const git = await provisionGit({ cache });
  // Preserve separate fresh workspaces so one command cannot hide another
  // command's config-elaboration problem behind a cached lakefile.olean.
  const adapter = fileURLToPath(new URL('../../src/lake-module.lean', import.meta.url));
  const fullAdapter = join(root, 'full-import-adapter.lean');
  writeFileSync(fullAdapter, readFileSync(adapter, 'utf8').replace('import Lake.Load.Workspace', 'import Lake\nimport Lake.Load.Workspace'));
  const shortPrefix = join(root, 'short toolchain');
  symlinkSync(lean.prefix, shortPrefix, 'junction');
  const shortLean = { ...lean, prefix: shortPrefix, executionPrefix: shortPrefix,
    lean: join(shortPrefix, 'bin/lean.exe'), lake: join(shortPrefix, 'bin/lake.exe') };
  const shortEnv = nativeLeanEnvironment(shortLean);
  const shortPlainEnv = { ...shortEnv, LEAN_PATH: join(shortPrefix, 'lib/lean'), LEAN_SYSROOT: shortPrefix };
  for (const [label, tool, environment, header, nativeCli] of [
    ['short plain Lake', shortLean, shortPlainEnv, 'import Lake', true],
    ['short namespaced Lake', shortLean, shortEnv, 'import Lake', true],
    ['direct config compilation', lean, env, 'import Lake', false],
    ['meta imported Lake', lean, env, 'meta import Lake', true],
    ['module Lake configuration', lean, env, 'module\npublic import Lake', true],
  ]) {
    result.activeCheck = label; save();
    const cwd = join(root, label); mkdirSync(cwd);
    for (const file of ['lean-toolchain', 'Greeting.lean', 'Main.lean']) writeFileSync(join(cwd, file), readFileSync(join(project, file)));
    writeFileSync(join(cwd, 'lakefile.lean'), readFileSync(join(project, 'lakefile.lean'), 'utf8').replace('import Lake', header));
    const args = nativeCli ? ['--no-cache', '--keep-toolchain', '--quiet', '--json', 'query', '/+Main:lean']
      : ['-j1', '-s8192', '--plugin=' + join(tool.prefix, 'bin/libLake_shared.dll'), 'lakefile.lean'];
    const r = spawnSync(nativeCli ? tool.lake : tool.lean, args,
      { cwd, env: managedGitEnvironment(git, environment), encoding: 'utf8', timeout: 120000, maxBuffer: 1024 ** 2 });
    assert.ifError(r.error); assert.equal(r.signal, null);
    result.checks.push({ label, code: r.status, stdout: r.stdout, stderr: r.stderr }); save();
    assert.equal(r.status, 0, label + ': ' + r.stdout + r.stderr);
  }
  for (const [label, program, helper, sysroot, plugin] of [
    ['native Lake CLI', lean.lake, null, true, false],
    ['interpreter adapter', lean.lean, adapter, true, true],
    ['adapter without SYSROOT override', lean.lean, adapter, false, true],
    ['adapter with full Lake import', lean.lean, fullAdapter, true, true],
    ['adapter without plugin', lean.lean, adapter, true, false],
  ]) {
    result.activeCheck = label; save();
    const cwd = join(root, label); mkdirSync(cwd);
    for (const file of ['lean-toolchain', 'lakefile.lean', 'Greeting.lean', 'Main.lean'])
      writeFileSync(join(cwd, file), readFileSync(join(project, file)));
    const environment = managedGitEnvironment(git, { ...env });
    if (!sysroot) delete environment.LEAN_SYSROOT;
    const args = helper ? ['-j1', '-s8192', ...(plugin ? ['--plugin=' + join(lean.prefix, 'bin/libLake_shared.dll')] : []),
      '--run', helper, join(cwd, 'Main.lean')] : ['--no-cache', '--keep-toolchain', '--quiet', '--json', 'query', '/+Main:lean'];
    const r = spawnSync(program, args, { cwd, env: environment, encoding: 'utf8', timeout: 120000, maxBuffer: 1024 ** 2 });
    assert.ifError(r.error); assert.equal(r.signal, null);
    result.checks.push({ label, code: r.status, stdout: r.stdout, stderr: r.stderr }); save();
    if (label === 'adapter without plugin') {
      assert.notEqual(r.status, 0);
      assert.match(r.stderr, /LEAN ASSERTION VIOLATION/);
    } else assert.equal(r.status, 0, label + ': ' + r.stdout + r.stderr);
  }
  result.activeCheck = 'Lake local import C generation'; save();
  const lake = applicationSources(source, lean, work, { git });
  assert.ok(lake.sources.length >= 2 && lake.sources.every(file => statSync(file).size > 0));
  assert.ok(lake.sources.some(file => readFileSync(file, 'utf8').includes('Lake long cache path 42')));
  result.checks.push({ lakeLocalImportCGeneration: true, sources: lake.inputs });
  result.passed = true; delete result.activeCheck; save();
} catch (error) { result.error = error.stack; save(); throw error; }
console.log(JSON.stringify(result, null, 2));
