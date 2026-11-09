// The private cwd worker factory behind Lean pthreads on Linux: its startup
// handshake (run here against a scripted libc), and the CwdWorker facade's
// events, messages, transfers, errors, termination and disposal.
import test from 'node:test';
import assert from 'node:assert/strict';
import { MessageChannel } from 'node:worker_threads';
import { EventEmitter, once } from 'node:events';
import { createRequire } from 'node:module';
import { installKoffiStandIn, standInKoffi } from './helpers/koffi-stand-in.mjs';

installKoffiStandIn();
const require = createRequire(import.meta.url);
const { runCwdFactory, createCwdWorkerFactory } = require('../src/native-pthread-factory.cjs');
const linux = { skip: process.platform !== 'linux', timeout: 20_000 };

function handshake(script) {
  const koffi = standInKoffi({ unshare: flags => script.unshare?.(flags) ?? 0, chdir: path => script.chdir?.(path) ?? 0 }).install();
  koffi.state.errno = 1;
  const ready = new SharedArrayBuffer(64), parent = new EventEmitter();
  runCwdFactory({ ready }, parent);
  const state = new Int32Array(ready, 0, 2);
  return { koffi, parent, status: state[0], message: Buffer.from(ready, 8, state[1]).toString() };
}

test('the factory thread takes a private filesystem context rooted at /', () => {
  const { koffi, parent, status } = handshake({});
  assert.equal(status, 1);
  assert.deepEqual(koffi.calls, [['unshare', 0x200], ['chdir', '/']]);
  assert.deepEqual(koffi.loads, [null]);
  assert.equal(parent.listenerCount('message'), 1);
});

test('a failed handshake reports its reason through the shared buffer', () => {
  const unshared = handshake({ unshare: () => -1 });
  assert.deepEqual([unshared.status, unshared.message], [-1, 'private cwd context: errno 1']);
  assert.equal(unshared.parent.listenerCount('message'), 0);
  const rooted = handshake({ chdir: () => -1 });
  assert.deepEqual([rooted.status, rooted.message], [-1, 'private cwd root: errno 1']);
  // A long reason is cut to the buffer.
  const koffi = standInKoffi({ unshare: () => { throw new Error('x'.repeat(100)); } }).install();
  void koffi;
  const ready = new SharedArrayBuffer(32);
  runCwdFactory({ ready }, new EventEmitter());
  assert.deepEqual([new Int32Array(ready, 0, 2)[0], new Int32Array(ready, 0, 2)[1]], [-1, 24]);
});

test('factory requests start workers and relay their events, messages and transferred ports', linux, async () => {
  const { parent } = handshake({});
  const { port1, port2 } = new MessageChannel();
  const events = [];
  port1.on('message', message => events.push(message));
  const source = `const { parentPort } = require('node:worker_threads');
    parentPort.on('message', value => {
      if (value === 'ports') { const { port1, port2 } = new MessageChannel(); port2.postMessage('through');
        parentPort.postMessage({ nested: new Map([['k', new Set([port1])]]), bytes: new Uint8Array(2) }, [port1]); }
      else if (value === 'throw') setImmediate(() => { throw new TypeError('worker failed'); });
      else parentPort.postMessage(['echo', value]);
    });`;
  parent.emit('message', { filename: source, filenameIsUrl: false, options: { eval: true }, port: port2 });
  const next = async event => { while (!events.some(e => e.event === event)) await new Promise(resolve => setTimeout(resolve, 5)); return events.splice(events.findIndex(e => e.event === event), 1)[0]; };
  assert.equal(typeof (await next('online')).data, 'number');
  port1.postMessage({ command: 'post', data: 'hello', transfer: [] });
  assert.deepEqual((await next('message')).data, ['echo', 'hello']);
  port1.postMessage({ command: 'post', data: 'ports', transfer: [] });
  const relayed = (await next('message')).data;
  const [port] = relayed.nested.get('k');
  assert.deepEqual((await once(port, 'message'))[0], 'through');
  port.close();
  port1.postMessage({ command: 'post', data: 'throw', transfer: [] });
  const error = await next('error');
  assert.deepEqual([error.data.name, error.data.message], ['TypeError', 'worker failed']);
  assert.equal(typeof (await next('exit')).data, 'number');
});

