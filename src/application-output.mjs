import { mkdirSync, copyFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { copyNativeBundle, copyApplicationNativeBundle } from './native-bundle.mjs';
import { glibcAtLeast } from './application-support.mjs';
import { applicationPolicy, requireAotApplication, requireAotDeployment } from './application-policy.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
export const applicationHostFiles = [
  'node-host.mjs', 'lean-io-errors.mjs', 'posix-arguments.mjs', 'working-directory.mjs', 'handle-table.mjs', 'node-network.mjs', 'native-tcp.mjs',
  'node-process.mjs', 'native-process.mjs', 'process-launcher.mjs', 'process-exec.mjs', 'node-udp.mjs',
  'node-system.mjs', 'linux-memory.mjs', 'node-signal.mjs', 'native-signals.mjs', 'application-signals.mjs', 'thread-id.cjs', 'native-pthread-factory.cjs', 'native-files.mjs',
  'native-clock.mjs', 'native-windows-timezone.mjs', 'native-file-worker.mjs', 'native-file-worker-pool.mjs', 'native-file-message.mjs',
  'native-worker-cwd.cjs', 'worker-stdio.cjs', 'native-dns.mjs', 'native-interfaces.mjs', 'native-abort.cjs',
  'node-fetch.mjs', 'node-js.mjs',
];

/** Application output carries its host support, including native FFI and helpers. */
export function copyApplicationHost(output, { platform = process.platform, arch = process.arch,
  glibc = process.report?.getReport().header.glibcVersionRuntime, sourceRoot = root } = {}) {
  const directory = join(resolve(output), 'host');
  mkdirSync(directory, { recursive: true });
  for (const name of applicationHostFiles) copyFileSync(join(sourceRoot, 'src', name), join(directory, name));
  if ((['darwin', 'win32'].includes(platform) || platform === 'linux' && glibc) && ['x64', 'arm64'].includes(arch))
    copyApplicationNativeBundle(sourceRoot, directory, { platform, arch });
  else copyNativeBundle(sourceRoot, directory);
}

export function applicationEntrypoint({ platform = process.platform, arch = process.arch, node, minimumGlibc } = {}) {
  return `#!/usr/bin/env node
import { createRequire } from 'node:module';
import { readFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
const expectedHost = ${JSON.stringify(`${platform}-${arch}`)};
const actualHost = process.platform + '-' + process.arch;
const expectedNode = ${JSON.stringify(node ?? null)};
const minimumGlibc = ${JSON.stringify(minimumGlibc ?? null)};
const glibcAtLeast = ${glibcAtLeast.toString()};
if (actualHost !== expectedHost) {
  console.error('This application was built on ' + expectedHost + '; it is running on ' + actualHost + '. Rebuild the Lean source with Lasm on this platform.');
  process.exitCode = 1;
} else if (expectedNode && process.versions.node !== expectedNode) {
  console.error('This application requires Node ' + expectedNode + '; you are running Node ' + process.versions.node + '. Install the supported Node release.');
  process.exitCode = 1;
} else if (process.platform === 'linux' && minimumGlibc && !glibcAtLeast(process.report?.getReport().header.glibcVersionRuntime, minimumGlibc)) {
  console.error('This application requires glibc ' + minimumGlibc + ' or newer. Use a supported Linux system; Ubuntu 24.04 is the tested distribution.');
  process.exitCode = 1;
} else {
  const applicationPolicy = ${JSON.stringify(applicationPolicy)};
  const requireAotApplication = ${requireAotApplication.toString()};
  const requireAotDeployment = ${requireAotDeployment.toString()};
  requireAotDeployment(JSON.parse(readFileSync(new URL('./build-info.json', import.meta.url), 'utf8')));
  (await import('./host/application-signals.mjs')).prepareApplicationSignals();
  process.env.LASM_FULL_HOST_MODULE = new URL('./host/node-host.mjs', import.meta.url).href;
  process.env.LASM_FULL_APP_PATH = fileURLToPath(import.meta.url);
  createRequire(import.meta.url)('./program.cjs');
}
`;
}

export function writeApplicationEntrypoint(output, support) {
  mkdirSync(output, { recursive: true });
  writeFileSync(join(output, 'main.mjs'), applicationEntrypoint(support), { mode: 0o755 });
  writeFileSync(join(output, 'package.json'), JSON.stringify({ private: true, type: 'module' }) + '\n');
}
