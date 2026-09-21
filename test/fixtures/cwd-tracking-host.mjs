import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, renameSync, unlinkSync, rmdirSync,
  rmSync, readdirSync, readlinkSync, symlinkSync } from 'node:fs';
import { open, writeFile } from 'node:fs/promises';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createNodeRuntimeHost, numbers } from '../../src/node-host.mjs';

const original = process.cwd(), root = mkdtempSync(join(tmpdir(), 'lasm-cwd-host-'));
const before = join(root, 'before'), after = join(root, 'after'), other = join(root, 'other');
mkdirSync(before); mkdirSync(other);
writeFileSync(join(before, 'payload'), 'first'); writeFileSync(join(other, 'payload'), 'second');
const first = createNodeRuntimeHost({ cwd: before, propagateCwd: process.argv[2] === 'propagate' });
const second = createNodeRuntimeHost({ cwd: other });
async function call(host, op, id = 0, arg = 0n, bytes = Buffer.alloc(0)) {
  const result = await host.request(op, id, arg, bytes);
  assert.equal(result.error, false, `operation ${op}: ${result.bytes.toString()}`);
  return result.bytes;
}
const cwd = async host => (await call(host, 23)).toString();
const change = (host, path) => call(host, 29, 0, 0n, Buffer.from(path));
async function read(host) {
  const id = Number((await call(host, 1, 0, 0n, Buffer.from('payload'))).readBigUInt64LE());
  try { return (await call(host, 2, id, 32n)).toString(); }
  finally { await host.releaseAsync(id); }
}
const text = value => { const bytes = Buffer.from(value); return Buffer.concat([numbers(bytes.length), bytes]); };
async function child(host, directory) {
  const request = Buffer.concat([numbers(2, 2, 2, 1, 0, 0, 0, directory === undefined ? 0 : 1),
    text('/bin/true'), ...(directory === undefined ? [] : [text(directory)])]);
  const id = Number((await call(host, 80, 0, 0n, request)).readBigUInt64LE());
  try { assert.equal((await call(host, 82, id)).readBigUInt64LE(), 0n); }
  finally { host.release(id); }
}
function directoryHandles() {
  return readdirSync('/proc/self/fd').filter(fd => {
    try { const path = readlinkSync('/proc/self/fd/' + fd); return path === root || path.startsWith(root + '/'); }
    catch (error) { if (error.code === 'ENOENT') return false; throw error; }
  }).length;
}
try {
  // Enter through the host too, exercising propagated cwd when requested.
  await change(first, before);
  renameSync(before, after);
  assert.equal(await cwd(first), after);
  assert.equal(await read(first), 'first');
  assert.equal(await read(second), 'second');
  const literal = join(root, 'literal (deleted)');
  mkdirSync(literal);
  await change(first, literal);
  assert.equal(await cwd(first), literal, 'a literal suffix was mistaken for directory deletion');
  await change(first, after); rmdirSync(literal);
  const ancestor = join(root, 'ancestor'), renamedAncestor = join(root, 'renamed-ancestor');
  mkdirSync(join(ancestor, 'nested'), { recursive: true });
  writeFileSync(join(ancestor, 'nested/payload'), 'ancestor');
  symlinkSync(join(ancestor, 'nested'), join(root, 'link'));
  const throughLink = createNodeRuntimeHost({ cwd: root + '/link/..' });
  try { assert.equal(await cwd(throughLink), ancestor, 'initial cwd normalized symlink/..'); }
  finally { throughLink.close(); }
  await change(first, join(ancestor, 'nested'));
  renameSync(ancestor, renamedAncestor);
  assert.equal(await cwd(first), join(renamedAncestor, 'nested'));
  assert.equal(await read(first), 'ancestor');
  await change(first, after);
  const gate = join(after, 'gate');
  const fifo = spawnSync('mkfifo', [gate], { encoding: 'utf8' });
  assert.equal(fifo.status, 0, fifo.stderr);
  const opening = first.request(1, 0, 0n, Buffer.from('gate'));
  await change(first, root);
  assert.equal(directoryHandles(), 3, 'pending FIFO open lost its original directory handle');
  const writing = writeFile(gate, 'leased');
  const opened = await opening;
  assert.equal(opened.error, false);
  const handle = Number(opened.bytes.readBigUInt64LE());
  try {
    await writing;
    assert.equal((await call(first, 2, handle, 6n)).toString(), 'leased');
  } finally { await first.releaseAsync(handle); }
  assert.equal(directoryHandles(), 2, 'completed FIFO open retained an obsolete cwd');
  unlinkSync(gate);
  await change(first, after);
  await child(first);
  unlinkSync(join(after, 'payload')); rmdirSync(after);
  const missing = await first.request(23, 0, 0n, Buffer.alloc(0));
  assert.equal(missing.error, true);
  assert.equal(missing.bytes.readBigUInt64LE(), 1n);
  assert.equal(missing.bytes.readBigUInt64LE(8), 2n);
  assert.equal((await call(first, 13, 0, 0n, Buffer.from('.'))).length, 0);
  await child(first); await child(first, '.'); await child(first, root);
  await change(first, '..'); assert.equal(await cwd(first), root);
  const longTimer = first.request(35, 0, 60_000n, Buffer.alloc(0));
  for (let index = 0; index < 200; index++) await change(first, index % 2 ? root : other);
  assert.equal(directoryHandles(), 2, 'an unrelated timer retained an obsolete cwd');
  assert.equal(await read(second), 'second', 'another instance lost its cwd');
  if (process.argv[2] !== 'propagate') assert.equal(process.cwd(), original);
  const disposalGate = join(root, 'disposal-gate');
  const disposalFifo = spawnSync('mkfifo', [disposalGate], { encoding: 'utf8' });
  assert.equal(disposalFifo.status, 0, disposalFifo.stderr);
  const pendingOpen = first.request(1, 0, 0n, Buffer.from('disposal-gate'));
  const beforeDisposal = process.cwd();
  const pendingChange = first.request(29, 0, 0n, Buffer.from(other));
  first.close();
  assert.equal((await longTimer).error, true);
  assert.equal((await pendingChange).error, true, 'a disposed instance changed directory');
  assert.equal(process.cwd(), beforeDisposal, 'a cancelled change mutated the host cwd');
  assert.equal(directoryHandles(), 2, 'disposal closed a directory with an open still pending');
  const disposalWriter = await open(disposalGate, 'w');
  assert.equal((await pendingOpen).error, true);
  await disposalWriter.close();
  assert.equal(directoryHandles(), 1, 'disposal leaked an in-flight directory handle');
  console.log('cwd rename/deletion, child inheritance, instance isolation and descriptor cleanup passed');
} finally {
  process.chdir(original);
  first.close(); second.close();
  assert.equal(directoryHandles(), 0, 'host disposal leaked directory descriptors');
  rmSync(root, { recursive: true, force: true });
}
