// Differential testing campaign (docs/TESTING.md#differential-testing).
//
// Generates random Lean programs (generate.mjs), builds each with native Lean
// (the oracle: upstream `lean -c` + `leanc`) and with an installed Lasm CLI for
// every target, runs them all, and compares stdout, stderr and the exit status.
// A divergence is shrunk to a minimal case (batched: every round builds one
// program holding many candidate shrinks) and written as a reproducer plus a
// regression case for test/differential/regressions/.
//
// Three more comparisons (docs/TESTING.md#more-oracles), all as targets:
//   interp                   Lean's interpreter (`lean --run`, the same upstream
//                            toolchain): a second oracle. Where it and native Lean
//                            disagree, upstream Lean is suspect, not Lasm; those
//                            are reported as upstream suspects and never fail a run.
//   node-O0, wasi-O0, deno-O0  the same program built with optimization off
//                            (clang -O0 for the program's C, no Binaryen
//                            optimization passes): LASM_TEST_UNOPTIMIZED=1, a
//                            test-only switch of the build.
//   edge-node, edge-bun      the edge output (--target deno) on other engines:
//                            Node (V8) and Bun (JavaScriptCore); deno runs it on
//                            Deno (V8).
//   edge-sm                  the same edge output on SpiderMonkey's js shell
//                            (sm-runner.mjs).
//
//   node scripts/differential/run.mjs --lasm PATH/bin/lasm.mjs --lean-bin DIR --work NEW_DIR
//     [--seed N] [--programs N | --budget-min M] [--cases 120] [--fs-cases 25]
//     [--targets node,wasi,wasi-node,deno,interp,node-O0,wasi-O0,deno-O0,edge-node,edge-bun,edge-sm]
//     [--profile release|dev] [--wasmtime PATH] [--deno PATH] [--bun PATH] [--sm PATH]
//     [--wrap "CMD ARGS --"] [--regressions DIR]
//     [--shrink-rounds 12] [--summary FILE.json]
//
// Exit status: 0 = no divergence, 1 = divergence (reproducers in WORK/repros), 2 = harness error.
// Upstream suspects (native vs interpreter) are in the summary and never change it.
import { spawn, spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync, rmSync, cpSync } from 'node:fs';
import { join, resolve, basename, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';
import * as g from './generate.mjs';

const argv = process.argv.slice(2);
const opt = (name, fallback) => { const i = argv.indexOf(name); return i < 0 ? fallback : argv[i + 1]; };
const has = name => argv.includes(name);
const lasm = opt('--lasm') && resolve(opt('--lasm'));
const leanBin = resolve(opt('--lean-bin', join(process.env.HOME ?? '', '.elan/toolchains/leanprover--lean4---v4.35.0/bin')));
const work = resolve(opt('--work', 'difftest-work'));
const seed0 = Number(opt('--seed', String(Date.now() % 1e9)));
const programs = Number(opt('--programs', '1'));
const budgetMs = Number(opt('--budget-min', '0')) * 60_000;
const nCases = Number(opt('--cases', '120'));
const nFsCases = Number(opt('--fs-cases', '25'));
const targets = opt('--targets', 'node,wasi,deno').split(',').filter(Boolean);
const profile = opt('--profile', 'release');
const wasmtime = opt('--wasmtime', 'wasmtime');
const deno = opt('--deno', 'deno');
const bun = opt('--bun', 'bun');
const sm = opt('--sm', 'js');
const wrap = (opt('--wrap', '') || '').split(' ').filter(Boolean);
const regressionsDir = opt('--regressions');
const shrinkRounds = Number(opt('--shrink-rounds', '12'));
const summaryFile = opt('--summary', join(work, 'summary.json'));
const runTimeoutMs = Number(opt('--run-timeout-s', '120')) * 1000;
if (!lasm) { console.error('--lasm PATH/bin/lasm.mjs is required'); process.exit(2); }
mkdirSync(work, { recursive: true });

// Targets: how Lasm builds each, and how its output runs. Edge-profile targets
// have no file system, so the file-system program runs only on node and WASI.
// `out` names the build output a target runs (targets sharing one are built
// once); `variant` builds in a subdirectory of the program with extra
// environment (the optimization differential); `oracle` targets are not Lasm
// (no build) and their disagreements with native Lean are upstream suspects.
const wasmtimeEnv = [...['A', 'B', 'C', 'D', 'E'].flatMap(k => ['--env', `LASM_DIFF_${k}=${k}`]), '--env', 'LEAN_BACKTRACE=0'];
// Node runs the JSPI edge output only with JSPI (unflagged from Node 25).
const nodeJspi = spawnSync(process.execPath, ['-e', 'process.exit(typeof WebAssembly.Suspending === "function" ? 0 : 1)']).status === 0 ? [] : ['--experimental-wasm-jspi'];
const here = dirname(fileURLToPath(import.meta.url));
const unoptimized = { LASM_TEST_UNOPTIMIZED: '1' };
const TARGETS = {
  node: { build: [], run: dir => [process.execPath, [join(dir, 'dist/main.mjs')]], fs: true },
  // Several variables before LEAN_BACKTRACE: libc's getenv once lost every
  // variable after the third (src/wasi/lasm_wasi_libc.c).
  wasi: { build: ['--target', 'wasi'], run: dir => [wasmtime, ['run', '--dir', '.', ...wasmtimeEnv, join(dir, 'wasi/main.wasm')]], fs: true, out: 'wasi' },
  'wasi-node': { build: ['--target', 'wasi'], run: dir => [process.execPath, ['--no-warnings', join(work, 'node-wasi-run.mjs'), join(dir, 'wasi/main.wasm')]], fs: true, out: 'wasi' },
  deno: { build: ['--target', 'deno'], run: dir => [deno, ['run', '-A', '--no-lock', join(dir, 'deno/main.mjs')]], fs: false, out: 'deno' },
  // Second oracle: the upstream interpreter on the same source.
  // (--root: the module is Main, as for `lean -c` in the program directory;
  // otherwise panic messages would name it _stdin.)
  interp: { oracle: true, run: dir => [join(leanBin, 'lean'), [`--root=${dir}`, '--run', join(dir, 'Main.lean')]], fs: true },
  // Optimization differential: the same targets, unoptimized.
  'node-O0': { build: [], variant: 'O0', buildEnv: unoptimized, run: dir => [process.execPath, [join(dir, 'dist/main.mjs')]], fs: true },
  'wasi-O0': { build: ['--target', 'wasi'], variant: 'O0', buildEnv: unoptimized, run: dir => [wasmtime, ['run', '--dir', '.', ...wasmtimeEnv, join(dir, 'wasi/main.wasm')]], fs: true, out: 'wasi' },
  'deno-O0': { build: ['--target', 'deno'], variant: 'O0', buildEnv: unoptimized, run: dir => [deno, ['run', '-A', '--no-lock', join(dir, 'deno/main.mjs')]], fs: false, out: 'deno' },
  // Engine differential: one edge output (deno/main.mjs is portable) on V8 and JavaScriptCore.
  'edge-node': { build: ['--target', 'deno'], run: dir => [process.execPath, [...nodeJspi, '--no-warnings', join(dir, 'deno/main.mjs')]], fs: false, out: 'deno' },
  'edge-bun': { build: ['--target', 'deno'], run: dir => [bun, [join(dir, 'deno/main.mjs')]], fs: false, out: 'deno' },
  // SpiderMonkey's js shell (sm-runner.mjs): the shell's quit takes 0–127, so the
  // runner also writes the status to a file.
  'edge-sm': { build: ['--target', 'deno'], run: dir => [sm, ['-m', join(here, 'sm-runner.mjs')], { LASM_SM_RUN: JSON.stringify({ program: join(dir, 'deno/lasm'), env: { LEAN_BACKTRACE: '0' }, jspi: true, exitFile: 'exit-status' }) }], exitFile: 'exit-status', fs: false, out: 'deno' },
};
for (const t of targets) if (!TARGETS[t]) { console.error(`unknown target ${t}`); process.exit(2); }
writeFileSync(join(work, 'node-wasi-run.mjs'), `const emit = process.emitWarning;
process.emitWarning = (w, ...r) => (r[0] === 'ExperimentalWarning' || r[0]?.type === 'ExperimentalWarning') ? undefined : emit.call(process, w, ...r);
const { WASI } = await import('node:wasi');
const { readFileSync } = await import('node:fs');
const [file, ...args] = process.argv.slice(2);
const env = Object.fromEntries(Object.entries(process.env).filter(([k]) => !k.startsWith('NODE_')));
const wasi = new WASI({ version: 'preview1', args: [file, ...args], env, preopens: { '.': process.cwd() }, returnOnExit: true });
const instance = await WebAssembly.instantiate(await WebAssembly.compile(readFileSync(file)), wasi.getImportObject());
process.exitCode = wasi.start(instance);
`);

const env = { ...process.env, CI: '1', BROWSER: 'none', LASM_EDITOR: '0', LEAN_BACKTRACE: '0', NO_COLOR: '1' };
function exec(cmd, args, { cwd, timeout = 30 * 60_000, extraEnv } = {}) {
  return new Promise(done => {
    const started = performance.now();
    const child = spawn(cmd, args, { cwd, env: extraEnv ? { ...env, ...extraEnv } : env, stdio: ['ignore', 'pipe', 'pipe'] });
    // Bytes are collected and decoded once: decoding each pipe chunk on its own
    // would corrupt a UTF-8 character split across two chunks (it did: the
    // oracle's 4096-byte writes split "İ" in campaign 41246364549).
    const out = [], err = []; let outBytes = 0, errBytes = 0, timedOut = false, spawnError = '';
    const timer = setTimeout(() => { timedOut = true; child.kill('SIGKILL'); }, timeout);
    child.stdout.on('data', d => { if (outBytes < 8e6) { out.push(d); outBytes += d.length; } });
    child.stderr.on('data', d => { if (errBytes < 8e6) { err.push(d); errBytes += d.length; } });
    child.on('error', e => { spawnError += String(e); });
    child.on('close', (code, signal) => { clearTimeout(timer); done({ code, signal, stdout: Buffer.concat(out).toString('utf8'), stderr: Buffer.concat(err).toString('utf8') + spawnError, timedOut, ms: Math.round(performance.now() - started) }); });
  });
}

// ---------- building and running one program ----------
async function buildNative(dir) {
  const c = await exec(join(leanBin, 'lean'), ['-c', 'Main.c', 'Main.lean'], { cwd: dir });
  if (c.code !== 0) return { ok: false, log: c.stdout + c.stderr };
  const l = await exec(join(leanBin, 'leanc'), ['Main.c', '-o', 'main'], { cwd: dir });
  return { ok: l.code === 0, log: l.stdout + l.stderr };
}
async function buildLasm(dir, target) {
  const args = [lasm, 'build', 'Main.lean', ...TARGETS[target].build, ...(profile === 'dev' ? ['--dev'] : [])];
  const [cmd, ...rest] = wrap.length ? [...wrap, process.execPath, ...args] : [process.execPath, ...args];
  const r = await exec(cmd, rest, { cwd: dir, extraEnv: TARGETS[target].buildEnv });
  return { ok: r.code === 0, log: (r.stdout + r.stderr).slice(-6000), ms: r.ms };
}
// The observable behaviour: stdout, stderr (without native backtraces) and the
// exit status. A timeout or a signal is part of it.
function normalize(r) {
  // LEAN_BACKTRACE=0 is set everywhere, so no backtrace is expected anywhere;
  // only native return addresses (never comparable) are dropped.
  const stderr = r.stderr.replace(/\r\n/g, '\n').split('\n').filter(l => !/^\S+\(\+0x[0-9a-f]+\) \[0x[0-9a-f]+\]$/.test(l)).join('\n');
  return { stdout: r.stdout.replace(/\r\n/g, '\n'), stderr, code: r.timedOut ? 'timeout' : r.signal ? `signal ${r.signal}` : r.code };
}
// Known divergences: applied to a target's output before the comparison and
// counted in the summary, so they are visible without failing every run. Each
// is an open issue or a documented host limit; remove an entry when it is fixed.
const KNOWN = [
  { issue: 'https://github.com/Millillion/lasm/issues/30', targets: ['wasi', 'wasi-O0'],
    what: 'wasmtime turns exit statuses of 126 and above into exit 1 with an error (a wasmtime limit, documented in docs/WASI.md)',
    apply: (r, nat) => typeof nat?.code === 'number' && nat.code >= 126 && r.code === 1 && /invalid exit status outside of \[0\.\.126\)/.test(r.stderr)
      ? { ...r, code: nat.code, stderr: r.stderr.replace(/Error: failed to run main module[\s\S]*$/, '') + (nat.stderr.endsWith('\n') && !r.stderr.endsWith('\n') ? '\n' : '') } : r },
];
const knownApplied = {};
function applyKnown(target, r, nat) {
  for (const k of KNOWN) if (k.targets.includes(target)) {
    const next = k.apply(r, nat);
    if (next.stderr !== r.stderr || next.stdout !== r.stdout) knownApplied[k.issue] = (knownApplied[k.issue] ?? 0) + 1;
    r = next;
  }
  return r;
}
async function runIn(projectDir, cmdArgs, label, exitFile) {
  const runDir = join(projectDir, `run-${label}`);
  rmSync(runDir, { recursive: true, force: true }); mkdirSync(runDir);
  const r = await exec(cmdArgs[0], cmdArgs[1], { cwd: runDir, timeout: runTimeoutMs, extraEnv: cmdArgs[2] });
  if (exitFile && !r.timedOut && !r.signal && existsSync(join(runDir, exitFile))) r.code = Number(readFileSync(join(runDir, exitFile), 'utf8'));
  return { ...normalize(r), ms: r.ms };
}
const runNative = dir => runIn(dir, [join(dir, 'main'), []], 'native');
const runTarget = async (dir, target, nat) => applyKnown(target, await runIn(dir, TARGETS[target].run(dir), target, TARGETS[target].exitFile), nat);

// Output lines grouped by the case that printed them: stdout lines start with
// the case id ("cN ...", "cNvM ...", "r_name ..."); stderr has an "@id" marker
// line before each case.
function byCase(text, stderr = false) {
  const m = new Map(); let cur = '_';
  for (const line of text.split('\n')) {
    const id = stderr ? line.match(/^@(c\d+(?:v\d+)?|r_[A-Za-z0-9_]+)$/)?.[1] : line.match(/^(c\d+(?:v\d+)?|r_[A-Za-z0-9_]+) /)?.[1];
    if (id) cur = id;
    m.set(cur, (m.get(cur) ?? '') + line + '\n');
  }
  return m;
}
// Case ids whose output differs, in program order; plus whole-run differences.
function diverging(ids, nat, tgt) {
  const a = byCase(nat.stdout), b = byCase(tgt.stdout);
  const ae = byCase(nat.stderr, true), be = byCase(tgt.stderr, true);
  const bad = ids.filter(id => a.get(id) !== b.get(id) || ae.get(id) !== be.get(id));
  return { bad, stderr: nat.stderr !== tgt.stderr, code: nat.code !== tgt.code, any: bad.length > 0 || nat.stderr !== tgt.stderr || nat.code !== tgt.code };
}

// One program: native + every target. Returns per-target outcomes.
const builtTargets = new Map();
async function evaluate(dir, list, tlist, { ending } = {}) {
  mkdirSync(dir, { recursive: true });
  writeFileSync(join(dir, 'Main.lean'), g.renderProgram(list, { ending }));
  const nb = await buildNative(dir);
  if (!nb.ok) return { nativeBuildFailed: true, log: nb.log };
  const nat = await runNative(dir);
  const ids = list.map(({ index, name }) => name ?? `c${index}`);
  const results = {};
  const built = new Map();
  for (const t of tlist) {
    const r = await buildAndRun(dir, t, nat, built);
    results[t] = r.buildFailed ? r : { run: r.run, diff: diverging(ids, nat, r.run) };
  }
  return { nat, ids, results };
}
// Builds a target's output once per program (a variant in its own
// subdirectory), then runs it. Oracle targets run the source.
async function buildAndRun(dir, t, nat, built) {
  const spec = TARGETS[t];
  const project = spec.variant ? join(dir, spec.variant) : dir;
  if (!spec.oracle) {
    const out = `${spec.variant ?? ''}:${spec.out ?? t}`;
    if (!built.has(out)) {
      if (spec.variant) { mkdirSync(project, { recursive: true }); cpSync(join(dir, 'Main.lean'), join(project, 'Main.lean')); }
      const b = await buildLasm(project, t);
      if (!b.ok) { built.set(out, b); return { buildFailed: true, log: b.log }; }
      built.set(out, b); builtTargets.set(t, (builtTargets.get(t) ?? 0) + b.ms);
    } else if (!built.get(out).ok) return { buildFailed: true, log: built.get(out).log };
  }
  return { run: await runTarget(project, t, nat) };
}

// ---------- shrinking ----------
// Keep the smallest diverging candidate, one round per build, until no candidate
// diverges or the round budget is spent.
async function shrink(dirBase, item, target, ending) {
  let best = item, round = 0;
  while (round++ < shrinkRounds) {
    const cands = g.shrinkCandidates(best.c, 40);
    if (!cands.length) break;
    const list = cands.map((c, j) => ({ index: best.index, c, name: `c${best.index}v${j}` }));
    const ev = await evaluate(join(dirBase, `shrink-${round}`), list, [target], { ending });
    if (ev.nativeBuildFailed) { console.log(`  shrink round ${round}: candidates do not compile natively; stopping`); break; }
    const res = ev.results[target];
    if (!res || res.buildFailed) { console.log(`  shrink round ${round}: Lasm build failed on candidates (keeping current)`); break; }
    // A candidate that crashes the whole program hides the ones after it: treat
    // the first diverging (or missing) case as the hit.
    const hit = res.diff.bad[0];
    if (!hit) { console.log(`  shrink round ${round}: no smaller candidate diverges`); break; }
    const j = Number(hit.split('v')[1]);
    best = { index: best.index, c: cands[j] };
    console.log(`  shrink round ${round}: size ${g.caseSize(best.c)}`);
  }
  return best;
}

// ---------- reproducers and regressions ----------
function sha(s) { return createHash('sha256').update(s).digest('hex').slice(0, 12); }
function writeRepro(target, seed, item, nat, tgt, ending, note) {
  const name = `r_${target.replace(/-/g, '_')}_${seed}_${item.index}`;
  const dir = join(work, 'repros', name);
  mkdirSync(dir, { recursive: true });
  const program = g.renderProgram([{ ...item, name }], { ending });
  writeFileSync(join(dir, 'Main.lean'), program);
  writeFileSync(join(dir, `${name}.lean`), `-- Differential regression (docs/TESTING.md#differential-testing): ${target}, seed ${seed}, case ${item.index}; main ends with "${(ending ?? '  return 0').trim()}" (see Main.lean).\n-- ${note.replace(/\n/g, ' ')}\n` + g.renderCase(item.c, name));
  writeFileSync(join(dir, 'case.json'), JSON.stringify({ target, seed, index: item.index, case: item.c }, null, 1) + '\n');
  writeFileSync(join(dir, 'native.json'), JSON.stringify(nat, null, 1) + '\n');
  writeFileSync(join(dir, `${target}.json`), JSON.stringify(tgt, null, 1) + '\n');
  return { name, dir };
}
export function loadRegressions(dir) {
  if (!dir || !existsSync(dir)) return [];
  return readdirSync(dir).filter(f => f.endsWith('.lean')).sort().map(f => {
    const text = readFileSync(join(dir, f), 'utf8');
    return { name: basename(f, '.lean'), text };
  });
}

// ---------- main ----------
const summary = { started: new Date().toISOString(), seed0, targets, profile, cases: nCases, fsCases: nFsCases, programs: [], divergences: [], upstreamSuspects: [], harnessErrors: [] };
const save = () => writeFileSync(summaryFile, JSON.stringify(summary, null, 2) + '\n');
const startedAt = Date.now();

async function campaignProgram(seed, kind) {
  const fsProgram = kind === 'fs';
  const tlist = targets.filter(t => !fsProgram || TARGETS[t].fs);
  if (!tlist.length) return;
  const list = fsProgram
    ? g.genProgram(seed, { cases: nFsCases, kinds: ['fs', 'io'] })
    : g.genProgram(seed, { cases: nCases });
  const ending = g.ENDINGS[seed % g.ENDINGS.length];
  const dir = join(work, `s${seed}-${kind}`);
  const ev = await evaluate(dir, list, tlist, { ending });
  const rec = { seed, kind, cases: list.length, targets: {} };
  summary.programs.push(rec);
  if (ev.nativeBuildFailed) {
    rec.native = 'build failed';
    summary.harnessErrors.push({ seed, kind, error: 'generated program does not compile natively', log: ev.log.slice(0, 4000) });
    console.log(`seed ${seed} ${kind}: GENERATOR ERROR (native build failed)\n${ev.log.slice(0, 2000)}`);
    return;
  }
  rec.nativeMs = ev.nat.ms;
  for (const t of tlist) {
    const res = ev.results[t];
    if (res.buildFailed) {
      rec.targets[t] = 'build failed';
      summary.divergences.push({ seed, kind, target: t, what: 'lasm build failed where native Lean built', log: res.log });
      console.log(`seed ${seed} ${kind} ${t}: LASM BUILD FAILED\n${res.log.slice(-2000)}`);
      continue;
    }
    rec.targets[t] = { ms: res.run.ms, same: !res.diff.any };
    if (!res.diff.any) { console.log(`seed ${seed} ${kind} ${t}: same (${list.length} cases, native ${ev.nat.ms} ms, ${t} ${res.run.ms} ms)`); continue; }
    // The interpreter is a second oracle: its disagreements with native Lean
    // are upstream suspects, shrunk and kept like divergences, never failures.
    const sink = TARGETS[t].oracle ? summary.upstreamSuspects : summary.divergences;
    console.log(`seed ${seed} ${kind} ${t}: ${TARGETS[t].oracle ? 'UPSTREAM SUSPECT (native and interpreter differ)' : 'DIVERGES'}: cases ${res.diff.bad.slice(0, 10).join(' ')}${res.diff.code ? ` exit ${ev.nat.code} vs ${res.run.code}` : ''}${res.diff.stderr ? ' (stderr differs)' : ''}`);
    // Each diverging case (at most 3 per program and target) alone, then shrunk.
    // The first diverging cases (a crash also cuts off every later case), each
    // re-run alone; the ones that diverge alone are shrunk. If none does, the
    // divergence needs other cases with it and is reported as such.
    const suspects = res.diff.bad.length ? res.diff.bad : ev.ids.slice(-1);
    let reproduced = 0;
    for (const id of suspects.slice(0, 4)) {
      if (reproduced >= 2) break;
      const item = list.find(x => `c${x.index}` === id);
      if (!item) continue;
      const alone = await evaluate(join(dir, `alone-${id}-${t}`), [item], [t], { ending });
      const ar = alone.results?.[t];
      if (!ar || ar.buildFailed || !ar.diff.any) continue;
      reproduced++;
      let small = await shrink(join(dir, `shrink-${id}-${t}`), item, t, ending);
      let fin = await evaluate(join(dir, `final-${id}-${t}`), [small], [t], { ending });
      // A shrink step accepted inside a batch (where an earlier crash hides later
      // cases) may not diverge alone: fall back to the verified case.
      if (!fin.results?.[t]?.diff?.any) { small = item; fin = alone; }
      const fr = fin.results?.[t];
      const native = fin.nat, target = fr?.run;
      const repro = writeRepro(t, seed, small, native, target, ending, `native: ${JSON.stringify(native?.stdout?.slice(0, 200))} ${t}: ${JSON.stringify(target?.stdout?.slice(0, 200))}`);
      sink.push({ seed, kind, target: t, case: item.index, size: g.caseSize(small.c), repro: repro.dir, regression: `${repro.name}.lean`,
        native: { stdout: native?.stdout.slice(0, 2000), stderr: native?.stderr.slice(0, 2000), code: native?.code },
        [t]: { stdout: target?.stdout.slice(0, 2000), stderr: target?.stderr.slice(0, 2000), code: target?.code } });
      console.log(`  minimized to ${repro.dir}`);
    }
    if (!reproduced) {
      // Keep the whole program and both outputs: the divergence depends on context.
      const combo = join(work, 'repros', `combination-${t}-${seed}-${kind}`);
      mkdirSync(combo, { recursive: true });
      cpSync(join(dir, 'Main.lean'), join(combo, 'Main.lean'));
      const pick = (r, ids) => { const o = byCase(r.stdout), e = byCase(r.stderr, true); return Object.fromEntries(ids.map(id => [id, { stdout: o.get(id) ?? null, stderr: e.get(id) ?? null }])); };
      const ids = suspects.slice(0, 4);
      writeFileSync(join(combo, 'outputs.json'), JSON.stringify({ native: { code: ev.nat.code, cases: pick(ev.nat, ids) }, [t]: { code: res.run.code, cases: pick(res.run, ids) } }, null, 1) + '\n');
      sink.push({ seed, kind, target: t, cases: ids, what: 'diverges only in combination with other cases', repro: combo, reproduce: `--seed ${seed} --programs 1` });
    }
  }
  save();
}

async function regressionRun() {
  const regs = loadRegressions(regressionsDir);
  if (!regs.length) { console.log(`no regressions in ${regressionsDir}`); return; }
  // Regression files are case definitions written against the generator's preamble.
  const dir = join(work, 'regressions');
  mkdirSync(dir, { recursive: true });
  const fsNames = regs.filter(r => /IO\.FS|System\.FilePath/.test(r.text)).map(r => r.name);
  for (const fsGroup of [false, true]) {
    const group = regs.filter(r => fsNames.includes(r.name) === fsGroup);
    if (!group.length) continue;
    const tlist = targets.filter(t => !fsGroup || TARGETS[t].fs);
    const d = join(dir, fsGroup ? 'fs' : 'core');
    mkdirSync(d, { recursive: true });
    const src = `${g.PREAMBLE}\n${group.map(r => r.text).join('\n')}\ndef main : IO UInt32 := do\n${group.map(r => `  IO.eprintln "@${r.name}"\n  ${r.name}`).join('\n')}\n  IO.eprintln "done"\n  return 0\n`;
    writeFileSync(join(d, 'Main.lean'), src);
    const nb = await buildNative(d);
    if (!nb.ok) { summary.harnessErrors.push({ regressions: true, log: nb.log.slice(0, 4000) }); console.log(`regressions: native build failed\n${nb.log.slice(0, 3000)}`); continue; }
    const nat = await runNative(d);
    const ids = group.map(r => r.name);
    const built = new Map();
    for (const t of tlist) {
      const res = await buildAndRun(d, t, nat, built);
      if (res.buildFailed) { summary.divergences.push({ regressions: true, target: t, what: 'lasm build failed', log: res.log }); console.log(`regressions ${t}: BUILD FAILED`); continue; }
      const r = res.run;
      const diff = diverging(ids, nat, r);
      if (diff.any) {
        const list = TARGETS[t].oracle ? summary.upstreamSuspects : summary.divergences;
        list.push({ regressions: true, target: t, cases: diff.bad, code: [nat.code, r.code], native: { stdout: nat.stdout.slice(0, 3000), stderr: nat.stderr.slice(0, 2000) }, [t]: { stdout: r.stdout.slice(0, 3000), stderr: r.stderr.slice(0, 2000) } });
        console.log(`regressions ${t}: ${TARGETS[t].oracle ? 'UPSTREAM SUSPECT (native and interpreter differ)' : 'DIVERGES'}: ${diff.bad.join(' ')}${diff.code ? ` exit ${nat.code} vs ${r.code}` : ''}${diff.stderr ? ' (stderr differs)' : ''}`);
      } else console.log(`regressions ${t}: same (${ids.length} cases)`);
    }
  }
  save();
}

try {
  if (regressionsDir) await regressionRun();
  for (let i = 0; ; i++) {
    if (budgetMs ? Date.now() - startedAt > budgetMs : i >= programs) break;
    const seed = seed0 + i;
    await campaignProgram(seed, 'core');
    if (nFsCases > 0) await campaignProgram(seed, 'fs');
  }
} catch (e) {
  summary.harnessErrors.push({ error: String(e?.stack ?? e) });
  console.error(e);
}
summary.finished = new Date().toISOString();
summary.buildMs = Object.fromEntries(builtTargets);
summary.knownDivergences = KNOWN.map(k => ({ issue: k.issue, targets: k.targets, what: k.what, applied: knownApplied[k.issue] ?? 0 }));
save();
const realDivergences = summary.divergences.length;
console.log(`\n${summary.programs.length} programs, ${summary.programs.reduce((s, p) => s + p.cases, 0)} cases, ${realDivergences} divergences, ${summary.upstreamSuspects.length} upstream suspects (native vs interpreter, not Lasm), ${summary.harnessErrors.length} harness errors (summary: ${summaryFile})`);
process.exit(realDivergences ? 1 : summary.harnessErrors.length ? 2 : 0);