test('a worker that cannot be constructed reports an error and exit 1', linux, async () => {
  const { parent } = handshake({});
  const { port1, port2 } = new MessageChannel();
  const events = [];
  port1.on('message', message => events.push(message));
  parent.emit('message', { filename: 'file:///nonexistent/worker.mjs', filenameIsUrl: true, options: { workerData: () => {} }, port: port2 });
  while (events.length < 2) await new Promise(resolve => setTimeout(resolve, 5));
  assert.equal(events[0].event, 'error');
  assert.equal(typeof events[0].data.message, 'string');
  assert.deepEqual(events[1], { event: 'exit', data: 1 });
});

test('terminate commands stop the relayed worker', linux, async () => {
  const { parent } = handshake({});
  const { port1, port2 } = new MessageChannel();
  const events = [];
  port1.on('message', message => events.push(message));
  parent.emit('message', { filename: 'setInterval(() => {}, 1000)', filenameIsUrl: false, options: { eval: true }, port: port2 });
  while (!events.some(e => e.event === 'online')) await new Promise(resolve => setTimeout(resolve, 5));
  port1.postMessage({ command: 'terminate' });
  port1.postMessage({ command: 'unknown' });
  while (!events.some(e => e.event === 'exit')) await new Promise(resolve => setTimeout(resolve, 5));
  assert.equal(events.find(e => e.event === 'exit').data, 1);
});

test('CwdWorker mirrors a Worker from the private factory', linux, async () => {
  const CwdWorker = createCwdWorkerFactory();
  const worker = new CwdWorker(`const { parentPort } = require('node:worker_threads');
    parentPort.on('message', value => value === 'fail' ? setImmediate(() => { throw new RangeError('bad range'); }) : parentPort.postMessage([process.cwd(), value]));`,
  { eval: true, resourceLimits: { maxOldGenerationSizeMb: 64 } });
  assert.deepEqual(worker.resourceLimits, { maxOldGenerationSizeMb: 64 });
  assert.equal(worker.ref(), worker);
  await once(worker, 'online');
  assert.equal(typeof worker.threadId, 'number');
  const bytes = new ArrayBuffer(4);
  worker.postMessage('hi', { transferList: [bytes] });
  assert.equal(bytes.byteLength, 0); // a transferList option moves its buffers
  assert.deepEqual((await once(worker, 'message'))[0], ['/', 'hi']);
  const moved = new ArrayBuffer(8);
  worker.postMessage(moved, [moved]);
  assert.equal(moved.byteLength, 0);
  await once(worker, 'message');
  worker.postMessage('fail');
  const [error] = await once(worker, 'error');
  assert.ok(error instanceof RangeError);
  assert.equal(error.message, 'bad range');
  const [code] = await once(worker, 'exit');
  assert.equal(code, 1);
  assert.equal(await worker.terminate(), 1);
  assert.equal(worker.unref(), worker);

  const idle = new CwdWorker(new URL('data:text/javascript,setInterval(() => {}, 1000)'));
  await once(idle, 'online');
  const exited = once(idle, 'exit');
  assert.equal(await idle.terminate(), 1);
  assert.deepEqual(await exited, [1]);
  const lingering = new CwdWorker('setInterval(() => {}, 1000)', { eval: true });
  await once(lingering, 'online');
  const disposal = CwdWorker.dispose();
  assert.equal(CwdWorker.dispose(), disposal);
  assert.equal(await disposal, undefined);
  assert.equal(await lingering.exit, 1);
  assert.throws(() => new CwdWorker('0', { eval: true }), { message: 'Private cwd worker factory is disposed' });
});

test('a worker whose options cannot be sent to the factory fails at construction', linux, async () => {
  const CwdWorker = createCwdWorkerFactory();
  assert.throws(() => new CwdWorker('0', { eval: true, workerData: () => {} }), error => error.name === 'DataCloneError');
  await CwdWorker.dispose();
});

test('the private factory is Linux-only', () => {
  const saved = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...saved, value: 'darwin' });
  try { assert.throws(() => createCwdWorkerFactory(), { message: 'Private cwd worker factory is Linux-only' }); }
  finally { Object.defineProperty(process, 'platform', saved); }
});
