import assert from 'node:assert/strict';
import { spawn } from 'node:child_process';
import { mkdtempSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { nativeFiles } from '../../src/native-files.mjs';
import { spawnInheritedProcess } from '../../src/native-process.mjs';

const native = nativeFiles(), root = mkdtempSync(join(tmpdir(), 'lasm-native-process-'));
const helper = fileURLToPath(new URL('../../src/process-exec.mjs', import.meta.url));
const prefix = process.versions.deno ? ['run', '--no-config', '-A'] : [];
async function capture(configuration, directoryFd) {
  const stdout = native.pipe(), stderr = native.pipe();
  let child;
  try {
    child = spawnInheritedProcess(process.execPath, [...prefix, helper],
      ['ignore', stdout[1], stderr[1], directoryFd], {
        stdioFlags: [0, native.descriptorFlags(stdout[1]), native.descriptorFlags(stderr[1])],
        directoryFd, inheritProcessCwd: false, args: [], env: {}, ...configuration,
      });
  } catch (error) {
    native.closeDescriptor(stdout[0]); native.closeDescriptor(stderr[0]); throw error;
  } finally { native.closeDescriptor(stdout[1]); native.closeDescriptor(stderr[1]); }
  const read = async fd => {
    const file = native.openDescriptor(fd, 'r'), chunks = [];
    try { for (;;) { const bytes = await native.read(file, 8192); if (!bytes.length) break; chunks.push(bytes); } }
    finally { await native.closeAsync(file); }
    return Buffer.concat(chunks).toString();
  };
  return { child, output: Promise.all([child.exit, read(stdout[0]), read(stderr[0])]) };
}
function ordinaryChild(code) {
  const child = spawn('/bin/sh', ['-c', `exit ${code}`], { stdio: 'ignore' });
  return new Promise((resolve, reject) => {
    child.once('error', reject);
    child.once('exit', status => { try { assert.equal(status, code); resolve(); } catch (error) { reject(error); } });
  });
}
try {
  // Give the directory descriptor number zero. Child file actions replace
  // stdin before duplicating the directory to slot four; its source must live.
  native.closeDescriptor(0);
  const directory = native.openDirectory(root);
  assert.equal(directory, 0);
  try {
    const moved = await capture({ command: '/bin/pwd' }, directory);
    assert.deepEqual(await moved.output, [0, root + '\n', '']);
    // Oversized configuration transport plus mixed reapers: native waitpid
    // must coexist with each engine's ordinary child-process bookkeeping.
    const results = await Promise.all(Array.from({ length: 6 }, async (_, index) => {
      const standard = ordinaryChild(20 + index);
      const custom = await capture({ command: '/bin/sh', env: { LASM_TEST_ENV: 'x'.repeat(100_000) },
        args: ['-c', 'test "${#LASM_TEST_ENV}" -eq 100000 || exit 91; printf "configured\\n"'] }, directory);
      assert.deepEqual(await custom.output, [0, 'configured\n', '']);
      await standard;
    }));
    assert.equal(results.length, 6);
    const sleeping = await capture({ command: '/bin/sleep', args: ['30'] }, directory);
    assert.equal(sleeping.child.kill('SIGKILL'), true);
    assert.deepEqual(await sleeping.output, [137, '', '']);
  } finally { native.closeDescriptor(directory); }
  console.log('native spawn preserves descriptors, large configurations, mixed reapers and kill status');
} finally { rmSync(root, { recursive: true, force: true }); }
