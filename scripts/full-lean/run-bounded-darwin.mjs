// Native macOS maintainer monitor. macOS has no cgroup/Job Object aggregate
// memory cap: this is proactive process-tree accounting, explicitly NOT a hard
// kernel limit. Run one workload, stop below its RSS budget, and keep host/disk
// reserves. PID birth stamps avoid targeting reused PIDs during cleanup.
import assert from 'node:assert/strict';
import { mkdirSync, existsSync, writeFileSync, rmSync, renameSync } from 'node:fs';
import { dirname, resolve } from 'node:path';
import { spawn } from 'node:child_process';
import { randomUUID } from 'node:crypto';
import { darwinMemory, darwinProcesses, workloadProcesses } from './darwin-resources.mjs';

assert.equal(process.platform, 'darwin');
const args = process.argv.slice(2), separator = args.indexOf('--');
assert.ok(separator >= 0 && separator < args.length - 1, 'Supply -- COMMAND [ARGS...]');
const options = args.slice(0, separator), allowed = ['--memory-mib', '--report'];
for (let i = 0; i < options.length; i += 2) assert.ok(allowed.includes(options[i]) && options[i + 1]);
const option = (name, fallback) => options.includes(name) ? options[options.indexOf(name) + 1] : fallback;
const requested = Number(option('--memory-mib', '4096'));
assert.ok(Number.isInteger(requested) && requested >= 128 && requested <= 10240);
const report = resolve(option('--report', `.work/resource-runs/darwin-${Date.now()}.json`));
assert.ok(!existsSync(report), 'Preserve prior resource evidence');
mkdirSync(dirname(report), { recursive: true });
const lock = resolve('.work/resource-darwin.lock');
mkdirSync(lock); // Refuse concurrent workloads; a stale lock requires inspection.
const unit = randomUUID(), host = darwinMemory(), reserve = 1536 * 1024 ** 2;
// RSS includes clean mapped compiler archives and shared libraries. It is not
// additional private allocation: subtracting the initial host reserve from RSS
// stopped wasm-ld with 3.1 GB still available. Keep independent limits instead:
// at most 40% of physical RAM in sampled aggregate RSS, plus the continuously
// checked host reserve and compression-growth stop. No kernel cap is claimed.
const budget = Math.floor(Math.min(requested * 1024 ** 2, host.total / 2));
const evidence = { unit, report, monitorPid: process.pid, mechanism: 'macOS process-tree RSS monitor', hardCap: false,
  limitations: 'Sampled accounting cannot enforce a kernel aggregate cap or capture unsampled detached descendants.',
  limits: { memoryMax: null, stopMemoryBytes: Math.floor(budget * 0.8), hostReserveBytes: reserve,
    maximumCompressionGrowthBytes: 128 * 1024 ** 2, sampleMs: 250 },
  startedAt: new Date().toISOString(), hostAtStart: host, minimumHostAvailable: host.available,
  peakMemoryBytes: 0, peakTasks: 0, resourceLimited: false, unitReleased: false, status: 'starting' };
const save = () => { evidence.updatedAt = new Date().toISOString(); writeFileSync(report + '.tmp', JSON.stringify(evidence, null, 2) + '\n'); renameSync(report + '.tmp', report); };
let child, timer, stopping, result, seen = new Set();
const current = () => child?.pid ? workloadProcesses(darwinProcesses(), child.pid, seen) : [];
function terminate(signal) {
  if (!child?.pid) return;
  try { process.kill(-child.pid, signal); } catch (error) { if (error.code !== 'ESRCH') throw error; }
  for (const p of current()) if (p.group !== child.pid) {
    try { process.kill(p.pid, signal); } catch (error) { if (error.code !== 'ESRCH') throw error; }
  }
}
function stop(reason) {
  if (stopping) return;
  stopping = Date.now(); evidence.stoppedBecause = reason; evidence.resourceLimited = true; save();
  terminate('SIGTERM');
}
const handlers = new Map(['SIGINT', 'SIGTERM'].map(signal => [signal, () => stop(signal)]));
try {
  save(); assert.ok(budget >= 128 * 1024 ** 2 && host.available - reserve >= 128 * 1024 ** 2,
    'Insufficient host memory for the macOS reserve');
  writeFileSync(resolve(lock, 'owner.json'), JSON.stringify({ unit, report, monitorPid: process.pid }));
  child = spawn(args[separator + 1], args.slice(separator + 2), { detached: true, stdio: 'inherit',
    env: { ...process.env, LASM_RESOURCE_UNIT: unit, LASM_RESOURCE_REPORT: report,
      BINARYEN_CORES: '1', EMCC_CORES: '1', CMAKE_BUILD_PARALLEL_LEVEL: '1', CTEST_PARALLEL_LEVEL: '1', LEAN_NUM_THREADS: '1' } });
  evidence.processGroup = child.pid; evidence.command = args.slice(separator + 1); evidence.status = 'running'; save();
  for (const [signal, handler] of handlers) process.on(signal, handler);
  console.error(`[lasm] macOS proactive RSS stop ${(evidence.limits.stopMemoryBytes / 1024 ** 3).toFixed(2)} GiB; no kernel aggregate cap; ${report}`);
  timer = setInterval(() => {
    try {
      const processes = current(), memory = darwinMemory();
      const bytes = processes.reduce((sum, p) => sum + p.bytes, 0);
      evidence.peakMemoryBytes = Math.max(evidence.peakMemoryBytes, bytes);
      evidence.peakTasks = Math.max(evidence.peakTasks, processes.length);
      evidence.minimumHostAvailable = Math.min(evidence.minimumHostAvailable, memory.available);
      evidence.lastSample = { bytes, host: memory, processes };
      if (bytes >= evidence.limits.stopMemoryBytes) stop('Workload reached its proactive RSS budget');
      if (memory.available < reserve) stop('Host memory reserve');
      if (memory.compressed - host.compressed > evidence.limits.maximumCompressionGrowthBytes) stop('Host compression growth');
      if (stopping && Date.now() - stopping > 3000) terminate('SIGKILL');
      save();
    } catch (error) { evidence.monitorError = error.message; stop('Resource monitor failed'); }
  }, 250);
  result = await new Promise(resolve => {
    child.once('error', error => resolve({ code: 1, signal: null, error: error.message }));
    child.once('exit', (code, signal) => resolve({ code, signal }));
  });
} finally {
  clearInterval(timer);
  for (const [signal, handler] of handlers) process.off(signal, handler);
  if (child?.pid) {
    terminate('SIGTERM');
    const deadline = Date.now() + 3000;
    while (current().length && Date.now() < deadline) await new Promise(resolve => setTimeout(resolve, 100));
    if (current().length) terminate('SIGKILL');
    const killDeadline = Date.now() + 2000;
    while (current().length && Date.now() < killDeadline) await new Promise(resolve => setTimeout(resolve, 100));
    evidence.unitReleased = current().length === 0;
  } else evidence.unitReleased = true;
  evidence.status = 'finished'; evidence.finishedAt = new Date().toISOString(); evidence.result = result;
  save();
  if (evidence.unitReleased) rmSync(lock, { recursive: true });
}
process.exitCode = evidence.resourceLimited || evidence.monitorError || !evidence.unitReleased ? 125 : result?.code ?? 1;
