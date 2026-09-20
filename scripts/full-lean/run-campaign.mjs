// Keep the small supervisor outside the resource cgroup. Every single-test
// CTest run gets its own guarded process tree and immutable result directory.
import { readFileSync, writeFileSync, existsSync, mkdirSync, renameSync, createWriteStream, createReadStream, openSync, closeSync, unlinkSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash, randomUUID } from 'node:crypto';
import { spawn } from 'node:child_process';

if (process.env.LASM_RESOURCE_UNIT) throw new Error('Run this supervisor directly; each test applies its own resource guard');
const args = process.argv.slice(2);
const allowed = new Set(['--suite', '--output', '--filter', '--max-tests']);
for (let i = 0; i < args.length; i++) {
  if (args[i] === '--extend-selection') continue;
  if (!allowed.has(args[i]) || args[i + 1] === undefined) throw new Error(`Invalid option: ${args[i]}`);
  i++;
}
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const suite = resolve(option('--suite', '.work/full-suite-node'));
const output = resolve(option('--output', join(suite, 'campaign')));
const filter = option('--filter', '.*');
const selection = new RegExp(filter);
const maximum = Number(option('--max-tests', 'Infinity'));
if (!(maximum === Infinity || Number.isInteger(maximum) && maximum > 0)) throw new Error('--max-tests must be a positive integer');
const manifestPath = join(suite, 'parallel-suite.json');
const manifestBytes = readFileSync(manifestPath);
const manifest = JSON.parse(manifestBytes);
const selected = manifest.tests.filter(test => selection.test(test.name)).map(test => test.name);
if (!selected.length || new Set(selected).size !== selected.length) throw new Error('Selection must contain unique registered test names');
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
const configPath = join(manifest.prefix, 'toolchain.json');
const config = existsSync(configPath) ? JSON.parse(readFileSync(configPath)) : null;
let snapshot;
if (config) {
  const path = join(config.build, 'snapshot.json');
  snapshot = JSON.parse(readFileSync(path));
  // Stream large Wasm inputs instead of allocating entire files in the desktop
  // supervisor. Never resume a campaign against changed frozen runtime inputs.
  for (const [name, expected] of Object.entries(snapshot.files)) {
    const hash = createHash('sha256');
    for await (const bytes of createReadStream(join(config.build, name))) hash.update(bytes);
    if (hash.digest('hex') !== expected) throw new Error(`Frozen input changed: ${name}`);
  }
}
const identityFor = filter => digest(JSON.stringify({ manifest: digest(manifestBytes), filter, config, snapshot }));
const identity = identityFor(filter);
mkdirSync(output, { recursive: true });
// The workload guard prevents concurrent compilers; this separate lock prevents
// two supervisors from overwriting the same campaign checkpoint. A crashed
// supervisor's lock can be reclaimed only when its process no longer exists.
const lock = join(output, 'supervisor.lock');
const token = randomUUID();
function acquire() {
  const fd = openSync(lock, 'wx');
  try { writeFileSync(fd, JSON.stringify({ pid: process.pid, token })); }
  finally { closeSync(fd); }
}
try { acquire(); }
catch (error) {
  if (error.code !== 'EEXIST') throw error;
  const owner = JSON.parse(readFileSync(lock));
  try { process.kill(owner.pid, 0); throw new Error(`Campaign supervisor ${owner.pid} is still running`); }
  catch (error) { if (error.code !== 'ESRCH') throw error; }
  unlinkSync(lock); acquire();
}
process.on('exit', () => {
  try { if (JSON.parse(readFileSync(lock)).token === token) unlinkSync(lock); } catch { /* Keep uncertain ownership intact. */ }
});
const statePath = join(output, 'campaign.json');
const state = existsSync(statePath) ? JSON.parse(readFileSync(statePath)) : {
  identity, suite, filter, backend: manifest.backend, createdAt: new Date().toISOString(),
  registered: manifest.registered, selected: selected.length,
  tests: selected.map(name => ({ name, attempts: [] })),
};
if (state.identity !== identity) {
  if (!args.includes('--extend-selection') || state.identity !== identityFor(state.filter))
    throw new Error('Campaign inputs changed; use a new output directory');
  if (selected.length <= state.tests.length || state.tests.some((test, i) => test.name !== selected[i]))
    throw new Error('Selection extension must retain all earlier tests in the same prefix order');
  (state.selectionHistory ??= []).push({ at: new Date().toISOString(), filter: state.filter,
    selected: state.selected, priorCheckpointSha256: digest(readFileSync(statePath)) });
  state.tests.push(...selected.slice(state.tests.length).map(name => ({ name, attempts: [] })));
  Object.assign(state, { identity, filter, selected: selected.length });
}
if (state.stoppedBecause) throw new Error(`This campaign stopped for review: ${state.stoppedBecause}. Preserve it and use a new output after resolving the cause.`);
const save = () => {
  state.updatedAt = new Date().toISOString();
  state.counts = Object.fromEntries(['passed', 'failed', 'resource-aborted', 'harness-failed', 'pending'].map(status =>
    [status, state.tests.filter(test => (test.status ?? 'pending') === status).length]));
  writeFileSync(statePath + '.tmp', JSON.stringify(state, null, 2) + '\n');
  renameSync(statePath + '.tmp', statePath);
};
const here = fileURLToPath(new URL('.', import.meta.url));
const runner = join(here, 'run-bounded.mjs');
const suiteRunner = join(here, 'run-suite.mjs');
let child, interrupted;
for (const signal of ['SIGINT', 'SIGTERM']) process.on(signal, () => {
  interrupted = signal;
  child?.kill(signal);
});
const json = path => existsSync(path) ? JSON.parse(readFileSync(path)) : null;
const escaped = name => name.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
let executed = 0;
state.status = 'running';
save();
for (const [index, test] of state.tests.entries()) {
  if (test.status && test.status !== 'pending') continue;
  if (executed >= maximum || interrupted) break;
  // A previous desktop interruption may have left a running attempt. Keep its
  // evidence and retry only that unfinished test, never overwrite its files.
  for (const attempt of test.attempts) if (attempt.status === 'running') attempt.status = 'interrupted';
  const directory = join(output, `${String(index + 1).padStart(5, '0')}-${randomUUID().slice(0, 8)}`);
  mkdirSync(directory);
  const resourcePath = join(directory, 'resources.json');
  const results = join(directory, 'results');
  const attempt = { directory, status: 'running', startedAt: new Date().toISOString() };
  test.attempts.push(attempt);
  save();
  const command = [runner, '--report', resourcePath, '--', process.execPath, suiteRunner,
    '--suite', suite, '--results', results, '--jobs', '1', '--filter', `^${escaped(test.name)}$`];
  const log = createWriteStream(join(directory, 'supervisor.log'));
  console.log(`[${index + 1}/${state.selected}] ${test.name}`);
  child = spawn(process.execPath, command, { stdio: ['ignore', 'pipe', 'pipe'] });
  child.stdout.pipe(log, { end: false }); child.stderr.pipe(log, { end: false });
  const exit = await new Promise(resolve => {
    child.once('error', error => resolve({ code: null, error: error.message }));
    child.once('close', (code, signal) => resolve({ code, signal }));
  });
  child = undefined;
  await new Promise(resolve => log.end(resolve));
  const resource = json(resourcePath), execution = json(join(results, 'execution.json'));
  const progress = json(join(results, 'progress.json'));
  const events = resource?.service?.memoryEvents;
  const unsafe = !resource || resource.monitorError || resource.memoryThrottled || (events?.oom ?? 0) > 0
    || (events?.oom_kill ?? 0) > 0 || resource.stoppedBecause && resource.stoppedBecause !== 'Workload reached its proactive memory budget';
  let status;
  if (interrupted) status = 'interrupted';
  else if (resource?.resourceLimited) status = 'resource-aborted';
  else if (execution && execution.originalSources.before.modified.length === 0 && execution.originalSources.after.modified.length === 0
    && progress?.completed.length === 1 && progress.completed[0].name === test.name && !unsafe) {
    status = exit.code === 0 && execution.result.code === 0 && progress.completed[0].result === 'Passed' ? 'passed' : 'failed';
  } else status = 'harness-failed';
  Object.assign(attempt, { status, exit, finishedAt: new Date().toISOString(), resourceReport: resourcePath,
    peakMemoryBytes: resource?.peakMemoryBytes, originalSources: execution?.originalSources });
  test.status = status === 'interrupted' ? 'pending' : status;
  executed++;
  save();
  console.log(`  ${status}; peak ${((resource?.peakMemoryBytes ?? 0) / 1024 ** 3).toFixed(2)} GiB`);
  // Stop on lost monitoring, actual OOM, host pressure, source drift, or harness
  // failure. A safely contained budget stop is evidence for that one test and
  // does not erase completed tests or prevent trying the remaining small tests.
  if (unsafe || status === 'harness-failed' || interrupted) {
    if (!interrupted) state.stoppedBecause = resource?.stoppedBecause ?? 'Resource, input-integrity, or harness validation failed';
    break;
  }
}
state.status = interrupted ? 'interrupted' : state.stoppedBecause ? 'stopped'
  : state.tests.every(test => test.status && test.status !== 'pending') ? 'complete' : 'paused';
save();
console.log(JSON.stringify({ status: state.status, counts: state.counts, evidence: statePath }));
process.exitCode = state.status === 'stopped' || interrupted ? 125
  : state.counts.failed || state.counts['resource-aborted'] || state.counts['harness-failed'] ? 1 : 0;
