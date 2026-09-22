import test from 'node:test';
import assert from 'node:assert/strict';
import { copyFile, mkdir, mkdtemp, rm } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { execFile } from 'node:child_process';
import { promisify } from 'node:util';
import { buildMain } from '../src/main.mjs';
import { root } from '../src/toolchain.mjs';

const exec = promisify(execFile);

test('packaged Lean reports native-library metadata without requiring those libraries', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-runtime-metadata-'));
  try {
    const source = join(directory, 'source/Main.lean');
    await mkdir(join(directory, 'source'));
    await copyFile(join(root, 'test/fixtures/runtime-metadata/Main.lean'), source);
    const artifact = await buildMain(source, {
      output: join(directory, 'application'),
    });
    const result = await exec(process.execPath, [join(artifact.output, 'main.mjs')], { timeout: 30_000 });
    assert.equal(result.stderr, '');
    // This packaged runtime targets WASI. The separate full compiler targets
    // Emscripten; both use host adapters instead of Lean's native libuv loop.
    assert.equal(result.stdout, 'emscripten=false\nlibuv=0\nopenssl=0\n');
  } finally {
    await rm(directory, { recursive: true, force: true });
  }
});
