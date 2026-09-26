// Bounded maintainer control for real native descriptor operations. Run this
// with each stock engine; it does not alter any upstream Lean test.
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { mkdirSync, existsSync, readFileSync, writeFileSync, renameSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawn, spawnSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';
import { createWasmtimeFileHost } from '../../src/wasmtime-file-host.mjs';
import { wasiErrno } from '../../src/wasmtime-native-stdio.mjs';

await ensureResourceGuard();
const [helperArg, outputArg, ...extra] = process.argv.slice(2);
assert.ok(helperArg && outputArg && !extra.length, 'Supply NATIVE_HELPER NEW_OUTPUT');
const helper = resolve(helperArg), output = resolve(outputArg);
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const hash = file => createHash('sha256').update(readFileSync(file)).digest('hex');
const inputs = [fileURLToPath(import.meta.url), helper,
  ...['wasmtime-file-host.mjs', 'wasmtime-native-stdio.mjs'].map(name => fileURLToPath(new URL('../../src/' + name, import.meta.url)))];
const report = { scope: 'Linux x64 real native descriptors, independent of guest ABI and Lean acceptance',
  engine: process.versions, inputs: Object.fromEntries(inputs.map(file => [file, hash(file)])),
  resourceReport: process.env.LASM_RESOURCE_REPORT, checks: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
const host = createWasmtimeFileHost(helper), request = value => host.request(value);
const oracleNode = fileURLToPath(new URL('../../.cache/js-runtimes/node-26.10.0/bin/node', import.meta.url));
function oracle(script, ...args) {
  const result = spawnSync(oracleNode, ['--input-type=module', '-e', script, ...args], { encoding: 'utf8', timeout: 10_000 });
  assert.equal(result.status, 0, result.stderr); return result.stdout;
}
async function success(value) {
  const result = await request(value);
  assert.equal(result.errno, 0, JSON.stringify(value, (_, field) => typeof field === 'bigint' ? field.toString() : field));
  return result;
}
const open = async path => (await success({ operation: 'openat', directory: -100, path: Buffer.from(path), flags: 0, mode: 0 })).fd;
const close = fd => success({ operation: 'close', fd });
save();
try {
  const path = Buffer.concat([Buffer.from(join(output, 'binary-')), Buffer.from([255, 128])]);
  const data = Buffer.from([0, 1, 255, 128, 10, 13, 66, 67]);
  // Deno's node:fs path conversion decodes malformed UTF-8. Create the raw
  // filename through the independent Node oracle, then test this host's FFI.
  oracle('import{writeFileSync}from"node:fs";writeFileSync(Buffer.from(process.argv[1],"base64"),Buffer.from(process.argv[2],"base64"));', path.toString('base64'), data.toString('base64'));
  let fd = await open(path);
  assert.deepEqual(Buffer.from((await success({ operation: 'read', fd, length: 3 })).bytes), data.subarray(0, 3));
  assert.equal((await success({ operation: 'seek', fd, offset: -2n, whence: 2 })).offset, 6n);
  assert.deepEqual(Buffer.from((await success({ operation: 'read', fd, length: 30 })).bytes), data.subarray(6));
  assert.equal((await success({ operation: 'read', fd, length: 1 })).bytes.length, 0);
  assert.equal((await request({ operation: 'seek', fd, offset: -1n, whence: 0 })).errno, 28);
  // Node's bigint stat forms an independent oracle for the serialized struct.
  const expected = JSON.parse(oracle('import{openSync,fstatSync,closeSync}from"node:fs";const fd=openSync(Buffer.from(process.argv[1],"base64"),"r");console.log(JSON.stringify(fstatSync(fd,{bigint:true}),(_,v)=>typeof v==="bigint"?v.toString():v));closeSync(fd);', path.toString('base64')));
  const stat = Buffer.from((await success({ operation: 'stat', fd })).bytes);
  for (const [offset, field, method] of [[0, 'dev', 'readUInt32LE'], [4, 'mode', 'readUInt32LE'], [8, 'nlink', 'readBigUInt64LE'],
    [16, 'uid', 'readUInt32LE'], [20, 'gid', 'readUInt32LE'], [24, 'rdev', 'readUInt32LE'], [32, 'size', 'readBigInt64LE'],
    [40, 'blksize', 'readInt32LE'], [44, 'blocks', 'readInt32LE'], [96, 'ino', 'readBigUInt64LE']])
    assert.equal(BigInt(stat[method](offset)), BigInt(expected[field]), field);
  for (const [offset, field] of [[48, 'atimeNs'], [64, 'mtimeNs'], [80, 'ctimeNs']]) {
    // Some engines round fs.Stats nanoseconds. Get the independent oracle from
    // pinned stock Node, rather than accepting a weaker per-engine tolerance.
    assert.equal(stat.readBigInt64LE(offset) * 1_000_000_000n + stat.readBigUInt64LE(offset + 8), BigInt(expected[field]), field);
  }
  await close(fd);
  assert.equal((await request({ operation: 'read', fd, length: 1 })).errno, 8);
  assert.equal((await request({ operation: 'close', fd })).errno, 8);
  assert.equal(await open(path), fd); await close(fd);
  report.checks.push('raw filenames; binary short reads; seek; EOF; exact stat and nanoseconds; close and descriptor reuse'); save();

  assert.equal((await request({ operation: 'openat', directory: -100, path: Buffer.from(join(output, 'missing')), flags: 0, mode: 0 })).errno, 44);
  const parent = join(output, 'parent'), moved = join(output, 'moved'); mkdirSync(parent); writeFileSync(join(parent, 'child'), 'child data');
  const dir = await open(parent); renameSync(parent, moved);
  fd = (await success({ operation: 'openat', directory: dir, path: Buffer.from('child'), flags: 0, mode: 0 })).fd;
  assert.equal(Buffer.from((await success({ operation: 'read', fd, length: 30 })).bytes).toString(), 'child data');
  assert.equal((await request({ operation: 'read', fd: dir, length: 1 })).errno, 31);
  await close(fd); await close(dir);
  assert.equal((await request({ operation: 'openat', directory: dir, path: Buffer.from('child'), flags: 0, mode: 0 })).errno, 8);
  fd = (await success({ operation: 'openat', directory: 9999, path, flags: 0, mode: 0 })).fd; await close(fd);
  report.checks.push('native ENOENT, EBADF and EISDIR; openat retains directory identity after rename; absolute paths ignore dirfd'); save();

  // Python uses the native openat syscall independently of the adapter. Check
  // competing errors, rather than assuming a missing dirfd always wins.
  const nonDirectory = join(output, 'not-a-directory'); writeFileSync(nonDirectory, 'x');
  const fileDirectory = await open(nonDirectory);
  try {
    for (const [directoryKind, guestDirectory, relativePath, flags] of [
      ['invalid', 9999, '', 0], ['invalid', 9999, 'child', 0],
      ['invalid', 9999, 'x'.repeat(4096), 0], ['invalid', 9999, 'child', 0x410000],
      ['file', fileDirectory, '', 0], ['file', fileDirectory, 'child', 0],
      ['file', fileDirectory, 'x'.repeat(4096), 0], ['file', fileDirectory, 'child', 0x410000],
    ]) {
      const native = spawnSync('python3', ['-I', '-B', '-c',
        'import os,sys,errno\nd=-1 if sys.argv[1]=="invalid" else os.open(sys.argv[2],os.O_RDONLY)\ntry:\n f=os.open(sys.argv[3],int(sys.argv[4]),dir_fd=d)\n os.close(f)\n print("SUCCESS")\nexcept OSError as e: print(errno.errorcode[e.errno])\nfinally:\n if d>=0: os.close(d)',
        directoryKind, join(output, 'not-a-directory'), relativePath, String(flags)], { encoding: 'utf8', timeout: 10_000 });
      assert.equal(native.status, 0, native.stderr); assert.notEqual(native.stdout.trim(), 'SUCCESS');
      const expected = wasiErrno({ code: native.stdout.trim() });
      assert.equal((await request({ operation: 'openat', directory: guestDirectory,
        path: Buffer.from(relativePath), flags, mode: 0 })).errno, expected,
      `${directoryKind} directory, path length ${relativePath.length}, flags ${flags}`);
    }
  } finally { await close(fileDirectory); }
  report.checks.push('eight native openat error-precedence comparisons: invalid/file dirfd, empty/long paths and invalid flags'); save();

  const concurrent = join(output, 'concurrent'); writeFileSync(concurrent, Buffer.from(Array.from({ length: 100 }, (_, index) => index)));
  fd = await open(concurrent);
  const reads = await Promise.all(Array.from({ length: 10 }, () => success({ operation: 'read', fd, length: 10 })));
  assert.deepEqual(reads.flatMap(result => [...result.bytes]).sort((a, b) => a - b), Array.from({ length: 100 }, (_, index) => index));
  await close(fd); report.checks.push('concurrent native reads share one kernel file cursor without duplication'); save();

  const fifo = join(output, 'fifo');
  const made = spawnSync('mkfifo', [fifo], { encoding: 'utf8', timeout: 10_000 }); assert.equal(made.status, 0, made.stderr);
  let timerRan = false, writer;
  const opening = open(fifo);
  const writerCompletion = new Promise((resolveWriter, rejectWriter) => setTimeout(() => {
    timerRan = true;
    writer = spawn('python3', ['-I', '-B', '-c', 'import os,sys,time\nf=os.open(sys.argv[1],os.O_WRONLY)\ntime.sleep(0.1)\nos.write(f,b"fifo asynchronous")\nos.close(f)', fifo], { stdio: ['ignore', 'pipe', 'pipe'] });
    writer.once('error', rejectWriter); writer.once('exit', (code, signal) => code === 0 && signal === null ? resolveWriter() : rejectWriter(new Error('FIFO writer failed')));
  }, 20));
  fd = await opening; assert.ok(timerRan);
  let readTimerRan = false; setTimeout(() => { readTimerRan = true; }, 20);
  assert.equal(Buffer.from((await success({ operation: 'read', fd, length: 64 })).bytes).toString(), 'fifo asynchronous');
  assert.ok(readTimerRan); assert.equal((await request({ operation: 'seek', fd, offset: 0n, whence: 0 })).errno, 70);
  await close(fd); await writerCompletion;
  report.checks.push('blocking FIFO open and read preserve supervisor event-loop progress; ESPIPE retained');
  report.passed = true;
} finally {
  report.inputsUnchanged = inputs.every(file => hash(file) === report.inputs[file]);
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
