// Async loop depth on each server engine (issue #90; docs/BUN_DENO.md and
// docs/EDGE.md, "Async loops"). On the portable single-threaded runtime (Bun,
// Deno, the edge targets, browsers) a step of an `Async` loop that completes at
// once (a synchronous host call, plain IO, `pure`) used to continue the loop
// inside the same JavaScript call, so N such steps nested frames on the JS stack
// and about 1,900-8,100 overflowed it. Lasm's link now bounds that nesting
// (library/c/lasm_async.c): every step kind must reach N = 1,000,000.
//
// One Lasm.Fetch app, built for each target with an installed Lasm CLI and served
// locally (workerd through `wrangler dev`, offline; CI only), answers
//   GET /loop?n=N&mode=await|sync|awaitsync|io|pure&k=K&pause=sleep0|sleep1|iosleep0
// by running N steps one after another in `Async`: `await Promise.resolve(1)`
// (await), `Math.abs(1)` (sync), `await Math.abs(1)` (awaitsync), an IO action
// (io) or `pure 1` (pure), with `pause` after every K-th step (k=0: never). Checks:
//   - an await of a promise completes N = 100,000 on every target;
//   - every other mode completes N = 100,000 and (except awaitsync, which resumes
//     from a fresh stack like a promise) N = 1,000,000 without pausing, on every target;
//   - the former workaround, `Std.Async.sleep 0` every 100 steps, still completes
//     N = 100,000 in every mode on every target.
// The results are written to OUT (JSON) and the job summary.
//   node scripts/ci/async-depth.mjs --lasm PATH/bin/lasm.mjs --work DIR [--out FILE.json]
//     [--targets node,deno,bun,workers] [--deno PATH] [--bun PATH] [--wrangler PATH]
import { spawn, spawnSync } from 'node:child_process';
import { mkdirSync, rmSync, writeFileSync } from 'node:fs';
import { request } from 'node:http';
import { createServer } from 'node:net';
import { dirname, join, resolve } from 'node:path';
import { headlessEnvironment } from '../edge/headless.mjs';

const argv = process.argv.slice(2);
const opt = (name, fallback) => { const i = argv.indexOf(name); return i < 0 ? fallback : argv[i + 1]; };
const lasm = opt('--lasm') && resolve(opt('--lasm'));
if (!lasm) { console.error('--lasm PATH/bin/lasm.mjs is required'); process.exit(2); }
const work = resolve(opt('--work', '.work/async-depth'));
const out = resolve(opt('--out', join(work, 'async-depth.json')));
const targets = opt('--targets', 'node').split(',').filter(Boolean);
const tools = { deno: opt('--deno', 'deno'), bun: opt('--bun', 'bun'), wrangler: opt('--wrangler', 'wrangler') };
const env = headlessEnvironment(process.env, { LASM_EDITOR: '0', LEAN_BACKTRACE: '0' });

const BIG = 100_000, HUGE = 1_000_000, EVERY = 100;
// Steps that complete at once (await of a promise is checked separately).
const MODES = ['sync', 'awaitsync', 'io', 'pure'];

rmSync(work, { recursive: true, force: true });
mkdirSync(work, { recursive: true });
writeFileSync(join(work, 'Main.lean'), `import Std.Async
import Lasm.Fetch
import Lasm.JS
open Lasm.Fetch

/-- \`n\` host calls one after another in \`Async\`, \`pause\` after every \`k\`-th (\`k = 0\`: never). -/
def loop (call : Async Nat) (pause : Async Unit) (k : Nat) : Nat → Nat → Async Nat
  | 0, acc => pure acc
  | n + 1, acc => do
    let v ← call
    if k > 0 && (n + 1) % k == 0 then pause
    loop call pause k n (acc + v)

-- The documentation's workaround (docs/EDGE.md, docs/BUN_DENO.md), built here so it keeps compiling.
def runAll (db : Lasm.JS.Value) (i : Nat := 0) : List String → Async Unit
  | [] => pure ()
  | sql :: rest => do
    let _ ← db.callMethod "run" #[.string sql] Lasm.JS.Data
    if i % 100 == 99 then Std.Async.sleep 0   -- yield to the event loop
    runAll db (i + 1) rest

def handle (req : Request) : Async Response := do
  match req.method, req.segments with
  | "GET", ["loop"] =>
    let q (name d : String) : String := (req.queryParam? name).getD d
    let n := (q "n" "0").toNat!
    let k := (q "k" "0").toNat!
    let g ← Lasm.JS.global
    let promise ← g.get "Promise" Lasm.JS.Value
    let math ← g.get "Math" Lasm.JS.Value
    let call : Async Nat := match q "mode" "await" with
      -- await Math.abs(1): an await of a value that is not a promise.
      | "awaitsync" => math.callMethodAwait "abs" #[.number 1] Nat
      -- Math.abs(1), synchronous.
      | "sync" => monadLift (math.callMethod "abs" #[.number 1] Nat : IO Nat)
      -- No host call: an IO action, or a pure value.
      | "io" => monadLift (do let _ ← IO.monoNanosNow; pure 1 : IO Nat)
      | "pure" => pure 1
      -- await Promise.resolve(1).
      | _ => promise.callMethodAwait "resolve" #[.number 1] Nat
    let pause : Async Unit := match q "pause" "sleep0" with
      | "sleep1" => Std.Async.sleep 1
      | "iosleep0" => monadLift (IO.sleep 0 : IO Unit)
      | _ => Std.Async.sleep 0
    try
      let sum ← loop call pause k n 0
      return .json s!"\\{\\"sum\\":{sum}}"
    catch e => return Response.text s!"error: {e}\\n" 500
  | _, _ => return .json "{\\"ready\\":true}"

def main : IO Unit := serve handle
`);

