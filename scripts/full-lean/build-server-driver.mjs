// Optional parallel-harness driver: compile the original upstream Lean main.
import { existsSync, mkdirSync, readFileSync, writeFileSync, readdirSync, createReadStream, realpathSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';
import { root, leanCommit, resolveLean } from '../../src/toolchain.mjs';

await ensureResourceGuard();
const [prefixArg, outputArg] = process.argv.slice(2);
if (!prefixArg || !outputArg) throw new Error('Supply TOOLCHAIN_PREFIX and NEW_OUTPUT');
const externalLink = process.argv.includes('--external-link');
const standaloneLink = process.argv.includes('--standalone-link');
const prefix = resolve(prefixArg), output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a new output directory to preserve earlier build evidence');
const configPath = join(prefix, 'toolchain.json');
const config = existsSync(configPath) ? JSON.parse(readFileSync(configPath)) : null;
if (standaloneLink && !config) throw new Error('--standalone-link requires a full Wasm toolchain');
if (!config && realpathSync(prefix) !== realpathSync(resolveLean(root).prefix))
  throw new Error('Native controls must use the configured pinned Lean toolchain');
if (config && (config.leanCommit !== leanCommit || config.leanThreads !== 4))
  throw new Error('This driver comparison requires the pinned full compiler with four Lean workers');
if (externalLink && (!config || /\s/.test(prefix)))
  throw new Error('The external-link diagnostic requires a full-toolchain prefix without whitespace');
async function hash(path) {
  const digest = createHash('sha256');
  for await (const bytes of createReadStream(path)) digest.update(bytes);
  return digest.digest('hex');
}
if (config) {
  const snapshot = JSON.parse(readFileSync(join(config.build, 'snapshot.json')));
  for (const [name, expected] of Object.entries(snapshot.files))
    if (await hash(join(config.build, name)) !== expected) throw new Error(`Frozen input changed: ${name}`);
}
const source = join(root, '.cache/lean4-4.32.0/tests/server_interactive/run_test.lean');
// This assertion ties the optimization to this pinned two-line entry point;
// changes to the upstream driver need a fresh comparison, not silent rewriting.
if (readFileSync(source, 'utf8') !== 'import Lean.Server.Test.Runner\n\ndef main := Lean.Server.Test.Runner.main\n')
  throw new Error('The original upstream server driver changed');
mkdirSync(output, { recursive: true });
const manifest = { version: 1, leanCommit, prefix, engine: config?.engine ?? 'native', config,
  ...(standaloneLink ? { applicationLinkMode: 'standalone',
    linkAdjustment: 'Compile the unchanged test driver as a standalone Wasm application to reduce the memory retained while compiler/server children run.' } : {}),
  linkStrategy: externalLink ? 'Run Leanc only to print its public link flags, then exit it before invoking the same external C toolchain.' : 'Ordinary Leanc invocation.',
  ...(config ? { toolchainConfigSha256: await hash(configPath) } : {}),
  source, sourceSha256: await hash(source), executable: join(output, 'driver'),
  scope: 'Unchanged upstream server-test driver compiled ahead of time. Server and test sources still use the selected full compiler; this is an optional parallel harness.',
  startedAt: new Date().toISOString(), resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [] };
const save = () => writeFileSync(join(output, 'driver.json'), JSON.stringify(manifest, null, 2) + '\n');
save();
function run(command, capture = false) {
  const startedAt = new Date().toISOString();
  console.log(JSON.stringify({ engine: manifest.engine, command }));
  const result = spawnSync(command[0], command.slice(1), { stdio: capture ? ['ignore', 'pipe', 'pipe'] : 'inherit',
    ...(standaloneLink ? { env: { ...process.env, LASM_FULL_APPLICATION_LINK: 'standalone' } } : {}),
    encoding: 'utf8', timeout: 600_000, killSignal: 'SIGKILL', maxBuffer: 256 * 1024 });
  manifest.commands.push({ command, startedAt, finishedAt: new Date().toISOString(),
    code: result.status, signal: result.signal, error: result.error?.message,
    ...(capture ? { stdout: result.stdout, stderr: result.stderr } : {}) });
  save();
  if (result.error || result.status !== 0) throw new Error(`Driver build failed: ${result.error?.message ?? result.status}`);
  return result;
}
run([join(prefix, 'bin/lean'), '-Dlinter.all=false', '-c', join(output, 'driver.c'), source]);
if (externalLink) {
  // With LEAN_CC supplied, upstream Leanc omits its internal compiler flags.
  // --print-ldflags supplies the public C and link flags used in that path.
  // Keep the original output in the record; never evaluate it as shell code.
  const printed = run([join(prefix, 'bin/leanc'), '--print-ldflags'], true).stdout.trim();
  if (!printed || /["'`\n\r]/.test(printed)) throw new Error('Unexpected Leanc link-flag format');
  const flags = printed.split(/\s+/);
  run([join(prefix, 'bin/clang'), '-o', manifest.executable, join(output, 'driver.c'),
    ...flags, '-Wno-unused-command-line-argument']);
} else run([join(prefix, 'bin/leanc'), '-o', manifest.executable, join(output, 'driver.c')]);
if (standaloneLink && config?.applicationRuntime) {
  const decision = JSON.parse(readFileSync(manifest.executable + '.lasm-link.json'));
  if (decision.mode !== 'standalone') throw new Error('The selected adapter did not honor standalone linking');
  manifest.applicationLinkDecision = decision;
}
manifest.artifacts = {};
for (const name of readdirSync(output).filter(name => name !== 'driver.json'))
  manifest.artifacts[join(output, name)] = await hash(join(output, name));
if (await hash(source) !== manifest.sourceSha256) throw new Error('Original driver changed during compilation');
manifest.finishedAt = new Date().toISOString(); save();
console.log(JSON.stringify({ engine: manifest.engine, manifest: join(output, 'driver.json') }));
