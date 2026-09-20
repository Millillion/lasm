// Maintainer-harness protection. This does not change Lean program semantics.
import { readFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawn } from 'node:child_process';

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
  if (process.platform !== 'linux') throw new Error('This maintainer harness needs the Linux cgroup runner; a portable equivalent is not implemented');
  const runner = fileURLToPath(new URL('./run-bounded.mjs', import.meta.url));
  const child = spawn(process.execPath, [runner, '--', process.execPath, ...process.argv.slice(1)], { stdio: 'inherit' });
  for (const signal of ['SIGINT', 'SIGTERM']) process.on(signal, () => child.kill(signal));
  const code = await new Promise((resolve, reject) => {
    child.once('error', reject);
    child.once('exit', (code, signal) => resolve(code ?? (signal ? 128 : 1)));
  });
  process.exit(code);
}
