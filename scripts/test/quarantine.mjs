// Quarantined flaky tests (docs/TESTING.md#flaky-tests). test/quarantine.json
// lists each one: { file, name, issue, since, reason }. `name` is the test's
// own name as given to test()/it(); node --test skips it through
// --test-skip-pattern (an anchored, escaped pattern), with a notice. An entry
// may stay at most MAX_DAYS days: then the test is fixed (entry removed) or
// deleted.
import { readFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';

export const MAX_DAYS = 7;
export const QUARANTINE_FILE = fileURLToPath(new URL('../../test/quarantine.json', import.meta.url));
const DAY = 86_400_000;
const escape = text => text.replace(/[.*+?^${}()|[\]\\/]/g, '\\$&');
const normalize = file => file.replace(/\\/g, '/').replace(/^\.\//, '');

export function loadQuarantine(path = QUARANTINE_FILE) {
  return JSON.parse(readFileSync(path, 'utf8')).tests ?? [];
}

/** Problems with the list: missing fields, bad dates, duplicates, entries past MAX_DAYS. */
export function quarantineProblems(entries, today = new Date()) {
  const problems = [], seen = new Set();
  for (const [index, entry] of entries.entries()) {
    const at = `test/quarantine.json entry ${index + 1}${entry?.name ? ` (${entry.name})` : ''}`;
    for (const field of ['file', 'name', 'issue', 'since', 'reason'])
      if (typeof entry?.[field] !== 'string' || entry[field].trim() === '') problems.push(`${at}: missing ${field}`);
    if (typeof entry?.issue === 'string' && !/^https:\/\/github\.com\/Millillion\/lasm\/issues\/\d+$/.test(entry.issue))
      problems.push(`${at}: issue must be a Millillion/lasm issue URL`);
    if (typeof entry?.since === 'string') {
      const since = Date.parse(entry.since + 'T00:00:00Z');
      if (!/^\d{4}-\d{2}-\d{2}$/.test(entry.since) || Number.isNaN(since)) problems.push(`${at}: since must be YYYY-MM-DD`);
      else if (since > today.getTime()) problems.push(`${at}: since is in the future`);
      else if (ageDays(entry, today) > MAX_DAYS) problems.push(`${at}: quarantined ${ageDays(entry, today)} days ago (limit ${MAX_DAYS}); fix the test and remove the entry, or delete the test (${entry.issue})`);
    }
    const key = `${normalize(entry?.file ?? '')}\0${entry?.name}`;
    if (seen.has(key)) problems.push(`${at}: duplicate`);
    seen.add(key);
  }
  return problems;
}

export function ageDays(entry, today = new Date()) {
  return Math.floor((today.getTime() - Date.parse(entry.since + 'T00:00:00Z')) / DAY);
}

/** Entries that apply to a run of `files` (every entry when no file is named). */
export function entriesFor(entries, files = []) {
  if (files.length === 0) return entries;
  const wanted = new Set(files.map(normalize));
  return entries.filter(entry => wanted.has(normalize(entry.file)));
}

/** node --test arguments that skip the given entries. */
export function skipArguments(entries) {
  return entries.map(entry => `--test-skip-pattern=^${escape(entry.name)}$`);
}

/** One line per skipped test; a GitHub Actions notice when running there. */
export function notices(entries, env = process.env) {
  return entries.map(entry => {
    const text = `Quarantined flaky test skipped: ${entry.file} › ${entry.name} (since ${entry.since}, ${entry.issue})`;
    return env.GITHUB_ACTIONS === 'true' ? `::notice title=Quarantined test::${text}` : text;
  });
}
