import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { mkdtempSync, readFileSync, rmSync, existsSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';

const adapter = fileURLToPath(new URL('../scripts/full-lean/benchmark-measure.py', import.meta.url));
// This is the Linux maintainer harness, not a package/runtime dependency.
const onLinux = { skip: process.platform !== 'linux' };
const fixture = callback => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-benchmark-measure-'));
  try { callback(join(directory, 'metrics.jsonl')); }
  finally { rmSync(directory, { recursive: true, force: true }); }
};
const run = (output, options, code, args = []) => spawnSync('python3', [adapter,
  '-t', 'control', '-o', output, ...options, '--', 'python3', '-c', code, ...args], { encoding: 'utf8' });

test('benchmark measurements preserve literal arguments and both output streams', onLinux, () => fixture(output => {
  const args = ['a b', "single'quote", '$(false)', '--flag'];
  const result = run(output, ['-d'], 'import json,sys; print(json.dumps(sys.argv[1:])); print("diagnostic", file=sys.stderr)', args);
  assert.equal(result.status, 0, result.stderr);
  assert.deepEqual(JSON.parse(result.stdout), args);
  assert.equal(result.stderr, 'diagnostic\n');
  const rows = readFileSync(output, 'utf8').trim().split('\n').map(JSON.parse);
  assert.deepEqual(rows.map(row => row.metric), ['control//maxrss', 'control//task-clock', 'control//wall-clock']);
  for (const row of rows) assert.ok(Number.isFinite(row.value) && row.value >= 0);
  assert.equal(rows[0].unit, 'B');
  assert.equal(rows[1].unit, 's');
  assert.equal(rows[2].unit, 's');
  const append = run(output, ['-a', '-m', 'wall-clock'], 'pass');
  assert.equal(append.status, 0, append.stderr);
  assert.equal(readFileSync(output, 'utf8').trim().split('\n').length, 4);
}));

test('failed and signal-terminated commands remain failures without success measurements', onLinux, () => fixture(output => {
  const failed = run(output, ['-d'], 'import sys; print("failed output"); sys.exit(23)');
  assert.equal(failed.status, 23);
  assert.equal(failed.stdout, 'failed output\n');
  assert.equal(existsSync(output), false);
  const signalled = run(output, ['-d'], 'import os,signal; os.kill(os.getpid(), signal.SIGTERM)');
  assert.equal(signalled.status, 143);
  assert.equal(existsSync(output), false);
}));

test('unavailable hardware counters are rejected before executing the command', onLinux, () => fixture(output => {
  const result = run(output, ['-m', 'instructions'], 'print("must not run")');
  assert.notEqual(result.status, 0);
  assert.equal(result.stdout, '');
  assert.match(result.stderr, /hardware performance counters are unavailable/);
  assert.equal(existsSync(output), false);
}));
