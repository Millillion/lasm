import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, rm, writeFile } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { execFile } from 'node:child_process';
import { promisify } from 'node:util';
import { buildMain } from '../src/main.mjs';
import { root, lean } from '../src/toolchain.mjs';

const exec = promisify(execFile);
const directory = await mkdtemp(join(tmpdir(), 'lasm-wall-clock-'));
test.after(() => rm(directory, { recursive: true, force: true }));
const source = join(root, 'test/fixtures/wall-clock/Main.lean');
const artifact = await buildMain(source, { output: join(directory, 'application') });

function samples(text) {
  const values = text.trim().split('\n').map(BigInt);
  assert.equal(values.length, 64);
  assert.ok(values.some(value => value % 1_000_000n !== 0n), 'wall time must retain submillisecond precision');
  assert.ok(values.every(value => value % 1000n === 0n), 'pinned libc++ timestamps use microseconds');
  return values;
}

test('ordinary Timestamp.now preserves native precision in a packaged Lean main', async () => {
  const native = await exec(lean, ['--run', source], { cwd: root, timeout: 30_000 });
  samples(native.stdout);
  const lower = BigInt(Date.now()) * 1_000_000n;
  const result = await exec(process.execPath, [join(artifact.output, 'main.mjs')], { timeout: 30_000 });
  const upper = BigInt(Date.now()) * 1_000_000n + 1_000_000n;
  assert.equal(result.stderr, '');
  assert.ok(samples(result.stdout).every(value => value >= lower && value <= upper));
});

test('a failed clock operation reaches ordinary Lean IO error handling', async () => {
  const fault = join(artifact.output, 'clock-fault.mjs');
  await writeFile(fault, `import { nativeClock } from './native-clock.mjs';
nativeClock().now = () => { throw Object.assign(new Error('expected clock failure'), {code: 'EIO', errno: 5, nativeMessage: true}); };
await import('./main.mjs');
`);
  const result = await exec(process.execPath, [fault, 'error'], { timeout: 30_000 });
  assert.equal(result.stdout, 'clock error propagated\n');
  assert.equal(result.stderr, '');
});
