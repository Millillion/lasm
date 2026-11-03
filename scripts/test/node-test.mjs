// `node --test` with the quarantine applied (docs/TESTING.md#flaky-tests):
//   node scripts/test/node-test.mjs [node --test options…] FILE…
// Quarantined tests of the named files (every quarantined test when no file is
// named) are skipped with a notice; an entry past the 7-day limit, or a
// malformed one, fails the run before any test starts.
import { spawnSync } from 'node:child_process';
import { entriesFor, loadQuarantine, notices, quarantineProblems, skipArguments } from './quarantine.mjs';

const args = process.argv.slice(2);
const entries = loadQuarantine();
const problems = quarantineProblems(entries);
if (problems.length) {
  for (const problem of problems) console.error(process.env.GITHUB_ACTIONS === 'true' ? `::error title=Quarantine::${problem}` : problem);
  process.exit(1);
}
const files = args.filter(arg => !arg.startsWith('-') && /\.(?:test\.)?[cm]?[jt]s$/.test(arg));
const applied = entriesFor(entries, files);
for (const line of notices(applied)) console.log(line);
const run = spawnSync(process.execPath, ['--test', ...skipArguments(applied), ...args], { stdio: 'inherit' });
process.exit(run.status ?? 1);
