import { mkdirSync, copyFileSync, writeFileSync, readdirSync, existsSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { copyNativeBundle, copyApplicationNativeBundle } from './native-bundle.mjs';
import { glibcAtLeast, nodeAtLeast } from './application-support.mjs';
import { applicationPolicy, requireAotApplication, requireAotDeployment } from './application-policy.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
export const applicationHostFiles = [
  'node-host.mjs', 'lean-io-errors.mjs', 'posix-arguments.mjs', 'working-directory.mjs', 'handle-table.mjs', 'node-network.mjs', 'native-tcp.mjs',
  'node-process.mjs', 'native-process.mjs', 'process-launcher.mjs', 'process-exec.mjs', 'node-udp.mjs',
  'node-system.mjs', 'linux-memory.mjs', 'node-signal.mjs', 'native-signals.mjs', 'application-signals.mjs', 'thread-id.cjs', 'native-files.mjs',
  'native-clock.mjs', 'native-windows-timezone.mjs', 'native-file-worker.mjs', 'native-file-worker-pool.mjs', 'native-file-message.mjs',
  'native-worker-cwd.cjs', 'worker-stdio.cjs', 'native-dns.mjs', 'native-interfaces.mjs', 'native-abort.cjs',
  'node-fetch.mjs', 'node-js.mjs',
  // The UTC zone (tz database, public domain) for systems without zoneinfo.
  'zoneinfo/UTC',
];

// Built applications run on any Node release from this one: memory64 and
// table64 Wasm without flags arrived in V8 13.6 (Node 24.0.0).
export const minimumApplicationNode = '24.0.0';
// The glibc floor of the official Node 24/26 binaries; koffi needs 2.25 and
// Lasm's Zig-built helpers 2.17.
export const minimumApplicationGlibc = '2.28';

/** Application output carries its host support, including native FFI and helpers
 * for Linux x64/arm64 (glibc) and the build host, so one build deploys to Linux. */
export function copyApplicationHost(output, { platform = process.platform, arch = process.arch,
  glibc = process.report?.getReport().header.glibcVersionRuntime, sourceRoot = root } = {}) {
  const directory = join(resolve(output), 'host');
  mkdirSync(directory, { recursive: true });
  for (const name of applicationHostFiles) {
    mkdirSync(dirname(join(directory, name)), { recursive: true });
    copyFileSync(join(sourceRoot, 'src', name), join(directory, name));
  }
  // Lasm's builtin JavaScript modules (lasm:<name>; src/edge/builtin-modules.mjs).
  const builtins = join(sourceRoot, 'src', 'lasm-modules');
  if (existsSync(builtins)) mkdirSync(join(directory, 'lasm-modules'), { recursive: true });
  for (const name of existsSync(builtins) ? readdirSync(builtins).filter(file => file.endsWith('.mjs')) : [])
    copyFileSync(join(sourceRoot, 'src', 'lasm-modules', name), join(directory, 'lasm-modules', name));
  if ((['darwin', 'win32'].includes(platform) || platform === 'linux' && glibc) && ['x64', 'arm64'].includes(arch))
    copyApplicationNativeBundle(sourceRoot, directory, { platform, arch });
  else copyNativeBundle(sourceRoot, directory);
}

export function applicationEntrypoint({ minimumNode = minimumApplicationNode, minimumGlibc = minimumApplicationGlibc } = {}) {
  return `#!/usr/bin/env node
import { createRequire } from 'node:module';
import { readFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
const minimumNode = ${JSON.stringify(minimumNode ?? null)};
const minimumGlibc = ${JSON.stringify(minimumGlibc ?? null)};
const glibcAtLeast = ${glibcAtLeast.toString()};
const nodeAtLeast = ${nodeAtLeast.toString()};
const host = process.platform + '-' + process.arch;
let glibc;
try { glibc = process.platform === 'linux' ? process.report?.getReport().header.glibcVersionRuntime : undefined; } catch { /* reported below */ }
// The native pieces this deployment carries; absent in research outputs that carry every target.
let nativeTargets = null, nativeLibcs = ['glibc'];
try {
  const deployment = JSON.parse(readFileSync(new URL('./host/native/manifest.json', import.meta.url), 'utf8')).deployment;
  nativeTargets = deployment?.targets ?? null;
  // Older builds record one libc as a string; builds with musl list both.
  nativeLibcs = [deployment?.linuxLibc ?? 'glibc'].flat();
} catch { /* checked when the host loads */ }
if (minimumNode && !nodeAtLeast(process.versions.node, minimumNode)) {
  console.error('This application requires Node ' + minimumNode + ' or newer; you are running Node ' + process.versions.node + '. Install Node 24 or newer.');
  process.exitCode = 1;
} else if (nativeTargets && !nativeTargets.includes(host)) {
  console.error('This application includes native support for ' + nativeTargets.join(', ') + '; it is running on ' + host + '. Run it on one of those platforms, or rebuild the Lean source with Lasm on this platform.');
  process.exitCode = 1;
} else if (process.platform === 'linux' && minimumGlibc && !(glibc ? glibcAtLeast(glibc, minimumGlibc) : nativeLibcs.includes('musl'))) {
  console.error('This application requires Linux with glibc ' + minimumGlibc + ' or newer' + (nativeLibcs.includes('musl') ? ' or musl' : '') + '; this system reports ' + (glibc ? 'glibc ' + glibc : 'no glibc (musl/Alpine needs a build with the current Lasm)') + '. Use a supported Linux system, such as a Debian or Ubuntu based image.');
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
