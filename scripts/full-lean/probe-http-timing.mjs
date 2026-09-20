// Repeated original HTTP checks plus a uniformly scaled parallel derivative.
// Never rewrite an upstream test or count the derivative as an original pass.
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';

await ensureResourceGuard();
const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const toolchain = resolve(option('--toolchain', '.work/full-toolchains/deno-v33'));
const output = resolve(option('--output', '.work/full-engine-probe/http-timing-comparison'));
const scale = Number(option('--scale', '10'));
const repetitions = Number(option('--repetitions', '3'));
if (!Number.isInteger(scale) || scale < 2 || scale > 100 || !Number.isInteger(repetitions) || repetitions < 1 || repetitions > 10)
  throw new Error('Use scale 2..100 and repetitions 1..10');
if (existsSync(output)) throw new Error('Use a fresh output directory');
mkdirSync(output, { recursive: true });
const original = join(root, '.cache/lean4-4.32.0/tests/elab/async_http_hang_regressions.lean');
const hash = path => createHash('sha256').update(readFileSync(path)).digest('hex');
const before = hash(original);
const derivative = join(output, 'scaled');
const prepared = spawnSync(process.execPath, [join(root, 'scripts/full-lean/prepare-http-timing-probe.mjs'), derivative, String(scale)], { encoding: 'utf8' });
if (prepared.status !== 0) throw new Error(prepared.stderr);
const config = JSON.parse(readFileSync(join(toolchain, 'toolchain.json')));
const evidence = { leanCommit, resourceReport: process.env.LASM_RESOURCE_REPORT,
  scope: 'Native controls and repeated original-source executions, followed by the documented parallel timing derivative. This is not a full-suite run.',
  toolchain, config, original, sourceSha256: before,
  derivation: JSON.parse(readFileSync(join(derivative, 'derivation.json'))), results: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
save();
function run(kind, engine, executable, file, repetition = 1) {
  const flags = ['-j4', '-s65536', '-DprintMessageEndPos=true', '-Dlinter.all=false', '-DElab.inServer=true', '-Dcompiler.postponeCompile=false', file];
  const startedAt = new Date().toISOString(), started = performance.now();
  const result = spawnSync(executable, flags, { encoding: 'utf8', timeout: 600_000, maxBuffer: 1024 * 1024 });
  const record = { kind, engine, repetition, command: [executable, ...flags], startedAt,
    seconds: (performance.now() - started) / 1000, code: result.status, signal: result.signal,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr,
    passed: result.status === 0 && result.stdout === '' && result.stderr === '' };
  evidence.results.push(record); save();
  console.log(`${kind} ${engine} ${repetition}: ${record.passed ? 'passed' : 'failed'} (${record.seconds.toFixed(2)} s)`);
}
const native = join(resolveLean(root).prefix, 'bin/lean');
const engine = join(toolchain, 'bin/lean');
run('original', 'native', native, original);
for (let i = 1; i <= repetitions; i++) run('original', config.engine, engine, original, i);
const scaled = join(derivative, 'HttpTiming.lean');
run('scaled', 'native', native, scaled);
run('scaled', config.engine, engine, scaled);
evidence.sourceUnchanged = hash(original) === before;
evidence.finishedAt = new Date().toISOString();
save();
if (!evidence.sourceUnchanged) throw new Error('Original test source changed');
process.exitCode = evidence.results.every(result => result.passed) ? 0 : 1;
