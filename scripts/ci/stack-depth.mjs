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
//   edge-O0    the same edge output built unoptimized (LASM_TEST_UNOPTIMIZED=1:
//              clang -O0 keeps every local on the 1 MiB C stack) on Deno, Node
//              and Bun: the first depth past the limit overflows the C stack, and the instance
//              stops with a stack overflow, not the trap that follows it.
// Every target's limit is measured by bisection and written to OUT (JSON).
//   node scripts/ci/stack-depth.mjs --lasm PATH/bin/lasm.mjs --work DIR [--out FILE.json]
//     [--targets node,wasi,wasi-node,deno,edge-node,edge-bun,edge-sm,edge-O0,edge-O0-node,edge-O0-bun]
//     [--wasmtime PATH] [--deno PATH] [--bun PATH] [--sm PATH]
import { spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
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
writeFileSync(join(work, 'Main.lean'), `def sumTo : List Nat → Nat
  | [] => 0
  | x :: xs => x + sumTo xs

def depth : Nat → Nat
  | 0 => 0
  | n + 1 => depth n + 1

-- Many values live across the call: at -O0 each takes C stack (edge-O0).
def wide : Nat → Nat
  | 0 => 0
  | n + 1 =>
    let v0 := (n * 3 + 1) % 1000003
    let v1 := (v0 * 3 + n) % 1000003
    let v2 := (v1 * 4 + n) % 1000003
    let v3 := (v2 * 5 + n) % 1000003
    let v4 := (v3 * 6 + n) % 1000003
    let v5 := (v4 * 7 + n) % 1000003
    let v6 := (v5 * 8 + n) % 1000003
    let v7 := (v6 * 9 + n) % 1000003
    let v8 := (v7 * 10 + n) % 1000003
    let v9 := (v8 * 11 + n) % 1000003
    let v10 := (v9 * 12 + n) % 1000003
    let v11 := (v10 * 13 + n) % 1000003
    let v12 := (v11 * 14 + n) % 1000003
    let v13 := (v12 * 15 + n) % 1000003
    let v14 := (v13 * 16 + n) % 1000003
    let v15 := (v14 * 17 + n) % 1000003
    let v16 := (v15 * 18 + n) % 1000003
    let v17 := (v16 * 19 + n) % 1000003
    let v18 := (v17 * 20 + n) % 1000003
    let v19 := (v18 * 21 + n) % 1000003
    let v20 := (v19 * 22 + n) % 1000003
    let v21 := (v20 * 23 + n) % 1000003
    let v22 := (v21 * 24 + n) % 1000003
    let v23 := (v22 * 25 + n) % 1000003
    wide n + v0 + v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8 + v9 + v10 + v11 + v12 + v13 + v14 + v15 + v16 + v17 + v18 + v19 + v20 + v21 + v22 + v23

def deepSum : Nat → Nat | 0 => 0 | n + 1 => (n + 1) + deepSum n

def main (args : List String) : IO Unit := do
  let n := (args.getD 1 "1000").toNat!
  match args.headD "sum" with
  | "sum" => IO.println (sumTo (List.range n))
  | "wide" => IO.println (wide n)
  | "deepSum" => IO.println (deepSum n)
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
  // Built in O0/ (its own deno/ output) with the test-only switch (docs/TESTING.md).
  'edge-O0': { build: ['--target', 'deno'], dir: 'O0', buildEnv: { LASM_TEST_UNOPTIMIZED: '1' }, tool: 'deno', run: (args, extra) => [tools.deno, ['run', '-A', '--no-lock', join(work, 'O0/deno/main.mjs'), ...args], extra] },
  'edge-O0-node': { build: ['--target', 'deno'], dir: 'O0', buildEnv: { LASM_TEST_UNOPTIMIZED: '1' }, run: (args, extra) => [process.execPath, [...nodeJspi, '--no-warnings', join(work, 'O0/deno/main.mjs'), ...args], extra] },
  'edge-O0-bun': { build: ['--target', 'deno'], dir: 'O0', buildEnv: { LASM_TEST_UNOPTIMIZED: '1' }, tool: 'bun', run: (args, extra) => [tools.bun, [join(work, 'O0/deno/main.mjs'), ...args], extra] },
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
  const timedOut = r.error?.code === 'ETIMEDOUT';
  // Said at once, so a hang is never a silent wait (issue #126).
  if (timedOut) console.log(`hung ${target}: ${args.join(' ')} gave no result in ${timeout / 1000} s and was killed (stderr ${JSON.stringify(stderr.slice(0, 200))})`);
  let code = r.status;
  if (target === 'edge-sm' && existsSync(join(work, 'sm-exit'))) code = Number(readFileSync(join(work, 'sm-exit'), 'utf8'));
  return { code, signal: r.signal, timedOut, stdout: r.stdout ?? '', stderr, peakKiB, ms: Math.round(performance.now() - started) };
}
const sumOf = n => String(BigInt(n) * BigInt(n - 1) / 2n) + '\n';
const passes = (target, n, options) => { const r = run(target, ['sum', String(n)], options); return r.code === 0 && r.stdout === sumOf(n); };
// The deepest passing n (to within 2 %), between lo (passing) and hi (failing).
function limit(target, lo, hi, options, ok = passes) {
  if (!ok(target, lo, options)) return 0;
  while (hi - lo > lo / 50 + 1) { const mid = Math.floor((lo + hi) / 2); if (ok(target, mid, options)) lo = mid; else hi = mid; }
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

// The edge's C-stack overflow (src/edge/edge-start.mjs stackOverflowCause).
const edgeOverflow = "Stack overflow: the program used all of its 1 MiB C stack (deep recursion?). See https://github.com/Millillion/lasm/blob/main/docs/EDGE.md#stack";

const built = new Set();
for (const target of targets) {
  report.targets[target] = {};
  const t = TARGETS[target];
  if (t.tool && !existsSync(tools[t.tool]) && spawnSync(tools[t.tool], ['--version']).status !== 0) {
    expect(target, `${tools[t.tool]} is installed`, false, 'missing'); continue;
  }
  const key = JSON.stringify([t.dir, t.build, t.buildEnv]), cwd = join(work, t.dir ?? '');
  if (!built.has(key)) {
    if (t.dir) { mkdirSync(cwd, { recursive: true }); writeFileSync(join(cwd, 'Main.lean'), readFileSync(join(work, 'Main.lean'))); }
    const b = spawnSync(process.execPath, [lasm, 'build', 'Main.lean', ...t.build], { cwd, env: { ...env, ...t.buildEnv }, encoding: 'utf8', timeout: 30 * 60_000 });
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
  } else if (target.startsWith('edge-O0')) {
    expect(target, 'sumTo of 500 elements', passes(target, 500), '');
    // Past each recursion's limit the engine's stack or the C stack runs out
    // first, depending on the engine and the frame; a C-stack overflow must be
    // named, never left as the trap that follows it ("memory access out of bounds").
    const overflows = [];
    // Every run here ends in well under a second: 30 s is a hang (issue #126).
    for (const mode of ['sum', 'wide', 'deepSum']) {
      const ok = (t, n) => { const r = run(t, [mode, String(n)], { timeout: 30_000 }); return r.code === 0 && /^\d+\n$/.test(r.stdout); };
      const deepest = limit(target, 100, 50_000, undefined, ok), n = Math.ceil(deepest * 1.1) + 10;
      const over = run(target, [mode, String(n)], { timeout: 30_000 });
      const named = over.stderr.includes(`[lasm] the Lean instance stopped: ${edgeOverflow}\n`);
      if (named) overflows.push(mode);
      (report.targets[target].limits ??= {})[mode] = { deepest, stop: named ? 'C stack' : over.stderr.split('\n')[0] };
      expect(target, `${mode} ${n}: stops with a stack overflow, never the trap after it`,
        !over.timedOut && over.code === 1 && over.stdout === '' && !/out of bounds/i.test(over.stderr)
          && (named || /^\[lasm\] the Lean instance stopped: (Maximum call stack size exceeded|too much recursion)/.test(over.stderr)),
        JSON.stringify({ code: over.code, signal: over.signal, timedOut: over.timedOut, deepest, stderr: over.stderr.slice(0, 400) }));
    }
    expect(target, 'a recursion exhausts the 1 MiB C stack and is named', overflows.length > 0, JSON.stringify(report.targets[target].limits));
    report.targets[target].limit = report.targets[target].limits.sum.deepest;
  } else {
    expect(target, 'sumTo of 5,000 elements', passes(target, 5000), '');
    const over = run(target, ['sum', '1000000'], { timeout: 60_000 });
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
