// Compile the original Lean Windows ICU functions against the local ICU ABI.
// This is an independent FFI control, not native Windows platform acceptance.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';
import { provisionLean } from '../../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../../src/application-sources.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';

await ensureResourceGuard();
assert.equal(process.platform, 'linux', 'This supplementary ICU control is Linux-specific');
const [sourceArg, outputArg, denoArg, bunArg] = process.argv.slice(2);
assert.ok(sourceArg && outputArg && denoArg && bunArg);
const root = fileURLToPath(new URL('../..', import.meta.url));
const source = resolve(sourceArg), output = resolve(outputArg);
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const lean = await provisionLean(output), env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '1' };
const report = { scope: 'Original Lean Windows ICU function bodies executed with Linux ICU; FFI and error/representation controls only, not Windows or Wasm acceptance',
  lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity,
  adaptations: [
    'The two original runtime functions are extracted with identical bodies. Only their external names change to linker --wrap entry points.',
    'LEAN_WINDOWS is defined after Linux Lean/ICU headers, selecting only these functions\' original ICU branches.',
    'A separate ordinary Lean fixture calls the original APIs. Native compiler tests and upstream test files remain unchanged.',
    'All engines bind the same Linux ICU shared library with its versioned symbols. The production adapter still loads Windows icu.dll only on Windows.',
  ], resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], cases: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, args, timeout = 120_000) {
  const started = performance.now();
  const value = spawnSync(program, args, { cwd: output, env, encoding: 'utf8', timeout,
    killSignal: 'SIGKILL', maxBuffer: 1024 * 1024 });
  const row = { label, program, args, seconds: (performance.now() - started) / 1000,
    code: value.status, signal: value.signal, error: value.error?.message, stdout: value.stdout, stderr: value.stderr };
  report.commands.push(row); save(); assert.ifError(value.error); assert.equal(row.code, 0, label + ': ' + row.stderr);
  return { code: row.code, signal: row.signal, stdout: row.stdout, stderr: row.stderr };
}
try {
  const original = join(source, 'src/runtime/io.cpp'), text = readFileSync(original, 'utf8');
  const inventory = JSON.parse(readFileSync(join(root, 'docs/evidence/lean-4.34-upstream-application-inventory.json')));
  assert.equal(lean.commit, inventory.leanCommit);
  report.sourceSha256 = await hashFile(original);
  const archive = join(root, '.cache/downloads/lean4-v4.34.0.tar.gz');
  assert.equal(await hashFile(archive), inventory.sourceArchiveSha256);
  const extractedFile = spawnSync('tar', ['-xOf', archive, '--wildcards', '--no-wildcards-match-slash', '*/src/runtime/io.cpp'],
    { encoding: 'utf8', timeout: 120_000, maxBuffer: 2 * 1024 * 1024 });
  assert.ifError(extractedFile.error); assert.equal(extractedFile.status, 0, extractedFile.stderr);
  report.sourceArchive = { file: archive, sha256: inventory.sourceArchiveSha256, member: '*/src/runtime/io.cpp',
    extractedSha256: createHash('sha256').update(extractedFile.stdout).digest('hex') };
  save();
  assert.equal(report.sourceArchive.extractedSha256, report.sourceSha256,
    'Use exactly the pristine release src/runtime/io.cpp; exclude stage0/src/runtime/io.cpp');
  const start = text.indexOf('/* Std.Time.Database.Windows.getNextTransition :');
  const end = text.indexOf('/* monoMsNow :', start);
  assert.ok(start >= 0 && end > start);
  const extracted = text.slice(start, end), names = ['lean_windows_get_next_transition', 'lean_get_windows_local_timezone_id_at'];
  report.extractedSha256 = createHash('sha256').update(extracted).digest('hex');
  let wrapped = extracted;
  for (const name of names) {
    assert.equal(wrapped.split('obj_res ' + name + '(').length, 2);
    wrapped = wrapped.replace('obj_res ' + name + '(', 'obj_res __wrap_' + name + '(');
  }
  const cpp = join(output, 'original-icu.cpp'), object = join(output, 'original-icu.o');
  const copyright = text.slice(0, text.indexOf('#if defined(LEAN_WINDOWS)'));
  writeFileSync(cpp, copyright + '#include <cerrno>\n#include <cmath>\n#include <unicode/ucal.h>\n#include <unicode/ustring.h>\n#include "runtime/io.h"\n#include "runtime/object.h"\n#define LEAN_WINDOWS\nnamespace lean {\n' + wrapped + '\n}\n');
  report.wrapperSha256 = await hashFile(cpp);
  report.compiler = run('native C++ version', 'c++', ['--version']).stdout;
  report.icuVersion = run('local ICU version', 'pkg-config', ['--modversion', 'icu-i18n']).stdout.trim();
  const major = report.icuVersion.split('.')[0]; assert.match(major, /^[0-9]+$/);
  const library = '/usr/lib/' + (process.arch === 'arm64' ? 'aarch64' : 'x86_64') + '-linux-gnu/libicui18n.so';
  report.library = library; report.librarySha256 = await hashFile(library);
  run('compile original ICU functions', 'c++', ['-std=c++20', '-O2', '-DNDEBUG', '-fPIC',
    '-I', join(lean.prefix, 'include'), '-I', join(source, 'src'), '-c', cpp, '-o', object]);
  const fixture = join(root, 'integration/fixtures/WindowsTimezoneIcu.lean'), main = join(output, 'Main.lean');
  report.fixtureSha256 = await hashFile(fixture); copyFileSync(fixture, main);
  run('generate native fixture', lean.lean, ['-j1', '-Dlinter.all=false', '-Dcompiler.postponeCompile=false', '-c', main + '.c', main]);
  const native = join(output, 'native-icu');
  run('link native fixture to original ICU functions', join(lean.prefix, 'bin/leanc'),
    ['-O2', '-DNDEBUG', '-o', native, main + '.c', object, ...names.map(name => '-Wl,--wrap=' + name),
      library, library.replace('libicui18n.so', 'libicuuc.so')]);
  report.nativeSha256 = await hashFile(native);
  const engines = [['node', process.execPath, []], ['deno', resolve(denoArg), ['run', '-A']], ['bun', resolve(bunArg), []]];
  report.engines = engines.map(([name, program]) => ({ name, program, version: run(name + ' version', program, ['--version']).stdout.trim() }));
  const hostFixture = join(root, 'integration/fixtures/windows-timezone-icu-host.mjs');
  const hostModule = join(root, 'src/native-windows-timezone.mjs');
  report.hostFixtureSha256 = await hashFile(hostFixture); report.hostModuleSha256 = await hashFile(hostModule);
  const selections = [];
  for (const name of ['UTC', 'America/New_York', 'Europe/Berlin', 'Australia/Lord_Howe', 'Lasm/No_such_zone', 'a'.repeat(300)]) {
    selections.push(['transition', name, '-2147483648', 'true']);
    for (const seconds of ['946684800', '962409600', '-2147483648']) selections.push(['transition', name, seconds, 'false']);
  }
  for (const seconds of ['0', '-2147483648', '946684800']) selections.push(['local', seconds]);
  for (const args of selections) {
    const row = { args, native: run('native ICU case', native, args), engines: [] }; report.cases.push(row); save();
    if (args[0] === 'transition' && args[1] === 'UTC' && args[3] === 'true')
      assert.match(row.native.stdout, /^value\|some\|0\|0\|false\|/, 'Linker must execute the ICU branch, not Linux rejection');
    for (const [name, program, prefix] of engines) {
      const actual = run(name + ' ICU case', program, [...prefix, hostFixture, library, '_' + major, ...args]);
      row.engines.push({ name, actual, equal: JSON.stringify(actual) === JSON.stringify(row.native) }); save();
      assert.deepEqual(actual, row.native, name + ': ' + args.join(' '));
    }
  }
  assert.equal(await hashFile(original), report.sourceSha256);
  assert.equal(await hashFile(fixture), report.fixtureSha256);
  assert.equal(await hashFile(hostModule), report.hostModuleSha256);
  assert.equal(await hashFile(hostFixture), report.hostFixtureSha256);
  report.sourcesUnchanged = true; report.passed = true;
} finally { report.finishedAt = new Date().toISOString(); save(); }
console.log(JSON.stringify({ passed: report.passed, casesPerEngine: report.cases.length, scope: report.scope }));
