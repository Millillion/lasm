// lasm dev's build worker (src/dev-build-worker.mjs) and the one-build worker
// (src/application-build-worker.mjs), in-process: node:worker_threads and the
// build are stand-ins (test/fixtures/worker-stand-ins/), so the messages each
// worker sends for a build, its log and progress, and a failure can be checked.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import { registerHooks } from 'node:module';

const standIn = new URL('./fixtures/worker-stand-ins/index.mjs', import.meta.url).href;
registerHooks({
  resolve(specifier, context, next) {
    const parent = context.parentURL ?? '';
    if ((parent.includes('/src/dev-build-worker.mjs') || parent.includes('/src/application-build-worker.mjs'))
      && ['node:worker_threads', './application-build.mjs', './managed-artifacts.mjs', './edge/edge-build.mjs', './application-cli.mjs'].includes(specifier))
      return { url: standIn, shortCircuit: true };
    return next(specifier, context);
  },
});
const { state, reset } = await import(standIn);
let fresh = 0;
const load = file => import(new URL(`../src/${file}?${fresh++}`, import.meta.url).href);

test('the dev build worker: one build per message, with its log and progress, for Node, edge and browser targets', async () => {
  const port = reset();
  const trusted = state.trusted;
  await load('dev-build-worker.mjs');
  assert.equal(state.trusted, trusted + 1, 'verified trees are trusted for the session');
  const seen = [];
  state.buildApplication = async (input, options) => {
    seen.push({ input, profile: options.profile, output: options.output });
    options.log('compiling');
    options.progress({ stage: 'Linking' });
    return { output: '/out/node', signature: 'sig', linkWork: { big: true } };
  };
  await port.send({ id: 1, file: '/p/Main.lean', options: { profile: 'dev' } });
  assert.deepEqual(port.messages, [
    { id: 1, type: 'log', text: 'compiling' },
    { id: 1, type: 'progress', event: { stage: 'Linking' } },
    { id: 1, type: 'result', result: { output: '/out/node', signature: 'sig', linkWork: { big: true } } },
  ]);
  assert.deepEqual(seen, [{ input: '/p/Main.lean', profile: 'dev', output: undefined }]);

  // Edge and browser targets go through buildEdge, which builds the Node program first.
  const edgeCalls = [];
  state.buildEdge = async (file, target, buildOptions, verbose, extra) => {
    edgeCalls.push({ file, target, buildOptions, verbose, suspend: extra.browserSuspend, bundler: extra.bundler });
    extra.log('edge log');
    await extra.build(file, { profile: buildOptions.profile });
    return `/out/${target}`;
  };
  port.messages.length = 0;
  await port.send({ id: 2, file: '/p/Main.lean', options: { profile: 'release', verbose: true }, target: 'workers' });
  await port.send({ id: 3, file: '/p/Client.lean', options: { profile: 'dev', suspend: 'jspi', bundler: 1, output: '/www' }, target: 'browser' });
  assert.deepEqual(edgeCalls, [
    { file: '/p/Main.lean', target: 'workers', buildOptions: { profile: 'release', verbose: true }, verbose: true, suspend: 'none', bundler: false },
    { file: '/p/Client.lean', target: 'browser', buildOptions: { profile: 'dev', output: '/www' }, verbose: undefined, suspend: 'jspi', bundler: true },
  ]);
  assert.deepEqual(port.messages.filter(m => m.type === 'result'), [
    { id: 2, type: 'result', result: { output: '/out/node', signature: 'sig', edgeOutput: '/out/workers', linkWork: undefined } },
    { id: 3, type: 'result', result: { output: '/out/node', signature: 'sig', edgeOutput: '/out/browser', linkWork: undefined } },
  ]);
  assert.deepEqual(port.messages.filter(m => m.type === 'log').map(m => [m.id, m.text]), [[2, 'edge log'], [2, 'compiling'], [3, 'edge log'], [3, 'compiling']]);
  // Other targets (node: undefined, bun, deno) build directly.
  port.messages.length = 0;
  await port.send({ id: 4, file: '/p/Main.lean', options: {}, target: 'bun' });
  assert.equal(edgeCalls.length, 2);
  assert.equal(port.messages.at(-1).type, 'result');
});

test('the dev build worker sends a failure with the fields lasm dev shows', async () => {
  const port = reset();
  await load('dev-build-worker.mjs');
  state.buildApplication = async () => { throw Object.assign(new TypeError('bad'), { code: 'E_X', stderr: Buffer.from('lean says'), stdout: Buffer.from('out') }); };
  await port.send({ id: 7, file: '/p/Main.lean', options: {} });
  const [failure] = port.messages;
  assert.equal(failure.id, 7);
  assert.equal(failure.type, 'failure');
  assert.deepEqual({ ...failure.error, stack: undefined }, { name: 'TypeError', message: 'bad', code: 'E_X', stderr: 'lean says', stdout: 'out', stack: undefined });
  assert.match(failure.error.stack, /^TypeError: bad\n/);
  port.messages.length = 0;
  state.buildApplication = async () => { throw new Error('plain'); };
  await port.send({ id: 8, file: '/p/Main.lean', options: {} });
  assert.deepEqual({ ...port.messages[0].error, stack: undefined }, { name: 'Error', message: 'plain', code: undefined, stderr: undefined, stdout: undefined, stack: undefined });
});

test('the one-build worker: builds workerData\'s file, forwards log and progress, then closes its port', async () => {
  const port = reset({ file: '/p/Main.lean', options: { profile: 'release', verbose: true } });
  port.close = () => { port.closed = true; };
  const seen = [];
  state.buildApplication = async (input, options) => {
    seen.push([input, options.profile, options.verbose]);
    options.log('step');
    options.progress({ stage: 'Compiling' });
    return { output: '/out' };
  };
  await load('application-build-worker.mjs');
  assert.deepEqual(seen, [['/p/Main.lean', 'release', true]]);
  assert.deepEqual(port.messages, [{ type: 'log', text: 'step' }, { type: 'progress', event: { stage: 'Compiling' } }, { type: 'result', result: { output: '/out' } }]);
  assert.equal(port.closed, true);
  assert.equal(process.exitCode, undefined);
});

test('the one-build worker: a failure keeps the subprocess diagnostics and sets the exit code; no close on Deno', async () => {
  const port = reset({ file: '/p/Main.lean', options: {} });
  delete port.close;  // Deno's parentPort has no close
  state.buildApplication = async () => { throw Object.assign(new Error('lean failed'), { code: 'ENOENT', path: '/x', syscall: 'spawn', stderr: Buffer.from('Main.lean:1:0: error'), stdout: 'o' }); };
  try {
    await load('application-build-worker.mjs');
    assert.equal(process.exitCode, 1);
  } finally { process.exitCode = undefined; }
  assert.equal(port.messages.length, 1);
  const { type, error } = port.messages[0];
  assert.equal(type, 'failure');
  assert.deepEqual({ ...error, stack: undefined }, { name: 'Error', message: 'lean failed', code: 'ENOENT', path: '/x', syscall: 'spawn', stderr: 'Main.lean:1:0: error', stdout: 'o', stack: undefined });
  assert.match(error.stack, /^Error: lean failed/);
});
