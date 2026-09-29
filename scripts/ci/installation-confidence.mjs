import assert from 'node:assert/strict';

export const confidencePlatforms = ['linux-x64', 'linux-arm64', 'darwin-x64', 'darwin-arm64', 'win32-x64', 'win32-arm64'];

/** A practical regression gate, not a statistical reliability estimate. Keep
 * failed and interrupted attempts visible even when later attempts succeed.
 */
export function installationConfidence(candidate, attempts, { repetitions = 3, minimumSpanHours = 24 } = {}) {
  assert.match(candidate.sha256, /^[a-f0-9]{64}$/);
  assert.match(candidate.sourceRevision, /^[a-f0-9]{40}$/);
  const seen = new Set(), history = [];
  for (const attempt of attempts) {
    if (attempt.archiveSha256 !== candidate.sha256 || attempt.packageSourceRevision !== candidate.sourceRevision) continue;
    assert.ok(confidencePlatforms.includes(attempt.platform));
    const key = `${attempt.runId}/${attempt.runAttempt}/${attempt.jobId}`;
    if (seen.has(key)) continue;
    seen.add(key);
    const timestamp = Date.parse(attempt.startedAt);
    assert.ok(Number.isFinite(timestamp), 'Every observed attempt needs its real job start time');
    const qualified = attempt.conclusion === 'success' && attempt.coldPassed === true
      && attempt.offlineNpmInstall === true && attempt.networkPassed === true && attempt.resourcePassed === true;
    history.push({ ...attempt, qualified });
  }
  history.sort((a, b) => Date.parse(a.startedAt) - Date.parse(b.startedAt));
  const platforms = Object.fromEntries(confidencePlatforms.map(platform => {
    const observed = history.filter(a => a.platform === platform), successful = observed.filter(a => a.qualified);
    const lastFailure = observed.findLastIndex(a => !a.qualified), clean = observed.slice(lastFailure + 1);
    const dates = [...new Set(clean.map(a => new Date(a.startedAt).toISOString().slice(0, 10)))];
    const spanHours = clean.length > 1 ? (Date.parse(clean.at(-1).startedAt) - Date.parse(clean[0].startedAt)) / 3600_000 : 0;
    // A later failure restarts the clean sequence, not just the next job. All
    // previous observations remain in the report and its overall success count.
    return [platform, { observed: observed.length, successful: successful.length,
      failedOrUnverified: observed.length - successful.length, consecutiveSuccessful: clean.length, dates, spanHours,
      passed: clean.length >= repetitions && dates.length >= 2 && spanHours >= minimumSpanHours }];
  }));
  return { schema: 1, candidate, requirements: { platforms: confidencePlatforms, repetitions, consecutive: true, minimumDays: 2, minimumSpanHours },
    passed: confidencePlatforms.every(platform => platforms[platform].passed), platforms, attempts: history,
    limitation: 'Repeated hosted-runner checks plus deterministic faults increase practical confidence. They do not prove a 99.9% success rate or independence, and cannot guarantee arbitrary networks, disks or machines.' };
}
