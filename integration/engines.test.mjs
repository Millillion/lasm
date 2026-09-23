import test from 'node:test';
import assert from 'node:assert/strict';
import { spawn } from 'node:child_process';
import { mkdtemp, cp, rm, readFile } from 'node:fs/promises';
import { existsSync, realpathSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { buildMain } from '../src/main.mjs';
import { root } from '../src/toolchain.mjs';

const cached = (name, path) => process.env[`LASM_${name.toUpperCase()}`]
  ?? (existsSync(join(root, path)) ? join(root, path) : name);
const engines = {
  node: { executable: process.execPath, prefix: [] },
  deno: { executable: cached('deno', '.cache/js-runtimes/deno-2.9.7/deno'), prefix: ['run', '--allow-all'] },
  bun: { executable: cached('bun', '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), prefix: [] },
};
const selected = (process.env.LASM_TEST_ENGINES ?? 'node,deno,bun').split(',');
for (const name of selected) assert.ok(engines[name], `Unknown engine: ${name}`);

function execute(engine, args, options = {}) {
  return new Promise((resolve, reject) => {
    const child = spawn(engine.executable, [...engine.prefix, ...args], { ...options, stdio: ['ignore', 'pipe', 'pipe'] });
    let stdout = '', stderr = '';
    const timer = setTimeout(() => { child.kill('SIGKILL'); reject(new Error(`Engine deadline exceeded: ${stderr.slice(-2000)}`)); }, 600_000);
    child.stdout.on('data', bytes => { stdout += bytes; });
    child.stderr.on('data', bytes => { stderr += bytes; });
    child.once('error', error => { clearTimeout(timer); reject(error); });
    child.once('close', (code, signal) => { clearTimeout(timer); resolve({ code, signal, stdout, stderr }); });
  });
}

// Preserve the earlier callable-runtime regression independently of the current
// public filename launchers, whose managed AOT checks live in managed-lake-dependency.
const legacyLauncher = join(root, 'test/fixtures/legacy-main-launcher.mjs');
for (const name of selected) test(`${name}: legacy Lean 4.32 main, Unicode arguments, ordinary IO, tasks, errors and cached execution`, { timeout: 650_000 }, async t => {
  const directory = await mkdtemp(join(tmpdir(), `lasm-${name}-日本語 `));
  t.after(() => rm(directory, { recursive: true, force: true }));
  const source = join(directory, 'Main.lean');
  await cp(join(root, 'test/fixtures/engine-main/Main.lean'), source);
  const data = join(directory, 'data');
  const args = [legacyLauncher, source, data, 'λ 日本語', '', 'a b'];
  for (let run = 0; run < 2; run++) {
    const result = await execute(engines[name], args, { cwd: root });
    assert.equal(result.code, 7, result.stderr);
    assert.equal(result.signal, null);
    const lines = result.stdout.trimEnd().split('\n');
    assert.equal(realpathSync(lines[0]), realpathSync(engines[name].executable));
    assert.equal(lines[1], 'λ 日本語||a b:42');
    if (run === 1) assert.doesNotMatch(result.stderr, /Building /);
    assert.equal(existsSync(join(data, 'roundtrip.txt')), false);
  }
  const failure = await execute(engines[name], [legacyLauncher, source, data, 'fail'], { cwd: root });
  assert.equal(failure.code, 1);
  assert.equal(failure.stderr.trim(), 'uncaught exception: ordinary failure λ');
});

let serverArtifact;
async function artifact() {
  return serverArtifact ??= buildMain(join(root, 'examples/lean-server/Main.lean'));
}
for (const name of selected) test(`${name}: ordinary Lean HTTP, concurrent persistence, binary bodies, streaming and shutdown`, { timeout: 650_000 }, async t => {
  const built = await artifact();
  const directory = await mkdtemp(join(tmpdir(), `lasm-http-${name}-`));
  const engine = engines[name];
  const child = spawn(engine.executable, [...engine.prefix, join(built.output, 'main.mjs'), '0', directory], { stdio: ['ignore', 'pipe', 'pipe'] });
  let stdout = '', stderr = '';
  child.stderr.on('data', bytes => { stderr += bytes; });
  const exited = new Promise((resolve, reject) => { child.once('error', reject); child.once('close', (code, signal) => resolve({ code, signal })); });
  t.after(async () => { if (child.exitCode === null && !child.signalCode) child.kill('SIGKILL'); await exited; await rm(directory, { recursive: true, force: true }); });
  const base = await new Promise((resolve, reject) => {
    const timer = setTimeout(() => reject(new Error(`HTTP startup deadline: ${stderr}`)), 30_000);
    exited.then(result => { clearTimeout(timer); reject(new Error(`Early server exit ${JSON.stringify(result)}: ${stderr}`)); }, reject);
    child.stdout.on('data', bytes => {
      stdout += bytes;
      const match = stdout.match(/http:\/\/127\.0\.0\.1:\d+/);
      if (match) { clearTimeout(timer); resolve(match[0]); }
    });
  });
  const request = (path, options = {}) => fetch(base + path, { ...options, signal: AbortSignal.timeout(15_000) });
  assert.deepEqual(await (await request('/health')).json(), { ok: true });
  const created = await Promise.all(Array.from({ length: 12 }, async (_, i) => {
    const response = await request('/todos', { method: 'POST', headers: { 'content-type': 'application/json' }, body: JSON.stringify({ title: `${i} λ 日本語` }) });
    assert.equal(response.status, 201); return response.json();
  }));
  assert.equal(new Set(created.map(x=>x.id)).size, 12);
  const disk = JSON.parse(await readFile(join(directory, 'todos.json'), 'utf8'));
  assert.equal(disk.todos.length, 12);
  const bytes = Uint8Array.from([0, 255, 128, 13, 10]);
  assert.deepEqual(new Uint8Array(await (await request('/echo', { method: 'POST', body: bytes })).arrayBuffer()), bytes);
  assert.equal(await (await request('/events')).text(), 'data: 0\n\ndata: 1\n\ndata: 2\n\n');
  const shutdown = await request('/shutdown', { method: 'POST' });
  assert.equal(shutdown.status, 200); await shutdown.arrayBuffer();
  const timer = setTimeout(() => child.kill('SIGKILL'), 10_000);
  const result = await exited; clearTimeout(timer);
  assert.deepEqual(result, { code: 0, signal: null }, stderr);
  assert.match(stdout, /Server stopped/);
});
