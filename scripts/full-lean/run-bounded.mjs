// One heavy workload per checkout, with an OS-enforced cap covering descendants.
// The supervising process stays outside the cgroup to preserve failure evidence.
import { readFileSync, writeFileSync, mkdirSync, existsSync } from 'node:fs';
import { resolve, join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawn, spawnSync } from 'node:child_process';
import { createHash, randomUUID } from 'node:crypto';
import { GiB, hostMemory, currentCgroup } from './resource-guard.mjs';
import { completedCgroupRemoval } from './completed-cgroup.mjs';

const args = process.argv.slice(2);
const self = fileURLToPath(import.meta.url);
const root = fileURLToPath(new URL('../../', import.meta.url));
if (process.platform === 'win32') {
  // Native CI uses a Windows Job Object for the same process-tree boundary.
  // Python is provisioned privately; no system Python installation is needed.
  const { provisionPython } = await import('../../src/managed-python.mjs');
  const python = await provisionPython();
  const child = spawn(python.executable, ['-I', '-B', join(root, 'scripts/full-lean/run-bounded-windows.py'), ...args], { stdio: 'inherit' });
  const code = await new Promise((resolve, reject) => {
    child.once('error', reject); child.once('exit', code => resolve(code ?? 1));
  });
  process.exit(code);
}
function counters(file) {
  return Object.fromEntries(readFileSync(file, 'utf8').trim().split('\n').map(line => {
    const [key, value] = line.split(' '); return [key, Number(value)];
  }));
}
function usage(path) {
  const number = name => Number(readFileSync(join(path, name), 'utf8'));
  return { memoryBytes: number('memory.current'), peakMemoryBytes: number('memory.peak'),
    swapBytes: number('memory.swap.current'), tasks: number('pids.current'),
    memoryBreakdown: Object.fromEntries(Object.entries(counters(join(path, 'memory.stat')))
      .filter(([key]) => ['anon', 'file', 'shmem', 'kernel', 'slab', 'file_mapped', 'inactive_file'].includes(key))),
    pressureSomeAvg10: Number(readFileSync(join(path, 'memory.pressure'), 'utf8').match(/^some avg10=([\d.]+)/m)?.[1] ?? 0),
    memoryEvents: counters(join(path, 'memory.events')) };
}
function processMemory(path) {
  // Capture process sizes once near the high-water mark, without command lines
  // or unrelated desktop processes. RSS can include pages shared by processes.
  return readFileSync(join(path, 'cgroup.procs'), 'utf8').trim().split('\n').slice(0, 128).flatMap(pid => {
    try {
      const status = readFileSync(`/proc/${pid}/status`, 'utf8');
      return [{ pid: Number(pid), name: status.match(/^Name:\s+(.+)$/m)?.[1],
        residentBytes: Number(status.match(/^VmRSS:\s+(\d+) kB$/m)?.[1] ?? 0) * 1024,
        threads: Number(status.match(/^Threads:\s+(\d+)$/m)?.[1] ?? 0) }];
    } catch { return []; }
  }).sort((a, b) => b.residentBytes - a.residentBytes);
}
if (args[0] === '--capture') {
  // systemd runs this after stopping all workload descendants, including on OOM.
  const result = { serviceResult: process.env.SERVICE_RESULT, exitCode: process.env.EXIT_CODE,
    exitStatus: process.env.EXIT_STATUS, capturedAt: new Date().toISOString(), cgroup: currentCgroup() };
  try { Object.assign(result, usage(result.cgroup)); } catch (error) { result.captureError = error.message; }
  writeFileSync(args[1], JSON.stringify(result, null, 2) + '\n');
} else {
  if (process.platform !== 'linux') throw new Error('run-bounded currently requires Linux with systemd and cgroup v2');
  const separator = args.indexOf('--');
  if (separator < 0 || separator === args.length - 1) throw new Error('Usage: node run-bounded.mjs [--memory-mib N] [--report FILE] -- COMMAND [ARGS...]');
  const options = args.slice(0, separator);
  const allowed = new Set(['--memory-mib', '--report']);
  for (let i = 0; i < options.length; i += 2)
    if (!allowed.has(options[i]) || options[i + 1] === undefined) throw new Error(`Invalid option: ${options[i]}`);
  const option = (name, fallback) => { const i = options.indexOf(name); return i < 0 ? fallback : options[i + 1]; };
  const requestedMiB = Number(option('--memory-mib', '10240'));
  if (!Number.isInteger(requestedMiB) || requestedMiB < 128 || requestedMiB > 10240) throw new Error('Memory cap must be 128..10240 MiB');
  const memory = hostMemory();
  const limit = Math.floor(Math.min(requestedMiB * 1024 ** 2, memory.total / 2, memory.available - 8 * GiB) / 1024 ** 2) * 1024 ** 2;
  if (limit < 128 * 1024 ** 2) throw new Error('Insufficient available memory to preserve 8 GiB of host headroom');
  const command = args.slice(separator + 1);
  const id = randomUUID();
  const unit = `lasm-heavy-${createHash('sha256').update(root).digest('hex').slice(0, 12)}.service`;
  const description = `Lasm bounded workload ${id}`;
  const report = resolve(option('--report', join(root, '.work/resource-runs', `${new Date().toISOString().replaceAll(':', '-')}-${id}.json`)));
  if (existsSync(report) || existsSync(report + '.service.json')) throw new Error(`Refusing to overwrite resource evidence: ${report}`);
  mkdirSync(dirname(report), { recursive: true });
  const evidence = { startedAt: new Date().toISOString(), command, cwd: process.cwd(), unit, id,
    limits: { memoryMax: limit, memoryHigh: 'infinity', stopMemoryBytes: Math.floor(limit * 0.8), memorySwapMax: 0, tasksMax: 1024, nice: 0 },
    hostAtStart: memory, minimumHostAvailable: memory.available, peakMemoryBytes: 0, peakTasks: 0,
    report, status: 'starting' };
  const save = () => writeFileSync(report, JSON.stringify(evidence, null, 2) + '\n');
  save();
  // No shell is involved. Disable systemd environment expansion for ExecStopPost;
  // escape its independent command-line and specifier syntax for literal paths.
  const systemdWord = value => '"' + value.replaceAll('\\', '\\\\').replaceAll('"', '\\"').replaceAll('%', '%%') + '"';
  const capture = ':' + [process.execPath, self, '--capture', report + '.service.json'].map(systemdWord).join(' ');
  const keys = ['PATH', 'HOME', 'USER', 'LOGNAME', 'LANG', 'LC_ALL', 'TMPDIR', 'XDG_RUNTIME_DIR',
    'LASM_EMSDK', 'LASM_LEAN32_DEPS', 'LASM_GMP_WASM64', 'LEAN_PATH', 'LEAN_SRC_PATH',
    'LEAN_SYSROOT', 'LEAN_STACK_SIZE_KB', 'LEAN_NUM_THREADS', 'LASM_VM_STACK_MB'];
  const env = Object.fromEntries(keys.filter(key => process.env[key] !== undefined).map(key => [key, process.env[key]]));
  Object.assign(env, { LASM_RESOURCE_UNIT: unit, LASM_RESOURCE_REPORT: report,
    BINARYEN_CORES: '1', EMCC_CORES: '1', CMAKE_BUILD_PARALLEL_LEVEL: '1', CTEST_PARALLEL_LEVEL: '1' });
  // MemoryHigh throttling raises PSI for ancestor cgroups. On desktops monitored
  // by systemd-oomd that can kill unrelated applications despite abundant RAM.
  // Terminate proactively instead; keep MemoryMax only as the final backstop.
  // Preserve normal CPU priority. Starting at nice 5 makes Lean's ordinary
  // setPriority 3 test fail even natively: an unprivileged process cannot raise
  // its priority again. Memory protection is independent of this CPU setting.
  const properties = { MemoryAccounting: 'yes', MemoryMax: limit, MemoryHigh: 'infinity',
    MemorySwapMax: 0, TasksMax: 1024, OOMPolicy: 'kill', KillMode: 'control-group',
    TimeoutStopSec: '5s', Nice: evidence.limits.nice, ExecStopPost: capture };
  const invocation = ['--user', '--wait', '--pipe', '--collect', '--expand-environment=no', `--unit=${unit}`, `--description=${description}`,
    `--working-directory=${process.cwd()}`, ...Object.entries(properties).flatMap(([key, value]) => ['-p', `${key}=${value}`]),
    '/usr/bin/env', '-i', ...Object.entries(env).map(([key, value]) => `${key}=${value}`), ...command];
  console.error(`[lasm] One workload, ${(limit / GiB).toFixed(2)} GiB memory cap; resource log: ${report}`);
  const child = spawn('systemd-run', invocation, { stdio: 'inherit' });
  let cgroup;
  let stopping = false;
  const show = name => spawnSync('systemctl', ['--user', 'show', unit, '--value', '-p', name], { encoding: 'utf8' });
  function stop(reason) {
    if (stopping) return;
    // A competing launch cannot terminate the workload that already owns the unit.
    if (show('Description').stdout?.trim() !== description) return;
    stopping = true; evidence.stoppedBecause = reason; save();
    spawn('systemctl', ['--user', 'stop', unit], { stdio: 'ignore' });
  }
  const handlers = new Map(['SIGTERM', 'SIGINT'].map(signal => [signal, () => stop(signal)]));
  for (const [signal, handler] of handlers) process.on(signal, handler);
  const timer = setInterval(() => {
    try {
      if (!cgroup) {
        if (show('Description').stdout?.trim() !== description) return;
        const path = show('ControlGroup').stdout?.trim();
        if (path) cgroup = join('/sys/fs/cgroup', path);
      }
      if (!cgroup) return;
      let sample;
      try { sample = usage(cgroup); }
      catch (error) {
        let finalSample;
        try { finalSample = JSON.parse(readFileSync(report + '.service.json', 'utf8')); }
        catch { /* Missing/incomplete final evidence cannot justify a lost sample. */ }
        if (!completedCgroupRemoval(error, cgroup, finalSample)) throw error;
        evidence.cgroupRemovedAfterExit = { at: new Date().toISOString(), code: error.code,
          message: error.message, capturedAt: finalSample.capturedAt };
        save();
        return;
      }
      evidence.status = 'running'; evidence.cgroup = cgroup;
      evidence.peakMemoryBytes = Math.max(evidence.peakMemoryBytes, sample.peakMemoryBytes);
      evidence.peakTasks = Math.max(evidence.peakTasks, sample.tasks);
      evidence.lastSample = { at: new Date().toISOString(), ...sample };
      evidence.minimumHostAvailable = Math.min(evidence.minimumHostAvailable, hostMemory().available);
      if (sample.memoryBytes >= evidence.limits.stopMemoryBytes) stop('Workload reached its proactive memory budget');
      if (sample.pressureSomeAvg10 >= 5) stop('Workload memory pressure reached 5 percent');
      if (evidence.minimumHostAvailable < 8 * GiB) stop('Host available memory fell below 8 GiB');
      if (!stopping && !evidence.highWaterProcesses && sample.memoryBytes >= limit * 0.6)
        evidence.highWaterProcesses = { at: sample.at ?? new Date().toISOString(), processes: processMemory(cgroup) };
      save();
    } catch (error) {
      if (error.code !== 'ENOENT') { evidence.monitorError = error.message; stop('Resource monitor failed'); }
    }
  }, 200);
  const result = await new Promise(resolve => {
    child.once('error', error => resolve({ code: 1, error: error.message }));
    child.once('close', (code, signal) => resolve({ code, signal }));
  });
  clearInterval(timer);
  for (const [signal, handler] of handlers) process.off(signal, handler);
  // systemd-run can exit just before --collect releases the transient unit.
  // Wait only for our own completed unit; never wait on or reset a contender's
  // running job. Otherwise a valid sequential launch can spuriously hit EEXIST.
  const releaseStarted = Date.now();
  if (cgroup || existsSync(report + '.service.json')) {
    while (show('Description').stdout?.trim() === description && Date.now() - releaseStarted < 5000)
      await new Promise(resolve => setTimeout(resolve, 100));
    evidence.unitReleased = show('Description').stdout?.trim() !== description;
    if (!evidence.unitReleased) evidence.monitorError = 'Completed transient unit was not released within five seconds';
  }
  if (existsSync(report + '.service.json')) {
    evidence.service = JSON.parse(readFileSync(report + '.service.json', 'utf8'));
    evidence.peakMemoryBytes = Math.max(evidence.peakMemoryBytes, evidence.service.peakMemoryBytes || 0);
  }
  Object.assign(evidence, { status: 'finished', finishedAt: new Date().toISOString(), result });
  evidence.resourceLimited = evidence.service?.serviceResult === 'oom-kill' || Boolean(evidence.stoppedBecause)
    || (evidence.service?.memoryEvents?.oom_kill ?? 0) > 0;
  evidence.memoryThrottled = (evidence.service?.memoryEvents?.high ?? 0) > 0;
  save();
  console.error(`[lasm] Peak ${(evidence.peakMemoryBytes / GiB).toFixed(2)} GiB; ${evidence.service?.serviceResult ?? 'launch failed'}${evidence.resourceLimited ? '; resource-limited run, not a conformance result' : ''}`);
  process.exitCode = evidence.resourceLimited || evidence.monitorError ? 125 : result.code ?? 1;
}
