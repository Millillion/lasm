// Supplementary SDK loader control; does not modify upstream Lean tests.
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';
import { patchSdk } from './patch-sdk.mjs';
import { root } from '../../src/toolchain.mjs';

await ensureResourceGuard();
if (process.platform !== 'linux') throw new Error('This native loader control currently requires Linux');
const [outputArg, sdkArg] = process.argv.slice(2);
if (!outputArg || !sdkArg) throw new Error('Supply NEW_OUTPUT and a writable development SDK');
const output = resolve(outputArg), sdk = resolve(sdkArg);
if (existsSync(output)) throw new Error('Use a fresh output');
mkdirSync(output, { recursive: true });
const source = join(root, 'scripts/full-lean/probes/symbol-lookup.c');
const bootstrap = join(root, 'scripts/full-lean/emscripten-pre.js');
const digest = path => createHash('sha256').update(readFileSync(path)).digest('hex');
const expected = 'symbol lookup and cross-thread function pointers passed\n';
const evidence = { source, sourceSha256: digest(source), bootstrap, bootstrapSha256: digest(bootstrap),
  sdk, sdkPatchSha256: patchSdk(sdk),
  resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], results: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(kind, engine, command, expected) {
  const started = performance.now();
  const result = spawnSync(command[0], command.slice(1), { encoding: 'utf8', timeout: 120_000,
    killSignal: 'SIGKILL', maxBuffer: 512 * 1024, env: { ...process.env, BINARYEN_CORES: '1' } });
  const record = { kind, engine, command, seconds: (performance.now() - started) / 1000,
    code: result.status, signal: result.signal, error: result.error?.message,
    stdout: result.stdout, stderr: result.stderr,
    passed: result.status === 0 && (expected === undefined || result.stdout === expected && result.stderr === '') };
  (kind === 'build' ? evidence.commands : evidence.results).push(record); save();
  console.log(`${kind} ${engine}: ${record.passed ? 'passed' : 'failed'} (${record.seconds.toFixed(2)} s)`);
  if (!record.passed) throw new Error(`${kind} ${engine}: ${result.error?.message ?? result.stdout + result.stderr}`);
}
try {
  const native = join(output, 'native');
  run('build', 'native', ['cc', '-pthread', '-Wl,--export-dynamic', source, '-ldl', '-o', native]);
  run('execute', 'native', [native], expected);
  for (const memory of [1, 2]) {
    const executable = join(output, `memory${memory}.cjs`);
    run('build', `memory${memory}`, [join(sdk, 'upstream/emscripten/emcc'), source, '-O1', '-pthread',
      `-sMEMORY64=${memory}`, '-sMAIN_MODULE=2', '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=3',
      '-sEXIT_RUNTIME=1', '-sALLOW_MEMORY_GROWTH=1', '-sMAXIMUM_MEMORY=1073741824',
      '-sEXPORTED_FUNCTIONS=["_main","_exported_value","_exported_add","_exported_subtract"]',
      '--pre-js', bootstrap, '-o', executable]);
    const glue = readFileSync(executable, 'utf8');
    if (!glue.includes('Object.prototype.propertyIsEnumerable.call(lib.exports, symbol)'))
      throw new Error('The compiled SDK did not retain the symbol lookup repair');
    for (const [engine, path, flags] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ...(memory === 2 ? [['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []]] : []),
    ]) run('execute', `${engine}/memory${memory}`, [path, ...flags, executable], expected);
  }
} finally {
  evidence.sourceUnchanged = digest(source) === evidence.sourceSha256;
  evidence.finishedAt = new Date().toISOString(); save();
}
if (!evidence.sourceUnchanged) throw new Error('Probe source changed during execution');