const TARGETS = {
  node: { build: [], serve: port => [process.execPath, ['dist/main.mjs'], { PORT: String(port), HOST: '127.0.0.1' }] },
  deno: { build: ['--target', 'deno'], tool: 'deno', serve: port => [tools.deno, ['run', '-A', '--no-lock', 'deno/main.mjs'], { PORT: String(port) }] },
  bun: { build: ['--target', 'bun'], tool: 'bun', serve: port => [tools.bun, ['bun/main.mjs'], { PORT: String(port) }] },
  // CI only (never run platform CLIs locally): workerd through wrangler dev, offline.
  workers: { build: ['--target', 'workers'], tool: 'wrangler', serve: port => [tools.wrangler, ['dev', '--cwd', 'workers', '--port', String(port), '--ip', '127.0.0.1', '--show-interactive-dev-session=false'], {}] },
};
for (const t of targets) if (!TARGETS[t]) { console.error(`unknown target ${t}`); process.exit(2); }

const freePort = () => new Promise((ok, fail) => { const s = createServer(); s.once('error', fail); s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => ok(port)); }); });
function get(port, path, timeoutMs = 300_000) {
  return new Promise((ok, fail) => {
    const r = request({ host: '127.0.0.1', port, method: 'GET', path, headers: { connection: 'close' }, timeout: timeoutMs, agent: false }, res => {
      const chunks = [];
      res.on('data', c => chunks.push(c));
      res.on('end', () => ok({ status: res.statusCode, body: Buffer.concat(chunks).toString('utf8') }));
      res.on('error', fail);
    });
    r.on('timeout', () => r.destroy(new Error('timeout')));
    r.on('error', fail);
    r.end();
  });
}

const failures = [];
const report = { host: `${process.platform}-${process.arch}`, node: process.version, targets: {} };
const expect = (target, name, ok, detail) => {
  (report.targets[target].checks ??= []).push({ name, ok: !!ok, detail });
  console.log(`${ok ? 'ok  ' : 'FAIL'} ${target}: ${name}${detail ? ` (${detail})` : ''}`);
  if (!ok) failures.push(`${target}: ${name}: ${detail}`);
};

