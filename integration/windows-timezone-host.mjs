// Compare the production host adapter with native Lean on real Windows.
// This intentionally has no AOT/Wasm acceptance claim.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

await ensureResourceGuard();
assert.equal(process.platform, 'win32');
const [outputArg, node, version = '4.35.0', ...extra] = process.argv.slice(2);
assert.ok(outputArg && node && !extra.length, 'Supply NEW_OUTPUT NODE [LEAN_VERSION]');
assert.match(version, /^\d+\.\d+\.\d+$/);
const output = resolve(outputArg), root = fileURLToPath(new URL('..', import.meta.url));
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
// The native control needs leanc and Lean's bundled C toolchain. Lasm's tiered
// distribution (Lean 4.35.0 on) leaves both out on every host, by design: users
// never run leanc (packages with C code get the C tier's clang as `cc`). So
// the control uses the complete upstream archive, as check-node-windows does.
const lean = await provisionLean(output, { distribution: 'full' }), env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '1' };
const inputs = ['integration/windows-timezone-host.mjs', 'integration/fixtures/WindowsTimezoneIcu.lean',
  'integration/fixtures/windows-timezone-native-host.mjs', 'src/native-windows-timezone.mjs'];
const sourceHashes = Object.fromEntries(await Promise.all(inputs.map(async name => [name, await hashFile(join(root, name))])));
const report = { scope: 'Native Windows Lean interpreted/compiled versus the production private host timezone adapter; no Wasm application or installed-package claim',
  lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity, host: process.platform + '-' + process.arch,
  resourceReport: process.env.LASM_RESOURCE_REPORT, sourceHashes, commands: [], cases: [], passed: false,
  adaptations: ['The supplementary Lean fixture and host logger serialize API values, not console semantics. Only one terminal CRLF/LF is removed for the value comparison; every raw stdout/stderr/status is retained. Original upstream tests are not changed.'] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, args, timeout = 120_000, extraEnv = {}) {
  const started = performance.now(), result = spawnSync(program, args, { cwd: output, env: { ...env, ...extraEnv }, encoding: 'utf8',
    timeout, killSignal: 'SIGKILL', maxBuffer: 1024 * 1024 });
  const row = { label, program, args, seconds: (performance.now() - started) / 1000,
    code: result.status, signal: result.signal, error: result.error?.message, stdout: result.stdout, stderr: result.stderr };
  report.commands.push(row); save(); assert.ifError(result.error); assert.equal(row.code, 0, label + ': ' + row.stderr);
  return { code: row.code, signal: row.signal, stdout: row.stdout, stderr: row.stderr };
}
function value(observation) {
  assert.equal(observation.stderr, ''); assert.equal(observation.signal, null);
  assert.match(observation.stdout, /\r?\n$/);
  const text = observation.stdout.replace(/\r?\n$/, '');
  assert.ok(!text.includes('\n') && !text.includes('\r'));
  return text;
}
try {
  const main = join(output, 'Main.lean'), native = join(output, 'native.exe');
  copyFileSync(join(root, 'integration/fixtures/WindowsTimezoneIcu.lean'), main);
  run('generate native fixture', lean.lean, ['-j1', '-Dlinter.all=false', '-Dcompiler.postponeCompile=false', '-c', main + '.c', main]);
  assert.equal(lean.distribution, 'full');
  // leanc's bundled-compiler template is ROOT/bin/clang.exe; a namespaced ROOT
  // (\\?\C:\...) gives mixed separators Windows cannot spawn, so leanc gets the
  // ordinary prefix (as in check-node-windows).
  run('compile native fixture', join(lean.prefix, 'bin/leanc.exe'), ['-O2', '-DNDEBUG', '-o', native, main + '.c'], 120_000,
    { LEAN_SYSROOT: lean.executionPrefix ?? lean.prefix });
  report.nativeSha256 = await hashFile(native);
  const engines = [['node', node, []]];
  report.engines = engines.map(([name, program]) => ({ name, program, version: run(name + ' version', program, ['--version']).stdout.trim() }));
  assert.equal(report.engines[0].version, 'v26.13.0');
  const selections = [];
  for (const name of ['UTC', 'America/New_York', 'Europe/Berlin', 'Australia/Lord_Howe', 'Lasm/No_such_zone', 'a'.repeat(300)]) {
    selections.push(['transition', name, '-2147483648', 'true']);
    for (const seconds of ['946684800', '962409600', '-2147483648']) selections.push(['transition', name, seconds, 'false']);
  }
  for (const seconds of ['0', '-2147483648', '946684800']) selections.push(['local', seconds]);
  for (const args of selections) {
    const row = { args, interpreted: run('native interpreted case', lean.lean, ['-Dlinter.all=false', '--run', main, ...args]),
      native: run('native compiled case', native, args), engines: [] }; report.cases.push(row); save();
    const expected = value(row.interpreted); assert.equal(value(row.native), expected);
    for (const [name, program, prefix] of engines) {
      const actual = run(name + ' production host adapter', program,
        [...prefix, join(root, 'integration/fixtures/windows-timezone-native-host.mjs'), ...args]);
      const equal = value(actual) === expected; row.engines.push({ name, actual, equal }); save();
      assert.equal(equal, true, name + ': ' + args.join(' '));
    }
  }
  for (const [name, expected] of Object.entries(sourceHashes)) assert.equal(await hashFile(join(root, name)), expected);
  report.sourcesUnchanged = true; report.passed = true;
} finally { report.finishedAt = new Date().toISOString(); save(); }
console.log(JSON.stringify({ passed: report.passed, casesPerEngine: report.cases.length, scope: report.scope }));
