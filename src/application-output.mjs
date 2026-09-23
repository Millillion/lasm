import { mkdirSync, copyFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { copyNativeBundle } from './native-bundle.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
export const applicationHostFiles = [
  'node-host.mjs', 'working-directory.mjs', 'handle-table.mjs', 'node-network.mjs', 'native-tcp.mjs',
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
  return `#!/usr/bin/env node
import { createRequire } from 'node:module';
import { fileURLToPath } from 'node:url';
const expected = ${JSON.stringify(target)};
const actual = process.versions.deno ? 'deno' : process.versions.bun ? 'bun' : 'node';
if (actual !== expected) {
  console.error('This application was built for ' + expected + '; it is running in ' + actual + '. Rebuild with --target ' + actual + '.');
  process.exitCode = 1;
} else {
  process.env.LASM_FULL_HOST_MODULE = new URL('./host/node-host.mjs', import.meta.url).href;
  process.env.LASM_FULL_APP_PATH = fileURLToPath(import.meta.url);
  createRequire(import.meta.url)('./program.cjs');
}
`;
}

export function writeApplicationEntrypoint(output, target) {
  mkdirSync(output, { recursive: true });
  writeFileSync(join(output, 'main.mjs'), applicationEntrypoint(target));
  writeFileSync(join(output, 'package.json'), JSON.stringify({ private: true, type: 'module' }) + '\n');
}
