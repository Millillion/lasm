// lasm dev end to end with a stand-in build service (test/fixtures/dev-stand-ins/):
// the watch loop of src/dev.mjs (first build, rebuild on a content change only,
// queued changes, errors, the program it runs and restarts, the one-URL proxy
// of a server and its browser app) and the browser dev server of
// src/browser/browser-dev.mjs. No Lean, no real builds, no browser.
import assert from 'node:assert/strict';
import { after, before, test } from 'node:test';
import { chmodSync, existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { registerHooks } from 'node:module';
import { tmpdir, totalmem } from 'node:os';
import { basename, join, relative } from 'node:path';

const standIns = new URL('./fixtures/dev-stand-ins/', import.meta.url);
const state = globalThis.__lasmDevStandIn ??= { calls: [], services: [], servers: [], watchers: [] };
registerHooks({
  resolve(specifier, context, next) {
    const parent = context.parentURL ?? '';
    const fromDev = parent.endsWith('/src/dev.mjs'), fromBrowserDev = parent.endsWith('/src/browser/browser-dev.mjs');
    if ((fromDev || fromBrowserDev) && specifier.endsWith('/dev-build-service.mjs')) return { url: new URL('build-service.mjs', standIns).href, shortCircuit: true };
    if (fromBrowserDev && specifier === './static-server.mjs') return { url: new URL('static-server.mjs', standIns).href, shortCircuit: true };
    if (fromBrowserDev && specifier === '../dev.mjs') return { url: new URL('dev.mjs', standIns).href, shortCircuit: true };
    return next(specifier, context);
  },
});
const { runDev, parseDevArguments } = await import('../src/dev.mjs');
const { runBrowserDev } = await import('../src/browser/browser-dev.mjs');
const { bugReportLine } = await import('../src/application-cli.mjs');

const pause = ms => new Promise(done => setTimeout(done, ms));
// Once a test fails the rest are skipped (they would only wait for their own
// timeouts): a mutant is killed by the first failure (scripts/mutation).
let failedBefore = false;
const dtest = (name, fn) => test(name, async t => {
  if (failedBefore) { t.skip('an earlier test failed'); return; }
  try { await fn(t); } catch (error) { failedBefore = true; throw error; }
});
async function until(condition, what, ms = 4000) {
  const deadline = Date.now() + ms;
  while (!condition()) {
    if (Date.now() > deadline) assert.fail(`timed out waiting for ${what}\n--- stderr ---\n${stderr.text()}`);
    await pause(15);
  }
}

// lasm dev's terminal output: stderr is captured; the program's rewritten stdout
// lines (marked lasm-test-program) are captured, everything else passes through.
const stderr = { chunks: [], text() { return this.chunks.join(''); }, reset() { this.chunks = []; } };
const programLines = [];
let realStderr, realStdout;
const savedEnv = { ...process.env };
before(() => {
  realStderr = process.stderr.write; realStdout = process.stdout.write;
  process.stderr.write = chunk => { stderr.chunks.push(String(chunk)); return true; };
  process.stdout.write = function (chunk, ...rest) {
    if (String(chunk).includes('lasm-test-program')) { programLines.push(...String(chunk).split('\n').filter(Boolean)); return true; }
    return realStdout.call(this, chunk, ...rest);
  };
  process.env.LASM_EDITOR = '0';
  delete process.env.LASM_DEV_TRACE;
  delete process.env.LASM_DEV_STDIN;
});
after(() => {
  process.stderr.write = realStderr; process.stdout.write = realStdout;
  for (const key of Object.keys(process.env)) if (!(key in savedEnv)) delete process.env[key];
  Object.assign(process.env, savedEnv);
});

function project(files = {}) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-dev-run-'));
  writeFileSync(join(directory, 'lakefile.toml'), 'name = "app"\n');
  writeFileSync(join(directory, 'Main.lean'), 'def main : IO Unit := pure ()\n');
  for (const [file, text] of Object.entries(files)) writeFileSync(join(directory, file), text);
  return directory;
}
// Every runDev a test starts; the next test (and the end) stops any still running.
const active = new Set();
function startDev(options, hooks) {
  const running = runDev(options, hooks);
  active.add(running);
  running.then(() => active.delete(running), () => active.delete(running));
  return running;
}
// Ctrl+C as lasm dev sees it: its own SIGINT/SIGTERM listeners are called. The
// signal is not emitted: other listeners (the mutation test runner's) would exit.
const foreignListeners = new Set([...process.listeners('SIGINT'), ...process.listeners('SIGTERM')]);
async function signalDev() {
  const deadline = Date.now() + 5000;
  let own;
  while (!(own = [...new Set([...process.listeners('SIGINT'), ...process.listeners('SIGTERM')])].filter(fn => !foreignListeners.has(fn))).length && Date.now() < deadline)
    await pause(10);
  for (const fn of own) { process.removeListener('SIGINT', fn); process.removeListener('SIGTERM', fn); }
  for (const fn of own) fn();
}
async function stopAll() {
  if (!active.size) return;
  await signalDev();
  // A lasm dev stuck in its first build (a failed test) is left behind, not waited for.
  await Promise.race([Promise.allSettled([...active]), pause(3000)]);
  active.clear();
}
after(async () => {
  await stopAll();
  for (const server of state.servers) await server.close();
  // Whatever a failed test left running (a watcher, a server, a program) does not keep this file alive.
  setTimeout(() => process.exit(), 1500).unref();
});
const reset = async () => { await stopAll(); for (const server of state.servers) await server.close(); state.calls = []; state.services = []; state.servers = []; state.watchers = []; state.port = undefined; state.serverOptions = undefined; stderr.reset(); programLines.length = 0; };
/** Stops a runDev: as Ctrl+C does. */
async function stop(running) {
  await signalDev();
  assert.equal(await running, 0);
}
const rel = file => relative(process.cwd(), file);
/** The next server-sent event chunk, or a failure that shows lasm dev's output. */
// Events are read one by one (several may arrive in one chunk): each with its trailing blank line.
const buffers = new WeakMap();
async function nextEvent(reader, what = 'an event') {
  const decoder = new TextDecoder();
  let buffer = buffers.get(reader) ?? '';
  while (!buffer.includes('\n\n')) {
    let timer;
    const timeout = new Promise((_, fail) => { timer = setTimeout(() => fail(new Error(`timed out waiting for ${what}\n--- stderr ---\n${stderr.text()}`)), 4000); });
    try {
      const { value, done } = await Promise.race([reader.read(), timeout]);
      if (done) return null;
      buffer += decoder.decode(value);
    } finally { clearTimeout(timer); }
  }
  const at = buffer.indexOf('\n\n') + 2;
  buffers.set(reader, buffer.slice(at));
  return buffer.slice(0, at);
}

