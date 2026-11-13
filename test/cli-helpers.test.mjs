// The CLI's small helpers in-process: the elapsed ticker and its worker, the
// compatibility launcher, build progress lines, the process launcher's
// private configuration format and native lookup, and the application
// signal policy. Their threads, natives and children are stand-ins, so
// Stryker's per-test coverage sees this code.
import assert from 'node:assert/strict';
import test from 'node:test';
import { registerHooks } from 'node:module';
import { copyFileSync, mkdirSync, mkdtempSync, rmSync, writeFileSync, readFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { forAll } from './helpers/property.mjs';

// Stand-ins for the modules these helpers import, keyed by importer.
const standIns = {
  'elapsed-ticker.mjs': { 'node:worker_threads': 'export const Worker = function (...a) { return globalThis.helperStandIns.Worker(...a); };' },
  'elapsed-ticker-worker.mjs': {
    'node:worker_threads': 'export const workerData = globalThis.helperStandIns.workerData;',
    'node:fs': 'export const writeSync = (...a) => globalThis.helperStandIns.writeSync(...a);',
  },
  'application-signals.mjs': { './native-signals.mjs': 'export const nativeSignals = () => globalThis.helperStandIns.nativeSignals();' },
};
registerHooks({
  resolve(specifier, context, next) {
    const parent = context.parentURL && new URL(context.parentURL);
    const file = parent?.pathname.split('/').pop();
    if (parent?.pathname.includes('/src/') && Object.hasOwn(standIns, file) && Object.hasOwn(standIns[file], specifier))
      return { url: 'data:text/javascript,' + encodeURIComponent(standIns[file][specifier] + `\n// ${parent.search}`), shortCircuit: true };
    return next(specifier, context);
  },
});
globalThis.helperStandIns = {};
const source = name => new URL(`../src/${name}`, import.meta.url).href;
let instance = 0;
const fresh = name => import(`${source(name)}?instance=${++instance}`);

test('the elapsed ticker starts a worker with its label and interval, and stops it', async () => {
  const workers = [];
  globalThis.helperStandIns.Worker = (url, options) => {
    const worker = { url: String(url), options, handlers: {}, unrefed: false, terminated: 0,
      on(event, handler) { this.handlers[event] = handler; return this; }, unref() { this.unrefed = true; },
      terminate() { this.terminated++; return Promise.reject(new Error('already gone')); } };
    workers.push(worker); return worker;
  };
  const { startElapsedTicker } = await fresh('elapsed-ticker.mjs');
  const stop = startElapsedTicker('Linking for WASI');
  assert.equal(workers.length, 1);
  const [worker] = workers;
  assert.equal(worker.url, new URL('../src/elapsed-ticker-worker.mjs', import.meta.url).href);
  assert.deepEqual(worker.options, { workerData: { label: 'Linking for WASI', intervalMs: 10_000 }, execArgv: [] });
  assert.equal(worker.unrefed, true);
  assert.equal(typeof worker.handlers.error, 'function');
  worker.handlers.error(new Error('worker failed')); // ignored
  stop();
  assert.equal(worker.terminated, 1);
  await new Promise(resolve => setImmediate(resolve)); // the rejected terminate is handled
  startElapsedTicker('x', { intervalMs: 250 });
  assert.equal(workers[1].options.workerData.intervalMs, 250);
  // No worker threads: a ticker that does nothing.
  globalThis.helperStandIns.Worker = () => { throw new Error('no threads'); };
  const noop = startElapsedTicker('y');
  assert.equal(noop(), undefined);
});

test('the ticker worker writes "[lasm] label — time elapsed" to stderr each interval', async t => {
  const writes = [];
  let tick, interval;
  const { setInterval: realSetInterval } = globalThis, realNow = Date.now;
  let now = 1_000_000;
  globalThis.setInterval = (callback, milliseconds) => { tick = callback; interval = milliseconds; return 0; };
  Date.now = () => now;
  t.after(() => { globalThis.setInterval = realSetInterval; Date.now = realNow; });
  globalThis.helperStandIns.workerData = { label: 'Linking for the browser', intervalMs: 1234 };
  globalThis.helperStandIns.writeSync = (fd, text) => writes.push([fd, text]);
  await fresh('elapsed-ticker-worker.mjs');
  globalThis.setInterval = realSetInterval;
  assert.equal(interval, 1234);
  for (const [elapsed, shown] of [[999, '0s'], [10_000, '10s'], [59_999, '59s'], [60_000, '1m 0s'], [61_500, '1m 1s'], [3_725_000, '62m 5s']]) {
    now = 1_000_000 + elapsed; tick();
    assert.deepEqual(writes.at(-1), [2, `[lasm] Linking for the browser — ${shown} elapsed\n`]);
  }
  // A closed stderr does not end the worker.
  globalThis.helperStandIns.writeSync = () => { throw new Error('EPIPE'); };
  assert.doesNotThrow(() => tick());
});

test('the compatibility launcher keeps its options, the source and optional --', async () => {
  const { launcherArguments, launcherUsage } = await import('../src/launcher.mjs');
  assert.equal(launcherUsage, 'Usage: lasm-node.js [--rebuild] [--verbose] <Main.lean> [--] [arguments…]');
  assert.deepEqual(launcherArguments(['Main.lean']), ['Main.lean', '--']);
  assert.deepEqual(launcherArguments(['--verbose', '--rebuild', 'A.lean', '--', '--', 'x']), ['--verbose', '--rebuild', 'A.lean', '--', '--', 'x']);
  assert.deepEqual(launcherArguments(['A.lean', 'x', '--']), ['A.lean', '--', 'x', '--']);
  for (const help of ['--help', '-h']) { assert.equal(launcherArguments([help]), null); assert.equal(launcherArguments(['--rebuild', help]), null); }
  for (const argv of [[], ['Main.txt'], ['--target', 'node'], ['-x.lean'], ['--verbose'], ['Main.lean.bak']])
    assert.throws(() => launcherArguments(argv), { message: launcherUsage }, JSON.stringify(argv));
  // Only leading options are launcher options; later ones are the program's.
  assert.deepEqual(launcherArguments(['A.lean', '--rebuild']), ['A.lean', '--', '--rebuild']);
});

test('launch: usage on --help, an error report and exit code 1 on bad input', async t => {
  const { launch, launcherUsage } = await import('../src/launcher.mjs');
  const argv = process.argv, exitCode = process.exitCode, log = console.log, error = console.error;
  const output = { log: [], error: [] };
  console.log = (...a) => output.log.push(a.join(' ')); console.error = (...a) => output.error.push(a.join(' '));
  t.after(() => { process.argv = argv; process.exitCode = exitCode; console.log = log; console.error = error; });
  process.argv = ['node', 'lasm-node.js', '--help'];
  process.exitCode = undefined;
  await launch();
  assert.deepEqual(output.log, [launcherUsage]);
  assert.equal(process.exitCode, undefined);
  process.argv = ['node', 'lasm-node.js', 'nope.txt'];
  await launch();
  assert.deepEqual(output.error, [launcherUsage]);
  assert.equal(process.exitCode, 1);
  process.exitCode = undefined;
  const missing = join(tmpdir(), `lasm-missing-${process.pid}`, 'Main.lean');
  process.argv = ['node', 'lasm-node.js', missing];
  await launch();
  assert.match(output.error.at(-1), /Main\.lean not found in /);
  assert.equal(process.exitCode, 1);
});

function progressReporter(options = {}) {
  let now = 0, tick, cancelled;
  const lines = [];
  const progress = (async () => (await import('../src/build-progress.mjs')).createBuildProgress)().then(create => create({
    log: text => lines.push(text), now: () => now, intervalMs: 1000,
    schedule: (callback, ms) => { tick = callback; assert.equal(ms, 1000); return { unref() { lines.push('<unref>'); } }; },
    cancel: timer => { cancelled = timer; }, ...options }));
  return { progress, lines, at: ms => { now = ms; }, tick: () => tick(), cancelled: () => cancelled };
}

test('build progress: stage lines, elapsed time, byte sizes and the waiting note', async () => {
  const r = progressReporter();
  const progress = await r.progress;
  assert.deepEqual(r.lines, ['<unref>']);
  r.tick(); // nothing yet
  assert.equal(r.lines.length, 1);
  progress.update({ stage: 'Checking sources' });
  assert.equal(r.lines.at(-1), '[lasm] Checking sources');
  r.at(999); r.tick();
  assert.equal(r.lines.at(-1), '[lasm] Checking sources');
  r.at(1000); r.tick();
  assert.equal(r.lines.at(-1), '[lasm] Checking sources — 1s elapsed');
  r.at(125_000); r.tick();
  assert.equal(r.lines.at(-1), '[lasm] Checking sources — 2m 5s elapsed');
  // The same stage again prints nothing until it completes.
  const count = r.lines.length;
  progress.update({ stage: 'Checking sources' });
  assert.equal(r.lines.length, count);
  progress.update({ stage: 'Checking sources', complete: true });
  assert.equal(r.lines.at(-1), '[lasm] Checking sources — 2m 5s elapsed');
  // A download: the first-time note once, sizes in B, kB, MB and GB.
  progress.update({ stage: 'Downloading', download: true, cache: '/c', totalBytes: 999 });
  assert.deepEqual(r.lines.slice(-3), ['[lasm] First-time tool setup can take a few minutes. Lasm downloads and verifies its tools automatically; later builds reuse them.',
    '[lasm] Tools cache: /c', '[lasm] Downloading: 0 B / 999 B (0%)']);
  for (const [received, total, text] of [[999, 999, '999 B / 999 B (100%)'], [1000, 999_999, '1.0 kB / 1000.0 kB (0%)'],
    [1_000_000, 2_000_000_000, '1.0 MB / 2.00 GB (0%)'], [999_999_999, 1_000_000_000, '1000.0 MB / 1.00 GB (99%)']]) {
    progress.update({ stage: `Downloading ${total}`, download: true, cache: '/c', totalBytes: total, receivedBytes: received });
    assert.equal(r.lines.at(-1), `[lasm] Downloading ${total}: ${text}`);
  }
  assert.equal(r.lines.filter(line => line.includes('First-time')).length, 1);
  // No new data for an interval: say so, with how long.
  r.at(200_000);
  progress.update({ stage: 'Fetching', totalBytes: 100, receivedBytes: 10 });
  r.at(200_999); r.tick();
  assert.equal(r.lines.at(-1), '[lasm] Fetching: 10 B / 100 B (10%)');
  r.at(201_000); r.tick();
  assert.equal(r.lines.at(-1), '[lasm] Fetching: 10 B / 100 B (10%); waiting for download data (1s) — 1s elapsed');
  progress.update({ stage: 'Fetching', totalBytes: 100, receivedBytes: 20 }); // new data resets the wait
  r.at(201_500); r.tick();
  assert.equal(r.lines.at(-1), '[lasm] Fetching: 20 B / 100 B (20%) — 1s elapsed');
  r.at(202_000); r.tick();
  assert.equal(r.lines.at(-1), '[lasm] Fetching: 20 B / 100 B (20%); waiting for download data (1s) — 2s elapsed');
  progress.update({ stage: 'Fetching', totalBytes: 100, receivedBytes: 20 }); // no new data: the wait goes on
  r.at(203_000); r.tick();
  assert.equal(r.lines.at(-1), '[lasm] Fetching: 20 B / 100 B (20%); waiting for download data (2s) — 3s elapsed');
  progress.update({ stage: 'Fetching', totalBytes: 100, receivedBytes: 100 });
  r.at(205_000); r.tick();
  assert.equal(r.lines.at(-1), '[lasm] Fetching: 100 B / 100 B (100%) — 5s elapsed', 'a finished download waits for nothing');
  progress.message('a note');
  assert.equal(r.lines.at(-1), '[lasm] a note');
  progress.finish('Build ready');
  assert.equal(r.lines.at(-1), '[lasm] Build ready (205s total).'.replace('205s', '3m 25s'));
  assert.ok(r.cancelled());
  // After finish: nothing more.
  const final = r.lines.length;
  progress.update({ stage: 'late' }); progress.message('late'); progress.finish('again'); r.tick();
  assert.equal(r.lines.length, final);
});

test('build progress: minutes from 60 s, and the total from the start', async () => {
  const { createBuildProgress } = await import('../src/build-progress.mjs');
  let now = 5000, tick;
  const lines = [];
  const progress = createBuildProgress({ log: text => lines.push(text), now: () => now, schedule: callback => { tick = callback; }, cancel: () => {} });
  progress.update({ stage: 'Linking' });
  now = 64_999; tick();
  assert.equal(lines.at(-1), '[lasm] Linking — 59s elapsed');
  now = 65_000; tick();
  assert.equal(lines.at(-1), '[lasm] Linking — 1m 0s elapsed');
  progress.finish('Done');
  assert.equal(lines.at(-1), '[lasm] Done (1m 0s total).');
});

test('build progress: finish without text prints nothing; a timer without unref is fine', async () => {
  const lines = [];
  const { createBuildProgress } = await import('../src/build-progress.mjs');
  let cancelled = 0;
  const progress = createBuildProgress({ log: text => lines.push(text), schedule: () => undefined, cancel: () => cancelled++ });
  progress.finish();
  assert.deepEqual(lines, []);
  assert.equal(cancelled, 1);
  // The defaults: console.error and a real interval, cleared by finish.
  const error = console.error, printed = [];
  console.error = text => printed.push(text);
  try { const real = createBuildProgress(); real.message('hello'); real.finish(); } finally { console.error = error; }
  assert.deepEqual(printed, ['[lasm] hello']);
});

// Decodes the private launcher configuration (the native child's reader, src/native/process).
function decode(bytes) {
  let p = 8;
  const number = () => { const v = bytes.readUInt32LE(p); p += 4; return v; };
  const string = () => { const n = number(); if (n === 0xffffffff) return undefined; const s = bytes.subarray(p, p + n).toString(); p += n; return s; };
  assert.equal(bytes.subarray(0, 8).toString(), 'LASMEX01');
  const flags = number(), stdio = [number(), number(), number()], directory = string(), requestedCwd = string();
  const argc = number(), argv = Array.from({ length: argc }, string);
  const envc = number(), env = Array.from({ length: envc }, () => [string(), string()]);
  assert.equal(p, bytes.length, 'no trailing bytes');
  return { flags, stdio, directory, requestedCwd, argv, env };
}

test('the process launcher configuration: header, flags, strings and environment', async () => {
  const { encodeProcessConfiguration } = await import('../src/process-launcher.mjs');
  const bytes = encodeProcessConfiguration({ command: '/bin/echo', args: ['a b', 'λ', ''], env: { A: '1', EMPTY: '' }, directory: '/work',
    requestedCwd: undefined, directoryFd: 3, inheritProcessCwd: true, setsid: true, stdioFlags: [1, -1, 2] });
  assert.deepEqual(decode(bytes), { flags: 7, stdio: [1, 0xffffffff, 2], directory: '/work', requestedCwd: undefined,
    argv: ['/bin/echo', 'a b', 'λ', ''], env: [['A', '1'], ['EMPTY', '']] });
  for (const [options, flags] of [[{}, 0], [{ directoryFd: 0 }, 1], [{ inheritProcessCwd: true }, 2], [{ setsid: true }, 4]])
    assert.equal(decode(encodeProcessConfiguration({ command: 'c', args: [], env: {}, stdioFlags: [0, 0, 0], ...options })).flags, flags);
  // Literal environment bytes (base64 pairs) win over env.
  const raw = encodeProcessConfiguration({ command: 'c', args: [], env: { IGNORED: 'x' }, stdioFlags: [0, 0, 0],
    envBytes: [[Buffer.from('K').toString('base64'), Buffer.from([0xff, 0x41]).toString('base64')]] });
  const tail = raw.subarray(raw.length - (4 + 4 + 1 + 4 + 2));
  assert.deepEqual([...tail], [1, 0, 0, 0, 1, 0, 0, 0, 0x4b, 2, 0, 0, 0, 0xff, 0x41]);
  for (const options of [{ command: 'a\0b', args: [] }, { command: 'c', args: ['\0'] }, { command: 'c', args: [], env: { K: 'v\0' } }, { command: 'c', args: [], directory: '\0' }])
    assert.throws(() => encodeProcessConfiguration({ env: {}, stdioFlags: [0, 0, 0], ...options }), { message: 'NUL in private process configuration' });
});

// Proposition: Lasm.Cli.Spec.launcher_config_round_trip
//   ∀ o : LaunchOptions, o.envBytes = none → o.stdioFlags.length = 3 →
//     (∀ s ∈ o.command :: o.args ++ o.env.flatMap (fun (k, v) => [k, v]) ++ o.directory.toList ++ o.requestedCwd.toList,
//       0 ∉ utf8Bytes s ∧ (utf8Bytes s).length < 0xffffffff) →
//     o.args.length + 1 < 4294967296 → o.env.length < 4294967296 →
//     ∃ b, encodeProcessConfiguration o = .ok b ∧ launcherRead b.data.toList = some
//       { flags := (if o.directoryFd.isNone then 0 else 1) + (if o.inheritProcessCwd then 2 else 0) + (if o.setsid then 4 else 0),
//         stdio := o.stdioFlags.map uint32Of, directory := o.directory.map utf8Bytes, requestedCwd := o.requestedCwd.map utf8Bytes,
//         argv := (o.command :: o.args).map utf8Bytes, env := o.env.map fun (k, v) => (utf8Bytes k, utf8Bytes v) }
test('the process launcher configuration round-trips any command, arguments and environment', async () => {
  const { encodeProcessConfiguration } = await import('../src/process-launcher.mjs');
  const alphabet = ['a', 'Z', ' ', '=', 'λ', '/', '\n', '日'];
  forAll(r => ({
    command: r.string(alphabet, 1, 8), args: r.array(r.int(0, 5), () => r.string(alphabet, 0, 8)),
    env: Object.fromEntries(r.array(r.int(0, 4), () => [r.string(['A', 'B', '_'], 1, 4), r.string(alphabet, 0, 6)])),
    directory: r.int(0, 1) ? r.string(alphabet, 1, 6) : undefined, requestedCwd: r.int(0, 1) ? r.string(alphabet, 0, 6) : undefined,
    stdioFlags: [r.int(0, 9), r.int(0, 9), r.int(-2, 9)],
    ...(r.int(0, 1) ? { directoryFd: r.int(0, 5) } : {}), inheritProcessCwd: r.int(0, 1) === 1, setsid: r.int(0, 1) === 1,
  }), options => {
    const decoded = decode(encodeProcessConfiguration(options));
    assert.equal(decoded.flags, (options.directoryFd === undefined ? 0 : 1) + (options.inheritProcessCwd ? 2 : 0) + (options.setsid ? 4 : 0));
    assert.deepEqual(decoded.argv, [options.command, ...options.args]);
    assert.deepEqual(decoded.env, Object.entries(options.env));
    assert.equal(decoded.directory, options.directory);
    assert.equal(decoded.requestedCwd, options.requestedCwd);
    assert.deepEqual(decoded.stdio, options.stdioFlags.map(f => f >>> 0));
  });
});

test('the native process launcher: chosen by libc, verified by its manifest, and cached', t => {
  // A copy of the module beside a stand-in native directory.
  const root = mkdtempSync(join(tmpdir(), 'lasm-process-launcher-'));
  t.after(() => rmSync(root, { recursive: true, force: true }));
  const setup = (name, files) => {
    const directory = join(root, name);
    mkdirSync(join(directory, 'src'), { recursive: true });
    copyFileSync(fileURLToPath(source('process-launcher.mjs')), join(directory, 'src', 'process-launcher.mjs'));
    for (const [file, text] of Object.entries(files)) { mkdirSync(join(directory, file, '..'), { recursive: true }); writeFileSync(join(directory, file), text); }
    return pathToFileURL(join(directory, 'src', 'process-launcher.mjs')).href;
  };
  const sha = text => createHash('sha256').update(text).digest('hex');
  const gnu = { func: signature => { assert.equal(signature, 'str gnu_get_libc_version()'); return () => '2.39'; } };
  const musl = { func: () => { throw new Error('no such symbol'); } };
  const binary = 'launcher bytes';
  return (async () => {
    const shipped = setup('shipped', { 'src/native/process/manifest.json': JSON.stringify({ files: { [`linux-${process.arch}-gnu`]: { sha256: sha(binary) } } }),
      [`src/native/process/linux-${process.arch}-gnu`]: binary });
    const module = await import(shipped);
    const path = module.nativeProcessLauncher(gnu);
    assert.equal(path, join(root, 'shipped', 'src', 'native', 'process', `linux-${process.arch}-gnu`));
    assert.equal(module.nativeProcessLauncher(musl), path, 'the first answer is cached');
    // A source checkout: .cache/native-host/process; musl when glibc is absent.
    const checkout = await import(setup('checkout', { '.cache/native-host/process/manifest.json': JSON.stringify({ files: { [`linux-${process.arch}-musl`]: { sha256: sha(binary) } } }),
      [`.cache/native-host/process/linux-${process.arch}-musl`]: binary }));
    assert.equal(checkout.nativeProcessLauncher(musl), join(root, 'checkout', '.cache', 'native-host', 'process', `linux-${process.arch}-musl`));
    const missing = await import(setup('missing', {}));
    assert.throws(() => missing.nativeProcessLauncher(gnu), { message: 'Native process launcher is missing; maintainers must run scripts/build-process-launcher.mjs, and installed users must reinstall the complete Lasm package' });
    const changed = await import(setup('changed', { 'src/native/process/manifest.json': JSON.stringify({ files: { [`linux-${process.arch}-gnu`]: { sha256: sha('other') } } }),
      [`src/native/process/linux-${process.arch}-gnu`]: binary }));
    assert.throws(() => changed.nativeProcessLauncher(gnu), { message: `Native process launcher is missing or changed: linux-${process.arch}-gnu` });
    const unlisted = await import(setup('unlisted', { 'src/native/process/manifest.json': JSON.stringify({ files: {} }) }));
    assert.throws(() => unlisted.nativeProcessLauncher(musl), { message: `Native process launcher is missing or changed: linux-${process.arch}-musl` });
  })();
});

test('application signals: SIGUSR1 keeps an observed default, resets an engine hook, and leaves other owners alone', { skip: process.platform === 'win32' }, async t => {
  const calls = [];
  let disposition;
  globalThis.helperStandIns.nativeSignals = () => ({
    action: number => { calls.push(['action', number]); return 'action-' + number; },
    disposition: action => { calls.push(['disposition', action]); return disposition; },
    reset: number => calls.push(['reset', number]),
    restore: (number, action) => calls.push(['restore', number, action]),
  });
  const { constants } = await import('node:os');
  const number = constants.signals.SIGUSR1;
  const { prepareApplicationSignals } = await fresh('application-signals.mjs');
  for (const [state, expected] of [['external', []], ['engine', [['reset', number]]], ['default', [['restore', number, 'action-' + number]]],
    ['ignored', [['restore', number, 'action-' + number]]]]) {
    calls.length = 0; disposition = state;
    assert.equal(prepareApplicationSignals(), undefined);
    assert.deepEqual(calls, [['action', number], ['disposition', 'action-' + number], ...expected], state);
  }
  // A JavaScript listener for SIGUSR1: the application's own policy, untouched.
  const listener = () => {};
  process.on('SIGUSR1', listener);
  t.after(() => process.off('SIGUSR1', listener));
  calls.length = 0;
  prepareApplicationSignals();
  assert.deepEqual(calls, []);
  process.off('SIGUSR1', listener);
  // Windows has no POSIX signal dispositions.
  const platform = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...platform, value: 'win32' });
  try { prepareApplicationSignals(); } finally { Object.defineProperty(process, 'platform', platform); }
  assert.deepEqual(calls, []);
});
