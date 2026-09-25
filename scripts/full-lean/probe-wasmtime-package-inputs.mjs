// Reject stale compilation inputs before creating a deployment or invoking C tools.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';
import { hashWasmtimeFile as hashFile } from '../../src/wasmtime-artifact.mjs';

await ensureResourceGuard();
const [compilationArg, outputArg, ...extra] = process.argv.slice(2);
assert.ok(compilationArg && outputArg && !extra.length, 'Supply COMPLETED_COMPILATION NEW_OUTPUT');
const root = fileURLToPath(new URL('../..', import.meta.url));
const compilationFile = resolve(compilationArg), output = resolve(outputArg);
assert.ok(!existsSync(output));
const original = JSON.parse(readFileSync(compilationFile));
assert.ok(original.passed && original.inputUnchanged && original.harnessUnchanged);
const cases = [
  ['engineConfigurationSha256', 'wasmtime-engine-config.h', 'same engine configuration'],
  ['canonicalImportsSha256', 'wasmtime-canonical-imports.h', 'same canonical import transform'],
];
const inputs = [compilationFile, fileURLToPath(import.meta.url),
  join(root, 'scripts/full-lean/package-wasmtime-application.mjs'),
  ...cases.map(([, file]) => join(root, 'scripts/full-lean/probes', file))];
const hashes = Object.fromEntries(await Promise.all(inputs.map(async path => [path, await hashFile(path)])));
for (const [field, file] of cases)
  assert.equal(original[field], hashes[join(root, 'scripts/full-lean/probes', file)]);
mkdirSync(output, { recursive: true });
const report = { scope: 'Valid compilation configuration identities and four stale/missing input rejection controls; no new application execution',
  inputs: hashes, resourceReport: process.env.LASM_RESOURCE_REPORT, controls: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
save();
try {
  for (const [field, , message] of cases) for (const value of [undefined, '0'.repeat(64)]) {
    const name = field + (value === undefined ? '-missing' : '-changed');
    const compilation = { ...original, [field]: value };
    const input = join(output, name + '.json'), destination = join(output, name);
    writeFileSync(input, JSON.stringify(compilation, null, 2) + '\n');
    const args = ['--max-old-space-size=128', join(root, 'scripts/full-lean/package-wasmtime-application.mjs'), input, destination];
    const result = spawnSync(process.execPath, args, { cwd: root, encoding: 'utf8',
      timeout: 30_000, killSignal: 'SIGKILL', maxBuffer: 64 * 1024 });
    report.controls.push({ name, command: [process.execPath, ...args], code: result.status,
      signal: result.signal, error: result.error?.message, stdout: result.stdout, stderr: result.stderr,
      deploymentCreated: existsSync(destination) }); save();
    assert.ifError(result.error); assert.equal(result.status, 1); assert.equal(result.signal, null);
    assert.ok(result.stderr.includes(message)); assert.ok(!existsSync(destination));
  }
  report.passed = true;
} finally {
  report.inputsUnchanged = true;
  for (const [path, sha256] of Object.entries(hashes))
    if (await hashFile(path) !== sha256) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