dtest('lasm dev (edge target): first build, rebuilds on content changes only, queued changes, build errors, stop', async () => {
  await reset();
  const dir = project();
  const main = join(dir, 'Main.lean');
  const edgeOutput = join(dir, '.lake', 'out', 'workers');
  let gate = null, failure = null;
  state.build = async call => {
    call.onProgress({ stage: 'Checking Lean sources' });
    await pause(60);
    call.onProgress({ stage: 'Checking Lean sources' });
    call.onProgress({ stage: 'Compiling application module 1 of 1' });
    await pause(60);
    call.onLog('lake: a note');
    // Lake writes its manifest during a build: not a change.
    writeFileSync(join(dir, 'lake-manifest.json'), String(state.calls.length));
    if (gate) await gate;
    if (failure) throw failure;
    return { edgeOutput, cacheHit: state.calls.length === 2 };
  };
  try {
    const options = parseDevArguments([main, '--target', 'workers']);
    const running = startDev(options);
    await until(() => /is up to date/.test(stderr.text()), 'the first build');
    const out = stderr.text();
    assert.match(out, new RegExp(`(?:^|\\n)\\[lasm dev\\] Watching 2 files in ${rel(dir).replace(/[.]/g, '\\.')} \\(events\\); target workers, dev profile\\. Ctrl\\+C stops\\.\\n`));
    assert.ok(out.includes(`[lasm dev] Building ${rel(main)}\n`), out);
    assert.ok(out.includes('lake: a note\n'));
    assert.match(out, /\[lasm dev\] Built in \d+\.\d s \(Lean 0\.\ds · C 0\.\ds\)\n/);
    assert.doesNotMatch(out, /release profile/);
    assert.ok(out.includes(`[lasm dev] ${rel(edgeOutput)} is up to date; your platform's local server (for example npx wrangler dev) serves it.\n`));
    assert.equal(state.calls.length, 1);
    assert.equal(state.calls[0].file, main);
    assert.deepEqual(state.calls[0].options, { profile: 'dev', verbose: false });
    assert.equal(state.calls[0].target, 'workers');
    assert.equal(state.calls[0].slot, 0);
    assert.equal(state.services[0].workers, 1);
    assert.equal(process.env.LASM_DEV_SERVER, '1');
    assert.doesNotMatch(out, /\x1b\[|\r/, 'no terminal control codes without a terminal');
    assert.doesNotMatch(out, /trace/, 'no stage trace unless LASM_DEV_TRACE is set');
    assert.ok(Number(/Built in (\d+\.\d) s/.exec(out)[1]) < 30);
    // Ctrl+C and SIGTERM both stop it.
    const own = signal => process.listeners(signal).filter(fn => !foreignListeners.has(fn));
    await until(() => own('SIGINT').length && own('SIGTERM').length, 'the signal listeners');
    assert.equal(own('SIGINT')[0], own('SIGTERM')[0]);

    // A save with new content rebuilds (here: a cache hit, "Up to date" without stages).
    stderr.reset();
    writeFileSync(main, 'def main : IO Unit := pure () -- 2\n');
    await until(() => state.calls.length === 2 && /Up to date/.test(stderr.text()), 'the rebuild');
    assert.ok(stderr.text().startsWith('[lasm dev] Main.lean changed; rebuilding\n'), stderr.text());
    assert.match(stderr.text(), /\[lasm dev\] Up to date in \d+\.\d s\n/);
    // The same content again, and the manifest the build wrote: nothing to do.
    await pause(150);
    writeFileSync(main, 'def main : IO Unit := pure () -- 2\n');
    await pause(300);
    assert.equal(state.calls.length, 2);

    // Several files: the first three are named.
    stderr.reset();
    for (const name of ['A.lean', 'B.lean', 'C.lean']) writeFileSync(join(dir, name), name);
    writeFileSync(main, 'def main : IO Unit := pure () -- 3\n');
    await until(() => state.calls.length === 3 && /is up to date/.test(stderr.text()), 'the third build');
    assert.ok(stderr.text().includes('[lasm dev] A.lean, B.lean, C.lean and 1 more changed; rebuilding\n'), stderr.text());
    // Three files: all named.
    stderr.reset();
    for (const name of ['A.lean', 'B.lean', 'C.lean']) writeFileSync(join(dir, name), name + '!');
    await until(() => state.calls.length === 4 && /is up to date/.test(stderr.text()), 'the build of three files');
    assert.ok(stderr.text().includes('[lasm dev] A.lean, B.lean, C.lean changed; rebuilding\n'), stderr.text());

    // A change during a build is built after it.
    let open;
    gate = new Promise(done => { open = done; });
    stderr.reset();
    writeFileSync(join(dir, 'A.lean'), 'A2');
    await until(() => state.calls.length === 5, 'the fifth build to start');
    writeFileSync(join(dir, 'B.lean'), 'B2');
    await pause(500);
    assert.equal(state.calls.length, 5, 'one build at a time');
    gate = null; open();
    await until(() => state.calls.length === 6 && (stderr.text().match(/is up to date/g) ?? []).length === 2, 'the queued build');
    assert.ok(stderr.text().includes('[lasm dev] B.lean changed; rebuilding\n'), stderr.text());

    // A Lean error: shown with its source line; the last good build keeps running.
    stderr.reset();
    failure = Object.assign(new Error('Command failed: lake build\nmore'), { stdout: 'Main.lean:1:4: error: unknown identifier', stderr: 'error: build failed' });
    writeFileSync(main, 'def main : IO Unit := oops\n');
    await until(() => /Build failed/.test(stderr.text()), 'the failed build');
    let text = stderr.text();
    assert.ok(text.includes(`${rel(main)}:1:4: error: unknown identifier\n    1 | def main : IO Unit := oops\n      |     ^\n`), text);
    assert.doesNotMatch(text, /Command failed/);
    assert.doesNotMatch(text, /report it/);
    assert.match(text, /\[lasm dev\] Build failed after \d+\.\d s; the last good build keeps running\. Fix the error and save\.\n$/);
    assert.ok(Number(/Build failed after (\d+\.\d) s/.exec(text)[1]) < 30);

    // A very long log: its last 12000 characters.
    stderr.reset();
    failure = Object.assign(new Error('Command failed'), { stdout: 'y'.repeat(13000) + 'END' });
    writeFileSync(main, 'def main : IO Unit := long\n');
    await until(() => /Build failed/.test(stderr.text()), 'the long failure');
    assert.equal((stderr.text().match(/y/g) ?? []).length, 12000 - 3);

    // A failure whose message the diagnostics do not contain: the message's first line too.
    stderr.reset();
    failure = Object.assign(new Error('The linker stopped\nsecond line'), { stderr: 'wasm-ld: out of memory' });
    writeFileSync(main, 'def main : IO Unit := oops2\n');
    await until(() => /Build failed/.test(stderr.text()), 'the second failed build');
    text = stderr.text();
    assert.ok(text.startsWith('[lasm dev] Main.lean changed; rebuilding\n'), text);
    assert.ok(text.includes('\nwasm-ld: out of memory\nThe linker stopped\n[lasm dev] Build failed'), text);
    assert.doesNotMatch(text, /second line/);

    // An internal error: its stack and where to report it.
    stderr.reset();
    failure = new TypeError('x.map is not a function');
    writeFileSync(main, 'def main : IO Unit := oops3\n');
    await until(() => /Build failed/.test(stderr.text()), 'the third failed build');
    text = stderr.text();
    assert.equal(text.split('\n').filter(line => line === 'x.map is not a function').length, 1, 'the message once');
    assert.ok(text.includes(`TypeError: x.map is not a function\n    at `), text);
    assert.ok(text.includes(bugReportLine + '\n'));

    failure = null;
    await stop(running);
    assert.equal(state.services[0].closed, true);
    const built = state.calls.length;
    writeFileSync(main, 'def main : IO Unit := pure () -- after\n');
    await pause(200);
    assert.equal(state.calls.length, built, 'nothing is built after lasm dev stops');
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

dtest('lasm dev: a first build that fails says so; release profile; a terminal gets status lines and colors', async () => {
  await reset();
  const dir = project();
  const main = join(dir, 'Main.lean');
  const tty = Object.getOwnPropertyDescriptor(process.stderr, 'isTTY');
  process.stderr.isTTY = true;
  delete process.env.NO_COLOR;
  let fail = true;
  state.build = async call => {
    call.onProgress({ stage: 'Compiling application module 1 of 2' });
    await pause(80);
    call.onLog('a log line');
    if (fail) throw Object.assign(new Error('Lean failed'), { stdout: 'Main.lean:1:0: error: bad', lasmInternal: false });
    return { edgeOutput: join(dir, 'out') };
  };
  try {
    const running = startDev(parseDevArguments([main, '--target', 'netlify-edge', '--release']));
    await until(() => /Build failed/.test(stderr.text()), 'the failed first build');
    let text = stderr.text();
    assert.ok(text.includes('\r\x1b[K\x1b[2m[lasm dev] Compiling application module 1 of 2…\x1b[0m'), JSON.stringify(text));
    assert.ok(text.includes('\r\x1b[Ka log line\n'), JSON.stringify(text));
    assert.ok(text.includes('\x1b[36m[lasm dev]\x1b[0m Watching'), JSON.stringify(text));
    assert.ok(text.includes(`\r\x1b[K\x1b[1m${rel(main)}:1:0\x1b[0m: \x1b[31;1merror\x1b[0m: bad`), JSON.stringify(text));
    assert.match(text, /\x1b\[31mBuild failed after \d+\.\d s\x1b\[0m\. Fix the error and save\.\n$/);
    assert.ok(text.includes('target netlify-edge, release profile.'));
    stderr.reset();
    fail = false;
    writeFileSync(main, 'def main : IO Unit := pure () -- fixed\n');
    await until(() => /is up to date/.test(stderr.text()), 'the good build');
    text = stderr.text();
    assert.match(text, /\r\x1b\[K\x1b\[36m\[lasm dev\]\x1b\[0m \x1b\[32mBuilt\x1b\[0m in \d+\.\d s \(C \d+\.\ds\) — release profile\n/);
    assert.deepEqual(state.calls.at(-1).options, { profile: 'release', verbose: false });
    await stop(running);
  } finally {
    if (tty) Object.defineProperty(process.stderr, 'isTTY', tty); else delete process.stderr.isTTY;
    rmSync(dir, { recursive: true, force: true });
  }
});

/** A program lasm dev runs: records its arguments, environment and pid, then exits or stays. */
function programOutput(dir, name, { stay = false, code = 3 } = {}) {
  const output = join(dir, '.lake', name);
  mkdirSync(output, { recursive: true });
  writeFileSync(join(output, 'main.mjs'), `import { writeFileSync } from 'node:fs';
writeFileSync(${JSON.stringify(join(output, 'ran.json'))}, JSON.stringify({ args: process.argv.slice(2), cwd: process.cwd(), pid: process.pid }));
${stay ? 'setInterval(() => {}, 1000);' : `process.exitCode = ${code};`}
`);
  return output;
}
const ran = output => JSON.parse(readFileSync(join(output, 'ran.json'), 'utf8'));

dtest('lasm dev (node target): runs the program with its arguments, restarts it after each build, reports its exit', async () => {
  await reset();
  const dir = project();
  const main = join(dir, 'Main.lean');
  const outputs = [programOutput(dir, 'one'), programOutput(dir, 'two', { stay: true }), programOutput(dir, 'three', { stay: true })];
  state.build = async () => ({ output: outputs[Math.min(state.calls.length, 3) - 1] });
  try {
    const running = startDev(parseDevArguments([main, '--target', 'node', '--', 'first', '--second']));
    await until(() => /Main\.lean exited with code 3; waiting for changes/.test(stderr.text()), 'the program to exit');
    assert.deepEqual(ran(outputs[0]).args, ['first', '--second']);
    assert.equal(ran(outputs[0]).cwd, process.cwd());
    assert.equal(state.calls[0].target, undefined, 'node is the build service\'s default target');
    writeFileSync(main, 'def main : IO Unit := pure () -- 2\n');
    await until(() => existsSync(join(outputs[1], 'ran.json')), 'the second program');
    const { pid } = ran(outputs[1]);
    // A rebuild stops the running program first (no exit message: lasm dev stopped it).
    stderr.reset();
    writeFileSync(main, 'def main : IO Unit := pure () -- 3\n');
    await until(() => existsSync(join(outputs[2], 'ran.json')), 'the third program');
    assert.throws(() => process.kill(pid, 0), /ESRCH/, 'the previous program was stopped');
    assert.doesNotMatch(stderr.text(), /exited with code|stopped \(/);
    // Stopped from outside: reported with its signal.
    process.kill(ran(outputs[2]).pid, 'SIGKILL');
    await until(() => /Main\.lean stopped \(SIGKILL\); waiting for changes/.test(stderr.text()), 'the kill report');
    await stop(running);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

dtest('lasm dev runs bun and deno programs with their own commands; a missing runtime is named', async () => {
  const bin = mkdtempSync(join(tmpdir(), 'lasm-dev-bin-'));
  const savedPath = process.env.PATH;
  for (const runtime of ['bun', 'deno']) {
    writeFileSync(join(bin, runtime), `#!/bin/sh\nprintf '%s\\n' "$@" > "${join(bin, runtime + '.args')}"\n`);
    chmodSync(join(bin, runtime), 0o755);
  }
  try {
    for (const runtime of ['bun', 'deno']) {
      await reset();
      const dir = project();
      const output = programOutput(dir, runtime);
      state.build = async () => ({ output });
      process.env.PATH = `${bin}:${savedPath}`;
      try {
        const running = startDev(parseDevArguments([join(dir, 'Main.lean'), '--target', runtime, '--', 'x']));
        await until(() => /exited with code 0/.test(stderr.text()), `the ${runtime} program`);
        const args = readFileSync(join(bin, runtime + '.args'), 'utf8').trim().split('\n');
        assert.deepEqual(args, runtime === 'deno' ? ['run', '-A', join(output, 'main.mjs'), 'x'] : [join(output, 'main.mjs'), 'x']);
        assert.equal(state.calls[0].target, runtime);
        await stop(running);
      } finally { process.env.PATH = savedPath; rmSync(dir, { recursive: true, force: true }); }
    }
    await reset();
    const dir = project();
    const output = programOutput(dir, 'none');
    state.build = async () => ({ output });
    process.env.PATH = bin + '-empty';
    try {
      const running = startDev(parseDevArguments([join(dir, 'Main.lean'), '--target', 'bun']));
      await until(() => /Could not start/.test(stderr.text()), 'the start failure');
      assert.ok(stderr.text().includes('[lasm dev] Could not start Main.lean: bun is not installed\n'), stderr.text());
      process.env.PATH = savedPath;
      await stop(running);
    } finally { process.env.PATH = savedPath; rmSync(dir, { recursive: true, force: true }); }
    // A runtime that cannot be run is named with its error.
    await reset();
    const blocked = mkdtempSync(join(tmpdir(), 'lasm-dev-bin-blocked-'));
    writeFileSync(join(blocked, 'bun'), '#!/bin/sh\n');
    chmodSync(join(blocked, 'bun'), 0o644);
    const other = project();
    state.build = async () => ({ output: programOutput(other, 'blocked') });
    process.env.PATH = blocked;
    try {
      const running = startDev(parseDevArguments([join(other, 'Main.lean'), '--target', 'bun']));
      await until(() => /Could not start/.test(stderr.text()), 'the start failure');
      assert.ok(stderr.text().includes('[lasm dev] Could not start Main.lean: spawn bun EACCES\n'), stderr.text());
      process.env.PATH = savedPath;
      await stop(running);
    } finally { process.env.PATH = savedPath; rmSync(other, { recursive: true, force: true }); rmSync(blocked, { recursive: true, force: true }); }
  } finally { rmSync(bin, { recursive: true, force: true }); }
});

dtest('lasm dev --no-run only rebuilds; rs rebuilds and restarts on request; a missing source is named', async () => {
  await reset();
  const dir = project({ 'Other.lean': '' });
  const main = join(dir, 'Main.lean');
  const output = programOutput(dir, 'p');
  state.build = async () => ({ output, cacheHit: true });
  process.env.LASM_DEV_STDIN = '1';
  try {
    const running = startDev(parseDevArguments([main, '--no-run']));
    await until(() => /Up to date/.test(stderr.text()), 'the first build');
    await pause(100);
    assert.equal(existsSync(join(output, 'ran.json')), false, '--no-run starts nothing');
    process.stdin.emit('data', 'not rs\n');
    await pause(150);
    assert.equal(state.calls.length, 1);
    process.stdin.emit('data', ' rs \n');
    await until(() => state.calls.length === 2, 'the rs rebuild');
    assert.ok(stderr.text().includes('[lasm dev] Rebuilding (rs)\n'));
    await stop(running);
  } finally { delete process.env.LASM_DEV_STDIN; rmSync(dir, { recursive: true, force: true }); }
  // A source in a subdirectory of the Lake project: the project is watched. A lone source in
  // the current directory: "1 file in .".
  await reset();
  const lake = project();
  mkdirSync(join(lake, 'src'));
  writeFileSync(join(lake, 'src', 'App.lean'), '');
  state.build = async () => ({ edgeOutput: join(lake, 'out') });
  try {
    const running = startDev(parseDevArguments([join(lake, 'src', 'App.lean'), '--target', 'workers', '--no-run']));
    await until(() => /Built in/.test(stderr.text()), 'the subdirectory build');
    assert.ok(stderr.text().includes(`Watching 3 files in ${rel(lake)} (events)`), stderr.text());
    await stop(running);
  } finally { rmSync(lake, { recursive: true, force: true }); }
  await reset();
  const lone = mkdtempSync(join(tmpdir(), 'lasm-dev-lone-'));
  writeFileSync(join(lone, 'Main.lean'), '');
  const cwd = process.cwd();
  try {
    process.chdir(lone);
    const running = startDev(parseDevArguments(['Main.lean', '--target', 'workers', '--no-run']));
    await until(() => /Built in/.test(stderr.text()), 'the lone build');
    assert.ok(stderr.text().includes('Watching 1 file in . (events); target workers'), stderr.text());
    await stop(running);
  } finally { process.chdir(cwd); rmSync(lone, { recursive: true, force: true }); }
  const missing = mkdtempSync(join(tmpdir(), 'lasm-dev-missing-'));
  try {
    writeFileSync(join(missing, 'App.lean'), '');
    await assert.rejects(runDev(parseDevArguments([join(missing, 'Main.lean')])), /Main\.lean not found in .*\. Lean files there: App\.lean\./);
    await assert.rejects(runDev(parseDevArguments([join(missing, 'App.lean'), '--target', `node=${join(missing, 'Server.lean')}`])), /Server\.lean not found/);
  } finally { rmSync(missing, { recursive: true, force: true }); }
});

dtest('lasm dev with a server and its browser app: one URL, the program behind a proxy, only affected outputs rebuilt', async () => {
  await reset();
  const dir = project({
    'Shared.lean': 'def s := 1\n',
    'Server.lean': 'import Shared\n',
    'Client.lean': 'import Shared\n',
  });
  const server = join(dir, '.lake', 'server');
  mkdirSync(server, { recursive: true });
  // The program serves the browser output and says where it listens (on its private port).
  writeFileSync(join(server, 'main.mjs'), `import { createServer } from 'node:http';
import { readFileSync, writeFileSync } from 'node:fs';
const port = Number(process.env.PORT);
createServer((request, response) => response.writeHead(200, { 'content-type': 'text/html' })
  .end(readFileSync(${JSON.stringify(join(dir, 'public-out', 'index.html'))}, 'utf8') + ' ' + process.argv.slice(2).join(',') + ' ' + process.env.HOST)).listen(port, process.env.HOST, () => {
  writeFileSync(${JSON.stringify(join(dir, 'server.pid'))}, String(process.pid));
  console.log('lasm-test-program Listening on http://127.0.0.1:' + port + '/ and http://localhost:' + port);
  console.log('lasm-test-program second line');
  process.stdout.write('lasm-test-program unterminated');
});
`);
  const browserOutput = join(dir, 'public-out');
  const built = [];
  state.build = async call => {
    if (call.target === 'browser') {
      mkdirSync(call.options.output, { recursive: true });
      writeFileSync(join(call.options.output, 'index.html'), `<body>client ${state.calls.length}</body>`);
      return { output: join(dir, 'ignored') };
    }
    return { output: server };
  };
  const proxyPort = await (await import('../src/dev-proxy.mjs')).freePort();
  process.env.LASM_DEV_WORKERS = '1';
  try {
    const options = parseDevArguments(['--target', `node=${join(dir, 'Server.lean')},browser=${join(dir, 'Client.lean')}`, '--port', String(proxyPort), '--output', browserOutput, '--', 'arg']);
    const running = startDev(options, { onBuilt: item => { built.push([item.target, basename(item.input), item.output]); } });
    await until(() => /Open /.test(stderr.text()), 'the proxy');
    const url = `http://127.0.0.1:${proxyPort}/`;
    assert.ok(stderr.text().includes(`[lasm dev] Open ${url}: Server.lean with Client.lean, live reload.\n`), stderr.text());
    assert.deepEqual(state.calls.map(c => [c.target, c.slot, c.options.output]), [[undefined, 0, undefined], ['browser', 1, browserOutput]]);
    assert.deepEqual(built, [['node', 'Server.lean', server], ['browser', 'Client.lean', browserOutput]]);
    const page = await (await fetch(url)).text();
    assert.match(page, /^<body>client 2<script type="module">[\s\S]*<\/script>\n<\/body> arg 127\.0\.0\.1$/);
    await until(() => programLines.length >= 2, 'the program\'s output');
    // Its private address is shown as the user's URL.
    assert.deepEqual(programLines.slice(0, 2), [`lasm-test-program Listening on ${url} and ${url}`, 'lasm-test-program second line']);
    assert.equal(process.env.LASM_DEV_SERVER, '1');

    // The client's own change rebuilds the client only; the page reloads, the server keeps running.
    const events = await fetch(new URL('/__lasm/events', url));
    const reader = events.body.getReader();
    await nextEvent(reader);
    stderr.reset();
    built.length = 0;
    writeFileSync(join(dir, 'Client.lean'), 'import Shared\n-- edit\n');
    await until(() => /Reloaded/.test(stderr.text()), 'the reload');
    assert.deepEqual(state.calls.slice(2).map(c => c.target), ['browser']);
    assert.deepEqual(built, [['browser', 'Client.lean', browserOutput]]);
    assert.match(stderr.text(), /\[lasm dev\] Reloaded \d+\.\d s after the change \(unchanged: Server\.lean\)\.\n/);
    assert.match((await nextEvent(reader)), /event: reload/);
    assert.match(await (await fetch(url)).text(), /client 3/);

    // A shared module rebuilds both.
    stderr.reset();
    writeFileSync(join(dir, 'Shared.lean'), 'def s := 2\n');
    await until(() => /Reloaded/.test(stderr.text()), 'the second reload');
    assert.deepEqual(state.calls.slice(3).map(c => c.target), [undefined, 'browser']);
    assert.match(stderr.text(), /Reloaded \d+\.\d s after the change\.\n/);
    assert.ok(Number(/Reloaded (\d+\.\d) s/.exec(stderr.text())[1]) < 30);
    assert.match((await nextEvent(reader)), /event: reload/);
    // With one worker the two builds run one after the other, not as concurrent builds.
    assert.deepEqual(state.calls.slice(3).map(c => c.options.releaseAfterImports), [undefined, undefined]);
    assert.ok(state.calls[3].finished <= state.calls[4].started);

    // A failed build is reported to the page.
    stderr.reset();
    const good = state.build;
    state.build = async () => { throw new Error('Client.lean:1:0: error: broken\nmore'); };
    writeFileSync(join(dir, 'Client.lean'), 'broken\n');
    assert.equal((await nextEvent(reader)), 'event: error-report\ndata: "Client.lean:1:0: error: broken"\n\n');
    state.build = good;
    // The server stopped (crashed): the next build starts it again, although it did not change.
    const pid = Number(readFileSync(join(dir, 'server.pid'), 'utf8'));
    process.kill(pid, 'SIGKILL');
    await until(() => /Server\.lean stopped \(SIGKILL\)/.test(stderr.text()), 'the crash report');
    writeFileSync(join(dir, 'Client.lean'), 'import Shared\n-- fixed\n');
    await until(() => Number(readFileSync(join(dir, 'server.pid'), 'utf8')) !== pid, 'the restarted server');
    assert.match(await (await fetch(url)).text(), /<\/body> arg 127\.0\.0\.1$/);
    await stop(running);
    await until(() => programLines.includes('lasm-test-program unterminated'), 'the last unterminated line');
    await assert.rejects(fetch(url), 'the proxy is closed');
  } finally { delete process.env.LASM_DEV_WORKERS; rmSync(dir, { recursive: true, force: true }); }
});

dtest('lasm dev with two workers builds a server and its browser app concurrently after the first build', async () => {
  await reset();
  const dir = project({ 'Server.lean': '', 'Client.lean': '' });
  const server = join(dir, '.lake', 'server');
  mkdirSync(server, { recursive: true });
  writeFileSync(join(server, 'main.mjs'), `import { createServer } from 'node:http';
createServer((q, s) => s.end('ok')).listen(Number(process.env.PORT), process.env.HOST);
`);
  const browserOutput = join(dir, 'public-out');
  let failBrowser = false;
  state.build = async call => {
    if (call.target === 'browser') call.onProgress({ stage: 'Compiling application module 1 of 3' });
    else { call.onProgress({ stage: 'Compiling application module 3 of 3' }); call.onProgress({ stage: 'Running Lake' }); call.onProgress({ stage: 'Running Lake' }); }
    call.onProgress({ stage: 'Compiling application module 2 of 3' });
    call.onProgress({ stage: 'Writing output' });
    await pause(60);
    if (failBrowser && call.target === 'browser') throw new Error('browser build failed');
    return { output: call.target === 'browser' ? join(dir, 'x') : server };
  };
  const proxyPort = await (await import('../src/dev-proxy.mjs')).freePort();
  process.env.LASM_DEV_WORKERS = '2';
  process.env.LASM_DEV_TRACE = '1';
  try {
    const running = startDev(parseDevArguments(['--target', `node=${join(dir, 'Server.lean')},browser=${join(dir, 'Client.lean')}`, '--port', String(proxyPort), '--output', browserOutput]));
    await until(() => /Open /.test(stderr.text()), 'the proxy');
    assert.equal(state.services[0].workers, 2);
    assert.equal(state.services[0].options.workers, 2);
    assert.equal(state.calls[0].options.releaseAfterImports, undefined, 'a first build is not concurrent');
    stderr.reset();
    writeFileSync(join(dir, 'lakefile.toml'), 'name = "app2"\n');
    await until(() => /Reloaded/.test(stderr.text()), 'the concurrent rebuild');
    assert.deepEqual(state.calls.slice(2).map(c => c.options.releaseAfterImports), [true, true]);
    assert.match(stderr.text(), /Built in \d+\.\d s \(node: [^;]*; browser: [^;]*; concurrently\)/);
    // The two builds overlap.
    const [a, b] = state.calls.slice(2);
    assert.ok(a.started < b.finished && b.started < a.finished, 'concurrent');
    // Each output's own stages, a repeated stage once; of the modules compiled, only the first one and a first stage are traced.
    assert.match(stderr.text(), /\[lasm dev\] trace node: 0\.\d\d Compiling application module 3 of 3 \| 0\.\d\d Running Lake \| 0\.\d\d Writing output \| 0\.\d\d done\n/);
    assert.match(stderr.text(), /\[lasm dev\] trace browser: 0\.\d\d Compiling application module 1 of 3 \| 0\.\d\d Writing output \| 0\.\d\d done\n/);
    // One changed output builds alone, not as a concurrent build.
    stderr.reset();
    writeFileSync(join(dir, 'Client.lean'), '-- edit\n');
    await until(() => /Reloaded/.test(stderr.text()), 'the client rebuild');
    assert.deepEqual(state.calls.slice(4).map(c => [c.target, c.options.releaseAfterImports]), [['browser', undefined]]);
    // A failure of one concurrent build fails the rebuild.
    stderr.reset();
    failBrowser = true;
    writeFileSync(join(dir, 'lakefile.toml'), 'name = "app3"\n');
    await until(() => /Build failed/.test(stderr.text()), 'the failed concurrent rebuild');
    assert.ok(stderr.text().includes('browser build failed'));
    await stop(running);
  } finally { delete process.env.LASM_DEV_WORKERS; delete process.env.LASM_DEV_TRACE; rmSync(dir, { recursive: true, force: true }); }
});

dtest('lasm dev with a browser output and hooks: the static server with the hooks\' routes, reloads', async () => {
  await reset();
  const dir = project();
  const browserOutput = join(dir, 'www');
  const edgeOutput = join(dir, 'edge-out');
  state.build = async call => {
    if (call.target === 'browser') {
      mkdirSync(call.options.output, { recursive: true });
      writeFileSync(join(call.options.output, 'index.html'), `<body>v${state.calls.length}</body>`);
      return {};
    }
    return { edgeOutput };
  };
  try {
    const options = parseDevArguments([join(dir, 'Main.lean'), '--target', 'browser,workers', '--port', '0', '--output', browserOutput]);
    const running = startDev(options, { routes: (request, response, url) => url.pathname === '/api' && (response.end('api'), true) });
    await until(() => /Serving/.test(stderr.text()), 'the static server');
    // Without LASM_DEV_WORKERS: two workers for two outputs when memory allows (6 GiB).
    assert.equal(state.services[0].workers, totalmem() >= 6 * 2 ** 30 ? 2 : 1);
    const url = /at (http:\/\/127\.0\.0\.1:\d+\/) with live reload \(open it in your browser\)\./.exec(stderr.text())?.[1];
    assert.ok(url, stderr.text());
    assert.ok(stderr.text().includes(`[lasm dev] Serving ${rel(browserOutput)} at ${url} with live reload (open it in your browser).\n`));
    assert.ok(stderr.text().includes(`${rel(edgeOutput)} is up to date`));
    assert.equal(await (await fetch(url + 'api')).text(), 'api');
    assert.match(await (await fetch(url)).text(), /^<body>v1<script/);
    const reader = (await fetch(url + '__lasm/events')).body.getReader();
    await nextEvent(reader);
    writeFileSync(join(dir, 'Main.lean'), '-- edit\n');
    assert.match((await nextEvent(reader)), /event: reload/);
    assert.match(await (await fetch(url)).text(), /^<body>v3<script/);
    await stop(running);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

dtest('lasm dev: $PORT names the one URL\'s port; a browser output among others is served by lasm dev itself, in .lake/lasm/browser-dev', async () => {
  await reset();
  const dir = project({ 'Server.lean': '', 'Client.lean': '' });
  const server = join(dir, '.lake', 'server');
  mkdirSync(server, { recursive: true });
  writeFileSync(join(server, 'main.mjs'), `import { createServer } from 'node:http';
createServer((q, s) => s.end('port ' + process.env.PORT)).listen(Number(process.env.PORT), process.env.HOST);
`);
  state.build = async call => {
    if (call.target === 'browser') { mkdirSync(call.options.output, { recursive: true }); writeFileSync(join(call.options.output, 'index.html'), '<p>b</p>'); return {}; }
    if (call.target === 'workers') return { edgeOutput: join(dir, 'edge') };
    return { output: server };
  };
  const savedPort = process.env.PORT;
  const port = await (await import('../src/dev-proxy.mjs')).freePort();
  process.env.PORT = String(port);
  process.env.LASM_DEV_WORKERS = '1';
  try {
    const running = startDev(parseDevArguments(['--target', `node=${join(dir, 'Server.lean')},browser=${join(dir, 'Client.lean')}`]));
    await until(() => /Open /.test(stderr.text()), 'the proxy');
    assert.ok(stderr.text().includes(`Open http://127.0.0.1:${port}/:`), stderr.text());
    assert.equal(state.calls[1].options.output, join(dir, '.lake/lasm/browser-dev'));
    assert.notEqual(await (await fetch(`http://127.0.0.1:${port}/`)).text(), `port ${port}`, 'the program runs on a private port behind the proxy');
    await stop(running);
  } finally {
    if (savedPort === undefined) delete process.env.PORT; else process.env.PORT = savedPort;
    delete process.env.LASM_DEV_WORKERS;
  }
  // A browser output first, with an edge output and no hooks: lasm dev's own static server.
  await reset();
  try {
    const running = startDev(parseDevArguments([join(dir, 'Client.lean'), '--target', 'browser,workers', '--port', '0']));
    await until(() => /Serving/.test(stderr.text()), 'the static server');
    assert.equal(state.watchers.length, 0, 'not the single-output browser dev server');
    assert.ok(stderr.text().includes(`Serving ${rel(join(dir, '.lake/lasm/browser-dev'))} at http://127.0.0.1:`), stderr.text());
    await stop(running);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

dtest('lasm dev --target browser hands over to the browser dev server with its defaults', async () => {
  await reset();
  const dir = project();
  state.port = 0;
  state.build = async call => { mkdirSync(call.options.output, { recursive: true }); writeFileSync(join(call.options.output, 'index.html'), '<p>x</p>'); return {}; };
  try {
    runDev(parseDevArguments([join(dir, 'Main.lean'), '--target', 'browser']));
    await until(() => state.servers.length === 1, 'the browser dev server');
    assert.deepEqual(state.serverOptions, { port: 5173, host: '127.0.0.1', liveReload: true });
    assert.equal(state.calls[0].options.output, join(dir, '.lake/lasm/browser-dev'));
    assert.equal(state.calls[0].options.profile, 'dev');
    await state.servers[0].close();
    await reset();
    state.port = 0;
    runDev(parseDevArguments([join(dir, 'Main.lean'), '--target', 'browser', '--release', '--no-watch', '--port', '8123', '--host', '0.0.0.0', '--output', join(dir, 'o')]));
    await until(() => state.servers.length === 1, 'the release server');
    assert.deepEqual(state.serverOptions, { port: 8123, host: '0.0.0.0', liveReload: false });
    assert.deepEqual(state.calls[0].options, { profile: 'release', output: join(dir, 'o') });
    await state.servers[0].close();
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

dtest('browser dev server: serves the build, rebuilds on content changes only, reports errors to the page', async () => {
  await reset();
  const dir = project();
  const main = join(dir, 'Main.lean');
  state.port = 0;
  let failure = null, gate = null;
  state.build = async call => {
    call.onLog('building for the browser');
    writeFileSync(join(dir, 'lake-manifest.json'), String(state.calls.length));
    if (gate) await gate;
    if (failure) throw failure;
    mkdirSync(call.options.output, { recursive: true });
    writeFileSync(join(call.options.output, 'index.html'), `<body>build ${state.calls.length}</body>`);
    return {};
  };
  try {
    runBrowserDev({ input: main, watch: true, port: 1234, host: '127.0.0.1' });
    await until(() => state.servers.length === 1 && state.watchers.length === 1, 'the server');
    const server = state.servers[0];
    const output = join(dir, '.lake/lasm/browser-dev');
    assert.deepEqual(state.calls[0].options, { profile: 'dev', output });
    assert.equal(state.calls[0].target, 'browser');
    assert.equal(state.calls[0].file, main);
    assert.equal(state.serverOptions.port, 1234);
    assert.equal(state.watchers[0].directory, dir);
    assert.ok(stderr.text().includes('building for the browser\n'));
    assert.ok(stderr.text().includes(`[lasm dev] Serving ${rel(output)} at ${server.url} (rebuilds on save; Ctrl+C stops)\n`), stderr.text());
    assert.match(await (await fetch(server.url)).text(), /^<body>build 1<script/);
    const reader = (await fetch(server.url + '__lasm/events')).body.getReader();
    await nextEvent(reader);
    const event = () => { state.watchers[0].onEvent(); };

    // No content change (the manifest the build wrote included): no build.
    event(); event();
    await pause(200);
    assert.equal(state.calls.length, 1);

    // Saves within the debounce are one build; the page reloads.
    stderr.reset();
    writeFileSync(main, '-- 2\n');
    event(); await pause(20); event();
    assert.match((await nextEvent(reader)), /^event: reload\n/);
    assert.equal(state.calls.length, 2);
    assert.match(stderr.text(), /\[lasm dev\] Rebuilt in \d+\.\d s; reloading\n/);
    assert.ok(Number(/Rebuilt in (\d+\.\d) s/.exec(stderr.text())[1]) < 30);
    // The manifest that rebuild wrote is not a change either.
    event();
    await pause(200);
    assert.equal(state.calls.length, 2);

    // A change during a build: built after it.
    let open;
    gate = new Promise(done => { open = done; });
    writeFileSync(main, '-- 3\n');
    event();
    await until(() => state.calls.length === 3, 'the third build');
    writeFileSync(main, '-- 4\n');
    event();
    await pause(200);
    assert.equal(state.calls.length, 3);
    gate = null; open();
    assert.match((await nextEvent(reader)), /^event: reload\n/);
    await until(() => state.calls.length === 4, 'the queued build');
    assert.match((await nextEvent(reader)), /^event: reload\n/);

    // An error: printed, and its last 4000 characters reported to the page.
    stderr.reset();
    failure = Object.assign(new Error('ignored message'), { stderr: 'x'.repeat(5000) + '\nMain.lean:1:0: error: oops' });
    writeFileSync(main, '-- 5\n');
    event();
    const report = (await nextEvent(reader));
    const data = JSON.parse(/^event: error-report\ndata: (.*)\n\n$/.exec(report)[1]);
    assert.equal(data.length, 4000);
    assert.ok(data.endsWith(`${rel(main)}:1:0: error: oops\n    1 | -- 5\n      | ^`), data.slice(-200));
    assert.ok(stderr.text().includes(`${rel(main)}:1:0: error: oops`));
    failure = new Error('just a message');
    writeFileSync(main, '-- 6\n');
    event();
    assert.equal((await nextEvent(reader)), 'event: error-report\ndata: "just a message"\n\n');
    // Both of a failure's outputs, a line each.
    stderr.reset();
    failure = Object.assign(new Error('m'), { stdout: 'from stdout', stderr: 'from stderr' });
    writeFileSync(main, '-- 7\n');
    event();
    assert.equal((await nextEvent(reader)), 'event: error-report\ndata: "from stdout\\nfrom stderr"\n\n');
    assert.ok(stderr.text().includes('from stdout\nfrom stderr\n'), stderr.text());
    await server.close();
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

dtest('browser dev server: a failed first build without an earlier output stops; --release builds into dist; a busy port', async () => {
  await reset();
  const dir = project();
  state.port = 0;
  state.build = async () => { throw Object.assign(new Error('failed'), { stdout: 'Main.lean:1:0: error: no' }); };
  try {
    assert.equal(await runBrowserDev({ input: join(dir, 'Main.lean'), watch: true }), 1);
    assert.equal(state.services[0].closed, true);
    assert.equal(state.servers.length, 0);
    assert.ok(stderr.text().includes(`${rel(join(dir, 'Main.lean'))}:1:0: error: no`));
    // A failed first build with an earlier output: that output is served.
    await reset();
    state.port = 0;
    mkdirSync(join(dir, 'dist'));
    writeFileSync(join(dir, 'dist', 'index.html'), '<p>old</p>');
    state.build = async () => { throw new Error('failed'); };
    runBrowserDev({ input: join(dir, 'Main.lean'), release: true, watch: false });
    await until(() => state.servers.length === 1, 'the server of the old output');
    assert.deepEqual(state.calls[0].options, { profile: 'release', output: join(dir, 'dist') });
    assert.equal(state.serverOptions.liveReload, false);
    assert.equal(state.watchers.length, 0, '--no-watch watches nothing');
    assert.ok(stderr.text().includes(`at ${state.servers[0].url}\n`), 'no rebuild note without watching');
    assert.equal(await (await fetch(state.servers[0].url, { headers: { connection: 'close' } })).text(), '<p>old</p>');
    // The port is taken: the build worker is stopped and the error is the listen error.
    await state.servers[0].close();
    await reset();
    const busy = await (await import('../src/browser/static-server.mjs')).startStaticServer(dir);
    state.port = busy.port;
    state.build = async call => { mkdirSync(call.options.output, { recursive: true }); writeFileSync(join(call.options.output, 'index.html'), ''); return {}; };
    try {
      await assert.rejects(runBrowserDev({ input: join(dir, 'Main.lean'), output: join(dir, 'custom'), watch: true }), /already in use/);
      assert.equal(state.services[0].closed, true);
      assert.equal(state.calls[0].options.output, join(dir, 'custom'));
    } finally { await busy.close(); }
    await assert.rejects(runBrowserDev({ input: join(dir, 'Nope.lean') }), new RegExp(`^Error: ${join(dir, 'Nope.lean').replace(/[.]/g, '\\.')} does not exist$`));
  } finally {
    for (const server of state.servers) await server.close();
    rmSync(dir, { recursive: true, force: true });
  }
});
