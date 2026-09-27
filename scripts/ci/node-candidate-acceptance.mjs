import assert from 'node:assert/strict';
import { execFileSync } from 'node:child_process';
import { mkdirSync, writeFileSync } from 'node:fs';

// Retention can be retried separately from expensive native acceptance. Verify
// successful jobs and their actual logged reports before reusing a pass.
const repository = 'Millillion/lasm';
assert.equal(process.env.GITHUB_REPOSITORY, repository);
assert.equal(process.env.GITHUB_REF, 'refs/heads/main');
const runId = process.env.LASM_ACCEPTANCE_RUN_ID;
const archiveSha256 = process.env.LASM_CANDIDATE_SHA256;
const packageSourceRevision = process.env.LASM_CANDIDATE_SOURCE_REVISION;
assert.match(runId, /^\d+$/);
assert.match(archiveSha256, /^[a-f0-9]{64}$/);
assert.match(packageSourceRevision, /^[a-f0-9]{40}$/);
// Newer gh versions reject ANSI-bearing job logs by default, even when captured
// into a pipe. Raw logs are parsed here, never printed or executed in a terminal.
const supportsRawLogs = execFileSync('gh', ['api', '--help'],
  { encoding: 'utf8', timeout: 10_000 }).includes('--allow-escape-sequences');
const api = path => execFileSync('gh', ['api', `repos/${repository}/${path}`,
  ...(supportsRawLogs && path.endsWith('/logs') ? ['--allow-escape-sequences'] : [])],
  { encoding: 'utf8', maxBuffer: 16 * 1024 * 1024, timeout: 60_000 });
const runs = new Map();
function completedRun(id) {
  assert.match(id, /^\d+$/);
  if (runs.has(id)) return runs.get(id);
  const run = JSON.parse(api(`actions/runs/${id}`));
  assert.equal(String(run.id), id);
  assert.equal(run.repository.full_name, repository);
  assert.equal(run.head_branch, 'main');
  assert.equal(run.event, 'workflow_dispatch');
  assert.equal(run.status, 'completed');
  assert.match(run.head_sha, /^[a-f0-9]{40}$/);
  const jobs = JSON.parse(api(`actions/runs/${id}/jobs?per_page=100`));
  assert.equal(jobs.jobs.length, jobs.total_count);
  const value = { run, jobs: jobs.jobs }; runs.set(id, value); return value;
}
const reportFromLog = (lines, marker) => {
  const starts = lines.flatMap((line, i) => line === marker ? [i + 1] : []);
  assert.equal(starts.length, 1, `Expected one complete ${marker} report`);
  const start = starts[0];
  assert.equal(lines[start], '{');
  const end = lines.indexOf('}', start);
  assert.ok(end > start);
  return JSON.parse(lines.slice(start, end + 1).join('\n'));
};
const nativeJobs = [];
const targets = ['x64', 'arm64'].map(architecture => ({ os: 'linux', architecture, id: runId }));
const macRuns = [process.env.LASM_DARWIN_X64_ACCEPTANCE_RUN_ID, process.env.LASM_DARWIN_ARM64_ACCEPTANCE_RUN_ID];
if (macRuns.some(Boolean)) {
  assert.ok(macRuns.every(Boolean), 'Retain macOS support only after both native architectures pass');
  targets.push(...['x64', 'arm64'].map((architecture, i) => ({ os: 'darwin', architecture, id: macRuns[i] })));
}
for (const architecture of ['x64', 'arm64']) {
  const id = process.env[`LASM_WINDOWS_${architecture.toUpperCase()}_ACCEPTANCE_RUN_ID`];
  if (id) targets.push({ os: 'win32', architecture, id });
}
for (const { os, architecture, id } of targets) {
  const platform = `${os}-${architecture}`, { run, jobs } = completedRun(id);
  const name = os === 'win32' ? 'windows' : os;
  assert.ok(['.github/workflows/node-linux-acceptance.yml',
    `.github/workflows/node-${name}-candidate-recheck.yml`].includes(run.path));
  const matching = jobs.filter(job => job.name === `${name}-${architecture} / installed`);
  assert.equal(matching.length, 1);
  const job = matching[0];
  assert.equal(job.status, 'completed');
  assert.equal(job.conclusion, 'success');
  const lines = api(`actions/jobs/${job.id}/logs`).split(/\r?\n/)
    .map(line => line.replace(/^\uFEFF?\d{4}-\d{2}-\d{2}T\S+ /, ''));
  const acceptance = reportFromLog(lines, `.work/node-${name}-acceptance/result.json`);
  const resources = reportFromLog(lines, `.work/node-${name}-resources.json`);
  const disk = reportFromLog(lines, `.work/node-${name}-disk.json`);
  assert.equal(acceptance.platform, platform);
  assert.equal(acceptance.passed, true);
  assert.equal(acceptance.archiveSha256, archiveSha256);
  assert.equal(acceptance.sourceRevision, run.head_sha);
  assert.equal(acceptance.installation.provenance.sourceRevision, packageSourceRevision);
  if (os === 'win32') {
    const controls = reportFromLog(lines, '.work/windows-isolation-controls/result.json');
    assert.equal(controls.platform, platform); assert.equal(controls.passed, true);
    assert.equal(resources.status, 'passed'); assert.equal(resources.exitCode, 0);
    assert.equal(resources.stoppedBecause, undefined);
    assert.ok(resources.peakCommittedBytes < resources.limits.stopCommittedBytes);
    assert.ok(resources.minimumHostAvailable >= resources.limits.hostReserveBytes);
    assert.ok(resources.disk.reserveBytes >= 4 * 1024 ** 3);
    assert.ok(Object.values(resources.disk.minimumFreeBytes).every(n => n >= resources.disk.reserveBytes));
    for (const phase of acceptance.phaseExecutions) {
      assert.equal(phase.code, 0); assert.equal(phase.isolation.token.appContainer, true);
      assert.equal(phase.isolation.allPackagesOptOut, true); assert.equal(phase.isolation.descendantsReleased, true);
      assert.equal(phase.isolation.cleanupErrors, undefined);
    }
  } else {
    assert.equal(resources.result.code, 0);
    assert.equal(resources.unitReleased, true);
    assert.equal(resources.resourceLimited, false);
  }
  if (os === 'linux') {
    assert.equal(resources.service.memoryEvents.oom, 0);
    assert.equal(resources.service.memoryEvents.oom_kill, 0);
  } else if (os === 'darwin') {
    assert.equal(resources.hardCap, false, 'macOS evidence must not claim a kernel cap');
    assert.ok(resources.limits.hostReserveBytes >= 1536 * 1024 ** 2);
    assert.ok(resources.limits.stopMemoryBytes <= resources.hostAtStart.total * 0.4);
  }
  assert.equal(disk.status, 'passed');
  nativeJobs.push({ platform, architecture, runId: id, controlsRevision: run.head_sha,
    jobId: job.id, url: job.html_url, acceptance, resources, disk });
}
const { run } = completedRun(runId);
const receipt = { runId, sourceRevision: run.head_sha, archiveSha256, packageSourceRevision,
  runConclusion: run.conclusion, passedArchitectures: ['x64', 'arm64'],
  passedPlatforms: nativeJobs.map(job => job.platform), nativeJobs };
mkdirSync('.work/node-candidate', { recursive: true });
writeFileSync('.work/node-candidate/acceptance.json', JSON.stringify(receipt, null, 2) + '\n');
console.log(`Verified the exact candidate passed native jobs for ${receipt.passedPlatforms.join(', ')}.`);
