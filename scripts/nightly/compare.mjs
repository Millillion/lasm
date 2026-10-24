// Nightly: compare tonight's upstream-suite and ecosystem outcomes with the latest
// recorded baseline (scripts/nightly/baseline.json). A regression is a test or
// project that passed in the baseline and does not pass now. Resource stops are
// listed separately (not a Lasm result); tests the baseline has but tonight's
// completed runs lack are listed as missing. Pure functions, for tests.
export const passing = new Set(['pass', 'pass-with-harness-exclusions']);
export const runnerPlatform = { 'ubuntu-24.04': 'linux-x64', 'ubuntu-24.04-arm': 'linux-arm64', 'macos-15-intel': 'darwin-x64',
  'macos-15': 'darwin-arm64', 'windows-2025': 'win32-x64' };

/** coverage: { platform: { results: [{ harness, name, outcome }] } } (scripts/language-coverage/assemble.mjs per platform).
 * ran: the [platform, harness] pairs tonight's runs were dispatched for. */
export function compareCoverage(baseline, current, ran) {
  const out = { regressions: [], fixed: [], resourceStops: [], missing: [], compared: 0 };
  const covered = new Set(ran.map(([platform, harness]) => `${platform}|${harness}`));
  for (const [platform, data] of Object.entries(baseline.platforms ?? {})) {
    const now = new Map((current[platform]?.results ?? []).map(r => [`${r.harness}|${r.name}`, r]));
    for (const before of data.results ?? []) {
      if (!covered.has(`${platform}|${before.harness}`)) continue;
      const after = now.get(`${before.harness}|${before.name}`), item = { platform, harness: before.harness, name: before.name, baseline: before.outcome };
      if (!after) { if (passing.has(before.outcome)) out.missing.push(item); continue; }
      out.compared++;
      item.now = after.outcome;
      if (after.outcome === 'resource-stop') { if (passing.has(before.outcome)) out.resourceStops.push(item); }
      else if (passing.has(before.outcome) && !passing.has(after.outcome)) out.regressions.push({ ...item, reason: after.reason });
      else if (!passing.has(before.outcome) && passing.has(after.outcome)) out.fixed.push(item);
    }
  }
  return out;
}

/** ecosystem: { results: [{ project, platform, result }] } (scripts/ecosystem/assemble.mjs);
 * ranPlatforms: the platforms tonight's runs were dispatched for. */
export function compareEcosystem(baseline, current, variant = 'default', ranPlatforms) {
  const out = { regressions: [], fixed: [], resourceStops: [], missing: [], compared: 0 };
  const now = new Map(current.results.map(r => [`${r.platform}|${r.project}`, r]));
  const platforms = new Set(ranPlatforms ?? current.results.map(r => r.platform));
  for (const before of baseline.results ?? []) {
    if (!platforms.has(before.platform)) continue;
    const after = now.get(`${before.platform}|${before.project}`);
    const item = { platform: before.platform, harness: `ecosystem${variant === 'default' ? '' : ` (${variant})`}`, name: before.project, baseline: before.result };
    if (!after) { if (before.result === 'pass') out.missing.push(item); continue; }
    out.compared++;
    item.now = after.result;
    if (after.result === 'resource-stop') { if (before.result === 'pass') out.resourceStops.push(item); }
    else if (before.result === 'pass' && after.result !== 'pass') out.regressions.push(item);
    else if (before.result !== 'pass' && after.result === 'pass') out.fixed.push(item);
  }
  return out;
}

export function merge(...parts) {
  const out = { regressions: [], fixed: [], resourceStops: [], missing: [], compared: 0 };
  for (const part of parts) for (const key of Object.keys(out)) out[key] = key === 'compared' ? out[key] + part[key] : [...out[key], ...part[key]];
  return out;
}

const row = r => `| ${r.platform} | ${r.harness} | \`${r.name}\` | ${r.baseline} | ${r.now ?? 'no result'} |`;
export function markdown(report, { limit = 80 } = {}) {
  const c = report.comparison, table = list => list.length ? ['| Platform | Harness | Test | Baseline | Tonight |', '| --- | --- | --- | --- | --- |',
    ...list.slice(0, limit).map(row), ...(list.length > limit ? [`\n… and ${list.length - limit} more (see the nightly-report artifact)`] : [])].join('\n') : 'None.';
  return `## Nightly ${report.date}: ${c.regressions.length} regressions, ${c.missing.length} missing results

Commit \`${report.sha}\`, candidate \`${report.candidate.version}\` (${report.candidate.release}); nightly runs: ${report.nightlyRuns.map(id => `[${id}](https://github.com/Millillion/lasm/actions/runs/${id})`).join(', ')}.
Baseline: ${Object.values(report.baseline).map(f => `\`${f}\``).join(', ')}. ${c.compared} results compared; ${c.fixed.length} newly passing; ${c.resourceStops.length} resource stops (not a Lasm result).
${report.failedRuns.length ? `\nDispatched runs that did not succeed: ${report.failedRuns.map(r => `[${r.label}](https://github.com/Millillion/lasm/actions/runs/${r.id}) (${r.conclusion})`).join(', ')}.\n` : ''}
### Regressions (passed in the baseline, not tonight)

${table(c.regressions)}

### Missing results (passed in the baseline; no result tonight)

${table(c.missing)}

This issue is updated by \`.github/workflows/nightly.yml\`; it never blocks a release.
`;
}
