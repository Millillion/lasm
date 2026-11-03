import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { readFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';

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
