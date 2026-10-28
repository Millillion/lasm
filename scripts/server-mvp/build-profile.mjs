// Build a Server MVP profiling source (default scripts/server-mvp/profile) twice from the same ordinary Lean
// source: with the installed Lasm candidate (default Node link driver) and as a
// native Lean executable (full release `leanc -O2`, the same oracle recipe as
// integration/managed-http.mjs). Runs under the maintainer resource guard.
//   node build-profile.mjs NEW_OUTPUT INSTALLED_COMPILER [LEAN_VERSION] [SOURCE_DIR]
// Writes NEW_OUTPUT/application.json for scripts/server-mvp/robustness.mjs.
import assert from 'node:assert/strict';
import { cpSync, mkdirSync, readFileSync, writeFileSync, existsSync, statSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { applicationSources, nativeLeanEnvironment } from '../../src/application-sources.mjs';
import { executableName } from '../../src/platform.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { provisionLean } from '../../src/managed-lean.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
const root = resolve(fileURLToPath(new URL('../../', import.meta.url)));
const [outputArg, compilerArg, version = '4.36.0-rc2', sourceArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && compilerArg && /^\d+\.\d+\.\d+$/.test(version) && !extra.length,
  'Supply NEW_OUTPUT INSTALLED_COMPILER [LEAN_VERSION] [SOURCE_DIR]');
const output = resolve(outputArg), compiler = resolve(compilerArg);
assert.ok(!existsSync(output), 'Use a new output directory');
const fixture = sourceArg ? resolve(sourceArg) : join(root, 'scripts/server-mvp/profile');
const project = join(output, 'source'), dist = join(output, 'deployed');
mkdirSync(project, { recursive: true });
cpSync(join(fixture, 'Main.lean'), join(project, 'Main.lean'));
writeFileSync(join(project, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
const env = { ...process.env, PATH: dirname(process.execPath) };
for (const name of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(name)) delete env[name];
delete env.LASM_APPLICATION_RUNTIME;
const started = Date.now();
execFileSync(process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', join(project, 'Main.lean'), '--output', dist],
  { cwd: project, env, stdio: 'inherit', timeout: 3_600_000 });
const lasmSeconds = (Date.now() - started) / 1000;
const info = JSON.parse(readFileSync(join(dist, 'build-info.json')));
assert.equal(info.lean, version); assert.equal(info.target, 'node');
const nativeStarted = Date.now();
const lean = await provisionLean(join(project, 'Main.lean'), { distribution: 'full' });
assert.equal(lean.commit, info.leanCommit);
const generated = applicationSources(join(project, 'Main.lean'), lean, join(output, 'oracle'), { log: () => {} });
const nativeExecutable = join(output, executableName('native-server'));
execFileSync(join(lean.prefix, 'bin', executableName('leanc')), ['-O2', ...generated.sources, '-o', nativeExecutable],
  // Windows: give the bundled C compiler the short ordinary prefix, as
  // scripts/check-node-windows.mjs does for its leanc oracle.
  { cwd: project, env: { ...nativeLeanEnvironment(lean), ...(process.platform === 'win32' && lean.executionPrefix ? { LEAN_SYSROOT: lean.executionPrefix } : {}) },
    stdio: 'inherit', timeout: 900_000 });
const manifest = { scope: 'Server MVP profiling source, Lasm (Node) and native Lean builds of one source',
  source: join(fixture, 'Main.lean'), sourceSha256: await hashFile(join(fixture, 'Main.lean')),
  compiler, deployed: dist, nativeExecutable, nativeBytes: statSync(nativeExecutable).size,
  wasmBytes: statSync(join(dist, 'program.wasm')).size, lasmBuildSeconds: lasmSeconds,
  nativeBuildSeconds: (Date.now() - nativeStarted) / 1000, nativeLeanCommit: lean.commit,
  lean: info.lean, linkDriver: info.linkDriver, host: info.host, node: info.node, platform: `${process.platform}-${process.arch}`,
  resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(output, 'application.json'), JSON.stringify(manifest, null, 2) + '\n');
console.log(JSON.stringify(manifest, null, 2));
