import { mkdirSync, copyFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { copyNativeBundle } from './native-bundle.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
export const applicationHostFiles = [
  'node-host.mjs', 'lean-io-errors.mjs', 'deno-stack.mjs', 'bun-stack.mjs', 'posix-arguments.mjs', 'working-directory.mjs', 'handle-table.mjs', 'node-network.mjs', 'native-tcp.mjs',
  'node-process.mjs', 'native-process.mjs', 'process-launcher.mjs', 'process-exec.mjs', 'node-udp.mjs',
  'node-system.mjs', 'linux-memory.mjs', 'node-signal.mjs', 'deno-signals.mjs', 'native-signals.mjs', 'application-signals.mjs', 'application-metadata-runtime.mjs', 'thread-id.cjs', 'native-pthread-factory.cjs', 'native-pthread-factory-deno.mjs', 'native-files.mjs',
  'native-clock.mjs', 'native-windows-timezone.mjs', 'native-file-worker.mjs', 'native-file-worker-pool.mjs', 'native-file-worker-deno.mjs', 'native-file-message.mjs',
  'native-worker-cwd.cjs', 'worker-stdio.cjs', 'native-dns.mjs', 'native-interfaces.mjs', 'native-abort.cjs',
];

/** Application output carries its host support, including native FFI and helpers. */
export function copyApplicationHost(output) {
  const directory = join(resolve(output), 'host');
  mkdirSync(directory, { recursive: true });
  for (const name of applicationHostFiles) copyFileSync(join(root, 'src', name), join(directory, name));
  copyNativeBundle(root, directory);
}

export function applicationEntrypoint(target, { platform = process.platform, arch = process.arch, node } = {}) {
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
const expectedHost = ${JSON.stringify(`${platform}-${arch}`)};
const actualHost = process.platform + '-' + process.arch;
const expectedNode = ${JSON.stringify(node ?? null)};
if (actual !== expected) {
  console.error('This application was built for ' + expected + '; it is running in ' + actual + '. Rebuild with --target ' + actual + '.');
  process.exitCode = 1;
} else if (actualHost !== expectedHost) {
  console.error('This application was built on ' + expectedHost + '; it is running on ' + actualHost + '. Rebuild the Lean source with Lasm on this platform.');
  process.exitCode = 1;
} else if (actual === 'node' && expectedNode && process.versions.node !== expectedNode) {
  console.error('This application requires Node ' + expectedNode + '; you are running Node ' + process.versions.node + '. Install the supported Node release.');
  process.exitCode = 1;
} else {
  if (actual === 'deno') (await import('./host/deno-stack.mjs')).prepareDenoStack(import.meta.url);
  if (actual === 'bun') (await import('./host/bun-stack.mjs')).prepareBunStack(import.meta.url);
  (await import('./host/application-signals.mjs')).prepareApplicationSignals();
  (await import('./host/application-metadata-runtime.mjs')).prepareApplicationMetadata(import.meta.url);
  process.env.LASM_FULL_HOST_MODULE = new URL('./host/node-host.mjs', import.meta.url).href;
  process.env.LASM_FULL_APP_PATH = fileURLToPath(import.meta.url);
  createRequire(import.meta.url)('./program.cjs');
}
`;
}

export function writeApplicationEntrypoint(output, target, support) {
  mkdirSync(output, { recursive: true });
  writeFileSync(join(output, 'main.mjs'), applicationEntrypoint(target, support), { mode: 0o755 });
  writeFileSync(join(output, 'package.json'), JSON.stringify({ private: true, type: 'module' }) + '\n');
}
