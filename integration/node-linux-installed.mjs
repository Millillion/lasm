// Only Node built-ins and the installed product are available to this control.
import assert from 'node:assert/strict';
import { mkdirSync, writeFileSync, readFileSync, existsSync, readdirSync, statSync, rmSync, openSync, readSync, closeSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { pathToFileURL } from 'node:url';
import { spawnSync } from 'node:child_process';
import { cacheControls } from './node-cache-controls.mjs';

const [phase, workspace, archive, hiddenCheckout] = process.argv.slice(2);
const project = join(workspace, 'project space λ'), tools = join(workspace, 'cache/lasm');
const compiler = join(project, 'node_modules/@lasm/compiler');
const resultPath = join(workspace, 'result.json');
const result = existsSync(resultPath) ? JSON.parse(readFileSync(resultPath)) : { steps: [], deployments: [], passedPhases: [] };
const save = () => writeFileSync(resultPath, JSON.stringify(result, null, 2) + '\n');
const run = (label, executable, args, cwd = project, env = process.env) => {
  const start = performance.now();
  const value = spawnSync(executable, args, { cwd, env, encoding: 'utf8', timeout: 1800_000, maxBuffer: 2 * 1024 * 1024 });
  const observed = { code: value.status, stdout: value.stdout ?? '', stderr: value.stderr ?? '' };
  result.steps.push({ label, command: [executable, ...args], cwd, seconds: (performance.now() - start) / 1000,
    ...observed, signal: value.signal, error: value.error?.message }); save();
  assert.ifError(value.error); assert.equal(value.signal, null, label + ': normal process exit');
  return observed;
};
const npx = (label, args, cwd = project) => run(label, join(dirname(process.execPath), 'npx'), ['lasm', ...args], cwd);
const json = path => JSON.parse(readFileSync(path, 'utf8'));
const buildInfo = directory => json(join(directory, 'build-info.json'));
const basic = { code: 0, stdout: 'Hello from Lean! 2 + 3 = 5\n', stderr: '' };
const matchesCli = (actual, expected) => {
  assert.equal(actual.code, expected.code);
  assert.equal(actual.stdout, expected.stdout);
};
function size(directory) {
  return readdirSync(directory, { withFileTypes: true }).reduce((total, entry) => {
    const path = join(directory, entry.name);
    return total + (entry.isDirectory() ? size(path) : entry.isFile() ? statSync(path).size : 0);
  }, 0);
}
function cachedDist(directory) {
  const base = join(directory, '.lake/lasm/applications');
  const found = [];
  for (const name of readdirSync(base)) for (const signature of readdirSync(join(base, name))) {
    const candidate = join(base, name, signature, 'dist');
    if (existsSync(join(candidate, 'build-info.json'))) found.push(candidate);
  }
  assert.equal(found.length, 1, 'The first source has exactly one cached build');
  return found[0];
}
async function oracle(file, args, directory = project, lake = false) {
  const { provisionLean } = await import(pathToFileURL(join(compiler, 'src/managed-lean.mjs')));
  const { nativeLeanEnvironment } = await import(pathToFileURL(join(compiler, 'src/application-sources.mjs')));
  const lean = await provisionLean(join(directory, file));
  const env = nativeLeanEnvironment(lean);
  return run('native comparison: ' + file, lake ? lean.lake : lean.lean,
    [...(lake ? ['--keep-toolchain', 'env', lean.lean] : []), '--run', file, ...args], directory, env);
}
async function deployment(name, output, file, cases, directory = project, lake = false) {
  const checks = [];
  const fd = openSync(join(output, 'program.wasm'), 'r'), magic = Buffer.alloc(4);
  try { assert.equal(readSync(fd, magic, 0, 4, 0), 4); } finally { closeSync(fd); }
  assert.deepEqual(magic, Buffer.from([0, 97, 115, 109]));
  for (const { args, expected } of cases) {
    const native = await oracle(file, args, directory, lake);
    assert.deepEqual(native, expected);
    const actual = run('plain Node: ' + name, process.execPath, [join(output, 'main.mjs'), ...args], directory);
    assert.deepEqual(actual, native);
    checks.push({ args, expected: native });
  }
  result.deployments.push({ name, output, source: join(directory, file), build: buildInfo(output), bytes: size(output), checks }); save();
}

try {
  assert.throws(() => readFileSync(hiddenCheckout), { code: 'EACCES' });
  for (const executable of ['lean', 'lake', 'cc', 'clang', 'python3', 'git'])
    assert.equal(spawnSync(executable, ['--version']).error?.code, 'ENOENT', executable + ' absent from PATH');
  for (const file of ['/usr/bin/python3', '/usr/bin/git', '/usr/bin/cc']) if (existsSync(file))
    assert.throws(() => readFileSync(file), { code: 'EACCES' }, 'Absolute preinstalled tool denied: ' + file);
  if (phase === 'cold') {
    assert.equal(existsSync(tools), false, 'Cold tool cache starts absent');
    mkdirSync(project, { recursive: true });
    writeFileSync(join(project, 'package.json'), '{"private":true,"type":"module"}\n');
    const installed = run('npm install candidate', join(dirname(process.execPath), 'npm'), ['install', archive]);
    assert.equal(installed.code, 0);
    result.npm = run('npm version', join(dirname(process.execPath), 'npm'), ['--version']).stdout.trim();
    result.provenance = json(join(compiler, 'provenance.json'));
    result.packageVersion = json(join(compiler, 'package.json')).version;
    result.compiler = compiler; result.project = project; result.tools = tools;
    result.support = json(join(compiler, 'application-support.json'));
    assert.equal(process.versions.node, result.support.node);
    const fixture = readFileSync(join(compiler, 'examples/hello/Main.lean'), 'utf8');
    assert.equal(readFileSync(join(compiler, 'README.md'), 'utf8').match(/```lean\n([\s\S]*?)```/)[1], fixture);
    writeFileSync(join(project, 'Main.lean'), fixture);
    matchesCli(npx('cold npx lasm Main.lean', ['Main.lean']), basic);
    result.cached = cachedDist(project);
    result.originalSignature = buildInfo(result.cached).signature;
    result.originalMtime = statSync(join(result.cached, 'program.wasm')).mtimeMs;
    const built = npx('npx lasm build Main.lean', ['build', 'Main.lean']);
    assert.equal(built.code, 0); assert.equal(built.stdout, '', 'Build must not run the application');
    assert.match(built.stderr, /Reused Lean/);
    await deployment('hello', join(project, 'dist'), 'Main.lean', [{ args: [], expected: basic }]);
    result.installBytes = size(join(project, 'node_modules'));
    result.coldToolsBytes = size(tools);
  } else if (phase === 'lake') {
    const directory = join(project, 'lake project 日本語'); mkdirSync(directory);
    writeFileSync(join(directory, 'lean-toolchain'), 'leanprover/lean4:v' + result.support.lean + '\n');
    writeFileSync(join(directory, 'lakefile.toml'), 'name = "greeting"\nversion = "0.1.0"\n[[lean_lib]]\nname = "Greeting"\n[[lean_exe]]\nname = "hello"\nroot = "Main"\n');
    writeFileSync(join(directory, 'Greeting.lean'), 'def greeting : String := s!"Lean module: {6 * 7}"\n');
    writeFileSync(join(directory, 'Main.lean'), 'import Greeting\ndef main : IO Unit := IO.println greeting\n');
    matchesCli(npx('Lake local import', ['Main.lean'], directory), { code: 0, stdout: 'Lean module: 42\n' });
    assert.equal(npx('Lake deployment build', ['build', 'Main.lean'], directory).code, 0);
    result.lake = { directory, signature: buildInfo(join(directory, 'dist')).signature };
  } else if (phase === 'offline') {
    // Kernel network restrictions, inherited by npm and every build tool.
    await assert.rejects(fetch('https://127.0.0.1:443', { signal: AbortSignal.timeout(5000) }),
      error => error.cause?.code === 'EACCES', 'Kernel must deny TCP, not merely encounter an unavailable network');
    matchesCli(npx('offline cached npx run', ['Main.lean']), basic);
    assert.equal(statSync(join(result.cached, 'program.wasm')).mtimeMs, result.originalMtime);
    assert.equal(buildInfo(result.cached).signature, result.originalSignature);
    result.offlineCacheReused = true;
    for (let i = 0; i < 3; i++) assert.deepEqual(run('startup sample ' + (i + 1), process.execPath, ['dist/main.mjs']), basic);
    writeFileSync(join(project, 'Broken.lean'), 'def main : IO Unit := IO.println unknownGreeting\n');
    const broken = npx('Lean diagnostic', ['Broken.lean']);
    assert.notEqual(broken.code, 0); assert.match(broken.stdout + broken.stderr, /unknownGreeting/);
    assert.match(broken.stdout + broken.stderr, /Broken\.lean:\d+/);
    const pin = join(project, 'lean-toolchain'); writeFileSync(pin, 'leanprover/lean4:v999.0.0\n');
    const unsupported = npx('unsupported Lean pin', ['Main.lean']);
    assert.equal(unsupported.code, 1); assert.match(unsupported.stderr, /Unsupported Lean toolchain/);
    assert.equal(readFileSync(pin, 'utf8'), 'leanprover/lean4:v999.0.0\n'); rmSync(pin);
    const info = buildInfo(result.cached);
    for (const [label, file, message] of [
      ['native tool drift', join(tools, 'artifacts', info.nativeLeanIdentity, 'LICENSE'), /cache contents changed/],
      ['runtime drift', join(compiler, 'targets', `lean-${info.lean}-wasm64`, 'exports.json'), /runtime integrity check failed/],
    ]) {
      const original = readFileSync(file);
      try { writeFileSync(file, Buffer.concat([original, Buffer.from('\nchanged\n')]));
        const rejected = npx(label + ' cannot reuse cached output', ['Main.lean']);
        assert.equal(rejected.code, 1); assert.match(rejected.stderr, message);
      } finally { writeFileSync(file, original); }
    }
    result.cacheRecovery = await cacheControls(compiler, join(workspace, 'cache controls'));
    writeFileSync(join(project, 'Args.lean'), 'def main (args : List String) : IO UInt32 := do\n  for arg in args do\n    IO.println s!"arg={arg}"\n  return if args.head? == some "fail" then 23 else 0\n');
    const cases = [
      { args: ['hello world', 'λ 日本語', '', '--target'], expected: { code: 0, stdout: 'arg=hello world\narg=λ 日本語\narg=\narg=--target\n', stderr: '' } },
      { args: ['fail'], expected: { code: 23, stdout: 'arg=fail\n', stderr: '' } },
    ];
    for (const c of cases) matchesCli(npx('arguments and exit code', ['Args.lean', '--', ...c.args]), c.expected);
    assert.equal(npx('arguments deployment', ['build', 'Args.lean', '--output', 'args dist λ']).code, 0);
    await deployment('arguments', join(project, 'args dist λ'), 'Args.lean', cases);
    const directory = result.lake.directory;
    writeFileSync(join(directory, 'Greeting.lean'), 'def greeting : String := s!"Lean module: {6 * 7 + 1}"\n');
    const expected = { code: 0, stdout: 'Lean module: 43\n', stderr: '' };
    matchesCli(npx('changed imported source', ['Main.lean'], directory), expected);
    assert.equal(npx('changed Lake deployment', ['build', 'Main.lean'], directory).code, 0);
    assert.notEqual(buildInfo(join(directory, 'dist')).signature, result.lake.signature);
    result.sourceInvalidation = true;
    await deployment('lake', join(directory, 'dist'), 'Main.lean', [{ args: [], expected }], directory, true);
    result.toolsBytes = size(tools);
    const host = process.platform + '-' + process.arch;
    result.downloads = [
      { tool: 'Lean/Lake', ...json(join(compiler, 'src/toolchains.json')).lean[result.support.lean].artifacts[host] },
      ...['python', 'sdk', 'git'].map(tool => ({ tool, ...json(join(compiler, `src/${tool}-tools.json`)).artifacts[host] })),
    ];
    result.downloadBytes = result.downloads.reduce((sum, value) => sum + value.bytes, 0);
    result.receipts = readdirSync(join(tools, 'artifacts')).filter(name => /^[a-f0-9]{64}$/.test(name)).map(identity => {
      const receipt = json(join(tools, 'artifacts', identity, '.lasm-artifact.json'));
      return { identity, files: Object.keys(receipt.files).length,
        bytes: Object.values(receipt.files).reduce((total, file) => total + (file.bytes ?? 0), 0) };
    });
  } else throw new Error('Unknown acceptance phase');
  result.passedPhases.push(phase); save();
  console.log(`Installed Node acceptance phase passed: ${phase}`);
} catch (error) { result.error = { phase, message: error.stack }; save(); throw error; }
