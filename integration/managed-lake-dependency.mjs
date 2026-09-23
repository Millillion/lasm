// A real Lake project with a pinned Git dependency and non-default source roots.
// Run inside run-bounded.mjs and base-pages.py; no compiler mocks are used.
import assert from 'node:assert/strict';
import { mkdirSync, writeFileSync, readFileSync, existsSync, statSync, renameSync, symlinkSync } from 'node:fs';
import { resolve, join, dirname, delimiter } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { execFileSync, spawnSync } from 'node:child_process';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { provisionGit, managedGitEnvironment } from '../src/managed-git.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../', import.meta.url));
const [outputArg, target = 'node', engineArg = process.execPath, compilerArg = root] = process.argv.slice(2);
if (!outputArg || !['node', 'deno', 'bun'].includes(target)) throw new Error('Supply NEW_OUTPUT [TARGET ENGINE INSTALLED_COMPILER]');
const base = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg);
if (existsSync(base)) throw new Error('Use a fresh Lake acceptance directory');
const project = join(base, 'consumer λ'), dependency = join(base, 'dependency origin'), dist = join(base, 'dist');
mkdirSync(join(project, 'app'), { recursive: true }); mkdirSync(join(dependency, 'src'), { recursive: true });
const pin = 'leanprover/lean4:v4.34.0\n';
writeFileSync(join(project, 'lean-toolchain'), pin); writeFileSync(join(dependency, 'lean-toolchain'), pin);
writeFileSync(join(dependency, 'lakefile.toml'), 'name = "dependency"\nversion = "0.1.0"\nsrcDir = "src"\n\n[[lean_lib]]\nname = "Dependency"\n');
writeFileSync(join(dependency, 'src/Dependency.lean'), 'def dependencyValue : Nat := 37\n');
const git = await provisionGit();
const config = join(base, 'empty-gitconfig'); writeFileSync(config, '');
const env = { ...process.env, PATH: dirname(process.execPath), GIT_CONFIG_GLOBAL: config, GIT_CONFIG_NOSYSTEM: '1', GIT_TERMINAL_PROMPT: '0' };
for (const name of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(name) || ['GIT_DIR', 'GIT_WORK_TREE', 'GIT_INDEX_FILE'].includes(name)) delete env[name];
const gitEnv = managedGitEnvironment(git, env);
const gitRun = args => execFileSync(git.executable, args, { cwd: dependency, env: gitEnv, encoding: 'utf8', timeout: 60_000 }).trim();
gitRun(['-c', 'init.defaultBranch=main', 'init']); gitRun(['add', '.']);
gitRun(['-c', 'user.name=Lasm fixture', '-c', 'user.email=lasm-fixture@example.invalid', '-c', 'commit.gpgsign=false', 'commit', '-m', 'Pinned dependency fixture']);
const revision = gitRun(['rev-parse', 'HEAD']);
writeFileSync(join(project, 'lakefile.toml'), `name = "consumer"\nversion = "0.1.0"\nsrcDir = "app"\n\n[[require]]\nname = "dependency"\ngit = ${JSON.stringify(pathToFileURL(dependency).href)}\nrev = ${JSON.stringify(revision)}\n\n[[lean_lib]]\nname = "Local"\n\n[[lean_exe]]\nname = "consumer"\nroot = "Main"\n`);
writeFileSync(join(project, 'app/Local.lean'), 'import Dependency\ndef localValue : Nat := dependencyValue + 5\n');
const source = join(project, 'app/Main.lean');
const mainText = 'import Local\ndef main (args : List String) : IO Unit := do\n  IO.println s!"dependency={localValue}; args={String.intercalate "|" args}"\n';
if (process.platform === 'win32') writeFileSync(source, mainText);
else {
  mkdirSync(join(project, 'entry sources'));
  writeFileSync(join(project, 'entry sources/Main.lean'), mainText);
  symlinkSync('../entry sources/Main.lean', source);
}
const cli = args => execFileSync(process.execPath, [join(compiler, 'bin/lasm.mjs'), ...args],
  { cwd: project, env, encoding: 'utf8', timeout: 1800_000, stdio: ['ignore', 'pipe', 'inherit'] });
