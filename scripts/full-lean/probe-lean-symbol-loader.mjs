// Small real dynamic modules supplement, but never replace, upstream tests.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';
import { connectLeanSymbolLoader } from './lean-symbol-loader.mjs';
import { root } from '../../src/toolchain.mjs';

await ensureResourceGuard();
const [outputArg, sdkArg] = process.argv.slice(2);
if (!outputArg || !sdkArg) throw new Error('Supply NEW_OUTPUT and FROZEN_SDK');
const output = resolve(outputArg), sdk = resolve(sdkArg);
if (existsSync(output)) throw new Error('Use a new output directory');
mkdirSync(output, { recursive: true });
const source = join(root, 'scripts/full-lean/probes/lean-symbol-main.c');
const plugin = join(root, 'scripts/full-lean/probes/lean-symbol-plugin.c');
const bootstrap = join(root, 'scripts/full-lean/emscripten-pre.js');
const hash = path => createHash('sha256').update(readFileSync(path)).digest('hex');
const inputs = Object.fromEntries([source, plugin, bootstrap,
  new URL('./lean-symbol-loader.mjs', import.meta.url)].map(path => [String(path), hash(path)]));
const evidence = { inputs, resourceReport: process.env.LASM_RESOURCE_REPORT, results: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
const expected = 'Lean registry plugin calls, pointers, data and worker loading passed\n';
function run(kind, engine, command, environment = {}) {
  const started = performance.now();
  const result = spawnSync(command[0], command.slice(1), { encoding: 'utf8', timeout: 120_000,
    killSignal: 'SIGKILL', maxBuffer: 512 * 1024, env: { ...process.env, ...environment } });
  const row = { kind, engine, command, environment, seconds: (performance.now() - started) / 1000,
    code: result.status, signal: result.signal, error: result.error?.message,
    stdout: result.stdout, stderr: result.stderr,
    passed: result.status === 0 && (kind === 'build' || result.stdout === expected && result.stderr === '') };
  evidence.results.push(row); save();
  console.log(`${kind} ${engine}: ${row.passed ? 'passed' : 'failed'}`);
  assert.ok(row.passed, result.error?.message ?? result.stdout + result.stderr);
}
run('build', 'native-plugin', ['cc', '-shared', '-fPIC', plugin, '-o', join(output, 'native-plugin.so')]);
run('build', 'native', ['cc', '-pthread', '-rdynamic', source, '-ldl', '-o', join(output, 'native')]);
run('execute', 'native', [join(output, 'native'), join(output, 'native-plugin.so')]);
for (const memory of [1, 2]) {
  const library = join(output, `memory${memory}.so`), executable = join(output, `memory${memory}.cjs`);
  const cc = join(sdk, 'upstream/emscripten/emcc');
  run('build', `plugin/memory${memory}`, [cc, plugin, '-O1', '-pthread', '-fwasm-exceptions', `-sMEMORY64=${memory}`,
    '-sSIDE_MODULE=1', '-o', library]);
  run('build', `main/memory${memory}`, [cc, source, '-O1', '-pthread', '-fwasm-exceptions', `-sMEMORY64=${memory}`,
    '-sMAIN_MODULE=2', '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=3', '-sEXIT_RUNTIME=1',
    '-sALLOW_MEMORY_GROWTH=1', '-sMAXIMUM_MEMORY=1073741824', '-sNODERAWFS=1',
    '-sEXPORTED_FUNCTIONS=["_main","_malloc","_free","_lasm_lookup_lean_symbol","_l_shared_data"]',
    '-sEXPORTED_RUNTIME_METHODS=stringToNewUTF8',
    '--pre-js', bootstrap, '-o', executable]);
  const original = readFileSync(executable, 'utf8');
  writeFileSync(executable + '.before.txt', original);
  writeFileSync(executable, connectLeanSymbolLoader(original, true));
  for (const [engine, path, flags] of [
    ['node', process.execPath, []],
    ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
    ['bun', join(root, '.cache/js-runtimes/bun-1.4.2-memory64-capacity8g-release-2026-09-21/bun'), []],
  ]) run('execute', `${engine}/memory${memory}`, [path, ...flags, executable, library],
    engine === 'bun' && memory === 1 ? { BUN_JSC_useWasmMemory64: 'true' } : {});
}
for (const [path, digest] of Object.entries(inputs))
  assert.equal(hash(path.startsWith('file:') ? new URL(path) : path), digest);
evidence.inputsUnchanged = true; evidence.finishedAt = new Date().toISOString(); save();
