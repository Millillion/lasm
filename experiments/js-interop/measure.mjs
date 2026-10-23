// Phase 4 step 1: call-cost and compatibility measurements of the prototype.
//   node measure.mjs NEW_OUTPUT.json DIST [MICRO_DIR]
// DIST holds configuration A (program.cjs, from build-a.sh) and configuration B
// (program-jspi.cjs, from jspi/relink.mjs). MICRO_DIR holds micro/build.sh output.
// Every program runs as a child process with a timeout; a hang is recorded.
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, writeFileSync } from 'node:fs';
import { cpus, loadavg } from 'node:os';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const [outputArg, distArg, microArg] = process.argv.slice(2);
assert.ok(outputArg && distArg, 'Supply NEW_OUTPUT.json DIST [MICRO_DIR]');
assert.ok(!existsSync(outputArg), 'Use a new output file');
const dist = resolve(distArg), here = fileURLToPath(new URL('.', import.meta.url));
const work = join(dist, '..', 'measure-runs'); mkdirSync(work, { recursive: true });
const runs = Number(process.env.RUNS ?? 3), calls = process.env.CALLS ?? '20000';
const stackFlags = '--stack-size=65000 --wasm-stack-switching-stack-size=65536';
const configs = {
  A: { env: {}, description: 'PROXY_TO_PTHREAD (as Lasm links today): Lean main on a pthread, every JS call crosses to the main thread over the shared-memory slot RPC' },
  'B-main': { env: { JSPROTO_PROGRAM: 'program-jspi.cjs', LEAN_MAIN_USE_THREAD: '0', JSPROTO_V8_FLAGS: stackFlags },
    description: '-sJSPI relink, no PROXY_TO_PTHREAD, LEAN_MAIN_USE_THREAD=0: Lean main on the Node main thread; JS calls are direct imports that suspend on promises; main-thread futex waits suspend on Atomics.waitAsync; 64 MiB JSPI stack via v8.setFlagsFromString' },
  'B-main-default-stack': { env: { JSPROTO_PROGRAM: 'program-jspi.cjs', LEAN_MAIN_USE_THREAD: '0' },
    description: 'B-main without the V8 stack flags (default ~1 MiB JSPI stack)' },
  'B-pthread': { env: { JSPROTO_PROGRAM: 'program-jspi.cjs' },
    description: 'The JSPI relink with Lean 4.35 default lean_run_main (Lean main on its own pthread): calls take the slot RPC as in A' },
};
function run(config, args, timeoutMs = 180_000) {
  const started = Date.now();
  const child = spawnSync(process.execPath, [join(here, 'run.mjs'), dist, ...args], { cwd: work, encoding: 'utf8',
    env: { ...process.env, ...configs[config].env }, timeout: timeoutMs, maxBuffer: 64 * 1024 * 1024 });
  const lines = child.stdout.split('\n').filter(line => line.startsWith('{')).map(line => JSON.parse(line));
  return { config, args, status: child.status, signal: child.signal, timedOut: child.error?.code === 'ETIMEDOUT',
    seconds: (Date.now() - started) / 1000, lines, stderr: child.stderr.slice(-1500) };
}
const result = { scope: 'Phase 4 step 1 threading prototype: Lean -> JS call costs, synchronous callbacks and compatibility (experiments/js-interop)',
  recordedAt: new Date().toISOString(), engine: process.version, platform: `${process.platform}-${process.arch}`,
  cpus: cpus().length, cpuModel: cpus()[0]?.model, loadAverageAtStart: loadavg(), configs, runs: [] };
const save = () => writeFileSync(outputArg, JSON.stringify(result, null, 1) + '\n');
const record = entry => { result.runs.push(entry); console.log(JSON.stringify({ config: entry.config, args: entry.args, status: entry.status, timedOut: entry.timedOut, lines: entry.lines.length })); save(); };

if (microArg) for (const name of ['proxy', 'jspi']) {
  const child = spawnSync(process.execPath, [join(resolve(microArg), `${name}.cjs`)], { encoding: 'utf8', timeout: 120_000 });
  record({ config: `micro-${name}`, args: [], status: child.status, lines: child.stdout.split('\n').filter(l => l.startsWith('{')).map(l => JSON.parse(l)) });
}
for (let i = 0; i < runs; i++) {
  record(run('A', ['bench', calls, 'sort_comparator_thread']));
  record(run('B-main', ['bench', calls, 'sort_comparator_direct']));
}
record(run('B-pthread', ['bench', calls, 'sort_comparator_thread']));
record(run('A', ['compat']));
record(run('B-main', ['compat']));
record(run('B-pthread', ['compat']));
record(run('B-main-default-stack', ['compat', 'deep_recursion_100k']));
// A synchronous JS operation that waits for a Lean thread while Lean runs on
// the same (main) thread cannot finish: expected to time out.
record(run('B-main', ['bench', '200', 'sort_comparator_thread'], 20_000));
result.loadAverageAtEnd = loadavg();
save();
