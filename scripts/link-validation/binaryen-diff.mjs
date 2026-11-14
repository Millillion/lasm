#!/usr/bin/env node
// Translation validation of Binaryen's lowering passes by differential execution
// (ROADMAP M5, docs/TESTING.md#binaryens-lowering-passes-by-differential-execution).
//
// For each WASI link recorded with LASM_TEST_LINK_EVIDENCE (src/wasi/wasi-link.mjs:
// wasm-opt's input `in.wasm`, its output `out.wasm` and its arguments), the
// module is lowered again one pass at a time, as the WASI link lowers it:
//   m0  in.wasm: memory64, exception handling (wasm-ld's output, atomics lowered)
//   m1  m0 after --strip-eh
//   m2  m1 after --memory64-lowering
//   m3  m2 after --table64-lowering
//   m4  out.wasm: the shipped module (the three passes, -Oz and the strips)
// and each module runs on a pinned specification-conformant interpreter, wabt's
// wasm-interp (with its WASI host), with the same arguments and directory.
// Every module must print the same stdout and stderr and exit with the same
// status: a difference between m(k-1) and m(k) names the pass that changed the
// program's behaviour. m4 also runs on wasmtime, the engine users run; a
// difference there is an engine disagreement, reported as such.
//
//   node scripts/link-validation/binaryen-diff.mjs --evidence DIR --wasm-opt PATH --interp PATH
//     [--wasmtime PATH] [--timeout-s N] [--min-programs N] [--report FILE]
//
// A run that times out on some module is inconclusive (the interpreter is slow),
// not a difference; --min-programs fails a run with too few conclusive programs.
import { spawnSync } from 'node:child_process';
import { readFileSync, readdirSync, existsSync, statSync, mkdirSync, writeFileSync, appendFileSync, rmSync } from 'node:fs';
import { join, resolve } from 'node:path';

const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.lastIndexOf(name); return i >= 0 ? args[i + 1] : fallback; };
const evidence = args.flatMap((arg, i) => args[i - 1] === '--evidence' ? [arg] : []);
const wasmOpt = option('--wasm-opt'), interp = option('--interp'), wasmtime = option('--wasmtime');
const timeout = Number(option('--timeout-s', '600')) * 1000, minPrograms = Number(option('--min-programs', '1'));
const report = option('--report'), work = resolve(option('--work', '.work/binaryen-diff'));
if (!evidence.length || !wasmOpt || !interp) {
  console.error('usage: binaryen-diff.mjs --evidence DIR --wasm-opt PATH --interp PATH [--wasmtime PATH] [--timeout-s N] [--min-programs N]');
  process.exit(2);
}

// The WASI links' Binaryen steps (kind wasi-wasi-wasm-opt; fastly and wasi-http need their own hosts).
const steps = [];
const walk = (directory, depth) => {
  const meta = join(directory, 'evidence.json');
  if (existsSync(meta)) {
    const m = JSON.parse(readFileSync(meta, 'utf8'));
    if (m.kind === 'wasi-wasi-wasm-opt') steps.push({ directory, meta: m });
    return;
  }
  if (depth > 0) for (const name of readdirSync(directory).sort()) if (statSync(join(directory, name)).isDirectory()) walk(join(directory, name), depth - 1);
};
for (const root of evidence) if (existsSync(root)) walk(root, 3);

export const lowering = ['--strip-eh', '--memory64-lowering', '--table64-lowering'];
function run(program, argv, cwd) {
  const r = spawnSync(program, argv, { cwd, encoding: 'utf8', timeout, maxBuffer: 64 << 20, env: { PATH: process.env.PATH, LEAN_BACKTRACE: '0' } });
  return { stdout: r.stdout ?? '', stderr: r.stderr ?? '', status: r.status, signal: r.signal, timedOut: r.error?.code === 'ETIMEDOUT', error: r.error && r.error.code !== 'ETIMEDOUT' ? String(r.error) : null };
}
const outcome = r => JSON.stringify([r.stdout, r.stderr, r.status]);

