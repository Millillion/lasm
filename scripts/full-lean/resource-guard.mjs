// Maintainer-harness protection. This does not change Lean program semantics.
import { readFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawn, spawnSync } from 'node:child_process';

export const GiB = 1024 ** 3;
export function hostMemory() {
  const values = Object.fromEntries([...readFileSync('/proc/meminfo', 'utf8')
    .matchAll(/^(\w+):\s+(\d+) kB$/gm)].map(([, key, value]) => [key, Number(value) * 1024]));
  return { total: values.MemTotal, available: values.MemAvailable };
}
export function currentCgroup() {
  const path = readFileSync('/proc/self/cgroup', 'utf8').match(/^0::(.+)$/m)?.[1];
  if (!path) throw new Error('The full-runtime harness requires cgroup v2');
  return join('/sys/fs/cgroup', path);
}
export function hasResourceGuard() {
  if (process.platform === 'win32') {
    if (!process.env.LASM_RESOURCE_UNIT || !process.env.LASM_RESOURCE_PYTHON) return false;
    // Query the actual named Job Object and this descendant's membership.
    // An inherited environment marker alone does not establish a memory cap.
    const checked = spawnSync(process.env.LASM_RESOURCE_PYTHON, ['-I', '-B',
      fileURLToPath(new URL('./run-bounded-windows.py', import.meta.url)), '--check-current'],
      { encoding: 'utf8', timeout: 10_000, windowsHide: true });
    return !checked.error && checked.status === 0;
  }
  if (process.platform !== 'linux' || !process.env.LASM_RESOURCE_UNIT) return false;
  try {
    const path = currentCgroup();
    const max = Number(readFileSync(join(path, 'memory.max'), 'utf8'));
    return path.endsWith('/' + process.env.LASM_RESOURCE_UNIT) && max > 0 && max <= 10 * GiB
      && readFileSync(join(path, 'memory.high'), 'utf8').trim() === 'max'
      && readFileSync(join(path, 'memory.oom.group'), 'utf8').trim() === '1';
  } catch { return false; }
}
export async function ensureResourceGuard() {
  if (hasResourceGuard()) return;
  if (!['linux', 'win32'].includes(process.platform)) throw new Error('This maintainer harness needs a Linux cgroup or Windows Job Object guard');
  const runner = fileURLToPath(new URL('./run-bounded.mjs', import.meta.url));
  const report = process.platform === 'win32' ? ['--report', join(process.cwd(), '.work/resource-runs', `${Date.now()}-${process.pid}.json`)] : [];
  const child = spawn(process.execPath, [runner, ...report, '--', process.execPath, ...process.argv.slice(1)], { stdio: 'inherit' });
  for (const signal of ['SIGINT', 'SIGTERM']) process.on(signal, () => child.kill(signal));
  const code = await new Promise((resolve, reject) => {
    child.once('error', reject);
    child.once('exit', (code, signal) => resolve(code ?? (signal ? 128 : 1)));
  });
  process.exit(code);
}
