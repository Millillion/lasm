import { mkdirSync, copyFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { copyNativeBundle } from './native-bundle.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
export const applicationHostFiles = [
  'node-host.mjs', 'lean-io-errors.mjs', 'deno-stack.mjs', 'working-directory.mjs', 'handle-table.mjs', 'node-network.mjs', 'native-tcp.mjs',
  'node-process.mjs', 'native-process.mjs', 'process-launcher.mjs', 'process-exec.mjs', 'node-udp.mjs',
  'node-system.mjs', 'node-signal.mjs', 'thread-id.cjs', 'native-pthread-factory.cjs', 'native-files.mjs',
  'native-clock.mjs', 'native-file-worker.mjs', 'native-file-worker-pool.mjs', 'native-file-worker-deno.mjs',
  'native-worker-cwd.cjs', 'worker-stdio.cjs', 'native-dns.mjs', 'native-interfaces.mjs',
];

/** Application output carries its host support, including native FFI and helpers. */
export function copyApplicationHost(output) {
  const directory = join(resolve(output), 'host');
  mkdirSync(directory, { recursive: true });
  for (const name of applicationHostFiles) copyFileSync(join(root, 'src', name), join(directory, name));
  copyNativeBundle(root, directory);
}

export function applicationEntrypoint(target) {
  if (!['node', 'deno', 'bun'].includes(target)) throw new Error('Invalid application deployment target');
  const shebang = target === 'deno' ? '/usr/bin/env -S deno run -A' : '/usr/bin/env ' + target;
  return `#!${shebang}
import { createRequire } from 'node:module';
import { fileURLToPath } from 'node:url';
// A self-launch may temporarily disable Deno's automatic PATH shim. Restore
// the caller's exact visible values before the program or its workers start.
if (process.versions.deno && process.env.LASM_DENO_CHILD_ENV !== undefined) {
  const saved = JSON.parse(process.env.LASM_DENO_CHILD_ENV);
  if (!Array.isArray(saved) || saved.length !== 2 || saved.some(value => value !== null && typeof value !== 'string'))
    throw new Error('Invalid private child environment transport');
  for (const [index, key] of ['DENO_DISABLE_NODE_SHIM', 'LASM_DENO_CHILD_ENV'].entries()) {
    if (saved[index] === null) delete process.env[key]; else process.env[key] = saved[index];
  }
}
const expected = ${JSON.stringify(target)};
const actual = process.versions.deno ? 'deno' : process.versions.bun ? 'bun' : 'node';
if (actual !== expected) {
  console.error('This application was built for ' + expected + '; it is running in ' + actual + '. Rebuild with --target ' + actual + '.');
  process.exitCode = 1;
} else {
  if (actual === 'deno') (await import('./host/deno-stack.mjs')).prepareDenoStack(import.meta.url);
  process.env.LASM_FULL_HOST_MODULE = new URL('./host/node-host.mjs', import.meta.url).href;
  process.env.LASM_FULL_APP_PATH = fileURLToPath(import.meta.url);
  createRequire(import.meta.url)('./program.cjs');
}
`;
}

export function writeApplicationEntrypoint(output, target) {
  mkdirSync(output, { recursive: true });
  writeFileSync(join(output, 'main.mjs'), applicationEntrypoint(target), { mode: 0o755 });
  writeFileSync(join(output, 'package.json'), JSON.stringify({ private: true, type: 'module' }) + '\n');
}
