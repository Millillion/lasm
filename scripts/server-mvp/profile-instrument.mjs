// Profiling only (never shipped): copy a Lasm deployment and patch the copy's
// program.cjs so every Lean→host RPC is counted and timed.
//   node profile-instrument.mjs DEPLOYED NEW_COPY
// - Worker side: each call measures its own round trip (postMessage → reply
//   consumed) and piggybacks the previous call's [operation, kind, ms] on the
//   next request, so no extra messages or files are needed.
// - Main side: Module.lasmFullHostRequest counts calls per kind/operation, the
//   main-thread time to settle each request, and the worker-reported round
//   trips; startup marks are recorded. SIGUSR2 writes the counters and
//   performance.eventLoopUtilization() of the main thread to
//   $LASM_PROFILE_OUT (JSON, overwritten on each signal).
import assert from 'node:assert/strict';
import { cpSync, existsSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';

export function instrument(deployed, copy) {
  assert.ok(!existsSync(copy), 'Use a new copy directory');
  cpSync(deployed, copy, { recursive: true });
  const file = join(copy, 'program.cjs');
  let glue = readFileSync(file, 'utf8');
  const patch = (from, to) => {
    assert.equal(glue.split(from).length, 2, `Expected exactly one ${JSON.stringify(from.slice(0, 60))}`);
    glue = glue.replace(from, to);
  };
  // Worker side.
  patch('    wt.parentPort.postMessage({\n      cmd: 9,\n      handler: "lasmFullHostRequest",\n      args: [ {\n',
    '    var lasmProfileT0 = performance.now();\n    wt.parentPort.postMessage({\n      cmd: 9,\n      handler: "lasmFullHostRequest",\n      args: [ {\n        lasmProfileLast: lasmFullRPC.profileLast,\n');
  patch('    if (message.failure) throw new Error(message.failure);\n',
    '    lasmFullRPC.profileLast = [ kind === "request" ? operation : kind + ":" + operation, performance.now() - lasmProfileT0 ];\n'
    + '    if (message.failure) throw new Error(message.failure);\n');
  // Main side.
  patch('  Module.lasmFullHostRequest = async function(request) {\n',
    `  var lasmProfile = globalThis.lasmProfile = { started: performance.now(), marks: {}, ops: {}, rt: {} };
  lasmProfile.mark = name => { lasmProfile.marks[name] ??= performance.now(); };
  lasmProfile.bucket = ms => ms < 0.05 ? '<0.05' : ms < 0.1 ? '<0.1' : ms < 0.2 ? '<0.2' : ms < 0.5 ? '<0.5' : ms < 1 ? '<1' : ms < 2 ? '<2' : ms < 5 ? '<5' : ms < 20 ? '<20' : '>=20';
  lasmProfile.dump = () => {
    const elu = performance.eventLoopUtilization();
    require('node:fs').writeFileSync(process.env.LASM_PROFILE_OUT, JSON.stringify({ now: performance.now(),
      timeOrigin: performance.timeOrigin, elu, marks: lasmProfile.marks, ops: lasmProfile.ops, rt: lasmProfile.rt }));
  };
  if (process.env.LASM_PROFILE_OUT) process.on('SIGUSR2', lasmProfile.dump);
  const lasmFullHostRequestInner = async function(request) {\n`);
  patch('      Atomics.notify(signal, 0);\n    }\n  };\n}\n',
    `      Atomics.notify(signal, 0);
    }
  };
  Module.lasmFullHostRequest = function(request) {
    const t0 = performance.now();
    const key = request.kind === 'request' ? String(request.operation) : request.kind + ':' + request.operation;
    lasmProfile.mark('firstRpc');
    const op = lasmProfile.ops[key] ??= { calls: 0, settleMs: 0, syncMs: 0, inBytes: 0 };
    op.calls++; op.inBytes += request.byteLength;
    if (request.lasmProfileLast) {
      const [last, ms] = request.lasmProfileLast;
      const rt = lasmProfile.rt[last] ??= { calls: 0, totalMs: 0, buckets: {} };
      rt.calls++; rt.totalMs += ms; const b = lasmProfile.bucket(ms); rt.buckets[b] = (rt.buckets[b] ?? 0) + 1;
    }
    const promise = lasmFullHostRequestInner(request);
    op.syncMs += performance.now() - t0;
    return promise.finally(() => { op.settleMs += performance.now() - t0; });
  };
}
`);
  // Startup marks: instantiation done, worker pool loaded, Lean main called.
  patch('    var pthreadPoolReady = PThread.loadWasmModuleToAllWorkers();\n',
    '    globalThis.lasmProfile?.mark("preRun");\n    var pthreadPoolReady = PThread.loadWasmModuleToAllWorkers();\n');
  patch('      await pthreadPoolReady;\n', '      await pthreadPoolReady;\n      globalThis.lasmProfile?.mark("poolReady");\n');
  patch('  async function receiveInstance(instance, module) {\n',
    '  async function receiveInstance(instance, module) {\n    if (!ENVIRONMENT_IS_PTHREAD) globalThis.lasmProfile?.mark("instantiated");\n');
  patch('function callMain(args = []) {\n', 'function callMain(args = []) {\n  globalThis.lasmProfile?.mark("callMain");\n');
  writeFileSync(file, glue);
  return copy;
}

if (import.meta.url === `file://${process.argv[1]}`) {
  const [deployed, copy] = process.argv.slice(2);
  assert.ok(deployed && copy, 'Supply DEPLOYED NEW_COPY');
  console.log(instrument(resolve(deployed), resolve(copy)));
}
