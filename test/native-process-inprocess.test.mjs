// Linux posix_spawn with an inherited cwd (src/native-process.mjs), run in this
// process with the JavaScript launcher (src/process-exec.mjs): stdio slots,
// exit and signal statuses, kill and unref, and setup failures.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, rmSync, realpathSync, existsSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { nativeFiles } from '../src/native-files.mjs';
import { spawnInheritedProcess } from '../src/native-process.mjs';

const linux = { skip: process.platform !== 'linux', timeout: 30_000 };
const helper = fileURLToPath(new URL('../src/process-exec.mjs', import.meta.url));
const native = process.platform === 'linux' ? nativeFiles() : undefined;
async function run(configuration, { directoryFd, stdin = 'ignore', launcher = false } = {}) {
  const stdout = native.pipe(), stderr = native.pipe();
  let child;
  try {
    child = spawnInheritedProcess(process.execPath, [helper], [stdin, stdout[1], stderr[1], directoryFd ?? 'ignore'], {
      stdioFlags: [0, native.descriptorFlags(stdout[1]), native.descriptorFlags(stderr[1])],
      directoryFd, inheritProcessCwd: false, args: [], env: {}, ...configuration,
    }, launcher);
  } catch (error) { native.closeDescriptor(stdout[0]); native.closeDescriptor(stderr[0]); throw error; }
  finally { native.closeDescriptor(stdout[1]); native.closeDescriptor(stderr[1]); }
  const read = async fd => {
    const file = native.openDescriptor(fd, 'r'), chunks = [];
    try { for (;;) { const bytes = await native.read(file, 8192); if (!bytes.length) break; chunks.push(bytes); } }
    finally { await native.closeAsync(file); }
    return Buffer.concat(chunks).toString();
  };
  return { child, output: Promise.all([child.exit, read(stdout[0]), read(stderr[0])]) };
}

test('a child runs in the inherited directory descriptor with its arguments and environment', linux, async t => {
  const root = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-native-spawn-')));
  t.after(() => rmSync(root, { recursive: true, force: true }));
  const directory = native.openDirectory(root);
  t.after(() => native.closeDescriptor(directory));
  const { child, output } = await run({ command: '/bin/sh', args: ['-c', 'pwd; printf "%s|%s" "$1" "$LASM_X" >&2', 'sh', 'arg one'],
    env: { LASM_X: 'value' } }, { directoryFd: directory });
  assert.ok(Number.isInteger(child.pid) && child.pid > 0);
  assert.deepEqual(await output, [0, root + '\n', 'arg one|value']);
  assert.equal(child.kill('SIGTERM'), false);
});

test('exit statuses and signals are reported as Lean expects', linux, async () => {
  assert.deepEqual(await (await run({ command: '/bin/sh', args: ['-c', 'exit 42'] })).output, [42, '', '']);
  const sleeping = await run({ command: '/bin/sleep', args: ['30'] });
  assert.equal(sleeping.child.kill('SIGKILL'), true);
  assert.deepEqual(await sleeping.output, [137, '', '']);
  const terminated = await run({ command: '/bin/sleep', args: ['30'] });
  terminated.child.unref();
  terminated.child.kill('SIGTERM');
  assert.equal((await terminated.output)[0], 128 + 15);
  const missing = await run({ command: '/nonexistent/lasm-command' });
  assert.deepEqual(await missing.output, [255, '', "could not execute external process '/nonexistent/lasm-command'\n"]);
});

test('an inherited stdin slot is the parent\'s descriptor', linux, async () => {
  const input = native.pipe();
  const writer = native.openDescriptor(input[1], 'w');
  await native.write(writer, Buffer.from('from parent\n'));
  native.close(writer);
  try {
    const { output } = await run({ command: '/bin/cat' }, { stdin: input[0] });
    assert.deepEqual(await output, [0, 'from parent\n', '']);
  } finally { native.closeDescriptor(input[0]); }
});

test('an invalid stdio descriptor fails before spawning, closing what was opened', linux, async () => {
  const before = (await import('node:fs')).readdirSync('/proc/self/fd').length;
  assert.throws(() => spawnInheritedProcess(process.execPath, [helper], ['ignore', 1_000_000, 'inherit', 'ignore'], {}, false),
    error => error.code === 'EBADF' && error.errno === native.errno('EBADF'));
  assert.equal((await import('node:fs')).readdirSync('/proc/self/fd').length, before);
});

test('the native launcher must be built and verified', linux, async t => {
  const built = ['../src/native/process/manifest.json', '../.cache/native-host/process/manifest.json']
    .some(path => existsSync(new URL(path, import.meta.url)));
  if (built) { t.diagnostic('native launcher present'); return; }
  assert.throws(() => spawnInheritedProcess(process.execPath, [], ['ignore', 'inherit', 'inherit'], {}, true), /Native process launcher is missing/);
});

test('cwd inheritance is Linux-only', () => {
  const saved = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...saved, value: 'darwin' });
  try { assert.throws(() => spawnInheritedProcess('/bin/true', [], [], {}), { message: 'Native cwd inheritance is Linux-only' }); }
  finally { Object.defineProperty(process, 'platform', saved); }
});
