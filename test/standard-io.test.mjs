import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, rm, writeFile, readFile, mkdir } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { execFile } from 'node:child_process';
import { promisify } from 'node:util';
import { buildMain } from '../src/main.mjs';
import { root, lean } from '../src/toolchain.mjs';

const exec = promisify(execFile);
const directory = await mkdtemp(join(tmpdir(), 'lasm-standard-io-'));
test.after(() => rm(directory, { recursive: true, force: true }));
const source = join(root, 'test/fixtures/standard-io/Main.lean');
const artifact = await buildMain(source);

test('ordinary console, filesystem, promises, mutexes and timers agree with native Lean', async () => {
  const native = await exec(lean, ['--run', source, join(directory, 'native')], {
    cwd: root, env: { ...process.env, LEAN_NUM_THREADS: '2' }, timeout: 60_000,
  });
  const wasm = await exec(process.execPath, [join(artifact.output, 'main.mjs'), join(directory, 'wasm')], {
    cwd: root, timeout: 60_000,
  });
  assert.equal(wasm.stdout, native.stdout);
  assert.equal(wasm.stderr, native.stderr);
  assert.equal(wasm.stdout, 'standard IO checks passed\n');
});

test('standalone files need no module header, manifest, annotations or Lasm imports', async () => {
  const file = join(directory, 'hello-world.lean');
  await writeFile(file, 'def main (args : List String) : IO UInt32 := do\n  IO.println (String.intercalate "|" args)\n  return 7\n');
  const built = await buildMain(file);
  let result;
  try { await exec(process.execPath, [join(built.output, 'main.mjs'), 'λ 日本語', '', 'a b'], { timeout: 10_000 }); }
  catch (error) { result = error; }
  assert.equal(result.code, 7);
  assert.equal(result.stdout, 'λ 日本語||a b\n');
  assert.equal((await buildMain(file)).cacheHit, true);
  await writeFile(file, (await readFile(file, 'utf8')).replace('return 7', 'return 0'));
  assert.equal((await buildMain(file)).cacheHit, false);
  const run = await exec(process.execPath, [join(built.output, 'main.mjs'), 'new'], { timeout: 10_000 });
  assert.equal(run.stdout, 'new\n');
});

test('main supports IO Unit, IO UInt32 and argument-taking IO Unit', async () => {
  for (const [name, body, args, output] of [
    ['Unit', 'def main : IO Unit := IO.println "unit"', [], 'unit\n'],
    ['Status', 'def main : IO UInt32 := pure 0', [], ''],
    ['Arguments', 'def main (args : List String) : IO Unit := IO.println args.length', ['a','b'], '2\n'],
  ]) {
    const file = join(directory, `${name}.lean`);
    await writeFile(file, body + '\n');
    const built = await buildMain(file);
    assert.equal((await exec(process.execPath, [join(built.output, 'main.mjs'), ...args], { timeout: 10_000 })).stdout, output);
  }
});

test('uncaught Lean errors and explicit process exit set the Node exit code', async () => {
  for (const [name, body, code, message] of [
    ['Failure', 'def main : IO Unit := throw (IO.userError "expected failure")', 1, /expected failure/],
    ['Exit', 'def main : IO Unit := IO.Process.exit 9', 9, /^$/],
  ]) {
    const file = join(directory, `${name}.lean`);
    await writeFile(file, body + '\n');
    const built = await buildMain(file);
    await assert.rejects(exec(process.execPath, [join(built.output, 'main.mjs')], { timeout: 10_000 }), error => {
      assert.equal(error.code, code); assert.match(error.stderr, message); return true;
    });
  }
});

test('the main runner respects Lake source directories and local dependencies', async () => {
  const project = join(directory, 'lake project 日本語');
  const dependency = join(directory, 'dependency');
  await mkdir(join(project, 'src'), { recursive: true });
  await mkdir(dependency);
  await writeFile(join(dependency, 'lakefile.toml'), 'name = "support"\n[[lean_lib]]\nname = "Support"\n');
  await writeFile(join(dependency, 'Support.lean'), 'module\npublic def greeting := "from Lake λ"\n');
  await writeFile(join(project, 'lean-toolchain'), 'leanprover/lean4:v4.32.0\n');
  await writeFile(join(project, 'lakefile.toml'), 'name = "app"\n[[require]]\nname = "support"\npath = "../dependency"\n[[lean_lib]]\nname = "App"\nsrcDir = "src"\n');
  const file = join(project, 'src/App.lean');
  await writeFile(file, 'module\npublic import Support\npublic def main : IO Unit := IO.println greeting\n');
  const built = await buildMain(file);
  assert.equal((await exec(process.execPath, [join(built.output, 'main.mjs')], { timeout: 10_000 })).stdout, 'from Lake λ\n');
  assert.equal((await buildMain(file)).cacheHit, true);
  await writeFile(join(dependency, 'Support.lean'), 'module\npublic def greeting := "changed λ"\n');
  assert.equal((await buildMain(file)).cacheHit, false);
  assert.equal((await exec(process.execPath, [join(built.output, 'main.mjs')], { timeout: 10_000 })).stdout, 'changed λ\n');
});
