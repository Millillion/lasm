import assert from 'node:assert/strict';
import { execFileSync } from 'node:child_process';
import { mkdirSync, writeFileSync } from 'node:fs';

// Retention can be retried separately from expensive native acceptance. Verify
// both successful jobs and their actual logged reports before reusing a pass.
const repository = 'Millillion/lasm';
assert.equal(process.env.GITHUB_REPOSITORY, repository);
assert.equal(process.env.GITHUB_REF, 'refs/heads/main');
const runId = process.env.LASM_ACCEPTANCE_RUN_ID;
const archiveSha256 = process.env.LASM_CANDIDATE_SHA256;
const packageSourceRevision = process.env.LASM_CANDIDATE_SOURCE_REVISION;
assert.match(runId, /^\d+$/);
assert.match(archiveSha256, /^[a-f0-9]{64}$/);
assert.match(packageSourceRevision, /^[a-f0-9]{40}$/);
const api = path => execFileSync('gh', ['api', `repos/${repository}/${path}`],
  { encoding: 'utf8', maxBuffer: 16 * 1024 * 1024, timeout: 60_000 });
const run = JSON.parse(api(`actions/runs/${runId}`));
assert.equal(String(run.id), runId);
assert.equal(run.repository.full_name, repository);
assert.equal(run.head_branch, 'main');
assert.equal(run.event, 'workflow_dispatch');
assert.equal(run.status, 'completed');
assert.ok(['.github/workflows/node-linux-acceptance.yml',
  '.github/workflows/node-linux-candidate-recheck.yml'].includes(run.path));
assert.match(run.head_sha, /^[a-f0-9]{40}$/);
const jobs = JSON.parse(api(`actions/runs/${runId}/jobs?per_page=100`));
assert.equal(jobs.jobs.length, jobs.total_count);
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
for (const architecture of ['x64', 'arm64']) {
  const matching = jobs.jobs.filter(job => job.name === `linux-${architecture} / installed`);
  assert.equal(matching.length, 1);
  const job = matching[0];
  assert.equal(job.status, 'completed');
  assert.equal(job.conclusion, 'success');
  const lines = api(`actions/jobs/${job.id}/logs`).split(/\r?\n/)
    .map(line => line.replace(/^\uFEFF?\d{4}-\d{2}-\d{2}T\S+ /, ''));
  const acceptance = reportFromLog(lines, '.work/node-linux-acceptance/result.json');
  const resources = reportFromLog(lines, '.work/node-linux-resources.json');
  const disk = reportFromLog(lines, '.work/node-linux-disk.json');
  assert.equal(acceptance.platform, `linux-${architecture}`);
  assert.equal(acceptance.passed, true);
  assert.equal(acceptance.archiveSha256, archiveSha256);
  assert.equal(acceptance.sourceRevision, run.head_sha);
  assert.equal(acceptance.installation.provenance.sourceRevision, packageSourceRevision);
  assert.equal(resources.result.code, 0);
  assert.equal(resources.unitReleased, true);
  assert.equal(resources.resourceLimited, false);
  assert.equal(resources.service.memoryEvents.oom, 0);
  assert.equal(resources.service.memoryEvents.oom_kill, 0);
  assert.equal(disk.status, 'passed');
  nativeJobs.push({ architecture, jobId: job.id, url: job.html_url, acceptance, resources, disk });
}
const receipt = { runId, sourceRevision: run.head_sha, archiveSha256, packageSourceRevision,
  runConclusion: run.conclusion, passedArchitectures: ['x64', 'arm64'], nativeJobs };
mkdirSync('.work/node-candidate', { recursive: true });
writeFileSync('.work/node-candidate/acceptance.json', JSON.stringify(receipt, null, 2) + '\n');
console.log(`Verified the exact candidate passed both native jobs in run ${runId}.`);
