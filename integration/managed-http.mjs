// Run under the maintainer resource guard. Source and HTTP assertions are shared
// with the separately recorded maintainer-linker acceptance, without edits.
import assert from 'node:assert/strict';
import { cpSync, mkdirSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { join, resolve, dirname, basename } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { applicationSources, nativeLeanEnvironment } from '../src/application-sources.mjs';
import { executableName } from '../src/platform.mjs';

const root = resolve(fileURLToPath(new URL('../', import.meta.url)));
const [outputArg, target, engineArg, compilerArg = root] = process.argv.slice(2);
if (!outputArg || !['node', 'deno', 'bun'].includes(target) || !engineArg) throw new Error('Supply NEW_OUTPUT TARGET STOCK_ENGINE [INSTALLED_COMPILER]');
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg);
if (existsSync(output)) throw new Error('Use a new output directory');
const project = join(output, 'ordinary Lake project'), dist = join(output, 'deployed');
mkdirSync(project, { recursive: true });
cpSync(join(root, 'examples/lean-server-latest'), project, { recursive: true,
  filter: file => !['.lake', 'dist', 'node_modules', 'test'].includes(basename(file)) });
const env = { ...process.env, PATH: dirname(process.execPath) };
for (const name of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(name)) delete env[name];
if (compiler !== root) delete env.LASM_APPLICATION_RUNTIME;
execFileSync(process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', join(project, 'Main.lean'),
  '--target', target, '--output', dist, '--verbose'], { cwd: project, env, stdio: 'inherit', timeout: 1800_000 });
const info = JSON.parse(readFileSync(join(dist, 'build-info.json')));
const prefix = join(process.env.LASM_TOOLCHAIN_CACHE, 'artifacts', info.nativeLeanIdentity);
const lean = { prefix, commit: info.leanCommit, lean: join(prefix, 'bin', executableName('lean')),
  lake: join(prefix, 'bin', executableName('lake')) };
const generated = applicationSources(join(project, 'Main.lean'), lean, join(output, 'oracle'), { log: () => {} });
const nativeExecutable = join(output, executableName('native-server'));
execFileSync(join(prefix, 'bin', executableName('leanc')), ['-O2', ...generated.sources, '-o', nativeExecutable],
  { cwd: project, env: nativeLeanEnvironment(lean), stdio: 'inherit', timeout: 180_000 });
const manifest = join(output, 'application.json'), report = join(output, 'vitest.json');
writeFileSync(manifest, JSON.stringify({ target, deployed: dist, nativeExecutable, ...info }, null, 2) + '\n');
execFileSync(process.execPath, [join(root, 'node_modules/vitest/vitest.mjs'), 'run',
  '--config', join(root, 'examples/lean-server-latest/vitest.config.mjs'), '--reporter=default', '--reporter=json', `--outputFile=${report}`],
  { cwd: root, env: { ...env, LASM_AOT_HTTP_MANIFEST: manifest, LASM_AOT_HTTP_ENGINE: engine }, stdio: 'inherit', timeout: 600_000 });
const tests = JSON.parse(readFileSync(report));
assert.equal(tests.success, true); assert.equal(tests.numPassedTests, 20);
assert.equal(tests.numFailedTests, 0); assert.equal(tests.numPendingTests, 0);
const result = { scope: 'Primary CLI with ordinary Lake dependency discovery and full HTTP differential checks',
  compiler, target, engineVersion: execFileSync(engine, ['--version'], { encoding: 'utf8' }).trim(),
  build: info, passed: tests.numPassedTests, failed: tests.numFailedTests, skipped: tests.numPendingTests,
  resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
