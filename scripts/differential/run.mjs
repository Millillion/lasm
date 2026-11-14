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
//   bun, bun-O0              the Bun target (--target bun, bun/main.mjs) on Bun.
//   browser-chromium         the browser target (--target browser --suspend jspi)
//                            mounted in headless Chromium through Playwright
//                            (browser-runner.mjs). A browser has no exit status:
//                            zero is compared against non-zero.
//   browser-firefox,         the same build in Firefox and WebKit, which run it
//   browser-webkit           without JSPI (docs/BROWSER.md), so an `IO.sleep`
//                            would stop the instance: they run a third program
//                            per seed, the core program without `IO.sleep`
//                            (generate.mjs withoutSleep), and the regressions
//                            that do not sleep.
//
//   node scripts/differential/run.mjs --lasm PATH/bin/lasm.mjs --lean-bin DIR --work NEW_DIR
//     [--seed N] [--programs N | --budget-min M] [--cases 120] [--fs-cases 25]
//     [--targets node,wasi,wasi-node,deno,interp,node-O0,wasi-O0,deno-O0,edge-node,edge-bun,edge-sm,
//                bun,bun-O0,browser-chromium,browser-firefox,browser-webkit]
//     [--profile release|dev] [--wasmtime PATH] [--deno PATH] [--bun PATH] [--sm PATH]
//     [--playwright DIR (holds node_modules/playwright-core)]
//     [--wrap "CMD ARGS --"] [--regressions DIR]
//     [--shrink-rounds 12] [--summary FILE.json]
//     [--feat-cases 80] [--feat-seeds S1,S2,...] [--feat-random 1|0]
//
// Feature programs (features.mjs, docs/TESTING.md#differential-fuzzing): one
// program of --feat-cases feature cases (type classes, inductives, closures of
// every arity, loops, structures, exceptions, signed and Float32 arithmetic,
// ByteArray, HashSet, TreeMap, panics) per seed, on every target. The seeds
// of --feat-seeds are replayed first (the pull-request tier's fixed set); with
// --feat-random 1 (the default) every seed of the run gets one too.
//
// Coverage feedback (coverage.mjs, docs/TESTING.md#coverage-feedback): with
// --guided 1, every program's runtime-C reach (from the oracle's Main.c) and the
// node target's glue coverage (V8) are measured; the cases that reach something
// new join a corpus, and a share (--mutant-share, 0.25) of each later core
// program's cases are mutants of corpus entries. --coverage-state FILE carries
// the features and the corpus from one campaign to the next (read at the start,
// written at the end). A guided program depends on the corpus, so it is
// reproduced from its Main.lean (kept with every reproducer), not from its seed.
//
// Exit status: 0 = no divergence, 1 = divergence (reproducers in WORK/repros), 2 = harness error.
// Upstream suspects (native vs interpreter) are in the summary and never change it.
import { spawn, spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync, rmSync, cpSync } from 'node:fs';
import { join, resolve, basename, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';
import * as g from './generate.mjs';
import { genFeatureProgram } from './features.mjs';
import * as cov from './coverage.mjs';

const argv = process.argv.slice(2);
const opt = (name, fallback) => { const i = argv.indexOf(name); return i < 0 ? fallback : argv[i + 1]; };
const has = name => argv.includes(name);
const lasm = opt('--lasm') && resolve(opt('--lasm'));
const leanBin = resolve(opt('--lean-bin', join(process.env.HOME ?? '', '.elan/toolchains/leanprover--lean4---v4.36.0-rc2/bin')));
const work = resolve(opt('--work', 'difftest-work'));
const seed0 = Number(opt('--seed', String(Date.now() % 1e9)));
const programs = Number(opt('--programs', '1'));
const budgetMs = Number(opt('--budget-min', '0')) * 60_000;
const nCases = Number(opt('--cases', '120'));
const nFsCases = Number(opt('--fs-cases', '25'));
const nFeatCases = Number(opt('--feat-cases', '80'));
const featSeeds = (opt('--feat-seeds', '') || '').split(',').filter(Boolean).map(Number);
const featRandom = opt('--feat-random', '1') !== '0';
const targets = opt('--targets', 'node,wasi,deno').split(',').filter(Boolean);
const profile = opt('--profile', 'release');
const wasmtime = opt('--wasmtime', 'wasmtime');
const deno = opt('--deno', 'deno');
const bun = opt('--bun', 'bun');
const sm = opt('--sm', 'js');
const playwrightDir = opt('--playwright') && resolve(opt('--playwright'));
const wrap = (opt('--wrap', '') || '').split(' ').filter(Boolean);
const regressionsDir = opt('--regressions');
const shrinkRounds = Number(opt('--shrink-rounds', '12'));
const summaryFile = opt('--summary', join(work, 'summary.json'));
const runTimeoutMs = Number(opt('--run-timeout-s', '120')) * 1000;
const guided = opt('--guided', '0') === '1';
const mutantShare = Number(opt('--mutant-share', '0.25'));
const coverageStateFile = opt('--coverage-state') && resolve(opt('--coverage-state'));
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
  // Guided: V8 block coverage of the glue (coverage.mjs), written at exit; it changes no output.
  node: { build: [], run: dir => [process.execPath, [join(dir, 'dist/main.mjs')], guided ? { NODE_V8_COVERAGE: join(dir, 'v8cov') } : undefined], fs: true },
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
  // The edge -O0 targets run the program with `deep` cases of at most 1,000
  // frames (program 'shallow'): clang -O0 keeps every local on the 1 MiB C
  // stack, which 3,000 frames overflow (the instance stops: "memory access out of
  // bounds"), a capacity limit of unoptimized code, not an optimizer difference.
  'deno-O0': { build: ['--target', 'deno'], variant: 'O0', buildEnv: unoptimized, program: 'shallow', run: dir => [deno, ['run', '-A', '--no-lock', join(dir, 'deno/main.mjs')]], fs: false, out: 'deno' },
  // Engine differential: one edge output (deno/main.mjs is portable) on V8 and JavaScriptCore.
  'edge-node': { build: ['--target', 'deno'], run: dir => [process.execPath, [...nodeJspi, '--no-warnings', join(dir, 'deno/main.mjs')]], fs: false, out: 'deno' },
  'edge-bun': { build: ['--target', 'deno'], run: dir => [bun, [join(dir, 'deno/main.mjs')]], fs: false, out: 'deno' },
  // SpiderMonkey's js shell (sm-runner.mjs): the shell's quit takes 0–127, so the
  // runner also writes the status to a file.
  'edge-sm': { build: ['--target', 'deno'], run: dir => [sm, ['-m', join(here, 'sm-runner.mjs')], { LASM_SM_RUN: JSON.stringify({ program: join(dir, 'deno/lasm'), env: { LEAN_BACKTRACE: '0' }, jspi: true, exitFile: 'exit-status' }) }], exitFile: 'exit-status', fs: false, out: 'deno' },
  // The Bun target as users build it: bun/main.mjs (the portable entry) on Bun.
  bun: { build: ['--target', 'bun'], run: dir => [bun, [join(dir, 'bun/main.mjs')]], fs: false, out: 'bun' },
  'bun-O0': { build: ['--target', 'bun'], variant: 'O0', buildEnv: unoptimized, program: 'shallow', run: dir => [bun, [join(dir, 'bun/main.mjs')]], fs: false, out: 'bun' },
  // The browser target, mounted with the public API in a headless browser
  // (browser-runner.mjs). Its own subdirectory: it writes dist/, as node does.
  // A page has no exit status (zeroOrNot); Firefox and WebKit run without JSPI
  // (program 'nosleep': the core program without IO.sleep).
  ...Object.fromEntries(['chromium', 'firefox', 'webkit'].map(browser => [`browser-${browser}`, {
    build: ['--target', 'browser', '--suspend', 'jspi'], variant: 'browser', out: 'browser', fs: false, zeroOrNot: true, noEnv: true, ...(browser !== 'chromium' ? { program: 'nosleep' } : {}),
    run: dir => [process.execPath, [join(here, 'browser-runner.mjs'), '--browser', browser, ...(playwrightDir ? ['--playwright', playwrightDir] : []), '--dist', join(dir, 'dist'), '--result', 'browser-result.json']],
  }])),
};
for (const t of targets) if (!TARGETS[t]) { console.error(`unknown target ${t}`); process.exit(2); }
// Variants of the core program for targets that name one (`program`): each is
// built natively and compared on its own, from the same seed and indices.
const PROGRAMS = { nosleep: g.withoutSleep, shallow: list => g.withDeepAtMost(list, 1000) };
// A page's outcome: main returned 0, or it did not (browser-runner.mjs).
const outcomeOf = code => code === 0 || code === 'timeout' ? code : 'non-zero';
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
    child.on('close', (code, signal) => { clearTimeout(timer); done({ code, signal, stdout: Buffer.concat(out).toString('utf8') + (outBytes >= 8e6 ? '\n[harness: stdout cut at 8 MB]\n' : ''), stderr: Buffer.concat(err).toString('utf8') + (errBytes >= 8e6 ? '\n[harness: stderr cut at 8 MB]\n' : '') + spawnError, timedOut, ms: Math.round(performance.now() - started) }); });
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
  // Lasm's Node runtime follows native Lean's stack overflow diagnostic with
  // three lines of advice (scripts/full-lean/emscripten-pre.js, issue #66).
  const stderr = r.stderr.replace(/\r\n/g, '\n')
    .replace(/(Stack overflow detected\. Aborting\.\n)Lasm: [^\n]*\n[^\n]*\nSee https:\/\/github\.com\/Millillion\/lasm\/blob\/main\/FUNDAMENTAL_LIMITATIONS\.md#recursion-depth\n/g, '$1')
    .split('\n').filter(l => !/^\S+\(\+0x[0-9a-f]+\) \[0x[0-9a-f]+\]$/.test(l)).join('\n');
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
  { issue: 'docs/EDGE.md#environment-variables (a page has no environment)', targets: ['browser-chromium', 'browser-firefox', 'browser-webkit'],
    what: 'a page has no environment, so LEAN_BACKTRACE=0 cannot be set and a panic prints a JavaScript/Wasm backtrace after its message (documented in docs/EDGE.md)',
    // A backtrace block: "backtrace:", then stack frames as V8 ("    at …"),
    // SpiderMonkey ("name@http://…:1:2", "@http://…wasm:wasm-function[n]:0x…",
    // "async*@debugger eval code …") and JavaScriptCore ("n@wasm-function[n]", "@") write them.
    apply: r => ({ ...r, stderr: r.stderr.replace(/^backtrace:\n(?:(?:[ \t]+at [^\n]*|[^\n@]*@(?:http:\/\/127\.0\.0\.1:\d+\/[^\n]*|wasm-function\[\d+\][^\n]*|debugger eval code[^\n]*|\[(?:wasm|native) code\])?|\(stack trace unavailable\))\n)*/gm, '') }) },
  { issue: 'docs/EDGE.md (IO.Process.exit fails: a page cannot exit)', targets: ['browser-chromium', 'browser-firefox', 'browser-webkit'],
    what: 'IO.Process.exit n stops the instance with "Lean called IO.Process.exit n; an edge isolate cannot exit" where native Lean exits with n',
    apply: (r, nat) => typeof nat?.code === 'number' && nat.code !== 0
      ? { ...r, stderr: r.stderr.replace(new RegExp(`^\\[lasm\\] the Lean instance stopped: Lean called IO\\.Process\\.exit ${nat.code}; an edge isolate cannot exit\\n`, 'm'), '') } : r },
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
function diverging(ids, nat, tgt, target) {
  if (TARGETS[target]?.zeroOrNot) { nat = { ...nat, code: outcomeOf(nat.code) }; tgt = { ...tgt, code: outcomeOf(tgt.code) }; }
  const a = byCase(nat.stdout), b = byCase(tgt.stdout);
  const ae = byCase(nat.stderr, true), be = byCase(tgt.stderr, true);
  // Compiled code evaluates every extracted closed term while the module
  // initializes, the interpreter only those it reaches, on first use: a closed
  // term that panics prints its message before the first case natively, and
  // inside its case, or never (an untaken branch), when interpreted. For the
  // interpreter, stderr is compared as a multiset of lines, without what native
  // Lean printed before the first case.
  if (target === 'interp') {
    const all = nat.stderr.split('\n'), first = all.findIndex(l => l.startsWith('@')), early = first < 0 ? [] : all.slice(0, first);
    // Native without its early lines; the interpreter may print each of them
    // once more than that (on first use) or not at all (never reached).
    const n = all.slice(early.length), t = tgt.stderr.split('\n');
    const count = (xs, x) => xs.filter(y => y === x).length;
    for (const e of early) { if (count(t, e) > count(n, e)) t.splice(t.indexOf(e), 1); }
    const bad = ids.filter(id => a.get(id) !== b.get(id));
    const stderr = n.sort().join('\n') !== t.sort().join('\n');
    return { bad, stderr, code: nat.code !== tgt.code, any: bad.length > 0 || stderr || nat.code !== tgt.code };
  }
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
    results[t] = r.buildFailed ? r : { run: r.run, diff: diverging(ids, nat, r.run, t) };
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
  const name = `r_${target.replace(/-/g, '_')}_${seed}_${item.c.kind === 'feat' ? 'f' : ''}${item.index}`;
  const dir = join(work, 'repros', name);
  mkdirSync(dir, { recursive: true });
  const program = g.renderProgram([{ ...item, name }], { ending });
  writeFileSync(join(dir, 'Main.lean'), program);
  writeFileSync(join(dir, `${name}.lean`), `-- Differential regression (docs/TESTING.md#differential-testing): ${target}, seed ${seed}, ${item.c.kind === 'feat' ? `feature case ${item.index} (${item.c.fam})` : `case ${item.index}`}${item.from ? ` (a coverage-guided mutant of seed ${item.from.seed} case ${item.from.index})` : ''}; main ends with "${(ending ?? '  return 0').trim()}" (see Main.lean).\n-- ${note.replace(/\n/g, ' ')}\n` + g.renderCase(item.c, name));
  writeFileSync(join(dir, 'case.json'), JSON.stringify({ target, seed, index: item.index, ...(item.from ? { mutantOf: item.from } : {}), case: item.c }, null, 1) + '\n');
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
const summary = { started: new Date().toISOString(), seed0, targets, profile, cases: nCases, fsCases: nFsCases, featCases: nFeatCases, featSeeds, programs: [], divergences: [], upstreamSuspects: [], harnessErrors: [] };
const save = () => writeFileSync(summaryFile, JSON.stringify(summary, null, 2) + '\n');
const startedAt = Date.now();
const coverageState = guided ? cov.loadState(coverageStateFile) : null;
const coverage = guided ? new cov.Coverage(coverageState) : null;
if (guided) console.log(`coverage feedback: ${coverageState.loaded ? `state of earlier campaigns read (${coverageState.features.length} features, ${coverageState.corpus.length} corpus cases${coverageState.droppedCorpus ? `; ${coverageState.droppedCorpus} dropped: the generator changed` : ''})` : 'no earlier state'}`);
// The core program of a seed, built once and shared by its variants (nosleep,
// shallow): guided, its last cases are mutants of the corpus as it is now.
const coreLists = new Map();
function coreList(seed) {
  if (coreLists.has(seed)) return coreLists.get(seed);
  const list = g.genProgram(seed, { cases: nCases });
  if (coverage && list.length) {
    const ms = cov.mutants(coverage, seed, Math.round(list.length * mutantShare));
    ms.forEach((m, j) => { const at = list.length - ms.length + j; list[at] = { index: list[at].index, c: m.c, from: m.from }; });
    coverage.mutants += ms.length;
  }
  coreLists.clear(); coreLists.set(seed, list);
  return list;
}
// What a program reached; the cases that reached something new join the corpus.
function measure(dir, list, seed, kind, rec) {
  const c = existsSync(join(dir, 'Main.c')) ? readFileSync(join(dir, 'Main.c'), 'utf8') : '';
  const names = list.map(({ index, name }) => name ?? `c${index}`);
  const feats = cov.cFeatures(c, names.map(cov.cName));
  let fresh = 0;
  list.forEach((item, i) => { fresh += coverage.add(feats.get(cov.cName(names[i])) ?? new Set(), { seed, index: item.index, kind, c: item.c, ...(item.from ? { from: item.from } : {}) }).length; });
  const glue = coverage.add(cov.glueFeatures(join(dir, 'v8cov'), dir), null).length;
  rec.coverage = { newRuntimeC: fresh, newGlue: glue, mutants: list.filter(x => x.from).length };
}

async function campaignProgram(seed, kind) {
  // core: the targets without a `program`; fs: the targets with a file system;
  // a PROGRAMS name: the core program transformed, for the targets that name it;
  // feat: the feature program, on every target (it has no file system, no
  // sleep, no environment, and no recursion deeper than 500 frames).
  const fsProgram = kind === 'fs';
  const tlist = kind === 'feat' ? targets : targets.filter(t => fsProgram ? TARGETS[t].fs : (TARGETS[t].program ?? 'core') === kind);
  if (!tlist.length) return;
  const list = kind === 'feat' ? genFeatureProgram(seed, { cases: nFeatCases })
    : fsProgram ? g.genProgram(seed, { cases: nFsCases, kinds: ['fs', 'io'] })
    : (PROGRAMS[kind] ?? (x => x))(coreList(seed));
  if (!list.length) return; // --cases 0 / --fs-cases 0: no program of that kind
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
  // Measured on the programs of their own (core, fs, feat), not on the variants of the core program.
  if (coverage && !PROGRAMS[kind]) measure(dir, list, seed, kind, rec);
  // Native Lean itself took a tenth of the run timeout or more: the generator
  // broke its own bound (a power tower of bignums, in campaign 42572268410),
  // and a slower target (bignums without GMP) would only time out. Nothing to
  // compare: a generator error naming the case that was running.
  if (ev.nat.code === 'timeout' || ev.nat.ms > runTimeoutMs / 10) {
    rec.native = ev.nat.code === 'timeout' ? 'timeout' : `slow (${ev.nat.ms} ms)`;
    const lastCase = ev.nat.stderr.match(/^@(\S+)$/gm)?.pop() ?? 'no case';
    summary.harnessErrors.push({ seed, kind, error: `the native run took ${ev.nat.code === 'timeout' ? 'longer than the timeout' : `${ev.nat.ms} ms`} (a generator bound is too loose)`, lastCase });
    console.log(`seed ${seed} ${kind}: GENERATOR ERROR (native run ${rec.native}; last case started: ${lastCase})`);
    save();
    return;
  }
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
      if (item.from) small = { ...small, from: item.from };
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
      // A guided program holds mutants of the corpus: its Main.lean, not its seed, reproduces it.
      sink.push({ seed, kind, target: t, cases: ids, what: 'diverges only in combination with other cases', repro: combo, reproduce: list.some(x => x.from) ? `${combo}/Main.lean (a coverage-guided program)` : `--seed ${seed} --programs 1` });
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
  // Which regressions a target replays: the file-system ones only where there
  // is a file system; none that sleep where IO.sleep cannot wait (program
  // 'nosleep'), none that read the environment where there is none (noEnv).
  // Targets that replay the same set share one program.
  const fits = (t, r) => !(/IO\.sleep/.test(r.text) && TARGETS[t].program === 'nosleep') && !(/IO\.getEnv/.test(r.text) && TARGETS[t].noEnv);
  const groups = [];
  for (const fsGroup of [false, true]) {
    const all = regs.filter(r => fsNames.includes(r.name) === fsGroup);
    const sets = new Map();
    for (const t of targets.filter(t => !fsGroup || TARGETS[t].fs)) {
      const names = all.filter(r => fits(t, r)).map(r => r.name).join(',');
      if (names) sets.set(names, [...(sets.get(names) ?? []), t]);
    }
    [...sets].forEach(([names, tlist], n) => groups.push({ name: (fsGroup ? 'fs' : 'core') + (n ? `-${n + 1}` : ''), group: all.filter(r => names.split(',').includes(r.name)), tlist }));
  }
  for (const { name, group, tlist } of groups) {
    const d = join(dir, name);
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
      const diff = diverging(ids, nat, r, t);
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
  if (nFeatCases > 0) for (const seed of featSeeds) await campaignProgram(seed, 'feat');
  for (let i = 0; ; i++) {
    if (budgetMs ? Date.now() - startedAt > budgetMs : i >= programs) break;
    const seed = seed0 + i;
    await campaignProgram(seed, 'core');
    if (nFsCases > 0) await campaignProgram(seed, 'fs');
    for (const kind of Object.keys(PROGRAMS)) await campaignProgram(seed, kind);
    if (nFeatCases > 0 && featRandom) await campaignProgram(seed, 'feat');
  }
} catch (e) {
  summary.harnessErrors.push({ error: String(e?.stack ?? e) });
  console.error(e);
}
summary.finished = new Date().toISOString();
summary.buildMs = Object.fromEntries(builtTargets);
if (coverage) {
  summary.coverage = coverage.summary();
  const night = { date: summary.started.slice(0, 10), seed0, profile, programs: summary.programs.length, features: summary.coverage.features, new: summary.coverage.new, cumulative: summary.coverage.cumulative, newFromMutants: summary.coverage.newFrom.mutant };
  summary.coverage.nights = [...coverage.nights, night].slice(-14);
  if (coverageStateFile) { mkdirSync(dirname(coverageStateFile), { recursive: true }); writeFileSync(coverageStateFile, JSON.stringify(coverage.state(coverageState.generator, night)) + '\n'); }
}
summary.knownDivergences = KNOWN.map(k => ({ issue: k.issue, targets: k.targets, what: k.what, applied: knownApplied[k.issue] ?? 0 }));
save();
const realDivergences = summary.divergences.length;
if (coverage) {
  const k = summary.coverage;
  // The evidence page reads this line (scripts/evidence/page.mjs parse.differential).
  console.log(`\ncoverage growth by campaign: ${k.nights.map(n => `${n.date} +${n.new} (${n.cumulative})`).join(', ')}`);
  console.log(`coverage: ${k.features} features (${k.runtimeC} runtime C, ${k.glue} glue), ${k.new} new (${k.newRuntimeC} runtime C, ${k.newGlue} glue; ${k.newFrom.mutant} from mutants, ${k.newFrom.generated} from generated cases), ${k.cumulative} in all campaigns, corpus ${k.corpus} cases, ${k.mutants} mutants run`);
}
console.log(`\n${summary.programs.length} programs, ${summary.programs.reduce((s, p) => s + p.cases, 0)} cases, ${realDivergences} divergences, ${summary.upstreamSuspects.length} upstream suspects (native vs interpreter, not Lasm), ${summary.harnessErrors.length} harness errors (summary: ${summaryFile})`);
process.exit(realDivergences ? 1 : summary.harnessErrors.length ? 2 : 0);