cli(['build', source, '--target', target, '--output', dist]);
const receipt = JSON.parse(readFileSync(join(dist, 'build-info.json'), 'utf8'));
assert.equal(receipt.gitIdentity, git.identity);
assert.equal(receipt.modules.length, 3, 'Dependency, Local and Main must all be compiled');
const manifest = JSON.parse(readFileSync(join(project, 'lake-manifest.json'), 'utf8'));
assert.equal(manifest.packages.find(p => p.name === 'dependency').rev, revision);
const firstHash = await hashFile(join(dist, 'program.wasm')), firstMtime = statSync(join(dist, 'program.wasm')).mtimeMs;
cli(['build', source, '--target', target, '--output', dist]);
assert.equal(statSync(join(dist, 'program.wasm')).mtimeMs, firstMtime);
assert.equal(await hashFile(join(dist, 'program.wasm')), firstHash);
mkdirSync(join(dist, 'assets/empty'), { recursive: true }); writeFileSync(join(dist, 'assets/data.txt'), 'kept');
writeFileSync(join(project, 'app/Local.lean'), 'import Dependency\ndef localValue : Nat := dependencyValue + 6\n');
cli(['build', source, '--target', target, '--output', dist]);
assert.notEqual(await hashFile(join(dist, 'program.wasm')), firstHash);
assert.equal(readFileSync(join(dist, 'assets/data.txt'), 'utf8'), 'kept');
assert.ok(statSync(join(dist, 'assets/empty')).isDirectory());

const lean = await provisionLean(source);
const nativeEnv = managedGitEnvironment(git, { ...nativeLeanEnvironment(lean), ...env,
  PATH: [join(lean.prefix, 'bin'), dirname(process.execPath)].join(delimiter) });
execFileSync(lean.lake, ['--no-cache', '--keep-toolchain', 'build', 'consumer'],
  { cwd: project, env: nativeEnv, stdio: 'inherit', timeout: 900_000 });
const native = join(project, '.lake/build/bin', process.platform === 'win32' ? 'consumer.exe' : 'consumer');
// A literal Deno executable path must not cause its child-process compatibility
// layer to reinterpret the following application data as engine arguments.
const args = ['λ 日本語', '', 'two words', engine, '--target', 'literal'];
const compare = (file, argv) => {
  const result = spawnSync(file, argv, { cwd: base, env: { ...env, PATH: '', LEAN_NUM_THREADS: '2' },
    encoding: 'utf8', timeout: 90_000, maxBuffer: 1024 * 1024 });
  assert.ifError(result.error); return { code: result.status, stdout: result.stdout, stderr: result.stderr };
};
const expected = compare(native, args);
assert.equal(expected.code, 0); assert.equal(expected.stdout, 'dependency=43; args=' + args.join('|') + '\n');
// The filename alias uses the same managed application pipeline. Deno/Bun
// invoke Node for compilation and return to this exact engine to run output.
const launcher = spawnSync(engine, [...(target === 'deno' ? ['run', '-A'] : []),
  join(compiler, `lasm-${target}.js`), source, ...args],
  { cwd: project, env, encoding: 'utf8', timeout: 300_000, maxBuffer: 1024 * 1024 });
assert.ifError(launcher.error);
assert.equal(launcher.status, expected.code, launcher.stderr);
assert.equal(launcher.stdout, expected.stdout);
assert.doesNotMatch(launcher.stderr, /Building /, 'the compatibility launcher must reuse the same application cache');
// Hide the source and Git origin before invoking the relocated deployment.
const deployed = join(base, 'relocated deployment'); renameSync(dist, deployed);
renameSync(project, project + '.hidden'); renameSync(dependency, dependency + '.hidden');
const actual = compare(engine, [...(target === 'deno' ? ['run', '-A'] : []), join(deployed, 'main.mjs'), ...args]);
assert.deepEqual(actual, expected);
const result = { scope: 'Ordinary Lake Git dependency through application CLI, native control and relocated deployment',
  target, platform: process.platform + '-' + process.arch, node: process.version,
  engineVersion: execFileSync(engine, ['--version'], { encoding: 'utf8' }).trim(), compiler,
  dependencyRevision: revision, gitIdentity: git.identity, build: JSON.parse(readFileSync(join(deployed, 'build-info.json'), 'utf8')),
  wasmSha256: await hashFile(join(deployed, 'program.wasm')), expected, actual,
  checks: { pinnedGitDependency: 'passed', nonDefaultSourceRoots: 'passed',
    sourceSymlink: process.platform === 'win32' ? 'not-run: Windows link creation needs separate coverage' : 'passed',
    exactCacheReuse: 'passed', sourceInvalidation: 'passed', addedAssetsPreserved: 'passed', compatibilityLauncher: 'passed', relocatedDeployment: 'passed' },
  resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(base, 'result.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result, null, 2));
