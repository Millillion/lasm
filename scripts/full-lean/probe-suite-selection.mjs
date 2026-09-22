// Exercise the actual CTest adapter: an empty selection must fail, while an
// explicitly selected original registration must still execute successfully.
import assert from 'node:assert/strict';
import { closeSync, existsSync, mkdirSync, openSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [suiteArg, outputArg, name] = process.argv.slice(2);
assert.ok(suiteArg && outputArg && name, 'Supply SUITE, NEW_OUTPUT and an existing test name');
const suite = resolve(suiteArg), output = resolve(outputArg);
assert.ok(!existsSync(output), 'Use a fresh output directory');
const manifest = JSON.parse(readFileSync(join(suite, 'parallel-suite.json')));
assert.equal(manifest.tests.filter(test => test.name === name).length, 1);
const missing = '__lasm_empty_selection_control__';
assert.ok(!manifest.tests.some(test => test.name === missing));
mkdirSync(output, { recursive: true });
const runner = resolve('scripts/full-lean/run-suite.mjs');
const hash = path => createHash('sha256').update(readFileSync(path)).digest('hex');
const runnerHash = hash(runner);
const report = { scope: 'Actual empty-selection failure and one unchanged positive upstream control; not a complete Lean suite.',
  suite, name, resourceReport: process.env.LASM_RESOURCE_REPORT, runnerSha256: runnerHash, cases: [] };
const escaped = value => value.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
for (const [label, selected] of [['empty', missing], ['positive', name]]) {
  const results = join(output, label);
  const log = join(output, label + '.log');
  const command = [runner, '--suite', suite, '--results', results, '--jobs', '1', '--filter', `^${escaped(selected)}$`];
  const fd = openSync(log, 'wx');
  let result;
  try { result = spawnSync(process.execPath, command, { stdio: ['ignore', fd, fd], timeout: 120_000 }); }
  finally { closeSync(fd); }
  const execution = JSON.parse(readFileSync(join(results, 'execution.json')));
  const progress = JSON.parse(readFileSync(join(results, 'progress.json')));
  assert.equal(result.error, undefined);
  assert.equal(result.signal, null);
  assert.equal(result.status, execution.result.code);
  assert.ok(Object.values(execution.originalSources).every(check => check.checked > 0 && check.modified.length === 0));
  assert.ok(Object.values(execution.harnessArtifacts).every(check => check.modified.length === 0));
  if (label === 'empty') {
    assert.notEqual(result.status, 0);
    assert.deepEqual(progress.completed, []);
    assert.match(readFileSync(log, 'utf8'), /No tests were found/);
  } else {
    assert.equal(result.status, 0, readFileSync(log, 'utf8'));
    assert.equal(progress.completed.length, 1);
    assert.equal(progress.completed[0].name, name);
    assert.equal(progress.completed[0].result, 'Passed');
  }
  report.cases.push({ label, command, code: result.status, results, log, execution, completed: progress.completed });
  writeFileSync(join(output, 'verification.json'), JSON.stringify(report, null, 2) + '\n');
  console.log(JSON.stringify({ label, code: result.status, completed: progress.completed.length }));
}
assert.equal(hash(runner), runnerHash);
report.passed = true;
writeFileSync(join(output, 'verification.json'), JSON.stringify(report, null, 2) + '\n');
