import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, mkdirSync } from 'node:fs';
import { execFileSync } from 'node:child_process';
import { confidencePlatforms, installationConfidence } from './installation-confidence.mjs';

const repository = 'Millillion/lasm';
assert.equal(process.env.GITHUB_REPOSITORY, repository);
assert.equal(process.env.GITHUB_REF, 'refs/heads/main');
const candidate = JSON.parse(readFileSync('scripts/ci/node-robustness-candidate.json'));
assert.match(candidate.baselineRunId, /^\d+$/);
const allowRaw = execFileSync('gh', ['api', '--help'], { encoding: 'utf8', timeout: 10_000 }).includes('--allow-escape-sequences');
const api = path => execFileSync('gh', ['api', `repos/${repository}/${path}`,
  ...(allowRaw && path.endsWith('/logs') ? ['--allow-escape-sequences'] : [])],
{ encoding: 'utf8', maxBuffer: 20 * 1024 * 1024, timeout: 60_000 });
const json = path => JSON.parse(api(path));
function report(lines, path) {
  const starts = lines.flatMap((line, i) => line === path ? [i + 1] : []);
  assert.equal(starts.length, 1, `Expected one complete ${path} report`);
  const first = starts[0], end = lines.indexOf('}', first);
  assert.equal(lines[first], '{'); assert.ok(end > first);
  return JSON.parse(lines.slice(first, end + 1).join('\n'));
}
const recent = json('actions/workflows/installation-confidence.yml/runs?branch=main&per_page=30').workflow_runs;
const ids = [...new Set([candidate.baselineRunId, ...recent.map(r => String(r.id)), process.env.GITHUB_RUN_ID])];
const attempts = [], unavailable = [], campaigns = [];
for (const id of ids) {
  assert.match(id, /^\d+$/);
  const run = json(`actions/runs/${id}`);
  if (!['.github/workflows/node-linux-acceptance.yml', '.github/workflows/installation-confidence.yml'].includes(run.path)) continue;
  assert.equal(run.head_branch, 'main'); assert.equal(run.repository.full_name, repository);
  // Attribute even failures before the installer starts to the exact scheduled
  // selection. Never make a lost log or failed preparation disappear from the
  // denominator just because it did not print an acceptance report.
  if (id !== candidate.baselineRunId) {
    const contents = json(`contents/scripts/ci/node-robustness-candidate.json?ref=${run.head_sha}`);
    const selected = JSON.parse(Buffer.from(contents.content, 'base64').toString('utf8'));
    if (!selected.active || selected.sha256 !== candidate.sha256 || selected.sourceRevision !== candidate.sourceRevision) continue;
  }
  // Query every original attempt, including failed jobs later rerun in the UI.
  for (let number = 1; number <= run.run_attempt; number++) {
    const listing = json(`actions/runs/${id}/attempts/${number}/jobs?per_page=100`);
    assert.equal(listing.jobs.length, listing.total_count);
    const native = listing.jobs.filter(j => / \/ installed$/.test(j.name));
    const faults = listing.jobs.filter(j => /Faults (?:linux|darwin|win32)-(?:x64|arm64)$/.test(j.name));
    campaigns.push({ runId: id, runAttempt: number, startedAt: run.created_at,
      nativePassed: native.length === 6 && native.every(j => j.conclusion === 'success'),
      faultsPassed: faults.length === 6 && faults.every(j => j.conclusion === 'success') });
    for (const platform of confidencePlatforms) {
      const name = platform.replace('win32', 'windows');
      const job = listing.jobs.find(j => j.name === `${name} / installed`);
      if (!job || job.status !== 'completed') continue;
      const attempt = { runId: id, runAttempt: number, jobId: String(job.id), platform, controlsRevision: run.head_sha,
        startedAt: job.started_at, conclusion: job.conclusion, url: job.html_url,
        archiveSha256: candidate.sha256, packageSourceRevision: candidate.sourceRevision,
        coldPassed: false, offlineNpmInstall: false, networkPassed: false, resourcePassed: false };
      try {
        const lines = api(`actions/jobs/${job.id}/logs`).split(/\r?\n/).map(line => line.replace(/^\uFEFF?\d{4}-\d{2}-\d{2}T\S+ /, ''));
        const os = platform.split('-')[0].replace('win32', 'windows');
        const acceptance = report(lines, `.work/node-${os}-acceptance/result.json`);
        // Selection was authenticated above. A mismatching observed package is
        // a failed attempt, not an observation that may be silently discarded.
        assert.equal(acceptance.archiveSha256, candidate.sha256);
        attempt.archiveSha256 = acceptance.archiveSha256;
        assert.equal(acceptance.platform, platform);
        assert.equal(acceptance.installation.provenance.sourceRevision, candidate.sourceRevision);
        assert.equal(acceptance.installation.packageVersion, candidate.version);
        assert.equal(acceptance.installation.support.node, candidate.node);
        assert.equal(acceptance.installation.support.lean, candidate.lean);
        assert.equal(acceptance.sourceRevision, run.head_sha);
        const installation = acceptance.installation;
        const cold = installation.steps.find(s => s.label === 'cold npx lasm Main.lean');
        attempt.coldPassed = acceptance.passed === true && cold?.code === 0
          && ['cold', 'lake', 'offline'].every(p => acceptance.phaseExecutions.some(e => e.phase === p && e.code === 0));
        attempt.coldSeconds = cold?.seconds;
        attempt.retryMessages = [...new Set((cold?.stderr ?? '').split('\n').filter(s => s.includes('[lasm] Retrying ')).map(s => s.replace(/ — .* elapsed$/, '')))];
        attempt.firstAttemptSucceeded = attempt.retryMessages.length === 0;
        attempt.offlineNpmInstall = installation.offlineNpmInstall?.emptyCache === true && installation.offlineNpmInstall?.networkDenied === true;
        const resources = report(lines, `.work/node-${os}-resources.json`), disk = report(lines, `.work/node-${os}-disk.json`);
        attempt.resourcePassed = disk.status === 'passed' && (platform.startsWith('win32')
          ? resources.status === 'passed' && resources.exitCode === 0 && !resources.stoppedBecause
            && resources.peakCommittedBytes < resources.limits.stopCommittedBytes
          : resources.result?.code === 0 && resources.unitReleased === true && resources.resourceLimited === false);
        if (platform.startsWith('linux')) attempt.resourcePassed &&= resources.service?.memoryEvents?.oom_kill === 0;
        const network = report(lines, '.work/node-network-result.json');
        assert.equal(network.archiveSha256, candidate.sha256); assert.equal(network.platform, platform);
        attempt.networkPassed = network.passed === true;
      } catch (error) { attempt.evidenceError = error.message; }
      attempts.push(attempt);
    }
    if (!listing.jobs.some(j => / \/ installed$/.test(j.name))) unavailable.push({ runId: id, runAttempt: number, conclusion: run.conclusion, reason: 'No native installed jobs ran' });
  }
}
const result = { ...installationConfidence(candidate, attempts), unavailable,
  campaigns: campaigns.sort((a, b) => Date.parse(a.startedAt) - Date.parse(b.startedAt) || a.runAttempt - b.runAttempt),
  collectedAt: new Date().toISOString(), retainedRunWindow: 30 };
result.passed &&= result.campaigns.at(-1)?.nativePassed === true && result.campaigns.at(-1)?.faultsPassed === true;
mkdirSync('.work', { recursive: true });
writeFileSync('.work/installation-confidence.json', JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result, null, 2));
// An incomplete multi-day gate is an honest pending result, not a failed tool
// install. Promotion code must explicitly require passed === true.
