// Execute the unchanged upstream registrations and verify original test bytes
// both before and after. This is also used for the native control run.
import { readFileSync, writeFileSync, existsSync, createWriteStream, mkdirSync, renameSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawn } from 'node:child_process';
import { createHash } from 'node:crypto';
import { cleanupTestProcesses } from './cleanup-processes.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';
import { verifyDriverArtifacts } from './driver-artifacts.mjs';

await ensureResourceGuard();

const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const directory = resolve(option('--suite', '.work/full-suite-native'));
const results = resolve(option('--results', directory));
if (results !== directory && existsSync(results)) throw new Error('Use a new --results directory to preserve previous attempts');
mkdirSync(results, { recursive: true });
const jobs = Number(option('--jobs', '1'));
if (jobs !== 1) throw new Error('This host permits one CTest job');
const manifest = JSON.parse(readFileSync(join(directory, 'parallel-suite.json')));
const hashes = JSON.parse(readFileSync(manifest.testSourceHashes));
function verify() {
  const modified = Object.entries(hashes).filter(([path, hash]) => {
    const file = join(manifest.source, path);
    return !existsSync(file) || createHash('sha256').update(readFileSync(file)).digest('hex') !== hash;
  }).map(([path]) => path);
  return { checked: Object.keys(hashes).length, modified };
}
const before = verify();
if (before.modified.length) throw new Error(`Upstream test sources changed before execution: ${before.modified.join(', ')}`);
const harnessBefore = await verifyDriverArtifacts(manifest.harnessArtifacts);
if (harnessBefore.modified.length) throw new Error(`Harness artifacts changed before execution: ${harnessBefore.modified.join(', ')}`);
// Supply ordinary host context without forwarding unrelated service credentials
// or user compiler overrides into third-party test drivers.
const env = Object.fromEntries(['PATH', 'HOME', 'USER', 'LOGNAME', 'LANG', 'LC_ALL', 'TMPDIR', 'SYSTEMROOT', 'COMSPEC', 'PATHEXT',
  'LASM_RESOURCE_UNIT', 'LASM_RESOURCE_REPORT', 'BINARYEN_CORES', 'CMAKE_BUILD_PARALLEL_LEVEL']
  .filter(key => process.env[key] !== undefined).map(key => [key, process.env[key]]));
Object.assign(env, {
  GIT_CONFIG_NOSYSTEM: '1', GIT_CONFIG_GLOBAL: '/dev/null',
  GIT_CONFIG_COUNT: '3', GIT_CONFIG_KEY_0: 'commit.gpgsign', GIT_CONFIG_VALUE_0: 'false',
  GIT_CONFIG_KEY_1: 'user.name', GIT_CONFIG_VALUE_1: 'Lasm upstream tests',
  GIT_CONFIG_KEY_2: 'user.email', GIT_CONFIG_VALUE_2: 'upstream-tests@localhost',
  CTEST_OUTPUT_ON_FAILURE: '1',
});
const command = ['--test-dir', manifest.execution, '-j', String(jobs), '--output-on-failure', '--output-junit', join(results, 'results.xml')];
if (args.includes('--rerun-failed')) command.push('--rerun-failed');
const filter = option('--filter');
if (filter) command.push('-R', filter);
const startedAt = new Date().toISOString();
writeFileSync(join(results, 'execution-started.json'), JSON.stringify({ startedAt, command,
  resourceReport: process.env.LASM_RESOURCE_REPORT, originalSources: { before },
  harnessArtifacts: { before: harnessBefore } }, null, 2) + '\n');
const runId = `${directory}:${startedAt}:${process.pid}`;
env.LASM_UPSTREAM_RUN_ID = runId;
const log = createWriteStream(join(results, 'execution.log'));
const child = spawn('ctest', command, { env, stdio: ['ignore', 'pipe', 'pipe'] });
let partialLine = '';
const finishedTests = new Set();
const completed = [];
function checkpoint() {
  const path = join(results, 'progress.json');
  writeFileSync(path + '.tmp', JSON.stringify({ startedAt, command, completed }, null, 2) + '\n');
  renameSync(path + '.tmp', path);
}
checkpoint();
const cleanup = [];
let previouslyFinished = new Set();
child.stdout.on('data', bytes => {
  log.write(bytes); process.stdout.write(bytes);
  partialLine += bytes.toString();
  const lines = partialLine.split('\n'); partialLine = lines.pop();
  for (const line of lines) {
    const match = line.match(/^\s*\d+\/\d+\s+Test\s+#\d+:\s+(.+?)\s+\.{2,}/);
    if (match) {
      finishedTests.add(match[1]);
      completed.push({ name: match[1], result: line.match(/\.{2,}\s+(.*?)\s+[\d.]+ sec$/)?.[1] ?? 'unknown', line });
      checkpoint();
    }
  }
});
const cleanupTimer = setInterval(() => {
  cleanup.push(...cleanupTestProcesses(runId, previouslyFinished, 'SIGKILL'));
  cleanup.push(...cleanupTestProcesses(runId, finishedTests));
  previouslyFinished = new Set(finishedTests);
}, 5000);
for (const signal of ['SIGINT', 'SIGTERM']) process.on(signal, () => child.kill(signal));
child.stderr.on('data', bytes => { log.write(bytes); process.stderr.write(bytes); });
const result = await new Promise((resolve, reject) => {
  child.once('error', reject);
  child.once('close', (code, signal) => resolve({ code, signal }));
});
clearInterval(cleanupTimer);
cleanup.push(...cleanupTestProcesses(runId));
// Failed drivers can leave a process handling SIGTERM. Give it time to close its
// sockets, then remove only processes still carrying this exact suite run tag.
if (cleanup.length) {
  await new Promise(resolve => setTimeout(resolve, 1000));
  cleanup.push(...cleanupTestProcesses(runId, undefined, 'SIGKILL'));
}
await new Promise(resolve => log.end(resolve));
const after = verify();
const harnessAfter = await verifyDriverArtifacts(manifest.harnessArtifacts);
writeFileSync(join(results, 'execution.json'), JSON.stringify({ startedAt, finishedAt: new Date().toISOString(),
  backend: manifest.backend, registered: manifest.registered, command, result, originalSources: { before, after },
  harnessArtifacts: { before: harnessBefore, after: harnessAfter },
  leftoverProcessCleanup: cleanup,
  resourceReport: process.env.LASM_RESOURCE_REPORT,
  environment: 'Explicit host context; Git signing disabled and test identity supplied; no compiler overrides.',
}, null, 2) + '\n');
if (after.modified.length) console.error(`Upstream test drivers changed original files: ${after.modified.join(', ')}`);
if (harnessAfter.modified.length) console.error(`Harness artifacts changed: ${harnessAfter.modified.join(', ')}`);
process.exitCode = after.modified.length || harnessAfter.modified.length ? 2 : result.code ?? 1;