for (const target of targets) {
  report.targets[target] = {};
  const t = TARGETS[target];
  if (t.tool && spawnSync(tools[t.tool], ['--version']).status !== 0) { expect(target, `${tools[t.tool]} is installed`, false, 'missing'); continue; }
  const b = spawnSync(process.execPath, [lasm, 'build', 'Main.lean', ...t.build], { cwd: work, env, encoding: 'utf8', timeout: 40 * 60_000 });
  if (b.status !== 0) { expect(target, 'builds', false, (b.stdout + b.stderr).slice(-3000)); continue; }
  const port = await freePort();
  const [cmd, args, extra] = t.serve(port);
  const logs = [];
  const child = spawn(cmd, args, { cwd: work, env: { ...env, ...extra }, stdio: ['ignore', 'pipe', 'pipe'], detached: process.platform !== 'win32' });
  child.stdout.on('data', d => logs.push(String(d))); child.stderr.on('data', d => logs.push(String(d)));
  const logTail = () => logs.join('').slice(-1500);
  try {
    const until = Date.now() + 120_000;
    for (;;) {
      if (child.exitCode !== null) throw new Error(`server exited (${child.exitCode}):\n${logTail()}`);
      try { if ((await get(port, '/', 2000)).status === 200) break; } catch {}
      if (Date.now() > until) throw new Error(`server not ready after 120 s:\n${logTail()}`);
      await new Promise(r => setTimeout(r, 250));
    }
    const probe = async (n, query = '') => {
      const started = performance.now();
      let r;
      try { r = await get(port, `/loop?n=${n}${query}`); } catch (e) { r = { status: 0, body: String(e.message) }; }
      return { ok: r.status === 200 && r.body === `{"sum":${n}}`, status: r.status, body: r.body.slice(0, 400), ms: Math.round(performance.now() - started) };
    };
    const r = report.targets[target];
    // await Promise.resolve(1) settles on a later microtask: no limit is expected.
    const awaited = await probe(BIG, '&mode=await&k=0');
    r.await = { [BIG]: awaited };
    expect(target, `await of a promise: ${BIG.toLocaleString('en-US')} calls without pausing`, awaited.ok, JSON.stringify(awaited));
    // Steps that complete at once: no limit since #90's fix (library/c/lasm_async.c).
    for (const mode of MODES) for (const n of mode === 'awaitsync' ? [BIG] : [BIG, HUGE]) {
      const result = await probe(n, `&mode=${mode}&k=0`);
      (r[mode] ??= {})[n] = result;
      console.log(`${target}: ${n} ${mode} steps: ${result.ok ? 'ok' : 'fails'} in ${result.ms} ms ${result.ok ? '' : result.body.split('\n')[0]}`);
      expect(target, `${mode}: ${n.toLocaleString('en-US')} steps without pausing`, result.ok, JSON.stringify(result));
    }
    // The workaround: yield to the event loop every EVERY steps.
    for (const mode of MODES) for (const pause of ['sleep0', 'sleep1', 'iosleep0']) {
      const w = await probe(BIG, `&mode=${mode}&k=${EVERY}&pause=${pause}`);
      ((r.pause ??= {})[mode] ??= {})[pause] = w;
      console.log(`${target}: ${BIG} ${mode} steps, ${pause} every ${EVERY}: ${w.ok ? 'ok' : 'fails'} in ${w.ms} ms ${w.ok ? '' : w.body.split('\n')[0]}`);
    }
    for (const mode of MODES)
      expect(target, `${mode}: ${BIG.toLocaleString('en-US')} steps with Std.Async.sleep 0 every ${EVERY}`, r.pause[mode].sleep0.ok, JSON.stringify(r.pause[mode].sleep0));
  } catch (e) {
    expect(target, 'serves', false, String(e.message).slice(0, 3000));
  } finally {
    try { process.platform === 'win32' ? child.kill() : process.kill(-child.pid, 'SIGTERM'); } catch {}
  }
}
report.failures = failures;
mkdirSync(dirname(out), { recursive: true });
writeFileSync(out, JSON.stringify(report, null, 2) + '\n');
const cell = (r, mode) => [BIG, HUGE].map(n => r?.[mode]?.[n] ? (r[mode][n].ok ? `${r[mode][n].ms} ms` : 'fails') : '—').join(' / ');
const pauses = r => MODES.map(m => ['sleep0', 'sleep1', 'iosleep0'].map(p => r.pause?.[m]?.[p] ? (r.pause[m][p].ok ? 'ok' : 'fails') : '—').join('/')).join(', ');
const table = `| Target | await Promise.resolve(1) | ${MODES.join(' | ')} | ${BIG} steps, sleep 0 / sleep 1 / IO.sleep 0 every ${EVERY} (${MODES.join(', ')}) |\n| --- | --- | ${MODES.map(() => '---').join(' | ')} | --- |\n`
  + Object.entries(report.targets).map(([t, r]) => `| ${t} | ${cell(r, 'await')} | ${MODES.map(m => cell(r, m)).join(' | ')} | ${pauses(r)} |`).join('\n');
console.log(`\n${table}\n\n${failures.length} failures.`);
if (process.env.GITHUB_STEP_SUMMARY) writeFileSync(process.env.GITHUB_STEP_SUMMARY, `### Async loop depth (issue #90)\n\nTime for N = ${BIG} / ${HUGE} steps one after another in \`Async\`, in one Lasm.Fetch request (await: ${BIG} only):\n\n${table}\n\n${failures.length} failures.\n`, { flag: 'a' });
process.exit(failures.length ? 1 : 0);