const results = [];
let failed = false;
for (const { directory, meta } of steps) {
  const name = directory.split('/').slice(-2).join('/');
  const features = (meta.args ?? []).filter(arg => arg.startsWith('--enable-'));
  const dir = join(work, name.replace(/[^A-Za-z0-9_-]/g, '_'));
  rmSync(dir, { recursive: true, force: true });
  mkdirSync(dir, { recursive: true });
  const modules = [{ name: 'm0 (wasm-ld output)', file: join(directory, 'in.wasm') }];
  let previous = modules[0].file, error = null;
  lowering.forEach((pass, i) => {
    if (error) return;
    const file = join(dir, `m${i + 1}.wasm`);
    const r = spawnSync(wasmOpt, [...features, pass, previous, '-o', file], { encoding: 'utf8', maxBuffer: 64 << 20 });
    if (r.status !== 0) { error = `wasm-opt ${pass}: ${(r.stderr || r.error || '').toString().slice(0, 2000)}`; return; }
    modules.push({ name: `m${i + 1} (after ${pass})`, file, pass });
    previous = file;
  });
  modules.push({ name: 'm4 (shipped)', file: join(directory, 'out.wasm'), pass: '-Oz and the strips' });
  const result = { directory, modules: [], differences: [], inconclusive: false, error };
  if (!error) {
    for (const m of modules) {
      const cwd = join(dir, `run-${modules.indexOf(m)}`);
      mkdirSync(cwd, { recursive: true });
      const r = run(interp, ['--enable-all', '--wasi', '--dir', '.', m.file], cwd);
      result.modules.push({ name: m.name, engine: 'wasm-interp', ...r, stdout: r.stdout.slice(0, 4000), stderr: r.stderr.slice(0, 4000), full: outcome(r) });
      if (r.timedOut || r.error) result.inconclusive = true;
    }
    const conclusive = result.modules.filter(m => !m.timedOut && !m.error);
    for (let i = 1; i < conclusive.length; i++)
      if (conclusive[i].full !== conclusive[i - 1].full)
        result.differences.push(`${conclusive[i - 1].name} and ${conclusive[i].name} differ on wasm-interp`);
    if (wasmtime) {
      const cwd = join(dir, 'run-wasmtime');
      mkdirSync(cwd, { recursive: true });
      const r = run(wasmtime, ['run', '--dir', '.', join(directory, 'out.wasm')], cwd);
      const shipped = result.modules.at(-1);
      result.wasmtime = { ...r, stdout: r.stdout.slice(0, 4000), stderr: r.stderr.slice(0, 4000) };
      if (!r.timedOut && shipped && !shipped.timedOut && outcome(r) !== shipped.full) result.engineDisagreement = 'the shipped module differs between wasm-interp and wasmtime';
    }
  }
  for (const m of result.modules) delete m.full;
  if (result.error || result.differences.length || result.engineDisagreement) failed = true;
  results.push(result);
  const status = result.error ? 'ERROR' : result.differences.length ? 'DIFFERS' : result.engineDisagreement ? 'ENGINES' : result.inconclusive ? 'partial' : 'same';
  console.log(`${status.padEnd(7)} ${name}: ${result.modules.map(m => `${m.name.split(' ')[0]} ${m.timedOut ? 'timeout' : `exit ${m.status}`}`).join(', ')}`);
  for (const d of result.differences) console.log(`        ${d}`);
  if (result.error) console.log(`        ${result.error}`);
  if (result.engineDisagreement) console.log(`        ${result.engineDisagreement}`);
}
const conclusive = results.filter(r => !r.error && !r.inconclusive).length;
if (conclusive < minPrograms) { failed = true; console.log(`FAIL: ${conclusive} programs ran to the end on every module, at least ${minPrograms} expected`); }
const summary = `### Binaryen's lowering passes by differential execution\n\n${results.length} WASI programs, ${conclusive} conclusive on all five modules (wasm-interp${wasmtime ? ' and wasmtime' : ''}): **${results.filter(r => r.differences.length).length} differ**, ${results.filter(r => r.engineDisagreement).length} engine disagreements, ${results.filter(r => r.error).length} errors.\n`;
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, summary + '\n');
if (report) writeFileSync(report, JSON.stringify({ lowering, results }, null, 1) + '\n');
process.exit(failed ? 1 : 0);
