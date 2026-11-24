import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { readFileSync, mkdtempSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { workingSetBytes } from '../scripts/full-lean/resource-guard.mjs';

const guard = fileURLToPath(new URL('../scripts/full-lean/run-bounded.mjs', import.meta.url));
const systemd = process.platform === 'linux'
  && spawnSync('systemd-run', ['--user', '--quiet', '--wait', '--collect', 'true']).status === 0;
// The guard allows one workload per checkout: inside one (scripts/ci/unit-tests.mjs
// runs the suite bounded) a second launch is refused by design.
let nested = false;
try { nested = /lasm-heavy-/.test(readFileSync('/proc/self/cgroup', 'utf8')); } catch { /* not Linux */ }

test('bounded workloads keep the variables that make tools non-interactive (#64)',
  { skip: (!systemd && 'needs systemd-run --user') || (nested && 'already inside this checkout\'s bounded workload') }, () => {
  const names = ['CI', 'GITHUB_ACTIONS', 'BROWSER', 'LASM_EDITOR'];
  const script = `process.stdout.write(JSON.stringify(Object.fromEntries(${JSON.stringify(names)}.map(n => [n, process.env[n] ?? null]))))`;
  const result = spawnSync(process.execPath, [guard, '--memory-mib', '512', '--', process.execPath, '-e', script], {
    encoding: 'utf8', env: { ...process.env, CI: '1', GITHUB_ACTIONS: 'true', BROWSER: 'none', LASM_EDITOR: 'true' } });
  assert.equal(result.status, 0, result.stderr);
  const line = result.stdout.split('\n').find(l => l.startsWith('{'));
  assert.deepEqual(JSON.parse(line), { CI: '1', GITHUB_ACTIONS: 'true', BROWSER: 'none', LASM_EDITOR: 'true' });
});

test('the proactive budget counts the working set, not inactive file cache', () => {
  // Netlify Functions builds stopped at 4.3 GiB of memory.current on 16 GiB
  // runners, most of it the page cache of the toolchains a build extracts.
  const MiB = 2 ** 20;
  assert.equal(workingSetBytes(4506 * MiB, { anon: 1536 * MiB, inactive_file: 2560 * MiB }), 1946 * MiB);
  assert.equal(workingSetBytes(100, { anon: 100 }), 100);
  assert.equal(workingSetBytes(100, { inactive_file: 150 }), 0);
});

test('a workload whose page cache exceeds the budget is not stopped; MemoryMax reclaims it',
  { skip: (!systemd && 'needs systemd-run --user') || (nested && 'already inside this checkout\'s bounded workload') }, () => {
  // 512 MiB cap, 410 MiB proactive budget: write and fsync 768 MiB, 32 MiB at a
  // time, so clean cache (not dirty pages or anonymous memory) fills the cgroup.
  const dir = mkdtempSync(join(tmpdir(), 'lasm-cache-'));
  try {
    const script = `const fs = require('node:fs'); const fd = fs.openSync(${JSON.stringify(join(dir, 'cache'))}, 'w');
      const chunk = Buffer.alloc(32 * 2 ** 20, 1); for (let i = 0; i < 24; i++) { fs.writeSync(fd, chunk); fs.fsyncSync(fd); }
      fs.closeSync(fd);`;
    const report = join(dir, 'report.json');
    const result = spawnSync(process.execPath, [guard, '--memory-mib', '512', '--report', report, '--', process.execPath, '-e', script], { encoding: 'utf8' });
    const evidence = JSON.parse(readFileSync(report, 'utf8'));
    assert.equal(result.status, 0, result.stderr);
    assert.equal(evidence.stoppedBecause, undefined);
    assert.ok(evidence.peakMemoryBytes >= evidence.limits.stopMemoryBytes,
      `cache should pass the budget (peak ${evidence.peakMemoryBytes}, budget ${evidence.limits.stopMemoryBytes})`);
    assert.ok(evidence.peakWorkingSetBytes < evidence.limits.stopMemoryBytes);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});
