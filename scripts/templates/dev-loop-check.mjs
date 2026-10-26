// `lasm dev` end to end on a server template project (docs/DEVELOPER_WORKFLOW.md):
// start `npm run dev`, answer requests, edit App.lean and see the new answer
// after the rebuild and restart, break the build and keep the last good server,
// fix it, stop with SIGINT. Prints the measured rebuild times as JSON.
//   node dev-loop-check.mjs APP_DIR FRAMEWORK [COMMAND...]
// COMMAND defaults to `npm run dev`; the app must have its npm packages installed.
import assert from 'node:assert/strict';
import { spawn } from 'node:child_process';
import { readFileSync, renameSync, writeFileSync } from 'node:fs';
import net from 'node:net';
import { dirname, join, resolve } from 'node:path';

const [appArg, framework, ...commandArgs] = process.argv.slice(2);
assert.ok(appArg && framework, 'Usage: node dev-loop-check.mjs APP_DIR FRAMEWORK [COMMAND...]');
const app = resolve(appArg);
const npm = process.platform === 'win32' ? [process.execPath, join(dirname(process.execPath), 'node_modules/npm/bin/npm-cli.js')] : [join(dirname(process.execPath), 'npm')];
const [command, ...args] = commandArgs.length ? commandArgs : [...npm, 'run', 'dev'];
const port = await new Promise((done, fail) => {
  const server = net.createServer(); server.once('error', fail);
  server.listen(0, '127.0.0.1', () => { const { port } = server.address(); server.close(() => done(port)); });
});
const base = `http://127.0.0.1:${port}`;
const output = { text: '' };
const child = spawn(command, args, { cwd: app, stdio: ['pipe', 'pipe', 'pipe'],
  env: { ...process.env, HOST: '127.0.0.1', PORT: String(port), NO_COLOR: '1' }, detached: process.platform !== 'win32' });
child.stdout.on('data', b => { output.text += b; process.stdout.write(b); });
child.stderr.on('data', b => { output.text += b; process.stderr.write(b); });
const exited = new Promise(done => child.once('exit', (code, signal) => done({ code, signal })));

/** Wait until `pattern` matches output written after `from`; returns the match. */
async function waitFor(pattern, from, timeoutMs = 600_000) {
  const deadline = Date.now() + timeoutMs;
  for (;;) {
    const match = pattern.exec(output.text.slice(from));
    if (match) return match;
    if (child.exitCode !== null) throw new Error(`lasm dev exited (${child.exitCode}) before ${pattern}:\n${output.text.slice(-4000)}`);
    if (Date.now() > deadline) throw new Error(`No ${pattern} within ${timeoutMs} ms:\n${output.text.slice(-4000)}`);
    await new Promise(done => setTimeout(done, 100));
  }
}
const get = async path => {
  const response = await fetch(base + path, { signal: AbortSignal.timeout(30_000) });
  return { status: response.status, body: JSON.parse(await response.text()) };
};
const appLean = join(app, 'App.lean'), original = readFileSync(appLean, 'utf8');
const result = { framework, rebuilds: [] };
try {
  let mark = 0;
  await waitFor(/Listening on http:\/\/127\.0\.0\.1:\d+/, mark);
  result.firstBuild = Number((/Built in ([\d.]+) s/.exec(output.text) ?? [])[1]);
  assert.deepEqual((await get('/hello/Ada')).body, { message: 'Hello, Ada, from Lean!' });
  // The first build's own files (Lake's new lake-manifest.json) start no second build.
  await new Promise(done => setTimeout(done, 3000));
  assert.doesNotMatch(output.text, /lake-manifest\.json changed/, 'no rebuild for the build\'s own lake-manifest.json');
  // Three ordinary edits: each must rebuild, restart and answer with the new text.
  for (const [index, greeting] of ['Hi', 'Hey', 'Hello again'].entries()) {
    mark = output.text.length;
    const before = performance.now();
    writeFileSync(appLean, original.replace('s!"Hello, {name}, from Lean!"', `s!"${greeting}, {name}, from Lean!"`));
    const built = await waitFor(/(?:Built|Up to date) in ([\d.]+) s(?: \(([^)]*)\))?/, mark);
    await waitFor(/Listening on http:\/\/127\.0\.0\.1:\d+/, mark);
    const served = performance.now() - before;
    assert.deepEqual((await get('/hello/Ada')).body, { message: `${greeting}, Ada, from Lean!` }, `edit ${index + 1}`);
    result.rebuilds.push({ edit: index + 1, buildSeconds: Number(built[1]), stages: built[2] ?? '', editToListeningSeconds: +(served / 1000).toFixed(2) });
  }
  // Three saves the way Vim, JetBrains' safe write, sed -i and many formatters
  // save: write a temporary file, rename it over App.lean. Every one must rebuild
  // (Node's recursive watcher on Linux stopped seeing the file after the first).
  for (const [index, greeting] of ['Saved by rename', 'Renamed again', 'And again'].entries()) {
    mark = output.text.length;
    const before = performance.now();
    const temporary = join(app, `.App.lean.${index}.swp`);
    writeFileSync(temporary, original.replace('s!"Hello, {name}, from Lean!"', `s!"${greeting}, {name}, from Lean!"`));
    renameSync(temporary, appLean);
    const built = await waitFor(/(?:Built|Up to date) in ([\d.]+) s(?: \(([^)]*)\))?/, mark, 120_000);
    await waitFor(/Listening on http:\/\/127\.0\.0\.1:\d+/, mark);
    assert.deepEqual((await get('/hello/Ada')).body, { message: `${greeting}, Ada, from Lean!` }, `rename save ${index + 1}`);
    result.rebuilds.push({ edit: `rename ${index + 1}`, buildSeconds: Number(built[1]), stages: built[2] ?? '', editToListeningSeconds: +((performance.now() - before) / 1000).toFixed(2) });
  }
  // A type error: the build fails with the Lean diagnostic and the last good server keeps answering.
  mark = output.text.length;
  writeFileSync(appLean, original.replace('s!"Hello, {name}, from Lean!"', '(42 : Nat)'));
  await waitFor(/Build failed/, mark);
  const failure = output.text.slice(mark);
  assert.match(failure, /App\.lean:\d+:\d+: error/, 'the error names the file and line');
  assert.deepEqual((await get('/hello/Ada')).body, { message: 'And again, Ada, from Lean!' }, 'the last good server keeps running');
  result.errorReport = failure.slice(0, 2000);
  mark = output.text.length;
  writeFileSync(appLean, original);
  await waitFor(/Built in|Up to date in/, mark);
  await waitFor(/Listening on http:\/\/127\.0\.0\.1:\d+/, mark);
  assert.deepEqual((await get('/hello/Ada')).body, { message: 'Hello, Ada, from Lean!' });
  result.passed = true;
} finally {
  writeFileSync(appLean, original);
  try { process.platform === 'win32' ? child.kill('SIGINT') : process.kill(-child.pid, 'SIGINT'); } catch { /* exited */ }
  const stopped = await Promise.race([exited, new Promise(done => setTimeout(() => done('timeout'), 20_000))]);
  if (stopped === 'timeout') { try { process.kill(-child.pid, 'SIGKILL'); } catch { child.kill('SIGKILL'); } }
  result.stop = stopped;
}
assert.notEqual(result.stop, 'timeout', 'lasm dev stops on SIGINT');
// The port is free again: the program was stopped with lasm dev.
await new Promise((done, fail) => { const server = net.createServer(); server.once('error', fail); server.listen(port, '127.0.0.1', () => server.close(done)); });
console.log(JSON.stringify(result, null, 2));
