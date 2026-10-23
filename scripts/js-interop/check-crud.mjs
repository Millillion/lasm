// Exercises the examples/js-crud API (Lean on Express or Hono, Postgres via pg,
// JWT via jose) in a built deployment. Needs DATABASE_URL (a Postgres server).
//   node check-crud.mjs DIST [LABEL]
// Prints one JSON line with every check; exits 1 if any check fails.
import assert from 'node:assert/strict';
import { spawn } from 'node:child_process';
import { join, resolve } from 'node:path';
import { randomUUID } from 'node:crypto';

const [distArg, label = distArg] = process.argv.slice(2);
assert.ok(distArg && process.env.DATABASE_URL, 'Usage: DATABASE_URL=… node check-crud.mjs DIST [LABEL]');
const dist = resolve(distArg);
const started = performance.now();
const child = spawn(process.execPath, [join(dist, 'main.mjs')], {
  env: { ...process.env, PORT: '0', JWT_SECRET: 'lasm check secret ' + randomUUID() }, stdio: ['ignore', 'pipe', 'pipe'] });
let stdout = '', stderr = '';
child.stderr.on('data', bytes => { stderr += bytes; });
const port = await new Promise((done, fail) => {
  const timer = setTimeout(() => fail(new Error(`no Listening line within 120 s: ${stderr.slice(-2000)}`)), 120_000);
  child.stdout.on('data', bytes => {
    stdout += bytes;
    const match = stdout.match(/Listening on http:\/\/[^\s:]+:(\d+)/);
    if (match) { clearTimeout(timer); done(Number(match[1])); }
  });
  child.once('exit', code => { clearTimeout(timer); fail(new Error(`exited ${code}: ${stderr.slice(-2000)}`)); });
});
const startupMs = Math.round(performance.now() - started);
const base = `http://127.0.0.1:${port}`;
const call = async (method, path, { body, token } = {}) => {
  const response = await fetch(base + path, { method, headers: { ...(body ? { 'content-type': 'application/json' } : {}),
    ...(token ? { authorization: `Bearer ${token}` } : {}) }, body: body === undefined ? undefined : JSON.stringify(body) });
  const text = await response.text();
  let json; try { json = JSON.parse(text); } catch { json = text; }
  return { status: response.status, json };
};
const checks = [];
const check = async (name, action) => {
  try { await action(); checks.push({ name, ok: true }); }
  catch (error) { checks.push({ name, ok: false, error: error.message }); }
};
let token;
const user = 'user-' + randomUUID();
await check('health', async () => assert.deepEqual(await call('GET', '/health'), { status: 200, json: { ok: true } }));
await check('todos without a token are 401', async () => assert.equal((await call('GET', '/todos')).status, 401));
await check('login issues a JWT', async () => {
  const r = await call('POST', '/login', { body: { user } });
  assert.equal(r.status, 200); token = r.json.token; assert.match(token, /^[\w-]+\.[\w-]+\.[\w-]+$/);
});
await check('a forged token is 401', async () => assert.equal((await call('GET', '/todos', { token: token.slice(0, -2) + 'xx' })).status, 401));
await check('create a todo (201)', async () => {
  const r = await call('POST', '/todos', { token, body: { title: 'write Lean' } });
  assert.equal(r.status, 201); assert.equal(r.json.title, 'write Lean'); assert.equal(r.json.done, false); assert.ok(Number.isInteger(r.json.id));
});
await check('invalid body is 400', async () => assert.equal((await call('POST', '/todos', { token, body: { name: 1 } })).status, 400));
await check('list todos of this user', async () => {
  await call('POST', '/todos', { token, body: { title: 'ship it' } });
  const r = await call('GET', '/todos', { token });
  assert.equal(r.status, 200); assert.deepEqual(r.json.map(todo => todo.title), ['write Lean', 'ship it']);
});
await check('unknown route is 404', async () => assert.equal((await call('GET', '/nope')).status, 404));
// A short concurrent load on an authenticated database route.
let load;
await check('16 concurrent clients, 2 s', async () => {
  let count = 0, errors = 0, stop = false;
  const t0 = performance.now();
  setTimeout(() => { stop = true; }, 2000);
  await Promise.all(Array.from({ length: 16 }, async () => {
    while (!stop) { const r = await call('GET', '/todos', { token }); if (r.status === 200) count++; else errors++; }
  }));
  load = { requests: count, errors, rps: Math.round(count / ((performance.now() - t0) / 1000)) };
  assert.equal(errors, 0);
});
child.kill('SIGTERM');
const ok = checks.every(c => c.ok);
console.log(JSON.stringify({ app: label, ok, startupMs, checks, load, platform: `${process.platform}-${process.arch}`, node: process.version,
  ...(ok ? {} : { stderr: stderr.slice(-3000) }) }));
process.exit(ok ? 0 : 1);
