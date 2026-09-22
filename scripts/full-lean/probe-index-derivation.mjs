// Verify derivation against a preexisting source index, the symlink hazard that
// prompted this check. This is a synthetic artifact test, not a Lean suite test.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync, lstatSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const output = process.argv[2] && resolve(process.argv[2]);
if (!output || existsSync(output)) throw new Error('Supply a fresh output directory');
const source = join(output, 'source'), derived = join(output, 'derived');
mkdirSync(join(source, 'bin'), { recursive: true });
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
const name = value => [value.length, ...Buffer.from(value)];
const section = (kind, bytes) => [kind, bytes.length, ...bytes];
const wasm = Buffer.from([0, 97, 115, 109, 1, 0, 0, 0,
  ...section(1, [1, 0x60, 0, 1, 0x7f]), ...section(3, [1, 0]),
  ...section(4, [1, 0x70, 0, 2]),
  ...section(7, [2, ...name('answer'), 0, 0, ...name('__indirect_function_table'), 1, 0]),
  ...section(9, [1, 0, 0x41, 1, 0x0b, 1, 0]),
  ...section(10, [1, 4, 0, 0x41, 42, 0x0b]),
]);
assert.equal(new WebAssembly.Instance(new WebAssembly.Module(wasm)).exports.answer(), 42);
const glue = `var wasmExports, functionsInTableMap;
var getFunctionAddress = func => {
  if (!functionsInTableMap) {
    functionsInTableMap = new WeakMap();
    updateTableMap(0, Number(wasmTable.length));
  }
  return functionsInTableMap.get(func) || 0;
};
function receiveInstance(instance) {
    wasmExports = instance.exports;
}
`;
const inputs = {
  'bin/lean.wasm': wasm, 'bin/lean.js': glue, 'bin/lean.cjs': glue,
  'function-table-index.json': JSON.stringify({ version: 1, note: 'Original index must remain byte-for-byte intact.' }) + '\n',
  'build-provenance.json': JSON.stringify({ scope: 'Synthetic artifact isolation control' }) + '\n',
};
const files = {};
for (const [path, bytes] of Object.entries(inputs)) {
  writeFileSync(join(source, path), bytes); files[path] = hash(bytes);
}
writeFileSync(join(source, 'snapshot.json'), JSON.stringify({ files }) + '\n');
const beforeSnapshot = readFileSync(join(source, 'snapshot.json'));
const command = [fileURLToPath(new URL('./derive-function-table.mjs', import.meta.url)), source, derived];
const execution = spawnSync(process.execPath, command, { encoding: 'utf8', timeout: 30_000, maxBuffer: 1024 * 1024 });
writeFileSync(join(output, 'stdout.log'), execution.stdout ?? '');
writeFileSync(join(output, 'stderr.log'), execution.stderr ?? '');
assert.equal(execution.status, 0, execution.stderr || execution.error?.message);
for (const [path, expected] of Object.entries(files)) assert.equal(hash(readFileSync(join(source, path))), expected, path);
assert.deepEqual(readFileSync(join(source, 'snapshot.json')), beforeSnapshot);
assert.equal(lstatSync(join(derived, 'function-table-index.json')).isSymbolicLink(), false);
const index = JSON.parse(readFileSync(join(derived, 'function-table-index.json')));
assert.equal(index.version, 2);
assert.deepEqual(index.exportSeeds, [['answer', 1, 0]]);
const snapshot = JSON.parse(readFileSync(join(derived, 'snapshot.json')));
for (const [path, expected] of Object.entries(snapshot.files)) assert.equal(hash(readFileSync(join(derived, path))), expected, path);
assert.equal(snapshot.files['bin/lean.wasm'], files['bin/lean.wasm']);
const report = { scope: 'Synthetic frozen-artifact derivation with an existing source index', passed: true,
  source, derived, sourceFilesVerified: Object.keys(files).length, sourceSnapshotUnchanged: true,
  outputIndexIsRegularFile: true, wasmUnchanged: true, resourceReport: process.env.LASM_RESOURCE_REPORT,
  implementationSha256: hash(readFileSync(command[0])), finishedAt: new Date().toISOString() };
writeFileSync(join(output, 'comparison.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report));
