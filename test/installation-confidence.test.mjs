import test from 'node:test';
import assert from 'node:assert/strict';
import { confidencePlatforms, installationConfidence } from '../scripts/ci/installation-confidence.mjs';

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
});
