// Recursion depth on each target (issue #66; FUNDAMENTAL_LIMITATIONS.md#recursion-depth).
// Builds one program with an installed Lasm CLI for each target, then checks:
//   node       the default stack reaches native Lean's depth class (millions of
//              frames), a runaway recursion ends with native Lean's diagnostic and
//              status plus Lasm's advice, LASM_VM_STACK_MB still overrides the
//              default, and (Linux) a shallow run's peak memory does not grow
//              with the larger default;
//   wasi       wasmtime's default stack, and the documented -W max-wasm-stack
//              remedy; node:wasi's default;
//   edge       the edge output (--target deno) on Deno, Node, Bun and SpiderMonkey
//              (the engines of Workers, Deno Deploy, Bun and the browsers): a
//              shallow run passes, an overflow fails without hanging;
//   every      an Async loop of 100,000 steps that each await a host call, and
//              List.mapM in Async over 100,000 host calls (issue #90), complete.
// Every target's limit is measured by bisection and written to OUT (JSON).
//   node scripts/ci/stack-depth.mjs --lasm PATH/bin/lasm.mjs --work DIR [--out FILE.json]
//     [--targets node,wasi,wasi-node,deno,edge-node,edge-bun,edge-sm]
//     [--wasmtime PATH] [--deno PATH] [--bun PATH] [--sm PATH]
import { spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, readFileSync, readdirSync, rmSync, statSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import os from 'node:os';

const argv = process.argv.slice(2);
const opt = (name, fallback) => { const i = argv.indexOf(name); return i < 0 ? fallback : argv[i + 1]; };
const lasm = opt('--lasm') && resolve(opt('--lasm'));
if (!lasm) { console.error('--lasm PATH/bin/lasm.mjs is required'); process.exit(2); }
const work = resolve(opt('--work', '.work/stack-depth'));
const out = resolve(opt('--out', join(work, 'stack-depth.json')));
const targets = opt('--targets', 'node').split(',').filter(Boolean);
const tools = { wasmtime: opt('--wasmtime', 'wasmtime'), deno: opt('--deno', 'deno'), bun: opt('--bun', 'bun'), sm: opt('--sm', 'js') };
const here = dirname(fileURLToPath(import.meta.url));
const env = { ...process.env, CI: '1', BROWSER: 'none', LASM_EDITOR: '0', LEAN_BACKTRACE: '0', NO_COLOR: '1' };
delete env.LASM_VM_STACK_MB;

rmSync(work, { recursive: true, force: true });
mkdirSync(work, { recursive: true });
// The issue's program, and a smaller frame for a runaway recursion.
writeFileSync(join(work, 'Main.lean'), `import Std.Async.Basic
open Std.Async

def sumTo : List Nat → Nat
  | [] => 0
  | x :: xs => x + sumTo xs

def depth : Nat → Nat
  | 0 => 0
  | n + 1 => depth n + 1

/-- Issue #90: n steps in Async, each awaiting a task that makes a host call
(the clock) and making one more host call directly. -/
def awaitLoop : Nat → Nat → Async Nat
  | 0, acc => pure acc
  | n + 1, acc => do
    let t ← (IO.monoNanosNow : IO Nat)
    let u ← await (← (IO.asTask (IO.monoNanosNow) : IO _))
    let u ← IO.ofExcept u
    awaitLoop n (acc + 1 + (u - u) + (t - t))

/-- Issue #90: List.mapM in Async over n host calls that complete at once. -/
def mapMLoop (n : Nat) : Async Nat := do
  let xs ← (List.range n).mapM fun _ => (IO.monoNanosNow : IO Nat)
  return xs.length

/-- A compute benchmark (code size and speed with and without tail calls): List
and Array operations with closures, a for loop, Nat arithmetic. -/
def benchWork (n : Nat) : Nat := Id.run do
  let xs := (List.range n).map (· * 7919 % 100003)
  let arr := xs.toArray.qsort (· < ·)
  let mut s := 0
  for x in arr do s := (s + x * x) % 1000000007
  return s + (xs.filter (· % 3 == 0)).length

def main (args : List String) : IO Unit := do
  let n := (args.getD 1 "1000").toNat!
  match args.headD "sum" with
  | "sum" => IO.println (sumTo (List.range n))
  | "await" => IO.println (← (awaitLoop n 0).block)
  | "mapM" => IO.println (← (mapMLoop n).block)
  | "bench" => IO.println (benchWork n)
  | _ => IO.println (depth n)
`);
writeFileSync(join(work, 'node-wasi-run.mjs'), `const { WASI } = await import('node:wasi');
const { readFileSync } = await import('node:fs');
const [file, ...args] = process.argv.slice(2);
const wasi = new WASI({ version: 'preview1', args: [file, ...args], env: {}, preopens: {}, returnOnExit: true });
const instance = await WebAssembly.instantiate(await WebAssembly.compile(readFileSync(file)), wasi.getImportObject());
process.exitCode = wasi.start(instance);
`);
const nodeJspi = spawnSync(process.execPath, ['-e', 'process.exit(typeof WebAssembly.Suspending === "function" ? 0 : 1)']).status === 0 ? [] : ['--experimental-wasm-jspi'];
const smRun = (args, extra) => [tools.sm, ['-m', join(here, '../differential/sm-runner.mjs')],
  { LASM_SM_RUN: JSON.stringify({ program: join(work, 'deno/lasm'), env: { LEAN_BACKTRACE: '0' }, args, jspi: true, exitFile: join(work, 'sm-exit') }), ...extra }];
const TARGETS = {
  node: { build: [], run: (args, extra) => [process.execPath, [join(work, 'dist/main.mjs'), ...args], extra] },
  wasi: { build: ['--target', 'wasi'], tool: 'wasmtime', run: (args, extra, flags = []) => [tools.wasmtime, ['run', ...flags, join(work, 'wasi/main.wasm'), ...args], extra] },
  'wasi-node': { build: ['--target', 'wasi'], run: (args, extra) => [process.execPath, ['--no-warnings', join(work, 'node-wasi-run.mjs'), join(work, 'wasi/main.wasm'), ...args], extra] },
  deno: { build: ['--target', 'deno'], tool: 'deno', run: (args, extra) => [tools.deno, ['run', '-A', '--no-lock', join(work, 'deno/main.mjs'), ...args], extra] },
  'edge-node': { build: ['--target', 'deno'], run: (args, extra) => [process.execPath, [...nodeJspi, '--no-warnings', join(work, 'deno/main.mjs'), ...args], extra] },
  'edge-bun': { build: ['--target', 'deno'], tool: 'bun', run: (args, extra) => [tools.bun, [join(work, 'deno/main.mjs'), ...args], extra] },
  'edge-sm': { build: ['--target', 'deno'], tool: 'sm', run: smRun },
};
for (const t of targets) if (!TARGETS[t]) { console.error(`unknown target ${t}`); process.exit(2); }

const failures = [];
const report = { host: `${process.platform}-${process.arch}`, node: process.version, memoryMiB: Math.round(os.totalmem() / 1048576), targets: {} };
const expect = (target, name, ok, detail) => {
  (report.targets[target].checks ??= []).push({ name, ok: !!ok, detail });
  console.log(`${ok ? 'ok  ' : 'FAIL'} ${target}: ${name}${detail ? ` (${detail})` : ''}`);
  if (!ok) failures.push(`${target}: ${name}: ${detail}`);
};
// /usr/bin/time reports the peak resident memory of a run on Linux.
const timeTool = process.platform === 'linux' && existsSync('/usr/bin/time') ? '/usr/bin/time' : undefined;
function run(target, args, { extra = {}, flags, timeout = 180_000, measure = false } = {}) {
  let [command, commandArgs, more] = TARGETS[target].run(args, extra, flags);
  rmSync(join(work, 'sm-exit'), { force: true });
  if (measure && timeTool) { commandArgs = ['-f', 'lasm-peak-kib=%M', command, ...commandArgs]; command = timeTool; }
  const started = performance.now();
  const r = spawnSync(command, commandArgs, { cwd: work, env: { ...env, ...more }, encoding: 'utf8', timeout, maxBuffer: 64 << 20 });
  let stderr = r.stderr ?? '', peakKiB;
  stderr = stderr.replace(/(?:Command exited with non-zero status \d+\n)?lasm-peak-kib=(\d+)\n?$/, (_, kib) => { peakKiB = Number(kib); return ''; });
  let code = r.status;
  if (target === 'edge-sm' && existsSync(join(work, 'sm-exit'))) code = Number(readFileSync(join(work, 'sm-exit'), 'utf8'));
  return { code, signal: r.signal, timedOut: r.error?.code === 'ETIMEDOUT', stdout: r.stdout ?? '', stderr, peakKiB, ms: Math.round(performance.now() - started) };
}
const sumOf = n => String(BigInt(n) * BigInt(n - 1) / 2n) + '\n';
const passes = (target, n, options) => { const r = run(target, ['sum', String(n)], options); return r.code === 0 && r.stdout === sumOf(n); };
// The deepest passing n (to within 2 %), between lo (passing) and hi (failing).
function limit(target, lo, hi, options) {
  if (!passes(target, lo, options)) return 0;
  while (hi - lo > lo / 50 + 1) { const mid = Math.floor((lo + hi) / 2); if (passes(target, mid, options)) lo = mid; else hi = mid; }
  return lo;
}

// The default engine stack of a Lean thread under Node (scripts/full-lean/emscripten-pre.js).
function nodeDefaultStackMiB() {
  let memoryMiB = os.totalmem() / 1048576;
  const constrained = typeof process.constrainedMemory === 'function' ? process.constrainedMemory() / 1048576 : 0;
  if (constrained > 0 && constrained < memoryMiB) memoryMiB = constrained;
  const budget = process.platform === 'win32' ? Math.min(256, memoryMiB / (2 * (os.availableParallelism() + 5))) : Math.min(1024, memoryMiB / 4);
  return Math.max(64, Math.floor(budget));
}
const overflowHead = '\nStack overflow detected. Aborting.\n';
const advice = mib => new RegExp(`^Lasm: a Lean thread exhausted its ${mib} MiB WebAssembly stack \\(LASM_VM_STACK_MB(, default)?\\)\\.\\n`
  + 'Set LASM_VM_STACK_MB to a larger size in MiB, or make the recursion tail recursive \\(an accumulator\\)\\.\\n'
  + 'See https://github\\.com/Millillion/lasm/blob/main/FUNDAMENTAL_LIMITATIONS\\.md#recursion-depth\\n$');

const asyncSteps = 100_000;
const built = new Set();
for (const target of targets) {
  report.targets[target] = {};
  const t = TARGETS[target];
  if (t.tool && !existsSync(tools[t.tool]) && spawnSync(tools[t.tool], ['--version']).status !== 0) {
    expect(target, `${tools[t.tool]} is installed`, false, 'missing'); continue;
  }
  const key = t.build.join(' ');
  if (!built.has(key)) {
    const b = spawnSync(process.execPath, [lasm, 'build', 'Main.lean', ...t.build], { cwd: work, env, encoding: 'utf8', timeout: 30 * 60_000 });
    if (b.status !== 0) { expect(target, 'builds', false, (b.stdout + b.stderr).slice(-3000)); continue; }
    built.add(key);
  }
  if (target === 'node') {
    const mib = nodeDefaultStackMiB();
    report.targets.node.defaultStackMiB = mib;
    // About 10,000 frames of sumTo per MiB (10,230,859 with 1024 MiB on Linux x64, Node 24).
    const deep = Math.floor(mib * 7000);
    expect(target, `default stack (${mib} MiB): sumTo of ${deep} elements`, passes(target, deep), '');
    const runaway = run(target, ['depth', '1000000000'], { measure: true });
    report.targets.node.runaway = { code: runaway.code, ms: runaway.ms, peakKiB: runaway.peakKiB };
    expect(target, 'a runaway recursion: native diagnostic, status 134 and advice',
      runaway.code === 134 && runaway.stdout === '' && runaway.stderr.startsWith(overflowHead) && advice(mib).test(runaway.stderr.slice(overflowHead.length)),
      JSON.stringify({ code: runaway.code, signal: runaway.signal, stderr: runaway.stderr.slice(0, 600) }));
    const pinned = run(target, ['sum', '1000000'], { extra: { LASM_VM_STACK_MB: '64' } });
    expect(target, 'LASM_VM_STACK_MB=64 overrides the default (sumTo of 1,000,000 overflows)',
      pinned.code === 134 && pinned.stderr.startsWith(overflowHead) && advice(64).test(pinned.stderr.slice(overflowHead.length)) && !pinned.stderr.includes('default'),
      JSON.stringify({ code: pinned.code, stderr: pinned.stderr.slice(0, 600) }));
    if (timeTool) {
      // Stack memory is used only as deep as a recursion goes.
      const shallow = run(target, ['sum', '1000'], { measure: true }), small = run(target, ['sum', '1000'], { measure: true, extra: { LASM_VM_STACK_MB: '64' } });
      report.targets.node.shallowPeakKiB = { default: shallow.peakKiB, '64': small.peakKiB };
      expect(target, 'a shallow run uses no more memory with the default stack',
        shallow.code === 0 && small.code === 0 && shallow.peakKiB <= small.peakKiB * 1.15 + 16384, `${shallow.peakKiB} KiB vs ${small.peakKiB} KiB with 64 MiB`);
    }
    report.targets.node.limit = limit(target, deep, 30_000_000);
    report.targets.node.limit64 = limit(target, 100_000, 2_000_000, { extra: { LASM_VM_STACK_MB: '64' } });
  } else {
    expect(target, 'sumTo of 5,000 elements', passes(target, 5000), '');
    const over = run(target, ['sum', '1000000'], { timeout: 120_000 });
    expect(target, 'an overflow fails without hanging', !over.timedOut && over.code !== 0 && over.stdout === '',
      JSON.stringify({ code: over.code, signal: over.signal, stderr: over.stderr.slice(0, 300) }));
    report.targets[target].limit = limit(target, 1000, 1_000_000);
    if (target === 'wasi') {
      // docs/WASI.md: wasmtime's limit is the host's; this flag raises it.
      const flags = ['-W', 'max-wasm-stack=1073741824'];
      expect(target, 'wasmtime -W max-wasm-stack=1073741824: sumTo of 5,000,000 elements', passes(target, 5_000_000, { flags }), '');
      report.targets.wasi.limit1GiB = limit(target, 1_000_000, 30_000_000, { flags });
    }
  }
  // Issue #90: an Async loop's depth is not bounded by the stack on any target.
  for (const mode of ['await', 'mapM']) {
    const r = run(target, [mode, String(asyncSteps)], { timeout: 300_000 });
    (report.targets[target].asyncLoop ??= {})[mode] = { code: r.code, ms: r.ms };
    expect(target, `Async loop (${mode}) of ${asyncSteps.toLocaleString('en-US')} host calls (#90)`, r.code === 0 && r.stdout === `${asyncSteps}\n`,
      JSON.stringify({ code: r.code, signal: r.signal, timedOut: r.timedOut, ms: r.ms, stderr: r.stderr.slice(0, 600) }));
  }
  // Code size and a compute benchmark (informational): the program's .wasm bytes
  // and the fastest of three runs of benchWork 2,000,000, startup included.
  {
    const output = join(work, { node: 'dist', wasi: 'wasi', 'wasi-node': 'wasi' }[target] ?? 'deno');
    const wasmFiles = dir => readdirSync(dir, { withFileTypes: true }).flatMap(e => e.isDirectory() ? wasmFiles(join(dir, e.name))
      : e.name.endsWith('.wasm') ? [join(dir, e.name)] : []);
    const runs = [0, 1, 2].map(() => run(target, ['bench', '2000000']));
    report.targets[target].bench = { wasmBytes: wasmFiles(output).reduce((n, f) => n + statSync(f).size, 0),
      ms: Math.min(...runs.map(r => r.ms)), runsMs: runs.map(r => r.ms), ok: runs.every(r => r.code === 0), stdout: runs[0].stdout.trim() };
    console.log(`${target}: bench ${JSON.stringify(report.targets[target].bench)}`);
  }
  console.log(`${target}: deepest sumTo ${JSON.stringify(report.targets[target].limit)}`);
}
report.failures = failures;
mkdirSync(dirname(out), { recursive: true });
writeFileSync(out, JSON.stringify(report, null, 2) + '\n');
console.log(`\n| Target | Deepest sumTo |\n| --- | --- |\n${Object.entries(report.targets).map(([t, r]) => `| ${t} | ${r.limit ?? '—'}${r.limit1GiB ? ` (${r.limit1GiB} with -W max-wasm-stack=1073741824)` : ''}${r.limit64 ? ` (${r.limit64} with LASM_VM_STACK_MB=64)` : ''} |`).join('\n')}`);
if (process.env.GITHUB_STEP_SUMMARY) {
  writeFileSync(process.env.GITHUB_STEP_SUMMARY, `### Recursion depth (issue #66)\n\n| Target | Deepest sumTo |\n| --- | --- |\n${Object.entries(report.targets)
    .map(([t, r]) => `| ${t} | ${r.limit ?? '—'}${r.limit1GiB ? ` (${r.limit1GiB} with -W max-wasm-stack=1073741824)` : ''}${r.limit64 ? ` (${r.limit64} with LASM_VM_STACK_MB=64)` : ''} |`).join('\n')}\n\n${failures.length} failures.\n`, { flag: 'a' });
}
process.exit(failures.length ? 1 : 0);
