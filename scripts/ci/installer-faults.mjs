import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { mkdirSync, writeFileSync } from 'node:fs';
import { release } from 'node:os';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
const tests = ['managed-download', 'managed-network', 'network-git', 'installation-confidence', 'candidate-readme', 'candidate-retention', 'managed-artifacts', 'managed-git',
  'cache-lifecycle', 'installer-bundle', 'sdk-archives', 'sdk-repairs', 'windows-tool-paths', 'windows-installer-faults',
  'application-lock', 'build-progress', 'cli-arguments', 'node-cache-controls',
  'darwin-resources', 'darwin-monitor-recovery'].map(name => `test/${name}.test.mjs`);
assert.equal(process.platform + '-' + process.arch, process.env.LASM_EXPECT_PLATFORM ?? process.platform + '-' + process.arch);
const started = new Date().toISOString();
const result = spawnSync(process.execPath, ['--max-old-space-size=192', '--test', '--test-concurrency=1', '--test-reporter=spec', ...tests],
  { encoding: 'utf8', maxBuffer: 8 * 1024 * 1024, timeout: 180_000, windowsHide: true });
process.stdout.write(result.stdout ?? ''); process.stderr.write(result.stderr ?? '');
const count = field => Number(new RegExp(`(?:^|\\n)[^\\n]*?${field} (\\d+)(?:\\r?\\n|$)`).exec(result.stdout ?? '')?.[1] ?? NaN);
const report = { schema: 1, scope: 'Deterministic installer controls; separate from full installed-package acceptance',
  revision: process.env.GITHUB_SHA, runId: process.env.GITHUB_RUN_ID, runAttempt: process.env.GITHUB_RUN_ATTEMPT,
  platform: process.platform + '-' + process.arch, os: release(), node: process.versions.node,
  started, finished: new Date().toISOString(), tests, total: count('tests'), passed: count('pass'), failed: count('fail'),
  skipped: count('skipped'), code: result.status, signal: result.signal, error: result.error?.message };
mkdirSync('.work', { recursive: true });
writeFileSync('.work/installer-faults.json', JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
assert.ifError(result.error);
assert.equal(result.status, 0, 'Installer fault controls must all pass');
assert.ok(report.total >= 120 && report.passed + report.skipped === report.total, 'Preserve complete test accounting');
