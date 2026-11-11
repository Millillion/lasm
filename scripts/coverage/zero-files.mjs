// Exit bar 3 (docs/TESTING_STRATEGY.md §7): every file the unit suite leaves at
// 0 % of its lines is either run by an integration workflow named in the
// coverage baseline's `integration` list, or removed. report.mjs prints the
// result (the evidence page reads that line) and, with --check, fails on a 0 %
// file nobody names or on a named workflow that does not exist.
import { existsSync } from 'node:fs';
import { join } from 'node:path';

/** files: report.mjs's per-file entries; integration: [{ file, workflows: ['x.yml'], how }].
 * Returns the 0 % files, which of them are named, those that are not, named
 * workflows that do not exist, and entries for files no longer at 0 % (stale). */
export function zeroCoverage(files, integration = [], { workflowsDir } = {}) {
  const named = new Map(integration.map(entry => [entry.file, entry]));
  const zero = files.filter(f => f.lines.total > 0 && f.lines.covered === 0).map(f => f.file).sort();
  const measured = new Set(files.map(f => f.file));
  const missingWorkflows = workflowsDir
    ? integration.flatMap(entry => (entry.workflows ?? []).filter(w => !existsSync(join(workflowsDir, w))).map(w => `${entry.file}: ${w}`))
    : [];
  const empty = integration.filter(entry => !entry.workflows?.length).map(entry => entry.file);
  return {
    zero,
    named: zero.filter(f => named.has(f)),
    unnamed: zero.filter(f => !named.has(f)),
    missingWorkflows: [...missingWorkflows, ...empty.map(f => `${f}: no workflow`)],
    stale: integration.map(e => e.file).filter(f => !zero.includes(f) && measured.has(f)),
  };
}

/** The line report.mjs prints and scripts/evidence/page.mjs parses. */
export function zeroCoverageLine(result) {
  return `0 % files: ${result.zero.length}, named in the baseline: ${result.named.length}, not named: ${result.unnamed.length ? result.unnamed.join(' ') : 'none'}`;
}
