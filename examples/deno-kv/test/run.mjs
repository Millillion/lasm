// Builds examples/deno-kv with an installed @lasm/cli for --target deno, runs it with Deno
// (--unstable-kv, a fresh database file) and checks its API over HTTP: todos added are listed
// in id order, a deleted one is gone, 20 concurrent POSTs get 20 distinct ids (the atomic
// counter), and unknown paths are 404. Run by web-bindings.yml (deno-conformance).
//
//   node examples/deno-kv/test/run.mjs --lasm PATH/bin/lasm.mjs --deno PATH --work DIR
import { spawn, spawnSync } from 'node:child_process';
import { cpSync, mkdirSync, rmSync } from 'node:fs';
import { createServer } from 'node:net';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { parseArgs } from 'node:util';
import assert from 'node:assert/strict';

const { values } = parseArgs({ options: { lasm: { type: 'string' }, deno: { type: 'string', default: 'deno' }, work: { type: 'string' } } });
const example = fileURLToPath(new URL('..', import.meta.url));
const work = resolve(values.work);
rmSync(work, { recursive: true, force: true });
mkdirSync(work, { recursive: true });
cpSync(join(example, 'Main.lean'), join(work, 'Main.lean'));
cpSync(join(example, 'lean-toolchain'), join(work, 'lean-toolchain'));
const env = { ...process.env, CI: '1', BROWSER: 'none', NO_COLOR: '1' };
const b = spawnSync(process.execPath, [resolve(values.lasm), 'build', 'Main.lean', '--target', 'deno'], { cwd: work, env, stdio: 'inherit' });
if (b.status !== 0) { console.error('lasm build failed'); process.exit(1); }

const port = await new Promise((ok, fail) => { const s = createServer(); s.once('error', fail); s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => ok(port)); }); });
const child = spawn(values.deno, ['run', '-A', '--no-lock', '--unstable-kv', 'deno/main.mjs'], { cwd: work, env: { ...env, PORT: String(port), KV_PATH: join(work, 'kv.sqlite') }, stdio: 'inherit' });
const base = `http://127.0.0.1:${port}`;
try {
  for (let i = 0; ; i++) {
    try { await fetch(`${base}/todos`); break; } catch (e) { if (i > 300) throw e; await new Promise(r => setTimeout(r, 100)); }
  }
  const post = async title => { const r = await fetch(`${base}/todos`, { method: 'POST', body: title }); assert.equal(r.status, 201); return r.json(); };
  assert.deepEqual(await (await fetch(`${base}/todos`)).json(), []);
  const titles = ['milk', 'ünïcödé ✓', 'a "quoted" title'];
  const made = [];
  for (const t of titles) made.push(await post(t));
  assert.deepEqual(made.map(m => m.title), titles);
  assert.deepEqual(made.map(m => m.id), [1, 2, 3]);
  assert.deepEqual(await (await fetch(`${base}/todos`)).json(), made);
  assert.equal((await fetch(`${base}/todos/2`, { method: 'DELETE' })).status, 200);
  assert.deepEqual(await (await fetch(`${base}/todos`)).json(), [made[0], made[2]]);
  // Concurrent POSTs: the atomic counter gives every one its own id.
  const many = await Promise.all(Array.from({ length: 20 }, (_, i) => post(`c${i}`)));
  assert.equal(new Set(many.map(m => m.id)).size, 20);
  assert.deepEqual(many.map(m => m.id).sort((a, b) => a - b), Array.from({ length: 20 }, (_, i) => i + 4));
  assert.equal((await fetch(`${base}/nope`)).status, 404);
  assert.equal((await fetch(`${base}/todos/x`, { method: 'DELETE' })).status, 400);
  console.log('examples/deno-kv: all checks passed');
} finally {
  child.kill('SIGTERM');
}
