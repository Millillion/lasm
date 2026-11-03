// The unit suite in CI (.github/workflows/unit.yml): every test/*.test.mjs file
// in its own `node --test` process (one at a time, under the resource guard),
// with each failing test's name recorded. A file listed in `needsTools` is run
// too, but its failures are reported, not fatal, with the reason it cannot pass
// on this runner; every other failure fails the job. Quarantined flaky tests
// (test/quarantine.json, docs/TESTING.md#flaky-tests) are skipped with a
// notice, and an entry past its week fails the job.
//   node scripts/ci/unit-tests.mjs RESULT.json
import { spawnSync } from 'node:child_process';
import { readdirSync, writeFileSync, mkdirSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { entriesFor, loadQuarantine, notices, quarantineProblems, skipArguments } from '../test/quarantine.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const out = resolve(process.argv[2] ?? '.work/unit-tests.json');
// Files whose tests need tools the unit job does not install, with the reason
// (file name → reason). None now: the 29 files that built with the retired
// Lean 4.32 library pipeline were ported to integration/host-fixtures.mjs
// (differential.yml) or retired (docs/TESTING.md#test-quality-audit).
export const needsTools = {};
const files = readdirSync(join(root, 'test')).filter(name => name.endsWith('.test.mjs')).sort();
const result = { startedAt: new Date().toISOString(), node: process.version, files: [] };
const quarantine = loadQuarantine();
result.quarantineProblems = quarantineProblems(quarantine);
for (const problem of result.quarantineProblems) console.log(process.env.GITHUB_ACTIONS === 'true' ? `::error title=Quarantine::${problem}` : problem);
let failed = result.quarantineProblems.length ? 1 : 0;
for (const name of files) {
  const started = performance.now();
  const quarantined = entriesFor(quarantine, ['test/' + name]);
  for (const line of notices(quarantined)) console.log(line);
  const run = spawnSync(process.execPath, [join(root, 'scripts/full-lean/run-bounded.mjs'), '--memory-mib', '6144', '--',
    process.execPath, '--test', '--test-concurrency=1', '--test-reporter=spec', ...skipArguments(quarantined), join('test', name)],
  { cwd: root, encoding: 'utf8', maxBuffer: 256 * 1024 * 1024, timeout: 1800_000, env: { ...process.env, NO_COLOR: '1' } });
  const output = (run.stdout ?? '') + (run.stderr ?? '');
  const failures = [...new Set(output.split('\n').filter(line => /^\s*✖ /.test(line) && !/failing tests:/.test(line))
    .map(line => line.trim().replace(/ \([\d.]+m?s\)$/, '')))];
  const passed = run.status === 0;
  const entry = { file: name, passed, seconds: +((performance.now() - started) / 1000).toFixed(1), failures,
    ...(needsTools[name] ? { needsTools: needsTools[name] } : {}),
    ...(quarantined.length ? { quarantined: quarantined.map(entry => entry.name) } : {}), ...(passed ? {} : { tail: output.slice(-4000) }) };
  result.files.push(entry);
  if (!passed && !needsTools[name]) failed++;
  console.log(`${passed ? 'ok  ' : needsTools[name] ? 'skip' : 'FAIL'} ${name} (${entry.seconds} s)${passed ? '' : ': ' + failures.slice(0, 5).join('; ')}`);
  mkdirSync(dirname(out), { recursive: true });
  writeFileSync(out, JSON.stringify(result, null, 2) + '\n');
}
result.failedFiles = failed;
writeFileSync(out, JSON.stringify(result, null, 2) + '\n');
console.log(`${files.length} files; ${failed} failed${result.quarantineProblems.length ? ' (including the quarantine list)' : ''}${failed ? '' : ' (tool-dependent files reported above)'}`);
process.exit(failed ? 1 : 0);
