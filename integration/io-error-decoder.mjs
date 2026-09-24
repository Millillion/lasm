// Independent oracle: execute the unmodified native Lean library's C error
// decoders, then compare the private host envelope in each stock engine.
import assert from 'node:assert/strict';
import { mkdirSync, existsSync, copyFileSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { createRequire } from 'node:module';
import { pathToFileURL } from 'node:url';
import { getSystemErrorMap } from 'node:util';
import { execFileSync } from 'node:child_process';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { nativeFiles } from '../src/native-files.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
const [outputArg, nodeArg, denoArg, bunArg, hostArg] = process.argv.slice(2);
const engineArgs = denoArg || bunArg ? [nodeArg, denoArg, bunArg] : [nodeArg ?? process.execPath];
assert.ok(outputArg && engineArgs.every(Boolean), 'Supply NEW_OUTPUT [NODE [DENO BUN [HOST_MODULE]]]');
const hostModule = resolve(hostArg ?? 'src/node-host.mjs');
const output = resolve(outputArg);
assert.ok(!existsSync(output), 'Preserve previous decoder evidence');
mkdirSync(output, { recursive: true });
const sourceHashes = {};
for (const name of ['Main.lean', 'probe.c', 'lean-toolchain']) {
  const source = resolve('integration/fixtures/io-error-decoder', name);
  sourceHashes[name] = await hashFile(source);
  copyFileSync(source, join(output, name));
}
const lean = await provisionLean(output), env = nativeLeanEnvironment(lean);
const ffi = createRequire(import.meta.url)('koffi');
const input = [];
for (const [name, errno] of Object.entries(ffi.os.errno))
  input.push({ origin: 'crt', name, errno, path: ['ENOENT', 'EINTR'].includes(name) ? 'probe' : '' });
for (const [errno, [name]] of getSystemErrorMap())
  input.push({ origin: 'uv', name, errno, path: ['ENOENT', 'EINTR'].includes(name) ? 'probe' : '' });
input.push({ origin: 'crt', name: 'UNKNOWN', errno: 12345, path: '' });
input.push({ origin: 'uv', name: 'UNKNOWN', errno: -12345, path: '' });
for (const [index, row] of input.entries()) row.key = row.origin + '_' + row.name + '_' + index;
const nativeErrors = nativeFiles({ synchronous: true });
for (const row of input) row.inputMessage = row.origin === 'crt'
  ? nativeErrors.error(row.errno).message : 'System operation failed';
const c = join(output, 'Main.c'), native = join(output, process.platform === 'win32' ? 'oracle.exe' : 'oracle');
execFileSync(lean.lean, ['-j1', '-Dcompiler.postponeCompile=false', '-c', c, join(output, 'Main.lean')],
  { env, stdio: 'inherit', timeout: 90_000 });
execFileSync(join(lean.prefix, 'bin', process.platform === 'win32' ? 'leanc.exe' : 'leanc'),
  ['-O3', '-DNDEBUG', '-o', native, c, join(output, 'probe.c')], { env, stdio: 'inherit', timeout: 90_000 });
const stdout = execFileSync(native, input.map(row =>
  `${row.key}:${row.errno >>> 0}:${row.origin}:${row.path}`), { env, encoding: 'utf8', timeout: 60_000 });
writeFileSync(join(output, 'native.txt'), stdout);
const lines = stdout.trimEnd().split('\n');
const uvVersion = Number(lines.shift().split('\t')[1]);
assert.equal(lines.length, input.length);
const rows = lines.map((line, index) => {
  const [key, repr] = line.split('\t'); assert.equal(key, input[index].key);
  const match = /^IO\.Error\.(\w+) (.*)$/.exec(repr); assert.ok(match, repr);
  const fields = /(?:^| )(\d+) ("(?:[^"\\]|\\.)*")$/.exec(match[2]); assert.ok(fields, repr);
  return { ...input[index], native: { constructor: match[1], code: Number(fields[1]),
    message: JSON.parse(fields[2]), repr } };
});
const oracle = { scope: 'Unmodified native Lean library error decoders; private test-only C helper',
  platform: process.platform + '-' + process.arch, lean: lean.version, nativeLeanIdentity: lean.identity,
  uvVersion, sourceHashes, hostModule, hostModuleSha256: await hashFile(hostModule), rows };
writeFileSync(join(output, 'oracle.json'), JSON.stringify(oracle, null, 2) + '\n');
const harness = join(output, 'compare.mjs');
writeFileSync(harness, `import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { encodeError } from ${JSON.stringify(pathToFileURL(hostModule).href)};
const oracle = JSON.parse(readFileSync(new URL('./oracle.json', import.meta.url)));
const kinds = ['otherError', 'noFileOrDirectory', 'permissionDenied', 'alreadyExists', 'invalidArgument',
  'inappropriateType', 'resourceBusy', 'timeExpired', 'unsupportedOperation', 'resourceVanished',
  'otherError', 'resourceExhausted', 'noSuchThing', 'hardwareFault', 'unsatisfiedConstraints',
  'illegalOperation', 'protocolError', 'interrupted', 'userError'];
const failures = [];
for (const row of oracle.rows) {
  const error = { code: row.name, errno: row.errno, errorOrigin: row.origin,
    nativeMessage: row.origin === 'crt', message: row.inputMessage };
  let actual;
  try {
    const result = encodeError(error, oracle.lean);
    actual = { constructor: kinds[Number(result.bytes.readBigUInt64LE())],
      code: Number(BigInt.asUintN(32, result.bytes.readBigUInt64LE(8))), message: result.bytes.subarray(16).toString() };
  } catch (error) { actual = { threw: String(error) }; }
  const { repr, ...expected } = row.native;
  try { assert.deepEqual(actual, expected); }
  catch { failures.push({ key: row.key, expected, actual }); }
}
console.log(JSON.stringify({ engine: process.versions.deno ? 'deno' : process.versions.bun ? 'bun' : 'node',
  checked: oracle.rows.length, failures }));
`);
const comparisons = [];
for (const [index, engineArg] of engineArgs.entries()) {
  const engine = resolve(engineArg);
  const args = [...(index === 1 ? ['run', '-A'] : []), harness];
  comparisons.push(JSON.parse(execFileSync(engine, args, { env, encoding: 'utf8', timeout: 30_000 })));
}
const result = { ...oracle, comparisons, recordedAt: new Date().toISOString(), resourceReport: process.env.LASM_RESOURCE_REPORT };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify({ uvVersion, cases: rows.length, comparisons: comparisons.map(row =>
  ({ engine: row.engine, checked: row.checked, failures: row.failures.length })) }));
assert.ok(comparisons.every(row => row.failures.length === 0), 'Host errors differ from native Lean; see result.json');
