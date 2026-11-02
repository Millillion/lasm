// The engine stack of each Lean thread under Node (scripts/full-lean/emscripten-pre.js,
// issue #66): its default, the fallback when a host cannot reserve it, and the
// overflow diagnostic. scripts/ci/stack-depth.mjs runs real applications.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import vm from 'node:vm';

const source = readFileSync(new URL('../scripts/full-lean/emscripten-pre.js', import.meta.url), 'utf8');
const MiB = 1048576;
function prelude({ env = {}, platform = 'linux', totalMiB = 16384, constrainedMiB = 0, cpus = 4, refuseAboveMiB = Infinity } = {}) {
  const stacks = [], written = [], exits = [];
  class FakeWorker {
    constructor(filename, options) {
      const mb = options.resourceLimits?.stackSizeMb;
      if (mb > refuseAboveMiB) throw Object.assign(new Error('Worker initialization failure: EAGAIN'), { code: 'ERR_WORKER_INIT_FAILED' });
      stacks.push(mb);
    }
    emit() { return true; }
  }
  const os = { totalmem: () => totalMiB * MiB, availableParallelism: () => cpus };
  const fs = { writeSync: (fd, text) => written.push([fd, text]) };
  const process = { env, execArgv: [], platform, constrainedMemory: () => constrainedMiB * MiB, exit: code => exits.push(code) };
  const context = { ENVIRONMENT_IS_NODE: true, ENVIRONMENT_IS_PTHREAD: false, Module: {}, URL, process, Array, Error, Object, Number, String, Math };
  const base = createRequire(import.meta.url);
  context.require = Object.assign(name => name === 'node:os' ? os : name === 'node:fs' ? fs : base(name), { resolve: base.resolve });
  context.globalThis = context; context.Worker = FakeWorker;
  vm.runInNewContext(source, context);
  return { Worker: context.Worker, Module: context.Module, stacks, written, exits };
}
const stackOf = options => { const p = prelude(options); new p.Worker('a.js', {}); return p.stacks[0]; };

test('default: 1 GiB, a quarter of the memory on small hosts, 64 MiB at least', () => {
  assert.equal(stackOf({ totalMiB: 16384 }), 1024);
  assert.equal(stackOf({ totalMiB: 2048 }), 512);
  assert.equal(stackOf({ totalMiB: 16384, constrainedMiB: 512 }), 128, 'a container limit counts');
  assert.equal(stackOf({ totalMiB: 128 }), 64);
  assert.equal(stackOf({ platform: 'darwin', totalMiB: 7168 }), 1024);
});

test('default on Windows: threads commit their stacks, so the budget is shared', () => {
  assert.equal(stackOf({ platform: 'win32', totalMiB: 16384, cpus: 4 }), 256);
  assert.equal(stackOf({ platform: 'win32', totalMiB: 16384, cpus: 64 }), 118);
  assert.equal(stackOf({ platform: 'win32', totalMiB: 4096, cpus: 4 }), 227);
  assert.equal(stackOf({ platform: 'win32', totalMiB: 1024, cpus: 4 }), 64);
});

test('LASM_VM_STACK_MB overrides the default and is validated', () => {
  assert.equal(stackOf({ env: { LASM_VM_STACK_MB: '96' } }), 96);
  assert.equal(stackOf({ env: { LASM_VM_STACK_MB: '4096' }, totalMiB: 1024 }), 4096);
  assert.throws(() => prelude({ env: { LASM_VM_STACK_MB: 'lots' } }), /Invalid LASM_VM_STACK_MB/);
  assert.throws(() => prelude({ env: { LASM_VM_STACK_MB: '0' } }), /Invalid LASM_VM_STACK_MB/);
});

test('a host that cannot reserve the default stack gets smaller ones, kept for later threads', () => {
  const p = prelude({ totalMiB: 16384, refuseAboveMiB: 300 });
  new p.Worker('a.js', {}); new p.Worker('b.js', {});
  assert.deepEqual(p.stacks, [256, 256]);
  const floor = prelude({ refuseAboveMiB: 10 });
  assert.throws(() => new floor.Worker('a.js', {}), { code: 'ERR_WORKER_INIT_FAILED' }, 'nothing below 64 MiB');
  const pinned = prelude({ env: { LASM_VM_STACK_MB: '512' }, refuseAboveMiB: 300 });
  assert.throws(() => new pinned.Worker('a.js', {}), { code: 'ERR_WORKER_INIT_FAILED' }, 'an explicit size is not reduced');
});

test('overflow: native Lean diagnostic and status, then advice', () => {
  const p = prelude({ totalMiB: 16384 });
  p.Module.lasmFatalStackOverflow('engine');
  assert.deepEqual(p.exits, [134]);
  assert.equal(p.written[0][0], 2);
  assert.equal(p.written[0][1], '\nStack overflow detected. Aborting.\n'
    + 'Lasm: a Lean thread exhausted its 1024 MiB WebAssembly stack (LASM_VM_STACK_MB, default).\n'
    + 'Set LASM_VM_STACK_MB to a larger size in MiB, or make the recursion tail recursive (an accumulator).\n'
    + 'See https://github.com/Millillion/lasm/blob/main/FUNDAMENTAL_LIMITATIONS.md#recursion-depth\n');
  const linear = prelude();
  linear.Module.onAbort('stack overflow (Attempt to set SP to 0x1)');
  assert.deepEqual(linear.exits, [134]);
  assert.match(linear.written[0][1], /^\nStack overflow detected\. Aborting\.\nLasm: a Lean thread exhausted its 64 MiB C stack in WebAssembly linear memory\.\n/);
});

test('an uncaught engine stack overflow in a Lean thread reports the overflow', () => {
  const p = prelude({ env: { LASM_VM_STACK_MB: '96' } });
  const worker = new p.Worker('a.js', {});
  const error = Object.assign(new RangeError('Maximum call stack size exceeded'), { stack: 'RangeError\n    at wasm://wasm/1:wasm-function[25]:0x13e0' });
  worker.emit('error', error);
  assert.deepEqual(p.exits, [134]);
  assert.match(p.written[0][1], /exhausted its 96 MiB WebAssembly stack \(LASM_VM_STACK_MB\)\./);
});
