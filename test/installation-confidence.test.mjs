import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { confidencePlatforms, installationConfidence, unavailableInstallation, resourceReportPassed } from '../scripts/ci/installation-confidence.mjs';

const candidate = { version: '0.1.0-experimental.47', sha256: 'a'.repeat(64), sourceRevision: 'b'.repeat(40) };
const attempts = () => confidencePlatforms.flatMap((platform, i) => [0, 12, 25].map((hours, n) => ({
  platform, runId: String(n + 1), runAttempt: 1, jobId: String(i * 10 + n),
  startedAt: new Date(Date.UTC(2026, 8, 29) + hours * 3600_000).toISOString(),
  archiveSha256: candidate.sha256, packageSourceRevision: candidate.sourceRevision,
  conclusion: 'success', coldPassed: true, offlineNpmInstall: true, networkPassed: true, resourcePassed: true,
})));

test('confidence requires all six targets, the exact candidate, three cold trials and real time separation', () => {
  const records = attempts();
  assert.equal(installationConfidence(candidate, records).passed, true);
  for (const change of [
    rows => rows.filter(r => r.platform !== 'win32-arm64'),
    rows => rows.filter(r => r.runId !== '3'),
    rows => rows.map(r => ({ ...r, startedAt: '2026-09-29T01:00:00Z' })),
    rows => rows.map(r => ({ ...r, archiveSha256: 'c'.repeat(64) })),
    rows => rows.map(r => ({ ...r, packageSourceRevision: 'd'.repeat(40) })),
    rows => rows.map(r => ({ ...r, startedAt: r.runId === '3' ? '2026-09-30T00:01:00Z' : '2026-09-29T23:59:00Z' })),
  ]) assert.equal(installationConfidence(candidate, change(records)).passed, false);
});

test('green job status alone cannot replace cold/offline/network/resource evidence', () => {
  for (const field of ['coldPassed', 'offlineNpmInstall', 'networkPassed', 'resourcePassed']) {
    const records = attempts(); records[0][field] = false;
    assert.equal(installationConfidence(candidate, records).passed, false, field);
  }
});

test('duplicate reports do not inflate trials and failures remain visible after recovery', () => {
  const records = attempts(), failed = { ...records[0], runId: '0', jobId: 'failed', conclusion: 'failure', startedAt: '2026-09-28T00:00:00Z' };
  const report = installationConfidence(candidate, [failed, ...records, ...records]);
  assert.equal(report.passed, true); assert.equal(report.attempts.length, 19);
  assert.equal(report.platforms['linux-x64'].failedOrUnverified, 1);
  assert.equal(report.attempts[0].conclusion, 'failure');
  const latestFailure = { ...failed, runId: '4', jobId: 'latest', startedAt: '2026-09-30T02:00:00Z' };
  assert.equal(installationConfidence(candidate, [...records, latestFailure]).passed, false);
  const oneRetry = { ...records[0], runId: '5', jobId: 'single-retry', startedAt: '2026-09-30T03:00:00Z' };
  const recovered = installationConfidence(candidate, [...records, latestFailure, oneRetry]);
  assert.equal(recovered.passed, false, 'One green retry does not reuse earlier passes from before the failure');
  assert.equal(recovered.platforms['linux-x64'].consecutiveSuccessful, 1);
});

test('failed preparation resets every affected platform without pretending an installer ran', () => {
  const records = attempts();
  const missing = confidencePlatforms.map(platform => unavailableInstallation(candidate, {
    platform, runId: '4', runAttempt: 1, controlsRevision: candidate.sourceRevision,
    startedAt: '2026-09-30T02:00:00Z', conclusion: 'failure',
  }));
  const recovered = records.filter(r => r.runId === '3').map(r => ({ ...r, runId: '5', jobId: r.jobId + '-retry', startedAt: '2026-09-30T03:00:00Z' }));
  const report = installationConfidence(candidate, [...records, ...missing, ...recovered]);
  assert.equal(report.passed, false);
  for (const platform of confidencePlatforms) {
    assert.equal(report.platforms[platform].unavailableCampaigns, 1);
    assert.equal(report.platforms[platform].consecutiveSuccessful, 1);
    assert.equal(report.platforms[platform].successful, 4);
  }
});

test('timings and recovered downloads remain separate from failed and unmeasured attempts', () => {
  const records = attempts().map(r => ({ ...r, coldSeconds: Number(r.runId) * 10, firstAttemptSucceeded: r.runId !== '2' }));
  records.push({ ...records[0], runId: '0', jobId: 'failed', startedAt: '2026-09-28T00:00:00Z', conclusion: 'failure', coldSeconds: 9999 });
  const report = installationConfidence(candidate, records);
  assert.equal(report.passed, true);
  assert.deepEqual(report.platforms['linux-x64'].coldSeconds, { samples: 3, median: 20, p95: 30, maximum: 30 });
  assert.equal(report.platforms['linux-x64'].withoutDownloadRetries, 2);
  assert.equal(report.platforms['linux-x64'].recoveredDownloadRetries, 1);
  const unmeasured = installationConfidence(candidate, attempts()).platforms['linux-x64'];
  assert.deepEqual(unmeasured.coldSeconds, { samples: 0, median: null, p95: null, maximum: null });
});

test('real resource-aborted reports cannot count as clean runs despite service exit zero', () => {
  const abort = JSON.parse(readFileSync(new URL('../docs/evidence/installer-network-resource-abort-2026-09-29.json', import.meta.url))).resourceReport;
  assert.equal(abort.result.code, 0, 'The real guard terminated the unit and returned a service-level success');
  assert.equal(abort.resourceLimited, true);
  assert.equal(resourceReportPassed('linux-x64', abort), false);
  const macAbort = JSON.parse(readFileSync(new URL('../docs/evidence/installer-macos-accounting-abort-2026-09-29.json', import.meta.url))).resourceReport;
  assert.equal(macAbort.monitorError, 'spawnSync /bin/ps ETIMEDOUT');
  assert.equal(resourceReportPassed('darwin-x64', macAbort), false);
  for (const platform of confidencePlatforms) assert.equal(resourceReportPassed(platform, {}), false);
  for (const platform of ['linux-x64', 'darwin-arm64', 'win32-x64']) {
    const accepted = JSON.parse(readFileSync(new URL(`../docs/evidence/node46-${platform}-2026-09-28.json`, import.meta.url)));
    assert.equal(resourceReportPassed(platform, accepted.resources), true, platform);
  }
});
