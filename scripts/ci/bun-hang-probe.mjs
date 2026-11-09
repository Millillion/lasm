// TEMPORARY (issue #126): loops the edge-O0-bun overflow of stack-depth.mjs to
// measure how often Bun hangs after a stack overflow, and captures where.
//   node scripts/ci/bun-hang-probe.mjs --lasm PATH --bun PATH[,PATH…] --work DIR [--iterations N] [--timeout-ms MS]
import { spawn, spawnSync } from 'node:child_process';
import { mkdirSync, readFileSync, rmSync, writeFileSync, appendFileSync, existsSync } from 'node:fs';
import { join, resolve } from 'node:path';

const argv = process.argv.slice(2);
const opt = (name, fallback) => { const i = argv.indexOf(name); return i < 0 ? fallback : argv[i + 1]; };
const lasm = resolve(opt('--lasm'));
const buns = opt('--bun').split(',');
const work = resolve(opt('--work', '.work/bun-hang'));
const iterations = Number(opt('--iterations', '100'));
const timeoutMs = Number(opt('--timeout-ms', '20000'));
const modes = opt('--modes', 'sum').split(',');
const variants = opt('--variants', 'O0').split(',');
const env = { ...process.env, CI: '1', BROWSER: 'none', LASM_EDITOR: '0', LEAN_BACKTRACE: '0', NO_COLOR: '1' };
const log = (...a) => { console.log(...a); if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, a.join(' ') + '\n\n'); };

rmSync(work, { recursive: true, force: true });
mkdirSync(work, { recursive: true });
const program = readFileSync(new URL('./stack-depth.mjs', import.meta.url), 'utf8').match(/writeFileSync\(join\(work, 'Main\.lean'\), `([\s\S]*?)`\);/)[1];
for (const v of variants) {
  const dir = join(work, v); mkdirSync(dir, { recursive: true });
  writeFileSync(join(dir, 'Main.lean'), program);
  const b = spawnSync(process.execPath, [lasm, 'build', 'Main.lean', '--target', 'deno'], { cwd: dir, env: { ...env, ...(v === 'O0' ? { LASM_TEST_UNOPTIMIZED: '1' } : {}) }, encoding: 'utf8', timeout: 30 * 60_000 });
  if (b.status !== 0) { console.error(b.stdout + b.stderr); process.exit(1); }
}
const sh = (cmd) => spawnSync('bash', ['-c', cmd], { encoding: 'utf8', timeout: 120_000 }).stdout ?? '';

function runOnce(bun, v, args, timeout, diagnose) {
  return new Promise(done => {
    const started = performance.now();
    const child = spawn(bun, [join(work, v, 'deno/main.mjs'), ...args], { cwd: work, env, stdio: ['ignore', 'pipe', 'pipe'] });
    let stdout = '', stderr = '', hung = false, diag = '';
    child.stdout.on('data', d => { stdout += d; }); child.stderr.on('data', d => { stderr += d; });
    const timer = setTimeout(() => {
      hung = true;
      if (diagnose) {
        const pid = child.pid;
        diag += `--- after ${timeout} ms (pid ${pid})\n`;
        diag += sh(`ps -L -o pid,lwp,stat,pcpu,time,wchan:32,comm -p ${pid}`);
        diag += sh(`sleep 2; ps -L -o pid,lwp,stat,pcpu,time,wchan:32,comm -p ${pid}`);
        diag += sh(`for t in /proc/${pid}/task/*; do echo "$t $(cat $t/comm) $(cut -d' ' -f3 $t/stat) syscall: $(sudo cat $t/syscall 2>/dev/null | cut -c1-60)"; done`);
        diag += sh(`grep -E 'VmRSS|VmSize|Threads' /proc/${pid}/status`);
        diag += sh(`sudo gdb -p ${pid} -batch -ex 'set pagination off' -ex 'info threads' -ex 'thread apply all bt 40' 2>&1 | grep -v '^\\[New LWP' | head -400`);
      }
      child.kill('SIGKILL');
    }, timeout);
    child.on('close', (code, signal) => { clearTimeout(timer); done({ code, signal, hung, stdout, stderr, diag, ms: Math.round(performance.now() - started) }); });
  });
}

const ok = r => r.code === 0 && /^\d+\n$/.test(r.stdout);
const results = {};
for (const bun of buns) {
  const version = spawnSync(bun, ['--version'], { encoding: 'utf8' }).stdout.trim() + (bun.includes('profile') ? ' (profile)' : '');
  log(`## Bun ${version} (${bun}); JSPI: ${spawnSync(bun, ['-e', 'console.log(typeof WebAssembly.Suspending)'], { encoding: 'utf8' }).stdout.trim()}`);
  for (const v of variants) for (const mode of modes) {
    let lo = 100, hi = 50_000;
    const first = await runOnce(bun, v, [mode, String(lo)], 60_000, false);
    if (!ok(first)) { log(`${v} ${mode}: ${lo} fails: ${JSON.stringify(first).slice(0, 400)}`); continue; }
    while (hi - lo > lo / 50 + 1) { const mid = Math.floor((lo + hi) / 2); if (ok(await runOnce(bun, v, [mode, String(mid)], 60_000, false))) lo = mid; else hi = mid; }
    const n = Math.ceil(lo * 1.1) + 10;
    // A sweep: n from 0.9 × the limit to 2 × it, plus the issue's 8588 for sum.
    const ns = Array.from({ length: iterations }, (_, i) => Math.round(lo * (0.9 + 1.1 * i / iterations)));
    if (mode === 'sum') ns.push(8588, 8588, 8588, 1000000, 1000000);
    let hangs = 0, captured = 0, other = 0; const times = [], hungAt = [];
    for (let i = 0; i < ns.length; i++) {
      const r = await runOnce(bun, v, [mode, String(ns[i])], timeoutMs, captured < 2);
      if (r.hung) hungAt.push(ns[i]);
      if (!r.hung && ok(r)) continue;
      if (r.hung) {
        hangs++;
        if (captured < 2) { captured++; log(`### hang ${hangs} (${v} ${mode} ${ns[i]}, iteration ${i}); stdout ${JSON.stringify(r.stdout)} stderr ${JSON.stringify(r.stderr.slice(0, 500))}\n\n\`\`\`\n${r.diag}\n\`\`\``); }
      } else {
        times.push(r.ms);
        if (!(r.code === 1 && r.stdout === '' && r.stderr.startsWith('[lasm] the Lean instance stopped: '))) { other++; if (other <= 3) log(`unexpected (${v} ${mode} ${ns[i]}): ${JSON.stringify({ code: r.code, signal: r.signal, stderr: r.stderr.slice(0, 300) })}`); }
        else if (i < 1) log(`first stop (${v} ${mode} ${n}): ${JSON.stringify(r.stderr.slice(0, 300))}`);
      }
    }
    times.sort((a, b) => a - b);
    const line = `**${version} ${v} ${mode}**: deepest ${lo}, n ${ns[0]}..${ns[iterations - 1]}: ${hangs}/${ns.length} hangs at ${JSON.stringify(hungAt)}, ${other} unexpected; stop ms median ${times[times.length >> 1]} max ${times[times.length - 1]}`;
    log(line);
    results[`${version} ${v} ${mode}`] = { deepest: lo, hungAt, runs: ns.length, other };
  }
}
writeFileSync(join(work, 'results.json'), JSON.stringify(results, null, 2));
