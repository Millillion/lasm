// Differential application coverage and size budgets, using the shipping
// builder. Run one selected group under run-bounded/base-pages on this host.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, writeFileSync, copyFileSync, readdirSync, statSync, renameSync, existsSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { buildApplication } from '../src/application-build.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { applicationSources, nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../', import.meta.url));
const [outputArg, group = 'static', version = '4.34.1', ...extra] = process.argv.slice(2);
assert.ok(outputArg && ['static', 'reflection', 'full-import'].includes(group) && !extra.length && /^\d+\.\d+\.\d+$/.test(version),
  'Supply NEW_OUTPUT [static|reflection|full-import] [LEAN_VERSION]');
const output = resolve(outputArg);
assert.equal(existsSync(output), false, 'Keep earlier attempts'); mkdirSync(output, { recursive: true });
const result = { group, version, node: process.version, platform: process.platform, arch: process.arch,
  harnessSha256: await hashFile(fileURLToPath(import.meta.url)), cases: [], passed: false,
  resourceReport: process.env.LASM_RESOURCE_REPORT };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
const runtimeEnv = Object.fromEntries(Object.entries(process.env).filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
runtimeEnv.PATH = ''; runtimeEnv.LEAN_NUM_THREADS = '2';
function measure(directory) {
  let total = 0; const files = {};
  function visit(base, prefix = '') {
    for (const entry of readdirSync(base, { withFileTypes: true })) {
      const name = prefix + entry.name, path = join(base, entry.name);
      if (entry.isDirectory()) { visit(path, name + '/'); continue; }
      assert.ok(entry.isFile(), 'Deployments must not depend on build-tree links');
      const bytes = statSync(path).size; total += bytes;
      const key = name.startsWith('lean/') ? 'moduleData' : name.startsWith('host/') ? 'host' : name;
      files[key] = (files[key] ?? 0) + bytes;
    }
  }
  visit(directory); return { total, files };
}
function run(record, label, command, args, cwd, env) {
  result.phase = `${record.name}: ${label}`; save();
  const start = performance.now(), child = spawnSync(command, args, { cwd, env, encoding: 'utf8',
    timeout: 180_000, maxBuffer: 2 * 1024 * 1024 });
  const value = { code: child.status, signal: child.signal, stdout: child.stdout, stderr: child.stderr };
  record.runs.push({ label, seconds: (performance.now() - start) / 1000, ...value }); save();
  assert.ifError(child.error); assert.equal(value.signal, null); assert.equal(value.code, 0, value.stderr);
  return value;
}
const hello = readFileSync(join(root, 'examples/hello/Main.lean'), 'utf8');
const cases = group === 'reflection'
  ? [{ name: 'runtime-evaluation', fixture: 'integration/fixtures/StandaloneModuleData.lean', mode: 'dynamic', args: [[]] }]
  : group === 'full-import'
  ? [{ name: 'legacy-json-import', fixture: 'integration/fixtures/BundleFeaturesLegacy.lean', mode: 'static', args: [['0'], ['17'], ['123456789']] }]
  : [{ name: 'hello', source: hello, mode: 'static', args: [[]] },
    { name: 'unused-definitions', source: Array.from({ length: 1000 }, (_, i) =>
      `def unused${i} (n : Nat) : Nat := (n + ${i}) * (n + ${i + 1})\n`).join('') + hello,
    mode: 'static', args: [[]] },
    { name: 'language-and-json', fixture: 'integration/fixtures/BundleFeatures.lean', mode: 'static', args: [['0'], ['17'], ['123456789']] },
    { name: 'filesystem', fixture: 'integration/fixtures/FilesystemSurface.lean', mode: 'static', args: [['fs working λ']] }];
try {
  for (const test of cases) {
    const project = join(output, test.name), source = join(project, 'Main.lean'); mkdirSync(project);
    writeFileSync(join(project, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
    if (test.fixture) copyFileSync(join(root, test.fixture), source); else writeFileSync(source, test.source);
    const record = { name: test.name, sourceSha256: await hashFile(source), runs: [] };
    result.cases.push(record); save();
    const lean = await provisionLean(source), nativeEnv = nativeLeanEnvironment(lean);
    const nativeWork = join(project, 'native'); mkdirSync(nativeWork);
    const generated = applicationSources(source, lean, nativeWork);
    const nativeExecutable = join(nativeWork, 'program');
    // Lean --run cannot evaluate an initialize declaration in its own module.
    // A compiled native executable gives the correct initialization oracle and
    // matches the production AOT path, including exported reflection symbols.
    run(record, 'compile native executable', join(lean.prefix, 'bin/leanc'),
      ['-O2', '-rdynamic', ...generated.sources, '-o', nativeExecutable], project, nativeEnv);
    const expected = test.args.map(args => run(record, 'native Lean executable', nativeExecutable, args, project, nativeEnv));
    result.phase = test.name + ': build'; save();
    const started = performance.now(); record.build = await buildApplication(source);
    record.buildSeconds = (performance.now() - started) / 1000; save();
    assert.equal(record.build.linkRequirements.mode, test.mode);
    // Move the complete output to an unrelated path without creating a second
    // multi-gigabyte copy of reflection metadata on constrained maintainers' disks.
    const deployed = join(output, test.name + ' relocated λ'); renameSync(record.build.output, deployed);
    record.size = measure(deployed); save();
    assert.equal(!!record.size.files.moduleData, test.mode === 'dynamic');
    assert.equal(!!record.build.moduleDataIdentity, test.mode === 'dynamic');
    if (test.mode === 'static') assert.ok(record.size.total < 16 * 1024 ** 2, 'Unexpected static deployment size regression');
    for (const [index, args] of test.args.entries()) {
      const actual = run(record, 'relocated Node, no tools on PATH', process.execPath,
        [join(deployed, 'main.mjs'), ...args], project, runtimeEnv);
      assert.deepEqual(actual, expected[index], 'Native and Node results differ');
    }
    assert.equal(await hashFile(source), record.sourceSha256); record.passed = true; save();
  }
  if (group === 'static') {
    const [hello, unused] = result.cases;
    assert.ok(unused.size.files['program.wasm'] <= hello.size.files['program.wasm'] + 4096,
      'A thousand unreachable functions must not be shipped');
  }
  assert.equal(await hashFile(fileURLToPath(import.meta.url)), result.harnessSha256);
  result.passed = true; delete result.phase; save();
  console.log(JSON.stringify(result.cases.map(({ name, size, passed }) => ({ name, size, passed })), null, 2));
} catch (error) { result.error = error.stack; save(); throw error; }
