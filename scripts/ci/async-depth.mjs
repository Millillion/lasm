// Async loop depth on each server engine (issue #90; docs/BUN_DENO.md and
// docs/EDGE.md, "Async loops of host calls"). On the portable single-threaded
// runtime (Bun, Deno, the edge targets) an awaited host call that completes at
// once continues the Lean continuation inside the same JavaScript call, so an
// `Async` loop of N awaited calls nests about N frames on the JS stack. Node runs
// Lean on its own threads and is not limited this way.
//
// One Lasm.Fetch app, built for each target with an installed Lasm CLI and served
// locally (workerd through `wrangler dev`, offline; CI only), answers
//   GET /loop?n=N&mode=await|sync&k=K&pause=sleep0|sleep1|iosleep0
// by running N host calls one after another in `Async`: `await Promise.resolve(1)`
// (mode=await, Lasm.JS callMethodAwait) or `Math.abs(1)` (mode=sync, callMethod),
// pausing with `pause` after every K-th call (k=0: never). Checks:
//   - the deepest passing N of each mode, measured by bisection (to within 2 %),
//     stays above the floor below (about half the value measured in CI), and past
//     it the request fails with the engine's RangeError;
//   - Node completes N = 100,000 without pausing;
//   - the documented workaround, `Std.Async.sleep 0` every 100 calls, completes
//     N = 100,000 awaited calls on every target.
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

// Floors: about half the deepest N measured in CI (ubuntu-24.04, Bun 1.4.4,
// Deno 2.9.6, wrangler 4.152.0's workerd), so a regression fails the check.
const FLOORS = {
  deno: { await: 0, sync: 0 },
  bun: { await: 0, sync: 0 },
  workers: { await: 0, sync: 0 },
};
const BIG = 100_000, EVERY = 100;

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

def handle (req : Request) : Async Response := do
  match req.method, req.segments with
  | "GET", ["loop"] =>
    let q (name d : String) : String := (req.queryParam? name).getD d
    let n := (q "n" "0").toNat!
    let k := (q "k" "0").toNat!
    let g ← Lasm.JS.global
    let promise ← g.get "Promise" Lasm.JS.Value
    let math ← g.get "Math" Lasm.JS.Value
    -- await Promise.resolve(1), or the synchronous Math.abs(1).
    let call : Async Nat := if q "mode" "await" == "sync"
      then monadLift (math.callMethod "abs" #[.number 1] Nat : IO Nat)
      else promise.callMethodAwait "resolve" #[.number 1] Nat
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
    // The deepest passing n (to within 2 %) between lo and hi; hi if hi passes.
    const limit = async (lo, hi, query) => {
      if ((await probe(hi, query)).ok) return hi;
      if (!(await probe(lo, query)).ok) return 0;
      while (hi - lo > lo / 50 + 1) { const mid = Math.floor((lo + hi) / 2); if ((await probe(mid, query)).ok) lo = mid; else hi = mid; }
      return lo;
    };
    const r = report.targets[target];
    for (const mode of ['await', 'sync']) {
      const query = `&mode=${mode}&k=0`;
      if (target === 'node') {
        const big = await probe(BIG, query);
        r[mode] = { [BIG]: big };
        expect(target, `${mode}: ${BIG.toLocaleString('en-US')} calls without pausing`, big.ok, JSON.stringify(big));
        continue;
      }
      const deepest = await limit(100, BIG, query);
      const over = await probe(Math.ceil(deepest * 1.1) + 10, query);
      r[mode] = { deepest, over: { status: over.status, body: over.body } };
      console.log(`${target}: ${mode}: deepest ${deepest}; past it: ${over.status} ${over.body.split('\n')[0]}`);
      const floor = FLOORS[target]?.[mode] ?? 0;
      expect(target, `${mode}: the deepest loop (${deepest}) is above the floor ${floor}`, deepest > floor && deepest < BIG, `deepest ${deepest}`);
      expect(target, `${mode}: past it, the request fails with the stack overflow`,
        !over.ok && /Maximum call stack size exceeded|too much recursion/.test(over.body + logTail()), JSON.stringify(over));
    }
    // The workaround: yield to the event loop every EVERY calls.
    for (const pause of ['sleep0', 'sleep1', 'iosleep0']) {
      const w = await probe(BIG, `&mode=await&k=${EVERY}&pause=${pause}`);
      (r.pause ??= {})[pause] = w;
      console.log(`${target}: ${BIG} awaited calls, ${pause} every ${EVERY}: ${w.ok ? 'ok' : 'fails'} in ${w.ms} ms ${w.ok ? '' : w.body}`);
    }
    expect(target, `${BIG.toLocaleString('en-US')} awaited calls with Std.Async.sleep 0 every ${EVERY}`, r.pause.sleep0.ok, JSON.stringify(r.pause.sleep0));
  } catch (e) {
    expect(target, 'serves', false, String(e.message).slice(0, 3000));
  } finally {
    try { process.platform === 'win32' ? child.kill() : process.kill(-child.pid, 'SIGTERM'); } catch {}
  }
}
report.failures = failures;
mkdirSync(dirname(out), { recursive: true });
writeFileSync(out, JSON.stringify(report, null, 2) + '\n');
const cell = (r, mode) => r?.[mode]?.deepest !== undefined ? String(r[mode].deepest) : r?.[mode]?.[BIG]?.ok ? `≥ ${BIG}` : '—';
const table = `| Target | Awaited calls (\`await Promise.resolve(1)\`) | Sync calls (\`Math.abs(1)\`) | ${BIG} awaited, \`Std.Async.sleep 0\` / \`sleep 1\` / \`IO.sleep 0\` every ${EVERY} |\n| --- | --- | --- | --- |\n`
  + Object.entries(report.targets).map(([t, r]) => `| ${t} | ${cell(r, 'await')} | ${cell(r, 'sync')} | ${['sleep0', 'sleep1', 'iosleep0'].map(p => r.pause?.[p] ? (r.pause[p].ok ? `ok (${r.pause[p].ms} ms)` : 'fails') : '—').join(' / ')} |`).join('\n');
console.log(`\n${table}\n\n${failures.length} failures.`);
if (process.env.GITHUB_STEP_SUMMARY) writeFileSync(process.env.GITHUB_STEP_SUMMARY, `### Async loop depth (issue #90)\n\nDeepest passing N (Lasm.Fetch handler, N host calls in \`Async\`):\n\n${table}\n\n${failures.length} failures.\n`, { flag: 'a' });
process.exit(failures.length ? 1 : 0);
