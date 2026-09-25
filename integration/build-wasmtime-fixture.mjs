// Prepare a fresh ordinary Lean fixture through an immutable installed compiler.
// Execution and native differentials are separate phases with their own guards.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { hashWasmtimeFile as hashFile } from '../src/wasmtime-artifact.mjs';
import { fileInventory } from '../src/application-files.mjs';

await ensureResourceGuard();
const [sourceArg, compilerArg, outputArg, version, ...extra] = process.argv.slice(2);
assert.ok(sourceArg && compilerArg && outputArg && version && !extra.length,
  'Supply LEAN_SOURCE INSTALLED_COMPILER NEW_OUTPUT LEAN_VERSION');
assert.match(version, /^\d+\.\d+\.\d+$/);
const original = resolve(sourceArg), compiler = resolve(compilerArg), output = resolve(outputArg);
assert.ok(!existsSync(output), 'Keep previous fixture builds');
const sourceSha256 = await hashFile(original), inputs = await fileInventory(join(compiler, 'src'));
const packageSha256 = await hashFile(join(compiler, 'package.json'));
const cliSha256 = await hashFile(join(compiler, 'bin/lasm.mjs'));
const harnessSha256 = await hashFile(fileURLToPath(import.meta.url));
mkdirSync(output, { recursive: true });
const project = join(output, 'project'), dist = join(output, 'dist'); mkdirSync(project);
const source = join(project, 'Main.lean'); copyFileSync(original, source);
writeFileSync(join(project, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
const report = { scope: 'Fresh immutable installed-compiler build of an ordinary Lean fixture; no runtime execution pass',
  original, sourceSha256, compiler, packageSha256, cliSha256, inputs, harnessSha256,
  resourceReport: process.env.LASM_RESOURCE_REPORT, passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
save();
try {
  const command = [process.execPath, join(compiler, 'bin/lasm.mjs'), 'build', source,
    '--target', 'node', '--output', dist];
  const run = spawnSync(command[0], command.slice(1), { cwd: project, encoding: 'utf8',
    timeout: 1800_000, killSignal: 'SIGKILL', maxBuffer: 1024 * 1024,
    env: { ...process.env, EMCC_CORES: '1', BINARYEN_CORES: '1', RAYON_NUM_THREADS: '1' } });
  report.command = { arguments: command, code: run.status, signal: run.signal,
    error: run.error?.message, stdout: run.stdout, stderr: run.stderr }; save();
  assert.ifError(run.error); assert.equal(run.status, 0, run.stderr);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  assert.equal(report.build.lean, version); assert.equal(report.build.memoryMode, 1);
  assert.equal(report.build.modules.length, 1); assert.equal(report.build.modules[0].sourceSha256, sourceSha256);
  report.wasmSha256 = await hashFile(join(dist, 'program.wasm')); report.dist = dist;
  report.passed = true;
} finally {
  report.inputsUnchanged = await hashFile(original) === sourceSha256
    && await hashFile(join(compiler, 'package.json')) === packageSha256
    && await hashFile(join(compiler, 'bin/lasm.mjs')) === cliSha256
    && await hashFile(fileURLToPath(import.meta.url)) === harnessSha256;
  assert.deepEqual(await fileInventory(join(compiler, 'src')), inputs);
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
