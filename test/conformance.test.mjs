import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, symlink, rm } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { execFile } from 'node:child_process';
import { promisify } from 'node:util';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';
const exec = promisify(execFile);
const { lean } = resolveLean(root);

for (const name of ['fs', 'process', 'expr']) test(`${name}: ordinary Lean agrees with the native runtime`, { timeout: 900_000 }, async t => {
  const directory = await mkdtemp(join(tmpdir(), `lasm-${name}-conformance-`));
  t.after(() => rm(directory, { recursive: true, force: true }));
  const source = join(root, `test/fixtures/${name}-conformance/Main.lean`);
  const built = await buildMain(source);
  for (const implementation of ['native', 'wasm']) {
    const cwd = join(directory, implementation);
    await mkdir(join(cwd, 'directory/inner'), { recursive: true });
    await mkdir(join(cwd, 'order'));
    await writeFile(join(cwd, 'target'), 'outside');
    await writeFile(join(cwd, 'directory/target'), 'inside');
    for (const file of ['zeta','alpha','mu','日本語']) await writeFile(join(cwd, 'order', file), '');
    if (process.platform !== 'win32') await symlink('directory/inner', join(cwd, 'linkdir'));
  }
  const options = { env: { ...process.env, LEAN_NUM_THREADS: '4' }, timeout: 60_000, maxBuffer: 4 * 1024 * 1024 };
  const args = name === 'process' ? [process.execPath] : [];
  const native = await exec(lean, ['--run', source, ...args], { ...options, cwd: join(directory, 'native') });
  const wasm = await exec(process.execPath, [join(built.output, 'main.mjs'), ...args], { ...options, cwd: join(directory, 'wasm') });
  assert.equal(wasm.stdout, native.stdout);
  assert.equal(wasm.stderr, native.stderr);
});
