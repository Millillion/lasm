import { readFileSync, writeFileSync, lstatSync, readlinkSync, existsSync, createWriteStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawn } from 'node:child_process';
import { randomUUID } from 'node:crypto';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { cleanupTestProcesses } from '../full-lean/cleanup-processes.mjs';

await ensureResourceGuard();
const root = resolve(fileURLToPath(new URL('../../', import.meta.url)));
const manifestFile = resolve(process.argv[2]);
const manifest = JSON.parse(readFileSync(manifestFile, 'utf8'));
const resultFile = join(manifest.output, 'execution.json');
if (existsSync(resultFile) || existsSync(join(manifest.output, 'execution-started.json')))
  throw new Error('Use a new campaign; never overwrite previous execution evidence');
const sourcesFile = join(root, 'docs/evidence/lean-4.34-upstream-source-files.json');
if (await hashFile(sourcesFile) !== manifest.sourceManifestSha256) throw new Error('Upstream source manifest changed');
const sources = JSON.parse(readFileSync(sourcesFile, 'utf8'));
async function verifySources() {
  const modified = [];
  for (const [name, expected] of Object.entries(sources)) {
    try {
      const file = join(manifest.source, name), info = lstatSync(file);
      if ('symlink' in expected ? !info.isSymbolicLink() || readlinkSync(file) !== expected.symlink
        : !info.isFile() || await hashFile(file) !== expected.sha256) modified.push(name);
    } catch { modified.push(name); }
  }
  return { checked: Object.keys(sources).length, modified };
}
const before = await verifySources();
if (before.modified.length) throw new Error('Upstream originals changed before execution: ' + before.modified.join(', '));
const harnessFiles = [fileURLToPath(import.meta.url), join(root, 'scripts/application-tests/case.mjs'),
  manifest.compileDriver, manifest.nativeEnvironment];
const harnessBefore = Object.fromEntries(await Promise.all(harnessFiles.map(async file => [file, await hashFile(file)])));
const runId = randomUUID(), startedAt = new Date().toISOString();
const args = ['--test-dir', manifest.execution, '-j', '1', '--no-tests=error', '--output-on-failure',
  '--output-junit', join(manifest.output, 'results.xml')];
writeFileSync(join(manifest.output, 'execution-started.json'), JSON.stringify({ runId, startedAt, args, before, harnessBefore,
  resourceReport: process.env.LASM_RESOURCE_REPORT }, null, 2) + '\n');
const child = spawn('ctest', args, { env: { ...process.env, LASM_UPSTREAM_RUN_ID: runId }, stdio: ['ignore', 'pipe', 'pipe'] });
const log = createWriteStream(join(manifest.output, 'execution.log'));
const completed = [], finished = new Set(), cleanup = [];
let partial = '', previous = new Set();
child.stdout.on('data', bytes => {
  log.write(bytes); process.stdout.write(bytes);
  const lines = (partial + bytes.toString()).split('\n'); partial = lines.pop();
  for (const line of lines) {
    const match = /^\s*\d+\/\d+\s+Test\s+#\d+:\s+(.+?)\s+\.{2,}/.exec(line);
    if (!match) continue;
    finished.add(match[1]); completed.push({ name: match[1], line });
    writeFileSync(join(manifest.output, 'progress.json'), JSON.stringify({ startedAt, completed }, null, 2) + '\n');
  }
});
child.stderr.on('data', bytes => { log.write(bytes); process.stderr.write(bytes); });
const timer = setInterval(() => {
  cleanup.push(...cleanupTestProcesses(runId, previous, 'SIGKILL'));
  cleanup.push(...cleanupTestProcesses(runId, finished));
  previous = new Set(finished);
}, 5000);
const handlers = ['SIGINT', 'SIGTERM'].map(signal => {
  const handler = () => child.kill(signal); process.on(signal, handler); return [signal, handler];
});
let execution;
try {
  execution = await new Promise((resolve, reject) => { child.once('error', reject); child.once('close', (code, signal) => resolve({ code, signal })); });
} finally {
  clearInterval(timer);
  for (const [signal, handler] of handlers) process.off(signal, handler);
  cleanup.push(...cleanupTestProcesses(runId));
  if (cleanup.length) {
    await new Promise(resolve => setTimeout(resolve, 1000));
    cleanup.push(...cleanupTestProcesses(runId, undefined, 'SIGKILL'));
  }
  await new Promise(resolve => log.end(resolve));
}
const after = await verifySources();
const harnessChanged = [];
for (const [file, hash] of Object.entries(harnessBefore)) if (await hashFile(file) !== hash) harnessChanged.push(file);
const cases = manifest.tests.map(test => {
  const file = join(manifest.output, 'cases', test.name.replaceAll('/', '__'), 'result.json');
  return existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : { name: test.name, status: 'not-completed' };
});
const counts = {};
for (const test of cases) counts[test.status] = (counts[test.status] ?? 0) + 1;
const report = { startedAt, finishedAt: new Date().toISOString(), scope: manifest.scope,
  lean: manifest.lean, leanCommit: manifest.leanCommit, category: manifest.category, target: manifest.target,
  execution, counts, registered: manifest.tests.length, originalSources: { before, after },
  harness: { before: harnessBefore, changed: harnessChanged },
  cases, cleanup, resourceReport: process.env.LASM_RESOURCE_REPORT };
writeFileSync(resultFile, JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify({ counts, originalSources: report.originalSources, execution }, null, 2));
process.exitCode = after.modified.length || harnessChanged.length ? 2 : execution.code ?? 1;
